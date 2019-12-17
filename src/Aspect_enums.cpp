
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Aspect_WindowDefinitionError.hxx>
#include <Aspect_WindowError.hxx>
#include <Aspect_IdentDefinitionError.hxx>
#include <Standard_NegativeValue.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_NumericError.hxx>

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
#include <Aspect_SequenceOfColor.hxx>
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
#include <Aspect_WidthOfLine.hxx>
#include <Aspect_Window.hxx>
#include <Aspect_WindowDefinitionError.hxx>
#include <Aspect_WindowError.hxx>
#include <Aspect_XAtom.hxx>
#include <Aspect_XWD.hxx>

// template related includes
// ./opencascade/Aspect_SequenceOfColor.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
struct __GLXFBConfigRec {};

// Module definiiton
void register_Aspect_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Aspect", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Aspect_GridDrawMode>(m, "Aspect_GridDrawMode",R"#(Defines the grid draw mode. The grid may be drawn by using lines or points.)#")
        .value("Aspect_GDM_Lines",Aspect_GridDrawMode::Aspect_GDM_Lines)
        .value("Aspect_GDM_Points",Aspect_GridDrawMode::Aspect_GDM_Points)
        .value("Aspect_GDM_None",Aspect_GridDrawMode::Aspect_GDM_None).export_values();
    py::enum_<Aspect_InteriorStyle>(m, "Aspect_InteriorStyle",R"#(Definition of interior types for primitive faces.)#")
        .value("Aspect_IS_EMPTY",Aspect_InteriorStyle::Aspect_IS_EMPTY)
        .value("Aspect_IS_HOLLOW",Aspect_InteriorStyle::Aspect_IS_HOLLOW)
        .value("Aspect_IS_HATCH",Aspect_InteriorStyle::Aspect_IS_HATCH)
        .value("Aspect_IS_SOLID",Aspect_InteriorStyle::Aspect_IS_SOLID)
        .value("Aspect_IS_HIDDENLINE",Aspect_InteriorStyle::Aspect_IS_HIDDENLINE)
        .value("Aspect_IS_POINT",Aspect_InteriorStyle::Aspect_IS_POINT).export_values();
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
    py::enum_<Aspect_TypeOfStyleText>(m, "Aspect_TypeOfStyleText",R"#(Define the style of the text.)#")
        .value("Aspect_TOST_NORMAL",Aspect_TypeOfStyleText::Aspect_TOST_NORMAL)
        .value("Aspect_TOST_ANNOTATION",Aspect_TypeOfStyleText::Aspect_TOST_ANNOTATION).export_values();
    py::enum_<Aspect_TypeOfDeflection>(m, "Aspect_TypeOfDeflection",R"#(Defines if the maximal chordial deflection used when drawing an object is absolute or relative to the size of the object.)#")
        .value("Aspect_TOD_RELATIVE",Aspect_TypeOfDeflection::Aspect_TOD_RELATIVE)
        .value("Aspect_TOD_ABSOLUTE",Aspect_TypeOfDeflection::Aspect_TOD_ABSOLUTE).export_values();
    py::enum_<Aspect_TypeOfDisplayText>(m, "Aspect_TypeOfDisplayText",R"#(Define the display type of the text.)#")
        .value("Aspect_TODT_NORMAL",Aspect_TypeOfDisplayText::Aspect_TODT_NORMAL)
        .value("Aspect_TODT_SUBTITLE",Aspect_TypeOfDisplayText::Aspect_TODT_SUBTITLE)
        .value("Aspect_TODT_DEKALE",Aspect_TypeOfDisplayText::Aspect_TODT_DEKALE)
        .value("Aspect_TODT_BLEND",Aspect_TypeOfDisplayText::Aspect_TODT_BLEND)
        .value("Aspect_TODT_DIMENSION",Aspect_TypeOfDisplayText::Aspect_TODT_DIMENSION)
        .value("Aspect_TODT_SHADOW",Aspect_TypeOfDisplayText::Aspect_TODT_SHADOW).export_values();
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
    py::enum_<Aspect_WidthOfLine>(m, "Aspect_WidthOfLine",R"#(Definition of line types)#")
        .value("Aspect_WOL_THIN",Aspect_WidthOfLine::Aspect_WOL_THIN)
        .value("Aspect_WOL_MEDIUM",Aspect_WidthOfLine::Aspect_WOL_MEDIUM)
        .value("Aspect_WOL_THICK",Aspect_WidthOfLine::Aspect_WOL_THICK)
        .value("Aspect_WOL_VERYTHICK",Aspect_WidthOfLine::Aspect_WOL_VERYTHICK)
        .value("Aspect_WOL_USERDEFINED",Aspect_WidthOfLine::Aspect_WOL_USERDEFINED).export_values();
    py::enum_<Aspect_TypeOfColorScaleData>(m, "Aspect_TypeOfColorScaleData",R"#(Defines the using type of colors and labels)#")
        .value("Aspect_TOCSD_AUTO",Aspect_TypeOfColorScaleData::Aspect_TOCSD_AUTO)
        .value("Aspect_TOCSD_USER",Aspect_TypeOfColorScaleData::Aspect_TOCSD_USER).export_values();
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
    py::enum_<Aspect_FillMethod>(m, "Aspect_FillMethod",R"#(Defines the fill methods to write bitmaps in a window.)#")
        .value("Aspect_FM_NONE",Aspect_FillMethod::Aspect_FM_NONE)
        .value("Aspect_FM_CENTERED",Aspect_FillMethod::Aspect_FM_CENTERED)
        .value("Aspect_FM_TILED",Aspect_FillMethod::Aspect_FM_TILED)
        .value("Aspect_FM_STRETCH",Aspect_FillMethod::Aspect_FM_STRETCH).export_values();
    py::enum_<Aspect_TypeOfLine>(m, "Aspect_TypeOfLine",R"#(Definition of line types)#")
        .value("Aspect_TOL_EMPTY",Aspect_TypeOfLine::Aspect_TOL_EMPTY)
        .value("Aspect_TOL_SOLID",Aspect_TypeOfLine::Aspect_TOL_SOLID)
        .value("Aspect_TOL_DASH",Aspect_TypeOfLine::Aspect_TOL_DASH)
        .value("Aspect_TOL_DOT",Aspect_TypeOfLine::Aspect_TOL_DOT)
        .value("Aspect_TOL_DOTDASH",Aspect_TypeOfLine::Aspect_TOL_DOTDASH)
        .value("Aspect_TOL_USERDEFINED",Aspect_TypeOfLine::Aspect_TOL_USERDEFINED).export_values();
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
    py::enum_<Aspect_XAtom>(m, "Aspect_XAtom",R"#(Defines custom identifiers(atoms) for X window custom named properties)#")
        .value("Aspect_XA_DELETE_WINDOW",Aspect_XAtom::Aspect_XA_DELETE_WINDOW).export_values();
    py::enum_<Aspect_TypeOfFacingModel>(m, "Aspect_TypeOfFacingModel",R"#(None)#")
        .value("Aspect_TOFM_BOTH_SIDE",Aspect_TypeOfFacingModel::Aspect_TOFM_BOTH_SIDE)
        .value("Aspect_TOFM_BACK_SIDE",Aspect_TypeOfFacingModel::Aspect_TOFM_BACK_SIDE)
        .value("Aspect_TOFM_FRONT_SIDE",Aspect_TypeOfFacingModel::Aspect_TOFM_FRONT_SIDE).export_values();
    py::enum_<Aspect_TypeOfColorScaleOrientation>(m, "Aspect_TypeOfColorScaleOrientation",R"#(Defines the type of color scale orientation)#")
        .value("Aspect_TOCSO_NONE",Aspect_TypeOfColorScaleOrientation::Aspect_TOCSO_NONE)
        .value("Aspect_TOCSO_LEFT",Aspect_TypeOfColorScaleOrientation::Aspect_TOCSO_LEFT)
        .value("Aspect_TOCSO_RIGHT",Aspect_TypeOfColorScaleOrientation::Aspect_TOCSO_RIGHT)
        .value("Aspect_TOCSO_CENTER",Aspect_TypeOfColorScaleOrientation::Aspect_TOCSO_CENTER).export_values();
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
    py::enum_<Aspect_TypeOfColorScalePosition>(m, "Aspect_TypeOfColorScalePosition",R"#(Defines the type of position for color scale labels)#")
        .value("Aspect_TOCSP_NONE",Aspect_TypeOfColorScalePosition::Aspect_TOCSP_NONE)
        .value("Aspect_TOCSP_LEFT",Aspect_TypeOfColorScalePosition::Aspect_TOCSP_LEFT)
        .value("Aspect_TOCSP_RIGHT",Aspect_TypeOfColorScalePosition::Aspect_TOCSP_RIGHT)
        .value("Aspect_TOCSP_CENTER",Aspect_TypeOfColorScalePosition::Aspect_TOCSP_CENTER).export_values();
    py::enum_<Aspect_PolygonOffsetMode>(m, "Aspect_PolygonOffsetMode",R"#(None)#")
        .value("Aspect_POM_Off",Aspect_PolygonOffsetMode::Aspect_POM_Off)
        .value("Aspect_POM_Fill",Aspect_PolygonOffsetMode::Aspect_POM_Fill)
        .value("Aspect_POM_Line",Aspect_PolygonOffsetMode::Aspect_POM_Line)
        .value("Aspect_POM_Point",Aspect_PolygonOffsetMode::Aspect_POM_Point)
        .value("Aspect_POM_All",Aspect_PolygonOffsetMode::Aspect_POM_All)
        .value("Aspect_POM_None",Aspect_PolygonOffsetMode::Aspect_POM_None)
        .value("Aspect_POM_Mask",Aspect_PolygonOffsetMode::Aspect_POM_Mask).export_values();
    py::enum_<Aspect_GridType>(m, "Aspect_GridType",R"#(Defines the grid type : Rectangular or Circular.)#")
        .value("Aspect_GT_Rectangular",Aspect_GridType::Aspect_GT_Rectangular)
        .value("Aspect_GT_Circular",Aspect_GridType::Aspect_GT_Circular).export_values();
    py::enum_<Aspect_TypeOfHighlightMethod>(m, "Aspect_TypeOfHighlightMethod",R"#(Definition of a highlight method)#")
        .value("Aspect_TOHM_COLOR",Aspect_TypeOfHighlightMethod::Aspect_TOHM_COLOR)
        .value("Aspect_TOHM_BOUNDBOX",Aspect_TypeOfHighlightMethod::Aspect_TOHM_BOUNDBOX).export_values();

