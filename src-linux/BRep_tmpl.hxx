#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Triangulation.hxx>
#include <Geom_Surface.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_Polygon2D.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Standard_NullObject.hxx>
#include <Poly_Polygon3D.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_Polygon2D.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Poly_Triangulation.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_Polygon2D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Surface.hxx>

// module includes
#include <BRep_PolygonOnClosedTriangulation.hxx>
#include <BRep_TEdge.hxx>
#include <BRep_TFace.hxx>
#include <BRep_TVertex.hxx>
#include <BRep_PolygonOnSurface.hxx>
#include <BRep_CurveOn2Surfaces.hxx>
#include <BRep_ListOfPointRepresentation.hxx>
#include <BRep_Polygon3D.hxx>
#include <BRep_ListIteratorOfListOfPointRepresentation.hxx>
#include <BRep_Tool.hxx>
#include <BRep_CurveOnSurface.hxx>
#include <BRep_ListOfCurveRepresentation.hxx>
#include <BRep_Curve3D.hxx>
#include <BRep_PointOnSurface.hxx>
#include <BRep_PointOnCurve.hxx>
#include <BRep_Builder.hxx>
#include <BRep_ListIteratorOfListOfCurveRepresentation.hxx>
#include <BRep_PointRepresentation.hxx>
#include <BRep_PointOnCurveOnSurface.hxx>
#include <BRep_PolygonOnTriangulation.hxx>
#include <BRep_PolygonOnClosedSurface.hxx>
#include <BRep_CurveRepresentation.hxx>
#include <BRep_CurveOnClosedSurface.hxx>
#include <BRep_PointsOnSurface.hxx>
#include <BRep_GCurve.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRep_PolygonOnClosedTriangulation.hxx
// ./opencascade/BRep_TEdge.hxx
// ./opencascade/BRep_TFace.hxx
// ./opencascade/BRep_TVertex.hxx
// ./opencascade/BRep_PolygonOnSurface.hxx
// ./opencascade/BRep_CurveOn2Surfaces.hxx
// ./opencascade/BRep_ListOfPointRepresentation.hxx
// ./opencascade/BRep_Polygon3D.hxx
// ./opencascade/BRep_ListIteratorOfListOfPointRepresentation.hxx
// ./opencascade/BRep_Tool.hxx
// ./opencascade/BRep_CurveOnSurface.hxx
// ./opencascade/BRep_ListOfCurveRepresentation.hxx
// ./opencascade/BRep_Curve3D.hxx
// ./opencascade/BRep_PointOnSurface.hxx
// ./opencascade/BRep_PointOnCurve.hxx
// ./opencascade/BRep_Builder.hxx
// ./opencascade/BRep_ListIteratorOfListOfCurveRepresentation.hxx
// ./opencascade/BRep_PointRepresentation.hxx
// ./opencascade/BRep_PointOnCurveOnSurface.hxx
// ./opencascade/BRep_PolygonOnTriangulation.hxx
// ./opencascade/BRep_PolygonOnClosedSurface.hxx
// ./opencascade/BRep_CurveRepresentation.hxx
// ./opencascade/BRep_CurveOnClosedSurface.hxx
// ./opencascade/BRep_PointsOnSurface.hxx
// ./opencascade/BRep_GCurve.hxx

// user-defined post
