#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeSweep.hxx>
#include <BRepPrimAPI_MakeBox.hxx>
#include <BRepPrimAPI_MakeCylinder.hxx>
#include <BRepPrimAPI_MakeSphere.hxx>
#include <BRepPrimAPI_MakeHalfSpace.hxx>
#include <BRepPrimAPI_MakeRevolution.hxx>
#include <BRepPrimAPI_MakeOneAxis.hxx>
#include <BRepPrimAPI_MakeWedge.hxx>
#include <BRepPrimAPI_MakeTorus.hxx>
#include <BRepPrimAPI_MakeRevol.hxx>
#include <BRepPrimAPI_MakeCone.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepPrimAPI_MakePrism.hxx
// ./opencascade/BRepPrimAPI_MakeSweep.hxx
// ./opencascade/BRepPrimAPI_MakeBox.hxx
// ./opencascade/BRepPrimAPI_MakeCylinder.hxx
// ./opencascade/BRepPrimAPI_MakeSphere.hxx
// ./opencascade/BRepPrimAPI_MakeHalfSpace.hxx
// ./opencascade/BRepPrimAPI_MakeRevolution.hxx
// ./opencascade/BRepPrimAPI_MakeOneAxis.hxx
// ./opencascade/BRepPrimAPI_MakeWedge.hxx
// ./opencascade/BRepPrimAPI_MakeTorus.hxx
// ./opencascade/BRepPrimAPI_MakeRevol.hxx
// ./opencascade/BRepPrimAPI_MakeCone.hxx

// user-defined post
