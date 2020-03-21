#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <PLib_JacobiPolynomial.hxx>
#include <math_Matrix.hxx>
#include <PLib_Base.hxx>
#include <PLib_JacobiPolynomial.hxx>
#include <PLib_HermitJacobi.hxx>
#include <PLib_DoubleJacobiPolynomial.hxx>
#include <Standard_ConstructionError.hxx>

// module includes
#include <PLib_Base.hxx>
#include <PLib_HermitJacobi.hxx>
#include <PLib_DoubleJacobiPolynomial.hxx>
#include <PLib.hxx>
#include <PLib_JacobiPolynomial.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\PLib_Base.hxx
// ./opencascade\PLib_HermitJacobi.hxx
// ./opencascade\PLib_DoubleJacobiPolynomial.hxx
// ./opencascade\PLib.hxx
// ./opencascade\PLib_JacobiPolynomial.hxx

// user-defined post
