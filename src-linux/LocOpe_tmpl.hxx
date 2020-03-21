#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <gp_Pln.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Face.hxx>
#include <Standard_NullObject.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <gp_Ax1.hxx>
#include <gp_Circ.hxx>
#include <LocOpe_PntFace.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <LocOpe_SplitShape.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <LocOpe_Spliter.hxx>
#include <LocOpe_Generator.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <LocOpe_GluedShape.hxx>
#include <LocOpe_Prism.hxx>
#include <LocOpe_Revol.hxx>
#include <LocOpe_Pipe.hxx>
#include <LocOpe_DPrism.hxx>
#include <LocOpe_LinearForm.hxx>
#include <LocOpe_RevolutionForm.hxx>
#include <LocOpe_Gluer.hxx>
#include <LocOpe_FindEdges.hxx>
#include <LocOpe_FindEdgesInFace.hxx>
#include <LocOpe_PntFace.hxx>
#include <LocOpe_CurveShapeIntersector.hxx>
#include <LocOpe_CSIntersector.hxx>
#include <LocOpe_BuildShape.hxx>
#include <LocOpe_SplitDrafts.hxx>
#include <LocOpe_BuildWires.hxx>
#include <StdFail_NotDone.hxx>
#include <LocOpe_WiresOnShape.hxx>

// module includes
#include <LocOpe_WiresOnShape.hxx>
#include <LocOpe_Operation.hxx>
#include <LocOpe_BuildShape.hxx>
#include <LocOpe_SequenceOfCirc.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <LocOpe_DataMapOfShapePnt.hxx>
#include <LocOpe_Gluer.hxx>
#include <LocOpe_Prism.hxx>
#include <LocOpe_SplitDrafts.hxx>
#include <LocOpe_FindEdges.hxx>
#include <LocOpe_Pipe.hxx>
#include <LocOpe_SplitShape.hxx>
#include <LocOpe_DPrism.hxx>
#include <LocOpe_LinearForm.hxx>
#include <LocOpe_PntFace.hxx>
#include <LocOpe_FindEdgesInFace.hxx>
#include <LocOpe_RevolutionForm.hxx>
#include <LocOpe_Revol.hxx>
#include <LocOpe_SequenceOfLin.hxx>
#include <LocOpe_GluedShape.hxx>
#include <LocOpe_Generator.hxx>
#include <LocOpe_Spliter.hxx>
#include <LocOpe_SequenceOfPntFace.hxx>
#include <LocOpe_CurveShapeIntersector.hxx>
#include <LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx>
#include <LocOpe_CSIntersector.hxx>
#include <LocOpe.hxx>
#include <LocOpe_BuildWires.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/LocOpe_WiresOnShape.hxx
// ./opencascade/LocOpe_Operation.hxx
// ./opencascade/LocOpe_BuildShape.hxx
// ./opencascade/LocOpe_SequenceOfCirc.hxx
// ./opencascade/LocOpe_GeneratedShape.hxx
// ./opencascade/LocOpe_DataMapOfShapePnt.hxx
// ./opencascade/LocOpe_Gluer.hxx
// ./opencascade/LocOpe_Prism.hxx
// ./opencascade/LocOpe_SplitDrafts.hxx
// ./opencascade/LocOpe_FindEdges.hxx
// ./opencascade/LocOpe_Pipe.hxx
// ./opencascade/LocOpe_SplitShape.hxx
// ./opencascade/LocOpe_DPrism.hxx
// ./opencascade/LocOpe_LinearForm.hxx
// ./opencascade/LocOpe_PntFace.hxx
// ./opencascade/LocOpe_FindEdgesInFace.hxx
// ./opencascade/LocOpe_RevolutionForm.hxx
// ./opencascade/LocOpe_Revol.hxx
// ./opencascade/LocOpe_SequenceOfLin.hxx
// ./opencascade/LocOpe_GluedShape.hxx
// ./opencascade/LocOpe_Generator.hxx
// ./opencascade/LocOpe_Spliter.hxx
// ./opencascade/LocOpe_SequenceOfPntFace.hxx
// ./opencascade/LocOpe_CurveShapeIntersector.hxx
// ./opencascade/LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx
// ./opencascade/LocOpe_CSIntersector.hxx
// ./opencascade/LocOpe.hxx
// ./opencascade/LocOpe_BuildWires.hxx

// user-defined post
