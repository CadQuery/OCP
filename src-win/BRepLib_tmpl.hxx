#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_Plane.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Face.hxx>
#include <BRepLib_Command.hxx>
#include <BRepLib_MakeShape.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeEdge2d.hxx>
#include <BRepLib_MakePolygon.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepLib_MakeShell.hxx>
#include <BRepLib_MakeSolid.hxx>
#include <BRepLib_FindSurface.hxx>
#include <BRepLib_FuseEdges.hxx>
#include <BRepTools_ReShape.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
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
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Shell.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <BRepLib_FaceError.hxx>
#include <BRepLib_MakeSolid.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_FindSurface.hxx>
#include <BRepLib_EdgeError.hxx>
#include <BRepLib.hxx>
#include <BRepLib_MakeEdge2d.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_ShapeModification.hxx>
#include <BRepLib_MakeShell.hxx>
#include <BRepLib_FuseEdges.hxx>
#include <BRepLib_MakeShape.hxx>
#include <BRepLib_MakePolygon.hxx>
#include <BRepLib_ShellError.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepLib_WireError.hxx>
#include <BRepLib_Command.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\BRepLib_FaceError.hxx
// ./opencascade\BRepLib_MakeSolid.hxx
// ./opencascade\BRepLib_MakeVertex.hxx
// ./opencascade\BRepLib_MakeFace.hxx
// ./opencascade\BRepLib_FindSurface.hxx
// ./opencascade\BRepLib_EdgeError.hxx
// ./opencascade\BRepLib.hxx
// ./opencascade\BRepLib_MakeEdge2d.hxx
// ./opencascade\BRepLib_MakeEdge.hxx
// ./opencascade\BRepLib_ShapeModification.hxx
// ./opencascade\BRepLib_MakeShell.hxx
// ./opencascade\BRepLib_FuseEdges.hxx
// ./opencascade\BRepLib_MakeShape.hxx
// ./opencascade\BRepLib_MakePolygon.hxx
// ./opencascade\BRepLib_ShellError.hxx
// ./opencascade\BRepLib_MakeWire.hxx
// ./opencascade\BRepLib_WireError.hxx
// ./opencascade\BRepLib_Command.hxx

// user-defined post
