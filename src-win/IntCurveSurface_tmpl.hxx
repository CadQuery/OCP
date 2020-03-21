#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <IntCurveSurface_TheInterferenceOfHInter.hxx>
#include <IntCurveSurface_TheCSFunctionOfHInter.hxx>
#include <IntCurveSurface_TheExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <IntAna_IntConicQuad.hxx>
#include <Bnd_Box.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <math_FunctionSetRoot.hxx>

// module includes
#include <IntCurveSurface_TransitionOnCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_SequenceOfPnt.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_Intersection.hxx>
#include <IntCurveSurface_TheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_HInter.hxx>
#include <IntCurveSurface_TheInterferenceOfHInter.hxx>
#include <IntCurveSurface_TheCSFunctionOfHInter.hxx>
#include <IntCurveSurface_IntersectionPoint.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_TheExactHInter.hxx>
#include <IntCurveSurface_IntersectionSegment.hxx>
#include <IntCurveSurface_SequenceOfSeg.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\IntCurveSurface_TransitionOnCurve.hxx
// ./opencascade\IntCurveSurface_TheHCurveTool.hxx
// ./opencascade\IntCurveSurface_ThePolyhedronToolOfHInter.hxx
// ./opencascade\IntCurveSurface_ThePolyhedronOfHInter.hxx
// ./opencascade\IntCurveSurface_SequenceOfPnt.hxx
// ./opencascade\IntCurveSurface_ThePolygonToolOfHInter.hxx
// ./opencascade\IntCurveSurface_ThePolygonOfHInter.hxx
// ./opencascade\IntCurveSurface_Intersection.hxx
// ./opencascade\IntCurveSurface_TheQuadCurvExactHInter.hxx
// ./opencascade\IntCurveSurface_HInter.hxx
// ./opencascade\IntCurveSurface_TheInterferenceOfHInter.hxx
// ./opencascade\IntCurveSurface_TheCSFunctionOfHInter.hxx
// ./opencascade\IntCurveSurface_IntersectionPoint.hxx
// ./opencascade\IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx
// ./opencascade\IntCurveSurface_TheExactHInter.hxx
// ./opencascade\IntCurveSurface_IntersectionSegment.hxx
// ./opencascade\IntCurveSurface_SequenceOfSeg.hxx

// user-defined post
