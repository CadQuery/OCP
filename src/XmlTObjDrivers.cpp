
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <XmlTObjDrivers.hxx>
#include <XmlTObjDrivers_DocumentRetrievalDriver.hxx>
#include <XmlTObjDrivers_DocumentStorageDriver.hxx>
#include <XmlTObjDrivers_IntSparseArrayDriver.hxx>
#include <XmlTObjDrivers_ModelDriver.hxx>
#include <XmlTObjDrivers_ObjectDriver.hxx>
#include <XmlTObjDrivers_ReferenceDriver.hxx>
#include <XmlTObjDrivers_XYZDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>

// Module definiiton
void register_XmlTObjDrivers(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlTObjDrivers"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<XmlTObjDrivers , shared_ptr<XmlTObjDrivers>>(m,"XmlTObjDrivers");

    static_cast<py::class_<XmlTObjDrivers , shared_ptr<XmlTObjDrivers>  >>(m.attr("XmlTObjDrivers"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Factory_s",
                    (const opencascade::handle<Standard_Transient> & (*)( const Standard_GUID &  ) ) static_cast<const opencascade::handle<Standard_Transient> & (*)( const Standard_GUID &  ) >(&XmlTObjDrivers::Factory),
                    R"#(Returns a driver corresponding to <aGUID>. Used for plugin.)#"  , py::arg("aGUID"))
        .def_static("DefineFormat_s",
                    (void (*)( const opencascade::handle<TDocStd_Application> &  ) ) static_cast<void (*)( const opencascade::handle<TDocStd_Application> &  ) >(&XmlTObjDrivers::DefineFormat),
                    R"#(Defines format "TObjXml" and registers its read and write drivers in the specified application)#"  , py::arg("theApp"))
        .def_static("AddDrivers_s",
                    (void (*)( const opencascade::handle<XmlMDF_ADriverTable> & ,  const opencascade::handle<Message_Messenger> &  ) ) static_cast<void (*)( const opencascade::handle<XmlMDF_ADriverTable> & ,  const opencascade::handle<Message_Messenger> &  ) >(&XmlTObjDrivers::AddDrivers),
                    R"#(None)#"  , py::arg("aDriverTable"),  py::arg("anMsgDrv"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlTObjDrivers_DocumentRetrievalDriver ,opencascade::handle<XmlTObjDrivers_DocumentRetrievalDriver>  , XmlLDrivers_DocumentRetrievalDriver >>(m.attr("XmlTObjDrivers_DocumentRetrievalDriver"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AttributeDrivers",
             (opencascade::handle<XmlMDF_ADriverTable> (XmlTObjDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<XmlMDF_ADriverTable> (XmlTObjDrivers_DocumentRetrievalDriver::*)( const opencascade::handle<Message_Messenger> &  ) >(&XmlTObjDrivers_DocumentRetrievalDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlTObjDrivers_DocumentRetrievalDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlTObjDrivers_DocumentRetrievalDriver::*)() const>(&XmlTObjDrivers_DocumentRetrievalDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlTObjDrivers_DocumentRetrievalDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlTObjDrivers_DocumentRetrievalDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlTObjDrivers_DocumentStorageDriver ,opencascade::handle<XmlTObjDrivers_DocumentStorageDriver>  , XmlLDrivers_DocumentStorageDriver >>(m.attr("XmlTObjDrivers_DocumentStorageDriver"))
    // constructors
        .def(py::init< const TCollection_ExtendedString & >()  , py::arg("theCopyright") )
    // custom constructors
    // methods
        .def("AttributeDrivers",
             (opencascade::handle<XmlMDF_ADriverTable> (XmlTObjDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<opencascade::handle<XmlMDF_ADriverTable> (XmlTObjDrivers_DocumentStorageDriver::*)( const opencascade::handle<Message_Messenger> &  ) >(&XmlTObjDrivers_DocumentStorageDriver::AttributeDrivers),
             R"#(None)#"  , py::arg("theMsgDriver"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlTObjDrivers_DocumentStorageDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlTObjDrivers_DocumentStorageDriver::*)() const>(&XmlTObjDrivers_DocumentStorageDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlTObjDrivers_DocumentStorageDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlTObjDrivers_DocumentStorageDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlTObjDrivers_IntSparseArrayDriver ,opencascade::handle<XmlTObjDrivers_IntSparseArrayDriver>  , XmlMDF_ADriver >>(m.attr("XmlTObjDrivers_IntSparseArrayDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlTObjDrivers_IntSparseArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlTObjDrivers_IntSparseArrayDriver::*)() const>(&XmlTObjDrivers_IntSparseArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlTObjDrivers_IntSparseArrayDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_RRelocationTable &  ) const) static_cast<Standard_Boolean (XmlTObjDrivers_IntSparseArrayDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_RRelocationTable &  ) const>(&XmlTObjDrivers_IntSparseArrayDriver::Paste),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theTarget"),  py::arg("theRelocTable"))
        .def("Paste",
             (void (XmlTObjDrivers_IntSparseArrayDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  XmlObjMgt_SRelocationTable &  ) const) static_cast<void (XmlTObjDrivers_IntSparseArrayDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  XmlObjMgt_SRelocationTable &  ) const>(&XmlTObjDrivers_IntSparseArrayDriver::Paste),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theTarget"),  py::arg("theRelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlTObjDrivers_IntSparseArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlTObjDrivers_IntSparseArrayDriver::*)() const>(&XmlTObjDrivers_IntSparseArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlTObjDrivers_IntSparseArrayDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlTObjDrivers_IntSparseArrayDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlTObjDrivers_ModelDriver ,opencascade::handle<XmlTObjDrivers_ModelDriver>  , XmlMDF_ADriver >>(m.attr("XmlTObjDrivers_ModelDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlTObjDrivers_ModelDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlTObjDrivers_ModelDriver::*)() const>(&XmlTObjDrivers_ModelDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlTObjDrivers_ModelDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_RRelocationTable &  ) const) static_cast<Standard_Boolean (XmlTObjDrivers_ModelDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_RRelocationTable &  ) const>(&XmlTObjDrivers_ModelDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlTObjDrivers_ModelDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  XmlObjMgt_SRelocationTable &  ) const) static_cast<void (XmlTObjDrivers_ModelDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  XmlObjMgt_SRelocationTable &  ) const>(&XmlTObjDrivers_ModelDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlTObjDrivers_ModelDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlTObjDrivers_ModelDriver::*)() const>(&XmlTObjDrivers_ModelDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlTObjDrivers_ModelDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlTObjDrivers_ModelDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlTObjDrivers_ObjectDriver ,opencascade::handle<XmlTObjDrivers_ObjectDriver>  , XmlMDF_ADriver >>(m.attr("XmlTObjDrivers_ObjectDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlTObjDrivers_ObjectDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlTObjDrivers_ObjectDriver::*)() const>(&XmlTObjDrivers_ObjectDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlTObjDrivers_ObjectDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_RRelocationTable &  ) const) static_cast<Standard_Boolean (XmlTObjDrivers_ObjectDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_RRelocationTable &  ) const>(&XmlTObjDrivers_ObjectDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlTObjDrivers_ObjectDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  XmlObjMgt_SRelocationTable &  ) const) static_cast<void (XmlTObjDrivers_ObjectDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  XmlObjMgt_SRelocationTable &  ) const>(&XmlTObjDrivers_ObjectDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlTObjDrivers_ObjectDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlTObjDrivers_ObjectDriver::*)() const>(&XmlTObjDrivers_ObjectDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlTObjDrivers_ObjectDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlTObjDrivers_ObjectDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlTObjDrivers_ReferenceDriver ,opencascade::handle<XmlTObjDrivers_ReferenceDriver>  , XmlMDF_ADriver >>(m.attr("XmlTObjDrivers_ReferenceDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlTObjDrivers_ReferenceDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlTObjDrivers_ReferenceDriver::*)() const>(&XmlTObjDrivers_ReferenceDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlTObjDrivers_ReferenceDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_RRelocationTable &  ) const) static_cast<Standard_Boolean (XmlTObjDrivers_ReferenceDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_RRelocationTable &  ) const>(&XmlTObjDrivers_ReferenceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlTObjDrivers_ReferenceDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  XmlObjMgt_SRelocationTable &  ) const) static_cast<void (XmlTObjDrivers_ReferenceDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  XmlObjMgt_SRelocationTable &  ) const>(&XmlTObjDrivers_ReferenceDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlTObjDrivers_ReferenceDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlTObjDrivers_ReferenceDriver::*)() const>(&XmlTObjDrivers_ReferenceDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlTObjDrivers_ReferenceDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlTObjDrivers_ReferenceDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlTObjDrivers_XYZDriver ,opencascade::handle<XmlTObjDrivers_XYZDriver>  , XmlMDF_ADriver >>(m.attr("XmlTObjDrivers_XYZDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlTObjDrivers_XYZDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlTObjDrivers_XYZDriver::*)() const>(&XmlTObjDrivers_XYZDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlTObjDrivers_XYZDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_RRelocationTable &  ) const) static_cast<Standard_Boolean (XmlTObjDrivers_XYZDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_RRelocationTable &  ) const>(&XmlTObjDrivers_XYZDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlTObjDrivers_XYZDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  XmlObjMgt_SRelocationTable &  ) const) static_cast<void (XmlTObjDrivers_XYZDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  XmlObjMgt_SRelocationTable &  ) const>(&XmlTObjDrivers_XYZDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlTObjDrivers_XYZDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlTObjDrivers_XYZDriver::*)() const>(&XmlTObjDrivers_XYZDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlTObjDrivers_XYZDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlTObjDrivers_XYZDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/XmlTObjDrivers_ReferenceDriver.hxx
// ./opencascade/XmlTObjDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/XmlTObjDrivers_ObjectDriver.hxx
// ./opencascade/XmlTObjDrivers_DocumentStorageDriver.hxx
// ./opencascade/XmlTObjDrivers_ModelDriver.hxx
// ./opencascade/XmlTObjDrivers_IntSparseArrayDriver.hxx
// ./opencascade/XmlTObjDrivers.hxx
// ./opencascade/XmlTObjDrivers_XYZDriver.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
