#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_AsciiString.hxx>
#include <BinDrivers_DocumentStorageDriver.hxx>
#include <BinDrivers_DocumentRetrievalDriver.hxx>
#include <TDocStd_Application.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>

// module includes
#include <BinDrivers.hxx>
#include <BinDrivers_DocumentRetrievalDriver.hxx>
#include <BinDrivers_Marker.hxx>
#include <BinDrivers_DocumentStorageDriver.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BinDrivers.hxx
// ./opencascade/BinDrivers_DocumentRetrievalDriver.hxx
// ./opencascade/BinDrivers_Marker.hxx
// ./opencascade/BinDrivers_DocumentStorageDriver.hxx

// user-defined post
