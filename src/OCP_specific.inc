#pragma once
#include <Standard_Handle.hxx>
#include <type_traits>

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
}


template <typename T, typename Ptr>
inline void register_default_constructor(py::module m, const char* name){

    if constexpr (std::is_constructible<T>::value){
        static_cast<py::class_<T ,Ptr>>(m.attr(name))
            .def(py::init([]() { return new T; }));
    }

}