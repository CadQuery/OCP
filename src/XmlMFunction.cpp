
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMFunction_FunctionDriver.hxx>
#include <XmlMFunction_ScopeDriver.hxx>
#include <XmlMFunction_GraphNodeDriver.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>

// module includes
#include <XmlMFunction.hxx>
#include <XmlMFunction_FunctionDriver.hxx>
#include <XmlMFunction_GraphNodeDriver.hxx>
#include <XmlMFunction_ScopeDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMFunction(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlMFunction"));


//Python trampoline classes

// classes


    static_cast<py::class_<XmlMFunction_ScopeDriver ,opencascade::handle<XmlMFunction_ScopeDriver>  , XmlMDF_ADriver >>(m.attr("XmlMFunction_ScopeDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMFunction_ScopeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMFunction_ScopeDriver::*)() const>(&XmlMFunction_ScopeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMFunction_ScopeDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const) static_cast<Standard_Boolean (XmlMFunction_ScopeDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const>(&XmlMFunction_ScopeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMFunction_ScopeDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (XmlMFunction_ScopeDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&XmlMFunction_ScopeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMFunction_ScopeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMFunction_ScopeDriver::*)() const>(&XmlMFunction_ScopeDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMFunction_ScopeDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlMFunction_ScopeDriver::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<XmlMFunction ,std::unique_ptr<XmlMFunction>>(m,"XmlMFunction");

    static_cast<py::class_<XmlMFunction ,std::unique_ptr<XmlMFunction>  >>(m.attr("XmlMFunction"))
        .def_static("AddDrivers_s",
                    (void (*)( const opencascade::handle<XmlMDF_ADriverTable> & ,  const opencascade::handle<Message_Messenger> &  ) ) static_cast<void (*)( const opencascade::handle<XmlMDF_ADriverTable> & ,  const opencascade::handle<Message_Messenger> &  ) >(&XmlMFunction::AddDrivers),
                    R"#(Adds the attribute storage drivers to <aDriverTable>.)#"  , py::arg("aDriverTable"),  py::arg("theMessageDriver"))
;


    static_cast<py::class_<XmlMFunction_FunctionDriver ,opencascade::handle<XmlMFunction_FunctionDriver>  , XmlMDF_ADriver >>(m.attr("XmlMFunction_FunctionDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMFunction_FunctionDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMFunction_FunctionDriver::*)() const>(&XmlMFunction_FunctionDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMFunction_FunctionDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const) static_cast<Standard_Boolean (XmlMFunction_FunctionDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const>(&XmlMFunction_FunctionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMFunction_FunctionDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (XmlMFunction_FunctionDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&XmlMFunction_FunctionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMFunction_FunctionDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMFunction_FunctionDriver::*)() const>(&XmlMFunction_FunctionDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMFunction_FunctionDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlMFunction_FunctionDriver::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<XmlMFunction_GraphNodeDriver ,opencascade::handle<XmlMFunction_GraphNodeDriver>  , XmlMDF_ADriver >>(m.attr("XmlMFunction_GraphNodeDriver"))
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMFunction_GraphNodeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMFunction_GraphNodeDriver::*)() const>(&XmlMFunction_GraphNodeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMFunction_GraphNodeDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const) static_cast<Standard_Boolean (XmlMFunction_GraphNodeDriver::*)( const XmlObjMgt_Persistent & ,  const opencascade::handle<TDF_Attribute> & ,  TColStd_DataMapOfIntegerTransient &  ) const>(&XmlMFunction_GraphNodeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMFunction_GraphNodeDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const) static_cast<void (XmlMFunction_GraphNodeDriver::*)( const opencascade::handle<TDF_Attribute> & ,  XmlObjMgt_Persistent & ,  TColStd_IndexedMapOfTransient &  ) const>(&XmlMFunction_GraphNodeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMFunction_GraphNodeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMFunction_GraphNodeDriver::*)() const>(&XmlMFunction_GraphNodeDriver::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMFunction_GraphNodeDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlMFunction_GraphNodeDriver::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/XmlMFunction_ScopeDriver.hxx
// ./opencascade/XmlMFunction_FunctionDriver.hxx
// ./opencascade/XmlMFunction.hxx
// ./opencascade/XmlMFunction_GraphNodeDriver.hxx

// operators

// register typdefs
// ./opencascade/XmlMFunction_ScopeDriver.hxx
// ./opencascade/XmlMFunction_FunctionDriver.hxx
// ./opencascade/XmlMFunction.hxx
// ./opencascade/XmlMFunction_GraphNodeDriver.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
