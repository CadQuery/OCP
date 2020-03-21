#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <TopAbs_Orientation.hxx>
#include <TopAbs_State.hxx>
#include <TopAbs.hxx>
#include <TopAbs_ShapeEnum.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/TopAbs_Orientation.hxx
// ./opencascade/TopAbs_State.hxx
// ./opencascade/TopAbs.hxx
// ./opencascade/TopAbs_ShapeEnum.hxx

// user-defined post
