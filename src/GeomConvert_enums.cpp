
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_BSplineSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Surface.hxx>
#include <GeomConvert_BSplineCurveKnotSplitting.hxx>
#include <GeomConvert_BSplineSurfaceKnotSplitting.hxx>
#include <GeomConvert_BSplineCurveToBezierCurve.hxx>
#include <GeomConvert_CompCurveToBSplineCurve.hxx>
#include <GeomConvert_BSplineSurfaceToBezierSurface.hxx>
#include <GeomConvert_CompBezierSurfacesToBSplineSurface.hxx>
#include <GeomConvert_ApproxSurface.hxx>
#include <GeomConvert_ApproxCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Standard_OutOfRange.hxx>
#include <Geom_Surface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_NotImplemented.hxx>

// module includes
#include <GeomConvert.hxx>
#include <GeomConvert_ApproxCurve.hxx>
#include <GeomConvert_ApproxSurface.hxx>
#include <GeomConvert_BSplineCurveKnotSplitting.hxx>
#include <GeomConvert_BSplineCurveToBezierCurve.hxx>
#include <GeomConvert_BSplineSurfaceKnotSplitting.hxx>
#include <GeomConvert_BSplineSurfaceToBezierSurface.hxx>
#include <GeomConvert_CompBezierSurfacesToBSplineSurface.hxx>
#include <GeomConvert_CompCurveToBSplineCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomConvert_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomConvert", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GeomConvert , shared_ptr<GeomConvert>  >(m,"GeomConvert",R"#(The GeomConvert package provides some global functions as follows - converting classical Geom curves into BSpline curves, - segmenting BSpline curves, particularly at knots values: this function may be used in conjunction with the GeomConvert_BSplineCurveKnotSplitting class to segment a BSpline curve into arcs which comply with required continuity levels, - converting classical Geom surfaces into BSpline surfaces, and - segmenting BSpline surfaces, particularly at knots values: this function may be used in conjunction with the GeomConvert_BSplineSurfaceKnotSplitting class to segment a BSpline surface into patches which comply with required continuity levels. All geometric entities used in this package are bounded.)#");
    py::class_<GeomConvert_ApproxCurve , shared_ptr<GeomConvert_ApproxCurve>  >(m,"GeomConvert_ApproxCurve",R"#(A framework to convert a 3D curve to a 3D BSpline. This is done by approximation to a BSpline curve within a given tolerance.)#");
    py::class_<GeomConvert_ApproxSurface , shared_ptr<GeomConvert_ApproxSurface>  >(m,"GeomConvert_ApproxSurface",R"#(A framework to convert a surface to a BSpline surface. This is done by approximation to a BSpline surface within a given tolerance.)#");
    py::class_<GeomConvert_BSplineCurveKnotSplitting , shared_ptr<GeomConvert_BSplineCurveKnotSplitting>  >(m,"GeomConvert_BSplineCurveKnotSplitting",R"#(An algorithm to determine points at which a BSpline curve should be split in order to obtain arcs of the same continuity. If you require curves with a minimum continuity for your computation, it is useful to know the points between which an arc has a continuity of a given order. The continuity order is given at the construction time. For a BSpline curve, the discontinuities are localized at the knot values. Between two knot values the BSpline is infinitely and continuously differentiable. At a given knot, the continuity is equal to: Degree - Mult, where Degree is the degree of the BSpline curve and Mult is the multiplicity of the knot. It is possible to compute the arcs which correspond to this splitting using the global function SplitBSplineCurve provided by the package GeomConvert. A BSplineCurveKnotSplitting object provides a framework for: - defining the curve to be analyzed and the required degree of continuity, - implementing the computation algorithm, and - consulting the results.)#");
    py::class_<GeomConvert_BSplineCurveToBezierCurve , shared_ptr<GeomConvert_BSplineCurveToBezierCurve>  >(m,"GeomConvert_BSplineCurveToBezierCurve",R"#(An algorithm to convert a BSpline curve into a series of adjacent Bezier curves. A BSplineCurveToBezierCurve object provides a framework for: - defining the BSpline curve to be converted - implementing the construction algorithm, and - consulting the results. References : Generating the Bezier points of B-spline curves and surfaces (Wolfgang Bohm) CAD volume 13 number 6 november 1981)#");
    py::class_<GeomConvert_BSplineSurfaceKnotSplitting , shared_ptr<GeomConvert_BSplineSurfaceKnotSplitting>  >(m,"GeomConvert_BSplineSurfaceKnotSplitting",R"#(An algorithm to determine isoparametric curves along which a BSpline surface should be split in order to obtain patches of the same continuity. The continuity order is given at the construction time. It is possible to compute the surface patches corresponding to the splitting with the method of package SplitBSplineSurface. For a B-spline surface the discontinuities are localised at the knot values. Between two knots values the B-spline is infinitely continuously differentiable. For each parametric direction at a knot of range index the continuity in this direction is equal to : Degree - Mult (Index) where Degree is the degree of the basis B-spline functions and Mult the multiplicity of the knot of range Index in the given direction. If for your computation you need to have B-spline surface with a minima of continuity it can be interesting to know between which knot values, a B-spline patch, has a continuity of given order. This algorithm computes the indexes of the knots where you should split the surface, to obtain patches with a constant continuity given at the construction time. If you just want to compute the local derivatives on the surface you don't need to create the BSpline patches, you can use the functions LocalD1, LocalD2, LocalD3, LocalDN of the class BSplineSurface from package Geom.)#");
    py::class_<GeomConvert_BSplineSurfaceToBezierSurface , shared_ptr<GeomConvert_BSplineSurfaceToBezierSurface>  >(m,"GeomConvert_BSplineSurfaceToBezierSurface",R"#(This algorithm converts a B-spline surface into several Bezier surfaces. It uses an algorithm of knot insertion. A BSplineSurfaceToBezierSurface object provides a framework for: - defining the BSpline surface to be converted, - implementing the construction algorithm, and - consulting the results. References : Generating the Bezier points of B-spline curves and surfaces (Wolfgang Bohm) CAD volume 13 number 6 november 1981)#");
    py::class_<GeomConvert_CompBezierSurfacesToBSplineSurface , shared_ptr<GeomConvert_CompBezierSurfacesToBSplineSurface>  >(m,"GeomConvert_CompBezierSurfacesToBSplineSurface",R"#(An algorithm to convert a grid of adjacent non-rational Bezier surfaces (with continuity CM) into a BSpline surface (with continuity CM). A CompBezierSurfacesToBSplineSurface object provides a framework for: - defining the grid of adjacent Bezier surfaces which is to be converted into a BSpline surface, - implementing the computation algorithm, and - consulting the results. Warning Do not attempt to convert rational Bezier surfaces using such an algorithm. Input is array of Bezier patch 1 2 3 4 -> VIndex [1, NbVPatches] -> VDirection ----------------------- 1 | | | | | ----------------------- 2 | | | | | ----------------------- 3 | | | | | ----------------------- UIndex [1, NbUPatches] Udirection)#");
    py::class_<GeomConvert_CompCurveToBSplineCurve , shared_ptr<GeomConvert_CompCurveToBSplineCurve>  >(m,"GeomConvert_CompCurveToBSplineCurve",R"#(Algorithm converts and concat several curve in an BSplineCurve)#");

};

// user-defined post-inclusion per module

// user-defined post
