
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepGeom_Pcurve.hxx>
#include <StepGeom_SurfaceCurve.hxx>
#include <StepGeom_CompositeCurveOnSurface.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_QuasiUniformCurve.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_UniformCurve.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepRepr_ParametricRepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_UniformSurface.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepData_SelectMember.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_BezierCurve.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BoundaryCurve.hxx>
#include <StepGeom_DegeneratePcurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Vector.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BezierSurface.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Vector.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Vector.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BSplineSurfaceWithKnots.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_QuasiUniformSurface.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>

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
// ./opencascade/StepGeom_Array2OfCartesianPoint.hxx
#include "NCollection.hxx"
// ./opencascade/StepGeom_Array2OfSurfacePatch.hxx
#include "NCollection.hxx"
// ./opencascade/StepGeom_Array1OfTrimmingSelect.hxx
#include "NCollection.hxx"
// ./opencascade/StepGeom_Array1OfPcurveOrSurface.hxx
#include "NCollection.hxx"
// ./opencascade/StepGeom_Array1OfBoundaryCurve.hxx
#include "NCollection.hxx"
// ./opencascade/StepGeom_Array1OfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/StepGeom_Array1OfCompositeCurveSegment.hxx
#include "NCollection.hxx"
// ./opencascade/StepGeom_Array1OfSurfaceBoundary.hxx
#include "NCollection.hxx"
// ./opencascade/StepGeom_Array1OfCartesianPoint.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepGeom_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepGeom", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StepGeom_TransitionCode>(m, "StepGeom_TransitionCode",R"#(None)#")
        .value("StepGeom_tcDiscontinuous",StepGeom_TransitionCode::StepGeom_tcDiscontinuous)
        .value("StepGeom_tcContinuous",StepGeom_TransitionCode::StepGeom_tcContinuous)
        .value("StepGeom_tcContSameGradient",StepGeom_TransitionCode::StepGeom_tcContSameGradient)
        .value("StepGeom_tcContSameGradientSameCurvature",StepGeom_TransitionCode::StepGeom_tcContSameGradientSameCurvature).export_values();
    py::enum_<StepGeom_BSplineCurveForm>(m, "StepGeom_BSplineCurveForm",R"#(None)#")
        .value("StepGeom_bscfPolylineForm",StepGeom_BSplineCurveForm::StepGeom_bscfPolylineForm)
        .value("StepGeom_bscfCircularArc",StepGeom_BSplineCurveForm::StepGeom_bscfCircularArc)
        .value("StepGeom_bscfEllipticArc",StepGeom_BSplineCurveForm::StepGeom_bscfEllipticArc)
        .value("StepGeom_bscfParabolicArc",StepGeom_BSplineCurveForm::StepGeom_bscfParabolicArc)
        .value("StepGeom_bscfHyperbolicArc",StepGeom_BSplineCurveForm::StepGeom_bscfHyperbolicArc)
        .value("StepGeom_bscfUnspecified",StepGeom_BSplineCurveForm::StepGeom_bscfUnspecified).export_values();
    py::enum_<StepGeom_KnotType>(m, "StepGeom_KnotType",R"#(None)#")
        .value("StepGeom_ktUniformKnots",StepGeom_KnotType::StepGeom_ktUniformKnots)
        .value("StepGeom_ktUnspecified",StepGeom_KnotType::StepGeom_ktUnspecified)
        .value("StepGeom_ktQuasiUniformKnots",StepGeom_KnotType::StepGeom_ktQuasiUniformKnots)
        .value("StepGeom_ktPiecewiseBezierKnots",StepGeom_KnotType::StepGeom_ktPiecewiseBezierKnots).export_values();
    py::enum_<StepGeom_TrimmingPreference>(m, "StepGeom_TrimmingPreference",R"#(None)#")
        .value("StepGeom_tpCartesian",StepGeom_TrimmingPreference::StepGeom_tpCartesian)
        .value("StepGeom_tpParameter",StepGeom_TrimmingPreference::StepGeom_tpParameter)
        .value("StepGeom_tpUnspecified",StepGeom_TrimmingPreference::StepGeom_tpUnspecified).export_values();
    py::enum_<StepGeom_PreferredSurfaceCurveRepresentation>(m, "StepGeom_PreferredSurfaceCurveRepresentation",R"#(None)#")
        .value("StepGeom_pscrCurve3d",StepGeom_PreferredSurfaceCurveRepresentation::StepGeom_pscrCurve3d)
        .value("StepGeom_pscrPcurveS1",StepGeom_PreferredSurfaceCurveRepresentation::StepGeom_pscrPcurveS1)
        .value("StepGeom_pscrPcurveS2",StepGeom_PreferredSurfaceCurveRepresentation::StepGeom_pscrPcurveS2).export_values();
    py::enum_<StepGeom_BSplineSurfaceForm>(m, "StepGeom_BSplineSurfaceForm",R"#(None)#")
        .value("StepGeom_bssfPlaneSurf",StepGeom_BSplineSurfaceForm::StepGeom_bssfPlaneSurf)
        .value("StepGeom_bssfCylindricalSurf",StepGeom_BSplineSurfaceForm::StepGeom_bssfCylindricalSurf)
        .value("StepGeom_bssfConicalSurf",StepGeom_BSplineSurfaceForm::StepGeom_bssfConicalSurf)
        .value("StepGeom_bssfSphericalSurf",StepGeom_BSplineSurfaceForm::StepGeom_bssfSphericalSurf)
        .value("StepGeom_bssfToroidalSurf",StepGeom_BSplineSurfaceForm::StepGeom_bssfToroidalSurf)
        .value("StepGeom_bssfSurfOfRevolution",StepGeom_BSplineSurfaceForm::StepGeom_bssfSurfOfRevolution)
        .value("StepGeom_bssfRuledSurf",StepGeom_BSplineSurfaceForm::StepGeom_bssfRuledSurf)
        .value("StepGeom_bssfGeneralisedCone",StepGeom_BSplineSurfaceForm::StepGeom_bssfGeneralisedCone)
        .value("StepGeom_bssfQuadricSurf",StepGeom_BSplineSurfaceForm::StepGeom_bssfQuadricSurf)
        .value("StepGeom_bssfSurfOfLinearExtrusion",StepGeom_BSplineSurfaceForm::StepGeom_bssfSurfOfLinearExtrusion)
        .value("StepGeom_bssfUnspecified",StepGeom_BSplineSurfaceForm::StepGeom_bssfUnspecified).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<StepGeom_CurveOnSurface ,std::unique_ptr<StepGeom_CurveOnSurface>  , StepData_SelectType >(m,"StepGeom_CurveOnSurface",R"#(None)#");
    py::class_<StepGeom_CompositeCurveSegment ,opencascade::handle<StepGeom_CompositeCurveSegment>  , Standard_Transient >(m,"StepGeom_CompositeCurveSegment",R"#()#");
    py::class_<StepGeom_HArray1OfCompositeCurveSegment ,std::unique_ptr<StepGeom_HArray1OfCompositeCurveSegment>  >(m,"StepGeom_HArray1OfCompositeCurveSegment",R"#()#");
    py::class_<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext ,opencascade::handle<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext>  , StepRepr_RepresentationContext >(m,"StepGeom_GeometricRepresentationContextAndParametricRepresentationContext",R"#()#");
    py::class_<StepGeom_TrimmingSelect ,std::unique_ptr<StepGeom_TrimmingSelect>  , StepData_SelectType >(m,"StepGeom_TrimmingSelect",R"#(None)#");
    py::class_<StepGeom_SurfaceBoundary ,std::unique_ptr<StepGeom_SurfaceBoundary>  , StepData_SelectType >(m,"StepGeom_SurfaceBoundary",R"#(Representation of STEP SELECT type SurfaceBoundary)#");
    py::class_<StepGeom_TrimmingMember ,opencascade::handle<StepGeom_TrimmingMember>  , StepData_SelectReal >(m,"StepGeom_TrimmingMember",R"#(For immediate members of TrimmingSelect, i.e. : ParameterValue (a Real)For immediate members of TrimmingSelect, i.e. : ParameterValue (a Real)For immediate members of TrimmingSelect, i.e. : ParameterValue (a Real))#");
    py::class_<StepGeom_PcurveOrSurface ,std::unique_ptr<StepGeom_PcurveOrSurface>  , StepData_SelectType >(m,"StepGeom_PcurveOrSurface",R"#(None)#");
    py::class_<StepGeom_GeometricRepresentationItem ,opencascade::handle<StepGeom_GeometricRepresentationItem>  , StepRepr_RepresentationItem >(m,"StepGeom_GeometricRepresentationItem",R"#()#");
    py::class_<StepGeom_HArray2OfSurfacePatch ,std::unique_ptr<StepGeom_HArray2OfSurfacePatch>  >(m,"StepGeom_HArray2OfSurfacePatch",R"#()#");
    py::class_<StepGeom_VectorOrDirection ,std::unique_ptr<StepGeom_VectorOrDirection>  , StepData_SelectType >(m,"StepGeom_VectorOrDirection",R"#(None)#");
    py::class_<StepGeom_SurfacePatch ,opencascade::handle<StepGeom_SurfacePatch>  , Standard_Transient >(m,"StepGeom_SurfacePatch",R"#()#");
    py::class_<StepGeom_HArray1OfTrimmingSelect ,std::unique_ptr<StepGeom_HArray1OfTrimmingSelect>  >(m,"StepGeom_HArray1OfTrimmingSelect",R"#()#");
    py::class_<StepGeom_HArray1OfCartesianPoint ,std::unique_ptr<StepGeom_HArray1OfCartesianPoint>  >(m,"StepGeom_HArray1OfCartesianPoint",R"#()#");
    py::class_<StepGeom_HArray1OfPcurveOrSurface ,std::unique_ptr<StepGeom_HArray1OfPcurveOrSurface>  >(m,"StepGeom_HArray1OfPcurveOrSurface",R"#()#");
    py::class_<StepGeom_Axis2Placement ,std::unique_ptr<StepGeom_Axis2Placement>  , StepData_SelectType >(m,"StepGeom_Axis2Placement",R"#(None)#");
    py::class_<StepGeom_HArray1OfBoundaryCurve ,std::unique_ptr<StepGeom_HArray1OfBoundaryCurve>  >(m,"StepGeom_HArray1OfBoundaryCurve",R"#()#");
    py::class_<StepGeom_HArray1OfSurfaceBoundary ,std::unique_ptr<StepGeom_HArray1OfSurfaceBoundary>  >(m,"StepGeom_HArray1OfSurfaceBoundary",R"#()#");
    py::class_<StepGeom_ReparametrisedCompositeCurveSegment ,opencascade::handle<StepGeom_ReparametrisedCompositeCurveSegment>  , StepGeom_CompositeCurveSegment >(m,"StepGeom_ReparametrisedCompositeCurveSegment",R"#()#");
    py::class_<StepGeom_CartesianTransformationOperator ,opencascade::handle<StepGeom_CartesianTransformationOperator>  , StepGeom_GeometricRepresentationItem >(m,"StepGeom_CartesianTransformationOperator",R"#()#");
    py::class_<StepGeom_Curve ,opencascade::handle<StepGeom_Curve>  , StepGeom_GeometricRepresentationItem >(m,"StepGeom_Curve",R"#()#");
    py::class_<StepGeom_SurfaceCurve ,opencascade::handle<StepGeom_SurfaceCurve>  , StepGeom_Curve >(m,"StepGeom_SurfaceCurve",R"#()#");
    py::class_<StepGeom_Placement ,opencascade::handle<StepGeom_Placement>  , StepGeom_GeometricRepresentationItem >(m,"StepGeom_Placement",R"#()#");
    py::class_<StepGeom_Point ,opencascade::handle<StepGeom_Point>  , StepGeom_GeometricRepresentationItem >(m,"StepGeom_Point",R"#()#");
    py::class_<StepGeom_Vector ,opencascade::handle<StepGeom_Vector>  , StepGeom_GeometricRepresentationItem >(m,"StepGeom_Vector",R"#()#");
    py::class_<StepGeom_Pcurve ,opencascade::handle<StepGeom_Pcurve>  , StepGeom_Curve >(m,"StepGeom_Pcurve",R"#()#");
    py::class_<StepGeom_Axis2Placement2d ,opencascade::handle<StepGeom_Axis2Placement2d>  , StepGeom_Placement >(m,"StepGeom_Axis2Placement2d",R"#()#");
    py::class_<StepGeom_GeometricRepresentationContext ,opencascade::handle<StepGeom_GeometricRepresentationContext>  , StepRepr_RepresentationContext >(m,"StepGeom_GeometricRepresentationContext",R"#()#");
    py::class_<StepGeom_CurveReplica ,opencascade::handle<StepGeom_CurveReplica>  , StepGeom_Curve >(m,"StepGeom_CurveReplica",R"#()#");
    py::class_<StepGeom_HArray2OfCartesianPoint ,std::unique_ptr<StepGeom_HArray2OfCartesianPoint>  >(m,"StepGeom_HArray2OfCartesianPoint",R"#()#");
    py::class_<StepGeom_PointOnSurface ,opencascade::handle<StepGeom_PointOnSurface>  , StepGeom_Point >(m,"StepGeom_PointOnSurface",R"#()#");
    py::class_<StepGeom_SurfaceCurveAndBoundedCurve ,opencascade::handle<StepGeom_SurfaceCurveAndBoundedCurve>  , StepGeom_SurfaceCurve >(m,"StepGeom_SurfaceCurveAndBoundedCurve",R"#(complex type: bounded_curve + surface_curve needed for curve_bounded_surfaces (S4132)complex type: bounded_curve + surface_curve needed for curve_bounded_surfaces (S4132)complex type: bounded_curve + surface_curve needed for curve_bounded_surfaces (S4132))#");
    py::class_<StepGeom_DegeneratePcurve ,opencascade::handle<StepGeom_DegeneratePcurve>  , StepGeom_Point >(m,"StepGeom_DegeneratePcurve",R"#()#");
    py::class_<StepGeom_PointOnCurve ,opencascade::handle<StepGeom_PointOnCurve>  , StepGeom_Point >(m,"StepGeom_PointOnCurve",R"#()#");
    py::class_<StepGeom_IntersectionCurve ,opencascade::handle<StepGeom_IntersectionCurve>  , StepGeom_SurfaceCurve >(m,"StepGeom_IntersectionCurve",R"#()#");
    py::class_<StepGeom_EvaluatedDegeneratePcurve ,opencascade::handle<StepGeom_EvaluatedDegeneratePcurve>  , StepGeom_DegeneratePcurve >(m,"StepGeom_EvaluatedDegeneratePcurve",R"#()#");
    py::class_<StepGeom_HArray1OfCurve ,std::unique_ptr<StepGeom_HArray1OfCurve>  >(m,"StepGeom_HArray1OfCurve",R"#()#");
    py::class_<StepGeom_CartesianPoint ,opencascade::handle<StepGeom_CartesianPoint>  , StepGeom_Point >(m,"StepGeom_CartesianPoint",R"#()#");
    py::class_<StepGeom_Axis2Placement3d ,opencascade::handle<StepGeom_Axis2Placement3d>  , StepGeom_Placement >(m,"StepGeom_Axis2Placement3d",R"#()#");
    py::class_<StepGeom_OffsetCurve3d ,opencascade::handle<StepGeom_OffsetCurve3d>  , StepGeom_Curve >(m,"StepGeom_OffsetCurve3d",R"#()#");
    py::class_<StepGeom_BoundedCurve ,opencascade::handle<StepGeom_BoundedCurve>  , StepGeom_Curve >(m,"StepGeom_BoundedCurve",R"#()#");
    py::class_<StepGeom_Polyline ,opencascade::handle<StepGeom_Polyline>  , StepGeom_BoundedCurve >(m,"StepGeom_Polyline",R"#()#");
    py::class_<StepGeom_Line ,opencascade::handle<StepGeom_Line>  , StepGeom_Curve >(m,"StepGeom_Line",R"#()#");
    py::class_<StepGeom_Surface ,opencascade::handle<StepGeom_Surface>  , StepGeom_GeometricRepresentationItem >(m,"StepGeom_Surface",R"#()#");
    py::class_<StepGeom_CartesianTransformationOperator3d ,opencascade::handle<StepGeom_CartesianTransformationOperator3d>  , StepGeom_CartesianTransformationOperator >(m,"StepGeom_CartesianTransformationOperator3d",R"#()#");
    py::class_<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext ,opencascade::handle<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext>  , StepRepr_RepresentationContext >(m,"StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext",R"#()#");
    py::class_<StepGeom_Axis1Placement ,opencascade::handle<StepGeom_Axis1Placement>  , StepGeom_Placement >(m,"StepGeom_Axis1Placement",R"#()#");
    py::class_<StepGeom_SurfaceReplica ,opencascade::handle<StepGeom_SurfaceReplica>  , StepGeom_Surface >(m,"StepGeom_SurfaceReplica",R"#()#");
    py::class_<StepGeom_BSplineCurve ,opencascade::handle<StepGeom_BSplineCurve>  , StepGeom_BoundedCurve >(m,"StepGeom_BSplineCurve",R"#()#");
    py::class_<StepGeom_CartesianTransformationOperator2d ,opencascade::handle<StepGeom_CartesianTransformationOperator2d>  , StepGeom_CartesianTransformationOperator >(m,"StepGeom_CartesianTransformationOperator2d",R"#(Added from StepGeom Rev2 to Rev4Added from StepGeom Rev2 to Rev4Added from StepGeom Rev2 to Rev4)#");
    py::class_<StepGeom_BoundedSurface ,opencascade::handle<StepGeom_BoundedSurface>  , StepGeom_Surface >(m,"StepGeom_BoundedSurface",R"#()#");
    py::class_<StepGeom_QuasiUniformCurve ,opencascade::handle<StepGeom_QuasiUniformCurve>  , StepGeom_BSplineCurve >(m,"StepGeom_QuasiUniformCurve",R"#()#");
    py::class_<StepGeom_OrientedSurface ,opencascade::handle<StepGeom_OrientedSurface>  , StepGeom_Surface >(m,"StepGeom_OrientedSurface",R"#(Representation of STEP entity OrientedSurfaceRepresentation of STEP entity OrientedSurfaceRepresentation of STEP entity OrientedSurface)#");
    py::class_<StepGeom_BSplineSurface ,opencascade::handle<StepGeom_BSplineSurface>  , StepGeom_BoundedSurface >(m,"StepGeom_BSplineSurface",R"#()#");
    py::class_<StepGeom_TrimmedCurve ,opencascade::handle<StepGeom_TrimmedCurve>  , StepGeom_BoundedCurve >(m,"StepGeom_TrimmedCurve",R"#()#");
    py::class_<StepGeom_SeamCurve ,opencascade::handle<StepGeom_SeamCurve>  , StepGeom_SurfaceCurve >(m,"StepGeom_SeamCurve",R"#()#");
    py::class_<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx ,opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx>  , StepRepr_RepresentationContext >(m,"StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx",R"#()#");
    py::class_<StepGeom_PointReplica ,opencascade::handle<StepGeom_PointReplica>  , StepGeom_Point >(m,"StepGeom_PointReplica",R"#()#");
    py::class_<StepGeom_RationalBSplineSurface ,opencascade::handle<StepGeom_RationalBSplineSurface>  , StepGeom_BSplineSurface >(m,"StepGeom_RationalBSplineSurface",R"#()#");
    py::class_<StepGeom_OffsetSurface ,opencascade::handle<StepGeom_OffsetSurface>  , StepGeom_Surface >(m,"StepGeom_OffsetSurface",R"#()#");
    py::class_<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve ,opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve>  , StepGeom_BSplineCurve >(m,"StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve",R"#()#");
    py::class_<StepGeom_UniformCurveAndRationalBSplineCurve ,opencascade::handle<StepGeom_UniformCurveAndRationalBSplineCurve>  , StepGeom_BSplineCurve >(m,"StepGeom_UniformCurveAndRationalBSplineCurve",R"#()#");
    py::class_<StepGeom_UniformSurfaceAndRationalBSplineSurface ,opencascade::handle<StepGeom_UniformSurfaceAndRationalBSplineSurface>  , StepGeom_BSplineSurface >(m,"StepGeom_UniformSurfaceAndRationalBSplineSurface",R"#()#");
    py::class_<StepGeom_BezierSurface ,opencascade::handle<StepGeom_BezierSurface>  , StepGeom_BSplineSurface >(m,"StepGeom_BezierSurface",R"#()#");
    py::class_<StepGeom_BezierCurveAndRationalBSplineCurve ,opencascade::handle<StepGeom_BezierCurveAndRationalBSplineCurve>  , StepGeom_BSplineCurve >(m,"StepGeom_BezierCurveAndRationalBSplineCurve",R"#()#");
    py::class_<StepGeom_ElementarySurface ,opencascade::handle<StepGeom_ElementarySurface>  , StepGeom_Surface >(m,"StepGeom_ElementarySurface",R"#()#");
    py::class_<StepGeom_Plane ,opencascade::handle<StepGeom_Plane>  , StepGeom_ElementarySurface >(m,"StepGeom_Plane",R"#()#");
    py::class_<StepGeom_BezierSurfaceAndRationalBSplineSurface ,opencascade::handle<StepGeom_BezierSurfaceAndRationalBSplineSurface>  , StepGeom_BSplineSurface >(m,"StepGeom_BezierSurfaceAndRationalBSplineSurface",R"#()#");
    py::class_<StepGeom_RectangularTrimmedSurface ,opencascade::handle<StepGeom_RectangularTrimmedSurface>  , StepGeom_BoundedSurface >(m,"StepGeom_RectangularTrimmedSurface",R"#()#");
    py::class_<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface ,opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface>  , StepGeom_BSplineSurface >(m,"StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface",R"#()#");
    py::class_<StepGeom_Direction ,opencascade::handle<StepGeom_Direction>  , StepGeom_GeometricRepresentationItem >(m,"StepGeom_Direction",R"#()#");
    py::class_<StepGeom_ConicalSurface ,opencascade::handle<StepGeom_ConicalSurface>  , StepGeom_ElementarySurface >(m,"StepGeom_ConicalSurface",R"#()#");
    py::class_<StepGeom_BSplineCurveWithKnots ,opencascade::handle<StepGeom_BSplineCurveWithKnots>  , StepGeom_BSplineCurve >(m,"StepGeom_BSplineCurveWithKnots",R"#()#");
    py::class_<StepGeom_SweptSurface ,opencascade::handle<StepGeom_SweptSurface>  , StepGeom_Surface >(m,"StepGeom_SweptSurface",R"#()#");
    py::class_<StepGeom_Conic ,opencascade::handle<StepGeom_Conic>  , StepGeom_Curve >(m,"StepGeom_Conic",R"#()#");
    py::class_<StepGeom_Ellipse ,opencascade::handle<StepGeom_Ellipse>  , StepGeom_Conic >(m,"StepGeom_Ellipse",R"#()#");
    py::class_<StepGeom_Circle ,opencascade::handle<StepGeom_Circle>  , StepGeom_Conic >(m,"StepGeom_Circle",R"#()#");
    py::class_<StepGeom_QuasiUniformCurveAndRationalBSplineCurve ,opencascade::handle<StepGeom_QuasiUniformCurveAndRationalBSplineCurve>  , StepGeom_BSplineCurve >(m,"StepGeom_QuasiUniformCurveAndRationalBSplineCurve",R"#()#");
    py::class_<StepGeom_UniformSurface ,opencascade::handle<StepGeom_UniformSurface>  , StepGeom_BSplineSurface >(m,"StepGeom_UniformSurface",R"#()#");
    py::class_<StepGeom_CylindricalSurface ,opencascade::handle<StepGeom_CylindricalSurface>  , StepGeom_ElementarySurface >(m,"StepGeom_CylindricalSurface",R"#()#");
    py::class_<StepGeom_RationalBSplineCurve ,opencascade::handle<StepGeom_RationalBSplineCurve>  , StepGeom_BSplineCurve >(m,"StepGeom_RationalBSplineCurve",R"#()#");
    py::class_<StepGeom_ToroidalSurface ,opencascade::handle<StepGeom_ToroidalSurface>  , StepGeom_ElementarySurface >(m,"StepGeom_ToroidalSurface",R"#()#");
    py::class_<StepGeom_QuasiUniformSurface ,opencascade::handle<StepGeom_QuasiUniformSurface>  , StepGeom_BSplineSurface >(m,"StepGeom_QuasiUniformSurface",R"#()#");
    py::class_<StepGeom_SphericalSurface ,opencascade::handle<StepGeom_SphericalSurface>  , StepGeom_ElementarySurface >(m,"StepGeom_SphericalSurface",R"#()#");
    py::class_<StepGeom_SurfaceOfRevolution ,opencascade::handle<StepGeom_SurfaceOfRevolution>  , StepGeom_SweptSurface >(m,"StepGeom_SurfaceOfRevolution",R"#()#");
    py::class_<StepGeom_CurveBoundedSurface ,opencascade::handle<StepGeom_CurveBoundedSurface>  , StepGeom_BoundedSurface >(m,"StepGeom_CurveBoundedSurface",R"#(Representation of STEP entity CurveBoundedSurfaceRepresentation of STEP entity CurveBoundedSurfaceRepresentation of STEP entity CurveBoundedSurface)#");
    py::class_<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface ,opencascade::handle<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface>  , StepGeom_BSplineSurface >(m,"StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface",R"#()#");
    py::class_<StepGeom_CompositeCurve ,opencascade::handle<StepGeom_CompositeCurve>  , StepGeom_BoundedCurve >(m,"StepGeom_CompositeCurve",R"#()#");
    py::class_<StepGeom_Hyperbola ,opencascade::handle<StepGeom_Hyperbola>  , StepGeom_Conic >(m,"StepGeom_Hyperbola",R"#()#");
    py::class_<StepGeom_RectangularCompositeSurface ,opencascade::handle<StepGeom_RectangularCompositeSurface>  , StepGeom_BoundedSurface >(m,"StepGeom_RectangularCompositeSurface",R"#()#");
    py::class_<StepGeom_SurfaceOfLinearExtrusion ,opencascade::handle<StepGeom_SurfaceOfLinearExtrusion>  , StepGeom_SweptSurface >(m,"StepGeom_SurfaceOfLinearExtrusion",R"#()#");
    py::class_<StepGeom_BSplineSurfaceWithKnots ,opencascade::handle<StepGeom_BSplineSurfaceWithKnots>  , StepGeom_BSplineSurface >(m,"StepGeom_BSplineSurfaceWithKnots",R"#()#");
    py::class_<StepGeom_CompositeCurveOnSurface ,opencascade::handle<StepGeom_CompositeCurveOnSurface>  , StepGeom_CompositeCurve >(m,"StepGeom_CompositeCurveOnSurface",R"#()#");
    py::class_<StepGeom_UniformCurve ,opencascade::handle<StepGeom_UniformCurve>  , StepGeom_BSplineCurve >(m,"StepGeom_UniformCurve",R"#()#");
    py::class_<StepGeom_BoundaryCurve ,opencascade::handle<StepGeom_BoundaryCurve>  , StepGeom_CompositeCurveOnSurface >(m,"StepGeom_BoundaryCurve",R"#()#");
    py::class_<StepGeom_OuterBoundaryCurve ,opencascade::handle<StepGeom_OuterBoundaryCurve>  , StepGeom_BoundaryCurve >(m,"StepGeom_OuterBoundaryCurve",R"#()#");
    py::class_<StepGeom_BezierCurve ,opencascade::handle<StepGeom_BezierCurve>  , StepGeom_BSplineCurve >(m,"StepGeom_BezierCurve",R"#()#");
    py::class_<StepGeom_Parabola ,opencascade::handle<StepGeom_Parabola>  , StepGeom_Conic >(m,"StepGeom_Parabola",R"#()#");
    py::class_<StepGeom_DegenerateToroidalSurface ,opencascade::handle<StepGeom_DegenerateToroidalSurface>  , StepGeom_ToroidalSurface >(m,"StepGeom_DegenerateToroidalSurface",R"#()#");

