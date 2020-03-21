#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_VertexList.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Face.hxx>
#include <IGESSolid_Loop.hxx>
#include <TopoDS_Wire.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESSolid_Shell.hxx>
#include <TopoDS_Shell.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>

// module includes
#include <BRepToIGESBRep_Entity.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepToIGESBRep_Entity.hxx

// user-defined post
