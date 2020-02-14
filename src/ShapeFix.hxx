#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Shape.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeFix_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <Message_ProgressIndicator.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Wire.hxx>
#include <ShapeExtend_WireData.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeExtend_WireData.hxx>
#include <gp_Lin2d.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Shape.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeFix_Root.hxx>
#include <ShapeFix_EdgeProjAux.hxx>
#include <ShapeFix_Edge.hxx>
#include <ShapeFix_Wire.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeFix_FixSmallFace.hxx>
#include <ShapeFix_FixSmallSolid.hxx>
#include <ShapeFix_WireVertex.hxx>
#include <ShapeFix_Wireframe.hxx>
#include <ShapeFix_FreeBounds.hxx>
#include <ShapeFix_FaceConnect.hxx>
#include <ShapeFix_Shell.hxx>
#include <ShapeFix_Solid.hxx>
#include <ShapeFix_ShapeTolerance.hxx>
#include <ShapeFix_Shape.hxx>
#include <ShapeFix_EdgeConnect.hxx>
#include <ShapeFix_ComposeShell.hxx>
#include <ShapeFix_SplitCommonVertex.hxx>
#include <ShapeFix_WireSegment.hxx>
#include <ShapeFix_IntersectionTool.hxx>
#include <ShapeFix_SplitTool.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeFix_Wire.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Vertex.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeExtend_WireData.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeFix_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <Message_Msg.hxx>
#include <ShapeFix_Edge.hxx>
#include <Geom_Surface.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <ShapeFix_FaceConnect.hxx>
#include <ShapeFix_ShapeTolerance.hxx>
#include <ShapeFix_WireSegment.hxx>
#include <ShapeFix_EdgeConnect.hxx>
#include <ShapeFix_SequenceOfWireSegment.hxx>
#include <ShapeFix_Edge.hxx>
#include <ShapeFix_Solid.hxx>
#include <ShapeFix_SplitTool.hxx>
#include <ShapeFix_WireVertex.hxx>
#include <ShapeFix_Wireframe.hxx>
#include <ShapeFix_ComposeShell.hxx>
#include <ShapeFix_FixSmallFace.hxx>
#include <ShapeFix_DataMapOfShapeBox2d.hxx>
#include <ShapeFix.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeFix_Shell.hxx>
#include <ShapeFix_FixSmallSolid.hxx>
#include <ShapeFix_IntersectionTool.hxx>
#include <ShapeFix_Shape.hxx>
#include <ShapeFix_FreeBounds.hxx>
#include <ShapeFix_Root.hxx>
#include <ShapeFix_SplitCommonVertex.hxx>
#include <ShapeFix_Wire.hxx>
#include <ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d.hxx>
#include <ShapeFix_EdgeProjAux.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/ShapeFix_FaceConnect.hxx
// ./opencascade/ShapeFix_ShapeTolerance.hxx
// ./opencascade/ShapeFix_WireSegment.hxx
// ./opencascade/ShapeFix_EdgeConnect.hxx
// ./opencascade/ShapeFix_SequenceOfWireSegment.hxx
// ./opencascade/ShapeFix_Edge.hxx
// ./opencascade/ShapeFix_Solid.hxx
// ./opencascade/ShapeFix_SplitTool.hxx
// ./opencascade/ShapeFix_WireVertex.hxx
// ./opencascade/ShapeFix_Wireframe.hxx
// ./opencascade/ShapeFix_ComposeShell.hxx
// ./opencascade/ShapeFix_FixSmallFace.hxx
// ./opencascade/ShapeFix_DataMapOfShapeBox2d.hxx
// ./opencascade/ShapeFix.hxx
// ./opencascade/ShapeFix_Face.hxx
// ./opencascade/ShapeFix_Shell.hxx
// ./opencascade/ShapeFix_FixSmallSolid.hxx
// ./opencascade/ShapeFix_IntersectionTool.hxx
// ./opencascade/ShapeFix_Shape.hxx
// ./opencascade/ShapeFix_FreeBounds.hxx
// ./opencascade/ShapeFix_Root.hxx
// ./opencascade/ShapeFix_SplitCommonVertex.hxx
// ./opencascade/ShapeFix_Wire.hxx
// ./opencascade/ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d.hxx
// ./opencascade/ShapeFix_EdgeProjAux.hxx

// user-defined post
