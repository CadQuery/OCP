#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Message_ProgressIndicator.hxx>
#include <Message_ProgressIndicator.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <TopTools_OrientedShapeMapHasher.hxx>
#include <TopTools_LocationSet.hxx>
#include <TopTools_ShapeSet.hxx>
#include <TopTools_LocationSet.hxx>
#include <Standard_Mutex.hxx>

// module includes
#include <TopTools_MapIteratorOfMapOfOrientedShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape.hxx>
#include <TopTools_DataMapOfShapeInteger.hxx>
#include <TopTools_IndexedDataMapOfShapeAddress.hxx>
#include <TopTools_LocationSet.hxx>
#include <TopTools_IndexedDataMapOfShapeReal.hxx>
#include <TopTools_MapOfOrientedShape.hxx>
#include <TopTools_IndexedMapOfShape.hxx>
#include <TopTools_DataMapOfIntegerShape.hxx>
#include <TopTools_IndexedMapOfOrientedShape.hxx>
#include <TopTools_Array2OfShape.hxx>
#include <TopTools_ShapeSet.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeInteger.hxx>
#include <TopTools_SequenceOfShape.hxx>
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <TopTools_DataMapOfIntegerListOfShape.hxx>
#include <TopTools_HSequenceOfShape.hxx>
#include <TopTools.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape.hxx>
#include <TopTools_ListIteratorOfListOfShape.hxx>
#include <TopTools_HArray1OfListOfShape.hxx>
#include <TopTools_DataMapOfShapeReal.hxx>
#include <TopTools_DataMapOfOrientedShapeInteger.hxx>
#include <TopTools_Array1OfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeReal.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx>
#include <TopTools_DataMapOfShapeSequenceOfShape.hxx>
#include <TopTools_Array1OfListOfShape.hxx>
#include <TopTools_HArray1OfShape.hxx>
#include <TopTools_MapOfShape.hxx>
#include <TopTools_DataMapOfShapeShape.hxx>
#include <TopTools_ListOfListOfShape.hxx>
#include <TopTools_OrientedShapeMapHasher.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfShapeShape.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TopTools_DataMapOfShapeBox.hxx>
#include <TopTools_HArray2OfShape.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfIntegerShape.hxx>
#include <TopTools_IndexedDataMapOfShapeShape.hxx>
#include <TopTools_DataMapOfShapeListOfInteger.hxx>
#include <TopTools_LocationSetPtr.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <TopTools_DataMapOfOrientedShapeShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape.hxx>
#include <TopTools_MutexForShapeProvider.hxx>
#include <TopTools_MapIteratorOfMapOfShape.hxx>
#include <TopTools_DataMapIteratorOfDataMapOfOrientedShapeInteger.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/TopTools_MapIteratorOfMapOfOrientedShape.hxx
// ./opencascade/TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger.hxx
// ./opencascade/TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape.hxx
// ./opencascade/TopTools_DataMapOfShapeInteger.hxx
// ./opencascade/TopTools_IndexedDataMapOfShapeAddress.hxx
// ./opencascade/TopTools_LocationSet.hxx
// ./opencascade/TopTools_IndexedDataMapOfShapeReal.hxx
// ./opencascade/TopTools_MapOfOrientedShape.hxx
// ./opencascade/TopTools_IndexedMapOfShape.hxx
// ./opencascade/TopTools_DataMapOfIntegerShape.hxx
// ./opencascade/TopTools_IndexedMapOfOrientedShape.hxx
// ./opencascade/TopTools_Array2OfShape.hxx
// ./opencascade/TopTools_ShapeSet.hxx
// ./opencascade/TopTools_DataMapIteratorOfDataMapOfShapeInteger.hxx
// ./opencascade/TopTools_SequenceOfShape.hxx
// ./opencascade/TopTools_IndexedDataMapOfShapeListOfShape.hxx
// ./opencascade/TopTools_DataMapOfIntegerListOfShape.hxx
// ./opencascade/TopTools_HSequenceOfShape.hxx
// ./opencascade/TopTools.hxx
// ./opencascade/TopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape.hxx
// ./opencascade/TopTools_ListIteratorOfListOfShape.hxx
// ./opencascade/TopTools_HArray1OfListOfShape.hxx
// ./opencascade/TopTools_DataMapOfShapeReal.hxx
// ./opencascade/TopTools_DataMapOfOrientedShapeInteger.hxx
// ./opencascade/TopTools_Array1OfShape.hxx
// ./opencascade/TopTools_DataMapIteratorOfDataMapOfShapeReal.hxx
// ./opencascade/TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.hxx
// ./opencascade/TopTools_DataMapOfShapeSequenceOfShape.hxx
// ./opencascade/TopTools_Array1OfListOfShape.hxx
// ./opencascade/TopTools_HArray1OfShape.hxx
// ./opencascade/TopTools_MapOfShape.hxx
// ./opencascade/TopTools_DataMapOfShapeShape.hxx
// ./opencascade/TopTools_ListOfListOfShape.hxx
// ./opencascade/TopTools_OrientedShapeMapHasher.hxx
// ./opencascade/TopTools_DataMapIteratorOfDataMapOfShapeShape.hxx
// ./opencascade/TopTools_ListOfShape.hxx
// ./opencascade/TopTools_DataMapOfShapeBox.hxx
// ./opencascade/TopTools_HArray2OfShape.hxx
// ./opencascade/TopTools_DataMapOfShapeListOfShape.hxx
// ./opencascade/TopTools_DataMapIteratorOfDataMapOfIntegerShape.hxx
// ./opencascade/TopTools_IndexedDataMapOfShapeShape.hxx
// ./opencascade/TopTools_DataMapOfShapeListOfInteger.hxx
// ./opencascade/TopTools_LocationSetPtr.hxx
// ./opencascade/TopTools_ShapeMapHasher.hxx
// ./opencascade/TopTools_DataMapOfOrientedShapeShape.hxx
// ./opencascade/TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape.hxx
// ./opencascade/TopTools_MutexForShapeProvider.hxx
// ./opencascade/TopTools_MapIteratorOfMapOfShape.hxx
// ./opencascade/TopTools_DataMapIteratorOfDataMapOfOrientedShapeInteger.hxx

// user-defined post
