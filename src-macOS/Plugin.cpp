
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


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
void register_Plugin(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Plugin"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<Plugin , shared_ptr<Plugin>>(m,"Plugin");

    static_cast<py::class_<Plugin , shared_ptr<Plugin> >>(m.attr("Plugin"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Plugin_MapOfFunctions.hxx
// ./opencascade/Plugin.hxx
// ./opencascade/Plugin_Failure.hxx
// ./opencascade/Plugin_DataMapIteratorOfMapOfFunctions.hxx
// ./opencascade/Plugin_Macro.hxx

// Additional functions

// operators

// register typdefs


// exceptions
register_occ_exception<Plugin_Failure>(m, "Plugin_Failure");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
