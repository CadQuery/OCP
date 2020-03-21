
// std lib related includes
#include <tuple>

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
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
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
#include <XmlMDataStd_NameDriver.hxx>
#include <XmlMDataStd_IntegerDriver.hxx>
#include <XmlMDataStd_RealDriver.hxx>
#include <XmlMDataStd_IntegerArrayDriver.hxx>
#include <XmlMDataStd_RealArrayDriver.hxx>
#include <XmlMDataStd_ExtStringArrayDriver.hxx>
#include <XmlMDataStd_UAttributeDriver.hxx>
#include <XmlMDataStd_DirectoryDriver.hxx>
#include <XmlMDataStd_CommentDriver.hxx>
#include <XmlMDataStd_VariableDriver.hxx>
#include <XmlMDataStd_ExpressionDriver.hxx>
#include <XmlMDataStd_RelationDriver.hxx>
#include <XmlMDataStd_NoteBookDriver.hxx>
#include <XmlMDataStd_TreeNodeDriver.hxx>
#include <XmlMDataStd_TickDriver.hxx>
#include <XmlMDataStd_IntegerListDriver.hxx>
#include <XmlMDataStd_RealListDriver.hxx>
#include <XmlMDataStd_ExtStringListDriver.hxx>
#include <XmlMDataStd_BooleanListDriver.hxx>
#include <XmlMDataStd_ReferenceListDriver.hxx>
#include <XmlMDataStd_BooleanArrayDriver.hxx>
#include <XmlMDataStd_ReferenceArrayDriver.hxx>
#include <XmlMDataStd_ByteArrayDriver.hxx>
#include <XmlMDataStd_NamedDataDriver.hxx>
#include <XmlMDataStd_AsciiStringDriver.hxx>
#include <XmlMDataStd_IntPackedMapDriver.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <XmlObjMgt_Persistent.hxx>

