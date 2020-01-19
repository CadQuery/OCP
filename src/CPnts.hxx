#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>

// module includes
#include <CPnts_MyGaussFunction.hxx>
#include <CPnts_MyRootFunction.hxx>
#include <CPnts_UniformDeflection.hxx>
#include <CPnts_AbscissaPoint.hxx>
#include <CPnts_RealFunction.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/CPnts_MyGaussFunction.hxx
// ./opencascade/CPnts_MyRootFunction.hxx
// ./opencascade/CPnts_UniformDeflection.hxx
// ./opencascade/CPnts_AbscissaPoint.hxx
// ./opencascade/CPnts_RealFunction.hxx

// user-defined post
