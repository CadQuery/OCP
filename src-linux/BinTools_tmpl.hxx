#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom2d_Curve.hxx>
#include <TopoDS_Shape.hxx>
#include <BinTools_ShapeSet.hxx>
#include <BinTools_Curve2dSet.hxx>
#include <BinTools_CurveSet.hxx>
#include <BinTools_SurfaceSet.hxx>
#include <BinTools_LocationSet.hxx>
#include <BinTools_LocationSet.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>

// module includes
#include <BinTools_Curve2dSet.hxx>
#include <BinTools.hxx>
#include <BinTools_ShapeSet.hxx>
#include <BinTools_LocationSetPtr.hxx>
#include <BinTools_CurveSet.hxx>
#include <BinTools_LocationSet.hxx>
#include <BinTools_SurfaceSet.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BinTools_Curve2dSet.hxx
// ./opencascade/BinTools.hxx
// ./opencascade/BinTools_ShapeSet.hxx
// ./opencascade/BinTools_LocationSetPtr.hxx
// ./opencascade/BinTools_CurveSet.hxx
// ./opencascade/BinTools_LocationSet.hxx
// ./opencascade/BinTools_SurfaceSet.hxx

// user-defined post
