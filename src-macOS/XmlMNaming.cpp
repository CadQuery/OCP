
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
#include <XmlMNaming_NamedShapeDriver.hxx>
#include <XmlMNaming_NamingDriver.hxx>
#include <XmlMNaming_Shape1.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <XmlMNaming.hxx>
#include <XmlMNaming_NamedShapeDriver.hxx>
#include <XmlMNaming_NamingDriver.hxx>
#include <XmlMNaming_Shape1.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMNaming(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlMNaming"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<XmlMNaming , shared_ptr<XmlMNaming>>(m,"XmlMNaming");

    static_cast<py::class_<XmlMNaming , shared_ptr<XmlMNaming> >>(m.attr("XmlMNaming"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMNaming_NamedShapeDriver ,opencascade::handle<XmlMNaming_NamedShapeDriver> , XmlMDF_ADriver>>(m.attr("XmlMNaming_NamedShapeDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMNaming_NamedShapeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMNaming_NamedShapeDriver::*)() const>(&XmlMNaming_NamedShapeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMNaming_NamedShapeDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMNaming_NamedShapeDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMNaming_NamedShapeDriver::Paste),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theTarget"),  py::arg("theRelocTable"))
        .def("Paste",
             (void (XmlMNaming_NamedShapeDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMNaming_NamedShapeDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMNaming_NamedShapeDriver::Paste),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theTarget"),  py::arg("theRelocTable"))
        .def("GetShapesLocations",
             (TopTools_LocationSet & (XmlMNaming_NamedShapeDriver::*)() ) static_cast<TopTools_LocationSet & (XmlMNaming_NamedShapeDriver::*)() >(&XmlMNaming_NamedShapeDriver::GetShapesLocations),
             R"#(get the format of topology)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMNaming_NamedShapeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMNaming_NamedShapeDriver::*)() const>(&XmlMNaming_NamedShapeDriver::DynamicType),
             R"#(None)#" )
        .def("GetShapesLocations",
             (TopTools_LocationSet & (XmlMNaming_NamedShapeDriver::*)() ) static_cast<TopTools_LocationSet & (XmlMNaming_NamedShapeDriver::*)() >(&XmlMNaming_NamedShapeDriver::GetShapesLocations),
             R"#(get the format of topology)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMNaming_NamedShapeDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMNaming_NamingDriver ,opencascade::handle<XmlMNaming_NamingDriver> , XmlMDF_ADriver>>(m.attr("XmlMNaming_NamingDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMNaming_NamingDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMNaming_NamingDriver::*)() const>(&XmlMNaming_NamingDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMNaming_NamingDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMNaming_NamingDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMNaming_NamingDriver::Paste),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theTarget"),  py::arg("theRelocTable"))
        .def("Paste",
             (void (XmlMNaming_NamingDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMNaming_NamingDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMNaming_NamingDriver::Paste),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theTarget"),  py::arg("theRelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMNaming_NamingDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMNaming_NamingDriver::*)() const>(&XmlMNaming_NamingDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMNaming_NamingDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMNaming_Shape1 , shared_ptr<XmlMNaming_Shape1> >>(m.attr("XmlMNaming_Shape1"))
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
// ./opencascade/XmlMNaming.hxx
// ./opencascade/XmlMNaming_NamedShapeDriver.hxx
// ./opencascade/XmlMNaming_NamingDriver.hxx
// ./opencascade/XmlMNaming_Shape1.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
