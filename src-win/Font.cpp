
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
#include <Font_FTLibrary.hxx>
#include <Font_FTFont.hxx>

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
#include <Font_StrictLevel.hxx>
#include <Font_SystemFont.hxx>
#include <Font_TextFormatter.hxx>
#include <Font_UnicodeSubset.hxx>

// template related includes
// ./opencascade\Font_NListOfSystemFont.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
struct FT_LibraryRec_ {};

// Module definiiton
void register_Font(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Font"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<Font_BRepTextBuilder , shared_ptr<Font_BRepTextBuilder>>(m,"Font_BRepTextBuilder");

    static_cast<py::class_<Font_BRepTextBuilder , shared_ptr<Font_BRepTextBuilder> >>(m.attr("Font_BRepTextBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (TopoDS_Shape (Font_BRepTextBuilder::*)( Font_BRepFont & , const Font_TextFormatter & , const gp_Ax3 & ) ) static_cast<TopoDS_Shape (Font_BRepTextBuilder::*)( Font_BRepFont & , const Font_TextFormatter & , const gp_Ax3 & ) >(&Font_BRepTextBuilder::Perform),
             R"#(Render text as BRep shape.)#"  , py::arg("theFont"),  py::arg("theFormatter"),  py::arg("thePenLoc")=static_cast<const gp_Ax3 &>(gp_Ax3 ( )))
        .def("Perform",
             (TopoDS_Shape (Font_BRepTextBuilder::*)( Font_BRepFont & ,  const NCollection_Utf8String & , const gp_Ax3 & , const Graphic3d_HorizontalTextAlignment , const Graphic3d_VerticalTextAlignment ) ) static_cast<TopoDS_Shape (Font_BRepTextBuilder::*)( Font_BRepFont & ,  const NCollection_Utf8String & , const gp_Ax3 & , const Graphic3d_HorizontalTextAlignment , const Graphic3d_VerticalTextAlignment ) >(&Font_BRepTextBuilder::Perform),
             R"#(Render text as BRep shape.)#"  , py::arg("theFont"),  py::arg("theString"),  py::arg("thePenLoc")=static_cast<const gp_Ax3 &>(gp_Ax3 ( )),  py::arg("theHAlign")=static_cast<const Graphic3d_HorizontalTextAlignment>(Graphic3d_HTA_LEFT),  py::arg("theVAlign")=static_cast<const Graphic3d_VerticalTextAlignment>(Graphic3d_VTA_BOTTOM))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
        .def("Perform",
             []( Font_BRepTextBuilder & self , const char* path, double size, Font_FontAspect aspect, const char* text){ auto font = Font_BRepFont(path,aspect,size); return self.Perform(font,text);},
             R"#(Render text as BRep shape.)#"
, py::arg("Font path"), py::arg("Font size"), py::arg("Font style"), py::arg("Text"))
;


    static_cast<py::class_<Font_FTFont ,opencascade::handle<Font_FTFont> , Standard_Transient>>(m.attr("Font_FTFont"))
    // constructors
        .def(py::init< const opencascade::handle<Font_FTLibrary> & >()  , py::arg("theFTLib")=static_cast<const opencascade::handle<Font_FTLibrary> &>(Handle ( Font_FTLibrary ) ( )) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Font_FTFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Font_FTFont::*)() const>(&Font_FTFont::DynamicType),
             R"#(None)#" )
        .def("IsValid",
             (bool (Font_FTFont::*)() const) static_cast<bool (Font_FTFont::*)() const>(&Font_FTFont::IsValid),
             R"#(Returns true if font is loaded)#" )
        .def("GlyphImage",
             (const Image_PixMap & (Font_FTFont::*)() const) static_cast<const Image_PixMap & (Font_FTFont::*)() const>(&Font_FTFont::GlyphImage),
             R"#(Returns image plane for currently rendered glyph)#" )
        .def("Init",
             (bool (Font_FTFont::*)( const TCollection_AsciiString & , const Font_FTFontParams & ) ) static_cast<bool (Font_FTFont::*)( const TCollection_AsciiString & , const Font_FTFontParams & ) >(&Font_FTFont::Init),
             R"#(Initialize the font from the given file path.)#"  , py::arg("theFontPath"),  py::arg("theParams"))
        .def("Init",
             (bool (Font_FTFont::*)( const opencascade::handle<NCollection_Buffer> & , const TCollection_AsciiString & , const Font_FTFontParams & ) ) static_cast<bool (Font_FTFont::*)( const opencascade::handle<NCollection_Buffer> & , const TCollection_AsciiString & , const Font_FTFontParams & ) >(&Font_FTFont::Init),
             R"#(Initialize the font from the given file path or memory buffer.)#"  , py::arg("theData"),  py::arg("theFileName"),  py::arg("theParams"))
        .def("FindAndInit",
             (bool (Font_FTFont::*)( const TCollection_AsciiString & , Font_FontAspect , const Font_FTFontParams & , Font_StrictLevel ) ) static_cast<bool (Font_FTFont::*)( const TCollection_AsciiString & , Font_FontAspect , const Font_FTFontParams & , Font_StrictLevel ) >(&Font_FTFont::FindAndInit),
             R"#(Find (using Font_FontMgr) and initialize the font from the given name.)#"  , py::arg("theFontName"),  py::arg("theFontAspect"),  py::arg("theParams"),  py::arg("theStrictLevel")=static_cast<Font_StrictLevel>(Font_StrictLevel_Any))
        .def("ToUseUnicodeSubsetFallback",
             (Standard_Boolean (Font_FTFont::*)() const) static_cast<Standard_Boolean (Font_FTFont::*)() const>(&Font_FTFont::ToUseUnicodeSubsetFallback),
             R"#(Return flag to use fallback fonts in case if used font does not include symbols from specific Unicode subset; TRUE by default.)#" )
        .def("SetUseUnicodeSubsetFallback",
             (void (Font_FTFont::*)( Standard_Boolean ) ) static_cast<void (Font_FTFont::*)( Standard_Boolean ) >(&Font_FTFont::SetUseUnicodeSubsetFallback),
             R"#(Set if fallback fonts should be used in case if used font does not include symbols from specific Unicode subset.)#"  , py::arg("theToFallback"))
        .def("IsSingleStrokeFont",
             (bool (Font_FTFont::*)() const) static_cast<bool (Font_FTFont::*)() const>(&Font_FTFont::IsSingleStrokeFont),
             R"#(Return TRUE if this is single-stroke (one-line) font, FALSE by default. Such fonts define single-line glyphs instead of closed contours, so that they are rendered incorrectly by normal software.)#" )
        .def("SetSingleStrokeFont",
             (void (Font_FTFont::*)( bool ) ) static_cast<void (Font_FTFont::*)( bool ) >(&Font_FTFont::SetSingleStrokeFont),
             R"#(Set if this font should be rendered as single-stroke (one-line).)#"  , py::arg("theIsSingleLine"))
        .def("ToSynthesizeItalic",
             (bool (Font_FTFont::*)() const) static_cast<bool (Font_FTFont::*)() const>(&Font_FTFont::ToSynthesizeItalic),
             R"#(Return TRUE if italic style should be synthesized; FALSE by default.)#" )
        .def("Release",
             (void (Font_FTFont::*)() ) static_cast<void (Font_FTFont::*)() >(&Font_FTFont::Release),
             R"#(Release currently loaded font.)#" )
        .def("RenderGlyph",
             (bool (Font_FTFont::*)( const Standard_Utf32Char ) ) static_cast<bool (Font_FTFont::*)( const Standard_Utf32Char ) >(&Font_FTFont::RenderGlyph),
             R"#(Render specified glyph into internal buffer (bitmap).)#"  , py::arg("theChar"))
        .def("GlyphMaxSizeX",
             (unsigned int (Font_FTFont::*)( bool ) const) static_cast<unsigned int (Font_FTFont::*)( bool ) const>(&Font_FTFont::GlyphMaxSizeX),
             R"#(Returns maximal glyph width in pixels (rendered to bitmap).)#"  , py::arg("theToIncludeFallback")=static_cast<bool>(false))
        .def("GlyphMaxSizeY",
             (unsigned int (Font_FTFont::*)( bool ) const) static_cast<unsigned int (Font_FTFont::*)( bool ) const>(&Font_FTFont::GlyphMaxSizeY),
             R"#(Returns maximal glyph height in pixels (rendered to bitmap).)#"  , py::arg("theToIncludeFallback")=static_cast<bool>(false))
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
             (void (Font_FTFont::*)( const float ) ) static_cast<void (Font_FTFont::*)( const float ) >(&Font_FTFont::SetWidthScaling),
             R"#(Setup glyph scaling along X-axis. By default glyphs are not scaled (scaling factor = 1.0))#"  , py::arg("theScaleFactor"))
        .def("HasSymbol",
             (bool (Font_FTFont::*)( Standard_Utf32Char ) const) static_cast<bool (Font_FTFont::*)( Standard_Utf32Char ) const>(&Font_FTFont::HasSymbol),
             R"#(Return TRUE if font contains specified symbol (excluding fallback list).)#"  , py::arg("theUChar"))
        .def("AdvanceX",
             (float (Font_FTFont::*)( Standard_Utf32Char ) const) static_cast<float (Font_FTFont::*)( Standard_Utf32Char ) const>(&Font_FTFont::AdvanceX),
             R"#(Compute horizontal advance to the next character with kerning applied when applicable. Assuming text rendered horizontally.)#"  , py::arg("theUCharNext"))
        .def("AdvanceX",
             (float (Font_FTFont::*)( Standard_Utf32Char , Standard_Utf32Char ) ) static_cast<float (Font_FTFont::*)( Standard_Utf32Char , Standard_Utf32Char ) >(&Font_FTFont::AdvanceX),
             R"#(Compute horizontal advance to the next character with kerning applied when applicable. Assuming text rendered horizontally.)#"  , py::arg("theUChar"),  py::arg("theUCharNext"))
        .def("AdvanceY",
             (float (Font_FTFont::*)( Standard_Utf32Char ) const) static_cast<float (Font_FTFont::*)( Standard_Utf32Char ) const>(&Font_FTFont::AdvanceY),
             R"#(Compute vertical advance to the next character with kerning applied when applicable. Assuming text rendered vertically.)#"  , py::arg("theUCharNext"))
        .def("AdvanceY",
             (float (Font_FTFont::*)( Standard_Utf32Char , Standard_Utf32Char ) ) static_cast<float (Font_FTFont::*)( Standard_Utf32Char , Standard_Utf32Char ) >(&Font_FTFont::AdvanceY),
             R"#(Compute vertical advance to the next character with kerning applied when applicable. Assuming text rendered vertically.)#"  , py::arg("theUChar"),  py::arg("theUCharNext"))
        .def("GlyphsNumber",
             (Standard_Integer (Font_FTFont::*)( bool ) const) static_cast<Standard_Integer (Font_FTFont::*)( bool ) const>(&Font_FTFont::GlyphsNumber),
             R"#(Return glyphs number in this font.)#"  , py::arg("theToIncludeFallback")=static_cast<bool>(false))
        .def("GlyphRect",
             (void (Font_FTFont::*)( Font_Rect & ) const) static_cast<void (Font_FTFont::*)( Font_Rect & ) const>(&Font_FTFont::GlyphRect),
             R"#(Retrieve glyph bitmap rectangle)#"  , py::arg("theRect"))
        .def("BoundingBox",
             (Font_Rect (Font_FTFont::*)(  const NCollection_Utf8String & , const Graphic3d_HorizontalTextAlignment , const Graphic3d_VerticalTextAlignment ) ) static_cast<Font_Rect (Font_FTFont::*)(  const NCollection_Utf8String & , const Graphic3d_HorizontalTextAlignment , const Graphic3d_VerticalTextAlignment ) >(&Font_FTFont::BoundingBox),
             R"#(Computes bounding box of the given text using plain-text formatter (Font_TextFormatter). Note that bounding box takes into account the text alignment options. Its corners are relative to the text alignment anchor point, their coordinates can be negative.)#"  , py::arg("theString"),  py::arg("theAlignX"),  py::arg("theAlignY"))
        .def("Init",
             (bool (Font_FTFont::*)(  const NCollection_Utf8String & , unsigned int , unsigned int ) ) static_cast<bool (Font_FTFont::*)(  const NCollection_Utf8String & , unsigned int , unsigned int ) >(&Font_FTFont::Init),
             R"#(Initialize the font.)#"  , py::arg("theFontPath"),  py::arg("thePointSize"),  py::arg("theResolution"))
        .def("Init",
             (bool (Font_FTFont::*)(  const NCollection_Utf8String & , Font_FontAspect , unsigned int , unsigned int ) ) static_cast<bool (Font_FTFont::*)(  const NCollection_Utf8String & , Font_FontAspect , unsigned int , unsigned int ) >(&Font_FTFont::Init),
             R"#(Initialize the font.)#"  , py::arg("theFontName"),  py::arg("theFontAspect"),  py::arg("thePointSize"),  py::arg("theResolution"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Font_FTFont::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Font_FTFont::get_type_descriptor),
                    R"#(None)#" )
        .def_static("FindAndCreate_s",
                    (opencascade::handle<Font_FTFont> (*)( const TCollection_AsciiString & , const Font_FontAspect , const Font_FTFontParams & , const Font_StrictLevel ) ) static_cast<opencascade::handle<Font_FTFont> (*)( const TCollection_AsciiString & , const Font_FontAspect , const Font_FTFontParams & , const Font_StrictLevel ) >(&Font_FTFont::FindAndCreate),
                    R"#(Find the font Initialize the font.)#"  , py::arg("theFontName"),  py::arg("theFontAspect"),  py::arg("theParams"),  py::arg("theStrictLevel")=static_cast<const Font_StrictLevel>(Font_StrictLevel_Any))
        .def_static("IsCharFromCJK_s",
                    (bool (*)( Standard_Utf32Char ) ) static_cast<bool (*)( Standard_Utf32Char ) >(&Font_FTFont::IsCharFromCJK),
                    R"#(Return TRUE if specified character is within subset of modern CJK characters.)#"  , py::arg("theUChar"))
        .def_static("IsCharFromHiragana_s",
                    (bool (*)( Standard_Utf32Char ) ) static_cast<bool (*)( Standard_Utf32Char ) >(&Font_FTFont::IsCharFromHiragana),
                    R"#(Return TRUE if specified character is within subset of Hiragana (Japanese).)#"  , py::arg("theUChar"))
        .def_static("IsCharFromKatakana_s",
                    (bool (*)( Standard_Utf32Char ) ) static_cast<bool (*)( Standard_Utf32Char ) >(&Font_FTFont::IsCharFromKatakana),
                    R"#(Return TRUE if specified character is within subset of Katakana (Japanese).)#"  , py::arg("theUChar"))
        .def_static("IsCharFromKorean_s",
                    (bool (*)( Standard_Utf32Char ) ) static_cast<bool (*)( Standard_Utf32Char ) >(&Font_FTFont::IsCharFromKorean),
                    R"#(Return TRUE if specified character is within subset of modern Korean characters (Hangul).)#"  , py::arg("theUChar"))
        .def_static("IsCharFromArabic_s",
                    (bool (*)( Standard_Utf32Char ) ) static_cast<bool (*)( Standard_Utf32Char ) >(&Font_FTFont::IsCharFromArabic),
                    R"#(Return TRUE if specified character is within subset of Arabic characters.)#"  , py::arg("theUChar"))
        .def_static("IsCharRightToLeft_s",
                    (bool (*)( Standard_Utf32Char ) ) static_cast<bool (*)( Standard_Utf32Char ) >(&Font_FTFont::IsCharRightToLeft),
                    R"#(Return TRUE if specified character should be displayed in Right-to-Left order.)#"  , py::arg("theUChar"))
        .def_static("CharSubset_s",
                    (Font_UnicodeSubset (*)( Standard_Utf32Char ) ) static_cast<Font_UnicodeSubset (*)( Standard_Utf32Char ) >(&Font_FTFont::CharSubset),
                    R"#(Determine Unicode subset for specified character)#"  , py::arg("theUChar"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Font_FTFontParams , shared_ptr<Font_FTFontParams> >>(m.attr("Font_FTFontParams"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< unsigned int,unsigned int >()  , py::arg("thePointSize"),  py::arg("theResolution") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Font_FTLibrary ,opencascade::handle<Font_FTLibrary> , Standard_Transient>>(m.attr("Font_FTLibrary"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsValid",
             (bool (Font_FTLibrary::*)() const) static_cast<bool (Font_FTLibrary::*)() const>(&Font_FTLibrary::IsValid),
             R"#(This method should always return true.)#" )
        .def("Instance",
             (FT_Library (Font_FTLibrary::*)() const) static_cast<FT_Library (Font_FTLibrary::*)() const>(&Font_FTLibrary::Instance),
             R"#(Access FT_Library instance.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Font_FTLibrary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Font_FTLibrary::*)() const>(&Font_FTLibrary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Font_FTLibrary::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Font_FTLibrary::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Font_FontMgr ,opencascade::handle<Font_FontMgr> , Standard_Transient>>(m.attr("Font_FontMgr"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Font_FontMgr::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Font_FontMgr::*)() const>(&Font_FontMgr::DynamicType),
             R"#(None)#" )
        .def("AvailableFonts",
             (void (Font_FontMgr::*)( NCollection_List<opencascade::handle<Font_SystemFont> > & ) const) static_cast<void (Font_FontMgr::*)( NCollection_List<opencascade::handle<Font_SystemFont> > & ) const>(&Font_FontMgr::AvailableFonts),
             R"#(Return the list of available fonts.)#"  , py::arg("theList"))
        .def("GetAvailableFonts",
             (Font_NListOfSystemFont (Font_FontMgr::*)() const) static_cast<Font_NListOfSystemFont (Font_FontMgr::*)() const>(&Font_FontMgr::GetAvailableFonts),
             R"#(Return the list of available fonts.)#" )
        .def("GetAvailableFontsNames",
             (void (Font_FontMgr::*)( NCollection_Sequence<opencascade::handle<TCollection_HAsciiString> > & ) const) static_cast<void (Font_FontMgr::*)( NCollection_Sequence<opencascade::handle<TCollection_HAsciiString> > & ) const>(&Font_FontMgr::GetAvailableFontsNames),
             R"#(Returns sequence of available fonts names)#"  , py::arg("theFontsNames"))
        .def("GetFont",
             (opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const opencascade::handle<TCollection_HAsciiString> & , const Font_FontAspect , const Standard_Integer ) const) static_cast<opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const opencascade::handle<TCollection_HAsciiString> & , const Font_FontAspect , const Standard_Integer ) const>(&Font_FontMgr::GetFont),
             R"#(Returns font that match given parameters. If theFontName is empty string returned font can have any FontName. If theFontAspect is Font_FA_Undefined returned font can have any FontAspect. If theFontSize is "-1" returned font can have any FontSize.)#"  , py::arg("theFontName"),  py::arg("theFontAspect"),  py::arg("theFontSize"))
        .def("GetFont",
             (opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const TCollection_AsciiString & ) const) static_cast<opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const TCollection_AsciiString & ) const>(&Font_FontMgr::GetFont),
             R"#(Returns font that match given name or NULL if such font family is NOT registered. Note that unlike FindFont(), this method ignores font aliases and does not look for fall-back.)#"  , py::arg("theFontName"))
        .def("FindFont",
             (opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const TCollection_AsciiString & , Font_StrictLevel , Font_FontAspect & ) const) static_cast<opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const TCollection_AsciiString & , Font_StrictLevel , Font_FontAspect & ) const>(&Font_FontMgr::FindFont),
             R"#(Tries to find font by given parameters. If the specified font is not found tries to use font names mapping. If the requested family name not found -> search for any font family with given aspect and height. If the font is still not found, returns any font available in the system. Returns NULL in case when the fonts are not found in the system.)#"  , py::arg("theFontName"),  py::arg("theStrictLevel"),  py::arg("theFontAspect"))
        .def("FindFont",
             (opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const TCollection_AsciiString & , Font_FontAspect & ) const) static_cast<opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const TCollection_AsciiString & , Font_FontAspect & ) const>(&Font_FontMgr::FindFont),
             R"#(Tries to find font by given parameters.)#"  , py::arg("theFontName"),  py::arg("theFontAspect"))
        .def("FindFallbackFont",
             (opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( Font_UnicodeSubset , Font_FontAspect ) const) static_cast<opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( Font_UnicodeSubset , Font_FontAspect ) const>(&Font_FontMgr::FindFallbackFont),
             R"#(Tries to find fallback font for specified Unicode subset. Returns NULL in case when fallback font is not found in the system.)#"  , py::arg("theSubset"),  py::arg("theFontAspect"))
        .def("CheckFont",
             (opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const Standard_CString ) const) static_cast<opencascade::handle<Font_SystemFont> (Font_FontMgr::*)( const Standard_CString ) const>(&Font_FontMgr::CheckFont),
             R"#(Read font file and retrieve information from it.)#"  , py::arg("theFontPath"))
        .def("RegisterFont",
             (Standard_Boolean (Font_FontMgr::*)( const opencascade::handle<Font_SystemFont> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (Font_FontMgr::*)( const opencascade::handle<Font_SystemFont> & , const Standard_Boolean ) >(&Font_FontMgr::RegisterFont),
             R"#(Register new font. If there is existing entity with the same name and properties but different path then font will be overridden or ignored depending on theToOverride flag.)#"  , py::arg("theFont"),  py::arg("theToOverride"))
        .def("ToTraceAliases",
             (Standard_Boolean (Font_FontMgr::*)() const) static_cast<Standard_Boolean (Font_FontMgr::*)() const>(&Font_FontMgr::ToTraceAliases),
             R"#(Return flag for tracing font aliases usage via Message_Trace messages; TRUE by default.)#" )
        .def("SetTraceAliases",
             (void (Font_FontMgr::*)( Standard_Boolean ) ) static_cast<void (Font_FontMgr::*)( Standard_Boolean ) >(&Font_FontMgr::SetTraceAliases),
             R"#(Set flag for tracing font alias usage; useful to trace which fonts are actually used. Can be disabled to avoid redundant messages with Message_Trace level.)#"  , py::arg("theToTrace"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Font_FontMgr::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Font_FontMgr::get_type_descriptor),
                    R"#(None)#" )
        .def_static("GetInstance_s",
                    (opencascade::handle<Font_FontMgr> (*)() ) static_cast<opencascade::handle<Font_FontMgr> (*)() >(&Font_FontMgr::GetInstance),
                    R"#(Return global instance of font manager.)#" )
        .def_static("FontAspectToString_s",
                    (const char * (*)( Font_FontAspect ) ) static_cast<const char * (*)( Font_FontAspect ) >(&Font_FontMgr::FontAspectToString),
                    R"#(Return font aspect as string.)#"  , py::arg("theAspect"))
        .def_static("ToUseUnicodeSubsetFallback_s",
                    (Standard_Boolean & (*)() ) static_cast<Standard_Boolean & (*)() >(&Font_FontMgr::ToUseUnicodeSubsetFallback),
                    R"#(Return flag to use fallback fonts in case if used font does not include symbols from specific Unicode subset; TRUE by default.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Font_Rect , shared_ptr<Font_Rect>>(m,"Font_Rect");

    static_cast<py::class_<Font_Rect , shared_ptr<Font_Rect> >>(m.attr("Font_Rect"))
    // constructors
    // custom constructors
    // methods
        .def("TopLeft",
             (NCollection_Vec2<float> (Font_Rect::*)() const) static_cast<NCollection_Vec2<float> (Font_Rect::*)() const>(&Font_Rect::TopLeft),
             R"#(Top-left corner as vec2.)#" )
        .def("TopLeft",
             (NCollection_Vec2<float> & (Font_Rect::*)( NCollection_Vec2<float> & ) const) static_cast<NCollection_Vec2<float> & (Font_Rect::*)( NCollection_Vec2<float> & ) const>(&Font_Rect::TopLeft),
             R"#(Top-left corner as vec2.)#"  , py::arg("theVec"))
        .def("TopRight",
             (NCollection_Vec2<float> & (Font_Rect::*)( NCollection_Vec2<float> & ) const) static_cast<NCollection_Vec2<float> & (Font_Rect::*)( NCollection_Vec2<float> & ) const>(&Font_Rect::TopRight),
             R"#(Top-right corner as vec2.)#"  , py::arg("theVec"))
        .def("BottomLeft",
             (NCollection_Vec2<float> & (Font_Rect::*)( NCollection_Vec2<float> & ) const) static_cast<NCollection_Vec2<float> & (Font_Rect::*)( NCollection_Vec2<float> & ) const>(&Font_Rect::BottomLeft),
             R"#(Bottom-left corner as vec2.)#"  , py::arg("theVec"))
        .def("BottomRight",
             (NCollection_Vec2<float> & (Font_Rect::*)( NCollection_Vec2<float> & ) const) static_cast<NCollection_Vec2<float> & (Font_Rect::*)( NCollection_Vec2<float> & ) const>(&Font_Rect::BottomRight),
             R"#(Bottom-right corner as vec2.)#"  , py::arg("theVec"))
        .def("Width",
             (float (Font_Rect::*)() const) static_cast<float (Font_Rect::*)() const>(&Font_Rect::Width),
             R"#(Rectangle width.)#" )
        .def("Height",
             (float (Font_Rect::*)() const) static_cast<float (Font_Rect::*)() const>(&Font_Rect::Height),
             R"#(Rectangle height.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Font_SystemFont ,opencascade::handle<Font_SystemFont> , Standard_Transient>>(m.attr("Font_SystemFont"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theFontName") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Font_SystemFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Font_SystemFont::*)() const>(&Font_SystemFont::DynamicType),
             R"#(None)#" )
        .def("FontKey",
             (const TCollection_AsciiString & (Font_SystemFont::*)() const) static_cast<const TCollection_AsciiString & (Font_SystemFont::*)() const>(&Font_SystemFont::FontKey),
             R"#(Returns font family name (lower-cased).)#" )
        .def("FontName",
             (const TCollection_AsciiString & (Font_SystemFont::*)() const) static_cast<const TCollection_AsciiString & (Font_SystemFont::*)() const>(&Font_SystemFont::FontName),
             R"#(Returns font family name.)#" )
        .def("FontPath",
             (const TCollection_AsciiString & (Font_SystemFont::*)( Font_FontAspect ) const) static_cast<const TCollection_AsciiString & (Font_SystemFont::*)( Font_FontAspect ) const>(&Font_SystemFont::FontPath),
             R"#(Returns font file path.)#"  , py::arg("theAspect"))
        .def("SetFontPath",
             (void (Font_SystemFont::*)( Font_FontAspect , const TCollection_AsciiString & ) ) static_cast<void (Font_SystemFont::*)( Font_FontAspect , const TCollection_AsciiString & ) >(&Font_SystemFont::SetFontPath),
             R"#(Sets font file path for specific aspect.)#"  , py::arg("theAspect"),  py::arg("thePath"))
        .def("HasFontAspect",
             (bool (Font_SystemFont::*)( Font_FontAspect ) const) static_cast<bool (Font_SystemFont::*)( Font_FontAspect ) const>(&Font_SystemFont::HasFontAspect),
             R"#(Returns TRUE if dedicated file for specified font aspect has been defined.)#"  , py::arg("theAspect"))
        .def("FontPathAny",
             (const TCollection_AsciiString & (Font_SystemFont::*)( Font_FontAspect , bool & ) const) static_cast<const TCollection_AsciiString & (Font_SystemFont::*)( Font_FontAspect , bool & ) const>(&Font_SystemFont::FontPathAny),
             R"#(Returns any defined font file path.)#"  , py::arg("theAspect"),  py::arg("theToSynthesizeItalic"))
        .def("IsEqual",
             (Standard_Boolean (Font_SystemFont::*)( const opencascade::handle<Font_SystemFont> & ) const) static_cast<Standard_Boolean (Font_SystemFont::*)( const opencascade::handle<Font_SystemFont> & ) const>(&Font_SystemFont::IsEqual),
             R"#(Return true if the FontName, FontAspect and FontSize are the same.)#"  , py::arg("theOtherFont"))
        .def("IsSingleStrokeFont",
             (Standard_Boolean (Font_SystemFont::*)() const) static_cast<Standard_Boolean (Font_SystemFont::*)() const>(&Font_SystemFont::IsSingleStrokeFont),
             R"#(Return TRUE if this is single-stroke (one-line) font, FALSE by default. Such fonts define single-line glyphs instead of closed contours, so that they are rendered incorrectly by normal software.)#" )
        .def("SetSingleStrokeFont",
             (void (Font_SystemFont::*)( Standard_Boolean ) ) static_cast<void (Font_SystemFont::*)( Standard_Boolean ) >(&Font_SystemFont::SetSingleStrokeFont),
             R"#(Set if this font should be rendered as single-stroke (one-line).)#"  , py::arg("theIsSingleLine"))
        .def("ToString",
             (TCollection_AsciiString (Font_SystemFont::*)() const) static_cast<TCollection_AsciiString (Font_SystemFont::*)() const>(&Font_SystemFont::ToString),
             R"#(Format font description.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Font_SystemFont::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Font_SystemFont::get_type_descriptor),
                    R"#(None)#" )
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const opencascade::handle<Font_SystemFont> & , const Standard_Integer ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Font_SystemFont> & , const Standard_Integer ) >(&Font_SystemFont::HashCode),
                    R"#(Computes a hash code for the system font, in the range [1, theUpperBound]. Based on Font Family, so that the whole family with different aspects can be found within the same bucket of some map)#"  , py::arg("theSystemFont"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (bool (*)( const opencascade::handle<Font_SystemFont> & , const opencascade::handle<Font_SystemFont> & ) ) static_cast<bool (*)( const opencascade::handle<Font_SystemFont> & , const opencascade::handle<Font_SystemFont> & ) >(&Font_SystemFont::IsEqual),
                    R"#(Matching two instances, for Map interface.)#"  , py::arg("theFont1"),  py::arg("theFont2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Font_TextFormatter , shared_ptr<Font_TextFormatter> >>(m.attr("Font_TextFormatter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetupAlignment",
             (void (Font_TextFormatter::*)( const Graphic3d_HorizontalTextAlignment , const Graphic3d_VerticalTextAlignment ) ) static_cast<void (Font_TextFormatter::*)( const Graphic3d_HorizontalTextAlignment , const Graphic3d_VerticalTextAlignment ) >(&Font_TextFormatter::SetupAlignment),
             R"#(Setup alignment style.)#"  , py::arg("theAlignX"),  py::arg("theAlignY"))
        .def("Reset",
             (void (Font_TextFormatter::*)() ) static_cast<void (Font_TextFormatter::*)() >(&Font_TextFormatter::Reset),
             R"#(Reset current progress.)#" )
        .def("Append",
             (void (Font_TextFormatter::*)(  const NCollection_Utf8String & , Font_FTFont & ) ) static_cast<void (Font_TextFormatter::*)(  const NCollection_Utf8String & , Font_FTFont & ) >(&Font_TextFormatter::Append),
             R"#(Render specified text to inner buffer.)#"  , py::arg("theString"),  py::arg("theFont"))
        .def("Format",
             (void (Font_TextFormatter::*)() ) static_cast<void (Font_TextFormatter::*)() >(&Font_TextFormatter::Format),
             R"#(Perform formatting on the buffered text. Should not be called more than once after initialization!)#" )
        .def("TopLeft",
             (const NCollection_Vec2<Standard_ShortReal> & (Font_TextFormatter::*)( const Standard_Integer ) const) static_cast<const NCollection_Vec2<Standard_ShortReal> & (Font_TextFormatter::*)( const Standard_Integer ) const>(&Font_TextFormatter::TopLeft),
             R"#(Returns specific glyph rectangle.)#"  , py::arg("theIndex"))
        .def("String",
             (const NCollection_String & (Font_TextFormatter::*)() const) static_cast<const NCollection_String & (Font_TextFormatter::*)() const>(&Font_TextFormatter::String),
             R"#(Returns current rendering string.)#" )
        .def("TabSize",
             (Standard_Integer (Font_TextFormatter::*)() const) static_cast<Standard_Integer (Font_TextFormatter::*)() const>(&Font_TextFormatter::TabSize),
             R"#(Returns tab size.)#" )
        .def("ResultWidth",
             (Standard_ShortReal (Font_TextFormatter::*)() const) static_cast<Standard_ShortReal (Font_TextFormatter::*)() const>(&Font_TextFormatter::ResultWidth),
             R"#(Returns width of formatted text.)#" )
        .def("ResultHeight",
             (Standard_ShortReal (Font_TextFormatter::*)() const) static_cast<Standard_ShortReal (Font_TextFormatter::*)() const>(&Font_TextFormatter::ResultHeight),
             R"#(Returns height of formatted text.)#" )
        .def("BndBox",
             (void (Font_TextFormatter::*)( Font_Rect & ) const) static_cast<void (Font_TextFormatter::*)( Font_Rect & ) const>(&Font_TextFormatter::BndBox),
             R"#()#"  , py::arg("theBndBox"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\Font_FontMgr.hxx
// ./opencascade\Font_BRepTextBuilder.hxx
// ./opencascade\Font_NameOfFont.hxx
// ./opencascade\Font_UnicodeSubset.hxx
// ./opencascade\Font_FTLibrary.hxx
// ./opencascade\Font_FTFont.hxx
// ./opencascade\Font_TextFormatter.hxx
// ./opencascade\Font_FontAspect.hxx
// ./opencascade\Font_NListOfSystemFont.hxx
    m.def("IsEqual",
          (Standard_Boolean (*)( const opencascade::handle<Font_SystemFont> & , const opencascade::handle<Font_SystemFont> & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Font_SystemFont> & , const opencascade::handle<Font_SystemFont> & )>(&IsEqual),
          R"#(None)#"  , py::arg("theFirstFont"),  py::arg("theSecondFont"));
// ./opencascade\Font_StrictLevel.hxx
// ./opencascade\Font_SystemFont.hxx
// ./opencascade\Font_Rect.hxx
// ./opencascade\Font_BRepFont.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<Font_SystemFont> >(m,"Font_NListOfSystemFont");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
