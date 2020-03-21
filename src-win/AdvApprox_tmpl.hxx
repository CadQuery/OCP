#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <AdvApprox_Cutting.hxx>
#include <PLib_JacobiPolynomial.hxx>
#include <Standard_ConstructionError.hxx>

// module includes
#include <AdvApprox_PrefCutting.hxx>
#include <AdvApprox_EvaluatorFunction.hxx>
#include <AdvApprox_PrefAndRec.hxx>
#include <AdvApprox_ApproxAFunction.hxx>
#include <AdvApprox_DichoCutting.hxx>
#include <AdvApprox_Cutting.hxx>
#include <AdvApprox_SimpleApprox.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\AdvApprox_PrefCutting.hxx
// ./opencascade\AdvApprox_EvaluatorFunction.hxx
// ./opencascade\AdvApprox_PrefAndRec.hxx
// ./opencascade\AdvApprox_ApproxAFunction.hxx
// ./opencascade\AdvApprox_DichoCutting.hxx
// ./opencascade\AdvApprox_Cutting.hxx
// ./opencascade\AdvApprox_SimpleApprox.hxx

// user-defined post
