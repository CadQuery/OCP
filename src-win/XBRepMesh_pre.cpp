
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

// module includes
#include <XBRepMesh.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XBRepMesh_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XBRepMesh", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<XBRepMesh , shared_ptr<XBRepMesh> >(m,"XBRepMesh",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
