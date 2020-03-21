#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Adaptor2d_HLine2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <gp_Ax1.hxx>
#include <gp_Dir.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>

// module includes
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <Adaptor3d_InterFunc.hxx>
#include <Adaptor3d_SurfacePtr.hxx>
#include <Adaptor3d_HIsoCurve.hxx>
#include <Adaptor3d_CurvePtr.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_CurveOnSurfacePtr.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_IsoCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HVertex.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Adaptor3d_TopolTool.hxx
// ./opencascade/Adaptor3d_HCurve.hxx
// ./opencascade/Adaptor3d_HCurveOnSurface.hxx
// ./opencascade/Adaptor3d_InterFunc.hxx
// ./opencascade/Adaptor3d_SurfacePtr.hxx
// ./opencascade/Adaptor3d_HIsoCurve.hxx
// ./opencascade/Adaptor3d_CurvePtr.hxx
// ./opencascade/Adaptor3d_Surface.hxx
// ./opencascade/Adaptor3d_CurveOnSurfacePtr.hxx
// ./opencascade/Adaptor3d_Curve.hxx
// ./opencascade/Adaptor3d_CurveOnSurface.hxx
// ./opencascade/Adaptor3d_HSurfaceTool.hxx
// ./opencascade/Adaptor3d_IsoCurve.hxx
// ./opencascade/Adaptor3d_HSurface.hxx
// ./opencascade/Adaptor3d_HVertex.hxx

// user-defined post
