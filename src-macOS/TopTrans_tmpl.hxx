#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <TopTrans_Array2OfOrientation.hxx>
#include <TopTrans_SurfaceTransition.hxx>
#include <TopTrans_CurveTransition.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/TopTrans_Array2OfOrientation.hxx
// ./opencascade/TopTrans_SurfaceTransition.hxx
// ./opencascade/TopTrans_CurveTransition.hxx

// user-defined post
