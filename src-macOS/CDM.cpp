
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <CDM_MetaData.hxx>
#include <CDM_Application.hxx>
#include <CDM_ReferenceIterator.hxx>
#include <Resource_Manager.hxx>
#include <CDM_Document.hxx>
#include <CDM_Document.hxx>
#include <CDM_Application.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_Reference.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_Document.hxx>
#include <Resource_Manager.hxx>
#include <Message_Messenger.hxx>
#include <CDM_Document.hxx>

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
#include "NCollection_tmpl.hxx"
// ./opencascade/CDM_ListOfDocument.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/CDM_ListOfDocument.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/CDM_DocumentHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/CDM_MapOfDocument.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/CDM_MapOfDocument.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/CDM_ListOfReferences.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/CDM_ListOfReferences.hxx
#include "NCollection_tmpl.hxx"


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


    static_cast<py::class_<CDM_Application ,opencascade::handle<CDM_Application>,Py_CDM_Application , Standard_Transient>>(m.attr("CDM_Application"))
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
             (void (CDM_Application::*)( const opencascade::handle<CDM_Document> & ) ) static_cast<void (CDM_Application::*)( const opencascade::handle<CDM_Document> & ) >(&CDM_Application::BeginOfUpdate),
             R"#(this method is called before the update of a document. By default, writes in MessageDriver().)#"  , py::arg("aDocument"))
        .def("EndOfUpdate",
             (void (CDM_Application::*)( const opencascade::handle<CDM_Document> & , const Standard_Boolean , const TCollection_ExtendedString & ) ) static_cast<void (CDM_Application::*)( const opencascade::handle<CDM_Document> & , const Standard_Boolean , const TCollection_ExtendedString & ) >(&CDM_Application::EndOfUpdate),
             R"#(this method is called affter the update of a document. By default, writes in MessageDriver().)#"  , py::arg("aDocument"),  py::arg("theStatus"),  py::arg("ErrorString"))
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDM_Document ,opencascade::handle<CDM_Document>,Py_CDM_Document , Standard_Transient>>(m.attr("CDM_Document"))
    // constructors
    // custom constructors
    // methods
        .def("Update",
             (void (CDM_Document::*)( const opencascade::handle<CDM_Document> & , const Standard_Integer , const Standard_Address ) ) static_cast<void (CDM_Document::*)( const opencascade::handle<CDM_Document> & , const Standard_Integer , const Standard_Address ) >(&CDM_Document::Update),
             R"#(The Update method will be called once for each reference, but it should not perform any computation, to avoid multiple computation of a same document.)#"  , py::arg("aToDocument"),  py::arg("aReferenceIdentifier"),  py::arg("aModifContext"))
        .def("Update",
             (Standard_Boolean (CDM_Document::*)( TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (CDM_Document::*)( TCollection_ExtendedString & ) >(&CDM_Document::Update),
             R"#(This method Update will be called to signal the end of the modified references list. The document should be recomputed and UpdateFromDocuments should be called. Update should returns True in case of success, false otherwise. In case of Failure, additional information can be given in ErrorString.)#"  , py::arg("ErrorString"))
        .def("StorageFormat",
             (TCollection_ExtendedString (CDM_Document::*)() const) static_cast<TCollection_ExtendedString (CDM_Document::*)() const>(&CDM_Document::StorageFormat),
             R"#(The Storage Format is the key which is used to determine in the application resources the storage driver plugin, the file extension and other data used to store the document.)#" )
        .def("Extensions",
             (void (CDM_Document::*)( NCollection_Sequence<TCollection_ExtendedString> & ) const) static_cast<void (CDM_Document::*)( NCollection_Sequence<TCollection_ExtendedString> & ) const>(&CDM_Document::Extensions),
             R"#(by default empties the extensions.)#"  , py::arg("Extensions"))
        .def("GetAlternativeDocument",
             (Standard_Boolean (CDM_Document::*)( const TCollection_ExtendedString & , opencascade::handle<CDM_Document> & ) ) static_cast<Standard_Boolean (CDM_Document::*)( const TCollection_ExtendedString & , opencascade::handle<CDM_Document> & ) >(&CDM_Document::GetAlternativeDocument),
             R"#(This method can be redefined to extract another document in a different format. For example, to extract a Shape from an applicative document.)#"  , py::arg("aFormat"),  py::arg("anAlternativeDocument"))
        .def("CanCloseReference",
             (Standard_Boolean (CDM_Document::*)( const opencascade::handle<CDM_Document> & , const Standard_Integer ) const) static_cast<Standard_Boolean (CDM_Document::*)( const opencascade::handle<CDM_Document> & , const Standard_Integer ) const>(&CDM_Document::CanCloseReference),
             R"#(A referenced document may indicate through this virtual method that it does not allow the closing of aDocument which it references through the reference aReferenceIdentifier. By default returns Standard_True;;)#"  , py::arg("aDocument"),  py::arg("aReferenceIdentifier"))
        .def("CloseReference",
             (void (CDM_Document::*)( const opencascade::handle<CDM_Document> & , const Standard_Integer ) ) static_cast<void (CDM_Document::*)( const opencascade::handle<CDM_Document> & , const Standard_Integer ) >(&CDM_Document::CloseReference),
             R"#(A referenced document may update its internal data structure when {aDocument} which it references through the reference {aReferenceIdentifier} is being closed. By default this method does nothing.)#"  , py::arg("aDocument"),  py::arg("aReferenceIdentifier"))
        .def("Update",
             (void (CDM_Document::*)() ) static_cast<void (CDM_Document::*)() >(&CDM_Document::Update),
             R"#(the following method should be used instead:)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDM_Document::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDM_Document::*)() const>(&CDM_Document::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDM_Document::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDM_MetaData ,opencascade::handle<CDM_MetaData> , Standard_Transient>>(m.attr("CDM_MetaData"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDM_MetaData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDM_MetaData::*)() const>(&CDM_MetaData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDM_MetaData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDM_Reference ,opencascade::handle<CDM_Reference> , Standard_Transient>>(m.attr("CDM_Reference"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (CDM_Reference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (CDM_Reference::*)() const>(&CDM_Reference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&CDM_Reference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<CDM_ReferenceIterator , shared_ptr<CDM_ReferenceIterator> >>(m.attr("CDM_ReferenceIterator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/CDM_MetaData.hxx
// ./opencascade/CDM_Document.hxx
// ./opencascade/CDM_MetaDataLookUpTable.hxx
// ./opencascade/CDM_DocumentPointer.hxx
// ./opencascade/CDM_Reference.hxx
// ./opencascade/CDM_Application.hxx
// ./opencascade/CDM_PresentationDirectory.hxx
// ./opencascade/CDM_ListOfDocument.hxx
// ./opencascade/CDM_ListIteratorOfListOfReferences.hxx
// ./opencascade/CDM_ReferenceIterator.hxx
// ./opencascade/CDM_MapIteratorOfMapOfDocument.hxx
// ./opencascade/CDM_NamesDirectory.hxx
// ./opencascade/CDM_DocumentHasher.hxx
// ./opencascade/CDM_ListIteratorOfListOfDocument.hxx
// ./opencascade/CDM_MapOfDocument.hxx
// ./opencascade/CDM_CanCloseStatus.hxx
// ./opencascade/CDM_DataMapIteratorOfMetaDataLookUpTable.hxx
// ./opencascade/CDM_ListOfReferences.hxx
// ./opencascade/CDM_DataMapIteratorOfPresentationDirectory.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<CDM_Document> >(m,"CDM_ListOfDocument");
    register_template_NCollection_DefaultHasher<opencascade::handle<CDM_Document> >(m,"CDM_DocumentHasher");
    register_template_NCollection_Map<opencascade::handle<CDM_Document>, CDM_DocumentHasher>(m,"CDM_MapOfDocument");
    register_template_NCollection_List<opencascade::handle<CDM_Reference> >(m,"CDM_ListOfReferences");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
