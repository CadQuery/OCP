#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Lin2d.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_Edge.hxx>

// module includes
#include <BRepClass_FClassifier.hxx>
#include <BRepClass_FaceExplorer.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_FacePassiveClassifier.hxx>
#include <BRepClass_FClass2dOfFClassifier.hxx>
#include <BRepClass_FaceClassifier.hxx>
#include <BRepClass_Intersector.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepClass_FClassifier.hxx
// ./opencascade/BRepClass_FaceExplorer.hxx
// ./opencascade/BRepClass_Edge.hxx
// ./opencascade/BRepClass_FacePassiveClassifier.hxx
// ./opencascade/BRepClass_FClass2dOfFClassifier.hxx
// ./opencascade/BRepClass_FaceClassifier.hxx
// ./opencascade/BRepClass_Intersector.hxx

// user-defined post
