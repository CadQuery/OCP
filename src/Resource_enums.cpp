
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
// ./opencascade/Resource_DataMapOfAsciiStringExtendedString.hxx
#include "NCollection.hxx"
// ./opencascade/Resource_DataMapOfAsciiStringExtendedString.hxx
#include "NCollection.hxx"
// ./opencascade/Resource_DataMapOfAsciiStringAsciiString.hxx
#include "NCollection.hxx"
// ./opencascade/Resource_DataMapOfAsciiStringAsciiString.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Resource_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Resource", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Resource_FormatType>(m, "Resource_FormatType",R"#(List of non ASCII format types which may be converted into the Unicode 16 bits format type. Use the functions provided by the Resource_Unicode class to convert a string from one of these non ASCII format to Unicode, and vice versa.)#")
        .value("Resource_SJIS",Resource_FormatType::Resource_SJIS)
        .value("Resource_EUC",Resource_FormatType::Resource_EUC)
        .value("Resource_ANSI",Resource_FormatType::Resource_ANSI)
        .value("Resource_GB",Resource_FormatType::Resource_GB).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<Resource_LexicalCompare ,std::unique_ptr<Resource_LexicalCompare>  >(m,"Resource_LexicalCompare",R"#(None)#");
    py::class_<Resource_Unicode ,std::unique_ptr<Resource_Unicode>  >(m,"Resource_Unicode",R"#(This class provides functions used to convert a non-ASCII C string given in ANSI, EUC, GB or SJIS format, to a Unicode string of extended characters, and vice versa.)#");
    py::class_<Resource_Manager ,opencascade::handle<Resource_Manager>  , Standard_Transient >(m,"Resource_Manager",R"#(Defines a resource structure and its management methods.Defines a resource structure and its management methods.Defines a resource structure and its management methods.)#");

// pre-register typdefs
// ./opencascade/Resource_DataMapOfAsciiStringExtendedString.hxx
    preregister_template_NCollection_DataMap<TCollection_AsciiString, TCollection_ExtendedString, TCollection_AsciiString>(m,"Resource_DataMapOfAsciiStringExtendedString");  
// ./opencascade/Resource_ConvertUnicode.hxx
// ./opencascade/Resource_LexicalCompare.hxx
// ./opencascade/Resource_Manager.hxx
// ./opencascade/Resource_DataMapIteratorOfDataMapOfAsciiStringExtendedString.hxx
// ./opencascade/Resource_FormatType.hxx
// ./opencascade/Resource_Unicode.hxx
// ./opencascade/Resource_NoSuchResource.hxx
// ./opencascade/Resource_DataMapIteratorOfDataMapOfAsciiStringAsciiString.hxx
// ./opencascade/Resource_DataMapOfAsciiStringAsciiString.hxx
    preregister_template_NCollection_DataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString>(m,"Resource_DataMapOfAsciiStringAsciiString");  

};

// user-defined post-inclusion per module

// user-defined post
