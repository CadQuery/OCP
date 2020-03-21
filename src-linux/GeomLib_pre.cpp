
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_Curve.hxx>
#include <gp_Ax2.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_GTrsf2d.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_Surface.hxx>
#include <GeomLib_MakeCurvefromApprox.hxx>
#include <GeomLib_Interpolate.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>
#include <GeomLib_CheckBSplineCurve.hxx>
#include <GeomLib_Check2dBSplineCurve.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <GeomLib_Tool.hxx>
#include <GeomLib_PolyFunc.hxx>
#include <GeomLib_LogSample.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_Curve.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_OutOfRange.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>

// module includes
#include <GeomLib.hxx>
#include <GeomLib_Array1OfMat.hxx>
#include <GeomLib_Check2dBSplineCurve.hxx>
#include <GeomLib_CheckBSplineCurve.hxx>
#include <GeomLib_CheckCurveOnSurface.hxx>
#include <GeomLib_DenominatorMultiplier.hxx>
#include <GeomLib_DenominatorMultiplierPtr.hxx>
#include <GeomLib_Interpolate.hxx>
#include <GeomLib_InterpolationErrors.hxx>
#include <GeomLib_IsPlanarSurface.hxx>
#include <GeomLib_LogSample.hxx>
#include <GeomLib_MakeCurvefromApprox.hxx>
#include <GeomLib_PolyFunc.hxx>
#include <GeomLib_Tool.hxx>

// template related includes
// ./opencascade/GeomLib_Array1OfMat.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomLib", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<GeomLib_InterpolationErrors>(m, "GeomLib_InterpolationErrors",R"#(in case the interpolation errors out, this tells what happened)#")
        .value("GeomLib_NoError",GeomLib_InterpolationErrors::GeomLib_NoError)
        .value("GeomLib_NotEnoughtPoints",GeomLib_InterpolationErrors::GeomLib_NotEnoughtPoints)
        .value("GeomLib_DegreeSmallerThan3",GeomLib_InterpolationErrors::GeomLib_DegreeSmallerThan3)
        .value("GeomLib_InversionProblem",GeomLib_InterpolationErrors::GeomLib_InversionProblem).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<gp_Mat>(m,"GeomLib_Array1OfMat");

// classes forward declarations only
    py::class_<GeomLib , shared_ptr<GeomLib> >(m,"GeomLib",R"#(Geom Library. This package provides an implementation of functions for basic computation on geometric entity from packages Geom and Geom2d.)#");
    py::class_<GeomLib_Check2dBSplineCurve , shared_ptr<GeomLib_Check2dBSplineCurve> >(m,"GeomLib_Check2dBSplineCurve",R"#(Checks for the end tangents : wether or not those are reversed)#");
    py::class_<GeomLib_CheckBSplineCurve , shared_ptr<GeomLib_CheckBSplineCurve> >(m,"GeomLib_CheckBSplineCurve",R"#(Checks for the end tangents : wether or not those are reversed regarding the third or n-3rd control)#");
    py::class_<GeomLib_CheckCurveOnSurface , shared_ptr<GeomLib_CheckCurveOnSurface> >(m,"GeomLib_CheckCurveOnSurface",R"#(Computes the max distance between 3D-curve and 2D-curve in some surface.)#");
    py::class_<GeomLib_DenominatorMultiplier , shared_ptr<GeomLib_DenominatorMultiplier> >(m,"GeomLib_DenominatorMultiplier",R"#(this defines an evaluator for a function of 2 variables that will be used by CancelDenominatorDerivative in one direction.)#");
    py::class_<GeomLib_Interpolate , shared_ptr<GeomLib_Interpolate> >(m,"GeomLib_Interpolate",R"#(this class is used to construct a BSpline curve by interpolation of points at given parameters The continuity of the curve is degree - 1 and the method used when boundary condition are not given is to use odd degrees and null the derivatives on both sides from degree -1 down to (degree+1) / 2 When even degree is given the returned curve is of degree - 1 so that the degree of the curve is odd)#");
    py::class_<GeomLib_IsPlanarSurface , shared_ptr<GeomLib_IsPlanarSurface> >(m,"GeomLib_IsPlanarSurface",R"#(Find if a surface is a planar surface.)#");
    py::class_<GeomLib_LogSample , shared_ptr<GeomLib_LogSample> , math_FunctionSample>(m,"GeomLib_LogSample",R"#(None)#");
    py::class_<GeomLib_MakeCurvefromApprox , shared_ptr<GeomLib_MakeCurvefromApprox> >(m,"GeomLib_MakeCurvefromApprox",R"#(this class is used to construct the BSpline curve from an Approximation ( ApproxAFunction from AdvApprox).)#");
    py::class_<GeomLib_PolyFunc , shared_ptr<GeomLib_PolyFunc> , math_FunctionWithDerivative>(m,"GeomLib_PolyFunc",R"#(Polynomial Function)#");
    py::class_<GeomLib_Tool , shared_ptr<GeomLib_Tool> >(m,"GeomLib_Tool",R"#(Provides various methods with Geom2d and Geom curves and surfaces. The methods of this class compute the parameter(s) of a given point on a curve or a surface. To get the valid result the point must be located rather close to the curve (surface) or at least to allow getting unambiguous result (do not put point at center of circle...), but choice of "trust" distance between curve/surface and point is responcibility of user (parameter MaxDist). Return FALSE if the point is beyond the MaxDist limit or if computation fails.)#");

};

// user-defined post-inclusion per module

// user-defined post