//Python trampoline classes
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
        void Position(Standard_Integer & X1,Standard_Integer & Y1,Standard_Integer & X2,Standard_Integer & Y2) const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Window,Position,X1,Y1,X2,Y2) };
        void Size(Standard_Integer & Width,Standard_Integer & Height) const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Window,Size,Width,Height) };
        Aspect_Drawable NativeHandle() const  override { PYBIND11_OVERLOAD_PURE(Aspect_Drawable,Aspect_Window,NativeHandle,) };
        Aspect_Drawable NativeParentHandle() const  override { PYBIND11_OVERLOAD_PURE(Aspect_Drawable,Aspect_Window,NativeParentHandle,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Aspect_Grid : public Aspect_Grid{
    public:
        using Aspect_Grid::Aspect_Grid;
        
        // public pure virtual
        void Compute(const Standard_Real X,const Standard_Real Y,Standard_Real & gridX,Standard_Real & gridY) const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Compute,X,Y,gridX,gridY) };
        void Display() override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Display,) };
        void Erase() const  override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Erase,) };
        Standard_Boolean IsDisplayed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Aspect_Grid,IsDisplayed,) };
        void Init() override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,Init,) };
        
        
        // protected pure virtual
        void UpdateDisplay() override { PYBIND11_OVERLOAD_PURE(void,Aspect_Grid,UpdateDisplay,) };
        
        
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

