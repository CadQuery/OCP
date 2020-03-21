#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_Spine.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_TrimmedCurve.hxx>

// module includes
#include <FilletSurf_ErrorTypeStatus.hxx>
#include <FilletSurf_InternalBuilder.hxx>
#include <FilletSurf_StatusType.hxx>
#include <FilletSurf_StatusDone.hxx>
#include <FilletSurf_Builder.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/FilletSurf_ErrorTypeStatus.hxx
// ./opencascade/FilletSurf_InternalBuilder.hxx
// ./opencascade/FilletSurf_StatusType.hxx
// ./opencascade/FilletSurf_StatusDone.hxx
// ./opencascade/FilletSurf_Builder.hxx

// user-defined post
