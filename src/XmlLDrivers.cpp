
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_XmlLDrivers(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlLDrivers"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<XmlLDrivers , shared_ptr<XmlLDrivers>>(m,"XmlLDrivers");

    static_cast<py::class_<XmlLDrivers , shared_ptr<XmlLDrivers>  >>(m.attr("XmlLDrivers"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Factory_s",
                    (const opencascade::handle<Standard_Transient> & (*)( const Standard_GUID &  ) ) static_cast<const opencascade::handle<Standard_Transient> & (*)( const Standard_GUID &  ) >(&XmlLDrivers::Factory),
                    R"#(None)#"  , py::arg("theGUID"))
        .def_static("CreationDate_s",
                    (TCollection_AsciiString (*)() ) static_cast<TCollection_AsciiString (*)() >(&XmlLDrivers::CreationDate),
                    R"#(None)#" )
        .def_static("DefineFormat_s",
                    (void (*)( const opencascade::handle<TDocStd_Application> &  ) ) static_cast<void (*)( const opencascade::handle<TDocStd_Application> &  ) >(&XmlLDrivers::DefineFormat),
                    R"#(Defines format "XmlLOcaf" and registers its read and write drivers in the specified application)#"  , py::arg("theApp"))
        .def_static("AttributeDrivers_s",
                    (opencascade::handle<XmlMDF_ADriverTable> (*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<XmlMDF_ADriverTable> (*)( const opencascade::handle<Message_Messenger> &  ) >(&XmlLDrivers::AttributeDrivers),
                    R"#(None)#"  , py::arg("theMsgDriver"))
        .def_static("StorageVersion_s",
                    (int (*)() ) static_cast<int (*)() >(&XmlLDrivers::StorageVersion),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlLDrivers_DocumentRetrievalDriver ,opencascade::handle<XmlLDrivers_DocumentRetrievalDriver>  , PCDM_RetrievalDriver >>(m.attr("XmlLDrivers_DocumentRetrievalDriver"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CreateDocument",
             (opencascade::handle<CDM_Document> (XmlLDrivers_DocumentRetrievalDriver::*)() ) static_cast<opencascade::handle<CDM_Document> (XmlLDrivers_DocumentRetrievalDriver::*)() >(&XmlLDrivers_DocumentRetrievalDriver::CreateDocument),
             R"#(None)#" )
        .def("Read",
             (void (XmlLDrivers_DocumentRetrievalDriver::*)( const TCollection_ExtendedString & ,  const opencascade::handle<CDM_Document> & ,  const opencascade::handle<CDM_Application> &  ) ) static_cast<void (XmlLDrivers_DocumentRetrievalDriver::*)( const TCollection_ExtendedString & ,  const opencascade::handle<CDM_Document> & ,  const opencascade::handle<CDM_Application> &  ) >(&XmlLDrivers_DocumentRetrievalDriver::Read),
             R"#(None)#"  , py::arg("theFileName"),  py::arg("theNewDocument"),  py::arg("theApplication"))
        .def("Read",
             (void (XmlLDrivers_DocumentRetrievalDriver::*)( std::istream & ,  const opencascade::handle<Storage_Data> & ,  const opencascade::handle<CDM_Document> & ,  const opencascade::handle<CDM_Application> &  ) ) static_cast<void (XmlLDrivers_DocumentRetrievalDriver::*)( std::istream & ,  const opencascade::handle<Storage_Data> & ,  const opencascade::handle<CDM_Document> & ,  const opencascade::handle<CDM_Application> &  ) >(&XmlLDrivers_DocumentRetrievalDriver::Read),
             R"#(None)#"  , py::arg("theIStream"),  py::arg("theStorageData"),  py::arg("theDoc"),  py::arg("theApplication"))
        .def("AttributeDrivers",
             (opencascade::handle<XmlMDF_ADriverTable> (XmlLDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<XmlMDF_ADriverTable> (XmlLDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> &  ) >(&XmlLDrivers_DocumentRetrievalDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlLDrivers_DocumentRetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlLDrivers_DocumentRetrievalDriver::*)() const>(&XmlLDrivers_DocumentRetrievalDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlLDrivers_DocumentRetrievalDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlLDrivers_DocumentRetrievalDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlLDrivers_DocumentStorageDriver ,opencascade::handle<XmlLDrivers_DocumentStorageDriver>  , PCDM_StorageDriver >>(m.attr("XmlLDrivers_DocumentStorageDriver"))
    // constructors
        .def(py::init< const TCollection_ExtendedString & >()  , py::arg("theCopyright") )
    // custom constructors
    // methods
        .def("Write",
             (void (XmlLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & ,  const TCollection_ExtendedString &  ) ) static_cast<void (XmlLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & ,  const TCollection_ExtendedString &  ) >(&XmlLDrivers_DocumentStorageDriver::Write),
             R"#(None)#"  , py::arg("theDocument"),  py::arg("theFileName"))
        .def("Write",
             (void (XmlLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & ,  std::ostream &  ) ) static_cast<void (XmlLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & ,  std::ostream &  ) >(&XmlLDrivers_DocumentStorageDriver::Write),
             R"#(None)#"  , py::arg("theDocument"),  py::arg("theOStream"))
        .def("AttributeDrivers",
             (opencascade::handle<XmlMDF_ADriverTable> (XmlLDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<XmlMDF_ADriverTable> (XmlLDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> &  ) >(&XmlLDrivers_DocumentStorageDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlLDrivers_DocumentStorageDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlLDrivers_DocumentStorageDriver::*)() const>(&XmlLDrivers_DocumentStorageDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlLDrivers_DocumentStorageDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlLDrivers_DocumentStorageDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlLDrivers_NamespaceDef , shared_ptr<XmlLDrivers_NamespaceDef>  >>(m.attr("XmlLDrivers_NamespaceDef"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TCollection_AsciiString &,const TCollection_AsciiString & >()  , py::arg("thePrefix"),  py::arg("theURI") )
    // custom constructors
    // methods
        .def("Prefix",
             (const TCollection_AsciiString & (XmlLDrivers_NamespaceDef::*)() const) static_cast<const TCollection_AsciiString & (XmlLDrivers_NamespaceDef::*)() const>(&XmlLDrivers_NamespaceDef::Prefix),
             R"#(None)#" )
        .def("URI",
             (const TCollection_AsciiString & (XmlLDrivers_NamespaceDef::*)() const) static_cast<const TCollection_AsciiString & (XmlLDrivers_NamespaceDef::*)() const>(&XmlLDrivers_NamespaceDef::URI),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/XmlLDrivers.hxx
// ./opencascade/XmlLDrivers_DocumentStorageDriver.hxx
// ./opencascade/XmlLDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/XmlLDrivers_NamespaceDef.hxx
// ./opencascade/XmlLDrivers_SequenceOfNamespaceDef.hxx

// operators

// register typdefs
    register_template_NCollection_Sequence<XmlLDrivers_NamespaceDef>(m,"XmlLDrivers_SequenceOfNamespaceDef");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
