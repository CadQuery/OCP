
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <AppStd_Application.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppStd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AppStd"));


//Python trampoline classes

// classes

    register_default_constructor<AppStd_Application ,opencascade::handle<AppStd_Application>>(m,"AppStd_Application");

    static_cast<py::class_<AppStd_Application ,opencascade::handle<AppStd_Application>  , TDocStd_Application >>(m.attr("AppStd_Application"))
    // methods
        .def("ResourcesName",
             (Standard_CString (AppStd_Application::*)() ) static_cast<Standard_CString (AppStd_Application::*)() >(&AppStd_Application::ResourcesName),
             R"#(returns the file name which contains application resources)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppStd_Application::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppStd_Application::*)() const>(&AppStd_Application::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppStd_Application::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AppStd_Application::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/AppStd_Application.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
