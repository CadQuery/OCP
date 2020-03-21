
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BoundaryCurve.hxx>
#include <StepGeom_DegeneratePcurve.hxx>
#include <StepData_SelectMember.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Vector.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BezierCurve.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_QuasiUniformSurface.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepRepr_ParametricRepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Vector.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_UniformSurface.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StepGeom_BezierSurface.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_QuasiUniformCurve.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BSplineSurfaceWithKnots.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Vector.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepGeom_SurfaceCurve.hxx>
#include <StepGeom_CompositeCurveOnSurface.hxx>
#include <StepGeom_UniformCurve.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StepGeom_Direction.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
#include <TCollection_HAsciiString.hxx>

// module includes
#include <StepGeom_Array1OfBoundaryCurve.hxx>
#include <StepGeom_Array1OfCartesianPoint.hxx>
#include <StepGeom_Array1OfCompositeCurveSegment.hxx>
#include <StepGeom_Array1OfCurve.hxx>
#include <StepGeom_Array1OfPcurveOrSurface.hxx>
#include <StepGeom_Array1OfSurfaceBoundary.hxx>
#include <StepGeom_Array1OfTrimmingSelect.hxx>
#include <StepGeom_Array2OfCartesianPoint.hxx>
#include <StepGeom_Array2OfSurfacePatch.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <StepGeom_Axis2Placement.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_BezierCurve.hxx>
#include <StepGeom_BezierCurveAndRationalBSplineCurve.hxx>
#include <StepGeom_BezierSurface.hxx>
#include <StepGeom_BezierSurfaceAndRationalBSplineSurface.hxx>
#include <StepGeom_BoundaryCurve.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <StepGeom_BSplineCurveForm.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <StepGeom_BSplineSurface.hxx>
#include <StepGeom_BSplineSurfaceForm.hxx>
#include <StepGeom_BSplineSurfaceWithKnots.hxx>
#include <StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
#include <StepGeom_CartesianTransformationOperator2d.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <StepGeom_Circle.hxx>
#include <StepGeom_CompositeCurve.hxx>
#include <StepGeom_CompositeCurveOnSurface.hxx>
#include <StepGeom_CompositeCurveSegment.hxx>
#include <StepGeom_Conic.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <StepGeom_CurveOnSurface.hxx>
#include <StepGeom_CurveReplica.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StepGeom_DegeneratePcurve.hxx>
#include <StepGeom_DegenerateToroidalSurface.hxx>
#include <StepGeom_Direction.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StepGeom_Ellipse.hxx>
#include <StepGeom_EvaluatedDegeneratePcurve.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext.hxx>
#include <StepGeom_GeometricRepresentationContextAndParametricRepresentationContext.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <StepGeom_HArray1OfBoundaryCurve.hxx>
#include <StepGeom_HArray1OfCartesianPoint.hxx>
#include <StepGeom_HArray1OfCompositeCurveSegment.hxx>
#include <StepGeom_HArray1OfCurve.hxx>
#include <StepGeom_HArray1OfPcurveOrSurface.hxx>
#include <StepGeom_HArray1OfSurfaceBoundary.hxx>
#include <StepGeom_HArray1OfTrimmingSelect.hxx>
#include <StepGeom_HArray2OfCartesianPoint.hxx>
#include <StepGeom_HArray2OfSurfacePatch.hxx>
#include <StepGeom_Hyperbola.hxx>
#include <StepGeom_IntersectionCurve.hxx>
#include <StepGeom_KnotType.hxx>
#include <StepGeom_Line.hxx>
#include <StepGeom_OffsetCurve3d.hxx>
#include <StepGeom_OffsetSurface.hxx>
#include <StepGeom_OrientedSurface.hxx>
#include <StepGeom_OuterBoundaryCurve.hxx>
#include <StepGeom_Parabola.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepGeom_PcurveOrSurface.hxx>
#include <StepGeom_Placement.hxx>
#include <StepGeom_Plane.hxx>
#include <StepGeom_Point.hxx>
#include <StepGeom_PointOnCurve.hxx>
#include <StepGeom_PointOnSurface.hxx>
#include <StepGeom_PointReplica.hxx>
#include <StepGeom_Polyline.hxx>
#include <StepGeom_PreferredSurfaceCurveRepresentation.hxx>
#include <StepGeom_QuasiUniformCurve.hxx>
#include <StepGeom_QuasiUniformCurveAndRationalBSplineCurve.hxx>
#include <StepGeom_QuasiUniformSurface.hxx>
#include <StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <StepGeom_RectangularCompositeSurface.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StepGeom_ReparametrisedCompositeCurveSegment.hxx>
#include <StepGeom_SeamCurve.hxx>
#include <StepGeom_SphericalSurface.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_SurfaceBoundary.hxx>
#include <StepGeom_SurfaceCurve.hxx>
#include <StepGeom_SurfaceCurveAndBoundedCurve.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <StepGeom_SurfacePatch.hxx>
#include <StepGeom_SurfaceReplica.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StepGeom_ToroidalSurface.hxx>
#include <StepGeom_TransitionCode.hxx>
#include <StepGeom_TrimmedCurve.hxx>
#include <StepGeom_TrimmingMember.hxx>
#include <StepGeom_TrimmingPreference.hxx>
#include <StepGeom_TrimmingSelect.hxx>
#include <StepGeom_UniformCurve.hxx>
#include <StepGeom_UniformCurveAndRationalBSplineCurve.hxx>
#include <StepGeom_UniformSurface.hxx>
#include <StepGeom_UniformSurfaceAndRationalBSplineSurface.hxx>
#include <StepGeom_Vector.hxx>
#include <StepGeom_VectorOrDirection.hxx>

