#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_NullValue.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_NullValue.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <math_Matrix.hxx>

// module includes
#include <FairCurve_Batten.hxx>
#include <FairCurve_EnergyOfBatten.hxx>
#include <FairCurve_MinimalVariation.hxx>
#include <FairCurve_DistributionOfEnergy.hxx>
#include <FairCurve_EnergyOfMVC.hxx>
#include <FairCurve_DistributionOfSagging.hxx>
#include <FairCurve_BattenLaw.hxx>
#include <FairCurve_AnalysisCode.hxx>
#include <FairCurve_DistributionOfTension.hxx>
#include <FairCurve_Newton.hxx>
#include <FairCurve_DistributionOfJerk.hxx>
#include <FairCurve_Energy.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/FairCurve_Batten.hxx
// ./opencascade/FairCurve_EnergyOfBatten.hxx
// ./opencascade/FairCurve_MinimalVariation.hxx
// ./opencascade/FairCurve_DistributionOfEnergy.hxx
// ./opencascade/FairCurve_EnergyOfMVC.hxx
// ./opencascade/FairCurve_DistributionOfSagging.hxx
// ./opencascade/FairCurve_BattenLaw.hxx
// ./opencascade/FairCurve_AnalysisCode.hxx
// ./opencascade/FairCurve_DistributionOfTension.hxx
// ./opencascade/FairCurve_Newton.hxx
// ./opencascade/FairCurve_DistributionOfJerk.hxx
// ./opencascade/FairCurve_Energy.hxx

// user-defined post
