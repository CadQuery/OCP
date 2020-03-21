#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TCollection_ExtendedString.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_Data.hxx>
#include <OSD_Path.hxx>
#include <OSD_FileIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_GUID.hxx>
#include <Resource_Manager.hxx>

// module includes
#include <UTL.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\UTL.hxx

// user-defined post
