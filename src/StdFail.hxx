#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <StdFail_UndefinedValue.hxx>
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_Undefined.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StdFail_UndefinedValue.hxx
// ./opencascade/StdFail_InfiniteSolutions.hxx
// ./opencascade/StdFail_UndefinedDerivative.hxx
// ./opencascade/StdFail_NotDone.hxx
// ./opencascade/StdFail_Undefined.hxx

// user-defined post
