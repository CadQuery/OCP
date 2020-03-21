#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <gp_Ax1.hxx>
#include <Graphic3d_SequenceOfHClipPlane.hxx>
#include <SelectMgr_SelectableObject.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_SensitiveEntitySet.hxx>
#include <V3d_Viewer.hxx>
#include <SelectMgr_EntityOwner.hxx>

// module includes
#include <SelectMgr_SortCriterion.hxx>
#include <SelectMgr_RectangularFrustum.hxx>
#include <SelectMgr_Frustum.hxx>
#include <SelectMgr_SensitiveEntity.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_PickingStrategy.hxx>
#include <SelectMgr_VectorTypes.hxx>
#include <SelectMgr_ListOfFilter.hxx>
#include <SelectMgr_ListIteratorOfListOfFilter.hxx>
#include <SelectMgr_Filter.hxx>
#include <SelectMgr_IndexedMapOfOwner.hxx>
#include <SelectMgr_ViewClipRange.hxx>
#include <SelectMgr_CompositionFilter.hxx>
#include <SelectMgr_SOPtr.hxx>
#include <SelectMgr_TriangularFrustum.hxx>
#include <SelectMgr_TriangularFrustumSet.hxx>
#include <SelectMgr_AndFilter.hxx>
#include <SelectMgr_SequenceOfSelection.hxx>
#include <SelectMgr_OrFilter.hxx>
#include <SelectMgr_SelectableObject.hxx>
#include <SelectMgr_TypeOfBVHUpdate.hxx>
#include <SelectMgr_ViewerSelector.hxx>
#include <SelectMgr_FrustumBuilder.hxx>
#include <SelectMgr_StateOfSelection.hxx>
#include <SelectMgr_TypeOfUpdate.hxx>
#include <SelectMgr_ToleranceMap.hxx>
#include <SelectMgr_SelectingVolumeManager.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_SelectableObjectSet.hxx>
#include <SelectMgr_BaseFrustum.hxx>
#include <SelectMgr_SensitiveEntitySet.hxx>
#include <SelectMgr_Selection.hxx>
#include <SelectMgr_IndexedDataMapOfOwnerCriterion.hxx>
#include <SelectMgr_SequenceOfFilter.hxx>
#include <SelectMgr_SequenceOfOwner.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\SelectMgr_SortCriterion.hxx
// ./opencascade\SelectMgr_RectangularFrustum.hxx
// ./opencascade\SelectMgr_Frustum.hxx

template <int N>
void preregister_template_SelectMgr_Frustum(py::object &m, const char *name){
    py::class_<SelectMgr_Frustum<N> , shared_ptr<SelectMgr_Frustum<N>> >(m,name,R"#(This is an internal class containing representation of rectangular selecting frustum, created in case of point and box selection, and algorithms for overlap detection between selecting frustum and sensitive entities. The principle of frustum calculation: - for point selection: on a near view frustum plane rectangular neighborhood of user-picked point is created according to the pixel tolerance given and then this rectangle is projected onto far view frustum plane. This rectangles define the parallel bases of selecting frustum; - for box selection: box points are projected onto near and far view frustum planes. These 2 projected rectangles define parallel bases of selecting frustum. Overlap detection tests are implemented according to the terms of separating axis theorem (SAT). Vertex order: - for triangular frustum: V0_Near, V1_Near, V2_Near, V0_Far, V1_Far, V2_Far; - for rectangular frustum: LeftTopNear, LeftTopFar, LeftBottomNear,LeftBottomFar, RightTopNear, RightTopFar, RightBottomNear, RightBottomFar. Plane order in array: - for triangular frustum: V0V1, V1V2, V0V2, Near, Far; - for rectangular frustum: Top, Bottom, Left, Right, Near, Far. Uncollinear edge directions order: - for rectangular frustum: Horizontal, Vertical, LeftLower, RightLower, LeftUpper, RightUpper; - for triangular frustum: V0_Near - V0_Far, V1_Near - V1_Far, V2_Near - V2_Far, V1_Near - V0_Near, V2_Near - V1_Near, V2_Near - V0_Near.)#");
}

template <int N>
void register_template_SelectMgr_Frustum(py::object &m, const char *name){
    static_cast<py::class_<SelectMgr_Frustum<N> , shared_ptr<SelectMgr_Frustum<N>> >>(m.attr(name))
        .def(py::init<  >()  )
    ;
};
// ./opencascade\SelectMgr_SensitiveEntity.hxx
// ./opencascade\SelectMgr_SelectionManager.hxx
// ./opencascade\SelectMgr_PickingStrategy.hxx
// ./opencascade\SelectMgr_VectorTypes.hxx
// ./opencascade\SelectMgr_ListOfFilter.hxx
// ./opencascade\SelectMgr_ListIteratorOfListOfFilter.hxx
// ./opencascade\SelectMgr_Filter.hxx
// ./opencascade\SelectMgr_IndexedMapOfOwner.hxx
// ./opencascade\SelectMgr_ViewClipRange.hxx
// ./opencascade\SelectMgr_CompositionFilter.hxx
// ./opencascade\SelectMgr_SOPtr.hxx
// ./opencascade\SelectMgr_TriangularFrustum.hxx
// ./opencascade\SelectMgr_TriangularFrustumSet.hxx
// ./opencascade\SelectMgr_AndFilter.hxx
// ./opencascade\SelectMgr_SequenceOfSelection.hxx
// ./opencascade\SelectMgr_OrFilter.hxx
// ./opencascade\SelectMgr_SelectableObject.hxx
// ./opencascade\SelectMgr_TypeOfBVHUpdate.hxx
// ./opencascade\SelectMgr_ViewerSelector.hxx
// ./opencascade\SelectMgr_FrustumBuilder.hxx
// ./opencascade\SelectMgr_StateOfSelection.hxx
// ./opencascade\SelectMgr_TypeOfUpdate.hxx
// ./opencascade\SelectMgr_ToleranceMap.hxx
// ./opencascade\SelectMgr_SelectingVolumeManager.hxx
// ./opencascade\SelectMgr_EntityOwner.hxx
// ./opencascade\SelectMgr_SelectableObjectSet.hxx
// ./opencascade\SelectMgr_BaseFrustum.hxx
// ./opencascade\SelectMgr_SensitiveEntitySet.hxx
// ./opencascade\SelectMgr_Selection.hxx
// ./opencascade\SelectMgr_IndexedDataMapOfOwnerCriterion.hxx
// ./opencascade\SelectMgr_SequenceOfFilter.hxx
// ./opencascade\SelectMgr_SequenceOfOwner.hxx

// user-defined post
