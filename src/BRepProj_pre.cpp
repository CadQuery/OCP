
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_NullObject.hxx>

// module includes
#include <BRepProj_Projection.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepProj_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepProj", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BRepProj_Projection , shared_ptr<BRepProj_Projection>  >(m,"BRepProj_Projection",R"#(The Projection class provides conical and cylindrical projections of Edge or Wire on a Shape from TopoDS. The result will be a Edge or Wire from TopoDS.)#");

};

// user-defined post-inclusion per module

// user-defined post
