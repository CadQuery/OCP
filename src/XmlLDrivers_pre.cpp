
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <TCollection_AsciiString.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlLDrivers_DocumentStorageDriver.hxx>
#include <XmlLDrivers_DocumentRetrievalDriver.hxx>
#include <XmlLDrivers_NamespaceDef.hxx>
#include <TDocStd_Application.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <CDM_Document.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <PCDM_Document.hxx>
#include <CDM_Document.hxx>
#include <CDM_Application.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDF_ADriver.hxx>

// module includes
#include <XmlLDrivers.hxx>
#include <XmlLDrivers_DocumentRetrievalDriver.hxx>
#include <XmlLDrivers_DocumentStorageDriver.hxx>
#include <XmlLDrivers_NamespaceDef.hxx>
#include <XmlLDrivers_SequenceOfNamespaceDef.hxx>

// template related includes
// ./opencascade/XmlLDrivers_SequenceOfNamespaceDef.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlLDrivers_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XmlLDrivers", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<XmlLDrivers_NamespaceDef>(m,"XmlLDrivers_SequenceOfNamespaceDef");  

// classes forward declarations only
    py::class_<XmlLDrivers , shared_ptr<XmlLDrivers>  >(m,"XmlLDrivers",R"#(None)#");
    py::class_<XmlLDrivers_DocumentRetrievalDriver ,opencascade::handle<XmlLDrivers_DocumentRetrievalDriver>  , PCDM_RetrievalDriver >(m,"XmlLDrivers_DocumentRetrievalDriver",R"#()#");
    py::class_<XmlLDrivers_DocumentStorageDriver ,opencascade::handle<XmlLDrivers_DocumentStorageDriver>  , PCDM_StorageDriver >(m,"XmlLDrivers_DocumentStorageDriver",R"#()#");
    py::class_<XmlLDrivers_NamespaceDef , shared_ptr<XmlLDrivers_NamespaceDef>  >(m,"XmlLDrivers_NamespaceDef",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
