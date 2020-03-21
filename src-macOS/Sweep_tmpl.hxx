#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_OutOfRange.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>

// module includes
#include <Sweep_NumShapeTool.hxx>
#include <Sweep_NumShapeIterator.hxx>
#include <Sweep_NumShape.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Sweep_NumShapeTool.hxx
// ./opencascade/Sweep_NumShapeIterator.hxx
// ./opencascade/Sweep_NumShape.hxx

// user-defined post
