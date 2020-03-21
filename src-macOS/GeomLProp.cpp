
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Curve.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <GeomLProp_CurveTool.hxx>
#include <Geom_Surface.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <GeomLProp_SurfaceTool.hxx>
#include <Geom_Curve.hxx>
#include <GeomLProp_CurveTool.hxx>
#include <GeomLProp_SurfaceTool.hxx>
#include <GeomLProp_CLProps.hxx>
#include <GeomLProp_SLProps.hxx>
#include <Geom_Curve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>

// module includes
#include <GeomLProp.hxx>
#include <GeomLProp_CLProps.hxx>
#include <GeomLProp_CurveTool.hxx>
#include <GeomLProp_SLProps.hxx>
#include <GeomLProp_SurfaceTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomLProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomLProp"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GeomLProp , shared_ptr<GeomLProp>>(m,"GeomLProp");

    static_cast<py::class_<GeomLProp , shared_ptr<GeomLProp> >>(m.attr("GeomLProp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLProp_CLProps , shared_ptr<GeomLProp_CLProps> >>(m.attr("GeomLProp_CLProps"))
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
    register_default_constructor<GeomLProp_CurveTool , shared_ptr<GeomLProp_CurveTool>>(m,"GeomLProp_CurveTool");

    static_cast<py::class_<GeomLProp_CurveTool , shared_ptr<GeomLProp_CurveTool> >>(m.attr("GeomLProp_CurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomLProp_SLProps , shared_ptr<GeomLProp_SLProps> >>(m.attr("GeomLProp_SLProps"))
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
    register_default_constructor<GeomLProp_SurfaceTool , shared_ptr<GeomLProp_SurfaceTool>>(m,"GeomLProp_SurfaceTool");

    static_cast<py::class_<GeomLProp_SurfaceTool , shared_ptr<GeomLProp_SurfaceTool> >>(m.attr("GeomLProp_SurfaceTool"))
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
// ./opencascade/GeomLProp_CLProps.hxx
// ./opencascade/GeomLProp_SLProps.hxx
// ./opencascade/GeomLProp.hxx
// ./opencascade/GeomLProp_CurveTool.hxx
// ./opencascade/GeomLProp_SurfaceTool.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
