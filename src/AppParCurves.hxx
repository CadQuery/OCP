#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <math_Matrix.hxx>
#include <AppParCurves_MultiPoint.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppParCurves_MultiBSpCurve.hxx>
#include <AppParCurves_ConstraintCouple.hxx>

// module includes
#include <AppParCurves_MultiBSpCurve.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppParCurves.hxx>
#include <AppParCurves_Array1OfMultiPoint.hxx>
#include <AppParCurves_MultiPoint.hxx>
#include <AppParCurves_HArray1OfMultiBSpCurve.hxx>
#include <AppParCurves_Array1OfMultiCurve.hxx>
#include <AppParCurves_HArray1OfConstraintCouple.hxx>
#include <AppParCurves_SequenceOfMultiBSpCurve.hxx>
#include <AppParCurves_HArray1OfMultiPoint.hxx>
#include <AppParCurves_HArray1OfMultiCurve.hxx>
#include <AppParCurves_Array1OfMultiBSpCurve.hxx>
#include <AppParCurves_Array1OfConstraintCouple.hxx>
#include <AppParCurves_SequenceOfMultiCurve.hxx>
#include <AppParCurves_ConstraintCouple.hxx>
#include <AppParCurves_Constraint.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/AppParCurves_MultiBSpCurve.hxx
// ./opencascade/AppParCurves_MultiCurve.hxx
// ./opencascade/AppParCurves.hxx
// ./opencascade/AppParCurves_Array1OfMultiPoint.hxx
// ./opencascade/AppParCurves_MultiPoint.hxx
// ./opencascade/AppParCurves_HArray1OfMultiBSpCurve.hxx
// ./opencascade/AppParCurves_Array1OfMultiCurve.hxx
// ./opencascade/AppParCurves_HArray1OfConstraintCouple.hxx
// ./opencascade/AppParCurves_SequenceOfMultiBSpCurve.hxx
// ./opencascade/AppParCurves_HArray1OfMultiPoint.hxx
// ./opencascade/AppParCurves_HArray1OfMultiCurve.hxx
// ./opencascade/AppParCurves_Array1OfMultiBSpCurve.hxx
// ./opencascade/AppParCurves_Array1OfConstraintCouple.hxx
// ./opencascade/AppParCurves_SequenceOfMultiCurve.hxx
// ./opencascade/AppParCurves_ConstraintCouple.hxx
// ./opencascade/AppParCurves_Constraint.hxx

// user-defined post
