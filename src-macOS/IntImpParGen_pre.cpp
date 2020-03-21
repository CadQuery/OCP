
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Vec2d.hxx>
#include <IntRes2d_Transition.hxx>
#include <IntRes2d_Domain.hxx>
#include <gp_Pnt2d.hxx>
#include <IntImpParGen_ImpTool.hxx>

// module includes
#include <IntImpParGen.hxx>
#include <IntImpParGen_ImpTool.hxx>
#include <IntImpParGen_Tool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntImpParGen_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntImpParGen", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<IntImpParGen , shared_ptr<IntImpParGen> >(m,"IntImpParGen",R"#(Gives a generic algorithm to intersect Implicit Curves and Bounded Parametric Curves.)#");
    py::class_<IntImpParGen_ImpTool , shared_ptr<IntImpParGen_ImpTool> >(m,"IntImpParGen_ImpTool",R"#(Template class for an implicit curve.)#");

};

// user-defined post-inclusion per module

// user-defined post
