#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <GccEnt_QualifiedLin.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Circ2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt_QualifiedCirc.hxx>

// module includes
#include <GccEnt_Position.hxx>
#include <GccEnt_Array1OfPosition.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt.hxx>
#include <GccEnt_QualifiedCirc.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/GccEnt_Position.hxx
// ./opencascade/GccEnt_Array1OfPosition.hxx
// ./opencascade/GccEnt_BadQualifier.hxx
// ./opencascade/GccEnt_QualifiedLin.hxx
// ./opencascade/GccEnt.hxx
// ./opencascade/GccEnt_QualifiedCirc.hxx

// user-defined post
