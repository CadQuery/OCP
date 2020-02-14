#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Data.hxx>

// module includes
#include <BinObjMgt_PByte.hxx>
#include <BinObjMgt_PShortReal.hxx>
#include <BinObjMgt_PChar.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinObjMgt_PInteger.hxx>
#include <BinObjMgt_PReal.hxx>
#include <BinObjMgt_SRelocationTable.hxx>
#include <BinObjMgt_PExtChar.hxx>
#include <BinObjMgt_RRelocationTable.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BinObjMgt_PByte.hxx
// ./opencascade/BinObjMgt_PShortReal.hxx
// ./opencascade/BinObjMgt_PChar.hxx
// ./opencascade/BinObjMgt_Persistent.hxx
// ./opencascade/BinObjMgt_PInteger.hxx
// ./opencascade/BinObjMgt_PReal.hxx
// ./opencascade/BinObjMgt_SRelocationTable.hxx
// ./opencascade/BinObjMgt_PExtChar.hxx
// ./opencascade/BinObjMgt_RRelocationTable.hxx

// user-defined post
