
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>

// module includes
#include <Hermit.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Hermit_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Hermit", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<Hermit , shared_ptr<Hermit> >(m,"Hermit",R"#(This is used to reparameterize Rational BSpline Curves so that we can concatenate them later to build C1 Curves It builds and 1D-reparameterizing function starting from an Hermite interpolation and adding knots and modifying poles of the 1D BSpline obtained that way. The goal is to build a(u) so that if we consider a BSpline curve N(u) f(u) = ----- D(u))#");

};

// user-defined post-inclusion per module

// user-defined post
