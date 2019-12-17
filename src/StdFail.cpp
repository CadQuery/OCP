
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_Undefined.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <StdFail_UndefinedValue.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdFail(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdFail"));


//Python trampoline classes

// classes

// functions
// ./opencascade/StdFail_UndefinedDerivative.hxx
// ./opencascade/StdFail_NotDone.hxx
// ./opencascade/StdFail_Undefined.hxx
// ./opencascade/StdFail_InfiniteSolutions.hxx
// ./opencascade/StdFail_UndefinedValue.hxx

// operators

// register typdefs
// ./opencascade/StdFail_UndefinedDerivative.hxx
// ./opencascade/StdFail_NotDone.hxx
// ./opencascade/StdFail_Undefined.hxx
// ./opencascade/StdFail_InfiniteSolutions.hxx
// ./opencascade/StdFail_UndefinedValue.hxx


// exceptions
register_occ_exception<StdFail_UndefinedDerivative>(m, "StdFail_UndefinedDerivative");
register_occ_exception<StdFail_Undefined>(m, "StdFail_Undefined");
register_occ_exception<StdFail_UndefinedValue>(m, "StdFail_UndefinedValue");
register_occ_exception<StdFail_NotDone>(m, "StdFail_NotDone");
register_occ_exception<StdFail_InfiniteSolutions>(m, "StdFail_InfiniteSolutions");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
