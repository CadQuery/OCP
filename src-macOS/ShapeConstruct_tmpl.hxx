#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <ShapeAnalysis_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeConstruct_Curve.hxx>
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>
#include <ShapeConstruct_MakeTriangulation.hxx>
#include <Geom_Curve.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>

// module includes
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>
#include <ShapeConstruct.hxx>
#include <ShapeConstruct_MakeTriangulation.hxx>
#include <ShapeConstruct_Curve.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/ShapeConstruct_ProjectCurveOnSurface.hxx
// ./opencascade/ShapeConstruct.hxx
// ./opencascade/ShapeConstruct_MakeTriangulation.hxx
// ./opencascade/ShapeConstruct_Curve.hxx

// user-defined post
