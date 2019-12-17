#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2dConvert_BSplineCurveKnotSplitting.hxx>
#include <Geom2dConvert_BSplineCurveToBezierCurve.hxx>
#include <Geom2dConvert_CompCurveToBSplineCurve.hxx>
#include <Geom2dConvert_ApproxCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Geom2d_BSplineCurve.hxx>

// module includes
#include <Geom2dConvert_CompCurveToBSplineCurve.hxx>
#include <Geom2dConvert_BSplineCurveKnotSplitting.hxx>
#include <Geom2dConvert.hxx>
#include <Geom2dConvert_ApproxCurve.hxx>
#include <Geom2dConvert_BSplineCurveToBezierCurve.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Geom2dConvert_CompCurveToBSplineCurve.hxx
// ./opencascade/Geom2dConvert_BSplineCurveKnotSplitting.hxx
// ./opencascade/Geom2dConvert.hxx
// ./opencascade/Geom2dConvert_ApproxCurve.hxx
// ./opencascade/Geom2dConvert_BSplineCurveToBezierCurve.hxx

// user-defined post
