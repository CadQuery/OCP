
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <CDM_Document.hxx>
#include <CDM_Application.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_Document.hxx>
#include <CDM_Reference.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_Document.hxx>
#include <Resource_Manager.hxx>
#include <Message_Messenger.hxx>
#include <CDM_Document.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_Application.hxx>
#include <CDM_ReferenceIterator.hxx>
#include <Resource_Manager.hxx>

// module includes
#include <CDM_Application.hxx>
#include <CDM_CanCloseStatus.hxx>
#include <CDM_DataMapIteratorOfMetaDataLookUpTable.hxx>
#include <CDM_DataMapIteratorOfPresentationDirectory.hxx>
#include <CDM_Document.hxx>
#include <CDM_DocumentHasher.hxx>
#include <CDM_DocumentPointer.hxx>
#include <CDM_ListIteratorOfListOfDocument.hxx>
#include <CDM_ListIteratorOfListOfReferences.hxx>
#include <CDM_ListOfDocument.hxx>
#include <CDM_ListOfReferences.hxx>
#include <CDM_MapIteratorOfMapOfDocument.hxx>
#include <CDM_MapOfDocument.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_MetaDataLookUpTable.hxx>
#include <CDM_NamesDirectory.hxx>
#include <CDM_PresentationDirectory.hxx>
#include <CDM_Reference.hxx>
#include <CDM_ReferenceIterator.hxx>

// template related includes
// ./opencascade/CDM_PresentationDirectory.hxx
#include "NCollection.hxx"
// ./opencascade/CDM_ListOfReferences.hxx
#include "NCollection.hxx"
// ./opencascade/CDM_ListOfReferences.hxx
#include "NCollection.hxx"
// ./opencascade/CDM_ListOfDocument.hxx
#include "NCollection.hxx"
// ./opencascade/CDM_ListOfDocument.hxx
#include "NCollection.hxx"
// ./opencascade/CDM_MapOfDocument.hxx
#include "NCollection.hxx"
// ./opencascade/CDM_MapOfDocument.hxx
#include "NCollection.hxx"
// ./opencascade/CDM_DocumentHasher.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_CDM_enums(py::module &main_module) {


