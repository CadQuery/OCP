#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Intf_Polygon2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_XYZ.hxx>
#include <Intf_Polygon2d.hxx>
#include <Intf_SectionPoint.hxx>
#include <Intf_SectionLine.hxx>
#include <Intf_TangentZone.hxx>
#include <Intf_Interference.hxx>
#include <Intf_Tool.hxx>
#include <Intf_InterferencePolygon2d.hxx>
#include <Standard_OutOfRange.hxx>
#include <gp_Lin2d.hxx>
#include <Bnd_Box2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Lin.hxx>
#include <Bnd_Box.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>

// module includes
#include <Intf_SeqOfSectionLine.hxx>
#include <Intf_Interference.hxx>
#include <Intf_PIType.hxx>
#include <Intf_SectionLine.hxx>
#include <Intf_InterferencePolygon2d.hxx>
#include <Intf.hxx>
#include <Intf_SectionPoint.hxx>
#include <Intf_TangentZone.hxx>
#include <Intf_SeqOfSectionPoint.hxx>
#include <Intf_Array1OfLin.hxx>
#include <Intf_Tool.hxx>
#include <Intf_SeqOfTangentZone.hxx>
#include <Intf_Polygon2d.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Intf_SeqOfSectionLine.hxx
// ./opencascade/Intf_Interference.hxx
// ./opencascade/Intf_PIType.hxx
// ./opencascade/Intf_SectionLine.hxx
// ./opencascade/Intf_InterferencePolygon2d.hxx
// ./opencascade/Intf.hxx
// ./opencascade/Intf_SectionPoint.hxx
// ./opencascade/Intf_TangentZone.hxx
// ./opencascade/Intf_SeqOfSectionPoint.hxx
// ./opencascade/Intf_Array1OfLin.hxx
// ./opencascade/Intf_Tool.hxx
// ./opencascade/Intf_SeqOfTangentZone.hxx
// ./opencascade/Intf_Polygon2d.hxx

// user-defined post
