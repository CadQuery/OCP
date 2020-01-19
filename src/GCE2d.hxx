#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Lin2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Dir2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Pnt2d.hxx>

// module includes
#include <GCE2d_MakeArcOfCircle.hxx>
#include <GCE2d_MakeParabola.hxx>
#include <GCE2d_MakeHyperbola.hxx>
#include <GCE2d_MakeArcOfEllipse.hxx>
#include <GCE2d_MakeArcOfHyperbola.hxx>
#include <GCE2d_MakeRotation.hxx>
#include <GCE2d_MakeLine.hxx>
#include <GCE2d_MakeCircle.hxx>
#include <GCE2d_MakeEllipse.hxx>
#include <GCE2d_MakeScale.hxx>
#include <GCE2d_MakeArcOfParabola.hxx>
#include <GCE2d_MakeSegment.hxx>
#include <GCE2d_MakeMirror.hxx>
#include <GCE2d_Root.hxx>
#include <GCE2d_MakeTranslation.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/GCE2d_MakeArcOfCircle.hxx
// ./opencascade/GCE2d_MakeParabola.hxx
// ./opencascade/GCE2d_MakeHyperbola.hxx
// ./opencascade/GCE2d_MakeArcOfEllipse.hxx
// ./opencascade/GCE2d_MakeArcOfHyperbola.hxx
// ./opencascade/GCE2d_MakeRotation.hxx
// ./opencascade/GCE2d_MakeLine.hxx
// ./opencascade/GCE2d_MakeCircle.hxx
// ./opencascade/GCE2d_MakeEllipse.hxx
// ./opencascade/GCE2d_MakeScale.hxx
// ./opencascade/GCE2d_MakeArcOfParabola.hxx
// ./opencascade/GCE2d_MakeSegment.hxx
// ./opencascade/GCE2d_MakeMirror.hxx
// ./opencascade/GCE2d_Root.hxx
// ./opencascade/GCE2d_MakeTranslation.hxx

// user-defined post
