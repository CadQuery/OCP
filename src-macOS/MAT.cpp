
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <MAT_Edge.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_TListNodeOfListOfBisector.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT_BasicElt.hxx>
#include <MAT_Node.hxx>
#include <Standard_DomainError.hxx>
#include <MAT_TListNodeOfListOfEdge.hxx>
#include <MAT_Edge.hxx>
#include <MAT_Edge.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT_Arc.hxx>
#include <MAT_BasicElt.hxx>
#include <MAT_Node.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_ListOfBisector.hxx>

// module includes
#include <MAT_Arc.hxx>
#include <MAT_BasicElt.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerArc.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerBasicElt.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerBisector.hxx>
#include <MAT_DataMapIteratorOfDataMapOfIntegerNode.hxx>
#include <MAT_DataMapOfIntegerArc.hxx>
#include <MAT_DataMapOfIntegerBasicElt.hxx>
#include <MAT_DataMapOfIntegerBisector.hxx>
#include <MAT_DataMapOfIntegerNode.hxx>
#include <MAT_Edge.hxx>
#include <MAT_Graph.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_Node.hxx>
#include <MAT_SequenceOfArc.hxx>
#include <MAT_SequenceOfBasicElt.hxx>
#include <MAT_Side.hxx>
#include <MAT_TListNodeOfListOfBisector.hxx>
#include <MAT_TListNodeOfListOfEdge.hxx>
#include <MAT_Zone.hxx>

// template related includes
// ./opencascade/MAT_DataMapOfIntegerNode.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT_SequenceOfBasicElt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT_DataMapOfIntegerBisector.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT_DataMapOfIntegerArc.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT_DataMapOfIntegerBasicElt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MAT_SequenceOfArc.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_MAT(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("MAT"));


//Python trampoline classes

