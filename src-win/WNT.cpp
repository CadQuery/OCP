
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
#include <WNT_WClass.hxx>
#include <WNT_Window.hxx>

// module includes
#include <WNT_ClassDefinitionError.hxx>
#include <WNT_Dword.hxx>
#include <WNT_OrientationType.hxx>
#include <WNT_WClass.hxx>
#include <WNT_Window.hxx>
#include <WNT_WindowPtr.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Aspect_DisplayConnection.hxx>

// Module definiiton
void register_WNT(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("WNT"));


//Python trampoline classes

// classes


    static_cast<py::class_<WNT_WClass ,opencascade::handle<WNT_WClass> , Standard_Transient>>(m.attr("WNT_WClass"))
    // constructors
        .def(py::init< const TCollection_AsciiString &,const Standard_Address,const unsigned int,const Standard_Integer,const Standard_Integer,const Aspect_Handle,const Aspect_Handle,const TCollection_AsciiString & >()  , py::arg("theClassName"),  py::arg("theWndProc"),  py::arg("theStyle"),  py::arg("theClassExtra")=static_cast<const Standard_Integer>(0),  py::arg("theWindowExtra")=static_cast<const Standard_Integer>(0),  py::arg("theCursor")=static_cast<const Aspect_Handle>(NULL),  py::arg("theIcon")=static_cast<const Aspect_Handle>(NULL),  py::arg("theMenuName")=static_cast<const TCollection_AsciiString &>(TCollection_AsciiString ( )) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (WNT_WClass::*)() const) static_cast<const opencascade::handle<Standard_Type> & (WNT_WClass::*)() const>(&WNT_WClass::DynamicType),
             R"#(None)#" )
        .def("WndProc",
             (Standard_Address (WNT_WClass::*)() const) static_cast<Standard_Address (WNT_WClass::*)() const>(&WNT_WClass::WndProc),
             R"#(Returns address of window procedure.)#" )
        .def("Name",
             (const TCollection_AsciiString & (WNT_WClass::*)() const) static_cast<const TCollection_AsciiString & (WNT_WClass::*)() const>(&WNT_WClass::Name),
             R"#(Returns a class name.)#" )
        .def("Instance",
             (Aspect_Handle (WNT_WClass::*)() const) static_cast<Aspect_Handle (WNT_WClass::*)() const>(&WNT_WClass::Instance),
             R"#(Returns a program instance handle.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&WNT_WClass::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&WNT_WClass::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<WNT_Window ,opencascade::handle<WNT_Window> , Aspect_Window>>(m.attr("WNT_Window"))
    // constructors
        .def(py::init< const Standard_CString,const opencascade::handle<WNT_WClass> &,const WNT_Dword &,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Quantity_NameOfColor,const Aspect_Handle,const Aspect_Handle,const Standard_Address >()  , py::arg("theTitle"),  py::arg("theClass"),  py::arg("theStyle"),  py::arg("thePxLeft"),  py::arg("thePxTop"),  py::arg("thePxWidth"),  py::arg("thePxHeight"),  py::arg("theBackColor")=static_cast<const Quantity_NameOfColor>(Quantity_NOC_MATRAGRAY),  py::arg("theParent")=static_cast<const Aspect_Handle>(0),  py::arg("theMenu")=static_cast<const Aspect_Handle>(0),  py::arg("theClientStruct")=static_cast<const Standard_Address>(0) )
        .def(py::init< const Aspect_Handle,const Quantity_NameOfColor >()  , py::arg("aHandle"),  py::arg("aBackColor")=static_cast<const Quantity_NameOfColor>(Quantity_NOC_MATRAGRAY) )
    // custom constructors
    // methods
        .def("SetCursor",
             (void (WNT_Window::*)( const Aspect_Handle ) const) static_cast<void (WNT_Window::*)( const Aspect_Handle ) const>(&WNT_Window::SetCursor),
             R"#(Sets cursor <aCursor> for ENTIRE WINDOW CLASS to which the Window belongs.)#"  , py::arg("aCursor"))
        .def("Map",
             (void (WNT_Window::*)() const) static_cast<void (WNT_Window::*)() const>(&WNT_Window::Map),
             R"#(Opens the window <me>.)#" )
        .def("Map",
             (void (WNT_Window::*)( const Standard_Integer ) const) static_cast<void (WNT_Window::*)( const Standard_Integer ) const>(&WNT_Window::Map),
             R"#(Opens a window <me> according to <aMapMode>. This method is specific to Windows NT. <aMapMode> can be one of SW_xxx constants defined in <windows.h>. See documentation.)#"  , py::arg("aMapMode"))
        .def("Unmap",
             (void (WNT_Window::*)() const) static_cast<void (WNT_Window::*)() const>(&WNT_Window::Unmap),
             R"#(Closes the window <me>.)#" )
        .def("DoResize",
             (Aspect_TypeOfResize (WNT_Window::*)() const) static_cast<Aspect_TypeOfResize (WNT_Window::*)() const>(&WNT_Window::DoResize),
             R"#(Applies the resizing to the window <me>.)#" )
        .def("DoMapping",
             (Standard_Boolean (WNT_Window::*)() const) static_cast<Standard_Boolean (WNT_Window::*)() const>(&WNT_Window::DoMapping),
             R"#(Apply the mapping change to the window <me> and returns TRUE if the window is mapped at screen.)#" )
        .def("SetPos",
             (void (WNT_Window::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (WNT_Window::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&WNT_Window::SetPos),
             R"#(Changes variables due to window position.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("X1"),  py::arg("Y1"))
        .def("IsMapped",
             (Standard_Boolean (WNT_Window::*)() const) static_cast<Standard_Boolean (WNT_Window::*)() const>(&WNT_Window::IsMapped),
             R"#(Returns True if the window <me> is opened and False if the window is closed.)#" )
        .def("Ratio",
             (Standard_Real (WNT_Window::*)() const) static_cast<Standard_Real (WNT_Window::*)() const>(&WNT_Window::Ratio),
             R"#(Returns The Window RATIO equal to the physical WIDTH/HEIGHT dimensions.)#" )
        .def("HWindow",
             (Aspect_Handle (WNT_Window::*)() const) static_cast<Aspect_Handle (WNT_Window::*)() const>(&WNT_Window::HWindow),
             R"#(Returns the Windows NT handle of the created window <me>.)#" )
        .def("HParentWindow",
             (Aspect_Handle (WNT_Window::*)() const) static_cast<Aspect_Handle (WNT_Window::*)() const>(&WNT_Window::HParentWindow),
             R"#(Returns the Windows NT handle parent of the created window <me>.)#" )
        .def("NativeHandle",
             (Aspect_Drawable (WNT_Window::*)() const) static_cast<Aspect_Drawable (WNT_Window::*)() const>(&WNT_Window::NativeHandle),
             R"#(Returns native Window handle (HWND))#" )
        .def("NativeParentHandle",
             (Aspect_Drawable (WNT_Window::*)() const) static_cast<Aspect_Drawable (WNT_Window::*)() const>(&WNT_Window::NativeParentHandle),
             R"#(Returns parent of native Window handle (HWND on Windows, Window with Xlib, and so on))#" )
        .def("NativeFBConfig",
             (Aspect_FBConfig (WNT_Window::*)() const) static_cast<Aspect_FBConfig (WNT_Window::*)() const>(&WNT_Window::NativeFBConfig),
             R"#(Returns nothing on Windows)#" )
        .def("SetTitle",
             (void (WNT_Window::*)( const TCollection_AsciiString & ) ) static_cast<void (WNT_Window::*)( const TCollection_AsciiString & ) >(&WNT_Window::SetTitle),
             R"#(Sets window title.)#"  , py::arg("theTitle"))
        .def("InvalidateContent",
             (void (WNT_Window::*)( const opencascade::handle<Aspect_DisplayConnection> & ) ) static_cast<void (WNT_Window::*)( const opencascade::handle<Aspect_DisplayConnection> & ) >(&WNT_Window::InvalidateContent),
             R"#(Invalidate entire window content by calling InvalidateRect() WinAPI function, resulting in WM_PAINT event put into window message loop. Method can be called from non-window thread, and system will also automatically aggregate multiple events into single one.)#"  , py::arg("theDisp")=static_cast<const opencascade::handle<Aspect_DisplayConnection> &>(NULL))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (WNT_Window::*)() const) static_cast<const opencascade::handle<Standard_Type> & (WNT_Window::*)() const>(&WNT_Window::DynamicType),
             R"#(None)#" )
        .def("DoMapping",
             (Standard_Boolean (WNT_Window::*)() const) static_cast<Standard_Boolean (WNT_Window::*)() const>(&WNT_Window::DoMapping),
             R"#(Apply the mapping change to the window <me> and returns TRUE if the window is mapped at screen.)#" )
        .def("HWindow",
             (Aspect_Handle (WNT_Window::*)() const) static_cast<Aspect_Handle (WNT_Window::*)() const>(&WNT_Window::HWindow),
             R"#(Returns the Windows NT handle of the created window <me>.)#" )
        .def("HParentWindow",
             (Aspect_Handle (WNT_Window::*)() const) static_cast<Aspect_Handle (WNT_Window::*)() const>(&WNT_Window::HParentWindow),
             R"#(Returns the Windows NT handle parent of the created window <me>.)#" )
        .def("NativeHandle",
             (Aspect_Drawable (WNT_Window::*)() const) static_cast<Aspect_Drawable (WNT_Window::*)() const>(&WNT_Window::NativeHandle),
             R"#(Returns native Window handle (HWND))#" )
        .def("NativeParentHandle",
             (Aspect_Drawable (WNT_Window::*)() const) static_cast<Aspect_Drawable (WNT_Window::*)() const>(&WNT_Window::NativeParentHandle),
             R"#(Returns parent of native Window handle (HWND on Windows, Window with Xlib, and so on))#" )
    // methods using call by reference i.s.o. return
        .def("Position",
             []( WNT_Window &self   ){ Standard_Integer  X1; Standard_Integer  Y1; Standard_Integer  X2; Standard_Integer  Y2; self.Position(X1,Y1,X2,Y2); return std::make_tuple(X1,Y1,X2,Y2); },
             R"#(Returns The Window POSITION in PIXEL)#" )
        .def("Size",
             []( WNT_Window &self   ){ Standard_Integer  Width; Standard_Integer  Height; self.Size(Width,Height); return std::make_tuple(Width,Height); },
             R"#(Returns The Window SIZE in PIXEL)#" )
    // static methods
        .def_static("VirtualKeyFromNative_s",
                    (Aspect_VKey (*)( Standard_Integer ) ) static_cast<Aspect_VKey (*)( Standard_Integer ) >(&WNT_Window::VirtualKeyFromNative),
                    R"#(Convert WInAPI virtual key (VK_ enumeration) into Aspect_VKey.)#"  , py::arg("theKey"))
        .def_static("MouseKeyFlagsFromEvent_s",
                    (Aspect_VKeyFlags (*)( WPARAM ) ) static_cast<Aspect_VKeyFlags (*)( WPARAM ) >(&WNT_Window::MouseKeyFlagsFromEvent),
                    R"#(Convert WPARAM from mouse event to key flags.)#"  , py::arg("theKeys"))
        .def_static("MouseButtonsFromEvent_s",
                    (Aspect_VKeyMouse (*)( WPARAM ) ) static_cast<Aspect_VKeyMouse (*)( WPARAM ) >(&WNT_Window::MouseButtonsFromEvent),
                    R"#(Convert WPARAM from mouse event to mouse buttons bitmask.)#"  , py::arg("theKeys"))
        .def_static("MouseKeyFlagsAsync_s",
                    (Aspect_VKeyFlags (*)() ) static_cast<Aspect_VKeyFlags (*)() >(&WNT_Window::MouseKeyFlagsAsync),
                    R"#(Use GetAsyncKeyState() to fetch actual mouse key flags regardless of event loop.)#" )
        .def_static("MouseButtonsAsync_s",
                    (Aspect_VKeyMouse (*)() ) static_cast<Aspect_VKeyMouse (*)() >(&WNT_Window::MouseButtonsAsync),
                    R"#(Use GetAsyncKeyState() to fetch actual mouse buttons state regardless of event loop.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&WNT_Window::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&WNT_Window::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\WNT_Window.hxx
// ./opencascade\WNT_WClass.hxx
// ./opencascade\WNT_Dword.hxx
// ./opencascade\WNT_ClassDefinitionError.hxx
// ./opencascade\WNT_WindowPtr.hxx
// ./opencascade\WNT_OrientationType.hxx

// Additional functions

// operators

// register typdefs


// exceptions
register_occ_exception<WNT_ClassDefinitionError>(m, "WNT_ClassDefinitionError");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
