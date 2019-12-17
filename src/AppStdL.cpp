
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <AppStdL_Application.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppStdL(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AppStdL"));


//Python trampoline classes

// classes

    register_default_constructor<AppStdL_Application ,opencascade::handle<AppStdL_Application>>(m,"AppStdL_Application");

    static_cast<py::class_<AppStdL_Application ,opencascade::handle<AppStdL_Application>  , TDocStd_Application >>(m.attr("AppStdL_Application"))
        .def("ResourcesName",
             (Standard_CString (AppStdL_Application::*)() ) static_cast<Standard_CString (AppStdL_Application::*)() >(&AppStdL_Application::ResourcesName),
             R"#(returns the file name which contains application resources)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppStdL_Application::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppStdL_Application::*)() const>(&AppStdL_Application::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppStdL_Application::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AppStdL_Application::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/AppStdL_Application.hxx

// operators

// register typdefs
// ./opencascade/AppStdL_Application.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
