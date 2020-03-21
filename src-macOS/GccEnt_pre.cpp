
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <GccEnt_QualifiedLin.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Circ2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt_QualifiedCirc.hxx>

// module includes
#include <GccEnt.hxx>
#include <GccEnt_Array1OfPosition.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_Position.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_QualifiedLin.hxx>

// template related includes
// ./opencascade/GccEnt_Array1OfPosition.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GccEnt_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GccEnt", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<GccEnt_Position>(m, "GccEnt_Position",R"#(Qualifies the position of a solution of a construction algorithm with respect to one of its arguments. This is one of the following: - GccEnt_unqualified: the position of the solution is undefined with respect to the argument, - GccEnt_enclosing: the solution encompasses the argument, - GccEnt_enclosed: the solution is encompassed by the argument, - GccEnt_outside: the solution and the argument are external to one another, - GccEnt_noqualifier: the value returned during a consultation of the qualifier when the argument is defined as GccEnt_unqualified. Note: the interior of a line or any open curve is defined as the left-hand side of the line or curve in relation to its orientation.)#")
        .value("GccEnt_unqualified",GccEnt_Position::GccEnt_unqualified)
        .value("GccEnt_enclosing",GccEnt_Position::GccEnt_enclosing)
        .value("GccEnt_enclosed",GccEnt_Position::GccEnt_enclosed)
        .value("GccEnt_outside",GccEnt_Position::GccEnt_outside)
        .value("GccEnt_noqualifier",GccEnt_Position::GccEnt_noqualifier).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<GccEnt_Position>(m,"GccEnt_Array1OfPosition");

// classes forward declarations only
    py::class_<GccEnt , shared_ptr<GccEnt> >(m,"GccEnt",R"#(This package provides an implementation of the qualified entities useful to create 2d entities with geometric constraints. The qualifier explains which subfamily of solutions we want to obtain. It uses the following law: the matter/the interior side is at the left of the line, if we go from the beginning to the end. The qualifiers are: Enclosing : the solution(s) must enclose the argument. Enclosed : the solution(s) must be enclosed in the argument. Outside : both the solution(s) and the argument must be outside to each other. Unqualified : the position is undefined, so give all the solutions. The use of a qualifier is always required if such subfamilies exist. For example, it is not used for a point. Note: the interior of a curve is defined as the left-hand side of the curve in relation to its orientation.)#");
    py::class_<GccEnt_QualifiedCirc , shared_ptr<GccEnt_QualifiedCirc> >(m,"GccEnt_QualifiedCirc",R"#(Creates a qualified 2d Circle. A qualified 2D circle is a circle (gp_Circ2d circle) with a qualifier which specifies whether the solution of a construction algorithm using the qualified circle (as an argument): - encloses the circle, or - is enclosed by the circle, or - is built so that both the circle and it are external to one another, or - is undefined (all solutions apply).)#");
    py::class_<GccEnt_QualifiedLin , shared_ptr<GccEnt_QualifiedLin> >(m,"GccEnt_QualifiedLin",R"#(Describes a qualified 2D line. A qualified 2D line is a line (gp_Lin2d line) with a qualifier which specifies whether the solution of a construction algorithm using the qualified line (as an argument): - is 'enclosed' by the line, or - is built so that both the line and it are external to one another, or - is undefined (all solutions apply). Note: the interior of a line is defined as the left-hand side of the line in relation to its orientation (i.e. when moving from the start to the end of the curve).)#");

};

// user-defined post-inclusion per module

// user-defined post
