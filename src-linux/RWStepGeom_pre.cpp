
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Vector.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Line.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CompositeCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OffsetCurve3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OrientedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CurveReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Point.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Hyperbola.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformSurfaceAndRationalBSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Circle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OuterBoundaryCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Conic.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BezierSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_RectangularCompositeSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Polyline.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_IntersectionCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_EvaluatedDegeneratePcurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OffsetSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SeamCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BezierCurveAndRationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CompositeCurveOnSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CompositeCurveSegment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineSurfaceWithKnots.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_ReparametrisedCompositeCurveSegment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Parabola.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BezierCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_ToroidalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Direction.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_DegeneratePcurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SphericalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformCurveAndRationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Plane.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_PointOnCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BezierSurfaceAndRationalBSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_TrimmedCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_PointOnSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Ellipse.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Surface.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_PointReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceCurveAndBoundedCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Curve.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformCurveAndRationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeometricRepresentationContextAndParametricRepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfacePatch.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_DegenerateToroidalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Placement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BoundaryCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepGeom_RWAxis1Placement.hxx>
#include <RWStepGeom_RWAxis2Placement2d.hxx>
#include <RWStepGeom_RWAxis2Placement3d.hxx>
#include <RWStepGeom_RWBezierCurve.hxx>
#include <RWStepGeom_RWBezierCurveAndRationalBSplineCurve.hxx>
#include <RWStepGeom_RWBezierSurface.hxx>
#include <RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface.hxx>
#include <RWStepGeom_RWBoundaryCurve.hxx>
#include <RWStepGeom_RWBoundedCurve.hxx>
#include <RWStepGeom_RWBoundedSurface.hxx>
#include <RWStepGeom_RWBSplineCurve.hxx>
#include <RWStepGeom_RWBSplineCurveWithKnots.hxx>
#include <RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <RWStepGeom_RWBSplineSurface.hxx>
#include <RWStepGeom_RWBSplineSurfaceWithKnots.hxx>
#include <RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <RWStepGeom_RWCartesianPoint.hxx>
#include <RWStepGeom_RWCartesianTransformationOperator.hxx>
#include <RWStepGeom_RWCartesianTransformationOperator3d.hxx>
#include <RWStepGeom_RWCircle.hxx>
#include <RWStepGeom_RWCompositeCurve.hxx>
#include <RWStepGeom_RWCompositeCurveOnSurface.hxx>
#include <RWStepGeom_RWCompositeCurveSegment.hxx>
#include <RWStepGeom_RWConic.hxx>
#include <RWStepGeom_RWConicalSurface.hxx>
#include <RWStepGeom_RWCurve.hxx>
#include <RWStepGeom_RWCurveBoundedSurface.hxx>
#include <RWStepGeom_RWCurveReplica.hxx>
#include <RWStepGeom_RWCylindricalSurface.hxx>
#include <RWStepGeom_RWDegeneratePcurve.hxx>
#include <RWStepGeom_RWDegenerateToroidalSurface.hxx>
#include <RWStepGeom_RWDirection.hxx>
#include <RWStepGeom_RWElementarySurface.hxx>
#include <RWStepGeom_RWEllipse.hxx>
#include <RWStepGeom_RWEvaluatedDegeneratePcurve.hxx>
#include <RWStepGeom_RWGeometricRepresentationContext.hxx>
#include <RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext.hxx>
#include <RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext.hxx>
#include <RWStepGeom_RWGeometricRepresentationItem.hxx>
#include <RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <RWStepGeom_RWHyperbola.hxx>
#include <RWStepGeom_RWIntersectionCurve.hxx>
#include <RWStepGeom_RWLine.hxx>
#include <RWStepGeom_RWOffsetCurve3d.hxx>
#include <RWStepGeom_RWOffsetSurface.hxx>
#include <RWStepGeom_RWOrientedSurface.hxx>
#include <RWStepGeom_RWOuterBoundaryCurve.hxx>
#include <RWStepGeom_RWParabola.hxx>
#include <RWStepGeom_RWPcurve.hxx>
#include <RWStepGeom_RWPlacement.hxx>
#include <RWStepGeom_RWPlane.hxx>
#include <RWStepGeom_RWPoint.hxx>
#include <RWStepGeom_RWPointOnCurve.hxx>
#include <RWStepGeom_RWPointOnSurface.hxx>
#include <RWStepGeom_RWPointReplica.hxx>
#include <RWStepGeom_RWPolyline.hxx>
#include <RWStepGeom_RWQuasiUniformCurve.hxx>
#include <RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve.hxx>
#include <RWStepGeom_RWQuasiUniformSurface.hxx>
#include <RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface.hxx>
#include <RWStepGeom_RWRationalBSplineCurve.hxx>
#include <RWStepGeom_RWRationalBSplineSurface.hxx>
#include <RWStepGeom_RWRectangularCompositeSurface.hxx>
#include <RWStepGeom_RWRectangularTrimmedSurface.hxx>
#include <RWStepGeom_RWReparametrisedCompositeCurveSegment.hxx>
#include <RWStepGeom_RWSeamCurve.hxx>
#include <RWStepGeom_RWSphericalSurface.hxx>
#include <RWStepGeom_RWSurface.hxx>
#include <RWStepGeom_RWSurfaceCurve.hxx>
#include <RWStepGeom_RWSurfaceCurveAndBoundedCurve.hxx>
#include <RWStepGeom_RWSurfaceOfLinearExtrusion.hxx>
#include <RWStepGeom_RWSurfaceOfRevolution.hxx>
#include <RWStepGeom_RWSurfacePatch.hxx>
#include <RWStepGeom_RWSurfaceReplica.hxx>
#include <RWStepGeom_RWSweptSurface.hxx>
#include <RWStepGeom_RWToroidalSurface.hxx>
#include <RWStepGeom_RWTrimmedCurve.hxx>
#include <RWStepGeom_RWUniformCurve.hxx>
#include <RWStepGeom_RWUniformCurveAndRationalBSplineCurve.hxx>
#include <RWStepGeom_RWUniformSurface.hxx>
#include <RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface.hxx>
#include <RWStepGeom_RWVector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepGeom_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepGeom", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStepGeom_RWAxis1Placement , shared_ptr<RWStepGeom_RWAxis1Placement> >(m,"RWStepGeom_RWAxis1Placement",R"#(Read & Write Module for Axis1Placement)#");
    py::class_<RWStepGeom_RWAxis2Placement2d , shared_ptr<RWStepGeom_RWAxis2Placement2d> >(m,"RWStepGeom_RWAxis2Placement2d",R"#(Read & Write Module for Axis2Placement2d)#");
    py::class_<RWStepGeom_RWAxis2Placement3d , shared_ptr<RWStepGeom_RWAxis2Placement3d> >(m,"RWStepGeom_RWAxis2Placement3d",R"#(Read & Write Module for Axis2Placement3d)#");
    py::class_<RWStepGeom_RWBSplineCurve , shared_ptr<RWStepGeom_RWBSplineCurve> >(m,"RWStepGeom_RWBSplineCurve",R"#(Read & Write Module for BSplineCurve)#");
    py::class_<RWStepGeom_RWBSplineCurveWithKnots , shared_ptr<RWStepGeom_RWBSplineCurveWithKnots> >(m,"RWStepGeom_RWBSplineCurveWithKnots",R"#(Read & Write Module for BSplineCurveWithKnots Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve> >(m,"RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve",R"#(Read & Write Module for BSplineCurveWithKnotsAndRationalBSplineCurve Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepGeom_RWBSplineSurface , shared_ptr<RWStepGeom_RWBSplineSurface> >(m,"RWStepGeom_RWBSplineSurface",R"#(Read & Write Module for BSplineSurface)#");
    py::class_<RWStepGeom_RWBSplineSurfaceWithKnots , shared_ptr<RWStepGeom_RWBSplineSurfaceWithKnots> >(m,"RWStepGeom_RWBSplineSurfaceWithKnots",R"#(Read & Write Module for BSplineSurfaceWithKnots Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface> >(m,"RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface",R"#(Read & Write Module for BSplineSurfaceWithKnotsAndRationalBSplineSurface Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepGeom_RWBezierCurve , shared_ptr<RWStepGeom_RWBezierCurve> >(m,"RWStepGeom_RWBezierCurve",R"#(Read & Write Module for BezierCurve)#");
    py::class_<RWStepGeom_RWBezierCurveAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWBezierCurveAndRationalBSplineCurve> >(m,"RWStepGeom_RWBezierCurveAndRationalBSplineCurve",R"#(Read & Write Module for BezierCurveAndRationalBSplineCurve)#");
    py::class_<RWStepGeom_RWBezierSurface , shared_ptr<RWStepGeom_RWBezierSurface> >(m,"RWStepGeom_RWBezierSurface",R"#(Read & Write Module for BezierSurface)#");
    py::class_<RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface> >(m,"RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface",R"#(Read & Write Module for BezierSurfaceAndRationalBSplineSurface)#");
    py::class_<RWStepGeom_RWBoundaryCurve , shared_ptr<RWStepGeom_RWBoundaryCurve> >(m,"RWStepGeom_RWBoundaryCurve",R"#(Read & Write Module for BoundaryCurve)#");
    py::class_<RWStepGeom_RWBoundedCurve , shared_ptr<RWStepGeom_RWBoundedCurve> >(m,"RWStepGeom_RWBoundedCurve",R"#(Read & Write Module for BoundedCurve)#");
    py::class_<RWStepGeom_RWBoundedSurface , shared_ptr<RWStepGeom_RWBoundedSurface> >(m,"RWStepGeom_RWBoundedSurface",R"#(Read & Write Module for BoundedSurface)#");
    py::class_<RWStepGeom_RWCartesianPoint , shared_ptr<RWStepGeom_RWCartesianPoint> >(m,"RWStepGeom_RWCartesianPoint",R"#(Read & Write Module for CartesianPoint)#");
    py::class_<RWStepGeom_RWCartesianTransformationOperator , shared_ptr<RWStepGeom_RWCartesianTransformationOperator> >(m,"RWStepGeom_RWCartesianTransformationOperator",R"#(Read & Write Module for CartesianTransformationOperator)#");
    py::class_<RWStepGeom_RWCartesianTransformationOperator3d , shared_ptr<RWStepGeom_RWCartesianTransformationOperator3d> >(m,"RWStepGeom_RWCartesianTransformationOperator3d",R"#(Read & Write Module for CartesianTransformationOperator3d)#");
    py::class_<RWStepGeom_RWCircle , shared_ptr<RWStepGeom_RWCircle> >(m,"RWStepGeom_RWCircle",R"#(Read & Write Module for Circle)#");
    py::class_<RWStepGeom_RWCompositeCurve , shared_ptr<RWStepGeom_RWCompositeCurve> >(m,"RWStepGeom_RWCompositeCurve",R"#(Read & Write Module for CompositeCurve)#");
    py::class_<RWStepGeom_RWCompositeCurveOnSurface , shared_ptr<RWStepGeom_RWCompositeCurveOnSurface> >(m,"RWStepGeom_RWCompositeCurveOnSurface",R"#(Read & Write Module for CompositeCurveOnSurface)#");
    py::class_<RWStepGeom_RWCompositeCurveSegment , shared_ptr<RWStepGeom_RWCompositeCurveSegment> >(m,"RWStepGeom_RWCompositeCurveSegment",R"#(Read & Write Module for CompositeCurveSegment)#");
    py::class_<RWStepGeom_RWConic , shared_ptr<RWStepGeom_RWConic> >(m,"RWStepGeom_RWConic",R"#(Read & Write Module for Conic)#");
    py::class_<RWStepGeom_RWConicalSurface , shared_ptr<RWStepGeom_RWConicalSurface> >(m,"RWStepGeom_RWConicalSurface",R"#(Read & Write Module for ConicalSurface)#");
    py::class_<RWStepGeom_RWCurve , shared_ptr<RWStepGeom_RWCurve> >(m,"RWStepGeom_RWCurve",R"#(Read & Write Module for Curve)#");
    py::class_<RWStepGeom_RWCurveBoundedSurface , shared_ptr<RWStepGeom_RWCurveBoundedSurface> >(m,"RWStepGeom_RWCurveBoundedSurface",R"#(Read & Write tool for CurveBoundedSurface)#");
    py::class_<RWStepGeom_RWCurveReplica , shared_ptr<RWStepGeom_RWCurveReplica> >(m,"RWStepGeom_RWCurveReplica",R"#(Read & Write Module for CurveReplica)#");
    py::class_<RWStepGeom_RWCylindricalSurface , shared_ptr<RWStepGeom_RWCylindricalSurface> >(m,"RWStepGeom_RWCylindricalSurface",R"#(Read & Write Module for CylindricalSurface)#");
    py::class_<RWStepGeom_RWDegeneratePcurve , shared_ptr<RWStepGeom_RWDegeneratePcurve> >(m,"RWStepGeom_RWDegeneratePcurve",R"#(Read & Write Module for DegeneratePcurve)#");
    py::class_<RWStepGeom_RWDegenerateToroidalSurface , shared_ptr<RWStepGeom_RWDegenerateToroidalSurface> >(m,"RWStepGeom_RWDegenerateToroidalSurface",R"#(Read & Write Module for DegenerateToroidalSurface)#");
    py::class_<RWStepGeom_RWDirection , shared_ptr<RWStepGeom_RWDirection> >(m,"RWStepGeom_RWDirection",R"#(Read & Write Module for Direction Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepGeom_RWElementarySurface , shared_ptr<RWStepGeom_RWElementarySurface> >(m,"RWStepGeom_RWElementarySurface",R"#(Read & Write Module for ElementarySurface)#");
    py::class_<RWStepGeom_RWEllipse , shared_ptr<RWStepGeom_RWEllipse> >(m,"RWStepGeom_RWEllipse",R"#(Read & Write Module for Ellipse Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepGeom_RWEvaluatedDegeneratePcurve , shared_ptr<RWStepGeom_RWEvaluatedDegeneratePcurve> >(m,"RWStepGeom_RWEvaluatedDegeneratePcurve",R"#(Read & Write Module for EvaluatedDegeneratePcurve)#");
    py::class_<RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx , shared_ptr<RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> >(m,"RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx",R"#(Read & Write Module for GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx)#");
    py::class_<RWStepGeom_RWGeometricRepresentationContext , shared_ptr<RWStepGeom_RWGeometricRepresentationContext> >(m,"RWStepGeom_RWGeometricRepresentationContext",R"#(Read & Write Module for GeometricRepresentationContext)#");
    py::class_<RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext , shared_ptr<RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext> >(m,"RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext",R"#(Read & Write Module for GeometricRepresentationContextAndGlobalUnitAssignedContext)#");
    py::class_<RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext , shared_ptr<RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext> >(m,"RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext",R"#(Read & Write Module for GeometricRepresentationContextAndParametricRepresentationContext)#");
    py::class_<RWStepGeom_RWGeometricRepresentationItem , shared_ptr<RWStepGeom_RWGeometricRepresentationItem> >(m,"RWStepGeom_RWGeometricRepresentationItem",R"#(Read & Write Module for GeometricRepresentationItem)#");
    py::class_<RWStepGeom_RWHyperbola , shared_ptr<RWStepGeom_RWHyperbola> >(m,"RWStepGeom_RWHyperbola",R"#(Read & Write Module for Hyperbola)#");
    py::class_<RWStepGeom_RWIntersectionCurve , shared_ptr<RWStepGeom_RWIntersectionCurve> >(m,"RWStepGeom_RWIntersectionCurve",R"#(Read & Write Module for IntersectionCurve)#");
    py::class_<RWStepGeom_RWLine , shared_ptr<RWStepGeom_RWLine> >(m,"RWStepGeom_RWLine",R"#(Read & Write Module for Line)#");
    py::class_<RWStepGeom_RWOffsetCurve3d , shared_ptr<RWStepGeom_RWOffsetCurve3d> >(m,"RWStepGeom_RWOffsetCurve3d",R"#(Read & Write Module for OffsetCurve3d)#");
    py::class_<RWStepGeom_RWOffsetSurface , shared_ptr<RWStepGeom_RWOffsetSurface> >(m,"RWStepGeom_RWOffsetSurface",R"#(Read & Write Module for OffsetSurface)#");
    py::class_<RWStepGeom_RWOrientedSurface , shared_ptr<RWStepGeom_RWOrientedSurface> >(m,"RWStepGeom_RWOrientedSurface",R"#(Read & Write tool for OrientedSurface)#");
    py::class_<RWStepGeom_RWOuterBoundaryCurve , shared_ptr<RWStepGeom_RWOuterBoundaryCurve> >(m,"RWStepGeom_RWOuterBoundaryCurve",R"#(Read & Write Module for OuterBoundaryCurve)#");
    py::class_<RWStepGeom_RWParabola , shared_ptr<RWStepGeom_RWParabola> >(m,"RWStepGeom_RWParabola",R"#(Read & Write Module for Parabola)#");
    py::class_<RWStepGeom_RWPcurve , shared_ptr<RWStepGeom_RWPcurve> >(m,"RWStepGeom_RWPcurve",R"#(Read & Write Module for Pcurve)#");
    py::class_<RWStepGeom_RWPlacement , shared_ptr<RWStepGeom_RWPlacement> >(m,"RWStepGeom_RWPlacement",R"#(Read & Write Module for Placement)#");
    py::class_<RWStepGeom_RWPlane , shared_ptr<RWStepGeom_RWPlane> >(m,"RWStepGeom_RWPlane",R"#(Read & Write Module for Plane)#");
    py::class_<RWStepGeom_RWPoint , shared_ptr<RWStepGeom_RWPoint> >(m,"RWStepGeom_RWPoint",R"#(Read & Write Module for Point)#");
    py::class_<RWStepGeom_RWPointOnCurve , shared_ptr<RWStepGeom_RWPointOnCurve> >(m,"RWStepGeom_RWPointOnCurve",R"#(Read & Write Module for PointOnCurve)#");
    py::class_<RWStepGeom_RWPointOnSurface , shared_ptr<RWStepGeom_RWPointOnSurface> >(m,"RWStepGeom_RWPointOnSurface",R"#(Read & Write Module for PointOnSurface)#");
    py::class_<RWStepGeom_RWPointReplica , shared_ptr<RWStepGeom_RWPointReplica> >(m,"RWStepGeom_RWPointReplica",R"#(Read & Write Module for PointReplica)#");
    py::class_<RWStepGeom_RWPolyline , shared_ptr<RWStepGeom_RWPolyline> >(m,"RWStepGeom_RWPolyline",R"#(Read & Write Module for Polyline)#");
    py::class_<RWStepGeom_RWQuasiUniformCurve , shared_ptr<RWStepGeom_RWQuasiUniformCurve> >(m,"RWStepGeom_RWQuasiUniformCurve",R"#(Read & Write Module for QuasiUniformCurve)#");
    py::class_<RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve> >(m,"RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve",R"#(Read & Write Module for QuasiUniformCurveAndRationalBSplineCurve)#");
    py::class_<RWStepGeom_RWQuasiUniformSurface , shared_ptr<RWStepGeom_RWQuasiUniformSurface> >(m,"RWStepGeom_RWQuasiUniformSurface",R"#(Read & Write Module for QuasiUniformSurface)#");
    py::class_<RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface> >(m,"RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface",R"#(Read & Write Module for QuasiUniformSurfaceAndRationalBSplineSurface)#");
    py::class_<RWStepGeom_RWRationalBSplineCurve , shared_ptr<RWStepGeom_RWRationalBSplineCurve> >(m,"RWStepGeom_RWRationalBSplineCurve",R"#(Read & Write Module for RationalBSplineCurve Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepGeom_RWRationalBSplineSurface , shared_ptr<RWStepGeom_RWRationalBSplineSurface> >(m,"RWStepGeom_RWRationalBSplineSurface",R"#(Read & Write Module for RationalBSplineSurface Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepGeom_RWRectangularCompositeSurface , shared_ptr<RWStepGeom_RWRectangularCompositeSurface> >(m,"RWStepGeom_RWRectangularCompositeSurface",R"#(Read & Write Module for RectangularCompositeSurface)#");
    py::class_<RWStepGeom_RWRectangularTrimmedSurface , shared_ptr<RWStepGeom_RWRectangularTrimmedSurface> >(m,"RWStepGeom_RWRectangularTrimmedSurface",R"#(Read & Write Module for RectangularTrimmedSurface)#");
    py::class_<RWStepGeom_RWReparametrisedCompositeCurveSegment , shared_ptr<RWStepGeom_RWReparametrisedCompositeCurveSegment> >(m,"RWStepGeom_RWReparametrisedCompositeCurveSegment",R"#(Read & Write Module for ReparametrisedCompositeCurveSegment)#");
    py::class_<RWStepGeom_RWSeamCurve , shared_ptr<RWStepGeom_RWSeamCurve> >(m,"RWStepGeom_RWSeamCurve",R"#(Read & Write Module for SeamCurve)#");
    py::class_<RWStepGeom_RWSphericalSurface , shared_ptr<RWStepGeom_RWSphericalSurface> >(m,"RWStepGeom_RWSphericalSurface",R"#(Read & Write Module for SphericalSurface)#");
    py::class_<RWStepGeom_RWSurface , shared_ptr<RWStepGeom_RWSurface> >(m,"RWStepGeom_RWSurface",R"#(Read & Write Module for Surface)#");
    py::class_<RWStepGeom_RWSurfaceCurve , shared_ptr<RWStepGeom_RWSurfaceCurve> >(m,"RWStepGeom_RWSurfaceCurve",R"#(Read & Write Module for SurfaceCurve)#");
    py::class_<RWStepGeom_RWSurfaceCurveAndBoundedCurve , shared_ptr<RWStepGeom_RWSurfaceCurveAndBoundedCurve> >(m,"RWStepGeom_RWSurfaceCurveAndBoundedCurve",R"#(Read StepGeom_SurfaceCurveAndBoundedCurve)#");
    py::class_<RWStepGeom_RWSurfaceOfLinearExtrusion , shared_ptr<RWStepGeom_RWSurfaceOfLinearExtrusion> >(m,"RWStepGeom_RWSurfaceOfLinearExtrusion",R"#(Read & Write Module for SurfaceOfLinearExtrusion)#");
    py::class_<RWStepGeom_RWSurfaceOfRevolution , shared_ptr<RWStepGeom_RWSurfaceOfRevolution> >(m,"RWStepGeom_RWSurfaceOfRevolution",R"#(Read & Write Module for SurfaceOfRevolution)#");
    py::class_<RWStepGeom_RWSurfacePatch , shared_ptr<RWStepGeom_RWSurfacePatch> >(m,"RWStepGeom_RWSurfacePatch",R"#(Read & Write Module for SurfacePatch)#");
    py::class_<RWStepGeom_RWSurfaceReplica , shared_ptr<RWStepGeom_RWSurfaceReplica> >(m,"RWStepGeom_RWSurfaceReplica",R"#(Read & Write Module for SurfaceReplica)#");
    py::class_<RWStepGeom_RWSweptSurface , shared_ptr<RWStepGeom_RWSweptSurface> >(m,"RWStepGeom_RWSweptSurface",R"#(Read & Write Module for SweptSurface)#");
    py::class_<RWStepGeom_RWToroidalSurface , shared_ptr<RWStepGeom_RWToroidalSurface> >(m,"RWStepGeom_RWToroidalSurface",R"#(Read & Write Module for ToroidalSurface Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepGeom_RWTrimmedCurve , shared_ptr<RWStepGeom_RWTrimmedCurve> >(m,"RWStepGeom_RWTrimmedCurve",R"#(Read & Write Module for TrimmedCurve)#");
    py::class_<RWStepGeom_RWUniformCurve , shared_ptr<RWStepGeom_RWUniformCurve> >(m,"RWStepGeom_RWUniformCurve",R"#(Read & Write Module for UniformCurve)#");
    py::class_<RWStepGeom_RWUniformCurveAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWUniformCurveAndRationalBSplineCurve> >(m,"RWStepGeom_RWUniformCurveAndRationalBSplineCurve",R"#(Read & Write Module for UniformCurveAndRationalBSplineCurve)#");
    py::class_<RWStepGeom_RWUniformSurface , shared_ptr<RWStepGeom_RWUniformSurface> >(m,"RWStepGeom_RWUniformSurface",R"#(Read & Write Module for UniformSurface)#");
    py::class_<RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface> >(m,"RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface",R"#(Read & Write Module for UniformSurfaceAndRationalBSplineSurface)#");
    py::class_<RWStepGeom_RWVector , shared_ptr<RWStepGeom_RWVector> >(m,"RWStepGeom_RWVector",R"#(Read & Write Module for Vector Check added by CKY , 7-OCT-1996)#");

};

// user-defined post-inclusion per module

// user-defined post
