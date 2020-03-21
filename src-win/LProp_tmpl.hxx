#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <LProp_CurAndInf.hxx>

// module includes
#include <LProp_BadContinuity.hxx>
#include <LProp_CurAndInf.hxx>
#include <LProp_AnalyticCurInf.hxx>
#include <LProp_Status.hxx>
#include <LProp_SequenceOfCIType.hxx>
#include <LProp_CIType.hxx>
#include <LProp_NotDefined.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\LProp_BadContinuity.hxx
// ./opencascade\LProp_CurAndInf.hxx
// ./opencascade\LProp_AnalyticCurInf.hxx
// ./opencascade\LProp_Status.hxx
// ./opencascade\LProp_SequenceOfCIType.hxx
// ./opencascade\LProp_CIType.hxx
// ./opencascade\LProp_NotDefined.hxx

// user-defined post
