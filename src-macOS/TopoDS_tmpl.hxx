#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Builder.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_HShape.hxx>
#include <TopoDS_TVertex.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_TEdge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_TWire.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_TFace.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_TShell.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_TSolid.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_TCompSolid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_TCompound.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Builder.hxx>
#include <TopoDS_Iterator.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_FrozenShape.hxx>
#include <TopoDS_UnCompatibleShapes.hxx>

// module includes
#include <TopoDS_AlertWithShape.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_TFace.hxx>
#include <TopoDS_TSolid.hxx>
#include <TopoDS_TShape.hxx>
#include <TopoDS_TShell.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_TEdge.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_UnCompatibleShapes.hxx>
#include <TopoDS_ListOfShape.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_TCompSolid.hxx>
#include <TopoDS_TCompound.hxx>
#include <TopoDS_LockedShape.hxx>
#include <TopoDS_HShape.hxx>
#include <TopoDS.hxx>
#include <TopoDS_ListIteratorOfListOfShape.hxx>
#include <TopoDS_FrozenShape.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_TWire.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_TVertex.hxx>
#include <TopoDS_Builder.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/TopoDS_AlertWithShape.hxx
// ./opencascade/TopoDS_Solid.hxx
// ./opencascade/TopoDS_TFace.hxx
// ./opencascade/TopoDS_TSolid.hxx
// ./opencascade/TopoDS_TShape.hxx
// ./opencascade/TopoDS_TShell.hxx
// ./opencascade/TopoDS_Shape.hxx
// ./opencascade/TopoDS_TEdge.hxx
// ./opencascade/TopoDS_Iterator.hxx
// ./opencascade/TopoDS_Shell.hxx
// ./opencascade/TopoDS_Face.hxx
// ./opencascade/TopoDS_Vertex.hxx
// ./opencascade/TopoDS_UnCompatibleShapes.hxx
// ./opencascade/TopoDS_ListOfShape.hxx
// ./opencascade/TopoDS_CompSolid.hxx
// ./opencascade/TopoDS_Edge.hxx
// ./opencascade/TopoDS_TCompSolid.hxx
// ./opencascade/TopoDS_TCompound.hxx
// ./opencascade/TopoDS_LockedShape.hxx
// ./opencascade/TopoDS_HShape.hxx
// ./opencascade/TopoDS.hxx
// ./opencascade/TopoDS_ListIteratorOfListOfShape.hxx
// ./opencascade/TopoDS_FrozenShape.hxx
// ./opencascade/TopoDS_Wire.hxx
// ./opencascade/TopoDS_TWire.hxx
// ./opencascade/TopoDS_Compound.hxx
// ./opencascade/TopoDS_TVertex.hxx
// ./opencascade/TopoDS_Builder.hxx

// user-defined post
