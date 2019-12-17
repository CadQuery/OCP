#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <Bnd_Box2d.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>
#include <BRep_Builder.hxx>
#include <BRepTools_WireExplorer.hxx>
#include <BRepTools_Modification.hxx>
#include <BRepTools_Modifier.hxx>
#include <BRepTools_TrsfModification.hxx>
#include <BRepTools_NurbsConvertModification.hxx>
#include <BRepTools_GTrsfModification.hxx>
#include <BRepTools_Substitution.hxx>
#include <BRepTools_Quilt.hxx>
#include <BRepTools_ShapeSet.hxx>
#include <BRepTools_ReShape.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Standard_NullObject.hxx>
#include <BRepTools_Modification.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Wire.hxx>

// module includes
#include <BRepTools.hxx>
#include <BRepTools_ReShape.hxx>
#include <BRepTools_GTrsfModification.hxx>
#include <BRepTools_NurbsConvertModification.hxx>
#include <BRepTools_Modification.hxx>
#include <BRepTools_Substitution.hxx>
#include <BRepTools_Modifier.hxx>
#include <BRepTools_ShapeSet.hxx>
#include <BRepTools_MapOfVertexPnt2d.hxx>
#include <BRepTools_History.hxx>
#include <BRepTools_Quilt.hxx>
#include <BRepTools_TrsfModification.hxx>
#include <BRepTools_DataMapIteratorOfMapOfVertexPnt2d.hxx>
#include <BRepTools_WireExplorer.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepTools.hxx
// ./opencascade/BRepTools_ReShape.hxx
// ./opencascade/BRepTools_GTrsfModification.hxx
// ./opencascade/BRepTools_NurbsConvertModification.hxx
// ./opencascade/BRepTools_Modification.hxx
// ./opencascade/BRepTools_Substitution.hxx
// ./opencascade/BRepTools_Modifier.hxx
// ./opencascade/BRepTools_ShapeSet.hxx
// ./opencascade/BRepTools_MapOfVertexPnt2d.hxx
// ./opencascade/BRepTools_History.hxx
// ./opencascade/BRepTools_Quilt.hxx
// ./opencascade/BRepTools_TrsfModification.hxx
// ./opencascade/BRepTools_DataMapIteratorOfMapOfVertexPnt2d.hxx
// ./opencascade/BRepTools_WireExplorer.hxx

// user-defined post
