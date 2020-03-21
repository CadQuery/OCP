
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
#include <TopCnx_EdgeFaceTransition.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopCnx(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopCnx"));


//Python trampoline classes

// classes


    static_cast<py::class_<TopCnx_EdgeFaceTransition , shared_ptr<TopCnx_EdgeFaceTransition> >>(m.attr("TopCnx_EdgeFaceTransition"))
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
// ./opencascade/TopCnx_EdgeFaceTransition.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