// classes


    static_cast<py::class_<MAT_Arc ,opencascade::handle<MAT_Arc> , Standard_Transient>>(m.attr("MAT_Arc"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Arc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Arc::*)() const>(&MAT_Arc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Arc::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT_BasicElt ,opencascade::handle<MAT_BasicElt> , Standard_Transient>>(m.attr("MAT_BasicElt"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_BasicElt::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_BasicElt::*)() const>(&MAT_BasicElt::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_BasicElt::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT_Bisector ,opencascade::handle<MAT_Bisector> , Standard_Transient>>(m.attr("MAT_Bisector"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Bisector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Bisector::*)() const>(&MAT_Bisector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Bisector::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT_Edge ,opencascade::handle<MAT_Edge> , Standard_Transient>>(m.attr("MAT_Edge"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Edge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Edge::*)() const>(&MAT_Edge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Edge::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT_Graph ,opencascade::handle<MAT_Graph> , Standard_Transient>>(m.attr("MAT_Graph"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Graph::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Graph::*)() const>(&MAT_Graph::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Graph::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT_ListOfBisector ,opencascade::handle<MAT_ListOfBisector> , Standard_Transient>>(m.attr("MAT_ListOfBisector"))
    // constructors
    // custom constructors
    // methods
        .def("Number",
             (Standard_Integer (MAT_ListOfBisector::*)() const) static_cast<Standard_Integer (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::Number),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (MAT_ListOfBisector::*)() const) static_cast<Standard_Integer (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::Index),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (MAT_ListOfBisector::*)() const) static_cast<Standard_Boolean (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::IsEmpty),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_ListOfBisector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_ListOfBisector::*)() const>(&MAT_ListOfBisector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_ListOfBisector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_ListOfBisector::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT_ListOfEdge ,opencascade::handle<MAT_ListOfEdge> , Standard_Transient>>(m.attr("MAT_ListOfEdge"))
    // constructors
    // custom constructors
    // methods
        .def("Number",
             (Standard_Integer (MAT_ListOfEdge::*)() const) static_cast<Standard_Integer (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::Number),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (MAT_ListOfEdge::*)() const) static_cast<Standard_Integer (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::Index),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (MAT_ListOfEdge::*)() const) static_cast<Standard_Boolean (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::IsEmpty),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_ListOfEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_ListOfEdge::*)() const>(&MAT_ListOfEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_ListOfEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_ListOfEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT_Node ,opencascade::handle<MAT_Node> , Standard_Transient>>(m.attr("MAT_Node"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Node::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Node::*)() const>(&MAT_Node::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Node::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT_TListNodeOfListOfBisector ,opencascade::handle<MAT_TListNodeOfListOfBisector> , Standard_Transient>>(m.attr("MAT_TListNodeOfListOfBisector"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<MAT_Bisector> & >()  , py::arg("anitem") )
    // custom constructors
    // methods
        .def("GetItem",
             (opencascade::handle<MAT_Bisector> (MAT_TListNodeOfListOfBisector::*)() const) static_cast<opencascade::handle<MAT_Bisector> (MAT_TListNodeOfListOfBisector::*)() const>(&MAT_TListNodeOfListOfBisector::GetItem),
             R"#(None)#" )
        .def("Next",
             (opencascade::handle<MAT_TListNodeOfListOfBisector> (MAT_TListNodeOfListOfBisector::*)() const) static_cast<opencascade::handle<MAT_TListNodeOfListOfBisector> (MAT_TListNodeOfListOfBisector::*)() const>(&MAT_TListNodeOfListOfBisector::Next),
             R"#(None)#" )
        .def("Previous",
             (opencascade::handle<MAT_TListNodeOfListOfBisector> (MAT_TListNodeOfListOfBisector::*)() const) static_cast<opencascade::handle<MAT_TListNodeOfListOfBisector> (MAT_TListNodeOfListOfBisector::*)() const>(&MAT_TListNodeOfListOfBisector::Previous),
             R"#(None)#" )
        .def("SetItem",
             (void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_Bisector> & ) ) static_cast<void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_Bisector> & ) >(&MAT_TListNodeOfListOfBisector::SetItem),
             R"#(None)#"  , py::arg("anitem"))
        .def("Next",
             (void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_TListNodeOfListOfBisector> & ) ) static_cast<void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_TListNodeOfListOfBisector> & ) >(&MAT_TListNodeOfListOfBisector::Next),
             R"#(None)#"  , py::arg("atlistnode"))
        .def("Previous",
             (void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_TListNodeOfListOfBisector> & ) ) static_cast<void (MAT_TListNodeOfListOfBisector::*)( const opencascade::handle<MAT_TListNodeOfListOfBisector> & ) >(&MAT_TListNodeOfListOfBisector::Previous),
             R"#(None)#"  , py::arg("atlistnode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_TListNodeOfListOfBisector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_TListNodeOfListOfBisector::*)() const>(&MAT_TListNodeOfListOfBisector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_TListNodeOfListOfBisector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_TListNodeOfListOfBisector::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT_TListNodeOfListOfEdge ,opencascade::handle<MAT_TListNodeOfListOfEdge> , Standard_Transient>>(m.attr("MAT_TListNodeOfListOfEdge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<MAT_Edge> & >()  , py::arg("anitem") )
    // custom constructors
    // methods
        .def("GetItem",
             (opencascade::handle<MAT_Edge> (MAT_TListNodeOfListOfEdge::*)() const) static_cast<opencascade::handle<MAT_Edge> (MAT_TListNodeOfListOfEdge::*)() const>(&MAT_TListNodeOfListOfEdge::GetItem),
             R"#(None)#" )
        .def("Next",
             (opencascade::handle<MAT_TListNodeOfListOfEdge> (MAT_TListNodeOfListOfEdge::*)() const) static_cast<opencascade::handle<MAT_TListNodeOfListOfEdge> (MAT_TListNodeOfListOfEdge::*)() const>(&MAT_TListNodeOfListOfEdge::Next),
             R"#(None)#" )
        .def("Previous",
             (opencascade::handle<MAT_TListNodeOfListOfEdge> (MAT_TListNodeOfListOfEdge::*)() const) static_cast<opencascade::handle<MAT_TListNodeOfListOfEdge> (MAT_TListNodeOfListOfEdge::*)() const>(&MAT_TListNodeOfListOfEdge::Previous),
             R"#(None)#" )
        .def("SetItem",
             (void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_Edge> & ) ) static_cast<void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_Edge> & ) >(&MAT_TListNodeOfListOfEdge::SetItem),
             R"#(None)#"  , py::arg("anitem"))
        .def("Next",
             (void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_TListNodeOfListOfEdge> & ) ) static_cast<void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_TListNodeOfListOfEdge> & ) >(&MAT_TListNodeOfListOfEdge::Next),
             R"#(None)#"  , py::arg("atlistnode"))
        .def("Previous",
             (void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_TListNodeOfListOfEdge> & ) ) static_cast<void (MAT_TListNodeOfListOfEdge::*)( const opencascade::handle<MAT_TListNodeOfListOfEdge> & ) >(&MAT_TListNodeOfListOfEdge::Previous),
             R"#(None)#"  , py::arg("atlistnode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_TListNodeOfListOfEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_TListNodeOfListOfEdge::*)() const>(&MAT_TListNodeOfListOfEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_TListNodeOfListOfEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MAT_TListNodeOfListOfEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MAT_Zone ,opencascade::handle<MAT_Zone> , Standard_Transient>>(m.attr("MAT_Zone"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MAT_Zone::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MAT_Zone::*)() const>(&MAT_Zone::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MAT_Zone::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/MAT_TListNodeOfListOfEdge.hxx
// ./opencascade/MAT_ListOfBisector.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerNode.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerArc.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerBisector.hxx
// ./opencascade/MAT_DataMapOfIntegerNode.hxx
// ./opencascade/MAT_TListNodeOfListOfBisector.hxx
// ./opencascade/MAT_Arc.hxx
// ./opencascade/MAT_ListOfEdge.hxx
// ./opencascade/MAT_Bisector.hxx
// ./opencascade/MAT_Node.hxx
// ./opencascade/MAT_SequenceOfBasicElt.hxx
// ./opencascade/MAT_BasicElt.hxx
// ./opencascade/MAT_DataMapIteratorOfDataMapOfIntegerBasicElt.hxx
// ./opencascade/MAT_Zone.hxx
// ./opencascade/MAT_Edge.hxx
// ./opencascade/MAT_DataMapOfIntegerBisector.hxx
// ./opencascade/MAT_DataMapOfIntegerArc.hxx
// ./opencascade/MAT_Side.hxx
// ./opencascade/MAT_DataMapOfIntegerBasicElt.hxx
// ./opencascade/MAT_Graph.hxx
// ./opencascade/MAT_SequenceOfArc.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<MAT_BasicElt> >(m,"MAT_SequenceOfBasicElt");
    register_template_NCollection_Sequence<opencascade::handle<MAT_Arc> >(m,"MAT_SequenceOfArc");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
