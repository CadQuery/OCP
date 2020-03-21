#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <SelectMgr_EntityOwner.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <Poly_Triangulation.hxx>
#include <Geom_Circle.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <SelectMgr_EntityOwner.hxx>

// module includes
#include <Select3D_SensitiveEntity.hxx>
#include <Select3D_BndBox3d.hxx>
#include <Select3D_TypeOfSensitivity.hxx>
#include <Select3D_SensitiveGroup.hxx>
#include <Select3D_SensitiveCurve.hxx>
#include <Select3D_BVHIndexBuffer.hxx>
#include <Select3D_SensitivePrimitiveArray.hxx>
#include <Select3D_SensitiveTriangle.hxx>
#include <Select3D_PointData.hxx>
#include <Select3D_BVHBuilder3d.hxx>
#include <Select3D_SensitivePoly.hxx>
#include <Select3D_SensitiveFace.hxx>
#include <Select3D_IndexedMapOfEntity.hxx>
#include <Select3D_SensitiveTriangulation.hxx>
#include <Select3D_SensitiveSegment.hxx>
#include <Select3D_SensitiveCircle.hxx>
#include <Select3D_EntitySequence.hxx>
#include <Select3D_SensitiveSet.hxx>
#include <Select3D_SensitiveBox.hxx>
#include <Select3D_InteriorSensitivePointSet.hxx>
#include <Select3D_Pnt.hxx>
#include <Select3D_SensitivePoint.hxx>
#include <Select3D_SensitiveWire.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\Select3D_SensitiveEntity.hxx
// ./opencascade\Select3D_BndBox3d.hxx
// ./opencascade\Select3D_TypeOfSensitivity.hxx
// ./opencascade\Select3D_SensitiveGroup.hxx
// ./opencascade\Select3D_SensitiveCurve.hxx
// ./opencascade\Select3D_BVHIndexBuffer.hxx
// ./opencascade\Select3D_SensitivePrimitiveArray.hxx
// ./opencascade\Select3D_SensitiveTriangle.hxx
// ./opencascade\Select3D_PointData.hxx
// ./opencascade\Select3D_BVHBuilder3d.hxx
// ./opencascade\Select3D_SensitivePoly.hxx
// ./opencascade\Select3D_SensitiveFace.hxx
// ./opencascade\Select3D_IndexedMapOfEntity.hxx
// ./opencascade\Select3D_SensitiveTriangulation.hxx
// ./opencascade\Select3D_SensitiveSegment.hxx
// ./opencascade\Select3D_SensitiveCircle.hxx
// ./opencascade\Select3D_EntitySequence.hxx
// ./opencascade\Select3D_SensitiveSet.hxx
// ./opencascade\Select3D_SensitiveBox.hxx
// ./opencascade\Select3D_InteriorSensitivePointSet.hxx
// ./opencascade\Select3D_Pnt.hxx
// ./opencascade\Select3D_SensitivePoint.hxx
// ./opencascade\Select3D_SensitiveWire.hxx

// user-defined post