// module includes
#include <XmlMDataStd.hxx>
#include <XmlMDataStd_AsciiStringDriver.hxx>
#include <XmlMDataStd_BooleanArrayDriver.hxx>
#include <XmlMDataStd_BooleanListDriver.hxx>
#include <XmlMDataStd_ByteArrayDriver.hxx>
#include <XmlMDataStd_CommentDriver.hxx>
#include <XmlMDataStd_DirectoryDriver.hxx>
#include <XmlMDataStd_ExpressionDriver.hxx>
#include <XmlMDataStd_ExtStringArrayDriver.hxx>
#include <XmlMDataStd_ExtStringListDriver.hxx>
#include <XmlMDataStd_IntegerArrayDriver.hxx>
#include <XmlMDataStd_IntegerDriver.hxx>
#include <XmlMDataStd_IntegerListDriver.hxx>
#include <XmlMDataStd_IntPackedMapDriver.hxx>
#include <XmlMDataStd_NamedDataDriver.hxx>
#include <XmlMDataStd_NameDriver.hxx>
#include <XmlMDataStd_NoteBookDriver.hxx>
#include <XmlMDataStd_RealArrayDriver.hxx>
#include <XmlMDataStd_RealDriver.hxx>
#include <XmlMDataStd_RealListDriver.hxx>
#include <XmlMDataStd_ReferenceArrayDriver.hxx>
#include <XmlMDataStd_ReferenceListDriver.hxx>
#include <XmlMDataStd_RelationDriver.hxx>
#include <XmlMDataStd_TickDriver.hxx>
#include <XmlMDataStd_TreeNodeDriver.hxx>
#include <XmlMDataStd_UAttributeDriver.hxx>
#include <XmlMDataStd_VariableDriver.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_XmlMDataStd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("XmlMDataStd"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<XmlMDataStd , shared_ptr<XmlMDataStd>>(m,"XmlMDataStd");

    static_cast<py::class_<XmlMDataStd , shared_ptr<XmlMDataStd> >>(m.attr("XmlMDataStd"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_AsciiStringDriver ,opencascade::handle<XmlMDataStd_AsciiStringDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_AsciiStringDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_AsciiStringDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_AsciiStringDriver::*)() const>(&XmlMDataStd_AsciiStringDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_AsciiStringDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_AsciiStringDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_AsciiStringDriver::Paste),
             R"#(persistent -> transient (retrieve))#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_AsciiStringDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_AsciiStringDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_AsciiStringDriver::Paste),
             R"#(transient -> persistent (store))#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_AsciiStringDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_AsciiStringDriver::*)() const>(&XmlMDataStd_AsciiStringDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_AsciiStringDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_BooleanArrayDriver ,opencascade::handle<XmlMDataStd_BooleanArrayDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_BooleanArrayDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_BooleanArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_BooleanArrayDriver::*)() const>(&XmlMDataStd_BooleanArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_BooleanArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_BooleanArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_BooleanArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_BooleanArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_BooleanArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_BooleanArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_BooleanArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_BooleanArrayDriver::*)() const>(&XmlMDataStd_BooleanArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_BooleanArrayDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_BooleanListDriver ,opencascade::handle<XmlMDataStd_BooleanListDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_BooleanListDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_BooleanListDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_BooleanListDriver::*)() const>(&XmlMDataStd_BooleanListDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_BooleanListDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_BooleanListDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_BooleanListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_BooleanListDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_BooleanListDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_BooleanListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_BooleanListDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_BooleanListDriver::*)() const>(&XmlMDataStd_BooleanListDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_BooleanListDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_ByteArrayDriver ,opencascade::handle<XmlMDataStd_ByteArrayDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_ByteArrayDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_ByteArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_ByteArrayDriver::*)() const>(&XmlMDataStd_ByteArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_ByteArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_ByteArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_ByteArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_ByteArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_ByteArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_ByteArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_ByteArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_ByteArrayDriver::*)() const>(&XmlMDataStd_ByteArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_ByteArrayDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_CommentDriver ,opencascade::handle<XmlMDataStd_CommentDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_CommentDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_CommentDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_CommentDriver::*)() const>(&XmlMDataStd_CommentDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_CommentDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_CommentDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_CommentDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_CommentDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_CommentDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_CommentDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_CommentDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_CommentDriver::*)() const>(&XmlMDataStd_CommentDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_CommentDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_DirectoryDriver ,opencascade::handle<XmlMDataStd_DirectoryDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_DirectoryDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_DirectoryDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_DirectoryDriver::*)() const>(&XmlMDataStd_DirectoryDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_DirectoryDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_DirectoryDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_DirectoryDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_DirectoryDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_DirectoryDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_DirectoryDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_DirectoryDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_DirectoryDriver::*)() const>(&XmlMDataStd_DirectoryDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_DirectoryDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_ExpressionDriver ,opencascade::handle<XmlMDataStd_ExpressionDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_ExpressionDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_ExpressionDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_ExpressionDriver::*)() const>(&XmlMDataStd_ExpressionDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_ExpressionDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_ExpressionDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_ExpressionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_ExpressionDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_ExpressionDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_ExpressionDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_ExpressionDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_ExpressionDriver::*)() const>(&XmlMDataStd_ExpressionDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_ExpressionDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_ExtStringArrayDriver ,opencascade::handle<XmlMDataStd_ExtStringArrayDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_ExtStringArrayDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_ExtStringArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_ExtStringArrayDriver::*)() const>(&XmlMDataStd_ExtStringArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_ExtStringArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_ExtStringArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_ExtStringArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_ExtStringArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_ExtStringArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_ExtStringArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_ExtStringArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_ExtStringArrayDriver::*)() const>(&XmlMDataStd_ExtStringArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_ExtStringArrayDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_ExtStringListDriver ,opencascade::handle<XmlMDataStd_ExtStringListDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_ExtStringListDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_ExtStringListDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_ExtStringListDriver::*)() const>(&XmlMDataStd_ExtStringListDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_ExtStringListDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_ExtStringListDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_ExtStringListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_ExtStringListDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_ExtStringListDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_ExtStringListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_ExtStringListDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_ExtStringListDriver::*)() const>(&XmlMDataStd_ExtStringListDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_ExtStringListDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_IntPackedMapDriver ,opencascade::handle<XmlMDataStd_IntPackedMapDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_IntPackedMapDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_IntPackedMapDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_IntPackedMapDriver::*)() const>(&XmlMDataStd_IntPackedMapDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_IntPackedMapDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_IntPackedMapDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_IntPackedMapDriver::Paste),
             R"#(persistent -> transient (retrieve))#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_IntPackedMapDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_IntPackedMapDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_IntPackedMapDriver::Paste),
             R"#(transient -> persistent (store))#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_IntPackedMapDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_IntPackedMapDriver::*)() const>(&XmlMDataStd_IntPackedMapDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_IntPackedMapDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_IntegerArrayDriver ,opencascade::handle<XmlMDataStd_IntegerArrayDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_IntegerArrayDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_IntegerArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_IntegerArrayDriver::*)() const>(&XmlMDataStd_IntegerArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_IntegerArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_IntegerArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_IntegerArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_IntegerArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_IntegerArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_IntegerArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_IntegerArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_IntegerArrayDriver::*)() const>(&XmlMDataStd_IntegerArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_IntegerArrayDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_IntegerDriver ,opencascade::handle<XmlMDataStd_IntegerDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_IntegerDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_IntegerDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_IntegerDriver::*)() const>(&XmlMDataStd_IntegerDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_IntegerDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_IntegerDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_IntegerDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_IntegerDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_IntegerDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_IntegerDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_IntegerDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_IntegerDriver::*)() const>(&XmlMDataStd_IntegerDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_IntegerDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_IntegerListDriver ,opencascade::handle<XmlMDataStd_IntegerListDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_IntegerListDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_IntegerListDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_IntegerListDriver::*)() const>(&XmlMDataStd_IntegerListDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_IntegerListDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_IntegerListDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_IntegerListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_IntegerListDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_IntegerListDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_IntegerListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_IntegerListDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_IntegerListDriver::*)() const>(&XmlMDataStd_IntegerListDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_IntegerListDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_NameDriver ,opencascade::handle<XmlMDataStd_NameDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_NameDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_NameDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_NameDriver::*)() const>(&XmlMDataStd_NameDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_NameDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_NameDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_NameDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_NameDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_NameDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_NameDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_NameDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_NameDriver::*)() const>(&XmlMDataStd_NameDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_NameDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_NamedDataDriver ,opencascade::handle<XmlMDataStd_NamedDataDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_NamedDataDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_NamedDataDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_NamedDataDriver::*)() const>(&XmlMDataStd_NamedDataDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_NamedDataDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_NamedDataDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_NamedDataDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_NamedDataDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_NamedDataDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_NamedDataDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_NamedDataDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_NamedDataDriver::*)() const>(&XmlMDataStd_NamedDataDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_NamedDataDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_NoteBookDriver ,opencascade::handle<XmlMDataStd_NoteBookDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_NoteBookDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_NoteBookDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_NoteBookDriver::*)() const>(&XmlMDataStd_NoteBookDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_NoteBookDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_NoteBookDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_NoteBookDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_NoteBookDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_NoteBookDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_NoteBookDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_NoteBookDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_NoteBookDriver::*)() const>(&XmlMDataStd_NoteBookDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_NoteBookDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_RealArrayDriver ,opencascade::handle<XmlMDataStd_RealArrayDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_RealArrayDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_RealArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_RealArrayDriver::*)() const>(&XmlMDataStd_RealArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_RealArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_RealArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_RealArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_RealArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_RealArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_RealArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_RealArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_RealArrayDriver::*)() const>(&XmlMDataStd_RealArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_RealArrayDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_RealDriver ,opencascade::handle<XmlMDataStd_RealDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_RealDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_RealDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_RealDriver::*)() const>(&XmlMDataStd_RealDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_RealDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_RealDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_RealDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_RealDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_RealDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_RealDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_RealDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_RealDriver::*)() const>(&XmlMDataStd_RealDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_RealDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_RealListDriver ,opencascade::handle<XmlMDataStd_RealListDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_RealListDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_RealListDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_RealListDriver::*)() const>(&XmlMDataStd_RealListDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_RealListDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_RealListDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_RealListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_RealListDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_RealListDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_RealListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_RealListDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_RealListDriver::*)() const>(&XmlMDataStd_RealListDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_RealListDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_ReferenceArrayDriver ,opencascade::handle<XmlMDataStd_ReferenceArrayDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_ReferenceArrayDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_ReferenceArrayDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_ReferenceArrayDriver::*)() const>(&XmlMDataStd_ReferenceArrayDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_ReferenceArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_ReferenceArrayDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_ReferenceArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_ReferenceArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_ReferenceArrayDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_ReferenceArrayDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_ReferenceArrayDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_ReferenceArrayDriver::*)() const>(&XmlMDataStd_ReferenceArrayDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_ReferenceArrayDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_ReferenceListDriver ,opencascade::handle<XmlMDataStd_ReferenceListDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_ReferenceListDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_ReferenceListDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_ReferenceListDriver::*)() const>(&XmlMDataStd_ReferenceListDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_ReferenceListDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_ReferenceListDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_ReferenceListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_ReferenceListDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_ReferenceListDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_ReferenceListDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_ReferenceListDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_ReferenceListDriver::*)() const>(&XmlMDataStd_ReferenceListDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_ReferenceListDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_RelationDriver ,opencascade::handle<XmlMDataStd_RelationDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_RelationDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_RelationDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_RelationDriver::*)() const>(&XmlMDataStd_RelationDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_RelationDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_RelationDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_RelationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_RelationDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_RelationDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_RelationDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_RelationDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_RelationDriver::*)() const>(&XmlMDataStd_RelationDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_RelationDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_TickDriver ,opencascade::handle<XmlMDataStd_TickDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_TickDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_TickDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_TickDriver::*)() const>(&XmlMDataStd_TickDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_TickDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_TickDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_TickDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_TickDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_TickDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_TickDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_TickDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_TickDriver::*)() const>(&XmlMDataStd_TickDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_TickDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_TreeNodeDriver ,opencascade::handle<XmlMDataStd_TreeNodeDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_TreeNodeDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_TreeNodeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_TreeNodeDriver::*)() const>(&XmlMDataStd_TreeNodeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_TreeNodeDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_TreeNodeDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_TreeNodeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_TreeNodeDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_TreeNodeDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_TreeNodeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_TreeNodeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_TreeNodeDriver::*)() const>(&XmlMDataStd_TreeNodeDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_TreeNodeDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_UAttributeDriver ,opencascade::handle<XmlMDataStd_UAttributeDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_UAttributeDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_UAttributeDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_UAttributeDriver::*)() const>(&XmlMDataStd_UAttributeDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_UAttributeDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_UAttributeDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_UAttributeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_UAttributeDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_UAttributeDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_UAttributeDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_UAttributeDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_UAttributeDriver::*)() const>(&XmlMDataStd_UAttributeDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_UAttributeDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<XmlMDataStd_VariableDriver ,opencascade::handle<XmlMDataStd_VariableDriver> , XmlMDF_ADriver>>(m.attr("XmlMDataStd_VariableDriver"))
    // constructors
    // custom constructors
    // methods
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (XmlMDataStd_VariableDriver::*)() const) static_cast<opencascade::handle<TDF_Attribute> (XmlMDataStd_VariableDriver::*)() const>(&XmlMDataStd_VariableDriver::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (Standard_Boolean (XmlMDataStd_VariableDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const) static_cast<Standard_Boolean (XmlMDataStd_VariableDriver::*)( const XmlObjMgt_Persistent & , const opencascade::handle<TDF_Attribute> & , XmlObjMgt_RRelocationTable & ) const>(&XmlMDataStd_VariableDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("Paste",
             (void (XmlMDataStd_VariableDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const) static_cast<void (XmlMDataStd_VariableDriver::*)( const opencascade::handle<TDF_Attribute> & , XmlObjMgt_Persistent & , XmlObjMgt_SRelocationTable & ) const>(&XmlMDataStd_VariableDriver::Paste),
             R"#(None)#"  , py::arg("Source"),  py::arg("Target"),  py::arg("RelocTable"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (XmlMDataStd_VariableDriver::*)() const) static_cast<const opencascade::handle<Standard_Type> & (XmlMDataStd_VariableDriver::*)() const>(&XmlMDataStd_VariableDriver::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&XmlMDataStd_VariableDriver::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/XmlMDataStd_ReferenceListDriver.hxx
// ./opencascade/XmlMDataStd_TickDriver.hxx
// ./opencascade/XmlMDataStd_UAttributeDriver.hxx
// ./opencascade/XmlMDataStd_IntegerArrayDriver.hxx
// ./opencascade/XmlMDataStd_VariableDriver.hxx
// ./opencascade/XmlMDataStd_IntPackedMapDriver.hxx
// ./opencascade/XmlMDataStd_NameDriver.hxx
// ./opencascade/XmlMDataStd_NamedDataDriver.hxx
// ./opencascade/XmlMDataStd_RealListDriver.hxx
// ./opencascade/XmlMDataStd_ExtStringListDriver.hxx
// ./opencascade/XmlMDataStd_ByteArrayDriver.hxx
// ./opencascade/XmlMDataStd_IntegerDriver.hxx
// ./opencascade/XmlMDataStd_ReferenceArrayDriver.hxx
// ./opencascade/XmlMDataStd_RealDriver.hxx
// ./opencascade/XmlMDataStd_RelationDriver.hxx
// ./opencascade/XmlMDataStd_BooleanListDriver.hxx
// ./opencascade/XmlMDataStd_CommentDriver.hxx
// ./opencascade/XmlMDataStd.hxx
// ./opencascade/XmlMDataStd_AsciiStringDriver.hxx
// ./opencascade/XmlMDataStd_ExtStringArrayDriver.hxx
// ./opencascade/XmlMDataStd_IntegerListDriver.hxx
// ./opencascade/XmlMDataStd_ExpressionDriver.hxx
// ./opencascade/XmlMDataStd_RealArrayDriver.hxx
// ./opencascade/XmlMDataStd_NoteBookDriver.hxx
// ./opencascade/XmlMDataStd_DirectoryDriver.hxx
// ./opencascade/XmlMDataStd_TreeNodeDriver.hxx
// ./opencascade/XmlMDataStd_BooleanArrayDriver.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
