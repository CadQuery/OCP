
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Lin.hxx>
#include <Bnd_Box.hxx>
#include <gp_Lin2d.hxx>
#include <Bnd_Box2d.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <BndLib_Add3dCurve.hxx>
#include <BndLib_Add2dCurve.hxx>
#include <BndLib_AddSurface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Bnd_Box.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Bnd_Box.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Bnd_Box2d.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <BndLib.hxx>
#include <BndLib_Add2dCurve.hxx>
#include <BndLib_Add3dCurve.hxx>
#include <BndLib_AddSurface.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BndLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BndLib", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<BndLib ,std::unique_ptr<BndLib>  >(m,"BndLib",R"#(The BndLib package provides functions to add a geometric primitive to a bounding box. Note: these functions work with gp objects, optionally limited by parameter values. If the curves and surfaces provided by the gp package are not explicitly parameterized, they still have an implicit parameterization, similar to that which they infer for the equivalent Geom or Geom2d objects. Add : Package to compute the bounding boxes for elementary objects from gp in 2d and 3d .)#");
    py::class_<BndLib_Add3dCurve ,std::unique_ptr<BndLib_Add3dCurve>  >(m,"BndLib_Add3dCurve",R"#(Computes the bounding box for a curve in 3d. Functions to add a 3D curve to a bounding box. The 3D curve is defined from a Geom curve.)#");
    py::class_<BndLib_AddSurface ,std::unique_ptr<BndLib_AddSurface>  >(m,"BndLib_AddSurface",R"#(computes the box from a surface Functions to add a surface to a bounding box. The surface is defined from a Geom surface.)#");
    py::class_<BndLib_Add2dCurve ,std::unique_ptr<BndLib_Add2dCurve>  >(m,"BndLib_Add2dCurve",R"#(Computes the bounding box for a curve in 2d . Functions to add a 2D curve to a bounding box. The 2D curve is defined from a Geom2d curve.)#");

// pre-register typdefs
// ./opencascade/BndLib.hxx
// ./opencascade/BndLib_AddSurface.hxx
// ./opencascade/BndLib_Add3dCurve.hxx
// ./opencascade/BndLib_Add2dCurve.hxx

};

// user-defined post-inclusion per module

// user-defined post
