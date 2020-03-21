#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Trsf2d.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Plane.hxx>
#include <ShapeBuild_Vertex.hxx>
#include <ShapeBuild_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>

// module includes
#include <ShapeBuild_Edge.hxx>
#include <ShapeBuild_Vertex.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeBuild.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/ShapeBuild_Edge.hxx
// ./opencascade/ShapeBuild_Vertex.hxx
// ./opencascade/ShapeBuild_ReShape.hxx
// ./opencascade/ShapeBuild.hxx

// user-defined post
