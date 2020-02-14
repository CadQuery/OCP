#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TDocStd_Application.hxx>

// module includes
#include <XmlTObjDrivers_ReferenceDriver.hxx>
#include <XmlTObjDrivers_DocumentRetrievalDriver.hxx>
#include <XmlTObjDrivers_ObjectDriver.hxx>
#include <XmlTObjDrivers_DocumentStorageDriver.hxx>
#include <XmlTObjDrivers_ModelDriver.hxx>
#include <XmlTObjDrivers_IntSparseArrayDriver.hxx>
#include <XmlTObjDrivers.hxx>
#include <XmlTObjDrivers_XYZDriver.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/XmlTObjDrivers_ReferenceDriver.hxx
// ./opencascade/XmlTObjDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/XmlTObjDrivers_ObjectDriver.hxx
// ./opencascade/XmlTObjDrivers_DocumentStorageDriver.hxx
// ./opencascade/XmlTObjDrivers_ModelDriver.hxx
// ./opencascade/XmlTObjDrivers_IntSparseArrayDriver.hxx
// ./opencascade/XmlTObjDrivers.hxx
// ./opencascade/XmlTObjDrivers_XYZDriver.hxx

// user-defined post
