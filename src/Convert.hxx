#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Cylinder.hxx>
#include <gp_Torus.hxx>
#include <gp_Sphere.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Cone.hxx>

// module includes
#include <Convert_CylinderToBSplineSurface.hxx>
#include <Convert_CompBezierCurves2dToBSplineCurve2d.hxx>
#include <Convert_ParameterisationType.hxx>
#include <Convert_CosAndSinEvalFunction.hxx>
#include <Convert_CompBezierCurvesToBSplineCurve.hxx>
#include <Convert_TorusToBSplineSurface.hxx>
#include <Convert_PolynomialCosAndSin.hxx>
#include <Convert_SphereToBSplineSurface.hxx>
#include <Convert_SequenceOfArray1OfPoles2d.hxx>
#include <Convert_EllipseToBSplineCurve.hxx>
#include <Convert_ConicToBSplineCurve.hxx>
#include <Convert_ParabolaToBSplineCurve.hxx>
#include <Convert_GridPolynomialToPoles.hxx>
#include <Convert_CompPolynomialToPoles.hxx>
#include <Convert_HyperbolaToBSplineCurve.hxx>
#include <Convert_CircleToBSplineCurve.hxx>
#include <Convert_SequenceOfArray1OfPoles.hxx>
#include <Convert_ConeToBSplineSurface.hxx>
#include <Convert_ElementarySurfaceToBSplineSurface.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Convert_CylinderToBSplineSurface.hxx
// ./opencascade/Convert_CompBezierCurves2dToBSplineCurve2d.hxx
// ./opencascade/Convert_ParameterisationType.hxx
// ./opencascade/Convert_CosAndSinEvalFunction.hxx
// ./opencascade/Convert_CompBezierCurvesToBSplineCurve.hxx
// ./opencascade/Convert_TorusToBSplineSurface.hxx
// ./opencascade/Convert_PolynomialCosAndSin.hxx
// ./opencascade/Convert_SphereToBSplineSurface.hxx
// ./opencascade/Convert_SequenceOfArray1OfPoles2d.hxx
// ./opencascade/Convert_EllipseToBSplineCurve.hxx
// ./opencascade/Convert_ConicToBSplineCurve.hxx
// ./opencascade/Convert_ParabolaToBSplineCurve.hxx
// ./opencascade/Convert_GridPolynomialToPoles.hxx
// ./opencascade/Convert_CompPolynomialToPoles.hxx
// ./opencascade/Convert_HyperbolaToBSplineCurve.hxx
// ./opencascade/Convert_CircleToBSplineCurve.hxx
// ./opencascade/Convert_SequenceOfArray1OfPoles.hxx
// ./opencascade/Convert_ConeToBSplineSurface.hxx
// ./opencascade/Convert_ElementarySurfaceToBSplineSurface.hxx

// user-defined post
