
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <PCDM_Document.hxx>
#include <CDM_Document.hxx>
#include <CDM_Application.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_AsciiString.hxx>
#include <BinLDrivers_DocumentStorageDriver.hxx>
#include <BinLDrivers_DocumentRetrievalDriver.hxx>
#include <BinLDrivers_DocumentSection.hxx>
#include <TDocStd_Application.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <CDM_Document.hxx>

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
void register_BinLDrivers(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinLDrivers"));


//Python trampoline classes

// classes

    register_default_constructor<BinLDrivers , shared_ptr<BinLDrivers>>(m,"BinLDrivers");

    static_cast<py::class_<BinLDrivers , shared_ptr<BinLDrivers>  >>(m.attr("BinLDrivers"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Factory_s",
                    (const opencascade::handle<Standard_Transient> & (*)( const Standard_GUID &  ) ) static_cast<const opencascade::handle<Standard_Transient> & (*)( const Standard_GUID &  ) >(&BinLDrivers::Factory),
                    R"#(None)#"  , py::arg("theGUID"))
        .def_static("DefineFormat_s",
                    (void (*)( const opencascade::handle<TDocStd_Application> &  ) ) static_cast<void (*)( const opencascade::handle<TDocStd_Application> &  ) >(&BinLDrivers::DefineFormat),
                    R"#(Defines format "BinLOcaf" and registers its read and write drivers in the specified application)#"  , py::arg("theApp"))
        .def_static("AttributeDrivers_s",
                    (opencascade::handle<BinMDF_ADriverTable> (*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<BinMDF_ADriverTable> (*)( const opencascade::handle<Message_Messenger> &  ) >(&BinLDrivers::AttributeDrivers),
                    R"#(Creates a table of the supported drivers' types)#"  , py::arg("MsgDrv"))
        .def_static("StorageVersion_s",
                    (TCollection_AsciiString (*)() ) static_cast<TCollection_AsciiString (*)() >(&BinLDrivers::StorageVersion),
                    R"#(returns last storage version)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BinLDrivers_DocumentRetrievalDriver ,opencascade::handle<BinLDrivers_DocumentRetrievalDriver>  , PCDM_RetrievalDriver >>(m.attr("BinLDrivers_DocumentRetrievalDriver"))
        .def(py::init<  >()  )
    // methods
        .def("CreateDocument",
             (opencascade::handle<CDM_Document> (BinLDrivers_DocumentRetrievalDriver::*)() ) static_cast<opencascade::handle<CDM_Document> (BinLDrivers_DocumentRetrievalDriver::*)() >(&BinLDrivers_DocumentRetrievalDriver::CreateDocument),
             R"#(pure virtual method definition)#" )
        .def("Read",
             (void (BinLDrivers_DocumentRetrievalDriver::*)( const TCollection_ExtendedString & ,  const opencascade::handle<CDM_Document> & ,  const opencascade::handle<CDM_Application> &  ) ) static_cast<void (BinLDrivers_DocumentRetrievalDriver::*)( const TCollection_ExtendedString & ,  const opencascade::handle<CDM_Document> & ,  const opencascade::handle<CDM_Application> &  ) >(&BinLDrivers_DocumentRetrievalDriver::Read),
             R"#(retrieves the content of the file into a new Document.)#"  , py::arg("theFileName"),  py::arg("theNewDocument"),  py::arg("theApplication"))
        .def("Read",
             (void (BinLDrivers_DocumentRetrievalDriver::*)( std::istream & ,  const opencascade::handle<Storage_Data> & ,  const opencascade::handle<CDM_Document> & ,  const opencascade::handle<CDM_Application> &  ) ) static_cast<void (BinLDrivers_DocumentRetrievalDriver::*)( std::istream & ,  const opencascade::handle<Storage_Data> & ,  const opencascade::handle<CDM_Document> & ,  const opencascade::handle<CDM_Application> &  ) >(&BinLDrivers_DocumentRetrievalDriver::Read),
             R"#(None)#"  , py::arg("theIStream"),  py::arg("theStorageData"),  py::arg("theDoc"),  py::arg("theApplication"))
        .def("AttributeDrivers",
             (opencascade::handle<BinMDF_ADriverTable> (BinLDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<BinMDF_ADriverTable> (BinLDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> &  ) >(&BinLDrivers_DocumentRetrievalDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinLDrivers_DocumentRetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinLDrivers_DocumentRetrievalDriver::*)() const>(&BinLDrivers_DocumentRetrievalDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinLDrivers_DocumentRetrievalDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinLDrivers_DocumentRetrievalDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BinLDrivers_DocumentSection , shared_ptr<BinLDrivers_DocumentSection>  >>(m.attr("BinLDrivers_DocumentSection"))
        .def(py::init<  >()  )
        .def(py::init< const TCollection_AsciiString &,const Standard_Boolean >()  , py::arg("theName"),  py::arg("isPostRead") )
    // methods
        .def("Name",
             (const TCollection_AsciiString & (BinLDrivers_DocumentSection::*)() const) static_cast<const TCollection_AsciiString & (BinLDrivers_DocumentSection::*)() const>(&BinLDrivers_DocumentSection::Name),
             R"#(Query the name of the section.)#" )
        .def("IsPostRead",
             (Standard_Boolean (BinLDrivers_DocumentSection::*)() const) static_cast<Standard_Boolean (BinLDrivers_DocumentSection::*)() const>(&BinLDrivers_DocumentSection::IsPostRead),
             R"#(Query the status: if the Section should be read after OCAF; False means that the Section is read before starting to read OCAF data.)#" )
        .def("Offset",
             (uint64_t (BinLDrivers_DocumentSection::*)() const) static_cast<uint64_t (BinLDrivers_DocumentSection::*)() const>(&BinLDrivers_DocumentSection::Offset),
             R"#(Query the offset of the section in the persistent file)#" )
        .def("SetOffset",
             (void (BinLDrivers_DocumentSection::*)( const uint64_t  ) ) static_cast<void (BinLDrivers_DocumentSection::*)( const uint64_t  ) >(&BinLDrivers_DocumentSection::SetOffset),
             R"#(Set the offset of the section in the persistent file)#"  , py::arg("theOffset"))
        .def("Length",
             (uint64_t (BinLDrivers_DocumentSection::*)() const) static_cast<uint64_t (BinLDrivers_DocumentSection::*)() const>(&BinLDrivers_DocumentSection::Length),
             R"#(Query the length of the section in the persistent file)#" )
        .def("SetLength",
             (void (BinLDrivers_DocumentSection::*)( const uint64_t  ) ) static_cast<void (BinLDrivers_DocumentSection::*)( const uint64_t  ) >(&BinLDrivers_DocumentSection::SetLength),
             R"#(Set the length of the section in the persistent file)#"  , py::arg("theLength"))
        .def("WriteTOC",
             (void (BinLDrivers_DocumentSection::*)( std::ostream &  ) ) static_cast<void (BinLDrivers_DocumentSection::*)( std::ostream &  ) >(&BinLDrivers_DocumentSection::WriteTOC),
             R"#(Create a Section entry in the Document TOC (list of sections))#"  , py::arg("theOS"))
        .def("Write",
             (void (BinLDrivers_DocumentSection::*)( std::ostream & ,  const uint64_t  ) ) static_cast<void (BinLDrivers_DocumentSection::*)( std::ostream & ,  const uint64_t  ) >(&BinLDrivers_DocumentSection::Write),
             R"#(Save Offset and Length data into the Section entry in the Document TOC (list of sections))#"  , py::arg("theOS"),  py::arg("theOffset"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ReadTOC_s",
                    (void (*)( BinLDrivers_DocumentSection & ,  std::istream &  ) ) static_cast<void (*)( BinLDrivers_DocumentSection & ,  std::istream &  ) >(&BinLDrivers_DocumentSection::ReadTOC),
                    R"#(Fill a DocumentSection instance from the data that are read from TOC.)#"  , py::arg("theSection"),  py::arg("theIS"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BinLDrivers_DocumentStorageDriver ,opencascade::handle<BinLDrivers_DocumentStorageDriver>  , PCDM_StorageDriver >>(m.attr("BinLDrivers_DocumentStorageDriver"))
        .def(py::init<  >()  )
    // methods
        .def("Write",
             (void (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & ,  const TCollection_ExtendedString &  ) ) static_cast<void (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & ,  const TCollection_ExtendedString &  ) >(&BinLDrivers_DocumentStorageDriver::Write),
             R"#(Write <theDocument> to the binary file <theFileName>)#"  , py::arg("theDocument"),  py::arg("theFileName"))
        .def("Write",
             (void (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & ,  std::ostream &  ) ) static_cast<void (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & ,  std::ostream &  ) >(&BinLDrivers_DocumentStorageDriver::Write),
             R"#(Write <theDocument> to theOStream)#"  , py::arg("theDocument"),  py::arg("theOStream"))
        .def("AttributeDrivers",
             (opencascade::handle<BinMDF_ADriverTable> (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<BinMDF_ADriverTable> (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> &  ) >(&BinLDrivers_DocumentStorageDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("AddSection",
             (void (BinLDrivers_DocumentStorageDriver::*)( const TCollection_AsciiString & ,  const Standard_Boolean  ) ) static_cast<void (BinLDrivers_DocumentStorageDriver::*)( const TCollection_AsciiString & ,  const Standard_Boolean  ) >(&BinLDrivers_DocumentStorageDriver::AddSection),
             R"#(Create a section that should be written after the OCAF data)#"  , py::arg("theName"),  py::arg("isPostRead")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinLDrivers_DocumentStorageDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinLDrivers_DocumentStorageDriver::*)() const>(&BinLDrivers_DocumentStorageDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinLDrivers_DocumentStorageDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinLDrivers_DocumentStorageDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/BinLDrivers_DocumentSection.hxx
// ./opencascade/BinLDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/BinLDrivers.hxx
// ./opencascade/BinLDrivers_Marker.hxx
// ./opencascade/BinLDrivers_DocumentStorageDriver.hxx
// ./opencascade/BinLDrivers_VectorOfDocumentSection.hxx

// operators

// register typdefs
    register_template_NCollection_Vector<BinLDrivers_DocumentSection>(m,"BinLDrivers_VectorOfDocumentSection");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
