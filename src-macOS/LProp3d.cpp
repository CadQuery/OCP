
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_HCurve.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp3d_CurveTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp3d_SurfaceTool.hxx>

// module includes
#include <LProp3d_CLProps.hxx>
#include <LProp3d_CurveTool.hxx>
#include <LProp3d_SLProps.hxx>
#include <LProp3d_SurfaceTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LProp3d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("LProp3d"));


//Python trampoline classes

// classes


    static_cast<py::class_<LProp3d_CLProps , shared_ptr<LProp3d_CLProps> >>(m.attr("LProp3d_CLProps"))
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
    register_default_constructor<LProp3d_CurveTool , shared_ptr<LProp3d_CurveTool>>(m,"LProp3d_CurveTool");

    static_cast<py::class_<LProp3d_CurveTool , shared_ptr<LProp3d_CurveTool> >>(m.attr("LProp3d_CurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LProp3d_SLProps , shared_ptr<LProp3d_SLProps> >>(m.attr("LProp3d_SLProps"))
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
    register_default_constructor<LProp3d_SurfaceTool , shared_ptr<LProp3d_SurfaceTool>>(m,"LProp3d_SurfaceTool");

    static_cast<py::class_<LProp3d_SurfaceTool , shared_ptr<LProp3d_SurfaceTool> >>(m.attr("LProp3d_SurfaceTool"))
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
// ./opencascade/LProp3d_CLProps.hxx
// ./opencascade/LProp3d_SurfaceTool.hxx
// ./opencascade/LProp3d_CurveTool.hxx
// ./opencascade/LProp3d_SLProps.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
