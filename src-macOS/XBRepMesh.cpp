
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <XBRepMesh.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XBRepMesh(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XBRepMesh"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<XBRepMesh , shared_ptr<XBRepMesh>>(m,"XBRepMesh");

    static_cast<py::class_<XBRepMesh , shared_ptr<XBRepMesh> >>(m.attr("XBRepMesh"))
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
// ./opencascade/XBRepMesh.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
