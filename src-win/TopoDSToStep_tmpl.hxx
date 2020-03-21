#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StepShape_FacetedBrep.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shell.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Solid.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <TopoDSToStep_Root.hxx>
#include <TopoDSToStep_MakeManifoldSolidBrep.hxx>
#include <TopoDSToStep_MakeBrepWithVoids.hxx>
#include <TopoDSToStep_MakeFacetedBrep.hxx>
#include <TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx>
#include <TopoDSToStep_MakeShellBasedSurfaceModel.hxx>
#include <TopoDSToStep_MakeGeometricCurveSet.hxx>
#include <TopoDSToStep_Builder.hxx>
#include <TopoDSToStep_WireframeBuilder.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <TopoDSToStep_FacetedTool.hxx>
#include <TopoDSToStep_MakeStepFace.hxx>
#include <TopoDSToStep_MakeStepWire.hxx>
#include <TopoDSToStep_MakeStepEdge.hxx>
#include <TopoDSToStep_MakeStepVertex.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Solid.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Solid.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shell.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Solid.hxx>
#include <StepShape_GeometricCurveSet.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <TopoDSToStep_Root.hxx>
#include <TopoDSToStep_MakeFacetedBrep.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <TopoDSToStep_MakeWireError.hxx>
#include <TopoDSToStep_WireframeBuilder.hxx>
#include <TopoDSToStep_MakeStepEdge.hxx>
#include <TopoDSToStep_MakeVertexError.hxx>
#include <TopoDSToStep.hxx>
#include <TopoDSToStep_MakeBrepWithVoids.hxx>
#include <TopoDSToStep_MakeStepWire.hxx>
#include <TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx>
#include <TopoDSToStep_MakeStepVertex.hxx>
#include <TopoDSToStep_BuilderError.hxx>
#include <TopoDSToStep_MakeManifoldSolidBrep.hxx>
#include <TopoDSToStep_MakeGeometricCurveSet.hxx>
#include <TopoDSToStep_MakeShellBasedSurfaceModel.hxx>
#include <TopoDSToStep_MakeFaceError.hxx>
#include <TopoDSToStep_MakeEdgeError.hxx>
#include <TopoDSToStep_MakeStepFace.hxx>
#include <TopoDSToStep_FacetedError.hxx>
#include <TopoDSToStep_Builder.hxx>
#include <TopoDSToStep_FacetedTool.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\TopoDSToStep_Root.hxx
// ./opencascade\TopoDSToStep_MakeFacetedBrep.hxx
// ./opencascade\TopoDSToStep_Tool.hxx
// ./opencascade\TopoDSToStep_MakeWireError.hxx
// ./opencascade\TopoDSToStep_WireframeBuilder.hxx
// ./opencascade\TopoDSToStep_MakeStepEdge.hxx
// ./opencascade\TopoDSToStep_MakeVertexError.hxx
// ./opencascade\TopoDSToStep.hxx
// ./opencascade\TopoDSToStep_MakeBrepWithVoids.hxx
// ./opencascade\TopoDSToStep_MakeStepWire.hxx
// ./opencascade\TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx
// ./opencascade\TopoDSToStep_MakeStepVertex.hxx
// ./opencascade\TopoDSToStep_BuilderError.hxx
// ./opencascade\TopoDSToStep_MakeManifoldSolidBrep.hxx
// ./opencascade\TopoDSToStep_MakeGeometricCurveSet.hxx
// ./opencascade\TopoDSToStep_MakeShellBasedSurfaceModel.hxx
// ./opencascade\TopoDSToStep_MakeFaceError.hxx
// ./opencascade\TopoDSToStep_MakeEdgeError.hxx
// ./opencascade\TopoDSToStep_MakeStepFace.hxx
// ./opencascade\TopoDSToStep_FacetedError.hxx
// ./opencascade\TopoDSToStep_Builder.hxx
// ./opencascade\TopoDSToStep_FacetedTool.hxx

// user-defined post
