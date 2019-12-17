#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TCollection_AsciiString.hxx>

// module includes
#include <Image_PixMapData.hxx>
#include <Image_VideoRecorder.hxx>
#include <Image_PixMap.hxx>
#include <Image_AlienPixMap.hxx>
#include <Image_Diff.hxx>
#include <Image_Color.hxx>
#include <Image_Format.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Image_PixMapData.hxx
// ./opencascade/Image_VideoRecorder.hxx
// ./opencascade/Image_PixMap.hxx
// ./opencascade/Image_AlienPixMap.hxx
// ./opencascade/Image_Diff.hxx
// ./opencascade/Image_Color.hxx
// ./opencascade/Image_Format.hxx

// user-defined post
