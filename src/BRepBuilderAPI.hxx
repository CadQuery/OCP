#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <BRepBuilderAPI_Command.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeEdge2d.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_FindPlane.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeShell.hxx>
#include <BRepBuilderAPI_MakeSolid.hxx>
#include <BRepBuilderAPI_ModifyShape.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRepBuilderAPI_NurbsConvert.hxx>
#include <BRepBuilderAPI_GTransform.hxx>
#include <BRepBuilderAPI_Copy.hxx>
#include <BRepBuilderAPI_Collect.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Shell.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepTools_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <BRepTools_Modification.hxx>
#include <Standard_NullObject.hxx>

// module includes
#include <BRepBuilderAPI_MakeEdge2d.hxx>
#include <BRepBuilderAPI.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_BndBoxTreeSelector.hxx>
#include <BRepBuilderAPI_PipeError.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_VertexInspector.hxx>
#include <BRepBuilderAPI_GTransform.hxx>
#include <BRepBuilderAPI_FastSewing.hxx>
#include <BRepBuilderAPI_FindPlane.hxx>
#include <BRepBuilderAPI_TransitionMode.hxx>
#include <BRepBuilderAPI_MakeShell.hxx>
#include <BRepBuilderAPI_Copy.hxx>
#include <BRepBuilderAPI_Collect.hxx>
#include <BRepBuilderAPI_Command.hxx>
#include <BRepBuilderAPI_ShellError.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <BRepBuilderAPI_FaceError.hxx>
#include <BRepBuilderAPI_EdgeError.hxx>
#include <BRepBuilderAPI_NurbsConvert.hxx>
#include <BRepBuilderAPI_MakeSolid.hxx>
#include <BRepBuilderAPI_ModifyShape.hxx>
#include <BRepBuilderAPI_ShapeModification.hxx>
#include <BRepBuilderAPI_CellFilter.hxx>
#include <BRepBuilderAPI_WireError.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepBuilderAPI_MakeEdge2d.hxx
// ./opencascade/BRepBuilderAPI.hxx
// ./opencascade/BRepBuilderAPI_MakeVertex.hxx
// ./opencascade/BRepBuilderAPI_MakePolygon.hxx
// ./opencascade/BRepBuilderAPI_MakeFace.hxx
// ./opencascade/BRepBuilderAPI_BndBoxTreeSelector.hxx
// ./opencascade/BRepBuilderAPI_PipeError.hxx
// ./opencascade/BRepBuilderAPI_MakeWire.hxx
// ./opencascade/BRepBuilderAPI_Transform.hxx
// ./opencascade/BRepBuilderAPI_MakeEdge.hxx
// ./opencascade/BRepBuilderAPI_VertexInspector.hxx
// ./opencascade/BRepBuilderAPI_GTransform.hxx
// ./opencascade/BRepBuilderAPI_FastSewing.hxx
// ./opencascade/BRepBuilderAPI_FindPlane.hxx
// ./opencascade/BRepBuilderAPI_TransitionMode.hxx
// ./opencascade/BRepBuilderAPI_MakeShell.hxx
// ./opencascade/BRepBuilderAPI_Copy.hxx
// ./opencascade/BRepBuilderAPI_Collect.hxx
// ./opencascade/BRepBuilderAPI_Command.hxx
// ./opencascade/BRepBuilderAPI_ShellError.hxx
// ./opencascade/BRepBuilderAPI_Sewing.hxx
// ./opencascade/BRepBuilderAPI_MakeShape.hxx
// ./opencascade/BRepBuilderAPI_FaceError.hxx
// ./opencascade/BRepBuilderAPI_EdgeError.hxx
// ./opencascade/BRepBuilderAPI_NurbsConvert.hxx
// ./opencascade/BRepBuilderAPI_MakeSolid.hxx
// ./opencascade/BRepBuilderAPI_ModifyShape.hxx
// ./opencascade/BRepBuilderAPI_ShapeModification.hxx
// ./opencascade/BRepBuilderAPI_CellFilter.hxx
// ./opencascade/BRepBuilderAPI_WireError.hxx

// user-defined post
