
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_Edge.hxx>
#include <StepShape_Path.hxx>
#include <StepShape_Face.hxx>
#include <StepShape_FaceBound.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepShape_OpenShell.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_Unit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <StepShape_Loop.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Point.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_OpenShell.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepShape_BooleanResult.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepShape_SolidModel.hxx>
#include <StepShape_HalfSpaceSolid.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepRepr_CompoundRepresentationItem.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepGeom_Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Point.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepShape_Loop.hxx>
#include <StepShape_Path.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_PrecisionQualifier.hxx>
#include <StepShape_TypeQualifier.hxx>
#include <StepShape_ValueFormatTypeQualifier.hxx>
#include <StepGeom_Pcurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_BoxDomain.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ShapeDimensionRepresentation.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepShape_FaceSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FaceSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepShape_Vertex.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Point.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_Sphere.hxx>
#include <StepShape_Block.hxx>
#include <StepShape_RightAngularWedge.hxx>
#include <StepShape_Torus.hxx>
#include <StepShape_RightCircularCone.hxx>
#include <StepShape_RightCircularCylinder.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ToleranceValue.hxx>
#include <StepShape_LimitsAndFits.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>

// module includes
#include <StepShape_AdvancedBrepShapeRepresentation.hxx>
#include <StepShape_AdvancedFace.hxx>
#include <StepShape_AngleRelator.hxx>
#include <StepShape_AngularLocation.hxx>
#include <StepShape_AngularSize.hxx>
#include <StepShape_Array1OfConnectedEdgeSet.hxx>
#include <StepShape_Array1OfConnectedFaceSet.hxx>
#include <StepShape_Array1OfEdge.hxx>
#include <StepShape_Array1OfFace.hxx>
#include <StepShape_Array1OfFaceBound.hxx>
#include <StepShape_Array1OfGeometricSetSelect.hxx>
#include <StepShape_Array1OfOrientedClosedShell.hxx>
#include <StepShape_Array1OfOrientedEdge.hxx>
#include <StepShape_Array1OfShapeDimensionRepresentationItem.hxx>
#include <StepShape_Array1OfShell.hxx>
#include <StepShape_Array1OfValueQualifier.hxx>
#include <StepShape_Block.hxx>
#include <StepShape_BooleanOperand.hxx>
#include <StepShape_BooleanOperator.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepShape_BoxDomain.hxx>
#include <StepShape_BoxedHalfSpace.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepShape_CompoundShapeRepresentation.hxx>
#include <StepShape_ConnectedEdgeSet.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepShape_ConnectedFaceShapeRepresentation.hxx>
#include <StepShape_ConnectedFaceSubSet.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepShape_CsgPrimitive.hxx>
#include <StepShape_CsgSelect.hxx>
#include <StepShape_CsgShapeRepresentation.hxx>
#include <StepShape_CsgSolid.hxx>
#include <StepShape_DefinitionalRepresentationAndShapeRepresentation.hxx>
#include <StepShape_DimensionalCharacteristic.hxx>
#include <StepShape_DimensionalCharacteristicRepresentation.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalLocationWithPath.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepShape_DimensionalSizeWithPath.hxx>
#include <StepShape_DirectedDimensionalLocation.hxx>
#include <StepShape_Edge.hxx>
#include <StepShape_EdgeBasedWireframeModel.hxx>
#include <StepShape_EdgeBasedWireframeShapeRepresentation.hxx>
#include <StepShape_EdgeCurve.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <StepShape_ExtrudedAreaSolid.hxx>
#include <StepShape_ExtrudedFaceSolid.hxx>
#include <StepShape_Face.hxx>
#include <StepShape_FaceBasedSurfaceModel.hxx>
#include <StepShape_FaceBound.hxx>
#include <StepShape_FaceOuterBound.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StepShape_FacetedBrepShapeRepresentation.hxx>
#include <StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx>
#include <StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx>
#include <StepShape_GeometricCurveSet.hxx>
#include <StepShape_GeometricSet.hxx>
#include <StepShape_GeometricSetSelect.hxx>
#include <StepShape_HalfSpaceSolid.hxx>
#include <StepShape_HArray1OfConnectedEdgeSet.hxx>
#include <StepShape_HArray1OfConnectedFaceSet.hxx>
#include <StepShape_HArray1OfEdge.hxx>
#include <StepShape_HArray1OfFace.hxx>
#include <StepShape_HArray1OfFaceBound.hxx>
#include <StepShape_HArray1OfGeometricSetSelect.hxx>
#include <StepShape_HArray1OfOrientedClosedShell.hxx>
#include <StepShape_HArray1OfOrientedEdge.hxx>
#include <StepShape_HArray1OfShapeDimensionRepresentationItem.hxx>
#include <StepShape_HArray1OfShell.hxx>
#include <StepShape_HArray1OfValueQualifier.hxx>
#include <StepShape_LimitsAndFits.hxx>
#include <StepShape_Loop.hxx>
#include <StepShape_LoopAndPath.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StepShape_ManifoldSurfaceShapeRepresentation.hxx>
#include <StepShape_MeasureQualification.hxx>
#include <StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem.hxx>
#include <StepShape_NonManifoldSurfaceShapeRepresentation.hxx>
#include <StepShape_OpenShell.hxx>
#include <StepShape_OrientedClosedShell.hxx>
#include <StepShape_OrientedEdge.hxx>
#include <StepShape_OrientedFace.hxx>
#include <StepShape_OrientedOpenShell.hxx>
#include <StepShape_OrientedPath.hxx>
#include <StepShape_Path.hxx>
#include <StepShape_PlusMinusTolerance.hxx>
#include <StepShape_PointRepresentation.hxx>
#include <StepShape_PolyLoop.hxx>
#include <StepShape_PrecisionQualifier.hxx>
#include <StepShape_QualifiedRepresentationItem.hxx>
#include <StepShape_ReversibleTopologyItem.hxx>
#include <StepShape_RevolvedAreaSolid.hxx>
#include <StepShape_RevolvedFaceSolid.hxx>
#include <StepShape_RightAngularWedge.hxx>
#include <StepShape_RightCircularCone.hxx>
#include <StepShape_RightCircularCylinder.hxx>
#include <StepShape_SeamEdge.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepShape_ShapeDimensionRepresentation.hxx>
#include <StepShape_ShapeDimensionRepresentationItem.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepShape_ShapeRepresentationWithParameters.hxx>
#include <StepShape_Shell.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepShape_SolidModel.hxx>
#include <StepShape_SolidReplica.hxx>
#include <StepShape_Sphere.hxx>
#include <StepShape_Subedge.hxx>
#include <StepShape_Subface.hxx>
#include <StepShape_SurfaceModel.hxx>
#include <StepShape_SweptAreaSolid.hxx>
#include <StepShape_SweptFaceSolid.hxx>
#include <StepShape_ToleranceMethodDefinition.hxx>
#include <StepShape_ToleranceValue.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepShape_Torus.hxx>
#include <StepShape_TransitionalShapeRepresentation.hxx>
#include <StepShape_TypeQualifier.hxx>
#include <StepShape_ValueFormatTypeQualifier.hxx>
#include <StepShape_ValueQualifier.hxx>
#include <StepShape_Vertex.hxx>
#include <StepShape_VertexLoop.hxx>
#include <StepShape_VertexPoint.hxx>

