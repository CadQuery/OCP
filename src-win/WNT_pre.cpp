
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
void register_WNT_enums(py::module &main_module) {


py::module m = main_module.def_submodule("WNT", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<WNT_OrientationType>(m, "WNT_OrientationType",R"#(Portrait/landscape orientation.)#")
        .value("WNT_OT_PORTRAIT",WNT_OrientationType::WNT_OT_PORTRAIT)
        .value("WNT_OT_LANDSCAPE",WNT_OrientationType::WNT_OT_LANDSCAPE).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<WNT_WClass ,opencascade::handle<WNT_WClass> , Standard_Transient>(m,"WNT_WClass",R"#(This class defines a Windows NT window class. A window in Windows NT is always created based on a window class. The window class identifies the window procedure that processes messages to the window. Each window class has unique name ( character string ). More than one window can be created based on a single window class. For example, all button windows in Windows NT are created based on the same window class. The window class defines the window procedure and some other characteristics ( background, mouse cursor shape etc. ) of the windows that are created based on that class. When we create a window, we define additional characteristics of the window that are unique to that window. So, we have to create and register window class before creation of any window. Of course, it's possible to create a new window class for each window inside the Window class and do not use the WClass at all. We implemented this class for sake of flexibility of event processing.This class defines a Windows NT window class. A window in Windows NT is always created based on a window class. The window class identifies the window procedure that processes messages to the window. Each window class has unique name ( character string ). More than one window can be created based on a single window class. For example, all button windows in Windows NT are created based on the same window class. The window class defines the window procedure and some other characteristics ( background, mouse cursor shape etc. ) of the windows that are created based on that class. When we create a window, we define additional characteristics of the window that are unique to that window. So, we have to create and register window class before creation of any window. Of course, it's possible to create a new window class for each window inside the Window class and do not use the WClass at all. We implemented this class for sake of flexibility of event processing.)#");
    py::class_<WNT_Window ,opencascade::handle<WNT_Window> , Aspect_Window>(m,"WNT_Window",R"#(This class defines Windows NT windowThis class defines Windows NT window)#");

};

// user-defined post-inclusion per module

// user-defined post
