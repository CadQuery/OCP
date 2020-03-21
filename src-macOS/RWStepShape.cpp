
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
#include <StepShape_RevolvedAreaSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_VertexLoop.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_EdgeBasedWireframeModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DefinitionalRepresentationAndShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Sphere.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Subface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SeamEdge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_CompoundShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricCurveSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Block.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedEdge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_VertexPoint.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_QualifiedRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_EdgeBasedWireframeShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ExtrudedAreaSolid.hxx>
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
#include <StepShape_PrecisionQualifier.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Subedge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedFaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Path.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_TypeQualifier.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FaceBasedSurfaceModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeRepresentationWithParameters.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Vertex.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedFace.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_NonManifoldSurfaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalCharacteristicRepresentation.hxx>
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
#include <StepShape_HalfSpaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RightAngularWedge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_CsgSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ManifoldSurfaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
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
#include <StepShape_OrientedPath.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BoxedHalfSpace.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Face.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SweptAreaSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedFaceSubSet.hxx>
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
#include <StepShape_RevolvedFaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FacetedBrepShapeRepresentation.hxx>
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
#include <StepShape_Loop.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_CsgShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeDimensionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PointRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RightCircularCone.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OrientedClosedShell.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_OpenShell.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AdvancedBrepShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_RightCircularCylinder.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ConnectedEdgeSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_TransitionalShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_FaceOuterBound.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ToleranceValue.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AdvancedFace.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AngularLocation.hxx>
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
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SolidReplica.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Edge.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_AngularSize.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SolidModel.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_Torus.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_SweptFaceSolid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_LimitsAndFits.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_BoxDomain.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_DimensionalLocationWithPath.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PlusMinusTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_GeometricSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_PolyLoop.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
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
#include <StepShape_MeasureQualification.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepShape_ValueFormatTypeQualifier.hxx>
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
void register_RWStepShape(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepShape"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepShape_RWAdvancedBrepShapeRepresentation , shared_ptr<RWStepShape_RWAdvancedBrepShapeRepresentation> >>(m.attr("RWStepShape_RWAdvancedBrepShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWAdvancedFace , shared_ptr<RWStepShape_RWAdvancedFace> >>(m.attr("RWStepShape_RWAdvancedFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWAngularLocation , shared_ptr<RWStepShape_RWAngularLocation> >>(m.attr("RWStepShape_RWAngularLocation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWAngularSize , shared_ptr<RWStepShape_RWAngularSize> >>(m.attr("RWStepShape_RWAngularSize"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWBlock , shared_ptr<RWStepShape_RWBlock> >>(m.attr("RWStepShape_RWBlock"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWBooleanResult , shared_ptr<RWStepShape_RWBooleanResult> >>(m.attr("RWStepShape_RWBooleanResult"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWBoxDomain , shared_ptr<RWStepShape_RWBoxDomain> >>(m.attr("RWStepShape_RWBoxDomain"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWBoxedHalfSpace , shared_ptr<RWStepShape_RWBoxedHalfSpace> >>(m.attr("RWStepShape_RWBoxedHalfSpace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWBrepWithVoids , shared_ptr<RWStepShape_RWBrepWithVoids> >>(m.attr("RWStepShape_RWBrepWithVoids"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWClosedShell , shared_ptr<RWStepShape_RWClosedShell> >>(m.attr("RWStepShape_RWClosedShell"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWCompoundShapeRepresentation , shared_ptr<RWStepShape_RWCompoundShapeRepresentation> >>(m.attr("RWStepShape_RWCompoundShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWConnectedEdgeSet , shared_ptr<RWStepShape_RWConnectedEdgeSet> >>(m.attr("RWStepShape_RWConnectedEdgeSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWConnectedFaceSet , shared_ptr<RWStepShape_RWConnectedFaceSet> >>(m.attr("RWStepShape_RWConnectedFaceSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWConnectedFaceShapeRepresentation , shared_ptr<RWStepShape_RWConnectedFaceShapeRepresentation> >>(m.attr("RWStepShape_RWConnectedFaceShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWConnectedFaceSubSet , shared_ptr<RWStepShape_RWConnectedFaceSubSet> >>(m.attr("RWStepShape_RWConnectedFaceSubSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWContextDependentShapeRepresentation , shared_ptr<RWStepShape_RWContextDependentShapeRepresentation> >>(m.attr("RWStepShape_RWContextDependentShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWCsgShapeRepresentation , shared_ptr<RWStepShape_RWCsgShapeRepresentation> >>(m.attr("RWStepShape_RWCsgShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWCsgSolid , shared_ptr<RWStepShape_RWCsgSolid> >>(m.attr("RWStepShape_RWCsgSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation , shared_ptr<RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation> >>(m.attr("RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDimensionalCharacteristicRepresentation , shared_ptr<RWStepShape_RWDimensionalCharacteristicRepresentation> >>(m.attr("RWStepShape_RWDimensionalCharacteristicRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDimensionalLocation , shared_ptr<RWStepShape_RWDimensionalLocation> >>(m.attr("RWStepShape_RWDimensionalLocation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDimensionalLocationWithPath , shared_ptr<RWStepShape_RWDimensionalLocationWithPath> >>(m.attr("RWStepShape_RWDimensionalLocationWithPath"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDimensionalSize , shared_ptr<RWStepShape_RWDimensionalSize> >>(m.attr("RWStepShape_RWDimensionalSize"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWDimensionalSizeWithPath , shared_ptr<RWStepShape_RWDimensionalSizeWithPath> >>(m.attr("RWStepShape_RWDimensionalSizeWithPath"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWEdge , shared_ptr<RWStepShape_RWEdge> >>(m.attr("RWStepShape_RWEdge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWEdgeBasedWireframeModel , shared_ptr<RWStepShape_RWEdgeBasedWireframeModel> >>(m.attr("RWStepShape_RWEdgeBasedWireframeModel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWEdgeBasedWireframeShapeRepresentation , shared_ptr<RWStepShape_RWEdgeBasedWireframeShapeRepresentation> >>(m.attr("RWStepShape_RWEdgeBasedWireframeShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWEdgeCurve , shared_ptr<RWStepShape_RWEdgeCurve> >>(m.attr("RWStepShape_RWEdgeCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWEdgeLoop , shared_ptr<RWStepShape_RWEdgeLoop> >>(m.attr("RWStepShape_RWEdgeLoop"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWExtrudedAreaSolid , shared_ptr<RWStepShape_RWExtrudedAreaSolid> >>(m.attr("RWStepShape_RWExtrudedAreaSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWExtrudedFaceSolid , shared_ptr<RWStepShape_RWExtrudedFaceSolid> >>(m.attr("RWStepShape_RWExtrudedFaceSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFace , shared_ptr<RWStepShape_RWFace> >>(m.attr("RWStepShape_RWFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFaceBasedSurfaceModel , shared_ptr<RWStepShape_RWFaceBasedSurfaceModel> >>(m.attr("RWStepShape_RWFaceBasedSurfaceModel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFaceBound , shared_ptr<RWStepShape_RWFaceBound> >>(m.attr("RWStepShape_RWFaceBound"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFaceOuterBound , shared_ptr<RWStepShape_RWFaceOuterBound> >>(m.attr("RWStepShape_RWFaceOuterBound"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFaceSurface , shared_ptr<RWStepShape_RWFaceSurface> >>(m.attr("RWStepShape_RWFaceSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFacetedBrep , shared_ptr<RWStepShape_RWFacetedBrep> >>(m.attr("RWStepShape_RWFacetedBrep"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFacetedBrepAndBrepWithVoids , shared_ptr<RWStepShape_RWFacetedBrepAndBrepWithVoids> >>(m.attr("RWStepShape_RWFacetedBrepAndBrepWithVoids"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWFacetedBrepShapeRepresentation , shared_ptr<RWStepShape_RWFacetedBrepShapeRepresentation> >>(m.attr("RWStepShape_RWFacetedBrepShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWGeometricCurveSet , shared_ptr<RWStepShape_RWGeometricCurveSet> >>(m.attr("RWStepShape_RWGeometricCurveSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWGeometricSet , shared_ptr<RWStepShape_RWGeometricSet> >>(m.attr("RWStepShape_RWGeometricSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation , shared_ptr<RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation> >>(m.attr("RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation , shared_ptr<RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation> >>(m.attr("RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWHalfSpaceSolid , shared_ptr<RWStepShape_RWHalfSpaceSolid> >>(m.attr("RWStepShape_RWHalfSpaceSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWLimitsAndFits , shared_ptr<RWStepShape_RWLimitsAndFits> >>(m.attr("RWStepShape_RWLimitsAndFits"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWLoop , shared_ptr<RWStepShape_RWLoop> >>(m.attr("RWStepShape_RWLoop"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWLoopAndPath , shared_ptr<RWStepShape_RWLoopAndPath> >>(m.attr("RWStepShape_RWLoopAndPath"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWManifoldSolidBrep , shared_ptr<RWStepShape_RWManifoldSolidBrep> >>(m.attr("RWStepShape_RWManifoldSolidBrep"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWManifoldSurfaceShapeRepresentation , shared_ptr<RWStepShape_RWManifoldSurfaceShapeRepresentation> >>(m.attr("RWStepShape_RWManifoldSurfaceShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWMeasureQualification , shared_ptr<RWStepShape_RWMeasureQualification> >>(m.attr("RWStepShape_RWMeasureQualification"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem , shared_ptr<RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem> >>(m.attr("RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWNonManifoldSurfaceShapeRepresentation , shared_ptr<RWStepShape_RWNonManifoldSurfaceShapeRepresentation> >>(m.attr("RWStepShape_RWNonManifoldSurfaceShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOpenShell , shared_ptr<RWStepShape_RWOpenShell> >>(m.attr("RWStepShape_RWOpenShell"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOrientedClosedShell , shared_ptr<RWStepShape_RWOrientedClosedShell> >>(m.attr("RWStepShape_RWOrientedClosedShell"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOrientedEdge , shared_ptr<RWStepShape_RWOrientedEdge> >>(m.attr("RWStepShape_RWOrientedEdge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOrientedFace , shared_ptr<RWStepShape_RWOrientedFace> >>(m.attr("RWStepShape_RWOrientedFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOrientedOpenShell , shared_ptr<RWStepShape_RWOrientedOpenShell> >>(m.attr("RWStepShape_RWOrientedOpenShell"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWOrientedPath , shared_ptr<RWStepShape_RWOrientedPath> >>(m.attr("RWStepShape_RWOrientedPath"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWPath , shared_ptr<RWStepShape_RWPath> >>(m.attr("RWStepShape_RWPath"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWPlusMinusTolerance , shared_ptr<RWStepShape_RWPlusMinusTolerance> >>(m.attr("RWStepShape_RWPlusMinusTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWPointRepresentation , shared_ptr<RWStepShape_RWPointRepresentation> >>(m.attr("RWStepShape_RWPointRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWPolyLoop , shared_ptr<RWStepShape_RWPolyLoop> >>(m.attr("RWStepShape_RWPolyLoop"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWPrecisionQualifier , shared_ptr<RWStepShape_RWPrecisionQualifier> >>(m.attr("RWStepShape_RWPrecisionQualifier"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWQualifiedRepresentationItem , shared_ptr<RWStepShape_RWQualifiedRepresentationItem> >>(m.attr("RWStepShape_RWQualifiedRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWRevolvedAreaSolid , shared_ptr<RWStepShape_RWRevolvedAreaSolid> >>(m.attr("RWStepShape_RWRevolvedAreaSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWRevolvedFaceSolid , shared_ptr<RWStepShape_RWRevolvedFaceSolid> >>(m.attr("RWStepShape_RWRevolvedFaceSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWRightAngularWedge , shared_ptr<RWStepShape_RWRightAngularWedge> >>(m.attr("RWStepShape_RWRightAngularWedge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWRightCircularCone , shared_ptr<RWStepShape_RWRightCircularCone> >>(m.attr("RWStepShape_RWRightCircularCone"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWRightCircularCylinder , shared_ptr<RWStepShape_RWRightCircularCylinder> >>(m.attr("RWStepShape_RWRightCircularCylinder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSeamEdge , shared_ptr<RWStepShape_RWSeamEdge> >>(m.attr("RWStepShape_RWSeamEdge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWShapeDefinitionRepresentation , shared_ptr<RWStepShape_RWShapeDefinitionRepresentation> >>(m.attr("RWStepShape_RWShapeDefinitionRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWShapeDimensionRepresentation , shared_ptr<RWStepShape_RWShapeDimensionRepresentation> >>(m.attr("RWStepShape_RWShapeDimensionRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWShapeRepresentation , shared_ptr<RWStepShape_RWShapeRepresentation> >>(m.attr("RWStepShape_RWShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWShapeRepresentationWithParameters , shared_ptr<RWStepShape_RWShapeRepresentationWithParameters> >>(m.attr("RWStepShape_RWShapeRepresentationWithParameters"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWShellBasedSurfaceModel , shared_ptr<RWStepShape_RWShellBasedSurfaceModel> >>(m.attr("RWStepShape_RWShellBasedSurfaceModel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSolidModel , shared_ptr<RWStepShape_RWSolidModel> >>(m.attr("RWStepShape_RWSolidModel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSolidReplica , shared_ptr<RWStepShape_RWSolidReplica> >>(m.attr("RWStepShape_RWSolidReplica"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSphere , shared_ptr<RWStepShape_RWSphere> >>(m.attr("RWStepShape_RWSphere"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSubedge , shared_ptr<RWStepShape_RWSubedge> >>(m.attr("RWStepShape_RWSubedge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSubface , shared_ptr<RWStepShape_RWSubface> >>(m.attr("RWStepShape_RWSubface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSweptAreaSolid , shared_ptr<RWStepShape_RWSweptAreaSolid> >>(m.attr("RWStepShape_RWSweptAreaSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWSweptFaceSolid , shared_ptr<RWStepShape_RWSweptFaceSolid> >>(m.attr("RWStepShape_RWSweptFaceSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWToleranceValue , shared_ptr<RWStepShape_RWToleranceValue> >>(m.attr("RWStepShape_RWToleranceValue"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWTopologicalRepresentationItem , shared_ptr<RWStepShape_RWTopologicalRepresentationItem> >>(m.attr("RWStepShape_RWTopologicalRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWTorus , shared_ptr<RWStepShape_RWTorus> >>(m.attr("RWStepShape_RWTorus"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWTransitionalShapeRepresentation , shared_ptr<RWStepShape_RWTransitionalShapeRepresentation> >>(m.attr("RWStepShape_RWTransitionalShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWTypeQualifier , shared_ptr<RWStepShape_RWTypeQualifier> >>(m.attr("RWStepShape_RWTypeQualifier"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWValueFormatTypeQualifier , shared_ptr<RWStepShape_RWValueFormatTypeQualifier> >>(m.attr("RWStepShape_RWValueFormatTypeQualifier"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWVertex , shared_ptr<RWStepShape_RWVertex> >>(m.attr("RWStepShape_RWVertex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWVertexLoop , shared_ptr<RWStepShape_RWVertexLoop> >>(m.attr("RWStepShape_RWVertexLoop"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepShape_RWVertexPoint , shared_ptr<RWStepShape_RWVertexPoint> >>(m.attr("RWStepShape_RWVertexPoint"))
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
// ./opencascade/RWStepShape_RWRevolvedAreaSolid.hxx
// ./opencascade/RWStepShape_RWVertexLoop.hxx
// ./opencascade/RWStepShape_RWEdgeBasedWireframeModel.hxx
// ./opencascade/RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWSphere.hxx
// ./opencascade/RWStepShape_RWSubface.hxx
// ./opencascade/RWStepShape_RWSeamEdge.hxx
// ./opencascade/RWStepShape_RWCompoundShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWGeometricCurveSet.hxx
// ./opencascade/RWStepShape_RWBlock.hxx
// ./opencascade/RWStepShape_RWOrientedEdge.hxx
// ./opencascade/RWStepShape_RWShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWVertexPoint.hxx
// ./opencascade/RWStepShape_RWQualifiedRepresentationItem.hxx
// ./opencascade/RWStepShape_RWEdgeBasedWireframeShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWExtrudedAreaSolid.hxx
// ./opencascade/RWStepShape_RWEdgeCurve.hxx
// ./opencascade/RWStepShape_RWPrecisionQualifier.hxx
// ./opencascade/RWStepShape_RWSubedge.hxx
// ./opencascade/RWStepShape_RWConnectedFaceShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWPath.hxx
// ./opencascade/RWStepShape_RWDimensionalLocation.hxx
// ./opencascade/RWStepShape_RWTypeQualifier.hxx
// ./opencascade/RWStepShape_RWFaceBasedSurfaceModel.hxx
// ./opencascade/RWStepShape_RWShapeRepresentationWithParameters.hxx
// ./opencascade/RWStepShape_RWVertex.hxx
// ./opencascade/RWStepShape_RWOrientedFace.hxx
// ./opencascade/RWStepShape_RWNonManifoldSurfaceShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWDimensionalCharacteristicRepresentation.hxx
// ./opencascade/RWStepShape_RWFaceBound.hxx
// ./opencascade/RWStepShape_RWHalfSpaceSolid.hxx
// ./opencascade/RWStepShape_RWRightAngularWedge.hxx
// ./opencascade/RWStepShape_RWCsgSolid.hxx
// ./opencascade/RWStepShape_RWManifoldSurfaceShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWClosedShell.hxx
// ./opencascade/RWStepShape_RWDimensionalSizeWithPath.hxx
// ./opencascade/RWStepShape_RWOrientedPath.hxx
// ./opencascade/RWStepShape_RWBoxedHalfSpace.hxx
// ./opencascade/RWStepShape_RWFace.hxx
// ./opencascade/RWStepShape_RWSweptAreaSolid.hxx
// ./opencascade/RWStepShape_RWConnectedFaceSubSet.hxx
// ./opencascade/RWStepShape_RWBrepWithVoids.hxx
// ./opencascade/RWStepShape_RWRevolvedFaceSolid.hxx
// ./opencascade/RWStepShape_RWFaceSurface.hxx
// ./opencascade/RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWFacetedBrepShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWFacetedBrepAndBrepWithVoids.hxx
// ./opencascade/RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem.hxx
// ./opencascade/RWStepShape_RWLoop.hxx
// ./opencascade/RWStepShape_RWFacetedBrep.hxx
// ./opencascade/RWStepShape_RWCsgShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWShapeDimensionRepresentation.hxx
// ./opencascade/RWStepShape_RWPointRepresentation.hxx
// ./opencascade/RWStepShape_RWRightCircularCone.hxx
// ./opencascade/RWStepShape_RWBooleanResult.hxx
// ./opencascade/RWStepShape_RWOrientedClosedShell.hxx
// ./opencascade/RWStepShape_RWOpenShell.hxx
// ./opencascade/RWStepShape_RWAdvancedBrepShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWRightCircularCylinder.hxx
// ./opencascade/RWStepShape_RWContextDependentShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWConnectedEdgeSet.hxx
// ./opencascade/RWStepShape_RWTransitionalShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWFaceOuterBound.hxx
// ./opencascade/RWStepShape_RWManifoldSolidBrep.hxx
// ./opencascade/RWStepShape_RWToleranceValue.hxx
// ./opencascade/RWStepShape_RWAdvancedFace.hxx
// ./opencascade/RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation.hxx
// ./opencascade/RWStepShape_RWAngularLocation.hxx
// ./opencascade/RWStepShape_RWExtrudedFaceSolid.hxx
// ./opencascade/RWStepShape_RWLoopAndPath.hxx
// ./opencascade/RWStepShape_RWConnectedFaceSet.hxx
// ./opencascade/RWStepShape_RWSolidReplica.hxx
// ./opencascade/RWStepShape_RWEdge.hxx
// ./opencascade/RWStepShape_RWAngularSize.hxx
// ./opencascade/RWStepShape_RWSolidModel.hxx
// ./opencascade/RWStepShape_RWTorus.hxx
// ./opencascade/RWStepShape_RWSweptFaceSolid.hxx
// ./opencascade/RWStepShape_RWLimitsAndFits.hxx
// ./opencascade/RWStepShape_RWBoxDomain.hxx
// ./opencascade/RWStepShape_RWShapeDefinitionRepresentation.hxx
// ./opencascade/RWStepShape_RWDimensionalLocationWithPath.hxx
// ./opencascade/RWStepShape_RWPlusMinusTolerance.hxx
// ./opencascade/RWStepShape_RWGeometricSet.hxx
// ./opencascade/RWStepShape_RWPolyLoop.hxx
// ./opencascade/RWStepShape_RWTopologicalRepresentationItem.hxx
// ./opencascade/RWStepShape_RWShellBasedSurfaceModel.hxx
// ./opencascade/RWStepShape_RWEdgeLoop.hxx
// ./opencascade/RWStepShape_RWOrientedOpenShell.hxx
// ./opencascade/RWStepShape_RWDimensionalSize.hxx
// ./opencascade/RWStepShape_RWMeasureQualification.hxx
// ./opencascade/RWStepShape_RWValueFormatTypeQualifier.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
