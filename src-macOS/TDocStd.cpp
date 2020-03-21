
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TDocStd_CompoundDelta.hxx>
#include <Resource_Manager.hxx>
#include <TDocStd_Document.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_NoMoreObject.hxx>
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
#include <TDocStd_XLinkIterator.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Data.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDocStd_Document.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Data.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDocStd_Document.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDocStd_XLink.hxx>
#include <TDocStd_XLinkRoot.hxx>
#include <TDocStd_XLinkIterator.hxx>
#include <TDF_Label.hxx>
#include <TDF_Reference.hxx>
#include <Standard_GUID.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_RelocationTable.hxx>

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
// ./opencascade/TDocStd_LabelIDMapDataMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDocStd_LabelIDMapDataMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDocStd_SequenceOfApplicationDelta.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDocStd_SequenceOfDocument.hxx
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_Application ,opencascade::handle<TDocStd_Application> , CDF_Application>>(m.attr("TDocStd_Application"))
    // constructors
    // custom constructors
    // methods
        .def("MessageDriver",
             (opencascade::handle<Message_Messenger> (TDocStd_Application::*)() ) static_cast<opencascade::handle<Message_Messenger> (TDocStd_Application::*)() >(&TDocStd_Application::MessageDriver),
             R"#(Redefines message driver, by default outputs to std::cout.)#" )
        .def("Resources",
             (opencascade::handle<Resource_Manager> (TDocStd_Application::*)() ) static_cast<opencascade::handle<Resource_Manager> (TDocStd_Application::*)() >(&TDocStd_Application::Resources),
             R"#(Returns resource manager defining supported persistent formats.)#" )
        .def("ResourcesName",
             (Standard_CString (TDocStd_Application::*)() ) static_cast<Standard_CString (TDocStd_Application::*)() >(&TDocStd_Application::ResourcesName),
             R"#(Returns the name of the file containing the resources of this application, for support of legacy method of loading formats data from resource files.)#" )
        .def("NewDocument",
             (void (TDocStd_Application::*)( const TCollection_ExtendedString & , opencascade::handle<TDocStd_Document> & ) ) static_cast<void (TDocStd_Application::*)( const TCollection_ExtendedString & , opencascade::handle<TDocStd_Document> & ) >(&TDocStd_Application::NewDocument),
             R"#(Constructs the empty new document aDoc. This document will have the format format. If InitDocument is redefined for a specific application, the new document is handled by the applicative session.)#"  , py::arg("format"),  py::arg("aDoc"))
        .def("InitDocument",
             (void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) const) static_cast<void (TDocStd_Application::*)( const opencascade::handle<TDocStd_Document> & ) const>(&TDocStd_Application::InitDocument),
             R"#(Initialize the document aDoc for the applicative session. This virtual function is called by NewDocument and is to be redefined for each specific application. Modified flag (different of disk version) ============= to open/save a document =======================)#"  , py::arg("aDoc"))
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_ApplicationDelta ,opencascade::handle<TDocStd_ApplicationDelta> , Standard_Transient>>(m.attr("TDocStd_ApplicationDelta"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_CompoundDelta ,opencascade::handle<TDocStd_CompoundDelta> , TDF_Delta>>(m.attr("TDocStd_CompoundDelta"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_Context , shared_ptr<TDocStd_Context> >>(m.attr("TDocStd_Context"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_Document ,opencascade::handle<TDocStd_Document> , CDM_Document>>(m.attr("TDocStd_Document"))
    // constructors
    // custom constructors
    // methods
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_Document::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_Modified ,opencascade::handle<TDocStd_Modified> , TDF_Attribute>>(m.attr("TDocStd_Modified"))
    // constructors
    // custom constructors
    // methods
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_Modified::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_MultiTransactionManager ,opencascade::handle<TDocStd_MultiTransactionManager> , Standard_Transient>>(m.attr("TDocStd_MultiTransactionManager"))
    // constructors
    // custom constructors
    // methods
        .def("GetUndoLimit",
             (Standard_Integer (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Integer (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::GetUndoLimit),
             R"#(Returns undo limit for the manager.)#" )
        .def("GetAvailableUndos",
             (const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const) static_cast<const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::GetAvailableUndos),
             R"#(Returns available manager undos.)#" )
        .def("GetAvailableRedos",
             (const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const) static_cast<const TDocStd_SequenceOfApplicationDelta & (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::GetAvailableRedos),
             R"#(Returns available manager redos.)#" )
        .def("HasOpenCommand",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::HasOpenCommand),
             R"#(Returns true if a transaction is opened.)#" )
        .def("Documents",
             (const TDocStd_SequenceOfDocument & (TDocStd_MultiTransactionManager::*)() const) static_cast<const TDocStd_SequenceOfDocument & (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::Documents),
             R"#(Returns the added documents to the transaction manager.)#" )
        .def("IsNestedTransactionMode",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::IsNestedTransactionMode),
             R"#(Returns Standard_True if NestedTransaction mode is set. Methods for protection of changes outside transactions)#" )
        .def("ModificationMode",
             (Standard_Boolean (TDocStd_MultiTransactionManager::*)() const) static_cast<Standard_Boolean (TDocStd_MultiTransactionManager::*)() const>(&TDocStd_MultiTransactionManager::ModificationMode),
             R"#(Returns True if changes are allowed only inside transactions.)#" )
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_Owner ,opencascade::handle<TDocStd_Owner> , TDF_Attribute>>(m.attr("TDocStd_Owner"))
    // constructors
    // custom constructors
    // methods
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_Owner::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_PathParser , shared_ptr<TDocStd_PathParser> >>(m.attr("TDocStd_PathParser"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_XLink ,opencascade::handle<TDocStd_XLink> , TDF_Attribute>>(m.attr("TDocStd_XLink"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDocStd_XLink::*)() const) static_cast<const Standard_GUID & (TDocStd_XLink::*)() const>(&TDocStd_XLink::ID),
             R"#(Returns the ID of the attribute.)#" )
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_XLink::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_XLinkIterator , shared_ptr<TDocStd_XLinkIterator> >>(m.attr("TDocStd_XLinkIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TDocStd_XLinkIterator::*)() const) static_cast<Standard_Boolean (TDocStd_XLinkIterator::*)() const>(&TDocStd_XLinkIterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDocStd_XLinkRoot::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDocStd_XLinkTool , shared_ptr<TDocStd_XLinkTool> >>(m.attr("TDocStd_XLinkTool"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (void (TDocStd_XLinkTool::*)( const TDF_Label & , const TDF_Label & ) ) static_cast<void (TDocStd_XLinkTool::*)( const TDF_Label & , const TDF_Label & ) >(&TDocStd_XLinkTool::Copy),
             R"#(Copy the content of <fromsource> under <intarget>. Noone link is registred. noone check is done. Example Handle(TDocStd_Document) DOC, XDOC; TDF_Label L, XL; TDocStd_XLinkTool xlinktool; xlinktool.Copy(L,XL); Exceptions: Standard_DomainError if the contents of fromsource are not entirely in the scope of this label, in other words, are not self-contained. !!! ==> Warning: If the document manages shapes use the next way: TDocStd_XLinkTool xlinktool; xlinktool.Copy(L,XL); TopTools_DataMapOfShapeShape M; TNaming::ChangeShapes(target,M);)#"  , py::arg("intarget"),  py::arg("fromsource"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TDocStd_Document.hxx
// ./opencascade/TDocStd_LabelIDMapDataMap.hxx
// ./opencascade/TDocStd_Application.hxx
// ./opencascade/TDocStd_SequenceOfApplicationDelta.hxx
// ./opencascade/TDocStd_Modified.hxx
// ./opencascade/TDocStd_XLinkIterator.hxx
// ./opencascade/TDocStd_ApplicationDelta.hxx
// ./opencascade/TDocStd_PathParser.hxx
// ./opencascade/TDocStd_SequenceOfDocument.hxx
// ./opencascade/TDocStd.hxx
// ./opencascade/TDocStd_XLinkRoot.hxx
// ./opencascade/TDocStd_MultiTransactionManager.hxx
// ./opencascade/TDocStd_Owner.hxx
// ./opencascade/TDocStd_CompoundDelta.hxx
// ./opencascade/TDocStd_XLinkTool.hxx
// ./opencascade/TDocStd_Context.hxx
// ./opencascade/TDocStd_XLinkPtr.hxx
// ./opencascade/TDocStd_DataMapIteratorOfLabelIDMapDataMap.hxx
// ./opencascade/TDocStd_XLink.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TDF_Label, TDF_IDMap, TDF_LabelMapHasher>(m,"TDocStd_LabelIDMapDataMap");
    register_template_NCollection_Sequence<opencascade::handle<TDocStd_ApplicationDelta> >(m,"TDocStd_SequenceOfApplicationDelta");
    register_template_NCollection_Sequence<opencascade::handle<TDocStd_Document> >(m,"TDocStd_SequenceOfDocument");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
