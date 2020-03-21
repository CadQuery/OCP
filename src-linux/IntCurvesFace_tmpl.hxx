#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Lin.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <gp_Lin.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_HInter.hxx>
#include <Bnd_Box.hxx>

// module includes
#include <IntCurvesFace_ShapeIntersector.hxx>
#include <IntCurvesFace_Intersector.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/IntCurvesFace_ShapeIntersector.hxx
// ./opencascade/IntCurvesFace_Intersector.hxx

// user-defined post
