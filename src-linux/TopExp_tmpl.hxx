#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopExp_Explorer.hxx>

// module includes
#include <TopExp_Explorer.hxx>
#include <TopExp_Stack.hxx>
#include <TopExp.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/TopExp_Explorer.hxx
// ./opencascade/TopExp_Stack.hxx
// ./opencascade/TopExp.hxx

// user-defined post