py::module m = main_module.def_submodule("CDM", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<CDM_CanCloseStatus>(m, "CDM_CanCloseStatus",R"#(None)#")
        .value("CDM_CCS_OK",CDM_CanCloseStatus::CDM_CCS_OK)
        .value("CDM_CCS_NotOpen",CDM_CanCloseStatus::CDM_CCS_NotOpen)
        .value("CDM_CCS_UnstoredReferenced",CDM_CanCloseStatus::CDM_CCS_UnstoredReferenced)
        .value("CDM_CCS_ModifiedReferenced",CDM_CanCloseStatus::CDM_CCS_ModifiedReferenced)
        .value("CDM_CCS_ReferenceRejection",CDM_CanCloseStatus::CDM_CCS_ReferenceRejection).export_values();

//Python trampoline classes
    class Py_CDM_Application : public CDM_Application{
    public:
        using CDM_Application::CDM_Application;
        
        
        // public pure virtual
        opencascade::handle<Resource_Manager> Resources() override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Resource_Manager>,CDM_Application,Resources,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        opencascade::handle<CDM_Document> Retrieve(const opencascade::handle<CDM_MetaData> & aMetaData,const Standard_Boolean UseStorageConfiguration) override { PYBIND11_OVERLOAD_PURE(opencascade::handle<CDM_Document>,CDM_Application,Retrieve,aMetaData,UseStorageConfiguration) };
        Standard_Integer DocumentVersion(const opencascade::handle<CDM_MetaData> & aMetaData) override { PYBIND11_OVERLOAD_PURE(Standard_Integer,CDM_Application,DocumentVersion,aMetaData) };
        
    };
    class Py_CDM_Document : public CDM_Document{
    public:
        using CDM_Document::CDM_Document;
        
        
        // public pure virtual
        TCollection_ExtendedString StorageFormat() const  override { PYBIND11_OVERLOAD_PURE(TCollection_ExtendedString,CDM_Document,StorageFormat,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_NCollection_List<opencascade::handle<CDM_Reference> >(m,"CDM_ListOfReferences");  
    preregister_template_NCollection_List<opencascade::handle<CDM_Document> >(m,"CDM_ListOfDocument");  
    preregister_template_NCollection_Map<opencascade::handle<CDM_Document>, CDM_DocumentHasher>(m,"CDM_MapOfDocument");  
    preregister_template_NCollection_DefaultHasher<opencascade::handle<CDM_Document> >(m,"CDM_DocumentHasher");  

// classes forward declarations only
    py::class_<CDM_Application ,opencascade::handle<CDM_Application> ,Py_CDM_Application , Standard_Transient >(m,"CDM_Application",R"#()#");
    py::class_<CDM_Document ,opencascade::handle<CDM_Document> ,Py_CDM_Document , Standard_Transient >(m,"CDM_Document",R"#(An applicative document is an instance of a class inheriting CDM_Document. These documents have the following properties: - they can have references to other documents. - the modifications of a document are propagated to the referencing documents. - a document can be stored in different formats, with or without a persistent model. - the drivers for storing and retrieving documents are plugged in when necessary. - a document has a modification counter. This counter is incremented when the document is modified. When a document is stored, the current counter value is memorized as the last storage version of the document. A document is considered to be modified when the counter value is different from the storage version. Once the document is saved the storage version and the counter value are identical. The document is now not considered to be modified. - a reference is a link between two documents. A reference has two components: the "From Document" and the "To Document". When a reference is created, an identifier of the reference is generated. This identifier is unique in the scope of the From Document and is conserved during storage and retrieval. This means that the referenced document will be always accessible through this identifier. - a reference memorizes the counter value of the To Document when the reference is created. The From Document is considered to be up to date relative to the To Document when the reference counter value is equal to the To Document counter value. - retrieval of a document having references does not imply the retrieving of the referenced documents.An applicative document is an instance of a class inheriting CDM_Document. These documents have the following properties: - they can have references to other documents. - the modifications of a document are propagated to the referencing documents. - a document can be stored in different formats, with or without a persistent model. - the drivers for storing and retrieving documents are plugged in when necessary. - a document has a modification counter. This counter is incremented when the document is modified. When a document is stored, the current counter value is memorized as the last storage version of the document. A document is considered to be modified when the counter value is different from the storage version. Once the document is saved the storage version and the counter value are identical. The document is now not considered to be modified. - a reference is a link between two documents. A reference has two components: the "From Document" and the "To Document". When a reference is created, an identifier of the reference is generated. This identifier is unique in the scope of the From Document and is conserved during storage and retrieval. This means that the referenced document will be always accessible through this identifier. - a reference memorizes the counter value of the To Document when the reference is created. The From Document is considered to be up to date relative to the To Document when the reference counter value is equal to the To Document counter value. - retrieval of a document having references does not imply the retrieving of the referenced documents.An applicative document is an instance of a class inheriting CDM_Document. These documents have the following properties: - they can have references to other documents. - the modifications of a document are propagated to the referencing documents. - a document can be stored in different formats, with or without a persistent model. - the drivers for storing and retrieving documents are plugged in when necessary. - a document has a modification counter. This counter is incremented when the document is modified. When a document is stored, the current counter value is memorized as the last storage version of the document. A document is considered to be modified when the counter value is different from the storage version. Once the document is saved the storage version and the counter value are identical. The document is now not considered to be modified. - a reference is a link between two documents. A reference has two components: the "From Document" and the "To Document". When a reference is created, an identifier of the reference is generated. This identifier is unique in the scope of the From Document and is conserved during storage and retrieval. This means that the referenced document will be always accessible through this identifier. - a reference memorizes the counter value of the To Document when the reference is created. The From Document is considered to be up to date relative to the To Document when the reference counter value is equal to the To Document counter value. - retrieval of a document having references does not imply the retrieving of the referenced documents.)#");
    py::class_<CDM_MetaData ,opencascade::handle<CDM_MetaData>  , Standard_Transient >(m,"CDM_MetaData",R"#()#");
    py::class_<CDM_Reference ,opencascade::handle<CDM_Reference>  , Standard_Transient >(m,"CDM_Reference",R"#()#");
    py::class_<CDM_ReferenceIterator , shared_ptr<CDM_ReferenceIterator>  >(m,"CDM_ReferenceIterator",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
