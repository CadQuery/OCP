#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamWriteError.hxx>
#include <Storage_HeaderData.hxx>
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamWriteError.hxx>

// module includes
#include <FSD_BStream.hxx>
#include <FSD_FStream.hxx>
#include <FSD_BinaryFile.hxx>
#include <FSD_CmpFile.hxx>
#include <FSD_FileHeader.hxx>
#include <FSD_File.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/FSD_BStream.hxx
// ./opencascade/FSD_FStream.hxx
// ./opencascade/FSD_BinaryFile.hxx
// ./opencascade/FSD_CmpFile.hxx
// ./opencascade/FSD_FileHeader.hxx
// ./opencascade/FSD_File.hxx

// user-defined post
