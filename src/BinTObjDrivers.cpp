
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <BinTObjDrivers.hxx>
#include <BinTObjDrivers_DocumentRetrievalDriver.hxx>
#include <BinTObjDrivers_DocumentStorageDriver.hxx>
#include <BinTObjDrivers_IntSparseArrayDriver.hxx>
#include <BinTObjDrivers_ModelDriver.hxx>
#include <BinTObjDrivers_ObjectDriver.hxx>
#include <BinTObjDrivers_ReferenceDriver.hxx>
#include <BinTObjDrivers_XYZDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinTObjDrivers(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinTObjDrivers"));


//Python trampoline classes

// classes


    static_cast<py::class_<BinTObjDrivers_ReferenceDriver ,opencascade::handle<BinTObjDrivers_ReferenceDriver>  , BinMDF_ADriver >>(m.attr("BinTObjDrivers_ReferenceDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinTObjDrivers_ReferenceDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinTObjDrivers_ReferenceDriver::*)() const>(&BinTObjDrivers_ReferenceDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinTObjDrivers_ReferenceDriver::*)( const BinObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_RRelocationTable &  ) const) static_cast<Standard_Boolean (BinTObjDrivers_ReferenceDriver::*)( const BinObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_RRelocationTable &  ) const>(&BinTObjDrivers_ReferenceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinTObjDrivers_ReferenceDriver::*)( const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (BinTObjDrivers_ReferenceDriver::*)( const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&BinTObjDrivers_ReferenceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinTObjDrivers_ReferenceDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinTObjDrivers_ReferenceDriver::*)() const>(&BinTObjDrivers_ReferenceDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinTObjDrivers_ReferenceDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinTObjDrivers_ReferenceDriver::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BinTObjDrivers_IntSparseArrayDriver ,opencascade::handle<BinTObjDrivers_IntSparseArrayDriver>  , BinMDF_ADriver >>(m.attr("BinTObjDrivers_IntSparseArrayDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinTObjDrivers_IntSparseArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinTObjDrivers_IntSparseArrayDriver::*)() const>(&BinTObjDrivers_IntSparseArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinTObjDrivers_IntSparseArrayDriver::*)( const BinObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_RRelocationTable &  ) const) static_cast<Standard_Boolean (BinTObjDrivers_IntSparseArrayDriver::*)( const BinObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_RRelocationTable &  ) const>(&BinTObjDrivers_IntSparseArrayDriver::Paste),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theTarget"),  py::arg("theRelocTable"))
        .def("Paste",
             (void (BinTObjDrivers_IntSparseArrayDriver::*)( const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (BinTObjDrivers_IntSparseArrayDriver::*)( const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&BinTObjDrivers_IntSparseArrayDriver::Paste),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theTarget"),  py::arg("theRelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinTObjDrivers_IntSparseArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinTObjDrivers_IntSparseArrayDriver::*)() const>(&BinTObjDrivers_IntSparseArrayDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinTObjDrivers_IntSparseArrayDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinTObjDrivers_IntSparseArrayDriver::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BinTObjDrivers_DocumentStorageDriver ,opencascade::handle<BinTObjDrivers_DocumentStorageDriver>  , BinLDrivers_DocumentStorageDriver >>(m.attr("BinTObjDrivers_DocumentStorageDriver"))
        .def(py::init<  >()  )
        .def("AttributeDrivers",
             (opencascade::handle<BinMDF_ADriverTable> (BinTObjDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<BinMDF_ADriverTable> (BinTObjDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> &  ) >(&BinTObjDrivers_DocumentStorageDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinTObjDrivers_DocumentStorageDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinTObjDrivers_DocumentStorageDriver::*)() const>(&BinTObjDrivers_DocumentStorageDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinTObjDrivers_DocumentStorageDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinTObjDrivers_DocumentStorageDriver::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BinTObjDrivers_XYZDriver ,opencascade::handle<BinTObjDrivers_XYZDriver>  , BinMDF_ADriver >>(m.attr("BinTObjDrivers_XYZDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinTObjDrivers_XYZDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinTObjDrivers_XYZDriver::*)() const>(&BinTObjDrivers_XYZDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinTObjDrivers_XYZDriver::*)( const BinObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_RRelocationTable &  ) const) static_cast<Standard_Boolean (BinTObjDrivers_XYZDriver::*)( const BinObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_RRelocationTable &  ) const>(&BinTObjDrivers_XYZDriver::Paste),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theTarget"),  py::arg("theRelocTable"))
        .def("Paste",
             (void (BinTObjDrivers_XYZDriver::*)( const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (BinTObjDrivers_XYZDriver::*)( const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&BinTObjDrivers_XYZDriver::Paste),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theTarget"),  py::arg("theRelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinTObjDrivers_XYZDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinTObjDrivers_XYZDriver::*)() const>(&BinTObjDrivers_XYZDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinTObjDrivers_XYZDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinTObjDrivers_XYZDriver::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BinTObjDrivers_DocumentRetrievalDriver ,opencascade::handle<BinTObjDrivers_DocumentRetrievalDriver>  , BinLDrivers_DocumentRetrievalDriver >>(m.attr("BinTObjDrivers_DocumentRetrievalDriver"))
        .def(py::init<  >()  )
        .def("AttributeDrivers",
             (opencascade::handle<BinMDF_ADriverTable> (BinTObjDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<BinMDF_ADriverTable> (BinTObjDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> &  ) >(&BinTObjDrivers_DocumentRetrievalDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinTObjDrivers_DocumentRetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinTObjDrivers_DocumentRetrievalDriver::*)() const>(&BinTObjDrivers_DocumentRetrievalDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinTObjDrivers_DocumentRetrievalDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinTObjDrivers_DocumentRetrievalDriver::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BinTObjDrivers_ObjectDriver ,opencascade::handle<BinTObjDrivers_ObjectDriver>  , BinMDF_ADriver >>(m.attr("BinTObjDrivers_ObjectDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinTObjDrivers_ObjectDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinTObjDrivers_ObjectDriver::*)() const>(&BinTObjDrivers_ObjectDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinTObjDrivers_ObjectDriver::*)( const BinObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_RRelocationTable &  ) const) static_cast<Standard_Boolean (BinTObjDrivers_ObjectDriver::*)( const BinObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_RRelocationTable &  ) const>(&BinTObjDrivers_ObjectDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinTObjDrivers_ObjectDriver::*)( const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (BinTObjDrivers_ObjectDriver::*)( const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&BinTObjDrivers_ObjectDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinTObjDrivers_ObjectDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinTObjDrivers_ObjectDriver::*)() const>(&BinTObjDrivers_ObjectDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinTObjDrivers_ObjectDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinTObjDrivers_ObjectDriver::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BinTObjDrivers_ModelDriver ,opencascade::handle<BinTObjDrivers_ModelDriver>  , BinMDF_ADriver >>(m.attr("BinTObjDrivers_ModelDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinTObjDrivers_ModelDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinTObjDrivers_ModelDriver::*)() const>(&BinTObjDrivers_ModelDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinTObjDrivers_ModelDriver::*)( const BinObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_RRelocationTable &  ) const) static_cast<Standard_Boolean (BinTObjDrivers_ModelDriver::*)( const BinObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_RRelocationTable &  ) const>(&BinTObjDrivers_ModelDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinTObjDrivers_ModelDriver::*)( const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (BinTObjDrivers_ModelDriver::*)( const opencascade::handle<TDF_Attribute> & ,  BinObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&BinTObjDrivers_ModelDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinTObjDrivers_ModelDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinTObjDrivers_ModelDriver::*)() const>(&BinTObjDrivers_ModelDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinTObjDrivers_ModelDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinTObjDrivers_ModelDriver::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/BinTObjDrivers_ReferenceDriver.hxx
// ./opencascade/BinTObjDrivers_XYZDriver.hxx
// ./opencascade/BinTObjDrivers_IntSparseArrayDriver.hxx
// ./opencascade/BinTObjDrivers_ObjectDriver.hxx
// ./opencascade/BinTObjDrivers.hxx
// ./opencascade/BinTObjDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/BinTObjDrivers_DocumentStorageDriver.hxx
// ./opencascade/BinTObjDrivers_ModelDriver.hxx

// operators

// register typdefs
// ./opencascade/BinTObjDrivers_ReferenceDriver.hxx
// ./opencascade/BinTObjDrivers_XYZDriver.hxx
// ./opencascade/BinTObjDrivers_IntSparseArrayDriver.hxx
// ./opencascade/BinTObjDrivers_ObjectDriver.hxx
// ./opencascade/BinTObjDrivers.hxx
// ./opencascade/BinTObjDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/BinTObjDrivers_DocumentStorageDriver.hxx
// ./opencascade/BinTObjDrivers_ModelDriver.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
