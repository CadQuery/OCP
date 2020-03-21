
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_NegativeValue.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_NumericError.hxx>
#include <Aspect_IdentDefinitionError.hxx>
#include <Standard_NegativeValue.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_NumericError.hxx>
#include <Aspect_DisplayConnection.hxx>

// module includes
#include <Aspect_AspectFillAreaDefinitionError.hxx>
#include <Aspect_AspectLineDefinitionError.hxx>
#include <Aspect_AspectMarkerDefinitionError.hxx>
#include <Aspect_Background.hxx>
#include <Aspect_CircularGrid.hxx>
#include <Aspect_Convert.hxx>
#include <Aspect_Display.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <Aspect_DisplayConnectionDefinitionError.hxx>
#include <Aspect_Drawable.hxx>
#include <Aspect_FBConfig.hxx>
#include <Aspect_FillMethod.hxx>
#include <Aspect_GenId.hxx>
#include <Aspect_GradientBackground.hxx>
#include <Aspect_GradientFillMethod.hxx>
#include <Aspect_GraphicDeviceDefinitionError.hxx>
#include <Aspect_Grid.hxx>
#include <Aspect_GridDrawMode.hxx>
#include <Aspect_GridType.hxx>
#include <Aspect_Handle.hxx>
#include <Aspect_HatchStyle.hxx>
#include <Aspect_IdentDefinitionError.hxx>
#include <Aspect_InteriorStyle.hxx>
#include <Aspect_NeutralWindow.hxx>
#include <Aspect_PolygonOffsetMode.hxx>
#include <Aspect_RectangularGrid.hxx>
#include <Aspect_RenderingContext.hxx>
#include <Aspect_ScrollDelta.hxx>
#include <Aspect_SequenceOfColor.hxx>
#include <Aspect_Touch.hxx>
#include <Aspect_TouchMap.hxx>
#include <Aspect_TypeOfColorScaleData.hxx>
#include <Aspect_TypeOfColorScaleOrientation.hxx>
#include <Aspect_TypeOfColorScalePosition.hxx>
#include <Aspect_TypeOfDeflection.hxx>
#include <Aspect_TypeOfDisplayText.hxx>
#include <Aspect_TypeOfFacingModel.hxx>
#include <Aspect_TypeOfHighlightMethod.hxx>
#include <Aspect_TypeOfLine.hxx>
#include <Aspect_TypeOfMarker.hxx>
#include <Aspect_TypeOfResize.hxx>
#include <Aspect_TypeOfStyleText.hxx>
#include <Aspect_TypeOfTriedronPosition.hxx>
#include <Aspect_Units.hxx>
#include <Aspect_VKey.hxx>
#include <Aspect_VKeyFlags.hxx>
#include <Aspect_WidthOfLine.hxx>
#include <Aspect_Window.hxx>
#include <Aspect_WindowDefinitionError.hxx>
#include <Aspect_WindowError.hxx>
#include <Aspect_XAtom.hxx>
#include <Aspect_XWD.hxx>

// template related includes
// ./opencascade\Aspect_SequenceOfColor.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Aspect_TouchMap.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
struct __GLXFBConfigRec {};

