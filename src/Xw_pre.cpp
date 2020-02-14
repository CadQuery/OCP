
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Aspect_WindowDefinitionError.hxx>
#include <Aspect_WindowError.hxx>

// module includes
#include <Xw_Window.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
struct __GLXFBConfigRec {};

// Module definiiton
void register_Xw_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Xw", R"#()#");

// user-defined inclusion per module in the body
py::class_<__GLXFBConfigRec>(m, "__GLXFBConfigRec");

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<Xw_Window ,opencascade::handle<Xw_Window>  , Aspect_Window >(m,"Xw_Window",R"#(This class defines XLib window intended for creation of OpenGL context.This class defines XLib window intended for creation of OpenGL context.)#");

};

// user-defined post-inclusion per module

// user-defined post
