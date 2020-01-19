#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_OutOfRange.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <gp_Ax2.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_GTrsf2d.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_Surface.hxx>
#include <GeomLib_MakeCurvefromApprox.hxx>
#include <GeomLib_Interpolate.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>
#include <GeomLib_CheckBSplineCurve.hxx>
#include <GeomLib_Check2dBSplineCurve.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <GeomLib_Tool.hxx>
#include <GeomLib_PolyFunc.hxx>
#include <GeomLib_LogSample.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <GeomLib_LogSample.hxx>
#include <GeomLib_InterpolationErrors.hxx>
#include <GeomLib_CheckCurveOnSurface.hxx>
#include <GeomLib_Tool.hxx>
#include <GeomLib_DenominatorMultiplierPtr.hxx>
#include <GeomLib_Array1OfMat.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>
#include <GeomLib_CheckBSplineCurve.hxx>
#include <GeomLib_PolyFunc.hxx>
#include <GeomLib.hxx>
#include <GeomLib_Check2dBSplineCurve.hxx>
#include <GeomLib_MakeCurvefromApprox.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <GeomLib_Interpolate.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/GeomLib_LogSample.hxx
// ./opencascade/GeomLib_InterpolationErrors.hxx
// ./opencascade/GeomLib_CheckCurveOnSurface.hxx
// ./opencascade/GeomLib_Tool.hxx
// ./opencascade/GeomLib_DenominatorMultiplierPtr.hxx
// ./opencascade/GeomLib_Array1OfMat.hxx
// ./opencascade/GeomLib_DenominatorMultiplier.hxx
// ./opencascade/GeomLib_CheckBSplineCurve.hxx
// ./opencascade/GeomLib_PolyFunc.hxx
// ./opencascade/GeomLib.hxx
// ./opencascade/GeomLib_Check2dBSplineCurve.hxx
// ./opencascade/GeomLib_MakeCurvefromApprox.hxx
// ./opencascade/GeomLib_IsPlanarSurface.hxx
// ./opencascade/GeomLib_Interpolate.hxx

// user-defined post
