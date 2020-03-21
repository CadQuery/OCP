
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
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Plane.hxx>
#include <gp_Dir.hxx>

// module includes
#include <GeomProjLib.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomProjLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomProjLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GeomProjLib , shared_ptr<GeomProjLib>>(m,"GeomProjLib");

    static_cast<py::class_<GeomProjLib , shared_ptr<GeomProjLib> >>(m.attr("GeomProjLib"))
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
// ./opencascade/GeomProjLib.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
