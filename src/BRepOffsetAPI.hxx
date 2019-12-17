#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <Law_Function.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>

// module includes
#include <BRepOffsetAPI_SequenceOfSequenceOfReal.hxx>
#include <BRepOffsetAPI_NormalProjection.hxx>
#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <BRepOffsetAPI_MakeEvolved.hxx>
#include <BRepOffsetAPI_MakeOffset.hxx>
#include <BRepOffsetAPI_MakePipe.hxx>
#include <BRepOffsetAPI_MiddlePath.hxx>
#include <BRepOffsetAPI_SequenceOfSequenceOfShape.hxx>
#include <BRepOffsetAPI_MakeOffsetShape.hxx>
#include <BRepOffsetAPI_FindContigousEdges.hxx>
#include <BRepOffsetAPI_MakePipeShell.hxx>
#include <BRepOffsetAPI_Sewing.hxx>
#include <BRepOffsetAPI_MakeDraft.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>
#include <BRepOffsetAPI_MakeFilling.hxx>
#include <BRepOffsetAPI_DraftAngle.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfReal.hxx
// ./opencascade/BRepOffsetAPI_NormalProjection.hxx
// ./opencascade/BRepOffsetAPI_MakeThickSolid.hxx
// ./opencascade/BRepOffsetAPI_MakeEvolved.hxx
// ./opencascade/BRepOffsetAPI_MakeOffset.hxx
// ./opencascade/BRepOffsetAPI_MakePipe.hxx
// ./opencascade/BRepOffsetAPI_MiddlePath.hxx
// ./opencascade/BRepOffsetAPI_SequenceOfSequenceOfShape.hxx
// ./opencascade/BRepOffsetAPI_MakeOffsetShape.hxx
// ./opencascade/BRepOffsetAPI_FindContigousEdges.hxx
// ./opencascade/BRepOffsetAPI_MakePipeShell.hxx
// ./opencascade/BRepOffsetAPI_Sewing.hxx
// ./opencascade/BRepOffsetAPI_MakeDraft.hxx
// ./opencascade/BRepOffsetAPI_ThruSections.hxx
// ./opencascade/BRepOffsetAPI_MakeFilling.hxx
// ./opencascade/BRepOffsetAPI_DraftAngle.hxx

// user-defined post
