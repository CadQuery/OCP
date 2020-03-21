
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
#include <BinMDocStd_XLinkDriver.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMDocStd.hxx>
#include <BinMDocStd_XLinkDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMDocStd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinMDocStd"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BinMDocStd , shared_ptr<BinMDocStd>>(m,"BinMDocStd");

    static_cast<py::class_<BinMDocStd , shared_ptr<BinMDocStd> >>(m.attr("BinMDocStd"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDocStd_XLinkDriver ,opencascade::handle<BinMDocStd_XLinkDriver> , BinMDF_ADriver>>(m.attr("BinMDocStd_XLinkDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDocStd_XLinkDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDocStd_XLinkDriver::*)() const>(&BinMDocStd_XLinkDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDocStd_XLinkDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDocStd_XLinkDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDocStd_XLinkDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDocStd_XLinkDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDocStd_XLinkDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDocStd_XLinkDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDocStd_XLinkDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDocStd_XLinkDriver::*)() const>(&BinMDocStd_XLinkDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDocStd_XLinkDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BinMDocStd.hxx
// ./opencascade/BinMDocStd_XLinkDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
