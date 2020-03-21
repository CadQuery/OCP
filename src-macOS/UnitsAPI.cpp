
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Units_Dimensions.hxx>

// module includes
#include <UnitsAPI.hxx>
#include <UnitsAPI_SystemUnits.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_UnitsAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("UnitsAPI"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<UnitsAPI , shared_ptr<UnitsAPI>>(m,"UnitsAPI");

    static_cast<py::class_<UnitsAPI , shared_ptr<UnitsAPI> >>(m.attr("UnitsAPI"))
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
// ./opencascade/UnitsAPI.hxx
// ./opencascade/UnitsAPI_SystemUnits.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
