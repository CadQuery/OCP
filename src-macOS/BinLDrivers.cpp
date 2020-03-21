
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
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinLDrivers(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinLDrivers"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BinLDrivers , shared_ptr<BinLDrivers>>(m,"BinLDrivers");

    static_cast<py::class_<BinLDrivers , shared_ptr<BinLDrivers> >>(m.attr("BinLDrivers"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinLDrivers_DocumentRetrievalDriver ,opencascade::handle<BinLDrivers_DocumentRetrievalDriver> , PCDM_RetrievalDriver>>(m.attr("BinLDrivers_DocumentRetrievalDriver"))
    // constructors
    // custom constructors
    // methods
        .def("CreateDocument",
             (opencascade::handle<CDM_Document> (BinLDrivers_DocumentRetrievalDriver::*)() ) static_cast<opencascade::handle<CDM_Document> (BinLDrivers_DocumentRetrievalDriver::*)() >(&BinLDrivers_DocumentRetrievalDriver::CreateDocument),
             R"#(pure virtual method definition)#" )
        .def("Read",
             (void (BinLDrivers_DocumentRetrievalDriver::*)( const TCollection_ExtendedString & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) ) static_cast<void (BinLDrivers_DocumentRetrievalDriver::*)( const TCollection_ExtendedString & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) >(&BinLDrivers_DocumentRetrievalDriver::Read),
             R"#(retrieves the content of the file into a new Document.)#"  , py::arg("theFileName"),  py::arg("theNewDocument"),  py::arg("theApplication"))
        .def("Read",
             (void (BinLDrivers_DocumentRetrievalDriver::*)( std::istream & , const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) ) static_cast<void (BinLDrivers_DocumentRetrievalDriver::*)( std::istream & , const opencascade::handle<Storage_Data> & , const opencascade::handle<CDM_Document> & , const opencascade::handle<CDM_Application> & ) >(&BinLDrivers_DocumentRetrievalDriver::Read),
             R"#(None)#"  , py::arg("theIStream"),  py::arg("theStorageData"),  py::arg("theDoc"),  py::arg("theApplication"))
        .def("AttributeDrivers",
             (opencascade::handle<BinMDF_ADriverTable> (BinLDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> & ) ) static_cast<opencascade::handle<BinMDF_ADriverTable> (BinLDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> & ) >(&BinLDrivers_DocumentRetrievalDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinLDrivers_DocumentRetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinLDrivers_DocumentRetrievalDriver::*)() const>(&BinLDrivers_DocumentRetrievalDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinLDrivers_DocumentRetrievalDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinLDrivers_DocumentSection , shared_ptr<BinLDrivers_DocumentSection> >>(m.attr("BinLDrivers_DocumentSection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinLDrivers_DocumentStorageDriver ,opencascade::handle<BinLDrivers_DocumentStorageDriver> , PCDM_StorageDriver>>(m.attr("BinLDrivers_DocumentStorageDriver"))
    // constructors
    // custom constructors
    // methods
        .def("Write",
             (void (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) ) static_cast<void (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & , const TCollection_ExtendedString & ) >(&BinLDrivers_DocumentStorageDriver::Write),
             R"#(Write <theDocument> to the binary file <theFileName>)#"  , py::arg("theDocument"),  py::arg("theFileName"))
        .def("Write",
             (void (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & , std::ostream & ) ) static_cast<void (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<CDM_Document> & , std::ostream & ) >(&BinLDrivers_DocumentStorageDriver::Write),
             R"#(Write <theDocument> to theOStream)#"  , py::arg("theDocument"),  py::arg("theOStream"))
        .def("AttributeDrivers",
             (opencascade::handle<BinMDF_ADriverTable> (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> & ) ) static_cast<opencascade::handle<BinMDF_ADriverTable> (BinLDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> & ) >(&BinLDrivers_DocumentStorageDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinLDrivers_DocumentStorageDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinLDrivers_DocumentStorageDriver::*)() const>(&BinLDrivers_DocumentStorageDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinLDrivers_DocumentStorageDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BinLDrivers_VectorOfDocumentSection.hxx
// ./opencascade/BinLDrivers_DocumentSection.hxx
// ./opencascade/BinLDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/BinLDrivers.hxx
// ./opencascade/BinLDrivers_Marker.hxx
// ./opencascade/BinLDrivers_DocumentStorageDriver.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Vector<BinLDrivers_DocumentSection>(m,"BinLDrivers_VectorOfDocumentSection");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
