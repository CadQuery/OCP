
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
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <XmlMFunction_FunctionDriver.hxx>
#include <XmlMFunction_ScopeDriver.hxx>
#include <XmlMFunction_GraphNodeDriver.hxx>

// module includes
#include <XmlMFunction.hxx>
#include <XmlMFunction_FunctionDriver.hxx>
#include <XmlMFunction_GraphNodeDriver.hxx>
#include <XmlMFunction_ScopeDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMFunction_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XmlMFunction", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<XmlMFunction , shared_ptr<XmlMFunction>  >(m,"XmlMFunction",R"#(None)#");
    py::class_<XmlMFunction_FunctionDriver ,opencascade::handle<XmlMFunction_FunctionDriver>  , XmlMDF_ADriver >(m,"XmlMFunction_FunctionDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<XmlMFunction_GraphNodeDriver ,opencascade::handle<XmlMFunction_GraphNodeDriver>  , XmlMDF_ADriver >(m,"XmlMFunction_GraphNodeDriver",R"#(XML persistence driver for dependencies of a function.XML persistence driver for dependencies of a function.XML persistence driver for dependencies of a function.)#");
    py::class_<XmlMFunction_ScopeDriver ,opencascade::handle<XmlMFunction_ScopeDriver>  , XmlMDF_ADriver >(m,"XmlMFunction_ScopeDriver",R"#(XML persistence driver for a scope of functions.XML persistence driver for a scope of functions.XML persistence driver for a scope of functions.)#");

};

// user-defined post-inclusion per module

// user-defined post
