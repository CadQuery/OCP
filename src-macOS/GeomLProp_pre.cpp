
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_GeomLProp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomLProp", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GeomLProp , shared_ptr<GeomLProp> >(m,"GeomLProp",R"#(These global functions compute the degree of continuity of a 3D curve built by concatenation of two other curves (or portions of curves) at their junction point.)#");
    py::class_<GeomLProp_CLProps , shared_ptr<GeomLProp_CLProps> >(m,"GeomLProp_CLProps",R"#(None)#");
    py::class_<GeomLProp_CurveTool , shared_ptr<GeomLProp_CurveTool> >(m,"GeomLProp_CurveTool",R"#(None)#");
    py::class_<GeomLProp_SLProps , shared_ptr<GeomLProp_SLProps> >(m,"GeomLProp_SLProps",R"#(None)#");
    py::class_<GeomLProp_SurfaceTool , shared_ptr<GeomLProp_SurfaceTool> >(m,"GeomLProp_SurfaceTool",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
