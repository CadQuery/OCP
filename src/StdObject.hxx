#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <StdObject_Location.hxx>
#include <StdObject_gp_Axes.hxx>
#include <StdObject_gp_Curves.hxx>
#include <StdObject_gp_Surfaces.hxx>
#include <StdObject_gp_Vectors.hxx>
#include <StdObject_Shape.hxx>
#include <StdObject_gp_Trsfs.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StdObject_Location.hxx
// ./opencascade/StdObject_gp_Axes.hxx
// ./opencascade/StdObject_gp_Curves.hxx
// ./opencascade/StdObject_gp_Surfaces.hxx
// ./opencascade/StdObject_gp_Vectors.hxx
// ./opencascade/StdObject_Shape.hxx
// ./opencascade/StdObject_gp_Trsfs.hxx

// user-defined post
