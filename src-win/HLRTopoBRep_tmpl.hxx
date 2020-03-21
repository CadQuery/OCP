#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <HLRAlgo_Projector.hxx>
#include <Contap_Contour.hxx>
#include <HLRTopoBRep_Data.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Vertex.hxx>
#include <Contap_Point.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <HLRTopoBRep_Data.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Line.hxx>

// module includes
#include <HLRTopoBRep_ListOfVData.hxx>
#include <HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData.hxx>
#include <HLRTopoBRep_Data.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRTopoBRep_ListIteratorOfListOfVData.hxx>
#include <HLRTopoBRep_FaceData.hxx>
#include <HLRTopoBRep_DSFiller.hxx>
#include <HLRTopoBRep_DataMapOfShapeFaceData.hxx>
#include <HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData.hxx>
#include <HLRTopoBRep_MapOfShapeListOfVData.hxx>
#include <HLRTopoBRep_VData.hxx>
#include <HLRTopoBRep_FaceIsoLiner.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\HLRTopoBRep_ListOfVData.hxx
// ./opencascade\HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData.hxx
// ./opencascade\HLRTopoBRep_Data.hxx
// ./opencascade\HLRTopoBRep_OutLiner.hxx
// ./opencascade\HLRTopoBRep_ListIteratorOfListOfVData.hxx
// ./opencascade\HLRTopoBRep_FaceData.hxx
// ./opencascade\HLRTopoBRep_DSFiller.hxx
// ./opencascade\HLRTopoBRep_DataMapOfShapeFaceData.hxx
// ./opencascade\HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData.hxx
// ./opencascade\HLRTopoBRep_MapOfShapeListOfVData.hxx
// ./opencascade\HLRTopoBRep_VData.hxx
// ./opencascade\HLRTopoBRep_FaceIsoLiner.hxx

// user-defined post
