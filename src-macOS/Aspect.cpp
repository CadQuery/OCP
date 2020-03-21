
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Aspect_IdentDefinitionError.hxx>
#include <Standard_NegativeValue.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_NumericError.hxx>
#include <Aspect_DisplayConnection.hxx>
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
// ./opencascade/Aspect_SequenceOfColor.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Aspect_TouchMap.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
struct __GLXFBConfigRec {};

// Module definiiton
void register_Aspect(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Aspect"));


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

// classes


    static_cast<py::class_<Aspect_Background , shared_ptr<Aspect_Background> >>(m.attr("Aspect_Background"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Aspect_DisplayConnection ,opencascade::handle<Aspect_DisplayConnection> , Standard_Transient>>(m.attr("Aspect_DisplayConnection"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Aspect_DisplayConnection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Aspect_DisplayConnection::*)() const>(&Aspect_DisplayConnection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Aspect_DisplayConnection::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Aspect_GenId , shared_ptr<Aspect_GenId> >>(m.attr("Aspect_GenId"))
    // constructors
    // custom constructors
    // methods
        .def("HasFree",
             (Standard_Boolean (Aspect_GenId::*)() const) static_cast<Standard_Boolean (Aspect_GenId::*)() const>(&Aspect_GenId::HasFree),
             R"#(Returns true if there are available identifiers in range.)#" )
        .def("Available",
             (Standard_Integer (Aspect_GenId::*)() const) static_cast<Standard_Integer (Aspect_GenId::*)() const>(&Aspect_GenId::Available),
             R"#(Returns the number of available identifiers.)#" )
        .def("Lower",
             (Standard_Integer (Aspect_GenId::*)() const) static_cast<Standard_Integer (Aspect_GenId::*)() const>(&Aspect_GenId::Lower),
             R"#(Returns the lower identifier in range.)#" )
        .def("Upper",
             (Standard_Integer (Aspect_GenId::*)() const) static_cast<Standard_Integer (Aspect_GenId::*)() const>(&Aspect_GenId::Upper),
             R"#(Returns the upper identifier in range.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Aspect_Grid ,opencascade::handle<Aspect_Grid>,Py_Aspect_Grid , Standard_Transient>>(m.attr("Aspect_Grid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Aspect_Grid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Aspect_Grid::*)() const>(&Aspect_Grid::DynamicType),
             R"#(None)#" )
        .def("SetColors",
             (void (Aspect_Grid::*)( const Quantity_Color & , const Quantity_Color & ) ) static_cast<void (Aspect_Grid::*)( const Quantity_Color & , const Quantity_Color & ) >(&Aspect_Grid::SetColors),
             R"#(Change the colors of the grid)#"  , py::arg("aColor"),  py::arg("aTenthColor"))
        .def("Activate",
             (void (Aspect_Grid::*)() ) static_cast<void (Aspect_Grid::*)() >(&Aspect_Grid::Activate),
             R"#(activates the grid. The Hit method will return gridx and gridx computed according to the steps of the grid.)#" )
        .def("Deactivate",
             (void (Aspect_Grid::*)() ) static_cast<void (Aspect_Grid::*)() >(&Aspect_Grid::Deactivate),
             R"#(deactivates the grid. The hit method will return gridx and gridx as the enter value X & Y.)#" )
        .def("XOrigin",
             (Standard_Real (Aspect_Grid::*)() const) static_cast<Standard_Real (Aspect_Grid::*)() const>(&Aspect_Grid::XOrigin),
             R"#(returns the x Origin of the grid.)#" )
        .def("YOrigin",
             (Standard_Real (Aspect_Grid::*)() const) static_cast<Standard_Real (Aspect_Grid::*)() const>(&Aspect_Grid::YOrigin),
             R"#(returns the x Origin of the grid.)#" )
        .def("RotationAngle",
             (Standard_Real (Aspect_Grid::*)() const) static_cast<Standard_Real (Aspect_Grid::*)() const>(&Aspect_Grid::RotationAngle),
             R"#(returns the x Angle of the grid.)#" )
        .def("IsActive",
             (Standard_Boolean (Aspect_Grid::*)() const) static_cast<Standard_Boolean (Aspect_Grid::*)() const>(&Aspect_Grid::IsActive),
             R"#(Returns TRUE when the grid is active.)#" )
        .def("DrawMode",
             (Aspect_GridDrawMode (Aspect_Grid::*)() const) static_cast<Aspect_GridDrawMode (Aspect_Grid::*)() const>(&Aspect_Grid::DrawMode),
             R"#(Returns the grid aspect.)#" )
        .def("Display",
             (void (Aspect_Grid::*)() ) static_cast<void (Aspect_Grid::*)() >(&Aspect_Grid::Display),
             R"#(Display the grid at screen.)#" )
        .def("Erase",
             (void (Aspect_Grid::*)() const) static_cast<void (Aspect_Grid::*)() const>(&Aspect_Grid::Erase),
             R"#(Erase the grid from screen.)#" )
        .def("IsDisplayed",
             (Standard_Boolean (Aspect_Grid::*)() const) static_cast<Standard_Boolean (Aspect_Grid::*)() const>(&Aspect_Grid::IsDisplayed),
             R"#(Returns TRUE when the grid is displayed at screen.)#" )
        .def("Init",
             (void (Aspect_Grid::*)() ) static_cast<void (Aspect_Grid::*)() >(&Aspect_Grid::Init),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Compute",
             []( Aspect_Grid &self , const Standard_Real X,const Standard_Real Y ){ Standard_Real  gridX; Standard_Real  gridY; self.Compute(X,Y,gridX,gridY); return std::make_tuple(gridX,gridY); },
             R"#(returns the point of the grid the closest to the point X,Y)#"  , py::arg("X"),  py::arg("Y"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Aspect_Grid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Aspect_ScrollDelta , shared_ptr<Aspect_ScrollDelta> >>(m.attr("Aspect_ScrollDelta"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const NCollection_Vec2<int> &,Standard_Real,Aspect_VKeyFlags >()  , py::arg("thePnt"),  py::arg("theValue"),  py::arg("theFlags")=static_cast<Aspect_VKeyFlags>(Aspect_VKeyFlags_NONE) )
        .def(py::init< Standard_Real,Aspect_VKeyFlags >()  , py::arg("theValue"),  py::arg("theFlags")=static_cast<Aspect_VKeyFlags>(Aspect_VKeyFlags_NONE) )
    // custom constructors
    // methods
        .def("HasPoint",
             (bool (Aspect_ScrollDelta::*)() const) static_cast<bool (Aspect_ScrollDelta::*)() const>(&Aspect_ScrollDelta::HasPoint),
             R"#(Return true if action has point defined.)#" )
        .def("ResetPoint",
             (void (Aspect_ScrollDelta::*)() ) static_cast<void (Aspect_ScrollDelta::*)() >(&Aspect_ScrollDelta::ResetPoint),
             R"#(Reset at point.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Aspect_Touch , shared_ptr<Aspect_Touch> >>(m.attr("Aspect_Touch"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const NCollection_Vec2<Standard_Real> &,Standard_Boolean >()  , py::arg("thePnt"),  py::arg("theIsPreciseDevice") )
        .def(py::init< Standard_Real,Standard_Real,Standard_Boolean >()  , py::arg("theX"),  py::arg("theY"),  py::arg("theIsPreciseDevice") )
    // custom constructors
    // methods
        .def("Delta",
             (NCollection_Vec2<Standard_Real> (Aspect_Touch::*)() const) static_cast<NCollection_Vec2<Standard_Real> (Aspect_Touch::*)() const>(&Aspect_Touch::Delta),
             R"#(Return values delta.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Aspect_Window ,opencascade::handle<Aspect_Window>,Py_Aspect_Window , Standard_Transient>>(m.attr("Aspect_Window"))
    // constructors
    // custom constructors
    // methods
        .def("Map",
             (void (Aspect_Window::*)() const) static_cast<void (Aspect_Window::*)() const>(&Aspect_Window::Map),
             R"#(Opens the window <me>.)#" )
        .def("Unmap",
             (void (Aspect_Window::*)() const) static_cast<void (Aspect_Window::*)() const>(&Aspect_Window::Unmap),
             R"#(Closes the window <me>.)#" )
        .def("DoResize",
             (Aspect_TypeOfResize (Aspect_Window::*)() const) static_cast<Aspect_TypeOfResize (Aspect_Window::*)() const>(&Aspect_Window::DoResize),
             R"#(Apply the resizing to the window <me>.)#" )
        .def("DoMapping",
             (Standard_Boolean (Aspect_Window::*)() const) static_cast<Standard_Boolean (Aspect_Window::*)() const>(&Aspect_Window::DoMapping),
             R"#(Apply the mapping change to the window <me>. and returns TRUE if the window is mapped at screen.)#" )
        .def("IsMapped",
             (Standard_Boolean (Aspect_Window::*)() const) static_cast<Standard_Boolean (Aspect_Window::*)() const>(&Aspect_Window::IsMapped),
             R"#(Returns True if the window <me> is opened and False if the window is closed.)#" )
        .def("Ratio",
             (Standard_Real (Aspect_Window::*)() const) static_cast<Standard_Real (Aspect_Window::*)() const>(&Aspect_Window::Ratio),
             R"#(Returns The Window RATIO equal to the physical WIDTH/HEIGHT dimensions)#" )
        .def("NativeHandle",
             (Aspect_Drawable (Aspect_Window::*)() const) static_cast<Aspect_Drawable (Aspect_Window::*)() const>(&Aspect_Window::NativeHandle),
             R"#(Returns native Window handle (HWND on Windows, Window with Xlib, and so on))#" )
        .def("NativeParentHandle",
             (Aspect_Drawable (Aspect_Window::*)() const) static_cast<Aspect_Drawable (Aspect_Window::*)() const>(&Aspect_Window::NativeParentHandle),
             R"#(Returns parent of native Window handle (HWND on Windows, Window with Xlib, and so on))#" )
        .def("SetTitle",
             (void (Aspect_Window::*)( const TCollection_AsciiString & ) ) static_cast<void (Aspect_Window::*)( const TCollection_AsciiString & ) >(&Aspect_Window::SetTitle),
             R"#(Sets window title.)#"  , py::arg("theTitle"))
        .def("InvalidateContent",
             (void (Aspect_Window::*)( const opencascade::handle<Aspect_DisplayConnection> & ) ) static_cast<void (Aspect_Window::*)( const opencascade::handle<Aspect_DisplayConnection> & ) >(&Aspect_Window::InvalidateContent),
             R"#(Invalidate entire window content.)#"  , py::arg("theDisp"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Aspect_Window::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Aspect_Window::*)() const>(&Aspect_Window::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Position",
             []( Aspect_Window &self   ){ Standard_Integer  X1; Standard_Integer  Y1; Standard_Integer  X2; Standard_Integer  Y2; self.Position(X1,Y1,X2,Y2); return std::make_tuple(X1,Y1,X2,Y2); },
             R"#(Returns The Window POSITION in PIXEL)#" )
        .def("Size",
             []( Aspect_Window &self   ){ Standard_Integer  Width; Standard_Integer  Height; self.Size(Width,Height); return std::make_tuple(Width,Height); },
             R"#(Returns The Window SIZE in PIXEL)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Aspect_Window::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<_xcolor , shared_ptr<_xcolor>>(m,"_xcolor");

    static_cast<py::class_<_xcolor , shared_ptr<_xcolor> >>(m.attr("_xcolor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<_xwd_file_header , shared_ptr<_xwd_file_header>>(m,"_xwd_file_header");

    static_cast<py::class_<_xwd_file_header , shared_ptr<_xwd_file_header> >>(m.attr("_xwd_file_header"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Aspect_CircularGrid ,opencascade::handle<Aspect_CircularGrid>,Py_Aspect_CircularGrid , Aspect_Grid>>(m.attr("Aspect_CircularGrid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Aspect_CircularGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Aspect_CircularGrid::*)() const>(&Aspect_CircularGrid::DynamicType),
             R"#(None)#" )
        .def("Init",
             (void (Aspect_CircularGrid::*)() ) static_cast<void (Aspect_CircularGrid::*)() >(&Aspect_CircularGrid::Init),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Compute",
             []( Aspect_CircularGrid &self , const Standard_Real X,const Standard_Real Y ){ Standard_Real  gridX; Standard_Real  gridY; self.Compute(X,Y,gridX,gridY); return std::make_tuple(gridX,gridY); },
             R"#(returns the point of the grid the closest to the point X,Y)#"  , py::arg("X"),  py::arg("Y"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Aspect_CircularGrid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Aspect_GradientBackground , shared_ptr<Aspect_GradientBackground> , Aspect_Background>>(m.attr("Aspect_GradientBackground"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Aspect_NeutralWindow ,opencascade::handle<Aspect_NeutralWindow> , Aspect_Window>>(m.attr("Aspect_NeutralWindow"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Aspect_NeutralWindow::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Aspect_NeutralWindow::*)() const>(&Aspect_NeutralWindow::DynamicType),
             R"#(None)#" )
        .def("NativeHandle",
             (Aspect_Drawable (Aspect_NeutralWindow::*)() const) static_cast<Aspect_Drawable (Aspect_NeutralWindow::*)() const>(&Aspect_NeutralWindow::NativeHandle),
             R"#(Return native handle of this drawable.)#" )
        .def("NativeParentHandle",
             (Aspect_Drawable (Aspect_NeutralWindow::*)() const) static_cast<Aspect_Drawable (Aspect_NeutralWindow::*)() const>(&Aspect_NeutralWindow::NativeParentHandle),
             R"#(Return native handle of the parent drawable.)#" )
        .def("SetNativeHandle",
             (Standard_Boolean (Aspect_NeutralWindow::*)( Aspect_Drawable ) ) static_cast<Standard_Boolean (Aspect_NeutralWindow::*)( Aspect_Drawable ) >(&Aspect_NeutralWindow::SetNativeHandle),
             R"#(Set native handle.)#"  , py::arg("theWindow"))
        .def("IsMapped",
             (Standard_Boolean (Aspect_NeutralWindow::*)() const) static_cast<Standard_Boolean (Aspect_NeutralWindow::*)() const>(&Aspect_NeutralWindow::IsMapped),
             R"#(Return true if window is not hidden.)#" )
        .def("Map",
             (void (Aspect_NeutralWindow::*)() const) static_cast<void (Aspect_NeutralWindow::*)() const>(&Aspect_NeutralWindow::Map),
             R"#(Change window mapped flag to TRUE.)#" )
        .def("Unmap",
             (void (Aspect_NeutralWindow::*)() const) static_cast<void (Aspect_NeutralWindow::*)() const>(&Aspect_NeutralWindow::Unmap),
             R"#(Change window mapped flag to FALSE.)#" )
        .def("DoResize",
             (Aspect_TypeOfResize (Aspect_NeutralWindow::*)() const) static_cast<Aspect_TypeOfResize (Aspect_NeutralWindow::*)() const>(&Aspect_NeutralWindow::DoResize),
             R"#(Resize window - do nothing.)#" )
        .def("DoMapping",
             (Standard_Boolean (Aspect_NeutralWindow::*)() const) static_cast<Standard_Boolean (Aspect_NeutralWindow::*)() const>(&Aspect_NeutralWindow::DoMapping),
             R"#(Map window - do nothing.)#" )
        .def("Ratio",
             (Standard_Real (Aspect_NeutralWindow::*)() const) static_cast<Standard_Real (Aspect_NeutralWindow::*)() const>(&Aspect_NeutralWindow::Ratio),
             R"#(Returns window ratio equal to the physical width/height dimensions.)#" )
    // methods using call by reference i.s.o. return
        .def("Position",
             []( Aspect_NeutralWindow &self   ){ Standard_Integer  theX1; Standard_Integer  theY1; Standard_Integer  theX2; Standard_Integer  theY2; self.Position(theX1,theY1,theX2,theY2); return std::make_tuple(theX1,theY1,theX2,theY2); },
             R"#(Return the window position.)#" )
        .def("Size",
             []( Aspect_NeutralWindow &self   ){ Standard_Integer  theWidth; Standard_Integer  theHeight; self.Size(theWidth,theHeight); return std::make_tuple(theWidth,theHeight); },
             R"#(Return the window size.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Aspect_NeutralWindow::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Aspect_RectangularGrid ,opencascade::handle<Aspect_RectangularGrid>,Py_Aspect_RectangularGrid , Aspect_Grid>>(m.attr("Aspect_RectangularGrid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Aspect_RectangularGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Aspect_RectangularGrid::*)() const>(&Aspect_RectangularGrid::DynamicType),
             R"#(None)#" )
        .def("Init",
             (void (Aspect_RectangularGrid::*)() ) static_cast<void (Aspect_RectangularGrid::*)() >(&Aspect_RectangularGrid::Init),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Compute",
             []( Aspect_RectangularGrid &self , const Standard_Real X,const Standard_Real Y ){ Standard_Real  gridX; Standard_Real  gridY; self.Compute(X,Y,gridX,gridY); return std::make_tuple(gridX,gridY); },
             R"#(returns the point of the grid the closest to the point X,Y)#"  , py::arg("X"),  py::arg("Y"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Aspect_RectangularGrid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Aspect_NeutralWindow.hxx
// ./opencascade/Aspect_AspectLineDefinitionError.hxx
// ./opencascade/Aspect_TypeOfResize.hxx
// ./opencascade/Aspect_GenId.hxx
// ./opencascade/Aspect_TypeOfStyleText.hxx
// ./opencascade/Aspect_Background.hxx
// ./opencascade/Aspect_Drawable.hxx
// ./opencascade/Aspect_GradientBackground.hxx
// ./opencascade/Aspect_TypeOfColorScaleData.hxx
// ./opencascade/Aspect_AspectFillAreaDefinitionError.hxx
// ./opencascade/Aspect_Units.hxx
// ./opencascade/Aspect_AspectMarkerDefinitionError.hxx
// ./opencascade/Aspect_RenderingContext.hxx
// ./opencascade/Aspect_TypeOfColorScalePosition.hxx
// ./opencascade/Aspect_TypeOfMarker.hxx
// ./opencascade/Aspect_Grid.hxx
// ./opencascade/Aspect_WindowError.hxx
// ./opencascade/Aspect_WindowDefinitionError.hxx
// ./opencascade/Aspect_TypeOfTriedronPosition.hxx
// ./opencascade/Aspect_RectangularGrid.hxx
// ./opencascade/Aspect_TypeOfFacingModel.hxx
// ./opencascade/Aspect_Window.hxx
// ./opencascade/Aspect_TypeOfLine.hxx
// ./opencascade/Aspect_TypeOfDisplayText.hxx
// ./opencascade/Aspect_Touch.hxx
// ./opencascade/Aspect_TypeOfHighlightMethod.hxx
// ./opencascade/Aspect_Display.hxx
// ./opencascade/Aspect_DisplayConnection.hxx
// ./opencascade/Aspect_WidthOfLine.hxx
// ./opencascade/Aspect_FBConfig.hxx
// ./opencascade/Aspect_IdentDefinitionError.hxx
// ./opencascade/Aspect_GridDrawMode.hxx
// ./opencascade/Aspect_TypeOfColorScaleOrientation.hxx
// ./opencascade/Aspect_ScrollDelta.hxx
// ./opencascade/Aspect_XWD.hxx
// ./opencascade/Aspect_TypeOfDeflection.hxx
// ./opencascade/Aspect_HatchStyle.hxx
// ./opencascade/Aspect_CircularGrid.hxx
// ./opencascade/Aspect_GraphicDeviceDefinitionError.hxx
// ./opencascade/Aspect_VKeyFlags.hxx
// ./opencascade/Aspect_GradientFillMethod.hxx
// ./opencascade/Aspect_DisplayConnectionDefinitionError.hxx
// ./opencascade/Aspect_InteriorStyle.hxx
// ./opencascade/Aspect_SequenceOfColor.hxx
// ./opencascade/Aspect_PolygonOffsetMode.hxx
// ./opencascade/Aspect_TouchMap.hxx
// ./opencascade/Aspect_Convert.hxx
// ./opencascade/Aspect_VKey.hxx
    m.def("Aspect_VKey2Modifier",
          (Aspect_VKeyFlags (*)( Aspect_VKey ))  static_cast<Aspect_VKeyFlags (*)( Aspect_VKey )>(&Aspect_VKey2Modifier),
          R"#(Return modifier flags for specified modifier key.)#"  , py::arg("theKey"));
// ./opencascade/Aspect_XAtom.hxx
// ./opencascade/Aspect_GridType.hxx
// ./opencascade/Aspect_Handle.hxx
// ./opencascade/Aspect_FillMethod.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<Quantity_Color>(m,"Aspect_SequenceOfColor");
    register_template_NCollection_IndexedDataMap<Standard_Size, Aspect_Touch>(m,"Aspect_TouchMap");


// exceptions
register_occ_exception<Aspect_AspectFillAreaDefinitionError>(m, "Aspect_AspectFillAreaDefinitionError");
register_occ_exception<Aspect_AspectLineDefinitionError>(m, "Aspect_AspectLineDefinitionError");
register_occ_exception<Aspect_AspectMarkerDefinitionError>(m, "Aspect_AspectMarkerDefinitionError");
register_occ_exception<Aspect_DisplayConnectionDefinitionError>(m, "Aspect_DisplayConnectionDefinitionError");
register_occ_exception<Aspect_GraphicDeviceDefinitionError>(m, "Aspect_GraphicDeviceDefinitionError");
register_occ_exception<Aspect_IdentDefinitionError>(m, "Aspect_IdentDefinitionError");
register_occ_exception<Aspect_WindowDefinitionError>(m, "Aspect_WindowDefinitionError");
register_occ_exception<Aspect_WindowError>(m, "Aspect_WindowError");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