// template related includes
// ./opencascade\StepShape_Array1OfConnectedEdgeSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepShape_Array1OfConnectedFaceSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepShape_Array1OfShapeDimensionRepresentationItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepShape_Array1OfOrientedClosedShell.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepShape_Array1OfFaceBound.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepShape_Array1OfFace.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepShape_Array1OfGeometricSetSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepShape_Array1OfShell.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepShape_Array1OfEdge.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepShape_Array1OfValueQualifier.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepShape_Array1OfOrientedEdge.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <StepRepr_RepresentationContext.hxx>

// Module definiiton
void register_StepShape_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepShape", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StepShape_BooleanOperator>(m, "StepShape_BooleanOperator",R"#(None)#")
        .value("StepShape_boDifference",StepShape_BooleanOperator::StepShape_boDifference)
        .value("StepShape_boIntersection",StepShape_BooleanOperator::StepShape_boIntersection)
        .value("StepShape_boUnion",StepShape_BooleanOperator::StepShape_boUnion).export_values();
    py::enum_<StepShape_AngleRelator>(m, "StepShape_AngleRelator",R"#(None)#")
        .value("StepShape_Equal",StepShape_AngleRelator::StepShape_Equal)
        .value("StepShape_Large",StepShape_AngleRelator::StepShape_Large)
        .value("StepShape_Small",StepShape_AngleRelator::StepShape_Small).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<StepShape_ConnectedEdgeSet> >(m,"StepShape_Array1OfConnectedEdgeSet");
    preregister_template_NCollection_Array1<opencascade::handle<StepShape_ConnectedFaceSet> >(m,"StepShape_Array1OfConnectedFaceSet");
    preregister_template_NCollection_Array1<StepShape_ShapeDimensionRepresentationItem>(m,"StepShape_Array1OfShapeDimensionRepresentationItem");
    preregister_template_NCollection_Array1<opencascade::handle<StepShape_OrientedClosedShell> >(m,"StepShape_Array1OfOrientedClosedShell");
    preregister_template_NCollection_Array1<opencascade::handle<StepShape_FaceBound> >(m,"StepShape_Array1OfFaceBound");
    preregister_template_NCollection_Array1<opencascade::handle<StepShape_Face> >(m,"StepShape_Array1OfFace");
    preregister_template_NCollection_Array1<StepShape_GeometricSetSelect>(m,"StepShape_Array1OfGeometricSetSelect");
    preregister_template_NCollection_Array1<StepShape_Shell>(m,"StepShape_Array1OfShell");
    preregister_template_NCollection_Array1<opencascade::handle<StepShape_Edge> >(m,"StepShape_Array1OfEdge");
    preregister_template_NCollection_Array1<StepShape_ValueQualifier>(m,"StepShape_Array1OfValueQualifier");
    preregister_template_NCollection_Array1<opencascade::handle<StepShape_OrientedEdge> >(m,"StepShape_Array1OfOrientedEdge");

