#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <IntRes2d_IntersectionPoint.hxx>
#include <IntRes2d_IntersectionPoint.hxx>

// module includes
#include <HatchGen_IntersectionPoint.hxx>
#include <HatchGen_PointsOnElement.hxx>
#include <HatchGen_PointsOnHatching.hxx>
#include <HatchGen_PointOnElement.hxx>
#include <HatchGen_PointOnHatching.hxx>
#include <HatchGen_Domain.hxx>
#include <HatchGen_ErrorStatus.hxx>
#include <HatchGen_IntersectionType.hxx>
#include <HatchGen_Domains.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/HatchGen_IntersectionPoint.hxx
// ./opencascade/HatchGen_PointsOnElement.hxx
// ./opencascade/HatchGen_PointsOnHatching.hxx
// ./opencascade/HatchGen_PointOnElement.hxx
// ./opencascade/HatchGen_PointOnHatching.hxx
// ./opencascade/HatchGen_Domain.hxx
// ./opencascade/HatchGen_ErrorStatus.hxx
// ./opencascade/HatchGen_IntersectionType.hxx
// ./opencascade/HatchGen_Domains.hxx

// user-defined post
