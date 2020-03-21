
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
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedEdge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedFaceSubSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalCharacteristicRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PrecisionQualifier.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_NonManifoldSurfaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeRepresentationWithParameters.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RightCircularCone.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedEdgeSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_EdgeBasedWireframeShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeDimensionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Loop.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Block.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OpenShell.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SolidModel.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Subedge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_HalfSpaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FacetedBrepShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AngularSize.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FaceOuterBound.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Path.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_CsgSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ToleranceValue.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AngularLocation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Sphere.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_VertexLoop.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricCurveSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SeamEdge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ExtrudedAreaSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_EdgeBasedWireframeModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Edge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedPath.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalSizeWithPath.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_CsgShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PlusMinusTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalLocationWithPath.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PointRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_LimitsAndFits.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Face.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DefinitionalRepresentationAndShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AdvancedFace.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ManifoldSurfaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SweptAreaSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FaceBasedSurfaceModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedFaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_TransitionalShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_TypeQualifier.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RightCircularCylinder.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedFace.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ExtrudedFaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_LoopAndPath.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SweptFaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RevolvedFaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Vertex.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Subface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RevolvedAreaSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedOpenShell.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AdvancedBrepShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_QualifiedRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PolyLoop.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RightAngularWedge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ValueFormatTypeQualifier.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedClosedShell.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SolidReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BoxedHalfSpace.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Torus.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_MeasureQualification.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_CompoundShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_EdgeCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BoxDomain.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FaceBound.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_VertexPoint.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepShape_RWAdvancedBrepShapeRepresentation.hxx>
#include <RWStepShape_RWAdvancedFace.hxx>
#include <RWStepShape_RWAngularLocation.hxx>
#include <RWStepShape_RWAngularSize.hxx>
#include <RWStepShape_RWBlock.hxx>
#include <RWStepShape_RWBooleanResult.hxx>
#include <RWStepShape_RWBoxDomain.hxx>
#include <RWStepShape_RWBoxedHalfSpace.hxx>
#include <RWStepShape_RWBrepWithVoids.hxx>
#include <RWStepShape_RWClosedShell.hxx>
#include <RWStepShape_RWCompoundShapeRepresentation.hxx>
#include <RWStepShape_RWConnectedEdgeSet.hxx>
#include <RWStepShape_RWConnectedFaceSet.hxx>
#include <RWStepShape_RWConnectedFaceShapeRepresentation.hxx>
#include <RWStepShape_RWConnectedFaceSubSet.hxx>
#include <RWStepShape_RWContextDependentShapeRepresentation.hxx>
#include <RWStepShape_RWCsgShapeRepresentation.hxx>
#include <RWStepShape_RWCsgSolid.hxx>
#include <RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation.hxx>
#include <RWStepShape_RWDimensionalCharacteristicRepresentation.hxx>
#include <RWStepShape_RWDimensionalLocation.hxx>
#include <RWStepShape_RWDimensionalLocationWithPath.hxx>
#include <RWStepShape_RWDimensionalSize.hxx>
#include <RWStepShape_RWDimensionalSizeWithPath.hxx>
#include <RWStepShape_RWEdge.hxx>
#include <RWStepShape_RWEdgeBasedWireframeModel.hxx>
#include <RWStepShape_RWEdgeBasedWireframeShapeRepresentation.hxx>
#include <RWStepShape_RWEdgeCurve.hxx>
#include <RWStepShape_RWEdgeLoop.hxx>
#include <RWStepShape_RWExtrudedAreaSolid.hxx>
#include <RWStepShape_RWExtrudedFaceSolid.hxx>
#include <RWStepShape_RWFace.hxx>
#include <RWStepShape_RWFaceBasedSurfaceModel.hxx>
#include <RWStepShape_RWFaceBound.hxx>
#include <RWStepShape_RWFaceOuterBound.hxx>
#include <RWStepShape_RWFaceSurface.hxx>
#include <RWStepShape_RWFacetedBrep.hxx>
#include <RWStepShape_RWFacetedBrepAndBrepWithVoids.hxx>
#include <RWStepShape_RWFacetedBrepShapeRepresentation.hxx>
#include <RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation.hxx>
#include <RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation.hxx>
#include <RWStepShape_RWGeometricCurveSet.hxx>
#include <RWStepShape_RWGeometricSet.hxx>
#include <RWStepShape_RWHalfSpaceSolid.hxx>
#include <RWStepShape_RWLimitsAndFits.hxx>
#include <RWStepShape_RWLoop.hxx>
#include <RWStepShape_RWLoopAndPath.hxx>
#include <RWStepShape_RWManifoldSolidBrep.hxx>
#include <RWStepShape_RWManifoldSurfaceShapeRepresentation.hxx>
#include <RWStepShape_RWMeasureQualification.hxx>
#include <RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem.hxx>
#include <RWStepShape_RWNonManifoldSurfaceShapeRepresentation.hxx>
#include <RWStepShape_RWOpenShell.hxx>
#include <RWStepShape_RWOrientedClosedShell.hxx>
#include <RWStepShape_RWOrientedEdge.hxx>
#include <RWStepShape_RWOrientedFace.hxx>
#include <RWStepShape_RWOrientedOpenShell.hxx>
#include <RWStepShape_RWOrientedPath.hxx>
#include <RWStepShape_RWPath.hxx>
#include <RWStepShape_RWPlusMinusTolerance.hxx>
#include <RWStepShape_RWPointRepresentation.hxx>
#include <RWStepShape_RWPolyLoop.hxx>
#include <RWStepShape_RWPrecisionQualifier.hxx>
#include <RWStepShape_RWQualifiedRepresentationItem.hxx>
#include <RWStepShape_RWRevolvedAreaSolid.hxx>
#include <RWStepShape_RWRevolvedFaceSolid.hxx>
#include <RWStepShape_RWRightAngularWedge.hxx>
#include <RWStepShape_RWRightCircularCone.hxx>
#include <RWStepShape_RWRightCircularCylinder.hxx>
#include <RWStepShape_RWSeamEdge.hxx>
#include <RWStepShape_RWShapeDefinitionRepresentation.hxx>
#include <RWStepShape_RWShapeDimensionRepresentation.hxx>
#include <RWStepShape_RWShapeRepresentation.hxx>
#include <RWStepShape_RWShapeRepresentationWithParameters.hxx>
#include <RWStepShape_RWShellBasedSurfaceModel.hxx>
#include <RWStepShape_RWSolidModel.hxx>
#include <RWStepShape_RWSolidReplica.hxx>
#include <RWStepShape_RWSphere.hxx>
#include <RWStepShape_RWSubedge.hxx>
#include <RWStepShape_RWSubface.hxx>
#include <RWStepShape_RWSweptAreaSolid.hxx>
#include <RWStepShape_RWSweptFaceSolid.hxx>
#include <RWStepShape_RWToleranceValue.hxx>
#include <RWStepShape_RWTopologicalRepresentationItem.hxx>
#include <RWStepShape_RWTorus.hxx>
#include <RWStepShape_RWTransitionalShapeRepresentation.hxx>
#include <RWStepShape_RWTypeQualifier.hxx>
#include <RWStepShape_RWValueFormatTypeQualifier.hxx>
#include <RWStepShape_RWVertex.hxx>
#include <RWStepShape_RWVertexLoop.hxx>
#include <RWStepShape_RWVertexPoint.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepShape(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepShape"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepShape_RWAdvancedBrepShapeRepresentation , shared_ptr<RWStepShape_RWAdvancedBrepShapeRepresentation> >>(m.attr("RWStepShape_RWAdvancedBrepShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWAdvancedBrepShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_AdvancedBrepShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWAdvancedBrepShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_AdvancedBrepShapeRepresentation> & ) const>(&RWStepShape_RWAdvancedBrepShapeRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWAdvancedBrepShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_AdvancedBrepShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWAdvancedBrepShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_AdvancedBrepShapeRepresentation> & ) const>(&RWStepShape_RWAdvancedBrepShapeRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWAdvancedBrepShapeRepresentation::*)( const opencascade::handle<StepShape_AdvancedBrepShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWAdvancedBrepShapeRepresentation::*)( const opencascade::handle<StepShape_AdvancedBrepShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWAdvancedBrepShapeRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWAdvancedFace , shared_ptr<RWStepShape_RWAdvancedFace> >>(m.attr("RWStepShape_RWAdvancedFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWAdvancedFace::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_AdvancedFace> & ) const) static_cast<void (RWStepShape_RWAdvancedFace::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_AdvancedFace> & ) const>(&RWStepShape_RWAdvancedFace::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWAdvancedFace::*)( StepData_StepWriter & , const opencascade::handle<StepShape_AdvancedFace> & ) const) static_cast<void (RWStepShape_RWAdvancedFace::*)( StepData_StepWriter & , const opencascade::handle<StepShape_AdvancedFace> & ) const>(&RWStepShape_RWAdvancedFace::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWAdvancedFace::*)( const opencascade::handle<StepShape_AdvancedFace> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWAdvancedFace::*)( const opencascade::handle<StepShape_AdvancedFace> & , Interface_EntityIterator & ) const>(&RWStepShape_RWAdvancedFace::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWAngularLocation , shared_ptr<RWStepShape_RWAngularLocation> >>(m.attr("RWStepShape_RWAngularLocation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWAngularLocation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_AngularLocation> & ) const) static_cast<void (RWStepShape_RWAngularLocation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_AngularLocation> & ) const>(&RWStepShape_RWAngularLocation::ReadStep),
             R"#(Reads AngularLocation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWAngularLocation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_AngularLocation> & ) const) static_cast<void (RWStepShape_RWAngularLocation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_AngularLocation> & ) const>(&RWStepShape_RWAngularLocation::WriteStep),
             R"#(Writes AngularLocation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWAngularLocation::*)( const opencascade::handle<StepShape_AngularLocation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWAngularLocation::*)( const opencascade::handle<StepShape_AngularLocation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWAngularLocation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWAngularSize , shared_ptr<RWStepShape_RWAngularSize> >>(m.attr("RWStepShape_RWAngularSize"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWAngularSize::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_AngularSize> & ) const) static_cast<void (RWStepShape_RWAngularSize::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_AngularSize> & ) const>(&RWStepShape_RWAngularSize::ReadStep),
             R"#(Reads AngularSize)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWAngularSize::*)( StepData_StepWriter & , const opencascade::handle<StepShape_AngularSize> & ) const) static_cast<void (RWStepShape_RWAngularSize::*)( StepData_StepWriter & , const opencascade::handle<StepShape_AngularSize> & ) const>(&RWStepShape_RWAngularSize::WriteStep),
             R"#(Writes AngularSize)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWAngularSize::*)( const opencascade::handle<StepShape_AngularSize> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWAngularSize::*)( const opencascade::handle<StepShape_AngularSize> & , Interface_EntityIterator & ) const>(&RWStepShape_RWAngularSize::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWBlock , shared_ptr<RWStepShape_RWBlock> >>(m.attr("RWStepShape_RWBlock"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWBlock::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Block> & ) const) static_cast<void (RWStepShape_RWBlock::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Block> & ) const>(&RWStepShape_RWBlock::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWBlock::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Block> & ) const) static_cast<void (RWStepShape_RWBlock::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Block> & ) const>(&RWStepShape_RWBlock::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWBlock::*)( const opencascade::handle<StepShape_Block> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWBlock::*)( const opencascade::handle<StepShape_Block> & , Interface_EntityIterator & ) const>(&RWStepShape_RWBlock::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWBooleanResult , shared_ptr<RWStepShape_RWBooleanResult> >>(m.attr("RWStepShape_RWBooleanResult"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWBooleanResult::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_BooleanResult> & ) const) static_cast<void (RWStepShape_RWBooleanResult::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_BooleanResult> & ) const>(&RWStepShape_RWBooleanResult::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWBooleanResult::*)( StepData_StepWriter & , const opencascade::handle<StepShape_BooleanResult> & ) const) static_cast<void (RWStepShape_RWBooleanResult::*)( StepData_StepWriter & , const opencascade::handle<StepShape_BooleanResult> & ) const>(&RWStepShape_RWBooleanResult::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWBooleanResult::*)( const opencascade::handle<StepShape_BooleanResult> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWBooleanResult::*)( const opencascade::handle<StepShape_BooleanResult> & , Interface_EntityIterator & ) const>(&RWStepShape_RWBooleanResult::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWBoxDomain , shared_ptr<RWStepShape_RWBoxDomain> >>(m.attr("RWStepShape_RWBoxDomain"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWBoxDomain::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_BoxDomain> & ) const) static_cast<void (RWStepShape_RWBoxDomain::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_BoxDomain> & ) const>(&RWStepShape_RWBoxDomain::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWBoxDomain::*)( StepData_StepWriter & , const opencascade::handle<StepShape_BoxDomain> & ) const) static_cast<void (RWStepShape_RWBoxDomain::*)( StepData_StepWriter & , const opencascade::handle<StepShape_BoxDomain> & ) const>(&RWStepShape_RWBoxDomain::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWBoxDomain::*)( const opencascade::handle<StepShape_BoxDomain> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWBoxDomain::*)( const opencascade::handle<StepShape_BoxDomain> & , Interface_EntityIterator & ) const>(&RWStepShape_RWBoxDomain::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWBoxedHalfSpace , shared_ptr<RWStepShape_RWBoxedHalfSpace> >>(m.attr("RWStepShape_RWBoxedHalfSpace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWBoxedHalfSpace::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_BoxedHalfSpace> & ) const) static_cast<void (RWStepShape_RWBoxedHalfSpace::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_BoxedHalfSpace> & ) const>(&RWStepShape_RWBoxedHalfSpace::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWBoxedHalfSpace::*)( StepData_StepWriter & , const opencascade::handle<StepShape_BoxedHalfSpace> & ) const) static_cast<void (RWStepShape_RWBoxedHalfSpace::*)( StepData_StepWriter & , const opencascade::handle<StepShape_BoxedHalfSpace> & ) const>(&RWStepShape_RWBoxedHalfSpace::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWBoxedHalfSpace::*)( const opencascade::handle<StepShape_BoxedHalfSpace> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWBoxedHalfSpace::*)( const opencascade::handle<StepShape_BoxedHalfSpace> & , Interface_EntityIterator & ) const>(&RWStepShape_RWBoxedHalfSpace::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWBrepWithVoids , shared_ptr<RWStepShape_RWBrepWithVoids> >>(m.attr("RWStepShape_RWBrepWithVoids"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWBrepWithVoids::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_BrepWithVoids> & ) const) static_cast<void (RWStepShape_RWBrepWithVoids::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_BrepWithVoids> & ) const>(&RWStepShape_RWBrepWithVoids::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWBrepWithVoids::*)( StepData_StepWriter & , const opencascade::handle<StepShape_BrepWithVoids> & ) const) static_cast<void (RWStepShape_RWBrepWithVoids::*)( StepData_StepWriter & , const opencascade::handle<StepShape_BrepWithVoids> & ) const>(&RWStepShape_RWBrepWithVoids::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWBrepWithVoids::*)( const opencascade::handle<StepShape_BrepWithVoids> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWBrepWithVoids::*)( const opencascade::handle<StepShape_BrepWithVoids> & , Interface_EntityIterator & ) const>(&RWStepShape_RWBrepWithVoids::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepShape_RWBrepWithVoids::*)( const opencascade::handle<StepShape_BrepWithVoids> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (RWStepShape_RWBrepWithVoids::*)( const opencascade::handle<StepShape_BrepWithVoids> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&RWStepShape_RWBrepWithVoids::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWClosedShell , shared_ptr<RWStepShape_RWClosedShell> >>(m.attr("RWStepShape_RWClosedShell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWClosedShell::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ClosedShell> & ) const) static_cast<void (RWStepShape_RWClosedShell::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ClosedShell> & ) const>(&RWStepShape_RWClosedShell::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWClosedShell::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ClosedShell> & ) const) static_cast<void (RWStepShape_RWClosedShell::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ClosedShell> & ) const>(&RWStepShape_RWClosedShell::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWClosedShell::*)( const opencascade::handle<StepShape_ClosedShell> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWClosedShell::*)( const opencascade::handle<StepShape_ClosedShell> & , Interface_EntityIterator & ) const>(&RWStepShape_RWClosedShell::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWCompoundShapeRepresentation , shared_ptr<RWStepShape_RWCompoundShapeRepresentation> >>(m.attr("RWStepShape_RWCompoundShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWCompoundShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_CompoundShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWCompoundShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_CompoundShapeRepresentation> & ) const>(&RWStepShape_RWCompoundShapeRepresentation::ReadStep),
             R"#(Reads CompoundShapeRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWCompoundShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_CompoundShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWCompoundShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_CompoundShapeRepresentation> & ) const>(&RWStepShape_RWCompoundShapeRepresentation::WriteStep),
             R"#(Writes CompoundShapeRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWCompoundShapeRepresentation::*)( const opencascade::handle<StepShape_CompoundShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWCompoundShapeRepresentation::*)( const opencascade::handle<StepShape_CompoundShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWCompoundShapeRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWConnectedEdgeSet , shared_ptr<RWStepShape_RWConnectedEdgeSet> >>(m.attr("RWStepShape_RWConnectedEdgeSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWConnectedEdgeSet::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ConnectedEdgeSet> & ) const) static_cast<void (RWStepShape_RWConnectedEdgeSet::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ConnectedEdgeSet> & ) const>(&RWStepShape_RWConnectedEdgeSet::ReadStep),
             R"#(Reads ConnectedEdgeSet)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWConnectedEdgeSet::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ConnectedEdgeSet> & ) const) static_cast<void (RWStepShape_RWConnectedEdgeSet::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ConnectedEdgeSet> & ) const>(&RWStepShape_RWConnectedEdgeSet::WriteStep),
             R"#(Writes ConnectedEdgeSet)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWConnectedEdgeSet::*)( const opencascade::handle<StepShape_ConnectedEdgeSet> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWConnectedEdgeSet::*)( const opencascade::handle<StepShape_ConnectedEdgeSet> & , Interface_EntityIterator & ) const>(&RWStepShape_RWConnectedEdgeSet::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWConnectedFaceSet , shared_ptr<RWStepShape_RWConnectedFaceSet> >>(m.attr("RWStepShape_RWConnectedFaceSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWConnectedFaceSet::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ConnectedFaceSet> & ) const) static_cast<void (RWStepShape_RWConnectedFaceSet::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ConnectedFaceSet> & ) const>(&RWStepShape_RWConnectedFaceSet::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWConnectedFaceSet::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ConnectedFaceSet> & ) const) static_cast<void (RWStepShape_RWConnectedFaceSet::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ConnectedFaceSet> & ) const>(&RWStepShape_RWConnectedFaceSet::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWConnectedFaceSet::*)( const opencascade::handle<StepShape_ConnectedFaceSet> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWConnectedFaceSet::*)( const opencascade::handle<StepShape_ConnectedFaceSet> & , Interface_EntityIterator & ) const>(&RWStepShape_RWConnectedFaceSet::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWConnectedFaceShapeRepresentation , shared_ptr<RWStepShape_RWConnectedFaceShapeRepresentation> >>(m.attr("RWStepShape_RWConnectedFaceShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWConnectedFaceShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ConnectedFaceShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWConnectedFaceShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ConnectedFaceShapeRepresentation> & ) const>(&RWStepShape_RWConnectedFaceShapeRepresentation::ReadStep),
             R"#(Reads ConnectedFaceShapeRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWConnectedFaceShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ConnectedFaceShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWConnectedFaceShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ConnectedFaceShapeRepresentation> & ) const>(&RWStepShape_RWConnectedFaceShapeRepresentation::WriteStep),
             R"#(Writes ConnectedFaceShapeRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWConnectedFaceShapeRepresentation::*)( const opencascade::handle<StepShape_ConnectedFaceShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWConnectedFaceShapeRepresentation::*)( const opencascade::handle<StepShape_ConnectedFaceShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWConnectedFaceShapeRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWConnectedFaceSubSet , shared_ptr<RWStepShape_RWConnectedFaceSubSet> >>(m.attr("RWStepShape_RWConnectedFaceSubSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWConnectedFaceSubSet::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ConnectedFaceSubSet> & ) const) static_cast<void (RWStepShape_RWConnectedFaceSubSet::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ConnectedFaceSubSet> & ) const>(&RWStepShape_RWConnectedFaceSubSet::ReadStep),
             R"#(Reads ConnectedFaceSubSet)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWConnectedFaceSubSet::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ConnectedFaceSubSet> & ) const) static_cast<void (RWStepShape_RWConnectedFaceSubSet::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ConnectedFaceSubSet> & ) const>(&RWStepShape_RWConnectedFaceSubSet::WriteStep),
             R"#(Writes ConnectedFaceSubSet)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWConnectedFaceSubSet::*)( const opencascade::handle<StepShape_ConnectedFaceSubSet> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWConnectedFaceSubSet::*)( const opencascade::handle<StepShape_ConnectedFaceSubSet> & , Interface_EntityIterator & ) const>(&RWStepShape_RWConnectedFaceSubSet::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWContextDependentShapeRepresentation , shared_ptr<RWStepShape_RWContextDependentShapeRepresentation> >>(m.attr("RWStepShape_RWContextDependentShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWContextDependentShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ContextDependentShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWContextDependentShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ContextDependentShapeRepresentation> & ) const>(&RWStepShape_RWContextDependentShapeRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWContextDependentShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ContextDependentShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWContextDependentShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ContextDependentShapeRepresentation> & ) const>(&RWStepShape_RWContextDependentShapeRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWContextDependentShapeRepresentation::*)( const opencascade::handle<StepShape_ContextDependentShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWContextDependentShapeRepresentation::*)( const opencascade::handle<StepShape_ContextDependentShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWContextDependentShapeRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWCsgShapeRepresentation , shared_ptr<RWStepShape_RWCsgShapeRepresentation> >>(m.attr("RWStepShape_RWCsgShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWCsgShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_CsgShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWCsgShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_CsgShapeRepresentation> & ) const>(&RWStepShape_RWCsgShapeRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWCsgShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_CsgShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWCsgShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_CsgShapeRepresentation> & ) const>(&RWStepShape_RWCsgShapeRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWCsgShapeRepresentation::*)( const opencascade::handle<StepShape_CsgShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWCsgShapeRepresentation::*)( const opencascade::handle<StepShape_CsgShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWCsgShapeRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWCsgSolid , shared_ptr<RWStepShape_RWCsgSolid> >>(m.attr("RWStepShape_RWCsgSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWCsgSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_CsgSolid> & ) const) static_cast<void (RWStepShape_RWCsgSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_CsgSolid> & ) const>(&RWStepShape_RWCsgSolid::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWCsgSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_CsgSolid> & ) const) static_cast<void (RWStepShape_RWCsgSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_CsgSolid> & ) const>(&RWStepShape_RWCsgSolid::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWCsgSolid::*)( const opencascade::handle<StepShape_CsgSolid> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWCsgSolid::*)( const opencascade::handle<StepShape_CsgSolid> & , Interface_EntityIterator & ) const>(&RWStepShape_RWCsgSolid::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation , shared_ptr<RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation> >>(m.attr("RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DefinitionalRepresentationAndShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DefinitionalRepresentationAndShapeRepresentation> & ) const>(&RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DefinitionalRepresentationAndShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DefinitionalRepresentationAndShapeRepresentation> & ) const>(&RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation::*)( const opencascade::handle<StepShape_DefinitionalRepresentationAndShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation::*)( const opencascade::handle<StepShape_DefinitionalRepresentationAndShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDimensionalCharacteristicRepresentation , shared_ptr<RWStepShape_RWDimensionalCharacteristicRepresentation> >>(m.attr("RWStepShape_RWDimensionalCharacteristicRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWDimensionalCharacteristicRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DimensionalCharacteristicRepresentation> & ) const) static_cast<void (RWStepShape_RWDimensionalCharacteristicRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DimensionalCharacteristicRepresentation> & ) const>(&RWStepShape_RWDimensionalCharacteristicRepresentation::ReadStep),
             R"#(Reads DimensionalCharacteristicRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWDimensionalCharacteristicRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DimensionalCharacteristicRepresentation> & ) const) static_cast<void (RWStepShape_RWDimensionalCharacteristicRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DimensionalCharacteristicRepresentation> & ) const>(&RWStepShape_RWDimensionalCharacteristicRepresentation::WriteStep),
             R"#(Writes DimensionalCharacteristicRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWDimensionalCharacteristicRepresentation::*)( const opencascade::handle<StepShape_DimensionalCharacteristicRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWDimensionalCharacteristicRepresentation::*)( const opencascade::handle<StepShape_DimensionalCharacteristicRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWDimensionalCharacteristicRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDimensionalLocation , shared_ptr<RWStepShape_RWDimensionalLocation> >>(m.attr("RWStepShape_RWDimensionalLocation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWDimensionalLocation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DimensionalLocation> & ) const) static_cast<void (RWStepShape_RWDimensionalLocation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DimensionalLocation> & ) const>(&RWStepShape_RWDimensionalLocation::ReadStep),
             R"#(Reads DimensionalLocation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWDimensionalLocation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DimensionalLocation> & ) const) static_cast<void (RWStepShape_RWDimensionalLocation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DimensionalLocation> & ) const>(&RWStepShape_RWDimensionalLocation::WriteStep),
             R"#(Writes DimensionalLocation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWDimensionalLocation::*)( const opencascade::handle<StepShape_DimensionalLocation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWDimensionalLocation::*)( const opencascade::handle<StepShape_DimensionalLocation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWDimensionalLocation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDimensionalLocationWithPath , shared_ptr<RWStepShape_RWDimensionalLocationWithPath> >>(m.attr("RWStepShape_RWDimensionalLocationWithPath"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWDimensionalLocationWithPath::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DimensionalLocationWithPath> & ) const) static_cast<void (RWStepShape_RWDimensionalLocationWithPath::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DimensionalLocationWithPath> & ) const>(&RWStepShape_RWDimensionalLocationWithPath::ReadStep),
             R"#(Reads DimensionalLocationWithPath)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWDimensionalLocationWithPath::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DimensionalLocationWithPath> & ) const) static_cast<void (RWStepShape_RWDimensionalLocationWithPath::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DimensionalLocationWithPath> & ) const>(&RWStepShape_RWDimensionalLocationWithPath::WriteStep),
             R"#(Writes DimensionalLocationWithPath)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWDimensionalLocationWithPath::*)( const opencascade::handle<StepShape_DimensionalLocationWithPath> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWDimensionalLocationWithPath::*)( const opencascade::handle<StepShape_DimensionalLocationWithPath> & , Interface_EntityIterator & ) const>(&RWStepShape_RWDimensionalLocationWithPath::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDimensionalSize , shared_ptr<RWStepShape_RWDimensionalSize> >>(m.attr("RWStepShape_RWDimensionalSize"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWDimensionalSize::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DimensionalSize> & ) const) static_cast<void (RWStepShape_RWDimensionalSize::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DimensionalSize> & ) const>(&RWStepShape_RWDimensionalSize::ReadStep),
             R"#(Reads DimensionalSize)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWDimensionalSize::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DimensionalSize> & ) const) static_cast<void (RWStepShape_RWDimensionalSize::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DimensionalSize> & ) const>(&RWStepShape_RWDimensionalSize::WriteStep),
             R"#(Writes DimensionalSize)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWDimensionalSize::*)( const opencascade::handle<StepShape_DimensionalSize> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWDimensionalSize::*)( const opencascade::handle<StepShape_DimensionalSize> & , Interface_EntityIterator & ) const>(&RWStepShape_RWDimensionalSize::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDimensionalSizeWithPath , shared_ptr<RWStepShape_RWDimensionalSizeWithPath> >>(m.attr("RWStepShape_RWDimensionalSizeWithPath"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWDimensionalSizeWithPath::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DimensionalSizeWithPath> & ) const) static_cast<void (RWStepShape_RWDimensionalSizeWithPath::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_DimensionalSizeWithPath> & ) const>(&RWStepShape_RWDimensionalSizeWithPath::ReadStep),
             R"#(Reads DimensionalSizeWithPath)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWDimensionalSizeWithPath::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DimensionalSizeWithPath> & ) const) static_cast<void (RWStepShape_RWDimensionalSizeWithPath::*)( StepData_StepWriter & , const opencascade::handle<StepShape_DimensionalSizeWithPath> & ) const>(&RWStepShape_RWDimensionalSizeWithPath::WriteStep),
             R"#(Writes DimensionalSizeWithPath)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWDimensionalSizeWithPath::*)( const opencascade::handle<StepShape_DimensionalSizeWithPath> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWDimensionalSizeWithPath::*)( const opencascade::handle<StepShape_DimensionalSizeWithPath> & , Interface_EntityIterator & ) const>(&RWStepShape_RWDimensionalSizeWithPath::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWEdge , shared_ptr<RWStepShape_RWEdge> >>(m.attr("RWStepShape_RWEdge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWEdge::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Edge> & ) const) static_cast<void (RWStepShape_RWEdge::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Edge> & ) const>(&RWStepShape_RWEdge::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWEdge::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Edge> & ) const) static_cast<void (RWStepShape_RWEdge::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Edge> & ) const>(&RWStepShape_RWEdge::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWEdge::*)( const opencascade::handle<StepShape_Edge> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWEdge::*)( const opencascade::handle<StepShape_Edge> & , Interface_EntityIterator & ) const>(&RWStepShape_RWEdge::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWEdgeBasedWireframeModel , shared_ptr<RWStepShape_RWEdgeBasedWireframeModel> >>(m.attr("RWStepShape_RWEdgeBasedWireframeModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWEdgeBasedWireframeModel::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_EdgeBasedWireframeModel> & ) const) static_cast<void (RWStepShape_RWEdgeBasedWireframeModel::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_EdgeBasedWireframeModel> & ) const>(&RWStepShape_RWEdgeBasedWireframeModel::ReadStep),
             R"#(Reads EdgeBasedWireframeModel)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWEdgeBasedWireframeModel::*)( StepData_StepWriter & , const opencascade::handle<StepShape_EdgeBasedWireframeModel> & ) const) static_cast<void (RWStepShape_RWEdgeBasedWireframeModel::*)( StepData_StepWriter & , const opencascade::handle<StepShape_EdgeBasedWireframeModel> & ) const>(&RWStepShape_RWEdgeBasedWireframeModel::WriteStep),
             R"#(Writes EdgeBasedWireframeModel)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWEdgeBasedWireframeModel::*)( const opencascade::handle<StepShape_EdgeBasedWireframeModel> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWEdgeBasedWireframeModel::*)( const opencascade::handle<StepShape_EdgeBasedWireframeModel> & , Interface_EntityIterator & ) const>(&RWStepShape_RWEdgeBasedWireframeModel::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWEdgeBasedWireframeShapeRepresentation , shared_ptr<RWStepShape_RWEdgeBasedWireframeShapeRepresentation> >>(m.attr("RWStepShape_RWEdgeBasedWireframeShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWEdgeBasedWireframeShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_EdgeBasedWireframeShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWEdgeBasedWireframeShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_EdgeBasedWireframeShapeRepresentation> & ) const>(&RWStepShape_RWEdgeBasedWireframeShapeRepresentation::ReadStep),
             R"#(Reads EdgeBasedWireframeShapeRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWEdgeBasedWireframeShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_EdgeBasedWireframeShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWEdgeBasedWireframeShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_EdgeBasedWireframeShapeRepresentation> & ) const>(&RWStepShape_RWEdgeBasedWireframeShapeRepresentation::WriteStep),
             R"#(Writes EdgeBasedWireframeShapeRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWEdgeBasedWireframeShapeRepresentation::*)( const opencascade::handle<StepShape_EdgeBasedWireframeShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWEdgeBasedWireframeShapeRepresentation::*)( const opencascade::handle<StepShape_EdgeBasedWireframeShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWEdgeBasedWireframeShapeRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWEdgeCurve , shared_ptr<RWStepShape_RWEdgeCurve> >>(m.attr("RWStepShape_RWEdgeCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWEdgeCurve::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_EdgeCurve> & ) const) static_cast<void (RWStepShape_RWEdgeCurve::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_EdgeCurve> & ) const>(&RWStepShape_RWEdgeCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWEdgeCurve::*)( StepData_StepWriter & , const opencascade::handle<StepShape_EdgeCurve> & ) const) static_cast<void (RWStepShape_RWEdgeCurve::*)( StepData_StepWriter & , const opencascade::handle<StepShape_EdgeCurve> & ) const>(&RWStepShape_RWEdgeCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWEdgeCurve::*)( const opencascade::handle<StepShape_EdgeCurve> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWEdgeCurve::*)( const opencascade::handle<StepShape_EdgeCurve> & , Interface_EntityIterator & ) const>(&RWStepShape_RWEdgeCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepShape_RWEdgeCurve::*)( const opencascade::handle<StepShape_EdgeCurve> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (RWStepShape_RWEdgeCurve::*)( const opencascade::handle<StepShape_EdgeCurve> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&RWStepShape_RWEdgeCurve::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWEdgeLoop , shared_ptr<RWStepShape_RWEdgeLoop> >>(m.attr("RWStepShape_RWEdgeLoop"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWEdgeLoop::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_EdgeLoop> & ) const) static_cast<void (RWStepShape_RWEdgeLoop::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_EdgeLoop> & ) const>(&RWStepShape_RWEdgeLoop::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWEdgeLoop::*)( StepData_StepWriter & , const opencascade::handle<StepShape_EdgeLoop> & ) const) static_cast<void (RWStepShape_RWEdgeLoop::*)( StepData_StepWriter & , const opencascade::handle<StepShape_EdgeLoop> & ) const>(&RWStepShape_RWEdgeLoop::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWEdgeLoop::*)( const opencascade::handle<StepShape_EdgeLoop> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWEdgeLoop::*)( const opencascade::handle<StepShape_EdgeLoop> & , Interface_EntityIterator & ) const>(&RWStepShape_RWEdgeLoop::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepShape_RWEdgeLoop::*)( const opencascade::handle<StepShape_EdgeLoop> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (RWStepShape_RWEdgeLoop::*)( const opencascade::handle<StepShape_EdgeLoop> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&RWStepShape_RWEdgeLoop::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWExtrudedAreaSolid , shared_ptr<RWStepShape_RWExtrudedAreaSolid> >>(m.attr("RWStepShape_RWExtrudedAreaSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWExtrudedAreaSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ExtrudedAreaSolid> & ) const) static_cast<void (RWStepShape_RWExtrudedAreaSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ExtrudedAreaSolid> & ) const>(&RWStepShape_RWExtrudedAreaSolid::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWExtrudedAreaSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ExtrudedAreaSolid> & ) const) static_cast<void (RWStepShape_RWExtrudedAreaSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ExtrudedAreaSolid> & ) const>(&RWStepShape_RWExtrudedAreaSolid::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWExtrudedAreaSolid::*)( const opencascade::handle<StepShape_ExtrudedAreaSolid> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWExtrudedAreaSolid::*)( const opencascade::handle<StepShape_ExtrudedAreaSolid> & , Interface_EntityIterator & ) const>(&RWStepShape_RWExtrudedAreaSolid::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWExtrudedFaceSolid , shared_ptr<RWStepShape_RWExtrudedFaceSolid> >>(m.attr("RWStepShape_RWExtrudedFaceSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWExtrudedFaceSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ExtrudedFaceSolid> & ) const) static_cast<void (RWStepShape_RWExtrudedFaceSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ExtrudedFaceSolid> & ) const>(&RWStepShape_RWExtrudedFaceSolid::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWExtrudedFaceSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ExtrudedFaceSolid> & ) const) static_cast<void (RWStepShape_RWExtrudedFaceSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ExtrudedFaceSolid> & ) const>(&RWStepShape_RWExtrudedFaceSolid::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWExtrudedFaceSolid::*)( const opencascade::handle<StepShape_ExtrudedFaceSolid> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWExtrudedFaceSolid::*)( const opencascade::handle<StepShape_ExtrudedFaceSolid> & , Interface_EntityIterator & ) const>(&RWStepShape_RWExtrudedFaceSolid::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFace , shared_ptr<RWStepShape_RWFace> >>(m.attr("RWStepShape_RWFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWFace::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Face> & ) const) static_cast<void (RWStepShape_RWFace::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Face> & ) const>(&RWStepShape_RWFace::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWFace::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Face> & ) const) static_cast<void (RWStepShape_RWFace::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Face> & ) const>(&RWStepShape_RWFace::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWFace::*)( const opencascade::handle<StepShape_Face> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWFace::*)( const opencascade::handle<StepShape_Face> & , Interface_EntityIterator & ) const>(&RWStepShape_RWFace::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFaceBasedSurfaceModel , shared_ptr<RWStepShape_RWFaceBasedSurfaceModel> >>(m.attr("RWStepShape_RWFaceBasedSurfaceModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWFaceBasedSurfaceModel::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FaceBasedSurfaceModel> & ) const) static_cast<void (RWStepShape_RWFaceBasedSurfaceModel::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FaceBasedSurfaceModel> & ) const>(&RWStepShape_RWFaceBasedSurfaceModel::ReadStep),
             R"#(Reads FaceBasedSurfaceModel)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWFaceBasedSurfaceModel::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FaceBasedSurfaceModel> & ) const) static_cast<void (RWStepShape_RWFaceBasedSurfaceModel::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FaceBasedSurfaceModel> & ) const>(&RWStepShape_RWFaceBasedSurfaceModel::WriteStep),
             R"#(Writes FaceBasedSurfaceModel)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWFaceBasedSurfaceModel::*)( const opencascade::handle<StepShape_FaceBasedSurfaceModel> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWFaceBasedSurfaceModel::*)( const opencascade::handle<StepShape_FaceBasedSurfaceModel> & , Interface_EntityIterator & ) const>(&RWStepShape_RWFaceBasedSurfaceModel::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFaceBound , shared_ptr<RWStepShape_RWFaceBound> >>(m.attr("RWStepShape_RWFaceBound"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWFaceBound::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FaceBound> & ) const) static_cast<void (RWStepShape_RWFaceBound::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FaceBound> & ) const>(&RWStepShape_RWFaceBound::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWFaceBound::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FaceBound> & ) const) static_cast<void (RWStepShape_RWFaceBound::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FaceBound> & ) const>(&RWStepShape_RWFaceBound::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWFaceBound::*)( const opencascade::handle<StepShape_FaceBound> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWFaceBound::*)( const opencascade::handle<StepShape_FaceBound> & , Interface_EntityIterator & ) const>(&RWStepShape_RWFaceBound::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
        .def("Check",
             (void (RWStepShape_RWFaceBound::*)( const opencascade::handle<StepShape_FaceBound> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (RWStepShape_RWFaceBound::*)( const opencascade::handle<StepShape_FaceBound> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&RWStepShape_RWFaceBound::Check),
             R"#(None)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFaceOuterBound , shared_ptr<RWStepShape_RWFaceOuterBound> >>(m.attr("RWStepShape_RWFaceOuterBound"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWFaceOuterBound::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FaceOuterBound> & ) const) static_cast<void (RWStepShape_RWFaceOuterBound::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FaceOuterBound> & ) const>(&RWStepShape_RWFaceOuterBound::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWFaceOuterBound::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FaceOuterBound> & ) const) static_cast<void (RWStepShape_RWFaceOuterBound::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FaceOuterBound> & ) const>(&RWStepShape_RWFaceOuterBound::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWFaceOuterBound::*)( const opencascade::handle<StepShape_FaceOuterBound> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWFaceOuterBound::*)( const opencascade::handle<StepShape_FaceOuterBound> & , Interface_EntityIterator & ) const>(&RWStepShape_RWFaceOuterBound::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFaceSurface , shared_ptr<RWStepShape_RWFaceSurface> >>(m.attr("RWStepShape_RWFaceSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWFaceSurface::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FaceSurface> & ) const) static_cast<void (RWStepShape_RWFaceSurface::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FaceSurface> & ) const>(&RWStepShape_RWFaceSurface::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWFaceSurface::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FaceSurface> & ) const) static_cast<void (RWStepShape_RWFaceSurface::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FaceSurface> & ) const>(&RWStepShape_RWFaceSurface::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWFaceSurface::*)( const opencascade::handle<StepShape_FaceSurface> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWFaceSurface::*)( const opencascade::handle<StepShape_FaceSurface> & , Interface_EntityIterator & ) const>(&RWStepShape_RWFaceSurface::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFacetedBrep , shared_ptr<RWStepShape_RWFacetedBrep> >>(m.attr("RWStepShape_RWFacetedBrep"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWFacetedBrep::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FacetedBrep> & ) const) static_cast<void (RWStepShape_RWFacetedBrep::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FacetedBrep> & ) const>(&RWStepShape_RWFacetedBrep::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWFacetedBrep::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FacetedBrep> & ) const) static_cast<void (RWStepShape_RWFacetedBrep::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FacetedBrep> & ) const>(&RWStepShape_RWFacetedBrep::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWFacetedBrep::*)( const opencascade::handle<StepShape_FacetedBrep> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWFacetedBrep::*)( const opencascade::handle<StepShape_FacetedBrep> & , Interface_EntityIterator & ) const>(&RWStepShape_RWFacetedBrep::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFacetedBrepAndBrepWithVoids , shared_ptr<RWStepShape_RWFacetedBrepAndBrepWithVoids> >>(m.attr("RWStepShape_RWFacetedBrepAndBrepWithVoids"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWFacetedBrepAndBrepWithVoids::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> & ) const) static_cast<void (RWStepShape_RWFacetedBrepAndBrepWithVoids::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> & ) const>(&RWStepShape_RWFacetedBrepAndBrepWithVoids::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWFacetedBrepAndBrepWithVoids::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> & ) const) static_cast<void (RWStepShape_RWFacetedBrepAndBrepWithVoids::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> & ) const>(&RWStepShape_RWFacetedBrepAndBrepWithVoids::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWFacetedBrepAndBrepWithVoids::*)( const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWFacetedBrepAndBrepWithVoids::*)( const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> & , Interface_EntityIterator & ) const>(&RWStepShape_RWFacetedBrepAndBrepWithVoids::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFacetedBrepShapeRepresentation , shared_ptr<RWStepShape_RWFacetedBrepShapeRepresentation> >>(m.attr("RWStepShape_RWFacetedBrepShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWFacetedBrepShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FacetedBrepShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWFacetedBrepShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_FacetedBrepShapeRepresentation> & ) const>(&RWStepShape_RWFacetedBrepShapeRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWFacetedBrepShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FacetedBrepShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWFacetedBrepShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_FacetedBrepShapeRepresentation> & ) const>(&RWStepShape_RWFacetedBrepShapeRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWFacetedBrepShapeRepresentation::*)( const opencascade::handle<StepShape_FacetedBrepShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWFacetedBrepShapeRepresentation::*)( const opencascade::handle<StepShape_FacetedBrepShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWFacetedBrepShapeRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWGeometricCurveSet , shared_ptr<RWStepShape_RWGeometricCurveSet> >>(m.attr("RWStepShape_RWGeometricCurveSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWGeometricCurveSet::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_GeometricCurveSet> & ) const) static_cast<void (RWStepShape_RWGeometricCurveSet::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_GeometricCurveSet> & ) const>(&RWStepShape_RWGeometricCurveSet::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWGeometricCurveSet::*)( StepData_StepWriter & , const opencascade::handle<StepShape_GeometricCurveSet> & ) const) static_cast<void (RWStepShape_RWGeometricCurveSet::*)( StepData_StepWriter & , const opencascade::handle<StepShape_GeometricCurveSet> & ) const>(&RWStepShape_RWGeometricCurveSet::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWGeometricCurveSet::*)( const opencascade::handle<StepShape_GeometricCurveSet> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWGeometricCurveSet::*)( const opencascade::handle<StepShape_GeometricCurveSet> & , Interface_EntityIterator & ) const>(&RWStepShape_RWGeometricCurveSet::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWGeometricSet , shared_ptr<RWStepShape_RWGeometricSet> >>(m.attr("RWStepShape_RWGeometricSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWGeometricSet::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_GeometricSet> & ) const) static_cast<void (RWStepShape_RWGeometricSet::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_GeometricSet> & ) const>(&RWStepShape_RWGeometricSet::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWGeometricSet::*)( StepData_StepWriter & , const opencascade::handle<StepShape_GeometricSet> & ) const) static_cast<void (RWStepShape_RWGeometricSet::*)( StepData_StepWriter & , const opencascade::handle<StepShape_GeometricSet> & ) const>(&RWStepShape_RWGeometricSet::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWGeometricSet::*)( const opencascade::handle<StepShape_GeometricSet> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWGeometricSet::*)( const opencascade::handle<StepShape_GeometricSet> & , Interface_EntityIterator & ) const>(&RWStepShape_RWGeometricSet::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation , shared_ptr<RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation> >>(m.attr("RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation> & ) const>(&RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation> & ) const>(&RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation::*)( const opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation::*)( const opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation , shared_ptr<RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation> >>(m.attr("RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation> & ) const>(&RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation> & ) const>(&RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation::*)( const opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation::*)( const opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWHalfSpaceSolid , shared_ptr<RWStepShape_RWHalfSpaceSolid> >>(m.attr("RWStepShape_RWHalfSpaceSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWHalfSpaceSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_HalfSpaceSolid> & ) const) static_cast<void (RWStepShape_RWHalfSpaceSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_HalfSpaceSolid> & ) const>(&RWStepShape_RWHalfSpaceSolid::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWHalfSpaceSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_HalfSpaceSolid> & ) const) static_cast<void (RWStepShape_RWHalfSpaceSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_HalfSpaceSolid> & ) const>(&RWStepShape_RWHalfSpaceSolid::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWHalfSpaceSolid::*)( const opencascade::handle<StepShape_HalfSpaceSolid> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWHalfSpaceSolid::*)( const opencascade::handle<StepShape_HalfSpaceSolid> & , Interface_EntityIterator & ) const>(&RWStepShape_RWHalfSpaceSolid::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWLimitsAndFits , shared_ptr<RWStepShape_RWLimitsAndFits> >>(m.attr("RWStepShape_RWLimitsAndFits"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWLimitsAndFits::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_LimitsAndFits> & ) const) static_cast<void (RWStepShape_RWLimitsAndFits::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_LimitsAndFits> & ) const>(&RWStepShape_RWLimitsAndFits::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWLimitsAndFits::*)( StepData_StepWriter & , const opencascade::handle<StepShape_LimitsAndFits> & ) const) static_cast<void (RWStepShape_RWLimitsAndFits::*)( StepData_StepWriter & , const opencascade::handle<StepShape_LimitsAndFits> & ) const>(&RWStepShape_RWLimitsAndFits::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWLoop , shared_ptr<RWStepShape_RWLoop> >>(m.attr("RWStepShape_RWLoop"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWLoop::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Loop> & ) const) static_cast<void (RWStepShape_RWLoop::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Loop> & ) const>(&RWStepShape_RWLoop::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWLoop::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Loop> & ) const) static_cast<void (RWStepShape_RWLoop::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Loop> & ) const>(&RWStepShape_RWLoop::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWLoopAndPath , shared_ptr<RWStepShape_RWLoopAndPath> >>(m.attr("RWStepShape_RWLoopAndPath"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWLoopAndPath::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_LoopAndPath> & ) const) static_cast<void (RWStepShape_RWLoopAndPath::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_LoopAndPath> & ) const>(&RWStepShape_RWLoopAndPath::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWLoopAndPath::*)( StepData_StepWriter & , const opencascade::handle<StepShape_LoopAndPath> & ) const) static_cast<void (RWStepShape_RWLoopAndPath::*)( StepData_StepWriter & , const opencascade::handle<StepShape_LoopAndPath> & ) const>(&RWStepShape_RWLoopAndPath::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWLoopAndPath::*)( const opencascade::handle<StepShape_LoopAndPath> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWLoopAndPath::*)( const opencascade::handle<StepShape_LoopAndPath> & , Interface_EntityIterator & ) const>(&RWStepShape_RWLoopAndPath::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWManifoldSolidBrep , shared_ptr<RWStepShape_RWManifoldSolidBrep> >>(m.attr("RWStepShape_RWManifoldSolidBrep"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWManifoldSolidBrep::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ManifoldSolidBrep> & ) const) static_cast<void (RWStepShape_RWManifoldSolidBrep::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ManifoldSolidBrep> & ) const>(&RWStepShape_RWManifoldSolidBrep::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWManifoldSolidBrep::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ManifoldSolidBrep> & ) const) static_cast<void (RWStepShape_RWManifoldSolidBrep::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ManifoldSolidBrep> & ) const>(&RWStepShape_RWManifoldSolidBrep::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWManifoldSolidBrep::*)( const opencascade::handle<StepShape_ManifoldSolidBrep> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWManifoldSolidBrep::*)( const opencascade::handle<StepShape_ManifoldSolidBrep> & , Interface_EntityIterator & ) const>(&RWStepShape_RWManifoldSolidBrep::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWManifoldSurfaceShapeRepresentation , shared_ptr<RWStepShape_RWManifoldSurfaceShapeRepresentation> >>(m.attr("RWStepShape_RWManifoldSurfaceShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWManifoldSurfaceShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWManifoldSurfaceShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation> & ) const>(&RWStepShape_RWManifoldSurfaceShapeRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWManifoldSurfaceShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWManifoldSurfaceShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation> & ) const>(&RWStepShape_RWManifoldSurfaceShapeRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWManifoldSurfaceShapeRepresentation::*)( const opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWManifoldSurfaceShapeRepresentation::*)( const opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWManifoldSurfaceShapeRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWMeasureQualification , shared_ptr<RWStepShape_RWMeasureQualification> >>(m.attr("RWStepShape_RWMeasureQualification"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWMeasureQualification::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_MeasureQualification> & ) const) static_cast<void (RWStepShape_RWMeasureQualification::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_MeasureQualification> & ) const>(&RWStepShape_RWMeasureQualification::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWMeasureQualification::*)( StepData_StepWriter & , const opencascade::handle<StepShape_MeasureQualification> & ) const) static_cast<void (RWStepShape_RWMeasureQualification::*)( StepData_StepWriter & , const opencascade::handle<StepShape_MeasureQualification> & ) const>(&RWStepShape_RWMeasureQualification::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWMeasureQualification::*)( const opencascade::handle<StepShape_MeasureQualification> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWMeasureQualification::*)( const opencascade::handle<StepShape_MeasureQualification> & , Interface_EntityIterator & ) const>(&RWStepShape_RWMeasureQualification::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem , shared_ptr<RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem> >>(m.attr("RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem> & ) const) static_cast<void (RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem> & ) const>(&RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem::*)( StepData_StepWriter & , const opencascade::handle<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem> & ) const) static_cast<void (RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem::*)( StepData_StepWriter & , const opencascade::handle<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem> & ) const>(&RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem::*)( const opencascade::handle<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem::*)( const opencascade::handle<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem> & , Interface_EntityIterator & ) const>(&RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWNonManifoldSurfaceShapeRepresentation , shared_ptr<RWStepShape_RWNonManifoldSurfaceShapeRepresentation> >>(m.attr("RWStepShape_RWNonManifoldSurfaceShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWNonManifoldSurfaceShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_NonManifoldSurfaceShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWNonManifoldSurfaceShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_NonManifoldSurfaceShapeRepresentation> & ) const>(&RWStepShape_RWNonManifoldSurfaceShapeRepresentation::ReadStep),
             R"#(Reads NonManifoldSurfaceShapeRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWNonManifoldSurfaceShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_NonManifoldSurfaceShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWNonManifoldSurfaceShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_NonManifoldSurfaceShapeRepresentation> & ) const>(&RWStepShape_RWNonManifoldSurfaceShapeRepresentation::WriteStep),
             R"#(Writes NonManifoldSurfaceShapeRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWNonManifoldSurfaceShapeRepresentation::*)( const opencascade::handle<StepShape_NonManifoldSurfaceShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWNonManifoldSurfaceShapeRepresentation::*)( const opencascade::handle<StepShape_NonManifoldSurfaceShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWNonManifoldSurfaceShapeRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOpenShell , shared_ptr<RWStepShape_RWOpenShell> >>(m.attr("RWStepShape_RWOpenShell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWOpenShell::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OpenShell> & ) const) static_cast<void (RWStepShape_RWOpenShell::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OpenShell> & ) const>(&RWStepShape_RWOpenShell::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWOpenShell::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OpenShell> & ) const) static_cast<void (RWStepShape_RWOpenShell::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OpenShell> & ) const>(&RWStepShape_RWOpenShell::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWOpenShell::*)( const opencascade::handle<StepShape_OpenShell> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWOpenShell::*)( const opencascade::handle<StepShape_OpenShell> & , Interface_EntityIterator & ) const>(&RWStepShape_RWOpenShell::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOrientedClosedShell , shared_ptr<RWStepShape_RWOrientedClosedShell> >>(m.attr("RWStepShape_RWOrientedClosedShell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWOrientedClosedShell::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OrientedClosedShell> & ) const) static_cast<void (RWStepShape_RWOrientedClosedShell::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OrientedClosedShell> & ) const>(&RWStepShape_RWOrientedClosedShell::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWOrientedClosedShell::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OrientedClosedShell> & ) const) static_cast<void (RWStepShape_RWOrientedClosedShell::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OrientedClosedShell> & ) const>(&RWStepShape_RWOrientedClosedShell::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWOrientedClosedShell::*)( const opencascade::handle<StepShape_OrientedClosedShell> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWOrientedClosedShell::*)( const opencascade::handle<StepShape_OrientedClosedShell> & , Interface_EntityIterator & ) const>(&RWStepShape_RWOrientedClosedShell::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOrientedEdge , shared_ptr<RWStepShape_RWOrientedEdge> >>(m.attr("RWStepShape_RWOrientedEdge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWOrientedEdge::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OrientedEdge> & ) const) static_cast<void (RWStepShape_RWOrientedEdge::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OrientedEdge> & ) const>(&RWStepShape_RWOrientedEdge::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWOrientedEdge::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OrientedEdge> & ) const) static_cast<void (RWStepShape_RWOrientedEdge::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OrientedEdge> & ) const>(&RWStepShape_RWOrientedEdge::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWOrientedEdge::*)( const opencascade::handle<StepShape_OrientedEdge> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWOrientedEdge::*)( const opencascade::handle<StepShape_OrientedEdge> & , Interface_EntityIterator & ) const>(&RWStepShape_RWOrientedEdge::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOrientedFace , shared_ptr<RWStepShape_RWOrientedFace> >>(m.attr("RWStepShape_RWOrientedFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWOrientedFace::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OrientedFace> & ) const) static_cast<void (RWStepShape_RWOrientedFace::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OrientedFace> & ) const>(&RWStepShape_RWOrientedFace::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWOrientedFace::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OrientedFace> & ) const) static_cast<void (RWStepShape_RWOrientedFace::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OrientedFace> & ) const>(&RWStepShape_RWOrientedFace::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWOrientedFace::*)( const opencascade::handle<StepShape_OrientedFace> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWOrientedFace::*)( const opencascade::handle<StepShape_OrientedFace> & , Interface_EntityIterator & ) const>(&RWStepShape_RWOrientedFace::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOrientedOpenShell , shared_ptr<RWStepShape_RWOrientedOpenShell> >>(m.attr("RWStepShape_RWOrientedOpenShell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWOrientedOpenShell::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OrientedOpenShell> & ) const) static_cast<void (RWStepShape_RWOrientedOpenShell::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OrientedOpenShell> & ) const>(&RWStepShape_RWOrientedOpenShell::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWOrientedOpenShell::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OrientedOpenShell> & ) const) static_cast<void (RWStepShape_RWOrientedOpenShell::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OrientedOpenShell> & ) const>(&RWStepShape_RWOrientedOpenShell::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWOrientedOpenShell::*)( const opencascade::handle<StepShape_OrientedOpenShell> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWOrientedOpenShell::*)( const opencascade::handle<StepShape_OrientedOpenShell> & , Interface_EntityIterator & ) const>(&RWStepShape_RWOrientedOpenShell::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOrientedPath , shared_ptr<RWStepShape_RWOrientedPath> >>(m.attr("RWStepShape_RWOrientedPath"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWOrientedPath::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OrientedPath> & ) const) static_cast<void (RWStepShape_RWOrientedPath::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_OrientedPath> & ) const>(&RWStepShape_RWOrientedPath::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWOrientedPath::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OrientedPath> & ) const) static_cast<void (RWStepShape_RWOrientedPath::*)( StepData_StepWriter & , const opencascade::handle<StepShape_OrientedPath> & ) const>(&RWStepShape_RWOrientedPath::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWOrientedPath::*)( const opencascade::handle<StepShape_OrientedPath> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWOrientedPath::*)( const opencascade::handle<StepShape_OrientedPath> & , Interface_EntityIterator & ) const>(&RWStepShape_RWOrientedPath::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWPath , shared_ptr<RWStepShape_RWPath> >>(m.attr("RWStepShape_RWPath"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWPath::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Path> & ) const) static_cast<void (RWStepShape_RWPath::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Path> & ) const>(&RWStepShape_RWPath::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWPath::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Path> & ) const) static_cast<void (RWStepShape_RWPath::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Path> & ) const>(&RWStepShape_RWPath::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWPath::*)( const opencascade::handle<StepShape_Path> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWPath::*)( const opencascade::handle<StepShape_Path> & , Interface_EntityIterator & ) const>(&RWStepShape_RWPath::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWPlusMinusTolerance , shared_ptr<RWStepShape_RWPlusMinusTolerance> >>(m.attr("RWStepShape_RWPlusMinusTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWPlusMinusTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_PlusMinusTolerance> & ) const) static_cast<void (RWStepShape_RWPlusMinusTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_PlusMinusTolerance> & ) const>(&RWStepShape_RWPlusMinusTolerance::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWPlusMinusTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepShape_PlusMinusTolerance> & ) const) static_cast<void (RWStepShape_RWPlusMinusTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepShape_PlusMinusTolerance> & ) const>(&RWStepShape_RWPlusMinusTolerance::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWPlusMinusTolerance::*)( const opencascade::handle<StepShape_PlusMinusTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWPlusMinusTolerance::*)( const opencascade::handle<StepShape_PlusMinusTolerance> & , Interface_EntityIterator & ) const>(&RWStepShape_RWPlusMinusTolerance::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWPointRepresentation , shared_ptr<RWStepShape_RWPointRepresentation> >>(m.attr("RWStepShape_RWPointRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWPointRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_PointRepresentation> & ) const) static_cast<void (RWStepShape_RWPointRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_PointRepresentation> & ) const>(&RWStepShape_RWPointRepresentation::ReadStep),
             R"#(Reads PointRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWPointRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_PointRepresentation> & ) const) static_cast<void (RWStepShape_RWPointRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_PointRepresentation> & ) const>(&RWStepShape_RWPointRepresentation::WriteStep),
             R"#(Writes PointRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWPointRepresentation::*)( const opencascade::handle<StepShape_PointRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWPointRepresentation::*)( const opencascade::handle<StepShape_PointRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWPointRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWPolyLoop , shared_ptr<RWStepShape_RWPolyLoop> >>(m.attr("RWStepShape_RWPolyLoop"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWPolyLoop::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_PolyLoop> & ) const) static_cast<void (RWStepShape_RWPolyLoop::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_PolyLoop> & ) const>(&RWStepShape_RWPolyLoop::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWPolyLoop::*)( StepData_StepWriter & , const opencascade::handle<StepShape_PolyLoop> & ) const) static_cast<void (RWStepShape_RWPolyLoop::*)( StepData_StepWriter & , const opencascade::handle<StepShape_PolyLoop> & ) const>(&RWStepShape_RWPolyLoop::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWPolyLoop::*)( const opencascade::handle<StepShape_PolyLoop> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWPolyLoop::*)( const opencascade::handle<StepShape_PolyLoop> & , Interface_EntityIterator & ) const>(&RWStepShape_RWPolyLoop::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWPrecisionQualifier , shared_ptr<RWStepShape_RWPrecisionQualifier> >>(m.attr("RWStepShape_RWPrecisionQualifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWPrecisionQualifier::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_PrecisionQualifier> & ) const) static_cast<void (RWStepShape_RWPrecisionQualifier::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_PrecisionQualifier> & ) const>(&RWStepShape_RWPrecisionQualifier::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWPrecisionQualifier::*)( StepData_StepWriter & , const opencascade::handle<StepShape_PrecisionQualifier> & ) const) static_cast<void (RWStepShape_RWPrecisionQualifier::*)( StepData_StepWriter & , const opencascade::handle<StepShape_PrecisionQualifier> & ) const>(&RWStepShape_RWPrecisionQualifier::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWQualifiedRepresentationItem , shared_ptr<RWStepShape_RWQualifiedRepresentationItem> >>(m.attr("RWStepShape_RWQualifiedRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWQualifiedRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_QualifiedRepresentationItem> & ) const) static_cast<void (RWStepShape_RWQualifiedRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_QualifiedRepresentationItem> & ) const>(&RWStepShape_RWQualifiedRepresentationItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWQualifiedRepresentationItem::*)( StepData_StepWriter & , const opencascade::handle<StepShape_QualifiedRepresentationItem> & ) const) static_cast<void (RWStepShape_RWQualifiedRepresentationItem::*)( StepData_StepWriter & , const opencascade::handle<StepShape_QualifiedRepresentationItem> & ) const>(&RWStepShape_RWQualifiedRepresentationItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWQualifiedRepresentationItem::*)( const opencascade::handle<StepShape_QualifiedRepresentationItem> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWQualifiedRepresentationItem::*)( const opencascade::handle<StepShape_QualifiedRepresentationItem> & , Interface_EntityIterator & ) const>(&RWStepShape_RWQualifiedRepresentationItem::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWRevolvedAreaSolid , shared_ptr<RWStepShape_RWRevolvedAreaSolid> >>(m.attr("RWStepShape_RWRevolvedAreaSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWRevolvedAreaSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_RevolvedAreaSolid> & ) const) static_cast<void (RWStepShape_RWRevolvedAreaSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_RevolvedAreaSolid> & ) const>(&RWStepShape_RWRevolvedAreaSolid::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWRevolvedAreaSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_RevolvedAreaSolid> & ) const) static_cast<void (RWStepShape_RWRevolvedAreaSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_RevolvedAreaSolid> & ) const>(&RWStepShape_RWRevolvedAreaSolid::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWRevolvedAreaSolid::*)( const opencascade::handle<StepShape_RevolvedAreaSolid> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWRevolvedAreaSolid::*)( const opencascade::handle<StepShape_RevolvedAreaSolid> & , Interface_EntityIterator & ) const>(&RWStepShape_RWRevolvedAreaSolid::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWRevolvedFaceSolid , shared_ptr<RWStepShape_RWRevolvedFaceSolid> >>(m.attr("RWStepShape_RWRevolvedFaceSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWRevolvedFaceSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_RevolvedFaceSolid> & ) const) static_cast<void (RWStepShape_RWRevolvedFaceSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_RevolvedFaceSolid> & ) const>(&RWStepShape_RWRevolvedFaceSolid::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWRevolvedFaceSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_RevolvedFaceSolid> & ) const) static_cast<void (RWStepShape_RWRevolvedFaceSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_RevolvedFaceSolid> & ) const>(&RWStepShape_RWRevolvedFaceSolid::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWRevolvedFaceSolid::*)( const opencascade::handle<StepShape_RevolvedFaceSolid> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWRevolvedFaceSolid::*)( const opencascade::handle<StepShape_RevolvedFaceSolid> & , Interface_EntityIterator & ) const>(&RWStepShape_RWRevolvedFaceSolid::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWRightAngularWedge , shared_ptr<RWStepShape_RWRightAngularWedge> >>(m.attr("RWStepShape_RWRightAngularWedge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWRightAngularWedge::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_RightAngularWedge> & ) const) static_cast<void (RWStepShape_RWRightAngularWedge::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_RightAngularWedge> & ) const>(&RWStepShape_RWRightAngularWedge::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWRightAngularWedge::*)( StepData_StepWriter & , const opencascade::handle<StepShape_RightAngularWedge> & ) const) static_cast<void (RWStepShape_RWRightAngularWedge::*)( StepData_StepWriter & , const opencascade::handle<StepShape_RightAngularWedge> & ) const>(&RWStepShape_RWRightAngularWedge::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWRightAngularWedge::*)( const opencascade::handle<StepShape_RightAngularWedge> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWRightAngularWedge::*)( const opencascade::handle<StepShape_RightAngularWedge> & , Interface_EntityIterator & ) const>(&RWStepShape_RWRightAngularWedge::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWRightCircularCone , shared_ptr<RWStepShape_RWRightCircularCone> >>(m.attr("RWStepShape_RWRightCircularCone"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWRightCircularCone::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_RightCircularCone> & ) const) static_cast<void (RWStepShape_RWRightCircularCone::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_RightCircularCone> & ) const>(&RWStepShape_RWRightCircularCone::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWRightCircularCone::*)( StepData_StepWriter & , const opencascade::handle<StepShape_RightCircularCone> & ) const) static_cast<void (RWStepShape_RWRightCircularCone::*)( StepData_StepWriter & , const opencascade::handle<StepShape_RightCircularCone> & ) const>(&RWStepShape_RWRightCircularCone::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWRightCircularCone::*)( const opencascade::handle<StepShape_RightCircularCone> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWRightCircularCone::*)( const opencascade::handle<StepShape_RightCircularCone> & , Interface_EntityIterator & ) const>(&RWStepShape_RWRightCircularCone::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWRightCircularCylinder , shared_ptr<RWStepShape_RWRightCircularCylinder> >>(m.attr("RWStepShape_RWRightCircularCylinder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWRightCircularCylinder::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_RightCircularCylinder> & ) const) static_cast<void (RWStepShape_RWRightCircularCylinder::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_RightCircularCylinder> & ) const>(&RWStepShape_RWRightCircularCylinder::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWRightCircularCylinder::*)( StepData_StepWriter & , const opencascade::handle<StepShape_RightCircularCylinder> & ) const) static_cast<void (RWStepShape_RWRightCircularCylinder::*)( StepData_StepWriter & , const opencascade::handle<StepShape_RightCircularCylinder> & ) const>(&RWStepShape_RWRightCircularCylinder::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWRightCircularCylinder::*)( const opencascade::handle<StepShape_RightCircularCylinder> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWRightCircularCylinder::*)( const opencascade::handle<StepShape_RightCircularCylinder> & , Interface_EntityIterator & ) const>(&RWStepShape_RWRightCircularCylinder::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSeamEdge , shared_ptr<RWStepShape_RWSeamEdge> >>(m.attr("RWStepShape_RWSeamEdge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWSeamEdge::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_SeamEdge> & ) const) static_cast<void (RWStepShape_RWSeamEdge::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_SeamEdge> & ) const>(&RWStepShape_RWSeamEdge::ReadStep),
             R"#(Reads SeamEdge)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWSeamEdge::*)( StepData_StepWriter & , const opencascade::handle<StepShape_SeamEdge> & ) const) static_cast<void (RWStepShape_RWSeamEdge::*)( StepData_StepWriter & , const opencascade::handle<StepShape_SeamEdge> & ) const>(&RWStepShape_RWSeamEdge::WriteStep),
             R"#(Writes SeamEdge)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWSeamEdge::*)( const opencascade::handle<StepShape_SeamEdge> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWSeamEdge::*)( const opencascade::handle<StepShape_SeamEdge> & , Interface_EntityIterator & ) const>(&RWStepShape_RWSeamEdge::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWShapeDefinitionRepresentation , shared_ptr<RWStepShape_RWShapeDefinitionRepresentation> >>(m.attr("RWStepShape_RWShapeDefinitionRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWShapeDefinitionRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ) const) static_cast<void (RWStepShape_RWShapeDefinitionRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ) const>(&RWStepShape_RWShapeDefinitionRepresentation::ReadStep),
             R"#(Reads ShapeDefinitionRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWShapeDefinitionRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ) const) static_cast<void (RWStepShape_RWShapeDefinitionRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & ) const>(&RWStepShape_RWShapeDefinitionRepresentation::WriteStep),
             R"#(Writes ShapeDefinitionRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWShapeDefinitionRepresentation::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWShapeDefinitionRepresentation::*)( const opencascade::handle<StepShape_ShapeDefinitionRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWShapeDefinitionRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWShapeDimensionRepresentation , shared_ptr<RWStepShape_RWShapeDimensionRepresentation> >>(m.attr("RWStepShape_RWShapeDimensionRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWShapeDimensionRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ShapeDimensionRepresentation> & ) const) static_cast<void (RWStepShape_RWShapeDimensionRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ShapeDimensionRepresentation> & ) const>(&RWStepShape_RWShapeDimensionRepresentation::ReadStep),
             R"#(Reads ShapeDimensionRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWShapeDimensionRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ShapeDimensionRepresentation> & ) const) static_cast<void (RWStepShape_RWShapeDimensionRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ShapeDimensionRepresentation> & ) const>(&RWStepShape_RWShapeDimensionRepresentation::WriteStep),
             R"#(Writes ShapeDimensionRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWShapeDimensionRepresentation::*)( const opencascade::handle<StepShape_ShapeDimensionRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWShapeDimensionRepresentation::*)( const opencascade::handle<StepShape_ShapeDimensionRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWShapeDimensionRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWShapeRepresentation , shared_ptr<RWStepShape_RWShapeRepresentation> >>(m.attr("RWStepShape_RWShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ShapeRepresentation> & ) const>(&RWStepShape_RWShapeRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ShapeRepresentation> & ) const>(&RWStepShape_RWShapeRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWShapeRepresentation::*)( const opencascade::handle<StepShape_ShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWShapeRepresentation::*)( const opencascade::handle<StepShape_ShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWShapeRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWShapeRepresentationWithParameters , shared_ptr<RWStepShape_RWShapeRepresentationWithParameters> >>(m.attr("RWStepShape_RWShapeRepresentationWithParameters"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWShapeRepresentationWithParameters::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ShapeRepresentationWithParameters> & ) const) static_cast<void (RWStepShape_RWShapeRepresentationWithParameters::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ShapeRepresentationWithParameters> & ) const>(&RWStepShape_RWShapeRepresentationWithParameters::ReadStep),
             R"#(Reads ShapeRepresentationWithParameters)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWShapeRepresentationWithParameters::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ShapeRepresentationWithParameters> & ) const) static_cast<void (RWStepShape_RWShapeRepresentationWithParameters::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ShapeRepresentationWithParameters> & ) const>(&RWStepShape_RWShapeRepresentationWithParameters::WriteStep),
             R"#(Writes ShapeRepresentationWithParameters)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWShapeRepresentationWithParameters::*)( const opencascade::handle<StepShape_ShapeRepresentationWithParameters> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWShapeRepresentationWithParameters::*)( const opencascade::handle<StepShape_ShapeRepresentationWithParameters> & , Interface_EntityIterator & ) const>(&RWStepShape_RWShapeRepresentationWithParameters::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWShellBasedSurfaceModel , shared_ptr<RWStepShape_RWShellBasedSurfaceModel> >>(m.attr("RWStepShape_RWShellBasedSurfaceModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWShellBasedSurfaceModel::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ShellBasedSurfaceModel> & ) const) static_cast<void (RWStepShape_RWShellBasedSurfaceModel::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ShellBasedSurfaceModel> & ) const>(&RWStepShape_RWShellBasedSurfaceModel::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWShellBasedSurfaceModel::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ShellBasedSurfaceModel> & ) const) static_cast<void (RWStepShape_RWShellBasedSurfaceModel::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ShellBasedSurfaceModel> & ) const>(&RWStepShape_RWShellBasedSurfaceModel::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWShellBasedSurfaceModel::*)( const opencascade::handle<StepShape_ShellBasedSurfaceModel> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWShellBasedSurfaceModel::*)( const opencascade::handle<StepShape_ShellBasedSurfaceModel> & , Interface_EntityIterator & ) const>(&RWStepShape_RWShellBasedSurfaceModel::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSolidModel , shared_ptr<RWStepShape_RWSolidModel> >>(m.attr("RWStepShape_RWSolidModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWSolidModel::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_SolidModel> & ) const) static_cast<void (RWStepShape_RWSolidModel::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_SolidModel> & ) const>(&RWStepShape_RWSolidModel::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWSolidModel::*)( StepData_StepWriter & , const opencascade::handle<StepShape_SolidModel> & ) const) static_cast<void (RWStepShape_RWSolidModel::*)( StepData_StepWriter & , const opencascade::handle<StepShape_SolidModel> & ) const>(&RWStepShape_RWSolidModel::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSolidReplica , shared_ptr<RWStepShape_RWSolidReplica> >>(m.attr("RWStepShape_RWSolidReplica"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWSolidReplica::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_SolidReplica> & ) const) static_cast<void (RWStepShape_RWSolidReplica::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_SolidReplica> & ) const>(&RWStepShape_RWSolidReplica::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWSolidReplica::*)( StepData_StepWriter & , const opencascade::handle<StepShape_SolidReplica> & ) const) static_cast<void (RWStepShape_RWSolidReplica::*)( StepData_StepWriter & , const opencascade::handle<StepShape_SolidReplica> & ) const>(&RWStepShape_RWSolidReplica::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWSolidReplica::*)( const opencascade::handle<StepShape_SolidReplica> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWSolidReplica::*)( const opencascade::handle<StepShape_SolidReplica> & , Interface_EntityIterator & ) const>(&RWStepShape_RWSolidReplica::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSphere , shared_ptr<RWStepShape_RWSphere> >>(m.attr("RWStepShape_RWSphere"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWSphere::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Sphere> & ) const) static_cast<void (RWStepShape_RWSphere::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Sphere> & ) const>(&RWStepShape_RWSphere::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWSphere::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Sphere> & ) const) static_cast<void (RWStepShape_RWSphere::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Sphere> & ) const>(&RWStepShape_RWSphere::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWSphere::*)( const opencascade::handle<StepShape_Sphere> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWSphere::*)( const opencascade::handle<StepShape_Sphere> & , Interface_EntityIterator & ) const>(&RWStepShape_RWSphere::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSubedge , shared_ptr<RWStepShape_RWSubedge> >>(m.attr("RWStepShape_RWSubedge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWSubedge::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Subedge> & ) const) static_cast<void (RWStepShape_RWSubedge::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Subedge> & ) const>(&RWStepShape_RWSubedge::ReadStep),
             R"#(Reads Subedge)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWSubedge::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Subedge> & ) const) static_cast<void (RWStepShape_RWSubedge::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Subedge> & ) const>(&RWStepShape_RWSubedge::WriteStep),
             R"#(Writes Subedge)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWSubedge::*)( const opencascade::handle<StepShape_Subedge> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWSubedge::*)( const opencascade::handle<StepShape_Subedge> & , Interface_EntityIterator & ) const>(&RWStepShape_RWSubedge::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSubface , shared_ptr<RWStepShape_RWSubface> >>(m.attr("RWStepShape_RWSubface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWSubface::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Subface> & ) const) static_cast<void (RWStepShape_RWSubface::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Subface> & ) const>(&RWStepShape_RWSubface::ReadStep),
             R"#(Reads Subface)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWSubface::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Subface> & ) const) static_cast<void (RWStepShape_RWSubface::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Subface> & ) const>(&RWStepShape_RWSubface::WriteStep),
             R"#(Writes Subface)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWSubface::*)( const opencascade::handle<StepShape_Subface> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWSubface::*)( const opencascade::handle<StepShape_Subface> & , Interface_EntityIterator & ) const>(&RWStepShape_RWSubface::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSweptAreaSolid , shared_ptr<RWStepShape_RWSweptAreaSolid> >>(m.attr("RWStepShape_RWSweptAreaSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWSweptAreaSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_SweptAreaSolid> & ) const) static_cast<void (RWStepShape_RWSweptAreaSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_SweptAreaSolid> & ) const>(&RWStepShape_RWSweptAreaSolid::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWSweptAreaSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_SweptAreaSolid> & ) const) static_cast<void (RWStepShape_RWSweptAreaSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_SweptAreaSolid> & ) const>(&RWStepShape_RWSweptAreaSolid::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWSweptAreaSolid::*)( const opencascade::handle<StepShape_SweptAreaSolid> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWSweptAreaSolid::*)( const opencascade::handle<StepShape_SweptAreaSolid> & , Interface_EntityIterator & ) const>(&RWStepShape_RWSweptAreaSolid::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSweptFaceSolid , shared_ptr<RWStepShape_RWSweptFaceSolid> >>(m.attr("RWStepShape_RWSweptFaceSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWSweptFaceSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_SweptFaceSolid> & ) const) static_cast<void (RWStepShape_RWSweptFaceSolid::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_SweptFaceSolid> & ) const>(&RWStepShape_RWSweptFaceSolid::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWSweptFaceSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_SweptFaceSolid> & ) const) static_cast<void (RWStepShape_RWSweptFaceSolid::*)( StepData_StepWriter & , const opencascade::handle<StepShape_SweptFaceSolid> & ) const>(&RWStepShape_RWSweptFaceSolid::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWSweptFaceSolid::*)( const opencascade::handle<StepShape_SweptFaceSolid> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWSweptFaceSolid::*)( const opencascade::handle<StepShape_SweptFaceSolid> & , Interface_EntityIterator & ) const>(&RWStepShape_RWSweptFaceSolid::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWToleranceValue , shared_ptr<RWStepShape_RWToleranceValue> >>(m.attr("RWStepShape_RWToleranceValue"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWToleranceValue::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ToleranceValue> & ) const) static_cast<void (RWStepShape_RWToleranceValue::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ToleranceValue> & ) const>(&RWStepShape_RWToleranceValue::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWToleranceValue::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ToleranceValue> & ) const) static_cast<void (RWStepShape_RWToleranceValue::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ToleranceValue> & ) const>(&RWStepShape_RWToleranceValue::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWToleranceValue::*)( const opencascade::handle<StepShape_ToleranceValue> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWToleranceValue::*)( const opencascade::handle<StepShape_ToleranceValue> & , Interface_EntityIterator & ) const>(&RWStepShape_RWToleranceValue::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWTopologicalRepresentationItem , shared_ptr<RWStepShape_RWTopologicalRepresentationItem> >>(m.attr("RWStepShape_RWTopologicalRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWTopologicalRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_TopologicalRepresentationItem> & ) const) static_cast<void (RWStepShape_RWTopologicalRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_TopologicalRepresentationItem> & ) const>(&RWStepShape_RWTopologicalRepresentationItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWTopologicalRepresentationItem::*)( StepData_StepWriter & , const opencascade::handle<StepShape_TopologicalRepresentationItem> & ) const) static_cast<void (RWStepShape_RWTopologicalRepresentationItem::*)( StepData_StepWriter & , const opencascade::handle<StepShape_TopologicalRepresentationItem> & ) const>(&RWStepShape_RWTopologicalRepresentationItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWTorus , shared_ptr<RWStepShape_RWTorus> >>(m.attr("RWStepShape_RWTorus"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWTorus::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Torus> & ) const) static_cast<void (RWStepShape_RWTorus::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Torus> & ) const>(&RWStepShape_RWTorus::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWTorus::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Torus> & ) const) static_cast<void (RWStepShape_RWTorus::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Torus> & ) const>(&RWStepShape_RWTorus::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWTorus::*)( const opencascade::handle<StepShape_Torus> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWTorus::*)( const opencascade::handle<StepShape_Torus> & , Interface_EntityIterator & ) const>(&RWStepShape_RWTorus::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWTransitionalShapeRepresentation , shared_ptr<RWStepShape_RWTransitionalShapeRepresentation> >>(m.attr("RWStepShape_RWTransitionalShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWTransitionalShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_TransitionalShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWTransitionalShapeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_TransitionalShapeRepresentation> & ) const>(&RWStepShape_RWTransitionalShapeRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWTransitionalShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_TransitionalShapeRepresentation> & ) const) static_cast<void (RWStepShape_RWTransitionalShapeRepresentation::*)( StepData_StepWriter & , const opencascade::handle<StepShape_TransitionalShapeRepresentation> & ) const>(&RWStepShape_RWTransitionalShapeRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWTransitionalShapeRepresentation::*)( const opencascade::handle<StepShape_TransitionalShapeRepresentation> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWTransitionalShapeRepresentation::*)( const opencascade::handle<StepShape_TransitionalShapeRepresentation> & , Interface_EntityIterator & ) const>(&RWStepShape_RWTransitionalShapeRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWTypeQualifier , shared_ptr<RWStepShape_RWTypeQualifier> >>(m.attr("RWStepShape_RWTypeQualifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWTypeQualifier::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_TypeQualifier> & ) const) static_cast<void (RWStepShape_RWTypeQualifier::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_TypeQualifier> & ) const>(&RWStepShape_RWTypeQualifier::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWTypeQualifier::*)( StepData_StepWriter & , const opencascade::handle<StepShape_TypeQualifier> & ) const) static_cast<void (RWStepShape_RWTypeQualifier::*)( StepData_StepWriter & , const opencascade::handle<StepShape_TypeQualifier> & ) const>(&RWStepShape_RWTypeQualifier::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWValueFormatTypeQualifier , shared_ptr<RWStepShape_RWValueFormatTypeQualifier> >>(m.attr("RWStepShape_RWValueFormatTypeQualifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWValueFormatTypeQualifier::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ValueFormatTypeQualifier> & ) const) static_cast<void (RWStepShape_RWValueFormatTypeQualifier::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_ValueFormatTypeQualifier> & ) const>(&RWStepShape_RWValueFormatTypeQualifier::ReadStep),
             R"#(Reads ValueFormatTypeQualifier)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWValueFormatTypeQualifier::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ValueFormatTypeQualifier> & ) const) static_cast<void (RWStepShape_RWValueFormatTypeQualifier::*)( StepData_StepWriter & , const opencascade::handle<StepShape_ValueFormatTypeQualifier> & ) const>(&RWStepShape_RWValueFormatTypeQualifier::WriteStep),
             R"#(Writes ValueFormatTypeQualifier)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWVertex , shared_ptr<RWStepShape_RWVertex> >>(m.attr("RWStepShape_RWVertex"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWVertex::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Vertex> & ) const) static_cast<void (RWStepShape_RWVertex::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_Vertex> & ) const>(&RWStepShape_RWVertex::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWVertex::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Vertex> & ) const) static_cast<void (RWStepShape_RWVertex::*)( StepData_StepWriter & , const opencascade::handle<StepShape_Vertex> & ) const>(&RWStepShape_RWVertex::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWVertexLoop , shared_ptr<RWStepShape_RWVertexLoop> >>(m.attr("RWStepShape_RWVertexLoop"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWVertexLoop::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_VertexLoop> & ) const) static_cast<void (RWStepShape_RWVertexLoop::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_VertexLoop> & ) const>(&RWStepShape_RWVertexLoop::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWVertexLoop::*)( StepData_StepWriter & , const opencascade::handle<StepShape_VertexLoop> & ) const) static_cast<void (RWStepShape_RWVertexLoop::*)( StepData_StepWriter & , const opencascade::handle<StepShape_VertexLoop> & ) const>(&RWStepShape_RWVertexLoop::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWVertexLoop::*)( const opencascade::handle<StepShape_VertexLoop> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWVertexLoop::*)( const opencascade::handle<StepShape_VertexLoop> & , Interface_EntityIterator & ) const>(&RWStepShape_RWVertexLoop::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWVertexPoint , shared_ptr<RWStepShape_RWVertexPoint> >>(m.attr("RWStepShape_RWVertexPoint"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepShape_RWVertexPoint::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_VertexPoint> & ) const) static_cast<void (RWStepShape_RWVertexPoint::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepShape_VertexPoint> & ) const>(&RWStepShape_RWVertexPoint::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepShape_RWVertexPoint::*)( StepData_StepWriter & , const opencascade::handle<StepShape_VertexPoint> & ) const) static_cast<void (RWStepShape_RWVertexPoint::*)( StepData_StepWriter & , const opencascade::handle<StepShape_VertexPoint> & ) const>(&RWStepShape_RWVertexPoint::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepShape_RWVertexPoint::*)( const opencascade::handle<StepShape_VertexPoint> & , Interface_EntityIterator & ) const) static_cast<void (RWStepShape_RWVertexPoint::*)( const opencascade::handle<StepShape_VertexPoint> & , Interface_EntityIterator & ) const>(&RWStepShape_RWVertexPoint::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\RWStepShape_RWManifoldSolidBrep.hxx
// ./opencascade\RWStepShape_RWBrepWithVoids.hxx
// ./opencascade\RWStepShape_RWOrientedEdge.hxx
// ./opencascade\RWStepShape_RWConnectedFaceSubSet.hxx
// ./opencascade\RWStepShape_RWDimensionalCharacteristicRepresentation.hxx
// ./opencascade\RWStepShape_RWFaceSurface.hxx
// ./opencascade\RWStepShape_RWPrecisionQualifier.hxx
// ./opencascade\RWStepShape_RWNonManifoldSurfaceShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWShapeRepresentationWithParameters.hxx
// ./opencascade\RWStepShape_RWRightCircularCone.hxx
// ./opencascade\RWStepShape_RWConnectedEdgeSet.hxx
// ./opencascade\RWStepShape_RWEdgeBasedWireframeShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWShapeDimensionRepresentation.hxx
// ./opencascade\RWStepShape_RWLoop.hxx
// ./opencascade\RWStepShape_RWBlock.hxx
// ./opencascade\RWStepShape_RWFacetedBrepAndBrepWithVoids.hxx
// ./opencascade\RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem.hxx
// ./opencascade\RWStepShape_RWOpenShell.hxx
// ./opencascade\RWStepShape_RWGeometricSet.hxx
// ./opencascade\RWStepShape_RWSolidModel.hxx
// ./opencascade\RWStepShape_RWSubedge.hxx
// ./opencascade\RWStepShape_RWHalfSpaceSolid.hxx
// ./opencascade\RWStepShape_RWFacetedBrepShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWAngularSize.hxx
// ./opencascade\RWStepShape_RWFaceOuterBound.hxx
// ./opencascade\RWStepShape_RWPath.hxx
// ./opencascade\RWStepShape_RWConnectedFaceSet.hxx
// ./opencascade\RWStepShape_RWCsgSolid.hxx
// ./opencascade\RWStepShape_RWShellBasedSurfaceModel.hxx
// ./opencascade\RWStepShape_RWToleranceValue.hxx
// ./opencascade\RWStepShape_RWAngularLocation.hxx
// ./opencascade\RWStepShape_RWSphere.hxx
// ./opencascade\RWStepShape_RWVertexLoop.hxx
// ./opencascade\RWStepShape_RWGeometricCurveSet.hxx
// ./opencascade\RWStepShape_RWSeamEdge.hxx
// ./opencascade\RWStepShape_RWExtrudedAreaSolid.hxx
// ./opencascade\RWStepShape_RWEdgeBasedWireframeModel.hxx
// ./opencascade\RWStepShape_RWFacetedBrep.hxx
// ./opencascade\RWStepShape_RWEdge.hxx
// ./opencascade\RWStepShape_RWDimensionalLocation.hxx
// ./opencascade\RWStepShape_RWOrientedPath.hxx
// ./opencascade\RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWShapeDefinitionRepresentation.hxx
// ./opencascade\RWStepShape_RWTopologicalRepresentationItem.hxx
// ./opencascade\RWStepShape_RWClosedShell.hxx
// ./opencascade\RWStepShape_RWDimensionalSizeWithPath.hxx
// ./opencascade\RWStepShape_RWCsgShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWPlusMinusTolerance.hxx
// ./opencascade\RWStepShape_RWDimensionalLocationWithPath.hxx
// ./opencascade\RWStepShape_RWPointRepresentation.hxx
// ./opencascade\RWStepShape_RWLimitsAndFits.hxx
// ./opencascade\RWStepShape_RWFace.hxx
// ./opencascade\RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWAdvancedFace.hxx
// ./opencascade\RWStepShape_RWManifoldSurfaceShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWSweptAreaSolid.hxx
// ./opencascade\RWStepShape_RWFaceBasedSurfaceModel.hxx
// ./opencascade\RWStepShape_RWBooleanResult.hxx
// ./opencascade\RWStepShape_RWConnectedFaceShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWTransitionalShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWTypeQualifier.hxx
// ./opencascade\RWStepShape_RWRightCircularCylinder.hxx
// ./opencascade\RWStepShape_RWOrientedFace.hxx
// ./opencascade\RWStepShape_RWExtrudedFaceSolid.hxx
// ./opencascade\RWStepShape_RWLoopAndPath.hxx
// ./opencascade\RWStepShape_RWSweptFaceSolid.hxx
// ./opencascade\RWStepShape_RWRevolvedFaceSolid.hxx
// ./opencascade\RWStepShape_RWVertex.hxx
// ./opencascade\RWStepShape_RWShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWSubface.hxx
// ./opencascade\RWStepShape_RWRevolvedAreaSolid.hxx
// ./opencascade\RWStepShape_RWEdgeLoop.hxx
// ./opencascade\RWStepShape_RWOrientedOpenShell.hxx
// ./opencascade\RWStepShape_RWDimensionalSize.hxx
// ./opencascade\RWStepShape_RWAdvancedBrepShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWQualifiedRepresentationItem.hxx
// ./opencascade\RWStepShape_RWPolyLoop.hxx
// ./opencascade\RWStepShape_RWRightAngularWedge.hxx
// ./opencascade\RWStepShape_RWValueFormatTypeQualifier.hxx
// ./opencascade\RWStepShape_RWOrientedClosedShell.hxx
// ./opencascade\RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWSolidReplica.hxx
// ./opencascade\RWStepShape_RWBoxedHalfSpace.hxx
// ./opencascade\RWStepShape_RWContextDependentShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWTorus.hxx
// ./opencascade\RWStepShape_RWMeasureQualification.hxx
// ./opencascade\RWStepShape_RWCompoundShapeRepresentation.hxx
// ./opencascade\RWStepShape_RWEdgeCurve.hxx
// ./opencascade\RWStepShape_RWBoxDomain.hxx
// ./opencascade\RWStepShape_RWFaceBound.hxx
// ./opencascade\RWStepShape_RWVertexPoint.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
