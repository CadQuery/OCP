
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMDocStd_XLinkDriver.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMDocStd.hxx>
#include <BinMDocStd_XLinkDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMDocStd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinMDocStd", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BinMDocStd , shared_ptr<BinMDocStd> >(m,"BinMDocStd",R"#(Storage and Retrieval drivers for TDocStd modelling attributes.)#");
    py::class_<BinMDocStd_XLinkDriver ,opencascade::handle<BinMDocStd_XLinkDriver> , BinMDF_ADriver>(m,"BinMDocStd_XLinkDriver",R"#(XLink attribute Driver.XLink attribute Driver.XLink attribute Driver.)#");

};

// user-defined post-inclusion per module

// user-defined post
