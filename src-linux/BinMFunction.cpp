
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMFunction_FunctionDriver.hxx>
#include <BinMFunction_GraphNodeDriver.hxx>
#include <BinMFunction_ScopeDriver.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMFunction.hxx>
#include <BinMFunction_FunctionDriver.hxx>
#include <BinMFunction_GraphNodeDriver.hxx>
#include <BinMFunction_ScopeDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMFunction(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinMFunction"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BinMFunction , shared_ptr<BinMFunction>>(m,"BinMFunction");

    static_cast<py::class_<BinMFunction , shared_ptr<BinMFunction> >>(m.attr("BinMFunction"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("AddDrivers_s",
                    (void (*)( const opencascade::handle<BinMDF_ADriverTable> & , const opencascade::handle<Message_Messenger> & ) ) static_cast<void (*)( const opencascade::handle<BinMDF_ADriverTable> & , const opencascade::handle<Message_Messenger> & ) >(&BinMFunction::AddDrivers),
                    R"#(Adds the attribute drivers to <theDriverTable>.)#"  , py::arg("theDriverTable"),  py::arg("aMsgDrv"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMFunction_FunctionDriver ,opencascade::handle<BinMFunction_FunctionDriver> , BinMDF_ADriver>>(m.attr("BinMFunction_FunctionDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMFunction_FunctionDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMFunction_FunctionDriver::*)() const>(&BinMFunction_FunctionDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMFunction_FunctionDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMFunction_FunctionDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMFunction_FunctionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMFunction_FunctionDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMFunction_FunctionDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMFunction_FunctionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMFunction_FunctionDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMFunction_FunctionDriver::*)() const>(&BinMFunction_FunctionDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMFunction_FunctionDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMFunction_FunctionDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMFunction_GraphNodeDriver ,opencascade::handle<BinMFunction_GraphNodeDriver> , BinMDF_ADriver>>(m.attr("BinMFunction_GraphNodeDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMFunction_GraphNodeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMFunction_GraphNodeDriver::*)() const>(&BinMFunction_GraphNodeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMFunction_GraphNodeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMFunction_GraphNodeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMFunction_GraphNodeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMFunction_GraphNodeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMFunction_GraphNodeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMFunction_GraphNodeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMFunction_GraphNodeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMFunction_GraphNodeDriver::*)() const>(&BinMFunction_GraphNodeDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMFunction_GraphNodeDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMFunction_GraphNodeDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMFunction_ScopeDriver ,opencascade::handle<BinMFunction_ScopeDriver> , BinMDF_ADriver>>(m.attr("BinMFunction_ScopeDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMFunction_ScopeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMFunction_ScopeDriver::*)() const>(&BinMFunction_ScopeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMFunction_ScopeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMFunction_ScopeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMFunction_ScopeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMFunction_ScopeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMFunction_ScopeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMFunction_ScopeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMFunction_ScopeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMFunction_ScopeDriver::*)() const>(&BinMFunction_ScopeDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMFunction_ScopeDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMFunction_ScopeDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BinMFunction_ScopeDriver.hxx
// ./opencascade/BinMFunction.hxx
// ./opencascade/BinMFunction_GraphNodeDriver.hxx
// ./opencascade/BinMFunction_FunctionDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
