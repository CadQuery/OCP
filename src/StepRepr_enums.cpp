
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepRepr_ConfigurationDesign.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepBasic_PlaneAngleMeasureWithUnit.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_DataEnvironment.hxx>
#include <StepRepr_Representation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepShape_QualifiedRepresentationItem.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_Unit.hxx>
#include <StepRepr_ItemDefinedTransformation.hxx>
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_GeneralProperty.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepRepr_Representation.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_Representation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductConceptContext.hxx>
#include <StepBasic_PlaneAngleMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_Representation.hxx>

// module includes
#include <StepRepr_AllAroundShapeAspect.hxx>
#include <StepRepr_Apex.hxx>
#include <StepRepr_Array1OfMaterialPropertyRepresentation.hxx>
#include <StepRepr_Array1OfPropertyDefinitionRepresentation.hxx>
#include <StepRepr_Array1OfRepresentationItem.hxx>
#include <StepRepr_Array1OfShapeAspect.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>
#include <StepRepr_BetweenShapeAspect.hxx>
#include <StepRepr_CentreOfSymmetry.hxx>
#include <StepRepr_CharacterizedDefinition.hxx>
#include <StepRepr_CharacterizedRepresentation.hxx>
#include <StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx>
#include <StepRepr_CompositeGroupShapeAspect.hxx>
#include <StepRepr_CompositeShapeAspect.hxx>
#include <StepRepr_CompoundRepresentationItem.hxx>
#include <StepRepr_CompShAspAndDatumFeatAndShAsp.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <StepRepr_ConfigurationDesignItem.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepRepr_ConstructiveGeometryRepresentation.hxx>
#include <StepRepr_ConstructiveGeometryRepresentationRelationship.hxx>
#include <StepRepr_ContinuosShapeAspect.hxx>
#include <StepRepr_DataEnvironment.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <StepRepr_DerivedShapeAspect.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepRepr_Extension.hxx>
#include <StepRepr_ExternallyDefinedRepresentation.hxx>
#include <StepRepr_FeatureForDatumTargetRelationship.hxx>
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <StepRepr_GeometricAlignment.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepRepr_HArray1OfMaterialPropertyRepresentation.hxx>
#include <StepRepr_HArray1OfPropertyDefinitionRepresentation.hxx>
#include <StepRepr_HArray1OfRepresentationItem.hxx>
#include <StepRepr_HArray1OfShapeAspect.hxx>
#include <StepRepr_HSequenceOfMaterialPropertyRepresentation.hxx>
#include <StepRepr_HSequenceOfRepresentationItem.hxx>
#include <StepRepr_IntegerRepresentationItem.hxx>
#include <StepRepr_ItemDefinedTransformation.hxx>
#include <StepRepr_MakeFromUsageOption.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepRepr_MaterialProperty.hxx>
#include <StepRepr_MaterialPropertyRepresentation.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepRepr_ParallelOffset.hxx>
#include <StepRepr_ParametricRepresentationContext.hxx>
#include <StepRepr_PerpendicularTo.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ProductDefinitionUsage.hxx>
#include <StepRepr_PromissoryUsageOccurrence.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinitionRepresentation.hxx>
#include <StepRepr_QuantifiedAssemblyComponentUsage.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepRepr_RepresentationRelationshipWithTransformation.hxx>
#include <StepRepr_RepresentedDefinition.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnit.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI.hxx>
#include <StepRepr_ReprItemAndMeasureWithUnit.hxx>
#include <StepRepr_ReprItemAndMeasureWithUnitAndQRI.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnit.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx>
#include <StepRepr_SequenceOfMaterialPropertyRepresentation.hxx>
#include <StepRepr_SequenceOfRepresentationItem.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectDerivingRelationship.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepRepr_ShapeAspectTransition.hxx>
#include <StepRepr_ShapeDefinition.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepRepr_ShapeRepresentationRelationshipWithTransformation.hxx>
#include <StepRepr_SpecifiedHigherUsageOccurrence.hxx>
#include <StepRepr_StructuralResponseProperty.hxx>
#include <StepRepr_StructuralResponsePropertyDefinitionRepresentation.hxx>
#include <StepRepr_SuppliedPartRelationship.hxx>
#include <StepRepr_Tangent.hxx>
#include <StepRepr_Transformation.hxx>
#include <StepRepr_ValueRange.hxx>
#include <StepRepr_ValueRepresentationItem.hxx>

