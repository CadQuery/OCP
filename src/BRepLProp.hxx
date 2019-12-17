#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <BRepAdaptor_Curve.hxx>
#include <BRepLProp_CurveTool.hxx>
#include <BRepLProp_SurfaceTool.hxx>
#include <BRepLProp_CLProps.hxx>
#include <BRepLProp_SLProps.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <BRepLProp_SurfaceTool.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <BRepLProp_CurveTool.hxx>

// module includes
#include <BRepLProp.hxx>
#include <BRepLProp_CurveTool.hxx>
#include <BRepLProp_SurfaceTool.hxx>
#include <BRepLProp_SLProps.hxx>
#include <BRepLProp_CLProps.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepLProp.hxx
// ./opencascade/BRepLProp_CurveTool.hxx
// ./opencascade/BRepLProp_SurfaceTool.hxx
// ./opencascade/BRepLProp_SLProps.hxx
// ./opencascade/BRepLProp_CLProps.hxx

// user-defined post
