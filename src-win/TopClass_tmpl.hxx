#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Pnt.hxx>
#include <gp_Lin.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <TopClass_SolidExplorer.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\TopClass_SolidExplorer.hxx

// user-defined post
