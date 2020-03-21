
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <Resource_Manager.hxx>

// module includes
#include <Plugin.hxx>
#include <Plugin_DataMapIteratorOfMapOfFunctions.hxx>
#include <Plugin_Failure.hxx>
#include <Plugin_Macro.hxx>
#include <Plugin_MapOfFunctions.hxx>

// template related includes
// ./opencascade/Plugin_MapOfFunctions.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Plugin_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Plugin", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<Plugin , shared_ptr<Plugin> >(m,"Plugin",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
