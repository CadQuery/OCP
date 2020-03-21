
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Geom2d_Curve.hxx>
#include <LProp_CurAndInf.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <Geom2dLProp_Curve2dTool.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <Geom2dLProp_CLProps2d.hxx>
#include <Geom2dLProp_CurAndInf2d.hxx>
#include <Geom2dLProp_Curve2dTool.hxx>
#include <Geom2dLProp_FuncCurExt.hxx>
#include <Geom2dLProp_FuncCurNul.hxx>
#include <Geom2dLProp_NumericCurInf2d.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dLProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dLProp"));


//Python trampoline classes

// classes


    static_cast<py::class_<Geom2dLProp_CLProps2d , shared_ptr<Geom2dLProp_CLProps2d> >>(m.attr("Geom2dLProp_CLProps2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dLProp_CurAndInf2d , shared_ptr<Geom2dLProp_CurAndInf2d> , LProp_CurAndInf>>(m.attr("Geom2dLProp_CurAndInf2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Geom2dLProp_Curve2dTool , shared_ptr<Geom2dLProp_Curve2dTool>>(m,"Geom2dLProp_Curve2dTool");

    static_cast<py::class_<Geom2dLProp_Curve2dTool , shared_ptr<Geom2dLProp_Curve2dTool> >>(m.attr("Geom2dLProp_Curve2dTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dLProp_FuncCurExt , shared_ptr<Geom2dLProp_FuncCurExt> , math_FunctionWithDerivative>>(m.attr("Geom2dLProp_FuncCurExt"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real , Standard_Real & ) >(&Geom2dLProp_FuncCurExt::Value),
             R"#(Returns the value for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real , Standard_Real & ) >(&Geom2dLProp_FuncCurExt::Derivative),
             R"#(Returns the derivative for the variable <X>.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurExt::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Geom2dLProp_FuncCurExt::Values),
             R"#(Returns the value of the function and the derivative for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dLProp_FuncCurNul , shared_ptr<Geom2dLProp_FuncCurNul> , math_FunctionWithDerivative>>(m.attr("Geom2dLProp_FuncCurNul"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real , Standard_Real & ) >(&Geom2dLProp_FuncCurNul::Value),
             R"#(Returns the value for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real , Standard_Real & ) >(&Geom2dLProp_FuncCurNul::Derivative),
             R"#(Returns the derivative for the variable <X>)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dLProp_FuncCurNul::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Geom2dLProp_FuncCurNul::Values),
             R"#(Returns the value of the function and the derivative for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dLProp_NumericCurInf2d , shared_ptr<Geom2dLProp_NumericCurInf2d> >>(m.attr("Geom2dLProp_NumericCurInf2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Geom2dLProp_Curve2dTool.hxx
// ./opencascade/Geom2dLProp_NumericCurInf2d.hxx
// ./opencascade/Geom2dLProp_CurAndInf2d.hxx
// ./opencascade/Geom2dLProp_FuncCurExt.hxx
// ./opencascade/Geom2dLProp_CLProps2d.hxx
// ./opencascade/Geom2dLProp_FuncCurNul.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