// template related includes
// ./opencascade/StepRepr_Array1OfShapeAspect.hxx
#include "NCollection.hxx"
// ./opencascade/StepRepr_Array1OfPropertyDefinitionRepresentation.hxx
#include "NCollection.hxx"
// ./opencascade/StepRepr_SequenceOfRepresentationItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepRepr_Array1OfMaterialPropertyRepresentation.hxx
#include "NCollection.hxx"
// ./opencascade/StepRepr_Array1OfRepresentationItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepRepr_SequenceOfMaterialPropertyRepresentation.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepRepr_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepRepr", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<StepRepr_ShapeAspect> >(m,"StepRepr_Array1OfShapeAspect");  
    preregister_template_NCollection_Array1<opencascade::handle<StepRepr_PropertyDefinitionRepresentation> >(m,"StepRepr_Array1OfPropertyDefinitionRepresentation");  
    preregister_template_NCollection_Sequence<opencascade::handle<StepRepr_RepresentationItem> >(m,"StepRepr_SequenceOfRepresentationItem");  
    preregister_template_NCollection_Array1<opencascade::handle<StepRepr_MaterialPropertyRepresentation> >(m,"StepRepr_Array1OfMaterialPropertyRepresentation");  
    preregister_template_NCollection_Array1<opencascade::handle<StepRepr_RepresentationItem> >(m,"StepRepr_Array1OfRepresentationItem");  
    preregister_template_NCollection_Sequence<opencascade::handle<StepRepr_MaterialPropertyRepresentation> >(m,"StepRepr_SequenceOfMaterialPropertyRepresentation");  

