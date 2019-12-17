#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <IntSurf_Transition.hxx>
#include <gp_Dir.hxx>
#include <gp_Vec.hxx>

// module includes
#include <IntSurf_Situation.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_SequenceOfInteriorPoint.hxx>
#include <IntSurf_ListIteratorOfListOfPntOn2S.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntSurf.hxx>
#include <IntSurf_Transition.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <IntSurf_SequenceOfPntOn2S.hxx>
#include <IntSurf_SequenceOfPathPoint.hxx>
#include <IntSurf_InteriorPoint.hxx>
#include <IntSurf_Couple.hxx>
#include <IntSurf_TypeTrans.hxx>
#include <IntSurf_Allocator.hxx>
#include <IntSurf_PathPoint.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <IntSurf_ListOfPntOn2S.hxx>
#include <IntSurf_SequenceOfCouple.hxx>
#include <IntSurf_PathPointTool.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/IntSurf_Situation.hxx
// ./opencascade/IntSurf_Quadric.hxx
// ./opencascade/IntSurf_SequenceOfInteriorPoint.hxx
// ./opencascade/IntSurf_ListIteratorOfListOfPntOn2S.hxx
// ./opencascade/IntSurf_QuadricTool.hxx
// ./opencascade/IntSurf_LineOn2S.hxx
// ./opencascade/IntSurf.hxx
// ./opencascade/IntSurf_Transition.hxx
// ./opencascade/IntSurf_PntOn2S.hxx
// ./opencascade/IntSurf_SequenceOfPntOn2S.hxx
// ./opencascade/IntSurf_SequenceOfPathPoint.hxx
// ./opencascade/IntSurf_InteriorPoint.hxx
// ./opencascade/IntSurf_Couple.hxx
// ./opencascade/IntSurf_TypeTrans.hxx
// ./opencascade/IntSurf_Allocator.hxx
// ./opencascade/IntSurf_PathPoint.hxx
// ./opencascade/IntSurf_InteriorPointTool.hxx
// ./opencascade/IntSurf_ListOfPntOn2S.hxx
// ./opencascade/IntSurf_SequenceOfCouple.hxx
// ./opencascade/IntSurf_PathPointTool.hxx

// user-defined post
