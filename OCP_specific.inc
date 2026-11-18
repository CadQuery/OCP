#pragma once
#include <Standard_Handle.hxx>
#include <type_traits>
#include <memory>
#include <fmt/format.h>
#include <sstream>
#include <string>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <vector>

namespace py = pybind11;

PYBIND11_DECLARE_HOLDER_TYPE(T, opencascade::handle<T>, true);

using opencascade::handle;

template <typename CppException>
void register_occ_exception(py::handle scope,
                        const char *name){

    py::register_exception<CppException>(scope, name);
};


template <typename T, typename Ptr>
inline void register_default_constructor(py::module m, const char* name){

    if constexpr (std::is_constructible<T>::value){
        static_cast<py::class_<T ,Ptr>>(m.attr(name))
            .def(py::init([]() { return new T; }));
    }

};

template <typename T>
inline void copy_if_assignable(T& t1, T& t2){

    if constexpr (std::is_assignable<T, T>::value){
        t1 = t2;
    }
    else
    {
        throw py::type_error("Cannot assign, function wrapper not working properly.");
    }

};

template <typename T> inline opencascade::handle<T> cast_pyobject(const py::object &arg){
  if(py::isinstance(arg, py::type::of<T>()))
      return opencascade::handle(py::cast<T*>(arg));
  else
      throw py::value_error(fmt::format("Cannot convert the argument to the required type {}", typeid(T).name()));
};

template<typename T, template<typename> typename Deleter = std::default_delete>
struct shared_ptr : public std::shared_ptr<T>{
    explicit shared_ptr(T* t = nullptr) : std::shared_ptr<T>(t, Deleter<T>()) {};
    void reset(T* t = nullptr) { std::shared_ptr<T>::reset(t, Deleter<T>());  };
};

template<typename T> struct nodelete{
    void operator()(T* p) const {};
};

template<typename T> using shared_ptr_nodelete = shared_ptr<T,nodelete>;

PYBIND11_DECLARE_HOLDER_TYPE(T, shared_ptr<T>);
PYBIND11_DECLARE_HOLDER_TYPE(T, shared_ptr_nodelete<T>);

