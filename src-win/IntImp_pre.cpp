
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

// module includes
#include <IntImp_ComputeTangence.hxx>
#include <IntImp_ConstIsoparametric.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntImp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntImp", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<IntImp_ConstIsoparametric>(m, "IntImp_ConstIsoparametric",R"#(None)#")
        .value("IntImp_UIsoparametricOnCaro1",IntImp_ConstIsoparametric::IntImp_UIsoparametricOnCaro1)
        .value("IntImp_VIsoparametricOnCaro1",IntImp_ConstIsoparametric::IntImp_VIsoparametricOnCaro1)
        .value("IntImp_UIsoparametricOnCaro2",IntImp_ConstIsoparametric::IntImp_UIsoparametricOnCaro2)
        .value("IntImp_VIsoparametricOnCaro2",IntImp_ConstIsoparametric::IntImp_VIsoparametricOnCaro2).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only

};

// user-defined post-inclusion per module

// user-defined post
