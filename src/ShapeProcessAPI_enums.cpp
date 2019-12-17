
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <ShapeProcess_ShapeContext.hxx>

// module includes
#include <ShapeProcessAPI_ApplySequence.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeProcessAPI_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapeProcessAPI", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<ShapeProcessAPI_ApplySequence ,std::unique_ptr<ShapeProcessAPI_ApplySequence>  >(m,"ShapeProcessAPI_ApplySequence",R"#(Applies one of the sequence read from resource file.)#");

// pre-register typdefs
// ./opencascade/ShapeProcessAPI_ApplySequence.hxx

};

// user-defined post-inclusion per module

// user-defined post
