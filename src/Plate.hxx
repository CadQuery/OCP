#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <gp_Lin.hxx>
#include <Plate_GlobalTranslationConstraint.hxx>
#include <Plate_LineConstraint.hxx>
#include <Plate_PlaneConstraint.hxx>
#include <Plate_SampledCurveConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <math_Matrix.hxx>
#include <Plate_D1.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>
#include <gp_Pln.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>

// module includes
#include <Plate_LinearScalarConstraint.hxx>
#include <Plate_HArray1OfPinpointConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_D1.hxx>
#include <Plate_SequenceOfLinearXYZConstraint.hxx>
#include <Plate_SequenceOfPinpointConstraint.hxx>
#include <Plate_LineConstraint.hxx>
#include <Plate_Array1OfPinpointConstraint.hxx>
#include <Plate_Plate.hxx>
#include <Plate_GlobalTranslationConstraint.hxx>
#include <Plate_PinpointConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <Plate_SampledCurveConstraint.hxx>
#include <Plate_SequenceOfLinearScalarConstraint.hxx>
#include <Plate_PlaneConstraint.hxx>
#include <Plate_D2.hxx>
#include <Plate_LinearXYZConstraint.hxx>
#include <Plate_D3.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Plate_LinearScalarConstraint.hxx
// ./opencascade/Plate_HArray1OfPinpointConstraint.hxx
// ./opencascade/Plate_GtoCConstraint.hxx
// ./opencascade/Plate_D1.hxx
// ./opencascade/Plate_SequenceOfLinearXYZConstraint.hxx
// ./opencascade/Plate_SequenceOfPinpointConstraint.hxx
// ./opencascade/Plate_LineConstraint.hxx
// ./opencascade/Plate_Array1OfPinpointConstraint.hxx
// ./opencascade/Plate_Plate.hxx
// ./opencascade/Plate_GlobalTranslationConstraint.hxx
// ./opencascade/Plate_PinpointConstraint.hxx
// ./opencascade/Plate_FreeGtoCConstraint.hxx
// ./opencascade/Plate_SampledCurveConstraint.hxx
// ./opencascade/Plate_SequenceOfLinearScalarConstraint.hxx
// ./opencascade/Plate_PlaneConstraint.hxx
// ./opencascade/Plate_D2.hxx
// ./opencascade/Plate_LinearXYZConstraint.hxx
// ./opencascade/Plate_D3.hxx

// user-defined post
