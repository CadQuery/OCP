#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Shape.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_OBB.hxx>

// module includes
#include <BRepBndLib.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepBndLib.hxx

// user-defined post
