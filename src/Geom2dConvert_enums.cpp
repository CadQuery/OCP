
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2dConvert_BSplineCurveKnotSplitting.hxx>
#include <Geom2dConvert_BSplineCurveToBezierCurve.hxx>
#include <Geom2dConvert_CompCurveToBSplineCurve.hxx>
#include <Geom2dConvert_ApproxCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Geom2d_BSplineCurve.hxx>

// module includes
#include <Geom2dConvert.hxx>
#include <Geom2dConvert_ApproxCurve.hxx>
#include <Geom2dConvert_BSplineCurveKnotSplitting.hxx>
#include <Geom2dConvert_BSplineCurveToBezierCurve.hxx>
#include <Geom2dConvert_CompCurveToBSplineCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dConvert_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Geom2dConvert", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<Geom2dConvert_CompCurveToBSplineCurve ,std::unique_ptr<Geom2dConvert_CompCurveToBSplineCurve>  >(m,"Geom2dConvert_CompCurveToBSplineCurve",R"#(This algorithm converts and concat several curve in an BSplineCurve)#");
    py::class_<Geom2dConvert ,std::unique_ptr<Geom2dConvert>  >(m,"Geom2dConvert",R"#(This package provides an implementation of algorithmes to do the conversion between equivalent geometric entities from package Geom2d. It gives the possibility : . to obtain the B-spline representation of bounded curves. . to split a B-spline curve into several B-spline curves with some constraints of continuity, . to convert a B-spline curve into several Bezier curves or surfaces. All the geometric entities used in this package are bounded. References : . Generating the Bezier Points of B-spline curves and surfaces (Wolfgang Bohm) CAGD volume 13 number 6 november 1981 . On NURBS: A Survey (Leslie Piegl) IEEE Computer Graphics and Application January 1991 . Curve and surface construction using rational B-splines (Leslie Piegl and Wayne Tiller) CAD Volume 19 number 9 november 1987 . A survey of curve and surface methods in CAGD (Wolfgang BOHM) CAGD 1 1984)#");
    py::class_<Geom2dConvert_BSplineCurveToBezierCurve ,std::unique_ptr<Geom2dConvert_BSplineCurveToBezierCurve>  >(m,"Geom2dConvert_BSplineCurveToBezierCurve",R"#(An algorithm to convert a BSpline curve into a series of adjacent Bezier curves. A BSplineCurveToBezierCurve object provides a framework for: - defining the BSpline curve to be converted - implementing the construction algorithm, and - consulting the results. References : Generating the Bezier points of B-spline curves and surfaces (Wolfgang Bohm) CAD volume 13 number 6 november 1981)#");
    py::class_<Geom2dConvert_BSplineCurveKnotSplitting ,std::unique_ptr<Geom2dConvert_BSplineCurveKnotSplitting>  >(m,"Geom2dConvert_BSplineCurveKnotSplitting",R"#(An algorithm to determine points at which a BSpline curve should be split in order to obtain arcs of the same continuity. If you require curves with a minimum continuity for your computation, it is useful to know the points between which an arc has a continuity of a given order. The continuity order is given at the construction time. For a BSpline curve, the discontinuities are localized at the knot values. Between two knot values the BSpline is infinitely and continuously differentiable. At a given knot, the continuity is equal to: Degree - Mult, where Degree is the degree of the BSpline curve and Mult is the multiplicity of the knot. It is possible to compute the arcs which correspond to this splitting using the global function SplitBSplineCurve provided by the package Geom2dConvert. A BSplineCurveKnotSplitting object provides a framework for: - defining the curve to be analysed and the required degree of continuity, - implementing the computation algorithm, and - consulting the results.)#");
    py::class_<Geom2dConvert_ApproxCurve ,std::unique_ptr<Geom2dConvert_ApproxCurve>  >(m,"Geom2dConvert_ApproxCurve",R"#(A framework to convert a 2D curve to a BSpline. This is done by approximation within a given tolerance.)#");

// pre-register typdefs
// ./opencascade/Geom2dConvert_CompCurveToBSplineCurve.hxx
// ./opencascade/Geom2dConvert_BSplineCurveKnotSplitting.hxx
// ./opencascade/Geom2dConvert.hxx
// ./opencascade/Geom2dConvert_ApproxCurve.hxx
// ./opencascade/Geom2dConvert_BSplineCurveToBezierCurve.hxx

};

// user-defined post-inclusion per module

// user-defined post
