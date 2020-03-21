#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom2d_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <Geom2dAPI_InterCurveCurve.hxx>
#include <Geom2dAPI_ExtremaCurveCurve.hxx>
#include <Geom2dAPI_ProjectPointOnCurve.hxx>
#include <Geom2dAPI_PointsToBSpline.hxx>
#include <Geom2dAPI_Interpolate.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Geom2dAPI_InterCurveCurve.hxx
// ./opencascade/Geom2dAPI_ExtremaCurveCurve.hxx
// ./opencascade/Geom2dAPI_ProjectPointOnCurve.hxx
// ./opencascade/Geom2dAPI_PointsToBSpline.hxx
// ./opencascade/Geom2dAPI_Interpolate.hxx

// user-defined post
