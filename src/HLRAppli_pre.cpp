
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <HLRAppli_ReflectLines.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HLRAppli_enums(py::module &main_module) {


py::module m = main_module.def_submodule("HLRAppli", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<HLRAppli_ReflectLines , shared_ptr<HLRAppli_ReflectLines>  >(m,"HLRAppli_ReflectLines",R"#(This class builds reflect lines on a shape according to the axes of view defined by user. Reflect lines are represented by edges in 3d.)#");

};

// user-defined post-inclusion per module

// user-defined post