// Phase 1 (register_<mod>_enums: types) runs for every package at import; phase 2 (register_<mod>:
// members) runs on first use of the package, after the packages owning its base classes.
namespace lazy {

using reg_fn = void (*)(py::module &);

struct desc {            // one row per package, emitted by template_main.j2
    const char *name;
    reg_fn enums;
    reg_fn members;
    const char *deps;    // "Standard,gp"
};

struct entry {
    const desc *d;
    std::vector<PyObject *> mods;      // the package submodule and its namespace submodules
    std::vector<PyObject *> hidden;    // their phase-1 dicts
    std::vector<entry *> deps;
    enum { fresh, loading, done } state = fresh;
};

struct registry {
    PyObject *main = nullptr;
    std::vector<entry> entries;
    std::unordered_map<std::type_index, entry *> by_type;
    int depth = 0;
};

inline registry &reg() { static registry r; return r; }

inline bool is_meta(PyObject *name) {
    Py_ssize_t n = PyUnicode_GET_LENGTH(name);
    return n > 4 && PyUnicode_READ_CHAR(name, 0) == '_' && PyUnicode_READ_CHAR(name, 1) == '_'
           && PyUnicode_READ_CHAR(name, n - 1) == '_' && PyUnicode_READ_CHAR(name, n - 2) == '_'
           && PyUnicode_CompareWithASCIIString(name, "__all__") != 0;
}

// no cast may load another package meanwhile, and no finalizer may release the GIL
struct registering {
    int gc;
    registering() : gc(PyGC_Disable()) { ++reg().depth; }
    ~registering() { --reg().depth; if (gc) PyGC_Enable(); }
};

inline void ensure(entry &e) {
    if (e.state != entry::fresh) return;
    e.state = entry::loading;
    registering guard;
    for (entry *dep : e.deps) ensure(*dep);
    for (std::size_t i = 0; i < e.mods.size(); ++i) {
        PyObject *d = PyModule_GetDict(e.mods[i]);
        PyDict_DelItemString(d, "__getattr__");
        PyDict_DelItemString(d, "__dir__");
        if (PyDict_Update(d, e.hidden[i]) < 0) throw py::error_already_set();
        Py_CLEAR(e.hidden[i]);
    }
    py::module m = py::reinterpret_borrow<py::module>(reg().main);
    e.d->members(m);
    e.state = entry::done;
}

inline void load_owner(const std::type_info &t) {
    auto it = reg().by_type.find(t);
    if (it != reg().by_type.end()) ensure(*it->second);
}

inline void on_cast(const std::type_info &static_type, const std::type_info *dynamic_type) {
    if (reg().depth > 0 || reg().by_type.empty()) return;
    load_owner(static_type);
    if (dynamic_type && *dynamic_type != static_type) load_owner(*dynamic_type);
}

inline void hide(entry &e, PyObject *mod) {
    Py_INCREF(mod);
    e.mods.push_back(mod);
    PyObject *d = PyModule_GetDict(mod);
    PyObject *hidden = PyDict_Copy(d);
    if (!hidden) throw py::error_already_set();
    e.hidden.push_back(hidden);
    std::vector<PyObject *> nested;
    Py_ssize_t pos = 0;
    PyObject *k, *v;
    while (PyDict_Next(hidden, &pos, &k, &v)) {
        if (is_meta(k)) continue;
        if (PyModule_Check(v)) nested.push_back(v);
        else if (PyType_Check(v))
            if (auto *ti = py::detail::get_type_info(reinterpret_cast<PyTypeObject *>(v))) reg().by_type.emplace(*ti->cpptype, &e);
        PyDict_DelItem(d, k);
    }
    py::cpp_function getattr_hook([&e, mod](py::str name) -> py::object {
        if (is_meta(name.ptr())) {
            PyErr_Format(PyExc_AttributeError, "module '%U' has no attribute '%U'", py::handle(mod).attr("__name__").ptr(), name.ptr());
            throw py::error_already_set();
        }
        ensure(e);
        PyObject *res = PyObject_GetAttr(mod, name.ptr());
        if (!res) throw py::error_already_set();
        return py::reinterpret_steal<py::object>(res);
    });
    py::cpp_function dir_hook([&e, mod]() -> py::object {
        ensure(e);
        PyObject *res = PyObject_Dir(mod);
        if (!res) throw py::error_already_set();
        return py::reinterpret_steal<py::object>(res);
    });
    // the hooks outlive their dict entry: CPython calls them through a borrowed reference
    PyDict_SetItemString(d, "__getattr__", getattr_hook.release().ptr());
    PyDict_SetItemString(d, "__dir__", dir_hook.release().ptr());
    for (PyObject *n : nested) hide(e, n);
}

template <std::size_t N>
inline void install(py::module &main, const desc (&table)[N]) {
    registry &r = reg();
    r.main = main.ptr();
    r.entries.reserve(N);
    std::unordered_map<std::string, entry *> by_name;
    for (const desc &d : table) {
        r.entries.push_back({&d});
        by_name[d.name] = &r.entries.back();
    }
    for (entry &e : r.entries) {
        std::istringstream in(e.d->deps);
        for (std::string dep; std::getline(in, dep, ',');) e.deps.push_back(by_name.at(dep));
    }
    main.def("_load_all", []() { for (entry &e : reg().entries) ensure(e); },
             "Register the members of every OCP package now; OCP_LAZY=0 in the environment does it at import.");

    if (py::module::import("os").attr("environ").attr("get")("OCP_LAZY", "").cast<std::string>() == "0") {
        for (entry &e : r.entries) { e.d->members(main); e.state = entry::done; }
        return;
    }
    for (entry &e : r.entries) hide(e, main.attr(e.d->name).ptr());
}

} // namespace lazy

// every C++ -> Python cast of a class instance passes here first
namespace pybind11 {
template <typename T>
struct polymorphic_type_hook<T, void> {
    static const void *get(const T *src, const std::type_info *&type) {
        const void *res = polymorphic_type_hook_base<T>::get(src, type);
        if (src) lazy::on_cast(typeid(T), type);
        return res;
    }
};
} // namespace pybind11

#include "pystreambuf.h"
