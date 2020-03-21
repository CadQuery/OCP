
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
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <BinMFunction_FunctionDriver.hxx>
#include <BinMFunction_GraphNodeDriver.hxx>
#include <BinMFunction_ScopeDriver.hxx>

// module includes
#include <BinMFunction.hxx>
#include <BinMFunction_FunctionDriver.hxx>
#include <BinMFunction_GraphNodeDriver.hxx>
#include <BinMFunction_ScopeDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMFunction_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinMFunction", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BinMFunction , shared_ptr<BinMFunction> >(m,"BinMFunction",R"#(Storage and Retrieval drivers for TFunction modelling attributes.)#");
    py::class_<BinMFunction_FunctionDriver ,opencascade::handle<BinMFunction_FunctionDriver> , BinMDF_ADriver>(m,"BinMFunction_FunctionDriver",R"#(Function attribute Driver.Function attribute Driver.Function attribute Driver.)#");
    py::class_<BinMFunction_GraphNodeDriver ,opencascade::handle<BinMFunction_GraphNodeDriver> , BinMDF_ADriver>(m,"BinMFunction_GraphNodeDriver",R"#(GraphNode attribute Driver.GraphNode attribute Driver.GraphNode attribute Driver.)#");
    py::class_<BinMFunction_ScopeDriver ,opencascade::handle<BinMFunction_ScopeDriver> , BinMDF_ADriver>(m,"BinMFunction_ScopeDriver",R"#(Scope attribute Driver.Scope attribute Driver.Scope attribute Driver.)#");

};

// user-defined post-inclusion per module

// user-defined post
