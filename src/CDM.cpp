
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_CDM(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("CDM"));


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

// classes


    static_cast<py::class_<CDM_Application ,opencascade::handle<CDM_Application> ,Py_CDM_Application , Standard_Transient >>(m.attr("CDM_Application"))
    // constructors
    // custom constructors
    // methods
        .def("Resources",
             (opencascade::handle<Resource_Manager> (CDM_Application::*)() ) static_cast<opencascade::handle<Resource_Manager> (CDM_Application::*)() >(&CDM_Application::Resources),
             R"#(The manager returned by this virtual method will be used to search for Format.Retrieval resource items.)#" )
        .def("MessageDriver",
             (opencascade::handle<Message_Messenger> (CDM_Application::*)() ) static_cast<opencascade::handle<Message_Messenger> (CDM_Application::*)() >(&CDM_Application::MessageDriver),
             R"#(Returns default messenger;)#" )
        .def("BeginOfUpdate",
             (void (CDM_Application::*)( const opencascade::handle<CDM_Document> &  ) ) static_cast<void (CDM_Application::*)( const opencascade::handle<CDM_Document> &  ) >(&CDM_Application::BeginOfUpdate),
             R"#(this method is called before the update of a document. By default, writes in MessageDriver().)#"  , py::arg("aDocument"))
        .def("EndOfUpdate",
             (void (CDM_Application::*)( const opencascade::handle<CDM_Document> & ,  const Standard_Boolean ,  const TCollection_ExtendedString &  ) ) static_cast<void (CDM_Application::*)( const opencascade::handle<CDM_Document> & ,  const Standard_Boolean ,  const TCollection_ExtendedString &  ) >(&CDM_Application::EndOfUpdate),
             R"#(this method is called affter the update of a document. By default, writes in MessageDriver().)#"  , py::arg("aDocument"),  py::arg("theStatus"),  py::arg("ErrorString"))
        .def("Write",
             (void (CDM_Application::*)( const Standard_ExtString  ) ) static_cast<void (CDM_Application::*)( const Standard_ExtString  ) >(&CDM_Application::Write),
             R"#(writes the string in the application MessagerDriver.)#"  , py::arg("aString"))
        .def("Name",
             (TCollection_ExtendedString (CDM_Application::*)() const) static_cast<TCollection_ExtendedString (CDM_Application::*)() const>(&CDM_Application::Name),
             R"#(Returns the application name.)#" )
        .def("Version",
             (TCollection_AsciiString (CDM_Application::*)() const) static_cast<TCollection_AsciiString (CDM_Application::*)() const>(&CDM_Application::Version),
             R"#(Returns the application version.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDM_Application::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDM_Application::*)() const>(&CDM_Application::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDM_Application::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDM_Application::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDM_Document ,opencascade::handle<CDM_Document> ,Py_CDM_Document , Standard_Transient >>(m.attr("CDM_Document"))
    // constructors
    // custom constructors
    // methods
        .def("Update",
             (void (CDM_Document::*)( const opencascade::handle<CDM_Document> & ,  const Standard_Integer ,  const Standard_Address  ) ) static_cast<void (CDM_Document::*)( const opencascade::handle<CDM_Document> & ,  const Standard_Integer ,  const Standard_Address  ) >(&CDM_Document::Update),
             R"#(The Update method will be called once for each reference, but it should not perform any computation, to avoid multiple computation of a same document.)#"  , py::arg("aToDocument"),  py::arg("aReferenceIdentifier"),  py::arg("aModifContext"))
        .def("Update",
             (Standard_Boolean (CDM_Document::*)( TCollection_ExtendedString &  ) ) static_cast<Standard_Boolean (CDM_Document::*)( TCollection_ExtendedString &  ) >(&CDM_Document::Update),
             R"#(This method Update will be called to signal the end of the modified references list. The document should be recomputed and UpdateFromDocuments should be called. Update should returns True in case of success, false otherwise. In case of Failure, additional information can be given in ErrorString.)#"  , py::arg("ErrorString"))
        .def("StorageFormat",
             (TCollection_ExtendedString (CDM_Document::*)() const) static_cast<TCollection_ExtendedString (CDM_Document::*)() const>(&CDM_Document::StorageFormat),
             R"#(The Storage Format is the key which is used to determine in the application resources the storage driver plugin, the file extension and other data used to store the document.)#" )
        .def("Extensions",
             (void (CDM_Document::*)( NCollection_Sequence<TCollection_ExtendedString> &  ) const) static_cast<void (CDM_Document::*)( NCollection_Sequence<TCollection_ExtendedString> &  ) const>(&CDM_Document::Extensions),
             R"#(by default empties the extensions.)#"  , py::arg("Extensions"))
        .def("GetAlternativeDocument",
             (Standard_Boolean (CDM_Document::*)( const TCollection_ExtendedString & ,  opencascade::handle<CDM_Document> &  ) ) static_cast<Standard_Boolean (CDM_Document::*)( const TCollection_ExtendedString & ,  opencascade::handle<CDM_Document> &  ) >(&CDM_Document::GetAlternativeDocument),
             R"#(This method can be redefined to extract another document in a different format. For example, to extract a Shape from an applicative document.)#"  , py::arg("aFormat"),  py::arg("anAlternativeDocument"))
        .def("CreateReference",
             (Standard_Integer (CDM_Document::*)( const opencascade::handle<CDM_Document> &  ) ) static_cast<Standard_Integer (CDM_Document::*)( const opencascade::handle<CDM_Document> &  ) >(&CDM_Document::CreateReference),
             R"#(Creates a reference from this document to {anOtherDocument}. Returns a reference identifier. This reference identifier is unique in the document and will not be used for the next references, even after the storing of the document. If there is already a reference between the two documents, the reference is not created, but its reference identifier is returned.)#"  , py::arg("anOtherDocument"))
        .def("RemoveReference",
             (void (CDM_Document::*)( const Standard_Integer  ) ) static_cast<void (CDM_Document::*)( const Standard_Integer  ) >(&CDM_Document::RemoveReference),
             R"#(Removes the reference between the From Document and the To Document identified by a reference identifier.)#"  , py::arg("aReferenceIdentifier"))
        .def("RemoveAllReferences",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::RemoveAllReferences),
             R"#(Removes all references having this document for From Document.)#" )
        .def("Document",
             (opencascade::handle<CDM_Document> (CDM_Document::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<CDM_Document> (CDM_Document::*)( const Standard_Integer  ) const>(&CDM_Document::Document),
             R"#(Returns the To Document of the reference identified by aReferenceIdentifier. If the ToDocument is stored and has not yet been retrieved, this method will retrieve it.)#"  , py::arg("aReferenceIdentifier"))
        .def("IsInSession",
             (Standard_Boolean (CDM_Document::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (CDM_Document::*)( const Standard_Integer  ) const>(&CDM_Document::IsInSession),
             R"#(returns True if the To Document of the reference identified by aReferenceIdentifier is in session, False if it corresponds to a not yet retrieved document.)#"  , py::arg("aReferenceIdentifier"))
        .def("IsStored",
             (Standard_Boolean (CDM_Document::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (CDM_Document::*)( const Standard_Integer  ) const>(&CDM_Document::IsStored),
             R"#(returns True if the To Document of the reference identified by aReferenceIdentifier has already been stored, False otherwise.)#"  , py::arg("aReferenceIdentifier"))
        .def("Name",
             (TCollection_ExtendedString (CDM_Document::*)( const Standard_Integer  ) const) static_cast<TCollection_ExtendedString (CDM_Document::*)( const Standard_Integer  ) const>(&CDM_Document::Name),
             R"#(returns the name of the metadata of the To Document of the reference identified by aReferenceIdentifier.)#"  , py::arg("aReferenceIdentifier"))
        .def("UpdateFromDocuments",
             (void (CDM_Document::*)( const Standard_Address  ) const) static_cast<void (CDM_Document::*)( const Standard_Address  ) const>(&CDM_Document::UpdateFromDocuments),
             R"#(call virtual method Update on all referencing documents. This method keeps the list of the -- documents to process.It may be the starting of an update -- cycle. If not, the reentrant calls made by Update method (without argument) will append the referencing documents to the list and call the Update method (with arguments). Only the first call to UpdateFromDocuments generate call to Update().)#"  , py::arg("aModifContext"))
        .def("ToReferencesNumber",
             (Standard_Integer (CDM_Document::*)() const) static_cast<Standard_Integer (CDM_Document::*)() const>(&CDM_Document::ToReferencesNumber),
             R"#(returns the number of references having this document as From Document.)#" )
        .def("FromReferencesNumber",
             (Standard_Integer (CDM_Document::*)() const) static_cast<Standard_Integer (CDM_Document::*)() const>(&CDM_Document::FromReferencesNumber),
             R"#(returns the number of references having this document as To Document.)#" )
        .def("ShallowReferences",
             (Standard_Boolean (CDM_Document::*)( const opencascade::handle<CDM_Document> &  ) const) static_cast<Standard_Boolean (CDM_Document::*)( const opencascade::handle<CDM_Document> &  ) const>(&CDM_Document::ShallowReferences),
             R"#(returns True is this document references aDocument;)#"  , py::arg("aDocument"))
        .def("DeepReferences",
             (Standard_Boolean (CDM_Document::*)( const opencascade::handle<CDM_Document> &  ) const) static_cast<Standard_Boolean (CDM_Document::*)( const opencascade::handle<CDM_Document> &  ) const>(&CDM_Document::DeepReferences),
             R"#(returns True is this document references aDocument;)#"  , py::arg("aDocument"))
        .def("CopyReference",
             (Standard_Integer (CDM_Document::*)( const opencascade::handle<CDM_Document> & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (CDM_Document::*)( const opencascade::handle<CDM_Document> & ,  const Standard_Integer  ) >(&CDM_Document::CopyReference),
             R"#(Copies a reference to this document. This method avoid retrieval of referenced document. The arguments are the original document and a valid reference identifier Returns the local identifier.)#"  , py::arg("aFromDocument"),  py::arg("aReferenceIdentifier"))
        .def("IsReadOnly",
             (Standard_Boolean (CDM_Document::*)() const) static_cast<Standard_Boolean (CDM_Document::*)() const>(&CDM_Document::IsReadOnly),
             R"#(indicates that this document cannot be modified.)#" )
        .def("IsReadOnly",
             (Standard_Boolean (CDM_Document::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (CDM_Document::*)( const Standard_Integer  ) const>(&CDM_Document::IsReadOnly),
             R"#(indicates that the referenced document cannot be modified,)#"  , py::arg("aReferenceIdentifier"))
        .def("SetIsReadOnly",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::SetIsReadOnly),
             R"#(None)#" )
        .def("UnsetIsReadOnly",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::UnsetIsReadOnly),
             R"#(None)#" )
        .def("Modify",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::Modify),
             R"#(Indicates that this document has been modified. This method increments the modification counter.)#" )
        .def("Modifications",
             (Standard_Integer (CDM_Document::*)() const) static_cast<Standard_Integer (CDM_Document::*)() const>(&CDM_Document::Modifications),
             R"#(returns the current modification counter.)#" )
        .def("UnModify",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::UnModify),
             R"#(None)#" )
        .def("IsUpToDate",
             (Standard_Boolean (CDM_Document::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (CDM_Document::*)( const Standard_Integer  ) const>(&CDM_Document::IsUpToDate),
             R"#(returns true if the modification counter found in the given reference is equal to the actual modification counter of the To Document. This method is able to deal with a reference to a not retrieved document.)#"  , py::arg("aReferenceIdentifier"))
        .def("SetIsUpToDate",
             (void (CDM_Document::*)( const Standard_Integer  ) ) static_cast<void (CDM_Document::*)( const Standard_Integer  ) >(&CDM_Document::SetIsUpToDate),
             R"#(Resets the modification counter in the given reference to the actual modification counter of its To Document. This method should be called after the application has updated this document.)#"  , py::arg("aReferenceIdentifier"))
        .def("SetComment",
             (void (CDM_Document::*)( const TCollection_ExtendedString &  ) ) static_cast<void (CDM_Document::*)( const TCollection_ExtendedString &  ) >(&CDM_Document::SetComment),
             R"#(associates a comment with this document.)#"  , py::arg("aComment"))
        .def("AddComment",
             (void (CDM_Document::*)( const TCollection_ExtendedString &  ) ) static_cast<void (CDM_Document::*)( const TCollection_ExtendedString &  ) >(&CDM_Document::AddComment),
             R"#(appends a comment into comments of this document.)#"  , py::arg("aComment"))
        .def("SetComments",
             (void (CDM_Document::*)(  const NCollection_Sequence<TCollection_ExtendedString> &  ) ) static_cast<void (CDM_Document::*)(  const NCollection_Sequence<TCollection_ExtendedString> &  ) >(&CDM_Document::SetComments),
             R"#(associates a comments with this document.)#"  , py::arg("aComments"))
        .def("Comments",
             (void (CDM_Document::*)( NCollection_Sequence<TCollection_ExtendedString> &  ) const) static_cast<void (CDM_Document::*)( NCollection_Sequence<TCollection_ExtendedString> &  ) const>(&CDM_Document::Comments),
             R"#(returns the associated comments through <aComments>. Returns empty sequence if no comments are associated.)#"  , py::arg("aComments"))
        .def("Comment",
             (Standard_ExtString (CDM_Document::*)() const) static_cast<Standard_ExtString (CDM_Document::*)() const>(&CDM_Document::Comment),
             R"#(returns the first of associated comments. By defaut the comment is an empty string.)#" )
        .def("Presentation",
             (Standard_ExtString (CDM_Document::*)() ) static_cast<Standard_ExtString (CDM_Document::*)() >(&CDM_Document::Presentation),
             R"#(Returns an alphanumeric string identifying this document in a unique manner in the current process. The presentation may change when the document is stored. Tries to get the 'FileFormat`.Presentation resource This item is used to give a default presentation to the document.)#" )
        .def("IsStored",
             (Standard_Boolean (CDM_Document::*)() const) static_cast<Standard_Boolean (CDM_Document::*)() const>(&CDM_Document::IsStored),
             R"#(None)#" )
        .def("StorageVersion",
             (Standard_Integer (CDM_Document::*)() const) static_cast<Standard_Integer (CDM_Document::*)() const>(&CDM_Document::StorageVersion),
             R"#(returns the value of the modification counter at the time of storage. By default returns 0.)#" )
        .def("SetMetaData",
             (void (CDM_Document::*)( const opencascade::handle<CDM_MetaData> &  ) ) static_cast<void (CDM_Document::*)( const opencascade::handle<CDM_MetaData> &  ) >(&CDM_Document::SetMetaData),
             R"#(associates database information to a document which has been stored. The name of the document is now the name which has beenused to store the data.)#"  , py::arg("aMetaData"))
        .def("UnsetIsStored",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::UnsetIsStored),
             R"#(None)#" )
        .def("MetaData",
             (opencascade::handle<CDM_MetaData> (CDM_Document::*)() const) static_cast<opencascade::handle<CDM_MetaData> (CDM_Document::*)() const>(&CDM_Document::MetaData),
             R"#(None)#" )
        .def("Folder",
             (TCollection_ExtendedString (CDM_Document::*)() const) static_cast<TCollection_ExtendedString (CDM_Document::*)() const>(&CDM_Document::Folder),
             R"#(None)#" )
        .def("SetRequestedFolder",
             (void (CDM_Document::*)( const TCollection_ExtendedString &  ) ) static_cast<void (CDM_Document::*)( const TCollection_ExtendedString &  ) >(&CDM_Document::SetRequestedFolder),
             R"#(defines the folder in which the object should be stored.)#"  , py::arg("aFolder"))
        .def("RequestedFolder",
             (TCollection_ExtendedString (CDM_Document::*)() const) static_cast<TCollection_ExtendedString (CDM_Document::*)() const>(&CDM_Document::RequestedFolder),
             R"#(None)#" )
        .def("HasRequestedFolder",
             (Standard_Boolean (CDM_Document::*)() const) static_cast<Standard_Boolean (CDM_Document::*)() const>(&CDM_Document::HasRequestedFolder),
             R"#(None)#" )
        .def("SetRequestedName",
             (void (CDM_Document::*)( const TCollection_ExtendedString &  ) ) static_cast<void (CDM_Document::*)( const TCollection_ExtendedString &  ) >(&CDM_Document::SetRequestedName),
             R"#(defines the name under which the object should be stored.)#"  , py::arg("aName"))
        .def("RequestedName",
             (TCollection_ExtendedString (CDM_Document::*)() ) static_cast<TCollection_ExtendedString (CDM_Document::*)() >(&CDM_Document::RequestedName),
             R"#(determines under which the document is going to be store. By default the name of the document wil be -- used. If the document has no name its presentation will be used.)#" )
        .def("SetRequestedPreviousVersion",
             (void (CDM_Document::*)( const TCollection_ExtendedString &  ) ) static_cast<void (CDM_Document::*)( const TCollection_ExtendedString &  ) >(&CDM_Document::SetRequestedPreviousVersion),
             R"#(None)#"  , py::arg("aPreviousVersion"))
        .def("UnsetRequestedPreviousVersion",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::UnsetRequestedPreviousVersion),
             R"#(None)#" )
        .def("HasRequestedPreviousVersion",
             (Standard_Boolean (CDM_Document::*)() const) static_cast<Standard_Boolean (CDM_Document::*)() const>(&CDM_Document::HasRequestedPreviousVersion),
             R"#(None)#" )
        .def("RequestedPreviousVersion",
             (TCollection_ExtendedString (CDM_Document::*)() const) static_cast<TCollection_ExtendedString (CDM_Document::*)() const>(&CDM_Document::RequestedPreviousVersion),
             R"#(None)#" )
        .def("SetRequestedComment",
             (void (CDM_Document::*)( const TCollection_ExtendedString &  ) ) static_cast<void (CDM_Document::*)( const TCollection_ExtendedString &  ) >(&CDM_Document::SetRequestedComment),
             R"#(defines the Comment with which the object should be stored.)#"  , py::arg("aComment"))
        .def("RequestedComment",
             (TCollection_ExtendedString (CDM_Document::*)() const) static_cast<TCollection_ExtendedString (CDM_Document::*)() const>(&CDM_Document::RequestedComment),
             R"#(None)#" )
        .def("LoadResources",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::LoadResources),
             R"#(read (or rereads) the following resource.)#" )
        .def("FindFileExtension",
             (Standard_Boolean (CDM_Document::*)() ) static_cast<Standard_Boolean (CDM_Document::*)() >(&CDM_Document::FindFileExtension),
             R"#(None)#" )
        .def("FileExtension",
             (TCollection_ExtendedString (CDM_Document::*)() ) static_cast<TCollection_ExtendedString (CDM_Document::*)() >(&CDM_Document::FileExtension),
             R"#(gets the Desktop.Domain.Application.`FileFormat`.FileExtension resource.)#" )
        .def("FindDescription",
             (Standard_Boolean (CDM_Document::*)() ) static_cast<Standard_Boolean (CDM_Document::*)() >(&CDM_Document::FindDescription),
             R"#(None)#" )
        .def("Description",
             (TCollection_ExtendedString (CDM_Document::*)() ) static_cast<TCollection_ExtendedString (CDM_Document::*)() >(&CDM_Document::Description),
             R"#(gets the `FileFormat`.Description resource.)#" )
        .def("IsModified",
             (Standard_Boolean (CDM_Document::*)() const) static_cast<Standard_Boolean (CDM_Document::*)() const>(&CDM_Document::IsModified),
             R"#(returns true if the version is greater than the storage version)#" )
        .def("Print",
             (Standard_OStream & (CDM_Document::*)( std::ostream &  ) const) static_cast<Standard_OStream & (CDM_Document::*)( std::ostream &  ) const>(&CDM_Document::Print),
             R"#(None)#"  , py::arg("anOStream"))
        .def("IsOpened",
             (Standard_Boolean (CDM_Document::*)() const) static_cast<Standard_Boolean (CDM_Document::*)() const>(&CDM_Document::IsOpened),
             R"#(None)#" )
        .def("Open",
             (void (CDM_Document::*)( const opencascade::handle<CDM_Application> &  ) ) static_cast<void (CDM_Document::*)( const opencascade::handle<CDM_Application> &  ) >(&CDM_Document::Open),
             R"#(None)#"  , py::arg("anApplication"))
        .def("CanClose",
             (CDM_CanCloseStatus (CDM_Document::*)() const) static_cast<CDM_CanCloseStatus (CDM_Document::*)() const>(&CDM_Document::CanClose),
             R"#(None)#" )
        .def("Close",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::Close),
             R"#(None)#" )
        .def("Application",
             (const opencascade::handle<CDM_Application> & (CDM_Document::*)() const) static_cast<const opencascade::handle<CDM_Application> & (CDM_Document::*)() const>(&CDM_Document::Application),
             R"#(None)#" )
        .def("CanCloseReference",
             (Standard_Boolean (CDM_Document::*)( const opencascade::handle<CDM_Document> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (CDM_Document::*)( const opencascade::handle<CDM_Document> & ,  const Standard_Integer  ) const>(&CDM_Document::CanCloseReference),
             R"#(A referenced document may indicate through this virtual method that it does not allow the closing of aDocument which it references through the reference aReferenceIdentifier. By default returns Standard_True;;)#"  , py::arg("aDocument"),  py::arg("aReferenceIdentifier"))
        .def("CloseReference",
             (void (CDM_Document::*)( const opencascade::handle<CDM_Document> & ,  const Standard_Integer  ) ) static_cast<void (CDM_Document::*)( const opencascade::handle<CDM_Document> & ,  const Standard_Integer  ) >(&CDM_Document::CloseReference),
             R"#(A referenced document may update its internal data structure when {aDocument} which it references through the reference {aReferenceIdentifier} is being closed. By default this method does nothing.)#"  , py::arg("aDocument"),  py::arg("aReferenceIdentifier"))
        .def("IsOpened",
             (Standard_Boolean (CDM_Document::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (CDM_Document::*)( const Standard_Integer  ) const>(&CDM_Document::IsOpened),
             R"#(returns true if the document corresponding to the given reference has been retrieved and opened. Otherwise returns false. This method does not retrieve the referenced document)#"  , py::arg("aReferenceIdentifier"))
        .def("CreateReference",
             (void (CDM_Document::*)( const opencascade::handle<CDM_MetaData> & ,  const Standard_Integer ,  const opencascade::handle<CDM_Application> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (CDM_Document::*)( const opencascade::handle<CDM_MetaData> & ,  const Standard_Integer ,  const opencascade::handle<CDM_Application> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&CDM_Document::CreateReference),
             R"#(None)#"  , py::arg("aMetaData"),  py::arg("aReferenceIdentifier"),  py::arg("anApplication"),  py::arg("aToDocumentVersion"),  py::arg("UseStorageConfiguration"))
        .def("CreateReference",
             (Standard_Integer (CDM_Document::*)( const opencascade::handle<CDM_MetaData> & ,  const opencascade::handle<CDM_Application> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (CDM_Document::*)( const opencascade::handle<CDM_MetaData> & ,  const opencascade::handle<CDM_Application> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&CDM_Document::CreateReference),
             R"#(None)#"  , py::arg("aMetaData"),  py::arg("anApplication"),  py::arg("aDocumentVersion"),  py::arg("UseStorageConfiguration"))
        .def("ReferenceCounter",
             (Standard_Integer (CDM_Document::*)() const) static_cast<Standard_Integer (CDM_Document::*)() const>(&CDM_Document::ReferenceCounter),
             R"#(None)#" )
        .def("Update",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::Update),
             R"#(the following method should be used instead:)#" )
        .def("Reference",
             (opencascade::handle<CDM_Reference> (CDM_Document::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<CDM_Reference> (CDM_Document::*)( const Standard_Integer  ) const>(&CDM_Document::Reference),
             R"#(None)#"  , py::arg("aReferenceIdentifier"))
        .def("SetModifications",
             (void (CDM_Document::*)( const Standard_Integer  ) ) static_cast<void (CDM_Document::*)( const Standard_Integer  ) >(&CDM_Document::SetModifications),
             R"#(None)#"  , py::arg("Modifications"))
        .def("SetReferenceCounter",
             (void (CDM_Document::*)( const Standard_Integer  ) ) static_cast<void (CDM_Document::*)( const Standard_Integer  ) >(&CDM_Document::SetReferenceCounter),
             R"#(None)#"  , py::arg("aReferenceCounter"))
        .def("StorageFormatVersion",
             (Standard_Integer (CDM_Document::*)() const) static_cast<Standard_Integer (CDM_Document::*)() const>(&CDM_Document::StorageFormatVersion),
             R"#(Returns version of the format to be used to store the document)#" )
        .def("ChangeStorageFormatVersion",
             (void (CDM_Document::*)( const Standard_Integer  ) ) static_cast<void (CDM_Document::*)( const Standard_Integer  ) >(&CDM_Document::ChangeStorageFormatVersion),
             R"#(Sets <theVersion> of the format to be used to store the document)#"  , py::arg("theVersion"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDM_Document::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDM_Document::*)() const>(&CDM_Document::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FindFromPresentation_s",
                    (opencascade::handle<CDM_Document> (*)( const TCollection_ExtendedString &  ) ) static_cast<opencascade::handle<CDM_Document> (*)( const TCollection_ExtendedString &  ) >(&CDM_Document::FindFromPresentation),
                    R"#(returns the document having the given alphanumeric presentation.)#"  , py::arg("aPresentation"))
        .def_static("FindPresentation_s",
                    (Standard_Boolean (*)( const TCollection_ExtendedString &  ) ) static_cast<Standard_Boolean (*)( const TCollection_ExtendedString &  ) >(&CDM_Document::FindPresentation),
                    R"#(indicates whether a document having the given presentation does exist.)#"  , py::arg("aPresentation"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDM_Document::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDM_Document::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDM_MetaData ,opencascade::handle<CDM_MetaData>  , Standard_Transient >>(m.attr("CDM_MetaData"))
    // constructors
    // custom constructors
    // methods
        .def("IsRetrieved",
             (Standard_Boolean (CDM_MetaData::*)() const) static_cast<Standard_Boolean (CDM_MetaData::*)() const>(&CDM_MetaData::IsRetrieved),
             R"#(None)#" )
        .def("Document",
             (opencascade::handle<CDM_Document> (CDM_MetaData::*)() const) static_cast<opencascade::handle<CDM_Document> (CDM_MetaData::*)() const>(&CDM_MetaData::Document),
             R"#(None)#" )
        .def("Folder",
             (TCollection_ExtendedString (CDM_MetaData::*)() const) static_cast<TCollection_ExtendedString (CDM_MetaData::*)() const>(&CDM_MetaData::Folder),
             R"#(returns the folder in which the meta-data has to be created or has to be found.)#" )
        .def("Name",
             (TCollection_ExtendedString (CDM_MetaData::*)() const) static_cast<TCollection_ExtendedString (CDM_MetaData::*)() const>(&CDM_MetaData::Name),
             R"#(returns the name under which the meta-data has to be created or has to be found.)#" )
        .def("Version",
             (TCollection_ExtendedString (CDM_MetaData::*)() const) static_cast<TCollection_ExtendedString (CDM_MetaData::*)() const>(&CDM_MetaData::Version),
             R"#(returns the version under which the meta-data has to be found. Warning: raises NoSuchObject from Standard if no Version has been defined)#" )
        .def("HasVersion",
             (Standard_Boolean (CDM_MetaData::*)() const) static_cast<Standard_Boolean (CDM_MetaData::*)() const>(&CDM_MetaData::HasVersion),
             R"#(indicates that the version has to be taken into account when searching the corresponding meta-data.)#" )
        .def("FileName",
             (TCollection_ExtendedString (CDM_MetaData::*)() const) static_cast<TCollection_ExtendedString (CDM_MetaData::*)() const>(&CDM_MetaData::FileName),
             R"#(None)#" )
        .def("Print",
             (Standard_OStream & (CDM_MetaData::*)( std::ostream &  ) const) static_cast<Standard_OStream & (CDM_MetaData::*)( std::ostream &  ) const>(&CDM_MetaData::Print),
             R"#(None)#"  , py::arg("anOStream"))
        .def("Path",
             (TCollection_ExtendedString (CDM_MetaData::*)() const) static_cast<TCollection_ExtendedString (CDM_MetaData::*)() const>(&CDM_MetaData::Path),
             R"#(None)#" )
        .def("UnsetDocument",
             (void (CDM_MetaData::*)() ) static_cast<void (CDM_MetaData::*)() >(&CDM_MetaData::UnsetDocument),
             R"#(None)#" )
        .def("IsReadOnly",
             (Standard_Boolean (CDM_MetaData::*)() const) static_cast<Standard_Boolean (CDM_MetaData::*)() const>(&CDM_MetaData::IsReadOnly),
             R"#(None)#" )
        .def("SetIsReadOnly",
             (void (CDM_MetaData::*)() ) static_cast<void (CDM_MetaData::*)() >(&CDM_MetaData::SetIsReadOnly),
             R"#(None)#" )
        .def("UnsetIsReadOnly",
             (void (CDM_MetaData::*)() ) static_cast<void (CDM_MetaData::*)() >(&CDM_MetaData::UnsetIsReadOnly),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDM_MetaData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDM_MetaData::*)() const>(&CDM_MetaData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("LookUp_s",
                    (opencascade::handle<CDM_MetaData> (*)( const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<CDM_MetaData> (*)( const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const Standard_Boolean  ) >(&CDM_MetaData::LookUp),
                    R"#(None)#"  , py::arg("aFolder"),  py::arg("aName"),  py::arg("aPath"),  py::arg("aFileName"),  py::arg("ReadOnly"))
        .def_static("LookUp_s",
                    (opencascade::handle<CDM_MetaData> (*)( const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<CDM_MetaData> (*)( const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const TCollection_ExtendedString & ,  const Standard_Boolean  ) >(&CDM_MetaData::LookUp),
                    R"#(None)#"  , py::arg("aFolder"),  py::arg("aName"),  py::arg("aPath"),  py::arg("aVersion"),  py::arg("aFileName"),  py::arg("ReadOnly"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDM_MetaData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDM_MetaData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDM_Reference ,opencascade::handle<CDM_Reference>  , Standard_Transient >>(m.attr("CDM_Reference"))
    // constructors
    // custom constructors
    // methods
        .def("FromDocument",
             (opencascade::handle<CDM_Document> (CDM_Reference::*)() ) static_cast<opencascade::handle<CDM_Document> (CDM_Reference::*)() >(&CDM_Reference::FromDocument),
             R"#(None)#" )
        .def("ToDocument",
             (opencascade::handle<CDM_Document> (CDM_Reference::*)() ) static_cast<opencascade::handle<CDM_Document> (CDM_Reference::*)() >(&CDM_Reference::ToDocument),
             R"#(None)#" )
        .def("ReferenceIdentifier",
             (Standard_Integer (CDM_Reference::*)() ) static_cast<Standard_Integer (CDM_Reference::*)() >(&CDM_Reference::ReferenceIdentifier),
             R"#(None)#" )
        .def("DocumentVersion",
             (Standard_Integer (CDM_Reference::*)() const) static_cast<Standard_Integer (CDM_Reference::*)() const>(&CDM_Reference::DocumentVersion),
             R"#(None)#" )
        .def("IsReadOnly",
             (Standard_Boolean (CDM_Reference::*)() const) static_cast<Standard_Boolean (CDM_Reference::*)() const>(&CDM_Reference::IsReadOnly),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDM_Reference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDM_Reference::*)() const>(&CDM_Reference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDM_Reference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&CDM_Reference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDM_ReferenceIterator , shared_ptr<CDM_ReferenceIterator>  >>(m.attr("CDM_ReferenceIterator"))
    // constructors
        .def(py::init< const opencascade::handle<CDM_Document> & >()  , py::arg("aDocument") )
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (CDM_ReferenceIterator::*)() const) static_cast<Standard_Boolean (CDM_ReferenceIterator::*)() const>(&CDM_ReferenceIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (CDM_ReferenceIterator::*)() ) static_cast<void (CDM_ReferenceIterator::*)() >(&CDM_ReferenceIterator::Next),
             R"#(None)#" )
        .def("Document",
             (opencascade::handle<CDM_Document> (CDM_ReferenceIterator::*)() const) static_cast<opencascade::handle<CDM_Document> (CDM_ReferenceIterator::*)() const>(&CDM_ReferenceIterator::Document),
             R"#(None)#" )
        .def("ReferenceIdentifier",
             (Standard_Integer (CDM_ReferenceIterator::*)() const) static_cast<Standard_Integer (CDM_ReferenceIterator::*)() const>(&CDM_ReferenceIterator::ReferenceIdentifier),
             R"#(None)#" )
        .def("DocumentVersion",
             (Standard_Integer (CDM_ReferenceIterator::*)() const) static_cast<Standard_Integer (CDM_ReferenceIterator::*)() const>(&CDM_ReferenceIterator::DocumentVersion),
             R"#(returns the Document Version in the reference.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/CDM_MetaData.hxx
// ./opencascade/CDM_PresentationDirectory.hxx
// ./opencascade/CDM_NamesDirectory.hxx
// ./opencascade/CDM_Reference.hxx
// ./opencascade/CDM_ReferenceIterator.hxx
// ./opencascade/CDM_MapIteratorOfMapOfDocument.hxx
// ./opencascade/CDM_MetaDataLookUpTable.hxx
// ./opencascade/CDM_Application.hxx
// ./opencascade/CDM_ListIteratorOfListOfDocument.hxx
// ./opencascade/CDM_CanCloseStatus.hxx
// ./opencascade/CDM_DataMapIteratorOfPresentationDirectory.hxx
// ./opencascade/CDM_ListOfReferences.hxx
// ./opencascade/CDM_ListOfDocument.hxx
// ./opencascade/CDM_DocumentPointer.hxx
// ./opencascade/CDM_DataMapIteratorOfMetaDataLookUpTable.hxx
// ./opencascade/CDM_Document.hxx
// ./opencascade/CDM_MapOfDocument.hxx
// ./opencascade/CDM_ListIteratorOfListOfReferences.hxx
// ./opencascade/CDM_DocumentHasher.hxx

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<CDM_Reference> >(m,"CDM_ListOfReferences");  
    register_template_NCollection_List<opencascade::handle<CDM_Document> >(m,"CDM_ListOfDocument");  
    register_template_NCollection_Map<opencascade::handle<CDM_Document>, CDM_DocumentHasher>(m,"CDM_MapOfDocument");  
    register_template_NCollection_DefaultHasher<opencascade::handle<CDM_Document> >(m,"CDM_DocumentHasher");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
