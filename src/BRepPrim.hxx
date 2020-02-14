#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <BRep_Builder.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pln.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>

// module includes
#include <BRepPrim_FaceBuilder.hxx>
#include <BRepPrim_GWedge.hxx>
#include <BRepPrim_Cylinder.hxx>
#include <BRepPrim_OneAxis.hxx>
#include <BRepPrim_Builder.hxx>
#include <BRepPrim_Revolution.hxx>
#include <BRepPrim_Sphere.hxx>
#include <BRepPrim_Direction.hxx>
#include <BRepPrim_Wedge.hxx>
#include <BRepPrim_Cone.hxx>
#include <BRepPrim_Torus.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepPrim_FaceBuilder.hxx
// ./opencascade/BRepPrim_GWedge.hxx
// ./opencascade/BRepPrim_Cylinder.hxx
// ./opencascade/BRepPrim_OneAxis.hxx
// ./opencascade/BRepPrim_Builder.hxx
// ./opencascade/BRepPrim_Revolution.hxx
// ./opencascade/BRepPrim_Sphere.hxx
// ./opencascade/BRepPrim_Direction.hxx
// ./opencascade/BRepPrim_Wedge.hxx
// ./opencascade/BRepPrim_Cone.hxx
// ./opencascade/BRepPrim_Torus.hxx

// user-defined post
