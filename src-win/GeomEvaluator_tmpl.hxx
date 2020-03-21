#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomAdaptor_HCurve.hxx>

// module includes
#include <GeomEvaluator_Surface.hxx>
#include <GeomEvaluator_Curve.hxx>
#include <GeomEvaluator_SurfaceOfExtrusion.hxx>
#include <GeomEvaluator_OffsetSurface.hxx>
#include <GeomEvaluator_SurfaceOfRevolution.hxx>
#include <GeomEvaluator_OffsetCurve.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\GeomEvaluator_Surface.hxx
// ./opencascade\GeomEvaluator_Curve.hxx
// ./opencascade\GeomEvaluator_SurfaceOfExtrusion.hxx
// ./opencascade\GeomEvaluator_OffsetSurface.hxx
// ./opencascade\GeomEvaluator_SurfaceOfRevolution.hxx
// ./opencascade\GeomEvaluator_OffsetCurve.hxx

// user-defined post
