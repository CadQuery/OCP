#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <math_Matrix.hxx>

// module includes
#include <BSplCLib_MultDistribution.hxx>
#include <BSplCLib_Cache.hxx>
#include <BSplCLib_EvaluatorFunction.hxx>
#include <BSplCLib.hxx>
#include <BSplCLib_KnotDistribution.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BSplCLib_MultDistribution.hxx
// ./opencascade/BSplCLib_Cache.hxx
// ./opencascade/BSplCLib_EvaluatorFunction.hxx
// ./opencascade/BSplCLib.hxx
// ./opencascade/BSplCLib_KnotDistribution.hxx

// user-defined post
