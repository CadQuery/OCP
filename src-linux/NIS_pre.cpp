
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_NIS_enums(py::module &main_module) {


py::module m = main_module.def_submodule("NIS", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only

};

// user-defined post-inclusion per module

// user-defined post