// classes forward declarations only
    py::class_<Aspect_Background ,std::unique_ptr<Aspect_Background>  >(m,"Aspect_Background",R"#(This class allows the definition of a window background.)#");
    py::class_<Aspect_GenId ,std::unique_ptr<Aspect_GenId>  >(m,"Aspect_GenId",R"#(This class permits the creation and control of integer identifiers.)#");
    py::class_<Aspect_GradientBackground ,std::unique_ptr<Aspect_GradientBackground>  , Aspect_Background >(m,"Aspect_GradientBackground",R"#(This class allows the definition of a window gradient background.)#");
    py::class_<Aspect_Window ,opencascade::handle<Aspect_Window> ,Py_Aspect_Window , Standard_Transient >(m,"Aspect_Window",R"#(Defines a window.Defines a window.Defines a window.)#");
    py::class_<Aspect_Grid ,opencascade::handle<Aspect_Grid> ,Py_Aspect_Grid , Standard_Transient >(m,"Aspect_Grid",R"#()#");
    py::class_<Aspect_NeutralWindow ,opencascade::handle<Aspect_NeutralWindow>  , Aspect_Window >(m,"Aspect_NeutralWindow",R"#(Defines a platform-neutral window. This class is intended to be used in context when window management (including OpenGL context creation) is performed on application side (e.g. using external framework).Defines a platform-neutral window. This class is intended to be used in context when window management (including OpenGL context creation) is performed on application side (e.g. using external framework).)#");
    py::class_<Aspect_DisplayConnection ,opencascade::handle<Aspect_DisplayConnection>  , Standard_Transient >(m,"Aspect_DisplayConnection",R"#(This class creates and provides connection with X server. Raises exception if can not connect to X server. On Windows and Mac OS X (in case when Cocoa used) platforms this class do nothing. WARRNING: Do not close display connection manualy!This class creates and provides connection with X server. Raises exception if can not connect to X server. On Windows and Mac OS X (in case when Cocoa used) platforms this class do nothing. WARRNING: Do not close display connection manualy!)#");
    py::class_<Aspect_CircularGrid ,opencascade::handle<Aspect_CircularGrid> ,Py_Aspect_CircularGrid , Aspect_Grid >(m,"Aspect_CircularGrid",R"#()#");
    py::class_<Aspect_RectangularGrid ,opencascade::handle<Aspect_RectangularGrid> ,Py_Aspect_RectangularGrid , Aspect_Grid >(m,"Aspect_RectangularGrid",R"#()#");

