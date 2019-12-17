
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

    register_default_constructor<XBRepMesh ,std::unique_ptr<XBRepMesh>>(m,"XBRepMesh");

    static_cast<py::class_<XBRepMesh ,std::unique_ptr<XBRepMesh>  >>(m.attr("XBRepMesh"))
;

// functions
// ./opencascade/XBRepMesh.hxx

// operators

// register typdefs
// ./opencascade/XBRepMesh.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
