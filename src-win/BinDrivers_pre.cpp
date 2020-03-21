
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
#include <Standard_GUID.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_AsciiString.hxx>
#include <BinDrivers_DocumentStorageDriver.hxx>
#include <BinDrivers_DocumentRetrievalDriver.hxx>
#include <TDocStd_Application.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>

// module includes
#include <BinDrivers.hxx>
#include <BinDrivers_DocumentRetrievalDriver.hxx>
#include <BinDrivers_DocumentStorageDriver.hxx>
#include <BinDrivers_Marker.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinDrivers_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinDrivers", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BinDrivers_Marker>(m, "BinDrivers_Marker",R"#(None)#")
        .value("BinDrivers_ENDATTRLIST",BinDrivers_Marker::BinDrivers_ENDATTRLIST)
        .value("BinDrivers_ENDLABEL",BinDrivers_Marker::BinDrivers_ENDLABEL).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BinDrivers , shared_ptr<BinDrivers> >(m,"BinDrivers",R"#(None)#");
    py::class_<BinDrivers_DocumentRetrievalDriver ,opencascade::handle<BinDrivers_DocumentRetrievalDriver> , BinLDrivers_DocumentRetrievalDriver>(m,"BinDrivers_DocumentRetrievalDriver",R"#()#");
    py::class_<BinDrivers_DocumentStorageDriver ,opencascade::handle<BinDrivers_DocumentStorageDriver> , BinLDrivers_DocumentStorageDriver>(m,"BinDrivers_DocumentStorageDriver",R"#(persistent implemention of storage a document in a binary filepersistent implemention of storage a document in a binary filepersistent implemention of storage a document in a binary file)#");

};

// user-defined post-inclusion per module

// user-defined post
