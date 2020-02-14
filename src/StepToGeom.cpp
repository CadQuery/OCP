
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Axis1Placement.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Conic.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_Direction.hxx>
#include <Geom_ElementarySurface.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_Line.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_Plane.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_SweptSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_VectorWithMagnitude.hxx>
#include <Geom2d_AxisPlacement.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <Geom2d_Circle.hxx>
#include <Geom2d_Conic.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Direction.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Geom2d_Hyperbola.hxx>
#include <Geom2d_Line.hxx>
#include <Geom2d_Parabola.hxx>
#include <Geom2d_VectorWithMagnitude.hxx>
#include <gp_Trsf.hxx>
#include <gp_Trsf2d.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Direction.hxx>
#include <StepGeom_BSplineSurface.hxx>
#include <StepGeom_Circle.hxx>
#include <StepGeom_Conic.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StepGeom_Ellipse.hxx>
#include <StepGeom_Hyperbola.hxx>
#include <StepGeom_Line.hxx>
#include <StepGeom_Parabola.hxx>
#include <StepGeom_Plane.hxx>
#include <StepGeom_Polyline.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StepGeom_SphericalSurface.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StepGeom_ToroidalSurface.hxx>
#include <StepGeom_CartesianTransformationOperator2d.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <StepGeom_TrimmedCurve.hxx>
#include <StepGeom_Vector.hxx>