// template related includes
// ./opencascade/StepGeom_Array1OfPcurveOrSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepGeom_Array1OfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepGeom_Array2OfCartesianPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepGeom_Array1OfBoundaryCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepGeom_Array1OfCompositeCurveSegment.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepGeom_Array1OfCartesianPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepGeom_Array1OfSurfaceBoundary.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepGeom_Array1OfTrimmingSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepGeom_Array2OfSurfacePatch.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepGeom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepGeom"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepGeom_Axis2Placement , shared_ptr<StepGeom_Axis2Placement> , StepData_SelectType>>(m.attr("StepGeom_Axis2Placement"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_Axis2Placement::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_Axis2Placement::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_Axis2Placement::CaseNum),
             R"#(Recognizes a Axis2Placement Kind Entity that is : 1 -> Axis2Placement2d 2 -> Axis2Placement3d 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CompositeCurveSegment ,opencascade::handle<StepGeom_CompositeCurveSegment> , Standard_Transient>>(m.attr("StepGeom_CompositeCurveSegment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CompositeCurveSegment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CompositeCurveSegment::*)() const>(&StepGeom_CompositeCurveSegment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CompositeCurveSegment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CurveOnSurface , shared_ptr<StepGeom_CurveOnSurface> , StepData_SelectType>>(m.attr("StepGeom_CurveOnSurface"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_CurveOnSurface::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_CurveOnSurface::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_CurveOnSurface::CaseNum),
             R"#(Recognizes a CurveOnSurface Kind Entity that is : 1 -> Pcurve 2 -> SurfaceCurve 3 -> CompositeCurveOnSurface 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx ,opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> , StepRepr_RepresentationContext>>(m.attr("StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_GeometricRepresentationContext ,opencascade::handle<StepGeom_GeometricRepresentationContext> , StepRepr_RepresentationContext>>(m.attr("StepGeom_GeometricRepresentationContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContext::*)() const>(&StepGeom_GeometricRepresentationContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_GeometricRepresentationContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext ,opencascade::handle<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext> , StepRepr_RepresentationContext>>(m.attr("StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const>(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext ,opencascade::handle<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext> , StepRepr_RepresentationContext>>(m.attr("StepGeom_GeometricRepresentationContextAndParametricRepresentationContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)() const>(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_GeometricRepresentationItem ,opencascade::handle<StepGeom_GeometricRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepGeom_GeometricRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationItem::*)() const>(&StepGeom_GeometricRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_GeometricRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_HArray1OfBoundaryCurve ,opencascade::handle<StepGeom_HArray1OfBoundaryCurve> , StepGeom_Array1OfBoundaryCurve, Standard_Transient>>(m.attr("StepGeom_HArray1OfBoundaryCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepGeom_BoundaryCurve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepGeom_BoundaryCurve> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepGeom_Array1OfBoundaryCurve & (StepGeom_HArray1OfBoundaryCurve::*)() const) static_cast<const StepGeom_Array1OfBoundaryCurve & (StepGeom_HArray1OfBoundaryCurve::*)() const>(&StepGeom_HArray1OfBoundaryCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepGeom_Array1OfBoundaryCurve & (StepGeom_HArray1OfBoundaryCurve::*)() ) static_cast<StepGeom_Array1OfBoundaryCurve & (StepGeom_HArray1OfBoundaryCurve::*)() >(&StepGeom_HArray1OfBoundaryCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfBoundaryCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfBoundaryCurve::*)() const>(&StepGeom_HArray1OfBoundaryCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_HArray1OfBoundaryCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_HArray1OfBoundaryCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_HArray1OfCartesianPoint ,opencascade::handle<StepGeom_HArray1OfCartesianPoint> , StepGeom_Array1OfCartesianPoint, Standard_Transient>>(m.attr("StepGeom_HArray1OfCartesianPoint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepGeom_CartesianPoint> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepGeom_CartesianPoint> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepGeom_Array1OfCartesianPoint & (StepGeom_HArray1OfCartesianPoint::*)() const) static_cast<const StepGeom_Array1OfCartesianPoint & (StepGeom_HArray1OfCartesianPoint::*)() const>(&StepGeom_HArray1OfCartesianPoint::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepGeom_Array1OfCartesianPoint & (StepGeom_HArray1OfCartesianPoint::*)() ) static_cast<StepGeom_Array1OfCartesianPoint & (StepGeom_HArray1OfCartesianPoint::*)() >(&StepGeom_HArray1OfCartesianPoint::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfCartesianPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfCartesianPoint::*)() const>(&StepGeom_HArray1OfCartesianPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_HArray1OfCartesianPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_HArray1OfCartesianPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_HArray1OfCompositeCurveSegment ,opencascade::handle<StepGeom_HArray1OfCompositeCurveSegment> , StepGeom_Array1OfCompositeCurveSegment, Standard_Transient>>(m.attr("StepGeom_HArray1OfCompositeCurveSegment"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepGeom_CompositeCurveSegment> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepGeom_CompositeCurveSegment> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepGeom_Array1OfCompositeCurveSegment & (StepGeom_HArray1OfCompositeCurveSegment::*)() const) static_cast<const StepGeom_Array1OfCompositeCurveSegment & (StepGeom_HArray1OfCompositeCurveSegment::*)() const>(&StepGeom_HArray1OfCompositeCurveSegment::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepGeom_Array1OfCompositeCurveSegment & (StepGeom_HArray1OfCompositeCurveSegment::*)() ) static_cast<StepGeom_Array1OfCompositeCurveSegment & (StepGeom_HArray1OfCompositeCurveSegment::*)() >(&StepGeom_HArray1OfCompositeCurveSegment::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfCompositeCurveSegment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfCompositeCurveSegment::*)() const>(&StepGeom_HArray1OfCompositeCurveSegment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_HArray1OfCompositeCurveSegment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_HArray1OfCompositeCurveSegment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_HArray1OfCurve ,opencascade::handle<StepGeom_HArray1OfCurve> , StepGeom_Array1OfCurve, Standard_Transient>>(m.attr("StepGeom_HArray1OfCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepGeom_Curve> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepGeom_Curve> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepGeom_Array1OfCurve & (StepGeom_HArray1OfCurve::*)() const) static_cast<const StepGeom_Array1OfCurve & (StepGeom_HArray1OfCurve::*)() const>(&StepGeom_HArray1OfCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepGeom_Array1OfCurve & (StepGeom_HArray1OfCurve::*)() ) static_cast<StepGeom_Array1OfCurve & (StepGeom_HArray1OfCurve::*)() >(&StepGeom_HArray1OfCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfCurve::*)() const>(&StepGeom_HArray1OfCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_HArray1OfCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_HArray1OfCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_HArray1OfPcurveOrSurface ,opencascade::handle<StepGeom_HArray1OfPcurveOrSurface> , StepGeom_Array1OfPcurveOrSurface, Standard_Transient>>(m.attr("StepGeom_HArray1OfPcurveOrSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepGeom_PcurveOrSurface & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepGeom_PcurveOrSurface> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepGeom_Array1OfPcurveOrSurface & (StepGeom_HArray1OfPcurveOrSurface::*)() const) static_cast<const StepGeom_Array1OfPcurveOrSurface & (StepGeom_HArray1OfPcurveOrSurface::*)() const>(&StepGeom_HArray1OfPcurveOrSurface::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepGeom_Array1OfPcurveOrSurface & (StepGeom_HArray1OfPcurveOrSurface::*)() ) static_cast<StepGeom_Array1OfPcurveOrSurface & (StepGeom_HArray1OfPcurveOrSurface::*)() >(&StepGeom_HArray1OfPcurveOrSurface::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfPcurveOrSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfPcurveOrSurface::*)() const>(&StepGeom_HArray1OfPcurveOrSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_HArray1OfPcurveOrSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_HArray1OfPcurveOrSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_HArray1OfSurfaceBoundary ,opencascade::handle<StepGeom_HArray1OfSurfaceBoundary> , StepGeom_Array1OfSurfaceBoundary, Standard_Transient>>(m.attr("StepGeom_HArray1OfSurfaceBoundary"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepGeom_SurfaceBoundary & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepGeom_SurfaceBoundary> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepGeom_Array1OfSurfaceBoundary & (StepGeom_HArray1OfSurfaceBoundary::*)() const) static_cast<const StepGeom_Array1OfSurfaceBoundary & (StepGeom_HArray1OfSurfaceBoundary::*)() const>(&StepGeom_HArray1OfSurfaceBoundary::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepGeom_Array1OfSurfaceBoundary & (StepGeom_HArray1OfSurfaceBoundary::*)() ) static_cast<StepGeom_Array1OfSurfaceBoundary & (StepGeom_HArray1OfSurfaceBoundary::*)() >(&StepGeom_HArray1OfSurfaceBoundary::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfSurfaceBoundary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfSurfaceBoundary::*)() const>(&StepGeom_HArray1OfSurfaceBoundary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_HArray1OfSurfaceBoundary::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_HArray1OfSurfaceBoundary::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_HArray1OfTrimmingSelect ,opencascade::handle<StepGeom_HArray1OfTrimmingSelect> , StepGeom_Array1OfTrimmingSelect, Standard_Transient>>(m.attr("StepGeom_HArray1OfTrimmingSelect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepGeom_TrimmingSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepGeom_TrimmingSelect> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepGeom_Array1OfTrimmingSelect & (StepGeom_HArray1OfTrimmingSelect::*)() const) static_cast<const StepGeom_Array1OfTrimmingSelect & (StepGeom_HArray1OfTrimmingSelect::*)() const>(&StepGeom_HArray1OfTrimmingSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepGeom_Array1OfTrimmingSelect & (StepGeom_HArray1OfTrimmingSelect::*)() ) static_cast<StepGeom_Array1OfTrimmingSelect & (StepGeom_HArray1OfTrimmingSelect::*)() >(&StepGeom_HArray1OfTrimmingSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfTrimmingSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_HArray1OfTrimmingSelect::*)() const>(&StepGeom_HArray1OfTrimmingSelect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_HArray1OfTrimmingSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_HArray1OfTrimmingSelect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_HArray2OfCartesianPoint ,opencascade::handle<StepGeom_HArray2OfCartesianPoint> , StepGeom_Array2OfCartesianPoint, Standard_Transient>>(m.attr("StepGeom_HArray2OfCartesianPoint"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<StepGeom_CartesianPoint> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<StepGeom_CartesianPoint> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const StepGeom_Array2OfCartesianPoint & (StepGeom_HArray2OfCartesianPoint::*)() const) static_cast<const StepGeom_Array2OfCartesianPoint & (StepGeom_HArray2OfCartesianPoint::*)() const>(&StepGeom_HArray2OfCartesianPoint::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (StepGeom_Array2OfCartesianPoint & (StepGeom_HArray2OfCartesianPoint::*)() ) static_cast<StepGeom_Array2OfCartesianPoint & (StepGeom_HArray2OfCartesianPoint::*)() >(&StepGeom_HArray2OfCartesianPoint::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_HArray2OfCartesianPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_HArray2OfCartesianPoint::*)() const>(&StepGeom_HArray2OfCartesianPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_HArray2OfCartesianPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_HArray2OfCartesianPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_HArray2OfSurfacePatch ,opencascade::handle<StepGeom_HArray2OfSurfacePatch> , StepGeom_Array2OfSurfacePatch, Standard_Transient>>(m.attr("StepGeom_HArray2OfSurfacePatch"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer, const opencascade::handle<StepGeom_SurfacePatch> & >()  , py::arg("theRowLow"),  py::arg("theRowUpp"),  py::arg("theColLow"),  py::arg("theColUpp"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<StepGeom_SurfacePatch> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array2",
             (const StepGeom_Array2OfSurfacePatch & (StepGeom_HArray2OfSurfacePatch::*)() const) static_cast<const StepGeom_Array2OfSurfacePatch & (StepGeom_HArray2OfSurfacePatch::*)() const>(&StepGeom_HArray2OfSurfacePatch::Array2),
             R"#(None)#" )
        .def("ChangeArray2",
             (StepGeom_Array2OfSurfacePatch & (StepGeom_HArray2OfSurfacePatch::*)() ) static_cast<StepGeom_Array2OfSurfacePatch & (StepGeom_HArray2OfSurfacePatch::*)() >(&StepGeom_HArray2OfSurfacePatch::ChangeArray2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_HArray2OfSurfacePatch::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_HArray2OfSurfacePatch::*)() const>(&StepGeom_HArray2OfSurfacePatch::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_HArray2OfSurfacePatch::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_HArray2OfSurfacePatch::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_PcurveOrSurface , shared_ptr<StepGeom_PcurveOrSurface> , StepData_SelectType>>(m.attr("StepGeom_PcurveOrSurface"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_PcurveOrSurface::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_PcurveOrSurface::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_PcurveOrSurface::CaseNum),
             R"#(Recognizes a PcurveOrSurface Kind Entity that is : 1 -> Pcurve 2 -> Surface 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceBoundary , shared_ptr<StepGeom_SurfaceBoundary> , StepData_SelectType>>(m.attr("StepGeom_SurfaceBoundary"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_SurfaceBoundary::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_SurfaceBoundary::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_SurfaceBoundary::CaseNum),
             R"#(Recognizes a kind of SurfaceBoundary select type 1 -> BoundaryCurve from StepGeom 2 -> DegeneratePcurve from StepGeom 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfacePatch ,opencascade::handle<StepGeom_SurfacePatch> , Standard_Transient>>(m.attr("StepGeom_SurfacePatch"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfacePatch::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfacePatch::*)() const>(&StepGeom_SurfacePatch::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfacePatch::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_TrimmingMember ,opencascade::handle<StepGeom_TrimmingMember> , StepData_SelectReal>>(m.attr("StepGeom_TrimmingMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepGeom_TrimmingMember::*)() const) static_cast<Standard_Boolean (StepGeom_TrimmingMember::*)() const>(&StepGeom_TrimmingMember::HasName),
             R"#(None)#" )
        .def("Name",
             (Standard_CString (StepGeom_TrimmingMember::*)() const) static_cast<Standard_CString (StepGeom_TrimmingMember::*)() const>(&StepGeom_TrimmingMember::Name),
             R"#(None)#" )
        .def("SetName",
             (Standard_Boolean (StepGeom_TrimmingMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepGeom_TrimmingMember::*)( const Standard_CString ) >(&StepGeom_TrimmingMember::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_TrimmingMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_TrimmingMember::*)() const>(&StepGeom_TrimmingMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_TrimmingMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_TrimmingSelect , shared_ptr<StepGeom_TrimmingSelect> , StepData_SelectType>>(m.attr("StepGeom_TrimmingSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_TrimmingSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_TrimmingSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_TrimmingSelect::CaseNum),
             R"#(Recognizes a TrimmingSelect Kind Entity that is : 1 -> CartesianPoint 0 else (i.e. Real))#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepGeom_TrimmingSelect::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepGeom_TrimmingSelect::*)() const>(&StepGeom_TrimmingSelect::NewMember),
             R"#(Returns a TrimmingMember (for PARAMETER_VALUE) as preferred)#" )
        .def("CaseMem",
             (Standard_Integer (StepGeom_TrimmingSelect::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepGeom_TrimmingSelect::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepGeom_TrimmingSelect::CaseMem),
             R"#(Recognizes a SelectMember as Real, named as PARAMETER_VALUE 1 -> ParameterValue i.e. Real 0 else (i.e. Entity))#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_VectorOrDirection , shared_ptr<StepGeom_VectorOrDirection> , StepData_SelectType>>(m.attr("StepGeom_VectorOrDirection"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_VectorOrDirection::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_VectorOrDirection::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_VectorOrDirection::CaseNum),
             R"#(Recognizes a VectorOrDirection Kind Entity that is : 1 -> Vector 2 -> Direction 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CartesianTransformationOperator ,opencascade::handle<StepGeom_CartesianTransformationOperator> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_CartesianTransformationOperator"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CartesianTransformationOperator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CartesianTransformationOperator::*)() const>(&StepGeom_CartesianTransformationOperator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CartesianTransformationOperator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Curve ,opencascade::handle<StepGeom_Curve> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Curve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Curve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Curve::*)() const>(&StepGeom_Curve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Curve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Direction ,opencascade::handle<StepGeom_Direction> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Direction"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Direction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Direction::*)() const>(&StepGeom_Direction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Direction::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Placement ,opencascade::handle<StepGeom_Placement> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Placement"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Placement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Placement::*)() const>(&StepGeom_Placement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Placement::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Point ,opencascade::handle<StepGeom_Point> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Point"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Point::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Point::*)() const>(&StepGeom_Point::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Point::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_ReparametrisedCompositeCurveSegment ,opencascade::handle<StepGeom_ReparametrisedCompositeCurveSegment> , StepGeom_CompositeCurveSegment>>(m.attr("StepGeom_ReparametrisedCompositeCurveSegment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_ReparametrisedCompositeCurveSegment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_ReparametrisedCompositeCurveSegment::*)() const>(&StepGeom_ReparametrisedCompositeCurveSegment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_ReparametrisedCompositeCurveSegment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Surface ,opencascade::handle<StepGeom_Surface> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Surface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Surface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Surface::*)() const>(&StepGeom_Surface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Surface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Vector ,opencascade::handle<StepGeom_Vector> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Vector"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Vector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Vector::*)() const>(&StepGeom_Vector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Vector::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Axis1Placement ,opencascade::handle<StepGeom_Axis1Placement> , StepGeom_Placement>>(m.attr("StepGeom_Axis1Placement"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Axis1Placement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Axis1Placement::*)() const>(&StepGeom_Axis1Placement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Axis1Placement::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Axis2Placement2d ,opencascade::handle<StepGeom_Axis2Placement2d> , StepGeom_Placement>>(m.attr("StepGeom_Axis2Placement2d"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Axis2Placement2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Axis2Placement2d::*)() const>(&StepGeom_Axis2Placement2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Axis2Placement2d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Axis2Placement3d ,opencascade::handle<StepGeom_Axis2Placement3d> , StepGeom_Placement>>(m.attr("StepGeom_Axis2Placement3d"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Axis2Placement3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Axis2Placement3d::*)() const>(&StepGeom_Axis2Placement3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Axis2Placement3d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BoundedCurve ,opencascade::handle<StepGeom_BoundedCurve> , StepGeom_Curve>>(m.attr("StepGeom_BoundedCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BoundedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BoundedCurve::*)() const>(&StepGeom_BoundedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BoundedCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BoundedSurface ,opencascade::handle<StepGeom_BoundedSurface> , StepGeom_Surface>>(m.attr("StepGeom_BoundedSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BoundedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BoundedSurface::*)() const>(&StepGeom_BoundedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BoundedSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CartesianPoint ,opencascade::handle<StepGeom_CartesianPoint> , StepGeom_Point>>(m.attr("StepGeom_CartesianPoint"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CartesianPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CartesianPoint::*)() const>(&StepGeom_CartesianPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CartesianPoint::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CartesianTransformationOperator2d ,opencascade::handle<StepGeom_CartesianTransformationOperator2d> , StepGeom_CartesianTransformationOperator>>(m.attr("StepGeom_CartesianTransformationOperator2d"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CartesianTransformationOperator2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CartesianTransformationOperator2d::*)() const>(&StepGeom_CartesianTransformationOperator2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CartesianTransformationOperator2d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CartesianTransformationOperator3d ,opencascade::handle<StepGeom_CartesianTransformationOperator3d> , StepGeom_CartesianTransformationOperator>>(m.attr("StepGeom_CartesianTransformationOperator3d"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CartesianTransformationOperator3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CartesianTransformationOperator3d::*)() const>(&StepGeom_CartesianTransformationOperator3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CartesianTransformationOperator3d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Conic ,opencascade::handle<StepGeom_Conic> , StepGeom_Curve>>(m.attr("StepGeom_Conic"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Conic::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Conic::*)() const>(&StepGeom_Conic::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Conic::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CurveReplica ,opencascade::handle<StepGeom_CurveReplica> , StepGeom_Curve>>(m.attr("StepGeom_CurveReplica"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CurveReplica::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CurveReplica::*)() const>(&StepGeom_CurveReplica::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CurveReplica::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_DegeneratePcurve ,opencascade::handle<StepGeom_DegeneratePcurve> , StepGeom_Point>>(m.attr("StepGeom_DegeneratePcurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_DegeneratePcurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_DegeneratePcurve::*)() const>(&StepGeom_DegeneratePcurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_DegeneratePcurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_ElementarySurface ,opencascade::handle<StepGeom_ElementarySurface> , StepGeom_Surface>>(m.attr("StepGeom_ElementarySurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_ElementarySurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_ElementarySurface::*)() const>(&StepGeom_ElementarySurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_ElementarySurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Line ,opencascade::handle<StepGeom_Line> , StepGeom_Curve>>(m.attr("StepGeom_Line"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Line::*)() const>(&StepGeom_Line::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Line::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_OffsetCurve3d ,opencascade::handle<StepGeom_OffsetCurve3d> , StepGeom_Curve>>(m.attr("StepGeom_OffsetCurve3d"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_OffsetCurve3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_OffsetCurve3d::*)() const>(&StepGeom_OffsetCurve3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_OffsetCurve3d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_OffsetSurface ,opencascade::handle<StepGeom_OffsetSurface> , StepGeom_Surface>>(m.attr("StepGeom_OffsetSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_OffsetSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_OffsetSurface::*)() const>(&StepGeom_OffsetSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_OffsetSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_OrientedSurface ,opencascade::handle<StepGeom_OrientedSurface> , StepGeom_Surface>>(m.attr("StepGeom_OrientedSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_OrientedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_OrientedSurface::*)() const>(&StepGeom_OrientedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_OrientedSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Pcurve ,opencascade::handle<StepGeom_Pcurve> , StepGeom_Curve>>(m.attr("StepGeom_Pcurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Pcurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Pcurve::*)() const>(&StepGeom_Pcurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Pcurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_PointOnCurve ,opencascade::handle<StepGeom_PointOnCurve> , StepGeom_Point>>(m.attr("StepGeom_PointOnCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_PointOnCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_PointOnCurve::*)() const>(&StepGeom_PointOnCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_PointOnCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_PointOnSurface ,opencascade::handle<StepGeom_PointOnSurface> , StepGeom_Point>>(m.attr("StepGeom_PointOnSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_PointOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_PointOnSurface::*)() const>(&StepGeom_PointOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_PointOnSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_PointReplica ,opencascade::handle<StepGeom_PointReplica> , StepGeom_Point>>(m.attr("StepGeom_PointReplica"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_PointReplica::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_PointReplica::*)() const>(&StepGeom_PointReplica::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_PointReplica::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceCurve ,opencascade::handle<StepGeom_SurfaceCurve> , StepGeom_Curve>>(m.attr("StepGeom_SurfaceCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfaceCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfaceCurve::*)() const>(&StepGeom_SurfaceCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfaceCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceReplica ,opencascade::handle<StepGeom_SurfaceReplica> , StepGeom_Surface>>(m.attr("StepGeom_SurfaceReplica"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfaceReplica::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfaceReplica::*)() const>(&StepGeom_SurfaceReplica::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfaceReplica::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SweptSurface ,opencascade::handle<StepGeom_SweptSurface> , StepGeom_Surface>>(m.attr("StepGeom_SweptSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SweptSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SweptSurface::*)() const>(&StepGeom_SweptSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SweptSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineCurve ,opencascade::handle<StepGeom_BSplineCurve> , StepGeom_BoundedCurve>>(m.attr("StepGeom_BSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurve::*)() const>(&StepGeom_BSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineSurface ,opencascade::handle<StepGeom_BSplineSurface> , StepGeom_BoundedSurface>>(m.attr("StepGeom_BSplineSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Circle ,opencascade::handle<StepGeom_Circle> , StepGeom_Conic>>(m.attr("StepGeom_Circle"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Circle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Circle::*)() const>(&StepGeom_Circle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Circle::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CompositeCurve ,opencascade::handle<StepGeom_CompositeCurve> , StepGeom_BoundedCurve>>(m.attr("StepGeom_CompositeCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CompositeCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CompositeCurve::*)() const>(&StepGeom_CompositeCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CompositeCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_ConicalSurface ,opencascade::handle<StepGeom_ConicalSurface> , StepGeom_ElementarySurface>>(m.attr("StepGeom_ConicalSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_ConicalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_ConicalSurface::*)() const>(&StepGeom_ConicalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_ConicalSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CurveBoundedSurface ,opencascade::handle<StepGeom_CurveBoundedSurface> , StepGeom_BoundedSurface>>(m.attr("StepGeom_CurveBoundedSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CurveBoundedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CurveBoundedSurface::*)() const>(&StepGeom_CurveBoundedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CurveBoundedSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CylindricalSurface ,opencascade::handle<StepGeom_CylindricalSurface> , StepGeom_ElementarySurface>>(m.attr("StepGeom_CylindricalSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CylindricalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CylindricalSurface::*)() const>(&StepGeom_CylindricalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CylindricalSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Ellipse ,opencascade::handle<StepGeom_Ellipse> , StepGeom_Conic>>(m.attr("StepGeom_Ellipse"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Ellipse::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Ellipse::*)() const>(&StepGeom_Ellipse::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Ellipse::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_EvaluatedDegeneratePcurve ,opencascade::handle<StepGeom_EvaluatedDegeneratePcurve> , StepGeom_DegeneratePcurve>>(m.attr("StepGeom_EvaluatedDegeneratePcurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_EvaluatedDegeneratePcurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_EvaluatedDegeneratePcurve::*)() const>(&StepGeom_EvaluatedDegeneratePcurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_EvaluatedDegeneratePcurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Hyperbola ,opencascade::handle<StepGeom_Hyperbola> , StepGeom_Conic>>(m.attr("StepGeom_Hyperbola"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Hyperbola::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Hyperbola::*)() const>(&StepGeom_Hyperbola::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Hyperbola::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_IntersectionCurve ,opencascade::handle<StepGeom_IntersectionCurve> , StepGeom_SurfaceCurve>>(m.attr("StepGeom_IntersectionCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_IntersectionCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_IntersectionCurve::*)() const>(&StepGeom_IntersectionCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_IntersectionCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Parabola ,opencascade::handle<StepGeom_Parabola> , StepGeom_Conic>>(m.attr("StepGeom_Parabola"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Parabola::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Parabola::*)() const>(&StepGeom_Parabola::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Parabola::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Plane ,opencascade::handle<StepGeom_Plane> , StepGeom_ElementarySurface>>(m.attr("StepGeom_Plane"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Plane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Plane::*)() const>(&StepGeom_Plane::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Plane::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Polyline ,opencascade::handle<StepGeom_Polyline> , StepGeom_BoundedCurve>>(m.attr("StepGeom_Polyline"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Polyline::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Polyline::*)() const>(&StepGeom_Polyline::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Polyline::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_RectangularCompositeSurface ,opencascade::handle<StepGeom_RectangularCompositeSurface> , StepGeom_BoundedSurface>>(m.attr("StepGeom_RectangularCompositeSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_RectangularCompositeSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_RectangularCompositeSurface::*)() const>(&StepGeom_RectangularCompositeSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_RectangularCompositeSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_RectangularTrimmedSurface ,opencascade::handle<StepGeom_RectangularTrimmedSurface> , StepGeom_BoundedSurface>>(m.attr("StepGeom_RectangularTrimmedSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_RectangularTrimmedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_RectangularTrimmedSurface::*)() const>(&StepGeom_RectangularTrimmedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_RectangularTrimmedSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SeamCurve ,opencascade::handle<StepGeom_SeamCurve> , StepGeom_SurfaceCurve>>(m.attr("StepGeom_SeamCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SeamCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SeamCurve::*)() const>(&StepGeom_SeamCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SeamCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SphericalSurface ,opencascade::handle<StepGeom_SphericalSurface> , StepGeom_ElementarySurface>>(m.attr("StepGeom_SphericalSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SphericalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SphericalSurface::*)() const>(&StepGeom_SphericalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SphericalSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceCurveAndBoundedCurve ,opencascade::handle<StepGeom_SurfaceCurveAndBoundedCurve> , StepGeom_SurfaceCurve>>(m.attr("StepGeom_SurfaceCurveAndBoundedCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfaceCurveAndBoundedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfaceCurveAndBoundedCurve::*)() const>(&StepGeom_SurfaceCurveAndBoundedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfaceCurveAndBoundedCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceOfLinearExtrusion ,opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> , StepGeom_SweptSurface>>(m.attr("StepGeom_SurfaceOfLinearExtrusion"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfaceOfLinearExtrusion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfaceOfLinearExtrusion::*)() const>(&StepGeom_SurfaceOfLinearExtrusion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfaceOfLinearExtrusion::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceOfRevolution ,opencascade::handle<StepGeom_SurfaceOfRevolution> , StepGeom_SweptSurface>>(m.attr("StepGeom_SurfaceOfRevolution"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfaceOfRevolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfaceOfRevolution::*)() const>(&StepGeom_SurfaceOfRevolution::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfaceOfRevolution::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_ToroidalSurface ,opencascade::handle<StepGeom_ToroidalSurface> , StepGeom_ElementarySurface>>(m.attr("StepGeom_ToroidalSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_ToroidalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_ToroidalSurface::*)() const>(&StepGeom_ToroidalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_ToroidalSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_TrimmedCurve ,opencascade::handle<StepGeom_TrimmedCurve> , StepGeom_BoundedCurve>>(m.attr("StepGeom_TrimmedCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_TrimmedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_TrimmedCurve::*)() const>(&StepGeom_TrimmedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_TrimmedCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineCurveWithKnots ,opencascade::handle<StepGeom_BSplineCurveWithKnots> , StepGeom_BSplineCurve>>(m.attr("StepGeom_BSplineCurveWithKnots"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurveWithKnots::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurveWithKnots::*)() const>(&StepGeom_BSplineCurveWithKnots::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineCurveWithKnots::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve ,opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineSurfaceWithKnots ,opencascade::handle<StepGeom_BSplineSurfaceWithKnots> , StepGeom_BSplineSurface>>(m.attr("StepGeom_BSplineSurfaceWithKnots"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineSurfaceWithKnots::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface ,opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BezierCurve ,opencascade::handle<StepGeom_BezierCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_BezierCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BezierCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BezierCurve::*)() const>(&StepGeom_BezierCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BezierCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BezierCurveAndRationalBSplineCurve ,opencascade::handle<StepGeom_BezierCurveAndRationalBSplineCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_BezierCurveAndRationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const>(&StepGeom_BezierCurveAndRationalBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BezierCurveAndRationalBSplineCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BezierSurface ,opencascade::handle<StepGeom_BezierSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_BezierSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BezierSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BezierSurface::*)() const>(&StepGeom_BezierSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BezierSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BezierSurfaceAndRationalBSplineSurface ,opencascade::handle<StepGeom_BezierSurfaceAndRationalBSplineSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_BezierSurfaceAndRationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_BezierSurfaceAndRationalBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BezierSurfaceAndRationalBSplineSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CompositeCurveOnSurface ,opencascade::handle<StepGeom_CompositeCurveOnSurface> , StepGeom_CompositeCurve>>(m.attr("StepGeom_CompositeCurveOnSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CompositeCurveOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CompositeCurveOnSurface::*)() const>(&StepGeom_CompositeCurveOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CompositeCurveOnSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_DegenerateToroidalSurface ,opencascade::handle<StepGeom_DegenerateToroidalSurface> , StepGeom_ToroidalSurface>>(m.attr("StepGeom_DegenerateToroidalSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_DegenerateToroidalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_DegenerateToroidalSurface::*)() const>(&StepGeom_DegenerateToroidalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_DegenerateToroidalSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_QuasiUniformCurve ,opencascade::handle<StepGeom_QuasiUniformCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_QuasiUniformCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformCurve::*)() const>(&StepGeom_QuasiUniformCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_QuasiUniformCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_QuasiUniformCurveAndRationalBSplineCurve ,opencascade::handle<StepGeom_QuasiUniformCurveAndRationalBSplineCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_QuasiUniformCurveAndRationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_QuasiUniformSurface ,opencascade::handle<StepGeom_QuasiUniformSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_QuasiUniformSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformSurface::*)() const>(&StepGeom_QuasiUniformSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_QuasiUniformSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface ,opencascade::handle<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_RationalBSplineCurve ,opencascade::handle<StepGeom_RationalBSplineCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_RationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_RationalBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_RationalBSplineCurve::*)() const>(&StepGeom_RationalBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_RationalBSplineCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_RationalBSplineSurface ,opencascade::handle<StepGeom_RationalBSplineSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_RationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_RationalBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_RationalBSplineSurface::*)() const>(&StepGeom_RationalBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_RationalBSplineSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_UniformCurve ,opencascade::handle<StepGeom_UniformCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_UniformCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_UniformCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_UniformCurve::*)() const>(&StepGeom_UniformCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_UniformCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_UniformCurveAndRationalBSplineCurve ,opencascade::handle<StepGeom_UniformCurveAndRationalBSplineCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_UniformCurveAndRationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_UniformCurveAndRationalBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_UniformCurveAndRationalBSplineCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_UniformSurface ,opencascade::handle<StepGeom_UniformSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_UniformSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_UniformSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_UniformSurface::*)() const>(&StepGeom_UniformSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_UniformSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_UniformSurfaceAndRationalBSplineSurface ,opencascade::handle<StepGeom_UniformSurfaceAndRationalBSplineSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_UniformSurfaceAndRationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_UniformSurfaceAndRationalBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_UniformSurfaceAndRationalBSplineSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BoundaryCurve ,opencascade::handle<StepGeom_BoundaryCurve> , StepGeom_CompositeCurveOnSurface>>(m.attr("StepGeom_BoundaryCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BoundaryCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BoundaryCurve::*)() const>(&StepGeom_BoundaryCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BoundaryCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_OuterBoundaryCurve ,opencascade::handle<StepGeom_OuterBoundaryCurve> , StepGeom_BoundaryCurve>>(m.attr("StepGeom_OuterBoundaryCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_OuterBoundaryCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_OuterBoundaryCurve::*)() const>(&StepGeom_OuterBoundaryCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_OuterBoundaryCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepGeom_Array1OfPcurveOrSurface.hxx
// ./opencascade/StepGeom_Hyperbola.hxx
// ./opencascade/StepGeom_Axis2Placement.hxx
// ./opencascade/StepGeom_Placement.hxx
// ./opencascade/StepGeom_OffsetSurface.hxx
// ./opencascade/StepGeom_HArray1OfBoundaryCurve.hxx
// ./opencascade/StepGeom_Array1OfCurve.hxx
// ./opencascade/StepGeom_RectangularTrimmedSurface.hxx
// ./opencascade/StepGeom_SurfaceBoundary.hxx
// ./opencascade/StepGeom_Surface.hxx
// ./opencascade/StepGeom_TrimmingSelect.hxx
// ./opencascade/StepGeom_BSplineCurve.hxx
// ./opencascade/StepGeom_Array2OfCartesianPoint.hxx
// ./opencascade/StepGeom_VectorOrDirection.hxx
// ./opencascade/StepGeom_CurveBoundedSurface.hxx
// ./opencascade/StepGeom_OffsetCurve3d.hxx
// ./opencascade/StepGeom_PointReplica.hxx
// ./opencascade/StepGeom_ElementarySurface.hxx
// ./opencascade/StepGeom_RectangularCompositeSurface.hxx
// ./opencascade/StepGeom_Parabola.hxx
// ./opencascade/StepGeom_QuasiUniformSurface.hxx
// ./opencascade/StepGeom_Conic.hxx
// ./opencascade/StepGeom_KnotType.hxx
// ./opencascade/StepGeom_DegenerateToroidalSurface.hxx
// ./opencascade/StepGeom_Pcurve.hxx
// ./opencascade/StepGeom_TrimmedCurve.hxx
// ./opencascade/StepGeom_HArray1OfCompositeCurveSegment.hxx
// ./opencascade/StepGeom_SurfaceCurve.hxx
// ./opencascade/StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx
// ./opencascade/StepGeom_Axis2Placement3d.hxx
// ./opencascade/StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext.hxx
// ./opencascade/StepGeom_BezierCurveAndRationalBSplineCurve.hxx
// ./opencascade/StepGeom_HArray1OfCurve.hxx
// ./opencascade/StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/StepGeom_BSplineSurfaceWithKnots.hxx
// ./opencascade/StepGeom_BezierCurve.hxx
// ./opencascade/StepGeom_BoundedCurve.hxx
// ./opencascade/StepGeom_BSplineSurface.hxx
// ./opencascade/StepGeom_CompositeCurveOnSurface.hxx
// ./opencascade/StepGeom_CompositeCurveSegment.hxx
// ./opencascade/StepGeom_SphericalSurface.hxx
// ./opencascade/StepGeom_HArray1OfPcurveOrSurface.hxx
// ./opencascade/StepGeom_HArray2OfSurfacePatch.hxx
// ./opencascade/StepGeom_Array1OfBoundaryCurve.hxx
// ./opencascade/StepGeom_SweptSurface.hxx
// ./opencascade/StepGeom_CartesianTransformationOperator2d.hxx
// ./opencascade/StepGeom_EvaluatedDegeneratePcurve.hxx
// ./opencascade/StepGeom_TransitionCode.hxx
// ./opencascade/StepGeom_Array1OfCompositeCurveSegment.hxx
// ./opencascade/StepGeom_BSplineSurfaceForm.hxx
// ./opencascade/StepGeom_PreferredSurfaceCurveRepresentation.hxx
// ./opencascade/StepGeom_Direction.hxx
// ./opencascade/StepGeom_Axis2Placement2d.hxx
// ./opencascade/StepGeom_UniformCurve.hxx
// ./opencascade/StepGeom_RationalBSplineCurve.hxx
// ./opencascade/StepGeom_ConicalSurface.hxx
// ./opencascade/StepGeom_CartesianPoint.hxx
// ./opencascade/StepGeom_GeometricRepresentationContextAndParametricRepresentationContext.hxx
// ./opencascade/StepGeom_OrientedSurface.hxx
// ./opencascade/StepGeom_Polyline.hxx
// ./opencascade/StepGeom_CylindricalSurface.hxx
// ./opencascade/StepGeom_Array1OfCartesianPoint.hxx
// ./opencascade/StepGeom_Array1OfSurfaceBoundary.hxx
// ./opencascade/StepGeom_DegeneratePcurve.hxx
// ./opencascade/StepGeom_TrimmingMember.hxx
// ./opencascade/StepGeom_UniformSurface.hxx
// ./opencascade/StepGeom_Line.hxx
// ./opencascade/StepGeom_BezierSurface.hxx
// ./opencascade/StepGeom_PointOnSurface.hxx
// ./opencascade/StepGeom_ReparametrisedCompositeCurveSegment.hxx
// ./opencascade/StepGeom_ToroidalSurface.hxx
// ./opencascade/StepGeom_RationalBSplineSurface.hxx
// ./opencascade/StepGeom_SeamCurve.hxx
// ./opencascade/StepGeom_PcurveOrSurface.hxx
// ./opencascade/StepGeom_IntersectionCurve.hxx
// ./opencascade/StepGeom_UniformSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/StepGeom_Point.hxx
// ./opencascade/StepGeom_SurfaceCurveAndBoundedCurve.hxx
// ./opencascade/StepGeom_BezierSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/StepGeom_HArray1OfCartesianPoint.hxx
// ./opencascade/StepGeom_QuasiUniformCurveAndRationalBSplineCurve.hxx
// ./opencascade/StepGeom_Axis1Placement.hxx
// ./opencascade/StepGeom_TrimmingPreference.hxx
// ./opencascade/StepGeom_Ellipse.hxx
// ./opencascade/StepGeom_HArray1OfSurfaceBoundary.hxx
// ./opencascade/StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx
// ./opencascade/StepGeom_Array1OfTrimmingSelect.hxx
// ./opencascade/StepGeom_GeometricRepresentationItem.hxx
// ./opencascade/StepGeom_BSplineCurveWithKnots.hxx
// ./opencascade/StepGeom_CartesianTransformationOperator3d.hxx
// ./opencascade/StepGeom_Plane.hxx
// ./opencascade/StepGeom_Array2OfSurfacePatch.hxx
// ./opencascade/StepGeom_BoundaryCurve.hxx
// ./opencascade/StepGeom_SurfaceOfLinearExtrusion.hxx
// ./opencascade/StepGeom_Vector.hxx
// ./opencascade/StepGeom_CurveOnSurface.hxx
// ./opencascade/StepGeom_QuasiUniformCurve.hxx
// ./opencascade/StepGeom_UniformCurveAndRationalBSplineCurve.hxx
// ./opencascade/StepGeom_BSplineCurveForm.hxx
// ./opencascade/StepGeom_SurfacePatch.hxx
// ./opencascade/StepGeom_CartesianTransformationOperator.hxx
// ./opencascade/StepGeom_SurfaceReplica.hxx
// ./opencascade/StepGeom_OuterBoundaryCurve.hxx
// ./opencascade/StepGeom_Circle.hxx
// ./opencascade/StepGeom_SurfaceOfRevolution.hxx
// ./opencascade/StepGeom_GeometricRepresentationContext.hxx
// ./opencascade/StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx
// ./opencascade/StepGeom_Curve.hxx
// ./opencascade/StepGeom_BoundedSurface.hxx
// ./opencascade/StepGeom_PointOnCurve.hxx
// ./opencascade/StepGeom_CompositeCurve.hxx
// ./opencascade/StepGeom_HArray2OfCartesianPoint.hxx
// ./opencascade/StepGeom_HArray1OfTrimmingSelect.hxx
// ./opencascade/StepGeom_CurveReplica.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<StepGeom_PcurveOrSurface>(m,"StepGeom_Array1OfPcurveOrSurface");
    register_template_NCollection_Array1<opencascade::handle<StepGeom_Curve> >(m,"StepGeom_Array1OfCurve");
    register_template_NCollection_Array2<opencascade::handle<StepGeom_CartesianPoint> >(m,"StepGeom_Array2OfCartesianPoint");
    register_template_NCollection_Array1<opencascade::handle<StepGeom_BoundaryCurve> >(m,"StepGeom_Array1OfBoundaryCurve");
    register_template_NCollection_Array1<opencascade::handle<StepGeom_CompositeCurveSegment> >(m,"StepGeom_Array1OfCompositeCurveSegment");
    register_template_NCollection_Array1<opencascade::handle<StepGeom_CartesianPoint> >(m,"StepGeom_Array1OfCartesianPoint");
    register_template_NCollection_Array1<StepGeom_SurfaceBoundary>(m,"StepGeom_Array1OfSurfaceBoundary");
    register_template_NCollection_Array1<StepGeom_TrimmingSelect>(m,"StepGeom_Array1OfTrimmingSelect");
    register_template_NCollection_Array2<opencascade::handle<StepGeom_SurfacePatch> >(m,"StepGeom_Array2OfSurfacePatch");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
