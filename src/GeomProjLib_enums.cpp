
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Plane.hxx>
#include <gp_Dir.hxx>

// module includes
#include <GeomProjLib.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomProjLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomProjLib", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<GeomProjLib ,std::unique_ptr<GeomProjLib>  >(m,"GeomProjLib",R"#(Projection of a curve on a surface.)#");

// pre-register typdefs
// ./opencascade/GeomProjLib.hxx

};

// user-defined post-inclusion per module

// user-defined post
