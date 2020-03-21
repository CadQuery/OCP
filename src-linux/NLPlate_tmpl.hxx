#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom_Surface.hxx>
#include <gp_XYZ.hxx>
#include <Plate_D1.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>

// module includes
#include <NLPlate_HPG2Constraint.hxx>
#include <NLPlate_StackOfPlate.hxx>
#include <NLPlate_HPG0G3Constraint.hxx>
#include <NLPlate_ListIteratorOfStackOfPlate.hxx>
#include <NLPlate_HPG0Constraint.hxx>
#include <NLPlate_HPG0G2Constraint.hxx>
#include <NLPlate_SequenceOfHGPPConstraint.hxx>
#include <NLPlate_HPG0G1Constraint.hxx>
#include <NLPlate_NLPlate.hxx>
#include <NLPlate_HPG1Constraint.hxx>
#include <NLPlate_HGPPConstraint.hxx>
#include <NLPlate_HPG3Constraint.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/NLPlate_HPG2Constraint.hxx
// ./opencascade/NLPlate_StackOfPlate.hxx
// ./opencascade/NLPlate_HPG0G3Constraint.hxx
// ./opencascade/NLPlate_ListIteratorOfStackOfPlate.hxx
// ./opencascade/NLPlate_HPG0Constraint.hxx
// ./opencascade/NLPlate_HPG0G2Constraint.hxx
// ./opencascade/NLPlate_SequenceOfHGPPConstraint.hxx
// ./opencascade/NLPlate_HPG0G1Constraint.hxx
// ./opencascade/NLPlate_NLPlate.hxx
// ./opencascade/NLPlate_HPG1Constraint.hxx
// ./opencascade/NLPlate_HGPPConstraint.hxx
// ./opencascade/NLPlate_HPG3Constraint.hxx

// user-defined post
