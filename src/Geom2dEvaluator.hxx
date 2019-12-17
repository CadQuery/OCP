#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Geom2dAdaptor_HCurve.hxx>

// module includes
#include <Geom2dEvaluator_Curve.hxx>
#include <Geom2dEvaluator_OffsetCurve.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Geom2dEvaluator_Curve.hxx
// ./opencascade/Geom2dEvaluator_OffsetCurve.hxx

// user-defined post
