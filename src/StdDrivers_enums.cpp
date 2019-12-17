
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <StdDrivers.hxx>
#include <StdDrivers_DocumentRetrievalDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdDrivers_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StdDrivers", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<StdDrivers ,std::unique_ptr<StdDrivers>  >(m,"StdDrivers",R"#(None)#");
    py::class_<StdDrivers_DocumentRetrievalDriver ,opencascade::handle<StdDrivers_DocumentRetrievalDriver>  , StdLDrivers_DocumentRetrievalDriver >(m,"StdDrivers_DocumentRetrievalDriver",R"#(retrieval driver of a Part document)#");

// pre-register typdefs
// ./opencascade/StdDrivers.hxx
// ./opencascade/StdDrivers_DocumentRetrievalDriver.hxx

};

// user-defined post-inclusion per module

// user-defined post
