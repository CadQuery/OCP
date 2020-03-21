
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
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Standard_GUID.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <StdLDrivers.hxx>
#include <StdLDrivers_DocumentRetrievalDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <CDM_Document.hxx>

// Module definiiton
void register_StdLDrivers_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StdLDrivers", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<StdLDrivers , shared_ptr<StdLDrivers> >(m,"StdLDrivers",R"#(None)#");
    py::class_<StdLDrivers_DocumentRetrievalDriver ,opencascade::handle<StdLDrivers_DocumentRetrievalDriver> , PCDM_RetrievalDriver>(m,"StdLDrivers_DocumentRetrievalDriver",R"#(retrieval driver of a Part document)#");

};

// user-defined post-inclusion per module

// user-defined post
