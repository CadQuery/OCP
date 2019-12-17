#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <BSplSLib.hxx>
#include <BSplSLib_EvaluatorFunction.hxx>
#include <BSplSLib_Cache.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BSplSLib.hxx
// ./opencascade/BSplSLib_EvaluatorFunction.hxx
// ./opencascade/BSplSLib_Cache.hxx

// user-defined post
