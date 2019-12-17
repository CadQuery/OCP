#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Lin2d.hxx>

// module includes
#include <Geom2dHatch_DataMapIteratorOfMapOfElements.hxx>
#include <Geom2dHatch_Hatcher.hxx>
#include <Geom2dHatch_FClass2dOfClassifier.hxx>
#include <Geom2dHatch_Hatching.hxx>
#include <Geom2dHatch_Element.hxx>
#include <Geom2dHatch_Classifier.hxx>
#include <Geom2dHatch_MapOfElements.hxx>
#include <Geom2dHatch_Elements.hxx>
#include <Geom2dHatch_Hatchings.hxx>
#include <Geom2dHatch_DataMapIteratorOfHatchings.hxx>
#include <Geom2dHatch_Intersector.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Geom2dHatch_DataMapIteratorOfMapOfElements.hxx
// ./opencascade/Geom2dHatch_Hatcher.hxx
// ./opencascade/Geom2dHatch_FClass2dOfClassifier.hxx
// ./opencascade/Geom2dHatch_Hatching.hxx
// ./opencascade/Geom2dHatch_Element.hxx
// ./opencascade/Geom2dHatch_Classifier.hxx
// ./opencascade/Geom2dHatch_MapOfElements.hxx
// ./opencascade/Geom2dHatch_Elements.hxx
// ./opencascade/Geom2dHatch_Hatchings.hxx
// ./opencascade/Geom2dHatch_DataMapIteratorOfHatchings.hxx
// ./opencascade/Geom2dHatch_Intersector.hxx

// user-defined post
