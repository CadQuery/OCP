
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <StdObject_gp_Axes.hxx>
#include <StdObject_gp_Curves.hxx>
#include <StdObject_gp_Surfaces.hxx>
#include <StdObject_gp_Trsfs.hxx>
#include <StdObject_gp_Vectors.hxx>
#include <StdObject_Location.hxx>
#include <StdObject_Shape.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdObject_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StdObject", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<StdObject_Location ,std::unique_ptr<StdObject_Location>  >(m,"StdObject_Location",R"#(None)#");
    py::class_<StdObject_Shape ,std::unique_ptr<StdObject_Shape>  >(m,"StdObject_Shape",R"#(None)#");

// pre-register typdefs
// ./opencascade/StdObject_Location.hxx
// ./opencascade/StdObject_gp_Surfaces.hxx
// ./opencascade/StdObject_gp_Vectors.hxx
// ./opencascade/StdObject_Shape.hxx
// ./opencascade/StdObject_gp_Curves.hxx
// ./opencascade/StdObject_gp_Axes.hxx
// ./opencascade/StdObject_gp_Trsfs.hxx

};

// user-defined post-inclusion per module

// user-defined post
