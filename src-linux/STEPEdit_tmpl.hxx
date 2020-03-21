#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Interface_Protocol.hxx>
#include <StepData_StepModel.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_SelectSignature.hxx>
#include <STEPEdit_EditContext.hxx>
#include <STEPEdit_EditSDR.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>

// module includes
#include <STEPEdit.hxx>
#include <STEPEdit_EditContext.hxx>
#include <STEPEdit_EditSDR.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/STEPEdit.hxx
// ./opencascade/STEPEdit_EditContext.hxx
// ./opencascade/STEPEdit_EditSDR.hxx

// user-defined post
