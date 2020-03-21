
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
#include <StepRepr_MappedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MakeFromUsageOption.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ContinuosShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ItemDefinedTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompoundRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ValueRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Apex.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompositeShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Representation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MaterialProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MaterialPropertyRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PerpendicularTo.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_GeometricAlignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Tangent.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CharacterizedRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PropertyDefinitionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_IntegerRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_StructuralResponseProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeRepresentationRelationshipWithTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConstructiveGeometryRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DerivedShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_AllAroundShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Extension.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspectDerivingRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationRelationshipWithTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_SpecifiedHigherUsageOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConstructiveGeometryRepresentationRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompositeGroupShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_StructuralResponsePropertyDefinitionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspectTransition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ParallelOffset.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_BetweenShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CentreOfSymmetry.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ParametricRepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DataEnvironment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_QuantifiedAssemblyComponentUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_FeatureForDatumTargetRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompShAspAndDatumFeatAndShAsp.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepRepr_RWAllAroundShapeAspect.hxx>
#include <RWStepRepr_RWApex.hxx>
#include <RWStepRepr_RWAssemblyComponentUsage.hxx>
#include <RWStepRepr_RWAssemblyComponentUsageSubstitute.hxx>
#include <RWStepRepr_RWBetweenShapeAspect.hxx>
#include <RWStepRepr_RWCentreOfSymmetry.hxx>
#include <RWStepRepr_RWCharacterizedRepresentation.hxx>
#include <RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx>
#include <RWStepRepr_RWCompositeGroupShapeAspect.hxx>
#include <RWStepRepr_RWCompositeShapeAspect.hxx>
#include <RWStepRepr_RWCompoundRepresentationItem.hxx>
#include <RWStepRepr_RWCompShAspAndDatumFeatAndShAsp.hxx>
#include <RWStepRepr_RWConfigurationDesign.hxx>
#include <RWStepRepr_RWConfigurationEffectivity.hxx>
#include <RWStepRepr_RWConfigurationItem.hxx>
#include <RWStepRepr_RWConstructiveGeometryRepresentation.hxx>
#include <RWStepRepr_RWConstructiveGeometryRepresentationRelationship.hxx>
#include <RWStepRepr_RWContinuosShapeAspect.hxx>
#include <RWStepRepr_RWDataEnvironment.hxx>
#include <RWStepRepr_RWDefinitionalRepresentation.hxx>
#include <RWStepRepr_RWDerivedShapeAspect.hxx>
#include <RWStepRepr_RWDescriptiveRepresentationItem.hxx>
#include <RWStepRepr_RWExtension.hxx>
#include <RWStepRepr_RWFeatureForDatumTargetRelationship.hxx>
#include <RWStepRepr_RWFunctionallyDefinedTransformation.hxx>
#include <RWStepRepr_RWGeometricAlignment.hxx>
#include <RWStepRepr_RWGlobalUncertaintyAssignedContext.hxx>
#include <RWStepRepr_RWGlobalUnitAssignedContext.hxx>
#include <RWStepRepr_RWIntegerRepresentationItem.hxx>
#include <RWStepRepr_RWItemDefinedTransformation.hxx>
#include <RWStepRepr_RWMakeFromUsageOption.hxx>
#include <RWStepRepr_RWMappedItem.hxx>
#include <RWStepRepr_RWMaterialDesignation.hxx>
#include <RWStepRepr_RWMaterialProperty.hxx>
#include <RWStepRepr_RWMaterialPropertyRepresentation.hxx>
#include <RWStepRepr_RWMeasureRepresentationItem.hxx>
#include <RWStepRepr_RWParallelOffset.hxx>
#include <RWStepRepr_RWParametricRepresentationContext.hxx>
#include <RWStepRepr_RWPerpendicularTo.hxx>
#include <RWStepRepr_RWProductConcept.hxx>
#include <RWStepRepr_RWProductDefinitionShape.hxx>
#include <RWStepRepr_RWPropertyDefinition.hxx>
#include <RWStepRepr_RWPropertyDefinitionRelationship.hxx>
#include <RWStepRepr_RWPropertyDefinitionRepresentation.hxx>
#include <RWStepRepr_RWQuantifiedAssemblyComponentUsage.hxx>
#include <RWStepRepr_RWRepresentation.hxx>
#include <RWStepRepr_RWRepresentationContext.hxx>
#include <RWStepRepr_RWRepresentationItem.hxx>
#include <RWStepRepr_RWRepresentationMap.hxx>
#include <RWStepRepr_RWRepresentationRelationship.hxx>
#include <RWStepRepr_RWRepresentationRelationshipWithTransformation.hxx>
#include <RWStepRepr_RWReprItemAndLengthMeasureWithUnit.hxx>
#include <RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI.hxx>
#include <RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit.hxx>
#include <RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx>
#include <RWStepRepr_RWShapeAspect.hxx>
#include <RWStepRepr_RWShapeAspectDerivingRelationship.hxx>
#include <RWStepRepr_RWShapeAspectRelationship.hxx>
#include <RWStepRepr_RWShapeAspectTransition.hxx>
#include <RWStepRepr_RWShapeRepresentationRelationshipWithTransformation.hxx>
#include <RWStepRepr_RWSpecifiedHigherUsageOccurrence.hxx>
#include <RWStepRepr_RWStructuralResponseProperty.hxx>
#include <RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation.hxx>
#include <RWStepRepr_RWTangent.hxx>
#include <RWStepRepr_RWValueRepresentationItem.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepRepr_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepRepr", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStepRepr_RWAllAroundShapeAspect , shared_ptr<RWStepRepr_RWAllAroundShapeAspect> >(m,"RWStepRepr_RWAllAroundShapeAspect",R"#(Read & Write tool for AllAroundShapeAspect)#");
    py::class_<RWStepRepr_RWApex , shared_ptr<RWStepRepr_RWApex> >(m,"RWStepRepr_RWApex",R"#(Read & Write tool for Apex)#");
    py::class_<RWStepRepr_RWAssemblyComponentUsage , shared_ptr<RWStepRepr_RWAssemblyComponentUsage> >(m,"RWStepRepr_RWAssemblyComponentUsage",R"#(Read & Write tool for AssemblyComponentUsage)#");
    py::class_<RWStepRepr_RWAssemblyComponentUsageSubstitute , shared_ptr<RWStepRepr_RWAssemblyComponentUsageSubstitute> >(m,"RWStepRepr_RWAssemblyComponentUsageSubstitute",R"#(Read & Write Module for AssemblyComponentUsageSubstitute)#");
    py::class_<RWStepRepr_RWBetweenShapeAspect , shared_ptr<RWStepRepr_RWBetweenShapeAspect> >(m,"RWStepRepr_RWBetweenShapeAspect",R"#(Read & Write tool for BetweenShapeAspect)#");
    py::class_<RWStepRepr_RWCentreOfSymmetry , shared_ptr<RWStepRepr_RWCentreOfSymmetry> >(m,"RWStepRepr_RWCentreOfSymmetry",R"#(Read & Write tool for CentreOfSymmetry)#");
    py::class_<RWStepRepr_RWCharacterizedRepresentation , shared_ptr<RWStepRepr_RWCharacterizedRepresentation> >(m,"RWStepRepr_RWCharacterizedRepresentation",R"#(Read & Write Module for CharacterizedRepresentation)#");
    py::class_<RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp , shared_ptr<RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp> >(m,"RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp",R"#(Read & Write Module for CompGroupShAspAndCompShAspAndDatumFeatAndShAsp)#");
    py::class_<RWStepRepr_RWCompShAspAndDatumFeatAndShAsp , shared_ptr<RWStepRepr_RWCompShAspAndDatumFeatAndShAsp> >(m,"RWStepRepr_RWCompShAspAndDatumFeatAndShAsp",R"#(Read & Write Module for CompShAspAndDatumFeatAndShAsp)#");
    py::class_<RWStepRepr_RWCompositeGroupShapeAspect , shared_ptr<RWStepRepr_RWCompositeGroupShapeAspect> >(m,"RWStepRepr_RWCompositeGroupShapeAspect",R"#(Read & Write tool for CompositeGroupShapeAspect)#");
    py::class_<RWStepRepr_RWCompositeShapeAspect , shared_ptr<RWStepRepr_RWCompositeShapeAspect> >(m,"RWStepRepr_RWCompositeShapeAspect",R"#(Read & Write tool for CompositeShapeAspect)#");
    py::class_<RWStepRepr_RWCompoundRepresentationItem , shared_ptr<RWStepRepr_RWCompoundRepresentationItem> >(m,"RWStepRepr_RWCompoundRepresentationItem",R"#(Read & Write Module for CompoundRepresentationItem)#");
    py::class_<RWStepRepr_RWConfigurationDesign , shared_ptr<RWStepRepr_RWConfigurationDesign> >(m,"RWStepRepr_RWConfigurationDesign",R"#(Read & Write tool for ConfigurationDesign)#");
    py::class_<RWStepRepr_RWConfigurationEffectivity , shared_ptr<RWStepRepr_RWConfigurationEffectivity> >(m,"RWStepRepr_RWConfigurationEffectivity",R"#(Read & Write tool for ConfigurationEffectivity)#");
    py::class_<RWStepRepr_RWConfigurationItem , shared_ptr<RWStepRepr_RWConfigurationItem> >(m,"RWStepRepr_RWConfigurationItem",R"#(Read & Write tool for ConfigurationItem)#");
    py::class_<RWStepRepr_RWConstructiveGeometryRepresentation , shared_ptr<RWStepRepr_RWConstructiveGeometryRepresentation> >(m,"RWStepRepr_RWConstructiveGeometryRepresentation",R"#(Read & Write Module for ConstructiveGeometryRepresentation)#");
    py::class_<RWStepRepr_RWConstructiveGeometryRepresentationRelationship , shared_ptr<RWStepRepr_RWConstructiveGeometryRepresentationRelationship> >(m,"RWStepRepr_RWConstructiveGeometryRepresentationRelationship",R"#(Read & Write Module for ConstructiveGeometryRepresentationRelationship)#");
    py::class_<RWStepRepr_RWContinuosShapeAspect , shared_ptr<RWStepRepr_RWContinuosShapeAspect> >(m,"RWStepRepr_RWContinuosShapeAspect",R"#(Read & Write tool for ContinuosShapeAspect)#");
    py::class_<RWStepRepr_RWDataEnvironment , shared_ptr<RWStepRepr_RWDataEnvironment> >(m,"RWStepRepr_RWDataEnvironment",R"#(Read & Write tool for DataEnvironment)#");
    py::class_<RWStepRepr_RWDefinitionalRepresentation , shared_ptr<RWStepRepr_RWDefinitionalRepresentation> >(m,"RWStepRepr_RWDefinitionalRepresentation",R"#(Read & Write Module for DefinitionalRepresentation)#");
    py::class_<RWStepRepr_RWDerivedShapeAspect , shared_ptr<RWStepRepr_RWDerivedShapeAspect> >(m,"RWStepRepr_RWDerivedShapeAspect",R"#(Read & Write tool for DerivedShapeAspect)#");
    py::class_<RWStepRepr_RWDescriptiveRepresentationItem , shared_ptr<RWStepRepr_RWDescriptiveRepresentationItem> >(m,"RWStepRepr_RWDescriptiveRepresentationItem",R"#(Read & Write Module for DescriptiveRepresentationItem)#");
    py::class_<RWStepRepr_RWExtension , shared_ptr<RWStepRepr_RWExtension> >(m,"RWStepRepr_RWExtension",R"#(Read & Write tool for Extension)#");
    py::class_<RWStepRepr_RWFeatureForDatumTargetRelationship , shared_ptr<RWStepRepr_RWFeatureForDatumTargetRelationship> >(m,"RWStepRepr_RWFeatureForDatumTargetRelationship",R"#(Read & Write tool for FeatureForDatumTargetRelationship)#");
    py::class_<RWStepRepr_RWFunctionallyDefinedTransformation , shared_ptr<RWStepRepr_RWFunctionallyDefinedTransformation> >(m,"RWStepRepr_RWFunctionallyDefinedTransformation",R"#(Read & Write Module for FunctionallyDefinedTransformation)#");
    py::class_<RWStepRepr_RWGeometricAlignment , shared_ptr<RWStepRepr_RWGeometricAlignment> >(m,"RWStepRepr_RWGeometricAlignment",R"#(Read & Write tool for GeometricAlignment)#");
    py::class_<RWStepRepr_RWGlobalUncertaintyAssignedContext , shared_ptr<RWStepRepr_RWGlobalUncertaintyAssignedContext> >(m,"RWStepRepr_RWGlobalUncertaintyAssignedContext",R"#(Read & Write Module for GlobalUncertaintyAssignedContext)#");
    py::class_<RWStepRepr_RWGlobalUnitAssignedContext , shared_ptr<RWStepRepr_RWGlobalUnitAssignedContext> >(m,"RWStepRepr_RWGlobalUnitAssignedContext",R"#(Read & Write Module for GlobalUnitAssignedContext)#");
    py::class_<RWStepRepr_RWIntegerRepresentationItem , shared_ptr<RWStepRepr_RWIntegerRepresentationItem> >(m,"RWStepRepr_RWIntegerRepresentationItem",R"#(Read & Write Module for IntegerRepresentationItem)#");
    py::class_<RWStepRepr_RWItemDefinedTransformation , shared_ptr<RWStepRepr_RWItemDefinedTransformation> >(m,"RWStepRepr_RWItemDefinedTransformation",R"#(Read & Write Module for ItemDefinedTransformation)#");
    py::class_<RWStepRepr_RWMakeFromUsageOption , shared_ptr<RWStepRepr_RWMakeFromUsageOption> >(m,"RWStepRepr_RWMakeFromUsageOption",R"#(Read & Write tool for MakeFromUsageOption)#");
    py::class_<RWStepRepr_RWMappedItem , shared_ptr<RWStepRepr_RWMappedItem> >(m,"RWStepRepr_RWMappedItem",R"#(Read & Write Module for MappedItem)#");
    py::class_<RWStepRepr_RWMaterialDesignation , shared_ptr<RWStepRepr_RWMaterialDesignation> >(m,"RWStepRepr_RWMaterialDesignation",R"#(Read & Write Module for MaterialDesignation)#");
    py::class_<RWStepRepr_RWMaterialProperty , shared_ptr<RWStepRepr_RWMaterialProperty> >(m,"RWStepRepr_RWMaterialProperty",R"#(Read & Write tool for MaterialProperty)#");
    py::class_<RWStepRepr_RWMaterialPropertyRepresentation , shared_ptr<RWStepRepr_RWMaterialPropertyRepresentation> >(m,"RWStepRepr_RWMaterialPropertyRepresentation",R"#(Read & Write tool for MaterialPropertyRepresentation)#");
    py::class_<RWStepRepr_RWMeasureRepresentationItem , shared_ptr<RWStepRepr_RWMeasureRepresentationItem> >(m,"RWStepRepr_RWMeasureRepresentationItem",R"#(Read & Write Module for MeasureRepresentationItem)#");
    py::class_<RWStepRepr_RWParallelOffset , shared_ptr<RWStepRepr_RWParallelOffset> >(m,"RWStepRepr_RWParallelOffset",R"#(Read & Write tool for ParallelOffset)#");
    py::class_<RWStepRepr_RWParametricRepresentationContext , shared_ptr<RWStepRepr_RWParametricRepresentationContext> >(m,"RWStepRepr_RWParametricRepresentationContext",R"#(Read & Write Module for ParametricRepresentationContext)#");
    py::class_<RWStepRepr_RWPerpendicularTo , shared_ptr<RWStepRepr_RWPerpendicularTo> >(m,"RWStepRepr_RWPerpendicularTo",R"#(Read & Write tool for PerpendicularTo)#");
    py::class_<RWStepRepr_RWProductConcept , shared_ptr<RWStepRepr_RWProductConcept> >(m,"RWStepRepr_RWProductConcept",R"#(Read & Write tool for ProductConcept)#");
    py::class_<RWStepRepr_RWProductDefinitionShape , shared_ptr<RWStepRepr_RWProductDefinitionShape> >(m,"RWStepRepr_RWProductDefinitionShape",R"#(Read & Write tool for ProductDefinitionShape)#");
    py::class_<RWStepRepr_RWPropertyDefinition , shared_ptr<RWStepRepr_RWPropertyDefinition> >(m,"RWStepRepr_RWPropertyDefinition",R"#(Read & Write tool for PropertyDefinition)#");
    py::class_<RWStepRepr_RWPropertyDefinitionRelationship , shared_ptr<RWStepRepr_RWPropertyDefinitionRelationship> >(m,"RWStepRepr_RWPropertyDefinitionRelationship",R"#(Read & Write tool for PropertyDefinitionRelationship)#");
    py::class_<RWStepRepr_RWPropertyDefinitionRepresentation , shared_ptr<RWStepRepr_RWPropertyDefinitionRepresentation> >(m,"RWStepRepr_RWPropertyDefinitionRepresentation",R"#(Read & Write tool for PropertyDefinitionRepresentation)#");
    py::class_<RWStepRepr_RWQuantifiedAssemblyComponentUsage , shared_ptr<RWStepRepr_RWQuantifiedAssemblyComponentUsage> >(m,"RWStepRepr_RWQuantifiedAssemblyComponentUsage",R"#(Read & Write tool for QuantifiedAssemblyComponentUsage)#");
    py::class_<RWStepRepr_RWReprItemAndLengthMeasureWithUnit , shared_ptr<RWStepRepr_RWReprItemAndLengthMeasureWithUnit> >(m,"RWStepRepr_RWReprItemAndLengthMeasureWithUnit",R"#(Read & Write Module for ReprItemAndLengthMeasureWithUni)#");
    py::class_<RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI , shared_ptr<RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI> >(m,"RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI",R"#(Read & Write Module for ReprItemAndLengthMeasureWithUnitAndQRI)#");
    py::class_<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit , shared_ptr<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit> >(m,"RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit",R"#(Read & Write Module for ReprItemAndPlaneAngleMeasureWithUni)#");
    py::class_<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI , shared_ptr<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI> >(m,"RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI",R"#(Read & Write Module for ReprItemAndPlaneAngleMeasureWithUnitAndQRI)#");
    py::class_<RWStepRepr_RWRepresentation , shared_ptr<RWStepRepr_RWRepresentation> >(m,"RWStepRepr_RWRepresentation",R"#(Read & Write Module for Representation)#");
    py::class_<RWStepRepr_RWRepresentationContext , shared_ptr<RWStepRepr_RWRepresentationContext> >(m,"RWStepRepr_RWRepresentationContext",R"#(Read & Write Module for RepresentationContext)#");
    py::class_<RWStepRepr_RWRepresentationItem , shared_ptr<RWStepRepr_RWRepresentationItem> >(m,"RWStepRepr_RWRepresentationItem",R"#(Read & Write Module for RepresentationItem)#");
    py::class_<RWStepRepr_RWRepresentationMap , shared_ptr<RWStepRepr_RWRepresentationMap> >(m,"RWStepRepr_RWRepresentationMap",R"#(Read & Write Module for RepresentationMap)#");
    py::class_<RWStepRepr_RWRepresentationRelationship , shared_ptr<RWStepRepr_RWRepresentationRelationship> >(m,"RWStepRepr_RWRepresentationRelationship",R"#(Read & Write Module for RepresentationRelationship)#");
    py::class_<RWStepRepr_RWRepresentationRelationshipWithTransformation , shared_ptr<RWStepRepr_RWRepresentationRelationshipWithTransformation> >(m,"RWStepRepr_RWRepresentationRelationshipWithTransformation",R"#(Read & Write Module for RepresentationRelationshipWithTransformation)#");
    py::class_<RWStepRepr_RWShapeAspect , shared_ptr<RWStepRepr_RWShapeAspect> >(m,"RWStepRepr_RWShapeAspect",R"#(Read & Write Module for ShapeAspect)#");
    py::class_<RWStepRepr_RWShapeAspectDerivingRelationship , shared_ptr<RWStepRepr_RWShapeAspectDerivingRelationship> >(m,"RWStepRepr_RWShapeAspectDerivingRelationship",R"#(Read & Write tool for ShapeAspectDerivingRelationship)#");
    py::class_<RWStepRepr_RWShapeAspectRelationship , shared_ptr<RWStepRepr_RWShapeAspectRelationship> >(m,"RWStepRepr_RWShapeAspectRelationship",R"#(Read & Write tool for ShapeAspectRelationship)#");
    py::class_<RWStepRepr_RWShapeAspectTransition , shared_ptr<RWStepRepr_RWShapeAspectTransition> >(m,"RWStepRepr_RWShapeAspectTransition",R"#(Read & Write tool for ShapeAspectTransition)#");
    py::class_<RWStepRepr_RWShapeRepresentationRelationshipWithTransformation , shared_ptr<RWStepRepr_RWShapeRepresentationRelationshipWithTransformation> >(m,"RWStepRepr_RWShapeRepresentationRelationshipWithTransformation",R"#(Read & Write Module for ShapeRepresentationRelationshipWithTransformation)#");
    py::class_<RWStepRepr_RWSpecifiedHigherUsageOccurrence , shared_ptr<RWStepRepr_RWSpecifiedHigherUsageOccurrence> >(m,"RWStepRepr_RWSpecifiedHigherUsageOccurrence",R"#(Read & Write tool for SpecifiedHigherUsageOccurrence)#");
    py::class_<RWStepRepr_RWStructuralResponseProperty , shared_ptr<RWStepRepr_RWStructuralResponseProperty> >(m,"RWStepRepr_RWStructuralResponseProperty",R"#(Read & Write tool for StructuralResponseProperty)#");
    py::class_<RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation , shared_ptr<RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation> >(m,"RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation",R"#(Read & Write tool for StructuralResponsePropertyDefinitionRepresentation)#");
    py::class_<RWStepRepr_RWTangent , shared_ptr<RWStepRepr_RWTangent> >(m,"RWStepRepr_RWTangent",R"#(Read & Write tool for Tangent)#");
    py::class_<RWStepRepr_RWValueRepresentationItem , shared_ptr<RWStepRepr_RWValueRepresentationItem> >(m,"RWStepRepr_RWValueRepresentationItem",R"#(Read & Write Module for ValueRepresentationItem)#");

};

// user-defined post-inclusion per module

// user-defined post
