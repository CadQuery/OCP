
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>

// module includes
#include <GCPnts_AbscissaPoint.hxx>
#include <GCPnts_AbscissaType.hxx>
#include <GCPnts_DeflectionType.hxx>
#include <GCPnts_DistFunction.hxx>
#include <GCPnts_DistFunction2d.hxx>
#include <GCPnts_QuasiUniformAbscissa.hxx>
#include <GCPnts_QuasiUniformDeflection.hxx>
#include <GCPnts_TangentialDeflection.hxx>
#include <GCPnts_UniformAbscissa.hxx>
#include <GCPnts_UniformDeflection.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GCPnts_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GCPnts", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<GCPnts_AbscissaType>(m, "GCPnts_AbscissaType",R"#(None)#")
        .value("GCPnts_LengthParametrized",GCPnts_AbscissaType::GCPnts_LengthParametrized)
        .value("GCPnts_Parametrized",GCPnts_AbscissaType::GCPnts_Parametrized)
        .value("GCPnts_AbsComposite",GCPnts_AbscissaType::GCPnts_AbsComposite).export_values();
    py::enum_<GCPnts_DeflectionType>(m, "GCPnts_DeflectionType",R"#(None)#")
        .value("GCPnts_Linear",GCPnts_DeflectionType::GCPnts_Linear)
        .value("GCPnts_Circular",GCPnts_DeflectionType::GCPnts_Circular)
        .value("GCPnts_Curved",GCPnts_DeflectionType::GCPnts_Curved)
        .value("GCPnts_DefComposite",GCPnts_DeflectionType::GCPnts_DefComposite).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GCPnts_AbscissaPoint , shared_ptr<GCPnts_AbscissaPoint> >(m,"GCPnts_AbscissaPoint",R"#(Provides an algorithm to compute a point on a curve situated at a given distance from another point on the curve, the distance being measured along the curve (curvilinear abscissa on the curve). This algorithm is also used to compute the length of a curve. An AbscissaPoint object provides a framework for: - defining the point to compute - implementing the construction algorithm - consulting the result.)#");
    py::class_<GCPnts_DistFunction , shared_ptr<GCPnts_DistFunction> , math_Function>(m,"GCPnts_DistFunction",R"#(Class to define function, which calculates square distance between point on curve C(u), U1 <= u <= U2 and line passing through points C(U1) and C(U2) This function is used in any minimisation algorithm to define maximal deviation between curve and line, which required one variable function without derivative (for ex. math_BrentMinimum))#");
    py::class_<GCPnts_DistFunction2d , shared_ptr<GCPnts_DistFunction2d> , math_Function>(m,"GCPnts_DistFunction2d",R"#(Class to define function, which calculates square distance between point on curve C(u), U1 <= u <= U2 and line passing through points C(U1) and C(U2) This function is used in any minimisation algorithm to define maximal deviation between curve and line, which required one variable function without derivative (for ex. math_BrentMinimum))#");
    py::class_<GCPnts_DistFunction2dMV , shared_ptr<GCPnts_DistFunction2dMV> , math_MultipleVarFunction>(m,"GCPnts_DistFunction2dMV",R"#(The same as class GCPnts_DistFunction2d, but it can be used in minimization algorithms that requires multi variable function)#");
    py::class_<GCPnts_DistFunctionMV , shared_ptr<GCPnts_DistFunctionMV> , math_MultipleVarFunction>(m,"GCPnts_DistFunctionMV",R"#(The same as class GCPnts_DistFunction, but it can be used in minimization algorithms that requires multi variable function)#");
    py::class_<GCPnts_QuasiUniformAbscissa , shared_ptr<GCPnts_QuasiUniformAbscissa> >(m,"GCPnts_QuasiUniformAbscissa",R"#(This class provides an algorithm to compute a uniform abscissa distribution of points on a curve, i.e. a sequence of equidistant points. The distance between two consecutive points is measured along the curve. The distribution is defined: - either by the curvilinear distance between two consecutive points - or by a number of points.)#");
    py::class_<GCPnts_QuasiUniformDeflection , shared_ptr<GCPnts_QuasiUniformDeflection> >(m,"GCPnts_QuasiUniformDeflection",R"#(This class computes a distribution of points on a curve. The points may respect the deflection. The algorithm is not based on the classical prediction (with second derivative of curve), but either on the evaluation of the distance between the mid point and the point of mid parameter of the two points, or the distance between the mid point and the point at parameter 0.5 on the cubic interpolation of the two points and their tangents. Note: this algorithm is faster than a GCPnts_UniformDeflection algorithm, and is able to work with non-"C2" continuous curves. However, it generates more points in the distribution.)#");
    py::class_<GCPnts_TangentialDeflection , shared_ptr<GCPnts_TangentialDeflection> >(m,"GCPnts_TangentialDeflection",R"#(Computes a set of points on a curve from package Adaptor3d such as between two successive points P1(u1)and P2(u2) :)#");
    py::class_<GCPnts_UniformAbscissa , shared_ptr<GCPnts_UniformAbscissa> >(m,"GCPnts_UniformAbscissa",R"#(This class allows to compute a uniform distribution of points on a curve (ie the points will all be equally distant).)#");
    py::class_<GCPnts_UniformDeflection , shared_ptr<GCPnts_UniformDeflection> >(m,"GCPnts_UniformDeflection",R"#(Provides an algorithm to compute a distribution of points on a 'C2' continuous curve. The algorithm respects a criterion of maximum deflection between the curve and the polygon that results from the computed points. Note: This algorithm is relatively time consuming. A GCPnts_QuasiUniformDeflection algorithm is quicker; it can also work with non-'C2' continuous curves, but it generates more points in the distribution.)#");

};

// user-defined post-inclusion per module

// user-defined post
