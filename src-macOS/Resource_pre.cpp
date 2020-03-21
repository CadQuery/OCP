
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_Resource_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Resource", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Resource_FormatType>(m, "Resource_FormatType",R"#(List of non ASCII format types which may be converted into the Unicode 16 bits format type. Use the functions provided by the Resource_Unicode class to convert a string from one of these non ASCII format to Unicode, and vice versa.)#")
        .value("Resource_FormatType_SJIS",Resource_FormatType::Resource_FormatType_SJIS)
        .value("Resource_FormatType_EUC",Resource_FormatType::Resource_FormatType_EUC)
        .value("Resource_FormatType_ANSI",Resource_FormatType::Resource_FormatType_ANSI)
        .value("Resource_FormatType_GB",Resource_FormatType::Resource_FormatType_GB)
        .value("Resource_FormatType_UTF8",Resource_FormatType::Resource_FormatType_UTF8)
        .value("Resource_FormatType_SystemLocale",Resource_FormatType::Resource_FormatType_SystemLocale)
        .value("Resource_SJIS",Resource_FormatType::Resource_SJIS)
        .value("Resource_EUC",Resource_FormatType::Resource_EUC)
        .value("Resource_ANSI",Resource_FormatType::Resource_ANSI)
        .value("Resource_GB",Resource_FormatType::Resource_GB).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString>(m,"Resource_DataMapOfAsciiStringAsciiString");
    preregister_template_NCollection_DataMap<TCollection_AsciiString, TCollection_ExtendedString, TCollection_AsciiString>(m,"Resource_DataMapOfAsciiStringExtendedString");

// classes forward declarations only
    py::class_<Resource_LexicalCompare , shared_ptr<Resource_LexicalCompare> >(m,"Resource_LexicalCompare",R"#(None)#");
    py::class_<Resource_Manager ,opencascade::handle<Resource_Manager> , Standard_Transient>(m,"Resource_Manager",R"#(Defines a resource structure and its management methods.Defines a resource structure and its management methods.Defines a resource structure and its management methods.)#");
    py::class_<Resource_Unicode , shared_ptr<Resource_Unicode> >(m,"Resource_Unicode",R"#(This class provides functions used to convert a non-ASCII C string given in ANSI, EUC, GB or SJIS format, to a Unicode string of extended characters, and vice versa.)#");

};

// user-defined post-inclusion per module

// user-defined post
