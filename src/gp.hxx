#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Quaternion.hxx>
#include <gp_Ax3.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_XYZ.hxx>
#include <gp_Mat.hxx>
#include <gp_Quaternion.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Dir.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax3.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Cone.hxx>
#include <gp_XY.hxx>
#include <gp_Mat2d.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Ax22d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf.hxx>
#include <gp_Ax2.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax2.hxx>

// module includes
#include <gp_Hypr.hxx>
#include <gp_Trsf.hxx>
#include <gp_Torus.hxx>
#include <gp.hxx>
#include <gp_VectorWithNullMagnitude.hxx>
#include <gp_Quaternion.hxx>
#include <gp_Ax22d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Vec.hxx>
#include <gp_QuaternionSLerp.hxx>
#include <gp_Ax2.hxx>
#include <gp_GTrsf.hxx>
#include <gp_Circ2d.hxx>
#include <gp_XYZ.hxx>
#include <gp_Ax3.hxx>
#include <gp_Mat2d.hxx>
#include <gp_Mat.hxx>
#include <gp_Lin.hxx>
#include <gp_Cone.hxx>
#include <gp_TrsfNLerp.hxx>
#include <gp_Elips.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Sphere.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Dir.hxx>
#include <gp_XY.hxx>
#include <gp_Circ.hxx>
#include <gp_EulerSequence.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_TrsfForm.hxx>
#include <gp_Parab.hxx>
#include <gp_Ax1.hxx>
#include <gp_QuaternionNLerp.hxx>
#include <gp_Vec2d.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/gp_Hypr.hxx
// ./opencascade/gp_Trsf.hxx
// ./opencascade/gp_Torus.hxx
// ./opencascade/gp.hxx
// ./opencascade/gp_VectorWithNullMagnitude.hxx
// ./opencascade/gp_Quaternion.hxx
// ./opencascade/gp_Ax22d.hxx
// ./opencascade/gp_Elips2d.hxx
// ./opencascade/gp_Vec.hxx
// ./opencascade/gp_QuaternionSLerp.hxx
// ./opencascade/gp_Ax2.hxx
// ./opencascade/gp_GTrsf.hxx
// ./opencascade/gp_Circ2d.hxx
// ./opencascade/gp_XYZ.hxx
// ./opencascade/gp_Ax3.hxx
// ./opencascade/gp_Mat2d.hxx
// ./opencascade/gp_Mat.hxx
// ./opencascade/gp_Lin.hxx
// ./opencascade/gp_Cone.hxx
// ./opencascade/gp_TrsfNLerp.hxx
// ./opencascade/gp_Elips.hxx
// ./opencascade/gp_Trsf2d.hxx
// ./opencascade/gp_Lin2d.hxx
// ./opencascade/gp_Pnt.hxx
// ./opencascade/gp_Dir2d.hxx
// ./opencascade/gp_Hypr2d.hxx
// ./opencascade/gp_Pnt2d.hxx
// ./opencascade/gp_Sphere.hxx
// ./opencascade/gp_Ax2d.hxx
// ./opencascade/gp_Dir.hxx
// ./opencascade/gp_XY.hxx
// ./opencascade/gp_Circ.hxx
// ./opencascade/gp_EulerSequence.hxx
// ./opencascade/gp_GTrsf2d.hxx
// ./opencascade/gp_Parab2d.hxx
// ./opencascade/gp_Pln.hxx
// ./opencascade/gp_Cylinder.hxx
// ./opencascade/gp_TrsfForm.hxx
// ./opencascade/gp_Parab.hxx
// ./opencascade/gp_Ax1.hxx
// ./opencascade/gp_QuaternionNLerp.hxx
// ./opencascade/gp_Vec2d.hxx

// user-defined post
