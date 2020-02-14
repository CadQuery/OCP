#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <IntImp_ConstIsoparametric.hxx>
#include <IntImp_ComputeTangence.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/IntImp_ConstIsoparametric.hxx
// ./opencascade/IntImp_ComputeTangence.hxx

// user-defined post
