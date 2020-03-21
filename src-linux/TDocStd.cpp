
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TDocStd_XLink.hxx>
#include <TDocStd_Document.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Data.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDocStd_Document.hxx>
#include <TDocStd_Application.hxx>
#include <TDocStd_Document.hxx>
#include <TDocStd_Context.hxx>
#include <TDocStd_XLink.hxx>
#include <TDocStd_XLinkIterator.hxx>
#include <TDocStd_XLinkTool.hxx>
#include <TDocStd_Owner.hxx>
#include <TDocStd_Modified.hxx>
#include <TDocStd_XLinkRoot.hxx>
#include <TDocStd_PathParser.hxx>
#include <TDocStd_CompoundDelta.hxx>
#include <TDocStd_ApplicationDelta.hxx>
#include <TDocStd_MultiTransactionManager.hxx>
#include <TDocStd_XLinkRoot.hxx>
#include <TDocStd_XLinkIterator.hxx>
#include <TDF_Label.hxx>
#include <TDF_Reference.hxx>
#include <Standard_GUID.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDocStd_XLinkIterator.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Data.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDocStd_CompoundDelta.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <Resource_Manager.hxx>
#include <TDocStd_Document.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TDocStd_Document.hxx>

// module includes
#include <TDocStd.hxx>
#include <TDocStd_Application.hxx>
#include <TDocStd_ApplicationDelta.hxx>
#include <TDocStd_CompoundDelta.hxx>
#include <TDocStd_Context.hxx>
#include <TDocStd_DataMapIteratorOfLabelIDMapDataMap.hxx>
#include <TDocStd_Document.hxx>
#include <TDocStd_LabelIDMapDataMap.hxx>
#include <TDocStd_Modified.hxx>
#include <TDocStd_MultiTransactionManager.hxx>
#include <TDocStd_Owner.hxx>
#include <TDocStd_PathParser.hxx>
#include <TDocStd_SequenceOfApplicationDelta.hxx>
#include <TDocStd_SequenceOfDocument.hxx>
#include <TDocStd_XLink.hxx>
#include <TDocStd_XLinkIterator.hxx>
#include <TDocStd_XLinkPtr.hxx>
#include <TDocStd_XLinkRoot.hxx>
#include <TDocStd_XLinkTool.hxx>

// template related includes
// ./opencascade/TDocStd_SequenceOfDocument.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDocStd_SequenceOfApplicationDelta.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDocStd_LabelIDMapDataMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDocStd_LabelIDMapDataMap.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <PCDM_RetrievalDriver.hxx>
#include <PCDM_StorageDriver.hxx>