// pre-register typdefs
// ./opencascade/StepGeom_CurveOnSurface.hxx
// ./opencascade/StepGeom_Array2OfCartesianPoint.hxx
    preregister_template_NCollection_Array2<opencascade::handle<StepGeom_CartesianPoint> >(m,"StepGeom_Array2OfCartesianPoint");  
// ./opencascade/StepGeom_OffsetCurve3d.hxx
// ./opencascade/StepGeom_Array2OfSurfacePatch.hxx
    preregister_template_NCollection_Array2<opencascade::handle<StepGeom_SurfacePatch> >(m,"StepGeom_Array2OfSurfacePatch");  
// ./opencascade/StepGeom_PointReplica.hxx
// ./opencascade/StepGeom_Circle.hxx
// ./opencascade/StepGeom_RationalBSplineSurface.hxx
// ./opencascade/StepGeom_TransitionCode.hxx
// ./opencascade/StepGeom_CompositeCurve.hxx
// ./opencascade/StepGeom_OffsetSurface.hxx
// ./opencascade/StepGeom_QuasiUniformCurveAndRationalBSplineCurve.hxx
// ./opencascade/StepGeom_BoundedCurve.hxx
// ./opencascade/StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx
// ./opencascade/StepGeom_CompositeCurveSegment.hxx
// ./opencascade/StepGeom_Polyline.hxx
// ./opencascade/StepGeom_UniformCurve.hxx
// ./opencascade/StepGeom_UniformCurveAndRationalBSplineCurve.hxx
// ./opencascade/StepGeom_HArray1OfCompositeCurveSegment.hxx
// ./opencascade/StepGeom_UniformSurface.hxx
// ./opencascade/StepGeom_GeometricRepresentationContextAndParametricRepresentationContext.hxx
// ./opencascade/StepGeom_Hyperbola.hxx
// ./opencascade/StepGeom_UniformSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/StepGeom_Array1OfTrimmingSelect.hxx
    preregister_template_NCollection_Array1<StepGeom_TrimmingSelect>(m,"StepGeom_Array1OfTrimmingSelect");  
