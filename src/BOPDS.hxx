#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <BOPDS_PaveBlock.hxx>
#include <BOPDS_DS.hxx>
#include <BOPDS_IteratorSI.hxx>
#include <BOPDS_DS.hxx>
#include <BOPDS_DS.hxx>
#include <IntTools_Context.hxx>
#include <BOPDS_Iterator.hxx>
#include <BOPDS_PaveBlock.hxx>

// module includes
#include <BOPDS_ListOfPave.hxx>
#include <BOPDS_FaceInfo.hxx>
#include <BOPDS_IndexRange.hxx>
#include <BOPDS_MapOfPair.hxx>
#include <BOPDS_VectorOfShapeInfo.hxx>
#include <BOPDS_VectorOfInterfVE.hxx>
#include <BOPDS_PaveMapHasher.hxx>
#include <BOPDS_DataMapOfPaveBlockListOfPaveBlock.hxx>
#include <BOPDS_MapOfCommonBlock.hxx>
#include <BOPDS_VectorOfInterfVF.hxx>
#include <BOPDS_Point.hxx>
#include <BOPDS_MapOfPave.hxx>
#include <BOPDS_VectorOfInterfEZ.hxx>
#include <BOPDS_MapOfPaveBlock.hxx>
#include <BOPDS_Interf.hxx>
#include <BOPDS_Pair.hxx>
#include <BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks.hxx>
#include <BOPDS_VectorOfInterfEF.hxx>
#include <BOPDS_VectorOfIndexRange.hxx>
#include <BOPDS_VectorOfInterfFF.hxx>
#include <BOPDS_CoupleOfPaveBlocks.hxx>
#include <BOPDS_PaveBlock.hxx>
#include <BOPDS_CommonBlock.hxx>
#include <BOPDS_VectorOfCurve.hxx>
#include <BOPDS_PDS.hxx>
#include <BOPDS_Curve.hxx>
#include <BOPDS_DataMapOfIntegerListOfPaveBlock.hxx>
#include <BOPDS_IndexedDataMapOfPaveBlockListOfInteger.hxx>
#include <BOPDS_VectorOfFaceInfo.hxx>
#include <BOPDS_PairMapHasher.hxx>
#include <BOPDS_Pave.hxx>
#include <BOPDS_VectorOfInterfFZ.hxx>
#include <BOPDS_IteratorSI.hxx>
#include <BOPDS_IndexedMapOfPaveBlock.hxx>
#include <BOPDS_VectorOfInterfEE.hxx>
#include <BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock.hxx>
#include <BOPDS_VectorOfVectorOfPair.hxx>
#include <BOPDS_PIteratorSI.hxx>
#include <BOPDS_VectorOfPoint.hxx>
#include <BOPDS_VectorOfPave.hxx>
#include <BOPDS_VectorOfInterfVV.hxx>
#include <BOPDS_SubIterator.hxx>
#include <BOPDS_Iterator.hxx>
#include <BOPDS_VectorOfInterfVZ.hxx>
#include <BOPDS_Tools.hxx>
#include <BOPDS_ShapeInfo.hxx>
#include <BOPDS_DataMapOfShapeCoupleOfPaveBlocks.hxx>
#include <BOPDS_VectorOfListOfPaveBlock.hxx>
#include <BOPDS_PIterator.hxx>
#include <BOPDS_VectorOfPair.hxx>
#include <BOPDS_DataMapOfPaveBlockCommonBlock.hxx>
#include <BOPDS_ListOfPaveBlock.hxx>
#include <BOPDS_DataMapOfPaveBlockListOfInteger.hxx>
#include <BOPDS_VectorOfInterfZZ.hxx>
#include <BOPDS_DS.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BOPDS_ListOfPave.hxx
// ./opencascade/BOPDS_FaceInfo.hxx
// ./opencascade/BOPDS_IndexRange.hxx
// ./opencascade/BOPDS_MapOfPair.hxx
// ./opencascade/BOPDS_VectorOfShapeInfo.hxx
// ./opencascade/BOPDS_VectorOfInterfVE.hxx
// ./opencascade/BOPDS_PaveMapHasher.hxx
// ./opencascade/BOPDS_DataMapOfPaveBlockListOfPaveBlock.hxx
// ./opencascade/BOPDS_MapOfCommonBlock.hxx
// ./opencascade/BOPDS_VectorOfInterfVF.hxx
// ./opencascade/BOPDS_Point.hxx
// ./opencascade/BOPDS_MapOfPave.hxx
// ./opencascade/BOPDS_VectorOfInterfEZ.hxx
// ./opencascade/BOPDS_MapOfPaveBlock.hxx
// ./opencascade/BOPDS_Interf.hxx
// ./opencascade/BOPDS_Pair.hxx
// ./opencascade/BOPDS_IndexedDataMapOfShapeCoupleOfPaveBlocks.hxx
// ./opencascade/BOPDS_VectorOfInterfEF.hxx
// ./opencascade/BOPDS_VectorOfIndexRange.hxx
// ./opencascade/BOPDS_VectorOfInterfFF.hxx
// ./opencascade/BOPDS_CoupleOfPaveBlocks.hxx
// ./opencascade/BOPDS_PaveBlock.hxx
// ./opencascade/BOPDS_CommonBlock.hxx
// ./opencascade/BOPDS_VectorOfCurve.hxx
// ./opencascade/BOPDS_PDS.hxx
// ./opencascade/BOPDS_Curve.hxx
// ./opencascade/BOPDS_DataMapOfIntegerListOfPaveBlock.hxx
// ./opencascade/BOPDS_IndexedDataMapOfPaveBlockListOfInteger.hxx
// ./opencascade/BOPDS_VectorOfFaceInfo.hxx
// ./opencascade/BOPDS_PairMapHasher.hxx
// ./opencascade/BOPDS_Pave.hxx
// ./opencascade/BOPDS_VectorOfInterfFZ.hxx
// ./opencascade/BOPDS_IteratorSI.hxx
// ./opencascade/BOPDS_IndexedMapOfPaveBlock.hxx
// ./opencascade/BOPDS_VectorOfInterfEE.hxx
// ./opencascade/BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock.hxx
// ./opencascade/BOPDS_VectorOfVectorOfPair.hxx
// ./opencascade/BOPDS_PIteratorSI.hxx
// ./opencascade/BOPDS_VectorOfPoint.hxx
// ./opencascade/BOPDS_VectorOfPave.hxx
// ./opencascade/BOPDS_VectorOfInterfVV.hxx
// ./opencascade/BOPDS_SubIterator.hxx
// ./opencascade/BOPDS_Iterator.hxx
// ./opencascade/BOPDS_VectorOfInterfVZ.hxx
// ./opencascade/BOPDS_Tools.hxx
// ./opencascade/BOPDS_ShapeInfo.hxx
// ./opencascade/BOPDS_DataMapOfShapeCoupleOfPaveBlocks.hxx
// ./opencascade/BOPDS_VectorOfListOfPaveBlock.hxx
// ./opencascade/BOPDS_PIterator.hxx
// ./opencascade/BOPDS_VectorOfPair.hxx
// ./opencascade/BOPDS_DataMapOfPaveBlockCommonBlock.hxx
// ./opencascade/BOPDS_ListOfPaveBlock.hxx
// ./opencascade/BOPDS_DataMapOfPaveBlockListOfInteger.hxx
// ./opencascade/BOPDS_VectorOfInterfZZ.hxx
// ./opencascade/BOPDS_DS.hxx

// user-defined post
