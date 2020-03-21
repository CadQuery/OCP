
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <Intrv_Interval.hxx>
#include <Intrv_Intervals.hxx>
#include <Intrv_Position.hxx>
#include <Intrv_SequenceOfInterval.hxx>

// template related includes
// ./opencascade/Intrv_SequenceOfInterval.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Intrv(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Intrv"));


//Python trampoline classes

// classes


    static_cast<py::class_<Intrv_Interval , shared_ptr<Intrv_Interval> >>(m.attr("Intrv_Interval"))
    // constructors
    // custom constructors
    // methods
        .def("Start",
             (Standard_Real (Intrv_Interval::*)() const) static_cast<Standard_Real (Intrv_Interval::*)() const>(&Intrv_Interval::Start),
             R"#(None)#" )
        .def("End",
             (Standard_Real (Intrv_Interval::*)() const) static_cast<Standard_Real (Intrv_Interval::*)() const>(&Intrv_Interval::End),
             R"#(None)#" )
        .def("TolStart",
             (Standard_ShortReal (Intrv_Interval::*)() const) static_cast<Standard_ShortReal (Intrv_Interval::*)() const>(&Intrv_Interval::TolStart),
             R"#(None)#" )
        .def("TolEnd",
             (Standard_ShortReal (Intrv_Interval::*)() const) static_cast<Standard_ShortReal (Intrv_Interval::*)() const>(&Intrv_Interval::TolEnd),
             R"#(None)#" )
        .def("SetStart",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::SetStart),
             R"#(None)#"  , py::arg("Start"),  py::arg("TolStart"))
        .def("FuseAtStart",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::FuseAtStart),
             R"#(****+****--------------------> Old one ****+****------------------------> New one to fuse <<< <<< ****+****------------------------> result)#"  , py::arg("Start"),  py::arg("TolStart"))
        .def("CutAtStart",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::CutAtStart),
             R"#(****+****-----------> Old one <----------**+** Tool for cutting >>> >>> ****+****-----------> result)#"  , py::arg("Start"),  py::arg("TolStart"))
        .def("SetEnd",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::SetEnd),
             R"#(None)#"  , py::arg("End"),  py::arg("TolEnd"))
        .def("FuseAtEnd",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::FuseAtEnd),
             R"#(<---------------------****+**** Old one <-----------------**+** New one to fuse >>> >>> <---------------------****+**** result)#"  , py::arg("End"),  py::arg("TolEnd"))
        .def("CutAtEnd",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::CutAtEnd),
             R"#(<-----****+**** Old one **+**------> Tool for cutting <<< <<< <-----****+**** result)#"  , py::arg("End"),  py::arg("TolEnd"))
        .def("IsProbablyEmpty",
             (Standard_Boolean (Intrv_Interval::*)() const) static_cast<Standard_Boolean (Intrv_Interval::*)() const>(&Intrv_Interval::IsProbablyEmpty),
             R"#(True if myStart+myTolStart > myEnd-myTolEnd or if myEnd+myTolEnd > myStart-myTolStart)#" )
        .def("IsBefore",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsBefore),
             R"#(True if me is Before Other ***----------------** me **-----------**** Other)#"  , py::arg("Other"))
        .def("IsAfter",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsAfter),
             R"#(True if me is After Other **-----------**** me ***----------------** Other)#"  , py::arg("Other"))
        .def("IsInside",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsInside),
             R"#(True if me is Inside Other **-----------**** me ***--------------------------** Other)#"  , py::arg("Other"))
        .def("IsEnclosing",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsEnclosing),
             R"#(True if me is Enclosing Other ***----------------------------**** me ***------------------** Other)#"  , py::arg("Other"))
        .def("IsJustEnclosingAtStart",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustEnclosingAtStart),
             R"#(True if me is just Enclosing Other at start ***---------------------------**** me ***------------------** Other)#"  , py::arg("Other"))
        .def("IsJustEnclosingAtEnd",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustEnclosingAtEnd),
             R"#(True if me is just Enclosing Other at End ***----------------------------**** me ***-----------------**** Other)#"  , py::arg("Other"))
        .def("IsJustBefore",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustBefore),
             R"#(True if me is just before Other ***--------**** me ***-----------** Other)#"  , py::arg("Other"))
        .def("IsJustAfter",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustAfter),
             R"#(True if me is just after Other ****-------**** me ***-----------** Other)#"  , py::arg("Other"))
        .def("IsOverlappingAtStart",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsOverlappingAtStart),
             R"#(True if me is overlapping Other at start ***---------------*** me ***-----------** Other)#"  , py::arg("Other"))
        .def("IsOverlappingAtEnd",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsOverlappingAtEnd),
             R"#(True if me is overlapping Other at end ***-----------** me ***---------------*** Other)#"  , py::arg("Other"))
        .def("IsJustOverlappingAtStart",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustOverlappingAtStart),
             R"#(True if me is just overlapping Other at start ***-----------*** me ***------------------------** Other)#"  , py::arg("Other"))
        .def("IsJustOverlappingAtEnd",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustOverlappingAtEnd),
             R"#(True if me is just overlapping Other at end ***-----------* me ***------------------------** Other)#"  , py::arg("Other"))
        .def("IsSimilar",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsSimilar),
             R"#(True if me and Other have the same bounds *----------------*** me ***-----------------** Other)#"  , py::arg("Other"))
        .def("Start",
             (Standard_Real (Intrv_Interval::*)() const) static_cast<Standard_Real (Intrv_Interval::*)() const>(&Intrv_Interval::Start),
             R"#(None)#" )
        .def("End",
             (Standard_Real (Intrv_Interval::*)() const) static_cast<Standard_Real (Intrv_Interval::*)() const>(&Intrv_Interval::End),
             R"#(None)#" )
        .def("TolStart",
             (Standard_ShortReal (Intrv_Interval::*)() const) static_cast<Standard_ShortReal (Intrv_Interval::*)() const>(&Intrv_Interval::TolStart),
             R"#(None)#" )
        .def("TolEnd",
             (Standard_ShortReal (Intrv_Interval::*)() const) static_cast<Standard_ShortReal (Intrv_Interval::*)() const>(&Intrv_Interval::TolEnd),
             R"#(None)#" )
        .def("SetStart",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::SetStart),
             R"#(None)#"  , py::arg("Start"),  py::arg("TolStart"))
        .def("FuseAtStart",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::FuseAtStart),
             R"#(****+****--------------------> Old one ****+****------------------------> New one to fuse <<< <<< ****+****------------------------> result)#"  , py::arg("Start"),  py::arg("TolStart"))
        .def("CutAtStart",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::CutAtStart),
             R"#(****+****-----------> Old one <----------**+** Tool for cutting >>> >>> ****+****-----------> result)#"  , py::arg("Start"),  py::arg("TolStart"))
        .def("SetEnd",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::SetEnd),
             R"#(None)#"  , py::arg("End"),  py::arg("TolEnd"))
        .def("FuseAtEnd",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::FuseAtEnd),
             R"#(<---------------------****+**** Old one <-----------------**+** New one to fuse >>> >>> <---------------------****+**** result)#"  , py::arg("End"),  py::arg("TolEnd"))
        .def("CutAtEnd",
             (void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) ) static_cast<void (Intrv_Interval::*)( const Standard_Real , const Standard_ShortReal ) >(&Intrv_Interval::CutAtEnd),
             R"#(<-----****+**** Old one **+**------> Tool for cutting <<< <<< <-----****+**** result)#"  , py::arg("End"),  py::arg("TolEnd"))
        .def("IsProbablyEmpty",
             (Standard_Boolean (Intrv_Interval::*)() const) static_cast<Standard_Boolean (Intrv_Interval::*)() const>(&Intrv_Interval::IsProbablyEmpty),
             R"#(True if myStart+myTolStart > myEnd-myTolEnd or if myEnd+myTolEnd > myStart-myTolStart)#" )
        .def("IsBefore",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsBefore),
             R"#(True if me is Before Other ***----------------** me **-----------**** Other)#"  , py::arg("Other"))
        .def("IsAfter",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsAfter),
             R"#(True if me is After Other **-----------**** me ***----------------** Other)#"  , py::arg("Other"))
        .def("IsInside",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsInside),
             R"#(True if me is Inside Other **-----------**** me ***--------------------------** Other)#"  , py::arg("Other"))
        .def("IsEnclosing",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsEnclosing),
             R"#(True if me is Enclosing Other ***----------------------------**** me ***------------------** Other)#"  , py::arg("Other"))
        .def("IsJustEnclosingAtStart",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustEnclosingAtStart),
             R"#(True if me is just Enclosing Other at start ***---------------------------**** me ***------------------** Other)#"  , py::arg("Other"))
        .def("IsJustEnclosingAtEnd",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustEnclosingAtEnd),
             R"#(True if me is just Enclosing Other at End ***----------------------------**** me ***-----------------**** Other)#"  , py::arg("Other"))
        .def("IsJustBefore",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustBefore),
             R"#(True if me is just before Other ***--------**** me ***-----------** Other)#"  , py::arg("Other"))
        .def("IsJustAfter",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustAfter),
             R"#(True if me is just after Other ****-------**** me ***-----------** Other)#"  , py::arg("Other"))
        .def("IsOverlappingAtStart",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsOverlappingAtStart),
             R"#(True if me is overlapping Other at start ***---------------*** me ***-----------** Other)#"  , py::arg("Other"))
        .def("IsOverlappingAtEnd",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsOverlappingAtEnd),
             R"#(True if me is overlapping Other at end ***-----------** me ***---------------*** Other)#"  , py::arg("Other"))
        .def("IsJustOverlappingAtStart",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustOverlappingAtStart),
             R"#(True if me is just overlapping Other at start ***-----------*** me ***------------------------** Other)#"  , py::arg("Other"))
        .def("IsJustOverlappingAtEnd",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsJustOverlappingAtEnd),
             R"#(True if me is just overlapping Other at end ***-----------* me ***------------------------** Other)#"  , py::arg("Other"))
        .def("IsSimilar",
             (Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const) static_cast<Standard_Boolean (Intrv_Interval::*)( const Intrv_Interval & ) const>(&Intrv_Interval::IsSimilar),
             R"#(True if me and Other have the same bounds *----------------*** me ***-----------------** Other)#"  , py::arg("Other"))
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( Intrv_Interval &self , Standard_ShortReal & TolStart,Standard_ShortReal & TolEnd ){ Standard_Real  Start; Standard_Real  End; self.Bounds(Start,TolStart,End,TolEnd); return std::make_tuple(Start,End); },
             R"#(None)#"  , py::arg("TolStart"),  py::arg("TolEnd"))
        .def("Bounds",
             []( Intrv_Interval &self , Standard_ShortReal & TolStart,Standard_ShortReal & TolEnd ){ Standard_Real  Start; Standard_Real  End; self.Bounds(Start,TolStart,End,TolEnd); return std::make_tuple(Start,End); },
             R"#(None)#"  , py::arg("TolStart"),  py::arg("TolEnd"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Intrv_Intervals , shared_ptr<Intrv_Intervals> >>(m.attr("Intrv_Intervals"))
    // constructors
    // custom constructors
    // methods
        .def("NbIntervals",
             (Standard_Integer (Intrv_Intervals::*)() const) static_cast<Standard_Integer (Intrv_Intervals::*)() const>(&Intrv_Intervals::NbIntervals),
             R"#(None)#" )
        .def("Value",
             (const Intrv_Interval & (Intrv_Intervals::*)( const Standard_Integer ) const) static_cast<const Intrv_Interval & (Intrv_Intervals::*)( const Standard_Integer ) const>(&Intrv_Intervals::Value),
             R"#(None)#"  , py::arg("Index"))
        .def("NbIntervals",
             (Standard_Integer (Intrv_Intervals::*)() const) static_cast<Standard_Integer (Intrv_Intervals::*)() const>(&Intrv_Intervals::NbIntervals),
             R"#(None)#" )
        .def("Value",
             (const Intrv_Interval & (Intrv_Intervals::*)( const Standard_Integer ) const) static_cast<const Intrv_Interval & (Intrv_Intervals::*)( const Standard_Integer ) const>(&Intrv_Intervals::Value),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Intrv_Intervals.hxx
// ./opencascade/Intrv_SequenceOfInterval.hxx
// ./opencascade/Intrv_Position.hxx
// ./opencascade/Intrv_Interval.hxx
    m.def("AreFused",
          (Standard_Boolean (*)( const Standard_Real , const Standard_ShortReal , const Standard_Real , const Standard_ShortReal ))  static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_ShortReal , const Standard_Real , const Standard_ShortReal )>(&AreFused),
          R"#(None)#"  , py::arg("c1"),  py::arg("t1"),  py::arg("c2"),  py::arg("t2"));

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<Intrv_Interval>(m,"Intrv_SequenceOfInterval");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
