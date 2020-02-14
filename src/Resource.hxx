#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TCollection_ExtendedString.hxx>
#include <TCollection_AsciiString.hxx>

// module includes
#include <Resource_DataMapIteratorOfDataMapOfAsciiStringAsciiString.hxx>
#include <Resource_ConvertUnicode.hxx>
#include <Resource_DataMapOfAsciiStringAsciiString.hxx>
#include <Resource_FormatType.hxx>
#include <Resource_DataMapOfAsciiStringExtendedString.hxx>
#include <Resource_Manager.hxx>
#include <Resource_Unicode.hxx>
#include <Resource_NoSuchResource.hxx>
#include <Resource_LexicalCompare.hxx>
#include <Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Resource_DataMapIteratorOfDataMapOfAsciiStringAsciiString.hxx
// ./opencascade/Resource_ConvertUnicode.hxx
// ./opencascade/Resource_DataMapOfAsciiStringAsciiString.hxx
// ./opencascade/Resource_FormatType.hxx
// ./opencascade/Resource_DataMapOfAsciiStringExtendedString.hxx
// ./opencascade/Resource_Manager.hxx
// ./opencascade/Resource_Unicode.hxx
// ./opencascade/Resource_NoSuchResource.hxx
// ./opencascade/Resource_LexicalCompare.hxx
// ./opencascade/Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString.hxx

// user-defined post
