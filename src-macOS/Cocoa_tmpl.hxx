#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Aspect_WindowDefinitionError.hxx>
#include <Aspect_WindowError.hxx>

// module includes
#include <Cocoa_LocalPool.hxx>
#include <Cocoa_Window.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Cocoa_LocalPool.hxx
// ./opencascade/Cocoa_Window.hxx

// user-defined post
