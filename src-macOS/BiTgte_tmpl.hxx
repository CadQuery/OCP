#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>

// module includes
#include <BiTgte_CurveOnEdge.hxx>
#include <BiTgte_HCurveOnVertex.hxx>
#include <BiTgte_Blend.hxx>
#include <BiTgte_CurveOnVertex.hxx>
#include <BiTgte_ContactType.hxx>
#include <BiTgte_HCurveOnEdge.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BiTgte_CurveOnEdge.hxx
// ./opencascade/BiTgte_HCurveOnVertex.hxx
// ./opencascade/BiTgte_Blend.hxx
// ./opencascade/BiTgte_CurveOnVertex.hxx
// ./opencascade/BiTgte_ContactType.hxx
// ./opencascade/BiTgte_HCurveOnEdge.hxx

// user-defined post
