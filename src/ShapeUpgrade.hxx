#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeUpgrade_SplitSurface.hxx>
#include <ShapeUpgrade_WireDivide.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <ShapeUpgrade_Tool.hxx>
#include <ShapeUpgrade_EdgeDivide.hxx>
#include <ShapeUpgrade_ClosedEdgeDivide.hxx>
#include <ShapeUpgrade_WireDivide.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeUpgrade_ClosedFaceDivide.hxx>
#include <ShapeUpgrade_FaceDivideArea.hxx>
#include <ShapeUpgrade_ShapeDivide.hxx>
#include <ShapeUpgrade_ShapeDivideArea.hxx>
#include <ShapeUpgrade_ShapeDivideContinuity.hxx>
#include <ShapeUpgrade_ShapeDivideAngle.hxx>
#include <ShapeUpgrade_ShapeConvertToBezier.hxx>
#include <ShapeUpgrade_ShapeDivideClosed.hxx>
#include <ShapeUpgrade_ShapeDivideClosedEdges.hxx>
#include <ShapeUpgrade_SplitCurve.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <ShapeUpgrade_SplitCurve2dContinuity.hxx>
#include <ShapeUpgrade_ConvertCurve2dToBezier.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve3dContinuity.hxx>
#include <ShapeUpgrade_ConvertCurve3dToBezier.hxx>
#include <ShapeUpgrade_SplitSurface.hxx>
#include <ShapeUpgrade_SplitSurfaceContinuity.hxx>
#include <ShapeUpgrade_SplitSurfaceAngle.hxx>
#include <ShapeUpgrade_ConvertSurfaceToBezierBasis.hxx>
#include <ShapeUpgrade_SplitSurfaceArea.hxx>
#include <ShapeUpgrade_ShellSewing.hxx>
#include <ShapeUpgrade_FixSmallCurves.hxx>
#include <ShapeUpgrade_FixSmallBezierCurves.hxx>
#include <ShapeUpgrade_RemoveLocations.hxx>
#include <ShapeUpgrade_RemoveInternalWires.hxx>
#include <ShapeUpgrade_UnifySameDomain.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <Geom_Surface.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <Message_Msg.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <ShapeUpgrade_EdgeDivide.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeUpgrade_FixSmallCurves.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <Message_Msg.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeBuild_ReShape.hxx>

// module includes
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <ShapeUpgrade_ShapeDivideClosed.hxx>
#include <ShapeUpgrade_ClosedEdgeDivide.hxx>
#include <ShapeUpgrade_Tool.hxx>
#include <ShapeUpgrade_ShapeDivideClosedEdges.hxx>
#include <ShapeUpgrade_SplitSurfaceContinuity.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeUpgrade_ConvertCurve3dToBezier.hxx>
#include <ShapeUpgrade_ShapeDivideArea.hxx>
#include <ShapeUpgrade.hxx>
#include <ShapeUpgrade_SplitCurve3dContinuity.hxx>
#include <ShapeUpgrade_ClosedFaceDivide.hxx>
#include <ShapeUpgrade_SplitCurve2dContinuity.hxx>
#include <ShapeUpgrade_ConvertSurfaceToBezierBasis.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitSurface.hxx>
#include <ShapeUpgrade_FixSmallBezierCurves.hxx>
#include <ShapeUpgrade_ConvertCurve2dToBezier.hxx>
#include <ShapeUpgrade_RemoveInternalWires.hxx>
#include <ShapeUpgrade_SplitSurfaceArea.hxx>
#include <ShapeUpgrade_ShapeConvertToBezier.hxx>
#include <ShapeUpgrade_ShapeDivideContinuity.hxx>
#include <ShapeUpgrade_FaceDivideArea.hxx>
#include <ShapeUpgrade_RemoveLocations.hxx>
#include <ShapeUpgrade_ShapeDivideAngle.hxx>
#include <ShapeUpgrade_WireDivide.hxx>
#include <ShapeUpgrade_ShapeDivide.hxx>
#include <ShapeUpgrade_SplitSurfaceAngle.hxx>
#include <ShapeUpgrade_SplitCurve.hxx>
#include <ShapeUpgrade_EdgeDivide.hxx>
#include <ShapeUpgrade_FixSmallCurves.hxx>
#include <ShapeUpgrade_UnifySameDomain.hxx>
#include <ShapeUpgrade_ShellSewing.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/ShapeUpgrade_SplitCurve2d.hxx
// ./opencascade/ShapeUpgrade_ShapeDivideClosed.hxx
// ./opencascade/ShapeUpgrade_ClosedEdgeDivide.hxx
// ./opencascade/ShapeUpgrade_Tool.hxx
// ./opencascade/ShapeUpgrade_ShapeDivideClosedEdges.hxx
// ./opencascade/ShapeUpgrade_SplitSurfaceContinuity.hxx
// ./opencascade/ShapeUpgrade_FaceDivide.hxx
// ./opencascade/ShapeUpgrade_ConvertCurve3dToBezier.hxx
// ./opencascade/ShapeUpgrade_ShapeDivideArea.hxx
// ./opencascade/ShapeUpgrade.hxx
// ./opencascade/ShapeUpgrade_SplitCurve3dContinuity.hxx
// ./opencascade/ShapeUpgrade_ClosedFaceDivide.hxx
// ./opencascade/ShapeUpgrade_SplitCurve2dContinuity.hxx
// ./opencascade/ShapeUpgrade_ConvertSurfaceToBezierBasis.hxx
// ./opencascade/ShapeUpgrade_SplitCurve3d.hxx
// ./opencascade/ShapeUpgrade_SplitSurface.hxx
// ./opencascade/ShapeUpgrade_FixSmallBezierCurves.hxx
// ./opencascade/ShapeUpgrade_ConvertCurve2dToBezier.hxx
// ./opencascade/ShapeUpgrade_RemoveInternalWires.hxx
// ./opencascade/ShapeUpgrade_SplitSurfaceArea.hxx
// ./opencascade/ShapeUpgrade_ShapeConvertToBezier.hxx
// ./opencascade/ShapeUpgrade_ShapeDivideContinuity.hxx
// ./opencascade/ShapeUpgrade_FaceDivideArea.hxx
// ./opencascade/ShapeUpgrade_RemoveLocations.hxx
// ./opencascade/ShapeUpgrade_ShapeDivideAngle.hxx
// ./opencascade/ShapeUpgrade_WireDivide.hxx
// ./opencascade/ShapeUpgrade_ShapeDivide.hxx
// ./opencascade/ShapeUpgrade_SplitSurfaceAngle.hxx
// ./opencascade/ShapeUpgrade_SplitCurve.hxx
// ./opencascade/ShapeUpgrade_EdgeDivide.hxx
// ./opencascade/ShapeUpgrade_FixSmallCurves.hxx
// ./opencascade/ShapeUpgrade_UnifySameDomain.hxx
// ./opencascade/ShapeUpgrade_ShellSewing.hxx

// user-defined post
