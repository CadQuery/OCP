
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>

// module includes
#include <CPnts_AbscissaPoint.hxx>
#include <CPnts_MyGaussFunction.hxx>
#include <CPnts_MyRootFunction.hxx>
#include <CPnts_RealFunction.hxx>
#include <CPnts_UniformDeflection.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_CPnts_enums(py::module &main_module) {


py::module m = main_module.def_submodule("CPnts", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<CPnts_AbscissaPoint , shared_ptr<CPnts_AbscissaPoint> >(m,"CPnts_AbscissaPoint",R"#(the algorithm computes a point on a curve at a given distance from another point on the curve)#");
    py::class_<CPnts_MyGaussFunction , shared_ptr<CPnts_MyGaussFunction> , math_Function>(m,"CPnts_MyGaussFunction",R"#(for implementation, compute values for Gauss)#");
    py::class_<CPnts_MyRootFunction , shared_ptr<CPnts_MyRootFunction> , math_FunctionWithDerivative>(m,"CPnts_MyRootFunction",R"#(Implements a function for the Newton algorithm to find the solution of Integral(F) = L (compute Length and Derivative of the curve for Newton))#");
    py::class_<CPnts_UniformDeflection , shared_ptr<CPnts_UniformDeflection> >(m,"CPnts_UniformDeflection",R"#(This class defines an algorithm to create a set of points (with a given chordal deviation) at the positions of constant deflection of a given parametrized curve or a trimmed circle. The continuity of the curve must be at least C2.)#");

};

// user-defined post-inclusion per module

// user-defined post
