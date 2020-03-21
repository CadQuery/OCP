
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp3d_SurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp3d_CurveTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>

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
void register_LProp3d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("LProp3d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<LProp3d_CLProps , shared_ptr<LProp3d_CLProps> >(m,"LProp3d_CLProps",R"#(None)#");
    py::class_<LProp3d_CurveTool , shared_ptr<LProp3d_CurveTool> >(m,"LProp3d_CurveTool",R"#(None)#");
    py::class_<LProp3d_SLProps , shared_ptr<LProp3d_SLProps> >(m,"LProp3d_SLProps",R"#(None)#");
    py::class_<LProp3d_SurfaceTool , shared_ptr<LProp3d_SurfaceTool> >(m,"LProp3d_SurfaceTool",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
