
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
#include <XmlMNaming_NamedShapeDriver.hxx>
#include <XmlMNaming_NamingDriver.hxx>
#include <XmlMNaming_Shape1.hxx>
#include <TopoDS_Shape.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>

// module includes
#include <XmlMNaming.hxx>
#include <XmlMNaming_NamedShapeDriver.hxx>
#include <XmlMNaming_NamingDriver.hxx>
#include <XmlMNaming_Shape1.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMNaming_enums(py::module &main_module) {


py::module m = main_module.def_submodule("XmlMNaming", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<XmlMNaming , shared_ptr<XmlMNaming>  >(m,"XmlMNaming",R"#(None)#");
    py::class_<XmlMNaming_NamedShapeDriver ,opencascade::handle<XmlMNaming_NamedShapeDriver>  , XmlMDF_ADriver >(m,"XmlMNaming_NamedShapeDriver",R"#()#");
    py::class_<XmlMNaming_NamingDriver ,opencascade::handle<XmlMNaming_NamingDriver>  , XmlMDF_ADriver >(m,"XmlMNaming_NamingDriver",R"#()#");
    py::class_<XmlMNaming_Shape1 , shared_ptr<XmlMNaming_Shape1>  >(m,"XmlMNaming_Shape1",R"#(The XmlMNaming_Shape1 is the Persistent view of a TopoDS_Shape.)#");

};

// user-defined post-inclusion per module

// user-defined post
