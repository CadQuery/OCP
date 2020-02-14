
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Curve.hxx>
#include <StepData_StepWriter.hxx>
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
#include <StepGeom_QuasiUniformSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_DegenerateToroidalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformCurveAndRationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformCurveAndRationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_PointOnCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_RectangularCompositeSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_PointReplica.hxx>
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
#include <StepGeom_Conic.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_EvaluatedDegeneratePcurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Surface.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Line.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OffsetSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformSurfaceAndRationalBSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
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
#include <StepGeom_Vector.hxx>
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
#include <StepGeom_Hyperbola.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeometricRepresentationContextAndParametricRepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OuterBoundaryCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BoundaryCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BezierCurveAndRationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Parabola.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
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
#include <StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Polyline.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CurveReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CompositeCurveOnSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_ReparametrisedCompositeCurveSegment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CompositeCurveSegment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Circle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceCurveAndBoundedCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SeamCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BezierCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_DegeneratePcurve.hxx>
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
#include <StepGeom_Placement.hxx>
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
#include <StepGeom_CompositeCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Plane.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_TrimmedCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OffsetCurve3d.hxx>
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
#include <StepGeom_SphericalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Direction.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OrientedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfacePatch.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BezierSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BezierSurfaceAndRationalBSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_PointOnSurface.hxx>
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
void register_RWStepGeom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepGeom"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepGeom_RWAxis1Placement , shared_ptr<RWStepGeom_RWAxis1Placement>  >>(m.attr("RWStepGeom_RWAxis1Placement"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWAxis1Placement::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Axis1Placement> &  ) const) static_cast<void (RWStepGeom_RWAxis1Placement::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Axis1Placement> &  ) const>(&RWStepGeom_RWAxis1Placement::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWAxis1Placement::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Axis1Placement> &  ) const) static_cast<void (RWStepGeom_RWAxis1Placement::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Axis1Placement> &  ) const>(&RWStepGeom_RWAxis1Placement::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWAxis1Placement::*)( const opencascade::handle<StepGeom_Axis1Placement> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWAxis1Placement::*)( const opencascade::handle<StepGeom_Axis1Placement> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWAxis1Placement::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWAxis2Placement2d , shared_ptr<RWStepGeom_RWAxis2Placement2d>  >>(m.attr("RWStepGeom_RWAxis2Placement2d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWAxis2Placement2d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Axis2Placement2d> &  ) const) static_cast<void (RWStepGeom_RWAxis2Placement2d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Axis2Placement2d> &  ) const>(&RWStepGeom_RWAxis2Placement2d::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWAxis2Placement2d::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Axis2Placement2d> &  ) const) static_cast<void (RWStepGeom_RWAxis2Placement2d::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Axis2Placement2d> &  ) const>(&RWStepGeom_RWAxis2Placement2d::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWAxis2Placement2d::*)( const opencascade::handle<StepGeom_Axis2Placement2d> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWAxis2Placement2d::*)( const opencascade::handle<StepGeom_Axis2Placement2d> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWAxis2Placement2d::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWAxis2Placement3d , shared_ptr<RWStepGeom_RWAxis2Placement3d>  >>(m.attr("RWStepGeom_RWAxis2Placement3d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWAxis2Placement3d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Axis2Placement3d> &  ) const) static_cast<void (RWStepGeom_RWAxis2Placement3d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Axis2Placement3d> &  ) const>(&RWStepGeom_RWAxis2Placement3d::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWAxis2Placement3d::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Axis2Placement3d> &  ) const) static_cast<void (RWStepGeom_RWAxis2Placement3d::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Axis2Placement3d> &  ) const>(&RWStepGeom_RWAxis2Placement3d::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWAxis2Placement3d::*)( const opencascade::handle<StepGeom_Axis2Placement3d> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWAxis2Placement3d::*)( const opencascade::handle<StepGeom_Axis2Placement3d> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWAxis2Placement3d::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineCurve , shared_ptr<RWStepGeom_RWBSplineCurve>  >>(m.attr("RWStepGeom_RWBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineCurve> &  ) const>(&RWStepGeom_RWBSplineCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineCurve> &  ) const>(&RWStepGeom_RWBSplineCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBSplineCurve::*)( const opencascade::handle<StepGeom_BSplineCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBSplineCurve::*)( const opencascade::handle<StepGeom_BSplineCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBSplineCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineCurveWithKnots , shared_ptr<RWStepGeom_RWBSplineCurveWithKnots>  >>(m.attr("RWStepGeom_RWBSplineCurveWithKnots"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBSplineCurveWithKnots::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineCurveWithKnots> &  ) const) static_cast<void (RWStepGeom_RWBSplineCurveWithKnots::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineCurveWithKnots> &  ) const>(&RWStepGeom_RWBSplineCurveWithKnots::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBSplineCurveWithKnots::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineCurveWithKnots> &  ) const) static_cast<void (RWStepGeom_RWBSplineCurveWithKnots::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineCurveWithKnots> &  ) const>(&RWStepGeom_RWBSplineCurveWithKnots::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBSplineCurveWithKnots::*)( const opencascade::handle<StepGeom_BSplineCurveWithKnots> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBSplineCurveWithKnots::*)( const opencascade::handle<StepGeom_BSplineCurveWithKnots> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBSplineCurveWithKnots::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepGeom_RWBSplineCurveWithKnots::*)( const opencascade::handle<StepGeom_BSplineCurveWithKnots> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepGeom_RWBSplineCurveWithKnots::*)( const opencascade::handle<StepGeom_BSplineCurveWithKnots> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepGeom_RWBSplineCurveWithKnots::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve>  >>(m.attr("RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> &  ) const>(&RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> &  ) const>(&RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineSurface , shared_ptr<RWStepGeom_RWBSplineSurface>  >>(m.attr("RWStepGeom_RWBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineSurface> &  ) const>(&RWStepGeom_RWBSplineSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineSurface> &  ) const>(&RWStepGeom_RWBSplineSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBSplineSurface::*)( const opencascade::handle<StepGeom_BSplineSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBSplineSurface::*)( const opencascade::handle<StepGeom_BSplineSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBSplineSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineSurfaceWithKnots , shared_ptr<RWStepGeom_RWBSplineSurfaceWithKnots>  >>(m.attr("RWStepGeom_RWBSplineSurfaceWithKnots"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBSplineSurfaceWithKnots::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> &  ) const) static_cast<void (RWStepGeom_RWBSplineSurfaceWithKnots::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> &  ) const>(&RWStepGeom_RWBSplineSurfaceWithKnots::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBSplineSurfaceWithKnots::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> &  ) const) static_cast<void (RWStepGeom_RWBSplineSurfaceWithKnots::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> &  ) const>(&RWStepGeom_RWBSplineSurfaceWithKnots::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBSplineSurfaceWithKnots::*)( const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBSplineSurfaceWithKnots::*)( const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBSplineSurfaceWithKnots::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepGeom_RWBSplineSurfaceWithKnots::*)( const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepGeom_RWBSplineSurfaceWithKnots::*)( const opencascade::handle<StepGeom_BSplineSurfaceWithKnots> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepGeom_RWBSplineSurfaceWithKnots::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface>  >>(m.attr("RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> &  ) const>(&RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> &  ) const>(&RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBezierCurve , shared_ptr<RWStepGeom_RWBezierCurve>  >>(m.attr("RWStepGeom_RWBezierCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBezierCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BezierCurve> &  ) const) static_cast<void (RWStepGeom_RWBezierCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BezierCurve> &  ) const>(&RWStepGeom_RWBezierCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBezierCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BezierCurve> &  ) const) static_cast<void (RWStepGeom_RWBezierCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BezierCurve> &  ) const>(&RWStepGeom_RWBezierCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBezierCurve::*)( const opencascade::handle<StepGeom_BezierCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBezierCurve::*)( const opencascade::handle<StepGeom_BezierCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBezierCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBezierCurveAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWBezierCurveAndRationalBSplineCurve>  >>(m.attr("RWStepGeom_RWBezierCurveAndRationalBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BezierCurveAndRationalBSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWBezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BezierCurveAndRationalBSplineCurve> &  ) const>(&RWStepGeom_RWBezierCurveAndRationalBSplineCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBezierCurveAndRationalBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BezierCurveAndRationalBSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWBezierCurveAndRationalBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BezierCurveAndRationalBSplineCurve> &  ) const>(&RWStepGeom_RWBezierCurveAndRationalBSplineCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_BezierCurveAndRationalBSplineCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBezierCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_BezierCurveAndRationalBSplineCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBezierCurveAndRationalBSplineCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBezierSurface , shared_ptr<RWStepGeom_RWBezierSurface>  >>(m.attr("RWStepGeom_RWBezierSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBezierSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BezierSurface> &  ) const) static_cast<void (RWStepGeom_RWBezierSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BezierSurface> &  ) const>(&RWStepGeom_RWBezierSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBezierSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BezierSurface> &  ) const) static_cast<void (RWStepGeom_RWBezierSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BezierSurface> &  ) const>(&RWStepGeom_RWBezierSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBezierSurface::*)( const opencascade::handle<StepGeom_BezierSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBezierSurface::*)( const opencascade::handle<StepGeom_BezierSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBezierSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface>  >>(m.attr("RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BezierSurfaceAndRationalBSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BezierSurfaceAndRationalBSplineSurface> &  ) const>(&RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BezierSurfaceAndRationalBSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BezierSurfaceAndRationalBSplineSurface> &  ) const>(&RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_BezierSurfaceAndRationalBSplineSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_BezierSurfaceAndRationalBSplineSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBoundaryCurve , shared_ptr<RWStepGeom_RWBoundaryCurve>  >>(m.attr("RWStepGeom_RWBoundaryCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBoundaryCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BoundaryCurve> &  ) const) static_cast<void (RWStepGeom_RWBoundaryCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BoundaryCurve> &  ) const>(&RWStepGeom_RWBoundaryCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBoundaryCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BoundaryCurve> &  ) const) static_cast<void (RWStepGeom_RWBoundaryCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BoundaryCurve> &  ) const>(&RWStepGeom_RWBoundaryCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWBoundaryCurve::*)( const opencascade::handle<StepGeom_BoundaryCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWBoundaryCurve::*)( const opencascade::handle<StepGeom_BoundaryCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWBoundaryCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBoundedCurve , shared_ptr<RWStepGeom_RWBoundedCurve>  >>(m.attr("RWStepGeom_RWBoundedCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBoundedCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BoundedCurve> &  ) const) static_cast<void (RWStepGeom_RWBoundedCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BoundedCurve> &  ) const>(&RWStepGeom_RWBoundedCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBoundedCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BoundedCurve> &  ) const) static_cast<void (RWStepGeom_RWBoundedCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BoundedCurve> &  ) const>(&RWStepGeom_RWBoundedCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBoundedSurface , shared_ptr<RWStepGeom_RWBoundedSurface>  >>(m.attr("RWStepGeom_RWBoundedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWBoundedSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BoundedSurface> &  ) const) static_cast<void (RWStepGeom_RWBoundedSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_BoundedSurface> &  ) const>(&RWStepGeom_RWBoundedSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWBoundedSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BoundedSurface> &  ) const) static_cast<void (RWStepGeom_RWBoundedSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_BoundedSurface> &  ) const>(&RWStepGeom_RWBoundedSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCartesianPoint , shared_ptr<RWStepGeom_RWCartesianPoint>  >>(m.attr("RWStepGeom_RWCartesianPoint"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCartesianPoint::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CartesianPoint> &  ) const) static_cast<void (RWStepGeom_RWCartesianPoint::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CartesianPoint> &  ) const>(&RWStepGeom_RWCartesianPoint::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCartesianPoint::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CartesianPoint> &  ) const) static_cast<void (RWStepGeom_RWCartesianPoint::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CartesianPoint> &  ) const>(&RWStepGeom_RWCartesianPoint::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCartesianTransformationOperator , shared_ptr<RWStepGeom_RWCartesianTransformationOperator>  >>(m.attr("RWStepGeom_RWCartesianTransformationOperator"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCartesianTransformationOperator::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CartesianTransformationOperator> &  ) const) static_cast<void (RWStepGeom_RWCartesianTransformationOperator::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CartesianTransformationOperator> &  ) const>(&RWStepGeom_RWCartesianTransformationOperator::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCartesianTransformationOperator::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CartesianTransformationOperator> &  ) const) static_cast<void (RWStepGeom_RWCartesianTransformationOperator::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CartesianTransformationOperator> &  ) const>(&RWStepGeom_RWCartesianTransformationOperator::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWCartesianTransformationOperator::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWCartesianTransformationOperator::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWCartesianTransformationOperator::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCartesianTransformationOperator3d , shared_ptr<RWStepGeom_RWCartesianTransformationOperator3d>  >>(m.attr("RWStepGeom_RWCartesianTransformationOperator3d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCartesianTransformationOperator3d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CartesianTransformationOperator3d> &  ) const) static_cast<void (RWStepGeom_RWCartesianTransformationOperator3d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CartesianTransformationOperator3d> &  ) const>(&RWStepGeom_RWCartesianTransformationOperator3d::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCartesianTransformationOperator3d::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CartesianTransformationOperator3d> &  ) const) static_cast<void (RWStepGeom_RWCartesianTransformationOperator3d::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CartesianTransformationOperator3d> &  ) const>(&RWStepGeom_RWCartesianTransformationOperator3d::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWCartesianTransformationOperator3d::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator3d> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWCartesianTransformationOperator3d::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator3d> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWCartesianTransformationOperator3d::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCircle , shared_ptr<RWStepGeom_RWCircle>  >>(m.attr("RWStepGeom_RWCircle"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCircle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Circle> &  ) const) static_cast<void (RWStepGeom_RWCircle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Circle> &  ) const>(&RWStepGeom_RWCircle::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCircle::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Circle> &  ) const) static_cast<void (RWStepGeom_RWCircle::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Circle> &  ) const>(&RWStepGeom_RWCircle::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWCircle::*)( const opencascade::handle<StepGeom_Circle> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWCircle::*)( const opencascade::handle<StepGeom_Circle> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWCircle::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCompositeCurve , shared_ptr<RWStepGeom_RWCompositeCurve>  >>(m.attr("RWStepGeom_RWCompositeCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCompositeCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CompositeCurve> &  ) const) static_cast<void (RWStepGeom_RWCompositeCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CompositeCurve> &  ) const>(&RWStepGeom_RWCompositeCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCompositeCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CompositeCurve> &  ) const) static_cast<void (RWStepGeom_RWCompositeCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CompositeCurve> &  ) const>(&RWStepGeom_RWCompositeCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWCompositeCurve::*)( const opencascade::handle<StepGeom_CompositeCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWCompositeCurve::*)( const opencascade::handle<StepGeom_CompositeCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWCompositeCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCompositeCurveOnSurface , shared_ptr<RWStepGeom_RWCompositeCurveOnSurface>  >>(m.attr("RWStepGeom_RWCompositeCurveOnSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCompositeCurveOnSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CompositeCurveOnSurface> &  ) const) static_cast<void (RWStepGeom_RWCompositeCurveOnSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CompositeCurveOnSurface> &  ) const>(&RWStepGeom_RWCompositeCurveOnSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCompositeCurveOnSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CompositeCurveOnSurface> &  ) const) static_cast<void (RWStepGeom_RWCompositeCurveOnSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CompositeCurveOnSurface> &  ) const>(&RWStepGeom_RWCompositeCurveOnSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWCompositeCurveOnSurface::*)( const opencascade::handle<StepGeom_CompositeCurveOnSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWCompositeCurveOnSurface::*)( const opencascade::handle<StepGeom_CompositeCurveOnSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWCompositeCurveOnSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCompositeCurveSegment , shared_ptr<RWStepGeom_RWCompositeCurveSegment>  >>(m.attr("RWStepGeom_RWCompositeCurveSegment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCompositeCurveSegment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CompositeCurveSegment> &  ) const) static_cast<void (RWStepGeom_RWCompositeCurveSegment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CompositeCurveSegment> &  ) const>(&RWStepGeom_RWCompositeCurveSegment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCompositeCurveSegment::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CompositeCurveSegment> &  ) const) static_cast<void (RWStepGeom_RWCompositeCurveSegment::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CompositeCurveSegment> &  ) const>(&RWStepGeom_RWCompositeCurveSegment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWCompositeCurveSegment::*)( const opencascade::handle<StepGeom_CompositeCurveSegment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWCompositeCurveSegment::*)( const opencascade::handle<StepGeom_CompositeCurveSegment> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWCompositeCurveSegment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWConic , shared_ptr<RWStepGeom_RWConic>  >>(m.attr("RWStepGeom_RWConic"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWConic::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Conic> &  ) const) static_cast<void (RWStepGeom_RWConic::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Conic> &  ) const>(&RWStepGeom_RWConic::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWConic::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Conic> &  ) const) static_cast<void (RWStepGeom_RWConic::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Conic> &  ) const>(&RWStepGeom_RWConic::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWConic::*)( const opencascade::handle<StepGeom_Conic> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWConic::*)( const opencascade::handle<StepGeom_Conic> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWConic::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWConicalSurface , shared_ptr<RWStepGeom_RWConicalSurface>  >>(m.attr("RWStepGeom_RWConicalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWConicalSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_ConicalSurface> &  ) const) static_cast<void (RWStepGeom_RWConicalSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_ConicalSurface> &  ) const>(&RWStepGeom_RWConicalSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWConicalSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_ConicalSurface> &  ) const) static_cast<void (RWStepGeom_RWConicalSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_ConicalSurface> &  ) const>(&RWStepGeom_RWConicalSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWConicalSurface::*)( const opencascade::handle<StepGeom_ConicalSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWConicalSurface::*)( const opencascade::handle<StepGeom_ConicalSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWConicalSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCurve , shared_ptr<RWStepGeom_RWCurve>  >>(m.attr("RWStepGeom_RWCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Curve> &  ) const) static_cast<void (RWStepGeom_RWCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Curve> &  ) const>(&RWStepGeom_RWCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Curve> &  ) const) static_cast<void (RWStepGeom_RWCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Curve> &  ) const>(&RWStepGeom_RWCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCurveBoundedSurface , shared_ptr<RWStepGeom_RWCurveBoundedSurface>  >>(m.attr("RWStepGeom_RWCurveBoundedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCurveBoundedSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CurveBoundedSurface> &  ) const) static_cast<void (RWStepGeom_RWCurveBoundedSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CurveBoundedSurface> &  ) const>(&RWStepGeom_RWCurveBoundedSurface::ReadStep),
             R"#(Reads CurveBoundedSurface)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCurveBoundedSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CurveBoundedSurface> &  ) const) static_cast<void (RWStepGeom_RWCurveBoundedSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CurveBoundedSurface> &  ) const>(&RWStepGeom_RWCurveBoundedSurface::WriteStep),
             R"#(Writes CurveBoundedSurface)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWCurveBoundedSurface::*)( const opencascade::handle<StepGeom_CurveBoundedSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWCurveBoundedSurface::*)( const opencascade::handle<StepGeom_CurveBoundedSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWCurveBoundedSurface::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCurveReplica , shared_ptr<RWStepGeom_RWCurveReplica>  >>(m.attr("RWStepGeom_RWCurveReplica"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCurveReplica::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CurveReplica> &  ) const) static_cast<void (RWStepGeom_RWCurveReplica::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CurveReplica> &  ) const>(&RWStepGeom_RWCurveReplica::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCurveReplica::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CurveReplica> &  ) const) static_cast<void (RWStepGeom_RWCurveReplica::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CurveReplica> &  ) const>(&RWStepGeom_RWCurveReplica::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWCurveReplica::*)( const opencascade::handle<StepGeom_CurveReplica> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWCurveReplica::*)( const opencascade::handle<StepGeom_CurveReplica> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWCurveReplica::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCylindricalSurface , shared_ptr<RWStepGeom_RWCylindricalSurface>  >>(m.attr("RWStepGeom_RWCylindricalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWCylindricalSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CylindricalSurface> &  ) const) static_cast<void (RWStepGeom_RWCylindricalSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_CylindricalSurface> &  ) const>(&RWStepGeom_RWCylindricalSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWCylindricalSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CylindricalSurface> &  ) const) static_cast<void (RWStepGeom_RWCylindricalSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_CylindricalSurface> &  ) const>(&RWStepGeom_RWCylindricalSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWCylindricalSurface::*)( const opencascade::handle<StepGeom_CylindricalSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWCylindricalSurface::*)( const opencascade::handle<StepGeom_CylindricalSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWCylindricalSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWDegeneratePcurve , shared_ptr<RWStepGeom_RWDegeneratePcurve>  >>(m.attr("RWStepGeom_RWDegeneratePcurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWDegeneratePcurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_DegeneratePcurve> &  ) const) static_cast<void (RWStepGeom_RWDegeneratePcurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_DegeneratePcurve> &  ) const>(&RWStepGeom_RWDegeneratePcurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWDegeneratePcurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_DegeneratePcurve> &  ) const) static_cast<void (RWStepGeom_RWDegeneratePcurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_DegeneratePcurve> &  ) const>(&RWStepGeom_RWDegeneratePcurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWDegeneratePcurve::*)( const opencascade::handle<StepGeom_DegeneratePcurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWDegeneratePcurve::*)( const opencascade::handle<StepGeom_DegeneratePcurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWDegeneratePcurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWDegenerateToroidalSurface , shared_ptr<RWStepGeom_RWDegenerateToroidalSurface>  >>(m.attr("RWStepGeom_RWDegenerateToroidalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWDegenerateToroidalSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_DegenerateToroidalSurface> &  ) const) static_cast<void (RWStepGeom_RWDegenerateToroidalSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_DegenerateToroidalSurface> &  ) const>(&RWStepGeom_RWDegenerateToroidalSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWDegenerateToroidalSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_DegenerateToroidalSurface> &  ) const) static_cast<void (RWStepGeom_RWDegenerateToroidalSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_DegenerateToroidalSurface> &  ) const>(&RWStepGeom_RWDegenerateToroidalSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWDegenerateToroidalSurface::*)( const opencascade::handle<StepGeom_DegenerateToroidalSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWDegenerateToroidalSurface::*)( const opencascade::handle<StepGeom_DegenerateToroidalSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWDegenerateToroidalSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWDirection , shared_ptr<RWStepGeom_RWDirection>  >>(m.attr("RWStepGeom_RWDirection"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWDirection::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Direction> &  ) const) static_cast<void (RWStepGeom_RWDirection::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Direction> &  ) const>(&RWStepGeom_RWDirection::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWDirection::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Direction> &  ) const) static_cast<void (RWStepGeom_RWDirection::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Direction> &  ) const>(&RWStepGeom_RWDirection::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Check",
             (void (RWStepGeom_RWDirection::*)( const opencascade::handle<StepGeom_Direction> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepGeom_RWDirection::*)( const opencascade::handle<StepGeom_Direction> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepGeom_RWDirection::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWElementarySurface , shared_ptr<RWStepGeom_RWElementarySurface>  >>(m.attr("RWStepGeom_RWElementarySurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWElementarySurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_ElementarySurface> &  ) const) static_cast<void (RWStepGeom_RWElementarySurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_ElementarySurface> &  ) const>(&RWStepGeom_RWElementarySurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWElementarySurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_ElementarySurface> &  ) const) static_cast<void (RWStepGeom_RWElementarySurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_ElementarySurface> &  ) const>(&RWStepGeom_RWElementarySurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWElementarySurface::*)( const opencascade::handle<StepGeom_ElementarySurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWElementarySurface::*)( const opencascade::handle<StepGeom_ElementarySurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWElementarySurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWEllipse , shared_ptr<RWStepGeom_RWEllipse>  >>(m.attr("RWStepGeom_RWEllipse"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWEllipse::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Ellipse> &  ) const) static_cast<void (RWStepGeom_RWEllipse::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Ellipse> &  ) const>(&RWStepGeom_RWEllipse::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWEllipse::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Ellipse> &  ) const) static_cast<void (RWStepGeom_RWEllipse::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Ellipse> &  ) const>(&RWStepGeom_RWEllipse::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWEllipse::*)( const opencascade::handle<StepGeom_Ellipse> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWEllipse::*)( const opencascade::handle<StepGeom_Ellipse> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWEllipse::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepGeom_RWEllipse::*)( const opencascade::handle<StepGeom_Ellipse> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepGeom_RWEllipse::*)( const opencascade::handle<StepGeom_Ellipse> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepGeom_RWEllipse::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWEvaluatedDegeneratePcurve , shared_ptr<RWStepGeom_RWEvaluatedDegeneratePcurve>  >>(m.attr("RWStepGeom_RWEvaluatedDegeneratePcurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWEvaluatedDegeneratePcurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_EvaluatedDegeneratePcurve> &  ) const) static_cast<void (RWStepGeom_RWEvaluatedDegeneratePcurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_EvaluatedDegeneratePcurve> &  ) const>(&RWStepGeom_RWEvaluatedDegeneratePcurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWEvaluatedDegeneratePcurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_EvaluatedDegeneratePcurve> &  ) const) static_cast<void (RWStepGeom_RWEvaluatedDegeneratePcurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_EvaluatedDegeneratePcurve> &  ) const>(&RWStepGeom_RWEvaluatedDegeneratePcurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWEvaluatedDegeneratePcurve::*)( const opencascade::handle<StepGeom_EvaluatedDegeneratePcurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWEvaluatedDegeneratePcurve::*)( const opencascade::handle<StepGeom_EvaluatedDegeneratePcurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWEvaluatedDegeneratePcurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx , shared_ptr<RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx>  >>(m.attr("RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> &  ) const) static_cast<void (RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> &  ) const>(&RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> &  ) const) static_cast<void (RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> &  ) const>(&RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::*)( const opencascade::handle<StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWGeometricRepresentationContext , shared_ptr<RWStepGeom_RWGeometricRepresentationContext>  >>(m.attr("RWStepGeom_RWGeometricRepresentationContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWGeometricRepresentationContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_GeometricRepresentationContext> &  ) const) static_cast<void (RWStepGeom_RWGeometricRepresentationContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_GeometricRepresentationContext> &  ) const>(&RWStepGeom_RWGeometricRepresentationContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWGeometricRepresentationContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_GeometricRepresentationContext> &  ) const) static_cast<void (RWStepGeom_RWGeometricRepresentationContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_GeometricRepresentationContext> &  ) const>(&RWStepGeom_RWGeometricRepresentationContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext , shared_ptr<RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext>  >>(m.attr("RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext> &  ) const) static_cast<void (RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext> &  ) const>(&RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext> &  ) const) static_cast<void (RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext> &  ) const>(&RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext::*)( const opencascade::handle<StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext , shared_ptr<RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext>  >>(m.attr("RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext> &  ) const) static_cast<void (RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext> &  ) const>(&RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext> &  ) const) static_cast<void (RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext> &  ) const>(&RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext::*)( const opencascade::handle<StepGeom_GeometricRepresentationContextAndParametricRepresentationContext> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWGeometricRepresentationItem , shared_ptr<RWStepGeom_RWGeometricRepresentationItem>  >>(m.attr("RWStepGeom_RWGeometricRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWGeometricRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_GeometricRepresentationItem> &  ) const) static_cast<void (RWStepGeom_RWGeometricRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_GeometricRepresentationItem> &  ) const>(&RWStepGeom_RWGeometricRepresentationItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWGeometricRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_GeometricRepresentationItem> &  ) const) static_cast<void (RWStepGeom_RWGeometricRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_GeometricRepresentationItem> &  ) const>(&RWStepGeom_RWGeometricRepresentationItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWHyperbola , shared_ptr<RWStepGeom_RWHyperbola>  >>(m.attr("RWStepGeom_RWHyperbola"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWHyperbola::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Hyperbola> &  ) const) static_cast<void (RWStepGeom_RWHyperbola::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Hyperbola> &  ) const>(&RWStepGeom_RWHyperbola::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWHyperbola::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Hyperbola> &  ) const) static_cast<void (RWStepGeom_RWHyperbola::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Hyperbola> &  ) const>(&RWStepGeom_RWHyperbola::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWHyperbola::*)( const opencascade::handle<StepGeom_Hyperbola> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWHyperbola::*)( const opencascade::handle<StepGeom_Hyperbola> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWHyperbola::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWIntersectionCurve , shared_ptr<RWStepGeom_RWIntersectionCurve>  >>(m.attr("RWStepGeom_RWIntersectionCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWIntersectionCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_IntersectionCurve> &  ) const) static_cast<void (RWStepGeom_RWIntersectionCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_IntersectionCurve> &  ) const>(&RWStepGeom_RWIntersectionCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWIntersectionCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_IntersectionCurve> &  ) const) static_cast<void (RWStepGeom_RWIntersectionCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_IntersectionCurve> &  ) const>(&RWStepGeom_RWIntersectionCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWIntersectionCurve::*)( const opencascade::handle<StepGeom_IntersectionCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWIntersectionCurve::*)( const opencascade::handle<StepGeom_IntersectionCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWIntersectionCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWLine , shared_ptr<RWStepGeom_RWLine>  >>(m.attr("RWStepGeom_RWLine"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWLine::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Line> &  ) const) static_cast<void (RWStepGeom_RWLine::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Line> &  ) const>(&RWStepGeom_RWLine::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWLine::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Line> &  ) const) static_cast<void (RWStepGeom_RWLine::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Line> &  ) const>(&RWStepGeom_RWLine::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWLine::*)( const opencascade::handle<StepGeom_Line> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWLine::*)( const opencascade::handle<StepGeom_Line> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWLine::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWOffsetCurve3d , shared_ptr<RWStepGeom_RWOffsetCurve3d>  >>(m.attr("RWStepGeom_RWOffsetCurve3d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWOffsetCurve3d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_OffsetCurve3d> &  ) const) static_cast<void (RWStepGeom_RWOffsetCurve3d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_OffsetCurve3d> &  ) const>(&RWStepGeom_RWOffsetCurve3d::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWOffsetCurve3d::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_OffsetCurve3d> &  ) const) static_cast<void (RWStepGeom_RWOffsetCurve3d::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_OffsetCurve3d> &  ) const>(&RWStepGeom_RWOffsetCurve3d::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWOffsetCurve3d::*)( const opencascade::handle<StepGeom_OffsetCurve3d> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWOffsetCurve3d::*)( const opencascade::handle<StepGeom_OffsetCurve3d> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWOffsetCurve3d::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWOffsetSurface , shared_ptr<RWStepGeom_RWOffsetSurface>  >>(m.attr("RWStepGeom_RWOffsetSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWOffsetSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_OffsetSurface> &  ) const) static_cast<void (RWStepGeom_RWOffsetSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_OffsetSurface> &  ) const>(&RWStepGeom_RWOffsetSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWOffsetSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_OffsetSurface> &  ) const) static_cast<void (RWStepGeom_RWOffsetSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_OffsetSurface> &  ) const>(&RWStepGeom_RWOffsetSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWOffsetSurface::*)( const opencascade::handle<StepGeom_OffsetSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWOffsetSurface::*)( const opencascade::handle<StepGeom_OffsetSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWOffsetSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWOrientedSurface , shared_ptr<RWStepGeom_RWOrientedSurface>  >>(m.attr("RWStepGeom_RWOrientedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWOrientedSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_OrientedSurface> &  ) const) static_cast<void (RWStepGeom_RWOrientedSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_OrientedSurface> &  ) const>(&RWStepGeom_RWOrientedSurface::ReadStep),
             R"#(Reads OrientedSurface)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWOrientedSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_OrientedSurface> &  ) const) static_cast<void (RWStepGeom_RWOrientedSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_OrientedSurface> &  ) const>(&RWStepGeom_RWOrientedSurface::WriteStep),
             R"#(Writes OrientedSurface)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWOrientedSurface::*)( const opencascade::handle<StepGeom_OrientedSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWOrientedSurface::*)( const opencascade::handle<StepGeom_OrientedSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWOrientedSurface::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWOuterBoundaryCurve , shared_ptr<RWStepGeom_RWOuterBoundaryCurve>  >>(m.attr("RWStepGeom_RWOuterBoundaryCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWOuterBoundaryCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_OuterBoundaryCurve> &  ) const) static_cast<void (RWStepGeom_RWOuterBoundaryCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_OuterBoundaryCurve> &  ) const>(&RWStepGeom_RWOuterBoundaryCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWOuterBoundaryCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_OuterBoundaryCurve> &  ) const) static_cast<void (RWStepGeom_RWOuterBoundaryCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_OuterBoundaryCurve> &  ) const>(&RWStepGeom_RWOuterBoundaryCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWOuterBoundaryCurve::*)( const opencascade::handle<StepGeom_OuterBoundaryCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWOuterBoundaryCurve::*)( const opencascade::handle<StepGeom_OuterBoundaryCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWOuterBoundaryCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWParabola , shared_ptr<RWStepGeom_RWParabola>  >>(m.attr("RWStepGeom_RWParabola"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWParabola::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Parabola> &  ) const) static_cast<void (RWStepGeom_RWParabola::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Parabola> &  ) const>(&RWStepGeom_RWParabola::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWParabola::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Parabola> &  ) const) static_cast<void (RWStepGeom_RWParabola::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Parabola> &  ) const>(&RWStepGeom_RWParabola::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWParabola::*)( const opencascade::handle<StepGeom_Parabola> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWParabola::*)( const opencascade::handle<StepGeom_Parabola> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWParabola::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPcurve , shared_ptr<RWStepGeom_RWPcurve>  >>(m.attr("RWStepGeom_RWPcurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWPcurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Pcurve> &  ) const) static_cast<void (RWStepGeom_RWPcurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Pcurve> &  ) const>(&RWStepGeom_RWPcurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWPcurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Pcurve> &  ) const) static_cast<void (RWStepGeom_RWPcurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Pcurve> &  ) const>(&RWStepGeom_RWPcurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWPcurve::*)( const opencascade::handle<StepGeom_Pcurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWPcurve::*)( const opencascade::handle<StepGeom_Pcurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWPcurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPlacement , shared_ptr<RWStepGeom_RWPlacement>  >>(m.attr("RWStepGeom_RWPlacement"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWPlacement::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Placement> &  ) const) static_cast<void (RWStepGeom_RWPlacement::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Placement> &  ) const>(&RWStepGeom_RWPlacement::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWPlacement::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Placement> &  ) const) static_cast<void (RWStepGeom_RWPlacement::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Placement> &  ) const>(&RWStepGeom_RWPlacement::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWPlacement::*)( const opencascade::handle<StepGeom_Placement> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWPlacement::*)( const opencascade::handle<StepGeom_Placement> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWPlacement::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPlane , shared_ptr<RWStepGeom_RWPlane>  >>(m.attr("RWStepGeom_RWPlane"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWPlane::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Plane> &  ) const) static_cast<void (RWStepGeom_RWPlane::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Plane> &  ) const>(&RWStepGeom_RWPlane::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWPlane::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Plane> &  ) const) static_cast<void (RWStepGeom_RWPlane::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Plane> &  ) const>(&RWStepGeom_RWPlane::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWPlane::*)( const opencascade::handle<StepGeom_Plane> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWPlane::*)( const opencascade::handle<StepGeom_Plane> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWPlane::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPoint , shared_ptr<RWStepGeom_RWPoint>  >>(m.attr("RWStepGeom_RWPoint"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWPoint::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Point> &  ) const) static_cast<void (RWStepGeom_RWPoint::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Point> &  ) const>(&RWStepGeom_RWPoint::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWPoint::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Point> &  ) const) static_cast<void (RWStepGeom_RWPoint::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Point> &  ) const>(&RWStepGeom_RWPoint::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPointOnCurve , shared_ptr<RWStepGeom_RWPointOnCurve>  >>(m.attr("RWStepGeom_RWPointOnCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWPointOnCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_PointOnCurve> &  ) const) static_cast<void (RWStepGeom_RWPointOnCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_PointOnCurve> &  ) const>(&RWStepGeom_RWPointOnCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWPointOnCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_PointOnCurve> &  ) const) static_cast<void (RWStepGeom_RWPointOnCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_PointOnCurve> &  ) const>(&RWStepGeom_RWPointOnCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWPointOnCurve::*)( const opencascade::handle<StepGeom_PointOnCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWPointOnCurve::*)( const opencascade::handle<StepGeom_PointOnCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWPointOnCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPointOnSurface , shared_ptr<RWStepGeom_RWPointOnSurface>  >>(m.attr("RWStepGeom_RWPointOnSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWPointOnSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_PointOnSurface> &  ) const) static_cast<void (RWStepGeom_RWPointOnSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_PointOnSurface> &  ) const>(&RWStepGeom_RWPointOnSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWPointOnSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_PointOnSurface> &  ) const) static_cast<void (RWStepGeom_RWPointOnSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_PointOnSurface> &  ) const>(&RWStepGeom_RWPointOnSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWPointOnSurface::*)( const opencascade::handle<StepGeom_PointOnSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWPointOnSurface::*)( const opencascade::handle<StepGeom_PointOnSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWPointOnSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPointReplica , shared_ptr<RWStepGeom_RWPointReplica>  >>(m.attr("RWStepGeom_RWPointReplica"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWPointReplica::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_PointReplica> &  ) const) static_cast<void (RWStepGeom_RWPointReplica::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_PointReplica> &  ) const>(&RWStepGeom_RWPointReplica::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWPointReplica::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_PointReplica> &  ) const) static_cast<void (RWStepGeom_RWPointReplica::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_PointReplica> &  ) const>(&RWStepGeom_RWPointReplica::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWPointReplica::*)( const opencascade::handle<StepGeom_PointReplica> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWPointReplica::*)( const opencascade::handle<StepGeom_PointReplica> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWPointReplica::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPolyline , shared_ptr<RWStepGeom_RWPolyline>  >>(m.attr("RWStepGeom_RWPolyline"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWPolyline::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Polyline> &  ) const) static_cast<void (RWStepGeom_RWPolyline::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Polyline> &  ) const>(&RWStepGeom_RWPolyline::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWPolyline::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Polyline> &  ) const) static_cast<void (RWStepGeom_RWPolyline::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Polyline> &  ) const>(&RWStepGeom_RWPolyline::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWPolyline::*)( const opencascade::handle<StepGeom_Polyline> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWPolyline::*)( const opencascade::handle<StepGeom_Polyline> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWPolyline::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWQuasiUniformCurve , shared_ptr<RWStepGeom_RWQuasiUniformCurve>  >>(m.attr("RWStepGeom_RWQuasiUniformCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWQuasiUniformCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_QuasiUniformCurve> &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_QuasiUniformCurve> &  ) const>(&RWStepGeom_RWQuasiUniformCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWQuasiUniformCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_QuasiUniformCurve> &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_QuasiUniformCurve> &  ) const>(&RWStepGeom_RWQuasiUniformCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWQuasiUniformCurve::*)( const opencascade::handle<StepGeom_QuasiUniformCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformCurve::*)( const opencascade::handle<StepGeom_QuasiUniformCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWQuasiUniformCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve>  >>(m.attr("RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_QuasiUniformCurveAndRationalBSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_QuasiUniformCurveAndRationalBSplineCurve> &  ) const>(&RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_QuasiUniformCurveAndRationalBSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_QuasiUniformCurveAndRationalBSplineCurve> &  ) const>(&RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_QuasiUniformCurveAndRationalBSplineCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_QuasiUniformCurveAndRationalBSplineCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWQuasiUniformSurface , shared_ptr<RWStepGeom_RWQuasiUniformSurface>  >>(m.attr("RWStepGeom_RWQuasiUniformSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWQuasiUniformSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_QuasiUniformSurface> &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_QuasiUniformSurface> &  ) const>(&RWStepGeom_RWQuasiUniformSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWQuasiUniformSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_QuasiUniformSurface> &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_QuasiUniformSurface> &  ) const>(&RWStepGeom_RWQuasiUniformSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWQuasiUniformSurface::*)( const opencascade::handle<StepGeom_QuasiUniformSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformSurface::*)( const opencascade::handle<StepGeom_QuasiUniformSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWQuasiUniformSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface>  >>(m.attr("RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface> &  ) const>(&RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface> &  ) const>(&RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWRationalBSplineCurve , shared_ptr<RWStepGeom_RWRationalBSplineCurve>  >>(m.attr("RWStepGeom_RWRationalBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWRationalBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_RationalBSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWRationalBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_RationalBSplineCurve> &  ) const>(&RWStepGeom_RWRationalBSplineCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWRationalBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_RationalBSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWRationalBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_RationalBSplineCurve> &  ) const>(&RWStepGeom_RWRationalBSplineCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWRationalBSplineCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepGeom_RWRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepGeom_RWRationalBSplineCurve::*)( const opencascade::handle<StepGeom_RationalBSplineCurve> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepGeom_RWRationalBSplineCurve::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWRationalBSplineSurface , shared_ptr<RWStepGeom_RWRationalBSplineSurface>  >>(m.attr("RWStepGeom_RWRationalBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWRationalBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_RationalBSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWRationalBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_RationalBSplineSurface> &  ) const>(&RWStepGeom_RWRationalBSplineSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWRationalBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_RationalBSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWRationalBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_RationalBSplineSurface> &  ) const>(&RWStepGeom_RWRationalBSplineSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWRationalBSplineSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepGeom_RWRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepGeom_RWRationalBSplineSurface::*)( const opencascade::handle<StepGeom_RationalBSplineSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepGeom_RWRationalBSplineSurface::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWRectangularCompositeSurface , shared_ptr<RWStepGeom_RWRectangularCompositeSurface>  >>(m.attr("RWStepGeom_RWRectangularCompositeSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWRectangularCompositeSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_RectangularCompositeSurface> &  ) const) static_cast<void (RWStepGeom_RWRectangularCompositeSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_RectangularCompositeSurface> &  ) const>(&RWStepGeom_RWRectangularCompositeSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWRectangularCompositeSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_RectangularCompositeSurface> &  ) const) static_cast<void (RWStepGeom_RWRectangularCompositeSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_RectangularCompositeSurface> &  ) const>(&RWStepGeom_RWRectangularCompositeSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWRectangularCompositeSurface::*)( const opencascade::handle<StepGeom_RectangularCompositeSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWRectangularCompositeSurface::*)( const opencascade::handle<StepGeom_RectangularCompositeSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWRectangularCompositeSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWRectangularTrimmedSurface , shared_ptr<RWStepGeom_RWRectangularTrimmedSurface>  >>(m.attr("RWStepGeom_RWRectangularTrimmedSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWRectangularTrimmedSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_RectangularTrimmedSurface> &  ) const) static_cast<void (RWStepGeom_RWRectangularTrimmedSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_RectangularTrimmedSurface> &  ) const>(&RWStepGeom_RWRectangularTrimmedSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWRectangularTrimmedSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_RectangularTrimmedSurface> &  ) const) static_cast<void (RWStepGeom_RWRectangularTrimmedSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_RectangularTrimmedSurface> &  ) const>(&RWStepGeom_RWRectangularTrimmedSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWRectangularTrimmedSurface::*)( const opencascade::handle<StepGeom_RectangularTrimmedSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWRectangularTrimmedSurface::*)( const opencascade::handle<StepGeom_RectangularTrimmedSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWRectangularTrimmedSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWReparametrisedCompositeCurveSegment , shared_ptr<RWStepGeom_RWReparametrisedCompositeCurveSegment>  >>(m.attr("RWStepGeom_RWReparametrisedCompositeCurveSegment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWReparametrisedCompositeCurveSegment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_ReparametrisedCompositeCurveSegment> &  ) const) static_cast<void (RWStepGeom_RWReparametrisedCompositeCurveSegment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_ReparametrisedCompositeCurveSegment> &  ) const>(&RWStepGeom_RWReparametrisedCompositeCurveSegment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWReparametrisedCompositeCurveSegment::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_ReparametrisedCompositeCurveSegment> &  ) const) static_cast<void (RWStepGeom_RWReparametrisedCompositeCurveSegment::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_ReparametrisedCompositeCurveSegment> &  ) const>(&RWStepGeom_RWReparametrisedCompositeCurveSegment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWReparametrisedCompositeCurveSegment::*)( const opencascade::handle<StepGeom_ReparametrisedCompositeCurveSegment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWReparametrisedCompositeCurveSegment::*)( const opencascade::handle<StepGeom_ReparametrisedCompositeCurveSegment> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWReparametrisedCompositeCurveSegment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSeamCurve , shared_ptr<RWStepGeom_RWSeamCurve>  >>(m.attr("RWStepGeom_RWSeamCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWSeamCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SeamCurve> &  ) const) static_cast<void (RWStepGeom_RWSeamCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SeamCurve> &  ) const>(&RWStepGeom_RWSeamCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWSeamCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SeamCurve> &  ) const) static_cast<void (RWStepGeom_RWSeamCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SeamCurve> &  ) const>(&RWStepGeom_RWSeamCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWSeamCurve::*)( const opencascade::handle<StepGeom_SeamCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWSeamCurve::*)( const opencascade::handle<StepGeom_SeamCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWSeamCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSphericalSurface , shared_ptr<RWStepGeom_RWSphericalSurface>  >>(m.attr("RWStepGeom_RWSphericalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWSphericalSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SphericalSurface> &  ) const) static_cast<void (RWStepGeom_RWSphericalSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SphericalSurface> &  ) const>(&RWStepGeom_RWSphericalSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWSphericalSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SphericalSurface> &  ) const) static_cast<void (RWStepGeom_RWSphericalSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SphericalSurface> &  ) const>(&RWStepGeom_RWSphericalSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWSphericalSurface::*)( const opencascade::handle<StepGeom_SphericalSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWSphericalSurface::*)( const opencascade::handle<StepGeom_SphericalSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWSphericalSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurface , shared_ptr<RWStepGeom_RWSurface>  >>(m.attr("RWStepGeom_RWSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Surface> &  ) const) static_cast<void (RWStepGeom_RWSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Surface> &  ) const>(&RWStepGeom_RWSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Surface> &  ) const) static_cast<void (RWStepGeom_RWSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Surface> &  ) const>(&RWStepGeom_RWSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfaceCurve , shared_ptr<RWStepGeom_RWSurfaceCurve>  >>(m.attr("RWStepGeom_RWSurfaceCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWSurfaceCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfaceCurve> &  ) const) static_cast<void (RWStepGeom_RWSurfaceCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfaceCurve> &  ) const>(&RWStepGeom_RWSurfaceCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWSurfaceCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfaceCurve> &  ) const) static_cast<void (RWStepGeom_RWSurfaceCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfaceCurve> &  ) const>(&RWStepGeom_RWSurfaceCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWSurfaceCurve::*)( const opencascade::handle<StepGeom_SurfaceCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWSurfaceCurve::*)( const opencascade::handle<StepGeom_SurfaceCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWSurfaceCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfaceCurveAndBoundedCurve , shared_ptr<RWStepGeom_RWSurfaceCurveAndBoundedCurve>  >>(m.attr("RWStepGeom_RWSurfaceCurveAndBoundedCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWSurfaceCurveAndBoundedCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfaceCurveAndBoundedCurve> &  ) const) static_cast<void (RWStepGeom_RWSurfaceCurveAndBoundedCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfaceCurveAndBoundedCurve> &  ) const>(&RWStepGeom_RWSurfaceCurveAndBoundedCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWSurfaceCurveAndBoundedCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfaceCurveAndBoundedCurve> &  ) const) static_cast<void (RWStepGeom_RWSurfaceCurveAndBoundedCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfaceCurveAndBoundedCurve> &  ) const>(&RWStepGeom_RWSurfaceCurveAndBoundedCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWSurfaceCurveAndBoundedCurve::*)( const opencascade::handle<StepGeom_SurfaceCurveAndBoundedCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWSurfaceCurveAndBoundedCurve::*)( const opencascade::handle<StepGeom_SurfaceCurveAndBoundedCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWSurfaceCurveAndBoundedCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfaceOfLinearExtrusion , shared_ptr<RWStepGeom_RWSurfaceOfLinearExtrusion>  >>(m.attr("RWStepGeom_RWSurfaceOfLinearExtrusion"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWSurfaceOfLinearExtrusion::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> &  ) const) static_cast<void (RWStepGeom_RWSurfaceOfLinearExtrusion::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> &  ) const>(&RWStepGeom_RWSurfaceOfLinearExtrusion::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWSurfaceOfLinearExtrusion::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> &  ) const) static_cast<void (RWStepGeom_RWSurfaceOfLinearExtrusion::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> &  ) const>(&RWStepGeom_RWSurfaceOfLinearExtrusion::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWSurfaceOfLinearExtrusion::*)( const opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWSurfaceOfLinearExtrusion::*)( const opencascade::handle<StepGeom_SurfaceOfLinearExtrusion> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWSurfaceOfLinearExtrusion::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfaceOfRevolution , shared_ptr<RWStepGeom_RWSurfaceOfRevolution>  >>(m.attr("RWStepGeom_RWSurfaceOfRevolution"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWSurfaceOfRevolution::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfaceOfRevolution> &  ) const) static_cast<void (RWStepGeom_RWSurfaceOfRevolution::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfaceOfRevolution> &  ) const>(&RWStepGeom_RWSurfaceOfRevolution::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWSurfaceOfRevolution::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfaceOfRevolution> &  ) const) static_cast<void (RWStepGeom_RWSurfaceOfRevolution::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfaceOfRevolution> &  ) const>(&RWStepGeom_RWSurfaceOfRevolution::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWSurfaceOfRevolution::*)( const opencascade::handle<StepGeom_SurfaceOfRevolution> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWSurfaceOfRevolution::*)( const opencascade::handle<StepGeom_SurfaceOfRevolution> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWSurfaceOfRevolution::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfacePatch , shared_ptr<RWStepGeom_RWSurfacePatch>  >>(m.attr("RWStepGeom_RWSurfacePatch"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWSurfacePatch::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfacePatch> &  ) const) static_cast<void (RWStepGeom_RWSurfacePatch::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfacePatch> &  ) const>(&RWStepGeom_RWSurfacePatch::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWSurfacePatch::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfacePatch> &  ) const) static_cast<void (RWStepGeom_RWSurfacePatch::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfacePatch> &  ) const>(&RWStepGeom_RWSurfacePatch::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWSurfacePatch::*)( const opencascade::handle<StepGeom_SurfacePatch> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWSurfacePatch::*)( const opencascade::handle<StepGeom_SurfacePatch> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWSurfacePatch::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfaceReplica , shared_ptr<RWStepGeom_RWSurfaceReplica>  >>(m.attr("RWStepGeom_RWSurfaceReplica"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWSurfaceReplica::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfaceReplica> &  ) const) static_cast<void (RWStepGeom_RWSurfaceReplica::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SurfaceReplica> &  ) const>(&RWStepGeom_RWSurfaceReplica::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWSurfaceReplica::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfaceReplica> &  ) const) static_cast<void (RWStepGeom_RWSurfaceReplica::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SurfaceReplica> &  ) const>(&RWStepGeom_RWSurfaceReplica::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWSurfaceReplica::*)( const opencascade::handle<StepGeom_SurfaceReplica> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWSurfaceReplica::*)( const opencascade::handle<StepGeom_SurfaceReplica> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWSurfaceReplica::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSweptSurface , shared_ptr<RWStepGeom_RWSweptSurface>  >>(m.attr("RWStepGeom_RWSweptSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWSweptSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SweptSurface> &  ) const) static_cast<void (RWStepGeom_RWSweptSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_SweptSurface> &  ) const>(&RWStepGeom_RWSweptSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWSweptSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SweptSurface> &  ) const) static_cast<void (RWStepGeom_RWSweptSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_SweptSurface> &  ) const>(&RWStepGeom_RWSweptSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWSweptSurface::*)( const opencascade::handle<StepGeom_SweptSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWSweptSurface::*)( const opencascade::handle<StepGeom_SweptSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWSweptSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWToroidalSurface , shared_ptr<RWStepGeom_RWToroidalSurface>  >>(m.attr("RWStepGeom_RWToroidalSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWToroidalSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_ToroidalSurface> &  ) const) static_cast<void (RWStepGeom_RWToroidalSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_ToroidalSurface> &  ) const>(&RWStepGeom_RWToroidalSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWToroidalSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_ToroidalSurface> &  ) const) static_cast<void (RWStepGeom_RWToroidalSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_ToroidalSurface> &  ) const>(&RWStepGeom_RWToroidalSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWToroidalSurface::*)( const opencascade::handle<StepGeom_ToroidalSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWToroidalSurface::*)( const opencascade::handle<StepGeom_ToroidalSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWToroidalSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepGeom_RWToroidalSurface::*)( const opencascade::handle<StepGeom_ToroidalSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepGeom_RWToroidalSurface::*)( const opencascade::handle<StepGeom_ToroidalSurface> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepGeom_RWToroidalSurface::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWTrimmedCurve , shared_ptr<RWStepGeom_RWTrimmedCurve>  >>(m.attr("RWStepGeom_RWTrimmedCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWTrimmedCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_TrimmedCurve> &  ) const) static_cast<void (RWStepGeom_RWTrimmedCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_TrimmedCurve> &  ) const>(&RWStepGeom_RWTrimmedCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWTrimmedCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_TrimmedCurve> &  ) const) static_cast<void (RWStepGeom_RWTrimmedCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_TrimmedCurve> &  ) const>(&RWStepGeom_RWTrimmedCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWTrimmedCurve::*)( const opencascade::handle<StepGeom_TrimmedCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWTrimmedCurve::*)( const opencascade::handle<StepGeom_TrimmedCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWTrimmedCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWUniformCurve , shared_ptr<RWStepGeom_RWUniformCurve>  >>(m.attr("RWStepGeom_RWUniformCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWUniformCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_UniformCurve> &  ) const) static_cast<void (RWStepGeom_RWUniformCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_UniformCurve> &  ) const>(&RWStepGeom_RWUniformCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWUniformCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_UniformCurve> &  ) const) static_cast<void (RWStepGeom_RWUniformCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_UniformCurve> &  ) const>(&RWStepGeom_RWUniformCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWUniformCurve::*)( const opencascade::handle<StepGeom_UniformCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWUniformCurve::*)( const opencascade::handle<StepGeom_UniformCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWUniformCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWUniformCurveAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWUniformCurveAndRationalBSplineCurve>  >>(m.attr("RWStepGeom_RWUniformCurveAndRationalBSplineCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_UniformCurveAndRationalBSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_UniformCurveAndRationalBSplineCurve> &  ) const>(&RWStepGeom_RWUniformCurveAndRationalBSplineCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWUniformCurveAndRationalBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_UniformCurveAndRationalBSplineCurve> &  ) const) static_cast<void (RWStepGeom_RWUniformCurveAndRationalBSplineCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_UniformCurveAndRationalBSplineCurve> &  ) const>(&RWStepGeom_RWUniformCurveAndRationalBSplineCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_UniformCurveAndRationalBSplineCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWUniformCurveAndRationalBSplineCurve::*)( const opencascade::handle<StepGeom_UniformCurveAndRationalBSplineCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWUniformCurveAndRationalBSplineCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWUniformSurface , shared_ptr<RWStepGeom_RWUniformSurface>  >>(m.attr("RWStepGeom_RWUniformSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWUniformSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_UniformSurface> &  ) const) static_cast<void (RWStepGeom_RWUniformSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_UniformSurface> &  ) const>(&RWStepGeom_RWUniformSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWUniformSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_UniformSurface> &  ) const) static_cast<void (RWStepGeom_RWUniformSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_UniformSurface> &  ) const>(&RWStepGeom_RWUniformSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWUniformSurface::*)( const opencascade::handle<StepGeom_UniformSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWUniformSurface::*)( const opencascade::handle<StepGeom_UniformSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWUniformSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface>  >>(m.attr("RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_UniformSurfaceAndRationalBSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_UniformSurfaceAndRationalBSplineSurface> &  ) const>(&RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_UniformSurfaceAndRationalBSplineSurface> &  ) const) static_cast<void (RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_UniformSurfaceAndRationalBSplineSurface> &  ) const>(&RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_UniformSurfaceAndRationalBSplineSurface> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface::*)( const opencascade::handle<StepGeom_UniformSurfaceAndRationalBSplineSurface> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWVector , shared_ptr<RWStepGeom_RWVector>  >>(m.attr("RWStepGeom_RWVector"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepGeom_RWVector::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Vector> &  ) const) static_cast<void (RWStepGeom_RWVector::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepGeom_Vector> &  ) const>(&RWStepGeom_RWVector::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepGeom_RWVector::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Vector> &  ) const) static_cast<void (RWStepGeom_RWVector::*)( StepData_StepWriter & ,  const opencascade::handle<StepGeom_Vector> &  ) const>(&RWStepGeom_RWVector::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepGeom_RWVector::*)( const opencascade::handle<StepGeom_Vector> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepGeom_RWVector::*)( const opencascade::handle<StepGeom_Vector> & ,  Interface_EntityIterator &  ) const>(&RWStepGeom_RWVector::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepGeom_RWVector::*)( const opencascade::handle<StepGeom_Vector> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepGeom_RWVector::*)( const opencascade::handle<StepGeom_Vector> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepGeom_RWVector::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/RWStepGeom_RWUniformCurve.hxx
// ./opencascade/RWStepGeom_RWBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWElementarySurface.hxx
// ./opencascade/RWStepGeom_RWCurve.hxx
// ./opencascade/RWStepGeom_RWPoint.hxx
// ./opencascade/RWStepGeom_RWBoundedCurve.hxx
// ./opencascade/RWStepGeom_RWQuasiUniformSurface.hxx
// ./opencascade/RWStepGeom_RWDegenerateToroidalSurface.hxx
// ./opencascade/RWStepGeom_RWSurfaceCurve.hxx
// ./opencascade/RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWUniformCurveAndRationalBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWPointOnCurve.hxx
// ./opencascade/RWStepGeom_RWRectangularCompositeSurface.hxx
// ./opencascade/RWStepGeom_RWPointReplica.hxx
// ./opencascade/RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWConic.hxx
// ./opencascade/RWStepGeom_RWEvaluatedDegeneratePcurve.hxx
// ./opencascade/RWStepGeom_RWSurface.hxx
// ./opencascade/RWStepGeom_RWAxis1Placement.hxx
// ./opencascade/RWStepGeom_RWLine.hxx
// ./opencascade/RWStepGeom_RWOffsetSurface.hxx
// ./opencascade/RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWCurveBoundedSurface.hxx
// ./opencascade/RWStepGeom_RWAxis2Placement2d.hxx
// ./opencascade/RWStepGeom_RWBSplineCurveWithKnots.hxx
// ./opencascade/RWStepGeom_RWVector.hxx
// ./opencascade/RWStepGeom_RWIntersectionCurve.hxx
// ./opencascade/RWStepGeom_RWHyperbola.hxx
// ./opencascade/RWStepGeom_RWRationalBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext.hxx
// ./opencascade/RWStepGeom_RWBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWOuterBoundaryCurve.hxx
// ./opencascade/RWStepGeom_RWBoundaryCurve.hxx
// ./opencascade/RWStepGeom_RWUniformSurface.hxx
// ./opencascade/RWStepGeom_RWBezierCurveAndRationalBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWPcurve.hxx
// ./opencascade/RWStepGeom_RWBoundedSurface.hxx
// ./opencascade/RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx
// ./opencascade/RWStepGeom_RWParabola.hxx
// ./opencascade/RWStepGeom_RWCartesianTransformationOperator.hxx
// ./opencascade/RWStepGeom_RWEllipse.hxx
// ./opencascade/RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext.hxx
// ./opencascade/RWStepGeom_RWSurfaceReplica.hxx
// ./opencascade/RWStepGeom_RWPolyline.hxx
// ./opencascade/RWStepGeom_RWCurveReplica.hxx
// ./opencascade/RWStepGeom_RWRectangularTrimmedSurface.hxx
// ./opencascade/RWStepGeom_RWCompositeCurveOnSurface.hxx
// ./opencascade/RWStepGeom_RWReparametrisedCompositeCurveSegment.hxx
// ./opencascade/RWStepGeom_RWAxis2Placement3d.hxx
// ./opencascade/RWStepGeom_RWCylindricalSurface.hxx
// ./opencascade/RWStepGeom_RWGeometricRepresentationContext.hxx
// ./opencascade/RWStepGeom_RWCompositeCurveSegment.hxx
// ./opencascade/RWStepGeom_RWCircle.hxx
// ./opencascade/RWStepGeom_RWSurfaceCurveAndBoundedCurve.hxx
// ./opencascade/RWStepGeom_RWSeamCurve.hxx
// ./opencascade/RWStepGeom_RWGeometricRepresentationItem.hxx
// ./opencascade/RWStepGeom_RWBezierCurve.hxx
// ./opencascade/RWStepGeom_RWQuasiUniformCurve.hxx
// ./opencascade/RWStepGeom_RWDegeneratePcurve.hxx
// ./opencascade/RWStepGeom_RWRationalBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWPlacement.hxx
// ./opencascade/RWStepGeom_RWBSplineSurfaceWithKnots.hxx
// ./opencascade/RWStepGeom_RWCompositeCurve.hxx
// ./opencascade/RWStepGeom_RWPlane.hxx
// ./opencascade/RWStepGeom_RWCartesianPoint.hxx
// ./opencascade/RWStepGeom_RWTrimmedCurve.hxx
// ./opencascade/RWStepGeom_RWConicalSurface.hxx
// ./opencascade/RWStepGeom_RWOffsetCurve3d.hxx
// ./opencascade/RWStepGeom_RWToroidalSurface.hxx
// ./opencascade/RWStepGeom_RWSphericalSurface.hxx
// ./opencascade/RWStepGeom_RWDirection.hxx
// ./opencascade/RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWOrientedSurface.hxx
// ./opencascade/RWStepGeom_RWSurfacePatch.hxx
// ./opencascade/RWStepGeom_RWSurfaceOfRevolution.hxx
// ./opencascade/RWStepGeom_RWSurfaceOfLinearExtrusion.hxx
// ./opencascade/RWStepGeom_RWSweptSurface.hxx
// ./opencascade/RWStepGeom_RWCartesianTransformationOperator3d.hxx
// ./opencascade/RWStepGeom_RWBezierSurface.hxx
// ./opencascade/RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWPointOnSurface.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
