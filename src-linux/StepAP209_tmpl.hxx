#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepBasic_Product.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepData_StepModel.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>

// module includes
#include <StepAP209_Construct.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StepAP209_Construct.hxx

// user-defined post
