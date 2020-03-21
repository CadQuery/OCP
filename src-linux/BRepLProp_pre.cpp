
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BRepAdaptor_Curve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <BRepLProp_CurveTool.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepLProp_CurveTool.hxx>
#include <BRepLProp_SurfaceTool.hxx>
#include <BRepLProp_CLProps.hxx>
#include <BRepLProp_SLProps.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <BRepLProp_SurfaceTool.hxx>

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
void register_BRepLProp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepLProp", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BRepLProp , shared_ptr<BRepLProp> >(m,"BRepLProp",R"#(These global functions compute the degree of continuity of a curve built by concatenation of two edges at their junction point.)#");
    py::class_<BRepLProp_CLProps , shared_ptr<BRepLProp_CLProps> >(m,"BRepLProp_CLProps",R"#(None)#");
    py::class_<BRepLProp_CurveTool , shared_ptr<BRepLProp_CurveTool> >(m,"BRepLProp_CurveTool",R"#(None)#");
    py::class_<BRepLProp_SLProps , shared_ptr<BRepLProp_SLProps> >(m,"BRepLProp_SLProps",R"#(None)#");
    py::class_<BRepLProp_SurfaceTool , shared_ptr<BRepLProp_SurfaceTool> >(m,"BRepLProp_SurfaceTool",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
