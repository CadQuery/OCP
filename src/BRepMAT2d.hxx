#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <MAT_Graph.hxx>
#include <BRepMAT2d_Explorer.hxx>
#include <Geom2d_Geometry.hxx>
#include <MAT_Node.hxx>
#include <MAT_Arc.hxx>
#include <BRepMAT2d_Explorer.hxx>
#include <BRepMAT2d_BisectingLocus.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>

// module includes
#include <BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt.hxx>
#include <BRepMAT2d_BisectingLocus.hxx>
#include <BRepMAT2d_LinkTopoBilo.hxx>
#include <BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx>
#include <BRepMAT2d_Explorer.hxx>
#include <BRepMAT2d_DataMapOfBasicEltShape.hxx>
#include <BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt.hxx
// ./opencascade/BRepMAT2d_BisectingLocus.hxx
// ./opencascade/BRepMAT2d_LinkTopoBilo.hxx
// ./opencascade/BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx
// ./opencascade/BRepMAT2d_Explorer.hxx
// ./opencascade/BRepMAT2d_DataMapOfBasicEltShape.hxx
// ./opencascade/BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape.hxx

// user-defined post