// classes forward declarations only
    py::class_<StepShape_Block ,opencascade::handle<StepShape_Block> , StepGeom_GeometricRepresentationItem>(m,"StepShape_Block",R"#()#");
    py::class_<StepShape_BooleanOperand , shared_ptr<StepShape_BooleanOperand> >(m,"StepShape_BooleanOperand",R"#(None)#");
    py::class_<StepShape_BooleanResult ,opencascade::handle<StepShape_BooleanResult> , StepGeom_GeometricRepresentationItem>(m,"StepShape_BooleanResult",R"#()#");
    py::class_<StepShape_BoxDomain ,opencascade::handle<StepShape_BoxDomain> , Standard_Transient>(m,"StepShape_BoxDomain",R"#()#");
    py::class_<StepShape_ConnectedFaceShapeRepresentation ,opencascade::handle<StepShape_ConnectedFaceShapeRepresentation> , StepRepr_Representation>(m,"StepShape_ConnectedFaceShapeRepresentation",R"#(Representation of STEP entity ConnectedFaceShapeRepresentationRepresentation of STEP entity ConnectedFaceShapeRepresentationRepresentation of STEP entity ConnectedFaceShapeRepresentation)#");
    py::class_<StepShape_ContextDependentShapeRepresentation ,opencascade::handle<StepShape_ContextDependentShapeRepresentation> , Standard_Transient>(m,"StepShape_ContextDependentShapeRepresentation",R"#()#");
    py::class_<StepShape_CsgPrimitive , shared_ptr<StepShape_CsgPrimitive> , StepData_SelectType>(m,"StepShape_CsgPrimitive",R"#(None)#");
    py::class_<StepShape_CsgSelect , shared_ptr<StepShape_CsgSelect> >(m,"StepShape_CsgSelect",R"#(None)#");
    py::class_<StepShape_DefinitionalRepresentationAndShapeRepresentation ,opencascade::handle<StepShape_DefinitionalRepresentationAndShapeRepresentation> , StepRepr_DefinitionalRepresentation>(m,"StepShape_DefinitionalRepresentationAndShapeRepresentation",R"#(Implements complex type (DEFINITIONAL_REPRESENTATION,REPRESENTATION,SHAPE_REPRESENTATION)Implements complex type (DEFINITIONAL_REPRESENTATION,REPRESENTATION,SHAPE_REPRESENTATION)Implements complex type (DEFINITIONAL_REPRESENTATION,REPRESENTATION,SHAPE_REPRESENTATION))#");
    py::class_<StepShape_DimensionalCharacteristic , shared_ptr<StepShape_DimensionalCharacteristic> , StepData_SelectType>(m,"StepShape_DimensionalCharacteristic",R"#(Representation of STEP SELECT type DimensionalCharacteristic)#");
    py::class_<StepShape_DimensionalCharacteristicRepresentation ,opencascade::handle<StepShape_DimensionalCharacteristicRepresentation> , Standard_Transient>(m,"StepShape_DimensionalCharacteristicRepresentation",R"#(Representation of STEP entity DimensionalCharacteristicRepresentationRepresentation of STEP entity DimensionalCharacteristicRepresentationRepresentation of STEP entity DimensionalCharacteristicRepresentation)#");
    py::class_<StepShape_DimensionalLocation ,opencascade::handle<StepShape_DimensionalLocation> , StepRepr_ShapeAspectRelationship>(m,"StepShape_DimensionalLocation",R"#(Representation of STEP entity DimensionalLocationRepresentation of STEP entity DimensionalLocationRepresentation of STEP entity DimensionalLocation)#");
    py::class_<StepShape_DimensionalSize ,opencascade::handle<StepShape_DimensionalSize> , Standard_Transient>(m,"StepShape_DimensionalSize",R"#(Representation of STEP entity DimensionalSizeRepresentation of STEP entity DimensionalSizeRepresentation of STEP entity DimensionalSize)#");
    py::class_<StepShape_EdgeBasedWireframeModel ,opencascade::handle<StepShape_EdgeBasedWireframeModel> , StepGeom_GeometricRepresentationItem>(m,"StepShape_EdgeBasedWireframeModel",R"#(Representation of STEP entity EdgeBasedWireframeModelRepresentation of STEP entity EdgeBasedWireframeModelRepresentation of STEP entity EdgeBasedWireframeModel)#");
    py::class_<StepShape_FaceBasedSurfaceModel ,opencascade::handle<StepShape_FaceBasedSurfaceModel> , StepGeom_GeometricRepresentationItem>(m,"StepShape_FaceBasedSurfaceModel",R"#(Representation of STEP entity FaceBasedSurfaceModelRepresentation of STEP entity FaceBasedSurfaceModelRepresentation of STEP entity FaceBasedSurfaceModel)#");
    py::class_<StepShape_GeometricSet ,opencascade::handle<StepShape_GeometricSet> , StepGeom_GeometricRepresentationItem>(m,"StepShape_GeometricSet",R"#()#");
    py::class_<StepShape_GeometricSetSelect , shared_ptr<StepShape_GeometricSetSelect> , StepData_SelectType>(m,"StepShape_GeometricSetSelect",R"#(None)#");
    py::class_<StepShape_HArray1OfConnectedEdgeSet ,opencascade::handle<StepShape_HArray1OfConnectedEdgeSet> , StepShape_Array1OfConnectedEdgeSet, Standard_Transient>(m,"StepShape_HArray1OfConnectedEdgeSet",R"#()#");
    py::class_<StepShape_HArray1OfConnectedFaceSet ,opencascade::handle<StepShape_HArray1OfConnectedFaceSet> , StepShape_Array1OfConnectedFaceSet, Standard_Transient>(m,"StepShape_HArray1OfConnectedFaceSet",R"#()#");
    py::class_<StepShape_HArray1OfEdge ,opencascade::handle<StepShape_HArray1OfEdge> , StepShape_Array1OfEdge, Standard_Transient>(m,"StepShape_HArray1OfEdge",R"#()#");
    py::class_<StepShape_HArray1OfFace ,opencascade::handle<StepShape_HArray1OfFace> , StepShape_Array1OfFace, Standard_Transient>(m,"StepShape_HArray1OfFace",R"#()#");
    py::class_<StepShape_HArray1OfFaceBound ,opencascade::handle<StepShape_HArray1OfFaceBound> , StepShape_Array1OfFaceBound, Standard_Transient>(m,"StepShape_HArray1OfFaceBound",R"#()#");
    py::class_<StepShape_HArray1OfGeometricSetSelect ,opencascade::handle<StepShape_HArray1OfGeometricSetSelect> , StepShape_Array1OfGeometricSetSelect, Standard_Transient>(m,"StepShape_HArray1OfGeometricSetSelect",R"#()#");
    py::class_<StepShape_HArray1OfOrientedClosedShell ,opencascade::handle<StepShape_HArray1OfOrientedClosedShell> , StepShape_Array1OfOrientedClosedShell, Standard_Transient>(m,"StepShape_HArray1OfOrientedClosedShell",R"#()#");
    py::class_<StepShape_HArray1OfOrientedEdge ,opencascade::handle<StepShape_HArray1OfOrientedEdge> , StepShape_Array1OfOrientedEdge, Standard_Transient>(m,"StepShape_HArray1OfOrientedEdge",R"#()#");
    py::class_<StepShape_HArray1OfShapeDimensionRepresentationItem ,opencascade::handle<StepShape_HArray1OfShapeDimensionRepresentationItem> , StepShape_Array1OfShapeDimensionRepresentationItem, Standard_Transient>(m,"StepShape_HArray1OfShapeDimensionRepresentationItem",R"#()#");
    py::class_<StepShape_HArray1OfShell ,opencascade::handle<StepShape_HArray1OfShell> , StepShape_Array1OfShell, Standard_Transient>(m,"StepShape_HArray1OfShell",R"#()#");
    py::class_<StepShape_HArray1OfValueQualifier ,opencascade::handle<StepShape_HArray1OfValueQualifier> , StepShape_Array1OfValueQualifier, Standard_Transient>(m,"StepShape_HArray1OfValueQualifier",R"#()#");
    py::class_<StepShape_HalfSpaceSolid ,opencascade::handle<StepShape_HalfSpaceSolid> , StepGeom_GeometricRepresentationItem>(m,"StepShape_HalfSpaceSolid",R"#()#");
    py::class_<StepShape_LimitsAndFits ,opencascade::handle<StepShape_LimitsAndFits> , Standard_Transient>(m,"StepShape_LimitsAndFits",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepShape_MeasureQualification ,opencascade::handle<StepShape_MeasureQualification> , Standard_Transient>(m,"StepShape_MeasureQualification",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem ,opencascade::handle<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem> , StepRepr_RepresentationItem>(m,"StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem",R"#(Added for Dimensional Tolerances Complex Type between MeasureRepresentationItem and QualifiedRepresentationItemAdded for Dimensional Tolerances Complex Type between MeasureRepresentationItem and QualifiedRepresentationItemAdded for Dimensional Tolerances Complex Type between MeasureRepresentationItem and QualifiedRepresentationItem)#");
    py::class_<StepShape_PlusMinusTolerance ,opencascade::handle<StepShape_PlusMinusTolerance> , Standard_Transient>(m,"StepShape_PlusMinusTolerance",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepShape_PrecisionQualifier ,opencascade::handle<StepShape_PrecisionQualifier> , Standard_Transient>(m,"StepShape_PrecisionQualifier",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepShape_QualifiedRepresentationItem ,opencascade::handle<StepShape_QualifiedRepresentationItem> , StepRepr_RepresentationItem>(m,"StepShape_QualifiedRepresentationItem",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepShape_ReversibleTopologyItem , shared_ptr<StepShape_ReversibleTopologyItem> , StepData_SelectType>(m,"StepShape_ReversibleTopologyItem",R"#(None)#");
    py::class_<StepShape_RightAngularWedge ,opencascade::handle<StepShape_RightAngularWedge> , StepGeom_GeometricRepresentationItem>(m,"StepShape_RightAngularWedge",R"#()#");
    py::class_<StepShape_RightCircularCone ,opencascade::handle<StepShape_RightCircularCone> , StepGeom_GeometricRepresentationItem>(m,"StepShape_RightCircularCone",R"#()#");
    py::class_<StepShape_RightCircularCylinder ,opencascade::handle<StepShape_RightCircularCylinder> , StepGeom_GeometricRepresentationItem>(m,"StepShape_RightCircularCylinder",R"#()#");
    py::class_<StepShape_ShapeDefinitionRepresentation ,opencascade::handle<StepShape_ShapeDefinitionRepresentation> , StepRepr_PropertyDefinitionRepresentation>(m,"StepShape_ShapeDefinitionRepresentation",R"#(Representation of STEP entity ShapeDefinitionRepresentationRepresentation of STEP entity ShapeDefinitionRepresentationRepresentation of STEP entity ShapeDefinitionRepresentation)#");
    py::class_<StepShape_ShapeDimensionRepresentationItem , shared_ptr<StepShape_ShapeDimensionRepresentationItem> , StepData_SelectType>(m,"StepShape_ShapeDimensionRepresentationItem",R"#(None)#");
    py::class_<StepShape_ShapeRepresentation ,opencascade::handle<StepShape_ShapeRepresentation> , StepRepr_Representation>(m,"StepShape_ShapeRepresentation",R"#()#");
    py::class_<StepShape_Shell , shared_ptr<StepShape_Shell> , StepData_SelectType>(m,"StepShape_Shell",R"#(None)#");
    py::class_<StepShape_ShellBasedSurfaceModel ,opencascade::handle<StepShape_ShellBasedSurfaceModel> , StepGeom_GeometricRepresentationItem>(m,"StepShape_ShellBasedSurfaceModel",R"#()#");
    py::class_<StepShape_SolidModel ,opencascade::handle<StepShape_SolidModel> , StepGeom_GeometricRepresentationItem>(m,"StepShape_SolidModel",R"#()#");
    py::class_<StepShape_Sphere ,opencascade::handle<StepShape_Sphere> , StepGeom_GeometricRepresentationItem>(m,"StepShape_Sphere",R"#()#");
    py::class_<StepShape_SurfaceModel , shared_ptr<StepShape_SurfaceModel> , StepData_SelectType>(m,"StepShape_SurfaceModel",R"#(None)#");
    py::class_<StepShape_ToleranceMethodDefinition , shared_ptr<StepShape_ToleranceMethodDefinition> , StepData_SelectType>(m,"StepShape_ToleranceMethodDefinition",R"#(Added for Dimensional Tolerances)#");
    py::class_<StepShape_ToleranceValue ,opencascade::handle<StepShape_ToleranceValue> , Standard_Transient>(m,"StepShape_ToleranceValue",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepShape_TopologicalRepresentationItem ,opencascade::handle<StepShape_TopologicalRepresentationItem> , StepRepr_RepresentationItem>(m,"StepShape_TopologicalRepresentationItem",R"#()#");
    py::class_<StepShape_Torus ,opencascade::handle<StepShape_Torus> , StepGeom_GeometricRepresentationItem>(m,"StepShape_Torus",R"#()#");
    py::class_<StepShape_TypeQualifier ,opencascade::handle<StepShape_TypeQualifier> , Standard_Transient>(m,"StepShape_TypeQualifier",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepShape_ValueFormatTypeQualifier ,opencascade::handle<StepShape_ValueFormatTypeQualifier> , Standard_Transient>(m,"StepShape_ValueFormatTypeQualifier",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepShape_ValueQualifier , shared_ptr<StepShape_ValueQualifier> , StepData_SelectType>(m,"StepShape_ValueQualifier",R"#(Added for Dimensional Tolerances)#");
    py::class_<StepShape_AdvancedBrepShapeRepresentation ,opencascade::handle<StepShape_AdvancedBrepShapeRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_AdvancedBrepShapeRepresentation",R"#()#");
    py::class_<StepShape_AngularLocation ,opencascade::handle<StepShape_AngularLocation> , StepShape_DimensionalLocation>(m,"StepShape_AngularLocation",R"#(Representation of STEP entity AngularLocationRepresentation of STEP entity AngularLocationRepresentation of STEP entity AngularLocation)#");
    py::class_<StepShape_AngularSize ,opencascade::handle<StepShape_AngularSize> , StepShape_DimensionalSize>(m,"StepShape_AngularSize",R"#(Representation of STEP entity AngularSizeRepresentation of STEP entity AngularSizeRepresentation of STEP entity AngularSize)#");
    py::class_<StepShape_BoxedHalfSpace ,opencascade::handle<StepShape_BoxedHalfSpace> , StepShape_HalfSpaceSolid>(m,"StepShape_BoxedHalfSpace",R"#()#");
    py::class_<StepShape_CompoundShapeRepresentation ,opencascade::handle<StepShape_CompoundShapeRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_CompoundShapeRepresentation",R"#(Representation of STEP entity CompoundShapeRepresentationRepresentation of STEP entity CompoundShapeRepresentationRepresentation of STEP entity CompoundShapeRepresentation)#");
    py::class_<StepShape_ConnectedEdgeSet ,opencascade::handle<StepShape_ConnectedEdgeSet> , StepShape_TopologicalRepresentationItem>(m,"StepShape_ConnectedEdgeSet",R"#(Representation of STEP entity ConnectedEdgeSetRepresentation of STEP entity ConnectedEdgeSetRepresentation of STEP entity ConnectedEdgeSet)#");
    py::class_<StepShape_ConnectedFaceSet ,opencascade::handle<StepShape_ConnectedFaceSet> , StepShape_TopologicalRepresentationItem>(m,"StepShape_ConnectedFaceSet",R"#()#");
    py::class_<StepShape_CsgShapeRepresentation ,opencascade::handle<StepShape_CsgShapeRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_CsgShapeRepresentation",R"#()#");
    py::class_<StepShape_CsgSolid ,opencascade::handle<StepShape_CsgSolid> , StepShape_SolidModel>(m,"StepShape_CsgSolid",R"#()#");
    py::class_<StepShape_DimensionalLocationWithPath ,opencascade::handle<StepShape_DimensionalLocationWithPath> , StepShape_DimensionalLocation>(m,"StepShape_DimensionalLocationWithPath",R"#(Representation of STEP entity DimensionalLocationWithPathRepresentation of STEP entity DimensionalLocationWithPathRepresentation of STEP entity DimensionalLocationWithPath)#");
    py::class_<StepShape_DimensionalSizeWithPath ,opencascade::handle<StepShape_DimensionalSizeWithPath> , StepShape_DimensionalSize>(m,"StepShape_DimensionalSizeWithPath",R"#(Representation of STEP entity DimensionalSizeWithPathRepresentation of STEP entity DimensionalSizeWithPathRepresentation of STEP entity DimensionalSizeWithPath)#");
    py::class_<StepShape_DirectedDimensionalLocation ,opencascade::handle<StepShape_DirectedDimensionalLocation> , StepShape_DimensionalLocation>(m,"StepShape_DirectedDimensionalLocation",R"#(Representation of STEP entity DirectedDimensionalLocationRepresentation of STEP entity DirectedDimensionalLocationRepresentation of STEP entity DirectedDimensionalLocation)#");
    py::class_<StepShape_Edge ,opencascade::handle<StepShape_Edge> , StepShape_TopologicalRepresentationItem>(m,"StepShape_Edge",R"#()#");
    py::class_<StepShape_EdgeBasedWireframeShapeRepresentation ,opencascade::handle<StepShape_EdgeBasedWireframeShapeRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_EdgeBasedWireframeShapeRepresentation",R"#(Representation of STEP entity EdgeBasedWireframeShapeRepresentationRepresentation of STEP entity EdgeBasedWireframeShapeRepresentationRepresentation of STEP entity EdgeBasedWireframeShapeRepresentation)#");
    py::class_<StepShape_Face ,opencascade::handle<StepShape_Face> , StepShape_TopologicalRepresentationItem>(m,"StepShape_Face",R"#()#");
    py::class_<StepShape_FaceBound ,opencascade::handle<StepShape_FaceBound> , StepShape_TopologicalRepresentationItem>(m,"StepShape_FaceBound",R"#()#");
    py::class_<StepShape_FacetedBrepShapeRepresentation ,opencascade::handle<StepShape_FacetedBrepShapeRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_FacetedBrepShapeRepresentation",R"#()#");
    py::class_<StepShape_GeometricCurveSet ,opencascade::handle<StepShape_GeometricCurveSet> , StepShape_GeometricSet>(m,"StepShape_GeometricCurveSet",R"#()#");
    py::class_<StepShape_GeometricallyBoundedSurfaceShapeRepresentation ,opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_GeometricallyBoundedSurfaceShapeRepresentation",R"#()#");
    py::class_<StepShape_GeometricallyBoundedWireframeShapeRepresentation ,opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_GeometricallyBoundedWireframeShapeRepresentation",R"#()#");
    py::class_<StepShape_Loop ,opencascade::handle<StepShape_Loop> , StepShape_TopologicalRepresentationItem>(m,"StepShape_Loop",R"#()#");
    py::class_<StepShape_LoopAndPath ,opencascade::handle<StepShape_LoopAndPath> , StepShape_TopologicalRepresentationItem>(m,"StepShape_LoopAndPath",R"#()#");
    py::class_<StepShape_ManifoldSolidBrep ,opencascade::handle<StepShape_ManifoldSolidBrep> , StepShape_SolidModel>(m,"StepShape_ManifoldSolidBrep",R"#()#");
    py::class_<StepShape_ManifoldSurfaceShapeRepresentation ,opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_ManifoldSurfaceShapeRepresentation",R"#()#");
    py::class_<StepShape_NonManifoldSurfaceShapeRepresentation ,opencascade::handle<StepShape_NonManifoldSurfaceShapeRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_NonManifoldSurfaceShapeRepresentation",R"#(Representation of STEP entity NonManifoldSurfaceShapeRepresentationRepresentation of STEP entity NonManifoldSurfaceShapeRepresentationRepresentation of STEP entity NonManifoldSurfaceShapeRepresentation)#");
    py::class_<StepShape_Path ,opencascade::handle<StepShape_Path> , StepShape_TopologicalRepresentationItem>(m,"StepShape_Path",R"#()#");
    py::class_<StepShape_PointRepresentation ,opencascade::handle<StepShape_PointRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_PointRepresentation",R"#(Representation of STEP entity PointRepresentationRepresentation of STEP entity PointRepresentationRepresentation of STEP entity PointRepresentation)#");
    py::class_<StepShape_ShapeDimensionRepresentation ,opencascade::handle<StepShape_ShapeDimensionRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_ShapeDimensionRepresentation",R"#(Representation of STEP entity ShapeDimensionRepresentationRepresentation of STEP entity ShapeDimensionRepresentationRepresentation of STEP entity ShapeDimensionRepresentation)#");
    py::class_<StepShape_ShapeRepresentationWithParameters ,opencascade::handle<StepShape_ShapeRepresentationWithParameters> , StepShape_ShapeRepresentation>(m,"StepShape_ShapeRepresentationWithParameters",R"#(Representation of STEP entity ShapeRepresentationWithParametersRepresentation of STEP entity ShapeRepresentationWithParametersRepresentation of STEP entity ShapeRepresentationWithParameters)#");
    py::class_<StepShape_SolidReplica ,opencascade::handle<StepShape_SolidReplica> , StepShape_SolidModel>(m,"StepShape_SolidReplica",R"#()#");
    py::class_<StepShape_SweptAreaSolid ,opencascade::handle<StepShape_SweptAreaSolid> , StepShape_SolidModel>(m,"StepShape_SweptAreaSolid",R"#()#");
    py::class_<StepShape_SweptFaceSolid ,opencascade::handle<StepShape_SweptFaceSolid> , StepShape_SolidModel>(m,"StepShape_SweptFaceSolid",R"#()#");
    py::class_<StepShape_TransitionalShapeRepresentation ,opencascade::handle<StepShape_TransitionalShapeRepresentation> , StepShape_ShapeRepresentation>(m,"StepShape_TransitionalShapeRepresentation",R"#()#");
    py::class_<StepShape_Vertex ,opencascade::handle<StepShape_Vertex> , StepShape_TopologicalRepresentationItem>(m,"StepShape_Vertex",R"#()#");
    py::class_<StepShape_BrepWithVoids ,opencascade::handle<StepShape_BrepWithVoids> , StepShape_ManifoldSolidBrep>(m,"StepShape_BrepWithVoids",R"#()#");
    py::class_<StepShape_ClosedShell ,opencascade::handle<StepShape_ClosedShell> , StepShape_ConnectedFaceSet>(m,"StepShape_ClosedShell",R"#()#");
    py::class_<StepShape_ConnectedFaceSubSet ,opencascade::handle<StepShape_ConnectedFaceSubSet> , StepShape_ConnectedFaceSet>(m,"StepShape_ConnectedFaceSubSet",R"#(Representation of STEP entity ConnectedFaceSubSetRepresentation of STEP entity ConnectedFaceSubSetRepresentation of STEP entity ConnectedFaceSubSet)#");
    py::class_<StepShape_EdgeCurve ,opencascade::handle<StepShape_EdgeCurve> , StepShape_Edge>(m,"StepShape_EdgeCurve",R"#()#");
    py::class_<StepShape_EdgeLoop ,opencascade::handle<StepShape_EdgeLoop> , StepShape_Loop>(m,"StepShape_EdgeLoop",R"#()#");
    py::class_<StepShape_ExtrudedAreaSolid ,opencascade::handle<StepShape_ExtrudedAreaSolid> , StepShape_SweptAreaSolid>(m,"StepShape_ExtrudedAreaSolid",R"#()#");
    py::class_<StepShape_ExtrudedFaceSolid ,opencascade::handle<StepShape_ExtrudedFaceSolid> , StepShape_SweptFaceSolid>(m,"StepShape_ExtrudedFaceSolid",R"#()#");
    py::class_<StepShape_FaceOuterBound ,opencascade::handle<StepShape_FaceOuterBound> , StepShape_FaceBound>(m,"StepShape_FaceOuterBound",R"#()#");
    py::class_<StepShape_FaceSurface ,opencascade::handle<StepShape_FaceSurface> , StepShape_Face>(m,"StepShape_FaceSurface",R"#()#");
    py::class_<StepShape_FacetedBrep ,opencascade::handle<StepShape_FacetedBrep> , StepShape_ManifoldSolidBrep>(m,"StepShape_FacetedBrep",R"#()#");
    py::class_<StepShape_FacetedBrepAndBrepWithVoids ,opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> , StepShape_ManifoldSolidBrep>(m,"StepShape_FacetedBrepAndBrepWithVoids",R"#()#");
    py::class_<StepShape_OpenShell ,opencascade::handle<StepShape_OpenShell> , StepShape_ConnectedFaceSet>(m,"StepShape_OpenShell",R"#()#");
    py::class_<StepShape_OrientedEdge ,opencascade::handle<StepShape_OrientedEdge> , StepShape_Edge>(m,"StepShape_OrientedEdge",R"#()#");
    py::class_<StepShape_OrientedFace ,opencascade::handle<StepShape_OrientedFace> , StepShape_Face>(m,"StepShape_OrientedFace",R"#()#");
    py::class_<StepShape_OrientedPath ,opencascade::handle<StepShape_OrientedPath> , StepShape_Path>(m,"StepShape_OrientedPath",R"#()#");
    py::class_<StepShape_PolyLoop ,opencascade::handle<StepShape_PolyLoop> , StepShape_Loop>(m,"StepShape_PolyLoop",R"#()#");
    py::class_<StepShape_RevolvedAreaSolid ,opencascade::handle<StepShape_RevolvedAreaSolid> , StepShape_SweptAreaSolid>(m,"StepShape_RevolvedAreaSolid",R"#()#");
    py::class_<StepShape_RevolvedFaceSolid ,opencascade::handle<StepShape_RevolvedFaceSolid> , StepShape_SweptFaceSolid>(m,"StepShape_RevolvedFaceSolid",R"#()#");
    py::class_<StepShape_Subedge ,opencascade::handle<StepShape_Subedge> , StepShape_Edge>(m,"StepShape_Subedge",R"#(Representation of STEP entity SubedgeRepresentation of STEP entity SubedgeRepresentation of STEP entity Subedge)#");
    py::class_<StepShape_Subface ,opencascade::handle<StepShape_Subface> , StepShape_Face>(m,"StepShape_Subface",R"#(Representation of STEP entity SubfaceRepresentation of STEP entity SubfaceRepresentation of STEP entity Subface)#");
    py::class_<StepShape_VertexLoop ,opencascade::handle<StepShape_VertexLoop> , StepShape_Loop>(m,"StepShape_VertexLoop",R"#()#");
    py::class_<StepShape_VertexPoint ,opencascade::handle<StepShape_VertexPoint> , StepShape_Vertex>(m,"StepShape_VertexPoint",R"#()#");
    py::class_<StepShape_AdvancedFace ,opencascade::handle<StepShape_AdvancedFace> , StepShape_FaceSurface>(m,"StepShape_AdvancedFace",R"#()#");
    py::class_<StepShape_OrientedClosedShell ,opencascade::handle<StepShape_OrientedClosedShell> , StepShape_ClosedShell>(m,"StepShape_OrientedClosedShell",R"#()#");
    py::class_<StepShape_OrientedOpenShell ,opencascade::handle<StepShape_OrientedOpenShell> , StepShape_OpenShell>(m,"StepShape_OrientedOpenShell",R"#()#");
    py::class_<StepShape_SeamEdge ,opencascade::handle<StepShape_SeamEdge> , StepShape_OrientedEdge>(m,"StepShape_SeamEdge",R"#(Representation of STEP entity SeamEdgeRepresentation of STEP entity SeamEdgeRepresentation of STEP entity SeamEdge)#");

};

// user-defined post-inclusion per module

// user-defined post
