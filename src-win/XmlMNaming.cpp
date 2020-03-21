
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMNaming_NamedShapeDriver.hxx>
#include <XmlMNaming_NamingDriver.hxx>
#include <XmlMNaming_Shape1.hxx>
#include <TopoDS_Shape.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>

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
        .def_static("AddDrivers_s",
                    (void (*)( const opencascade::handle<XmlMDF_ADriverTable> & , const opencascade::handle<Message_Messenger> & ) ) static_cast<void (*)( const opencascade::handle<XmlMDF_ADriverTable> & , const opencascade::handle<Message_Messenger> & ) >(&XmlMNaming::AddDrivers),
                    R"#(Adds the attribute drivers to <aDriverTable>.)#"  , py::arg("aDriverTable"),  py::arg("aMessageDriver"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMNaming_NamedShapeDriver ,opencascade::handle<XmlMNaming_NamedShapeDriver> , XmlMDF_ADriver>>(m.attr("XmlMNaming_NamedShapeDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("aMessageDriver") )
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
        .def("ReadShapeSection",
             (void (XmlMNaming_NamedShapeDriver::*)(  const LDOM_Element & ) ) static_cast<void (XmlMNaming_NamedShapeDriver::*)(  const LDOM_Element & ) >(&XmlMNaming_NamedShapeDriver::ReadShapeSection),
             R"#(Input the shapes from DOM element)#"  , py::arg("anElement"))
        .def("WriteShapeSection",
             (void (XmlMNaming_NamedShapeDriver::*)( LDOM_Element & ) ) static_cast<void (XmlMNaming_NamedShapeDriver::*)( LDOM_Element & ) >(&XmlMNaming_NamedShapeDriver::WriteShapeSection),
             R"#(Output the shapes into DOM element)#"  , py::arg("anElement"))
        .def("Clear",
             (void (XmlMNaming_NamedShapeDriver::*)() ) static_cast<void (XmlMNaming_NamedShapeDriver::*)() >(&XmlMNaming_NamedShapeDriver::Clear),
             R"#(Clear myShapeSet)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlMNaming_NamedShapeDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMNaming_NamingDriver ,opencascade::handle<XmlMNaming_NamingDriver> , XmlMDF_ADriver>>(m.attr("XmlMNaming_NamingDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("aMessageDriver") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&XmlMNaming_NamingDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMNaming_Shape1 , shared_ptr<XmlMNaming_Shape1> >>(m.attr("XmlMNaming_Shape1"))
    // constructors
        .def(py::init< LDOM_Document & >()  , py::arg("Doc") )
        .def(py::init<  const LDOM_Element & >()  , py::arg("E") )
    // custom constructors
    // methods
        .def("Element",
             (const XmlObjMgt_Element & (XmlMNaming_Shape1::*)() const) static_cast<const XmlObjMgt_Element & (XmlMNaming_Shape1::*)() const>(&XmlMNaming_Shape1::Element),
             R"#(return myElement)#" )
        .def("Element",
             (XmlObjMgt_Element & (XmlMNaming_Shape1::*)() ) static_cast<XmlObjMgt_Element & (XmlMNaming_Shape1::*)() >(&XmlMNaming_Shape1::Element),
             R"#(return myElement)#" )
        .def("TShapeId",
             (Standard_Integer (XmlMNaming_Shape1::*)() const) static_cast<Standard_Integer (XmlMNaming_Shape1::*)() const>(&XmlMNaming_Shape1::TShapeId),
             R"#(None)#" )
        .def("LocId",
             (Standard_Integer (XmlMNaming_Shape1::*)() const) static_cast<Standard_Integer (XmlMNaming_Shape1::*)() const>(&XmlMNaming_Shape1::LocId),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (XmlMNaming_Shape1::*)() const) static_cast<TopAbs_Orientation (XmlMNaming_Shape1::*)() const>(&XmlMNaming_Shape1::Orientation),
             R"#(None)#" )
        .def("SetShape",
             (void (XmlMNaming_Shape1::*)( const Standard_Integer , const Standard_Integer , const TopAbs_Orientation ) ) static_cast<void (XmlMNaming_Shape1::*)( const Standard_Integer , const Standard_Integer , const TopAbs_Orientation ) >(&XmlMNaming_Shape1::SetShape),
             R"#(None)#"  , py::arg("ID"),  py::arg("LocID"),  py::arg("Orient"))
        .def("SetVertex",
             (void (XmlMNaming_Shape1::*)( const TopoDS_Shape & ) ) static_cast<void (XmlMNaming_Shape1::*)( const TopoDS_Shape & ) >(&XmlMNaming_Shape1::SetVertex),
             R"#(None)#"  , py::arg("theVertex"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\XmlMNaming_NamedShapeDriver.hxx
// ./opencascade\XmlMNaming.hxx
// ./opencascade\XmlMNaming_Shape1.hxx
// ./opencascade\XmlMNaming_NamingDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
