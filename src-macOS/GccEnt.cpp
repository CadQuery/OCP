
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <GccEnt_QualifiedLin.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Circ2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt_QualifiedCirc.hxx>

// module includes
#include <GccEnt.hxx>
#include <GccEnt_Array1OfPosition.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_Position.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_QualifiedLin.hxx>

// template related includes
// ./opencascade/GccEnt_Array1OfPosition.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GccEnt(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GccEnt"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GccEnt , shared_ptr<GccEnt>>(m,"GccEnt");

    static_cast<py::class_<GccEnt , shared_ptr<GccEnt> >>(m.attr("GccEnt"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Print_s",
                    (Standard_OStream & (*)( const GccEnt_Position , std::ostream & ) ) static_cast<Standard_OStream & (*)( const GccEnt_Position , std::ostream & ) >(&GccEnt::Print),
                    R"#(Prints the name of Position type as a String on the Stream.)#"  , py::arg("thePosition"),  py::arg("theStream"))
        .def_static("PositionFromString_s",
                    (GccEnt_Position (*)( Standard_CString ) ) static_cast<GccEnt_Position (*)( Standard_CString ) >(&GccEnt::PositionFromString),
                    R"#(Returns the position from the given string identifier (using case-insensitive comparison).)#"  , py::arg("thePositionString"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccEnt_QualifiedCirc , shared_ptr<GccEnt_QualifiedCirc> >>(m.attr("GccEnt_QualifiedCirc"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GccEnt_QualifiedLin , shared_ptr<GccEnt_QualifiedLin> >>(m.attr("GccEnt_QualifiedLin"))
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
// ./opencascade/GccEnt_Position.hxx
// ./opencascade/GccEnt_Array1OfPosition.hxx
// ./opencascade/GccEnt_BadQualifier.hxx
// ./opencascade/GccEnt_QualifiedLin.hxx
// ./opencascade/GccEnt.hxx
// ./opencascade/GccEnt_QualifiedCirc.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<GccEnt_Position>(m,"GccEnt_Array1OfPosition");


// exceptions
register_occ_exception<GccEnt_BadQualifier>(m, "GccEnt_BadQualifier");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
