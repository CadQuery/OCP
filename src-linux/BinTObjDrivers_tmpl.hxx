#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <BinTObjDrivers_ModelDriver.hxx>
#include <BinTObjDrivers_DocumentStorageDriver.hxx>
#include <BinTObjDrivers.hxx>
#include <BinTObjDrivers_DocumentRetrievalDriver.hxx>
#include <BinTObjDrivers_ReferenceDriver.hxx>
#include <BinTObjDrivers_IntSparseArrayDriver.hxx>
#include <BinTObjDrivers_ObjectDriver.hxx>
#include <BinTObjDrivers_XYZDriver.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BinTObjDrivers_ModelDriver.hxx
// ./opencascade/BinTObjDrivers_DocumentStorageDriver.hxx
// ./opencascade/BinTObjDrivers.hxx
// ./opencascade/BinTObjDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/BinTObjDrivers_ReferenceDriver.hxx
// ./opencascade/BinTObjDrivers_IntSparseArrayDriver.hxx
// ./opencascade/BinTObjDrivers_ObjectDriver.hxx
// ./opencascade/BinTObjDrivers_XYZDriver.hxx

// user-defined post
