#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Solid.hxx>
#include <BRep_CurveRepresentation.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepCheck_Result.hxx>
#include <BRepCheck_Vertex.hxx>
#include <BRepCheck_Edge.hxx>
#include <BRepCheck_Wire.hxx>
#include <BRepCheck_Face.hxx>
#include <BRepCheck_Shell.hxx>
#include <BRepCheck_Solid.hxx>
#include <BRepCheck_Analyzer.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <Standard_NullObject.hxx>

// module includes
#include <BRepCheck_Vertex.hxx>
#include <BRepCheck_DataMapOfShapeResult.hxx>
#include <BRepCheck_DataMapIteratorOfDataMapOfShapeResult.hxx>
#include <BRepCheck_DataMapOfShapeListOfStatus.hxx>
#include <BRepCheck_Status.hxx>
#include <BRepCheck_Solid.hxx>
#include <BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus.hxx>
#include <BRepCheck_Edge.hxx>
#include <BRepCheck.hxx>
#include <BRepCheck_ListOfStatus.hxx>
#include <BRepCheck_ListIteratorOfListOfStatus.hxx>
#include <BRepCheck_Shell.hxx>
#include <BRepCheck_Result.hxx>
#include <BRepCheck_Face.hxx>
#include <BRepCheck_Wire.hxx>
#include <BRepCheck_Analyzer.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepCheck_Vertex.hxx
// ./opencascade/BRepCheck_DataMapOfShapeResult.hxx
// ./opencascade/BRepCheck_DataMapIteratorOfDataMapOfShapeResult.hxx
// ./opencascade/BRepCheck_DataMapOfShapeListOfStatus.hxx
// ./opencascade/BRepCheck_Status.hxx
// ./opencascade/BRepCheck_Solid.hxx
// ./opencascade/BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus.hxx
// ./opencascade/BRepCheck_Edge.hxx
// ./opencascade/BRepCheck.hxx
// ./opencascade/BRepCheck_ListOfStatus.hxx
// ./opencascade/BRepCheck_ListIteratorOfListOfStatus.hxx
// ./opencascade/BRepCheck_Shell.hxx
// ./opencascade/BRepCheck_Result.hxx
// ./opencascade/BRepCheck_Face.hxx
// ./opencascade/BRepCheck_Wire.hxx
// ./opencascade/BRepCheck_Analyzer.hxx

// user-defined post
