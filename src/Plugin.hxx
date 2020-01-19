#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <Resource_Manager.hxx>

// module includes
#include <Plugin_DataMapIteratorOfMapOfFunctions.hxx>
#include <Plugin_Macro.hxx>
#include <Plugin_MapOfFunctions.hxx>
#include <Plugin.hxx>
#include <Plugin_Failure.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Plugin_DataMapIteratorOfMapOfFunctions.hxx
// ./opencascade/Plugin_Macro.hxx
// ./opencascade/Plugin_MapOfFunctions.hxx
// ./opencascade/Plugin.hxx
// ./opencascade/Plugin_Failure.hxx

// user-defined post
