#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Vertex.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <TopoDS_Face.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Shape.hxx>
#include <Adaptor3d_Curve.hxx>
#include <HLRBRep_Data.hxx>
#include <TopoDS_Shape.hxx>
#include <HLRAlgo_Projector.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <TopoDS_Shape.hxx>
#include <BRep_Builder.hxx>
#include <TopoDS_Compound.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Geom_Point.hxx>
#include <TopoDS_Shape.hxx>
#include <Prs3d_Projector.hxx>
#include <Adaptor3d_Surface.hxx>
#include <BRepAdaptor_HSurface.hxx>

// module includes
#include <StdPrs_HLRShape.hxx>
#include <StdPrs_Isolines.hxx>
#include <StdPrs_ToolVertex.hxx>
#include <StdPrs_WFDeflectionSurface.hxx>
#include <StdPrs_ToolTriangulatedShape.hxx>
#include <StdPrs_PoleCurve.hxx>
#include <StdPrs_Vertex.hxx>
#include <StdPrs_HLRToolShape.hxx>
#include <StdPrs_Curve.hxx>
#include <StdPrs_WFRestrictedFace.hxx>
#include <StdPrs_DeflectionCurve.hxx>
#include <StdPrs_WFPoleSurface.hxx>
#include <StdPrs_Point.hxx>
#include <StdPrs_WFSurface.hxx>
#include <StdPrs_ToolRFace.hxx>
#include <StdPrs_ShadedShape.hxx>
#include <StdPrs_WFShape.hxx>
#include <StdPrs_Plane.hxx>
#include <StdPrs_Volume.hxx>
#include <StdPrs_ToolPoint.hxx>
#include <StdPrs_HLRPolyShape.hxx>
#include <StdPrs_ShadedSurface.hxx>
#include <StdPrs_BndBox.hxx>
#include <StdPrs_WFDeflectionRestrictedFace.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StdPrs_HLRShape.hxx
// ./opencascade/StdPrs_Isolines.hxx
// ./opencascade/StdPrs_ToolVertex.hxx
// ./opencascade/StdPrs_WFDeflectionSurface.hxx
// ./opencascade/StdPrs_ToolTriangulatedShape.hxx
// ./opencascade/StdPrs_PoleCurve.hxx
// ./opencascade/StdPrs_Vertex.hxx
// ./opencascade/StdPrs_HLRToolShape.hxx
// ./opencascade/StdPrs_Curve.hxx
// ./opencascade/StdPrs_WFRestrictedFace.hxx
// ./opencascade/StdPrs_DeflectionCurve.hxx
// ./opencascade/StdPrs_WFPoleSurface.hxx
// ./opencascade/StdPrs_Point.hxx
// ./opencascade/StdPrs_WFSurface.hxx
// ./opencascade/StdPrs_ToolRFace.hxx
// ./opencascade/StdPrs_ShadedShape.hxx
// ./opencascade/StdPrs_WFShape.hxx
// ./opencascade/StdPrs_Plane.hxx
// ./opencascade/StdPrs_Volume.hxx
// ./opencascade/StdPrs_ToolPoint.hxx
// ./opencascade/StdPrs_HLRPolyShape.hxx
// ./opencascade/StdPrs_ShadedSurface.hxx
// ./opencascade/StdPrs_BndBox.hxx
// ./opencascade/StdPrs_WFDeflectionRestrictedFace.hxx

// user-defined post
