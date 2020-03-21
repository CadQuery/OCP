
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <CSLib_Class2d.hxx>
#include <CSLib_NormalPolyDef.hxx>

// module includes
#include <CSLib.hxx>
#include <CSLib_Class2d.hxx>
#include <CSLib_DerivativeStatus.hxx>
#include <CSLib_NormalPolyDef.hxx>
#include <CSLib_NormalStatus.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_CSLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("CSLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<CSLib , shared_ptr<CSLib>>(m,"CSLib");

    static_cast<py::class_<CSLib , shared_ptr<CSLib> >>(m.attr("CSLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CSLib_Class2d , shared_ptr<CSLib_Class2d> >>(m.attr("CSLib_Class2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CSLib_NormalPolyDef , shared_ptr<CSLib_NormalPolyDef> , math_FunctionWithDerivative>>(m.attr("CSLib_NormalPolyDef"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real , Standard_Real & ) >(&CSLib_NormalPolyDef::Value),
             R"#(computes the value <F>of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real , Standard_Real & ) >(&CSLib_NormalPolyDef::Derivative),
             R"#(computes the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (CSLib_NormalPolyDef::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&CSLib_NormalPolyDef::Values),
             R"#(computes the value <F> and the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/CSLib.hxx
// ./opencascade/CSLib_NormalPolyDef.hxx
// ./opencascade/CSLib_Class2d.hxx
// ./opencascade/CSLib_NormalStatus.hxx
// ./opencascade/CSLib_DerivativeStatus.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
