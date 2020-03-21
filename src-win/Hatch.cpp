
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
#include <Hatch_Line.hxx>
#include <Hatch_Hatcher.hxx>
#include <Hatch_Hatcher.hxx>

// module includes
#include <Hatch_Hatcher.hxx>
#include <Hatch_Line.hxx>
#include <Hatch_LineForm.hxx>
#include <Hatch_Parameter.hxx>
#include <Hatch_SequenceOfLine.hxx>
#include <Hatch_SequenceOfParameter.hxx>

// template related includes
// ./opencascade\Hatch_SequenceOfLine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Hatch_SequenceOfParameter.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Hatch(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Hatch"));


//Python trampoline classes

// classes


    static_cast<py::class_<Hatch_Hatcher , shared_ptr<Hatch_Hatcher> >>(m.attr("Hatch_Hatcher"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Boolean >()  , py::arg("Tol"),  py::arg("Oriented")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Tolerance",
             (void (Hatch_Hatcher::*)( const Standard_Real ) ) static_cast<void (Hatch_Hatcher::*)( const Standard_Real ) >(&Hatch_Hatcher::Tolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("Tolerance",
             (Standard_Real (Hatch_Hatcher::*)() const) static_cast<Standard_Real (Hatch_Hatcher::*)() const>(&Hatch_Hatcher::Tolerance),
             R"#(None)#" )
        .def("AddLine",
             (void (Hatch_Hatcher::*)( const gp_Lin2d & , const Hatch_LineForm ) ) static_cast<void (Hatch_Hatcher::*)( const gp_Lin2d & , const Hatch_LineForm ) >(&Hatch_Hatcher::AddLine),
             R"#(Add a line <L> to be trimmed. <T> the type is only kept from information. It is not used in the computation.)#"  , py::arg("L"),  py::arg("T")=static_cast<const Hatch_LineForm>(Hatch_ANYLINE))
        .def("AddLine",
             (void (Hatch_Hatcher::*)( const gp_Dir2d & , const Standard_Real ) ) static_cast<void (Hatch_Hatcher::*)( const gp_Dir2d & , const Standard_Real ) >(&Hatch_Hatcher::AddLine),
             R"#(Add an infinite line on direction <D> at distance <Dist> from the origin to be trimmed. <Dist> may be negative.)#"  , py::arg("D"),  py::arg("Dist"))
        .def("AddXLine",
             (void (Hatch_Hatcher::*)( const Standard_Real ) ) static_cast<void (Hatch_Hatcher::*)( const Standard_Real ) >(&Hatch_Hatcher::AddXLine),
             R"#(Add an infinite line parallel to the Y-axis at abciss <X>.)#"  , py::arg("X"))
        .def("AddYLine",
             (void (Hatch_Hatcher::*)( const Standard_Real ) ) static_cast<void (Hatch_Hatcher::*)( const Standard_Real ) >(&Hatch_Hatcher::AddYLine),
             R"#(Add an infinite line parallel to the X-axis at ordinate <Y>.)#"  , py::arg("Y"))
        .def("Trim",
             (void (Hatch_Hatcher::*)( const gp_Lin2d & , const Standard_Integer ) ) static_cast<void (Hatch_Hatcher::*)( const gp_Lin2d & , const Standard_Integer ) >(&Hatch_Hatcher::Trim),
             R"#(Trims the lines at intersections with <L>.)#"  , py::arg("L"),  py::arg("Index")=static_cast<const Standard_Integer>(0))
        .def("Trim",
             (void (Hatch_Hatcher::*)( const gp_Lin2d & , const Standard_Real , const Standard_Real , const Standard_Integer ) ) static_cast<void (Hatch_Hatcher::*)( const gp_Lin2d & , const Standard_Real , const Standard_Real , const Standard_Integer ) >(&Hatch_Hatcher::Trim),
             R"#(Trims the lines at intersections with <L> in the parameter range <Start>, <End>)#"  , py::arg("L"),  py::arg("Start"),  py::arg("End"),  py::arg("Index")=static_cast<const Standard_Integer>(0))
        .def("Trim",
             (void (Hatch_Hatcher::*)( const gp_Pnt2d & , const gp_Pnt2d & , const Standard_Integer ) ) static_cast<void (Hatch_Hatcher::*)( const gp_Pnt2d & , const gp_Pnt2d & , const Standard_Integer ) >(&Hatch_Hatcher::Trim),
             R"#(Trims the line at intersection with the oriented segment P1,P2.)#"  , py::arg("P1"),  py::arg("P2"),  py::arg("Index")=static_cast<const Standard_Integer>(0))
        .def("NbIntervals",
             (Standard_Integer (Hatch_Hatcher::*)() const) static_cast<Standard_Integer (Hatch_Hatcher::*)() const>(&Hatch_Hatcher::NbIntervals),
             R"#(Returns the total number of intervals on all the lines.)#" )
        .def("NbLines",
             (Standard_Integer (Hatch_Hatcher::*)() const) static_cast<Standard_Integer (Hatch_Hatcher::*)() const>(&Hatch_Hatcher::NbLines),
             R"#(Returns the number of lines.)#" )
        .def("Line",
             (const gp_Lin2d & (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<const gp_Lin2d & (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::Line),
             R"#(Returns the line of index <I>.)#"  , py::arg("I"))
        .def("LineForm",
             (Hatch_LineForm (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Hatch_LineForm (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::LineForm),
             R"#(Returns the type of the line of index <I>.)#"  , py::arg("I"))
        .def("IsXLine",
             (Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::IsXLine),
             R"#(Returns True if the line of index <I> has a constant X value.)#"  , py::arg("I"))
        .def("IsYLine",
             (Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::IsYLine),
             R"#(Returns True if the line of index <I> has a constant Y value.)#"  , py::arg("I"))
        .def("Coordinate",
             (Standard_Real (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Real (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::Coordinate),
             R"#(Returns the X or Y coordinate of the line of index <I> if it is a X or a Y line.)#"  , py::arg("I"))
        .def("NbIntervals",
             (Standard_Integer (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::NbIntervals),
             R"#(Returns the number of intervals on line of index <I>.)#"  , py::arg("I"))
        .def("Start",
             (Standard_Real (Hatch_Hatcher::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Hatch_Hatcher::*)( const Standard_Integer , const Standard_Integer ) const>(&Hatch_Hatcher::Start),
             R"#(Returns the first parameter of interval <J> on line <I>.)#"  , py::arg("I"),  py::arg("J"))
        .def("End",
             (Standard_Real (Hatch_Hatcher::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Hatch_Hatcher::*)( const Standard_Integer , const Standard_Integer ) const>(&Hatch_Hatcher::End),
             R"#(Returns the last parameter of interval <J> on line <I>.)#"  , py::arg("I"),  py::arg("J"))
        .def("Tolerance",
             (void (Hatch_Hatcher::*)( const Standard_Real ) ) static_cast<void (Hatch_Hatcher::*)( const Standard_Real ) >(&Hatch_Hatcher::Tolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("Tolerance",
             (Standard_Real (Hatch_Hatcher::*)() const) static_cast<Standard_Real (Hatch_Hatcher::*)() const>(&Hatch_Hatcher::Tolerance),
             R"#(None)#" )
        .def("IsXLine",
             (Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::IsXLine),
             R"#(Returns True if the line of index <I> has a constant X value.)#"  , py::arg("I"))
        .def("IsYLine",
             (Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Hatch_Hatcher::*)( const Standard_Integer ) const>(&Hatch_Hatcher::IsYLine),
             R"#(Returns True if the line of index <I> has a constant Y value.)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
        .def("StartIndex",
             []( Hatch_Hatcher &self , const Standard_Integer I,const Standard_Integer J ){ Standard_Integer  Index; Standard_Real  Par2; self.StartIndex(I,J,Index,Par2); return std::make_tuple(Index,Par2); },
             R"#(Returns the first Index and Par2 of interval <J> on line <I>.)#"  , py::arg("I"),  py::arg("J"))
        .def("EndIndex",
             []( Hatch_Hatcher &self , const Standard_Integer I,const Standard_Integer J ){ Standard_Integer  Index; Standard_Real  Par2; self.EndIndex(I,J,Index,Par2); return std::make_tuple(Index,Par2); },
             R"#(Returns the last Index and Par2 of interval <J> on line <I>.)#"  , py::arg("I"),  py::arg("J"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Hatch_Line , shared_ptr<Hatch_Line> >>(m.attr("Hatch_Line"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Lin2d &,const Hatch_LineForm >()  , py::arg("L"),  py::arg("T") )
    // custom constructors
    // methods
        .def("AddIntersection",
             (void (Hatch_Line::*)( const Standard_Real , const Standard_Boolean , const Standard_Integer , const Standard_Real , const Standard_Real ) ) static_cast<void (Hatch_Line::*)( const Standard_Real , const Standard_Boolean , const Standard_Integer , const Standard_Real , const Standard_Real ) >(&Hatch_Line::AddIntersection),
             R"#(Insert a new intersection in the sorted list.)#"  , py::arg("Par1"),  py::arg("Start"),  py::arg("Index"),  py::arg("Par2"),  py::arg("theToler"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Hatch_Parameter , shared_ptr<Hatch_Parameter> >>(m.attr("Hatch_Parameter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Boolean,const Standard_Integer,const Standard_Real >()  , py::arg("Par1"),  py::arg("Start"),  py::arg("Index")=static_cast<const Standard_Integer>(0),  py::arg("Par2")=static_cast<const Standard_Real>(0) )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\Hatch_SequenceOfLine.hxx
// ./opencascade\Hatch_Parameter.hxx
// ./opencascade\Hatch_Hatcher.hxx
// ./opencascade\Hatch_LineForm.hxx
// ./opencascade\Hatch_SequenceOfParameter.hxx
// ./opencascade\Hatch_Line.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<Hatch_Line>(m,"Hatch_SequenceOfLine");
    register_template_NCollection_Sequence<Hatch_Parameter>(m,"Hatch_SequenceOfParameter");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
