
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepRepr_ParametricRepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_UniformCurve.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Vector.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_QuasiUniformCurve.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Vector.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_BezierSurface.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Vector.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_BezierCurve.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_BoundaryCurve.hxx>
#include <StepGeom_DegeneratePcurve.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_Direction.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_QuasiUniformSurface.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_UniformSurface.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepGeom_SurfaceCurve.hxx>
#include <StepGeom_CompositeCurveOnSurface.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BSplineSurfaceWithKnots.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
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
// ./opencascade\StepGeom_Array2OfCartesianPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepGeom_Array1OfTrimmingSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepGeom_Array2OfSurfacePatch.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepGeom_Array1OfPcurveOrSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepGeom_Array1OfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepGeom_Array1OfBoundaryCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepGeom_Array1OfSurfaceBoundary.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepGeom_Array1OfCartesianPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepGeom_Array1OfCompositeCurveSegment.hxx
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_Axis2Placement::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_Axis2Placement::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_Axis2Placement::CaseNum),
             R"#(Recognizes a Axis2Placement Kind Entity that is : 1 -> Axis2Placement2d 2 -> Axis2Placement3d 0 else)#"  , py::arg("ent"))
        .def("Axis2Placement2d",
             (opencascade::handle<StepGeom_Axis2Placement2d> (StepGeom_Axis2Placement::*)() const) static_cast<opencascade::handle<StepGeom_Axis2Placement2d> (StepGeom_Axis2Placement::*)() const>(&StepGeom_Axis2Placement::Axis2Placement2d),
             R"#(returns Value as a Axis2Placement2d (Null if another type))#" )
        .def("Axis2Placement3d",
             (opencascade::handle<StepGeom_Axis2Placement3d> (StepGeom_Axis2Placement::*)() const) static_cast<opencascade::handle<StepGeom_Axis2Placement3d> (StepGeom_Axis2Placement::*)() const>(&StepGeom_Axis2Placement::Axis2Placement3d),
             R"#(returns Value as a Axis2Placement3d (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CompositeCurveSegment ,opencascade::handle<StepGeom_CompositeCurveSegment> , Standard_Transient>>(m.attr("StepGeom_CompositeCurveSegment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_CompositeCurveSegment::*)( const StepGeom_TransitionCode , const Standard_Boolean , const opencascade::handle<StepGeom_Curve> & ) ) static_cast<void (StepGeom_CompositeCurveSegment::*)( const StepGeom_TransitionCode , const Standard_Boolean , const opencascade::handle<StepGeom_Curve> & ) >(&StepGeom_CompositeCurveSegment::Init),
             R"#(None)#"  , py::arg("aTransition"),  py::arg("aSameSense"),  py::arg("aParentCurve"))
        .def("SetTransition",
             (void (StepGeom_CompositeCurveSegment::*)( const StepGeom_TransitionCode ) ) static_cast<void (StepGeom_CompositeCurveSegment::*)( const StepGeom_TransitionCode ) >(&StepGeom_CompositeCurveSegment::SetTransition),
             R"#(None)#"  , py::arg("aTransition"))
        .def("Transition",
             (StepGeom_TransitionCode (StepGeom_CompositeCurveSegment::*)() const) static_cast<StepGeom_TransitionCode (StepGeom_CompositeCurveSegment::*)() const>(&StepGeom_CompositeCurveSegment::Transition),
             R"#(None)#" )
        .def("SetSameSense",
             (void (StepGeom_CompositeCurveSegment::*)( const Standard_Boolean ) ) static_cast<void (StepGeom_CompositeCurveSegment::*)( const Standard_Boolean ) >(&StepGeom_CompositeCurveSegment::SetSameSense),
             R"#(None)#"  , py::arg("aSameSense"))
        .def("SameSense",
             (Standard_Boolean (StepGeom_CompositeCurveSegment::*)() const) static_cast<Standard_Boolean (StepGeom_CompositeCurveSegment::*)() const>(&StepGeom_CompositeCurveSegment::SameSense),
             R"#(None)#" )
        .def("SetParentCurve",
             (void (StepGeom_CompositeCurveSegment::*)( const opencascade::handle<StepGeom_Curve> & ) ) static_cast<void (StepGeom_CompositeCurveSegment::*)( const opencascade::handle<StepGeom_Curve> & ) >(&StepGeom_CompositeCurveSegment::SetParentCurve),
             R"#(None)#"  , py::arg("aParentCurve"))
        .def("ParentCurve",
             (opencascade::handle<StepGeom_Curve> (StepGeom_CompositeCurveSegment::*)() const) static_cast<opencascade::handle<StepGeom_Curve> (StepGeom_CompositeCurveSegment::*)() const>(&StepGeom_CompositeCurveSegment::ParentCurve),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CompositeCurveSegment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CompositeCurveSegment::*)() const>(&StepGeom_CompositeCurveSegment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CompositeCurveSegment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_CompositeCurveSegment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CurveOnSurface , shared_ptr<StepGeom_CurveOnSurface> , StepData_SelectType>>(m.attr("StepGeom_CurveOnSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_CurveOnSurface::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_CurveOnSurface::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_CurveOnSurface::CaseNum),
             R"#(Recognizes a CurveOnSurface Kind Entity that is : 1 -> Pcurve 2 -> SurfaceCurve 3 -> CompositeCurveOnSurface 0 else)#"  , py::arg("ent"))
        .def("Pcurve",
             (opencascade::handle<StepGeom_Pcurve> (StepGeom_CurveOnSurface::*)() const) static_cast<opencascade::handle<StepGeom_Pcurve> (StepGeom_CurveOnSurface::*)() const>(&StepGeom_CurveOnSurface::Pcurve),
             R"#(returns Value as a Pcurve (Null if another type))#" )
        .def("SurfaceCurve",
             (opencascade::handle<StepGeom_SurfaceCurve> (StepGeom_CurveOnSurface::*)() const) static_cast<opencascade::handle<StepGeom_SurfaceCurve> (StepGeom_CurveOnSurface::*)() const>(&StepGeom_CurveOnSurface::SurfaceCurve),
             R"#(returns Value as a SurfaceCurve (Null if another type))#" )
        .def("CompositeCurveOnSurface",
             (opencascade::handle<StepGeom_CompositeCurveOnSurface> (StepGeom_CurveOnSurface::*)() const) static_cast<opencascade::handle<StepGeom_CompositeCurveOnSurface> (StepGeom_CurveOnSurface::*)() const>(&StepGeom_CurveOnSurface::CompositeCurveOnSurface),
             R"#(returns Value as a CompositeCurveOnSurface (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx ,opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> , StepRepr_RepresentationContext>>(m.attr("StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_GeometricRepresentationContext> & , const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & , const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> & ) ) static_cast<void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_GeometricRepresentationContext> & , const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & , const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> & ) >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::Init),
             R"#(None)#"  , py::arg("aContextIdentifier"),  py::arg("aContextType"),  py::arg("aGeometricRepresentationCtx"),  py::arg("aGlobalUnitAssignedCtx"),  py::arg("aGlobalUncertaintyAssignedCtx"))
        .def("Init",
             (void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepBasic_HArray1OfNamedUnit> & , const opencascade::handle<StepBasic_HArray1OfUncertaintyMeasureWithUnit> & ) ) static_cast<void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepBasic_HArray1OfNamedUnit> & , const opencascade::handle<StepBasic_HArray1OfUncertaintyMeasureWithUnit> & ) >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::Init),
             R"#(None)#"  , py::arg("aContextIdentifier"),  py::arg("aContextType"),  py::arg("aCoordinateSpaceDimension"),  py::arg("aUnits"),  py::arg("anUncertainty"))
        .def("SetGeometricRepresentationContext",
             (void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepGeom_GeometricRepresentationContext> & ) ) static_cast<void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepGeom_GeometricRepresentationContext> & ) >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::SetGeometricRepresentationContext),
             R"#(None)#"  , py::arg("aGeometricRepresentationContext"))
        .def("GeometricRepresentationContext",
             (opencascade::handle<StepGeom_GeometricRepresentationContext> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const) static_cast<opencascade::handle<StepGeom_GeometricRepresentationContext> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::GeometricRepresentationContext),
             R"#(None)#" )
        .def("SetGlobalUnitAssignedContext",
             (void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & ) ) static_cast<void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & ) >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::SetGlobalUnitAssignedContext),
             R"#(None)#"  , py::arg("aGlobalUnitAssignedContext"))
        .def("GlobalUnitAssignedContext",
             (opencascade::handle<StepRepr_GlobalUnitAssignedContext> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const) static_cast<opencascade::handle<StepRepr_GlobalUnitAssignedContext> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::GlobalUnitAssignedContext),
             R"#(None)#" )
        .def("SetGlobalUncertaintyAssignedContext",
             (void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> & ) ) static_cast<void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> & ) >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::SetGlobalUncertaintyAssignedContext),
             R"#(None)#"  , py::arg("aGlobalUncertaintyAssignedCtx"))
        .def("GlobalUncertaintyAssignedContext",
             (opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const) static_cast<opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::GlobalUncertaintyAssignedContext),
             R"#(None)#" )
        .def("SetCoordinateSpaceDimension",
             (void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const Standard_Integer ) ) static_cast<void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const Standard_Integer ) >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::SetCoordinateSpaceDimension),
             R"#(None)#"  , py::arg("aCoordinateSpaceDimension"))
        .def("CoordinateSpaceDimension",
             (Standard_Integer (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const) static_cast<Standard_Integer (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::CoordinateSpaceDimension),
             R"#(None)#" )
        .def("SetUnits",
             (void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepBasic_HArray1OfNamedUnit> & ) ) static_cast<void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepBasic_HArray1OfNamedUnit> & ) >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::SetUnits),
             R"#(None)#"  , py::arg("aUnits"))
        .def("Units",
             (opencascade::handle<StepBasic_HArray1OfNamedUnit> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const) static_cast<opencascade::handle<StepBasic_HArray1OfNamedUnit> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::Units),
             R"#(None)#" )
        .def("UnitsValue",
             (opencascade::handle<StepBasic_NamedUnit> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepBasic_NamedUnit> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const Standard_Integer ) const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::UnitsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbUnits",
             (Standard_Integer (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const) static_cast<Standard_Integer (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::NbUnits),
             R"#(None)#" )
        .def("SetUncertainty",
             (void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepBasic_HArray1OfUncertaintyMeasureWithUnit> & ) ) static_cast<void (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepBasic_HArray1OfUncertaintyMeasureWithUnit> & ) >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::SetUncertainty),
             R"#(None)#"  , py::arg("aUncertainty"))
        .def("Uncertainty",
             (opencascade::handle<StepBasic_HArray1OfUncertaintyMeasureWithUnit> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const) static_cast<opencascade::handle<StepBasic_HArray1OfUncertaintyMeasureWithUnit> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::Uncertainty),
             R"#(None)#" )
        .def("UncertaintyValue",
             (opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const Standard_Integer ) const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::UncertaintyValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbUncertainty",
             (Standard_Integer (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const) static_cast<Standard_Integer (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::NbUncertainty),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)() const>(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_GeometricRepresentationContext ,opencascade::handle<StepGeom_GeometricRepresentationContext> , StepRepr_RepresentationContext>>(m.attr("StepGeom_GeometricRepresentationContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_GeometricRepresentationContext::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer ) ) static_cast<void (StepGeom_GeometricRepresentationContext::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer ) >(&StepGeom_GeometricRepresentationContext::Init),
             R"#(None)#"  , py::arg("aContextIdentifier"),  py::arg("aContextType"),  py::arg("aCoordinateSpaceDimension"))
        .def("SetCoordinateSpaceDimension",
             (void (StepGeom_GeometricRepresentationContext::*)( const Standard_Integer ) ) static_cast<void (StepGeom_GeometricRepresentationContext::*)( const Standard_Integer ) >(&StepGeom_GeometricRepresentationContext::SetCoordinateSpaceDimension),
             R"#(None)#"  , py::arg("aCoordinateSpaceDimension"))
        .def("CoordinateSpaceDimension",
             (Standard_Integer (StepGeom_GeometricRepresentationContext::*)() const) static_cast<Standard_Integer (StepGeom_GeometricRepresentationContext::*)() const>(&StepGeom_GeometricRepresentationContext::CoordinateSpaceDimension),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContext::*)() const>(&StepGeom_GeometricRepresentationContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_GeometricRepresentationContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_GeometricRepresentationContext::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext ,opencascade::handle<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext> , StepRepr_RepresentationContext>>(m.attr("StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_GeometricRepresentationContext> & , const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_GeometricRepresentationContext> & , const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & ) >(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::Init),
             R"#(None)#"  , py::arg("aContextIdentifier"),  py::arg("aContextType"),  py::arg("aGeometricRepresentationContext"),  py::arg("aGlobalUnitAssignedContext"))
        .def("Init",
             (void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepBasic_HArray1OfNamedUnit> & ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepBasic_HArray1OfNamedUnit> & ) >(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::Init),
             R"#(None)#"  , py::arg("aContextIdentifier"),  py::arg("aContextType"),  py::arg("aCoordinateSpaceDimension"),  py::arg("aUnits"))
        .def("SetGeometricRepresentationContext",
             (void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<StepGeom_GeometricRepresentationContext> & ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<StepGeom_GeometricRepresentationContext> & ) >(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::SetGeometricRepresentationContext),
             R"#(None)#"  , py::arg("aGeometricRepresentationContext"))
        .def("GeometricRepresentationContext",
             (opencascade::handle<StepGeom_GeometricRepresentationContext> (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const) static_cast<opencascade::handle<StepGeom_GeometricRepresentationContext> (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const>(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::GeometricRepresentationContext),
             R"#(None)#" )
        .def("SetGlobalUnitAssignedContext",
             (void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & ) >(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::SetGlobalUnitAssignedContext),
             R"#(None)#"  , py::arg("aGlobalUnitAssignedContext"))
        .def("GlobalUnitAssignedContext",
             (opencascade::handle<StepRepr_GlobalUnitAssignedContext> (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const) static_cast<opencascade::handle<StepRepr_GlobalUnitAssignedContext> (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const>(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::GlobalUnitAssignedContext),
             R"#(None)#" )
        .def("SetCoordinateSpaceDimension",
             (void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const Standard_Integer ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const Standard_Integer ) >(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::SetCoordinateSpaceDimension),
             R"#(None)#"  , py::arg("aCoordinateSpaceDimension"))
        .def("CoordinateSpaceDimension",
             (Standard_Integer (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const) static_cast<Standard_Integer (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const>(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::CoordinateSpaceDimension),
             R"#(None)#" )
        .def("SetUnits",
             (void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<StepBasic_HArray1OfNamedUnit> & ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<StepBasic_HArray1OfNamedUnit> & ) >(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::SetUnits),
             R"#(None)#"  , py::arg("aUnits"))
        .def("Units",
             (opencascade::handle<StepBasic_HArray1OfNamedUnit> (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const) static_cast<opencascade::handle<StepBasic_HArray1OfNamedUnit> (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const>(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::Units),
             R"#(None)#" )
        .def("UnitsValue",
             (opencascade::handle<StepBasic_NamedUnit> (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepBasic_NamedUnit> (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const Standard_Integer ) const>(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::UnitsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbUnits",
             (Standard_Integer (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const) static_cast<Standard_Integer (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const>(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::NbUnits),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::*)() const>(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext ,opencascade::handle<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext> , StepRepr_RepresentationContext>>(m.attr("StepGeom_GeometricRepresentationContextAndParametricRepresentationContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_GeometricRepresentationContext> & , const opencascade::handle<StepRepr_ParametricRepresentationContext> & ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_GeometricRepresentationContext> & , const opencascade::handle<StepRepr_ParametricRepresentationContext> & ) >(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::Init),
             R"#(None)#"  , py::arg("aContextIdentifier"),  py::arg("aContextType"),  py::arg("aGeometricRepresentationContext"),  py::arg("aParametricRepresentationContext"))
        .def("Init",
             (void (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer ) >(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::Init),
             R"#(None)#"  , py::arg("aContextIdentifier"),  py::arg("aContextType"),  py::arg("aCoordinateSpaceDimension"))
        .def("SetGeometricRepresentationContext",
             (void (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<StepGeom_GeometricRepresentationContext> & ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<StepGeom_GeometricRepresentationContext> & ) >(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::SetGeometricRepresentationContext),
             R"#(None)#"  , py::arg("aGeometricRepresentationContext"))
        .def("GeometricRepresentationContext",
             (opencascade::handle<StepGeom_GeometricRepresentationContext> (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)() const) static_cast<opencascade::handle<StepGeom_GeometricRepresentationContext> (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)() const>(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::GeometricRepresentationContext),
             R"#(None)#" )
        .def("SetParametricRepresentationContext",
             (void (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<StepRepr_ParametricRepresentationContext> & ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<StepRepr_ParametricRepresentationContext> & ) >(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::SetParametricRepresentationContext),
             R"#(None)#"  , py::arg("aParametricRepresentationContext"))
        .def("ParametricRepresentationContext",
             (opencascade::handle<StepRepr_ParametricRepresentationContext> (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)() const) static_cast<opencascade::handle<StepRepr_ParametricRepresentationContext> (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)() const>(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::ParametricRepresentationContext),
             R"#(None)#" )
        .def("SetCoordinateSpaceDimension",
             (void (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)( const Standard_Integer ) ) static_cast<void (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)( const Standard_Integer ) >(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::SetCoordinateSpaceDimension),
             R"#(None)#"  , py::arg("aCoordinateSpaceDimension"))
        .def("CoordinateSpaceDimension",
             (Standard_Integer (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)() const) static_cast<Standard_Integer (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)() const>(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::CoordinateSpaceDimension),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::*)() const>(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_GeometricRepresentationContextAndParametricRepresentationContext::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_GeometricRepresentationItem ,opencascade::handle<StepGeom_GeometricRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepGeom_GeometricRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_GeometricRepresentationItem::get_type_descriptor),
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_PcurveOrSurface::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_PcurveOrSurface::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_PcurveOrSurface::CaseNum),
             R"#(Recognizes a PcurveOrSurface Kind Entity that is : 1 -> Pcurve 2 -> Surface 0 else)#"  , py::arg("ent"))
        .def("Pcurve",
             (opencascade::handle<StepGeom_Pcurve> (StepGeom_PcurveOrSurface::*)() const) static_cast<opencascade::handle<StepGeom_Pcurve> (StepGeom_PcurveOrSurface::*)() const>(&StepGeom_PcurveOrSurface::Pcurve),
             R"#(returns Value as a Pcurve (Null if another type))#" )
        .def("Surface",
             (opencascade::handle<StepGeom_Surface> (StepGeom_PcurveOrSurface::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepGeom_PcurveOrSurface::*)() const>(&StepGeom_PcurveOrSurface::Surface),
             R"#(returns Value as a Surface (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceBoundary , shared_ptr<StepGeom_SurfaceBoundary> , StepData_SelectType>>(m.attr("StepGeom_SurfaceBoundary"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_SurfaceBoundary::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_SurfaceBoundary::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_SurfaceBoundary::CaseNum),
             R"#(Recognizes a kind of SurfaceBoundary select type 1 -> BoundaryCurve from StepGeom 2 -> DegeneratePcurve from StepGeom 0 else)#"  , py::arg("ent"))
        .def("BoundaryCurve",
             (opencascade::handle<StepGeom_BoundaryCurve> (StepGeom_SurfaceBoundary::*)() const) static_cast<opencascade::handle<StepGeom_BoundaryCurve> (StepGeom_SurfaceBoundary::*)() const>(&StepGeom_SurfaceBoundary::BoundaryCurve),
             R"#(Returns Value as BoundaryCurve (or Null if another type))#" )
        .def("DegeneratePcurve",
             (opencascade::handle<StepGeom_DegeneratePcurve> (StepGeom_SurfaceBoundary::*)() const) static_cast<opencascade::handle<StepGeom_DegeneratePcurve> (StepGeom_SurfaceBoundary::*)() const>(&StepGeom_SurfaceBoundary::DegeneratePcurve),
             R"#(Returns Value as DegeneratePcurve (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfacePatch ,opencascade::handle<StepGeom_SurfacePatch> , Standard_Transient>>(m.attr("StepGeom_SurfacePatch"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_SurfacePatch::*)( const opencascade::handle<StepGeom_BoundedSurface> & , const StepGeom_TransitionCode , const StepGeom_TransitionCode , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (StepGeom_SurfacePatch::*)( const opencascade::handle<StepGeom_BoundedSurface> & , const StepGeom_TransitionCode , const StepGeom_TransitionCode , const Standard_Boolean , const Standard_Boolean ) >(&StepGeom_SurfacePatch::Init),
             R"#(None)#"  , py::arg("aParentSurface"),  py::arg("aUTransition"),  py::arg("aVTransition"),  py::arg("aUSense"),  py::arg("aVSense"))
        .def("SetParentSurface",
             (void (StepGeom_SurfacePatch::*)( const opencascade::handle<StepGeom_BoundedSurface> & ) ) static_cast<void (StepGeom_SurfacePatch::*)( const opencascade::handle<StepGeom_BoundedSurface> & ) >(&StepGeom_SurfacePatch::SetParentSurface),
             R"#(None)#"  , py::arg("aParentSurface"))
        .def("ParentSurface",
             (opencascade::handle<StepGeom_BoundedSurface> (StepGeom_SurfacePatch::*)() const) static_cast<opencascade::handle<StepGeom_BoundedSurface> (StepGeom_SurfacePatch::*)() const>(&StepGeom_SurfacePatch::ParentSurface),
             R"#(None)#" )
        .def("SetUTransition",
             (void (StepGeom_SurfacePatch::*)( const StepGeom_TransitionCode ) ) static_cast<void (StepGeom_SurfacePatch::*)( const StepGeom_TransitionCode ) >(&StepGeom_SurfacePatch::SetUTransition),
             R"#(None)#"  , py::arg("aUTransition"))
        .def("UTransition",
             (StepGeom_TransitionCode (StepGeom_SurfacePatch::*)() const) static_cast<StepGeom_TransitionCode (StepGeom_SurfacePatch::*)() const>(&StepGeom_SurfacePatch::UTransition),
             R"#(None)#" )
        .def("SetVTransition",
             (void (StepGeom_SurfacePatch::*)( const StepGeom_TransitionCode ) ) static_cast<void (StepGeom_SurfacePatch::*)( const StepGeom_TransitionCode ) >(&StepGeom_SurfacePatch::SetVTransition),
             R"#(None)#"  , py::arg("aVTransition"))
        .def("VTransition",
             (StepGeom_TransitionCode (StepGeom_SurfacePatch::*)() const) static_cast<StepGeom_TransitionCode (StepGeom_SurfacePatch::*)() const>(&StepGeom_SurfacePatch::VTransition),
             R"#(None)#" )
        .def("SetUSense",
             (void (StepGeom_SurfacePatch::*)( const Standard_Boolean ) ) static_cast<void (StepGeom_SurfacePatch::*)( const Standard_Boolean ) >(&StepGeom_SurfacePatch::SetUSense),
             R"#(None)#"  , py::arg("aUSense"))
        .def("USense",
             (Standard_Boolean (StepGeom_SurfacePatch::*)() const) static_cast<Standard_Boolean (StepGeom_SurfacePatch::*)() const>(&StepGeom_SurfacePatch::USense),
             R"#(None)#" )
        .def("SetVSense",
             (void (StepGeom_SurfacePatch::*)( const Standard_Boolean ) ) static_cast<void (StepGeom_SurfacePatch::*)( const Standard_Boolean ) >(&StepGeom_SurfacePatch::SetVSense),
             R"#(None)#"  , py::arg("aVSense"))
        .def("VSense",
             (Standard_Boolean (StepGeom_SurfacePatch::*)() const) static_cast<Standard_Boolean (StepGeom_SurfacePatch::*)() const>(&StepGeom_SurfacePatch::VSense),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfacePatch::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfacePatch::*)() const>(&StepGeom_SurfacePatch::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfacePatch::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_SurfacePatch::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_TrimmingMember ,opencascade::handle<StepGeom_TrimmingMember> , StepData_SelectReal>>(m.attr("StepGeom_TrimmingMember"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_TrimmingMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_TrimmingSelect , shared_ptr<StepGeom_TrimmingSelect> , StepData_SelectType>>(m.attr("StepGeom_TrimmingSelect"))
    // constructors
        .def(py::init<  >()  )
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
        .def("CartesianPoint",
             (opencascade::handle<StepGeom_CartesianPoint> (StepGeom_TrimmingSelect::*)() const) static_cast<opencascade::handle<StepGeom_CartesianPoint> (StepGeom_TrimmingSelect::*)() const>(&StepGeom_TrimmingSelect::CartesianPoint),
             R"#(returns Value as a CartesianPoint (Null if another type))#" )
        .def("SetParameterValue",
             (void (StepGeom_TrimmingSelect::*)( const Standard_Real ) ) static_cast<void (StepGeom_TrimmingSelect::*)( const Standard_Real ) >(&StepGeom_TrimmingSelect::SetParameterValue),
             R"#(sets the ParameterValue as Real)#"  , py::arg("aParameterValue"))
        .def("ParameterValue",
             (Standard_Real (StepGeom_TrimmingSelect::*)() const) static_cast<Standard_Real (StepGeom_TrimmingSelect::*)() const>(&StepGeom_TrimmingSelect::ParameterValue),
             R"#(returns Value as a Real (0.0 if not a Real))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_VectorOrDirection , shared_ptr<StepGeom_VectorOrDirection> , StepData_SelectType>>(m.attr("StepGeom_VectorOrDirection"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepGeom_VectorOrDirection::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepGeom_VectorOrDirection::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepGeom_VectorOrDirection::CaseNum),
             R"#(Recognizes a VectorOrDirection Kind Entity that is : 1 -> Vector 2 -> Direction 0 else)#"  , py::arg("ent"))
        .def("Vector",
             (opencascade::handle<StepGeom_Vector> (StepGeom_VectorOrDirection::*)() const) static_cast<opencascade::handle<StepGeom_Vector> (StepGeom_VectorOrDirection::*)() const>(&StepGeom_VectorOrDirection::Vector),
             R"#(returns Value as a Vector (Null if another type))#" )
        .def("Direction",
             (opencascade::handle<StepGeom_Direction> (StepGeom_VectorOrDirection::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepGeom_VectorOrDirection::*)() const>(&StepGeom_VectorOrDirection::Direction),
             R"#(returns Value as a Direction (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CartesianTransformationOperator ,opencascade::handle<StepGeom_CartesianTransformationOperator> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_CartesianTransformationOperator"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_CartesianTransformationOperator::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const Standard_Real ) ) static_cast<void (StepGeom_CartesianTransformationOperator::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const Standard_Real ) >(&StepGeom_CartesianTransformationOperator::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("hasAaxis1"),  py::arg("aAxis1"),  py::arg("hasAaxis2"),  py::arg("aAxis2"),  py::arg("aLocalOrigin"),  py::arg("hasAscale"),  py::arg("aScale"))
        .def("SetAxis1",
             (void (StepGeom_CartesianTransformationOperator::*)( const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_CartesianTransformationOperator::*)( const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_CartesianTransformationOperator::SetAxis1),
             R"#(None)#"  , py::arg("aAxis1"))
        .def("UnSetAxis1",
             (void (StepGeom_CartesianTransformationOperator::*)() ) static_cast<void (StepGeom_CartesianTransformationOperator::*)() >(&StepGeom_CartesianTransformationOperator::UnSetAxis1),
             R"#(None)#" )
        .def("Axis1",
             (opencascade::handle<StepGeom_Direction> (StepGeom_CartesianTransformationOperator::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepGeom_CartesianTransformationOperator::*)() const>(&StepGeom_CartesianTransformationOperator::Axis1),
             R"#(None)#" )
        .def("HasAxis1",
             (Standard_Boolean (StepGeom_CartesianTransformationOperator::*)() const) static_cast<Standard_Boolean (StepGeom_CartesianTransformationOperator::*)() const>(&StepGeom_CartesianTransformationOperator::HasAxis1),
             R"#(None)#" )
        .def("SetAxis2",
             (void (StepGeom_CartesianTransformationOperator::*)( const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_CartesianTransformationOperator::*)( const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_CartesianTransformationOperator::SetAxis2),
             R"#(None)#"  , py::arg("aAxis2"))
        .def("UnSetAxis2",
             (void (StepGeom_CartesianTransformationOperator::*)() ) static_cast<void (StepGeom_CartesianTransformationOperator::*)() >(&StepGeom_CartesianTransformationOperator::UnSetAxis2),
             R"#(None)#" )
        .def("Axis2",
             (opencascade::handle<StepGeom_Direction> (StepGeom_CartesianTransformationOperator::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepGeom_CartesianTransformationOperator::*)() const>(&StepGeom_CartesianTransformationOperator::Axis2),
             R"#(None)#" )
        .def("HasAxis2",
             (Standard_Boolean (StepGeom_CartesianTransformationOperator::*)() const) static_cast<Standard_Boolean (StepGeom_CartesianTransformationOperator::*)() const>(&StepGeom_CartesianTransformationOperator::HasAxis2),
             R"#(None)#" )
        .def("SetLocalOrigin",
             (void (StepGeom_CartesianTransformationOperator::*)( const opencascade::handle<StepGeom_CartesianPoint> & ) ) static_cast<void (StepGeom_CartesianTransformationOperator::*)( const opencascade::handle<StepGeom_CartesianPoint> & ) >(&StepGeom_CartesianTransformationOperator::SetLocalOrigin),
             R"#(None)#"  , py::arg("aLocalOrigin"))
        .def("LocalOrigin",
             (opencascade::handle<StepGeom_CartesianPoint> (StepGeom_CartesianTransformationOperator::*)() const) static_cast<opencascade::handle<StepGeom_CartesianPoint> (StepGeom_CartesianTransformationOperator::*)() const>(&StepGeom_CartesianTransformationOperator::LocalOrigin),
             R"#(None)#" )
        .def("SetScale",
             (void (StepGeom_CartesianTransformationOperator::*)( const Standard_Real ) ) static_cast<void (StepGeom_CartesianTransformationOperator::*)( const Standard_Real ) >(&StepGeom_CartesianTransformationOperator::SetScale),
             R"#(None)#"  , py::arg("aScale"))
        .def("UnSetScale",
             (void (StepGeom_CartesianTransformationOperator::*)() ) static_cast<void (StepGeom_CartesianTransformationOperator::*)() >(&StepGeom_CartesianTransformationOperator::UnSetScale),
             R"#(None)#" )
        .def("Scale",
             (Standard_Real (StepGeom_CartesianTransformationOperator::*)() const) static_cast<Standard_Real (StepGeom_CartesianTransformationOperator::*)() const>(&StepGeom_CartesianTransformationOperator::Scale),
             R"#(None)#" )
        .def("HasScale",
             (Standard_Boolean (StepGeom_CartesianTransformationOperator::*)() const) static_cast<Standard_Boolean (StepGeom_CartesianTransformationOperator::*)() const>(&StepGeom_CartesianTransformationOperator::HasScale),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CartesianTransformationOperator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CartesianTransformationOperator::*)() const>(&StepGeom_CartesianTransformationOperator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CartesianTransformationOperator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_CartesianTransformationOperator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Curve ,opencascade::handle<StepGeom_Curve> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Curve"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Curve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Direction ,opencascade::handle<StepGeom_Direction> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Direction"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Direction::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_Direction::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_Direction::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDirectionRatios"))
        .def("SetDirectionRatios",
             (void (StepGeom_Direction::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_Direction::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_Direction::SetDirectionRatios),
             R"#(None)#"  , py::arg("aDirectionRatios"))
        .def("DirectionRatios",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_Direction::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_Direction::*)() const>(&StepGeom_Direction::DirectionRatios),
             R"#(None)#" )
        .def("DirectionRatiosValue",
             (Standard_Real (StepGeom_Direction::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_Direction::*)( const Standard_Integer ) const>(&StepGeom_Direction::DirectionRatiosValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbDirectionRatios",
             (Standard_Integer (StepGeom_Direction::*)() const) static_cast<Standard_Integer (StepGeom_Direction::*)() const>(&StepGeom_Direction::NbDirectionRatios),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Direction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Direction::*)() const>(&StepGeom_Direction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Direction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Direction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Placement ,opencascade::handle<StepGeom_Placement> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Placement"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Placement::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & ) ) static_cast<void (StepGeom_Placement::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & ) >(&StepGeom_Placement::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aLocation"))
        .def("SetLocation",
             (void (StepGeom_Placement::*)( const opencascade::handle<StepGeom_CartesianPoint> & ) ) static_cast<void (StepGeom_Placement::*)( const opencascade::handle<StepGeom_CartesianPoint> & ) >(&StepGeom_Placement::SetLocation),
             R"#(None)#"  , py::arg("aLocation"))
        .def("Location",
             (opencascade::handle<StepGeom_CartesianPoint> (StepGeom_Placement::*)() const) static_cast<opencascade::handle<StepGeom_CartesianPoint> (StepGeom_Placement::*)() const>(&StepGeom_Placement::Location),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Placement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Placement::*)() const>(&StepGeom_Placement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Placement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Placement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Point ,opencascade::handle<StepGeom_Point> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Point"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Point::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_ReparametrisedCompositeCurveSegment ,opencascade::handle<StepGeom_ReparametrisedCompositeCurveSegment> , StepGeom_CompositeCurveSegment>>(m.attr("StepGeom_ReparametrisedCompositeCurveSegment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_ReparametrisedCompositeCurveSegment::*)( const StepGeom_TransitionCode , const Standard_Boolean , const opencascade::handle<StepGeom_Curve> & , const Standard_Real ) ) static_cast<void (StepGeom_ReparametrisedCompositeCurveSegment::*)( const StepGeom_TransitionCode , const Standard_Boolean , const opencascade::handle<StepGeom_Curve> & , const Standard_Real ) >(&StepGeom_ReparametrisedCompositeCurveSegment::Init),
             R"#(None)#"  , py::arg("aTransition"),  py::arg("aSameSense"),  py::arg("aParentCurve"),  py::arg("aParamLength"))
        .def("SetParamLength",
             (void (StepGeom_ReparametrisedCompositeCurveSegment::*)( const Standard_Real ) ) static_cast<void (StepGeom_ReparametrisedCompositeCurveSegment::*)( const Standard_Real ) >(&StepGeom_ReparametrisedCompositeCurveSegment::SetParamLength),
             R"#(None)#"  , py::arg("aParamLength"))
        .def("ParamLength",
             (Standard_Real (StepGeom_ReparametrisedCompositeCurveSegment::*)() const) static_cast<Standard_Real (StepGeom_ReparametrisedCompositeCurveSegment::*)() const>(&StepGeom_ReparametrisedCompositeCurveSegment::ParamLength),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_ReparametrisedCompositeCurveSegment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_ReparametrisedCompositeCurveSegment::*)() const>(&StepGeom_ReparametrisedCompositeCurveSegment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_ReparametrisedCompositeCurveSegment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_ReparametrisedCompositeCurveSegment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Surface ,opencascade::handle<StepGeom_Surface> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Surface"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Surface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Vector ,opencascade::handle<StepGeom_Vector> , StepGeom_GeometricRepresentationItem>>(m.attr("StepGeom_Vector"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Vector::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Direction> & , const Standard_Real ) ) static_cast<void (StepGeom_Vector::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Direction> & , const Standard_Real ) >(&StepGeom_Vector::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aOrientation"),  py::arg("aMagnitude"))
        .def("SetOrientation",
             (void (StepGeom_Vector::*)( const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_Vector::*)( const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_Vector::SetOrientation),
             R"#(None)#"  , py::arg("aOrientation"))
        .def("Orientation",
             (opencascade::handle<StepGeom_Direction> (StepGeom_Vector::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepGeom_Vector::*)() const>(&StepGeom_Vector::Orientation),
             R"#(None)#" )
        .def("SetMagnitude",
             (void (StepGeom_Vector::*)( const Standard_Real ) ) static_cast<void (StepGeom_Vector::*)( const Standard_Real ) >(&StepGeom_Vector::SetMagnitude),
             R"#(None)#"  , py::arg("aMagnitude"))
        .def("Magnitude",
             (Standard_Real (StepGeom_Vector::*)() const) static_cast<Standard_Real (StepGeom_Vector::*)() const>(&StepGeom_Vector::Magnitude),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Vector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Vector::*)() const>(&StepGeom_Vector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Vector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Vector::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Axis1Placement ,opencascade::handle<StepGeom_Axis1Placement> , StepGeom_Placement>>(m.attr("StepGeom_Axis1Placement"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Axis1Placement::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_Axis1Placement::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_Axis1Placement::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aLocation"),  py::arg("hasAaxis"),  py::arg("aAxis"))
        .def("SetAxis",
             (void (StepGeom_Axis1Placement::*)( const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_Axis1Placement::*)( const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_Axis1Placement::SetAxis),
             R"#(None)#"  , py::arg("aAxis"))
        .def("UnSetAxis",
             (void (StepGeom_Axis1Placement::*)() ) static_cast<void (StepGeom_Axis1Placement::*)() >(&StepGeom_Axis1Placement::UnSetAxis),
             R"#(None)#" )
        .def("Axis",
             (opencascade::handle<StepGeom_Direction> (StepGeom_Axis1Placement::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepGeom_Axis1Placement::*)() const>(&StepGeom_Axis1Placement::Axis),
             R"#(None)#" )
        .def("HasAxis",
             (Standard_Boolean (StepGeom_Axis1Placement::*)() const) static_cast<Standard_Boolean (StepGeom_Axis1Placement::*)() const>(&StepGeom_Axis1Placement::HasAxis),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Axis1Placement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Axis1Placement::*)() const>(&StepGeom_Axis1Placement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Axis1Placement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Axis1Placement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Axis2Placement2d ,opencascade::handle<StepGeom_Axis2Placement2d> , StepGeom_Placement>>(m.attr("StepGeom_Axis2Placement2d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Axis2Placement2d::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_Axis2Placement2d::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_Axis2Placement2d::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aLocation"),  py::arg("hasArefDirection"),  py::arg("aRefDirection"))
        .def("SetRefDirection",
             (void (StepGeom_Axis2Placement2d::*)( const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_Axis2Placement2d::*)( const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_Axis2Placement2d::SetRefDirection),
             R"#(None)#"  , py::arg("aRefDirection"))
        .def("UnSetRefDirection",
             (void (StepGeom_Axis2Placement2d::*)() ) static_cast<void (StepGeom_Axis2Placement2d::*)() >(&StepGeom_Axis2Placement2d::UnSetRefDirection),
             R"#(None)#" )
        .def("RefDirection",
             (opencascade::handle<StepGeom_Direction> (StepGeom_Axis2Placement2d::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepGeom_Axis2Placement2d::*)() const>(&StepGeom_Axis2Placement2d::RefDirection),
             R"#(None)#" )
        .def("HasRefDirection",
             (Standard_Boolean (StepGeom_Axis2Placement2d::*)() const) static_cast<Standard_Boolean (StepGeom_Axis2Placement2d::*)() const>(&StepGeom_Axis2Placement2d::HasRefDirection),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Axis2Placement2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Axis2Placement2d::*)() const>(&StepGeom_Axis2Placement2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Axis2Placement2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Axis2Placement2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Axis2Placement3d ,opencascade::handle<StepGeom_Axis2Placement3d> , StepGeom_Placement>>(m.attr("StepGeom_Axis2Placement3d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Axis2Placement3d::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_Axis2Placement3d::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_Axis2Placement3d::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aLocation"),  py::arg("hasAaxis"),  py::arg("aAxis"),  py::arg("hasArefDirection"),  py::arg("aRefDirection"))
        .def("SetAxis",
             (void (StepGeom_Axis2Placement3d::*)( const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_Axis2Placement3d::*)( const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_Axis2Placement3d::SetAxis),
             R"#(None)#"  , py::arg("aAxis"))
        .def("UnSetAxis",
             (void (StepGeom_Axis2Placement3d::*)() ) static_cast<void (StepGeom_Axis2Placement3d::*)() >(&StepGeom_Axis2Placement3d::UnSetAxis),
             R"#(None)#" )
        .def("Axis",
             (opencascade::handle<StepGeom_Direction> (StepGeom_Axis2Placement3d::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepGeom_Axis2Placement3d::*)() const>(&StepGeom_Axis2Placement3d::Axis),
             R"#(None)#" )
        .def("HasAxis",
             (Standard_Boolean (StepGeom_Axis2Placement3d::*)() const) static_cast<Standard_Boolean (StepGeom_Axis2Placement3d::*)() const>(&StepGeom_Axis2Placement3d::HasAxis),
             R"#(None)#" )
        .def("SetRefDirection",
             (void (StepGeom_Axis2Placement3d::*)( const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_Axis2Placement3d::*)( const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_Axis2Placement3d::SetRefDirection),
             R"#(None)#"  , py::arg("aRefDirection"))
        .def("UnSetRefDirection",
             (void (StepGeom_Axis2Placement3d::*)() ) static_cast<void (StepGeom_Axis2Placement3d::*)() >(&StepGeom_Axis2Placement3d::UnSetRefDirection),
             R"#(None)#" )
        .def("RefDirection",
             (opencascade::handle<StepGeom_Direction> (StepGeom_Axis2Placement3d::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepGeom_Axis2Placement3d::*)() const>(&StepGeom_Axis2Placement3d::RefDirection),
             R"#(None)#" )
        .def("HasRefDirection",
             (Standard_Boolean (StepGeom_Axis2Placement3d::*)() const) static_cast<Standard_Boolean (StepGeom_Axis2Placement3d::*)() const>(&StepGeom_Axis2Placement3d::HasRefDirection),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Axis2Placement3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Axis2Placement3d::*)() const>(&StepGeom_Axis2Placement3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Axis2Placement3d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Axis2Placement3d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BoundedCurve ,opencascade::handle<StepGeom_BoundedCurve> , StepGeom_Curve>>(m.attr("StepGeom_BoundedCurve"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BoundedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BoundedSurface ,opencascade::handle<StepGeom_BoundedSurface> , StepGeom_Surface>>(m.attr("StepGeom_BoundedSurface"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BoundedSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CartesianPoint ,opencascade::handle<StepGeom_CartesianPoint> , StepGeom_Point>>(m.attr("StepGeom_CartesianPoint"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_CartesianPoint::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_CartesianPoint::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_CartesianPoint::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aCoordinates"))
        .def("Init2D",
             (void (StepGeom_CartesianPoint::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Real , const Standard_Real ) ) static_cast<void (StepGeom_CartesianPoint::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Real , const Standard_Real ) >(&StepGeom_CartesianPoint::Init2D),
             R"#(None)#"  , py::arg("aName"),  py::arg("X"),  py::arg("Y"))
        .def("Init3D",
             (void (StepGeom_CartesianPoint::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (StepGeom_CartesianPoint::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&StepGeom_CartesianPoint::Init3D),
             R"#(None)#"  , py::arg("aName"),  py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("SetCoordinates",
             (void (StepGeom_CartesianPoint::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_CartesianPoint::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_CartesianPoint::SetCoordinates),
             R"#(None)#"  , py::arg("aCoordinates"))
        .def("Coordinates",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_CartesianPoint::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_CartesianPoint::*)() const>(&StepGeom_CartesianPoint::Coordinates),
             R"#(None)#" )
        .def("CoordinatesValue",
             (Standard_Real (StepGeom_CartesianPoint::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_CartesianPoint::*)( const Standard_Integer ) const>(&StepGeom_CartesianPoint::CoordinatesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbCoordinates",
             (Standard_Integer (StepGeom_CartesianPoint::*)() const) static_cast<Standard_Integer (StepGeom_CartesianPoint::*)() const>(&StepGeom_CartesianPoint::NbCoordinates),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CartesianPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CartesianPoint::*)() const>(&StepGeom_CartesianPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CartesianPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_CartesianPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CartesianTransformationOperator2d ,opencascade::handle<StepGeom_CartesianTransformationOperator2d> , StepGeom_CartesianTransformationOperator>>(m.attr("StepGeom_CartesianTransformationOperator2d"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_CartesianTransformationOperator2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CartesianTransformationOperator3d ,opencascade::handle<StepGeom_CartesianTransformationOperator3d> , StepGeom_CartesianTransformationOperator>>(m.attr("StepGeom_CartesianTransformationOperator3d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_CartesianTransformationOperator3d::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const Standard_Real , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_CartesianTransformationOperator3d::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const Standard_Real , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_CartesianTransformationOperator3d::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("hasAaxis1"),  py::arg("aAxis1"),  py::arg("hasAaxis2"),  py::arg("aAxis2"),  py::arg("aLocalOrigin"),  py::arg("hasAscale"),  py::arg("aScale"),  py::arg("hasAaxis3"),  py::arg("aAxis3"))
        .def("SetAxis3",
             (void (StepGeom_CartesianTransformationOperator3d::*)( const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_CartesianTransformationOperator3d::*)( const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_CartesianTransformationOperator3d::SetAxis3),
             R"#(None)#"  , py::arg("aAxis3"))
        .def("UnSetAxis3",
             (void (StepGeom_CartesianTransformationOperator3d::*)() ) static_cast<void (StepGeom_CartesianTransformationOperator3d::*)() >(&StepGeom_CartesianTransformationOperator3d::UnSetAxis3),
             R"#(None)#" )
        .def("Axis3",
             (opencascade::handle<StepGeom_Direction> (StepGeom_CartesianTransformationOperator3d::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepGeom_CartesianTransformationOperator3d::*)() const>(&StepGeom_CartesianTransformationOperator3d::Axis3),
             R"#(None)#" )
        .def("HasAxis3",
             (Standard_Boolean (StepGeom_CartesianTransformationOperator3d::*)() const) static_cast<Standard_Boolean (StepGeom_CartesianTransformationOperator3d::*)() const>(&StepGeom_CartesianTransformationOperator3d::HasAxis3),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CartesianTransformationOperator3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CartesianTransformationOperator3d::*)() const>(&StepGeom_CartesianTransformationOperator3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CartesianTransformationOperator3d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_CartesianTransformationOperator3d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Conic ,opencascade::handle<StepGeom_Conic> , StepGeom_Curve>>(m.attr("StepGeom_Conic"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Conic::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepGeom_Axis2Placement & ) ) static_cast<void (StepGeom_Conic::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepGeom_Axis2Placement & ) >(&StepGeom_Conic::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"))
        .def("SetPosition",
             (void (StepGeom_Conic::*)( const StepGeom_Axis2Placement & ) ) static_cast<void (StepGeom_Conic::*)( const StepGeom_Axis2Placement & ) >(&StepGeom_Conic::SetPosition),
             R"#(None)#"  , py::arg("aPosition"))
        .def("Position",
             (StepGeom_Axis2Placement (StepGeom_Conic::*)() const) static_cast<StepGeom_Axis2Placement (StepGeom_Conic::*)() const>(&StepGeom_Conic::Position),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Conic::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Conic::*)() const>(&StepGeom_Conic::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Conic::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Conic::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CurveReplica ,opencascade::handle<StepGeom_CurveReplica> , StepGeom_Curve>>(m.attr("StepGeom_CurveReplica"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_CurveReplica::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const opencascade::handle<StepGeom_CartesianTransformationOperator> & ) ) static_cast<void (StepGeom_CurveReplica::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const opencascade::handle<StepGeom_CartesianTransformationOperator> & ) >(&StepGeom_CurveReplica::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aParentCurve"),  py::arg("aTransformation"))
        .def("SetParentCurve",
             (void (StepGeom_CurveReplica::*)( const opencascade::handle<StepGeom_Curve> & ) ) static_cast<void (StepGeom_CurveReplica::*)( const opencascade::handle<StepGeom_Curve> & ) >(&StepGeom_CurveReplica::SetParentCurve),
             R"#(None)#"  , py::arg("aParentCurve"))
        .def("ParentCurve",
             (opencascade::handle<StepGeom_Curve> (StepGeom_CurveReplica::*)() const) static_cast<opencascade::handle<StepGeom_Curve> (StepGeom_CurveReplica::*)() const>(&StepGeom_CurveReplica::ParentCurve),
             R"#(None)#" )
        .def("SetTransformation",
             (void (StepGeom_CurveReplica::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator> & ) ) static_cast<void (StepGeom_CurveReplica::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator> & ) >(&StepGeom_CurveReplica::SetTransformation),
             R"#(None)#"  , py::arg("aTransformation"))
        .def("Transformation",
             (opencascade::handle<StepGeom_CartesianTransformationOperator> (StepGeom_CurveReplica::*)() const) static_cast<opencascade::handle<StepGeom_CartesianTransformationOperator> (StepGeom_CurveReplica::*)() const>(&StepGeom_CurveReplica::Transformation),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CurveReplica::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CurveReplica::*)() const>(&StepGeom_CurveReplica::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CurveReplica::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_CurveReplica::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_DegeneratePcurve ,opencascade::handle<StepGeom_DegeneratePcurve> , StepGeom_Point>>(m.attr("StepGeom_DegeneratePcurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_DegeneratePcurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const opencascade::handle<StepRepr_DefinitionalRepresentation> & ) ) static_cast<void (StepGeom_DegeneratePcurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const opencascade::handle<StepRepr_DefinitionalRepresentation> & ) >(&StepGeom_DegeneratePcurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBasisSurface"),  py::arg("aReferenceToCurve"))
        .def("SetBasisSurface",
             (void (StepGeom_DegeneratePcurve::*)( const opencascade::handle<StepGeom_Surface> & ) ) static_cast<void (StepGeom_DegeneratePcurve::*)( const opencascade::handle<StepGeom_Surface> & ) >(&StepGeom_DegeneratePcurve::SetBasisSurface),
             R"#(None)#"  , py::arg("aBasisSurface"))
        .def("BasisSurface",
             (opencascade::handle<StepGeom_Surface> (StepGeom_DegeneratePcurve::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepGeom_DegeneratePcurve::*)() const>(&StepGeom_DegeneratePcurve::BasisSurface),
             R"#(None)#" )
        .def("SetReferenceToCurve",
             (void (StepGeom_DegeneratePcurve::*)( const opencascade::handle<StepRepr_DefinitionalRepresentation> & ) ) static_cast<void (StepGeom_DegeneratePcurve::*)( const opencascade::handle<StepRepr_DefinitionalRepresentation> & ) >(&StepGeom_DegeneratePcurve::SetReferenceToCurve),
             R"#(None)#"  , py::arg("aReferenceToCurve"))
        .def("ReferenceToCurve",
             (opencascade::handle<StepRepr_DefinitionalRepresentation> (StepGeom_DegeneratePcurve::*)() const) static_cast<opencascade::handle<StepRepr_DefinitionalRepresentation> (StepGeom_DegeneratePcurve::*)() const>(&StepGeom_DegeneratePcurve::ReferenceToCurve),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_DegeneratePcurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_DegeneratePcurve::*)() const>(&StepGeom_DegeneratePcurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_DegeneratePcurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_DegeneratePcurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_ElementarySurface ,opencascade::handle<StepGeom_ElementarySurface> , StepGeom_Surface>>(m.attr("StepGeom_ElementarySurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_ElementarySurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & ) ) static_cast<void (StepGeom_ElementarySurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & ) >(&StepGeom_ElementarySurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"))
        .def("SetPosition",
             (void (StepGeom_ElementarySurface::*)( const opencascade::handle<StepGeom_Axis2Placement3d> & ) ) static_cast<void (StepGeom_ElementarySurface::*)( const opencascade::handle<StepGeom_Axis2Placement3d> & ) >(&StepGeom_ElementarySurface::SetPosition),
             R"#(None)#"  , py::arg("aPosition"))
        .def("Position",
             (opencascade::handle<StepGeom_Axis2Placement3d> (StepGeom_ElementarySurface::*)() const) static_cast<opencascade::handle<StepGeom_Axis2Placement3d> (StepGeom_ElementarySurface::*)() const>(&StepGeom_ElementarySurface::Position),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_ElementarySurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_ElementarySurface::*)() const>(&StepGeom_ElementarySurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_ElementarySurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_ElementarySurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Line ,opencascade::handle<StepGeom_Line> , StepGeom_Curve>>(m.attr("StepGeom_Line"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Line::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & , const opencascade::handle<StepGeom_Vector> & ) ) static_cast<void (StepGeom_Line::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & , const opencascade::handle<StepGeom_Vector> & ) >(&StepGeom_Line::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPnt"),  py::arg("aDir"))
        .def("SetPnt",
             (void (StepGeom_Line::*)( const opencascade::handle<StepGeom_CartesianPoint> & ) ) static_cast<void (StepGeom_Line::*)( const opencascade::handle<StepGeom_CartesianPoint> & ) >(&StepGeom_Line::SetPnt),
             R"#(None)#"  , py::arg("aPnt"))
        .def("Pnt",
             (opencascade::handle<StepGeom_CartesianPoint> (StepGeom_Line::*)() const) static_cast<opencascade::handle<StepGeom_CartesianPoint> (StepGeom_Line::*)() const>(&StepGeom_Line::Pnt),
             R"#(None)#" )
        .def("SetDir",
             (void (StepGeom_Line::*)( const opencascade::handle<StepGeom_Vector> & ) ) static_cast<void (StepGeom_Line::*)( const opencascade::handle<StepGeom_Vector> & ) >(&StepGeom_Line::SetDir),
             R"#(None)#"  , py::arg("aDir"))
        .def("Dir",
             (opencascade::handle<StepGeom_Vector> (StepGeom_Line::*)() const) static_cast<opencascade::handle<StepGeom_Vector> (StepGeom_Line::*)() const>(&StepGeom_Line::Dir),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Line::*)() const>(&StepGeom_Line::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Line::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Line::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_OffsetCurve3d ,opencascade::handle<StepGeom_OffsetCurve3d> , StepGeom_Curve>>(m.attr("StepGeom_OffsetCurve3d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_OffsetCurve3d::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const Standard_Real , const StepData_Logical , const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_OffsetCurve3d::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const Standard_Real , const StepData_Logical , const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_OffsetCurve3d::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBasisCurve"),  py::arg("aDistance"),  py::arg("aSelfIntersect"),  py::arg("aRefDirection"))
        .def("SetBasisCurve",
             (void (StepGeom_OffsetCurve3d::*)( const opencascade::handle<StepGeom_Curve> & ) ) static_cast<void (StepGeom_OffsetCurve3d::*)( const opencascade::handle<StepGeom_Curve> & ) >(&StepGeom_OffsetCurve3d::SetBasisCurve),
             R"#(None)#"  , py::arg("aBasisCurve"))
        .def("BasisCurve",
             (opencascade::handle<StepGeom_Curve> (StepGeom_OffsetCurve3d::*)() const) static_cast<opencascade::handle<StepGeom_Curve> (StepGeom_OffsetCurve3d::*)() const>(&StepGeom_OffsetCurve3d::BasisCurve),
             R"#(None)#" )
        .def("SetDistance",
             (void (StepGeom_OffsetCurve3d::*)( const Standard_Real ) ) static_cast<void (StepGeom_OffsetCurve3d::*)( const Standard_Real ) >(&StepGeom_OffsetCurve3d::SetDistance),
             R"#(None)#"  , py::arg("aDistance"))
        .def("Distance",
             (Standard_Real (StepGeom_OffsetCurve3d::*)() const) static_cast<Standard_Real (StepGeom_OffsetCurve3d::*)() const>(&StepGeom_OffsetCurve3d::Distance),
             R"#(None)#" )
        .def("SetSelfIntersect",
             (void (StepGeom_OffsetCurve3d::*)( const StepData_Logical ) ) static_cast<void (StepGeom_OffsetCurve3d::*)( const StepData_Logical ) >(&StepGeom_OffsetCurve3d::SetSelfIntersect),
             R"#(None)#"  , py::arg("aSelfIntersect"))
        .def("SelfIntersect",
             (StepData_Logical (StepGeom_OffsetCurve3d::*)() const) static_cast<StepData_Logical (StepGeom_OffsetCurve3d::*)() const>(&StepGeom_OffsetCurve3d::SelfIntersect),
             R"#(None)#" )
        .def("SetRefDirection",
             (void (StepGeom_OffsetCurve3d::*)( const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepGeom_OffsetCurve3d::*)( const opencascade::handle<StepGeom_Direction> & ) >(&StepGeom_OffsetCurve3d::SetRefDirection),
             R"#(None)#"  , py::arg("aRefDirection"))
        .def("RefDirection",
             (opencascade::handle<StepGeom_Direction> (StepGeom_OffsetCurve3d::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepGeom_OffsetCurve3d::*)() const>(&StepGeom_OffsetCurve3d::RefDirection),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_OffsetCurve3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_OffsetCurve3d::*)() const>(&StepGeom_OffsetCurve3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_OffsetCurve3d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_OffsetCurve3d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_OffsetSurface ,opencascade::handle<StepGeom_OffsetSurface> , StepGeom_Surface>>(m.attr("StepGeom_OffsetSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_OffsetSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const Standard_Real , const StepData_Logical ) ) static_cast<void (StepGeom_OffsetSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const Standard_Real , const StepData_Logical ) >(&StepGeom_OffsetSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBasisSurface"),  py::arg("aDistance"),  py::arg("aSelfIntersect"))
        .def("SetBasisSurface",
             (void (StepGeom_OffsetSurface::*)( const opencascade::handle<StepGeom_Surface> & ) ) static_cast<void (StepGeom_OffsetSurface::*)( const opencascade::handle<StepGeom_Surface> & ) >(&StepGeom_OffsetSurface::SetBasisSurface),
             R"#(None)#"  , py::arg("aBasisSurface"))
        .def("BasisSurface",
             (opencascade::handle<StepGeom_Surface> (StepGeom_OffsetSurface::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepGeom_OffsetSurface::*)() const>(&StepGeom_OffsetSurface::BasisSurface),
             R"#(None)#" )
        .def("SetDistance",
             (void (StepGeom_OffsetSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_OffsetSurface::*)( const Standard_Real ) >(&StepGeom_OffsetSurface::SetDistance),
             R"#(None)#"  , py::arg("aDistance"))
        .def("Distance",
             (Standard_Real (StepGeom_OffsetSurface::*)() const) static_cast<Standard_Real (StepGeom_OffsetSurface::*)() const>(&StepGeom_OffsetSurface::Distance),
             R"#(None)#" )
        .def("SetSelfIntersect",
             (void (StepGeom_OffsetSurface::*)( const StepData_Logical ) ) static_cast<void (StepGeom_OffsetSurface::*)( const StepData_Logical ) >(&StepGeom_OffsetSurface::SetSelfIntersect),
             R"#(None)#"  , py::arg("aSelfIntersect"))
        .def("SelfIntersect",
             (StepData_Logical (StepGeom_OffsetSurface::*)() const) static_cast<StepData_Logical (StepGeom_OffsetSurface::*)() const>(&StepGeom_OffsetSurface::SelfIntersect),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_OffsetSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_OffsetSurface::*)() const>(&StepGeom_OffsetSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_OffsetSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_OffsetSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_OrientedSurface ,opencascade::handle<StepGeom_OrientedSurface> , StepGeom_Surface>>(m.attr("StepGeom_OrientedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_OrientedSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean ) ) static_cast<void (StepGeom_OrientedSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean ) >(&StepGeom_OrientedSurface::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aOrientation"))
        .def("Orientation",
             (Standard_Boolean (StepGeom_OrientedSurface::*)() const) static_cast<Standard_Boolean (StepGeom_OrientedSurface::*)() const>(&StepGeom_OrientedSurface::Orientation),
             R"#(Returns field Orientation)#" )
        .def("SetOrientation",
             (void (StepGeom_OrientedSurface::*)( const Standard_Boolean ) ) static_cast<void (StepGeom_OrientedSurface::*)( const Standard_Boolean ) >(&StepGeom_OrientedSurface::SetOrientation),
             R"#(Set field Orientation)#"  , py::arg("Orientation"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_OrientedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_OrientedSurface::*)() const>(&StepGeom_OrientedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_OrientedSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_OrientedSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Pcurve ,opencascade::handle<StepGeom_Pcurve> , StepGeom_Curve>>(m.attr("StepGeom_Pcurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Pcurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const opencascade::handle<StepRepr_DefinitionalRepresentation> & ) ) static_cast<void (StepGeom_Pcurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const opencascade::handle<StepRepr_DefinitionalRepresentation> & ) >(&StepGeom_Pcurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBasisSurface"),  py::arg("aReferenceToCurve"))
        .def("SetBasisSurface",
             (void (StepGeom_Pcurve::*)( const opencascade::handle<StepGeom_Surface> & ) ) static_cast<void (StepGeom_Pcurve::*)( const opencascade::handle<StepGeom_Surface> & ) >(&StepGeom_Pcurve::SetBasisSurface),
             R"#(None)#"  , py::arg("aBasisSurface"))
        .def("BasisSurface",
             (opencascade::handle<StepGeom_Surface> (StepGeom_Pcurve::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepGeom_Pcurve::*)() const>(&StepGeom_Pcurve::BasisSurface),
             R"#(None)#" )
        .def("SetReferenceToCurve",
             (void (StepGeom_Pcurve::*)( const opencascade::handle<StepRepr_DefinitionalRepresentation> & ) ) static_cast<void (StepGeom_Pcurve::*)( const opencascade::handle<StepRepr_DefinitionalRepresentation> & ) >(&StepGeom_Pcurve::SetReferenceToCurve),
             R"#(None)#"  , py::arg("aReferenceToCurve"))
        .def("ReferenceToCurve",
             (opencascade::handle<StepRepr_DefinitionalRepresentation> (StepGeom_Pcurve::*)() const) static_cast<opencascade::handle<StepRepr_DefinitionalRepresentation> (StepGeom_Pcurve::*)() const>(&StepGeom_Pcurve::ReferenceToCurve),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Pcurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Pcurve::*)() const>(&StepGeom_Pcurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Pcurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Pcurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_PointOnCurve ,opencascade::handle<StepGeom_PointOnCurve> , StepGeom_Point>>(m.attr("StepGeom_PointOnCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_PointOnCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const Standard_Real ) ) static_cast<void (StepGeom_PointOnCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const Standard_Real ) >(&StepGeom_PointOnCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBasisCurve"),  py::arg("aPointParameter"))
        .def("SetBasisCurve",
             (void (StepGeom_PointOnCurve::*)( const opencascade::handle<StepGeom_Curve> & ) ) static_cast<void (StepGeom_PointOnCurve::*)( const opencascade::handle<StepGeom_Curve> & ) >(&StepGeom_PointOnCurve::SetBasisCurve),
             R"#(None)#"  , py::arg("aBasisCurve"))
        .def("BasisCurve",
             (opencascade::handle<StepGeom_Curve> (StepGeom_PointOnCurve::*)() const) static_cast<opencascade::handle<StepGeom_Curve> (StepGeom_PointOnCurve::*)() const>(&StepGeom_PointOnCurve::BasisCurve),
             R"#(None)#" )
        .def("SetPointParameter",
             (void (StepGeom_PointOnCurve::*)( const Standard_Real ) ) static_cast<void (StepGeom_PointOnCurve::*)( const Standard_Real ) >(&StepGeom_PointOnCurve::SetPointParameter),
             R"#(None)#"  , py::arg("aPointParameter"))
        .def("PointParameter",
             (Standard_Real (StepGeom_PointOnCurve::*)() const) static_cast<Standard_Real (StepGeom_PointOnCurve::*)() const>(&StepGeom_PointOnCurve::PointParameter),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_PointOnCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_PointOnCurve::*)() const>(&StepGeom_PointOnCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_PointOnCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_PointOnCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_PointOnSurface ,opencascade::handle<StepGeom_PointOnSurface> , StepGeom_Point>>(m.attr("StepGeom_PointOnSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_PointOnSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const Standard_Real , const Standard_Real ) ) static_cast<void (StepGeom_PointOnSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const Standard_Real , const Standard_Real ) >(&StepGeom_PointOnSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBasisSurface"),  py::arg("aPointParameterU"),  py::arg("aPointParameterV"))
        .def("SetBasisSurface",
             (void (StepGeom_PointOnSurface::*)( const opencascade::handle<StepGeom_Surface> & ) ) static_cast<void (StepGeom_PointOnSurface::*)( const opencascade::handle<StepGeom_Surface> & ) >(&StepGeom_PointOnSurface::SetBasisSurface),
             R"#(None)#"  , py::arg("aBasisSurface"))
        .def("BasisSurface",
             (opencascade::handle<StepGeom_Surface> (StepGeom_PointOnSurface::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepGeom_PointOnSurface::*)() const>(&StepGeom_PointOnSurface::BasisSurface),
             R"#(None)#" )
        .def("SetPointParameterU",
             (void (StepGeom_PointOnSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_PointOnSurface::*)( const Standard_Real ) >(&StepGeom_PointOnSurface::SetPointParameterU),
             R"#(None)#"  , py::arg("aPointParameterU"))
        .def("PointParameterU",
             (Standard_Real (StepGeom_PointOnSurface::*)() const) static_cast<Standard_Real (StepGeom_PointOnSurface::*)() const>(&StepGeom_PointOnSurface::PointParameterU),
             R"#(None)#" )
        .def("SetPointParameterV",
             (void (StepGeom_PointOnSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_PointOnSurface::*)( const Standard_Real ) >(&StepGeom_PointOnSurface::SetPointParameterV),
             R"#(None)#"  , py::arg("aPointParameterV"))
        .def("PointParameterV",
             (Standard_Real (StepGeom_PointOnSurface::*)() const) static_cast<Standard_Real (StepGeom_PointOnSurface::*)() const>(&StepGeom_PointOnSurface::PointParameterV),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_PointOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_PointOnSurface::*)() const>(&StepGeom_PointOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_PointOnSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_PointOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_PointReplica ,opencascade::handle<StepGeom_PointReplica> , StepGeom_Point>>(m.attr("StepGeom_PointReplica"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_PointReplica::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Point> & , const opencascade::handle<StepGeom_CartesianTransformationOperator> & ) ) static_cast<void (StepGeom_PointReplica::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Point> & , const opencascade::handle<StepGeom_CartesianTransformationOperator> & ) >(&StepGeom_PointReplica::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aParentPt"),  py::arg("aTransformation"))
        .def("SetParentPt",
             (void (StepGeom_PointReplica::*)( const opencascade::handle<StepGeom_Point> & ) ) static_cast<void (StepGeom_PointReplica::*)( const opencascade::handle<StepGeom_Point> & ) >(&StepGeom_PointReplica::SetParentPt),
             R"#(None)#"  , py::arg("aParentPt"))
        .def("ParentPt",
             (opencascade::handle<StepGeom_Point> (StepGeom_PointReplica::*)() const) static_cast<opencascade::handle<StepGeom_Point> (StepGeom_PointReplica::*)() const>(&StepGeom_PointReplica::ParentPt),
             R"#(None)#" )
        .def("SetTransformation",
             (void (StepGeom_PointReplica::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator> & ) ) static_cast<void (StepGeom_PointReplica::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator> & ) >(&StepGeom_PointReplica::SetTransformation),
             R"#(None)#"  , py::arg("aTransformation"))
        .def("Transformation",
             (opencascade::handle<StepGeom_CartesianTransformationOperator> (StepGeom_PointReplica::*)() const) static_cast<opencascade::handle<StepGeom_CartesianTransformationOperator> (StepGeom_PointReplica::*)() const>(&StepGeom_PointReplica::Transformation),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_PointReplica::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_PointReplica::*)() const>(&StepGeom_PointReplica::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_PointReplica::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_PointReplica::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceCurve ,opencascade::handle<StepGeom_SurfaceCurve> , StepGeom_Curve>>(m.attr("StepGeom_SurfaceCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_SurfaceCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const opencascade::handle<StepGeom_HArray1OfPcurveOrSurface> & , const StepGeom_PreferredSurfaceCurveRepresentation ) ) static_cast<void (StepGeom_SurfaceCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const opencascade::handle<StepGeom_HArray1OfPcurveOrSurface> & , const StepGeom_PreferredSurfaceCurveRepresentation ) >(&StepGeom_SurfaceCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aCurve3d"),  py::arg("aAssociatedGeometry"),  py::arg("aMasterRepresentation"))
        .def("SetCurve3d",
             (void (StepGeom_SurfaceCurve::*)( const opencascade::handle<StepGeom_Curve> & ) ) static_cast<void (StepGeom_SurfaceCurve::*)( const opencascade::handle<StepGeom_Curve> & ) >(&StepGeom_SurfaceCurve::SetCurve3d),
             R"#(None)#"  , py::arg("aCurve3d"))
        .def("Curve3d",
             (opencascade::handle<StepGeom_Curve> (StepGeom_SurfaceCurve::*)() const) static_cast<opencascade::handle<StepGeom_Curve> (StepGeom_SurfaceCurve::*)() const>(&StepGeom_SurfaceCurve::Curve3d),
             R"#(None)#" )
        .def("SetAssociatedGeometry",
             (void (StepGeom_SurfaceCurve::*)( const opencascade::handle<StepGeom_HArray1OfPcurveOrSurface> & ) ) static_cast<void (StepGeom_SurfaceCurve::*)( const opencascade::handle<StepGeom_HArray1OfPcurveOrSurface> & ) >(&StepGeom_SurfaceCurve::SetAssociatedGeometry),
             R"#(None)#"  , py::arg("aAssociatedGeometry"))
        .def("AssociatedGeometry",
             (opencascade::handle<StepGeom_HArray1OfPcurveOrSurface> (StepGeom_SurfaceCurve::*)() const) static_cast<opencascade::handle<StepGeom_HArray1OfPcurveOrSurface> (StepGeom_SurfaceCurve::*)() const>(&StepGeom_SurfaceCurve::AssociatedGeometry),
             R"#(None)#" )
        .def("AssociatedGeometryValue",
             (StepGeom_PcurveOrSurface (StepGeom_SurfaceCurve::*)( const Standard_Integer ) const) static_cast<StepGeom_PcurveOrSurface (StepGeom_SurfaceCurve::*)( const Standard_Integer ) const>(&StepGeom_SurfaceCurve::AssociatedGeometryValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbAssociatedGeometry",
             (Standard_Integer (StepGeom_SurfaceCurve::*)() const) static_cast<Standard_Integer (StepGeom_SurfaceCurve::*)() const>(&StepGeom_SurfaceCurve::NbAssociatedGeometry),
             R"#(None)#" )
        .def("SetMasterRepresentation",
             (void (StepGeom_SurfaceCurve::*)( const StepGeom_PreferredSurfaceCurveRepresentation ) ) static_cast<void (StepGeom_SurfaceCurve::*)( const StepGeom_PreferredSurfaceCurveRepresentation ) >(&StepGeom_SurfaceCurve::SetMasterRepresentation),
             R"#(None)#"  , py::arg("aMasterRepresentation"))
        .def("MasterRepresentation",
             (StepGeom_PreferredSurfaceCurveRepresentation (StepGeom_SurfaceCurve::*)() const) static_cast<StepGeom_PreferredSurfaceCurveRepresentation (StepGeom_SurfaceCurve::*)() const>(&StepGeom_SurfaceCurve::MasterRepresentation),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfaceCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfaceCurve::*)() const>(&StepGeom_SurfaceCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfaceCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_SurfaceCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceReplica ,opencascade::handle<StepGeom_SurfaceReplica> , StepGeom_Surface>>(m.attr("StepGeom_SurfaceReplica"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_SurfaceReplica::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const opencascade::handle<StepGeom_CartesianTransformationOperator3d> & ) ) static_cast<void (StepGeom_SurfaceReplica::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const opencascade::handle<StepGeom_CartesianTransformationOperator3d> & ) >(&StepGeom_SurfaceReplica::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aParentSurface"),  py::arg("aTransformation"))
        .def("SetParentSurface",
             (void (StepGeom_SurfaceReplica::*)( const opencascade::handle<StepGeom_Surface> & ) ) static_cast<void (StepGeom_SurfaceReplica::*)( const opencascade::handle<StepGeom_Surface> & ) >(&StepGeom_SurfaceReplica::SetParentSurface),
             R"#(None)#"  , py::arg("aParentSurface"))
        .def("ParentSurface",
             (opencascade::handle<StepGeom_Surface> (StepGeom_SurfaceReplica::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepGeom_SurfaceReplica::*)() const>(&StepGeom_SurfaceReplica::ParentSurface),
             R"#(None)#" )
        .def("SetTransformation",
             (void (StepGeom_SurfaceReplica::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator3d> & ) ) static_cast<void (StepGeom_SurfaceReplica::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator3d> & ) >(&StepGeom_SurfaceReplica::SetTransformation),
             R"#(None)#"  , py::arg("aTransformation"))
        .def("Transformation",
             (opencascade::handle<StepGeom_CartesianTransformationOperator3d> (StepGeom_SurfaceReplica::*)() const) static_cast<opencascade::handle<StepGeom_CartesianTransformationOperator3d> (StepGeom_SurfaceReplica::*)() const>(&StepGeom_SurfaceReplica::Transformation),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfaceReplica::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfaceReplica::*)() const>(&StepGeom_SurfaceReplica::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfaceReplica::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_SurfaceReplica::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SweptSurface ,opencascade::handle<StepGeom_SweptSurface> , StepGeom_Surface>>(m.attr("StepGeom_SweptSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_SweptSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & ) ) static_cast<void (StepGeom_SweptSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & ) >(&StepGeom_SweptSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSweptCurve"))
        .def("SetSweptCurve",
             (void (StepGeom_SweptSurface::*)( const opencascade::handle<StepGeom_Curve> & ) ) static_cast<void (StepGeom_SweptSurface::*)( const opencascade::handle<StepGeom_Curve> & ) >(&StepGeom_SweptSurface::SetSweptCurve),
             R"#(None)#"  , py::arg("aSweptCurve"))
        .def("SweptCurve",
             (opencascade::handle<StepGeom_Curve> (StepGeom_SweptSurface::*)() const) static_cast<opencascade::handle<StepGeom_Curve> (StepGeom_SweptSurface::*)() const>(&StepGeom_SweptSurface::SweptCurve),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SweptSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SweptSurface::*)() const>(&StepGeom_SweptSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SweptSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_SweptSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineCurve ,opencascade::handle<StepGeom_BSplineCurve> , StepGeom_BoundedCurve>>(m.attr("StepGeom_BSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_BSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical ) ) static_cast<void (StepGeom_BSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical ) >(&StepGeom_BSplineCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"))
        .def("SetDegree",
             (void (StepGeom_BSplineCurve::*)( const Standard_Integer ) ) static_cast<void (StepGeom_BSplineCurve::*)( const Standard_Integer ) >(&StepGeom_BSplineCurve::SetDegree),
             R"#(None)#"  , py::arg("aDegree"))
        .def("Degree",
             (Standard_Integer (StepGeom_BSplineCurve::*)() const) static_cast<Standard_Integer (StepGeom_BSplineCurve::*)() const>(&StepGeom_BSplineCurve::Degree),
             R"#(None)#" )
        .def("SetControlPointsList",
             (void (StepGeom_BSplineCurve::*)( const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & ) ) static_cast<void (StepGeom_BSplineCurve::*)( const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & ) >(&StepGeom_BSplineCurve::SetControlPointsList),
             R"#(None)#"  , py::arg("aControlPointsList"))
        .def("ControlPointsList",
             (opencascade::handle<StepGeom_HArray1OfCartesianPoint> (StepGeom_BSplineCurve::*)() const) static_cast<opencascade::handle<StepGeom_HArray1OfCartesianPoint> (StepGeom_BSplineCurve::*)() const>(&StepGeom_BSplineCurve::ControlPointsList),
             R"#(None)#" )
        .def("ControlPointsListValue",
             (opencascade::handle<StepGeom_CartesianPoint> (StepGeom_BSplineCurve::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepGeom_CartesianPoint> (StepGeom_BSplineCurve::*)( const Standard_Integer ) const>(&StepGeom_BSplineCurve::ControlPointsListValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbControlPointsList",
             (Standard_Integer (StepGeom_BSplineCurve::*)() const) static_cast<Standard_Integer (StepGeom_BSplineCurve::*)() const>(&StepGeom_BSplineCurve::NbControlPointsList),
             R"#(None)#" )
        .def("SetCurveForm",
             (void (StepGeom_BSplineCurve::*)( const StepGeom_BSplineCurveForm ) ) static_cast<void (StepGeom_BSplineCurve::*)( const StepGeom_BSplineCurveForm ) >(&StepGeom_BSplineCurve::SetCurveForm),
             R"#(None)#"  , py::arg("aCurveForm"))
        .def("CurveForm",
             (StepGeom_BSplineCurveForm (StepGeom_BSplineCurve::*)() const) static_cast<StepGeom_BSplineCurveForm (StepGeom_BSplineCurve::*)() const>(&StepGeom_BSplineCurve::CurveForm),
             R"#(None)#" )
        .def("SetClosedCurve",
             (void (StepGeom_BSplineCurve::*)( const StepData_Logical ) ) static_cast<void (StepGeom_BSplineCurve::*)( const StepData_Logical ) >(&StepGeom_BSplineCurve::SetClosedCurve),
             R"#(None)#"  , py::arg("aClosedCurve"))
        .def("ClosedCurve",
             (StepData_Logical (StepGeom_BSplineCurve::*)() const) static_cast<StepData_Logical (StepGeom_BSplineCurve::*)() const>(&StepGeom_BSplineCurve::ClosedCurve),
             R"#(None)#" )
        .def("SetSelfIntersect",
             (void (StepGeom_BSplineCurve::*)( const StepData_Logical ) ) static_cast<void (StepGeom_BSplineCurve::*)( const StepData_Logical ) >(&StepGeom_BSplineCurve::SetSelfIntersect),
             R"#(None)#"  , py::arg("aSelfIntersect"))
        .def("SelfIntersect",
             (StepData_Logical (StepGeom_BSplineCurve::*)() const) static_cast<StepData_Logical (StepGeom_BSplineCurve::*)() const>(&StepGeom_BSplineCurve::SelfIntersect),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurve::*)() const>(&StepGeom_BSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BSplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineSurface ,opencascade::handle<StepGeom_BSplineSurface> , StepGeom_BoundedSurface>>(m.attr("StepGeom_BSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_BSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical ) ) static_cast<void (StepGeom_BSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical ) >(&StepGeom_BSplineSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"))
        .def("SetUDegree",
             (void (StepGeom_BSplineSurface::*)( const Standard_Integer ) ) static_cast<void (StepGeom_BSplineSurface::*)( const Standard_Integer ) >(&StepGeom_BSplineSurface::SetUDegree),
             R"#(None)#"  , py::arg("aUDegree"))
        .def("UDegree",
             (Standard_Integer (StepGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::UDegree),
             R"#(None)#" )
        .def("SetVDegree",
             (void (StepGeom_BSplineSurface::*)( const Standard_Integer ) ) static_cast<void (StepGeom_BSplineSurface::*)( const Standard_Integer ) >(&StepGeom_BSplineSurface::SetVDegree),
             R"#(None)#"  , py::arg("aVDegree"))
        .def("VDegree",
             (Standard_Integer (StepGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::VDegree),
             R"#(None)#" )
        .def("SetControlPointsList",
             (void (StepGeom_BSplineSurface::*)( const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & ) ) static_cast<void (StepGeom_BSplineSurface::*)( const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & ) >(&StepGeom_BSplineSurface::SetControlPointsList),
             R"#(None)#"  , py::arg("aControlPointsList"))
        .def("ControlPointsList",
             (opencascade::handle<StepGeom_HArray2OfCartesianPoint> (StepGeom_BSplineSurface::*)() const) static_cast<opencascade::handle<StepGeom_HArray2OfCartesianPoint> (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::ControlPointsList),
             R"#(None)#" )
        .def("ControlPointsListValue",
             (opencascade::handle<StepGeom_CartesianPoint> (StepGeom_BSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<StepGeom_CartesianPoint> (StepGeom_BSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&StepGeom_BSplineSurface::ControlPointsListValue),
             R"#(None)#"  , py::arg("num1"),  py::arg("num2"))
        .def("NbControlPointsListI",
             (Standard_Integer (StepGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::NbControlPointsListI),
             R"#(None)#" )
        .def("NbControlPointsListJ",
             (Standard_Integer (StepGeom_BSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::NbControlPointsListJ),
             R"#(None)#" )
        .def("SetSurfaceForm",
             (void (StepGeom_BSplineSurface::*)( const StepGeom_BSplineSurfaceForm ) ) static_cast<void (StepGeom_BSplineSurface::*)( const StepGeom_BSplineSurfaceForm ) >(&StepGeom_BSplineSurface::SetSurfaceForm),
             R"#(None)#"  , py::arg("aSurfaceForm"))
        .def("SurfaceForm",
             (StepGeom_BSplineSurfaceForm (StepGeom_BSplineSurface::*)() const) static_cast<StepGeom_BSplineSurfaceForm (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::SurfaceForm),
             R"#(None)#" )
        .def("SetUClosed",
             (void (StepGeom_BSplineSurface::*)( const StepData_Logical ) ) static_cast<void (StepGeom_BSplineSurface::*)( const StepData_Logical ) >(&StepGeom_BSplineSurface::SetUClosed),
             R"#(None)#"  , py::arg("aUClosed"))
        .def("UClosed",
             (StepData_Logical (StepGeom_BSplineSurface::*)() const) static_cast<StepData_Logical (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::UClosed),
             R"#(None)#" )
        .def("SetVClosed",
             (void (StepGeom_BSplineSurface::*)( const StepData_Logical ) ) static_cast<void (StepGeom_BSplineSurface::*)( const StepData_Logical ) >(&StepGeom_BSplineSurface::SetVClosed),
             R"#(None)#"  , py::arg("aVClosed"))
        .def("VClosed",
             (StepData_Logical (StepGeom_BSplineSurface::*)() const) static_cast<StepData_Logical (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::VClosed),
             R"#(None)#" )
        .def("SetSelfIntersect",
             (void (StepGeom_BSplineSurface::*)( const StepData_Logical ) ) static_cast<void (StepGeom_BSplineSurface::*)( const StepData_Logical ) >(&StepGeom_BSplineSurface::SetSelfIntersect),
             R"#(None)#"  , py::arg("aSelfIntersect"))
        .def("SelfIntersect",
             (StepData_Logical (StepGeom_BSplineSurface::*)() const) static_cast<StepData_Logical (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::SelfIntersect),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurface::*)() const>(&StepGeom_BSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BSplineSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Circle ,opencascade::handle<StepGeom_Circle> , StepGeom_Conic>>(m.attr("StepGeom_Circle"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Circle::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepGeom_Axis2Placement & , const Standard_Real ) ) static_cast<void (StepGeom_Circle::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepGeom_Axis2Placement & , const Standard_Real ) >(&StepGeom_Circle::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aRadius"))
        .def("SetRadius",
             (void (StepGeom_Circle::*)( const Standard_Real ) ) static_cast<void (StepGeom_Circle::*)( const Standard_Real ) >(&StepGeom_Circle::SetRadius),
             R"#(None)#"  , py::arg("aRadius"))
        .def("Radius",
             (Standard_Real (StepGeom_Circle::*)() const) static_cast<Standard_Real (StepGeom_Circle::*)() const>(&StepGeom_Circle::Radius),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Circle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Circle::*)() const>(&StepGeom_Circle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Circle::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Circle::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CompositeCurve ,opencascade::handle<StepGeom_CompositeCurve> , StepGeom_BoundedCurve>>(m.attr("StepGeom_CompositeCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_CompositeCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_HArray1OfCompositeCurveSegment> & , const StepData_Logical ) ) static_cast<void (StepGeom_CompositeCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_HArray1OfCompositeCurveSegment> & , const StepData_Logical ) >(&StepGeom_CompositeCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSegments"),  py::arg("aSelfIntersect"))
        .def("SetSegments",
             (void (StepGeom_CompositeCurve::*)( const opencascade::handle<StepGeom_HArray1OfCompositeCurveSegment> & ) ) static_cast<void (StepGeom_CompositeCurve::*)( const opencascade::handle<StepGeom_HArray1OfCompositeCurveSegment> & ) >(&StepGeom_CompositeCurve::SetSegments),
             R"#(None)#"  , py::arg("aSegments"))
        .def("Segments",
             (opencascade::handle<StepGeom_HArray1OfCompositeCurveSegment> (StepGeom_CompositeCurve::*)() const) static_cast<opencascade::handle<StepGeom_HArray1OfCompositeCurveSegment> (StepGeom_CompositeCurve::*)() const>(&StepGeom_CompositeCurve::Segments),
             R"#(None)#" )
        .def("SegmentsValue",
             (opencascade::handle<StepGeom_CompositeCurveSegment> (StepGeom_CompositeCurve::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepGeom_CompositeCurveSegment> (StepGeom_CompositeCurve::*)( const Standard_Integer ) const>(&StepGeom_CompositeCurve::SegmentsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbSegments",
             (Standard_Integer (StepGeom_CompositeCurve::*)() const) static_cast<Standard_Integer (StepGeom_CompositeCurve::*)() const>(&StepGeom_CompositeCurve::NbSegments),
             R"#(None)#" )
        .def("SetSelfIntersect",
             (void (StepGeom_CompositeCurve::*)( const StepData_Logical ) ) static_cast<void (StepGeom_CompositeCurve::*)( const StepData_Logical ) >(&StepGeom_CompositeCurve::SetSelfIntersect),
             R"#(None)#"  , py::arg("aSelfIntersect"))
        .def("SelfIntersect",
             (StepData_Logical (StepGeom_CompositeCurve::*)() const) static_cast<StepData_Logical (StepGeom_CompositeCurve::*)() const>(&StepGeom_CompositeCurve::SelfIntersect),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CompositeCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CompositeCurve::*)() const>(&StepGeom_CompositeCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CompositeCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_CompositeCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_ConicalSurface ,opencascade::handle<StepGeom_ConicalSurface> , StepGeom_ElementarySurface>>(m.attr("StepGeom_ConicalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_ConicalSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const Standard_Real , const Standard_Real ) ) static_cast<void (StepGeom_ConicalSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const Standard_Real , const Standard_Real ) >(&StepGeom_ConicalSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aRadius"),  py::arg("aSemiAngle"))
        .def("SetRadius",
             (void (StepGeom_ConicalSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_ConicalSurface::*)( const Standard_Real ) >(&StepGeom_ConicalSurface::SetRadius),
             R"#(None)#"  , py::arg("aRadius"))
        .def("Radius",
             (Standard_Real (StepGeom_ConicalSurface::*)() const) static_cast<Standard_Real (StepGeom_ConicalSurface::*)() const>(&StepGeom_ConicalSurface::Radius),
             R"#(None)#" )
        .def("SetSemiAngle",
             (void (StepGeom_ConicalSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_ConicalSurface::*)( const Standard_Real ) >(&StepGeom_ConicalSurface::SetSemiAngle),
             R"#(None)#"  , py::arg("aSemiAngle"))
        .def("SemiAngle",
             (Standard_Real (StepGeom_ConicalSurface::*)() const) static_cast<Standard_Real (StepGeom_ConicalSurface::*)() const>(&StepGeom_ConicalSurface::SemiAngle),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_ConicalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_ConicalSurface::*)() const>(&StepGeom_ConicalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_ConicalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_ConicalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CurveBoundedSurface ,opencascade::handle<StepGeom_CurveBoundedSurface> , StepGeom_BoundedSurface>>(m.attr("StepGeom_CurveBoundedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_CurveBoundedSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const opencascade::handle<StepGeom_HArray1OfSurfaceBoundary> & , const Standard_Boolean ) ) static_cast<void (StepGeom_CurveBoundedSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const opencascade::handle<StepGeom_HArray1OfSurfaceBoundary> & , const Standard_Boolean ) >(&StepGeom_CurveBoundedSurface::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aBasisSurface"),  py::arg("aBoundaries"),  py::arg("aImplicitOuter"))
        .def("BasisSurface",
             (opencascade::handle<StepGeom_Surface> (StepGeom_CurveBoundedSurface::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepGeom_CurveBoundedSurface::*)() const>(&StepGeom_CurveBoundedSurface::BasisSurface),
             R"#(Returns field BasisSurface)#" )
        .def("SetBasisSurface",
             (void (StepGeom_CurveBoundedSurface::*)( const opencascade::handle<StepGeom_Surface> & ) ) static_cast<void (StepGeom_CurveBoundedSurface::*)( const opencascade::handle<StepGeom_Surface> & ) >(&StepGeom_CurveBoundedSurface::SetBasisSurface),
             R"#(Set field BasisSurface)#"  , py::arg("BasisSurface"))
        .def("Boundaries",
             (opencascade::handle<StepGeom_HArray1OfSurfaceBoundary> (StepGeom_CurveBoundedSurface::*)() const) static_cast<opencascade::handle<StepGeom_HArray1OfSurfaceBoundary> (StepGeom_CurveBoundedSurface::*)() const>(&StepGeom_CurveBoundedSurface::Boundaries),
             R"#(Returns field Boundaries)#" )
        .def("SetBoundaries",
             (void (StepGeom_CurveBoundedSurface::*)( const opencascade::handle<StepGeom_HArray1OfSurfaceBoundary> & ) ) static_cast<void (StepGeom_CurveBoundedSurface::*)( const opencascade::handle<StepGeom_HArray1OfSurfaceBoundary> & ) >(&StepGeom_CurveBoundedSurface::SetBoundaries),
             R"#(Set field Boundaries)#"  , py::arg("Boundaries"))
        .def("ImplicitOuter",
             (Standard_Boolean (StepGeom_CurveBoundedSurface::*)() const) static_cast<Standard_Boolean (StepGeom_CurveBoundedSurface::*)() const>(&StepGeom_CurveBoundedSurface::ImplicitOuter),
             R"#(Returns field ImplicitOuter)#" )
        .def("SetImplicitOuter",
             (void (StepGeom_CurveBoundedSurface::*)( const Standard_Boolean ) ) static_cast<void (StepGeom_CurveBoundedSurface::*)( const Standard_Boolean ) >(&StepGeom_CurveBoundedSurface::SetImplicitOuter),
             R"#(Set field ImplicitOuter)#"  , py::arg("ImplicitOuter"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CurveBoundedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CurveBoundedSurface::*)() const>(&StepGeom_CurveBoundedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CurveBoundedSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_CurveBoundedSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CylindricalSurface ,opencascade::handle<StepGeom_CylindricalSurface> , StepGeom_ElementarySurface>>(m.attr("StepGeom_CylindricalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_CylindricalSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const Standard_Real ) ) static_cast<void (StepGeom_CylindricalSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const Standard_Real ) >(&StepGeom_CylindricalSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aRadius"))
        .def("SetRadius",
             (void (StepGeom_CylindricalSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_CylindricalSurface::*)( const Standard_Real ) >(&StepGeom_CylindricalSurface::SetRadius),
             R"#(None)#"  , py::arg("aRadius"))
        .def("Radius",
             (Standard_Real (StepGeom_CylindricalSurface::*)() const) static_cast<Standard_Real (StepGeom_CylindricalSurface::*)() const>(&StepGeom_CylindricalSurface::Radius),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_CylindricalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_CylindricalSurface::*)() const>(&StepGeom_CylindricalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_CylindricalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_CylindricalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Ellipse ,opencascade::handle<StepGeom_Ellipse> , StepGeom_Conic>>(m.attr("StepGeom_Ellipse"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Ellipse::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepGeom_Axis2Placement & , const Standard_Real , const Standard_Real ) ) static_cast<void (StepGeom_Ellipse::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepGeom_Axis2Placement & , const Standard_Real , const Standard_Real ) >(&StepGeom_Ellipse::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aSemiAxis1"),  py::arg("aSemiAxis2"))
        .def("SetSemiAxis1",
             (void (StepGeom_Ellipse::*)( const Standard_Real ) ) static_cast<void (StepGeom_Ellipse::*)( const Standard_Real ) >(&StepGeom_Ellipse::SetSemiAxis1),
             R"#(None)#"  , py::arg("aSemiAxis1"))
        .def("SemiAxis1",
             (Standard_Real (StepGeom_Ellipse::*)() const) static_cast<Standard_Real (StepGeom_Ellipse::*)() const>(&StepGeom_Ellipse::SemiAxis1),
             R"#(None)#" )
        .def("SetSemiAxis2",
             (void (StepGeom_Ellipse::*)( const Standard_Real ) ) static_cast<void (StepGeom_Ellipse::*)( const Standard_Real ) >(&StepGeom_Ellipse::SetSemiAxis2),
             R"#(None)#"  , py::arg("aSemiAxis2"))
        .def("SemiAxis2",
             (Standard_Real (StepGeom_Ellipse::*)() const) static_cast<Standard_Real (StepGeom_Ellipse::*)() const>(&StepGeom_Ellipse::SemiAxis2),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Ellipse::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Ellipse::*)() const>(&StepGeom_Ellipse::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Ellipse::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Ellipse::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_EvaluatedDegeneratePcurve ,opencascade::handle<StepGeom_EvaluatedDegeneratePcurve> , StepGeom_DegeneratePcurve>>(m.attr("StepGeom_EvaluatedDegeneratePcurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_EvaluatedDegeneratePcurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const opencascade::handle<StepRepr_DefinitionalRepresentation> & , const opencascade::handle<StepGeom_CartesianPoint> & ) ) static_cast<void (StepGeom_EvaluatedDegeneratePcurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const opencascade::handle<StepRepr_DefinitionalRepresentation> & , const opencascade::handle<StepGeom_CartesianPoint> & ) >(&StepGeom_EvaluatedDegeneratePcurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBasisSurface"),  py::arg("aReferenceToCurve"),  py::arg("aEquivalentPoint"))
        .def("SetEquivalentPoint",
             (void (StepGeom_EvaluatedDegeneratePcurve::*)( const opencascade::handle<StepGeom_CartesianPoint> & ) ) static_cast<void (StepGeom_EvaluatedDegeneratePcurve::*)( const opencascade::handle<StepGeom_CartesianPoint> & ) >(&StepGeom_EvaluatedDegeneratePcurve::SetEquivalentPoint),
             R"#(None)#"  , py::arg("aEquivalentPoint"))
        .def("EquivalentPoint",
             (opencascade::handle<StepGeom_CartesianPoint> (StepGeom_EvaluatedDegeneratePcurve::*)() const) static_cast<opencascade::handle<StepGeom_CartesianPoint> (StepGeom_EvaluatedDegeneratePcurve::*)() const>(&StepGeom_EvaluatedDegeneratePcurve::EquivalentPoint),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_EvaluatedDegeneratePcurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_EvaluatedDegeneratePcurve::*)() const>(&StepGeom_EvaluatedDegeneratePcurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_EvaluatedDegeneratePcurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_EvaluatedDegeneratePcurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Hyperbola ,opencascade::handle<StepGeom_Hyperbola> , StepGeom_Conic>>(m.attr("StepGeom_Hyperbola"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Hyperbola::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepGeom_Axis2Placement & , const Standard_Real , const Standard_Real ) ) static_cast<void (StepGeom_Hyperbola::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepGeom_Axis2Placement & , const Standard_Real , const Standard_Real ) >(&StepGeom_Hyperbola::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aSemiAxis"),  py::arg("aSemiImagAxis"))
        .def("SetSemiAxis",
             (void (StepGeom_Hyperbola::*)( const Standard_Real ) ) static_cast<void (StepGeom_Hyperbola::*)( const Standard_Real ) >(&StepGeom_Hyperbola::SetSemiAxis),
             R"#(None)#"  , py::arg("aSemiAxis"))
        .def("SemiAxis",
             (Standard_Real (StepGeom_Hyperbola::*)() const) static_cast<Standard_Real (StepGeom_Hyperbola::*)() const>(&StepGeom_Hyperbola::SemiAxis),
             R"#(None)#" )
        .def("SetSemiImagAxis",
             (void (StepGeom_Hyperbola::*)( const Standard_Real ) ) static_cast<void (StepGeom_Hyperbola::*)( const Standard_Real ) >(&StepGeom_Hyperbola::SetSemiImagAxis),
             R"#(None)#"  , py::arg("aSemiImagAxis"))
        .def("SemiImagAxis",
             (Standard_Real (StepGeom_Hyperbola::*)() const) static_cast<Standard_Real (StepGeom_Hyperbola::*)() const>(&StepGeom_Hyperbola::SemiImagAxis),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Hyperbola::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Hyperbola::*)() const>(&StepGeom_Hyperbola::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Hyperbola::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Hyperbola::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_IntersectionCurve ,opencascade::handle<StepGeom_IntersectionCurve> , StepGeom_SurfaceCurve>>(m.attr("StepGeom_IntersectionCurve"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_IntersectionCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Parabola ,opencascade::handle<StepGeom_Parabola> , StepGeom_Conic>>(m.attr("StepGeom_Parabola"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Parabola::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepGeom_Axis2Placement & , const Standard_Real ) ) static_cast<void (StepGeom_Parabola::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepGeom_Axis2Placement & , const Standard_Real ) >(&StepGeom_Parabola::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aFocalDist"))
        .def("SetFocalDist",
             (void (StepGeom_Parabola::*)( const Standard_Real ) ) static_cast<void (StepGeom_Parabola::*)( const Standard_Real ) >(&StepGeom_Parabola::SetFocalDist),
             R"#(None)#"  , py::arg("aFocalDist"))
        .def("FocalDist",
             (Standard_Real (StepGeom_Parabola::*)() const) static_cast<Standard_Real (StepGeom_Parabola::*)() const>(&StepGeom_Parabola::FocalDist),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Parabola::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Parabola::*)() const>(&StepGeom_Parabola::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Parabola::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Parabola::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Plane ,opencascade::handle<StepGeom_Plane> , StepGeom_ElementarySurface>>(m.attr("StepGeom_Plane"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Plane::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_Polyline ,opencascade::handle<StepGeom_Polyline> , StepGeom_BoundedCurve>>(m.attr("StepGeom_Polyline"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_Polyline::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & ) ) static_cast<void (StepGeom_Polyline::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & ) >(&StepGeom_Polyline::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPoints"))
        .def("SetPoints",
             (void (StepGeom_Polyline::*)( const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & ) ) static_cast<void (StepGeom_Polyline::*)( const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & ) >(&StepGeom_Polyline::SetPoints),
             R"#(None)#"  , py::arg("aPoints"))
        .def("Points",
             (opencascade::handle<StepGeom_HArray1OfCartesianPoint> (StepGeom_Polyline::*)() const) static_cast<opencascade::handle<StepGeom_HArray1OfCartesianPoint> (StepGeom_Polyline::*)() const>(&StepGeom_Polyline::Points),
             R"#(None)#" )
        .def("PointsValue",
             (opencascade::handle<StepGeom_CartesianPoint> (StepGeom_Polyline::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepGeom_CartesianPoint> (StepGeom_Polyline::*)( const Standard_Integer ) const>(&StepGeom_Polyline::PointsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbPoints",
             (Standard_Integer (StepGeom_Polyline::*)() const) static_cast<Standard_Integer (StepGeom_Polyline::*)() const>(&StepGeom_Polyline::NbPoints),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_Polyline::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_Polyline::*)() const>(&StepGeom_Polyline::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_Polyline::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_Polyline::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_RectangularCompositeSurface ,opencascade::handle<StepGeom_RectangularCompositeSurface> , StepGeom_BoundedSurface>>(m.attr("StepGeom_RectangularCompositeSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_RectangularCompositeSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_HArray2OfSurfacePatch> & ) ) static_cast<void (StepGeom_RectangularCompositeSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_HArray2OfSurfacePatch> & ) >(&StepGeom_RectangularCompositeSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSegments"))
        .def("SetSegments",
             (void (StepGeom_RectangularCompositeSurface::*)( const opencascade::handle<StepGeom_HArray2OfSurfacePatch> & ) ) static_cast<void (StepGeom_RectangularCompositeSurface::*)( const opencascade::handle<StepGeom_HArray2OfSurfacePatch> & ) >(&StepGeom_RectangularCompositeSurface::SetSegments),
             R"#(None)#"  , py::arg("aSegments"))
        .def("Segments",
             (opencascade::handle<StepGeom_HArray2OfSurfacePatch> (StepGeom_RectangularCompositeSurface::*)() const) static_cast<opencascade::handle<StepGeom_HArray2OfSurfacePatch> (StepGeom_RectangularCompositeSurface::*)() const>(&StepGeom_RectangularCompositeSurface::Segments),
             R"#(None)#" )
        .def("SegmentsValue",
             (opencascade::handle<StepGeom_SurfacePatch> (StepGeom_RectangularCompositeSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<opencascade::handle<StepGeom_SurfacePatch> (StepGeom_RectangularCompositeSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&StepGeom_RectangularCompositeSurface::SegmentsValue),
             R"#(None)#"  , py::arg("num1"),  py::arg("num2"))
        .def("NbSegmentsI",
             (Standard_Integer (StepGeom_RectangularCompositeSurface::*)() const) static_cast<Standard_Integer (StepGeom_RectangularCompositeSurface::*)() const>(&StepGeom_RectangularCompositeSurface::NbSegmentsI),
             R"#(None)#" )
        .def("NbSegmentsJ",
             (Standard_Integer (StepGeom_RectangularCompositeSurface::*)() const) static_cast<Standard_Integer (StepGeom_RectangularCompositeSurface::*)() const>(&StepGeom_RectangularCompositeSurface::NbSegmentsJ),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_RectangularCompositeSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_RectangularCompositeSurface::*)() const>(&StepGeom_RectangularCompositeSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_RectangularCompositeSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_RectangularCompositeSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_RectangularTrimmedSurface ,opencascade::handle<StepGeom_RectangularTrimmedSurface> , StepGeom_BoundedSurface>>(m.attr("StepGeom_RectangularTrimmedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_RectangularTrimmedSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (StepGeom_RectangularTrimmedSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&StepGeom_RectangularTrimmedSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBasisSurface"),  py::arg("aU1"),  py::arg("aU2"),  py::arg("aV1"),  py::arg("aV2"),  py::arg("aUsense"),  py::arg("aVsense"))
        .def("SetBasisSurface",
             (void (StepGeom_RectangularTrimmedSurface::*)( const opencascade::handle<StepGeom_Surface> & ) ) static_cast<void (StepGeom_RectangularTrimmedSurface::*)( const opencascade::handle<StepGeom_Surface> & ) >(&StepGeom_RectangularTrimmedSurface::SetBasisSurface),
             R"#(None)#"  , py::arg("aBasisSurface"))
        .def("BasisSurface",
             (opencascade::handle<StepGeom_Surface> (StepGeom_RectangularTrimmedSurface::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepGeom_RectangularTrimmedSurface::*)() const>(&StepGeom_RectangularTrimmedSurface::BasisSurface),
             R"#(None)#" )
        .def("SetU1",
             (void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Real ) >(&StepGeom_RectangularTrimmedSurface::SetU1),
             R"#(None)#"  , py::arg("aU1"))
        .def("U1",
             (Standard_Real (StepGeom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Real (StepGeom_RectangularTrimmedSurface::*)() const>(&StepGeom_RectangularTrimmedSurface::U1),
             R"#(None)#" )
        .def("SetU2",
             (void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Real ) >(&StepGeom_RectangularTrimmedSurface::SetU2),
             R"#(None)#"  , py::arg("aU2"))
        .def("U2",
             (Standard_Real (StepGeom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Real (StepGeom_RectangularTrimmedSurface::*)() const>(&StepGeom_RectangularTrimmedSurface::U2),
             R"#(None)#" )
        .def("SetV1",
             (void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Real ) >(&StepGeom_RectangularTrimmedSurface::SetV1),
             R"#(None)#"  , py::arg("aV1"))
        .def("V1",
             (Standard_Real (StepGeom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Real (StepGeom_RectangularTrimmedSurface::*)() const>(&StepGeom_RectangularTrimmedSurface::V1),
             R"#(None)#" )
        .def("SetV2",
             (void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Real ) >(&StepGeom_RectangularTrimmedSurface::SetV2),
             R"#(None)#"  , py::arg("aV2"))
        .def("V2",
             (Standard_Real (StepGeom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Real (StepGeom_RectangularTrimmedSurface::*)() const>(&StepGeom_RectangularTrimmedSurface::V2),
             R"#(None)#" )
        .def("SetUsense",
             (void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Boolean ) ) static_cast<void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Boolean ) >(&StepGeom_RectangularTrimmedSurface::SetUsense),
             R"#(None)#"  , py::arg("aUsense"))
        .def("Usense",
             (Standard_Boolean (StepGeom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Boolean (StepGeom_RectangularTrimmedSurface::*)() const>(&StepGeom_RectangularTrimmedSurface::Usense),
             R"#(None)#" )
        .def("SetVsense",
             (void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Boolean ) ) static_cast<void (StepGeom_RectangularTrimmedSurface::*)( const Standard_Boolean ) >(&StepGeom_RectangularTrimmedSurface::SetVsense),
             R"#(None)#"  , py::arg("aVsense"))
        .def("Vsense",
             (Standard_Boolean (StepGeom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Boolean (StepGeom_RectangularTrimmedSurface::*)() const>(&StepGeom_RectangularTrimmedSurface::Vsense),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_RectangularTrimmedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_RectangularTrimmedSurface::*)() const>(&StepGeom_RectangularTrimmedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_RectangularTrimmedSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_RectangularTrimmedSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SeamCurve ,opencascade::handle<StepGeom_SeamCurve> , StepGeom_SurfaceCurve>>(m.attr("StepGeom_SeamCurve"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_SeamCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SphericalSurface ,opencascade::handle<StepGeom_SphericalSurface> , StepGeom_ElementarySurface>>(m.attr("StepGeom_SphericalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_SphericalSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const Standard_Real ) ) static_cast<void (StepGeom_SphericalSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const Standard_Real ) >(&StepGeom_SphericalSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aRadius"))
        .def("SetRadius",
             (void (StepGeom_SphericalSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_SphericalSurface::*)( const Standard_Real ) >(&StepGeom_SphericalSurface::SetRadius),
             R"#(None)#"  , py::arg("aRadius"))
        .def("Radius",
             (Standard_Real (StepGeom_SphericalSurface::*)() const) static_cast<Standard_Real (StepGeom_SphericalSurface::*)() const>(&StepGeom_SphericalSurface::Radius),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SphericalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SphericalSurface::*)() const>(&StepGeom_SphericalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SphericalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_SphericalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceCurveAndBoundedCurve ,opencascade::handle<StepGeom_SurfaceCurveAndBoundedCurve> , StepGeom_SurfaceCurve>>(m.attr("StepGeom_SurfaceCurveAndBoundedCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("BoundedCurve",
             (opencascade::handle<StepGeom_BoundedCurve> & (StepGeom_SurfaceCurveAndBoundedCurve::*)() ) static_cast<opencascade::handle<StepGeom_BoundedCurve> & (StepGeom_SurfaceCurveAndBoundedCurve::*)() >(&StepGeom_SurfaceCurveAndBoundedCurve::BoundedCurve),
             R"#(returns field BoundedCurve)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfaceCurveAndBoundedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfaceCurveAndBoundedCurve::*)() const>(&StepGeom_SurfaceCurveAndBoundedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfaceCurveAndBoundedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_SurfaceCurveAndBoundedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceOfLinearExtrusion ,opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> , StepGeom_SweptSurface>>(m.attr("StepGeom_SurfaceOfLinearExtrusion"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_SurfaceOfLinearExtrusion::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const opencascade::handle<StepGeom_Vector> & ) ) static_cast<void (StepGeom_SurfaceOfLinearExtrusion::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const opencascade::handle<StepGeom_Vector> & ) >(&StepGeom_SurfaceOfLinearExtrusion::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSweptCurve"),  py::arg("aExtrusionAxis"))
        .def("SetExtrusionAxis",
             (void (StepGeom_SurfaceOfLinearExtrusion::*)( const opencascade::handle<StepGeom_Vector> & ) ) static_cast<void (StepGeom_SurfaceOfLinearExtrusion::*)( const opencascade::handle<StepGeom_Vector> & ) >(&StepGeom_SurfaceOfLinearExtrusion::SetExtrusionAxis),
             R"#(None)#"  , py::arg("aExtrusionAxis"))
        .def("ExtrusionAxis",
             (opencascade::handle<StepGeom_Vector> (StepGeom_SurfaceOfLinearExtrusion::*)() const) static_cast<opencascade::handle<StepGeom_Vector> (StepGeom_SurfaceOfLinearExtrusion::*)() const>(&StepGeom_SurfaceOfLinearExtrusion::ExtrusionAxis),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfaceOfLinearExtrusion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfaceOfLinearExtrusion::*)() const>(&StepGeom_SurfaceOfLinearExtrusion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfaceOfLinearExtrusion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_SurfaceOfLinearExtrusion::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_SurfaceOfRevolution ,opencascade::handle<StepGeom_SurfaceOfRevolution> , StepGeom_SweptSurface>>(m.attr("StepGeom_SurfaceOfRevolution"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_SurfaceOfRevolution::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const opencascade::handle<StepGeom_Axis1Placement> & ) ) static_cast<void (StepGeom_SurfaceOfRevolution::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const opencascade::handle<StepGeom_Axis1Placement> & ) >(&StepGeom_SurfaceOfRevolution::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSweptCurve"),  py::arg("aAxisPosition"))
        .def("SetAxisPosition",
             (void (StepGeom_SurfaceOfRevolution::*)( const opencascade::handle<StepGeom_Axis1Placement> & ) ) static_cast<void (StepGeom_SurfaceOfRevolution::*)( const opencascade::handle<StepGeom_Axis1Placement> & ) >(&StepGeom_SurfaceOfRevolution::SetAxisPosition),
             R"#(None)#"  , py::arg("aAxisPosition"))
        .def("AxisPosition",
             (opencascade::handle<StepGeom_Axis1Placement> (StepGeom_SurfaceOfRevolution::*)() const) static_cast<opencascade::handle<StepGeom_Axis1Placement> (StepGeom_SurfaceOfRevolution::*)() const>(&StepGeom_SurfaceOfRevolution::AxisPosition),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_SurfaceOfRevolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_SurfaceOfRevolution::*)() const>(&StepGeom_SurfaceOfRevolution::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_SurfaceOfRevolution::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_SurfaceOfRevolution::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_ToroidalSurface ,opencascade::handle<StepGeom_ToroidalSurface> , StepGeom_ElementarySurface>>(m.attr("StepGeom_ToroidalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_ToroidalSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const Standard_Real , const Standard_Real ) ) static_cast<void (StepGeom_ToroidalSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const Standard_Real , const Standard_Real ) >(&StepGeom_ToroidalSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aMajorRadius"),  py::arg("aMinorRadius"))
        .def("SetMajorRadius",
             (void (StepGeom_ToroidalSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_ToroidalSurface::*)( const Standard_Real ) >(&StepGeom_ToroidalSurface::SetMajorRadius),
             R"#(None)#"  , py::arg("aMajorRadius"))
        .def("MajorRadius",
             (Standard_Real (StepGeom_ToroidalSurface::*)() const) static_cast<Standard_Real (StepGeom_ToroidalSurface::*)() const>(&StepGeom_ToroidalSurface::MajorRadius),
             R"#(None)#" )
        .def("SetMinorRadius",
             (void (StepGeom_ToroidalSurface::*)( const Standard_Real ) ) static_cast<void (StepGeom_ToroidalSurface::*)( const Standard_Real ) >(&StepGeom_ToroidalSurface::SetMinorRadius),
             R"#(None)#"  , py::arg("aMinorRadius"))
        .def("MinorRadius",
             (Standard_Real (StepGeom_ToroidalSurface::*)() const) static_cast<Standard_Real (StepGeom_ToroidalSurface::*)() const>(&StepGeom_ToroidalSurface::MinorRadius),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_ToroidalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_ToroidalSurface::*)() const>(&StepGeom_ToroidalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_ToroidalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_ToroidalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_TrimmedCurve ,opencascade::handle<StepGeom_TrimmedCurve> , StepGeom_BoundedCurve>>(m.attr("StepGeom_TrimmedCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_TrimmedCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const opencascade::handle<StepGeom_HArray1OfTrimmingSelect> & , const opencascade::handle<StepGeom_HArray1OfTrimmingSelect> & , const Standard_Boolean , const StepGeom_TrimmingPreference ) ) static_cast<void (StepGeom_TrimmedCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Curve> & , const opencascade::handle<StepGeom_HArray1OfTrimmingSelect> & , const opencascade::handle<StepGeom_HArray1OfTrimmingSelect> & , const Standard_Boolean , const StepGeom_TrimmingPreference ) >(&StepGeom_TrimmedCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBasisCurve"),  py::arg("aTrim1"),  py::arg("aTrim2"),  py::arg("aSenseAgreement"),  py::arg("aMasterRepresentation"))
        .def("SetBasisCurve",
             (void (StepGeom_TrimmedCurve::*)( const opencascade::handle<StepGeom_Curve> & ) ) static_cast<void (StepGeom_TrimmedCurve::*)( const opencascade::handle<StepGeom_Curve> & ) >(&StepGeom_TrimmedCurve::SetBasisCurve),
             R"#(None)#"  , py::arg("aBasisCurve"))
        .def("BasisCurve",
             (opencascade::handle<StepGeom_Curve> (StepGeom_TrimmedCurve::*)() const) static_cast<opencascade::handle<StepGeom_Curve> (StepGeom_TrimmedCurve::*)() const>(&StepGeom_TrimmedCurve::BasisCurve),
             R"#(None)#" )
        .def("SetTrim1",
             (void (StepGeom_TrimmedCurve::*)( const opencascade::handle<StepGeom_HArray1OfTrimmingSelect> & ) ) static_cast<void (StepGeom_TrimmedCurve::*)( const opencascade::handle<StepGeom_HArray1OfTrimmingSelect> & ) >(&StepGeom_TrimmedCurve::SetTrim1),
             R"#(None)#"  , py::arg("aTrim1"))
        .def("Trim1",
             (opencascade::handle<StepGeom_HArray1OfTrimmingSelect> (StepGeom_TrimmedCurve::*)() const) static_cast<opencascade::handle<StepGeom_HArray1OfTrimmingSelect> (StepGeom_TrimmedCurve::*)() const>(&StepGeom_TrimmedCurve::Trim1),
             R"#(None)#" )
        .def("Trim1Value",
             (StepGeom_TrimmingSelect (StepGeom_TrimmedCurve::*)( const Standard_Integer ) const) static_cast<StepGeom_TrimmingSelect (StepGeom_TrimmedCurve::*)( const Standard_Integer ) const>(&StepGeom_TrimmedCurve::Trim1Value),
             R"#(None)#"  , py::arg("num"))
        .def("NbTrim1",
             (Standard_Integer (StepGeom_TrimmedCurve::*)() const) static_cast<Standard_Integer (StepGeom_TrimmedCurve::*)() const>(&StepGeom_TrimmedCurve::NbTrim1),
             R"#(None)#" )
        .def("SetTrim2",
             (void (StepGeom_TrimmedCurve::*)( const opencascade::handle<StepGeom_HArray1OfTrimmingSelect> & ) ) static_cast<void (StepGeom_TrimmedCurve::*)( const opencascade::handle<StepGeom_HArray1OfTrimmingSelect> & ) >(&StepGeom_TrimmedCurve::SetTrim2),
             R"#(None)#"  , py::arg("aTrim2"))
        .def("Trim2",
             (opencascade::handle<StepGeom_HArray1OfTrimmingSelect> (StepGeom_TrimmedCurve::*)() const) static_cast<opencascade::handle<StepGeom_HArray1OfTrimmingSelect> (StepGeom_TrimmedCurve::*)() const>(&StepGeom_TrimmedCurve::Trim2),
             R"#(None)#" )
        .def("Trim2Value",
             (StepGeom_TrimmingSelect (StepGeom_TrimmedCurve::*)( const Standard_Integer ) const) static_cast<StepGeom_TrimmingSelect (StepGeom_TrimmedCurve::*)( const Standard_Integer ) const>(&StepGeom_TrimmedCurve::Trim2Value),
             R"#(None)#"  , py::arg("num"))
        .def("NbTrim2",
             (Standard_Integer (StepGeom_TrimmedCurve::*)() const) static_cast<Standard_Integer (StepGeom_TrimmedCurve::*)() const>(&StepGeom_TrimmedCurve::NbTrim2),
             R"#(None)#" )
        .def("SetSenseAgreement",
             (void (StepGeom_TrimmedCurve::*)( const Standard_Boolean ) ) static_cast<void (StepGeom_TrimmedCurve::*)( const Standard_Boolean ) >(&StepGeom_TrimmedCurve::SetSenseAgreement),
             R"#(None)#"  , py::arg("aSenseAgreement"))
        .def("SenseAgreement",
             (Standard_Boolean (StepGeom_TrimmedCurve::*)() const) static_cast<Standard_Boolean (StepGeom_TrimmedCurve::*)() const>(&StepGeom_TrimmedCurve::SenseAgreement),
             R"#(None)#" )
        .def("SetMasterRepresentation",
             (void (StepGeom_TrimmedCurve::*)( const StepGeom_TrimmingPreference ) ) static_cast<void (StepGeom_TrimmedCurve::*)( const StepGeom_TrimmingPreference ) >(&StepGeom_TrimmedCurve::SetMasterRepresentation),
             R"#(None)#"  , py::arg("aMasterRepresentation"))
        .def("MasterRepresentation",
             (StepGeom_TrimmingPreference (StepGeom_TrimmedCurve::*)() const) static_cast<StepGeom_TrimmingPreference (StepGeom_TrimmedCurve::*)() const>(&StepGeom_TrimmedCurve::MasterRepresentation),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_TrimmedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_TrimmedCurve::*)() const>(&StepGeom_TrimmedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_TrimmedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_TrimmedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineCurveWithKnots ,opencascade::handle<StepGeom_BSplineCurveWithKnots> , StepGeom_BSplineCurve>>(m.attr("StepGeom_BSplineCurveWithKnots"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_BSplineCurveWithKnots::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfReal> & , const StepGeom_KnotType ) ) static_cast<void (StepGeom_BSplineCurveWithKnots::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfReal> & , const StepGeom_KnotType ) >(&StepGeom_BSplineCurveWithKnots::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"),  py::arg("aKnotMultiplicities"),  py::arg("aKnots"),  py::arg("aKnotSpec"))
        .def("SetKnotMultiplicities",
             (void (StepGeom_BSplineCurveWithKnots::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) ) static_cast<void (StepGeom_BSplineCurveWithKnots::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) >(&StepGeom_BSplineCurveWithKnots::SetKnotMultiplicities),
             R"#(None)#"  , py::arg("aKnotMultiplicities"))
        .def("KnotMultiplicities",
             (opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineCurveWithKnots::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineCurveWithKnots::*)() const>(&StepGeom_BSplineCurveWithKnots::KnotMultiplicities),
             R"#(None)#" )
        .def("KnotMultiplicitiesValue",
             (Standard_Integer (StepGeom_BSplineCurveWithKnots::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepGeom_BSplineCurveWithKnots::*)( const Standard_Integer ) const>(&StepGeom_BSplineCurveWithKnots::KnotMultiplicitiesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbKnotMultiplicities",
             (Standard_Integer (StepGeom_BSplineCurveWithKnots::*)() const) static_cast<Standard_Integer (StepGeom_BSplineCurveWithKnots::*)() const>(&StepGeom_BSplineCurveWithKnots::NbKnotMultiplicities),
             R"#(None)#" )
        .def("SetKnots",
             (void (StepGeom_BSplineCurveWithKnots::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_BSplineCurveWithKnots::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_BSplineCurveWithKnots::SetKnots),
             R"#(None)#"  , py::arg("aKnots"))
        .def("Knots",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineCurveWithKnots::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineCurveWithKnots::*)() const>(&StepGeom_BSplineCurveWithKnots::Knots),
             R"#(None)#" )
        .def("KnotsValue",
             (Standard_Real (StepGeom_BSplineCurveWithKnots::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_BSplineCurveWithKnots::*)( const Standard_Integer ) const>(&StepGeom_BSplineCurveWithKnots::KnotsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbKnots",
             (Standard_Integer (StepGeom_BSplineCurveWithKnots::*)() const) static_cast<Standard_Integer (StepGeom_BSplineCurveWithKnots::*)() const>(&StepGeom_BSplineCurveWithKnots::NbKnots),
             R"#(None)#" )
        .def("SetKnotSpec",
             (void (StepGeom_BSplineCurveWithKnots::*)( const StepGeom_KnotType ) ) static_cast<void (StepGeom_BSplineCurveWithKnots::*)( const StepGeom_KnotType ) >(&StepGeom_BSplineCurveWithKnots::SetKnotSpec),
             R"#(None)#"  , py::arg("aKnotSpec"))
        .def("KnotSpec",
             (StepGeom_KnotType (StepGeom_BSplineCurveWithKnots::*)() const) static_cast<StepGeom_KnotType (StepGeom_BSplineCurveWithKnots::*)() const>(&StepGeom_BSplineCurveWithKnots::KnotSpec),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurveWithKnots::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurveWithKnots::*)() const>(&StepGeom_BSplineCurveWithKnots::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineCurveWithKnots::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BSplineCurveWithKnots::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve ,opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_BSplineCurveWithKnots> & , const opencascade::handle<StepGeom_RationalBSplineCurve> & ) ) static_cast<void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_BSplineCurveWithKnots> & , const opencascade::handle<StepGeom_RationalBSplineCurve> & ) >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"),  py::arg("aBSplineCurveWithKnots"),  py::arg("aRationalBSplineCurve"))
        .def("Init",
             (void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfReal> & , const StepGeom_KnotType , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfReal> & , const StepGeom_KnotType , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"),  py::arg("aKnotMultiplicities"),  py::arg("aKnots"),  py::arg("aKnotSpec"),  py::arg("aWeightsData"))
        .def("SetBSplineCurveWithKnots",
             (void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_BSplineCurveWithKnots> & ) ) static_cast<void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_BSplineCurveWithKnots> & ) >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetBSplineCurveWithKnots),
             R"#(None)#"  , py::arg("aBSplineCurveWithKnots"))
        .def("BSplineCurveWithKnots",
             (opencascade::handle<StepGeom_BSplineCurveWithKnots> (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<StepGeom_BSplineCurveWithKnots> (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::BSplineCurveWithKnots),
             R"#(None)#" )
        .def("SetRationalBSplineCurve",
             (void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ) ) static_cast<void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ) >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetRationalBSplineCurve),
             R"#(None)#"  , py::arg("aRationalBSplineCurve"))
        .def("RationalBSplineCurve",
             (opencascade::handle<StepGeom_RationalBSplineCurve> (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<StepGeom_RationalBSplineCurve> (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::RationalBSplineCurve),
             R"#(None)#" )
        .def("SetKnotMultiplicities",
             (void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) ) static_cast<void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetKnotMultiplicities),
             R"#(None)#"  , py::arg("aKnotMultiplicities"))
        .def("KnotMultiplicities",
             (opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::KnotMultiplicities),
             R"#(None)#" )
        .def("KnotMultiplicitiesValue",
             (Standard_Integer (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const Standard_Integer ) const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::KnotMultiplicitiesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbKnotMultiplicities",
             (Standard_Integer (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<Standard_Integer (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::NbKnotMultiplicities),
             R"#(None)#" )
        .def("SetKnots",
             (void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetKnots),
             R"#(None)#"  , py::arg("aKnots"))
        .def("Knots",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::Knots),
             R"#(None)#" )
        .def("KnotsValue",
             (Standard_Real (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const Standard_Integer ) const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::KnotsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbKnots",
             (Standard_Integer (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<Standard_Integer (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::NbKnots),
             R"#(None)#" )
        .def("SetKnotSpec",
             (void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const StepGeom_KnotType ) ) static_cast<void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const StepGeom_KnotType ) >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetKnotSpec),
             R"#(None)#"  , py::arg("aKnotSpec"))
        .def("KnotSpec",
             (StepGeom_KnotType (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<StepGeom_KnotType (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::KnotSpec),
             R"#(None)#" )
        .def("SetWeightsData",
             (void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::SetWeightsData),
             R"#(None)#"  , py::arg("aWeightsData"))
        .def("WeightsData",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::WeightsData),
             R"#(None)#" )
        .def("WeightsDataValue",
             (Standard_Real (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)( const Standard_Integer ) const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::WeightsDataValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbWeightsData",
             (Standard_Integer (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<Standard_Integer (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::NbWeightsData),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::*)() const>(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineSurfaceWithKnots ,opencascade::handle<StepGeom_BSplineSurfaceWithKnots> , StepGeom_BSplineSurface>>(m.attr("StepGeom_BSplineSurfaceWithKnots"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_BSplineSurfaceWithKnots::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const StepGeom_KnotType ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnots::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const StepGeom_KnotType ) >(&StepGeom_BSplineSurfaceWithKnots::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"),  py::arg("aUMultiplicities"),  py::arg("aVMultiplicities"),  py::arg("aUKnots"),  py::arg("aVKnots"),  py::arg("aKnotSpec"))
        .def("SetUMultiplicities",
             (void (StepGeom_BSplineSurfaceWithKnots::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnots::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) >(&StepGeom_BSplineSurfaceWithKnots::SetUMultiplicities),
             R"#(None)#"  , py::arg("aUMultiplicities"))
        .def("UMultiplicities",
             (opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::UMultiplicities),
             R"#(None)#" )
        .def("UMultiplicitiesValue",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)( const Standard_Integer ) const>(&StepGeom_BSplineSurfaceWithKnots::UMultiplicitiesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbUMultiplicities",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::NbUMultiplicities),
             R"#(None)#" )
        .def("SetVMultiplicities",
             (void (StepGeom_BSplineSurfaceWithKnots::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnots::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) >(&StepGeom_BSplineSurfaceWithKnots::SetVMultiplicities),
             R"#(None)#"  , py::arg("aVMultiplicities"))
        .def("VMultiplicities",
             (opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::VMultiplicities),
             R"#(None)#" )
        .def("VMultiplicitiesValue",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)( const Standard_Integer ) const>(&StepGeom_BSplineSurfaceWithKnots::VMultiplicitiesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbVMultiplicities",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::NbVMultiplicities),
             R"#(None)#" )
        .def("SetUKnots",
             (void (StepGeom_BSplineSurfaceWithKnots::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnots::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_BSplineSurfaceWithKnots::SetUKnots),
             R"#(None)#"  , py::arg("aUKnots"))
        .def("UKnots",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::UKnots),
             R"#(None)#" )
        .def("UKnotsValue",
             (Standard_Real (StepGeom_BSplineSurfaceWithKnots::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_BSplineSurfaceWithKnots::*)( const Standard_Integer ) const>(&StepGeom_BSplineSurfaceWithKnots::UKnotsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbUKnots",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::NbUKnots),
             R"#(None)#" )
        .def("SetVKnots",
             (void (StepGeom_BSplineSurfaceWithKnots::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnots::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_BSplineSurfaceWithKnots::SetVKnots),
             R"#(None)#"  , py::arg("aVKnots"))
        .def("VKnots",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::VKnots),
             R"#(None)#" )
        .def("VKnotsValue",
             (Standard_Real (StepGeom_BSplineSurfaceWithKnots::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_BSplineSurfaceWithKnots::*)( const Standard_Integer ) const>(&StepGeom_BSplineSurfaceWithKnots::VKnotsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbVKnots",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::NbVKnots),
             R"#(None)#" )
        .def("SetKnotSpec",
             (void (StepGeom_BSplineSurfaceWithKnots::*)( const StepGeom_KnotType ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnots::*)( const StepGeom_KnotType ) >(&StepGeom_BSplineSurfaceWithKnots::SetKnotSpec),
             R"#(None)#"  , py::arg("aKnotSpec"))
        .def("KnotSpec",
             (StepGeom_KnotType (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<StepGeom_KnotType (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::KnotSpec),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurfaceWithKnots::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurfaceWithKnots::*)() const>(&StepGeom_BSplineSurfaceWithKnots::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineSurfaceWithKnots::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BSplineSurfaceWithKnots::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface ,opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> & , const opencascade::handle<StepGeom_RationalBSplineSurface> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> & , const opencascade::handle<StepGeom_RationalBSplineSurface> & ) >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"),  py::arg("aBSplineSurfaceWithKnots"),  py::arg("aRationalBSplineSurface"))
        .def("Init",
             (void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const StepGeom_KnotType , const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfInteger> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const StepGeom_KnotType , const opencascade::handle<TColStd_HArray2OfReal> & ) >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"),  py::arg("aUMultiplicities"),  py::arg("aVMultiplicities"),  py::arg("aUKnots"),  py::arg("aVKnots"),  py::arg("aKnotSpec"),  py::arg("aWeightsData"))
        .def("SetBSplineSurfaceWithKnots",
             (void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> & ) >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetBSplineSurfaceWithKnots),
             R"#(None)#"  , py::arg("aBSplineSurfaceWithKnots"))
        .def("BSplineSurfaceWithKnots",
             (opencascade::handle<StepGeom_BSplineSurfaceWithKnots> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<StepGeom_BSplineSurfaceWithKnots> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::BSplineSurfaceWithKnots),
             R"#(None)#" )
        .def("SetRationalBSplineSurface",
             (void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ) >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetRationalBSplineSurface),
             R"#(None)#"  , py::arg("aRationalBSplineSurface"))
        .def("RationalBSplineSurface",
             (opencascade::handle<StepGeom_RationalBSplineSurface> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<StepGeom_RationalBSplineSurface> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::RationalBSplineSurface),
             R"#(None)#" )
        .def("SetUMultiplicities",
             (void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetUMultiplicities),
             R"#(None)#"  , py::arg("aUMultiplicities"))
        .def("UMultiplicities",
             (opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::UMultiplicities),
             R"#(None)#" )
        .def("UMultiplicitiesValue",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const Standard_Integer ) const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::UMultiplicitiesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbUMultiplicities",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbUMultiplicities),
             R"#(None)#" )
        .def("SetVMultiplicities",
             (void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ) >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetVMultiplicities),
             R"#(None)#"  , py::arg("aVMultiplicities"))
        .def("VMultiplicities",
             (opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::VMultiplicities),
             R"#(None)#" )
        .def("VMultiplicitiesValue",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const Standard_Integer ) const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::VMultiplicitiesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbVMultiplicities",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbVMultiplicities),
             R"#(None)#" )
        .def("SetUKnots",
             (void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetUKnots),
             R"#(None)#"  , py::arg("aUKnots"))
        .def("UKnots",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::UKnots),
             R"#(None)#" )
        .def("UKnotsValue",
             (Standard_Real (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const Standard_Integer ) const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::UKnotsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbUKnots",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbUKnots),
             R"#(None)#" )
        .def("SetVKnots",
             (void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetVKnots),
             R"#(None)#"  , py::arg("aVKnots"))
        .def("VKnots",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::VKnots),
             R"#(None)#" )
        .def("VKnotsValue",
             (Standard_Real (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const Standard_Integer ) const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::VKnotsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbVKnots",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbVKnots),
             R"#(None)#" )
        .def("SetKnotSpec",
             (void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const StepGeom_KnotType ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const StepGeom_KnotType ) >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetKnotSpec),
             R"#(None)#"  , py::arg("aKnotSpec"))
        .def("KnotSpec",
             (StepGeom_KnotType (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<StepGeom_KnotType (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::KnotSpec),
             R"#(None)#" )
        .def("SetWeightsData",
             (void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::SetWeightsData),
             R"#(None)#"  , py::arg("aWeightsData"))
        .def("WeightsData",
             (opencascade::handle<TColStd_HArray2OfReal> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::WeightsData),
             R"#(None)#" )
        .def("WeightsDataValue",
             (Standard_Real (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::WeightsDataValue),
             R"#(None)#"  , py::arg("num1"),  py::arg("num2"))
        .def("NbWeightsDataI",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbWeightsDataI),
             R"#(None)#" )
        .def("NbWeightsDataJ",
             (Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::NbWeightsDataJ),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::*)() const>(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BezierCurve ,opencascade::handle<StepGeom_BezierCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_BezierCurve"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BezierCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BezierCurveAndRationalBSplineCurve ,opencascade::handle<StepGeom_BezierCurveAndRationalBSplineCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_BezierCurveAndRationalBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_BezierCurve> & , const opencascade::handle<StepGeom_RationalBSplineCurve> & ) ) static_cast<void (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_BezierCurve> & , const opencascade::handle<StepGeom_RationalBSplineCurve> & ) >(&StepGeom_BezierCurveAndRationalBSplineCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"),  py::arg("aBezierCurve"),  py::arg("aRationalBSplineCurve"))
        .def("Init",
             (void (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_BezierCurveAndRationalBSplineCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"),  py::arg("aWeightsData"))
        .def("SetBezierCurve",
             (void (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_BezierCurve> & ) ) static_cast<void (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_BezierCurve> & ) >(&StepGeom_BezierCurveAndRationalBSplineCurve::SetBezierCurve),
             R"#(None)#"  , py::arg("aBezierCurve"))
        .def("BezierCurve",
             (opencascade::handle<StepGeom_BezierCurve> (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<StepGeom_BezierCurve> (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const>(&StepGeom_BezierCurveAndRationalBSplineCurve::BezierCurve),
             R"#(None)#" )
        .def("SetRationalBSplineCurve",
             (void (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ) ) static_cast<void (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ) >(&StepGeom_BezierCurveAndRationalBSplineCurve::SetRationalBSplineCurve),
             R"#(None)#"  , py::arg("aRationalBSplineCurve"))
        .def("RationalBSplineCurve",
             (opencascade::handle<StepGeom_RationalBSplineCurve> (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<StepGeom_RationalBSplineCurve> (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const>(&StepGeom_BezierCurveAndRationalBSplineCurve::RationalBSplineCurve),
             R"#(None)#" )
        .def("SetWeightsData",
             (void (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_BezierCurveAndRationalBSplineCurve::SetWeightsData),
             R"#(None)#"  , py::arg("aWeightsData"))
        .def("WeightsData",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const>(&StepGeom_BezierCurveAndRationalBSplineCurve::WeightsData),
             R"#(None)#" )
        .def("WeightsDataValue",
             (Standard_Real (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_BezierCurveAndRationalBSplineCurve::*)( const Standard_Integer ) const>(&StepGeom_BezierCurveAndRationalBSplineCurve::WeightsDataValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbWeightsData",
             (Standard_Integer (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const) static_cast<Standard_Integer (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const>(&StepGeom_BezierCurveAndRationalBSplineCurve::NbWeightsData),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BezierCurveAndRationalBSplineCurve::*)() const>(&StepGeom_BezierCurveAndRationalBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BezierCurveAndRationalBSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BezierCurveAndRationalBSplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BezierSurface ,opencascade::handle<StepGeom_BezierSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_BezierSurface"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BezierSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BezierSurfaceAndRationalBSplineSurface ,opencascade::handle<StepGeom_BezierSurfaceAndRationalBSplineSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_BezierSurfaceAndRationalBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_BezierSurface> & , const opencascade::handle<StepGeom_RationalBSplineSurface> & ) ) static_cast<void (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_BezierSurface> & , const opencascade::handle<StepGeom_RationalBSplineSurface> & ) >(&StepGeom_BezierSurfaceAndRationalBSplineSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"),  py::arg("aBezierSurface"),  py::arg("aRationalBSplineSurface"))
        .def("Init",
             (void (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray2OfReal> & ) >(&StepGeom_BezierSurfaceAndRationalBSplineSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"),  py::arg("aWeightsData"))
        .def("SetBezierSurface",
             (void (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_BezierSurface> & ) ) static_cast<void (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_BezierSurface> & ) >(&StepGeom_BezierSurfaceAndRationalBSplineSurface::SetBezierSurface),
             R"#(None)#"  , py::arg("aBezierSurface"))
        .def("BezierSurface",
             (opencascade::handle<StepGeom_BezierSurface> (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<StepGeom_BezierSurface> (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_BezierSurfaceAndRationalBSplineSurface::BezierSurface),
             R"#(None)#" )
        .def("SetRationalBSplineSurface",
             (void (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ) ) static_cast<void (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ) >(&StepGeom_BezierSurfaceAndRationalBSplineSurface::SetRationalBSplineSurface),
             R"#(None)#"  , py::arg("aRationalBSplineSurface"))
        .def("RationalBSplineSurface",
             (opencascade::handle<StepGeom_RationalBSplineSurface> (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<StepGeom_RationalBSplineSurface> (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_BezierSurfaceAndRationalBSplineSurface::RationalBSplineSurface),
             R"#(None)#" )
        .def("SetWeightsData",
             (void (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) >(&StepGeom_BezierSurfaceAndRationalBSplineSurface::SetWeightsData),
             R"#(None)#"  , py::arg("aWeightsData"))
        .def("WeightsData",
             (opencascade::handle<TColStd_HArray2OfReal> (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_BezierSurfaceAndRationalBSplineSurface::WeightsData),
             R"#(None)#" )
        .def("WeightsDataValue",
             (Standard_Real (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&StepGeom_BezierSurfaceAndRationalBSplineSurface::WeightsDataValue),
             R"#(None)#"  , py::arg("num1"),  py::arg("num2"))
        .def("NbWeightsDataI",
             (Standard_Integer (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_BezierSurfaceAndRationalBSplineSurface::NbWeightsDataI),
             R"#(None)#" )
        .def("NbWeightsDataJ",
             (Standard_Integer (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_BezierSurfaceAndRationalBSplineSurface::NbWeightsDataJ),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_BezierSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_BezierSurfaceAndRationalBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_BezierSurfaceAndRationalBSplineSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BezierSurfaceAndRationalBSplineSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_CompositeCurveOnSurface ,opencascade::handle<StepGeom_CompositeCurveOnSurface> , StepGeom_CompositeCurve>>(m.attr("StepGeom_CompositeCurveOnSurface"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_CompositeCurveOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_DegenerateToroidalSurface ,opencascade::handle<StepGeom_DegenerateToroidalSurface> , StepGeom_ToroidalSurface>>(m.attr("StepGeom_DegenerateToroidalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_DegenerateToroidalSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (StepGeom_DegenerateToroidalSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Axis2Placement3d> & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&StepGeom_DegenerateToroidalSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aMajorRadius"),  py::arg("aMinorRadius"),  py::arg("aSelectOuter"))
        .def("SetSelectOuter",
             (void (StepGeom_DegenerateToroidalSurface::*)( const Standard_Boolean ) ) static_cast<void (StepGeom_DegenerateToroidalSurface::*)( const Standard_Boolean ) >(&StepGeom_DegenerateToroidalSurface::SetSelectOuter),
             R"#(None)#"  , py::arg("aSelectOuter"))
        .def("SelectOuter",
             (Standard_Boolean (StepGeom_DegenerateToroidalSurface::*)() const) static_cast<Standard_Boolean (StepGeom_DegenerateToroidalSurface::*)() const>(&StepGeom_DegenerateToroidalSurface::SelectOuter),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_DegenerateToroidalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_DegenerateToroidalSurface::*)() const>(&StepGeom_DegenerateToroidalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_DegenerateToroidalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_DegenerateToroidalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_QuasiUniformCurve ,opencascade::handle<StepGeom_QuasiUniformCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_QuasiUniformCurve"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_QuasiUniformCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_QuasiUniformCurveAndRationalBSplineCurve ,opencascade::handle<StepGeom_QuasiUniformCurveAndRationalBSplineCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_QuasiUniformCurveAndRationalBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_QuasiUniformCurve> & , const opencascade::handle<StepGeom_RationalBSplineCurve> & ) ) static_cast<void (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_QuasiUniformCurve> & , const opencascade::handle<StepGeom_RationalBSplineCurve> & ) >(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"),  py::arg("aQuasiUniformCurve"),  py::arg("aRationalBSplineCurve"))
        .def("Init",
             (void (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"),  py::arg("aWeightsData"))
        .def("SetQuasiUniformCurve",
             (void (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_QuasiUniformCurve> & ) ) static_cast<void (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_QuasiUniformCurve> & ) >(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::SetQuasiUniformCurve),
             R"#(None)#"  , py::arg("aQuasiUniformCurve"))
        .def("QuasiUniformCurve",
             (opencascade::handle<StepGeom_QuasiUniformCurve> (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<StepGeom_QuasiUniformCurve> (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::QuasiUniformCurve),
             R"#(None)#" )
        .def("SetRationalBSplineCurve",
             (void (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ) ) static_cast<void (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ) >(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::SetRationalBSplineCurve),
             R"#(None)#"  , py::arg("aRationalBSplineCurve"))
        .def("RationalBSplineCurve",
             (opencascade::handle<StepGeom_RationalBSplineCurve> (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<StepGeom_RationalBSplineCurve> (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::RationalBSplineCurve),
             R"#(None)#" )
        .def("SetWeightsData",
             (void (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::SetWeightsData),
             R"#(None)#"  , py::arg("aWeightsData"))
        .def("WeightsData",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::WeightsData),
             R"#(None)#" )
        .def("WeightsDataValue",
             (Standard_Real (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)( const Standard_Integer ) const>(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::WeightsDataValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbWeightsData",
             (Standard_Integer (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const) static_cast<Standard_Integer (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::NbWeightsData),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_QuasiUniformCurveAndRationalBSplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_QuasiUniformSurface ,opencascade::handle<StepGeom_QuasiUniformSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_QuasiUniformSurface"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_QuasiUniformSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface ,opencascade::handle<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_QuasiUniformSurface> & , const opencascade::handle<StepGeom_RationalBSplineSurface> & ) ) static_cast<void (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_QuasiUniformSurface> & , const opencascade::handle<StepGeom_RationalBSplineSurface> & ) >(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"),  py::arg("aQuasiUniformSurface"),  py::arg("aRationalBSplineSurface"))
        .def("Init",
             (void (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray2OfReal> & ) >(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"),  py::arg("aWeightsData"))
        .def("SetQuasiUniformSurface",
             (void (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_QuasiUniformSurface> & ) ) static_cast<void (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_QuasiUniformSurface> & ) >(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::SetQuasiUniformSurface),
             R"#(None)#"  , py::arg("aQuasiUniformSurface"))
        .def("QuasiUniformSurface",
             (opencascade::handle<StepGeom_QuasiUniformSurface> (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<StepGeom_QuasiUniformSurface> (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::QuasiUniformSurface),
             R"#(None)#" )
        .def("SetRationalBSplineSurface",
             (void (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ) ) static_cast<void (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ) >(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::SetRationalBSplineSurface),
             R"#(None)#"  , py::arg("aRationalBSplineSurface"))
        .def("RationalBSplineSurface",
             (opencascade::handle<StepGeom_RationalBSplineSurface> (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<StepGeom_RationalBSplineSurface> (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::RationalBSplineSurface),
             R"#(None)#" )
        .def("SetWeightsData",
             (void (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) >(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::SetWeightsData),
             R"#(None)#"  , py::arg("aWeightsData"))
        .def("WeightsData",
             (opencascade::handle<TColStd_HArray2OfReal> (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::WeightsData),
             R"#(None)#" )
        .def("WeightsDataValue",
             (Standard_Real (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::WeightsDataValue),
             R"#(None)#"  , py::arg("num1"),  py::arg("num2"))
        .def("NbWeightsDataI",
             (Standard_Integer (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::NbWeightsDataI),
             R"#(None)#" )
        .def("NbWeightsDataJ",
             (Standard_Integer (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::NbWeightsDataJ),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_RationalBSplineCurve ,opencascade::handle<StepGeom_RationalBSplineCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_RationalBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_RationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_RationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_RationalBSplineCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"),  py::arg("aWeightsData"))
        .def("SetWeightsData",
             (void (StepGeom_RationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_RationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_RationalBSplineCurve::SetWeightsData),
             R"#(None)#"  , py::arg("aWeightsData"))
        .def("WeightsData",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_RationalBSplineCurve::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_RationalBSplineCurve::*)() const>(&StepGeom_RationalBSplineCurve::WeightsData),
             R"#(None)#" )
        .def("WeightsDataValue",
             (Standard_Real (StepGeom_RationalBSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_RationalBSplineCurve::*)( const Standard_Integer ) const>(&StepGeom_RationalBSplineCurve::WeightsDataValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbWeightsData",
             (Standard_Integer (StepGeom_RationalBSplineCurve::*)() const) static_cast<Standard_Integer (StepGeom_RationalBSplineCurve::*)() const>(&StepGeom_RationalBSplineCurve::NbWeightsData),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_RationalBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_RationalBSplineCurve::*)() const>(&StepGeom_RationalBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_RationalBSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_RationalBSplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_RationalBSplineSurface ,opencascade::handle<StepGeom_RationalBSplineSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_RationalBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_RationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (StepGeom_RationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray2OfReal> & ) >(&StepGeom_RationalBSplineSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"),  py::arg("aWeightsData"))
        .def("SetWeightsData",
             (void (StepGeom_RationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (StepGeom_RationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) >(&StepGeom_RationalBSplineSurface::SetWeightsData),
             R"#(None)#"  , py::arg("aWeightsData"))
        .def("WeightsData",
             (opencascade::handle<TColStd_HArray2OfReal> (StepGeom_RationalBSplineSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (StepGeom_RationalBSplineSurface::*)() const>(&StepGeom_RationalBSplineSurface::WeightsData),
             R"#(None)#" )
        .def("WeightsDataValue",
             (Standard_Real (StepGeom_RationalBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_RationalBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&StepGeom_RationalBSplineSurface::WeightsDataValue),
             R"#(None)#"  , py::arg("num1"),  py::arg("num2"))
        .def("NbWeightsDataI",
             (Standard_Integer (StepGeom_RationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_RationalBSplineSurface::*)() const>(&StepGeom_RationalBSplineSurface::NbWeightsDataI),
             R"#(None)#" )
        .def("NbWeightsDataJ",
             (Standard_Integer (StepGeom_RationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_RationalBSplineSurface::*)() const>(&StepGeom_RationalBSplineSurface::NbWeightsDataJ),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_RationalBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_RationalBSplineSurface::*)() const>(&StepGeom_RationalBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_RationalBSplineSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_RationalBSplineSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_UniformCurve ,opencascade::handle<StepGeom_UniformCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_UniformCurve"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_UniformCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_UniformCurveAndRationalBSplineCurve ,opencascade::handle<StepGeom_UniformCurveAndRationalBSplineCurve> , StepGeom_BSplineCurve>>(m.attr("StepGeom_UniformCurveAndRationalBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_UniformCurve> & , const opencascade::handle<StepGeom_RationalBSplineCurve> & ) ) static_cast<void (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_UniformCurve> & , const opencascade::handle<StepGeom_RationalBSplineCurve> & ) >(&StepGeom_UniformCurveAndRationalBSplineCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"),  py::arg("aUniformCurve"),  py::arg("aRationalBSplineCurve"))
        .def("Init",
             (void (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const opencascade::handle<StepGeom_HArray1OfCartesianPoint> & , const StepGeom_BSplineCurveForm , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_UniformCurveAndRationalBSplineCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDegree"),  py::arg("aControlPointsList"),  py::arg("aCurveForm"),  py::arg("aClosedCurve"),  py::arg("aSelfIntersect"),  py::arg("aWeightsData"))
        .def("SetUniformCurve",
             (void (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_UniformCurve> & ) ) static_cast<void (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_UniformCurve> & ) >(&StepGeom_UniformCurveAndRationalBSplineCurve::SetUniformCurve),
             R"#(None)#"  , py::arg("aUniformCurve"))
        .def("UniformCurve",
             (opencascade::handle<StepGeom_UniformCurve> (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<StepGeom_UniformCurve> (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_UniformCurveAndRationalBSplineCurve::UniformCurve),
             R"#(None)#" )
        .def("SetRationalBSplineCurve",
             (void (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ) ) static_cast<void (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ) >(&StepGeom_UniformCurveAndRationalBSplineCurve::SetRationalBSplineCurve),
             R"#(None)#"  , py::arg("aRationalBSplineCurve"))
        .def("RationalBSplineCurve",
             (opencascade::handle<StepGeom_RationalBSplineCurve> (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<StepGeom_RationalBSplineCurve> (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_UniformCurveAndRationalBSplineCurve::RationalBSplineCurve),
             R"#(None)#" )
        .def("SetWeightsData",
             (void (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepGeom_UniformCurveAndRationalBSplineCurve::SetWeightsData),
             R"#(None)#"  , py::arg("aWeightsData"))
        .def("WeightsData",
             (opencascade::handle<TColStd_HArray1OfReal> (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_UniformCurveAndRationalBSplineCurve::WeightsData),
             R"#(None)#" )
        .def("WeightsDataValue",
             (Standard_Real (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_UniformCurveAndRationalBSplineCurve::*)( const Standard_Integer ) const>(&StepGeom_UniformCurveAndRationalBSplineCurve::WeightsDataValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbWeightsData",
             (Standard_Integer (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const) static_cast<Standard_Integer (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_UniformCurveAndRationalBSplineCurve::NbWeightsData),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_UniformCurveAndRationalBSplineCurve::*)() const>(&StepGeom_UniformCurveAndRationalBSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_UniformCurveAndRationalBSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_UniformCurveAndRationalBSplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_UniformSurface ,opencascade::handle<StepGeom_UniformSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_UniformSurface"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_UniformSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_UniformSurfaceAndRationalBSplineSurface ,opencascade::handle<StepGeom_UniformSurfaceAndRationalBSplineSurface> , StepGeom_BSplineSurface>>(m.attr("StepGeom_UniformSurfaceAndRationalBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_UniformSurface> & , const opencascade::handle<StepGeom_RationalBSplineSurface> & ) ) static_cast<void (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<StepGeom_UniformSurface> & , const opencascade::handle<StepGeom_RationalBSplineSurface> & ) >(&StepGeom_UniformSurfaceAndRationalBSplineSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"),  py::arg("aUniformSurface"),  py::arg("aRationalBSplineSurface"))
        .def("Init",
             (void (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Integer , const opencascade::handle<StepGeom_HArray2OfCartesianPoint> & , const StepGeom_BSplineSurfaceForm , const StepData_Logical , const StepData_Logical , const StepData_Logical , const opencascade::handle<TColStd_HArray2OfReal> & ) >(&StepGeom_UniformSurfaceAndRationalBSplineSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aUDegree"),  py::arg("aVDegree"),  py::arg("aControlPointsList"),  py::arg("aSurfaceForm"),  py::arg("aUClosed"),  py::arg("aVClosed"),  py::arg("aSelfIntersect"),  py::arg("aWeightsData"))
        .def("SetUniformSurface",
             (void (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_UniformSurface> & ) ) static_cast<void (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_UniformSurface> & ) >(&StepGeom_UniformSurfaceAndRationalBSplineSurface::SetUniformSurface),
             R"#(None)#"  , py::arg("aUniformSurface"))
        .def("UniformSurface",
             (opencascade::handle<StepGeom_UniformSurface> (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<StepGeom_UniformSurface> (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_UniformSurfaceAndRationalBSplineSurface::UniformSurface),
             R"#(None)#" )
        .def("SetRationalBSplineSurface",
             (void (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ) ) static_cast<void (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ) >(&StepGeom_UniformSurfaceAndRationalBSplineSurface::SetRationalBSplineSurface),
             R"#(None)#"  , py::arg("aRationalBSplineSurface"))
        .def("RationalBSplineSurface",
             (opencascade::handle<StepGeom_RationalBSplineSurface> (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<StepGeom_RationalBSplineSurface> (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_UniformSurfaceAndRationalBSplineSurface::RationalBSplineSurface),
             R"#(None)#" )
        .def("SetWeightsData",
             (void (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) ) static_cast<void (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<TColStd_HArray2OfReal> & ) >(&StepGeom_UniformSurfaceAndRationalBSplineSurface::SetWeightsData),
             R"#(None)#"  , py::arg("aWeightsData"))
        .def("WeightsData",
             (opencascade::handle<TColStd_HArray2OfReal> (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_UniformSurfaceAndRationalBSplineSurface::WeightsData),
             R"#(None)#" )
        .def("WeightsDataValue",
             (Standard_Real (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&StepGeom_UniformSurfaceAndRationalBSplineSurface::WeightsDataValue),
             R"#(None)#"  , py::arg("num1"),  py::arg("num2"))
        .def("NbWeightsDataI",
             (Standard_Integer (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_UniformSurfaceAndRationalBSplineSurface::NbWeightsDataI),
             R"#(None)#" )
        .def("NbWeightsDataJ",
             (Standard_Integer (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<Standard_Integer (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_UniformSurfaceAndRationalBSplineSurface::NbWeightsDataJ),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepGeom_UniformSurfaceAndRationalBSplineSurface::*)() const>(&StepGeom_UniformSurfaceAndRationalBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepGeom_UniformSurfaceAndRationalBSplineSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_UniformSurfaceAndRationalBSplineSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_BoundaryCurve ,opencascade::handle<StepGeom_BoundaryCurve> , StepGeom_CompositeCurveOnSurface>>(m.attr("StepGeom_BoundaryCurve"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_BoundaryCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepGeom_OuterBoundaryCurve ,opencascade::handle<StepGeom_OuterBoundaryCurve> , StepGeom_BoundaryCurve>>(m.attr("StepGeom_OuterBoundaryCurve"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepGeom_OuterBoundaryCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\StepGeom_CylindricalSurface.hxx
// ./opencascade\StepGeom_HArray1OfCartesianPoint.hxx
// ./opencascade\StepGeom_TransitionCode.hxx
// ./opencascade\StepGeom_Array2OfCartesianPoint.hxx
// ./opencascade\StepGeom_HArray1OfPcurveOrSurface.hxx
// ./opencascade\StepGeom_KnotType.hxx
// ./opencascade\StepGeom_Ellipse.hxx
// ./opencascade\StepGeom_HArray1OfTrimmingSelect.hxx
// ./opencascade\StepGeom_UniformSurface.hxx
// ./opencascade\StepGeom_DegeneratePcurve.hxx
// ./opencascade\StepGeom_GeometricRepresentationContextAndParametricRepresentationContext.hxx
// ./opencascade\StepGeom_TrimmingPreference.hxx
// ./opencascade\StepGeom_UniformCurveAndRationalBSplineCurve.hxx
// ./opencascade\StepGeom_PreferredSurfaceCurveRepresentation.hxx
// ./opencascade\StepGeom_Line.hxx
// ./opencascade\StepGeom_CurveBoundedSurface.hxx
// ./opencascade\StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx
// ./opencascade\StepGeom_CompositeCurveOnSurface.hxx
// ./opencascade\StepGeom_Axis2Placement3d.hxx
// ./opencascade\StepGeom_ElementarySurface.hxx
// ./opencascade\StepGeom_HArray1OfSurfaceBoundary.hxx
// ./opencascade\StepGeom_CartesianPoint.hxx
// ./opencascade\StepGeom_Polyline.hxx
// ./opencascade\StepGeom_HArray2OfCartesianPoint.hxx
// ./opencascade\StepGeom_BoundedCurve.hxx
// ./opencascade\StepGeom_QuasiUniformSurface.hxx
// ./opencascade\StepGeom_UniformCurve.hxx
// ./opencascade\StepGeom_GeometricRepresentationItem.hxx
// ./opencascade\StepGeom_RectangularTrimmedSurface.hxx
// ./opencascade\StepGeom_HArray1OfCurve.hxx
// ./opencascade\StepGeom_QuasiUniformCurveAndRationalBSplineCurve.hxx
// ./opencascade\StepGeom_BoundedSurface.hxx
// ./opencascade\StepGeom_SurfaceOfRevolution.hxx
// ./opencascade\StepGeom_Placement.hxx
// ./opencascade\StepGeom_Axis2Placement2d.hxx
// ./opencascade\StepGeom_Circle.hxx
// ./opencascade\StepGeom_CartesianTransformationOperator2d.hxx
// ./opencascade\StepGeom_OrientedSurface.hxx
// ./opencascade\StepGeom_TrimmingMember.hxx
// ./opencascade\StepGeom_VectorOrDirection.hxx
// ./opencascade\StepGeom_RationalBSplineSurface.hxx
// ./opencascade\StepGeom_CompositeCurveSegment.hxx
// ./opencascade\StepGeom_BezierSurfaceAndRationalBSplineSurface.hxx
// ./opencascade\StepGeom_BezierSurface.hxx
// ./opencascade\StepGeom_PointOnSurface.hxx
// ./opencascade\StepGeom_HArray1OfBoundaryCurve.hxx
// ./opencascade\StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext.hxx
// ./opencascade\StepGeom_SurfaceOfLinearExtrusion.hxx
// ./opencascade\StepGeom_ToroidalSurface.hxx
// ./opencascade\StepGeom_BezierCurveAndRationalBSplineCurve.hxx
// ./opencascade\StepGeom_CurveReplica.hxx
// ./opencascade\StepGeom_Array1OfTrimmingSelect.hxx
// ./opencascade\StepGeom_ConicalSurface.hxx
// ./opencascade\StepGeom_SweptSurface.hxx
// ./opencascade\StepGeom_ReparametrisedCompositeCurveSegment.hxx
// ./opencascade\StepGeom_SurfaceBoundary.hxx
// ./opencascade\StepGeom_Vector.hxx
// ./opencascade\StepGeom_SphericalSurface.hxx
// ./opencascade\StepGeom_PointOnCurve.hxx
// ./opencascade\StepGeom_GeometricRepresentationContext.hxx
// ./opencascade\StepGeom_Array2OfSurfacePatch.hxx
// ./opencascade\StepGeom_Parabola.hxx
// ./opencascade\StepGeom_OffsetCurve3d.hxx
// ./opencascade\StepGeom_Conic.hxx
// ./opencascade\StepGeom_Point.hxx
// ./opencascade\StepGeom_Array1OfPcurveOrSurface.hxx
// ./opencascade\StepGeom_BSplineSurface.hxx
// ./opencascade\StepGeom_SeamCurve.hxx
// ./opencascade\StepGeom_Array1OfCurve.hxx
// ./opencascade\StepGeom_SurfaceReplica.hxx
// ./opencascade\StepGeom_QuasiUniformCurve.hxx
// ./opencascade\StepGeom_Axis1Placement.hxx
// ./opencascade\StepGeom_SurfaceCurve.hxx
// ./opencascade\StepGeom_Direction.hxx
// ./opencascade\StepGeom_TrimmingSelect.hxx
// ./opencascade\StepGeom_BSplineSurfaceForm.hxx
// ./opencascade\StepGeom_IntersectionCurve.hxx
// ./opencascade\StepGeom_Array1OfBoundaryCurve.hxx
// ./opencascade\StepGeom_SurfacePatch.hxx
// ./opencascade\StepGeom_PcurveOrSurface.hxx
// ./opencascade\StepGeom_HArray2OfSurfacePatch.hxx
// ./opencascade\StepGeom_CartesianTransformationOperator.hxx
// ./opencascade\StepGeom_BSplineSurfaceWithKnots.hxx
// ./opencascade\StepGeom_EvaluatedDegeneratePcurve.hxx
// ./opencascade\StepGeom_DegenerateToroidalSurface.hxx
// ./opencascade\StepGeom_TrimmedCurve.hxx
// ./opencascade\StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface.hxx
// ./opencascade\StepGeom_RectangularCompositeSurface.hxx
// ./opencascade\StepGeom_BSplineCurve.hxx
// ./opencascade\StepGeom_Plane.hxx
// ./opencascade\StepGeom_Hyperbola.hxx
// ./opencascade\StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx
// ./opencascade\StepGeom_SurfaceCurveAndBoundedCurve.hxx
// ./opencascade\StepGeom_CompositeCurve.hxx
// ./opencascade\StepGeom_UniformSurfaceAndRationalBSplineSurface.hxx
// ./opencascade\StepGeom_Curve.hxx
// ./opencascade\StepGeom_Surface.hxx
// ./opencascade\StepGeom_Axis2Placement.hxx
// ./opencascade\StepGeom_OuterBoundaryCurve.hxx
// ./opencascade\StepGeom_PointReplica.hxx
// ./opencascade\StepGeom_CurveOnSurface.hxx
// ./opencascade\StepGeom_Array1OfSurfaceBoundary.hxx
// ./opencascade\StepGeom_BezierCurve.hxx
// ./opencascade\StepGeom_CartesianTransformationOperator3d.hxx
// ./opencascade\StepGeom_Pcurve.hxx
// ./opencascade\StepGeom_BoundaryCurve.hxx
// ./opencascade\StepGeom_Array1OfCartesianPoint.hxx
// ./opencascade\StepGeom_Array1OfCompositeCurveSegment.hxx
// ./opencascade\StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx
// ./opencascade\StepGeom_BSplineCurveForm.hxx
// ./opencascade\StepGeom_HArray1OfCompositeCurveSegment.hxx
// ./opencascade\StepGeom_BSplineCurveWithKnots.hxx
// ./opencascade\StepGeom_OffsetSurface.hxx
// ./opencascade\StepGeom_RationalBSplineCurve.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array2<opencascade::handle<StepGeom_CartesianPoint> >(m,"StepGeom_Array2OfCartesianPoint");
    register_template_NCollection_Array1<StepGeom_TrimmingSelect>(m,"StepGeom_Array1OfTrimmingSelect");
    register_template_NCollection_Array2<opencascade::handle<StepGeom_SurfacePatch> >(m,"StepGeom_Array2OfSurfacePatch");
    register_template_NCollection_Array1<StepGeom_PcurveOrSurface>(m,"StepGeom_Array1OfPcurveOrSurface");
    register_template_NCollection_Array1<opencascade::handle<StepGeom_Curve> >(m,"StepGeom_Array1OfCurve");
    register_template_NCollection_Array1<opencascade::handle<StepGeom_BoundaryCurve> >(m,"StepGeom_Array1OfBoundaryCurve");
    register_template_NCollection_Array1<StepGeom_SurfaceBoundary>(m,"StepGeom_Array1OfSurfaceBoundary");
    register_template_NCollection_Array1<opencascade::handle<StepGeom_CartesianPoint> >(m,"StepGeom_Array1OfCartesianPoint");
    register_template_NCollection_Array1<opencascade::handle<StepGeom_CompositeCurveSegment> >(m,"StepGeom_Array1OfCompositeCurveSegment");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
