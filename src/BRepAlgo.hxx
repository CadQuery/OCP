#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <Adaptor3d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
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
#include <BRepAlgo_NormalProjection.hxx>

// module includes
#include <BRepAlgo_BooleanOperation.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <BRepAlgo_Cut.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_Section.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_CheckStatus.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_Fuse.hxx>
#include <BRepAlgo.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_Tool.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepAlgo_BooleanOperation.hxx
// ./opencascade/BRepAlgo_NormalProjection.hxx
// ./opencascade/BRepAlgo_Cut.hxx
// ./opencascade/BRepAlgo_Loop.hxx
// ./opencascade/BRepAlgo_Section.hxx
// ./opencascade/BRepAlgo_AsDes.hxx
// ./opencascade/BRepAlgo_CheckStatus.hxx
// ./opencascade/BRepAlgo_FaceRestrictor.hxx
// ./opencascade/BRepAlgo_Fuse.hxx
// ./opencascade/BRepAlgo.hxx
// ./opencascade/BRepAlgo_Common.hxx
// ./opencascade/BRepAlgo_Image.hxx
// ./opencascade/BRepAlgo_Tool.hxx

// user-defined post
