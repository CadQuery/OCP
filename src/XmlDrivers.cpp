
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlDrivers_DocumentStorageDriver.hxx>
#include <XmlDrivers_DocumentRetrievalDriver.hxx>
#include <TDocStd_Application.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDF_ADriver.hxx>

// module includes
#include <XmlDrivers.hxx>
#include <XmlDrivers_DocumentRetrievalDriver.hxx>
#include <XmlDrivers_DocumentStorageDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlDrivers(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlDrivers"));


//Python trampoline classes

// classes


    static_cast<py::class_<XmlDrivers_DocumentRetrievalDriver ,opencascade::handle<XmlDrivers_DocumentRetrievalDriver>  , XmlLDrivers_DocumentRetrievalDriver >>(m.attr("XmlDrivers_DocumentRetrievalDriver"))
        .def(py::init<  >()  )
        .def("AttributeDrivers",
             (opencascade::handle<XmlMDF_ADriverTable> (XmlDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<XmlMDF_ADriverTable> (XmlDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> &  ) >(&XmlDrivers_DocumentRetrievalDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("ReadShapeSection",
             (opencascade::handle<XmlMDF_ADriver> (XmlDrivers_DocumentRetrievalDriver::*)(  const LDOM_Element & ,  const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<XmlMDF_ADriver> (XmlDrivers_DocumentRetrievalDriver::*)(  const LDOM_Element & ,  const opencascade::handle<Message_Messenger> &  ) >(&XmlDrivers_DocumentRetrievalDriver::ReadShapeSection),
             R"#(None)#"  , py::arg("thePDoc"),  py::arg("theMsgDriver"))
        .def("ShapeSetCleaning",
             (void (XmlDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<XmlMDF_ADriver> &  ) ) static_cast<void (XmlDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<XmlMDF_ADriver> &  ) >(&XmlDrivers_DocumentRetrievalDriver::ShapeSetCleaning),
             R"#(None)#"  , py::arg("theDriver"))
        .def("PropagateDocumentVersion",
             (void (XmlDrivers_DocumentRetrievalDriver::*)( const Standard_Integer  ) ) static_cast<void (XmlDrivers_DocumentRetrievalDriver::*)( const Standard_Integer  ) >(&XmlDrivers_DocumentRetrievalDriver::PropagateDocumentVersion),
             R"#(None)#"  , py::arg("theDocVersion"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlDrivers_DocumentRetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlDrivers_DocumentRetrievalDriver::*)() const>(&XmlDrivers_DocumentRetrievalDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlDrivers_DocumentRetrievalDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlDrivers_DocumentRetrievalDriver::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<XmlDrivers_DocumentStorageDriver ,opencascade::handle<XmlDrivers_DocumentStorageDriver>  , XmlLDrivers_DocumentStorageDriver >>(m.attr("XmlDrivers_DocumentStorageDriver"))
        .def(py::init< const TCollection_ExtendedString & >()  , py::arg("theCopyright") )
        .def("AttributeDrivers",
             (opencascade::handle<XmlMDF_ADriverTable> (XmlDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<XmlMDF_ADriverTable> (XmlDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> &  ) >(&XmlDrivers_DocumentStorageDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("WriteShapeSection",
             (Standard_Boolean (XmlDrivers_DocumentStorageDriver::*)( LDOM_Element &  ) ) static_cast<Standard_Boolean (XmlDrivers_DocumentStorageDriver::*)( LDOM_Element &  ) >(&XmlDrivers_DocumentStorageDriver::WriteShapeSection),
             R"#(None)#"  , py::arg("thePDoc"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlDrivers_DocumentStorageDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlDrivers_DocumentStorageDriver::*)() const>(&XmlDrivers_DocumentStorageDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlDrivers_DocumentStorageDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlDrivers_DocumentStorageDriver::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/XmlDrivers.hxx
// ./opencascade/XmlDrivers_DocumentStorageDriver.hxx
// ./opencascade/XmlDrivers_DocumentRetrievalDriver.hxx

// operators

// register typdefs
// ./opencascade/XmlDrivers.hxx
// ./opencascade/XmlDrivers_DocumentStorageDriver.hxx
// ./opencascade/XmlDrivers_DocumentRetrievalDriver.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
