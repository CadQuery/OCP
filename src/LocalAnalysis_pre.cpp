
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <LocalAnalysis_SurfaceContinuity.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <LocalAnalysis_SurfaceContinuity.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <GeomLProp_CLProps.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <GeomLProp_SLProps.hxx>

// module includes
#include <LocalAnalysis.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <LocalAnalysis_StatusErrorType.hxx>
#include <LocalAnalysis_SurfaceContinuity.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LocalAnalysis_enums(py::module &main_module) {


py::module m = main_module.def_submodule("LocalAnalysis", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<LocalAnalysis_StatusErrorType>(m, "LocalAnalysis_StatusErrorType",R"#(None)#")
        .value("LocalAnalysis_NullFirstDerivative",LocalAnalysis_StatusErrorType::LocalAnalysis_NullFirstDerivative)
        .value("LocalAnalysis_NullSecondDerivative",LocalAnalysis_StatusErrorType::LocalAnalysis_NullSecondDerivative)
        .value("LocalAnalysis_TangentNotDefined",LocalAnalysis_StatusErrorType::LocalAnalysis_TangentNotDefined)
        .value("LocalAnalysis_NormalNotDefined",LocalAnalysis_StatusErrorType::LocalAnalysis_NormalNotDefined)
        .value("LocalAnalysis_CurvatureNotDefined",LocalAnalysis_StatusErrorType::LocalAnalysis_CurvatureNotDefined).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<LocalAnalysis , shared_ptr<LocalAnalysis>  >(m,"LocalAnalysis",R"#(This package gives tools to check the local continuity between two points situated on two curves or two surfaces.)#");
    py::class_<LocalAnalysis_CurveContinuity , shared_ptr<LocalAnalysis_CurveContinuity>  >(m,"LocalAnalysis_CurveContinuity",R"#(This class gives tools to check local continuity C0 C1 C2 G1 G2 between two points situated on two curves)#");
    py::class_<LocalAnalysis_SurfaceContinuity , shared_ptr<LocalAnalysis_SurfaceContinuity>  >(m,"LocalAnalysis_SurfaceContinuity",R"#(This class gives tools to check local continuity C0 C1 C2 G1 G2 between two points situated on two surfaces)#");

};

// user-defined post-inclusion per module

// user-defined post
