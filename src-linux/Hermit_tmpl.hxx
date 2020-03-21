#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>

// module includes
#include <Hermit.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Hermit.hxx

// user-defined post
