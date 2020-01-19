
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NegativeValue.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_NumericError.hxx>
#include <Aspect_IdentDefinitionError.hxx>
#include <Aspect_WindowDefinitionError.hxx>
#include <Aspect_WindowError.hxx>
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


    static_cast<py::class_<Aspect_Background , shared_ptr<Aspect_Background>  >>(m.attr("Aspect_Background"))
        .def(py::init<  >()  )
        .def(py::init< const Quantity_Color & >()  , py::arg("AColor") )
    // methods
        .def("SetColor",
             (void (Aspect_Background::*)( const Quantity_Color &  ) ) static_cast<void (Aspect_Background::*)( const Quantity_Color &  ) >(&Aspect_Background::SetColor),
             R"#(Modifies the colour of the window background <me>.)#"  , py::arg("AColor"))
        .def("Color",
             (Quantity_Color (Aspect_Background::*)() const) static_cast<Quantity_Color (Aspect_Background::*)() const>(&Aspect_Background::Color),
             R"#(Returns the colour of the window background <me>.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Aspect_DisplayConnection ,opencascade::handle<Aspect_DisplayConnection>  , Standard_Transient >>(m.attr("Aspect_DisplayConnection"))
        .def(py::init<  >()  )
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theDisplayName") )
    // methods
        .def("GetAtom",
             (Atom (Aspect_DisplayConnection::*)( const Aspect_XAtom  ) const) static_cast<Atom (Aspect_DisplayConnection::*)( const Aspect_XAtom  ) const>(&Aspect_DisplayConnection::GetAtom),
             R"#(Returns identifier(atom) for custom named property associated with windows that use current connection to X server.)#"  , py::arg("theAtom"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Aspect_DisplayConnection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Aspect_DisplayConnection::*)() const>(&Aspect_DisplayConnection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Aspect_DisplayConnection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Aspect_DisplayConnection::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Aspect_GenId , shared_ptr<Aspect_GenId>  >>(m.attr("Aspect_GenId"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLow"),  py::arg("theUpper") )
    // methods
        .def("Free",
             (void (Aspect_GenId::*)() ) static_cast<void (Aspect_GenId::*)() >(&Aspect_GenId::Free),
             R"#(Free all identifiers - make the whole range available again.)#" )
        .def("Free",
             (void (Aspect_GenId::*)( const Standard_Integer  ) ) static_cast<void (Aspect_GenId::*)( const Standard_Integer  ) >(&Aspect_GenId::Free),
             R"#(Free specified identifier. Warning - method has no protection against double-freeing!)#"  , py::arg("theId"))
        .def("HasFree",
             (Standard_Boolean (Aspect_GenId::*)() const) static_cast<Standard_Boolean (Aspect_GenId::*)() const>(&Aspect_GenId::HasFree),
             R"#(Returns true if there are available identifiers in range.)#" )
        .def("Available",
             (Standard_Integer (Aspect_GenId::*)() const) static_cast<Standard_Integer (Aspect_GenId::*)() const>(&Aspect_GenId::Available),
             R"#(Returns the number of available identifiers.)#" )
        .def("Lower",
             (Standard_Integer (Aspect_GenId::*)() const) static_cast<Standard_Integer (Aspect_GenId::*)() const>(&Aspect_GenId::Lower),
             R"#(Returns the lower identifier in range.)#" )
        .def("Next",
             (Standard_Integer (Aspect_GenId::*)() ) static_cast<Standard_Integer (Aspect_GenId::*)() >(&Aspect_GenId::Next),
             R"#(Returns the next available identifier. Warning: Raises IdentDefinitionError if all identifiers are busy.)#" )
        .def("Upper",
             (Standard_Integer (Aspect_GenId::*)() const) static_cast<Standard_Integer (Aspect_GenId::*)() const>(&Aspect_GenId::Upper),
             R"#(Returns the upper identifier in range.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Aspect_Grid ,opencascade::handle<Aspect_Grid> ,Py_Aspect_Grid , Standard_Transient >>(m.attr("Aspect_Grid"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Aspect_Grid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Aspect_Grid::*)() const>(&Aspect_Grid::DynamicType),
             R"#(None)#" )
        .def("SetXOrigin",
             (void (Aspect_Grid::*)( const Standard_Real  ) ) static_cast<void (Aspect_Grid::*)( const Standard_Real  ) >(&Aspect_Grid::SetXOrigin),
             R"#(defines the x Origin of the grid.)#"  , py::arg("anOrigin"))
        .def("SetYOrigin",
             (void (Aspect_Grid::*)( const Standard_Real  ) ) static_cast<void (Aspect_Grid::*)( const Standard_Real  ) >(&Aspect_Grid::SetYOrigin),
             R"#(defines the y Origin of the grid.)#"  , py::arg("anOrigin"))
        .def("SetRotationAngle",
             (void (Aspect_Grid::*)( const Standard_Real  ) ) static_cast<void (Aspect_Grid::*)( const Standard_Real  ) >(&Aspect_Grid::SetRotationAngle),
             R"#(defines the orientation of the grid.)#"  , py::arg("anAngle"))
        .def("Rotate",
             (void (Aspect_Grid::*)( const Standard_Real  ) ) static_cast<void (Aspect_Grid::*)( const Standard_Real  ) >(&Aspect_Grid::Rotate),
             R"#(Rotate the grid from a relative angle.)#"  , py::arg("anAngle"))
        .def("Translate",
             (void (Aspect_Grid::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Aspect_Grid::*)( const Standard_Real ,  const Standard_Real  ) >(&Aspect_Grid::Translate),
             R"#(Translate the grid from a relative distance.)#"  , py::arg("aDx"),  py::arg("aDy"))
        .def("SetColors",
             (void (Aspect_Grid::*)( const Quantity_Color & ,  const Quantity_Color &  ) ) static_cast<void (Aspect_Grid::*)( const Quantity_Color & ,  const Quantity_Color &  ) >(&Aspect_Grid::SetColors),
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
        .def("Colors",
             (void (Aspect_Grid::*)( Quantity_Color & ,  Quantity_Color &  ) const) static_cast<void (Aspect_Grid::*)( Quantity_Color & ,  Quantity_Color &  ) const>(&Aspect_Grid::Colors),
             R"#(Returns the colors of the grid.)#"  , py::arg("aColor"),  py::arg("aTenthColor"))
        .def("SetDrawMode",
             (void (Aspect_Grid::*)( const Aspect_GridDrawMode  ) ) static_cast<void (Aspect_Grid::*)( const Aspect_GridDrawMode  ) >(&Aspect_Grid::SetDrawMode),
             R"#(Change the grid aspect.)#"  , py::arg("aDrawMode"))
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
        .def("Hit",
             []( Aspect_Grid &self , const Standard_Real X,const Standard_Real Y ){ Standard_Real  gridX; Standard_Real  gridY; self.Hit(X,Y,gridX,gridY); return std::make_tuple(gridX,gridY); },
             R"#(returns the point of the grid the closest to the point X,Y if the grid is active. If the grid is not active returns X,Y.)#"  , py::arg("X"),  py::arg("Y"))
        .def("Compute",
             []( Aspect_Grid &self , const Standard_Real X,const Standard_Real Y ){ Standard_Real  gridX; Standard_Real  gridY; self.Compute(X,Y,gridX,gridY); return std::make_tuple(gridX,gridY); },
             R"#(returns the point of the grid the closest to the point X,Y)#"  , py::arg("X"),  py::arg("Y"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Aspect_Grid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Aspect_Grid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Aspect_Window ,opencascade::handle<Aspect_Window> ,Py_Aspect_Window , Standard_Transient >>(m.attr("Aspect_Window"))
    // methods
        .def("SetBackground",
             (void (Aspect_Window::*)( const Aspect_Background &  ) ) static_cast<void (Aspect_Window::*)( const Aspect_Background &  ) >(&Aspect_Window::SetBackground),
             R"#(Modifies the window background.)#"  , py::arg("ABack"))
        .def("SetBackground",
             (void (Aspect_Window::*)( const Quantity_Color &  ) ) static_cast<void (Aspect_Window::*)( const Quantity_Color &  ) >(&Aspect_Window::SetBackground),
             R"#(Modifies the window background.)#"  , py::arg("color"))
        .def("SetBackground",
             (void (Aspect_Window::*)( const Aspect_GradientBackground &  ) ) static_cast<void (Aspect_Window::*)( const Aspect_GradientBackground &  ) >(&Aspect_Window::SetBackground),
             R"#(Modifies the window gradient background.)#"  , py::arg("ABackground"))
        .def("SetBackground",
             (void (Aspect_Window::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Aspect_GradientFillMethod  ) ) static_cast<void (Aspect_Window::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Aspect_GradientFillMethod  ) >(&Aspect_Window::SetBackground),
             R"#(Modifies the window gradient background.)#"  , py::arg("theFirstColor"),  py::arg("theSecondColor"),  py::arg("theFillMethod"))
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
        .def("Background",
             (Aspect_Background (Aspect_Window::*)() const) static_cast<Aspect_Background (Aspect_Window::*)() const>(&Aspect_Window::Background),
             R"#(Returns the window background.)#" )
        .def("BackgroundFillMethod",
             (Aspect_FillMethod (Aspect_Window::*)() const) static_cast<Aspect_FillMethod (Aspect_Window::*)() const>(&Aspect_Window::BackgroundFillMethod),
             R"#(Returns the current image background fill mode.)#" )
        .def("GradientBackground",
             (Aspect_GradientBackground (Aspect_Window::*)() const) static_cast<Aspect_GradientBackground (Aspect_Window::*)() const>(&Aspect_Window::GradientBackground),
             R"#(Returns the window gradient background.)#" )
        .def("IsMapped",
             (Standard_Boolean (Aspect_Window::*)() const) static_cast<Standard_Boolean (Aspect_Window::*)() const>(&Aspect_Window::IsMapped),
             R"#(Returns True if the window <me> is opened and False if the window is closed.)#" )
        .def("IsVirtual",
             (Standard_Boolean (Aspect_Window::*)() const) static_cast<Standard_Boolean (Aspect_Window::*)() const>(&Aspect_Window::IsVirtual),
             R"#(Returns True if the window <me> is virtual)#" )
        .def("SetVirtual",
             (void (Aspect_Window::*)( const Standard_Boolean  ) ) static_cast<void (Aspect_Window::*)( const Standard_Boolean  ) >(&Aspect_Window::SetVirtual),
             R"#(Setup the virtual state)#"  , py::arg("theVirtual"))
        .def("Ratio",
             (Standard_Real (Aspect_Window::*)() const) static_cast<Standard_Real (Aspect_Window::*)() const>(&Aspect_Window::Ratio),
             R"#(Returns The Window RATIO equal to the physical WIDTH/HEIGHT dimensions)#" )
        .def("NativeHandle",
             (Aspect_Drawable (Aspect_Window::*)() const) static_cast<Aspect_Drawable (Aspect_Window::*)() const>(&Aspect_Window::NativeHandle),
             R"#(Returns native Window handle (HWND on Windows, Window with Xlib, and so on))#" )
        .def("NativeParentHandle",
             (Aspect_Drawable (Aspect_Window::*)() const) static_cast<Aspect_Drawable (Aspect_Window::*)() const>(&Aspect_Window::NativeParentHandle),
             R"#(Returns parent of native Window handle (HWND on Windows, Window with Xlib, and so on))#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Aspect_Window::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Aspect_CircularGrid ,opencascade::handle<Aspect_CircularGrid> ,Py_Aspect_CircularGrid , Aspect_Grid >>(m.attr("Aspect_CircularGrid"))
        .def(py::init< const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("aRadiusStep"),  py::arg("aDivisionNumber"),  py::arg("XOrigin")=static_cast<const Standard_Real>(0),  py::arg("anYOrigin")=static_cast<const Standard_Real>(0),  py::arg("aRotationAngle")=static_cast<const Standard_Real>(0) )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Aspect_CircularGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Aspect_CircularGrid::*)() const>(&Aspect_CircularGrid::DynamicType),
             R"#(None)#" )
        .def("SetRadiusStep",
             (void (Aspect_CircularGrid::*)( const Standard_Real  ) ) static_cast<void (Aspect_CircularGrid::*)( const Standard_Real  ) >(&Aspect_CircularGrid::SetRadiusStep),
             R"#(defines the x step of the grid.)#"  , py::arg("aStep"))
        .def("SetDivisionNumber",
             (void (Aspect_CircularGrid::*)( const Standard_Integer  ) ) static_cast<void (Aspect_CircularGrid::*)( const Standard_Integer  ) >(&Aspect_CircularGrid::SetDivisionNumber),
             R"#(defines the step of the grid.)#"  , py::arg("aNumber"))
        .def("SetGridValues",
             (void (Aspect_CircularGrid::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Aspect_CircularGrid::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Real  ) >(&Aspect_CircularGrid::SetGridValues),
             R"#(None)#"  , py::arg("XOrigin"),  py::arg("YOrigin"),  py::arg("RadiusStep"),  py::arg("DivisionNumber"),  py::arg("RotationAngle"))
        .def("RadiusStep",
             (Standard_Real (Aspect_CircularGrid::*)() const) static_cast<Standard_Real (Aspect_CircularGrid::*)() const>(&Aspect_CircularGrid::RadiusStep),
             R"#(returns the x step of the grid.)#" )
        .def("DivisionNumber",
             (Standard_Integer (Aspect_CircularGrid::*)() const) static_cast<Standard_Integer (Aspect_CircularGrid::*)() const>(&Aspect_CircularGrid::DivisionNumber),
             R"#(returns the x step of the grid.)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Aspect_CircularGrid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Aspect_GradientBackground , shared_ptr<Aspect_GradientBackground>  , Aspect_Background >>(m.attr("Aspect_GradientBackground"))
        .def(py::init<  >()  )
        .def(py::init< const Quantity_Color &,const Quantity_Color &,const Aspect_GradientFillMethod >()  , py::arg("AColor1"),  py::arg("AColor2"),  py::arg("AMethod")=static_cast<const Aspect_GradientFillMethod>(Aspect_GFM_HOR) )
    // methods
        .def("SetColors",
             (void (Aspect_GradientBackground::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Aspect_GradientFillMethod  ) ) static_cast<void (Aspect_GradientBackground::*)( const Quantity_Color & ,  const Quantity_Color & ,  const Aspect_GradientFillMethod  ) >(&Aspect_GradientBackground::SetColors),
             R"#(Modifies the colours of the window gradient background <me>.)#"  , py::arg("AColor1"),  py::arg("AColor2"),  py::arg("AMethod")=static_cast<const Aspect_GradientFillMethod>(Aspect_GFM_HOR))
        .def("Colors",
             (void (Aspect_GradientBackground::*)( Quantity_Color & ,  Quantity_Color &  ) const) static_cast<void (Aspect_GradientBackground::*)( Quantity_Color & ,  Quantity_Color &  ) const>(&Aspect_GradientBackground::Colors),
             R"#(Returns colours of the window gradient background <me>.)#"  , py::arg("AColor1"),  py::arg("AColor2"))
        .def("BgGradientFillMethod",
             (Aspect_GradientFillMethod (Aspect_GradientBackground::*)() const) static_cast<Aspect_GradientFillMethod (Aspect_GradientBackground::*)() const>(&Aspect_GradientBackground::BgGradientFillMethod),
             R"#(Returns the current gradient background fill mode.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Aspect_NeutralWindow ,opencascade::handle<Aspect_NeutralWindow>  , Aspect_Window >>(m.attr("Aspect_NeutralWindow"))
        .def(py::init<  >()  )
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
             (Standard_Boolean (Aspect_NeutralWindow::*)( Aspect_Drawable  ) ) static_cast<Standard_Boolean (Aspect_NeutralWindow::*)( Aspect_Drawable  ) >(&Aspect_NeutralWindow::SetNativeHandle),
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
        .def("SetPosition",
             (Standard_Boolean (Aspect_NeutralWindow::*)( Standard_Integer ,  Standard_Integer  ) ) static_cast<Standard_Boolean (Aspect_NeutralWindow::*)( Standard_Integer ,  Standard_Integer  ) >(&Aspect_NeutralWindow::SetPosition),
             R"#(Set the window position.)#"  , py::arg("theX1"),  py::arg("theY1"))
        .def("SetPosition",
             (Standard_Boolean (Aspect_NeutralWindow::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) ) static_cast<Standard_Boolean (Aspect_NeutralWindow::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) >(&Aspect_NeutralWindow::SetPosition),
             R"#(Set the window position.)#"  , py::arg("theX1"),  py::arg("theY1"),  py::arg("theX2"),  py::arg("theY2"))
        .def("SetSize",
             (Standard_Boolean (Aspect_NeutralWindow::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (Aspect_NeutralWindow::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Aspect_NeutralWindow::SetSize),
             R"#(Set the window size.)#"  , py::arg("theWidth"),  py::arg("theHeight"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Aspect_NeutralWindow::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Aspect_RectangularGrid ,opencascade::handle<Aspect_RectangularGrid> ,Py_Aspect_RectangularGrid , Aspect_Grid >>(m.attr("Aspect_RectangularGrid"))
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("aXStep"),  py::arg("aYStep"),  py::arg("anXOrigin")=static_cast<const Standard_Real>(0),  py::arg("anYOrigin")=static_cast<const Standard_Real>(0),  py::arg("aFirstAngle")=static_cast<const Standard_Real>(0),  py::arg("aSecondAngle")=static_cast<const Standard_Real>(0),  py::arg("aRotationAngle")=static_cast<const Standard_Real>(0) )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Aspect_RectangularGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Aspect_RectangularGrid::*)() const>(&Aspect_RectangularGrid::DynamicType),
             R"#(None)#" )
        .def("SetXStep",
             (void (Aspect_RectangularGrid::*)( const Standard_Real  ) ) static_cast<void (Aspect_RectangularGrid::*)( const Standard_Real  ) >(&Aspect_RectangularGrid::SetXStep),
             R"#(defines the x step of the grid.)#"  , py::arg("aStep"))
        .def("SetYStep",
             (void (Aspect_RectangularGrid::*)( const Standard_Real  ) ) static_cast<void (Aspect_RectangularGrid::*)( const Standard_Real  ) >(&Aspect_RectangularGrid::SetYStep),
             R"#(defines the y step of the grid.)#"  , py::arg("aStep"))
        .def("SetAngle",
             (void (Aspect_RectangularGrid::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Aspect_RectangularGrid::*)( const Standard_Real ,  const Standard_Real  ) >(&Aspect_RectangularGrid::SetAngle),
             R"#(defines the angle of the second network the fist angle is given relatively to the horizontal. the second angle is given relatively to the vertical.)#"  , py::arg("anAngle1"),  py::arg("anAngle2"))
        .def("SetGridValues",
             (void (Aspect_RectangularGrid::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Aspect_RectangularGrid::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Aspect_RectangularGrid::SetGridValues),
             R"#(None)#"  , py::arg("XOrigin"),  py::arg("YOrigin"),  py::arg("XStep"),  py::arg("YStep"),  py::arg("RotationAngle"))
        .def("XStep",
             (Standard_Real (Aspect_RectangularGrid::*)() const) static_cast<Standard_Real (Aspect_RectangularGrid::*)() const>(&Aspect_RectangularGrid::XStep),
             R"#(returns the x step of the grid.)#" )
        .def("YStep",
             (Standard_Real (Aspect_RectangularGrid::*)() const) static_cast<Standard_Real (Aspect_RectangularGrid::*)() const>(&Aspect_RectangularGrid::YStep),
             R"#(returns the x step of the grid.)#" )
        .def("FirstAngle",
             (Standard_Real (Aspect_RectangularGrid::*)() const) static_cast<Standard_Real (Aspect_RectangularGrid::*)() const>(&Aspect_RectangularGrid::FirstAngle),
             R"#(returns the x Angle of the grid, relatively to the horizontal.)#" )
        .def("SecondAngle",
             (Standard_Real (Aspect_RectangularGrid::*)() const) static_cast<Standard_Real (Aspect_RectangularGrid::*)() const>(&Aspect_RectangularGrid::SecondAngle),
             R"#(returns the y Angle of the grid, relatively to the vertical.)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Aspect_RectangularGrid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/Aspect_PolygonOffsetMode.hxx
// ./opencascade/Aspect_InteriorStyle.hxx
// ./opencascade/Aspect_TypeOfHighlightMethod.hxx
// ./opencascade/Aspect_TypeOfFacingModel.hxx
// ./opencascade/Aspect_DisplayConnection.hxx
// ./opencascade/Aspect_FillMethod.hxx
// ./opencascade/Aspect_SequenceOfColor.hxx
// ./opencascade/Aspect_TypeOfColorScalePosition.hxx
// ./opencascade/Aspect_TypeOfTriedronPosition.hxx
// ./opencascade/Aspect_GridDrawMode.hxx
// ./opencascade/Aspect_AspectMarkerDefinitionError.hxx
// ./opencascade/Aspect_GradientBackground.hxx
// ./opencascade/Aspect_Grid.hxx
// ./opencascade/Aspect_WidthOfLine.hxx
// ./opencascade/Aspect_XWD.hxx
// ./opencascade/Aspect_GradientFillMethod.hxx
// ./opencascade/Aspect_NeutralWindow.hxx
// ./opencascade/Aspect_TypeOfLine.hxx
// ./opencascade/Aspect_CircularGrid.hxx
// ./opencascade/Aspect_TypeOfResize.hxx
// ./opencascade/Aspect_XAtom.hxx
// ./opencascade/Aspect_TypeOfColorScaleData.hxx
// ./opencascade/Aspect_RenderingContext.hxx
// ./opencascade/Aspect_GraphicDeviceDefinitionError.hxx
// ./opencascade/Aspect_DisplayConnectionDefinitionError.hxx
// ./opencascade/Aspect_Units.hxx
// ./opencascade/Aspect_Drawable.hxx
// ./opencascade/Aspect_WindowError.hxx
// ./opencascade/Aspect_WindowDefinitionError.hxx
// ./opencascade/Aspect_AspectFillAreaDefinitionError.hxx
// ./opencascade/Aspect_Handle.hxx
// ./opencascade/Aspect_TypeOfMarker.hxx
// ./opencascade/Aspect_TypeOfDeflection.hxx
// ./opencascade/Aspect_IdentDefinitionError.hxx
// ./opencascade/Aspect_HatchStyle.hxx
// ./opencascade/Aspect_TypeOfDisplayText.hxx
// ./opencascade/Aspect_GenId.hxx
// ./opencascade/Aspect_Display.hxx
// ./opencascade/Aspect_TypeOfStyleText.hxx
// ./opencascade/Aspect_Window.hxx
// ./opencascade/Aspect_Convert.hxx
// ./opencascade/Aspect_Background.hxx
// ./opencascade/Aspect_AspectLineDefinitionError.hxx
// ./opencascade/Aspect_FBConfig.hxx
// ./opencascade/Aspect_TypeOfColorScaleOrientation.hxx
// ./opencascade/Aspect_RectangularGrid.hxx
// ./opencascade/Aspect_GridType.hxx

// operators

// register typdefs
    register_template_NCollection_Sequence<Quantity_Color>(m,"Aspect_SequenceOfColor");  


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
