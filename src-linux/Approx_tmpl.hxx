#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Approx_SweepFunction.hxx>
#include <AdvApprox_Cutting.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Standard_NotImplemented.hxx>

// module includes
#include <Approx_CurvilinearParameter.hxx>
#include <Approx_Status.hxx>
#include <Approx_HArray1OfAdHSurface.hxx>
#include <Approx_Curve2d.hxx>
#include <Approx_FitAndDivide2d.hxx>
#include <Approx_FitAndDivide.hxx>
#include <Approx_HArray1OfGTrsf2d.hxx>
#include <Approx_MCurvesToBSpCurve.hxx>
#include <Approx_Array1OfAdHSurface.hxx>
#include <Approx_ParametrizationType.hxx>
#include <Approx_Curve3d.hxx>
#include <Approx_CurvlinFunc.hxx>
#include <Approx_CurveOnSurface.hxx>
#include <Approx_SequenceOfHArray1OfReal.hxx>
#include <Approx_SweepApproximation.hxx>
#include <Approx_Array1OfGTrsf2d.hxx>
#include <Approx_SameParameter.hxx>
#include <Approx_SweepFunction.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Approx_CurvilinearParameter.hxx
// ./opencascade/Approx_Status.hxx
// ./opencascade/Approx_HArray1OfAdHSurface.hxx
// ./opencascade/Approx_Curve2d.hxx
// ./opencascade/Approx_FitAndDivide2d.hxx
// ./opencascade/Approx_FitAndDivide.hxx
// ./opencascade/Approx_HArray1OfGTrsf2d.hxx
// ./opencascade/Approx_MCurvesToBSpCurve.hxx
// ./opencascade/Approx_Array1OfAdHSurface.hxx
// ./opencascade/Approx_ParametrizationType.hxx
// ./opencascade/Approx_Curve3d.hxx
// ./opencascade/Approx_CurvlinFunc.hxx
// ./opencascade/Approx_CurveOnSurface.hxx
// ./opencascade/Approx_SequenceOfHArray1OfReal.hxx
// ./opencascade/Approx_SweepApproximation.hxx
// ./opencascade/Approx_Array1OfGTrsf2d.hxx
// ./opencascade/Approx_SameParameter.hxx
// ./opencascade/Approx_SweepFunction.hxx

// user-defined post
