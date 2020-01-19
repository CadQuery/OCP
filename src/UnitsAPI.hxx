#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Units_Dimensions.hxx>

// module includes
#include <UnitsAPI.hxx>
#include <UnitsAPI_SystemUnits.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/UnitsAPI.hxx
// ./opencascade/UnitsAPI_SystemUnits.hxx

// user-defined post
