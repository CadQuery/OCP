
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <BRepLProp_SurfaceTool.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepLProp_CurveTool.hxx>
#include <BRepLProp_SurfaceTool.hxx>
#include <BRepLProp_CLProps.hxx>
#include <BRepLProp_SLProps.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <BRepLProp_CurveTool.hxx>

// module includes
#include <BRepLProp.hxx>
#include <BRepLProp_CLProps.hxx>
#include <BRepLProp_CurveTool.hxx>
#include <BRepLProp_SLProps.hxx>
#include <BRepLProp_SurfaceTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepLProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepLProp"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepLProp , shared_ptr<BRepLProp>>(m,"BRepLProp");

    static_cast<py::class_<BRepLProp , shared_ptr<BRepLProp> >>(m.attr("BRepLProp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLProp_CLProps , shared_ptr<BRepLProp_CLProps> >>(m.attr("BRepLProp_CLProps"))
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
    register_default_constructor<BRepLProp_CurveTool , shared_ptr<BRepLProp_CurveTool>>(m,"BRepLProp_CurveTool");

    static_cast<py::class_<BRepLProp_CurveTool , shared_ptr<BRepLProp_CurveTool> >>(m.attr("BRepLProp_CurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepLProp_SLProps , shared_ptr<BRepLProp_SLProps> >>(m.attr("BRepLProp_SLProps"))
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
    register_default_constructor<BRepLProp_SurfaceTool , shared_ptr<BRepLProp_SurfaceTool>>(m,"BRepLProp_SurfaceTool");

    static_cast<py::class_<BRepLProp_SurfaceTool , shared_ptr<BRepLProp_SurfaceTool> >>(m.attr("BRepLProp_SurfaceTool"))
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
// ./opencascade/BRepLProp_SLProps.hxx
// ./opencascade/BRepLProp_CurveTool.hxx
// ./opencascade/BRepLProp_SurfaceTool.hxx
// ./opencascade/BRepLProp.hxx
// ./opencascade/BRepLProp_CLProps.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
