
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlDrivers_DocumentStorageDriver.hxx>
#include <XmlDrivers_DocumentRetrievalDriver.hxx>
#include <TDocStd_Application.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDF_ADriver.hxx>

// module includes
#include <XmlDrivers.hxx>
#include <XmlDrivers_DocumentRetrievalDriver.hxx>
#include <XmlDrivers_DocumentStorageDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlDrivers_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XmlDrivers", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<XmlDrivers ,std::unique_ptr<XmlDrivers>  >(m,"XmlDrivers",R"#(None)#");
    py::class_<XmlDrivers_DocumentRetrievalDriver ,opencascade::handle<XmlDrivers_DocumentRetrievalDriver>  , XmlLDrivers_DocumentRetrievalDriver >(m,"XmlDrivers_DocumentRetrievalDriver",R"#()#");
    py::class_<XmlDrivers_DocumentStorageDriver ,opencascade::handle<XmlDrivers_DocumentStorageDriver>  , XmlLDrivers_DocumentStorageDriver >(m,"XmlDrivers_DocumentStorageDriver",R"#()#");

// pre-register typdefs
// ./opencascade/XmlDrivers.hxx
// ./opencascade/XmlDrivers_DocumentStorageDriver.hxx
// ./opencascade/XmlDrivers_DocumentRetrievalDriver.hxx

};

// user-defined post-inclusion per module

// user-defined post
