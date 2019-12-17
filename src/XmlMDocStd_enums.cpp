
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMDocStd_XLinkDriver.hxx>

// module includes
#include <XmlMDocStd.hxx>
#include <XmlMDocStd_XLinkDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMDocStd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XmlMDocStd", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<XmlMDocStd_XLinkDriver ,opencascade::handle<XmlMDocStd_XLinkDriver>  , XmlMDF_ADriver >(m,"XmlMDocStd_XLinkDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMDocStd ,std::unique_ptr<XmlMDocStd>  >(m,"XmlMDocStd",R"#(Driver for TDocStd_XLink)#");

// pre-register typdefs
// ./opencascade/XmlMDocStd_XLinkDriver.hxx
// ./opencascade/XmlMDocStd.hxx

};

// user-defined post-inclusion per module

// user-defined post
