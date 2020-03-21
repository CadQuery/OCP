#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Graphic3d_StructureManager.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <TopoDS_Face.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <V3d_View.hxx>
#include <StdSelect_Shape.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <StdSelect_BRepSelectionTool.hxx>
#include <StdSelect_BRepOwner.hxx>
#include <StdSelect_EdgeFilter.hxx>
#include <StdSelect_FaceFilter.hxx>
#include <StdSelect_ShapeTypeFilter.hxx>
#include <StdSelect_Prs.hxx>
#include <StdSelect_Shape.hxx>

// module includes
#include <StdSelect_Prs.hxx>
#include <StdSelect_TypeOfEdge.hxx>
#include <StdSelect_FaceFilter.hxx>
#include <StdSelect_BRepSelectionTool.hxx>
#include <StdSelect_IndexedDataMapOfOwnerPrs.hxx>
#include <StdSelect_ShapeTypeFilter.hxx>
#include <StdSelect_Shape.hxx>
#include <StdSelect_ViewerSelector3d.hxx>
#include <StdSelect_DisplayMode.hxx>
#include <StdSelect_TypeOfSelectionImage.hxx>
#include <StdSelect_BRepOwner.hxx>
#include <StdSelect_EdgeFilter.hxx>
#include <StdSelect.hxx>
#include <StdSelect_SensitivityMode.hxx>
#include <StdSelect_TypeOfFace.hxx>
#include <StdSelect_TypeOfResult.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StdSelect_Prs.hxx
// ./opencascade/StdSelect_TypeOfEdge.hxx
// ./opencascade/StdSelect_FaceFilter.hxx
// ./opencascade/StdSelect_BRepSelectionTool.hxx
// ./opencascade/StdSelect_IndexedDataMapOfOwnerPrs.hxx
// ./opencascade/StdSelect_ShapeTypeFilter.hxx
// ./opencascade/StdSelect_Shape.hxx
// ./opencascade/StdSelect_ViewerSelector3d.hxx
// ./opencascade/StdSelect_DisplayMode.hxx
// ./opencascade/StdSelect_TypeOfSelectionImage.hxx
// ./opencascade/StdSelect_BRepOwner.hxx
// ./opencascade/StdSelect_EdgeFilter.hxx
// ./opencascade/StdSelect.hxx
// ./opencascade/StdSelect_SensitivityMode.hxx
// ./opencascade/StdSelect_TypeOfFace.hxx
// ./opencascade/StdSelect_TypeOfResult.hxx

// user-defined post
