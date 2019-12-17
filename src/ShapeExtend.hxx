#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Standard_TypeMismatch.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <ShapeExtend_ComplexCurve.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeExtend_WireData.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeExtend_Explorer.hxx>
#include <Message_Msg.hxx>
#include <TopoDS_Shape.hxx>

// module includes
#include <ShapeExtend_DataMapOfShapeListOfMsg.hxx>
#include <ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg.hxx>
#include <ShapeExtend_Parametrisation.hxx>
#include <ShapeExtend_WireData.hxx>
#include <ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg.hxx>
#include <ShapeExtend_Explorer.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeExtend_ComplexCurve.hxx>
#include <ShapeExtend.hxx>
#include <ShapeExtend_DataMapOfTransientListOfMsg.hxx>
#include <ShapeExtend_Status.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/ShapeExtend_DataMapOfShapeListOfMsg.hxx
// ./opencascade/ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg.hxx
// ./opencascade/ShapeExtend_Parametrisation.hxx
// ./opencascade/ShapeExtend_WireData.hxx
// ./opencascade/ShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg.hxx
// ./opencascade/ShapeExtend_Explorer.hxx
// ./opencascade/ShapeExtend_MsgRegistrator.hxx
// ./opencascade/ShapeExtend_CompositeSurface.hxx
// ./opencascade/ShapeExtend_ComplexCurve.hxx
// ./opencascade/ShapeExtend.hxx
// ./opencascade/ShapeExtend_DataMapOfTransientListOfMsg.hxx
// ./opencascade/ShapeExtend_Status.hxx
// ./opencascade/ShapeExtend_BasicMsgRegistrator.hxx

// user-defined post
