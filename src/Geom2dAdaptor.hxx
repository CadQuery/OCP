#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2dAdaptor_GHCurve.hxx>
#include <Geom2dAdaptor_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>

// module includes
#include <Geom2dAdaptor.hxx>
#include <Geom2dAdaptor_HCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2dAdaptor_GHCurve.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Geom2dAdaptor.hxx
// ./opencascade/Geom2dAdaptor_HCurve.hxx
// ./opencascade/Geom2dAdaptor_Curve.hxx
// ./opencascade/Geom2dAdaptor_GHCurve.hxx

// user-defined post
