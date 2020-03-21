
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
#include <StdFail_NotDone.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <Geom2dAPI_ExtremaCurveCurve.hxx>
#include <Geom2dAPI_InterCurveCurve.hxx>
#include <Geom2dAPI_Interpolate.hxx>
#include <Geom2dAPI_PointsToBSpline.hxx>
#include <Geom2dAPI_ProjectPointOnCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dAPI_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Geom2dAPI", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<Geom2dAPI_ExtremaCurveCurve , shared_ptr<Geom2dAPI_ExtremaCurveCurve> >(m,"Geom2dAPI_ExtremaCurveCurve",R"#(Describes functions for computing all the extrema between two 2D curves. An ExtremaCurveCurve algorithm minimizes or maximizes the distance between a point on the first curve and a point on the second curve. Thus, it computes the start point and end point of perpendiculars common to the two curves (an intersection point is not an extremum except where the two curves are tangential at this point). Solutions consist of pairs of points, and an extremum is considered to be a segment joining the two points of a solution. An ExtremaCurveCurve object provides a framework for: - defining the construction of the extrema, - implementing the construction algorithm, and - consulting the results. Warning In some cases, the nearest points between two curves do not correspond to one of the computed extrema. Instead, they may be given by: - a limit point of one curve and one of the following: - its orthogonal projection on the other curve, - a limit point of the other curve; or - an intersection point between the two curves.)#");
    py::class_<Geom2dAPI_InterCurveCurve , shared_ptr<Geom2dAPI_InterCurveCurve> >(m,"Geom2dAPI_InterCurveCurve",R"#(This class implements methods for computing - the intersections between two 2D curves, - the self-intersections of a 2D curve. Using the InterCurveCurve algorithm allows to get the following results: - intersection points in the case of cross intersections, - intersection segments in the case of tangential intersections, - nothing in the case of no intersections.)#");
    py::class_<Geom2dAPI_Interpolate , shared_ptr<Geom2dAPI_Interpolate> >(m,"Geom2dAPI_Interpolate",R"#(This class is used to interpolate a BsplineCurve passing through an array of points, with a C2 Continuity if tangency is not requested at the point. If tangency is requested at the point the continuity will be C1. If Perodicity is requested the curve will be closed and the junction will be the first point given. The curve will than be only C1 The curve is defined by a table of points through which it passes, and if required by a parallel table of reals which gives the value of the parameter of each point through which the resulting BSpline curve passes, and by vectors tangential to these points. An Interpolate object provides a framework for: defining the constraints of the BSpline curve, - implementing the interpolation algorithm, and consulting the results.)#");
    py::class_<Geom2dAPI_PointsToBSpline , shared_ptr<Geom2dAPI_PointsToBSpline> >(m,"Geom2dAPI_PointsToBSpline",R"#(This class is used to approximate a BsplineCurve passing through an array of points, with a given Continuity. Describes functions for building a 2D BSpline curve which approximates a set of points. A PointsToBSpline object provides a framework for: - defining the data of the BSpline curve to be built, - implementing the approximation algorithm, and - consulting the results)#");
    py::class_<Geom2dAPI_ProjectPointOnCurve , shared_ptr<Geom2dAPI_ProjectPointOnCurve> >(m,"Geom2dAPI_ProjectPointOnCurve",R"#(This class implements methods for computing all the orthogonal projections of a 2D point onto a 2D curve.)#");

};

// user-defined post-inclusion per module

// user-defined post
