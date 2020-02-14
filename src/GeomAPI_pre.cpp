
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
#include <gp_Pln.hxx>
#include <GeomAPI_ProjectPointOnCurve.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>
#include <GeomAPI_ExtremaCurveCurve.hxx>
#include <GeomAPI_ExtremaCurveSurface.hxx>
#include <GeomAPI_ExtremaSurfaceSurface.hxx>
#include <GeomAPI_PointsToBSpline.hxx>
#include <GeomAPI_PointsToBSplineSurface.hxx>
#include <GeomAPI_Interpolate.hxx>
#include <GeomAPI_IntSS.hxx>
#include <GeomAPI_IntCS.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <GeomAPI.hxx>
#include <GeomAPI_ExtremaCurveCurve.hxx>
#include <GeomAPI_ExtremaCurveSurface.hxx>
#include <GeomAPI_ExtremaSurfaceSurface.hxx>
#include <GeomAPI_IntCS.hxx>
#include <GeomAPI_Interpolate.hxx>
#include <GeomAPI_IntSS.hxx>
#include <GeomAPI_PointsToBSpline.hxx>
#include <GeomAPI_PointsToBSplineSurface.hxx>
#include <GeomAPI_ProjectPointOnCurve.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomAPI_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomAPI", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GeomAPI , shared_ptr<GeomAPI>  >(m,"GeomAPI",R"#(The GeomAPI package provides an Application Programming Interface for the Geometry.)#");
    py::class_<GeomAPI_ExtremaCurveCurve , shared_ptr<GeomAPI_ExtremaCurveCurve>  >(m,"GeomAPI_ExtremaCurveCurve",R"#(Describes functions for computing all the extrema between two 3D curves. An ExtremaCurveCurve algorithm minimizes or maximizes the distance between a point on the first curve and a point on the second curve. Thus, it computes start and end points of perpendiculars common to the two curves (an intersection point is not an extremum unless the two curves are tangential at this point). Solutions consist of pairs of points, and an extremum is considered to be a segment joining the two points of a solution. An ExtremaCurveCurve object provides a framework for: - defining the construction of the extrema, - implementing the construction algorithm, and - consulting the results. Warning In some cases, the nearest points between two curves do not correspond to one of the computed extrema. Instead, they may be given by: - a limit point of one curve and one of the following: - its orthogonal projection on the other curve, - a limit point of the other curve; or - an intersection point between the two curves.)#");
    py::class_<GeomAPI_ExtremaCurveSurface , shared_ptr<GeomAPI_ExtremaCurveSurface>  >(m,"GeomAPI_ExtremaCurveSurface",R"#(Describes functions for computing all the extrema between a curve and a surface. An ExtremaCurveSurface algorithm minimizes or maximizes the distance between a point on the curve and a point on the surface. Thus, it computes start and end points of perpendiculars common to the curve and the surface (an intersection point is not an extremum except where the curve and the surface are tangential at this point). Solutions consist of pairs of points, and an extremum is considered to be a segment joining the two points of a solution. An ExtremaCurveSurface object provides a framework for: - defining the construction of the extrema, - implementing the construction algorithm, and - consulting the results. Warning In some cases, the nearest points between a curve and a surface do not correspond to one of the computed extrema. Instead, they may be given by: - a point of a bounding curve of the surface and one of the following: - its orthogonal projection on the curve, - a limit point of the curve; or - a limit point of the curve and its projection on the surface; or - an intersection point between the curve and the surface.)#");
    py::class_<GeomAPI_ExtremaSurfaceSurface , shared_ptr<GeomAPI_ExtremaSurfaceSurface>  >(m,"GeomAPI_ExtremaSurfaceSurface",R"#(Describes functions for computing all the extrema between two surfaces. An ExtremaSurfaceSurface algorithm minimizes or maximizes the distance between a point on the first surface and a point on the second surface. Results are start and end points of perpendiculars common to the two surfaces. Solutions consist of pairs of points, and an extremum is considered to be a segment joining the two points of a solution. An ExtremaSurfaceSurface object provides a framework for: - defining the construction of the extrema, - implementing the construction algorithm, and - consulting the results. Warning In some cases, the nearest points between the two surfaces do not correspond to one of the computed extrema. Instead, they may be given by: - a point of a bounding curve of one surface and one of the following: - its orthogonal projection on the other surface, - a point of a bounding curve of the other surface; or - any point on intersection curves between the two surfaces.)#");
    py::class_<GeomAPI_IntCS , shared_ptr<GeomAPI_IntCS>  >(m,"GeomAPI_IntCS",R"#(This class implements methods for computing intersection points and segments between a)#");
    py::class_<GeomAPI_IntSS , shared_ptr<GeomAPI_IntSS>  >(m,"GeomAPI_IntSS",R"#(This class implements methods for computing the intersection curves between two surfaces. The result is curves from Geom. The "domain" used for a surface is the natural parametric domain unless the surface is a RectangularTrimmedSurface from Geom.)#");
    py::class_<GeomAPI_Interpolate , shared_ptr<GeomAPI_Interpolate>  >(m,"GeomAPI_Interpolate",R"#(This class is used to interpolate a BsplineCurve passing through an array of points, with a C2 Continuity if tangency is not requested at the point. If tangency is requested at the point the continuity will be C1. If Perodicity is requested the curve will be closed and the junction will be the first point given. The curve will than be only C1 Describes functions for building a constrained 3D BSpline curve. The curve is defined by a table of points through which it passes, and if required: - by a parallel table of reals which gives the value of the parameter of each point through which the resulting BSpline curve passes, and - by vectors tangential to these points. An Interpolate object provides a framework for: - defining the constraints of the BSpline curve, - implementing the interpolation algorithm, and - consulting the results.)#");
    py::class_<GeomAPI_PointsToBSpline , shared_ptr<GeomAPI_PointsToBSpline>  >(m,"GeomAPI_PointsToBSpline",R"#(This class is used to approximate a BsplineCurve passing through an array of points, with a given Continuity. Describes functions for building a 3D BSpline curve which approximates a set of points. A PointsToBSpline object provides a framework for: - defining the data of the BSpline curve to be built, - implementing the approximation algorithm, and consulting the results.)#");
    py::class_<GeomAPI_PointsToBSplineSurface , shared_ptr<GeomAPI_PointsToBSplineSurface>  >(m,"GeomAPI_PointsToBSplineSurface",R"#(This class is used to approximate or interpolate a BSplineSurface passing through an Array2 of points, with a given continuity. Describes functions for building a BSpline surface which approximates or interpolates a set of points. A PointsToBSplineSurface object provides a framework for: - defining the data of the BSpline surface to be built, - implementing the approximation algorithm or the interpolation algorithm, and consulting the results. In fact, class contains 3 algorithms, 2 for approximation and 1 for interpolation. First approximation algorithm is based on usual least square criterium: minimization of square distance between samplimg points and result surface. Second approximation algorithm uses least square criterium and additional minimization of some local characteristic of surface (first, second and third partial derivative), which allows managing shape of surface. Interpolation algorithm produces surface, which passes through sampling points.)#");
    py::class_<GeomAPI_ProjectPointOnCurve , shared_ptr<GeomAPI_ProjectPointOnCurve>  >(m,"GeomAPI_ProjectPointOnCurve",R"#(This class implements methods for computing all the orthogonal projections of a 3D point onto a 3D curve.)#");
    py::class_<GeomAPI_ProjectPointOnSurf , shared_ptr<GeomAPI_ProjectPointOnSurf>  >(m,"GeomAPI_ProjectPointOnSurf",R"#(This class implements methods for computing all the orthogonal projections of a point onto a surface.)#");

};

// user-defined post-inclusion per module

// user-defined post
