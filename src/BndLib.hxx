#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

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
#include <BndLib_AddSurface.hxx>
#include <BndLib_Add3dCurve.hxx>
#include <BndLib_Add2dCurve.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BndLib.hxx
// ./opencascade/BndLib_AddSurface.hxx
// ./opencascade/BndLib_Add3dCurve.hxx
// ./opencascade/BndLib_Add2dCurve.hxx

// user-defined post
