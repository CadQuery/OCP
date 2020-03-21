#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <IntRes2d_Domain.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <math_Matrix.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_IntConicCurveOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx>
#include <IntCurve_IConicTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <IntRes2d_Domain.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>

// module includes
#include <Geom2dInt_TheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_GInter.hxx>
#include <Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_IntConicCurveOfGInter.hxx>
#include <Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Geom2dInt_TheIntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheProjPCurOfGInter.hxx
// ./opencascade/Geom2dInt_Geom2dCurveTool.hxx
// ./opencascade/Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx
// ./opencascade/Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_GInter.hxx
// ./opencascade/Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx
// ./opencascade/Geom2dInt_TheIntPCurvePCurveOfGInter.hxx
// ./opencascade/Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_IntConicCurveOfGInter.hxx
// ./opencascade/Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx

// user-defined post
