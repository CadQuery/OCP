
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
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <BinTObjDrivers.hxx>
#include <BinTObjDrivers_DocumentRetrievalDriver.hxx>
#include <BinTObjDrivers_DocumentStorageDriver.hxx>
#include <BinTObjDrivers_IntSparseArrayDriver.hxx>
#include <BinTObjDrivers_ModelDriver.hxx>
#include <BinTObjDrivers_ObjectDriver.hxx>
#include <BinTObjDrivers_ReferenceDriver.hxx>
#include <BinTObjDrivers_XYZDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinTObjDrivers_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinTObjDrivers", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BinTObjDrivers , shared_ptr<BinTObjDrivers> >(m,"BinTObjDrivers",R"#(Class for registering storage/retrieval drivers for TObj Bin persistence)#");
    py::class_<BinTObjDrivers_DocumentRetrievalDriver ,opencascade::handle<BinTObjDrivers_DocumentRetrievalDriver> , BinLDrivers_DocumentRetrievalDriver>(m,"BinTObjDrivers_DocumentRetrievalDriver",R"#()#");
    py::class_<BinTObjDrivers_DocumentStorageDriver ,opencascade::handle<BinTObjDrivers_DocumentStorageDriver> , BinLDrivers_DocumentStorageDriver>(m,"BinTObjDrivers_DocumentStorageDriver",R"#()#");
    py::class_<BinTObjDrivers_IntSparseArrayDriver ,opencascade::handle<BinTObjDrivers_IntSparseArrayDriver> , BinMDF_ADriver>(m,"BinTObjDrivers_IntSparseArrayDriver",R"#()#");
    py::class_<BinTObjDrivers_ModelDriver ,opencascade::handle<BinTObjDrivers_ModelDriver> , BinMDF_ADriver>(m,"BinTObjDrivers_ModelDriver",R"#()#");
    py::class_<BinTObjDrivers_ObjectDriver ,opencascade::handle<BinTObjDrivers_ObjectDriver> , BinMDF_ADriver>(m,"BinTObjDrivers_ObjectDriver",R"#()#");
    py::class_<BinTObjDrivers_ReferenceDriver ,opencascade::handle<BinTObjDrivers_ReferenceDriver> , BinMDF_ADriver>(m,"BinTObjDrivers_ReferenceDriver",R"#()#");
    py::class_<BinTObjDrivers_XYZDriver ,opencascade::handle<BinTObjDrivers_XYZDriver> , BinMDF_ADriver>(m,"BinTObjDrivers_XYZDriver",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