// ./opencascade/StepGeom_CylindricalSurface.hxx
// ./opencascade/StepGeom_Curve.hxx
// ./opencascade/StepGeom_BezierSurface.hxx
// ./opencascade/StepGeom_BezierCurve.hxx
// ./opencascade/StepGeom_TrimmingSelect.hxx
// ./opencascade/StepGeom_BezierCurveAndRationalBSplineCurve.hxx
// ./opencascade/StepGeom_SurfaceBoundary.hxx
// ./opencascade/StepGeom_RationalBSplineCurve.hxx
// ./opencascade/StepGeom_SurfaceCurve.hxx
// ./opencascade/StepGeom_Array1OfPcurveOrSurface.hxx
    preregister_template_NCollection_Array1<StepGeom_PcurveOrSurface>(m,"StepGeom_Array1OfPcurveOrSurface");  
// ./opencascade/StepGeom_BoundaryCurve.hxx
// ./opencascade/StepGeom_Placement.hxx
// ./opencascade/StepGeom_Line.hxx
// ./opencascade/StepGeom_ElementarySurface.hxx
// ./opencascade/StepGeom_TrimmingMember.hxx
// ./opencascade/StepGeom_Point.hxx
// ./opencascade/StepGeom_Surface.hxx
// ./opencascade/StepGeom_ToroidalSurface.hxx
// ./opencascade/StepGeom_Vector.hxx
// ./opencascade/StepGeom_CartesianTransformationOperator3d.hxx
// ./opencascade/StepGeom_Plane.hxx
// ./opencascade/StepGeom_PcurveOrSurface.hxx
// ./opencascade/StepGeom_RectangularCompositeSurface.hxx
// ./opencascade/StepGeom_GeometricRepresentationItem.hxx
// ./opencascade/StepGeom_BezierSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/StepGeom_QuasiUniformSurface.hxx
// ./opencascade/StepGeom_Array1OfBoundaryCurve.hxx
    preregister_template_NCollection_Array1<opencascade::handle<StepGeom_BoundaryCurve> >(m,"StepGeom_Array1OfBoundaryCurve");  
