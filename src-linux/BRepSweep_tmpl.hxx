#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoMoreObject.hxx>

// module includes
#include <BRepSweep_Translation.hxx>
#include <BRepSweep_Trsf.hxx>
#include <BRepSweep_Builder.hxx>
#include <BRepSweep_Tool.hxx>
#include <BRepSweep_Iterator.hxx>
#include <BRepSweep_Rotation.hxx>
#include <BRepSweep_Revol.hxx>
#include <BRepSweep_NumLinearRegularSweep.hxx>
#include <BRepSweep_Prism.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepSweep_Translation.hxx
// ./opencascade/BRepSweep_Trsf.hxx
// ./opencascade/BRepSweep_Builder.hxx
// ./opencascade/BRepSweep_Tool.hxx
// ./opencascade/BRepSweep_Iterator.hxx
// ./opencascade/BRepSweep_Rotation.hxx
// ./opencascade/BRepSweep_Revol.hxx
// ./opencascade/BRepSweep_NumLinearRegularSweep.hxx
// ./opencascade/BRepSweep_Prism.hxx

// user-defined post
