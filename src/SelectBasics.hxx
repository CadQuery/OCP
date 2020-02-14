#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <SelectBasics_PickResult.hxx>
#include <SelectBasics_EntityOwner.hxx>
#include <SelectBasics_SelectingVolumeManager.hxx>
#include <SelectBasics_SensitiveEntity.hxx>
#include <SelectBasics.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/SelectBasics_PickResult.hxx
// ./opencascade/SelectBasics_EntityOwner.hxx
// ./opencascade/SelectBasics_SelectingVolumeManager.hxx
// ./opencascade/SelectBasics_SensitiveEntity.hxx
// ./opencascade/SelectBasics.hxx

// user-defined post
