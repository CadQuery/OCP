#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <GeomPlate_Surface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <GeomPlate_Surface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <GeomPlate_BuildAveragePlane.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Line.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>

// module includes
#include <GeomPlate_PlateG0Criterion.hxx>
#include <GeomPlate_CurveConstraint.hxx>
#include <GeomPlate_HArray1OfHCurve.hxx>
#include <GeomPlate_SequenceOfAij.hxx>
#include <GeomPlate_Array1OfHCurve.hxx>
#include <GeomPlate_HSequenceOfCurveConstraint.hxx>
#include <GeomPlate_SequenceOfPointConstraint.hxx>
#include <GeomPlate_Array1OfSequenceOfReal.hxx>
#include <GeomPlate_SequenceOfCurveConstraint.hxx>
#include <GeomPlate_PointConstraint.hxx>
#include <GeomPlate_HArray1OfSequenceOfReal.hxx>
#include <GeomPlate_BuildPlateSurface.hxx>
#include <GeomPlate_MakeApprox.hxx>
#include <GeomPlate_Aij.hxx>
#include <GeomPlate_HSequenceOfPointConstraint.hxx>
#include <GeomPlate_BuildAveragePlane.hxx>
#include <GeomPlate_PlateG1Criterion.hxx>
#include <GeomPlate_Surface.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/GeomPlate_PlateG0Criterion.hxx
// ./opencascade/GeomPlate_CurveConstraint.hxx
// ./opencascade/GeomPlate_HArray1OfHCurve.hxx
// ./opencascade/GeomPlate_SequenceOfAij.hxx
// ./opencascade/GeomPlate_Array1OfHCurve.hxx
// ./opencascade/GeomPlate_HSequenceOfCurveConstraint.hxx
// ./opencascade/GeomPlate_SequenceOfPointConstraint.hxx
// ./opencascade/GeomPlate_Array1OfSequenceOfReal.hxx
// ./opencascade/GeomPlate_SequenceOfCurveConstraint.hxx
// ./opencascade/GeomPlate_PointConstraint.hxx
// ./opencascade/GeomPlate_HArray1OfSequenceOfReal.hxx
// ./opencascade/GeomPlate_BuildPlateSurface.hxx
// ./opencascade/GeomPlate_MakeApprox.hxx
// ./opencascade/GeomPlate_Aij.hxx
// ./opencascade/GeomPlate_HSequenceOfPointConstraint.hxx
// ./opencascade/GeomPlate_BuildAveragePlane.hxx
// ./opencascade/GeomPlate_PlateG1Criterion.hxx
// ./opencascade/GeomPlate_Surface.hxx

// user-defined post
