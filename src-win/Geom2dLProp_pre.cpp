
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
#include <Geom2d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_NotDefined.hxx>
#include <Geom2dLProp_Curve2dTool.hxx>
#include <Geom2d_Curve.hxx>
#include <LProp_CurAndInf.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <Geom2dLProp_CLProps2d.hxx>
#include <Geom2dLProp_CurAndInf2d.hxx>
#include <Geom2dLProp_Curve2dTool.hxx>
#include <Geom2dLProp_FuncCurExt.hxx>
#include <Geom2dLProp_FuncCurNul.hxx>
#include <Geom2dLProp_NumericCurInf2d.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dLProp_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Geom2dLProp", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<Geom2dLProp_CLProps2d , shared_ptr<Geom2dLProp_CLProps2d> >(m,"Geom2dLProp_CLProps2d",R"#(None)#");
    py::class_<Geom2dLProp_CurAndInf2d , shared_ptr<Geom2dLProp_CurAndInf2d> , LProp_CurAndInf>(m,"Geom2dLProp_CurAndInf2d",R"#(An algorithm for computing local properties of a curve. These properties include: - the maximum and minimum curvatures - the inflection points. A CurAndInf2d object provides the framework for: - defining the curve to be analyzed - implementing the computation algorithms - consulting the results.)#");
    py::class_<Geom2dLProp_Curve2dTool , shared_ptr<Geom2dLProp_Curve2dTool> >(m,"Geom2dLProp_Curve2dTool",R"#(None)#");
    py::class_<Geom2dLProp_FuncCurExt , shared_ptr<Geom2dLProp_FuncCurExt> , math_FunctionWithDerivative>(m,"Geom2dLProp_FuncCurExt",R"#(Function used to find the extremas of curvature in 2d.)#");
    py::class_<Geom2dLProp_FuncCurNul , shared_ptr<Geom2dLProp_FuncCurNul> , math_FunctionWithDerivative>(m,"Geom2dLProp_FuncCurNul",R"#(Function used to find the inflections in 2d.)#");
    py::class_<Geom2dLProp_NumericCurInf2d , shared_ptr<Geom2dLProp_NumericCurInf2d> >(m,"Geom2dLProp_NumericCurInf2d",R"#(Computes the locals extremas of curvature and the inflections of a bounded curve in 2d.)#");

};

// user-defined post-inclusion per module

// user-defined post
