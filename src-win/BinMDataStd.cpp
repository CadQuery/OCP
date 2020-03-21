
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_BinMDataStd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BinMDataStd"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BinMDataStd , shared_ptr<BinMDataStd>>(m,"BinMDataStd");

    static_cast<py::class_<BinMDataStd , shared_ptr<BinMDataStd> >>(m.attr("BinMDataStd"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("AddDrivers_s",
                    (void (*)( const opencascade::handle<BinMDF_ADriverTable> & , const opencascade::handle<Message_Messenger> & ) ) static_cast<void (*)( const opencascade::handle<BinMDF_ADriverTable> & , const opencascade::handle<Message_Messenger> & ) >(&BinMDataStd::AddDrivers),
                    R"#(Adds the attribute drivers to <theDriverTable>.)#"  , py::arg("theDriverTable"),  py::arg("aMsgDrv"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_AsciiStringDriver ,opencascade::handle<BinMDataStd_AsciiStringDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_AsciiStringDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_AsciiStringDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_AsciiStringDriver::*)() const>(&BinMDataStd_AsciiStringDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_AsciiStringDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_AsciiStringDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_AsciiStringDriver::Paste),
             R"#(persistent -> transient (retrieve))#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_AsciiStringDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_AsciiStringDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_AsciiStringDriver::Paste),
             R"#(transient -> persistent (store))#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_AsciiStringDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_AsciiStringDriver::*)() const>(&BinMDataStd_AsciiStringDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_AsciiStringDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_AsciiStringDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_BooleanArrayDriver ,opencascade::handle<BinMDataStd_BooleanArrayDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_BooleanArrayDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_BooleanArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_BooleanArrayDriver::*)() const>(&BinMDataStd_BooleanArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_BooleanArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_BooleanArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_BooleanArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_BooleanArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_BooleanArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_BooleanArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_BooleanArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_BooleanArrayDriver::*)() const>(&BinMDataStd_BooleanArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_BooleanArrayDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_BooleanArrayDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_BooleanListDriver ,opencascade::handle<BinMDataStd_BooleanListDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_BooleanListDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_BooleanListDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_BooleanListDriver::*)() const>(&BinMDataStd_BooleanListDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_BooleanListDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_BooleanListDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_BooleanListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_BooleanListDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_BooleanListDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_BooleanListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_BooleanListDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_BooleanListDriver::*)() const>(&BinMDataStd_BooleanListDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_BooleanListDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_BooleanListDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_ByteArrayDriver ,opencascade::handle<BinMDataStd_ByteArrayDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_ByteArrayDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_ByteArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_ByteArrayDriver::*)() const>(&BinMDataStd_ByteArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_ByteArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_ByteArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_ByteArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_ByteArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_ByteArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_ByteArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_ByteArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_ByteArrayDriver::*)() const>(&BinMDataStd_ByteArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_ByteArrayDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_ByteArrayDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_CommentDriver ,opencascade::handle<BinMDataStd_CommentDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_CommentDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_CommentDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_CommentDriver::*)() const>(&BinMDataStd_CommentDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_CommentDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_CommentDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_CommentDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_CommentDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_CommentDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_CommentDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_CommentDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_CommentDriver::*)() const>(&BinMDataStd_CommentDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_CommentDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_CommentDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_DirectoryDriver ,opencascade::handle<BinMDataStd_DirectoryDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_DirectoryDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_DirectoryDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_DirectoryDriver::*)() const>(&BinMDataStd_DirectoryDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_DirectoryDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_DirectoryDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_DirectoryDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_DirectoryDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_DirectoryDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_DirectoryDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_DirectoryDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_DirectoryDriver::*)() const>(&BinMDataStd_DirectoryDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_DirectoryDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_DirectoryDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_ExpressionDriver ,opencascade::handle<BinMDataStd_ExpressionDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_ExpressionDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_ExpressionDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_ExpressionDriver::*)() const>(&BinMDataStd_ExpressionDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_ExpressionDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_ExpressionDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_ExpressionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_ExpressionDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_ExpressionDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_ExpressionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_ExpressionDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_ExpressionDriver::*)() const>(&BinMDataStd_ExpressionDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_ExpressionDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_ExpressionDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_ExtStringArrayDriver ,opencascade::handle<BinMDataStd_ExtStringArrayDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_ExtStringArrayDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_ExtStringArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_ExtStringArrayDriver::*)() const>(&BinMDataStd_ExtStringArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_ExtStringArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_ExtStringArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_ExtStringArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_ExtStringArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_ExtStringArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_ExtStringArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_ExtStringArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_ExtStringArrayDriver::*)() const>(&BinMDataStd_ExtStringArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_ExtStringArrayDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_ExtStringArrayDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_ExtStringListDriver ,opencascade::handle<BinMDataStd_ExtStringListDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_ExtStringListDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_ExtStringListDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_ExtStringListDriver::*)() const>(&BinMDataStd_ExtStringListDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_ExtStringListDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_ExtStringListDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_ExtStringListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_ExtStringListDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_ExtStringListDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_ExtStringListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_ExtStringListDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_ExtStringListDriver::*)() const>(&BinMDataStd_ExtStringListDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_ExtStringListDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_ExtStringListDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_IntPackedMapDriver ,opencascade::handle<BinMDataStd_IntPackedMapDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_IntPackedMapDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_IntPackedMapDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_IntPackedMapDriver::*)() const>(&BinMDataStd_IntPackedMapDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_IntPackedMapDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_IntPackedMapDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_IntPackedMapDriver::Paste),
             R"#(persistent -> transient (retrieve))#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_IntPackedMapDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_IntPackedMapDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_IntPackedMapDriver::Paste),
             R"#(transient -> persistent (store))#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_IntPackedMapDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_IntPackedMapDriver::*)() const>(&BinMDataStd_IntPackedMapDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_IntPackedMapDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_IntPackedMapDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_IntegerArrayDriver ,opencascade::handle<BinMDataStd_IntegerArrayDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_IntegerArrayDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_IntegerArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_IntegerArrayDriver::*)() const>(&BinMDataStd_IntegerArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_IntegerArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_IntegerArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_IntegerArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_IntegerArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_IntegerArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_IntegerArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_IntegerArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_IntegerArrayDriver::*)() const>(&BinMDataStd_IntegerArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_IntegerArrayDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_IntegerArrayDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_IntegerDriver ,opencascade::handle<BinMDataStd_IntegerDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_IntegerDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_IntegerDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_IntegerDriver::*)() const>(&BinMDataStd_IntegerDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_IntegerDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_IntegerDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_IntegerDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_IntegerDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_IntegerDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_IntegerDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_IntegerDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_IntegerDriver::*)() const>(&BinMDataStd_IntegerDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_IntegerDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_IntegerDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_IntegerListDriver ,opencascade::handle<BinMDataStd_IntegerListDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_IntegerListDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_IntegerListDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_IntegerListDriver::*)() const>(&BinMDataStd_IntegerListDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_IntegerListDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_IntegerListDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_IntegerListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_IntegerListDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_IntegerListDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_IntegerListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_IntegerListDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_IntegerListDriver::*)() const>(&BinMDataStd_IntegerListDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_IntegerListDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_IntegerListDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_NameDriver ,opencascade::handle<BinMDataStd_NameDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_NameDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_NameDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_NameDriver::*)() const>(&BinMDataStd_NameDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_NameDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_NameDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_NameDriver::Paste),
             R"#(persistent -> transient (retrieve))#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_NameDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_NameDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_NameDriver::Paste),
             R"#(transient -> persistent (store))#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_NameDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_NameDriver::*)() const>(&BinMDataStd_NameDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_NameDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_NameDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_NamedDataDriver ,opencascade::handle<BinMDataStd_NamedDataDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_NamedDataDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_NamedDataDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_NamedDataDriver::*)() const>(&BinMDataStd_NamedDataDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_NamedDataDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_NamedDataDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_NamedDataDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_NamedDataDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_NamedDataDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_NamedDataDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_NamedDataDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_NamedDataDriver::*)() const>(&BinMDataStd_NamedDataDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_NamedDataDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_NamedDataDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_NoteBookDriver ,opencascade::handle<BinMDataStd_NoteBookDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_NoteBookDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_NoteBookDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_NoteBookDriver::*)() const>(&BinMDataStd_NoteBookDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_NoteBookDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_NoteBookDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_NoteBookDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_NoteBookDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_NoteBookDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_NoteBookDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_NoteBookDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_NoteBookDriver::*)() const>(&BinMDataStd_NoteBookDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_NoteBookDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_NoteBookDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_RealArrayDriver ,opencascade::handle<BinMDataStd_RealArrayDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_RealArrayDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_RealArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_RealArrayDriver::*)() const>(&BinMDataStd_RealArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_RealArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_RealArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_RealArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_RealArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_RealArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_RealArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_RealArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_RealArrayDriver::*)() const>(&BinMDataStd_RealArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_RealArrayDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_RealArrayDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_RealDriver ,opencascade::handle<BinMDataStd_RealDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_RealDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_RealDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_RealDriver::*)() const>(&BinMDataStd_RealDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_RealDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_RealDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_RealDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_RealDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_RealDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_RealDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_RealDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_RealDriver::*)() const>(&BinMDataStd_RealDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_RealDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_RealDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_RealListDriver ,opencascade::handle<BinMDataStd_RealListDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_RealListDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_RealListDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_RealListDriver::*)() const>(&BinMDataStd_RealListDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_RealListDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_RealListDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_RealListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_RealListDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_RealListDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_RealListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_RealListDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_RealListDriver::*)() const>(&BinMDataStd_RealListDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_RealListDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_RealListDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_ReferenceArrayDriver ,opencascade::handle<BinMDataStd_ReferenceArrayDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_ReferenceArrayDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_ReferenceArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_ReferenceArrayDriver::*)() const>(&BinMDataStd_ReferenceArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_ReferenceArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_ReferenceArrayDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_ReferenceArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_ReferenceArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_ReferenceArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_ReferenceArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_ReferenceArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_ReferenceArrayDriver::*)() const>(&BinMDataStd_ReferenceArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_ReferenceArrayDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_ReferenceArrayDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_ReferenceListDriver ,opencascade::handle<BinMDataStd_ReferenceListDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_ReferenceListDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_ReferenceListDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_ReferenceListDriver::*)() const>(&BinMDataStd_ReferenceListDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_ReferenceListDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_ReferenceListDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_ReferenceListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_ReferenceListDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_ReferenceListDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_ReferenceListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_ReferenceListDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_ReferenceListDriver::*)() const>(&BinMDataStd_ReferenceListDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_ReferenceListDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_ReferenceListDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_RelationDriver ,opencascade::handle<BinMDataStd_RelationDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_RelationDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_RelationDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_RelationDriver::*)() const>(&BinMDataStd_RelationDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_RelationDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_RelationDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_RelationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_RelationDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_RelationDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_RelationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_RelationDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_RelationDriver::*)() const>(&BinMDataStd_RelationDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_RelationDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_RelationDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_TickDriver ,opencascade::handle<BinMDataStd_TickDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_TickDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_TickDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_TickDriver::*)() const>(&BinMDataStd_TickDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_TickDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_TickDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_TickDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_TickDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_TickDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_TickDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_TickDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_TickDriver::*)() const>(&BinMDataStd_TickDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_TickDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_TickDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_TreeNodeDriver ,opencascade::handle<BinMDataStd_TreeNodeDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_TreeNodeDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_TreeNodeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_TreeNodeDriver::*)() const>(&BinMDataStd_TreeNodeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_TreeNodeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_TreeNodeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_TreeNodeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_TreeNodeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_TreeNodeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_TreeNodeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_TreeNodeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_TreeNodeDriver::*)() const>(&BinMDataStd_TreeNodeDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_TreeNodeDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_TreeNodeDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_UAttributeDriver ,opencascade::handle<BinMDataStd_UAttributeDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_UAttributeDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_UAttributeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_UAttributeDriver::*)() const>(&BinMDataStd_UAttributeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_UAttributeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_UAttributeDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_UAttributeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_UAttributeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_UAttributeDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_UAttributeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_UAttributeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_UAttributeDriver::*)() const>(&BinMDataStd_UAttributeDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_UAttributeDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_UAttributeDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BinMDataStd_VariableDriver ,opencascade::handle<BinMDataStd_VariableDriver> , BinMDF_ADriver>>(m.attr("BinMDataStd_VariableDriver"))
    // constructors
        .def(py::init< const opencascade::handle<Message_Messenger> & >()  , py::arg("theMessageDriver") )
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (BinMDataStd_VariableDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (BinMDataStd_VariableDriver::*)() const>(&BinMDataStd_VariableDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (BinMDataStd_VariableDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (BinMDataStd_VariableDriver::*)( const BinObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , BinObjMgt_RRelocationTable & ) const>(&BinMDataStd_VariableDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (BinMDataStd_VariableDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const) static_cast<void (BinMDataStd_VariableDriver::*)( const opencascade::handle<TDF_Attribute> & , BinObjMgt_Persistent & , TColStd_IndexedMapOfTransient & ) const>(&BinMDataStd_VariableDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BinMDataStd_VariableDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BinMDataStd_VariableDriver::*)() const>(&BinMDataStd_VariableDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BinMDataStd_VariableDriver::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BinMDataStd_VariableDriver::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\BinMDataStd_BooleanListDriver.hxx
// ./opencascade\BinMDataStd_TickDriver.hxx
// ./opencascade\BinMDataStd_IntPackedMapDriver.hxx
// ./opencascade\BinMDataStd_RelationDriver.hxx
// ./opencascade\BinMDataStd_NamedDataDriver.hxx
// ./opencascade\BinMDataStd_IntegerArrayDriver.hxx
// ./opencascade\BinMDataStd_ExtStringListDriver.hxx
// ./opencascade\BinMDataStd_ExpressionDriver.hxx
// ./opencascade\BinMDataStd.hxx
// ./opencascade\BinMDataStd_RealListDriver.hxx
// ./opencascade\BinMDataStd_VariableDriver.hxx
// ./opencascade\BinMDataStd_IntegerDriver.hxx
// ./opencascade\BinMDataStd_RealDriver.hxx
// ./opencascade\BinMDataStd_RealArrayDriver.hxx
// ./opencascade\BinMDataStd_NameDriver.hxx
// ./opencascade\BinMDataStd_NoteBookDriver.hxx
// ./opencascade\BinMDataStd_BooleanArrayDriver.hxx
// ./opencascade\BinMDataStd_ExtStringArrayDriver.hxx
// ./opencascade\BinMDataStd_AsciiStringDriver.hxx
// ./opencascade\BinMDataStd_TreeNodeDriver.hxx
// ./opencascade\BinMDataStd_ReferenceListDriver.hxx
// ./opencascade\BinMDataStd_CommentDriver.hxx
// ./opencascade\BinMDataStd_ByteArrayDriver.hxx
// ./opencascade\BinMDataStd_ReferenceArrayDriver.hxx
// ./opencascade\BinMDataStd_IntegerListDriver.hxx
// ./opencascade\BinMDataStd_DirectoryDriver.hxx
// ./opencascade\BinMDataStd_UAttributeDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
