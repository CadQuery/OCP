#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMDocStd_XLinkDriver.hxx>

// module includes
#include <BinMDocStd_XLinkDriver.hxx>
#include <BinMDocStd.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BinMDocStd_XLinkDriver.hxx
// ./opencascade/BinMDocStd.hxx

// user-defined post
