#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <IGESGeom_Direction.hxx>
#include <Geom2d_Vector.hxx>
#include <Geom2d_VectorWithMagnitude.hxx>
#include <Geom2d_Direction.hxx>
#include <IGESGeom_Point.hxx>
#include <Geom2d_Point.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Geom2d_Curve.hxx>
#include <IGESData_IGESModel.hxx>

// module includes
#include <Geom2dToIGES_Geom2dVector.hxx>
#include <Geom2dToIGES_Geom2dPoint.hxx>
#include <Geom2dToIGES_Geom2dCurve.hxx>
#include <Geom2dToIGES_Geom2dEntity.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Geom2dToIGES_Geom2dVector.hxx
// ./opencascade/Geom2dToIGES_Geom2dPoint.hxx
// ./opencascade/Geom2dToIGES_Geom2dCurve.hxx
// ./opencascade/Geom2dToIGES_Geom2dEntity.hxx

// user-defined post
