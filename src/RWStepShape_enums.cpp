
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
#include <StepShape_FaceSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_QualifiedRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PrecisionQualifier.hxx>
#include <StepData_StepWriter.hxx>
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
#include <StepShape_SeamEdge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SolidReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedFaceSubSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OpenShell.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BoxDomain.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_EdgeBasedWireframeShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RightAngularWedge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_CsgSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeDimensionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ManifoldSurfaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Vertex.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PointRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeRepresentationWithParameters.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FacetedBrepShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Path.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_EdgeBasedWireframeModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedFace.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_VertexLoop.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RevolvedAreaSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Loop.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Edge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_TransitionalShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_CompoundShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedEdge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PlusMinusTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FaceBasedSurfaceModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AdvancedFace.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Subface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedClosedShell.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalLocationWithPath.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RightCircularCone.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RevolvedFaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FaceOuterBound.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SolidModel.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SweptAreaSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricCurveSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AngularSize.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ValueFormatTypeQualifier.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Subedge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedPath.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Torus.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ToleranceValue.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ExtrudedFaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SweptFaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_VertexPoint.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_HalfSpaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AdvancedBrepShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PolyLoop.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RightCircularCylinder.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DefinitionalRepresentationAndShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_CsgShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalCharacteristicRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Face.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BoxedHalfSpace.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedEdgeSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedOpenShell.hxx>
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
#include <StepShape_Block.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_TypeQualifier.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedFaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ExtrudedAreaSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalSizeWithPath.hxx>
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
#include <StepShape_NonManifoldSurfaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_LoopAndPath.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_MeasureQualification.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_LimitsAndFits.hxx>
#include <StepData_StepWriter.hxx>

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
void register_RWStepShape_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepShape", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStepShape_RWAdvancedBrepShapeRepresentation , shared_ptr<RWStepShape_RWAdvancedBrepShapeRepresentation>  >(m,"RWStepShape_RWAdvancedBrepShapeRepresentation",R"#(Read & Write Module for AdvancedBrepShapeRepresentation)#");
    py::class_<RWStepShape_RWAdvancedFace , shared_ptr<RWStepShape_RWAdvancedFace>  >(m,"RWStepShape_RWAdvancedFace",R"#(Read & Write Module for AdvancedFace)#");
    py::class_<RWStepShape_RWAngularLocation , shared_ptr<RWStepShape_RWAngularLocation>  >(m,"RWStepShape_RWAngularLocation",R"#(Read & Write tool for AngularLocation)#");
    py::class_<RWStepShape_RWAngularSize , shared_ptr<RWStepShape_RWAngularSize>  >(m,"RWStepShape_RWAngularSize",R"#(Read & Write tool for AngularSize)#");
    py::class_<RWStepShape_RWBlock , shared_ptr<RWStepShape_RWBlock>  >(m,"RWStepShape_RWBlock",R"#(Read & Write Module for Block)#");
    py::class_<RWStepShape_RWBooleanResult , shared_ptr<RWStepShape_RWBooleanResult>  >(m,"RWStepShape_RWBooleanResult",R"#(Read & Write Module for BooleanResult)#");
    py::class_<RWStepShape_RWBoxDomain , shared_ptr<RWStepShape_RWBoxDomain>  >(m,"RWStepShape_RWBoxDomain",R"#(Read & Write Module for BoxDomain)#");
    py::class_<RWStepShape_RWBoxedHalfSpace , shared_ptr<RWStepShape_RWBoxedHalfSpace>  >(m,"RWStepShape_RWBoxedHalfSpace",R"#(Read & Write Module for BoxedHalfSpace)#");
    py::class_<RWStepShape_RWBrepWithVoids , shared_ptr<RWStepShape_RWBrepWithVoids>  >(m,"RWStepShape_RWBrepWithVoids",R"#(Read & Write Module for BrepWithVoids)#");
    py::class_<RWStepShape_RWClosedShell , shared_ptr<RWStepShape_RWClosedShell>  >(m,"RWStepShape_RWClosedShell",R"#(Read & Write Module for ClosedShell)#");
    py::class_<RWStepShape_RWCompoundShapeRepresentation , shared_ptr<RWStepShape_RWCompoundShapeRepresentation>  >(m,"RWStepShape_RWCompoundShapeRepresentation",R"#(Read & Write tool for CompoundShapeRepresentation)#");
    py::class_<RWStepShape_RWConnectedEdgeSet , shared_ptr<RWStepShape_RWConnectedEdgeSet>  >(m,"RWStepShape_RWConnectedEdgeSet",R"#(Read & Write tool for ConnectedEdgeSet)#");
    py::class_<RWStepShape_RWConnectedFaceSet , shared_ptr<RWStepShape_RWConnectedFaceSet>  >(m,"RWStepShape_RWConnectedFaceSet",R"#(Read & Write Module for ConnectedFaceSet)#");
    py::class_<RWStepShape_RWConnectedFaceShapeRepresentation , shared_ptr<RWStepShape_RWConnectedFaceShapeRepresentation>  >(m,"RWStepShape_RWConnectedFaceShapeRepresentation",R"#(Read & Write tool for ConnectedFaceShapeRepresentation)#");
    py::class_<RWStepShape_RWConnectedFaceSubSet , shared_ptr<RWStepShape_RWConnectedFaceSubSet>  >(m,"RWStepShape_RWConnectedFaceSubSet",R"#(Read & Write tool for ConnectedFaceSubSet)#");
    py::class_<RWStepShape_RWContextDependentShapeRepresentation , shared_ptr<RWStepShape_RWContextDependentShapeRepresentation>  >(m,"RWStepShape_RWContextDependentShapeRepresentation",R"#(Read & Write Module for ContextDependentShapeRepresentation)#");
    py::class_<RWStepShape_RWCsgShapeRepresentation , shared_ptr<RWStepShape_RWCsgShapeRepresentation>  >(m,"RWStepShape_RWCsgShapeRepresentation",R"#(Read & Write Module for CsgShapeRepresentation)#");
    py::class_<RWStepShape_RWCsgSolid , shared_ptr<RWStepShape_RWCsgSolid>  >(m,"RWStepShape_RWCsgSolid",R"#(Read & Write Module for CsgSolid)#");
    py::class_<RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation , shared_ptr<RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation>  >(m,"RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation",R"#(Read & Write Module for ConversionBasedUnitAndLengthUnit)#");
    py::class_<RWStepShape_RWDimensionalCharacteristicRepresentation , shared_ptr<RWStepShape_RWDimensionalCharacteristicRepresentation>  >(m,"RWStepShape_RWDimensionalCharacteristicRepresentation",R"#(Read & Write tool for DimensionalCharacteristicRepresentation)#");
    py::class_<RWStepShape_RWDimensionalLocation , shared_ptr<RWStepShape_RWDimensionalLocation>  >(m,"RWStepShape_RWDimensionalLocation",R"#(Read & Write tool for DimensionalLocation)#");
    py::class_<RWStepShape_RWDimensionalLocationWithPath , shared_ptr<RWStepShape_RWDimensionalLocationWithPath>  >(m,"RWStepShape_RWDimensionalLocationWithPath",R"#(Read & Write tool for DimensionalLocationWithPath)#");
    py::class_<RWStepShape_RWDimensionalSize , shared_ptr<RWStepShape_RWDimensionalSize>  >(m,"RWStepShape_RWDimensionalSize",R"#(Read & Write tool for DimensionalSize)#");
    py::class_<RWStepShape_RWDimensionalSizeWithPath , shared_ptr<RWStepShape_RWDimensionalSizeWithPath>  >(m,"RWStepShape_RWDimensionalSizeWithPath",R"#(Read & Write tool for DimensionalSizeWithPath)#");
    py::class_<RWStepShape_RWEdge , shared_ptr<RWStepShape_RWEdge>  >(m,"RWStepShape_RWEdge",R"#(Read & Write Module for Edge)#");
    py::class_<RWStepShape_RWEdgeBasedWireframeModel , shared_ptr<RWStepShape_RWEdgeBasedWireframeModel>  >(m,"RWStepShape_RWEdgeBasedWireframeModel",R"#(Read & Write tool for EdgeBasedWireframeModel)#");
    py::class_<RWStepShape_RWEdgeBasedWireframeShapeRepresentation , shared_ptr<RWStepShape_RWEdgeBasedWireframeShapeRepresentation>  >(m,"RWStepShape_RWEdgeBasedWireframeShapeRepresentation",R"#(Read & Write tool for EdgeBasedWireframeShapeRepresentation)#");
    py::class_<RWStepShape_RWEdgeCurve , shared_ptr<RWStepShape_RWEdgeCurve>  >(m,"RWStepShape_RWEdgeCurve",R"#(Read & Write Module for EdgeCurve Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepShape_RWEdgeLoop , shared_ptr<RWStepShape_RWEdgeLoop>  >(m,"RWStepShape_RWEdgeLoop",R"#(Read & Write Module for EdgeLoop Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepShape_RWExtrudedAreaSolid , shared_ptr<RWStepShape_RWExtrudedAreaSolid>  >(m,"RWStepShape_RWExtrudedAreaSolid",R"#(Read & Write Module for ExtrudedAreaSolid)#");
    py::class_<RWStepShape_RWExtrudedFaceSolid , shared_ptr<RWStepShape_RWExtrudedFaceSolid>  >(m,"RWStepShape_RWExtrudedFaceSolid",R"#(Read & Write Module for ExtrudedFaceSolid)#");
    py::class_<RWStepShape_RWFace , shared_ptr<RWStepShape_RWFace>  >(m,"RWStepShape_RWFace",R"#(Read & Write Module for Face)#");
    py::class_<RWStepShape_RWFaceBasedSurfaceModel , shared_ptr<RWStepShape_RWFaceBasedSurfaceModel>  >(m,"RWStepShape_RWFaceBasedSurfaceModel",R"#(Read & Write tool for FaceBasedSurfaceModel)#");
    py::class_<RWStepShape_RWFaceBound , shared_ptr<RWStepShape_RWFaceBound>  >(m,"RWStepShape_RWFaceBound",R"#(Read & Write Module for FaceBound Check added by CKY , 7-OCT-1996)#");
    py::class_<RWStepShape_RWFaceOuterBound , shared_ptr<RWStepShape_RWFaceOuterBound>  >(m,"RWStepShape_RWFaceOuterBound",R"#(Read & Write Module for FaceOuterBound)#");
    py::class_<RWStepShape_RWFaceSurface , shared_ptr<RWStepShape_RWFaceSurface>  >(m,"RWStepShape_RWFaceSurface",R"#(Read & Write Module for FaceSurface)#");
    py::class_<RWStepShape_RWFacetedBrep , shared_ptr<RWStepShape_RWFacetedBrep>  >(m,"RWStepShape_RWFacetedBrep",R"#(Read & Write Module for FacetedBrep)#");
    py::class_<RWStepShape_RWFacetedBrepAndBrepWithVoids , shared_ptr<RWStepShape_RWFacetedBrepAndBrepWithVoids>  >(m,"RWStepShape_RWFacetedBrepAndBrepWithVoids",R"#(Read & Write Module for FacetedBrepAndBrepWithVoids)#");
    py::class_<RWStepShape_RWFacetedBrepShapeRepresentation , shared_ptr<RWStepShape_RWFacetedBrepShapeRepresentation>  >(m,"RWStepShape_RWFacetedBrepShapeRepresentation",R"#(Read & Write Module for FacetedBrepShapeRepresentation)#");
    py::class_<RWStepShape_RWGeometricCurveSet , shared_ptr<RWStepShape_RWGeometricCurveSet>  >(m,"RWStepShape_RWGeometricCurveSet",R"#(Read & Write Module for GeometricCurveSet)#");
    py::class_<RWStepShape_RWGeometricSet , shared_ptr<RWStepShape_RWGeometricSet>  >(m,"RWStepShape_RWGeometricSet",R"#(Read & Write Module for GeometricSet)#");
    py::class_<RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation , shared_ptr<RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation>  >(m,"RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation",R"#(Read & Write Module for GeometricallyBoundedSurfaceShapeRepresentation)#");
    py::class_<RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation , shared_ptr<RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation>  >(m,"RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation",R"#(Read & Write Module for GeometricallyBoundedWireframeShapeRepresentation)#");
    py::class_<RWStepShape_RWHalfSpaceSolid , shared_ptr<RWStepShape_RWHalfSpaceSolid>  >(m,"RWStepShape_RWHalfSpaceSolid",R"#(Read & Write Module for HalfSpaceSolid)#");
    py::class_<RWStepShape_RWLimitsAndFits , shared_ptr<RWStepShape_RWLimitsAndFits>  >(m,"RWStepShape_RWLimitsAndFits",R"#(Read & Write Module for LimitsAndFits)#");
    py::class_<RWStepShape_RWLoop , shared_ptr<RWStepShape_RWLoop>  >(m,"RWStepShape_RWLoop",R"#(Read & Write Module for Loop)#");
    py::class_<RWStepShape_RWLoopAndPath , shared_ptr<RWStepShape_RWLoopAndPath>  >(m,"RWStepShape_RWLoopAndPath",R"#(Read & Write Module for LoopAndPath)#");
    py::class_<RWStepShape_RWManifoldSolidBrep , shared_ptr<RWStepShape_RWManifoldSolidBrep>  >(m,"RWStepShape_RWManifoldSolidBrep",R"#(Read & Write Module for ManifoldSolidBrep)#");
    py::class_<RWStepShape_RWManifoldSurfaceShapeRepresentation , shared_ptr<RWStepShape_RWManifoldSurfaceShapeRepresentation>  >(m,"RWStepShape_RWManifoldSurfaceShapeRepresentation",R"#(Read & Write Module for ManifoldSurfaceShapeRepresentation)#");
    py::class_<RWStepShape_RWMeasureQualification , shared_ptr<RWStepShape_RWMeasureQualification>  >(m,"RWStepShape_RWMeasureQualification",R"#(Read & Write Module for MeasureQualification)#");
    py::class_<RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem , shared_ptr<RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem>  >(m,"RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem",R"#(Read & Write Module for MeasureRepresentationItemAndQualifiedRepresentationItem)#");
    py::class_<RWStepShape_RWNonManifoldSurfaceShapeRepresentation , shared_ptr<RWStepShape_RWNonManifoldSurfaceShapeRepresentation>  >(m,"RWStepShape_RWNonManifoldSurfaceShapeRepresentation",R"#(Read & Write tool for NonManifoldSurfaceShapeRepresentation)#");
    py::class_<RWStepShape_RWOpenShell , shared_ptr<RWStepShape_RWOpenShell>  >(m,"RWStepShape_RWOpenShell",R"#(Read & Write Module for OpenShell)#");
    py::class_<RWStepShape_RWOrientedClosedShell , shared_ptr<RWStepShape_RWOrientedClosedShell>  >(m,"RWStepShape_RWOrientedClosedShell",R"#(Read & Write Module for OrientedClosedShell)#");
    py::class_<RWStepShape_RWOrientedEdge , shared_ptr<RWStepShape_RWOrientedEdge>  >(m,"RWStepShape_RWOrientedEdge",R"#(Read & Write Module for OrientedEdge)#");
    py::class_<RWStepShape_RWOrientedFace , shared_ptr<RWStepShape_RWOrientedFace>  >(m,"RWStepShape_RWOrientedFace",R"#(Read & Write Module for OrientedFace)#");
    py::class_<RWStepShape_RWOrientedOpenShell , shared_ptr<RWStepShape_RWOrientedOpenShell>  >(m,"RWStepShape_RWOrientedOpenShell",R"#(Read & Write Module for OrientedOpenShell)#");
    py::class_<RWStepShape_RWOrientedPath , shared_ptr<RWStepShape_RWOrientedPath>  >(m,"RWStepShape_RWOrientedPath",R"#(Read & Write Module for OrientedPath)#");
    py::class_<RWStepShape_RWPath , shared_ptr<RWStepShape_RWPath>  >(m,"RWStepShape_RWPath",R"#(Read & Write Module for Path)#");
    py::class_<RWStepShape_RWPlusMinusTolerance , shared_ptr<RWStepShape_RWPlusMinusTolerance>  >(m,"RWStepShape_RWPlusMinusTolerance",R"#(Read & Write Module for PlusMinusTolerance)#");
    py::class_<RWStepShape_RWPointRepresentation , shared_ptr<RWStepShape_RWPointRepresentation>  >(m,"RWStepShape_RWPointRepresentation",R"#(Read & Write tool for PointRepresentation)#");
    py::class_<RWStepShape_RWPolyLoop , shared_ptr<RWStepShape_RWPolyLoop>  >(m,"RWStepShape_RWPolyLoop",R"#(Read & Write Module for PolyLoop)#");
    py::class_<RWStepShape_RWPrecisionQualifier , shared_ptr<RWStepShape_RWPrecisionQualifier>  >(m,"RWStepShape_RWPrecisionQualifier",R"#(Read & Write Module for PrecisionQualifier)#");
    py::class_<RWStepShape_RWQualifiedRepresentationItem , shared_ptr<RWStepShape_RWQualifiedRepresentationItem>  >(m,"RWStepShape_RWQualifiedRepresentationItem",R"#(Read & Write Module for QualifiedRepresentationItem)#");
    py::class_<RWStepShape_RWRevolvedAreaSolid , shared_ptr<RWStepShape_RWRevolvedAreaSolid>  >(m,"RWStepShape_RWRevolvedAreaSolid",R"#(Read & Write Module for RevolvedAreaSolid)#");
    py::class_<RWStepShape_RWRevolvedFaceSolid , shared_ptr<RWStepShape_RWRevolvedFaceSolid>  >(m,"RWStepShape_RWRevolvedFaceSolid",R"#(None)#");
    py::class_<RWStepShape_RWRightAngularWedge , shared_ptr<RWStepShape_RWRightAngularWedge>  >(m,"RWStepShape_RWRightAngularWedge",R"#(Read & Write Module for RightAngularWedge)#");
    py::class_<RWStepShape_RWRightCircularCone , shared_ptr<RWStepShape_RWRightCircularCone>  >(m,"RWStepShape_RWRightCircularCone",R"#(Read & Write Module for RightCircularCone)#");
    py::class_<RWStepShape_RWRightCircularCylinder , shared_ptr<RWStepShape_RWRightCircularCylinder>  >(m,"RWStepShape_RWRightCircularCylinder",R"#(Read & Write Module for RightCircularCylinder)#");
    py::class_<RWStepShape_RWSeamEdge , shared_ptr<RWStepShape_RWSeamEdge>  >(m,"RWStepShape_RWSeamEdge",R"#(Read & Write tool for SeamEdge)#");
    py::class_<RWStepShape_RWShapeDefinitionRepresentation , shared_ptr<RWStepShape_RWShapeDefinitionRepresentation>  >(m,"RWStepShape_RWShapeDefinitionRepresentation",R"#(Read & Write tool for ShapeDefinitionRepresentation)#");
    py::class_<RWStepShape_RWShapeDimensionRepresentation , shared_ptr<RWStepShape_RWShapeDimensionRepresentation>  >(m,"RWStepShape_RWShapeDimensionRepresentation",R"#(Read & Write tool for ShapeDimensionRepresentation)#");
    py::class_<RWStepShape_RWShapeRepresentation , shared_ptr<RWStepShape_RWShapeRepresentation>  >(m,"RWStepShape_RWShapeRepresentation",R"#(Read & Write Module for ShapeRepresentation)#");
    py::class_<RWStepShape_RWShapeRepresentationWithParameters , shared_ptr<RWStepShape_RWShapeRepresentationWithParameters>  >(m,"RWStepShape_RWShapeRepresentationWithParameters",R"#(Read & Write tool for ShapeRepresentationWithParameters)#");
    py::class_<RWStepShape_RWShellBasedSurfaceModel , shared_ptr<RWStepShape_RWShellBasedSurfaceModel>  >(m,"RWStepShape_RWShellBasedSurfaceModel",R"#(Read & Write Module for ShellBasedSurfaceModel)#");
    py::class_<RWStepShape_RWSolidModel , shared_ptr<RWStepShape_RWSolidModel>  >(m,"RWStepShape_RWSolidModel",R"#(Read & Write Module for SolidModel)#");
    py::class_<RWStepShape_RWSolidReplica , shared_ptr<RWStepShape_RWSolidReplica>  >(m,"RWStepShape_RWSolidReplica",R"#(Read & Write Module for SolidReplica)#");
    py::class_<RWStepShape_RWSphere , shared_ptr<RWStepShape_RWSphere>  >(m,"RWStepShape_RWSphere",R"#(Read & Write Module for Sphere)#");
    py::class_<RWStepShape_RWSubedge , shared_ptr<RWStepShape_RWSubedge>  >(m,"RWStepShape_RWSubedge",R"#(Read & Write tool for Subedge)#");
    py::class_<RWStepShape_RWSubface , shared_ptr<RWStepShape_RWSubface>  >(m,"RWStepShape_RWSubface",R"#(Read & Write tool for Subface)#");
    py::class_<RWStepShape_RWSweptAreaSolid , shared_ptr<RWStepShape_RWSweptAreaSolid>  >(m,"RWStepShape_RWSweptAreaSolid",R"#(Read & Write Module for SweptAreaSolid)#");
    py::class_<RWStepShape_RWSweptFaceSolid , shared_ptr<RWStepShape_RWSweptFaceSolid>  >(m,"RWStepShape_RWSweptFaceSolid",R"#(Read & Write Module for SweptFaceSolid)#");
    py::class_<RWStepShape_RWToleranceValue , shared_ptr<RWStepShape_RWToleranceValue>  >(m,"RWStepShape_RWToleranceValue",R"#(Read & Write Module for ToleranceValue)#");
    py::class_<RWStepShape_RWTopologicalRepresentationItem , shared_ptr<RWStepShape_RWTopologicalRepresentationItem>  >(m,"RWStepShape_RWTopologicalRepresentationItem",R"#(Read & Write Module for TopologicalRepresentationItem)#");
    py::class_<RWStepShape_RWTorus , shared_ptr<RWStepShape_RWTorus>  >(m,"RWStepShape_RWTorus",R"#(Read & Write Module for Torus)#");
    py::class_<RWStepShape_RWTransitionalShapeRepresentation , shared_ptr<RWStepShape_RWTransitionalShapeRepresentation>  >(m,"RWStepShape_RWTransitionalShapeRepresentation",R"#(Read & Write Module for TransitionalShapeRepresentation)#");
    py::class_<RWStepShape_RWTypeQualifier , shared_ptr<RWStepShape_RWTypeQualifier>  >(m,"RWStepShape_RWTypeQualifier",R"#(Read & Write Module for TypeQualifier)#");
    py::class_<RWStepShape_RWValueFormatTypeQualifier , shared_ptr<RWStepShape_RWValueFormatTypeQualifier>  >(m,"RWStepShape_RWValueFormatTypeQualifier",R"#(Read & Write tool for ValueFormatTypeQualifier)#");
    py::class_<RWStepShape_RWVertex , shared_ptr<RWStepShape_RWVertex>  >(m,"RWStepShape_RWVertex",R"#(Read & Write Module for Vertex)#");
    py::class_<RWStepShape_RWVertexLoop , shared_ptr<RWStepShape_RWVertexLoop>  >(m,"RWStepShape_RWVertexLoop",R"#(Read & Write Module for VertexLoop)#");
    py::class_<RWStepShape_RWVertexPoint , shared_ptr<RWStepShape_RWVertexPoint>  >(m,"RWStepShape_RWVertexPoint",R"#(Read & Write Module for VertexPoint)#");

};

// user-defined post-inclusion per module

// user-defined post