// Module definiiton
void register_TDocStd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TDocStd"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<TDocStd , shared_ptr<TDocStd>>(m,"TDocStd");

    static_cast<py::class_<TDocStd , shared_ptr<TDocStd> >>(m.attr("TDocStd"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IDList_s",
                    (void (*)( NCollection_List<Standard_GUID> & ) ) static_cast<void (*)( NCollection_List<Standard_GUID> & ) >(&TDocStd::IDList),
                    R"#(specific GUID of this package ============================= Appends to <anIDList> the list of the attributes IDs of this package. CAUTION: <anIDList> is NOT cleared before use.)#"  , py::arg("anIDList"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_Application ,opencascade::handle<TDocStd_Application> , CDF_Application>>(m.attr("TDocStd_Application"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsDriverLoaded",
             (Standard_Boolean (TDocStd_Application::*)() const) static_cast<Standard_Boolean (TDocStd_Application::*)() const>(&TDocStd_Application::IsDriverLoaded),
             R"#(Check if meta data driver was successfully loaded by the application constructor)#" )
        .def("MessageDriver",
             (opencascade::handle<Message_Messenger> (TDocStd_Application::*)() ) static_cast<opencascade::handle<Message_Messenger> (TDocStd_Application::*)() >(&TDocStd_Application::MessageDriver),
             R"#(Redefines message driver, by default outputs to std::cout.)#" )
        .def("Resources",
             (opencascade::handle<Resource_Manager> (TDocStd_Application::*)() ) static_cast<opencascade::handle<Resource_Manager> (TDocStd_Application::*)() >(&TDocStd_Application::Resources),
             R"#(Returns resource manager defining supported persistent formats.)#" )
        .def("ResourcesName",
             (Standard_CString (TDocStd_Application::*)() ) static_cast<Standard_CString (TDocStd_Application::*)() >(&TDocStd_Application::ResourcesName),
             R"#(Returns the name of the file containing the resources of this application, for support of legacy method of loading formats data from resource files.)#" )
        .def("DefineFormat",
             (void (TDocStd_Application::*)( const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const opencascade::handle<PCDM_RetrievalDriver> & , const opencascade::handle<PCDM_StorageDriver> & ) ) static_cast<void (TDocStd_Application::*)( const TCollection_AsciiString & , const TCollection_AsciiString & , const TCollection_AsciiString & , const opencascade::handle<PCDM_RetrievalDriver> & , const opencascade::handle<PCDM_StorageDriver> & ) >(&TDocStd_Application::DefineFormat),
             R"#(Sets up resources and registers read and storage drivers for the specified format.)#"  , py::arg("theFormat"),  py::arg("theDescription"),  py::arg("theExtension"),  py::arg("theReader"),  py::arg("theWriter"))
        .def("ReadingFormats",
             (void (TDocStd_Application::*)( NCollection_Sequence<TCollection_AsciiString> & ) ) static_cast<void (TDocStd_Application::*)( NCollection_Sequence<TCollection_AsciiString> & ) >(&TDocStd_Application::ReadingFormats),
             R"#(Returns the sequence of reading formats supported by the application.)#"  , py::arg("theFormats"))
        .def("WritingFormats",
             (void (TDocStd_Application::*)( NCollection_Sequence<TCollection_AsciiString> & ) ) static_cast<void (TDocStd_Application::*)( NCollection_Sequence<TCollection_AsciiString> & ) >(&TDocStd_Application::WritingFormats),
             R"#(Returns the sequence of writing formats supported by the application.)#"  , py::arg("theFormats"))
        .def("NbDocuments",
             (Standard_Integer (TDocStd_Application::*)() const) static_cast<Standard_Integer (TDocStd_Application::*)() const>(&TDocStd_Application::NbDocuments),
             R"#(returns the number of documents handled by the current applicative session.)#" )
        .def("GetDocument",
             (void (TDocStd_Application::*)( const Standard_Integer , opencascade::handle<TDocStd_Document> & ) const) static_cast<void (TDocStd_Application::*)( const Standard_Integer , opencascade::handle<TDocStd_Document> & ) const>(&TDocStd_Application::GetDocument),
             R"#(Constructs the new document aDoc. aDoc is identified by the index index which is any integer between 1 and n where n is the number of documents returned by NbDocument. Example Handle(TDocStd_Application) anApp; if (!CafTest::Find(A)) return 1; Handle(TDocStd) aDoc; Standard_Integer nbdoc = anApp->NbDocuments(); for (Standard_Integer i = 1; i <= nbdoc; i++) { aApp->GetDocument(i,aDoc);)#"  , py::arg("index"),  py::arg("aDoc"))
        .def("NewDocument",
             (void (TDocStd_Application::*)( const TCollection_ExtendedString & , opencascade::handle<TDocStd_Document> & ) ) static_cast<void (TDocStd_Application::*)( const TCollection_ExtendedString & , opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Application::NewDocument),
             R"#(Constructs the empty new document aDoc. This document will have the format format. If InitDocument is redefined for a specific application, the new document is handled by the applicative session.)#"  , py::arg("format"),  py::arg("aDoc"))
        .def("InitDocument",
             (void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) const) static_cast<void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) const>(&TDocStd_Application::InitDocument),
             R"#(Initialize the document aDoc for the applicative session. This virtual function is called by NewDocument and is to be redefined for each specific application. Modified flag (different of disk version) ============= to open/save a document =======================)#"  , py::arg("aDoc"))
        .def("Close",
             (void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) ) static_cast<void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Application::Close),
             R"#(Close the given document. the document is not any more handled by the applicative session.)#"  , py::arg("aDoc"))
        .def("IsInSession",
             (Standard_Integer (TDocStd_Application::*)( const TCollection_ExtendedString & ) const) static_cast<Standard_Integer (TDocStd_Application::*)( const TCollection_ExtendedString & ) const>(&TDocStd_Application::IsInSession),
             R"#(Returns an index for the document found in the path path in this applicative session. If the returned value is 0, the document is not present in the applicative session. This method can be used for the interactive part of an application. For instance, on a call to Open, the document to be opened may already be in memory. IsInSession checks to see if this is the case. Open can be made to depend on the value of the index returned: if IsInSession returns 0, the document is opened; if it returns another value, a message is displayed asking the user if he wants to override the version of the document in memory. Example: Standard_Integer insession = A->IsInSession(aDoc); if (insession > 0) { std::cout << "document " << insession << " is already in session" << std::endl; return 0; })#"  , py::arg("path"))
        .def("Open",
             (PCDM_ReaderStatus (TDocStd_Application::*)( const TCollection_ExtendedString & , opencascade::handle<TDocStd_Document> & ) ) static_cast<PCDM_ReaderStatus (TDocStd_Application::*)( const TCollection_ExtendedString & , opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Application::Open),
             R"#(Retrieves the document aDoc stored under the name aName in the directory directory. In order not to override a version of aDoc which is already in memory, this method can be made to depend on the value returned by IsInSession.)#"  , py::arg("path"),  py::arg("aDoc"))
        .def("Open",
             (PCDM_ReaderStatus (TDocStd_Application::*)( std::istream & , opencascade::handle<TDocStd_Document> & ) ) static_cast<PCDM_ReaderStatus (TDocStd_Application::*)( std::istream & , opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Application::Open),
             R"#(Retrieves aDoc from standard SEEKABLE stream theIStream. the stream should support SEEK fuctionality)#"  , py::arg("theIStream"),  py::arg("theDoc"))
        .def("SaveAs",
             (PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & , const TCollection_ExtendedString & ) ) static_cast<PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & , const TCollection_ExtendedString & ) >(&TDocStd_Application::SaveAs),
             R"#(Save the active document in the file <name> in the path <path> ; o verwrites the file if it already exists.)#"  , py::arg("aDoc"),  py::arg("path"))
        .def("SaveAs",
             (PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & , std::ostream & ) ) static_cast<PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & , std::ostream & ) >(&TDocStd_Application::SaveAs),
             R"#(Save theDoc to standard SEEKABLE stream theOStream. the stream should support SEEK fuctionality)#"  , py::arg("theDoc"),  py::arg("theOStream"))
        .def("Save",
             (PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) ) static_cast<PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Application::Save),
             R"#(Save aDoc active document. Exceptions: Standard_NotImplemented if the document was not retrieved in the applicative session by using Open.)#"  , py::arg("aDoc"))
        .def("SaveAs",
             (PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & , const TCollection_ExtendedString & , TCollection_ExtendedString & ) ) static_cast<PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & , const TCollection_ExtendedString & , TCollection_ExtendedString & ) >(&TDocStd_Application::SaveAs),
             R"#(Save the active document in the file <name> in the path <path> . overwrite the file if it already exist.)#"  , py::arg("aDoc"),  py::arg("path"),  py::arg("theStatusMessage"))
        .def("SaveAs",
             (PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & , std::ostream & , TCollection_ExtendedString & ) ) static_cast<PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & , std::ostream & , TCollection_ExtendedString & ) >(&TDocStd_Application::SaveAs),
             R"#(Save theDoc TO standard SEEKABLE stream theOStream. the stream should support SEEK fuctionality)#"  , py::arg("theDoc"),  py::arg("theOStream"),  py::arg("theStatusMessage"))
        .def("Save",
             (PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & , TCollection_ExtendedString & ) ) static_cast<PCDM_StoreStatus (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & , TCollection_ExtendedString & ) >(&TDocStd_Application::Save),
             R"#(Save the document overwriting the previous file)#"  , py::arg("aDoc"),  py::arg("theStatusMessage"))
        .def("OnOpenTransaction",
             (void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) ) static_cast<void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Application::OnOpenTransaction),
             R"#(Notification that is fired at each OpenTransaction event.)#"  , py::arg("theDoc"))
        .def("OnCommitTransaction",
             (void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) ) static_cast<void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Application::OnCommitTransaction),
             R"#(Notification that is fired at each CommitTransaction event.)#"  , py::arg("theDoc"))
        .def("OnAbortTransaction",
             (void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) ) static_cast<void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Application::OnAbortTransaction),
             R"#(Notification that is fired at each AbortTransaction event.)#"  , py::arg("theDoc"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDocStd_Application::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDocStd_Application::*)() const>(&TDocStd_Application::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_Application::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDocStd_Application::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_ApplicationDelta ,opencascade::handle<TDocStd_ApplicationDelta> , Standard_Transient>>(m.attr("TDocStd_ApplicationDelta"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("GetDocuments",
             (TDocStd_SequenceOfDocument & (TDocStd_ApplicationDelta::*)() ) static_cast<TDocStd_SequenceOfDocument & (TDocStd_ApplicationDelta::*)() >(&TDocStd_ApplicationDelta::GetDocuments),
             R"#(None)#" )
        .def("GetName",
             (const TCollection_ExtendedString & (TDocStd_ApplicationDelta::*)() const) static_cast<const TCollection_ExtendedString & (TDocStd_ApplicationDelta::*)() const>(&TDocStd_ApplicationDelta::GetName),
             R"#(None)#" )
        .def("SetName",
             (void (TDocStd_ApplicationDelta::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDocStd_ApplicationDelta::*)( const TCollection_ExtendedString & ) >(&TDocStd_ApplicationDelta::SetName),
             R"#(None)#"  , py::arg("theName"))
        .def("Dump",
             (void (TDocStd_ApplicationDelta::*)( std::ostream & ) const) static_cast<void (TDocStd_ApplicationDelta::*)( std::ostream & ) const>(&TDocStd_ApplicationDelta::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDocStd_ApplicationDelta::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDocStd_ApplicationDelta::*)() const>(&TDocStd_ApplicationDelta::DynamicType),
             R"#(None)#" )
        .def("GetDocuments",
             (TDocStd_SequenceOfDocument & (TDocStd_ApplicationDelta::*)() ) static_cast<TDocStd_SequenceOfDocument & (TDocStd_ApplicationDelta::*)() >(&TDocStd_ApplicationDelta::GetDocuments),
             R"#(None)#" )
        .def("GetName",
             (const TCollection_ExtendedString & (TDocStd_ApplicationDelta::*)() const) static_cast<const TCollection_ExtendedString & (TDocStd_ApplicationDelta::*)() const>(&TDocStd_ApplicationDelta::GetName),
             R"#(None)#" )
        .def("SetName",
             (void (TDocStd_ApplicationDelta::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDocStd_ApplicationDelta::*)( const TCollection_ExtendedString & ) >(&TDocStd_ApplicationDelta::SetName),
             R"#(None)#"  , py::arg("theName"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_ApplicationDelta::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDocStd_ApplicationDelta::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_CompoundDelta ,opencascade::handle<TDocStd_CompoundDelta> , TDF_Delta>>(m.attr("TDocStd_CompoundDelta"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDocStd_CompoundDelta::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDocStd_CompoundDelta::*)() const>(&TDocStd_CompoundDelta::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_CompoundDelta::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDocStd_CompoundDelta::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_Context , shared_ptr<TDocStd_Context> >>(m.attr("TDocStd_Context"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetModifiedReferences",
             (void (TDocStd_Context::*)( const Standard_Boolean ) ) static_cast<void (TDocStd_Context::*)( const Standard_Boolean ) >(&TDocStd_Context::SetModifiedReferences),
             R"#(None)#"  , py::arg("Mod"))
        .def("ModifiedReferences",
             (Standard_Boolean (TDocStd_Context::*)() const) static_cast<Standard_Boolean (TDocStd_Context::*)() const>(&TDocStd_Context::ModifiedReferences),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_Document ,opencascade::handle<TDocStd_Document> , CDM_Document>>(m.attr("TDocStd_Document"))
    // constructors
        .def(py::init< const TCollection_ExtendedString & >()  , py::arg("astorageformat") )
    // custom constructors
    // methods
        .def("IsSaved",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::IsSaved),
             R"#(the document is saved in a file.)#" )
        .def("IsChanged",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::IsChanged),
             R"#(returns True if document differs from the state of last saving. this method have to be called only wroking in the transaction mode)#" )
        .def("SetSaved",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::SetSaved),
             R"#(This method have to be called to show document that it has been saved)#" )
        .def("SetSavedTime",
             (void (TDocStd_Document::*)( const Standard_Integer ) ) static_cast<void (TDocStd_Document::*)( const Standard_Integer ) >(&TDocStd_Document::SetSavedTime),
             R"#(Say to document what it is not saved. Use value, returned earlier by GetSavedTime().)#"  , py::arg("theTime"))
        .def("GetSavedTime",
             (Standard_Integer (TDocStd_Document::*)() const) static_cast<Standard_Integer (TDocStd_Document::*)() const>(&TDocStd_Document::GetSavedTime),
             R"#(Returns value of <mySavedTime> to be used later in SetSavedTime())#" )
        .def("GetName",
             (TCollection_ExtendedString (TDocStd_Document::*)() const) static_cast<TCollection_ExtendedString (TDocStd_Document::*)() const>(&TDocStd_Document::GetName),
             R"#(raise if <me> is not saved.)#" )
        .def("GetPath",
             (TCollection_ExtendedString (TDocStd_Document::*)() const) static_cast<TCollection_ExtendedString (TDocStd_Document::*)() const>(&TDocStd_Document::GetPath),
             R"#(returns the OS path of the file, in wich one <me> is saved. Raise an exception if <me> is not saved.)#" )
        .def("SetData",
             (void (TDocStd_Document::*)( const opencascade::handle<TDF_Data> & ) ) static_cast<void (TDocStd_Document::*)( const opencascade::handle<TDF_Data> & ) >(&TDocStd_Document::SetData),
             R"#(None)#"  , py::arg("data"))
        .def("GetData",
             (opencascade::handle<TDF_Data> (TDocStd_Document::*)() const) static_cast<opencascade::handle<TDF_Data> (TDocStd_Document::*)() const>(&TDocStd_Document::GetData),
             R"#(None)#" )
        .def("Main",
             (TDF_Label (TDocStd_Document::*)() const) static_cast<TDF_Label (TDocStd_Document::*)() const>(&TDocStd_Document::Main),
             R"#(Returns the main label in this data framework. By definition, this is the label with the entry 0:1.)#" )
        .def("IsEmpty",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::IsEmpty),
             R"#(Returns True if the main label has no attributes)#" )
        .def("IsValid",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::IsValid),
             R"#(Returns False if the document has been modified but not recomputed.)#" )
        .def("SetModified",
             (void (TDocStd_Document::*)( const TDF_Label & ) ) static_cast<void (TDocStd_Document::*)( const TDF_Label & ) >(&TDocStd_Document::SetModified),
             R"#(Notify the label as modified, the Document becomes UnValid. returns True if <L> has been notified as modified.)#"  , py::arg("L"))
        .def("PurgeModified",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::PurgeModified),
             R"#(Remove all modifications. After this call The document becomesagain Valid.)#" )
        .def("GetModified",
             (const TDF_LabelMap & (TDocStd_Document::*)() const) static_cast<const TDF_LabelMap & (TDocStd_Document::*)() const>(&TDocStd_Document::GetModified),
             R"#(Returns the labels which have been modified in this document.)#" )
        .def("NewCommand",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::NewCommand),
             R"#(Launches a new command. This command may be undone.)#" )
        .def("HasOpenCommand",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::HasOpenCommand),
             R"#(returns True if a Command transaction is open in the curret .)#" )
        .def("OpenCommand",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::OpenCommand),
             R"#(Opens a new command transaction in this document. You can use HasOpenCommand to see whether a command is already open. Exceptions Standard_DomainError if a command is already open in this document.)#" )
        .def("CommitCommand",
             (Standard_Boolean (TDocStd_Document::*)() ) static_cast<Standard_Boolean (TDocStd_Document::*)() >(&TDocStd_Document::CommitCommand),
             R"#(Commits documents transactions and fills the transaction manager with documents that have been changed during the transaction. If no command transaction is open, nothing is done. Returns True if a new delta has been added to myUndos.)#" )
        .def("AbortCommand",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::AbortCommand),
             R"#(Abort the Command transaction. Does nothing If there is no Command transaction open.)#" )
        .def("GetUndoLimit",
             (Standard_Integer (TDocStd_Document::*)() const) static_cast<Standard_Integer (TDocStd_Document::*)() const>(&TDocStd_Document::GetUndoLimit),
             R"#(The current limit on the number of undos)#" )
        .def("SetUndoLimit",
             (void (TDocStd_Document::*)( const Standard_Integer ) ) static_cast<void (TDocStd_Document::*)( const Standard_Integer ) >(&TDocStd_Document::SetUndoLimit),
             R"#(Set the limit on the number of Undo Delta stored 0 will disable Undo on the document A negative value means no limit. Note that by default Undo is disabled. Enabling it will take effect with the next call to NewCommand. Of course this limit is the same for Redo)#"  , py::arg("L"))
        .def("ClearUndos",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::ClearUndos),
             R"#(Remove all stored Undos and Redos)#" )
        .def("ClearRedos",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::ClearRedos),
             R"#(Remove all stored Redos)#" )
        .def("GetAvailableUndos",
             (Standard_Integer (TDocStd_Document::*)() const) static_cast<Standard_Integer (TDocStd_Document::*)() const>(&TDocStd_Document::GetAvailableUndos),
             R"#(Returns the number of undos stored in this document. If this figure is greater than 0, the method Undo can be used.)#" )
        .def("Undo",
             (Standard_Boolean (TDocStd_Document::*)() ) static_cast<Standard_Boolean (TDocStd_Document::*)() >(&TDocStd_Document::Undo),
             R"#(Will UNDO one step, returns False if no undo was done (Undos == 0). Otherwise, true is returned and one step in the list of undoes is undone.)#" )
        .def("GetAvailableRedos",
             (Standard_Integer (TDocStd_Document::*)() const) static_cast<Standard_Integer (TDocStd_Document::*)() const>(&TDocStd_Document::GetAvailableRedos),
             R"#(Returns the number of redos stored in this document. If this figure is greater than 0, the method Redo can be used.)#" )
        .def("Redo",
             (Standard_Boolean (TDocStd_Document::*)() ) static_cast<Standard_Boolean (TDocStd_Document::*)() >(&TDocStd_Document::Redo),
             R"#(Will REDO one step, returns False if no redo was done (Redos == 0). Otherwise, true is returned, and one step in the list of redoes is done again.)#" )
        .def("GetUndos",
             (const TDF_DeltaList & (TDocStd_Document::*)() const) static_cast<const TDF_DeltaList & (TDocStd_Document::*)() const>(&TDocStd_Document::GetUndos),
             R"#(None)#" )
        .def("GetRedos",
             (const TDF_DeltaList & (TDocStd_Document::*)() const) static_cast<const TDF_DeltaList & (TDocStd_Document::*)() const>(&TDocStd_Document::GetRedos),
             R"#(None)#" )
        .def("RemoveFirstUndo",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::RemoveFirstUndo),
             R"#(Removes the first undo in the list of document undos. It is used in the application when the undo limit is exceed.)#" )
        .def("InitDeltaCompaction",
             (Standard_Boolean (TDocStd_Document::*)() ) static_cast<Standard_Boolean (TDocStd_Document::*)() >(&TDocStd_Document::InitDeltaCompaction),
             R"#(Initializes the procedure of delta compaction Returns false if there is no delta to compact Marks the last delta as a "from" delta)#" )
        .def("PerformDeltaCompaction",
             (Standard_Boolean (TDocStd_Document::*)() ) static_cast<Standard_Boolean (TDocStd_Document::*)() >(&TDocStd_Document::PerformDeltaCompaction),
             R"#(Performs the procedure of delta compaction Makes all deltas starting from "from" delta till the last one to be one delta.)#" )
        .def("UpdateReferences",
             (void (TDocStd_Document::*)( const TCollection_AsciiString & ) ) static_cast<void (TDocStd_Document::*)( const TCollection_AsciiString & ) >(&TDocStd_Document::UpdateReferences),
             R"#(Set modifications on labels impacted by external references to the entry. The document becomes invalid and must be recomputed.)#"  , py::arg("aDocEntry"))
        .def("Recompute",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::Recompute),
             R"#(Recompute if the document was not valid and propagate the reccorded modification.)#" )
        .def("Update",
             (void (TDocStd_Document::*)( const opencascade::handle<CDM_Document> & , const Standard_Integer , const Standard_Address ) ) static_cast<void (TDocStd_Document::*)( const opencascade::handle<CDM_Document> & , const Standard_Integer , const Standard_Address ) >(&TDocStd_Document::Update),
             R"#(This method Update will be called to signal the end of the modified references list. The document should be recomputed and UpdateFromDocuments should be called. Update should returns True in case of success, false otherwise. In case of Failure, additional information can be given in ErrorString. Update the document by propagation ================================== Update the document from internal stored modifications. If you want to undoing this operation, please call NewCommand before. to change format (advanced programming) ================)#"  , py::arg("aToDocument"),  py::arg("aReferenceIdentifier"),  py::arg("aModifContext"))
        .def("StorageFormat",
             (TCollection_ExtendedString (TDocStd_Document::*)() const) static_cast<TCollection_ExtendedString (TDocStd_Document::*)() const>(&TDocStd_Document::StorageFormat),
             R"#(None)#" )
        .def("SetEmptyLabelsSavingMode",
             (void (TDocStd_Document::*)( const Standard_Boolean ) ) static_cast<void (TDocStd_Document::*)( const Standard_Boolean ) >(&TDocStd_Document::SetEmptyLabelsSavingMode),
             R"#(Sets saving mode for empty labels. If Standard_True, empty labels will be saved.)#"  , py::arg("isAllowed"))
        .def("EmptyLabelsSavingMode",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::EmptyLabelsSavingMode),
             R"#(Returns saving mode for empty labels.)#" )
        .def("ChangeStorageFormat",
             (void (TDocStd_Document::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDocStd_Document::*)( const TCollection_ExtendedString & ) >(&TDocStd_Document::ChangeStorageFormat),
             R"#(methods for the nested transaction mode)#"  , py::arg("newStorageFormat"))
        .def("SetNestedTransactionMode",
             (void (TDocStd_Document::*)( const Standard_Boolean ) ) static_cast<void (TDocStd_Document::*)( const Standard_Boolean ) >(&TDocStd_Document::SetNestedTransactionMode),
             R"#(Sets nested transaction mode if isAllowed == Standard_True)#"  , py::arg("isAllowed")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsNestedTransactionMode",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::IsNestedTransactionMode),
             R"#(Returns Standard_True if mode is set)#" )
        .def("SetModificationMode",
             (void (TDocStd_Document::*)( const Standard_Boolean ) ) static_cast<void (TDocStd_Document::*)( const Standard_Boolean ) >(&TDocStd_Document::SetModificationMode),
             R"#(if theTransactionOnly is True changes is denied outside transactions)#"  , py::arg("theTransactionOnly"))
        .def("ModificationMode",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::ModificationMode),
             R"#(returns True if changes allowed only inside transactions)#" )
        .def("BeforeClose",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::BeforeClose),
             R"#(Prepares document for closing)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDocStd_Document::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDocStd_Document::*)() const>(&TDocStd_Document::DynamicType),
             R"#(None)#" )
        .def("SetNestedTransactionMode",
             (void (TDocStd_Document::*)( const Standard_Boolean ) ) static_cast<void (TDocStd_Document::*)( const Standard_Boolean ) >(&TDocStd_Document::SetNestedTransactionMode),
             R"#(Sets nested transaction mode if isAllowed == Standard_True)#"  , py::arg("isAllowed"))
        .def("IsNestedTransactionMode",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::IsNestedTransactionMode),
             R"#(Returns Standard_True if mode is set)#" )
        .def("IsChanged",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::IsChanged),
             R"#(returns True if document differs from the state of last saving. this method have to be called only wroking in the transaction mode)#" )
        .def("SetSaved",
             (void (TDocStd_Document::*)() ) static_cast<void (TDocStd_Document::*)() >(&TDocStd_Document::SetSaved),
             R"#(This method have to be called to show document that it has been saved)#" )
        .def("SetModificationMode",
             (void (TDocStd_Document::*)( const Standard_Boolean ) ) static_cast<void (TDocStd_Document::*)( const Standard_Boolean ) >(&TDocStd_Document::SetModificationMode),
             R"#(if theTransactionOnly is True changes is denied outside transactions)#"  , py::arg("theTransactionOnly"))
        .def("ModificationMode",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::ModificationMode),
             R"#(returns True if changes allowed only inside transactions)#" )
        .def("SetSavedTime",
             (void (TDocStd_Document::*)( const Standard_Integer ) ) static_cast<void (TDocStd_Document::*)( const Standard_Integer ) >(&TDocStd_Document::SetSavedTime),
             R"#(Say to document what it is not saved. Use value, returned earlier by GetSavedTime().)#"  , py::arg("theTime"))
        .def("GetSavedTime",
             (Standard_Integer (TDocStd_Document::*)() const) static_cast<Standard_Integer (TDocStd_Document::*)() const>(&TDocStd_Document::GetSavedTime),
             R"#(Returns value of <mySavedTime> to be used later in SetSavedTime())#" )
        .def("SetEmptyLabelsSavingMode",
             (void (TDocStd_Document::*)( const Standard_Boolean ) ) static_cast<void (TDocStd_Document::*)( const Standard_Boolean ) >(&TDocStd_Document::SetEmptyLabelsSavingMode),
             R"#(Sets saving mode for empty labels. If Standard_True, empty labels will be saved.)#"  , py::arg("isAllowed"))
        .def("EmptyLabelsSavingMode",
             (Standard_Boolean (TDocStd_Document::*)() const) static_cast<Standard_Boolean (TDocStd_Document::*)() const>(&TDocStd_Document::EmptyLabelsSavingMode),
             R"#(Returns saving mode for empty labels.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Get_s",
                    (opencascade::handle<TDocStd_Document> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDocStd_Document> (*)( const TDF_Label & ) >(&TDocStd_Document::Get),
                    R"#(Will Abort any execution, clear fields returns the document which contains <L>. raises an exception if the document is not found.)#"  , py::arg("L"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_Document::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDocStd_Document::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_Modified ,opencascade::handle<TDocStd_Modified> , TDF_Attribute>>(m.attr("TDocStd_Modified"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TDocStd_Modified::*)() const) static_cast<Standard_Boolean (TDocStd_Modified::*)() const>(&TDocStd_Modified::IsEmpty),
             R"#(None)#" )
        .def("Clear",
             (void (TDocStd_Modified::*)() ) static_cast<void (TDocStd_Modified::*)() >(&TDocStd_Modified::Clear),
             R"#(None)#" )
        .def("AddLabel",
             (Standard_Boolean (TDocStd_Modified::*)( const TDF_Label & ) ) static_cast<Standard_Boolean (TDocStd_Modified::*)( const TDF_Label & ) >(&TDocStd_Modified::AddLabel),
             R"#(add <L> as modified)#"  , py::arg("L"))
        .def("RemoveLabel",
             (Standard_Boolean (TDocStd_Modified::*)( const TDF_Label & ) ) static_cast<Standard_Boolean (TDocStd_Modified::*)( const TDF_Label & ) >(&TDocStd_Modified::RemoveLabel),
             R"#(remove <L> as modified)#"  , py::arg("L"))
        .def("Get",
             (const TDF_LabelMap & (TDocStd_Modified::*)() const) static_cast<const TDF_LabelMap & (TDocStd_Modified::*)() const>(&TDocStd_Modified::Get),
             R"#(returns modified label map)#" )
        .def("ID",
             (const Standard_GUID & (TDocStd_Modified::*)() const) static_cast<const Standard_GUID & (TDocStd_Modified::*)() const>(&TDocStd_Modified::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDocStd_Modified::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDocStd_Modified::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDocStd_Modified::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDocStd_Modified::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDocStd_Modified::*)() const>(&TDocStd_Modified::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDocStd_Modified::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDocStd_Modified::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDocStd_Modified::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDocStd_Modified::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDocStd_Modified::*)( std::ostream & ) const>(&TDocStd_Modified::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDocStd_Modified::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDocStd_Modified::*)() const>(&TDocStd_Modified::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsEmpty_s",
                    (Standard_Boolean (*)( const TDF_Label & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & ) >(&TDocStd_Modified::IsEmpty),
                    R"#(API class methods =================)#"  , py::arg("access"))
        .def_static("Add_s",
                    (Standard_Boolean (*)( const TDF_Label & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & ) >(&TDocStd_Modified::Add),
                    R"#(None)#"  , py::arg("alabel"))
        .def_static("Remove_s",
                    (Standard_Boolean (*)( const TDF_Label & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & ) >(&TDocStd_Modified::Remove),
                    R"#(None)#"  , py::arg("alabel"))
        .def_static("Contains_s",
                    (Standard_Boolean (*)( const TDF_Label & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & ) >(&TDocStd_Modified::Contains),
                    R"#(None)#"  , py::arg("alabel"))
        .def_static("Get_s",
                    (const TDF_LabelMap & (*)( const TDF_Label & ) ) static_cast<const TDF_LabelMap & (*)( const TDF_Label & ) >(&TDocStd_Modified::Get),
                    R"#(if <IsEmpty> raise an exception.)#"  , py::arg("access"))
        .def_static("Clear_s",
                    (void (*)( const TDF_Label & ) ) static_cast<void (*)( const TDF_Label & ) >(&TDocStd_Modified::Clear),
                    R"#(remove all modified labels. becomes empty)#"  , py::arg("access"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDocStd_Modified::GetID),
                    R"#(Modified methods ================)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_Modified::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDocStd_Modified::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_MultiTransactionManager ,opencascade::handle<TDocStd_MultiTransactionManager> , Standard_Transient>>(m.attr("TDocStd_MultiTransactionManager"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetUndoLimit",
             (void (TDocStd_MultiTransactionManager::*)( const Standard_Integer ) ) static_cast<void (TDocStd_MultiTransactionManager::*)( const Standard_Integer ) >(&TDocStd_MultiTransactionManager::SetUndoLimit),
             R"#(Sets undo limit for the manager and all documents.)#"  , py::arg("theLimit"))
        .def("GetUndoLimit",
             (Standard_Integer (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Integer (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::GetUndoLimit),
             R"#(Returns undo limit for the manager.)#" )
        .def("Undo",
             (void (TDocStd_MultiTransactionManager::*)() ) static_cast<void (TDocStd_MultiTransactionManager::*)() >(&TDocStd_MultiTransactionManager::Undo),
             R"#(Undoes the current transaction of the manager. It calls the Undo () method of the document being on top of the manager list of undos (list.First()) and moves the list item to the top of the list of manager redos (list.Prepend(item)).)#" )
        .def("Redo",
             (void (TDocStd_MultiTransactionManager::*)() ) static_cast<void (TDocStd_MultiTransactionManager::*)() >(&TDocStd_MultiTransactionManager::Redo),
             R"#(Redoes the current transaction of the application. It calls the Redo () method of the document being on top of the manager list of redos (list.First()) and moves the list item to the top of the list of manager undos (list.Prepend(item)).)#" )
        .def("GetAvailableUndos",
             (const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const) static_cast<const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::GetAvailableUndos),
             R"#(Returns available manager undos.)#" )
        .def("GetAvailableRedos",
             (const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const) static_cast<const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::GetAvailableRedos),
             R"#(Returns available manager redos.)#" )
        .def("OpenCommand",
             (void (TDocStd_MultiTransactionManager::*)() ) static_cast<void (TDocStd_MultiTransactionManager::*)() >(&TDocStd_MultiTransactionManager::OpenCommand),
             R"#(Opens transaction in each document and sets the flag that transaction is opened. If there are already opened transactions in the documents, these transactions will be aborted before openning new ones.)#" )
        .def("AbortCommand",
             (void (TDocStd_MultiTransactionManager::*)() ) static_cast<void (TDocStd_MultiTransactionManager::*)() >(&TDocStd_MultiTransactionManager::AbortCommand),
             R"#(Unsets the flag of started manager transaction and aborts transaction in each document.)#" )
        .def("CommitCommand",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)() ) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)() >(&TDocStd_MultiTransactionManager::CommitCommand),
             R"#(Commits transaction in all documents and fills the transaction manager with the documents that have been changed during the transaction. Returns True if new data has been added to myUndos. NOTE: All nested transactions in the documents will be commited.)#" )
        .def("CommitCommand",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)( const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)( const TCollection_ExtendedString & ) >(&TDocStd_MultiTransactionManager::CommitCommand),
             R"#(Makes the same steps as the previous function but defines the name for transaction. Returns True if new data has been added to myUndos.)#"  , py::arg("theName"))
        .def("HasOpenCommand",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::HasOpenCommand),
             R"#(Returns true if a transaction is opened.)#" )
        .def("RemoveLastUndo",
             (void (TDocStd_MultiTransactionManager::*)() ) static_cast<void (TDocStd_MultiTransactionManager::*)() >(&TDocStd_MultiTransactionManager::RemoveLastUndo),
             R"#(Removes undo information from the list of undos of the manager and all documents which have been modified during the transaction.)#" )
        .def("DumpTransaction",
             (void (TDocStd_MultiTransactionManager::*)( std::ostream & ) const) static_cast<void (TDocStd_MultiTransactionManager::*)( std::ostream & ) const>(&TDocStd_MultiTransactionManager::DumpTransaction),
             R"#(Dumps transactions in undos and redos)#"  , py::arg("theOS"))
        .def("AddDocument",
             (void (TDocStd_MultiTransactionManager::*)( const opencascade::handle<TDocStd_Document> & ) ) static_cast<void (TDocStd_MultiTransactionManager::*)( const opencascade::handle<TDocStd_Document> & ) >(&TDocStd_MultiTransactionManager::AddDocument),
             R"#(Adds the document to the transaction manager and checks if it has been already added)#"  , py::arg("theDoc"))
        .def("RemoveDocument",
             (void (TDocStd_MultiTransactionManager::*)( const opencascade::handle<TDocStd_Document> & ) ) static_cast<void (TDocStd_MultiTransactionManager::*)( const opencascade::handle<TDocStd_Document> & ) >(&TDocStd_MultiTransactionManager::RemoveDocument),
             R"#(Removes the document from the transaction manager.)#"  , py::arg("theDoc"))
        .def("Documents",
             (const TDocStd_SequenceOfDocument & (TDocStd_MultiTransactionManager::*)() const) static_cast<const TDocStd_SequenceOfDocument & (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::Documents),
             R"#(Returns the added documents to the transaction manager.)#" )
        .def("SetNestedTransactionMode",
             (void (TDocStd_MultiTransactionManager::*)( const Standard_Boolean ) ) static_cast<void (TDocStd_MultiTransactionManager::*)( const Standard_Boolean ) >(&TDocStd_MultiTransactionManager::SetNestedTransactionMode),
             R"#(Sets nested transaction mode if isAllowed == Standard_True NOTE: field myIsNestedTransactionMode exists only for synchronization between several documents and has no effect on transactions of multitransaction manager.)#"  , py::arg("isAllowed")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsNestedTransactionMode",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::IsNestedTransactionMode),
             R"#(Returns Standard_True if NestedTransaction mode is set. Methods for protection of changes outside transactions)#" )
        .def("SetModificationMode",
             (void (TDocStd_MultiTransactionManager::*)( const Standard_Boolean ) ) static_cast<void (TDocStd_MultiTransactionManager::*)( const Standard_Boolean ) >(&TDocStd_MultiTransactionManager::SetModificationMode),
             R"#(If theTransactionOnly is True, denies all changes outside transactions.)#"  , py::arg("theTransactionOnly"))
        .def("ModificationMode",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::ModificationMode),
             R"#(Returns True if changes are allowed only inside transactions.)#" )
        .def("ClearUndos",
             (void (TDocStd_MultiTransactionManager::*)() ) static_cast<void (TDocStd_MultiTransactionManager::*)() >(&TDocStd_MultiTransactionManager::ClearUndos),
             R"#(Clears undos in the manager and in documents.)#" )
        .def("ClearRedos",
             (void (TDocStd_MultiTransactionManager::*)() ) static_cast<void (TDocStd_MultiTransactionManager::*)() >(&TDocStd_MultiTransactionManager::ClearRedos),
             R"#(Clears redos in the manager and in documents.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDocStd_MultiTransactionManager::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::DynamicType),
             R"#(None)#" )
        .def("GetUndoLimit",
             (Standard_Integer (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Integer (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::GetUndoLimit),
             R"#(Returns undo limit for the manager.)#" )
        .def("GetAvailableUndos",
             (const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const) static_cast<const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::GetAvailableUndos),
             R"#(Returns available manager undos.)#" )
        .def("GetAvailableRedos",
             (const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const) static_cast<const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::GetAvailableRedos),
             R"#(Returns available manager redos.)#" )
        .def("Documents",
             (const TDocStd_SequenceOfDocument & (TDocStd_MultiTransactionManager::*)() const) static_cast<const TDocStd_SequenceOfDocument & (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::Documents),
             R"#(Returns the added documents to the transaction manager.)#" )
        .def("IsNestedTransactionMode",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::IsNestedTransactionMode),
             R"#(Returns Standard_True if NestedTransaction mode is set. Methods for protection of changes outside transactions)#" )
        .def("HasOpenCommand",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::HasOpenCommand),
             R"#(Returns true if a transaction is opened.)#" )
        .def("ModificationMode",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::ModificationMode),
             R"#(Returns True if changes are allowed only inside transactions.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_MultiTransactionManager::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDocStd_MultiTransactionManager::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_Owner ,opencascade::handle<TDocStd_Owner> , TDF_Attribute>>(m.attr("TDocStd_Owner"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetDocument",
             (void (TDocStd_Owner::*)( const opencascade::handle<TDocStd_Document> & ) ) static_cast<void (TDocStd_Owner::*)( const opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Owner::SetDocument),
             R"#(None)#"  , py::arg("document"))
        .def("GetDocument",
             (opencascade::handle<TDocStd_Document> (TDocStd_Owner::*)() const) static_cast<opencascade::handle<TDocStd_Document> (TDocStd_Owner::*)() const>(&TDocStd_Owner::GetDocument),
             R"#(None)#" )
        .def("ID",
             (const Standard_GUID & (TDocStd_Owner::*)() const) static_cast<const Standard_GUID & (TDocStd_Owner::*)() const>(&TDocStd_Owner::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDocStd_Owner::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDocStd_Owner::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDocStd_Owner::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDocStd_Owner::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDocStd_Owner::*)() const>(&TDocStd_Owner::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDocStd_Owner::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDocStd_Owner::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDocStd_Owner::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDocStd_Owner::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDocStd_Owner::*)( std::ostream & ) const>(&TDocStd_Owner::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDocStd_Owner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDocStd_Owner::*)() const>(&TDocStd_Owner::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDocStd_Owner::GetID),
                    R"#(class methods =============)#" )
        .def_static("SetDocument_s",
                    (void (*)( const opencascade::handle<TDF_Data> & , const opencascade::handle<TDocStd_Document> & ) ) static_cast<void (*)( const opencascade::handle<TDF_Data> & , const opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Owner::SetDocument),
                    R"#(None)#"  , py::arg("indata"),  py::arg("doc"))
        .def_static("GetDocument_s",
                    (opencascade::handle<TDocStd_Document> (*)( const opencascade::handle<TDF_Data> & ) ) static_cast<opencascade::handle<TDocStd_Document> (*)( const opencascade::handle<TDF_Data> & ) >(&TDocStd_Owner::GetDocument),
                    R"#(Owner methods ===============)#"  , py::arg("ofdata"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_Owner::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDocStd_Owner::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_PathParser , shared_ptr<TDocStd_PathParser> >>(m.attr("TDocStd_PathParser"))
    // constructors
        .def(py::init< const TCollection_ExtendedString & >()  , py::arg("path") )
    // custom constructors
    // methods
        .def("Parse",
             (void (TDocStd_PathParser::*)() ) static_cast<void (TDocStd_PathParser::*)() >(&TDocStd_PathParser::Parse),
             R"#(None)#" )
        .def("Trek",
             (TCollection_ExtendedString (TDocStd_PathParser::*)() const) static_cast<TCollection_ExtendedString (TDocStd_PathParser::*)() const>(&TDocStd_PathParser::Trek),
             R"#(None)#" )
        .def("Name",
             (TCollection_ExtendedString (TDocStd_PathParser::*)() const) static_cast<TCollection_ExtendedString (TDocStd_PathParser::*)() const>(&TDocStd_PathParser::Name),
             R"#(None)#" )
        .def("Extension",
             (TCollection_ExtendedString (TDocStd_PathParser::*)() const) static_cast<TCollection_ExtendedString (TDocStd_PathParser::*)() const>(&TDocStd_PathParser::Extension),
             R"#(None)#" )
        .def("Path",
             (TCollection_ExtendedString (TDocStd_PathParser::*)() const) static_cast<TCollection_ExtendedString (TDocStd_PathParser::*)() const>(&TDocStd_PathParser::Path),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (TDocStd_PathParser::*)() const) static_cast<Standard_Integer (TDocStd_PathParser::*)() const>(&TDocStd_PathParser::Length),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_XLink ,opencascade::handle<TDocStd_XLink> , TDF_Attribute>>(m.attr("TDocStd_XLink"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Update",
             (opencascade::handle<TDF_Reference> (TDocStd_XLink::*)() ) static_cast<opencascade::handle<TDF_Reference> (TDocStd_XLink::*)() >(&TDocStd_XLink::Update),
             R"#(Updates the data referenced in this external link attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDocStd_XLink::*)() const) static_cast<const Standard_GUID & (TDocStd_XLink::*)() const>(&TDocStd_XLink::ID),
             R"#(Returns the ID of the attribute.)#" )
        .def("DocumentEntry",
             (void (TDocStd_XLink::*)( const TCollection_AsciiString & ) ) static_cast<void (TDocStd_XLink::*)( const TCollection_AsciiString & ) >(&TDocStd_XLink::DocumentEntry),
             R"#(Sets the name aDocEntry for the external document in this external link attribute.)#"  , py::arg("aDocEntry"))
        .def("DocumentEntry",
             (const TCollection_AsciiString & (TDocStd_XLink::*)() const) static_cast<const TCollection_AsciiString & (TDocStd_XLink::*)() const>(&TDocStd_XLink::DocumentEntry),
             R"#(Returns the contents of the document identified by aDocEntry. aDocEntry provides external data to this external link attribute.)#" )
        .def("LabelEntry",
             (void (TDocStd_XLink::*)( const TDF_Label & ) ) static_cast<void (TDocStd_XLink::*)( const TDF_Label & ) >(&TDocStd_XLink::LabelEntry),
             R"#(Sets the label entry for this external link attribute with the label aLabel. aLabel pilots the importation of data from the document entry.)#"  , py::arg("aLabel"))
        .def("LabelEntry",
             (void (TDocStd_XLink::*)( const TCollection_AsciiString & ) ) static_cast<void (TDocStd_XLink::*)( const TCollection_AsciiString & ) >(&TDocStd_XLink::LabelEntry),
             R"#(Sets the label entry for this external link attribute as a document identified by aLabEntry.)#"  , py::arg("aLabEntry"))
        .def("LabelEntry",
             (const TCollection_AsciiString & (TDocStd_XLink::*)() const) static_cast<const TCollection_AsciiString & (TDocStd_XLink::*)() const>(&TDocStd_XLink::LabelEntry),
             R"#(Returns the contents of the field <myLabelEntry>.)#" )
        .def("AfterAddition",
             (void (TDocStd_XLink::*)() ) static_cast<void (TDocStd_XLink::*)() >(&TDocStd_XLink::AfterAddition),
             R"#(Updates the XLinkRoot attribute by adding <me> to its list.)#" )
        .def("BeforeRemoval",
             (void (TDocStd_XLink::*)() ) static_cast<void (TDocStd_XLink::*)() >(&TDocStd_XLink::BeforeRemoval),
             R"#(Updates the XLinkRoot attribute by removing <me> from its list.)#" )
        .def("BeforeUndo",
             (Standard_Boolean (TDocStd_XLink::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TDocStd_XLink::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TDocStd_XLink::BeforeUndo),
             R"#(Something to do before applying <anAttDelta>.)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AfterUndo",
             (Standard_Boolean (TDocStd_XLink::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TDocStd_XLink::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TDocStd_XLink::AfterUndo),
             R"#(Something to do after applying <anAttDelta>.)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("BackupCopy",
             (opencascade::handle<TDF_Attribute> (TDocStd_XLink::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDocStd_XLink::*)() const>(&TDocStd_XLink::BackupCopy),
             R"#(Returns a null handle. Raise allways for ,it is nonsense to use this method.)#" )
        .def("Restore",
             (void (TDocStd_XLink::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDocStd_XLink::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDocStd_XLink::Restore),
             R"#(Does nothing.)#"  , py::arg("anAttribute"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDocStd_XLink::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDocStd_XLink::*)() const>(&TDocStd_XLink::NewEmpty),
             R"#(Returns a null handle.)#" )
        .def("Paste",
             (void (TDocStd_XLink::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDocStd_XLink::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDocStd_XLink::Paste),
             R"#(Does nothing.)#"  , py::arg("intoAttribute"),  py::arg("aRelocationTable"))
        .def("Dump",
             (Standard_OStream & (TDocStd_XLink::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDocStd_XLink::*)( std::ostream & ) const>(&TDocStd_XLink::Dump),
             R"#(Dumps the attribute on <aStream>.)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDocStd_XLink::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDocStd_XLink::*)() const>(&TDocStd_XLink::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Set_s",
                    (opencascade::handle<TDocStd_XLink> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDocStd_XLink> (*)( const TDF_Label & ) >(&TDocStd_XLink::Set),
                    R"#(Sets an empty external reference, at the label aLabel.)#"  , py::arg("atLabel"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDocStd_XLink::GetID),
                    R"#(Returns the GUID for external links.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_XLink::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDocStd_XLink::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_XLinkIterator , shared_ptr<TDocStd_XLinkIterator> >>(m.attr("TDocStd_XLinkIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<TDocStd_Document> & >()  , py::arg("D") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (TDocStd_XLinkIterator::*)( const opencascade::handle<TDocStd_Document> & ) ) static_cast<void (TDocStd_XLinkIterator::*)( const opencascade::handle<TDocStd_Document> & ) >(&TDocStd_XLinkIterator::Initialize),
             R"#(Restarts an iteration with <D>.)#"  , py::arg("D"))
        .def("More",
             (Standard_Boolean (TDocStd_XLinkIterator::*)() const) static_cast<Standard_Boolean (TDocStd_XLinkIterator::*)() const>(&TDocStd_XLinkIterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Next",
             (void (TDocStd_XLinkIterator::*)() ) static_cast<void (TDocStd_XLinkIterator::*)() >(&TDocStd_XLinkIterator::Next),
             R"#(Move to the next item; raises if there is no more item.)#" )
        .def("Value",
             (TDocStd_XLinkPtr (TDocStd_XLinkIterator::*)() const) static_cast<TDocStd_XLinkPtr (TDocStd_XLinkIterator::*)() const>(&TDocStd_XLinkIterator::Value),
             R"#(Returns the current item; a null handle if there is none.)#" )
        .def("More",
             (Standard_Boolean (TDocStd_XLinkIterator::*)() const) static_cast<Standard_Boolean (TDocStd_XLinkIterator::*)() const>(&TDocStd_XLinkIterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Value",
             (TDocStd_XLink * (TDocStd_XLinkIterator::*)() const) static_cast<TDocStd_XLink * (TDocStd_XLinkIterator::*)() const>(&TDocStd_XLinkIterator::Value),
             R"#(Returns the current item; a null handle if there is none.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_XLinkRoot ,opencascade::handle<TDocStd_XLinkRoot> , TDF_Attribute>>(m.attr("TDocStd_XLinkRoot"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDocStd_XLinkRoot::*)() const) static_cast<const Standard_GUID & (TDocStd_XLinkRoot::*)() const>(&TDocStd_XLinkRoot::ID),
             R"#(Returns the ID of the attribute.)#" )
        .def("BackupCopy",
             (opencascade::handle<TDF_Attribute> (TDocStd_XLinkRoot::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDocStd_XLinkRoot::*)() const>(&TDocStd_XLinkRoot::BackupCopy),
             R"#(Returns a null handle.)#" )
        .def("Restore",
             (void (TDocStd_XLinkRoot::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDocStd_XLinkRoot::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDocStd_XLinkRoot::Restore),
             R"#(Does nothing.)#"  , py::arg("anAttribute"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDocStd_XLinkRoot::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDocStd_XLinkRoot::*)() const>(&TDocStd_XLinkRoot::NewEmpty),
             R"#(Returns a null handle.)#" )
        .def("Paste",
             (void (TDocStd_XLinkRoot::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDocStd_XLinkRoot::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDocStd_XLinkRoot::Paste),
             R"#(Does nothing.)#"  , py::arg("intoAttribute"),  py::arg("aRelocationTable"))
        .def("Dump",
             (Standard_OStream & (TDocStd_XLinkRoot::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDocStd_XLinkRoot::*)( std::ostream & ) const>(&TDocStd_XLinkRoot::Dump),
             R"#(Dumps the attribute on <aStream>.)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDocStd_XLinkRoot::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDocStd_XLinkRoot::*)() const>(&TDocStd_XLinkRoot::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDocStd_XLinkRoot::GetID),
                    R"#(Returns the ID: 2a96b61d-ec8b-11d0-bee7-080009dc3333)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDocStd_XLinkRoot> (*)( const opencascade::handle<TDF_Data> & ) ) static_cast<opencascade::handle<TDocStd_XLinkRoot> (*)( const opencascade::handle<TDF_Data> & ) >(&TDocStd_XLinkRoot::Set),
                    R"#(Sets an empty XLinkRoot to Root or gets the existing one. Only one attribute per TDF_Data.)#"  , py::arg("aDF"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_XLinkRoot::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDocStd_XLinkRoot::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_XLinkTool , shared_ptr<TDocStd_XLinkTool> >>(m.attr("TDocStd_XLinkTool"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CopyWithLink",
             (void (TDocStd_XLinkTool::*)( const TDF_Label & , const TDF_Label & ) ) static_cast<void (TDocStd_XLinkTool::*)( const TDF_Label & , const TDF_Label & ) >(&TDocStd_XLinkTool::CopyWithLink),
             R"#(Copies the content of the label <fromsource> to the label <intarget>. The link is registred with an XLink attribute by <intarget> label. if the content of <fromsource> is not self-contained, and/or <intarget> has already an XLink attribute, an exception is raised.)#"  , py::arg("intarget"),  py::arg("fromsource"))
        .def("UpdateLink",
             (void (TDocStd_XLinkTool::*)( const TDF_Label & ) ) static_cast<void (TDocStd_XLinkTool::*)( const TDF_Label & ) >(&TDocStd_XLinkTool::UpdateLink),
             R"#(Update the external reference set at <L>. Example Handle(TDocStd_Document) aDoc; if (!OCAFTest::GetDocument(1,aDoc)) return 1; Handle(TDataStd_Reference) aRef; TDocStd_XLinkTool xlinktool; if (!OCAFTest::Find(aDoc,2),TDataStd_Reference::GetID(),aRef) return 1; xlinktool.UpdateLink(aRef->Label()); Exceptions Standard_DomainError if <L> has no XLink attribute.)#"  , py::arg("L"))
        .def("Copy",
             (void (TDocStd_XLinkTool::*)( const TDF_Label & , const TDF_Label & ) ) static_cast<void (TDocStd_XLinkTool::*)( const TDF_Label & , const TDF_Label & ) >(&TDocStd_XLinkTool::Copy),
             R"#(Copy the content of <fromsource> under <intarget>. Noone link is registred. noone check is done. Example Handle(TDocStd_Document) DOC, XDOC; TDF_Label L, XL; TDocStd_XLinkTool xlinktool; xlinktool.Copy(L,XL); Exceptions: Standard_DomainError if the contents of fromsource are not entirely in the scope of this label, in other words, are not self-contained. !!! ==> Warning: If the document manages shapes use the next way: TDocStd_XLinkTool xlinktool; xlinktool.Copy(L,XL); TopTools_DataMapOfShapeShape M; TNaming::ChangeShapes(target,M);)#"  , py::arg("intarget"),  py::arg("fromsource"))
        .def("IsDone",
             (Standard_Boolean (TDocStd_XLinkTool::*)() const) static_cast<Standard_Boolean (TDocStd_XLinkTool::*)() const>(&TDocStd_XLinkTool::IsDone),
             R"#(None)#" )
        .def("DataSet",
             (opencascade::handle<TDF_DataSet> (TDocStd_XLinkTool::*)() const) static_cast<opencascade::handle<TDF_DataSet> (TDocStd_XLinkTool::*)() const>(&TDocStd_XLinkTool::DataSet),
             R"#(None)#" )
        .def("RelocationTable",
             (opencascade::handle<TDF_RelocationTable> (TDocStd_XLinkTool::*)() const) static_cast<opencascade::handle<TDF_RelocationTable> (TDocStd_XLinkTool::*)() const>(&TDocStd_XLinkTool::RelocationTable),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TDocStd_XLinkPtr.hxx
// ./opencascade/TDocStd_Owner.hxx
// ./opencascade/TDocStd_CompoundDelta.hxx
// ./opencascade/TDocStd.hxx
// ./opencascade/TDocStd_XLink.hxx
// ./opencascade/TDocStd_XLinkRoot.hxx
// ./opencascade/TDocStd_Document.hxx
// ./opencascade/TDocStd_Modified.hxx
// ./opencascade/TDocStd_ApplicationDelta.hxx
// ./opencascade/TDocStd_Application.hxx
// ./opencascade/TDocStd_XLinkTool.hxx
// ./opencascade/TDocStd_SequenceOfDocument.hxx
// ./opencascade/TDocStd_PathParser.hxx
// ./opencascade/TDocStd_DataMapIteratorOfLabelIDMapDataMap.hxx
// ./opencascade/TDocStd_XLinkIterator.hxx
// ./opencascade/TDocStd_Context.hxx
// ./opencascade/TDocStd_SequenceOfApplicationDelta.hxx
// ./opencascade/TDocStd_MultiTransactionManager.hxx
// ./opencascade/TDocStd_LabelIDMapDataMap.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<TDocStd_Document> >(m,"TDocStd_SequenceOfDocument");
    register_template_NCollection_Sequence<opencascade::handle<TDocStd_ApplicationDelta> >(m,"TDocStd_SequenceOfApplicationDelta");
    register_template_NCollection_DataMap<TDF_Label, TDF_IDMap, TDF_LabelMapHasher>(m,"TDocStd_LabelIDMapDataMap");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
