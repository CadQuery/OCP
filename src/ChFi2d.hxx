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
#include <ChFi2d_Builder.hxx>

// module includes
#include <ChFi2d_ConstructionError.hxx>
#include <ChFi2d_FilletAlgo.hxx>
#include <ChFi2d_FilletAPI.hxx>
#include <ChFi2d.hxx>
#include <ChFi2d_ChamferAPI.hxx>
#include <ChFi2d_Builder.hxx>
#include <ChFi2d_AnaFilletAlgo.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/ChFi2d_ConstructionError.hxx
// ./opencascade/ChFi2d_FilletAlgo.hxx
// ./opencascade/ChFi2d_FilletAPI.hxx
// ./opencascade/ChFi2d.hxx
// ./opencascade/ChFi2d_ChamferAPI.hxx
// ./opencascade/ChFi2d_Builder.hxx
// ./opencascade/ChFi2d_AnaFilletAlgo.hxx

// user-defined post
