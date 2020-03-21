#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Vec2d.hxx>
#include <IntRes2d_Transition.hxx>
#include <IntRes2d_Domain.hxx>
#include <gp_Pnt2d.hxx>
#include <IntImpParGen_ImpTool.hxx>

// module includes
#include <IntImpParGen_Tool.hxx>
#include <IntImpParGen_ImpTool.hxx>
#include <IntImpParGen.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/IntImpParGen_Tool.hxx
// ./opencascade/IntImpParGen_ImpTool.hxx
// ./opencascade/IntImpParGen.hxx

// user-defined post
