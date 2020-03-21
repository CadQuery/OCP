#pragma once
#include <Standard_Handle.hxx>
#include <type_traits>
#include <memory>

namespace py = pybind11;

PYBIND11_DECLARE_HOLDER_TYPE(T, opencascade::handle<T>, true);

using opencascade::handle;

template <typename CppException>
void register_occ_exception(py::handle scope,
                        const char *name){
    
    static py::exception<CppException> ex;
    if (!ex) ex = py::exception<CppException>(scope, name);

    py::register_exception_translator([](std::exception_ptr p) {
        if (!p) return;
        try {
            std::rethrow_exception(p);
        } catch (const CppException &e) {
            ex(e.GetMessageString());
        }
    });    
};


template <typename T, typename Ptr>
inline void register_default_constructor(py::module m, const char* name){

    if constexpr (std::is_constructible<T>::value){
        static_cast<py::class_<T ,Ptr>>(m.attr(name))
            .def(py::init([]() { return new T; }));
    }

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

PYBIND11_DECLARE_HOLDER_TYPE(T, shared_ptr<T>, true);
PYBIND11_DECLARE_HOLDER_TYPE(T, shared_ptr_nodelete<T>, true);