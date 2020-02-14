
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_Spine.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_TrimmedCurve.hxx>

// module includes
#include <FilletSurf_Builder.hxx>
#include <FilletSurf_ErrorTypeStatus.hxx>
#include <FilletSurf_InternalBuilder.hxx>
#include <FilletSurf_StatusDone.hxx>
#include <FilletSurf_StatusType.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_FilletSurf_enums(py::module &main_module) {


py::module m = main_module.def_submodule("FilletSurf", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<FilletSurf_StatusDone>(m, "FilletSurf_StatusDone",R"#(None)#")
        .value("FilletSurf_IsOk",FilletSurf_StatusDone::FilletSurf_IsOk)
        .value("FilletSurf_IsNotOk",FilletSurf_StatusDone::FilletSurf_IsNotOk)
        .value("FilletSurf_IsPartial",FilletSurf_StatusDone::FilletSurf_IsPartial).export_values();
    py::enum_<FilletSurf_StatusType>(m, "FilletSurf_StatusType",R"#(None)#")
        .value("FilletSurf_TwoExtremityOnEdge",FilletSurf_StatusType::FilletSurf_TwoExtremityOnEdge)
        .value("FilletSurf_OneExtremityOnEdge",FilletSurf_StatusType::FilletSurf_OneExtremityOnEdge)
        .value("FilletSurf_NoExtremityOnEdge",FilletSurf_StatusType::FilletSurf_NoExtremityOnEdge).export_values();
    py::enum_<FilletSurf_ErrorTypeStatus>(m, "FilletSurf_ErrorTypeStatus",R"#(None)#")
        .value("FilletSurf_EmptyList",FilletSurf_ErrorTypeStatus::FilletSurf_EmptyList)
        .value("FilletSurf_EdgeNotG1",FilletSurf_ErrorTypeStatus::FilletSurf_EdgeNotG1)
        .value("FilletSurf_FacesNotG1",FilletSurf_ErrorTypeStatus::FilletSurf_FacesNotG1)
        .value("FilletSurf_EdgeNotOnShape",FilletSurf_ErrorTypeStatus::FilletSurf_EdgeNotOnShape)
        .value("FilletSurf_NotSharpEdge",FilletSurf_ErrorTypeStatus::FilletSurf_NotSharpEdge)
        .value("FilletSurf_PbFilletCompute",FilletSurf_ErrorTypeStatus::FilletSurf_PbFilletCompute).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<FilletSurf_Builder , shared_ptr<FilletSurf_Builder>  >(m,"FilletSurf_Builder",R"#(API giving the following geometric information about fillets list of corresponding NUBS surfaces for each surface: the 2 support faces on each face: the 3d curve and the corresponding 2d curve the 2d curves on the fillet status of start and end section of the fillet first and last parameter on edge of the fillet.)#");
    py::class_<FilletSurf_InternalBuilder , shared_ptr<FilletSurf_InternalBuilder>  , ChFi3d_FilBuilder >(m,"FilletSurf_InternalBuilder",R"#(This class is private. It is used by the class Builder from FilletSurf. It computes geometric information about fillets.)#");

};

// user-defined post-inclusion per module

// user-defined post
