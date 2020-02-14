#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <TColgp_HArray2OfXY.hxx>
#include <TColgp_SequenceOfVec2d.hxx>
#include <TColgp_HArray1OfPnt2d.hxx>
#include <TColgp_Array2OfVec.hxx>
#include <TColgp_SequenceOfArray1OfPnt2d.hxx>
#include <TColgp_HArray1OfPnt.hxx>
#include <TColgp_Array2OfDir.hxx>
#include <TColgp_HArray2OfVec.hxx>
#include <TColgp_HArray1OfDir.hxx>
#include <TColgp_Array1OfXYZ.hxx>
#include <TColgp_SequenceOfVec.hxx>
#include <TColgp_HArray1OfLin2d.hxx>
#include <TColgp_Array1OfVec2d.hxx>
#include <TColgp_HSequenceOfVec2d.hxx>
#include <TColgp_HArray2OfDir.hxx>
#include <TColgp_SequenceOfPnt.hxx>
#include <TColgp_Array2OfDir2d.hxx>
#include <TColgp_Array1OfVec.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <TColgp_Array1OfXY.hxx>
#include <TColgp_Array1OfDir.hxx>
#include <TColgp_HArray2OfCirc2d.hxx>
#include <TColgp_HArray1OfXYZ.hxx>
#include <TColgp_HArray1OfDir2d.hxx>
#include <TColgp_Array1OfPnt.hxx>
#include <TColgp_Array2OfPnt2d.hxx>
#include <TColgp_HArray2OfPnt.hxx>
#include <TColgp_Array1OfDir2d.hxx>
#include <TColgp_HArray1OfCirc2d.hxx>
#include <TColgp_HArray2OfVec2d.hxx>
#include <TColgp_Array2OfXYZ.hxx>
#include <TColgp_HSequenceOfVec.hxx>
#include <TColgp_SequenceOfPnt2d.hxx>
#include <TColgp_Array2OfPnt.hxx>
#include <TColgp_HArray1OfXY.hxx>
#include <TColgp_Array1OfCirc2d.hxx>
#include <TColgp_HSequenceOfDir2d.hxx>
#include <TColgp_HArray2OfDir2d.hxx>
#include <TColgp_HSequenceOfXY.hxx>
#include <TColgp_SequenceOfDir2d.hxx>
#include <TColgp_Array1OfLin2d.hxx>
#include <TColgp_HSequenceOfPnt.hxx>
#include <TColgp_HArray1OfVec.hxx>
#include <TColgp_Array2OfCirc2d.hxx>
#include <TColgp_SequenceOfXYZ.hxx>
#include <TColgp_SequenceOfXY.hxx>
#include <TColgp_HSequenceOfXYZ.hxx>
#include <TColgp_HArray2OfLin2d.hxx>
#include <TColgp_HSequenceOfPnt2d.hxx>
#include <TColgp_HArray2OfPnt2d.hxx>
#include <TColgp_Array2OfVec2d.hxx>
#include <TColgp_Array2OfXY.hxx>
#include <TColgp_HArray2OfXYZ.hxx>
#include <TColgp_HSequenceOfDir.hxx>
#include <TColgp_Array2OfLin2d.hxx>
#include <TColgp_SequenceOfDir.hxx>
#include <TColgp_HArray1OfVec2d.hxx>
#include <TColgp_SequenceOfAx1.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/TColgp_HArray2OfXY.hxx
// ./opencascade/TColgp_SequenceOfVec2d.hxx
// ./opencascade/TColgp_HArray1OfPnt2d.hxx
// ./opencascade/TColgp_Array2OfVec.hxx
// ./opencascade/TColgp_SequenceOfArray1OfPnt2d.hxx
// ./opencascade/TColgp_HArray1OfPnt.hxx
// ./opencascade/TColgp_Array2OfDir.hxx
// ./opencascade/TColgp_HArray2OfVec.hxx
// ./opencascade/TColgp_HArray1OfDir.hxx
// ./opencascade/TColgp_Array1OfXYZ.hxx
// ./opencascade/TColgp_SequenceOfVec.hxx
// ./opencascade/TColgp_HArray1OfLin2d.hxx
// ./opencascade/TColgp_Array1OfVec2d.hxx
// ./opencascade/TColgp_HSequenceOfVec2d.hxx
// ./opencascade/TColgp_HArray2OfDir.hxx
// ./opencascade/TColgp_SequenceOfPnt.hxx
// ./opencascade/TColgp_Array2OfDir2d.hxx
// ./opencascade/TColgp_Array1OfVec.hxx
// ./opencascade/TColgp_Array1OfPnt2d.hxx
// ./opencascade/TColgp_Array1OfXY.hxx
// ./opencascade/TColgp_Array1OfDir.hxx
// ./opencascade/TColgp_HArray2OfCirc2d.hxx
// ./opencascade/TColgp_HArray1OfXYZ.hxx
// ./opencascade/TColgp_HArray1OfDir2d.hxx
// ./opencascade/TColgp_Array1OfPnt.hxx
// ./opencascade/TColgp_Array2OfPnt2d.hxx
// ./opencascade/TColgp_HArray2OfPnt.hxx
// ./opencascade/TColgp_Array1OfDir2d.hxx
// ./opencascade/TColgp_HArray1OfCirc2d.hxx
// ./opencascade/TColgp_HArray2OfVec2d.hxx
// ./opencascade/TColgp_Array2OfXYZ.hxx
// ./opencascade/TColgp_HSequenceOfVec.hxx
// ./opencascade/TColgp_SequenceOfPnt2d.hxx
// ./opencascade/TColgp_Array2OfPnt.hxx
// ./opencascade/TColgp_HArray1OfXY.hxx
// ./opencascade/TColgp_Array1OfCirc2d.hxx
// ./opencascade/TColgp_HSequenceOfDir2d.hxx
// ./opencascade/TColgp_HArray2OfDir2d.hxx
// ./opencascade/TColgp_HSequenceOfXY.hxx
// ./opencascade/TColgp_SequenceOfDir2d.hxx
// ./opencascade/TColgp_Array1OfLin2d.hxx
// ./opencascade/TColgp_HSequenceOfPnt.hxx
// ./opencascade/TColgp_HArray1OfVec.hxx
// ./opencascade/TColgp_Array2OfCirc2d.hxx
// ./opencascade/TColgp_SequenceOfXYZ.hxx
// ./opencascade/TColgp_SequenceOfXY.hxx
// ./opencascade/TColgp_HSequenceOfXYZ.hxx
// ./opencascade/TColgp_HArray2OfLin2d.hxx
// ./opencascade/TColgp_HSequenceOfPnt2d.hxx
// ./opencascade/TColgp_HArray2OfPnt2d.hxx
// ./opencascade/TColgp_Array2OfVec2d.hxx
// ./opencascade/TColgp_Array2OfXY.hxx
// ./opencascade/TColgp_HArray2OfXYZ.hxx
// ./opencascade/TColgp_HSequenceOfDir.hxx
// ./opencascade/TColgp_Array2OfLin2d.hxx
// ./opencascade/TColgp_SequenceOfDir.hxx
// ./opencascade/TColgp_HArray1OfVec2d.hxx
// ./opencascade/TColgp_SequenceOfAx1.hxx

// user-defined post
