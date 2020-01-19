#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Dir.hxx>
#include <Draft_Modification.hxx>
#include <Draft_FaceInfo.hxx>
#include <Draft_EdgeInfo.hxx>
#include <Draft_VertexInfo.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <Draft_EdgeInfo.hxx>
#include <Draft.hxx>
#include <Draft_IndexedDataMapOfEdgeEdgeInfo.hxx>
#include <Draft_FaceInfo.hxx>
#include <Draft_VertexInfo.hxx>
#include <Draft_IndexedDataMapOfFaceFaceInfo.hxx>
#include <Draft_IndexedDataMapOfVertexVertexInfo.hxx>
#include <Draft_Modification.hxx>
#include <Draft_ErrorStatus.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Draft_EdgeInfo.hxx
// ./opencascade/Draft.hxx
// ./opencascade/Draft_IndexedDataMapOfEdgeEdgeInfo.hxx
// ./opencascade/Draft_FaceInfo.hxx
// ./opencascade/Draft_VertexInfo.hxx
// ./opencascade/Draft_IndexedDataMapOfFaceFaceInfo.hxx
// ./opencascade/Draft_IndexedDataMapOfVertexVertexInfo.hxx
// ./opencascade/Draft_Modification.hxx
// ./opencascade/Draft_ErrorStatus.hxx

// user-defined post
