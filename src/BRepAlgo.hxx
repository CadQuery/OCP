#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepAlgo_BooleanOperation.hxx>
#include <BRepAlgo_Fuse.hxx>
#include <BRepAlgo_Cut.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgo_Section.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_Tool.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_BooleanOperations.hxx>
#include <BRepAlgo_DSAccess.hxx>
#include <BRepAlgo_EdgeConnector.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <Adaptor3d_Curve.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <BRepAlgo_EdgeConnector.hxx>
#include <BRepAlgo_BooleanOperations.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>

// module includes
#include <BRepAlgo_DataMapOfShapeBoolean.hxx>
#include <BRepAlgo.hxx>
#include <BRepAlgo_Cut.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <BRepAlgo_DSAccess.hxx>
#include <BRepAlgo_EdgeConnector.hxx>
#include <BRepAlgo_BooleanOperations.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_DataMapIteratorOfDataMapOfShapeBoolean.hxx>
#include <BRepAlgo_SequenceOfSequenceOfInteger.hxx>
#include <BRepAlgo_BooleanOperation.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_Tool.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_CheckStatus.hxx>
#include <BRepAlgo_Section.hxx>
#include <BRepAlgo_DataMapOfShapeInterference.hxx>
#include <BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference.hxx>
#include <BRepAlgo_Fuse.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepAlgo_DataMapOfShapeBoolean.hxx
// ./opencascade/BRepAlgo.hxx
// ./opencascade/BRepAlgo_Cut.hxx
// ./opencascade/BRepAlgo_FaceRestrictor.hxx
// ./opencascade/BRepAlgo_Common.hxx
// ./opencascade/BRepAlgo_NormalProjection.hxx
// ./opencascade/BRepAlgo_DSAccess.hxx
// ./opencascade/BRepAlgo_EdgeConnector.hxx
// ./opencascade/BRepAlgo_BooleanOperations.hxx
// ./opencascade/BRepAlgo_AsDes.hxx
// ./opencascade/BRepAlgo_DataMapIteratorOfDataMapOfShapeBoolean.hxx
// ./opencascade/BRepAlgo_SequenceOfSequenceOfInteger.hxx
// ./opencascade/BRepAlgo_BooleanOperation.hxx
// ./opencascade/BRepAlgo_Loop.hxx
// ./opencascade/BRepAlgo_Tool.hxx
// ./opencascade/BRepAlgo_Image.hxx
// ./opencascade/BRepAlgo_CheckStatus.hxx
// ./opencascade/BRepAlgo_Section.hxx
// ./opencascade/BRepAlgo_DataMapOfShapeInterference.hxx
// ./opencascade/BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference.hxx
// ./opencascade/BRepAlgo_Fuse.hxx

// user-defined post
