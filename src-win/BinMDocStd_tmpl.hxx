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
#include <BinMDocStd_XLinkDriver.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMDocStd.hxx>
#include <BinMDocStd_XLinkDriver.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\BinMDocStd.hxx
// ./opencascade\BinMDocStd_XLinkDriver.hxx

// user-defined post
