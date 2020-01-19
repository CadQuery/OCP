
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepGeom_Plane.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <Geom_Plane.hxx>
#include <StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StepGeom_Line.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Lin2d.hxx>
#include <Geom_Line.hxx>
#include <Geom2d_Line.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <StepGeom_Polyline.hxx>
#include <StdFail_NotDone.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2d.hxx>
#include <Geom_Axis1Placement.hxx>
#include <Geom2d_AxisPlacement.hxx>
#include <StepGeom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <StepGeom_Circle.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ.hxx>
#include <Geom_Circle.hxx>
#include <Geom2d_Circle.hxx>
#include <StepGeom_BSplineSurfaceWithKnots.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StepGeom_Direction.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>
#include <Geom_Direction.hxx>
#include <Geom2d_Direction.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax3.hxx>
#include <gp_Trsf.hxx>
#include <Geom_Axis2Placement.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SweptSurface.hxx>
#include <StepGeom_Hyperbola.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Hyperbola.hxx>
#include <Geom_Hyperbola.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax22d.hxx>
#include <StepGeom_Parabola.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Parabola.hxx>
#include <Geom_Parabola.hxx>
#include <StepGeom_ToroidalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_ConicalSurface.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BoundedSurface.hxx>
#include <StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StepGeom_Ellipse.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom2d_Ellipse.hxx>
#include <StepGeom_Conic.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Conic.hxx>
#include <Geom2d_Conic.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StepGeom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <StepGeom_SphericalSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SphericalSurface.hxx>
#include <StepGeom_Vector.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Vec.hxx>
#include <gp_Vec2d.hxx>
#include <Geom_Vector.hxx>
#include <Geom2d_Vector.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_ElementarySurface.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_SurfaceOfRevolution.hxx>

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

    register_default_constructor<GeomToStep_Root , shared_ptr<GeomToStep_Root>>(m,"GeomToStep_Root");

    static_cast<py::class_<GeomToStep_Root , shared_ptr<GeomToStep_Root>  >>(m.attr("GeomToStep_Root"))
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomToStep_Root::*)() const) static_cast<Standard_Boolean (GeomToStep_Root::*)() const>(&GeomToStep_Root::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeAxis1Placement , shared_ptr<GeomToStep_MakeAxis1Placement>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeAxis1Placement"))
        .def(py::init< const gp_Ax1 & >()  , py::arg("A") )
        .def(py::init< const gp_Ax2d & >()  , py::arg("A") )
        .def(py::init< const opencascade::handle<Geom_Axis1Placement> & >()  , py::arg("A") )
        .def(py::init< const opencascade::handle<Geom2d_AxisPlacement> & >()  , py::arg("A") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Axis1Placement> & (GeomToStep_MakeAxis1Placement::*)() const) static_cast<const opencascade::handle<StepGeom_Axis1Placement> & (GeomToStep_MakeAxis1Placement::*)() const>(&GeomToStep_MakeAxis1Placement::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeAxis2Placement2d , shared_ptr<GeomToStep_MakeAxis2Placement2d>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeAxis2Placement2d"))
        .def(py::init< const gp_Ax2 & >()  , py::arg("A") )
        .def(py::init< const gp_Ax22d & >()  , py::arg("A") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Axis2Placement2d> & (GeomToStep_MakeAxis2Placement2d::*)() const) static_cast<const opencascade::handle<StepGeom_Axis2Placement2d> & (GeomToStep_MakeAxis2Placement2d::*)() const>(&GeomToStep_MakeAxis2Placement2d::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeAxis2Placement3d , shared_ptr<GeomToStep_MakeAxis2Placement3d>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeAxis2Placement3d"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2 & >()  , py::arg("A") )
        .def(py::init< const gp_Ax3 & >()  , py::arg("A") )
        .def(py::init< const gp_Trsf & >()  , py::arg("T") )
        .def(py::init< const opencascade::handle<Geom_Axis2Placement> & >()  , py::arg("A") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Axis2Placement3d> & (GeomToStep_MakeAxis2Placement3d::*)() const) static_cast<const opencascade::handle<StepGeom_Axis2Placement3d> & (GeomToStep_MakeAxis2Placement3d::*)() const>(&GeomToStep_MakeAxis2Placement3d::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeBSplineCurveWithKnots , shared_ptr<GeomToStep_MakeBSplineCurveWithKnots>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeBSplineCurveWithKnots"))
        .def(py::init< const opencascade::handle<Geom_BSplineCurve> & >()  , py::arg("Bsplin") )
        .def(py::init< const opencascade::handle<Geom2d_BSplineCurve> & >()  , py::arg("Bsplin") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_BSplineCurveWithKnots> & (GeomToStep_MakeBSplineCurveWithKnots::*)() const) static_cast<const opencascade::handle<StepGeom_BSplineCurveWithKnots> & (GeomToStep_MakeBSplineCurveWithKnots::*)() const>(&GeomToStep_MakeBSplineCurveWithKnots::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve , shared_ptr<GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve"))
        .def(py::init< const opencascade::handle<Geom_BSplineCurve> & >()  , py::arg("Bsplin") )
        .def(py::init< const opencascade::handle<Geom2d_BSplineCurve> & >()  , py::arg("Bsplin") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> & (GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<const opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> & (GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeBSplineSurfaceWithKnots , shared_ptr<GeomToStep_MakeBSplineSurfaceWithKnots>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeBSplineSurfaceWithKnots"))
        .def(py::init< const opencascade::handle<Geom_BSplineSurface> & >()  , py::arg("Bsplin") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> & (GeomToStep_MakeBSplineSurfaceWithKnots::*)() const) static_cast<const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> & (GeomToStep_MakeBSplineSurfaceWithKnots::*)() const>(&GeomToStep_MakeBSplineSurfaceWithKnots::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface , shared_ptr<GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface"))
        .def(py::init< const opencascade::handle<Geom_BSplineSurface> & >()  , py::arg("Bsplin") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> & (GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<const opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> & (GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeBoundedCurve , shared_ptr<GeomToStep_MakeBoundedCurve>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeBoundedCurve"))
        .def(py::init< const opencascade::handle<Geom_BoundedCurve> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom2d_BoundedCurve> & >()  , py::arg("C") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_BoundedCurve> & (GeomToStep_MakeBoundedCurve::*)() const) static_cast<const opencascade::handle<StepGeom_BoundedCurve> & (GeomToStep_MakeBoundedCurve::*)() const>(&GeomToStep_MakeBoundedCurve::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeBoundedSurface , shared_ptr<GeomToStep_MakeBoundedSurface>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeBoundedSurface"))
        .def(py::init< const opencascade::handle<Geom_BoundedSurface> & >()  , py::arg("C") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_BoundedSurface> & (GeomToStep_MakeBoundedSurface::*)() const) static_cast<const opencascade::handle<StepGeom_BoundedSurface> & (GeomToStep_MakeBoundedSurface::*)() const>(&GeomToStep_MakeBoundedSurface::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeCartesianPoint , shared_ptr<GeomToStep_MakeCartesianPoint>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeCartesianPoint"))
        .def(py::init< const gp_Pnt & >()  , py::arg("P") )
        .def(py::init< const gp_Pnt2d & >()  , py::arg("P") )
        .def(py::init< const opencascade::handle<Geom_CartesianPoint> & >()  , py::arg("P") )
        .def(py::init< const opencascade::handle<Geom2d_CartesianPoint> & >()  , py::arg("P") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_CartesianPoint> & (GeomToStep_MakeCartesianPoint::*)() const) static_cast<const opencascade::handle<StepGeom_CartesianPoint> & (GeomToStep_MakeCartesianPoint::*)() const>(&GeomToStep_MakeCartesianPoint::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeCircle , shared_ptr<GeomToStep_MakeCircle>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeCircle"))
        .def(py::init< const gp_Circ & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom_Circle> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom2d_Circle> & >()  , py::arg("C") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Circle> & (GeomToStep_MakeCircle::*)() const) static_cast<const opencascade::handle<StepGeom_Circle> & (GeomToStep_MakeCircle::*)() const>(&GeomToStep_MakeCircle::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeConic , shared_ptr<GeomToStep_MakeConic>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeConic"))
        .def(py::init< const opencascade::handle<Geom_Conic> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom2d_Conic> & >()  , py::arg("C") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Conic> & (GeomToStep_MakeConic::*)() const) static_cast<const opencascade::handle<StepGeom_Conic> & (GeomToStep_MakeConic::*)() const>(&GeomToStep_MakeConic::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeConicalSurface , shared_ptr<GeomToStep_MakeConicalSurface>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeConicalSurface"))
        .def(py::init< const opencascade::handle<Geom_ConicalSurface> & >()  , py::arg("CSurf") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_ConicalSurface> & (GeomToStep_MakeConicalSurface::*)() const) static_cast<const opencascade::handle<StepGeom_ConicalSurface> & (GeomToStep_MakeConicalSurface::*)() const>(&GeomToStep_MakeConicalSurface::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeCurve , shared_ptr<GeomToStep_MakeCurve>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeCurve"))
        .def(py::init< const opencascade::handle<Geom_Curve> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> & >()  , py::arg("C") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Curve> & (GeomToStep_MakeCurve::*)() const) static_cast<const opencascade::handle<StepGeom_Curve> & (GeomToStep_MakeCurve::*)() const>(&GeomToStep_MakeCurve::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeCylindricalSurface , shared_ptr<GeomToStep_MakeCylindricalSurface>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeCylindricalSurface"))
        .def(py::init< const opencascade::handle<Geom_CylindricalSurface> & >()  , py::arg("CSurf") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_CylindricalSurface> & (GeomToStep_MakeCylindricalSurface::*)() const) static_cast<const opencascade::handle<StepGeom_CylindricalSurface> & (GeomToStep_MakeCylindricalSurface::*)() const>(&GeomToStep_MakeCylindricalSurface::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeDirection , shared_ptr<GeomToStep_MakeDirection>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeDirection"))
        .def(py::init< const gp_Dir & >()  , py::arg("D") )
        .def(py::init< const gp_Dir2d & >()  , py::arg("D") )
        .def(py::init< const opencascade::handle<Geom_Direction> & >()  , py::arg("D") )
        .def(py::init< const opencascade::handle<Geom2d_Direction> & >()  , py::arg("D") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Direction> & (GeomToStep_MakeDirection::*)() const) static_cast<const opencascade::handle<StepGeom_Direction> & (GeomToStep_MakeDirection::*)() const>(&GeomToStep_MakeDirection::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeElementarySurface , shared_ptr<GeomToStep_MakeElementarySurface>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeElementarySurface"))
        .def(py::init< const opencascade::handle<Geom_ElementarySurface> & >()  , py::arg("S") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_ElementarySurface> & (GeomToStep_MakeElementarySurface::*)() const) static_cast<const opencascade::handle<StepGeom_ElementarySurface> & (GeomToStep_MakeElementarySurface::*)() const>(&GeomToStep_MakeElementarySurface::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeEllipse , shared_ptr<GeomToStep_MakeEllipse>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeEllipse"))
        .def(py::init< const gp_Elips & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom_Ellipse> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom2d_Ellipse> & >()  , py::arg("C") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Ellipse> & (GeomToStep_MakeEllipse::*)() const) static_cast<const opencascade::handle<StepGeom_Ellipse> & (GeomToStep_MakeEllipse::*)() const>(&GeomToStep_MakeEllipse::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeHyperbola , shared_ptr<GeomToStep_MakeHyperbola>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeHyperbola"))
        .def(py::init< const opencascade::handle<Geom2d_Hyperbola> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom_Hyperbola> & >()  , py::arg("C") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Hyperbola> & (GeomToStep_MakeHyperbola::*)() const) static_cast<const opencascade::handle<StepGeom_Hyperbola> & (GeomToStep_MakeHyperbola::*)() const>(&GeomToStep_MakeHyperbola::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeLine , shared_ptr<GeomToStep_MakeLine>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeLine"))
        .def(py::init< const gp_Lin & >()  , py::arg("L") )
        .def(py::init< const gp_Lin2d & >()  , py::arg("L") )
        .def(py::init< const opencascade::handle<Geom_Line> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom2d_Line> & >()  , py::arg("C") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Line> & (GeomToStep_MakeLine::*)() const) static_cast<const opencascade::handle<StepGeom_Line> & (GeomToStep_MakeLine::*)() const>(&GeomToStep_MakeLine::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeParabola , shared_ptr<GeomToStep_MakeParabola>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeParabola"))
        .def(py::init< const opencascade::handle<Geom2d_Parabola> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom_Parabola> & >()  , py::arg("C") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Parabola> & (GeomToStep_MakeParabola::*)() const) static_cast<const opencascade::handle<StepGeom_Parabola> & (GeomToStep_MakeParabola::*)() const>(&GeomToStep_MakeParabola::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakePlane , shared_ptr<GeomToStep_MakePlane>  , GeomToStep_Root >>(m.attr("GeomToStep_MakePlane"))
        .def(py::init< const gp_Pln & >()  , py::arg("P") )
        .def(py::init< const opencascade::handle<Geom_Plane> & >()  , py::arg("P") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Plane> & (GeomToStep_MakePlane::*)() const) static_cast<const opencascade::handle<StepGeom_Plane> & (GeomToStep_MakePlane::*)() const>(&GeomToStep_MakePlane::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakePolyline , shared_ptr<GeomToStep_MakePolyline>  , GeomToStep_Root >>(m.attr("GeomToStep_MakePolyline"))
        .def(py::init<  const NCollection_Array1<gp_Pnt> & >()  , py::arg("P") )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> & >()  , py::arg("P") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Polyline> & (GeomToStep_MakePolyline::*)() const) static_cast<const opencascade::handle<StepGeom_Polyline> & (GeomToStep_MakePolyline::*)() const>(&GeomToStep_MakePolyline::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeRectangularTrimmedSurface , shared_ptr<GeomToStep_MakeRectangularTrimmedSurface>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeRectangularTrimmedSurface"))
        .def(py::init< const opencascade::handle<Geom_RectangularTrimmedSurface> & >()  , py::arg("RTSurf") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_RectangularTrimmedSurface> & (GeomToStep_MakeRectangularTrimmedSurface::*)() const) static_cast<const opencascade::handle<StepGeom_RectangularTrimmedSurface> & (GeomToStep_MakeRectangularTrimmedSurface::*)() const>(&GeomToStep_MakeRectangularTrimmedSurface::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeSphericalSurface , shared_ptr<GeomToStep_MakeSphericalSurface>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeSphericalSurface"))
        .def(py::init< const opencascade::handle<Geom_SphericalSurface> & >()  , py::arg("CSurf") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_SphericalSurface> & (GeomToStep_MakeSphericalSurface::*)() const) static_cast<const opencascade::handle<StepGeom_SphericalSurface> & (GeomToStep_MakeSphericalSurface::*)() const>(&GeomToStep_MakeSphericalSurface::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeSurface , shared_ptr<GeomToStep_MakeSurface>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeSurface"))
        .def(py::init< const opencascade::handle<Geom_Surface> & >()  , py::arg("C") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Surface> & (GeomToStep_MakeSurface::*)() const) static_cast<const opencascade::handle<StepGeom_Surface> & (GeomToStep_MakeSurface::*)() const>(&GeomToStep_MakeSurface::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeSurfaceOfLinearExtrusion , shared_ptr<GeomToStep_MakeSurfaceOfLinearExtrusion>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeSurfaceOfLinearExtrusion"))
        .def(py::init< const opencascade::handle<Geom_SurfaceOfLinearExtrusion> & >()  , py::arg("CSurf") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> & (GeomToStep_MakeSurfaceOfLinearExtrusion::*)() const) static_cast<const opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> & (GeomToStep_MakeSurfaceOfLinearExtrusion::*)() const>(&GeomToStep_MakeSurfaceOfLinearExtrusion::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeSurfaceOfRevolution , shared_ptr<GeomToStep_MakeSurfaceOfRevolution>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeSurfaceOfRevolution"))
        .def(py::init< const opencascade::handle<Geom_SurfaceOfRevolution> & >()  , py::arg("RevSurf") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_SurfaceOfRevolution> & (GeomToStep_MakeSurfaceOfRevolution::*)() const) static_cast<const opencascade::handle<StepGeom_SurfaceOfRevolution> & (GeomToStep_MakeSurfaceOfRevolution::*)() const>(&GeomToStep_MakeSurfaceOfRevolution::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeSweptSurface , shared_ptr<GeomToStep_MakeSweptSurface>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeSweptSurface"))
        .def(py::init< const opencascade::handle<Geom_SweptSurface> & >()  , py::arg("S") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_SweptSurface> & (GeomToStep_MakeSweptSurface::*)() const) static_cast<const opencascade::handle<StepGeom_SweptSurface> & (GeomToStep_MakeSweptSurface::*)() const>(&GeomToStep_MakeSweptSurface::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeToroidalSurface , shared_ptr<GeomToStep_MakeToroidalSurface>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeToroidalSurface"))
        .def(py::init< const opencascade::handle<Geom_ToroidalSurface> & >()  , py::arg("TorSurf") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_ToroidalSurface> & (GeomToStep_MakeToroidalSurface::*)() const) static_cast<const opencascade::handle<StepGeom_ToroidalSurface> & (GeomToStep_MakeToroidalSurface::*)() const>(&GeomToStep_MakeToroidalSurface::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomToStep_MakeVector , shared_ptr<GeomToStep_MakeVector>  , GeomToStep_Root >>(m.attr("GeomToStep_MakeVector"))
        .def(py::init< const gp_Vec & >()  , py::arg("V") )
        .def(py::init< const gp_Vec2d & >()  , py::arg("V") )
        .def(py::init< const opencascade::handle<Geom_Vector> & >()  , py::arg("V") )
        .def(py::init< const opencascade::handle<Geom2d_Vector> & >()  , py::arg("V") )
    // methods
        .def("Value",
             (const opencascade::handle<StepGeom_Vector> & (GeomToStep_MakeVector::*)() const) static_cast<const opencascade::handle<StepGeom_Vector> & (GeomToStep_MakeVector::*)() const>(&GeomToStep_MakeVector::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/GeomToStep_MakePlane.hxx
// ./opencascade/GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx
// ./opencascade/GeomToStep_MakeLine.hxx
// ./opencascade/GeomToStep_MakeSurfaceOfLinearExtrusion.hxx
// ./opencascade/GeomToStep_MakePolyline.hxx
// ./opencascade/GeomToStep_MakeAxis1Placement.hxx
// ./opencascade/GeomToStep_MakeCurve.hxx
// ./opencascade/GeomToStep_Root.hxx
// ./opencascade/GeomToStep_MakeCircle.hxx
// ./opencascade/GeomToStep_MakeBSplineSurfaceWithKnots.hxx
// ./opencascade/GeomToStep_MakeDirection.hxx
// ./opencascade/GeomToStep_MakeAxis2Placement3d.hxx
// ./opencascade/GeomToStep_MakeCylindricalSurface.hxx
// ./opencascade/GeomToStep_MakeSweptSurface.hxx
// ./opencascade/GeomToStep_MakeHyperbola.hxx
// ./opencascade/GeomToStep_MakeAxis2Placement2d.hxx
// ./opencascade/GeomToStep_MakeParabola.hxx
// ./opencascade/GeomToStep_MakeToroidalSurface.hxx
// ./opencascade/GeomToStep_MakeConicalSurface.hxx
// ./opencascade/GeomToStep_MakeCartesianPoint.hxx
// ./opencascade/GeomToStep_MakeBoundedSurface.hxx
// ./opencascade/GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve.hxx
// ./opencascade/GeomToStep_MakeEllipse.hxx
// ./opencascade/GeomToStep_MakeConic.hxx
// ./opencascade/GeomToStep_MakeBSplineCurveWithKnots.hxx
// ./opencascade/GeomToStep_MakeSurface.hxx
// ./opencascade/GeomToStep_MakeRectangularTrimmedSurface.hxx
// ./opencascade/GeomToStep_MakeSphericalSurface.hxx
// ./opencascade/GeomToStep_MakeVector.hxx
// ./opencascade/GeomToStep_MakeBoundedCurve.hxx
// ./opencascade/GeomToStep_MakeElementarySurface.hxx
// ./opencascade/GeomToStep_MakeSurfaceOfRevolution.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
