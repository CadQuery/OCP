
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
#include <GeomAbs_BSplKnotDistribution.hxx>
#include <GeomAbs_CurveForm.hxx>
#include <GeomAbs_CurveType.hxx>
#include <GeomAbs_IsoType.hxx>
#include <GeomAbs_JoinType.hxx>
#include <GeomAbs_Shape.hxx>
#include <GeomAbs_SurfaceForm.hxx>
#include <GeomAbs_SurfaceType.hxx>
#include <GeomAbs_UVSense.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomAbs(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomAbs"));


//Python trampoline classes

// classes

// functions
// ./opencascade/GeomAbs_JoinType.hxx
// ./opencascade/GeomAbs_UVSense.hxx
// ./opencascade/GeomAbs_CurveType.hxx
// ./opencascade/GeomAbs_CurveForm.hxx
// ./opencascade/GeomAbs_Shape.hxx
// ./opencascade/GeomAbs_IsoType.hxx
// ./opencascade/GeomAbs_SurfaceForm.hxx
// ./opencascade/GeomAbs_BSplKnotDistribution.hxx
// ./opencascade/GeomAbs_SurfaceType.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