// module includes
#include <StepToGeom.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepToGeom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepToGeom"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StepToGeom , shared_ptr<StepToGeom>>(m,"StepToGeom");

    static_cast<py::class_<StepToGeom , shared_ptr<StepToGeom>  >>(m.attr("StepToGeom"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakeAxis1Placement_s",
                    (opencascade::handle<Geom_Axis1Placement> (*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) ) static_cast<opencascade::handle<Geom_Axis1Placement> (*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) >(&StepToGeom::MakeAxis1Placement),
                    R"#(None)#"  , py::arg("SA"))
        .def_static("MakeAxis2Placement_s",
                    (opencascade::handle<Geom_Axis2Placement> (*)( const opencascade::handle<StepGeom_Axis2Placement3d> &  ) ) static_cast<opencascade::handle<Geom_Axis2Placement> (*)( const opencascade::handle<StepGeom_Axis2Placement3d> &  ) >(&StepToGeom::MakeAxis2Placement),
                    R"#(None)#"  , py::arg("SA"))
        .def_static("MakeAxisPlacement_s",
                    (opencascade::handle<Geom2d_AxisPlacement> (*)( const opencascade::handle<StepGeom_Axis2Placement2d> &  ) ) static_cast<opencascade::handle<Geom2d_AxisPlacement> (*)( const opencascade::handle<StepGeom_Axis2Placement2d> &  ) >(&StepToGeom::MakeAxisPlacement),
                    R"#(None)#"  , py::arg("SA"))
        .def_static("MakeBoundedCurve_s",
                    (opencascade::handle<Geom_BoundedCurve> (*)( const opencascade::handle<StepGeom_BoundedCurve> &  ) ) static_cast<opencascade::handle<Geom_BoundedCurve> (*)( const opencascade::handle<StepGeom_BoundedCurve> &  ) >(&StepToGeom::MakeBoundedCurve),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeBoundedCurve2d_s",
                    (opencascade::handle<Geom2d_BoundedCurve> (*)( const opencascade::handle<StepGeom_BoundedCurve> &  ) ) static_cast<opencascade::handle<Geom2d_BoundedCurve> (*)( const opencascade::handle<StepGeom_BoundedCurve> &  ) >(&StepToGeom::MakeBoundedCurve2d),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeBoundedSurface_s",
                    (opencascade::handle<Geom_BoundedSurface> (*)( const opencascade::handle<StepGeom_BoundedSurface> &  ) ) static_cast<opencascade::handle<Geom_BoundedSurface> (*)( const opencascade::handle<StepGeom_BoundedSurface> &  ) >(&StepToGeom::MakeBoundedSurface),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeBSplineCurve_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<StepGeom_BSplineCurve> &  ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<StepGeom_BSplineCurve> &  ) >(&StepToGeom::MakeBSplineCurve),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeBSplineCurve2d_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<StepGeom_BSplineCurve> &  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<StepGeom_BSplineCurve> &  ) >(&StepToGeom::MakeBSplineCurve2d),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeBSplineSurface_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<StepGeom_BSplineSurface> &  ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<StepGeom_BSplineSurface> &  ) >(&StepToGeom::MakeBSplineSurface),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeCartesianPoint_s",
                    (opencascade::handle<Geom_CartesianPoint> (*)( const opencascade::handle<StepGeom_CartesianPoint> &  ) ) static_cast<opencascade::handle<Geom_CartesianPoint> (*)( const opencascade::handle<StepGeom_CartesianPoint> &  ) >(&StepToGeom::MakeCartesianPoint),
                    R"#(None)#"  , py::arg("SP"))
        .def_static("MakeCartesianPoint2d_s",
                    (opencascade::handle<Geom2d_CartesianPoint> (*)( const opencascade::handle<StepGeom_CartesianPoint> &  ) ) static_cast<opencascade::handle<Geom2d_CartesianPoint> (*)( const opencascade::handle<StepGeom_CartesianPoint> &  ) >(&StepToGeom::MakeCartesianPoint2d),
                    R"#(None)#"  , py::arg("SP"))
        .def_static("MakeCircle_s",
                    (opencascade::handle<Geom_Circle> (*)( const opencascade::handle<StepGeom_Circle> &  ) ) static_cast<opencascade::handle<Geom_Circle> (*)( const opencascade::handle<StepGeom_Circle> &  ) >(&StepToGeom::MakeCircle),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeCircle2d_s",
                    (opencascade::handle<Geom2d_Circle> (*)( const opencascade::handle<StepGeom_Circle> &  ) ) static_cast<opencascade::handle<Geom2d_Circle> (*)( const opencascade::handle<StepGeom_Circle> &  ) >(&StepToGeom::MakeCircle2d),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeConic_s",
                    (opencascade::handle<Geom_Conic> (*)( const opencascade::handle<StepGeom_Conic> &  ) ) static_cast<opencascade::handle<Geom_Conic> (*)( const opencascade::handle<StepGeom_Conic> &  ) >(&StepToGeom::MakeConic),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeConic2d_s",
                    (opencascade::handle<Geom2d_Conic> (*)( const opencascade::handle<StepGeom_Conic> &  ) ) static_cast<opencascade::handle<Geom2d_Conic> (*)( const opencascade::handle<StepGeom_Conic> &  ) >(&StepToGeom::MakeConic2d),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeConicalSurface_s",
                    (opencascade::handle<Geom_ConicalSurface> (*)( const opencascade::handle<StepGeom_ConicalSurface> &  ) ) static_cast<opencascade::handle<Geom_ConicalSurface> (*)( const opencascade::handle<StepGeom_ConicalSurface> &  ) >(&StepToGeom::MakeConicalSurface),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeCurve_s",
                    (opencascade::handle<Geom_Curve> (*)( const opencascade::handle<StepGeom_Curve> &  ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const opencascade::handle<StepGeom_Curve> &  ) >(&StepToGeom::MakeCurve),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeCurve2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<StepGeom_Curve> &  ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<StepGeom_Curve> &  ) >(&StepToGeom::MakeCurve2d),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeCylindricalSurface_s",
                    (opencascade::handle<Geom_CylindricalSurface> (*)( const opencascade::handle<StepGeom_CylindricalSurface> &  ) ) static_cast<opencascade::handle<Geom_CylindricalSurface> (*)( const opencascade::handle<StepGeom_CylindricalSurface> &  ) >(&StepToGeom::MakeCylindricalSurface),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeDirection_s",
                    (opencascade::handle<Geom_Direction> (*)( const opencascade::handle<StepGeom_Direction> &  ) ) static_cast<opencascade::handle<Geom_Direction> (*)( const opencascade::handle<StepGeom_Direction> &  ) >(&StepToGeom::MakeDirection),
                    R"#(None)#"  , py::arg("SD"))
        .def_static("MakeDirection2d_s",
                    (opencascade::handle<Geom2d_Direction> (*)( const opencascade::handle<StepGeom_Direction> &  ) ) static_cast<opencascade::handle<Geom2d_Direction> (*)( const opencascade::handle<StepGeom_Direction> &  ) >(&StepToGeom::MakeDirection2d),
                    R"#(None)#"  , py::arg("SD"))
        .def_static("MakeElementarySurface_s",
                    (opencascade::handle<Geom_ElementarySurface> (*)( const opencascade::handle<StepGeom_ElementarySurface> &  ) ) static_cast<opencascade::handle<Geom_ElementarySurface> (*)( const opencascade::handle<StepGeom_ElementarySurface> &  ) >(&StepToGeom::MakeElementarySurface),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeEllipse_s",
                    (opencascade::handle<Geom_Ellipse> (*)( const opencascade::handle<StepGeom_Ellipse> &  ) ) static_cast<opencascade::handle<Geom_Ellipse> (*)( const opencascade::handle<StepGeom_Ellipse> &  ) >(&StepToGeom::MakeEllipse),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeEllipse2d_s",
                    (opencascade::handle<Geom2d_Ellipse> (*)( const opencascade::handle<StepGeom_Ellipse> &  ) ) static_cast<opencascade::handle<Geom2d_Ellipse> (*)( const opencascade::handle<StepGeom_Ellipse> &  ) >(&StepToGeom::MakeEllipse2d),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeHyperbola_s",
                    (opencascade::handle<Geom_Hyperbola> (*)( const opencascade::handle<StepGeom_Hyperbola> &  ) ) static_cast<opencascade::handle<Geom_Hyperbola> (*)( const opencascade::handle<StepGeom_Hyperbola> &  ) >(&StepToGeom::MakeHyperbola),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeHyperbola2d_s",
                    (opencascade::handle<Geom2d_Hyperbola> (*)( const opencascade::handle<StepGeom_Hyperbola> &  ) ) static_cast<opencascade::handle<Geom2d_Hyperbola> (*)( const opencascade::handle<StepGeom_Hyperbola> &  ) >(&StepToGeom::MakeHyperbola2d),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeLine_s",
                    (opencascade::handle<Geom_Line> (*)( const opencascade::handle<StepGeom_Line> &  ) ) static_cast<opencascade::handle<Geom_Line> (*)( const opencascade::handle<StepGeom_Line> &  ) >(&StepToGeom::MakeLine),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeLine2d_s",
                    (opencascade::handle<Geom2d_Line> (*)( const opencascade::handle<StepGeom_Line> &  ) ) static_cast<opencascade::handle<Geom2d_Line> (*)( const opencascade::handle<StepGeom_Line> &  ) >(&StepToGeom::MakeLine2d),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeParabola_s",
                    (opencascade::handle<Geom_Parabola> (*)( const opencascade::handle<StepGeom_Parabola> &  ) ) static_cast<opencascade::handle<Geom_Parabola> (*)( const opencascade::handle<StepGeom_Parabola> &  ) >(&StepToGeom::MakeParabola),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeParabola2d_s",
                    (opencascade::handle<Geom2d_Parabola> (*)( const opencascade::handle<StepGeom_Parabola> &  ) ) static_cast<opencascade::handle<Geom2d_Parabola> (*)( const opencascade::handle<StepGeom_Parabola> &  ) >(&StepToGeom::MakeParabola2d),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakePlane_s",
                    (opencascade::handle<Geom_Plane> (*)( const opencascade::handle<StepGeom_Plane> &  ) ) static_cast<opencascade::handle<Geom_Plane> (*)( const opencascade::handle<StepGeom_Plane> &  ) >(&StepToGeom::MakePlane),
                    R"#(None)#"  , py::arg("SP"))
        .def_static("MakePolyline_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<StepGeom_Polyline> &  ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<StepGeom_Polyline> &  ) >(&StepToGeom::MakePolyline),
                    R"#(None)#"  , py::arg("SPL"))
        .def_static("MakePolyline2d_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<StepGeom_Polyline> &  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<StepGeom_Polyline> &  ) >(&StepToGeom::MakePolyline2d),
                    R"#(None)#"  , py::arg("SPL"))
        .def_static("MakeRectangularTrimmedSurface_s",
                    (opencascade::handle<Geom_RectangularTrimmedSurface> (*)( const opencascade::handle<StepGeom_RectangularTrimmedSurface> &  ) ) static_cast<opencascade::handle<Geom_RectangularTrimmedSurface> (*)( const opencascade::handle<StepGeom_RectangularTrimmedSurface> &  ) >(&StepToGeom::MakeRectangularTrimmedSurface),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeSphericalSurface_s",
                    (opencascade::handle<Geom_SphericalSurface> (*)( const opencascade::handle<StepGeom_SphericalSurface> &  ) ) static_cast<opencascade::handle<Geom_SphericalSurface> (*)( const opencascade::handle<StepGeom_SphericalSurface> &  ) >(&StepToGeom::MakeSphericalSurface),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeSurface_s",
                    (opencascade::handle<Geom_Surface> (*)( const opencascade::handle<StepGeom_Surface> &  ) ) static_cast<opencascade::handle<Geom_Surface> (*)( const opencascade::handle<StepGeom_Surface> &  ) >(&StepToGeom::MakeSurface),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeSurfaceOfLinearExtrusion_s",
                    (opencascade::handle<Geom_SurfaceOfLinearExtrusion> (*)( const opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> &  ) ) static_cast<opencascade::handle<Geom_SurfaceOfLinearExtrusion> (*)( const opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> &  ) >(&StepToGeom::MakeSurfaceOfLinearExtrusion),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeSurfaceOfRevolution_s",
                    (opencascade::handle<Geom_SurfaceOfRevolution> (*)( const opencascade::handle<StepGeom_SurfaceOfRevolution> &  ) ) static_cast<opencascade::handle<Geom_SurfaceOfRevolution> (*)( const opencascade::handle<StepGeom_SurfaceOfRevolution> &  ) >(&StepToGeom::MakeSurfaceOfRevolution),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeSweptSurface_s",
                    (opencascade::handle<Geom_SweptSurface> (*)( const opencascade::handle<StepGeom_SweptSurface> &  ) ) static_cast<opencascade::handle<Geom_SweptSurface> (*)( const opencascade::handle<StepGeom_SweptSurface> &  ) >(&StepToGeom::MakeSweptSurface),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeToroidalSurface_s",
                    (opencascade::handle<Geom_ToroidalSurface> (*)( const opencascade::handle<StepGeom_ToroidalSurface> &  ) ) static_cast<opencascade::handle<Geom_ToroidalSurface> (*)( const opencascade::handle<StepGeom_ToroidalSurface> &  ) >(&StepToGeom::MakeToroidalSurface),
                    R"#(None)#"  , py::arg("SS"))
        .def_static("MakeTransformation2d_s",
                    (Standard_Boolean (*)( const opencascade::handle<StepGeom_CartesianTransformationOperator2d> & ,  gp_Trsf2d &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<StepGeom_CartesianTransformationOperator2d> & ,  gp_Trsf2d &  ) >(&StepToGeom::MakeTransformation2d),
                    R"#(None)#"  , py::arg("SCTO"),  py::arg("CT"))
        .def_static("MakeTransformation3d_s",
                    (Standard_Boolean (*)( const opencascade::handle<StepGeom_CartesianTransformationOperator3d> & ,  gp_Trsf &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<StepGeom_CartesianTransformationOperator3d> & ,  gp_Trsf &  ) >(&StepToGeom::MakeTransformation3d),
                    R"#(None)#"  , py::arg("SCTO"),  py::arg("CT"))
        .def_static("MakeTrimmedCurve_s",
                    (opencascade::handle<Geom_TrimmedCurve> (*)( const opencascade::handle<StepGeom_TrimmedCurve> &  ) ) static_cast<opencascade::handle<Geom_TrimmedCurve> (*)( const opencascade::handle<StepGeom_TrimmedCurve> &  ) >(&StepToGeom::MakeTrimmedCurve),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeTrimmedCurve2d_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<StepGeom_TrimmedCurve> &  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<StepGeom_TrimmedCurve> &  ) >(&StepToGeom::MakeTrimmedCurve2d),
                    R"#(None)#"  , py::arg("SC"))
        .def_static("MakeVectorWithMagnitude_s",
                    (opencascade::handle<Geom_VectorWithMagnitude> (*)( const opencascade::handle<StepGeom_Vector> &  ) ) static_cast<opencascade::handle<Geom_VectorWithMagnitude> (*)( const opencascade::handle<StepGeom_Vector> &  ) >(&StepToGeom::MakeVectorWithMagnitude),
                    R"#(None)#"  , py::arg("SV"))
        .def_static("MakeVectorWithMagnitude2d_s",
                    (opencascade::handle<Geom2d_VectorWithMagnitude> (*)( const opencascade::handle<StepGeom_Vector> &  ) ) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (*)( const opencascade::handle<StepGeom_Vector> &  ) >(&StepToGeom::MakeVectorWithMagnitude2d),
                    R"#(None)#"  , py::arg("SV"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepToGeom.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
