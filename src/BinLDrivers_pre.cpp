
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <PCDM_Document.hxx>
#include <CDM_Document.hxx>
#include <CDM_Application.hxx>
#include <TDF_Label.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <CDM_Document.hxx>
#include <Standard_GUID.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_AsciiString.hxx>
#include <BinLDrivers_DocumentStorageDriver.hxx>
#include <BinLDrivers_DocumentRetrievalDriver.hxx>
#include <BinLDrivers_DocumentSection.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <BinLDrivers.hxx>
#include <BinLDrivers_DocumentRetrievalDriver.hxx>
#include <BinLDrivers_DocumentSection.hxx>
#include <BinLDrivers_DocumentStorageDriver.hxx>
#include <BinLDrivers_Marker.hxx>
#include <BinLDrivers_VectorOfDocumentSection.hxx>

// template related includes
// ./opencascade/BinLDrivers_VectorOfDocumentSection.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinLDrivers_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinLDrivers", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BinLDrivers_Marker>(m, "BinLDrivers_Marker",R"#(None)#")
        .value("BinLDrivers_ENDATTRLIST",BinLDrivers_Marker::BinLDrivers_ENDATTRLIST)
        .value("BinLDrivers_ENDLABEL",BinLDrivers_Marker::BinLDrivers_ENDLABEL).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Vector<BinLDrivers_DocumentSection>(m,"BinLDrivers_VectorOfDocumentSection");  

// classes forward declarations only
    py::class_<BinLDrivers , shared_ptr<BinLDrivers>  >(m,"BinLDrivers",R"#(None)#");
    py::class_<BinLDrivers_DocumentRetrievalDriver ,opencascade::handle<BinLDrivers_DocumentRetrievalDriver>  , PCDM_RetrievalDriver >(m,"BinLDrivers_DocumentRetrievalDriver",R"#()#");
    py::class_<BinLDrivers_DocumentSection , shared_ptr<BinLDrivers_DocumentSection>  >(m,"BinLDrivers_DocumentSection",R"#(More or less independent part of the saved/restored document that is distinct from OCAF data themselves but may be referred by them.)#");
    py::class_<BinLDrivers_DocumentStorageDriver ,opencascade::handle<BinLDrivers_DocumentStorageDriver>  , PCDM_StorageDriver >(m,"BinLDrivers_DocumentStorageDriver",R"#(persistent implemention of storage a document in a binary filepersistent implemention of storage a document in a binary filepersistent implemention of storage a document in a binary file)#");

};

// user-defined post-inclusion per module

// user-defined post
