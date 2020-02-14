#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Ax2.hxx>
#include <gp_Lin.hxx>
#include <HLRAlgo_EdgeStatus.hxx>
#include <HLRAlgo_EdgeStatus.hxx>

// module includes
#include <HLRAlgo_EdgeStatus.hxx>
#include <HLRAlgo_PolyShellData.hxx>
#include <HLRAlgo_ListIteratorOfInterferenceList.hxx>
#include <HLRAlgo_PolyInternalNode.hxx>
#include <HLRAlgo_HArray1OfPISeg.hxx>
#include <HLRAlgo_HArray1OfPHDat.hxx>
#include <HLRAlgo_EdgesBlock.hxx>
#include <HLRAlgo_Coincidence.hxx>
#include <HLRAlgo_PolyInternalData.hxx>
#include <HLRAlgo_TriangleData.hxx>
#include <HLRAlgo_PolyMask.hxx>
#include <HLRAlgo_InterferenceList.hxx>
#include <HLRAlgo_Projector.hxx>
#include <HLRAlgo_PolyInternalSegment.hxx>
#include <HLRAlgo_ListOfBPoint.hxx>
#include <HLRAlgo_PolyHidingData.hxx>
#include <HLRAlgo_EdgeIterator.hxx>
#include <HLRAlgo_PolyData.hxx>
#include <HLRAlgo_Array1OfPHDat.hxx>
#include <HLRAlgo_HArray1OfPINod.hxx>
#include <HLRAlgo_ListIteratorOfListOfBPoint.hxx>
#include <HLRAlgo_Intersection.hxx>
#include <HLRAlgo_BiPoint.hxx>
#include <HLRAlgo_WiresBlock.hxx>
#include <HLRAlgo_Array1OfPISeg.hxx>
#include <HLRAlgo_Array1OfPINod.hxx>
#include <HLRAlgo_Interference.hxx>
#include <HLRAlgo_PolyAlgo.hxx>
#include <HLRAlgo.hxx>
#include <HLRAlgo_Array1OfTData.hxx>
#include <HLRAlgo_HArray1OfTData.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/HLRAlgo_EdgeStatus.hxx
// ./opencascade/HLRAlgo_PolyShellData.hxx
// ./opencascade/HLRAlgo_ListIteratorOfInterferenceList.hxx
// ./opencascade/HLRAlgo_PolyInternalNode.hxx
// ./opencascade/HLRAlgo_HArray1OfPISeg.hxx
// ./opencascade/HLRAlgo_HArray1OfPHDat.hxx
// ./opencascade/HLRAlgo_EdgesBlock.hxx
// ./opencascade/HLRAlgo_Coincidence.hxx
// ./opencascade/HLRAlgo_PolyInternalData.hxx
// ./opencascade/HLRAlgo_TriangleData.hxx
// ./opencascade/HLRAlgo_PolyMask.hxx
// ./opencascade/HLRAlgo_InterferenceList.hxx
// ./opencascade/HLRAlgo_Projector.hxx
// ./opencascade/HLRAlgo_PolyInternalSegment.hxx
// ./opencascade/HLRAlgo_ListOfBPoint.hxx
// ./opencascade/HLRAlgo_PolyHidingData.hxx
// ./opencascade/HLRAlgo_EdgeIterator.hxx
// ./opencascade/HLRAlgo_PolyData.hxx
// ./opencascade/HLRAlgo_Array1OfPHDat.hxx
// ./opencascade/HLRAlgo_HArray1OfPINod.hxx
// ./opencascade/HLRAlgo_ListIteratorOfListOfBPoint.hxx
// ./opencascade/HLRAlgo_Intersection.hxx
// ./opencascade/HLRAlgo_BiPoint.hxx
// ./opencascade/HLRAlgo_WiresBlock.hxx
// ./opencascade/HLRAlgo_Array1OfPISeg.hxx
// ./opencascade/HLRAlgo_Array1OfPINod.hxx
// ./opencascade/HLRAlgo_Interference.hxx
// ./opencascade/HLRAlgo_PolyAlgo.hxx
// ./opencascade/HLRAlgo.hxx
// ./opencascade/HLRAlgo_Array1OfTData.hxx
// ./opencascade/HLRAlgo_HArray1OfTData.hxx

// user-defined post
