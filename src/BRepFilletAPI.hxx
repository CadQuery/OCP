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
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <StdFail_NotDone.hxx>
#include <Law_Function.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <Geom_Surface.hxx>

// module includes
#include <BRepFilletAPI_LocalOperation.hxx>
#include <BRepFilletAPI_MakeChamfer.hxx>
#include <BRepFilletAPI_MakeFillet2d.hxx>
#include <BRepFilletAPI_MakeFillet.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepFilletAPI_LocalOperation.hxx
// ./opencascade/BRepFilletAPI_MakeChamfer.hxx
// ./opencascade/BRepFilletAPI_MakeFillet2d.hxx
// ./opencascade/BRepFilletAPI_MakeFillet.hxx

// user-defined post
