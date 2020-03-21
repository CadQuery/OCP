
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Aspect_WindowDefinitionError.hxx>
#include <Aspect_WindowError.hxx>

// module includes
#include <Cocoa_LocalPool.hxx>
#include <Cocoa_Window.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Aspect_DisplayConnection.hxx>
struct NSView {};

// Module definiiton
void register_Cocoa(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Cocoa"));


//Python trampoline classes

// classes


    static_cast<py::class_<Cocoa_LocalPool , shared_ptr<Cocoa_LocalPool> >>(m.attr("Cocoa_LocalPool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Cocoa_Window ,opencascade::handle<Cocoa_Window> , Aspect_Window>>(m.attr("Cocoa_Window"))
    // constructors
    // custom constructors
    // methods
        .def("Map",
             (void (Cocoa_Window::*)() const) static_cast<void (Cocoa_Window::*)() const>(&Cocoa_Window::Map),
             R"#(Opens the window <me>)#" )
        .def("Unmap",
             (void (Cocoa_Window::*)() const) static_cast<void (Cocoa_Window::*)() const>(&Cocoa_Window::Unmap),
             R"#(Closes the window <me>)#" )
        .def("DoResize",
             (Aspect_TypeOfResize (Cocoa_Window::*)() const) static_cast<Aspect_TypeOfResize (Cocoa_Window::*)() const>(&Cocoa_Window::DoResize),
             R"#(Applies the resizing to the window <me>)#" )
        .def("DoMapping",
             (Standard_Boolean (Cocoa_Window::*)() const) static_cast<Standard_Boolean (Cocoa_Window::*)() const>(&Cocoa_Window::DoMapping),
             R"#(Apply the mapping change to the window <me>)#" )
        .def("IsMapped",
             (Standard_Boolean (Cocoa_Window::*)() const) static_cast<Standard_Boolean (Cocoa_Window::*)() const>(&Cocoa_Window::IsMapped),
             R"#(Returns True if the window <me> is opened)#" )
        .def("Ratio",
             (Standard_Real (Cocoa_Window::*)() const) static_cast<Standard_Real (Cocoa_Window::*)() const>(&Cocoa_Window::Ratio),
             R"#(Returns The Window RATIO equal to the physical WIDTH/HEIGHT dimensions)#" )
        .def("HView",
             (NSView * (Cocoa_Window::*)() const) static_cast<NSView * (Cocoa_Window::*)() const>(&Cocoa_Window::HView),
             R"#(Returns associated NSView)#" )
        .def("NativeHandle",
             (Aspect_Drawable (Cocoa_Window::*)() const) static_cast<Aspect_Drawable (Cocoa_Window::*)() const>(&Cocoa_Window::NativeHandle),
             R"#(Returns native Window handle)#" )
        .def("NativeParentHandle",
             (Aspect_Drawable (Cocoa_Window::*)() const) static_cast<Aspect_Drawable (Cocoa_Window::*)() const>(&Cocoa_Window::NativeParentHandle),
             R"#(Returns parent of native Window handle)#" )
        .def("NativeFBConfig",
             (Aspect_FBConfig (Cocoa_Window::*)() const) static_cast<Aspect_FBConfig (Cocoa_Window::*)() const>(&Cocoa_Window::NativeFBConfig),
             R"#(Returns nothing on OS X)#" )
        .def("SetTitle",
             (void (Cocoa_Window::*)( const TCollection_AsciiString & ) ) static_cast<void (Cocoa_Window::*)( const TCollection_AsciiString & ) >(&Cocoa_Window::SetTitle),
             R"#(Sets window title.)#"  , py::arg("theTitle"))
        .def("InvalidateContent",
             (void (Cocoa_Window::*)( const opencascade::handle<Aspect_DisplayConnection> & ) ) static_cast<void (Cocoa_Window::*)( const opencascade::handle<Aspect_DisplayConnection> & ) >(&Cocoa_Window::InvalidateContent),
             R"#(Invalidate entire window content by setting NSView::setNeedsDisplay property. Call will be implicitly redirected to the main thread when called from non-GUI thread.)#"  , py::arg("theDisp")=static_cast<const opencascade::handle<Aspect_DisplayConnection> &>(NULL))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Cocoa_Window::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Cocoa_Window::*)() const>(&Cocoa_Window::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Position",
             []( Cocoa_Window &self   ){ Standard_Integer  X1; Standard_Integer  Y1; Standard_Integer  X2; Standard_Integer  Y2; self.Position(X1,Y1,X2,Y2); return std::make_tuple(X1,Y1,X2,Y2); },
             R"#(Returns The Window POSITION in PIXEL)#" )
        .def("Size",
             []( Cocoa_Window &self   ){ Standard_Integer  theWidth; Standard_Integer  theHeight; self.Size(theWidth,theHeight); return std::make_tuple(theWidth,theHeight); },
             R"#(Returns The Window SIZE in PIXEL)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Cocoa_Window::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Cocoa_LocalPool.hxx
// ./opencascade/Cocoa_Window.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
