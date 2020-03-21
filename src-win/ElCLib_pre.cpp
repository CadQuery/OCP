
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

// module includes
#include <ElCLib.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ElCLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ElCLib", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<ElCLib , shared_ptr<ElCLib> >(m,"ElCLib",R"#(Provides functions for basic geometric computations on elementary curves such as conics and lines in 2D and 3D space. This includes: - calculation of a point or derived vector on a 2D or 3D curve where: - the curve is provided by the gp package, or defined in reference form (as in the gp package), and - the point is defined by a parameter, - evaluation of the parameter corresponding to a point on a 2D or 3D curve from gp, - various elementary computations which allow you to position parameterized values within the period of a curve. Notes: - ElCLib stands for Elementary Curves Library. - If the curves provided by the gp package are not explicitly parameterized, they still have an implicit parameterization, analogous to that which they infer for the equivalent Geom or Geom2d curves.)#");

};

// user-defined post-inclusion per module

// user-defined post
