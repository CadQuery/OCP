#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <BRepAdaptor_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <BRepTopAdaptor_SeqOfPtr.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <BRepTopAdaptor_HVertex.hxx>
#include <BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool.hxx>
#include <BRepTopAdaptor_Tool.hxx>
#include <BRepTopAdaptor_MapOfShapeTool.hxx>
#include <BRepTopAdaptor_FClass2d.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepTopAdaptor_SeqOfPtr.hxx
// ./opencascade/BRepTopAdaptor_TopolTool.hxx
// ./opencascade/BRepTopAdaptor_HVertex.hxx
// ./opencascade/BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool.hxx
// ./opencascade/BRepTopAdaptor_Tool.hxx
// ./opencascade/BRepTopAdaptor_MapOfShapeTool.hxx
// ./opencascade/BRepTopAdaptor_FClass2d.hxx

// user-defined post
