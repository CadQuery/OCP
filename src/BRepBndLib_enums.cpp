
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Shape.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_OBB.hxx>

// module includes
#include <BRepBndLib.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepBndLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepBndLib", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<BRepBndLib ,std::unique_ptr<BRepBndLib>  >(m,"BRepBndLib",R"#(This package provides the bounding boxes for curves and surfaces from BRepAdaptor. Functions to add a topological shape to a bounding box)#");

// pre-register typdefs
// ./opencascade/BRepBndLib.hxx

};

// user-defined post-inclusion per module

// user-defined post
