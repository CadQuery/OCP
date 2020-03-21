
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_ExtendedString.hxx>
#include <TCollection_AsciiString.hxx>

// module includes
#include <Resource_ConvertUnicode.hxx>
#include <Resource_DataMapIteratorOfDataMapOfAsciiStringAsciiString.hxx>
#include <Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString.hxx>
#include <Resource_DataMapOfAsciiStringAsciiString.hxx>
#include <Resource_DataMapOfAsciiStringExtendedString.hxx>
#include <Resource_FormatType.hxx>
#include <Resource_LexicalCompare.hxx>
#include <Resource_Manager.hxx>
#include <Resource_NoSuchResource.hxx>
#include <Resource_Unicode.hxx>

// template related includes
// ./opencascade/Resource_DataMapOfAsciiStringAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Resource_DataMapOfAsciiStringAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Resource_DataMapOfAsciiStringExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Resource_DataMapOfAsciiStringExtendedString.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Resource(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Resource"));


//Python trampoline classes

// classes


    static_cast<py::class_<Resource_LexicalCompare , shared_ptr<Resource_LexicalCompare> >>(m.attr("Resource_LexicalCompare"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsLower",
             (Standard_Boolean (Resource_LexicalCompare::*)( const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<Standard_Boolean (Resource_LexicalCompare::*)( const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&Resource_LexicalCompare::IsLower),
             R"#(Returns True if <Left> is lower than <Right>.)#"  , py::arg("Left"),  py::arg("Right"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Resource_Manager ,opencascade::handle<Resource_Manager> , Standard_Transient>>(m.attr("Resource_Manager"))
    // constructors
        .def(py::init< const Standard_CString,const Standard_Boolean >()  , py::arg("aName"),  py::arg("Verbose")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const Standard_CString,TCollection_AsciiString &,TCollection_AsciiString &,const Standard_Boolean >()  , py::arg("aName"),  py::arg("aDefaultsDirectory"),  py::arg("anUserDefaultsDirectory"),  py::arg("Verbose")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Save",
             (Standard_Boolean (Resource_Manager::*)() const) static_cast<Standard_Boolean (Resource_Manager::*)() const>(&Resource_Manager::Save),
             R"#(Save the user resource structure in the specified file. Creates the file if it does not exist.)#" )
        .def("Find",
             (Standard_Boolean (Resource_Manager::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Resource_Manager::*)( const Standard_CString ) const>(&Resource_Manager::Find),
             R"#(returns True if the Resource does exist.)#"  , py::arg("aResource"))
        .def("Integer",
             (Standard_Integer (Resource_Manager::*)( const Standard_CString ) const) static_cast<Standard_Integer (Resource_Manager::*)( const Standard_CString ) const>(&Resource_Manager::Integer),
             R"#(Gets the value of an integer resource according to its instance and its type.)#"  , py::arg("aResourceName"))
        .def("Real",
             (Standard_Real (Resource_Manager::*)( const Standard_CString ) const) static_cast<Standard_Real (Resource_Manager::*)( const Standard_CString ) const>(&Resource_Manager::Real),
             R"#(Gets the value of a real resource according to its instance and its type.)#"  , py::arg("aResourceName"))
        .def("Value",
             (Standard_CString (Resource_Manager::*)( const Standard_CString ) const) static_cast<Standard_CString (Resource_Manager::*)( const Standard_CString ) const>(&Resource_Manager::Value),
             R"#(Gets the value of a CString resource according to its instance and its type.)#"  , py::arg("aResourceName"))
        .def("ExtValue",
             (Standard_ExtString (Resource_Manager::*)( const Standard_CString ) ) static_cast<Standard_ExtString (Resource_Manager::*)( const Standard_CString ) >(&Resource_Manager::ExtValue),
             R"#(Gets the value of an ExtString resource according to its instance and its type.)#"  , py::arg("aResourceName"))
        .def("SetResource",
             (void (Resource_Manager::*)( const Standard_CString , const Standard_Integer ) ) static_cast<void (Resource_Manager::*)( const Standard_CString , const Standard_Integer ) >(&Resource_Manager::SetResource),
             R"#(Sets the new value of an integer resource. If the resource does not exist, it is created.)#"  , py::arg("aResourceName"),  py::arg("aValue"))
        .def("SetResource",
             (void (Resource_Manager::*)( const Standard_CString , const Standard_Real ) ) static_cast<void (Resource_Manager::*)( const Standard_CString , const Standard_Real ) >(&Resource_Manager::SetResource),
             R"#(Sets the new value of a real resource. If the resource does not exist, it is created.)#"  , py::arg("aResourceName"),  py::arg("aValue"))
        .def("SetResource",
             (void (Resource_Manager::*)( const Standard_CString , const Standard_CString ) ) static_cast<void (Resource_Manager::*)( const Standard_CString , const Standard_CString ) >(&Resource_Manager::SetResource),
             R"#(Sets the new value of an CString resource. If the resource does not exist, it is created.)#"  , py::arg("aResourceName"),  py::arg("aValue"))
        .def("SetResource",
             (void (Resource_Manager::*)( const Standard_CString , const Standard_ExtString ) ) static_cast<void (Resource_Manager::*)( const Standard_CString , const Standard_ExtString ) >(&Resource_Manager::SetResource),
             R"#(Sets the new value of an ExtString resource. If the resource does not exist, it is created.)#"  , py::arg("aResourceName"),  py::arg("aValue"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Resource_Manager::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Resource_Manager::*)() const>(&Resource_Manager::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetResourcePath_s",
                    (void (*)( TCollection_AsciiString & , const Standard_CString , const Standard_Boolean ) ) static_cast<void (*)( TCollection_AsciiString & , const Standard_CString , const Standard_Boolean ) >(&Resource_Manager::GetResourcePath),
                    R"#(Gets the resource file full path by its name. If corresponding environment variable is not set or file doesn't exist returns empty string.)#"  , py::arg("aPath"),  py::arg("aName"),  py::arg("isUserDefaults"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Resource_Manager::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Resource_Manager::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Resource_Unicode , shared_ptr<Resource_Unicode>>(m,"Resource_Unicode");

    static_cast<py::class_<Resource_Unicode , shared_ptr<Resource_Unicode> >>(m.attr("Resource_Unicode"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ConvertSJISToUnicode_s",
                    (void (*)( const Standard_CString , TCollection_ExtendedString & ) ) static_cast<void (*)( const Standard_CString , TCollection_ExtendedString & ) >(&Resource_Unicode::ConvertSJISToUnicode),
                    R"#(Converts non-ASCII CString <fromstr> in SJIS format to Unicode ExtendedString <tostr>.)#"  , py::arg("fromstr"),  py::arg("tostr"))
        .def_static("ConvertEUCToUnicode_s",
                    (void (*)( const Standard_CString , TCollection_ExtendedString & ) ) static_cast<void (*)( const Standard_CString , TCollection_ExtendedString & ) >(&Resource_Unicode::ConvertEUCToUnicode),
                    R"#(Converts non-ASCII CString <fromstr> in EUC format to Unicode ExtendedString <tostr>.)#"  , py::arg("fromstr"),  py::arg("tostr"))
        .def_static("ConvertGBToUnicode_s",
                    (void (*)( const Standard_CString , TCollection_ExtendedString & ) ) static_cast<void (*)( const Standard_CString , TCollection_ExtendedString & ) >(&Resource_Unicode::ConvertGBToUnicode),
                    R"#(Converts non-ASCII CString <fromstr> in GB format to Unicode ExtendedString <tostr>.)#"  , py::arg("fromstr"),  py::arg("tostr"))
        .def_static("ConvertGBKToUnicode_s",
                    (Standard_Boolean (*)( const Standard_CString , TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (*)( const Standard_CString , TCollection_ExtendedString & ) >(&Resource_Unicode::ConvertGBKToUnicode),
                    R"#(Converts non-ASCII CString <fromstr> in GBK format to Unicode ExtendedString <tostr>.)#"  , py::arg("fromstr"),  py::arg("tostr"))
        .def_static("ConvertBig5ToUnicode_s",
                    (Standard_Boolean (*)( const Standard_CString , TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (*)( const Standard_CString , TCollection_ExtendedString & ) >(&Resource_Unicode::ConvertBig5ToUnicode),
                    R"#(Converts non-ASCII CString <fromstr> in Big5 format to Unicode ExtendedString <tostr>.)#"  , py::arg("fromstr"),  py::arg("tostr"))
        .def_static("ConvertANSIToUnicode_s",
                    (void (*)( const Standard_CString , TCollection_ExtendedString & ) ) static_cast<void (*)( const Standard_CString , TCollection_ExtendedString & ) >(&Resource_Unicode::ConvertANSIToUnicode),
                    R"#(Converts non-ASCII CString <fromstr> in ANSI format to Unicode ExtendedString <tostr>.)#"  , py::arg("fromstr"),  py::arg("tostr"))
        .def_static("SetFormat_s",
                    (void (*)( const Resource_FormatType ) ) static_cast<void (*)( const Resource_FormatType ) >(&Resource_Unicode::SetFormat),
                    R"#(Defines the current conversion format as typecode. This conversion format will then be used by the functions ConvertFormatToUnicode and ConvertUnicodeToFormat to convert the strings.)#"  , py::arg("typecode"))
        .def_static("GetFormat_s",
                    (Resource_FormatType (*)() ) static_cast<Resource_FormatType (*)() >(&Resource_Unicode::GetFormat),
                    R"#(Returns the current conversion format (either ANSI, EUC, GB or SJIS). The current converting format must be defined in advance with the SetFormat function.)#" )
        .def_static("ReadFormat_s",
                    (void (*)() ) static_cast<void (*)() >(&Resource_Unicode::ReadFormat),
                    R"#(Reads converting format from resource "FormatType" in Resource Manager "CharSet")#" )
        .def_static("ConvertFormatToUnicode_s",
                    (void (*)( const Standard_CString , TCollection_ExtendedString & ) ) static_cast<void (*)( const Standard_CString , TCollection_ExtendedString & ) >(&Resource_Unicode::ConvertFormatToUnicode),
                    R"#(Converts the non-ASCII C string (as specified by GetFormat()) to the Unicode string of extended characters.)#"  , py::arg("theFromStr"),  py::arg("theToStr"))
        .def_static("ConvertFormatToUnicode_s",
                    (void (*)( const Resource_FormatType , const Standard_CString , TCollection_ExtendedString & ) ) static_cast<void (*)( const Resource_FormatType , const Standard_CString , TCollection_ExtendedString & ) >(&Resource_Unicode::ConvertFormatToUnicode),
                    R"#(Converts the non-ASCII C string in specified format to the Unicode string of extended characters.)#"  , py::arg("theFormat"),  py::arg("theFromStr"),  py::arg("theToStr"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Resource_Manager.hxx
// ./opencascade/Resource_NoSuchResource.hxx
// ./opencascade/Resource_Unicode.hxx
// ./opencascade/Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString.hxx
// ./opencascade/Resource_ConvertUnicode.hxx
// ./opencascade/Resource_DataMapOfAsciiStringAsciiString.hxx
// ./opencascade/Resource_FormatType.hxx
// ./opencascade/Resource_DataMapIteratorOfDataMapOfAsciiStringAsciiString.hxx
// ./opencascade/Resource_DataMapOfAsciiStringExtendedString.hxx
// ./opencascade/Resource_LexicalCompare.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString>(m,"Resource_DataMapOfAsciiStringAsciiString");
    register_template_NCollection_DataMap<TCollection_AsciiString, TCollection_ExtendedString, TCollection_AsciiString>(m,"Resource_DataMapOfAsciiStringExtendedString");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
