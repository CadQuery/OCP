#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <BRepAlgo_AsDes.hxx>
#include <TopoDS_Face.hxx>
#include <BRepOffset_Offset.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <BRepOffset_Analyse.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <Geom_Curve.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepOffset_Analyse.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepOffset_Analyse.hxx>

// module includes
#include <BRepOffset_Inter2d.hxx>
#include <BRepOffset_Interval.hxx>
#include <BRepOffset_Analyse.hxx>
#include <BRepOffset_Tool.hxx>
#include <BRepOffset_MakeSimpleOffset.hxx>
#include <BRepOffset_ListIteratorOfListOfInterval.hxx>
#include <BRepOffset_MakeOffset.hxx>
#include <BRepOffset_Mode.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeOffset.hxx>
#include <BRepOffset.hxx>
#include <BRepOffset_DataMapOfShapeMapOfShape.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.hxx>
#include <BRepOffset_DataMapOfShapeOffset.hxx>
#include <BRepOffset_Type.hxx>
#include <BRepOffset_Offset.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <BRepOffset_Status.hxx>
#include <BRepOffset_SimpleOffset.hxx>
#include <BRepOffset_DataMapOfShapeListOfInterval.hxx>
#include <BRepOffset_ListOfInterval.hxx>
#include <BRepOffset_MakeLoops.hxx>
#include <BRepOffset_Error.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepOffset_Inter2d.hxx
// ./opencascade/BRepOffset_Interval.hxx
// ./opencascade/BRepOffset_Analyse.hxx
// ./opencascade/BRepOffset_Tool.hxx
// ./opencascade/BRepOffset_MakeSimpleOffset.hxx
// ./opencascade/BRepOffset_ListIteratorOfListOfInterval.hxx
// ./opencascade/BRepOffset_MakeOffset.hxx
// ./opencascade/BRepOffset_Mode.hxx
// ./opencascade/BRepOffset_DataMapIteratorOfDataMapOfShapeOffset.hxx
// ./opencascade/BRepOffset.hxx
// ./opencascade/BRepOffset_DataMapOfShapeMapOfShape.hxx
// ./opencascade/BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.hxx
// ./opencascade/BRepOffset_DataMapOfShapeOffset.hxx
// ./opencascade/BRepOffset_Type.hxx
// ./opencascade/BRepOffset_Offset.hxx
// ./opencascade/BRepOffset_Inter3d.hxx
// ./opencascade/BRepOffset_Status.hxx
// ./opencascade/BRepOffset_SimpleOffset.hxx
// ./opencascade/BRepOffset_DataMapOfShapeListOfInterval.hxx
// ./opencascade/BRepOffset_ListOfInterval.hxx
// ./opencascade/BRepOffset_MakeLoops.hxx
// ./opencascade/BRepOffset_Error.hxx
// ./opencascade/BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval.hxx

// user-defined post
