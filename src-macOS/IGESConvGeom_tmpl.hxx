#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <IGESGeom_CopiousData.hxx>
#include <gp_Ax3.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax1.hxx>
#include <IGESGeom_TransformationMatrix.hxx>
#include <IGESGeom_SplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <IGESGeom_SplineSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <IGESConvGeom_GeomBuilder.hxx>

// module includes
#include <IGESConvGeom_GeomBuilder.hxx>
#include <IGESConvGeom.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/IGESConvGeom_GeomBuilder.hxx
// ./opencascade/IGESConvGeom.hxx

// user-defined post
