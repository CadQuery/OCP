#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Poly_Triangulation.hxx>
#include <TopoDS_Edge.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopoDS_Face.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <BRepMesh_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepMesh_FaceAttribute.hxx>
#include <BRepMesh_VertexInspector.hxx>
#include <BRepMesh_CircleInspector.hxx>
#include <BRepMesh_Classifier.hxx>
#include <Poly_Triangulation.hxx>
#include <BRepMesh_VertexTool.hxx>
#include <Bnd_Box.hxx>
#include <Geom2dAdaptor_HCurve.hxx>
#include <gp_Circ2d.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Poly_Triangulation.hxx>
#include <Adaptor3d_Surface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepMesh_DiscretRoot.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <TopoDS_Face.hxx>
#include <Geom2dAdaptor_HCurve.hxx>

// module includes
#include <BRepMesh_WireInterferenceChecker.hxx>
#include <BRepMesh_ShapeTool.hxx>
#include <BRepMesh_FaceAttribute.hxx>
#include <BRepMesh_DataStructureOfDelaun.hxx>
#include <BRepMesh_Delaun.hxx>
#include <BRepMesh_PairOfIndex.hxx>
#include <BRepMesh_EdgeParameterProvider.hxx>
#include <BRepMesh_DiscretFactory.hxx>
#include <BRepMesh_PluginMacro.hxx>
#include <BRepMesh_PairOfPolygon.hxx>
#include <BRepMesh.hxx>
#include <BRepMesh_VertexInspector.hxx>
#include <BRepMesh_Vertex.hxx>
#include <BRepMesh_Edge.hxx>
#include <BRepMesh_IEdgeTool.hxx>
#include <BRepMesh_IncrementalMesh.hxx>
#include <BRepMesh_DiscretRoot.hxx>
#include <BRepMesh_FastDiscret.hxx>
#include <BRepMesh_DegreeOfFreedom.hxx>
#include <BRepMesh_Status.hxx>
#include <BRepMesh_CircleTool.hxx>
#include <BRepMesh_FactoryError.hxx>
#include <BRepMesh_FastDiscretFace.hxx>
#include <BRepMesh_EdgeTessellator.hxx>
#include <BRepMesh_Circle.hxx>
#include <BRepMesh_GeomTool.hxx>
#include <BRepMesh_PluginEntryType.hxx>
#include <BRepMesh_WireChecker.hxx>
#include <BRepMesh_SelectorOfDataStructureOfDelaun.hxx>
#include <BRepMesh_VertexTool.hxx>
#include <BRepMesh_Classifier.hxx>
#include <BRepMesh_EdgeTessellationExtractor.hxx>
#include <BRepMesh_Triangle.hxx>
#include <BRepMesh_OrientedEdge.hxx>
#include <BRepMesh_CircleInspector.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepMesh_WireInterferenceChecker.hxx
// ./opencascade/BRepMesh_ShapeTool.hxx
// ./opencascade/BRepMesh_FaceAttribute.hxx
// ./opencascade/BRepMesh_DataStructureOfDelaun.hxx
// ./opencascade/BRepMesh_Delaun.hxx
// ./opencascade/BRepMesh_PairOfIndex.hxx
// ./opencascade/BRepMesh_EdgeParameterProvider.hxx
// ./opencascade/BRepMesh_DiscretFactory.hxx
// ./opencascade/BRepMesh_PluginMacro.hxx
// ./opencascade/BRepMesh_PairOfPolygon.hxx
// ./opencascade/BRepMesh.hxx
// ./opencascade/BRepMesh_VertexInspector.hxx
// ./opencascade/BRepMesh_Vertex.hxx
// ./opencascade/BRepMesh_Edge.hxx
// ./opencascade/BRepMesh_IEdgeTool.hxx
// ./opencascade/BRepMesh_IncrementalMesh.hxx
// ./opencascade/BRepMesh_DiscretRoot.hxx
// ./opencascade/BRepMesh_FastDiscret.hxx
// ./opencascade/BRepMesh_DegreeOfFreedom.hxx
// ./opencascade/BRepMesh_Status.hxx
// ./opencascade/BRepMesh_CircleTool.hxx
// ./opencascade/BRepMesh_FactoryError.hxx
// ./opencascade/BRepMesh_FastDiscretFace.hxx
// ./opencascade/BRepMesh_EdgeTessellator.hxx
// ./opencascade/BRepMesh_Circle.hxx
// ./opencascade/BRepMesh_GeomTool.hxx
// ./opencascade/BRepMesh_PluginEntryType.hxx
// ./opencascade/BRepMesh_WireChecker.hxx
// ./opencascade/BRepMesh_SelectorOfDataStructureOfDelaun.hxx
// ./opencascade/BRepMesh_VertexTool.hxx
// ./opencascade/BRepMesh_Classifier.hxx
// ./opencascade/BRepMesh_EdgeTessellationExtractor.hxx
// ./opencascade/BRepMesh_Triangle.hxx
// ./opencascade/BRepMesh_OrientedEdge.hxx
// ./opencascade/BRepMesh_CircleInspector.hxx

// user-defined post
