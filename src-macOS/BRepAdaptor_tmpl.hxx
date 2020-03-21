#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <TopoDS_Face.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <gp_Ax1.hxx>
#include <Adaptor3d_HCurve.hxx>

// module includes
#include <BRepAdaptor_HCompCurve.hxx>
#include <BRepAdaptor_Array1OfCurve.hxx>
#include <BRepAdaptor_HCurve.hxx>
#include <BRepAdaptor_HArray1OfCurve.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepAdaptor_CompCurve.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_Curve2d.hxx>
#include <BRepAdaptor_Surface.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepAdaptor_HCompCurve.hxx
// ./opencascade/BRepAdaptor_Array1OfCurve.hxx
// ./opencascade/BRepAdaptor_HCurve.hxx
// ./opencascade/BRepAdaptor_HArray1OfCurve.hxx
// ./opencascade/BRepAdaptor_HSurface.hxx
// ./opencascade/BRepAdaptor_CompCurve.hxx
// ./opencascade/BRepAdaptor_HCurve2d.hxx
// ./opencascade/BRepAdaptor_Curve.hxx
// ./opencascade/BRepAdaptor_Curve2d.hxx
// ./opencascade/BRepAdaptor_Surface.hxx

// user-defined post
