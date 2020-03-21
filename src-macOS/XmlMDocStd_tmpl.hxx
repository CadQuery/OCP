#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDocStd_XLinkDriver.hxx>

// module includes
#include <XmlMDocStd_XLinkDriver.hxx>
#include <XmlMDocStd.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/XmlMDocStd_XLinkDriver.hxx
// ./opencascade/XmlMDocStd.hxx

// user-defined post