// classes forward declarations only
    py::class_<StepRepr_AssemblyComponentUsageSubstitute ,opencascade::handle<StepRepr_AssemblyComponentUsageSubstitute>  , Standard_Transient >(m,"StepRepr_AssemblyComponentUsageSubstitute",R"#()#");
    py::class_<StepRepr_CharacterizedDefinition , shared_ptr<StepRepr_CharacterizedDefinition>  , StepData_SelectType >(m,"StepRepr_CharacterizedDefinition",R"#(Representation of STEP SELECT type CharacterizedDefinition)#");
    py::class_<StepRepr_ConfigurationDesign ,opencascade::handle<StepRepr_ConfigurationDesign>  , Standard_Transient >(m,"StepRepr_ConfigurationDesign",R"#(Representation of STEP entity ConfigurationDesignRepresentation of STEP entity ConfigurationDesignRepresentation of STEP entity ConfigurationDesign)#");
    py::class_<StepRepr_ConfigurationDesignItem , shared_ptr<StepRepr_ConfigurationDesignItem>  , StepData_SelectType >(m,"StepRepr_ConfigurationDesignItem",R"#(Representation of STEP SELECT type ConfigurationDesignItem)#");
    py::class_<StepRepr_ConfigurationEffectivity ,opencascade::handle<StepRepr_ConfigurationEffectivity>  , StepBasic_ProductDefinitionEffectivity >(m,"StepRepr_ConfigurationEffectivity",R"#(Representation of STEP entity ConfigurationEffectivityRepresentation of STEP entity ConfigurationEffectivityRepresentation of STEP entity ConfigurationEffectivity)#");
    py::class_<StepRepr_ConfigurationItem ,opencascade::handle<StepRepr_ConfigurationItem>  , Standard_Transient >(m,"StepRepr_ConfigurationItem",R"#(Representation of STEP entity ConfigurationItemRepresentation of STEP entity ConfigurationItemRepresentation of STEP entity ConfigurationItem)#");
    py::class_<StepRepr_DataEnvironment ,opencascade::handle<StepRepr_DataEnvironment>  , Standard_Transient >(m,"StepRepr_DataEnvironment",R"#(Representation of STEP entity DataEnvironmentRepresentation of STEP entity DataEnvironmentRepresentation of STEP entity DataEnvironment)#");
    py::class_<StepRepr_FunctionallyDefinedTransformation ,opencascade::handle<StepRepr_FunctionallyDefinedTransformation>  , Standard_Transient >(m,"StepRepr_FunctionallyDefinedTransformation",R"#()#");
    py::class_<StepRepr_HArray1OfMaterialPropertyRepresentation ,opencascade::handle<StepRepr_HArray1OfMaterialPropertyRepresentation>  , StepRepr_Array1OfMaterialPropertyRepresentation , Standard_Transient >(m,"StepRepr_HArray1OfMaterialPropertyRepresentation",R"#()#");
    py::class_<StepRepr_HArray1OfPropertyDefinitionRepresentation ,opencascade::handle<StepRepr_HArray1OfPropertyDefinitionRepresentation>  , StepRepr_Array1OfPropertyDefinitionRepresentation , Standard_Transient >(m,"StepRepr_HArray1OfPropertyDefinitionRepresentation",R"#()#");
    py::class_<StepRepr_HArray1OfRepresentationItem ,opencascade::handle<StepRepr_HArray1OfRepresentationItem>  , StepRepr_Array1OfRepresentationItem , Standard_Transient >(m,"StepRepr_HArray1OfRepresentationItem",R"#()#");
    py::class_<StepRepr_HArray1OfShapeAspect ,opencascade::handle<StepRepr_HArray1OfShapeAspect>  , StepRepr_Array1OfShapeAspect , Standard_Transient >(m,"StepRepr_HArray1OfShapeAspect",R"#()#");
    py::class_<StepRepr_HSequenceOfMaterialPropertyRepresentation ,opencascade::handle<StepRepr_HSequenceOfMaterialPropertyRepresentation>  , StepRepr_SequenceOfMaterialPropertyRepresentation , Standard_Transient >(m,"StepRepr_HSequenceOfMaterialPropertyRepresentation",R"#()#");
    py::class_<StepRepr_HSequenceOfRepresentationItem ,opencascade::handle<StepRepr_HSequenceOfRepresentationItem>  , StepRepr_SequenceOfRepresentationItem , Standard_Transient >(m,"StepRepr_HSequenceOfRepresentationItem",R"#()#");
    py::class_<StepRepr_ItemDefinedTransformation ,opencascade::handle<StepRepr_ItemDefinedTransformation>  , Standard_Transient >(m,"StepRepr_ItemDefinedTransformation",R"#(Added from StepRepr Rev2 to Rev4Added from StepRepr Rev2 to Rev4Added from StepRepr Rev2 to Rev4)#");
    py::class_<StepRepr_MaterialDesignation ,opencascade::handle<StepRepr_MaterialDesignation>  , Standard_Transient >(m,"StepRepr_MaterialDesignation",R"#()#");
    py::class_<StepRepr_ProductConcept ,opencascade::handle<StepRepr_ProductConcept>  , Standard_Transient >(m,"StepRepr_ProductConcept",R"#(Representation of STEP entity ProductConceptRepresentation of STEP entity ProductConceptRepresentation of STEP entity ProductConcept)#");
    py::class_<StepRepr_ProductDefinitionUsage ,opencascade::handle<StepRepr_ProductDefinitionUsage>  , StepBasic_ProductDefinitionRelationship >(m,"StepRepr_ProductDefinitionUsage",R"#(Representation of STEP entity ProductDefinitionUsageRepresentation of STEP entity ProductDefinitionUsageRepresentation of STEP entity ProductDefinitionUsage)#");
    py::class_<StepRepr_PropertyDefinition ,opencascade::handle<StepRepr_PropertyDefinition>  , Standard_Transient >(m,"StepRepr_PropertyDefinition",R"#(Representation of STEP entity PropertyDefinitionRepresentation of STEP entity PropertyDefinitionRepresentation of STEP entity PropertyDefinition)#");
    py::class_<StepRepr_PropertyDefinitionRelationship ,opencascade::handle<StepRepr_PropertyDefinitionRelationship>  , Standard_Transient >(m,"StepRepr_PropertyDefinitionRelationship",R"#(Representation of STEP entity PropertyDefinitionRelationshipRepresentation of STEP entity PropertyDefinitionRelationshipRepresentation of STEP entity PropertyDefinitionRelationship)#");
    py::class_<StepRepr_PropertyDefinitionRepresentation ,opencascade::handle<StepRepr_PropertyDefinitionRepresentation>  , Standard_Transient >(m,"StepRepr_PropertyDefinitionRepresentation",R"#(Representation of STEP entity PropertyDefinitionRepresentationRepresentation of STEP entity PropertyDefinitionRepresentationRepresentation of STEP entity PropertyDefinitionRepresentation)#");
    py::class_<StepRepr_Representation ,opencascade::handle<StepRepr_Representation>  , Standard_Transient >(m,"StepRepr_Representation",R"#()#");
    py::class_<StepRepr_RepresentationContext ,opencascade::handle<StepRepr_RepresentationContext>  , Standard_Transient >(m,"StepRepr_RepresentationContext",R"#()#");
    py::class_<StepRepr_RepresentationItem ,opencascade::handle<StepRepr_RepresentationItem>  , Standard_Transient >(m,"StepRepr_RepresentationItem",R"#()#");
    py::class_<StepRepr_RepresentationMap ,opencascade::handle<StepRepr_RepresentationMap>  , Standard_Transient >(m,"StepRepr_RepresentationMap",R"#()#");
    py::class_<StepRepr_RepresentationRelationship ,opencascade::handle<StepRepr_RepresentationRelationship>  , Standard_Transient >(m,"StepRepr_RepresentationRelationship",R"#()#");
    py::class_<StepRepr_RepresentedDefinition , shared_ptr<StepRepr_RepresentedDefinition>  , StepData_SelectType >(m,"StepRepr_RepresentedDefinition",R"#(Representation of STEP SELECT type RepresentedDefinition)#");
    py::class_<StepRepr_ShapeAspect ,opencascade::handle<StepRepr_ShapeAspect>  , Standard_Transient >(m,"StepRepr_ShapeAspect",R"#()#");
    py::class_<StepRepr_ShapeAspectRelationship ,opencascade::handle<StepRepr_ShapeAspectRelationship>  , Standard_Transient >(m,"StepRepr_ShapeAspectRelationship",R"#(Representation of STEP entity ShapeAspectRelationshipRepresentation of STEP entity ShapeAspectRelationshipRepresentation of STEP entity ShapeAspectRelationship)#");
    py::class_<StepRepr_ShapeDefinition , shared_ptr<StepRepr_ShapeDefinition>  , StepData_SelectType >(m,"StepRepr_ShapeDefinition",R"#(None)#");
    py::class_<StepRepr_SuppliedPartRelationship ,opencascade::handle<StepRepr_SuppliedPartRelationship>  , StepBasic_ProductDefinitionRelationship >(m,"StepRepr_SuppliedPartRelationship",R"#()#");
    py::class_<StepRepr_Transformation , shared_ptr<StepRepr_Transformation>  , StepData_SelectType >(m,"StepRepr_Transformation",R"#(None)#");
    py::class_<StepRepr_AssemblyComponentUsage ,opencascade::handle<StepRepr_AssemblyComponentUsage>  , StepRepr_ProductDefinitionUsage >(m,"StepRepr_AssemblyComponentUsage",R"#(Representation of STEP entity AssemblyComponentUsageRepresentation of STEP entity AssemblyComponentUsageRepresentation of STEP entity AssemblyComponentUsage)#");
    py::class_<StepRepr_CharacterizedRepresentation ,opencascade::handle<StepRepr_CharacterizedRepresentation>  , StepRepr_Representation >(m,"StepRepr_CharacterizedRepresentation",R"#()#");
    py::class_<StepRepr_CompShAspAndDatumFeatAndShAsp ,opencascade::handle<StepRepr_CompShAspAndDatumFeatAndShAsp>  , StepRepr_ShapeAspect >(m,"StepRepr_CompShAspAndDatumFeatAndShAsp",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_CompositeShapeAspect ,opencascade::handle<StepRepr_CompositeShapeAspect>  , StepRepr_ShapeAspect >(m,"StepRepr_CompositeShapeAspect",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_CompoundRepresentationItem ,opencascade::handle<StepRepr_CompoundRepresentationItem>  , StepRepr_RepresentationItem >(m,"StepRepr_CompoundRepresentationItem",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_ConstructiveGeometryRepresentation ,opencascade::handle<StepRepr_ConstructiveGeometryRepresentation>  , StepRepr_Representation >(m,"StepRepr_ConstructiveGeometryRepresentation",R"#()#");
    py::class_<StepRepr_ConstructiveGeometryRepresentationRelationship ,opencascade::handle<StepRepr_ConstructiveGeometryRepresentationRelationship>  , StepRepr_RepresentationRelationship >(m,"StepRepr_ConstructiveGeometryRepresentationRelationship",R"#()#");
    py::class_<StepRepr_DefinitionalRepresentation ,opencascade::handle<StepRepr_DefinitionalRepresentation>  , StepRepr_Representation >(m,"StepRepr_DefinitionalRepresentation",R"#()#");
    py::class_<StepRepr_DerivedShapeAspect ,opencascade::handle<StepRepr_DerivedShapeAspect>  , StepRepr_ShapeAspect >(m,"StepRepr_DerivedShapeAspect",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_DescriptiveRepresentationItem ,opencascade::handle<StepRepr_DescriptiveRepresentationItem>  , StepRepr_RepresentationItem >(m,"StepRepr_DescriptiveRepresentationItem",R"#()#");
    py::class_<StepRepr_ExternallyDefinedRepresentation ,opencascade::handle<StepRepr_ExternallyDefinedRepresentation>  , StepRepr_Representation >(m,"StepRepr_ExternallyDefinedRepresentation",R"#()#");
    py::class_<StepRepr_FeatureForDatumTargetRelationship ,opencascade::handle<StepRepr_FeatureForDatumTargetRelationship>  , StepRepr_ShapeAspectRelationship >(m,"StepRepr_FeatureForDatumTargetRelationship",R"#(Representation of STEP entity DimensionalLocationRepresentation of STEP entity DimensionalLocationRepresentation of STEP entity DimensionalLocation)#");
    py::class_<StepRepr_GlobalUncertaintyAssignedContext ,opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext>  , StepRepr_RepresentationContext >(m,"StepRepr_GlobalUncertaintyAssignedContext",R"#()#");
    py::class_<StepRepr_GlobalUnitAssignedContext ,opencascade::handle<StepRepr_GlobalUnitAssignedContext>  , StepRepr_RepresentationContext >(m,"StepRepr_GlobalUnitAssignedContext",R"#()#");
    py::class_<StepRepr_IntegerRepresentationItem ,opencascade::handle<StepRepr_IntegerRepresentationItem>  , StepRepr_RepresentationItem >(m,"StepRepr_IntegerRepresentationItem",R"#()#");
    py::class_<StepRepr_MakeFromUsageOption ,opencascade::handle<StepRepr_MakeFromUsageOption>  , StepRepr_ProductDefinitionUsage >(m,"StepRepr_MakeFromUsageOption",R"#(Representation of STEP entity MakeFromUsageOptionRepresentation of STEP entity MakeFromUsageOptionRepresentation of STEP entity MakeFromUsageOption)#");
    py::class_<StepRepr_MappedItem ,opencascade::handle<StepRepr_MappedItem>  , StepRepr_RepresentationItem >(m,"StepRepr_MappedItem",R"#()#");
    py::class_<StepRepr_MaterialProperty ,opencascade::handle<StepRepr_MaterialProperty>  , StepRepr_PropertyDefinition >(m,"StepRepr_MaterialProperty",R"#(Representation of STEP entity MaterialPropertyRepresentation of STEP entity MaterialPropertyRepresentation of STEP entity MaterialProperty)#");
    py::class_<StepRepr_MaterialPropertyRepresentation ,opencascade::handle<StepRepr_MaterialPropertyRepresentation>  , StepRepr_PropertyDefinitionRepresentation >(m,"StepRepr_MaterialPropertyRepresentation",R"#(Representation of STEP entity MaterialPropertyRepresentationRepresentation of STEP entity MaterialPropertyRepresentationRepresentation of STEP entity MaterialPropertyRepresentation)#");
    py::class_<StepRepr_MeasureRepresentationItem ,opencascade::handle<StepRepr_MeasureRepresentationItem>  , StepRepr_RepresentationItem >(m,"StepRepr_MeasureRepresentationItem",R"#(Implements a measure_representation_item entity which is used for storing validation properties (e.g. area) for shapesImplements a measure_representation_item entity which is used for storing validation properties (e.g. area) for shapesImplements a measure_representation_item entity which is used for storing validation properties (e.g. area) for shapes)#");
    py::class_<StepRepr_ParametricRepresentationContext ,opencascade::handle<StepRepr_ParametricRepresentationContext>  , StepRepr_RepresentationContext >(m,"StepRepr_ParametricRepresentationContext",R"#()#");
    py::class_<StepRepr_ProductDefinitionShape ,opencascade::handle<StepRepr_ProductDefinitionShape>  , StepRepr_PropertyDefinition >(m,"StepRepr_ProductDefinitionShape",R"#(Representation of STEP entity ProductDefinitionShapeRepresentation of STEP entity ProductDefinitionShapeRepresentation of STEP entity ProductDefinitionShape)#");
    py::class_<StepRepr_ReprItemAndMeasureWithUnit ,opencascade::handle<StepRepr_ReprItemAndMeasureWithUnit>  , StepRepr_RepresentationItem >(m,"StepRepr_ReprItemAndMeasureWithUnit",R"#(Base class for complex types (MEASURE_REPRESENTATION_ITEM, MEASURE_WITH_UNIT, REPRESENTATION_ITEM, LENGTH_MEASURE_WITH_UNIT/PLANE_ANGLE_MEASURE_WITH_UNIT).Base class for complex types (MEASURE_REPRESENTATION_ITEM, MEASURE_WITH_UNIT, REPRESENTATION_ITEM, LENGTH_MEASURE_WITH_UNIT/PLANE_ANGLE_MEASURE_WITH_UNIT).Base class for complex types (MEASURE_REPRESENTATION_ITEM, MEASURE_WITH_UNIT, REPRESENTATION_ITEM, LENGTH_MEASURE_WITH_UNIT/PLANE_ANGLE_MEASURE_WITH_UNIT).)#");
    py::class_<StepRepr_ShapeAspectDerivingRelationship ,opencascade::handle<StepRepr_ShapeAspectDerivingRelationship>  , StepRepr_ShapeAspectRelationship >(m,"StepRepr_ShapeAspectDerivingRelationship",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_ShapeAspectTransition ,opencascade::handle<StepRepr_ShapeAspectTransition>  , StepRepr_ShapeAspectRelationship >(m,"StepRepr_ShapeAspectTransition",R"#(Representation of STEP entity ShapeAspectTransitionRepresentation of STEP entity ShapeAspectTransitionRepresentation of STEP entity ShapeAspectTransition)#");
    py::class_<StepRepr_ShapeRepresentationRelationship ,opencascade::handle<StepRepr_ShapeRepresentationRelationship>  , StepRepr_RepresentationRelationship >(m,"StepRepr_ShapeRepresentationRelationship",R"#()#");
    py::class_<StepRepr_StructuralResponseProperty ,opencascade::handle<StepRepr_StructuralResponseProperty>  , StepRepr_PropertyDefinition >(m,"StepRepr_StructuralResponseProperty",R"#(Representation of STEP entity StructuralResponsePropertyRepresentation of STEP entity StructuralResponsePropertyRepresentation of STEP entity StructuralResponseProperty)#");
    py::class_<StepRepr_StructuralResponsePropertyDefinitionRepresentation ,opencascade::handle<StepRepr_StructuralResponsePropertyDefinitionRepresentation>  , StepRepr_PropertyDefinitionRepresentation >(m,"StepRepr_StructuralResponsePropertyDefinitionRepresentation",R"#(Representation of STEP entity StructuralResponsePropertyDefinitionRepresentationRepresentation of STEP entity StructuralResponsePropertyDefinitionRepresentationRepresentation of STEP entity StructuralResponsePropertyDefinitionRepresentation)#");
    py::class_<StepRepr_ValueRepresentationItem ,opencascade::handle<StepRepr_ValueRepresentationItem>  , StepRepr_RepresentationItem >(m,"StepRepr_ValueRepresentationItem",R"#()#");
    py::class_<StepRepr_Apex ,opencascade::handle<StepRepr_Apex>  , StepRepr_DerivedShapeAspect >(m,"StepRepr_Apex",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_CentreOfSymmetry ,opencascade::handle<StepRepr_CentreOfSymmetry>  , StepRepr_DerivedShapeAspect >(m,"StepRepr_CentreOfSymmetry",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp ,opencascade::handle<StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp>  , StepRepr_CompShAspAndDatumFeatAndShAsp >(m,"StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_CompositeGroupShapeAspect ,opencascade::handle<StepRepr_CompositeGroupShapeAspect>  , StepRepr_CompositeShapeAspect >(m,"StepRepr_CompositeGroupShapeAspect",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_ContinuosShapeAspect ,opencascade::handle<StepRepr_ContinuosShapeAspect>  , StepRepr_CompositeShapeAspect >(m,"StepRepr_ContinuosShapeAspect",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_Extension ,opencascade::handle<StepRepr_Extension>  , StepRepr_DerivedShapeAspect >(m,"StepRepr_Extension",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_GeometricAlignment ,opencascade::handle<StepRepr_GeometricAlignment>  , StepRepr_DerivedShapeAspect >(m,"StepRepr_GeometricAlignment",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_NextAssemblyUsageOccurrence ,opencascade::handle<StepRepr_NextAssemblyUsageOccurrence>  , StepRepr_AssemblyComponentUsage >(m,"StepRepr_NextAssemblyUsageOccurrence",R"#(Representation of STEP entity NextAssemblyUsageOccurrenceRepresentation of STEP entity NextAssemblyUsageOccurrenceRepresentation of STEP entity NextAssemblyUsageOccurrence)#");
    py::class_<StepRepr_ParallelOffset ,opencascade::handle<StepRepr_ParallelOffset>  , StepRepr_DerivedShapeAspect >(m,"StepRepr_ParallelOffset",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_PerpendicularTo ,opencascade::handle<StepRepr_PerpendicularTo>  , StepRepr_DerivedShapeAspect >(m,"StepRepr_PerpendicularTo",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_PromissoryUsageOccurrence ,opencascade::handle<StepRepr_PromissoryUsageOccurrence>  , StepRepr_AssemblyComponentUsage >(m,"StepRepr_PromissoryUsageOccurrence",R"#()#");
    py::class_<StepRepr_QuantifiedAssemblyComponentUsage ,opencascade::handle<StepRepr_QuantifiedAssemblyComponentUsage>  , StepRepr_AssemblyComponentUsage >(m,"StepRepr_QuantifiedAssemblyComponentUsage",R"#(Representation of STEP entity QuantifiedAssemblyComponentUsageRepresentation of STEP entity QuantifiedAssemblyComponentUsageRepresentation of STEP entity QuantifiedAssemblyComponentUsage)#");
    py::class_<StepRepr_ReprItemAndLengthMeasureWithUnit ,opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnit>  , StepRepr_ReprItemAndMeasureWithUnit >(m,"StepRepr_ReprItemAndLengthMeasureWithUnit",R"#()#");
    py::class_<StepRepr_ReprItemAndMeasureWithUnitAndQRI ,opencascade::handle<StepRepr_ReprItemAndMeasureWithUnitAndQRI>  , StepRepr_ReprItemAndMeasureWithUnit >(m,"StepRepr_ReprItemAndMeasureWithUnitAndQRI",R"#(Base class for complex types (MEASURE_REPRESENTATION_ITEM, MEASURE_WITH_UNIT, QUALIFIED_REPRESENTATION_ITEM REPRESENTATION_ITEM, LENGTH_MEASURE_WITH_UNIT/PLANE_ANGLE_MEASURE_WITH_UNIT).Base class for complex types (MEASURE_REPRESENTATION_ITEM, MEASURE_WITH_UNIT, QUALIFIED_REPRESENTATION_ITEM REPRESENTATION_ITEM, LENGTH_MEASURE_WITH_UNIT/PLANE_ANGLE_MEASURE_WITH_UNIT).Base class for complex types (MEASURE_REPRESENTATION_ITEM, MEASURE_WITH_UNIT, QUALIFIED_REPRESENTATION_ITEM REPRESENTATION_ITEM, LENGTH_MEASURE_WITH_UNIT/PLANE_ANGLE_MEASURE_WITH_UNIT).)#");
    py::class_<StepRepr_ReprItemAndPlaneAngleMeasureWithUnit ,opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnit>  , StepRepr_ReprItemAndMeasureWithUnit >(m,"StepRepr_ReprItemAndPlaneAngleMeasureWithUnit",R"#()#");
    py::class_<StepRepr_RepresentationRelationshipWithTransformation ,opencascade::handle<StepRepr_RepresentationRelationshipWithTransformation>  , StepRepr_ShapeRepresentationRelationship >(m,"StepRepr_RepresentationRelationshipWithTransformation",R"#()#");
    py::class_<StepRepr_SpecifiedHigherUsageOccurrence ,opencascade::handle<StepRepr_SpecifiedHigherUsageOccurrence>  , StepRepr_AssemblyComponentUsage >(m,"StepRepr_SpecifiedHigherUsageOccurrence",R"#(Representation of STEP entity SpecifiedHigherUsageOccurrenceRepresentation of STEP entity SpecifiedHigherUsageOccurrenceRepresentation of STEP entity SpecifiedHigherUsageOccurrence)#");
    py::class_<StepRepr_Tangent ,opencascade::handle<StepRepr_Tangent>  , StepRepr_DerivedShapeAspect >(m,"StepRepr_Tangent",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_ValueRange ,opencascade::handle<StepRepr_ValueRange>  , StepRepr_CompoundRepresentationItem >(m,"StepRepr_ValueRange",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_AllAroundShapeAspect ,opencascade::handle<StepRepr_AllAroundShapeAspect>  , StepRepr_ContinuosShapeAspect >(m,"StepRepr_AllAroundShapeAspect",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_BetweenShapeAspect ,opencascade::handle<StepRepr_BetweenShapeAspect>  , StepRepr_ContinuosShapeAspect >(m,"StepRepr_BetweenShapeAspect",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI ,opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI>  , StepRepr_ReprItemAndMeasureWithUnitAndQRI >(m,"StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI",R"#()#");
    py::class_<StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI ,opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI>  , StepRepr_ReprItemAndMeasureWithUnitAndQRI >(m,"StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI",R"#()#");
    py::class_<StepRepr_ShapeRepresentationRelationshipWithTransformation ,opencascade::handle<StepRepr_ShapeRepresentationRelationshipWithTransformation>  , StepRepr_RepresentationRelationshipWithTransformation >(m,"StepRepr_ShapeRepresentationRelationshipWithTransformation",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
