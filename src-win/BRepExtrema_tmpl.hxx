#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Vertex.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Pnt.hxx>

// module includes
#include <BRepExtrema_DistShapeShape.hxx>
#include <BRepExtrema_SupportType.hxx>
#include <BRepExtrema_ExtPF.hxx>
#include <BRepExtrema_DistanceSS.hxx>
#include <BRepExtrema_SeqOfSolution.hxx>
#include <BRepExtrema_SolutionElem.hxx>
#include <BRepExtrema_ExtPC.hxx>
#include <BRepExtrema_TriangleSet.hxx>
#include <BRepExtrema_MapOfIntegerPackedMapOfInteger.hxx>
#include <BRepExtrema_SelfIntersection.hxx>
#include <BRepExtrema_ElementFilter.hxx>
#include <BRepExtrema_ShapeProximity.hxx>
#include <BRepExtrema_OverlapTool.hxx>
#include <BRepExtrema_ExtCF.hxx>
#include <BRepExtrema_ExtCC.hxx>
#include <BRepExtrema_Poly.hxx>
#include <BRepExtrema_ExtFF.hxx>
#include <BRepExtrema_UnCompatibleShape.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\BRepExtrema_DistShapeShape.hxx
// ./opencascade\BRepExtrema_SupportType.hxx
// ./opencascade\BRepExtrema_ExtPF.hxx
// ./opencascade\BRepExtrema_DistanceSS.hxx
// ./opencascade\BRepExtrema_SeqOfSolution.hxx
// ./opencascade\BRepExtrema_SolutionElem.hxx
// ./opencascade\BRepExtrema_ExtPC.hxx
// ./opencascade\BRepExtrema_TriangleSet.hxx
// ./opencascade\BRepExtrema_MapOfIntegerPackedMapOfInteger.hxx
// ./opencascade\BRepExtrema_SelfIntersection.hxx
// ./opencascade\BRepExtrema_ElementFilter.hxx
// ./opencascade\BRepExtrema_ShapeProximity.hxx
// ./opencascade\BRepExtrema_OverlapTool.hxx
// ./opencascade\BRepExtrema_ExtCF.hxx
// ./opencascade\BRepExtrema_ExtCC.hxx
// ./opencascade\BRepExtrema_Poly.hxx
// ./opencascade\BRepExtrema_ExtFF.hxx
// ./opencascade\BRepExtrema_UnCompatibleShape.hxx

// user-defined post
