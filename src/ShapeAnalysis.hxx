#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>
#include <gp_Pln.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Pnt.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Bnd_Box2d.hxx>
#include <Standard_TypeMismatch.hxx>
#include <gp_XY.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Surface.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <ShapeAnalysis_Geom.hxx>
#include <ShapeAnalysis_Curve.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeAnalysis_Edge.hxx>
#include <ShapeAnalysis_Wire.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <ShapeAnalysis_WireVertex.hxx>
#include <ShapeAnalysis_CheckSmallFace.hxx>
#include <ShapeAnalysis_Shell.hxx>
#include <ShapeAnalysis_ShapeTolerance.hxx>
#include <ShapeAnalysis_ShapeContents.hxx>
#include <ShapeAnalysis_FreeBounds.hxx>
#include <ShapeAnalysis_FreeBoundData.hxx>
#include <ShapeAnalysis_FreeBoundsProperties.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeAnalysis_TransferParametersProj.hxx>
#include <TopoDS_Compound.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Wire.hxx>

// module includes
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeAnalysis_CheckSmallFace.hxx>
#include <ShapeAnalysis_Geom.hxx>
#include <ShapeAnalysis_Edge.hxx>
#include <ShapeAnalysis_ShapeContents.hxx>
#include <ShapeAnalysis_FreeBoundsProperties.hxx>
#include <ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.hxx>
#include <ShapeAnalysis_Curve.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeAnalysis_FreeBoundData.hxx>
#include <ShapeAnalysis_FreeBounds.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <ShapeAnalysis_Wire.hxx>
#include <ShapeAnalysis.hxx>
#include <ShapeAnalysis_Shell.hxx>
#include <ShapeAnalysis_TransferParametersProj.hxx>
#include <ShapeAnalysis_DataMapOfShapeListOfReal.hxx>
#include <ShapeAnalysis_BoxBndTree.hxx>
#include <ShapeAnalysis_HSequenceOfFreeBounds.hxx>
#include <ShapeAnalysis_SequenceOfFreeBounds.hxx>
#include <ShapeAnalysis_WireVertex.hxx>
#include <ShapeAnalysis_ShapeTolerance.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/ShapeAnalysis_Surface.hxx
// ./opencascade/ShapeAnalysis_CheckSmallFace.hxx
// ./opencascade/ShapeAnalysis_Geom.hxx
// ./opencascade/ShapeAnalysis_Edge.hxx
// ./opencascade/ShapeAnalysis_ShapeContents.hxx
// ./opencascade/ShapeAnalysis_FreeBoundsProperties.hxx
// ./opencascade/ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.hxx
// ./opencascade/ShapeAnalysis_Curve.hxx
// ./opencascade/ShapeAnalysis_TransferParameters.hxx
// ./opencascade/ShapeAnalysis_FreeBoundData.hxx
// ./opencascade/ShapeAnalysis_FreeBounds.hxx
// ./opencascade/ShapeAnalysis_WireOrder.hxx
// ./opencascade/ShapeAnalysis_Wire.hxx
// ./opencascade/ShapeAnalysis.hxx
// ./opencascade/ShapeAnalysis_Shell.hxx
// ./opencascade/ShapeAnalysis_TransferParametersProj.hxx
// ./opencascade/ShapeAnalysis_DataMapOfShapeListOfReal.hxx
// ./opencascade/ShapeAnalysis_BoxBndTree.hxx
// ./opencascade/ShapeAnalysis_HSequenceOfFreeBounds.hxx
// ./opencascade/ShapeAnalysis_SequenceOfFreeBounds.hxx
// ./opencascade/ShapeAnalysis_WireVertex.hxx
// ./opencascade/ShapeAnalysis_ShapeTolerance.hxx

// user-defined post
