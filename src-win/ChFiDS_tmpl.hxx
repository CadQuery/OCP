#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Vertex.hxx>
#include <Law_Composite.hxx>
#include <TopoDS_Vertex.hxx>
#include <ChFiDS_Spine.hxx>
#include <Geom2d_Curve.hxx>
#include <ChFiDS_SurfData.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <ChFiDS_ChamfSpine.hxx>
#include <ChFiDS_ListIteratorOfRegularities.hxx>
#include <ChFiDS_Regul.hxx>
#include <ChFiDS_StripeArray1.hxx>
#include <ChFiDS_ListOfHElSpine.hxx>
#include <ChFiDS_SecHArray1.hxx>
#include <ChFiDS_FilSpine.hxx>
#include <ChFiDS_Regularities.hxx>
#include <ChFiDS_ListOfStripe.hxx>
#include <ChFiDS_SequenceOfSurfData.hxx>
#include <ChFiDS_ErrorStatus.hxx>
#include <ChFiDS_Spine.hxx>
#include <ChFiDS_ListIteratorOfListOfStripe.hxx>
#include <ChFiDS_Map.hxx>
#include <ChFiDS_ChamfMethod.hxx>
#include <ChFiDS_CircSection.hxx>
#include <ChFiDS_SequenceOfSpine.hxx>
#include <ChFiDS_SurfData.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_SecArray1.hxx>
#include <ChFiDS_Stripe.hxx>
#include <ChFiDS_ChamfMode.hxx>
#include <ChFiDS_ElSpine.hxx>
#include <ChFiDS_State.hxx>
#include <ChFiDS_CommonPoint.hxx>
#include <ChFiDS_HData.hxx>
#include <ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx>
#include <ChFiDS_FaceInterference.hxx>
#include <ChFiDS_ListIteratorOfListOfHElSpine.hxx>
#include <ChFiDS_StripeMap.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\ChFiDS_ChamfSpine.hxx
// ./opencascade\ChFiDS_ListIteratorOfRegularities.hxx
// ./opencascade\ChFiDS_Regul.hxx
// ./opencascade\ChFiDS_StripeArray1.hxx
// ./opencascade\ChFiDS_ListOfHElSpine.hxx
// ./opencascade\ChFiDS_SecHArray1.hxx
// ./opencascade\ChFiDS_FilSpine.hxx
// ./opencascade\ChFiDS_Regularities.hxx
// ./opencascade\ChFiDS_ListOfStripe.hxx
// ./opencascade\ChFiDS_SequenceOfSurfData.hxx
// ./opencascade\ChFiDS_ErrorStatus.hxx
// ./opencascade\ChFiDS_Spine.hxx
// ./opencascade\ChFiDS_ListIteratorOfListOfStripe.hxx
// ./opencascade\ChFiDS_Map.hxx
// ./opencascade\ChFiDS_ChamfMethod.hxx
// ./opencascade\ChFiDS_CircSection.hxx
// ./opencascade\ChFiDS_SequenceOfSpine.hxx
// ./opencascade\ChFiDS_SurfData.hxx
// ./opencascade\ChFiDS_HElSpine.hxx
// ./opencascade\ChFiDS_SecArray1.hxx
// ./opencascade\ChFiDS_Stripe.hxx
// ./opencascade\ChFiDS_ChamfMode.hxx
// ./opencascade\ChFiDS_ElSpine.hxx
// ./opencascade\ChFiDS_State.hxx
// ./opencascade\ChFiDS_CommonPoint.hxx
// ./opencascade\ChFiDS_HData.hxx
// ./opencascade\ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx
// ./opencascade\ChFiDS_FaceInterference.hxx
// ./opencascade\ChFiDS_ListIteratorOfListOfHElSpine.hxx
// ./opencascade\ChFiDS_StripeMap.hxx

// user-defined post
