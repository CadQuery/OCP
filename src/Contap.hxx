#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Contap_HContTool.hxx>
#include <Contap_SurfFunction.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Contap_HCurve2dTool.hxx>
#include <Contap_HContTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Contap_ArcFunction.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Sphere.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <gp_Pnt.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <math_Matrix.hxx>
#include <IntSurf_PathPointTool.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Contap_SurfFunction.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>

// module includes
#include <Contap_TheSearchInside.hxx>
#include <Contap_TheSearch.hxx>
#include <Contap_TheHSequenceOfPoint.hxx>
#include <Contap_Point.hxx>
#include <Contap_SequenceOfIWLineOfTheIWalking.hxx>
#include <Contap_SequenceOfPathPointOfTheSearch.hxx>
#include <Contap_SequenceOfSegmentOfTheSearch.hxx>
#include <Contap_Line.hxx>
#include <Contap_ContAna.hxx>
#include <Contap_IType.hxx>
#include <Contap_SurfProps.hxx>
#include <Contap_TFunction.hxx>
#include <Contap_TheIWLineOfTheIWalking.hxx>
#include <Contap_TheSequenceOfPoint.hxx>
#include <Contap_HCurve2dTool.hxx>
#include <Contap_TheSequenceOfLine.hxx>
#include <Contap_ThePathPointOfTheSearch.hxx>
#include <Contap_ArcFunction.hxx>
#include <Contap_HContTool.hxx>
#include <Contap_TheSegmentOfTheSearch.hxx>
#include <Contap_SurfFunction.hxx>
#include <Contap_TheIWalking.hxx>
#include <Contap_Contour.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Contap_TheSearchInside.hxx
// ./opencascade/Contap_TheSearch.hxx
// ./opencascade/Contap_TheHSequenceOfPoint.hxx
// ./opencascade/Contap_Point.hxx
// ./opencascade/Contap_SequenceOfIWLineOfTheIWalking.hxx
// ./opencascade/Contap_SequenceOfPathPointOfTheSearch.hxx
// ./opencascade/Contap_SequenceOfSegmentOfTheSearch.hxx
// ./opencascade/Contap_Line.hxx
// ./opencascade/Contap_ContAna.hxx
// ./opencascade/Contap_IType.hxx
// ./opencascade/Contap_SurfProps.hxx
// ./opencascade/Contap_TFunction.hxx
// ./opencascade/Contap_TheIWLineOfTheIWalking.hxx
// ./opencascade/Contap_TheSequenceOfPoint.hxx
// ./opencascade/Contap_HCurve2dTool.hxx
// ./opencascade/Contap_TheSequenceOfLine.hxx
// ./opencascade/Contap_ThePathPointOfTheSearch.hxx
// ./opencascade/Contap_ArcFunction.hxx
// ./opencascade/Contap_HContTool.hxx
// ./opencascade/Contap_TheSegmentOfTheSearch.hxx
// ./opencascade/Contap_SurfFunction.hxx
// ./opencascade/Contap_TheIWalking.hxx
// ./opencascade/Contap_Contour.hxx

// user-defined post
