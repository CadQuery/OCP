
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepGeom_BoundedSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BoundedSurface.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <StepGeom_ToroidalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StepGeom_Plane.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <Geom_Plane.hxx>
#include <StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <StepGeom_Polyline.hxx>
#include <StdFail_NotDone.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax22d.hxx>
#include <StepGeom_Direction.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>
#include <Geom_Direction.hxx>
#include <Geom2d_Direction.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SweptSurface.hxx>
#include <StepGeom_SphericalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SphericalSurface.hxx>
#include <StepGeom_Line.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Lin2d.hxx>
#include <Geom_Line.hxx>
#include <Geom2d_Line.hxx>
#include <StepGeom_Parabola.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Parabola.hxx>
#include <Geom_Parabola.hxx>
#include <StepGeom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <StepGeom_Conic.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Conic.hxx>
#include <Geom2d_Conic.hxx>
#include <StepGeom_Ellipse.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom2d_Ellipse.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax3.hxx>
#include <gp_Trsf.hxx>
#include <Geom_Axis2Placement.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_ConicalSurface.hxx>
#include <StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2d.hxx>
#include <Geom_Axis1Placement.hxx>
#include <Geom2d_AxisPlacement.hxx>
#include <StepGeom_Circle.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ.hxx>
#include <Geom_Circle.hxx>
#include <Geom2d_Circle.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <StepGeom_Hyperbola.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Hyperbola.hxx>
#include <Geom_Hyperbola.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_ElementarySurface.hxx>
#include <StepGeom_BSplineSurfaceWithKnots.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StepGeom_Vector.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Vec.hxx>
#include <gp_Vec2d.hxx>
#include <Geom_Vector.hxx>
#include <Geom2d_Vector.hxx>
#include <StepGeom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <GeomToStep_MakeAxis1Placement.hxx>
#include <GeomToStep_MakeAxis2Placement2d.hxx>
#include <GeomToStep_MakeAxis2Placement3d.hxx>
#include <GeomToStep_MakeBoundedCurve.hxx>
#include <GeomToStep_MakeBoundedSurface.hxx>
#include <GeomToStep_MakeBSplineCurveWithKnots.hxx>
#include <GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <GeomToStep_MakeBSplineSurfaceWithKnots.hxx>
#include <GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <GeomToStep_MakeCartesianPoint.hxx>
#include <GeomToStep_MakeCircle.hxx>
#include <GeomToStep_MakeConic.hxx>
#include <GeomToStep_MakeConicalSurface.hxx>
#include <GeomToStep_MakeCurve.hxx>
#include <GeomToStep_MakeCylindricalSurface.hxx>
#include <GeomToStep_MakeDirection.hxx>
#include <GeomToStep_MakeElementarySurface.hxx>
#include <GeomToStep_MakeEllipse.hxx>
#include <GeomToStep_MakeHyperbola.hxx>
#include <GeomToStep_MakeLine.hxx>
#include <GeomToStep_MakeParabola.hxx>
#include <GeomToStep_MakePlane.hxx>
#include <GeomToStep_MakePolyline.hxx>
#include <GeomToStep_MakeRectangularTrimmedSurface.hxx>
#include <GeomToStep_MakeSphericalSurface.hxx>
#include <GeomToStep_MakeSurface.hxx>
#include <GeomToStep_MakeSurfaceOfLinearExtrusion.hxx>
#include <GeomToStep_MakeSurfaceOfRevolution.hxx>
#include <GeomToStep_MakeSweptSurface.hxx>
#include <GeomToStep_MakeToroidalSurface.hxx>
#include <GeomToStep_MakeVector.hxx>
#include <GeomToStep_Root.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomToStep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomToStep", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GeomToStep_Root , shared_ptr<GeomToStep_Root> >(m,"GeomToStep_Root",R"#(This class implements the common services for all classes of GeomToStep which report error.)#");
    py::class_<GeomToStep_MakeAxis1Placement , shared_ptr<GeomToStep_MakeAxis1Placement> , GeomToStep_Root>(m,"GeomToStep_MakeAxis1Placement",R"#(This class implements the mapping between classes Axis1Placement from Geom and Ax1 from gp, and the class Axis1Placement from StepGeom which describes an Axis1Placement from Prostep.)#");
    py::class_<GeomToStep_MakeAxis2Placement2d , shared_ptr<GeomToStep_MakeAxis2Placement2d> , GeomToStep_Root>(m,"GeomToStep_MakeAxis2Placement2d",R"#(This class implements the mapping between classes Axis2Placement from Geom and Ax2, Ax22d from gp, and the class Axis2Placement2d from StepGeom which describes an axis2_placement_2d from Prostep.)#");
    py::class_<GeomToStep_MakeAxis2Placement3d , shared_ptr<GeomToStep_MakeAxis2Placement3d> , GeomToStep_Root>(m,"GeomToStep_MakeAxis2Placement3d",R"#(This class implements the mapping between classes Axis2Placement from Geom and Ax2, Ax3 from gp, and the class Axis2Placement3d from StepGeom which describes an axis2_placement_3d from Prostep.)#");
    py::class_<GeomToStep_MakeBSplineCurveWithKnots , shared_ptr<GeomToStep_MakeBSplineCurveWithKnots> , GeomToStep_Root>(m,"GeomToStep_MakeBSplineCurveWithKnots",R"#(This class implements the mapping between classes BSplineCurve from Geom, Geom2d and the class BSplineCurveWithKnots from StepGeom which describes a bspline_curve_with_knots from Prostep)#");
    py::class_<GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve , shared_ptr<GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve> , GeomToStep_Root>(m,"GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve",R"#(This class implements the mapping between classes BSplineCurve from Geom, Geom2d and the class BSplineCurveWithKnotsAndRationalBSplineCurve from StepGeom which describes a rational_bspline_curve_with_knots from Prostep)#");
    py::class_<GeomToStep_MakeBSplineSurfaceWithKnots , shared_ptr<GeomToStep_MakeBSplineSurfaceWithKnots> , GeomToStep_Root>(m,"GeomToStep_MakeBSplineSurfaceWithKnots",R"#(This class implements the mapping between class BSplineSurface from Geom and the class BSplineSurfaceWithKnots from StepGeom which describes a bspline_Surface_with_knots from Prostep)#");
    py::class_<GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface , shared_ptr<GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface> , GeomToStep_Root>(m,"GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface",R"#(This class implements the mapping between class BSplineSurface from Geom and the class BSplineSurfaceWithKnotsAndRationalBSplineSurface from StepGeom which describes a rational_bspline_Surface_with_knots from Prostep)#");
    py::class_<GeomToStep_MakeBoundedCurve , shared_ptr<GeomToStep_MakeBoundedCurve> , GeomToStep_Root>(m,"GeomToStep_MakeBoundedCurve",R"#(This class implements the mapping between classes BoundedCurve from Geom, Geom2d and the class BoundedCurve from StepGeom which describes a BoundedCurve from prostep. As BoundedCurve is an abstract BoundedCurve this class is an access to the sub-class required.)#");
    py::class_<GeomToStep_MakeBoundedSurface , shared_ptr<GeomToStep_MakeBoundedSurface> , GeomToStep_Root>(m,"GeomToStep_MakeBoundedSurface",R"#(This class implements the mapping between classes BoundedSurface from Geom and the class BoundedSurface from StepGeom which describes a BoundedSurface from prostep. As BoundedSurface is an abstract BoundedSurface this class is an access to the sub-class required.)#");
    py::class_<GeomToStep_MakeCartesianPoint , shared_ptr<GeomToStep_MakeCartesianPoint> , GeomToStep_Root>(m,"GeomToStep_MakeCartesianPoint",R"#(This class implements the mapping between classes CartesianPoint from Geom and Pnt from gp, and the class CartesianPoint from StepGeom which describes a point from Prostep.)#");
    py::class_<GeomToStep_MakeCircle , shared_ptr<GeomToStep_MakeCircle> , GeomToStep_Root>(m,"GeomToStep_MakeCircle",R"#(This class implements the mapping between classes Circle from Geom, and Circ from gp, and the class Circle from StepGeom which describes a circle from Prostep.)#");
    py::class_<GeomToStep_MakeConic , shared_ptr<GeomToStep_MakeConic> , GeomToStep_Root>(m,"GeomToStep_MakeConic",R"#(This class implements the mapping between classes Conic from Geom and the class Conic from StepGeom which describes a Conic from prostep. As Conic is an abstract Conic this class is an access to the sub-class required.)#");
    py::class_<GeomToStep_MakeConicalSurface , shared_ptr<GeomToStep_MakeConicalSurface> , GeomToStep_Root>(m,"GeomToStep_MakeConicalSurface",R"#(This class implements the mapping between class ConicalSurface from Geom and the class ConicalSurface from StepGeom which describes a conical_surface from Prostep)#");
    py::class_<GeomToStep_MakeCurve , shared_ptr<GeomToStep_MakeCurve> , GeomToStep_Root>(m,"GeomToStep_MakeCurve",R"#(This class implements the mapping between classes Curve from Geom and the class Curve from StepGeom which describes a Curve from prostep. As Curve is an abstract curve this class an access to the sub-class required.)#");
    py::class_<GeomToStep_MakeCylindricalSurface , shared_ptr<GeomToStep_MakeCylindricalSurface> , GeomToStep_Root>(m,"GeomToStep_MakeCylindricalSurface",R"#(This class implements the mapping between class CylindricalSurface from Geom and the class CylindricalSurface from StepGeom which describes a cylindrical_surface from Prostep)#");
    py::class_<GeomToStep_MakeDirection , shared_ptr<GeomToStep_MakeDirection> , GeomToStep_Root>(m,"GeomToStep_MakeDirection",R"#(This class implements the mapping between classes Direction from Geom, Geom2d and Dir, Dir2d from gp, and the class Direction from StepGeom which describes a direction from Prostep.)#");
    py::class_<GeomToStep_MakeElementarySurface , shared_ptr<GeomToStep_MakeElementarySurface> , GeomToStep_Root>(m,"GeomToStep_MakeElementarySurface",R"#(This class implements the mapping between classes ElementarySurface from Geom and the class ElementarySurface from StepGeom which describes a ElementarySurface from prostep. As ElementarySurface is an abstract Surface this class is an access to the sub-class required.)#");
    py::class_<GeomToStep_MakeEllipse , shared_ptr<GeomToStep_MakeEllipse> , GeomToStep_Root>(m,"GeomToStep_MakeEllipse",R"#(This class implements the mapping between classes Ellipse from Geom, and Circ from gp, and the class Ellipse from StepGeom which describes a Ellipse from Prostep.)#");
    py::class_<GeomToStep_MakeHyperbola , shared_ptr<GeomToStep_MakeHyperbola> , GeomToStep_Root>(m,"GeomToStep_MakeHyperbola",R"#(This class implements the mapping between the class Hyperbola from Geom and the class Hyperbola from StepGeom which describes a Hyperbola from ProSTEP)#");
    py::class_<GeomToStep_MakeLine , shared_ptr<GeomToStep_MakeLine> , GeomToStep_Root>(m,"GeomToStep_MakeLine",R"#(This class implements the mapping between classes Line from Geom and Lin from gp, and the class Line from StepGeom which describes a line from Prostep.)#");
    py::class_<GeomToStep_MakeParabola , shared_ptr<GeomToStep_MakeParabola> , GeomToStep_Root>(m,"GeomToStep_MakeParabola",R"#(This class implements the mapping between the class Parabola from Geom and the class Parabola from StepGeom which describes a Parabola from ProSTEP)#");
    py::class_<GeomToStep_MakePlane , shared_ptr<GeomToStep_MakePlane> , GeomToStep_Root>(m,"GeomToStep_MakePlane",R"#(This class implements the mapping between classes Plane from Geom and Pln from gp, and the class Plane from StepGeom which describes a plane from Prostep.)#");
    py::class_<GeomToStep_MakePolyline , shared_ptr<GeomToStep_MakePolyline> , GeomToStep_Root>(m,"GeomToStep_MakePolyline",R"#(This class implements the mapping between an Array1 of points from gp and a Polyline from StepGeom.)#");
    py::class_<GeomToStep_MakeRectangularTrimmedSurface , shared_ptr<GeomToStep_MakeRectangularTrimmedSurface> , GeomToStep_Root>(m,"GeomToStep_MakeRectangularTrimmedSurface",R"#(This class implements the mapping between class RectangularTrimmedSurface from Geom and the class RectangularTrimmedSurface from StepGeom which describes a rectangular_trimmed_surface from ISO-IS 10303-42)#");
    py::class_<GeomToStep_MakeSphericalSurface , shared_ptr<GeomToStep_MakeSphericalSurface> , GeomToStep_Root>(m,"GeomToStep_MakeSphericalSurface",R"#(This class implements the mapping between class SphericalSurface from Geom and the class SphericalSurface from StepGeom which describes a spherical_surface from Prostep)#");
    py::class_<GeomToStep_MakeSurface , shared_ptr<GeomToStep_MakeSurface> , GeomToStep_Root>(m,"GeomToStep_MakeSurface",R"#(This class implements the mapping between classes Surface from Geom and the class Surface from StepGeom which describes a Surface from prostep. As Surface is an abstract Surface this class is an access to the sub-class required.)#");
    py::class_<GeomToStep_MakeSurfaceOfLinearExtrusion , shared_ptr<GeomToStep_MakeSurfaceOfLinearExtrusion> , GeomToStep_Root>(m,"GeomToStep_MakeSurfaceOfLinearExtrusion",R"#(This class implements the mapping between class SurfaceOfLinearExtrusion from Geom and the class SurfaceOfLinearExtrusion from StepGeom which describes a surface_of_linear_extrusion from Prostep)#");
    py::class_<GeomToStep_MakeSurfaceOfRevolution , shared_ptr<GeomToStep_MakeSurfaceOfRevolution> , GeomToStep_Root>(m,"GeomToStep_MakeSurfaceOfRevolution",R"#(This class implements the mapping between class SurfaceOfRevolution from Geom and the class SurfaceOfRevolution from StepGeom which describes a surface_of_revolution from Prostep)#");
    py::class_<GeomToStep_MakeSweptSurface , shared_ptr<GeomToStep_MakeSweptSurface> , GeomToStep_Root>(m,"GeomToStep_MakeSweptSurface",R"#(This class implements the mapping between classes SweptSurface from Geom and the class SweptSurface from StepGeom which describes a SweptSurface from prostep. As SweptSurface is an abstract SweptSurface this class is an access to the sub-class required.)#");
    py::class_<GeomToStep_MakeToroidalSurface , shared_ptr<GeomToStep_MakeToroidalSurface> , GeomToStep_Root>(m,"GeomToStep_MakeToroidalSurface",R"#(This class implements the mapping between class ToroidalSurface from Geom and the class ToroidalSurface from StepGeom which describes a toroidal_surface from Prostep)#");
    py::class_<GeomToStep_MakeVector , shared_ptr<GeomToStep_MakeVector> , GeomToStep_Root>(m,"GeomToStep_MakeVector",R"#(This class implements the mapping between classes Vector from Geom, Geom2d and Vec, Vec2d from gp, and the class Vector from StepGeom which describes a Vector from Prostep.)#");

};

// user-defined post-inclusion per module

// user-defined post
