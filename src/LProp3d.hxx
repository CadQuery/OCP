#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp3d_SurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp3d_CurveTool.hxx>

// module includes
#include <LProp3d_SurfaceTool.hxx>
#include <LProp3d_SLProps.hxx>
#include <LProp3d_CurveTool.hxx>
#include <LProp3d_CLProps.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/LProp3d_SurfaceTool.hxx
// ./opencascade/LProp3d_SLProps.hxx
// ./opencascade/LProp3d_CurveTool.hxx
// ./opencascade/LProp3d_CLProps.hxx

// user-defined post
