
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_Intrv_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Intrv", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Intrv_Position>(m, "Intrv_Position",R"#(None)#")
        .value("Intrv_Before",Intrv_Position::Intrv_Before)
        .value("Intrv_JustBefore",Intrv_Position::Intrv_JustBefore)
        .value("Intrv_OverlappingAtStart",Intrv_Position::Intrv_OverlappingAtStart)
        .value("Intrv_JustEnclosingAtEnd",Intrv_Position::Intrv_JustEnclosingAtEnd)
        .value("Intrv_Enclosing",Intrv_Position::Intrv_Enclosing)
        .value("Intrv_JustOverlappingAtStart",Intrv_Position::Intrv_JustOverlappingAtStart)
        .value("Intrv_Similar",Intrv_Position::Intrv_Similar)
        .value("Intrv_JustEnclosingAtStart",Intrv_Position::Intrv_JustEnclosingAtStart)
        .value("Intrv_Inside",Intrv_Position::Intrv_Inside)
        .value("Intrv_JustOverlappingAtEnd",Intrv_Position::Intrv_JustOverlappingAtEnd)
        .value("Intrv_OverlappingAtEnd",Intrv_Position::Intrv_OverlappingAtEnd)
        .value("Intrv_JustAfter",Intrv_Position::Intrv_JustAfter)
        .value("Intrv_After",Intrv_Position::Intrv_After).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<Intrv_Interval>(m,"Intrv_SequenceOfInterval");

// classes forward declarations only
    py::class_<Intrv_Interval , shared_ptr<Intrv_Interval> >(m,"Intrv_Interval",R"#(**-----------**** Other ***---* IsBefore ***----------* IsJustBefore ***---------------* IsOverlappingAtStart ***------------------------* IsJustEnclosingAtEnd ***-----------------------------------* IsEnclosing ***----* IsJustOverlappingAtStart ***-------------* IsSimilar ***------------------------* IsJustEnclosingAtStart ***-* IsInside ***------* IsJustOverlappingAtEnd ***-----------------* IsOverlappingAtEnd ***--------* IsJustAfter ***---* IsAfter)#");
    py::class_<Intrv_Intervals , shared_ptr<Intrv_Intervals> >(m,"Intrv_Intervals",R"#(The class Intervals is a sorted sequence of non overlapping Real Intervals.)#");

};

// user-defined post-inclusion per module

// user-defined post
