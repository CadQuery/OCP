#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <AppCont_Function.hxx>
#include <AppCont_ContMatrices.hxx>
#include <AppCont_LeastSquare.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/AppCont_Function.hxx
// ./opencascade/AppCont_ContMatrices.hxx
// ./opencascade/AppCont_LeastSquare.hxx

// user-defined post