// Module definiiton
void register_Aspect_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Aspect", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Aspect_TypeOfDeflection>(m, "Aspect_TypeOfDeflection",R"#(Defines if the maximal chordial deflection used when drawing an object is absolute or relative to the size of the object.)#")
        .value("Aspect_TOD_RELATIVE",Aspect_TypeOfDeflection::Aspect_TOD_RELATIVE)
        .value("Aspect_TOD_ABSOLUTE",Aspect_TypeOfDeflection::Aspect_TOD_ABSOLUTE).export_values();
    py::enum_<Aspect_TypeOfFacingModel>(m, "Aspect_TypeOfFacingModel",R"#(None)#")
        .value("Aspect_TOFM_BOTH_SIDE",Aspect_TypeOfFacingModel::Aspect_TOFM_BOTH_SIDE)
        .value("Aspect_TOFM_BACK_SIDE",Aspect_TypeOfFacingModel::Aspect_TOFM_BACK_SIDE)
        .value("Aspect_TOFM_FRONT_SIDE",Aspect_TypeOfFacingModel::Aspect_TOFM_FRONT_SIDE).export_values();
    py::enum_<Aspect_TypeOfLine>(m, "Aspect_TypeOfLine",R"#(Definition of line types)#")
        .value("Aspect_TOL_EMPTY",Aspect_TypeOfLine::Aspect_TOL_EMPTY)
        .value("Aspect_TOL_SOLID",Aspect_TypeOfLine::Aspect_TOL_SOLID)
        .value("Aspect_TOL_DASH",Aspect_TypeOfLine::Aspect_TOL_DASH)
        .value("Aspect_TOL_DOT",Aspect_TypeOfLine::Aspect_TOL_DOT)
        .value("Aspect_TOL_DOTDASH",Aspect_TypeOfLine::Aspect_TOL_DOTDASH)
        .value("Aspect_TOL_USERDEFINED",Aspect_TypeOfLine::Aspect_TOL_USERDEFINED).export_values();
    py::enum_<Aspect_FillMethod>(m, "Aspect_FillMethod",R"#(Defines the fill methods to write bitmaps in a window.)#")
        .value("Aspect_FM_NONE",Aspect_FillMethod::Aspect_FM_NONE)
        .value("Aspect_FM_CENTERED",Aspect_FillMethod::Aspect_FM_CENTERED)
        .value("Aspect_FM_TILED",Aspect_FillMethod::Aspect_FM_TILED)
        .value("Aspect_FM_STRETCH",Aspect_FillMethod::Aspect_FM_STRETCH).export_values();
    py::enum_<Aspect_VKeyBasic>(m, "Aspect_VKeyBasic",R"#(Enumeration defining virtual keys irrelevant to current keyboard layout for simplified hot-keys management logic.)#")
        .value("Aspect_VKey_UNKNOWN",Aspect_VKeyBasic::Aspect_VKey_UNKNOWN)
        .value("Aspect_VKey_A",Aspect_VKeyBasic::Aspect_VKey_A)
        .value("Aspect_VKey_B",Aspect_VKeyBasic::Aspect_VKey_B)
        .value("Aspect_VKey_C",Aspect_VKeyBasic::Aspect_VKey_C)
        .value("Aspect_VKey_D",Aspect_VKeyBasic::Aspect_VKey_D)
        .value("Aspect_VKey_E",Aspect_VKeyBasic::Aspect_VKey_E)
        .value("Aspect_VKey_F",Aspect_VKeyBasic::Aspect_VKey_F)
        .value("Aspect_VKey_G",Aspect_VKeyBasic::Aspect_VKey_G)
        .value("Aspect_VKey_H",Aspect_VKeyBasic::Aspect_VKey_H)
        .value("Aspect_VKey_I",Aspect_VKeyBasic::Aspect_VKey_I)
        .value("Aspect_VKey_J",Aspect_VKeyBasic::Aspect_VKey_J)
        .value("Aspect_VKey_K",Aspect_VKeyBasic::Aspect_VKey_K)
        .value("Aspect_VKey_L",Aspect_VKeyBasic::Aspect_VKey_L)
        .value("Aspect_VKey_M",Aspect_VKeyBasic::Aspect_VKey_M)
        .value("Aspect_VKey_N",Aspect_VKeyBasic::Aspect_VKey_N)
        .value("Aspect_VKey_O",Aspect_VKeyBasic::Aspect_VKey_O)
        .value("Aspect_VKey_P",Aspect_VKeyBasic::Aspect_VKey_P)
        .value("Aspect_VKey_Q",Aspect_VKeyBasic::Aspect_VKey_Q)
        .value("Aspect_VKey_R",Aspect_VKeyBasic::Aspect_VKey_R)
        .value("Aspect_VKey_S",Aspect_VKeyBasic::Aspect_VKey_S)
        .value("Aspect_VKey_T",Aspect_VKeyBasic::Aspect_VKey_T)
        .value("Aspect_VKey_U",Aspect_VKeyBasic::Aspect_VKey_U)
        .value("Aspect_VKey_V",Aspect_VKeyBasic::Aspect_VKey_V)
        .value("Aspect_VKey_W",Aspect_VKeyBasic::Aspect_VKey_W)
        .value("Aspect_VKey_X",Aspect_VKeyBasic::Aspect_VKey_X)
        .value("Aspect_VKey_Y",Aspect_VKeyBasic::Aspect_VKey_Y)
        .value("Aspect_VKey_Z",Aspect_VKeyBasic::Aspect_VKey_Z)
        .value("Aspect_VKey_0",Aspect_VKeyBasic::Aspect_VKey_0)
        .value("Aspect_VKey_1",Aspect_VKeyBasic::Aspect_VKey_1)
        .value("Aspect_VKey_2",Aspect_VKeyBasic::Aspect_VKey_2)
        .value("Aspect_VKey_3",Aspect_VKeyBasic::Aspect_VKey_3)
        .value("Aspect_VKey_4",Aspect_VKeyBasic::Aspect_VKey_4)
        .value("Aspect_VKey_5",Aspect_VKeyBasic::Aspect_VKey_5)
        .value("Aspect_VKey_6",Aspect_VKeyBasic::Aspect_VKey_6)
        .value("Aspect_VKey_7",Aspect_VKeyBasic::Aspect_VKey_7)
        .value("Aspect_VKey_8",Aspect_VKeyBasic::Aspect_VKey_8)
        .value("Aspect_VKey_9",Aspect_VKeyBasic::Aspect_VKey_9)
        .value("Aspect_VKey_F1",Aspect_VKeyBasic::Aspect_VKey_F1)
        .value("Aspect_VKey_F2",Aspect_VKeyBasic::Aspect_VKey_F2)
        .value("Aspect_VKey_F3",Aspect_VKeyBasic::Aspect_VKey_F3)
        .value("Aspect_VKey_F4",Aspect_VKeyBasic::Aspect_VKey_F4)
        .value("Aspect_VKey_F5",Aspect_VKeyBasic::Aspect_VKey_F5)
        .value("Aspect_VKey_F6",Aspect_VKeyBasic::Aspect_VKey_F6)
        .value("Aspect_VKey_F7",Aspect_VKeyBasic::Aspect_VKey_F7)
        .value("Aspect_VKey_F8",Aspect_VKeyBasic::Aspect_VKey_F8)
        .value("Aspect_VKey_F9",Aspect_VKeyBasic::Aspect_VKey_F9)
        .value("Aspect_VKey_F10",Aspect_VKeyBasic::Aspect_VKey_F10)
        .value("Aspect_VKey_F11",Aspect_VKeyBasic::Aspect_VKey_F11)
        .value("Aspect_VKey_F12",Aspect_VKeyBasic::Aspect_VKey_F12)
        .value("Aspect_VKey_Up",Aspect_VKeyBasic::Aspect_VKey_Up)
        .value("Aspect_VKey_Down",Aspect_VKeyBasic::Aspect_VKey_Down)
        .value("Aspect_VKey_Left",Aspect_VKeyBasic::Aspect_VKey_Left)
        .value("Aspect_VKey_Right",Aspect_VKeyBasic::Aspect_VKey_Right)
        .value("Aspect_VKey_Plus",Aspect_VKeyBasic::Aspect_VKey_Plus)
        .value("Aspect_VKey_Minus",Aspect_VKeyBasic::Aspect_VKey_Minus)
        .value("Aspect_VKey_Equal",Aspect_VKeyBasic::Aspect_VKey_Equal)
        .value("Aspect_VKey_PageUp",Aspect_VKeyBasic::Aspect_VKey_PageUp)
        .value("Aspect_VKey_PageDown",Aspect_VKeyBasic::Aspect_VKey_PageDown)
        .value("Aspect_VKey_Home",Aspect_VKeyBasic::Aspect_VKey_Home)
        .value("Aspect_VKey_End",Aspect_VKeyBasic::Aspect_VKey_End)
        .value("Aspect_VKey_Escape",Aspect_VKeyBasic::Aspect_VKey_Escape)
        .value("Aspect_VKey_Back",Aspect_VKeyBasic::Aspect_VKey_Back)
        .value("Aspect_VKey_Enter",Aspect_VKeyBasic::Aspect_VKey_Enter)
        .value("Aspect_VKey_Backspace",Aspect_VKeyBasic::Aspect_VKey_Backspace)
        .value("Aspect_VKey_Space",Aspect_VKeyBasic::Aspect_VKey_Space)
        .value("Aspect_VKey_Delete",Aspect_VKeyBasic::Aspect_VKey_Delete)
        .value("Aspect_VKey_Tilde",Aspect_VKeyBasic::Aspect_VKey_Tilde)
        .value("Aspect_VKey_Tab",Aspect_VKeyBasic::Aspect_VKey_Tab)
        .value("Aspect_VKey_Comma",Aspect_VKeyBasic::Aspect_VKey_Comma)
        .value("Aspect_VKey_Period",Aspect_VKeyBasic::Aspect_VKey_Period)
        .value("Aspect_VKey_Semicolon",Aspect_VKeyBasic::Aspect_VKey_Semicolon)
        .value("Aspect_VKey_Slash",Aspect_VKeyBasic::Aspect_VKey_Slash)
        .value("Aspect_VKey_BracketLeft",Aspect_VKeyBasic::Aspect_VKey_BracketLeft)
        .value("Aspect_VKey_Backslash",Aspect_VKeyBasic::Aspect_VKey_Backslash)
        .value("Aspect_VKey_BracketRight",Aspect_VKeyBasic::Aspect_VKey_BracketRight)
        .value("Aspect_VKey_Apostrophe",Aspect_VKeyBasic::Aspect_VKey_Apostrophe)
        .value("Aspect_VKey_Numlock",Aspect_VKeyBasic::Aspect_VKey_Numlock)
        .value("Aspect_VKey_Scroll",Aspect_VKeyBasic::Aspect_VKey_Scroll)
        .value("Aspect_VKey_Numpad0",Aspect_VKeyBasic::Aspect_VKey_Numpad0)
        .value("Aspect_VKey_Numpad1",Aspect_VKeyBasic::Aspect_VKey_Numpad1)
        .value("Aspect_VKey_Numpad2",Aspect_VKeyBasic::Aspect_VKey_Numpad2)
        .value("Aspect_VKey_Numpad3",Aspect_VKeyBasic::Aspect_VKey_Numpad3)
        .value("Aspect_VKey_Numpad4",Aspect_VKeyBasic::Aspect_VKey_Numpad4)
        .value("Aspect_VKey_Numpad5",Aspect_VKeyBasic::Aspect_VKey_Numpad5)
        .value("Aspect_VKey_Numpad6",Aspect_VKeyBasic::Aspect_VKey_Numpad6)
        .value("Aspect_VKey_Numpad7",Aspect_VKeyBasic::Aspect_VKey_Numpad7)
        .value("Aspect_VKey_Numpad8",Aspect_VKeyBasic::Aspect_VKey_Numpad8)
        .value("Aspect_VKey_Numpad9",Aspect_VKeyBasic::Aspect_VKey_Numpad9)
        .value("Aspect_VKey_NumpadMultiply",Aspect_VKeyBasic::Aspect_VKey_NumpadMultiply)
        .value("Aspect_VKey_NumpadAdd",Aspect_VKeyBasic::Aspect_VKey_NumpadAdd)
        .value("Aspect_VKey_NumpadSubtract",Aspect_VKeyBasic::Aspect_VKey_NumpadSubtract)
        .value("Aspect_VKey_NumpadDivide",Aspect_VKeyBasic::Aspect_VKey_NumpadDivide)
        .value("Aspect_VKey_MediaNextTrack",Aspect_VKeyBasic::Aspect_VKey_MediaNextTrack)
        .value("Aspect_VKey_MediaPreviousTrack",Aspect_VKeyBasic::Aspect_VKey_MediaPreviousTrack)
        .value("Aspect_VKey_MediaStop",Aspect_VKeyBasic::Aspect_VKey_MediaStop)
        .value("Aspect_VKey_MediaPlayPause",Aspect_VKeyBasic::Aspect_VKey_MediaPlayPause)
        .value("Aspect_VKey_VolumeMute",Aspect_VKeyBasic::Aspect_VKey_VolumeMute)
        .value("Aspect_VKey_VolumeDown",Aspect_VKeyBasic::Aspect_VKey_VolumeDown)
        .value("Aspect_VKey_VolumeUp",Aspect_VKeyBasic::Aspect_VKey_VolumeUp)
        .value("Aspect_VKey_BrowserBack",Aspect_VKeyBasic::Aspect_VKey_BrowserBack)
        .value("Aspect_VKey_BrowserForward",Aspect_VKeyBasic::Aspect_VKey_BrowserForward)
        .value("Aspect_VKey_BrowserRefresh",Aspect_VKeyBasic::Aspect_VKey_BrowserRefresh)
        .value("Aspect_VKey_BrowserStop",Aspect_VKeyBasic::Aspect_VKey_BrowserStop)
        .value("Aspect_VKey_BrowserSearch",Aspect_VKeyBasic::Aspect_VKey_BrowserSearch)
        .value("Aspect_VKey_BrowserFavorites",Aspect_VKeyBasic::Aspect_VKey_BrowserFavorites)
        .value("Aspect_VKey_BrowserHome",Aspect_VKeyBasic::Aspect_VKey_BrowserHome)
        .value("Aspect_VKey_Shift",Aspect_VKeyBasic::Aspect_VKey_Shift)
        .value("Aspect_VKey_Control",Aspect_VKeyBasic::Aspect_VKey_Control)
        .value("Aspect_VKey_Alt",Aspect_VKeyBasic::Aspect_VKey_Alt)
        .value("Aspect_VKey_Menu",Aspect_VKeyBasic::Aspect_VKey_Menu)
        .value("Aspect_VKey_Meta",Aspect_VKeyBasic::Aspect_VKey_Meta)
        .value("Aspect_VKey_NavInteract",Aspect_VKeyBasic::Aspect_VKey_NavInteract)
        .value("Aspect_VKey_NavForward",Aspect_VKeyBasic::Aspect_VKey_NavForward)
        .value("Aspect_VKey_NavBackward",Aspect_VKeyBasic::Aspect_VKey_NavBackward)
        .value("Aspect_VKey_NavSlideLeft",Aspect_VKeyBasic::Aspect_VKey_NavSlideLeft)
        .value("Aspect_VKey_NavSlideRight",Aspect_VKeyBasic::Aspect_VKey_NavSlideRight)
        .value("Aspect_VKey_NavSlideUp",Aspect_VKeyBasic::Aspect_VKey_NavSlideUp)
        .value("Aspect_VKey_NavSlideDown",Aspect_VKeyBasic::Aspect_VKey_NavSlideDown)
        .value("Aspect_VKey_NavRollCCW",Aspect_VKeyBasic::Aspect_VKey_NavRollCCW)
        .value("Aspect_VKey_NavRollCW",Aspect_VKeyBasic::Aspect_VKey_NavRollCW)
        .value("Aspect_VKey_NavLookLeft",Aspect_VKeyBasic::Aspect_VKey_NavLookLeft)
        .value("Aspect_VKey_NavLookRight",Aspect_VKeyBasic::Aspect_VKey_NavLookRight)
        .value("Aspect_VKey_NavLookUp",Aspect_VKeyBasic::Aspect_VKey_NavLookUp)
        .value("Aspect_VKey_NavLookDown",Aspect_VKeyBasic::Aspect_VKey_NavLookDown)
        .value("Aspect_VKey_NavCrouch",Aspect_VKeyBasic::Aspect_VKey_NavCrouch)
        .value("Aspect_VKey_NavJump",Aspect_VKeyBasic::Aspect_VKey_NavJump)
        .value("Aspect_VKey_NavThrustForward",Aspect_VKeyBasic::Aspect_VKey_NavThrustForward)
        .value("Aspect_VKey_NavThrustBackward",Aspect_VKeyBasic::Aspect_VKey_NavThrustBackward)
        .value("Aspect_VKey_NavThrustStop",Aspect_VKeyBasic::Aspect_VKey_NavThrustStop)
        .value("Aspect_VKey_NavSpeedIncrease",Aspect_VKeyBasic::Aspect_VKey_NavSpeedIncrease)
        .value("Aspect_VKey_NavSpeedDecrease",Aspect_VKeyBasic::Aspect_VKey_NavSpeedDecrease).export_values();
    m.attr("Aspect_VKey_Lower") = py::cast(int(Aspect_VKey_Lower));
    m.attr("Aspect_VKey_ModifiersLower") = py::cast(int(Aspect_VKey_ModifiersLower));
    m.attr("Aspect_VKey_ModifiersUpper") = py::cast(int(Aspect_VKey_ModifiersUpper));
    m.attr("Aspect_VKey_NavigationKeysLower") = py::cast(int(Aspect_VKey_NavigationKeysLower));
    m.attr("Aspect_VKey_NavigationKeysUpper") = py::cast(int(Aspect_VKey_NavigationKeysUpper));
    m.attr("Aspect_VKey_Upper") = py::cast(int(Aspect_VKey_Upper));
    m.attr("Aspect_VKey_NB") = py::cast(int(Aspect_VKey_NB));
    m.attr("Aspect_VKey_MAX") = py::cast(int(Aspect_VKey_MAX));
    py::enum_<Aspect_WidthOfLine>(m, "Aspect_WidthOfLine",R"#(Definition of line types)#")
        .value("Aspect_WOL_THIN",Aspect_WidthOfLine::Aspect_WOL_THIN)
        .value("Aspect_WOL_MEDIUM",Aspect_WidthOfLine::Aspect_WOL_MEDIUM)
        .value("Aspect_WOL_THICK",Aspect_WidthOfLine::Aspect_WOL_THICK)
        .value("Aspect_WOL_VERYTHICK",Aspect_WidthOfLine::Aspect_WOL_VERYTHICK)
        .value("Aspect_WOL_USERDEFINED",Aspect_WidthOfLine::Aspect_WOL_USERDEFINED).export_values();
    py::enum_<Aspect_GradientFillMethod>(m, "Aspect_GradientFillMethod",R"#(Defines the fill methods to write gradient background in a window.)#")
        .value("Aspect_GFM_NONE",Aspect_GradientFillMethod::Aspect_GFM_NONE)
        .value("Aspect_GFM_HOR",Aspect_GradientFillMethod::Aspect_GFM_HOR)
        .value("Aspect_GFM_VER",Aspect_GradientFillMethod::Aspect_GFM_VER)
        .value("Aspect_GFM_DIAG1",Aspect_GradientFillMethod::Aspect_GFM_DIAG1)
        .value("Aspect_GFM_DIAG2",Aspect_GradientFillMethod::Aspect_GFM_DIAG2)
        .value("Aspect_GFM_CORNER1",Aspect_GradientFillMethod::Aspect_GFM_CORNER1)
        .value("Aspect_GFM_CORNER2",Aspect_GradientFillMethod::Aspect_GFM_CORNER2)
        .value("Aspect_GFM_CORNER3",Aspect_GradientFillMethod::Aspect_GFM_CORNER3)
        .value("Aspect_GFM_CORNER4",Aspect_GradientFillMethod::Aspect_GFM_CORNER4).export_values();
    py::enum_<Aspect_TypeOfDisplayText>(m, "Aspect_TypeOfDisplayText",R"#(Define the display type of the text.)#")
        .value("Aspect_TODT_NORMAL",Aspect_TypeOfDisplayText::Aspect_TODT_NORMAL)
        .value("Aspect_TODT_SUBTITLE",Aspect_TypeOfDisplayText::Aspect_TODT_SUBTITLE)
        .value("Aspect_TODT_DEKALE",Aspect_TypeOfDisplayText::Aspect_TODT_DEKALE)
        .value("Aspect_TODT_BLEND",Aspect_TypeOfDisplayText::Aspect_TODT_BLEND)
        .value("Aspect_TODT_DIMENSION",Aspect_TypeOfDisplayText::Aspect_TODT_DIMENSION)
        .value("Aspect_TODT_SHADOW",Aspect_TypeOfDisplayText::Aspect_TODT_SHADOW).export_values();
    py::enum_<Aspect_TypeOfMarker>(m, "Aspect_TypeOfMarker",R"#(Definition of types of markers)#")
        .value("Aspect_TOM_EMPTY",Aspect_TypeOfMarker::Aspect_TOM_EMPTY)
        .value("Aspect_TOM_POINT",Aspect_TypeOfMarker::Aspect_TOM_POINT)
        .value("Aspect_TOM_PLUS",Aspect_TypeOfMarker::Aspect_TOM_PLUS)
        .value("Aspect_TOM_STAR",Aspect_TypeOfMarker::Aspect_TOM_STAR)
        .value("Aspect_TOM_X",Aspect_TypeOfMarker::Aspect_TOM_X)
        .value("Aspect_TOM_O",Aspect_TypeOfMarker::Aspect_TOM_O)
        .value("Aspect_TOM_O_POINT",Aspect_TypeOfMarker::Aspect_TOM_O_POINT)
        .value("Aspect_TOM_O_PLUS",Aspect_TypeOfMarker::Aspect_TOM_O_PLUS)
        .value("Aspect_TOM_O_STAR",Aspect_TypeOfMarker::Aspect_TOM_O_STAR)
        .value("Aspect_TOM_O_X",Aspect_TypeOfMarker::Aspect_TOM_O_X)
        .value("Aspect_TOM_RING1",Aspect_TypeOfMarker::Aspect_TOM_RING1)
        .value("Aspect_TOM_RING2",Aspect_TypeOfMarker::Aspect_TOM_RING2)
        .value("Aspect_TOM_RING3",Aspect_TypeOfMarker::Aspect_TOM_RING3)
        .value("Aspect_TOM_BALL",Aspect_TypeOfMarker::Aspect_TOM_BALL)
        .value("Aspect_TOM_USERDEFINED",Aspect_TypeOfMarker::Aspect_TOM_USERDEFINED).export_values();
    m.attr("Aspect_VKeyFlags_NONE") = py::cast(int(Aspect_VKeyFlags_NONE));
    m.attr("Aspect_VKeyFlags_SHIFT") = py::cast(int(Aspect_VKeyFlags_SHIFT));
    m.attr("Aspect_VKeyFlags_CTRL") = py::cast(int(Aspect_VKeyFlags_CTRL));
    m.attr("Aspect_VKeyFlags_ALT") = py::cast(int(Aspect_VKeyFlags_ALT));
    m.attr("Aspect_VKeyFlags_MENU") = py::cast(int(Aspect_VKeyFlags_MENU));
    m.attr("Aspect_VKeyFlags_META") = py::cast(int(Aspect_VKeyFlags_META));
    m.attr("Aspect_VKeyFlags_ALL") = py::cast(int(Aspect_VKeyFlags_ALL));
    m.attr("Aspect_VKeyMouse_NONE") = py::cast(int(Aspect_VKeyMouse_NONE));
    m.attr("Aspect_VKeyMouse_LeftButton") = py::cast(int(Aspect_VKeyMouse_LeftButton));
    m.attr("Aspect_VKeyMouse_MiddleButton") = py::cast(int(Aspect_VKeyMouse_MiddleButton));
    m.attr("Aspect_VKeyMouse_RightButton") = py::cast(int(Aspect_VKeyMouse_RightButton));
    m.attr("Aspect_VKeyMouse_MainButtons") = py::cast(int(Aspect_VKeyMouse_MainButtons));
    py::enum_<Aspect_TypeOfColorScalePosition>(m, "Aspect_TypeOfColorScalePosition",R"#(Defines the type of position for color scale labels)#")
        .value("Aspect_TOCSP_NONE",Aspect_TypeOfColorScalePosition::Aspect_TOCSP_NONE)
        .value("Aspect_TOCSP_LEFT",Aspect_TypeOfColorScalePosition::Aspect_TOCSP_LEFT)
        .value("Aspect_TOCSP_RIGHT",Aspect_TypeOfColorScalePosition::Aspect_TOCSP_RIGHT)
        .value("Aspect_TOCSP_CENTER",Aspect_TypeOfColorScalePosition::Aspect_TOCSP_CENTER).export_values();
    py::enum_<Aspect_TypeOfStyleText>(m, "Aspect_TypeOfStyleText",R"#(Define the style of the text.)#")
        .value("Aspect_TOST_NORMAL",Aspect_TypeOfStyleText::Aspect_TOST_NORMAL)
        .value("Aspect_TOST_ANNOTATION",Aspect_TypeOfStyleText::Aspect_TOST_ANNOTATION).export_values();
    py::enum_<Aspect_XAtom>(m, "Aspect_XAtom",R"#(Defines custom identifiers(atoms) for X window custom named properties)#")
        .value("Aspect_XA_DELETE_WINDOW",Aspect_XAtom::Aspect_XA_DELETE_WINDOW).export_values();
    py::enum_<Aspect_TypeOfColorScaleOrientation>(m, "Aspect_TypeOfColorScaleOrientation",R"#(Defines the type of color scale orientation)#")
        .value("Aspect_TOCSO_NONE",Aspect_TypeOfColorScaleOrientation::Aspect_TOCSO_NONE)
        .value("Aspect_TOCSO_LEFT",Aspect_TypeOfColorScaleOrientation::Aspect_TOCSO_LEFT)
        .value("Aspect_TOCSO_RIGHT",Aspect_TypeOfColorScaleOrientation::Aspect_TOCSO_RIGHT)
        .value("Aspect_TOCSO_CENTER",Aspect_TypeOfColorScaleOrientation::Aspect_TOCSO_CENTER).export_values();
    py::enum_<Aspect_PolygonOffsetMode>(m, "Aspect_PolygonOffsetMode",R"#(None)#")
        .value("Aspect_POM_Off",Aspect_PolygonOffsetMode::Aspect_POM_Off)
        .value("Aspect_POM_Fill",Aspect_PolygonOffsetMode::Aspect_POM_Fill)
        .value("Aspect_POM_Line",Aspect_PolygonOffsetMode::Aspect_POM_Line)
        .value("Aspect_POM_Point",Aspect_PolygonOffsetMode::Aspect_POM_Point)
        .value("Aspect_POM_All",Aspect_PolygonOffsetMode::Aspect_POM_All)
        .value("Aspect_POM_None",Aspect_PolygonOffsetMode::Aspect_POM_None)
        .value("Aspect_POM_Mask",Aspect_PolygonOffsetMode::Aspect_POM_Mask).export_values();
    py::enum_<Aspect_TypeOfHighlightMethod>(m, "Aspect_TypeOfHighlightMethod",R"#(Definition of a highlight method)#")
        .value("Aspect_TOHM_COLOR",Aspect_TypeOfHighlightMethod::Aspect_TOHM_COLOR)
        .value("Aspect_TOHM_BOUNDBOX",Aspect_TypeOfHighlightMethod::Aspect_TOHM_BOUNDBOX).export_values();
    py::enum_<Aspect_TypeOfResize>(m, "Aspect_TypeOfResize",R"#(Defines the type of Resize Window method applied by the user.)#")
        .value("Aspect_TOR_UNKNOWN",Aspect_TypeOfResize::Aspect_TOR_UNKNOWN)
        .value("Aspect_TOR_NO_BORDER",Aspect_TypeOfResize::Aspect_TOR_NO_BORDER)
        .value("Aspect_TOR_TOP_BORDER",Aspect_TypeOfResize::Aspect_TOR_TOP_BORDER)
        .value("Aspect_TOR_RIGHT_BORDER",Aspect_TypeOfResize::Aspect_TOR_RIGHT_BORDER)
        .value("Aspect_TOR_BOTTOM_BORDER",Aspect_TypeOfResize::Aspect_TOR_BOTTOM_BORDER)
        .value("Aspect_TOR_LEFT_BORDER",Aspect_TypeOfResize::Aspect_TOR_LEFT_BORDER)
        .value("Aspect_TOR_TOP_AND_RIGHT_BORDER",Aspect_TypeOfResize::Aspect_TOR_TOP_AND_RIGHT_BORDER)
        .value("Aspect_TOR_RIGHT_AND_BOTTOM_BORDER",Aspect_TypeOfResize::Aspect_TOR_RIGHT_AND_BOTTOM_BORDER)
        .value("Aspect_TOR_BOTTOM_AND_LEFT_BORDER",Aspect_TypeOfResize::Aspect_TOR_BOTTOM_AND_LEFT_BORDER)
        .value("Aspect_TOR_LEFT_AND_TOP_BORDER",Aspect_TypeOfResize::Aspect_TOR_LEFT_AND_TOP_BORDER).export_values();
    py::enum_<Aspect_TypeOfColorScaleData>(m, "Aspect_TypeOfColorScaleData",R"#(Defines the using type of colors and labels)#")
        .value("Aspect_TOCSD_AUTO",Aspect_TypeOfColorScaleData::Aspect_TOCSD_AUTO)
        .value("Aspect_TOCSD_USER",Aspect_TypeOfColorScaleData::Aspect_TOCSD_USER).export_values();
    py::enum_<Aspect_TypeOfTriedronPosition>(m, "Aspect_TypeOfTriedronPosition",R"#(Definition of the Trihedron position in the views. It is defined as a bitmask to simplify handling vertical and horizontal alignment independently.)#")
        .value("Aspect_TOTP_CENTER",Aspect_TypeOfTriedronPosition::Aspect_TOTP_CENTER)
        .value("Aspect_TOTP_TOP",Aspect_TypeOfTriedronPosition::Aspect_TOTP_TOP)
        .value("Aspect_TOTP_BOTTOM",Aspect_TypeOfTriedronPosition::Aspect_TOTP_BOTTOM)
        .value("Aspect_TOTP_LEFT",Aspect_TypeOfTriedronPosition::Aspect_TOTP_LEFT)
        .value("Aspect_TOTP_RIGHT",Aspect_TypeOfTriedronPosition::Aspect_TOTP_RIGHT)
        .value("Aspect_TOTP_LEFT_LOWER",Aspect_TypeOfTriedronPosition::Aspect_TOTP_LEFT_LOWER)
        .value("Aspect_TOTP_LEFT_UPPER",Aspect_TypeOfTriedronPosition::Aspect_TOTP_LEFT_UPPER)
        .value("Aspect_TOTP_RIGHT_LOWER",Aspect_TypeOfTriedronPosition::Aspect_TOTP_RIGHT_LOWER)
        .value("Aspect_TOTP_RIGHT_UPPER",Aspect_TypeOfTriedronPosition::Aspect_TOTP_RIGHT_UPPER).export_values();
    py::enum_<Aspect_HatchStyle>(m, "Aspect_HatchStyle",R"#(Definition of all available hatch styles.)#")
        .value("Aspect_HS_SOLID",Aspect_HatchStyle::Aspect_HS_SOLID)
        .value("Aspect_HS_HORIZONTAL",Aspect_HatchStyle::Aspect_HS_HORIZONTAL)
        .value("Aspect_HS_HORIZONTAL_WIDE",Aspect_HatchStyle::Aspect_HS_HORIZONTAL_WIDE)
        .value("Aspect_HS_VERTICAL",Aspect_HatchStyle::Aspect_HS_VERTICAL)
        .value("Aspect_HS_VERTICAL_WIDE",Aspect_HatchStyle::Aspect_HS_VERTICAL_WIDE)
        .value("Aspect_HS_DIAGONAL_45",Aspect_HatchStyle::Aspect_HS_DIAGONAL_45)
        .value("Aspect_HS_DIAGONAL_45_WIDE",Aspect_HatchStyle::Aspect_HS_DIAGONAL_45_WIDE)
        .value("Aspect_HS_DIAGONAL_135",Aspect_HatchStyle::Aspect_HS_DIAGONAL_135)
        .value("Aspect_HS_DIAGONAL_135_WIDE",Aspect_HatchStyle::Aspect_HS_DIAGONAL_135_WIDE)
        .value("Aspect_HS_GRID",Aspect_HatchStyle::Aspect_HS_GRID)
        .value("Aspect_HS_GRID_WIDE",Aspect_HatchStyle::Aspect_HS_GRID_WIDE)
        .value("Aspect_HS_GRID_DIAGONAL",Aspect_HatchStyle::Aspect_HS_GRID_DIAGONAL)
        .value("Aspect_HS_GRID_DIAGONAL_WIDE",Aspect_HatchStyle::Aspect_HS_GRID_DIAGONAL_WIDE)
        .value("Aspect_HS_NB",Aspect_HatchStyle::Aspect_HS_NB).export_values();
    py::enum_<Aspect_InteriorStyle>(m, "Aspect_InteriorStyle",R"#(Interior types for primitive faces.)#")
        .value("Aspect_IS_EMPTY",Aspect_InteriorStyle::Aspect_IS_EMPTY)
        .value("Aspect_IS_SOLID",Aspect_InteriorStyle::Aspect_IS_SOLID)
        .value("Aspect_IS_HATCH",Aspect_InteriorStyle::Aspect_IS_HATCH)
        .value("Aspect_IS_HIDDENLINE",Aspect_InteriorStyle::Aspect_IS_HIDDENLINE)
        .value("Aspect_IS_POINT",Aspect_InteriorStyle::Aspect_IS_POINT)
        .value("Aspect_IS_HOLLOW",Aspect_InteriorStyle::Aspect_IS_HOLLOW).export_values();
    py::enum_<Aspect_GridType>(m, "Aspect_GridType",R"#(Defines the grid type : Rectangular or Circular.)#")
        .value("Aspect_GT_Rectangular",Aspect_GridType::Aspect_GT_Rectangular)
        .value("Aspect_GT_Circular",Aspect_GridType::Aspect_GT_Circular).export_values();
    py::enum_<Aspect_GridDrawMode>(m, "Aspect_GridDrawMode",R"#(Defines the grid draw mode. The grid may be drawn by using lines or points.)#")
        .value("Aspect_GDM_Lines",Aspect_GridDrawMode::Aspect_GDM_Lines)
        .value("Aspect_GDM_Points",Aspect_GridDrawMode::Aspect_GDM_Points)
        .value("Aspect_GDM_None",Aspect_GridDrawMode::Aspect_GDM_None).export_values();

