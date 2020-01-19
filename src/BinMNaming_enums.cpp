
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMNaming_NamedShapeDriver.hxx>
#include <BinMNaming_NamingDriver.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMNaming.hxx>
#include <BinMNaming_NamedShapeDriver.hxx>
#include <BinMNaming_NamingDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMNaming_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinMNaming", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BinMNaming , shared_ptr<BinMNaming>  >(m,"BinMNaming",R"#(Storage/Retrieval drivers for TNaming attributes)#");
    py::class_<BinMNaming_NamedShapeDriver ,opencascade::handle<BinMNaming_NamedShapeDriver>  , BinMDF_ADriver >(m,"BinMNaming_NamedShapeDriver",R"#(NamedShape Attribute Driver.NamedShape Attribute Driver.NamedShape Attribute Driver.)#");
    py::class_<BinMNaming_NamingDriver ,opencascade::handle<BinMNaming_NamingDriver>  , BinMDF_ADriver >(m,"BinMNaming_NamingDriver",R"#(Naming Attribute Driver.Naming Attribute Driver.Naming Attribute Driver.)#");

};

// user-defined post-inclusion per module

// user-defined post
