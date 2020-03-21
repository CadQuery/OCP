
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
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <Message_Messenger.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <BinObjMgt_Persistent.hxx>

// module includes
#include <BinMDataStd.hxx>
#include <BinMDataStd_AsciiStringDriver.hxx>
#include <BinMDataStd_BooleanArrayDriver.hxx>
#include <BinMDataStd_BooleanListDriver.hxx>
#include <BinMDataStd_ByteArrayDriver.hxx>
#include <BinMDataStd_CommentDriver.hxx>
#include <BinMDataStd_DirectoryDriver.hxx>
#include <BinMDataStd_ExpressionDriver.hxx>
#include <BinMDataStd_ExtStringArrayDriver.hxx>
#include <BinMDataStd_ExtStringListDriver.hxx>
#include <BinMDataStd_IntegerArrayDriver.hxx>
#include <BinMDataStd_IntegerDriver.hxx>
#include <BinMDataStd_IntegerListDriver.hxx>
#include <BinMDataStd_IntPackedMapDriver.hxx>
#include <BinMDataStd_NamedDataDriver.hxx>
#include <BinMDataStd_NameDriver.hxx>
#include <BinMDataStd_NoteBookDriver.hxx>
#include <BinMDataStd_RealArrayDriver.hxx>
#include <BinMDataStd_RealDriver.hxx>
#include <BinMDataStd_RealListDriver.hxx>
#include <BinMDataStd_ReferenceArrayDriver.hxx>
#include <BinMDataStd_ReferenceListDriver.hxx>
#include <BinMDataStd_RelationDriver.hxx>
#include <BinMDataStd_TickDriver.hxx>
#include <BinMDataStd_TreeNodeDriver.hxx>
#include <BinMDataStd_UAttributeDriver.hxx>
#include <BinMDataStd_VariableDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BinMDataStd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BinMDataStd", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BinMDataStd , shared_ptr<BinMDataStd> >(m,"BinMDataStd",R"#(Storage and Retrieval drivers for modelling attributes.)#");
    py::class_<BinMDataStd_AsciiStringDriver ,opencascade::handle<BinMDataStd_AsciiStringDriver> , BinMDF_ADriver>(m,"BinMDataStd_AsciiStringDriver",R"#(TDataStd_AsciiString attribute Driver.TDataStd_AsciiString attribute Driver.TDataStd_AsciiString attribute Driver.)#");
    py::class_<BinMDataStd_BooleanArrayDriver ,opencascade::handle<BinMDataStd_BooleanArrayDriver> , BinMDF_ADriver>(m,"BinMDataStd_BooleanArrayDriver",R"#()#");
    py::class_<BinMDataStd_BooleanListDriver ,opencascade::handle<BinMDataStd_BooleanListDriver> , BinMDF_ADriver>(m,"BinMDataStd_BooleanListDriver",R"#()#");
    py::class_<BinMDataStd_ByteArrayDriver ,opencascade::handle<BinMDataStd_ByteArrayDriver> , BinMDF_ADriver>(m,"BinMDataStd_ByteArrayDriver",R"#()#");
    py::class_<BinMDataStd_CommentDriver ,opencascade::handle<BinMDataStd_CommentDriver> , BinMDF_ADriver>(m,"BinMDataStd_CommentDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<BinMDataStd_DirectoryDriver ,opencascade::handle<BinMDataStd_DirectoryDriver> , BinMDF_ADriver>(m,"BinMDataStd_DirectoryDriver",R"#(Directory attribute Driver.Directory attribute Driver.Directory attribute Driver.)#");
    py::class_<BinMDataStd_ExpressionDriver ,opencascade::handle<BinMDataStd_ExpressionDriver> , BinMDF_ADriver>(m,"BinMDataStd_ExpressionDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<BinMDataStd_ExtStringArrayDriver ,opencascade::handle<BinMDataStd_ExtStringArrayDriver> , BinMDF_ADriver>(m,"BinMDataStd_ExtStringArrayDriver",R"#(Array of extended string attribute Driver.Array of extended string attribute Driver.Array of extended string attribute Driver.)#");
    py::class_<BinMDataStd_ExtStringListDriver ,opencascade::handle<BinMDataStd_ExtStringListDriver> , BinMDF_ADriver>(m,"BinMDataStd_ExtStringListDriver",R"#()#");
    py::class_<BinMDataStd_IntPackedMapDriver ,opencascade::handle<BinMDataStd_IntPackedMapDriver> , BinMDF_ADriver>(m,"BinMDataStd_IntPackedMapDriver",R"#(TDataStd_IntPackedMap attribute Driver.TDataStd_IntPackedMap attribute Driver.TDataStd_IntPackedMap attribute Driver.)#");
    py::class_<BinMDataStd_IntegerArrayDriver ,opencascade::handle<BinMDataStd_IntegerArrayDriver> , BinMDF_ADriver>(m,"BinMDataStd_IntegerArrayDriver",R"#(Array of Integer attribute Driver.Array of Integer attribute Driver.Array of Integer attribute Driver.)#");
    py::class_<BinMDataStd_IntegerDriver ,opencascade::handle<BinMDataStd_IntegerDriver> , BinMDF_ADriver>(m,"BinMDataStd_IntegerDriver",R"#(Integer attribute Driver.Integer attribute Driver.Integer attribute Driver.)#");
    py::class_<BinMDataStd_IntegerListDriver ,opencascade::handle<BinMDataStd_IntegerListDriver> , BinMDF_ADriver>(m,"BinMDataStd_IntegerListDriver",R"#()#");
    py::class_<BinMDataStd_NameDriver ,opencascade::handle<BinMDataStd_NameDriver> , BinMDF_ADriver>(m,"BinMDataStd_NameDriver",R"#(TDataStd_Name attribute Driver.TDataStd_Name attribute Driver.TDataStd_Name attribute Driver.)#");
    py::class_<BinMDataStd_NamedDataDriver ,opencascade::handle<BinMDataStd_NamedDataDriver> , BinMDF_ADriver>(m,"BinMDataStd_NamedDataDriver",R"#()#");
    py::class_<BinMDataStd_NoteBookDriver ,opencascade::handle<BinMDataStd_NoteBookDriver> , BinMDF_ADriver>(m,"BinMDataStd_NoteBookDriver",R"#(NoteBook attribute Driver.NoteBook attribute Driver.NoteBook attribute Driver.)#");
    py::class_<BinMDataStd_RealArrayDriver ,opencascade::handle<BinMDataStd_RealArrayDriver> , BinMDF_ADriver>(m,"BinMDataStd_RealArrayDriver",R"#(Array of Real attribute Driver.Array of Real attribute Driver.Array of Real attribute Driver.)#");
    py::class_<BinMDataStd_RealDriver ,opencascade::handle<BinMDataStd_RealDriver> , BinMDF_ADriver>(m,"BinMDataStd_RealDriver",R"#(Real attribute Driver.Real attribute Driver.Real attribute Driver.)#");
    py::class_<BinMDataStd_RealListDriver ,opencascade::handle<BinMDataStd_RealListDriver> , BinMDF_ADriver>(m,"BinMDataStd_RealListDriver",R"#()#");
    py::class_<BinMDataStd_ReferenceArrayDriver ,opencascade::handle<BinMDataStd_ReferenceArrayDriver> , BinMDF_ADriver>(m,"BinMDataStd_ReferenceArrayDriver",R"#()#");
    py::class_<BinMDataStd_ReferenceListDriver ,opencascade::handle<BinMDataStd_ReferenceListDriver> , BinMDF_ADriver>(m,"BinMDataStd_ReferenceListDriver",R"#()#");
    py::class_<BinMDataStd_RelationDriver ,opencascade::handle<BinMDataStd_RelationDriver> , BinMDF_ADriver>(m,"BinMDataStd_RelationDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<BinMDataStd_TickDriver ,opencascade::handle<BinMDataStd_TickDriver> , BinMDF_ADriver>(m,"BinMDataStd_TickDriver",R"#(Tick attribute driver.Tick attribute driver.Tick attribute driver.)#");
    py::class_<BinMDataStd_TreeNodeDriver ,opencascade::handle<BinMDataStd_TreeNodeDriver> , BinMDF_ADriver>(m,"BinMDataStd_TreeNodeDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<BinMDataStd_UAttributeDriver ,opencascade::handle<BinMDataStd_UAttributeDriver> , BinMDF_ADriver>(m,"BinMDataStd_UAttributeDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");
    py::class_<BinMDataStd_VariableDriver ,opencascade::handle<BinMDataStd_VariableDriver> , BinMDF_ADriver>(m,"BinMDataStd_VariableDriver",R"#(Attribute Driver.Attribute Driver.Attribute Driver.)#");

};

// user-defined post-inclusion per module

// user-defined post
