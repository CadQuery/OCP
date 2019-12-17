#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <Font_FTFont.hxx>
#include <Font_FTLibrary.hxx>

// module includes
#include <Font_SystemFont.hxx>
#include <Font_NListOfSystemFont.hxx>
#include <Font_BRepFont.hxx>
#include <Font_Rect.hxx>
#include <Font_FontMgr.hxx>
#include <Font_FTLibrary.hxx>
#include <Font_TextFormatter.hxx>
#include <Font_FTFont.hxx>
#include <Font_FontAspect.hxx>
#include <Font_BRepTextBuilder.hxx>
#include <Font_NameOfFont.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Font_SystemFont.hxx
// ./opencascade/Font_NListOfSystemFont.hxx
// ./opencascade/Font_BRepFont.hxx
// ./opencascade/Font_Rect.hxx
// ./opencascade/Font_FontMgr.hxx
// ./opencascade/Font_FTLibrary.hxx
// ./opencascade/Font_TextFormatter.hxx
// ./opencascade/Font_FTFont.hxx
// ./opencascade/Font_FontAspect.hxx
// ./opencascade/Font_BRepTextBuilder.hxx
// ./opencascade/Font_NameOfFont.hxx

// user-defined post
