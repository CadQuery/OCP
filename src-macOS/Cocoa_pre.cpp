
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
#include <Cocoa_LocalPool.hxx>
#include <Cocoa_Window.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Aspect_DisplayConnection.hxx>
struct NSView {};

// Module definiiton
void register_Cocoa_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Cocoa", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<Cocoa_LocalPool , shared_ptr<Cocoa_LocalPool> >(m,"Cocoa_LocalPool",R"#(Auxiliary class to create local pool.)#");
    py::class_<Cocoa_Window ,opencascade::handle<Cocoa_Window> , Aspect_Window>(m,"Cocoa_Window",R"#(This class defines Cocoa windowThis class defines Cocoa window)#");

};

// user-defined post-inclusion per module

// user-defined post