// ./opencascade/StepGeom_Pcurve.hxx
// ./opencascade/StepGeom_HArray2OfSurfacePatch.hxx
// ./opencascade/StepGeom_Array1OfCurve.hxx
    preregister_template_NCollection_Array1<opencascade::handle<StepGeom_Curve> >(m,"StepGeom_Array1OfCurve");  
// ./opencascade/StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext.hxx
// ./opencascade/StepGeom_DegenerateToroidalSurface.hxx
// ./opencascade/StepGeom_Array1OfCompositeCurveSegment.hxx
    preregister_template_NCollection_Array1<opencascade::handle<StepGeom_CompositeCurveSegment> >(m,"StepGeom_Array1OfCompositeCurveSegment");  
// ./opencascade/StepGeom_RectangularTrimmedSurface.hxx
// ./opencascade/StepGeom_Axis2Placement2d.hxx
// ./opencascade/StepGeom_Axis1Placement.hxx
// ./opencascade/StepGeom_VectorOrDirection.hxx
// ./opencascade/StepGeom_GeometricRepresentationContext.hxx
// ./opencascade/StepGeom_SphericalSurface.hxx
// ./opencascade/StepGeom_CurveReplica.hxx
// ./opencascade/StepGeom_SurfaceOfLinearExtrusion.hxx
// ./opencascade/StepGeom_SurfaceReplica.hxx
// ./opencascade/StepGeom_SurfaceOfRevolution.hxx
// ./opencascade/StepGeom_BSplineCurveForm.hxx
// ./opencascade/StepGeom_BSplineCurve.hxx
// ./opencascade/StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx
// ./opencascade/StepGeom_OuterBoundaryCurve.hxx
// ./opencascade/StepGeom_SurfacePatch.hxx
// ./opencascade/StepGeom_HArray2OfCartesianPoint.hxx
// ./opencascade/StepGeom_CartesianTransformationOperator2d.hxx
// ./opencascade/StepGeom_KnotType.hxx
// ./opencascade/StepGeom_PointOnSurface.hxx
// ./opencascade/StepGeom_HArray1OfTrimmingSelect.hxx
// ./opencascade/StepGeom_Direction.hxx
// ./opencascade/StepGeom_BoundedSurface.hxx
// ./opencascade/StepGeom_CurveBoundedSurface.hxx
// ./opencascade/StepGeom_HArray1OfCartesianPoint.hxx
// ./opencascade/StepGeom_QuasiUniformCurve.hxx
// ./opencascade/StepGeom_SurfaceCurveAndBoundedCurve.hxx
// ./opencascade/StepGeom_ConicalSurface.hxx
// ./opencascade/StepGeom_HArray1OfPcurveOrSurface.hxx
// ./opencascade/StepGeom_BSplineSurfaceWithKnots.hxx
// ./opencascade/StepGeom_Axis2Placement.hxx
// ./opencascade/StepGeom_DegeneratePcurve.hxx
// ./opencascade/StepGeom_OrientedSurface.hxx
// ./opencascade/StepGeom_BSplineCurveWithKnots.hxx
// ./opencascade/StepGeom_TrimmingPreference.hxx
// ./opencascade/StepGeom_BSplineSurface.hxx
// ./opencascade/StepGeom_HArray1OfBoundaryCurve.hxx
// ./opencascade/StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/StepGeom_PointOnCurve.hxx
// ./opencascade/StepGeom_Array1OfSurfaceBoundary.hxx
    preregister_template_NCollection_Array1<StepGeom_SurfaceBoundary>(m,"StepGeom_Array1OfSurfaceBoundary");  
