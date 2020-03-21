
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Hatch_Hatcher.hxx>
#include <Hatch_Line.hxx>
#include <Hatch_Hatcher.hxx>

// module includes
#include <Hatch_Hatcher.hxx>
#include <Hatch_Line.hxx>
#include <Hatch_LineForm.hxx>
#include <Hatch_Parameter.hxx>
#include <Hatch_SequenceOfLine.hxx>
#include <Hatch_SequenceOfParameter.hxx>

// template related includes
// ./opencascade/Hatch_SequenceOfParameter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Hatch_SequenceOfLine.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Hatch(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Hatch"));


//Python trampoline classes

// classes


    static_cast<py::class_<Hatch_Hatcher , shared_ptr<Hatch_Hatcher> >>(m.attr("Hatch_Hatcher"))
    // constructors
    // custom constructors
    // methods
        .def("Tolerance",
             (void (Hatch_Hatcher::*)( const Standard_Real ) ) static_cast<void (Hatch_Hatcher::*)( const Standard_Real ) >(&Hatch_Hatcher::Tolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("Tolerance",
             (Standard_Real (Hatch_Hatcher::*)() const) static_cast<Standard_Real (Hatch_Hatcher::*)() const>(&Hatch_Hatcher::Tolerance),
             R"#(None)#" )
        .def("IsXLine",
             (Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::IsXLine),
             R"#(Returns True if the line of index <I> has a constant X value.)#"  , py::arg("I"))
        .def("IsYLine",
             (Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::IsYLine),
             R"#(Returns True if the line of index <I> has a constant Y value.)#"  , py::arg("I"))
        .def("Tolerance",
             (void (Hatch_Hatcher::*)( const Standard_Real ) ) static_cast<void (Hatch_Hatcher::*)( const Standard_Real ) >(&Hatch_Hatcher::Tolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("Tolerance",
             (Standard_Real (Hatch_Hatcher::*)() const) static_cast<Standard_Real (Hatch_Hatcher::*)() const>(&Hatch_Hatcher::Tolerance),
             R"#(None)#" )
        .def("IsXLine",
             (Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::IsXLine),
             R"#(Returns True if the line of index <I> has a constant X value.)#"  , py::arg("I"))
        .def("IsYLine",
             (Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::IsYLine),
             R"#(Returns True if the line of index <I> has a constant Y value.)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Hatch_Line , shared_ptr<Hatch_Line> >>(m.attr("Hatch_Line"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Hatch_Parameter , shared_ptr<Hatch_Parameter> >>(m.attr("Hatch_Parameter"))
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
// ./opencascade/Hatch_Line.hxx
// ./opencascade/Hatch_Parameter.hxx
// ./opencascade/Hatch_SequenceOfParameter.hxx
// ./opencascade/Hatch_Hatcher.hxx
// ./opencascade/Hatch_SequenceOfLine.hxx
// ./opencascade/Hatch_LineForm.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<Hatch_Parameter>(m,"Hatch_SequenceOfParameter");
    register_template_NCollection_Sequence<Hatch_Line>(m,"Hatch_SequenceOfLine");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
