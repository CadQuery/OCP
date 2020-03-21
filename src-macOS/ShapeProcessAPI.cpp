
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ShapeProcess_ShapeContext.hxx>

// module includes
#include <ShapeProcessAPI_ApplySequence.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeProcessAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeProcessAPI"));


//Python trampoline classes

// classes


    static_cast<py::class_<ShapeProcessAPI_ApplySequence , shared_ptr<ShapeProcessAPI_ApplySequence> >>(m.attr("ShapeProcessAPI_ApplySequence"))
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
// ./opencascade/ShapeProcessAPI_ApplySequence.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