//Python trampoline classes
    class Py_Aspect_Grid : public Aspect_Grid{
    public:
        using Aspect_Grid::Aspect_Grid;


        // public pure virtual
        void Display() override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Display,) };
        void Erase() const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Erase,) };
        Standard_Boolean IsDisplayed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Aspect_Grid,IsDisplayed,) };
        void Init() override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Init,) };
        void Compute(const Standard_Real X,const Standard_Real Y,Standard_Real & gridX,Standard_Real & gridY) const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Compute,X,Y,gridX,gridY) };


        // protected pure virtual
        void UpdateDisplay() override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,UpdateDisplay,) };


        // private pure virtual

    };
    class Py_Aspect_Window : public Aspect_Window{
    public:
        using Aspect_Window::Aspect_Window;


        // public pure virtual
        void Map() const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Window,Map,) };
        void Unmap() const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Window,Unmap,) };
        Aspect_TypeOfResize DoResize() const  override { PYBIND11_OVERLOAD_PURE(Aspect_TypeOfResize,Aspect_Window,DoResize,) };
        Standard_Boolean DoMapping() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Aspect_Window,DoMapping,) };
        Standard_Boolean IsMapped() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Aspect_Window,IsMapped,) };
        Standard_Real Ratio() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Aspect_Window,Ratio,) };
        Aspect_Drawable NativeHandle() const  override { PYBIND11_OVERLOAD_PURE(Aspect_Drawable,Aspect_Window,NativeHandle,) };
        Aspect_Drawable NativeParentHandle() const  override { PYBIND11_OVERLOAD_PURE(Aspect_Drawable,Aspect_Window,NativeParentHandle,) };
        void Position(Standard_Integer & X1,Standard_Integer & Y1,Standard_Integer & X2,Standard_Integer & Y2) const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Window,Position,X1,Y1,X2,Y2) };
        void Size(Standard_Integer & Width,Standard_Integer & Height) const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Window,Size,Width,Height) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Aspect_CircularGrid : public Aspect_CircularGrid{
    public:
        using Aspect_CircularGrid::Aspect_CircularGrid;


        // public pure virtual

        void Display() override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Display,) };
        void Erase() const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Erase,) };
        Standard_Boolean IsDisplayed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Aspect_Grid,IsDisplayed,) };

        // protected pure virtual

        void UpdateDisplay() override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,UpdateDisplay,) };

        // private pure virtual

    };
    class Py_Aspect_RectangularGrid : public Aspect_RectangularGrid{
    public:
        using Aspect_RectangularGrid::Aspect_RectangularGrid;


        // public pure virtual

        void Display() override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Display,) };
        void Erase() const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Erase,) };
        Standard_Boolean IsDisplayed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Aspect_Grid,IsDisplayed,) };

        // protected pure virtual

        void UpdateDisplay() override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,UpdateDisplay,) };

        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_Sequence<Quantity_Color>(m,"Aspect_SequenceOfColor");
    preregister_template_NCollection_IndexedDataMap<Standard_Size, Aspect_Touch>(m,"Aspect_TouchMap");

