
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <CSLib_Class2d.hxx>
#include <CSLib_NormalPolyDef.hxx>

// module includes
#include <CSLib.hxx>
#include <CSLib_Class2d.hxx>
#include <CSLib_DerivativeStatus.hxx>
#include <CSLib_NormalPolyDef.hxx>
#include <CSLib_NormalStatus.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_CSLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("CSLib", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<CSLib_NormalStatus>(m, "CSLib_NormalStatus",R"#(if N is the normal)#")
        .value("CSLib_Singular",CSLib_NormalStatus::CSLib_Singular)
        .value("CSLib_Defined",CSLib_NormalStatus::CSLib_Defined)
        .value("CSLib_InfinityOfSolutions",CSLib_NormalStatus::CSLib_InfinityOfSolutions)
        .value("CSLib_D1NuIsNull",CSLib_NormalStatus::CSLib_D1NuIsNull)
        .value("CSLib_D1NvIsNull",CSLib_NormalStatus::CSLib_D1NvIsNull)
        .value("CSLib_D1NIsNull",CSLib_NormalStatus::CSLib_D1NIsNull)
        .value("CSLib_D1NuNvRatioIsNull",CSLib_NormalStatus::CSLib_D1NuNvRatioIsNull)
        .value("CSLib_D1NvNuRatioIsNull",CSLib_NormalStatus::CSLib_D1NvNuRatioIsNull)
        .value("CSLib_D1NuIsParallelD1Nv",CSLib_NormalStatus::CSLib_D1NuIsParallelD1Nv).export_values();
    py::enum_<CSLib_DerivativeStatus>(m, "CSLib_DerivativeStatus",R"#(D1uIsNull : ||D1U|| <= Resolution)#")
        .value("CSLib_Done",CSLib_DerivativeStatus::CSLib_Done)
        .value("CSLib_D1uIsNull",CSLib_DerivativeStatus::CSLib_D1uIsNull)
        .value("CSLib_D1vIsNull",CSLib_DerivativeStatus::CSLib_D1vIsNull)
        .value("CSLib_D1IsNull",CSLib_DerivativeStatus::CSLib_D1IsNull)
        .value("CSLib_D1uD1vRatioIsNull",CSLib_DerivativeStatus::CSLib_D1uD1vRatioIsNull)
        .value("CSLib_D1vD1uRatioIsNull",CSLib_DerivativeStatus::CSLib_D1vD1uRatioIsNull)
        .value("CSLib_D1uIsParallelD1v",CSLib_DerivativeStatus::CSLib_D1uIsParallelD1v).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<CSLib , shared_ptr<CSLib> >(m,"CSLib",R"#(This package implements functions for basis geometric computation on curves and surfaces. The tolerance criterions used in this package are Resolution from package gp and RealEpsilon from class Real of package Standard.)#");
    py::class_<CSLib_Class2d , shared_ptr<CSLib_Class2d> >(m,"CSLib_Class2d",R"#(*** Class2d : Low level algorithm for 2d classification this class was moved from package BRepTopAdaptor)#");
    py::class_<CSLib_NormalPolyDef , shared_ptr<CSLib_NormalPolyDef> , math_FunctionWithDerivative>(m,"CSLib_NormalPolyDef",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
