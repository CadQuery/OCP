
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>

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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Resource_Manager ,opencascade::handle<Resource_Manager> , Standard_Transient>>(m.attr("Resource_Manager"))
    // constructors
    // custom constructors
    // methods
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Resource_Manager::get_type_name),
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
        .def_static("ConvertFormatToUnicode_s",
                    (void (*)( const Standard_CString , TCollection_ExtendedString & ) ) static_cast<void (*)( const Standard_CString , TCollection_ExtendedString & ) >(&Resource_Unicode::ConvertFormatToUnicode),
                    R"#(Converts the non-ASCII C string (as specified by GetFormat()) to the Unicode string of extended characters.)#"  , py::arg("theFromStr"),  py::arg("theToStr"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Resource_FormatType.hxx
// ./opencascade/Resource_DataMapOfAsciiStringAsciiString.hxx
// ./opencascade/Resource_LexicalCompare.hxx
// ./opencascade/Resource_NoSuchResource.hxx
// ./opencascade/Resource_ConvertUnicode.hxx
// ./opencascade/Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString.hxx
// ./opencascade/Resource_Manager.hxx
// ./opencascade/Resource_DataMapOfAsciiStringExtendedString.hxx
// ./opencascade/Resource_DataMapIteratorOfDataMapOfAsciiStringAsciiString.hxx
// ./opencascade/Resource_Unicode.hxx

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
