
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <LProp_CurAndInf.hxx>

// module includes
#include <LProp_AnalyticCurInf.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_CIType.hxx>
#include <LProp_CurAndInf.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp_SequenceOfCIType.hxx>
#include <LProp_Status.hxx>

// template related includes
// ./opencascade/LProp_SequenceOfCIType.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LProp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("LProp", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<LProp_CIType>(m, "LProp_CIType",R"#(Identifies the type of a particular point on a curve: - LProp_Inflection: a point of inflection - LProp_MinCur: a minimum of curvature - LProp_MaxCur: a maximum of curvature.)#")
        .value("LProp_Inflection",LProp_CIType::LProp_Inflection)
        .value("LProp_MinCur",LProp_CIType::LProp_MinCur)
        .value("LProp_MaxCur",LProp_CIType::LProp_MaxCur).export_values();
    py::enum_<LProp_Status>(m, "LProp_Status",R"#(None)#")
        .value("LProp_Undecided",LProp_Status::LProp_Undecided)
        .value("LProp_Undefined",LProp_Status::LProp_Undefined)
        .value("LProp_Defined",LProp_Status::LProp_Defined)
        .value("LProp_Computed",LProp_Status::LProp_Computed).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<LProp_CIType>(m,"LProp_SequenceOfCIType");  

// classes forward declarations only
    py::class_<LProp_AnalyticCurInf , shared_ptr<LProp_AnalyticCurInf>  >(m,"LProp_AnalyticCurInf",R"#(Computes the locals extremas of curvature of a gp curve Remark : a gp curve has not inflection.)#");
    py::class_<LProp_CurAndInf , shared_ptr<LProp_CurAndInf>  >(m,"LProp_CurAndInf",R"#(Stores the parameters of a curve 2d or 3d corresponding to the curvature's extremas and the Inflection's Points.)#");

};

// user-defined post-inclusion per module

// user-defined post