// ./opencascade/StepGeom_TrimmedCurve.hxx
// ./opencascade/StepGeom_PreferredSurfaceCurveRepresentation.hxx
// ./opencascade/StepGeom_IntersectionCurve.hxx
// ./opencascade/StepGeom_SweptSurface.hxx
// ./opencascade/StepGeom_HArray1OfSurfaceBoundary.hxx
// ./opencascade/StepGeom_Parabola.hxx
// ./opencascade/StepGeom_EvaluatedDegeneratePcurve.hxx
// ./opencascade/StepGeom_SeamCurve.hxx
// ./opencascade/StepGeom_ReparametrisedCompositeCurveSegment.hxx
// ./opencascade/StepGeom_HArray1OfCurve.hxx
// ./opencascade/StepGeom_Conic.hxx
// ./opencascade/StepGeom_CartesianPoint.hxx
// ./opencascade/StepGeom_Array1OfCartesianPoint.hxx
    preregister_template_NCollection_Array1<opencascade::handle<StepGeom_CartesianPoint> >(m,"StepGeom_Array1OfCartesianPoint");  
// ./opencascade/StepGeom_CartesianTransformationOperator.hxx
// ./opencascade/StepGeom_BSplineSurfaceForm.hxx
// ./opencascade/StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx
// ./opencascade/StepGeom_CompositeCurveOnSurface.hxx
// ./opencascade/StepGeom_Ellipse.hxx
// ./opencascade/StepGeom_Axis2Placement3d.hxx

};

// user-defined post-inclusion per module

// user-defined post
