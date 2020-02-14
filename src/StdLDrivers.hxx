#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Standard_GUID.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <StdLDrivers_DocumentRetrievalDriver.hxx>
#include <StdLDrivers.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StdLDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/StdLDrivers.hxx

// user-defined post
