#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom2d_TrimmedCurve.hxx>
#include <MAT2d_MiniPath.hxx>
#include <MAT2d_Circuit.hxx>
#include <MAT_Bisector.hxx>
#include <Geom2d_Geometry.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT2d_Tool2d.hxx>

// module includes
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.hxx>
#include <MAT2d_CutCurve.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerConnexion.hxx>
#include <MAT2d_DataMapOfIntegerBisec.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion.hxx>
#include <MAT2d_DataMapOfIntegerVec2d.hxx>
#include <MAT2d_Circuit.hxx>
#include <MAT2d_Connexion.hxx>
#include <MAT2d_DataMapOfIntegerPnt2d.hxx>
#include <MAT2d_DataMapOfIntegerConnexion.hxx>
#include <MAT2d_Array2OfConnexion.hxx>
#include <MAT2d_MiniPath.hxx>
#include <MAT2d_Tool2d.hxx>
#include <MAT2d_SequenceOfSequenceOfCurve.hxx>
#include <MAT2d_SequenceOfSequenceOfGeometry.hxx>
#include <MAT2d_MapBiIntHasher.hxx>
#include <MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfBiIntInteger.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d.hxx>
#include <MAT2d_SequenceOfConnexion.hxx>
#include <MAT2d_BiInt.hxx>
#include <MAT2d_DataMapOfBiIntSequenceOfInteger.hxx>
#include <MAT2d_DataMapOfBiIntInteger.hxx>
#include <MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger.hxx>
#include <MAT2d_Mat2d.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.hxx
// ./opencascade\MAT2d_CutCurve.hxx
// ./opencascade\MAT2d_DataMapIteratorOfDataMapOfIntegerPnt2d.hxx
// ./opencascade\MAT2d_DataMapIteratorOfDataMapOfIntegerConnexion.hxx
// ./opencascade\MAT2d_DataMapOfIntegerBisec.hxx
// ./opencascade\MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion.hxx
// ./opencascade\MAT2d_DataMapOfIntegerVec2d.hxx
// ./opencascade\MAT2d_Circuit.hxx
// ./opencascade\MAT2d_Connexion.hxx
// ./opencascade\MAT2d_DataMapOfIntegerPnt2d.hxx
// ./opencascade\MAT2d_DataMapOfIntegerConnexion.hxx
// ./opencascade\MAT2d_Array2OfConnexion.hxx
// ./opencascade\MAT2d_MiniPath.hxx
// ./opencascade\MAT2d_Tool2d.hxx
// ./opencascade\MAT2d_SequenceOfSequenceOfCurve.hxx
// ./opencascade\MAT2d_SequenceOfSequenceOfGeometry.hxx
// ./opencascade\MAT2d_MapBiIntHasher.hxx
// ./opencascade\MAT2d_DataMapOfIntegerSequenceOfConnexion.hxx
// ./opencascade\MAT2d_DataMapIteratorOfDataMapOfBiIntInteger.hxx
// ./opencascade\MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d.hxx
// ./opencascade\MAT2d_SequenceOfConnexion.hxx
// ./opencascade\MAT2d_BiInt.hxx
// ./opencascade\MAT2d_DataMapOfBiIntSequenceOfInteger.hxx
// ./opencascade\MAT2d_DataMapOfBiIntInteger.hxx
// ./opencascade\MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger.hxx
// ./opencascade\MAT2d_Mat2d.hxx

// user-defined post
