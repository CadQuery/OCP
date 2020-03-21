#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Vec2d.hxx>
#include <IntRes2d_Transition.hxx>
#include <IntRes2d_Domain.hxx>
#include <gp_Pnt2d.hxx>
#include <IntImpParGen_ImpTool.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>

// module includes
#include <IntImpParGen.hxx>
#include <IntImpParGen_ImpTool.hxx>
#include <IntImpParGen_Tool.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\IntImpParGen.hxx
// ./opencascade\IntImpParGen_ImpTool.hxx
// ./opencascade\IntImpParGen_Tool.hxx

// user-defined post
