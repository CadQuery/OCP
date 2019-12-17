
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <AppStdL_Application.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppStdL_enums(py::module &main_module) {


py::module m = main_module.def_submodule("AppStdL", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<AppStdL_Application ,opencascade::handle<AppStdL_Application>  , TDocStd_Application >(m,"AppStdL_Application",R"#(Legacy class defining resources name for lite OCAF documentsLegacy class defining resources name for lite OCAF documentsLegacy class defining resources name for lite OCAF documents)#");

// pre-register typdefs
// ./opencascade/AppStdL_Application.hxx

};

// user-defined post-inclusion per module

// user-defined post
