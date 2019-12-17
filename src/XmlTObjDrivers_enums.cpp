
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <XmlTObjDrivers.hxx>
#include <XmlTObjDrivers_DocumentRetrievalDriver.hxx>
#include <XmlTObjDrivers_DocumentStorageDriver.hxx>
#include <XmlTObjDrivers_IntSparseArrayDriver.hxx>
#include <XmlTObjDrivers_ModelDriver.hxx>
#include <XmlTObjDrivers_ObjectDriver.hxx>
#include <XmlTObjDrivers_ReferenceDriver.hxx>
#include <XmlTObjDrivers_XYZDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>

// Module definiiton
void register_XmlTObjDrivers_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XmlTObjDrivers", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<XmlTObjDrivers_IntSparseArrayDriver ,opencascade::handle<XmlTObjDrivers_IntSparseArrayDriver>  , XmlMDF_ADriver >(m,"XmlTObjDrivers_IntSparseArrayDriver",R"#()#");
    py::class_<XmlTObjDrivers_DocumentRetrievalDriver ,opencascade::handle<XmlTObjDrivers_DocumentRetrievalDriver>  , XmlLDrivers_DocumentRetrievalDriver >(m,"XmlTObjDrivers_DocumentRetrievalDriver",R"#()#");
    py::class_<XmlTObjDrivers_ObjectDriver ,opencascade::handle<XmlTObjDrivers_ObjectDriver>  , XmlMDF_ADriver >(m,"XmlTObjDrivers_ObjectDriver",R"#()#");
    py::class_<XmlTObjDrivers_ModelDriver ,opencascade::handle<XmlTObjDrivers_ModelDriver>  , XmlMDF_ADriver >(m,"XmlTObjDrivers_ModelDriver",R"#()#");
    py::class_<XmlTObjDrivers_XYZDriver ,opencascade::handle<XmlTObjDrivers_XYZDriver>  , XmlMDF_ADriver >(m,"XmlTObjDrivers_XYZDriver",R"#()#");
    py::class_<XmlTObjDrivers ,std::unique_ptr<XmlTObjDrivers>  >(m,"XmlTObjDrivers",R"#(Class for registering storage/retrieval drivers for TObj XML persistence)#");
    py::class_<XmlTObjDrivers_DocumentStorageDriver ,opencascade::handle<XmlTObjDrivers_DocumentStorageDriver>  , XmlLDrivers_DocumentStorageDriver >(m,"XmlTObjDrivers_DocumentStorageDriver",R"#()#");
    py::class_<XmlTObjDrivers_ReferenceDriver ,opencascade::handle<XmlTObjDrivers_ReferenceDriver>  , XmlMDF_ADriver >(m,"XmlTObjDrivers_ReferenceDriver",R"#()#");

// pre-register typdefs
// ./opencascade/XmlTObjDrivers_IntSparseArrayDriver.hxx
// ./opencascade/XmlTObjDrivers_XYZDriver.hxx
// ./opencascade/XmlTObjDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/XmlTObjDrivers_DocumentStorageDriver.hxx
// ./opencascade/XmlTObjDrivers_ObjectDriver.hxx
// ./opencascade/XmlTObjDrivers.hxx
// ./opencascade/XmlTObjDrivers_ModelDriver.hxx
// ./opencascade/XmlTObjDrivers_ReferenceDriver.hxx

};

// user-defined post-inclusion per module

// user-defined post
