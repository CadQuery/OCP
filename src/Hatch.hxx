#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Hatch_Hatcher.hxx>
#include <Hatch_Line.hxx>
#include <Hatch_Hatcher.hxx>

// module includes
#include <Hatch_Line.hxx>
#include <Hatch_Parameter.hxx>
#include <Hatch_LineForm.hxx>
#include <Hatch_SequenceOfParameter.hxx>
#include <Hatch_SequenceOfLine.hxx>
#include <Hatch_Hatcher.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Hatch_Line.hxx
// ./opencascade/Hatch_Parameter.hxx
// ./opencascade/Hatch_LineForm.hxx
// ./opencascade/Hatch_SequenceOfParameter.hxx
// ./opencascade/Hatch_SequenceOfLine.hxx
// ./opencascade/Hatch_Hatcher.hxx

// user-defined post
