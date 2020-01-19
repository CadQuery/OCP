#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Ax1.hxx>
#include <gp_Ax3.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Trsf.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax3.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <gp_Pln.hxx>

// module includes
#include <Bnd_B3d.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_Array1OfBox.hxx>
#include <Bnd_Array1OfBox2d.hxx>
#include <Bnd_Range.hxx>
#include <Bnd_SeqOfBox.hxx>
#include <Bnd_Array1OfSphere.hxx>
#include <Bnd_B2f.hxx>
#include <Bnd_BoundSortBox2d.hxx>
#include <Bnd_HArray1OfBox2d.hxx>
#include <Bnd_HArray1OfBox.hxx>
#include <Bnd_OBB.hxx>
#include <Bnd_B3f.hxx>
#include <Bnd_B2d.hxx>
#include <Bnd_HArray1OfSphere.hxx>
#include <Bnd_Sphere.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <Bnd_Box2d.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Bnd_B3d.hxx
// ./opencascade/Bnd_Box.hxx
// ./opencascade/Bnd_Array1OfBox.hxx
// ./opencascade/Bnd_Array1OfBox2d.hxx
// ./opencascade/Bnd_Range.hxx
// ./opencascade/Bnd_SeqOfBox.hxx
// ./opencascade/Bnd_Array1OfSphere.hxx
// ./opencascade/Bnd_B2f.hxx
// ./opencascade/Bnd_BoundSortBox2d.hxx
// ./opencascade/Bnd_HArray1OfBox2d.hxx
// ./opencascade/Bnd_HArray1OfBox.hxx
// ./opencascade/Bnd_OBB.hxx
// ./opencascade/Bnd_B3f.hxx
// ./opencascade/Bnd_B2d.hxx
// ./opencascade/Bnd_HArray1OfSphere.hxx
// ./opencascade/Bnd_Sphere.hxx
// ./opencascade/Bnd_BoundSortBox.hxx
// ./opencascade/Bnd_Box2d.hxx

// user-defined post
