
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Lin.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <gp_Lin.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_HInter.hxx>
#include <Bnd_Box.hxx>

// module includes
#include <IntCurvesFace_Intersector.hxx>
#include <IntCurvesFace_ShapeIntersector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntCurvesFace_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntCurvesFace", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<IntCurvesFace_Intersector , shared_ptr<IntCurvesFace_Intersector> >(m,"IntCurvesFace_Intersector",R"#(None)#");
    py::class_<IntCurvesFace_ShapeIntersector , shared_ptr<IntCurvesFace_ShapeIntersector> >(m,"IntCurvesFace_ShapeIntersector",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
