
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
#include <StepGeom_SeamCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformCurveAndRationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_PointOnSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OrientedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Circle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_EvaluatedDegeneratePcurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CompositeCurveOnSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceCurveAndBoundedCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_IntersectionCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceCurve.hxx>
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
#include <StepGeom_Point.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeometricRepresentationContextAndParametricRepresentationContext.hxx>
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
#include <StepGeom_DegenerateToroidalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformCurveAndRationalBSplineCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CompositeCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_RectangularCompositeSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Polyline.hxx>
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
#include <StepGeom_CurveReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Curve.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Direction.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Surface.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Placement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_PointReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OffsetCurve3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_TrimmedCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Line.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Plane.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfacePatch.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BSplineSurface.hxx>
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
#include <StepGeom_DegeneratePcurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
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
#include <StepGeom_BoundaryCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OffsetSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_UniformSurfaceAndRationalBSplineSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface.hxx>
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
#include <StepGeom_SurfaceOfRevolution.hxx>
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
#include <StepGeom_CompositeCurveSegment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_PointOnCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Parabola.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_QuasiUniformCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_SphericalSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_BezierSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_ReparametrisedCompositeCurveSegment.hxx>
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
#include <StepGeom_BezierSurfaceAndRationalBSplineSurface.hxx>
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
#include <StepGeom_Hyperbola.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_Conic.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepGeom_OuterBoundaryCurve.hxx>
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


    static_cast<py::class_<RWStepGeom_RWAxis1Placement , shared_ptr<RWStepGeom_RWAxis1Placement> >>(m.attr("RWStepGeom_RWAxis1Placement"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWAxis2Placement2d , shared_ptr<RWStepGeom_RWAxis2Placement2d> >>(m.attr("RWStepGeom_RWAxis2Placement2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWAxis2Placement3d , shared_ptr<RWStepGeom_RWAxis2Placement3d> >>(m.attr("RWStepGeom_RWAxis2Placement3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineCurve , shared_ptr<RWStepGeom_RWBSplineCurve> >>(m.attr("RWStepGeom_RWBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineCurveWithKnots , shared_ptr<RWStepGeom_RWBSplineCurveWithKnots> >>(m.attr("RWStepGeom_RWBSplineCurveWithKnots"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve> >>(m.attr("RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineSurface , shared_ptr<RWStepGeom_RWBSplineSurface> >>(m.attr("RWStepGeom_RWBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineSurfaceWithKnots , shared_ptr<RWStepGeom_RWBSplineSurfaceWithKnots> >>(m.attr("RWStepGeom_RWBSplineSurfaceWithKnots"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface> >>(m.attr("RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBezierCurve , shared_ptr<RWStepGeom_RWBezierCurve> >>(m.attr("RWStepGeom_RWBezierCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBezierCurveAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWBezierCurveAndRationalBSplineCurve> >>(m.attr("RWStepGeom_RWBezierCurveAndRationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBezierSurface , shared_ptr<RWStepGeom_RWBezierSurface> >>(m.attr("RWStepGeom_RWBezierSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface> >>(m.attr("RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBoundaryCurve , shared_ptr<RWStepGeom_RWBoundaryCurve> >>(m.attr("RWStepGeom_RWBoundaryCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBoundedCurve , shared_ptr<RWStepGeom_RWBoundedCurve> >>(m.attr("RWStepGeom_RWBoundedCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWBoundedSurface , shared_ptr<RWStepGeom_RWBoundedSurface> >>(m.attr("RWStepGeom_RWBoundedSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCartesianPoint , shared_ptr<RWStepGeom_RWCartesianPoint> >>(m.attr("RWStepGeom_RWCartesianPoint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCartesianTransformationOperator , shared_ptr<RWStepGeom_RWCartesianTransformationOperator> >>(m.attr("RWStepGeom_RWCartesianTransformationOperator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCartesianTransformationOperator3d , shared_ptr<RWStepGeom_RWCartesianTransformationOperator3d> >>(m.attr("RWStepGeom_RWCartesianTransformationOperator3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCircle , shared_ptr<RWStepGeom_RWCircle> >>(m.attr("RWStepGeom_RWCircle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCompositeCurve , shared_ptr<RWStepGeom_RWCompositeCurve> >>(m.attr("RWStepGeom_RWCompositeCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCompositeCurveOnSurface , shared_ptr<RWStepGeom_RWCompositeCurveOnSurface> >>(m.attr("RWStepGeom_RWCompositeCurveOnSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCompositeCurveSegment , shared_ptr<RWStepGeom_RWCompositeCurveSegment> >>(m.attr("RWStepGeom_RWCompositeCurveSegment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWConic , shared_ptr<RWStepGeom_RWConic> >>(m.attr("RWStepGeom_RWConic"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWConicalSurface , shared_ptr<RWStepGeom_RWConicalSurface> >>(m.attr("RWStepGeom_RWConicalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCurve , shared_ptr<RWStepGeom_RWCurve> >>(m.attr("RWStepGeom_RWCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCurveBoundedSurface , shared_ptr<RWStepGeom_RWCurveBoundedSurface> >>(m.attr("RWStepGeom_RWCurveBoundedSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCurveReplica , shared_ptr<RWStepGeom_RWCurveReplica> >>(m.attr("RWStepGeom_RWCurveReplica"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWCylindricalSurface , shared_ptr<RWStepGeom_RWCylindricalSurface> >>(m.attr("RWStepGeom_RWCylindricalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWDegeneratePcurve , shared_ptr<RWStepGeom_RWDegeneratePcurve> >>(m.attr("RWStepGeom_RWDegeneratePcurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWDegenerateToroidalSurface , shared_ptr<RWStepGeom_RWDegenerateToroidalSurface> >>(m.attr("RWStepGeom_RWDegenerateToroidalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWDirection , shared_ptr<RWStepGeom_RWDirection> >>(m.attr("RWStepGeom_RWDirection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWElementarySurface , shared_ptr<RWStepGeom_RWElementarySurface> >>(m.attr("RWStepGeom_RWElementarySurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWEllipse , shared_ptr<RWStepGeom_RWEllipse> >>(m.attr("RWStepGeom_RWEllipse"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWEvaluatedDegeneratePcurve , shared_ptr<RWStepGeom_RWEvaluatedDegeneratePcurve> >>(m.attr("RWStepGeom_RWEvaluatedDegeneratePcurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx , shared_ptr<RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx> >>(m.attr("RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWGeometricRepresentationContext , shared_ptr<RWStepGeom_RWGeometricRepresentationContext> >>(m.attr("RWStepGeom_RWGeometricRepresentationContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext , shared_ptr<RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext> >>(m.attr("RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext , shared_ptr<RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext> >>(m.attr("RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWGeometricRepresentationItem , shared_ptr<RWStepGeom_RWGeometricRepresentationItem> >>(m.attr("RWStepGeom_RWGeometricRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWHyperbola , shared_ptr<RWStepGeom_RWHyperbola> >>(m.attr("RWStepGeom_RWHyperbola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWIntersectionCurve , shared_ptr<RWStepGeom_RWIntersectionCurve> >>(m.attr("RWStepGeom_RWIntersectionCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWLine , shared_ptr<RWStepGeom_RWLine> >>(m.attr("RWStepGeom_RWLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWOffsetCurve3d , shared_ptr<RWStepGeom_RWOffsetCurve3d> >>(m.attr("RWStepGeom_RWOffsetCurve3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWOffsetSurface , shared_ptr<RWStepGeom_RWOffsetSurface> >>(m.attr("RWStepGeom_RWOffsetSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWOrientedSurface , shared_ptr<RWStepGeom_RWOrientedSurface> >>(m.attr("RWStepGeom_RWOrientedSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWOuterBoundaryCurve , shared_ptr<RWStepGeom_RWOuterBoundaryCurve> >>(m.attr("RWStepGeom_RWOuterBoundaryCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWParabola , shared_ptr<RWStepGeom_RWParabola> >>(m.attr("RWStepGeom_RWParabola"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPcurve , shared_ptr<RWStepGeom_RWPcurve> >>(m.attr("RWStepGeom_RWPcurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPlacement , shared_ptr<RWStepGeom_RWPlacement> >>(m.attr("RWStepGeom_RWPlacement"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPlane , shared_ptr<RWStepGeom_RWPlane> >>(m.attr("RWStepGeom_RWPlane"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPoint , shared_ptr<RWStepGeom_RWPoint> >>(m.attr("RWStepGeom_RWPoint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPointOnCurve , shared_ptr<RWStepGeom_RWPointOnCurve> >>(m.attr("RWStepGeom_RWPointOnCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPointOnSurface , shared_ptr<RWStepGeom_RWPointOnSurface> >>(m.attr("RWStepGeom_RWPointOnSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPointReplica , shared_ptr<RWStepGeom_RWPointReplica> >>(m.attr("RWStepGeom_RWPointReplica"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWPolyline , shared_ptr<RWStepGeom_RWPolyline> >>(m.attr("RWStepGeom_RWPolyline"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWQuasiUniformCurve , shared_ptr<RWStepGeom_RWQuasiUniformCurve> >>(m.attr("RWStepGeom_RWQuasiUniformCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve> >>(m.attr("RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWQuasiUniformSurface , shared_ptr<RWStepGeom_RWQuasiUniformSurface> >>(m.attr("RWStepGeom_RWQuasiUniformSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface> >>(m.attr("RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWRationalBSplineCurve , shared_ptr<RWStepGeom_RWRationalBSplineCurve> >>(m.attr("RWStepGeom_RWRationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWRationalBSplineSurface , shared_ptr<RWStepGeom_RWRationalBSplineSurface> >>(m.attr("RWStepGeom_RWRationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWRectangularCompositeSurface , shared_ptr<RWStepGeom_RWRectangularCompositeSurface> >>(m.attr("RWStepGeom_RWRectangularCompositeSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWRectangularTrimmedSurface , shared_ptr<RWStepGeom_RWRectangularTrimmedSurface> >>(m.attr("RWStepGeom_RWRectangularTrimmedSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWReparametrisedCompositeCurveSegment , shared_ptr<RWStepGeom_RWReparametrisedCompositeCurveSegment> >>(m.attr("RWStepGeom_RWReparametrisedCompositeCurveSegment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSeamCurve , shared_ptr<RWStepGeom_RWSeamCurve> >>(m.attr("RWStepGeom_RWSeamCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSphericalSurface , shared_ptr<RWStepGeom_RWSphericalSurface> >>(m.attr("RWStepGeom_RWSphericalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurface , shared_ptr<RWStepGeom_RWSurface> >>(m.attr("RWStepGeom_RWSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfaceCurve , shared_ptr<RWStepGeom_RWSurfaceCurve> >>(m.attr("RWStepGeom_RWSurfaceCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfaceCurveAndBoundedCurve , shared_ptr<RWStepGeom_RWSurfaceCurveAndBoundedCurve> >>(m.attr("RWStepGeom_RWSurfaceCurveAndBoundedCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfaceOfLinearExtrusion , shared_ptr<RWStepGeom_RWSurfaceOfLinearExtrusion> >>(m.attr("RWStepGeom_RWSurfaceOfLinearExtrusion"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfaceOfRevolution , shared_ptr<RWStepGeom_RWSurfaceOfRevolution> >>(m.attr("RWStepGeom_RWSurfaceOfRevolution"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfacePatch , shared_ptr<RWStepGeom_RWSurfacePatch> >>(m.attr("RWStepGeom_RWSurfacePatch"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSurfaceReplica , shared_ptr<RWStepGeom_RWSurfaceReplica> >>(m.attr("RWStepGeom_RWSurfaceReplica"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWSweptSurface , shared_ptr<RWStepGeom_RWSweptSurface> >>(m.attr("RWStepGeom_RWSweptSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWToroidalSurface , shared_ptr<RWStepGeom_RWToroidalSurface> >>(m.attr("RWStepGeom_RWToroidalSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWTrimmedCurve , shared_ptr<RWStepGeom_RWTrimmedCurve> >>(m.attr("RWStepGeom_RWTrimmedCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWUniformCurve , shared_ptr<RWStepGeom_RWUniformCurve> >>(m.attr("RWStepGeom_RWUniformCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWUniformCurveAndRationalBSplineCurve , shared_ptr<RWStepGeom_RWUniformCurveAndRationalBSplineCurve> >>(m.attr("RWStepGeom_RWUniformCurveAndRationalBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWUniformSurface , shared_ptr<RWStepGeom_RWUniformSurface> >>(m.attr("RWStepGeom_RWUniformSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface , shared_ptr<RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface> >>(m.attr("RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepGeom_RWVector , shared_ptr<RWStepGeom_RWVector> >>(m.attr("RWStepGeom_RWVector"))
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
// ./opencascade/RWStepGeom_RWSeamCurve.hxx
// ./opencascade/RWStepGeom_RWUniformCurveAndRationalBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWAxis2Placement2d.hxx
// ./opencascade/RWStepGeom_RWPointOnSurface.hxx
// ./opencascade/RWStepGeom_RWOrientedSurface.hxx
// ./opencascade/RWStepGeom_RWCircle.hxx
// ./opencascade/RWStepGeom_RWGeometricRepresentationContext.hxx
// ./opencascade/RWStepGeom_RWEvaluatedDegeneratePcurve.hxx
// ./opencascade/RWStepGeom_RWBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWSurfaceReplica.hxx
// ./opencascade/RWStepGeom_RWSweptSurface.hxx
// ./opencascade/RWStepGeom_RWCompositeCurveOnSurface.hxx
// ./opencascade/RWStepGeom_RWSurfaceCurveAndBoundedCurve.hxx
// ./opencascade/RWStepGeom_RWRectangularTrimmedSurface.hxx
// ./opencascade/RWStepGeom_RWIntersectionCurve.hxx
// ./opencascade/RWStepGeom_RWSurfaceCurve.hxx
// ./opencascade/RWStepGeom_RWRationalBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWPoint.hxx
// ./opencascade/RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext.hxx
// ./opencascade/RWStepGeom_RWToroidalSurface.hxx
// ./opencascade/RWStepGeom_RWBSplineCurveWithKnots.hxx
// ./opencascade/RWStepGeom_RWBezierCurveAndRationalBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWDegenerateToroidalSurface.hxx
// ./opencascade/RWStepGeom_RWBoundedCurve.hxx
// ./opencascade/RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWCompositeCurve.hxx
// ./opencascade/RWStepGeom_RWElementarySurface.hxx
// ./opencascade/RWStepGeom_RWRectangularCompositeSurface.hxx
// ./opencascade/RWStepGeom_RWCurveBoundedSurface.hxx
// ./opencascade/RWStepGeom_RWCartesianPoint.hxx
// ./opencascade/RWStepGeom_RWPolyline.hxx
// ./opencascade/RWStepGeom_RWRationalBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWCurveReplica.hxx
// ./opencascade/RWStepGeom_RWCurve.hxx
// ./opencascade/RWStepGeom_RWConicalSurface.hxx
// ./opencascade/RWStepGeom_RWDirection.hxx
// ./opencascade/RWStepGeom_RWAxis2Placement3d.hxx
// ./opencascade/RWStepGeom_RWBoundedSurface.hxx
// ./opencascade/RWStepGeom_RWSurface.hxx
// ./opencascade/RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext.hxx
// ./opencascade/RWStepGeom_RWPlacement.hxx
// ./opencascade/RWStepGeom_RWCylindricalSurface.hxx
// ./opencascade/RWStepGeom_RWCartesianTransformationOperator.hxx
// ./opencascade/RWStepGeom_RWPointReplica.hxx
// ./opencascade/RWStepGeom_RWOffsetCurve3d.hxx
// ./opencascade/RWStepGeom_RWAxis1Placement.hxx
// ./opencascade/RWStepGeom_RWTrimmedCurve.hxx
// ./opencascade/RWStepGeom_RWLine.hxx
// ./opencascade/RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx
// ./opencascade/RWStepGeom_RWPlane.hxx
// ./opencascade/RWStepGeom_RWQuasiUniformSurface.hxx
// ./opencascade/RWStepGeom_RWSurfacePatch.hxx
// ./opencascade/RWStepGeom_RWUniformCurve.hxx
// ./opencascade/RWStepGeom_RWPcurve.hxx
// ./opencascade/RWStepGeom_RWBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve.hxx
// ./opencascade/RWStepGeom_RWDegeneratePcurve.hxx
// ./opencascade/RWStepGeom_RWCartesianTransformationOperator3d.hxx
// ./opencascade/RWStepGeom_RWBSplineSurfaceWithKnots.hxx
// ./opencascade/RWStepGeom_RWBoundaryCurve.hxx
// ./opencascade/RWStepGeom_RWSurfaceOfLinearExtrusion.hxx
// ./opencascade/RWStepGeom_RWOffsetSurface.hxx
// ./opencascade/RWStepGeom_RWUniformSurface.hxx
// ./opencascade/RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWGeometricRepresentationItem.hxx
// ./opencascade/RWStepGeom_RWBezierCurve.hxx
// ./opencascade/RWStepGeom_RWSurfaceOfRevolution.hxx
// ./opencascade/RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWCompositeCurveSegment.hxx
// ./opencascade/RWStepGeom_RWPointOnCurve.hxx
// ./opencascade/RWStepGeom_RWParabola.hxx
// ./opencascade/RWStepGeom_RWQuasiUniformCurve.hxx
// ./opencascade/RWStepGeom_RWSphericalSurface.hxx
// ./opencascade/RWStepGeom_RWBezierSurface.hxx
// ./opencascade/RWStepGeom_RWReparametrisedCompositeCurveSegment.hxx
// ./opencascade/RWStepGeom_RWEllipse.hxx
// ./opencascade/RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface.hxx
// ./opencascade/RWStepGeom_RWVector.hxx
// ./opencascade/RWStepGeom_RWHyperbola.hxx
// ./opencascade/RWStepGeom_RWConic.hxx
// ./opencascade/RWStepGeom_RWOuterBoundaryCurve.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
