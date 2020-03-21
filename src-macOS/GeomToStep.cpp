
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


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
void register_GeomToStep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomToStep"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GeomToStep_Root , shared_ptr<GeomToStep_Root>>(m,"GeomToStep_Root");

    static_cast<py::class_<GeomToStep_Root , shared_ptr<GeomToStep_Root> >>(m.attr("GeomToStep_Root"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeAxis1Placement , shared_ptr<GeomToStep_MakeAxis1Placement> , GeomToStep_Root>>(m.attr("GeomToStep_MakeAxis1Placement"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeAxis2Placement2d , shared_ptr<GeomToStep_MakeAxis2Placement2d> , GeomToStep_Root>>(m.attr("GeomToStep_MakeAxis2Placement2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeAxis2Placement3d , shared_ptr<GeomToStep_MakeAxis2Placement3d> , GeomToStep_Root>>(m.attr("GeomToStep_MakeAxis2Placement3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeBSplineCurveWithKnots , shared_ptr<GeomToStep_MakeBSplineCurveWithKnots> , GeomToStep_Root>>(m.attr("GeomToStep_MakeBSplineCurveWithKnots"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve , shared_ptr<GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve> , GeomToStep_Root>>(m.attr("GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeBSplineSurfaceWithKnots , shared_ptr<GeomToStep_MakeBSplineSurfaceWithKnots> , GeomToStep_Root>>(m.attr("GeomToStep_MakeBSplineSurfaceWithKnots"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface , shared_ptr<GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface> , GeomToStep_Root>>(m.attr("GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeBoundedCurve , shared_ptr<GeomToStep_MakeBoundedCurve> , GeomToStep_Root>>(m.attr("GeomToStep_MakeBoundedCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeBoundedSurface , shared_ptr<GeomToStep_MakeBoundedSurface> , GeomToStep_Root>>(m.attr("GeomToStep_MakeBoundedSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeCartesianPoint , shared_ptr<GeomToStep_MakeCartesianPoint> , GeomToStep_Root>>(m.attr("GeomToStep_MakeCartesianPoint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeCircle , shared_ptr<GeomToStep_MakeCircle> , GeomToStep_Root>>(m.attr("GeomToStep_MakeCircle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeConic , shared_ptr<GeomToStep_MakeConic> , GeomToStep_Root>>(m.attr("GeomToStep_MakeConic"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeConicalSurface , shared_ptr<GeomToStep_MakeConicalSurface> , GeomToStep_Root>>(m.attr("GeomToStep_MakeConicalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeCurve , shared_ptr<GeomToStep_MakeCurve> , GeomToStep_Root>>(m.attr("GeomToStep_MakeCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeCylindricalSurface , shared_ptr<GeomToStep_MakeCylindricalSurface> , GeomToStep_Root>>(m.attr("GeomToStep_MakeCylindricalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeDirection , shared_ptr<GeomToStep_MakeDirection> , GeomToStep_Root>>(m.attr("GeomToStep_MakeDirection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeElementarySurface , shared_ptr<GeomToStep_MakeElementarySurface> , GeomToStep_Root>>(m.attr("GeomToStep_MakeElementarySurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeEllipse , shared_ptr<GeomToStep_MakeEllipse> , GeomToStep_Root>>(m.attr("GeomToStep_MakeEllipse"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeHyperbola , shared_ptr<GeomToStep_MakeHyperbola> , GeomToStep_Root>>(m.attr("GeomToStep_MakeHyperbola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeLine , shared_ptr<GeomToStep_MakeLine> , GeomToStep_Root>>(m.attr("GeomToStep_MakeLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeParabola , shared_ptr<GeomToStep_MakeParabola> , GeomToStep_Root>>(m.attr("GeomToStep_MakeParabola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakePlane , shared_ptr<GeomToStep_MakePlane> , GeomToStep_Root>>(m.attr("GeomToStep_MakePlane"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakePolyline , shared_ptr<GeomToStep_MakePolyline> , GeomToStep_Root>>(m.attr("GeomToStep_MakePolyline"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeRectangularTrimmedSurface , shared_ptr<GeomToStep_MakeRectangularTrimmedSurface> , GeomToStep_Root>>(m.attr("GeomToStep_MakeRectangularTrimmedSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeSphericalSurface , shared_ptr<GeomToStep_MakeSphericalSurface> , GeomToStep_Root>>(m.attr("GeomToStep_MakeSphericalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeSurface , shared_ptr<GeomToStep_MakeSurface> , GeomToStep_Root>>(m.attr("GeomToStep_MakeSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeSurfaceOfLinearExtrusion , shared_ptr<GeomToStep_MakeSurfaceOfLinearExtrusion> , GeomToStep_Root>>(m.attr("GeomToStep_MakeSurfaceOfLinearExtrusion"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeSurfaceOfRevolution , shared_ptr<GeomToStep_MakeSurfaceOfRevolution> , GeomToStep_Root>>(m.attr("GeomToStep_MakeSurfaceOfRevolution"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeSweptSurface , shared_ptr<GeomToStep_MakeSweptSurface> , GeomToStep_Root>>(m.attr("GeomToStep_MakeSweptSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeToroidalSurface , shared_ptr<GeomToStep_MakeToroidalSurface> , GeomToStep_Root>>(m.attr("GeomToStep_MakeToroidalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToStep_MakeVector , shared_ptr<GeomToStep_MakeVector> , GeomToStep_Root>>(m.attr("GeomToStep_MakeVector"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GeomToStep_MakeBoundedSurface.hxx
// ./opencascade/GeomToStep_MakeSurfaceOfRevolution.hxx
// ./opencascade/GeomToStep_MakeRectangularTrimmedSurface.hxx
// ./opencascade/GeomToStep_MakeBoundedCurve.hxx
// ./opencascade/GeomToStep_MakeToroidalSurface.hxx
// ./opencascade/GeomToStep_MakeCylindricalSurface.hxx
// ./opencascade/GeomToStep_MakeBSplineCurveWithKnots.hxx
// ./opencascade/GeomToStep_MakePlane.hxx
// ./opencascade/GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve.hxx
// ./opencascade/GeomToStep_MakeCartesianPoint.hxx
// ./opencascade/GeomToStep_MakePolyline.hxx
// ./opencascade/GeomToStep_MakeAxis2Placement2d.hxx
// ./opencascade/GeomToStep_MakeDirection.hxx
// ./opencascade/GeomToStep_MakeSweptSurface.hxx
// ./opencascade/GeomToStep_MakeSphericalSurface.hxx
// ./opencascade/GeomToStep_MakeLine.hxx
// ./opencascade/GeomToStep_MakeParabola.hxx
// ./opencascade/GeomToStep_MakeSurface.hxx
// ./opencascade/GeomToStep_MakeConic.hxx
// ./opencascade/GeomToStep_MakeEllipse.hxx
// ./opencascade/GeomToStep_MakeAxis2Placement3d.hxx
// ./opencascade/GeomToStep_MakeConicalSurface.hxx
// ./opencascade/GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx
// ./opencascade/GeomToStep_MakeAxis1Placement.hxx
// ./opencascade/GeomToStep_Root.hxx
// ./opencascade/GeomToStep_MakeCircle.hxx
// ./opencascade/GeomToStep_MakeSurfaceOfLinearExtrusion.hxx
// ./opencascade/GeomToStep_MakeHyperbola.hxx
// ./opencascade/GeomToStep_MakeElementarySurface.hxx
// ./opencascade/GeomToStep_MakeBSplineSurfaceWithKnots.hxx
// ./opencascade/GeomToStep_MakeVector.hxx
// ./opencascade/GeomToStep_MakeCurve.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