// pre-register typdefs
// ./opencascade/Aspect_GridDrawMode.hxx
// ./opencascade/Aspect_Convert.hxx
// ./opencascade/Aspect_InteriorStyle.hxx
// ./opencascade/Aspect_TypeOfTriedronPosition.hxx
// ./opencascade/Aspect_AspectLineDefinitionError.hxx
// ./opencascade/Aspect_Window.hxx
// ./opencascade/Aspect_TypeOfStyleText.hxx
// ./opencascade/Aspect_GenId.hxx
// ./opencascade/Aspect_TypeOfDeflection.hxx
// ./opencascade/Aspect_TypeOfDisplayText.hxx
// ./opencascade/Aspect_RenderingContext.hxx
// ./opencascade/Aspect_DisplayConnection.hxx
// ./opencascade/Aspect_GradientFillMethod.hxx
// ./opencascade/Aspect_Handle.hxx
// ./opencascade/Aspect_Units.hxx
// ./opencascade/Aspect_FBConfig.hxx
// ./opencascade/Aspect_WidthOfLine.hxx
// ./opencascade/Aspect_TypeOfColorScaleData.hxx
// ./opencascade/Aspect_DisplayConnectionDefinitionError.hxx
// ./opencascade/Aspect_TypeOfResize.hxx
// ./opencascade/Aspect_Grid.hxx
// ./opencascade/Aspect_GradientBackground.hxx
// ./opencascade/Aspect_CircularGrid.hxx
// ./opencascade/Aspect_FillMethod.hxx
// ./opencascade/Aspect_TypeOfLine.hxx
// ./opencascade/Aspect_Drawable.hxx
// ./opencascade/Aspect_HatchStyle.hxx
// ./opencascade/Aspect_WindowDefinitionError.hxx
// ./opencascade/Aspect_XAtom.hxx
// ./opencascade/Aspect_Display.hxx
// ./opencascade/Aspect_AspectFillAreaDefinitionError.hxx
// ./opencascade/Aspect_Background.hxx
// ./opencascade/Aspect_XWD.hxx
// ./opencascade/Aspect_WindowError.hxx
// ./opencascade/Aspect_TypeOfFacingModel.hxx
// ./opencascade/Aspect_IdentDefinitionError.hxx
// ./opencascade/Aspect_AspectMarkerDefinitionError.hxx
// ./opencascade/Aspect_NeutralWindow.hxx
// ./opencascade/Aspect_GraphicDeviceDefinitionError.hxx
// ./opencascade/Aspect_SequenceOfColor.hxx
    preregister_template_NCollection_Sequence<Quantity_Color>(m,"Aspect_SequenceOfColor");  
// ./opencascade/Aspect_RectangularGrid.hxx
// ./opencascade/Aspect_TypeOfColorScaleOrientation.hxx
// ./opencascade/Aspect_TypeOfMarker.hxx
// ./opencascade/Aspect_TypeOfColorScalePosition.hxx
// ./opencascade/Aspect_PolygonOffsetMode.hxx
// ./opencascade/Aspect_GridType.hxx
// ./opencascade/Aspect_TypeOfHighlightMethod.hxx

};

// user-defined post-inclusion per module

// user-defined post
