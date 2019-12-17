
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <Font_FTFont.hxx>
#include <Font_FTLibrary.hxx>

// module includes
#include <Font_BRepFont.hxx>
#include <Font_BRepTextBuilder.hxx>
#include <Font_FontAspect.hxx>
#include <Font_FontMgr.hxx>
#include <Font_FTFont.hxx>
#include <Font_FTLibrary.hxx>
#include <Font_NameOfFont.hxx>
#include <Font_NListOfSystemFont.hxx>
#include <Font_Rect.hxx>
#include <Font_SystemFont.hxx>
#include <Font_TextFormatter.hxx>

// template related includes
// ./opencascade/Font_NListOfSystemFont.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
struct FT_LibraryRec_ {};

// Module definiiton
void register_Font(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Font"));


//Python trampoline classes

// classes


    static_cast<py::class_<Font_SystemFont ,opencascade::handle<Font_SystemFont>  , Standard_Transient >>(m.attr("Font_SystemFont"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<TCollection_HAsciiString> &,const Font_FontAspect,const opencascade::handle<TCollection_HAsciiString> & >()  , py::arg("theFontName"),  py::arg("theFontAspect"),  py::arg("theFilePath") )
        .def(py::init< const opencascade::handle<TCollection_HAsciiString> &,const opencascade::handle<TCollection_HAsciiString> & >()  , py::arg("theXLFD"),  py::arg("theFilePath") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Font_SystemFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Font_SystemFont::*)() const>(&Font_SystemFont::DynamicType),
             R"#(None)#" )
        .def("FontName",
             (const opencascade::handle<TCollection_HAsciiString> & (Font_SystemFont::*)() const) static_cast<const opencascade::handle<TCollection_HAsciiString> & (Font_SystemFont::*)() const>(&Font_SystemFont::FontName),
             R"#(Returns font family name.)#" )
        .def("FontPath",
             (const opencascade::handle<TCollection_HAsciiString> & (Font_SystemFont::*)() const) static_cast<const opencascade::handle<TCollection_HAsciiString> & (Font_SystemFont::*)() const>(&Font_SystemFont::FontPath),
             R"#(Returns font file path.)#" )
        .def("FontAspect",
             (Font_FontAspect (Font_SystemFont::*)() const) static_cast<Font_FontAspect (Font_SystemFont::*)() const>(&Font_SystemFont::FontAspect),
             R"#(Returns font aspect.)#" )
        .def("FontHeight",
             (Standard_Integer (Font_SystemFont::*)() const) static_cast<Standard_Integer (Font_SystemFont::*)() const>(&Font_SystemFont::FontHeight),
             R"#(Returns font height. If returned value is equal -1 it means that font is resizable.)#" )
        .def("IsValid",
             (Standard_Boolean (Font_SystemFont::*)() const) static_cast<Standard_Boolean (Font_SystemFont::*)() const>(&Font_SystemFont::IsValid),
             R"#(None)#" )
        .def("IsEqual",
             (Standard_Boolean (Font_SystemFont::*)( const opencascade::handle<Font_SystemFont> &  ) const) static_cast<Standard_Boolean (Font_SystemFont::*)( const opencascade::handle<Font_SystemFont> &  ) const>(&Font_SystemFont::IsEqual),
             R"#(Return true if the FontName, FontAspect and FontSize are the same.)#"  , py::arg("theOtherFont"))
        .def("IsSingleStrokeFont",
             (Standard_Boolean (Font_SystemFont::*)() const) static_cast<Standard_Boolean (Font_SystemFont::*)() const>(&Font_SystemFont::IsSingleStrokeFont),
             R"#(Return TRUE if this is single-stroke (one-line) font, FALSE by default. Such fonts define single-line glyphs instead of closed contours, so that they are rendered incorrectly by normal software.)#" )
        .def("SetSingleStrokeFont",
             (void (Font_SystemFont::*)( Standard_Boolean  ) ) static_cast<void (Font_SystemFont::*)( Standard_Boolean  ) >(&Font_SystemFont::SetSingleStrokeFont),
             R"#(Set if this font should be rendered as single-stroke (one-line).)#"  , py::arg("theIsSingleLine"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Font_SystemFont::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Font_SystemFont::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<Font_FontMgr ,opencascade::handle<Font_FontMgr>>(m,"Font_FontMgr");

    static_cast<py::class_<Font_FontMgr ,opencascade::handle<Font_FontMgr>  , Standard_Transient >>(m.attr("Font_FontMgr"))
        .def("GetAvailableFonts",
             (const Font_NListOfSystemFont & (Font_FontMgr::*)() const) static_cast<const Font_NListOfSystemFont & (Font_FontMgr::*)() const>(&Font_FontMgr::GetAvailableFonts),
             R"#(None)#" )
        .def("GetAvailableFontsNames",
             (void (Font_FontMgr::*)( NCollection_Sequence<opencascade::handle<TCollection_HAsciiString> > &  ) const) static_cast<void (Font_FontMgr::*)( NCollection_Sequence<opencascade::handle<TCollection_HAsciiString> > &  ) const>(&Font_FontMgr::GetAvailableFontsNames),
             R"#(Returns sequence of available fonts names)#"  , py::arg("theFontsNames"))
        .def("GetFont",
             (opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Font_FontAspect ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Font_FontAspect ,  const Standard_Integer  ) const>(&Font_FontMgr::GetFont),
             R"#(Returns font that match given parameters. If theFontName is empty string returned font can have any FontName. If theFontAspect is Font_FA_Undefined returned font can have any FontAspect. If theFontSize is "-1" returned font can have any FontSize.)#"  , py::arg("theFontName"),  py::arg("theFontAspect"),  py::arg("theFontSize"))
        .def("FindFont",
             (opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Font_FontAspect ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Font_FontAspect ,  const Standard_Integer  ) const>(&Font_FontMgr::FindFont),
             R"#(Tries to find font by given parameters. If the specified font is not found tries to use font names mapping. If the requested family name not found -> search for any font family with given aspect and height. If the font is still not found, returns any font available in the system. Returns NULL in case when the fonts are not found in the system.)#"  , py::arg("theFontName"),  py::arg("theFontAspect"),  py::arg("theFontSize"))
        .def("CheckFont",
             (opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const Standard_CString  ) const) static_cast<opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const Standard_CString  ) const>(&Font_FontMgr::CheckFont),
             R"#(Read font file and retrieve information from it.)#"  , py::arg("theFontPath"))
        .def("RegisterFont",
             (Standard_Boolean (Font_FontMgr::*)( const opencascade::handle<Font_SystemFont> & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (Font_FontMgr::*)( const opencascade::handle<Font_SystemFont> & ,  const Standard_Boolean  ) >(&Font_FontMgr::RegisterFont),
             R"#(Register new font. If there is existing entity with the same name and properties but different path then font will will be overridden or ignored depending on theToOverride flag.)#"  , py::arg("theFont"),  py::arg("theToOverride"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Font_FontMgr::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Font_FontMgr::*)() const>(&Font_FontMgr::DynamicType),
             R"#(None)#" )
        .def_static("GetInstance_s",
                    (opencascade::handle<Font_FontMgr> (*)() ) static_cast<opencascade::handle<Font_FontMgr> (*)() >(&Font_FontMgr::GetInstance),
                    R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Font_FontMgr::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Font_FontMgr::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Font_FTFont ,opencascade::handle<Font_FTFont>  , Standard_Transient >>(m.attr("Font_FTFont"))
        .def(py::init< const opencascade::handle<Font_FTLibrary> & >()  , py::arg("theFTLib")=static_cast<const opencascade::handle<Font_FTLibrary> &>(Handle ( Font_FTLibrary ) ( )) )
        .def("IsValid",
             (bool (Font_FTFont::*)() const) static_cast<bool (Font_FTFont::*)() const>(&Font_FTFont::IsValid),
             R"#(Returns true if font is loaded)#" )
        .def("GlyphImage",
             (const Image_PixMap & (Font_FTFont::*)() const) static_cast<const Image_PixMap & (Font_FTFont::*)() const>(&Font_FTFont::GlyphImage),
             R"#(Returns image plane for currently rendered glyph)#" )
        .def("Init",
             (bool (Font_FTFont::*)(  const NCollection_Utf8String & ,  const unsigned int ,  const unsigned int  ) ) static_cast<bool (Font_FTFont::*)(  const NCollection_Utf8String & ,  const unsigned int ,  const unsigned int  ) >(&Font_FTFont::Init),
             R"#(Initialize the font.)#"  , py::arg("theFontPath"),  py::arg("thePointSize"),  py::arg("theResolution"))
        .def("Init",
             (bool (Font_FTFont::*)(  const NCollection_Utf8String & ,  const Font_FontAspect ,  const unsigned int ,  const unsigned int  ) ) static_cast<bool (Font_FTFont::*)(  const NCollection_Utf8String & ,  const Font_FontAspect ,  const unsigned int ,  const unsigned int  ) >(&Font_FTFont::Init),
             R"#(Initialize the font.)#"  , py::arg("theFontName"),  py::arg("theFontAspect"),  py::arg("thePointSize"),  py::arg("theResolution"))
        .def("IsSingleStrokeFont",
             (bool (Font_FTFont::*)() const) static_cast<bool (Font_FTFont::*)() const>(&Font_FTFont::IsSingleStrokeFont),
             R"#(Return TRUE if this is single-stroke (one-line) font, FALSE by default. Such fonts define single-line glyphs instead of closed contours, so that they are rendered incorrectly by normal software.)#" )
        .def("SetSingleStrokeFont",
             (void (Font_FTFont::*)( bool  ) ) static_cast<void (Font_FTFont::*)( bool  ) >(&Font_FTFont::SetSingleStrokeFont),
             R"#(Set if this font should be rendered as single-stroke (one-line).)#"  , py::arg("theIsSingleLine"))
        .def("Release",
             (void (Font_FTFont::*)() ) static_cast<void (Font_FTFont::*)() >(&Font_FTFont::Release),
             R"#(Release currently loaded font.)#" )
        .def("RenderGlyph",
             (bool (Font_FTFont::*)( const Standard_Utf32Char  ) ) static_cast<bool (Font_FTFont::*)( const Standard_Utf32Char  ) >(&Font_FTFont::RenderGlyph),
             R"#(Render specified glyph into internal buffer (bitmap).)#"  , py::arg("theChar"))
        .def("GlyphMaxSizeX",
             (unsigned int (Font_FTFont::*)() const) static_cast<unsigned int (Font_FTFont::*)() const>(&Font_FTFont::GlyphMaxSizeX),
             R"#(Returns maximal glyph width in pixels (rendered to bitmap).)#" )
        .def("GlyphMaxSizeY",
             (unsigned int (Font_FTFont::*)() const) static_cast<unsigned int (Font_FTFont::*)() const>(&Font_FTFont::GlyphMaxSizeY),
             R"#(Returns maximal glyph height in pixels (rendered to bitmap).)#" )
        .def("Ascender",
             (float (Font_FTFont::*)() const) static_cast<float (Font_FTFont::*)() const>(&Font_FTFont::Ascender),
             R"#(Returns vertical distance from the horizontal baseline to the highest character coordinate.)#" )
        .def("Descender",
             (float (Font_FTFont::*)() const) static_cast<float (Font_FTFont::*)() const>(&Font_FTFont::Descender),
             R"#(Returns vertical distance from the horizontal baseline to the lowest character coordinate.)#" )
        .def("LineSpacing",
             (float (Font_FTFont::*)() const) static_cast<float (Font_FTFont::*)() const>(&Font_FTFont::LineSpacing),
             R"#(Returns default line spacing (the baseline-to-baseline distance).)#" )
        .def("PointSize",
             (unsigned int (Font_FTFont::*)() const) static_cast<unsigned int (Font_FTFont::*)() const>(&Font_FTFont::PointSize),
             R"#(Configured point size)#" )
        .def("SetWidthScaling",
             (void (Font_FTFont::*)( const float  ) ) static_cast<void (Font_FTFont::*)( const float  ) >(&Font_FTFont::SetWidthScaling),
             R"#(Setup glyph scaling along X-axis. By default glyphs are not scaled (scaling factor = 1.0))#"  , py::arg("theScaleFactor"))
        .def("AdvanceX",
             (float (Font_FTFont::*)( Standard_Utf32Char  ) const) static_cast<float (Font_FTFont::*)( Standard_Utf32Char  ) const>(&Font_FTFont::AdvanceX),
             R"#(Compute horizontal advance to the next character with kerning applied when applicable. Assuming text rendered horizontally.)#"  , py::arg("theUCharNext"))
        .def("AdvanceX",
             (float (Font_FTFont::*)( Standard_Utf32Char ,  Standard_Utf32Char  ) ) static_cast<float (Font_FTFont::*)( Standard_Utf32Char ,  Standard_Utf32Char  ) >(&Font_FTFont::AdvanceX),
             R"#(Compute horizontal advance to the next character with kerning applied when applicable. Assuming text rendered horizontally.)#"  , py::arg("theUChar"),  py::arg("theUCharNext"))
        .def("AdvanceY",
             (float (Font_FTFont::*)( Standard_Utf32Char  ) const) static_cast<float (Font_FTFont::*)( Standard_Utf32Char  ) const>(&Font_FTFont::AdvanceY),
             R"#(Compute vertical advance to the next character with kerning applied when applicable. Assuming text rendered vertically.)#"  , py::arg("theUCharNext"))
        .def("AdvanceY",
             (float (Font_FTFont::*)( Standard_Utf32Char ,  Standard_Utf32Char  ) ) static_cast<float (Font_FTFont::*)( Standard_Utf32Char ,  Standard_Utf32Char  ) >(&Font_FTFont::AdvanceY),
             R"#(Compute vertical advance to the next character with kerning applied when applicable. Assuming text rendered vertically.)#"  , py::arg("theUChar"),  py::arg("theUCharNext"))
        .def("GlyphsNumber",
             (Standard_Integer (Font_FTFont::*)() const) static_cast<Standard_Integer (Font_FTFont::*)() const>(&Font_FTFont::GlyphsNumber),
             R"#(Returns glyphs number in this font.)#" )
        .def("GlyphRect",
             (void (Font_FTFont::*)( Font_Rect &  ) const) static_cast<void (Font_FTFont::*)( Font_Rect &  ) const>(&Font_FTFont::GlyphRect),
             R"#(Retrieve glyph bitmap rectangle)#"  , py::arg("theRect"))
        .def("BoundingBox",
             (Font_Rect (Font_FTFont::*)(  const NCollection_Utf8String & ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment  ) ) static_cast<Font_Rect (Font_FTFont::*)(  const NCollection_Utf8String & ,  const Graphic3d_HorizontalTextAlignment ,  const Graphic3d_VerticalTextAlignment  ) >(&Font_FTFont::BoundingBox),
             R"#(Computes bounding box of the given text using plain-text formatter (Font_TextFormatter). Note that bounding box takes into account the text alignment options. Its corners are relative to the text alignment anchor point, their coordinates can be negative.)#"  , py::arg("theString"),  py::arg("theAlignX"),  py::arg("theAlignY"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Font_FTFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Font_FTFont::*)() const>(&Font_FTFont::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Font_FTFont::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Font_FTFont::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<Font_FTLibrary ,opencascade::handle<Font_FTLibrary>  , Standard_Transient >>(m.attr("Font_FTLibrary"))
        .def(py::init<  >()  )
        .def("IsValid",
             (bool (Font_FTLibrary::*)() const) static_cast<bool (Font_FTLibrary::*)() const>(&Font_FTLibrary::IsValid),
             R"#(This method should always return true.)#" )
        .def("Instance",
             (FT_Library (Font_FTLibrary::*)() const) static_cast<FT_Library (Font_FTLibrary::*)() const>(&Font_FTLibrary::Instance),
             R"#(Access FT_Library instance.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Font_FTLibrary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Font_FTLibrary::*)() const>(&Font_FTLibrary::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Font_FTLibrary::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Font_FTLibrary::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/Font_SystemFont.hxx
// ./opencascade/Font_NListOfSystemFont.hxx
    m.def("IsEqual", 
          (Standard_Boolean (*)( const opencascade::handle<Font_SystemFont> & ,  const opencascade::handle<Font_SystemFont> &  ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Font_SystemFont> & ,  const opencascade::handle<Font_SystemFont> &  )>(&IsEqual),
          R"#(None)#"  , py::arg("theFirstFont"),  py::arg("theSecondFont"));
// ./opencascade/Font_BRepFont.hxx
// ./opencascade/Font_Rect.hxx
// ./opencascade/Font_FontMgr.hxx
// ./opencascade/Font_FTLibrary.hxx
// ./opencascade/Font_TextFormatter.hxx
// ./opencascade/Font_FTFont.hxx
// ./opencascade/Font_FontAspect.hxx
// ./opencascade/Font_BRepTextBuilder.hxx
// ./opencascade/Font_NameOfFont.hxx

// operators

// register typdefs
// ./opencascade/Font_SystemFont.hxx
// ./opencascade/Font_NListOfSystemFont.hxx
    register_template_NCollection_List<opencascade::handle<Font_SystemFont> >(m,"Font_NListOfSystemFont");  
// ./opencascade/Font_BRepFont.hxx
// ./opencascade/Font_Rect.hxx
// ./opencascade/Font_FontMgr.hxx
// ./opencascade/Font_FTLibrary.hxx
// ./opencascade/Font_TextFormatter.hxx
// ./opencascade/Font_FTFont.hxx
// ./opencascade/Font_FontAspect.hxx
// ./opencascade/Font_BRepTextBuilder.hxx
// ./opencascade/Font_NameOfFont.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
