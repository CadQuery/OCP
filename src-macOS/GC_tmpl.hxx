#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cone.hxx>
#include <gp_Lin.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <gp_Ax1.hxx>
#include <gp_Cylinder.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Lin.hxx>
#include <gp_Ax1.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Circ.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Ax1.hxx>
#include <gp_Lin.hxx>
#include <gp_Dir.hxx>
#include <gp_Pln.hxx>
#include <gp_Ax2.hxx>

// module includes
#include <GC_Root.hxx>
#include <GC_MakeTrimmedCone.hxx>
#include <GC_MakePlane.hxx>
#include <GC_MakeSegment.hxx>
#include <GC_MakeEllipse.hxx>
#include <GC_MakeConicalSurface.hxx>
#include <GC_MakeScale.hxx>
#include <GC_MakeLine.hxx>
#include <GC_MakeCircle.hxx>
#include <GC_MakeArcOfParabola.hxx>
#include <GC_MakeCylindricalSurface.hxx>
#include <GC_MakeArcOfHyperbola.hxx>
#include <GC_MakeArcOfEllipse.hxx>
#include <GC_MakeHyperbola.hxx>
#include <GC_MakeTrimmedCylinder.hxx>
#include <GC_MakeRotation.hxx>
#include <GC_MakeArcOfCircle.hxx>
#include <GC_MakeTranslation.hxx>
#include <GC_MakeMirror.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/GC_Root.hxx
// ./opencascade/GC_MakeTrimmedCone.hxx
// ./opencascade/GC_MakePlane.hxx
// ./opencascade/GC_MakeSegment.hxx
// ./opencascade/GC_MakeEllipse.hxx
// ./opencascade/GC_MakeConicalSurface.hxx
// ./opencascade/GC_MakeScale.hxx
// ./opencascade/GC_MakeLine.hxx
// ./opencascade/GC_MakeCircle.hxx
// ./opencascade/GC_MakeArcOfParabola.hxx
// ./opencascade/GC_MakeCylindricalSurface.hxx
// ./opencascade/GC_MakeArcOfHyperbola.hxx
// ./opencascade/GC_MakeArcOfEllipse.hxx
// ./opencascade/GC_MakeHyperbola.hxx
// ./opencascade/GC_MakeTrimmedCylinder.hxx
// ./opencascade/GC_MakeRotation.hxx
// ./opencascade/GC_MakeArcOfCircle.hxx
// ./opencascade/GC_MakeTranslation.hxx
// ./opencascade/GC_MakeMirror.hxx

// user-defined post