// classes forward declarations only
    py::class_<Aspect_Background , shared_ptr<Aspect_Background> >(m,"Aspect_Background",R"#(This class allows the definition of a window background.)#");
    py::class_<Aspect_DisplayConnection ,opencascade::handle<Aspect_DisplayConnection> , Standard_Transient>(m,"Aspect_DisplayConnection",R"#(This class creates and provides connection with X server. Raises exception if can not connect to X server. On Windows and Mac OS X (in case when Cocoa used) platforms this class do nothing. WARRNING: Do not close display connection manualy!This class creates and provides connection with X server. Raises exception if can not connect to X server. On Windows and Mac OS X (in case when Cocoa used) platforms this class do nothing. WARRNING: Do not close display connection manualy!)#");
    py::class_<Aspect_GenId , shared_ptr<Aspect_GenId> >(m,"Aspect_GenId",R"#(This class permits the creation and control of integer identifiers.)#");
    py::class_<Aspect_Grid ,opencascade::handle<Aspect_Grid>,Py_Aspect_Grid , Standard_Transient>(m,"Aspect_Grid",R"#()#");
    py::class_<Aspect_ScrollDelta , shared_ptr<Aspect_ScrollDelta> >(m,"Aspect_ScrollDelta",R"#(Parameters for mouse scroll action.)#");
    py::class_<Aspect_Touch , shared_ptr<Aspect_Touch> >(m,"Aspect_Touch",R"#(Structure holding touch position - original and current location.)#");
    py::class_<Aspect_Window ,opencascade::handle<Aspect_Window>,Py_Aspect_Window , Standard_Transient>(m,"Aspect_Window",R"#(Defines a window.Defines a window.)#");
    py::class_<_xcolor , shared_ptr<_xcolor> >(m,"_xcolor",R"#(None)#");
    py::class_<_xwd_file_header , shared_ptr<_xwd_file_header> >(m,"_xwd_file_header",R"#(None)#");
    py::class_<Aspect_CircularGrid ,opencascade::handle<Aspect_CircularGrid>,Py_Aspect_CircularGrid , Aspect_Grid>(m,"Aspect_CircularGrid",R"#()#");
    py::class_<Aspect_GradientBackground , shared_ptr<Aspect_GradientBackground> , Aspect_Background>(m,"Aspect_GradientBackground",R"#(This class allows the definition of a window gradient background.)#");
    py::class_<Aspect_NeutralWindow ,opencascade::handle<Aspect_NeutralWindow> , Aspect_Window>(m,"Aspect_NeutralWindow",R"#(Defines a platform-neutral window. This class is intended to be used in context when window management (including OpenGL context creation) is performed on application side (e.g. using external framework).Defines a platform-neutral window. This class is intended to be used in context when window management (including OpenGL context creation) is performed on application side (e.g. using external framework).)#");
    py::class_<Aspect_RectangularGrid ,opencascade::handle<Aspect_RectangularGrid>,Py_Aspect_RectangularGrid , Aspect_Grid>(m,"Aspect_RectangularGrid",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
