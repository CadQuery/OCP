
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Circ.hxx>

// module includes
#include <ElSLib.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ElSLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ElSLib", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<ElSLib , shared_ptr<ElSLib> >(m,"ElSLib",R"#(Provides functions for basic geometric computation on elementary surfaces. This includes: - calculation of a point or derived vector on a surface where the surface is provided by the gp package, or defined in canonical form (as in the gp package), and the point is defined with a parameter, - evaluation of the parameters corresponding to a point on an elementary surface from gp, - calculation of isoparametric curves on an elementary surface defined in canonical form (as in the gp package). Notes: - ElSLib stands for Elementary Surfaces Library. - If the surfaces provided by the gp package are not explicitly parameterized, they still have an implicit parameterization, similar to that which they infer on the equivalent Geom surfaces. Note: ElSLib stands for Elementary Surfaces Library.)#");

};

// user-defined post-inclusion per module

// user-defined post
