
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepShape_AdvancedBrepShapeRepresentation.hxx>
#include <StepShape_CsgShapeRepresentation.hxx>
#include <StepShape_FacetedBrepShapeRepresentation.hxx>
#include <StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx>
#include <StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx>
#include <StepShape_ManifoldSurfaceShapeRepresentation.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepVisual_TemplateInstance.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_Group.hxx>
#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_Effectivity.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepBasic_ProductDefinitionFormationRelationship.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepAP214_Protocol.hxx>
#include <StepAP214_AutoDesignDateAndPersonItem.hxx>
#include <StepAP214_AutoDesignDateAndTimeItem.hxx>
#include <StepAP214_AutoDesignDatedItem.hxx>
#include <StepAP214_AutoDesignGeneralOrgItem.hxx>
#include <StepAP214_AutoDesignOrganizationItem.hxx>
#include <StepAP214_AutoDesignGroupedItem.hxx>
#include <StepAP214_AutoDesignPresentedItemSelect.hxx>
#include <StepAP214_AutoDesignReferencingItem.hxx>
#include <StepAP214_DateAndTimeItem.hxx>
#include <StepAP214_DateItem.hxx>
#include <StepAP214_ApprovalItem.hxx>
#include <StepAP214_OrganizationItem.hxx>
#include <StepAP214_DocumentReferenceItem.hxx>
#include <StepAP214_GroupItem.hxx>
#include <StepAP214_PersonAndOrganizationItem.hxx>
#include <StepAP214_PresentedItemSelect.hxx>
#include <StepAP214_SecurityClassificationItem.hxx>
#include <StepAP214_Protocol.hxx>
#include <StepAP214_AutoDesignApprovalAssignment.hxx>
#include <StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>
#include <StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx>
#include <StepAP214_AutoDesignActualDateAssignment.hxx>
#include <StepAP214_AutoDesignNominalDateAssignment.hxx>
#include <StepAP214_AutoDesignGroupAssignment.hxx>
#include <StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignPresentedItem.hxx>
#include <StepAP214_AutoDesignSecurityClassificationAssignment.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepAP214_AppliedApprovalAssignment.hxx>
#include <StepAP214_AppliedDateAndTimeAssignment.hxx>
#include <StepAP214_AppliedDateAssignment.hxx>
#include <StepAP214_AppliedGroupAssignment.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AppliedPresentedItem.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepAP214_Class.hxx>
#include <StepAP214_ExternalIdentificationItem.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <StepAP214_RepItemGroup.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_Approval.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepBasic_Approval.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_SourceItem.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_DocumentRelationship.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_OrganizationRole.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_SourceItem.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepBasic_ProductDefinitionWithAssociatedDocuments.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_ExternallyDefinedRepresentation.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_PhysicallyModeledProductDefinition.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepBasic_ProductDefinitionEffectivity.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepRepr_PropertyDefinitionRepresentation.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_RepresentationRelationshipWithTransformation.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ApprovalStatus.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_OrganizationalAddress.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepGeom_TrimmedCurve.hxx>
#include <StepBasic_DateAndTimeAssignment.hxx>
#include <StepBasic_DateAssignment.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_Action.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepBasic_GeneralProperty.hxx>
#include <StepRepr_MakeFromUsageOption.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepRepr_ProductDefinitionUsage.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_DocumentRelationship.hxx>
#include <StepRepr_ExternallyDefinedRepresentation.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_Approval.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepBasic_ProductDefinitionEffectivity.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepRepr_Representation.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepRepr_ExternallyDefinedRepresentation.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepBasic_ProductDefinitionWithAssociatedDocuments.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_OrganizationRole.hxx>

// module includes
#include <StepAP214.hxx>
#include <StepAP214_AppliedApprovalAssignment.hxx>
#include <StepAP214_AppliedDateAndTimeAssignment.hxx>
#include <StepAP214_AppliedDateAssignment.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepAP214_AppliedGroupAssignment.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AppliedPresentedItem.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepAP214_ApprovalItem.hxx>
#include <StepAP214_Array1OfApprovalItem.hxx>
#include <StepAP214_Array1OfAutoDesignDateAndPersonItem.hxx>
#include <StepAP214_Array1OfAutoDesignDateAndTimeItem.hxx>
#include <StepAP214_Array1OfAutoDesignDatedItem.hxx>
#include <StepAP214_Array1OfAutoDesignGeneralOrgItem.hxx>
#include <StepAP214_Array1OfAutoDesignGroupedItem.hxx>
#include <StepAP214_Array1OfAutoDesignPresentedItemSelect.hxx>
#include <StepAP214_Array1OfAutoDesignReferencingItem.hxx>
#include <StepAP214_Array1OfDateAndTimeItem.hxx>
#include <StepAP214_Array1OfDateItem.hxx>
#include <StepAP214_Array1OfDocumentReferenceItem.hxx>
#include <StepAP214_Array1OfExternalIdentificationItem.hxx>
#include <StepAP214_Array1OfGroupItem.hxx>
#include <StepAP214_Array1OfOrganizationItem.hxx>
#include <StepAP214_Array1OfPersonAndOrganizationItem.hxx>
#include <StepAP214_Array1OfPresentedItemSelect.hxx>
#include <StepAP214_Array1OfSecurityClassificationItem.hxx>
#include <StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>
#include <StepAP214_AutoDesignActualDateAssignment.hxx>
#include <StepAP214_AutoDesignApprovalAssignment.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepAP214_AutoDesignDateAndPersonItem.hxx>
#include <StepAP214_AutoDesignDateAndTimeItem.hxx>
#include <StepAP214_AutoDesignDatedItem.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepAP214_AutoDesignGeneralOrgItem.hxx>
#include <StepAP214_AutoDesignGroupAssignment.hxx>
#include <StepAP214_AutoDesignGroupedItem.hxx>
#include <StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx>
#include <StepAP214_AutoDesignNominalDateAssignment.hxx>
#include <StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignOrganizationItem.hxx>
#include <StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignPresentedItem.hxx>
#include <StepAP214_AutoDesignPresentedItemSelect.hxx>
#include <StepAP214_AutoDesignReferencingItem.hxx>
#include <StepAP214_AutoDesignSecurityClassificationAssignment.hxx>
#include <StepAP214_Class.hxx>
#include <StepAP214_DateAndTimeItem.hxx>
#include <StepAP214_DateItem.hxx>
#include <StepAP214_DocumentReferenceItem.hxx>
#include <StepAP214_ExternalIdentificationItem.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <StepAP214_GroupItem.hxx>
#include <StepAP214_HArray1OfApprovalItem.hxx>
#include <StepAP214_HArray1OfAutoDesignDateAndPersonItem.hxx>
#include <StepAP214_HArray1OfAutoDesignDateAndTimeItem.hxx>
#include <StepAP214_HArray1OfAutoDesignDatedItem.hxx>
#include <StepAP214_HArray1OfAutoDesignGeneralOrgItem.hxx>
#include <StepAP214_HArray1OfAutoDesignGroupedItem.hxx>
#include <StepAP214_HArray1OfAutoDesignPresentedItemSelect.hxx>
#include <StepAP214_HArray1OfAutoDesignReferencingItem.hxx>
#include <StepAP214_HArray1OfDateAndTimeItem.hxx>
#include <StepAP214_HArray1OfDateItem.hxx>
#include <StepAP214_HArray1OfDocumentReferenceItem.hxx>
#include <StepAP214_HArray1OfExternalIdentificationItem.hxx>
#include <StepAP214_HArray1OfGroupItem.hxx>
#include <StepAP214_HArray1OfOrganizationItem.hxx>
#include <StepAP214_HArray1OfPersonAndOrganizationItem.hxx>
#include <StepAP214_HArray1OfPresentedItemSelect.hxx>
#include <StepAP214_HArray1OfSecurityClassificationItem.hxx>
#include <StepAP214_OrganizationItem.hxx>
#include <StepAP214_PersonAndOrganizationItem.hxx>
#include <StepAP214_PresentedItemSelect.hxx>
#include <StepAP214_Protocol.hxx>
#include <StepAP214_RepItemGroup.hxx>
#include <StepAP214_SecurityClassificationItem.hxx>

// template related includes
// ./opencascade/StepAP214_Array1OfAutoDesignDatedItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfPersonAndOrganizationItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfDocumentReferenceItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfAutoDesignDateAndTimeItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfOrganizationItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfGroupItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfAutoDesignReferencingItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfApprovalItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfDateAndTimeItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfSecurityClassificationItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfDateItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfAutoDesignGeneralOrgItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfAutoDesignPresentedItemSelect.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfPresentedItemSelect.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfExternalIdentificationItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfAutoDesignGroupedItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP214_Array1OfAutoDesignDateAndPersonItem.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepAP214_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepAP214", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<StepAP214_AutoDesignGroupedItem ,std::unique_ptr<StepAP214_AutoDesignGroupedItem>  , StepData_SelectType >(m,"StepAP214_AutoDesignGroupedItem",R"#(None)#");
    py::class_<StepAP214_AppliedDateAndTimeAssignment ,opencascade::handle<StepAP214_AppliedDateAndTimeAssignment>  , StepBasic_DateAndTimeAssignment >(m,"StepAP214_AppliedDateAndTimeAssignment",R"#()#");
    py::class_<StepAP214_HArray1OfPersonAndOrganizationItem ,std::unique_ptr<StepAP214_HArray1OfPersonAndOrganizationItem>  >(m,"StepAP214_HArray1OfPersonAndOrganizationItem",R"#()#");
    py::class_<StepAP214_Protocol ,opencascade::handle<StepAP214_Protocol>  , StepData_Protocol >(m,"StepAP214_Protocol",R"#(Protocol for StepAP214 Entities It requires StepAP214 as a ResourceProtocol for StepAP214 Entities It requires StepAP214 as a ResourceProtocol for StepAP214 Entities It requires StepAP214 as a Resource)#");
    py::class_<StepAP214 ,std::unique_ptr<StepAP214>  >(m,"StepAP214",R"#(Complete AP214 CC1 , Revision 4 Upgrading from Revision 2 to Revision 4 : 26 Mar 1997 Splitting in sub-schemas : 5 Nov 1997)#");
    py::class_<StepAP214_AutoDesignApprovalAssignment ,opencascade::handle<StepAP214_AutoDesignApprovalAssignment>  , StepBasic_ApprovalAssignment >(m,"StepAP214_AutoDesignApprovalAssignment",R"#()#");
    py::class_<StepAP214_HArray1OfOrganizationItem ,std::unique_ptr<StepAP214_HArray1OfOrganizationItem>  >(m,"StepAP214_HArray1OfOrganizationItem",R"#()#");
    py::class_<StepAP214_ExternallyDefinedGeneralProperty ,opencascade::handle<StepAP214_ExternallyDefinedGeneralProperty>  , StepBasic_GeneralProperty >(m,"StepAP214_ExternallyDefinedGeneralProperty",R"#(Representation of STEP entity ExternallyDefinedGeneralPropertyRepresentation of STEP entity ExternallyDefinedGeneralPropertyRepresentation of STEP entity ExternallyDefinedGeneralProperty)#");
    py::class_<StepAP214_HArray1OfAutoDesignReferencingItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignReferencingItem>  >(m,"StepAP214_HArray1OfAutoDesignReferencingItem",R"#()#");
    py::class_<StepAP214_AutoDesignPresentedItemSelect ,std::unique_ptr<StepAP214_AutoDesignPresentedItemSelect>  , StepData_SelectType >(m,"StepAP214_AutoDesignPresentedItemSelect",R"#(None)#");
    py::class_<StepAP214_AutoDesignDocumentReference ,opencascade::handle<StepAP214_AutoDesignDocumentReference>  , StepBasic_DocumentReference >(m,"StepAP214_AutoDesignDocumentReference",R"#()#");
    py::class_<StepAP214_AutoDesignOrganizationAssignment ,opencascade::handle<StepAP214_AutoDesignOrganizationAssignment>  , StepBasic_OrganizationAssignment >(m,"StepAP214_AutoDesignOrganizationAssignment",R"#()#");
    py::class_<StepAP214_HArray1OfAutoDesignPresentedItemSelect ,std::unique_ptr<StepAP214_HArray1OfAutoDesignPresentedItemSelect>  >(m,"StepAP214_HArray1OfAutoDesignPresentedItemSelect",R"#()#");
    py::class_<StepAP214_HArray1OfAutoDesignDateAndTimeItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignDateAndTimeItem>  >(m,"StepAP214_HArray1OfAutoDesignDateAndTimeItem",R"#()#");
    py::class_<StepAP214_HArray1OfDateAndTimeItem ,std::unique_ptr<StepAP214_HArray1OfDateAndTimeItem>  >(m,"StepAP214_HArray1OfDateAndTimeItem",R"#()#");
    py::class_<StepAP214_HArray1OfAutoDesignGroupedItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignGroupedItem>  >(m,"StepAP214_HArray1OfAutoDesignGroupedItem",R"#()#");
    py::class_<StepAP214_HArray1OfGroupItem ,std::unique_ptr<StepAP214_HArray1OfGroupItem>  >(m,"StepAP214_HArray1OfGroupItem",R"#()#");
    py::class_<StepAP214_AutoDesignDateAndTimeItem ,std::unique_ptr<StepAP214_AutoDesignDateAndTimeItem>  , StepData_SelectType >(m,"StepAP214_AutoDesignDateAndTimeItem",R"#(None)#");
    py::class_<StepAP214_AutoDesignActualDateAssignment ,opencascade::handle<StepAP214_AutoDesignActualDateAssignment>  , StepBasic_DateAssignment >(m,"StepAP214_AutoDesignActualDateAssignment",R"#()#");
    py::class_<StepAP214_AppliedPresentedItem ,opencascade::handle<StepAP214_AppliedPresentedItem>  , StepVisual_PresentedItem >(m,"StepAP214_AppliedPresentedItem",R"#()#");
    py::class_<StepAP214_ExternalIdentificationItem ,std::unique_ptr<StepAP214_ExternalIdentificationItem>  , StepData_SelectType >(m,"StepAP214_ExternalIdentificationItem",R"#(Representation of STEP SELECT type ExternalIdentificationItem)#");
    py::class_<StepAP214_AutoDesignActualDateAndTimeAssignment ,opencascade::handle<StepAP214_AutoDesignActualDateAndTimeAssignment>  , StepBasic_DateAndTimeAssignment >(m,"StepAP214_AutoDesignActualDateAndTimeAssignment",R"#()#");
    py::class_<StepAP214_HArray1OfExternalIdentificationItem ,std::unique_ptr<StepAP214_HArray1OfExternalIdentificationItem>  >(m,"StepAP214_HArray1OfExternalIdentificationItem",R"#()#");
    py::class_<StepAP214_AppliedDateAssignment ,opencascade::handle<StepAP214_AppliedDateAssignment>  , StepBasic_DateAssignment >(m,"StepAP214_AppliedDateAssignment",R"#()#");
    py::class_<StepAP214_AutoDesignSecurityClassificationAssignment ,opencascade::handle<StepAP214_AutoDesignSecurityClassificationAssignment>  , StepBasic_SecurityClassificationAssignment >(m,"StepAP214_AutoDesignSecurityClassificationAssignment",R"#()#");
    py::class_<StepAP214_AutoDesignDatedItem ,std::unique_ptr<StepAP214_AutoDesignDatedItem>  , StepData_SelectType >(m,"StepAP214_AutoDesignDatedItem",R"#(None)#");
    py::class_<StepAP214_HArray1OfSecurityClassificationItem ,std::unique_ptr<StepAP214_HArray1OfSecurityClassificationItem>  >(m,"StepAP214_HArray1OfSecurityClassificationItem",R"#()#");
    py::class_<StepAP214_HArray1OfPresentedItemSelect ,std::unique_ptr<StepAP214_HArray1OfPresentedItemSelect>  >(m,"StepAP214_HArray1OfPresentedItemSelect",R"#()#");
    py::class_<StepAP214_AppliedPersonAndOrganizationAssignment ,opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment>  , StepBasic_PersonAndOrganizationAssignment >(m,"StepAP214_AppliedPersonAndOrganizationAssignment",R"#()#");
    py::class_<StepAP214_AppliedOrganizationAssignment ,opencascade::handle<StepAP214_AppliedOrganizationAssignment>  , StepBasic_OrganizationAssignment >(m,"StepAP214_AppliedOrganizationAssignment",R"#()#");
    py::class_<StepAP214_AppliedSecurityClassificationAssignment ,opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment>  , StepBasic_SecurityClassificationAssignment >(m,"StepAP214_AppliedSecurityClassificationAssignment",R"#()#");
    py::class_<StepAP214_AutoDesignGroupAssignment ,opencascade::handle<StepAP214_AutoDesignGroupAssignment>  , StepBasic_GroupAssignment >(m,"StepAP214_AutoDesignGroupAssignment",R"#()#");
    py::class_<StepAP214_ApprovalItem ,std::unique_ptr<StepAP214_ApprovalItem>  , StepData_SelectType >(m,"StepAP214_ApprovalItem",R"#(None)#");
    py::class_<StepAP214_RepItemGroup ,opencascade::handle<StepAP214_RepItemGroup>  , StepBasic_Group >(m,"StepAP214_RepItemGroup",R"#(Representation of STEP entity RepItemGroupRepresentation of STEP entity RepItemGroupRepresentation of STEP entity RepItemGroup)#");
    py::class_<StepAP214_OrganizationItem ,std::unique_ptr<StepAP214_OrganizationItem>  , StepAP214_ApprovalItem >(m,"StepAP214_OrganizationItem",R"#(None)#");
    py::class_<StepAP214_AutoDesignDateAndPersonAssignment ,opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment>  , StepBasic_PersonAndOrganizationAssignment >(m,"StepAP214_AutoDesignDateAndPersonAssignment",R"#()#");
    py::class_<StepAP214_AppliedGroupAssignment ,opencascade::handle<StepAP214_AppliedGroupAssignment>  , StepBasic_GroupAssignment >(m,"StepAP214_AppliedGroupAssignment",R"#(Representation of STEP entity AppliedGroupAssignmentRepresentation of STEP entity AppliedGroupAssignmentRepresentation of STEP entity AppliedGroupAssignment)#");
    py::class_<StepAP214_HArray1OfAutoDesignGeneralOrgItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignGeneralOrgItem>  >(m,"StepAP214_HArray1OfAutoDesignGeneralOrgItem",R"#()#");
    py::class_<StepAP214_AppliedDocumentReference ,opencascade::handle<StepAP214_AppliedDocumentReference>  , StepBasic_DocumentReference >(m,"StepAP214_AppliedDocumentReference",R"#()#");
    py::class_<StepAP214_GroupItem ,std::unique_ptr<StepAP214_GroupItem>  , StepData_SelectType >(m,"StepAP214_GroupItem",R"#(None)#");
    py::class_<StepAP214_DateAndTimeItem ,std::unique_ptr<StepAP214_DateAndTimeItem>  , StepAP214_ApprovalItem >(m,"StepAP214_DateAndTimeItem",R"#(None)#");
    py::class_<StepAP214_AutoDesignPersonAndOrganizationAssignment ,opencascade::handle<StepAP214_AutoDesignPersonAndOrganizationAssignment>  , StepBasic_PersonAndOrganizationAssignment >(m,"StepAP214_AutoDesignPersonAndOrganizationAssignment",R"#()#");
    py::class_<StepAP214_SecurityClassificationItem ,std::unique_ptr<StepAP214_SecurityClassificationItem>  , StepAP214_ApprovalItem >(m,"StepAP214_SecurityClassificationItem",R"#(None)#");
    py::class_<StepAP214_AppliedApprovalAssignment ,opencascade::handle<StepAP214_AppliedApprovalAssignment>  , StepBasic_ApprovalAssignment >(m,"StepAP214_AppliedApprovalAssignment",R"#()#");
    py::class_<StepAP214_AutoDesignNominalDateAndTimeAssignment ,opencascade::handle<StepAP214_AutoDesignNominalDateAndTimeAssignment>  , StepBasic_DateAndTimeAssignment >(m,"StepAP214_AutoDesignNominalDateAndTimeAssignment",R"#()#");
    py::class_<StepAP214_Class ,opencascade::handle<StepAP214_Class>  , StepBasic_Group >(m,"StepAP214_Class",R"#(Representation of STEP entity ClassRepresentation of STEP entity ClassRepresentation of STEP entity Class)#");
    py::class_<StepAP214_DateItem ,std::unique_ptr<StepAP214_DateItem>  , StepAP214_ApprovalItem >(m,"StepAP214_DateItem",R"#(None)#");
    py::class_<StepAP214_PresentedItemSelect ,std::unique_ptr<StepAP214_PresentedItemSelect>  , StepData_SelectType >(m,"StepAP214_PresentedItemSelect",R"#(None)#");
    py::class_<StepAP214_HArray1OfAutoDesignDateAndPersonItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignDateAndPersonItem>  >(m,"StepAP214_HArray1OfAutoDesignDateAndPersonItem",R"#()#");
    py::class_<StepAP214_PersonAndOrganizationItem ,std::unique_ptr<StepAP214_PersonAndOrganizationItem>  , StepAP214_ApprovalItem >(m,"StepAP214_PersonAndOrganizationItem",R"#(None)#");
    py::class_<StepAP214_AutoDesignGeneralOrgItem ,std::unique_ptr<StepAP214_AutoDesignGeneralOrgItem>  , StepData_SelectType >(m,"StepAP214_AutoDesignGeneralOrgItem",R"#(None)#");
    py::class_<StepAP214_HArray1OfApprovalItem ,std::unique_ptr<StepAP214_HArray1OfApprovalItem>  >(m,"StepAP214_HArray1OfApprovalItem",R"#()#");
    py::class_<StepAP214_AppliedExternalIdentificationAssignment ,opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment>  , StepBasic_ExternalIdentificationAssignment >(m,"StepAP214_AppliedExternalIdentificationAssignment",R"#(Representation of STEP entity AppliedExternalIdentificationAssignmentRepresentation of STEP entity AppliedExternalIdentificationAssignmentRepresentation of STEP entity AppliedExternalIdentificationAssignment)#");
    py::class_<StepAP214_DocumentReferenceItem ,std::unique_ptr<StepAP214_DocumentReferenceItem>  , StepData_SelectType >(m,"StepAP214_DocumentReferenceItem",R"#(None)#");
    py::class_<StepAP214_AutoDesignDateAndPersonItem ,std::unique_ptr<StepAP214_AutoDesignDateAndPersonItem>  , StepData_SelectType >(m,"StepAP214_AutoDesignDateAndPersonItem",R"#(None)#");
    py::class_<StepAP214_HArray1OfDateItem ,std::unique_ptr<StepAP214_HArray1OfDateItem>  >(m,"StepAP214_HArray1OfDateItem",R"#()#");
    py::class_<StepAP214_HArray1OfAutoDesignDatedItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignDatedItem>  >(m,"StepAP214_HArray1OfAutoDesignDatedItem",R"#()#");
    py::class_<StepAP214_AutoDesignOrganizationItem ,std::unique_ptr<StepAP214_AutoDesignOrganizationItem>  , StepAP214_AutoDesignGeneralOrgItem >(m,"StepAP214_AutoDesignOrganizationItem",R"#(None)#");
    py::class_<StepAP214_AutoDesignReferencingItem ,std::unique_ptr<StepAP214_AutoDesignReferencingItem>  , StepData_SelectType >(m,"StepAP214_AutoDesignReferencingItem",R"#(None)#");
    py::class_<StepAP214_AutoDesignNominalDateAssignment ,opencascade::handle<StepAP214_AutoDesignNominalDateAssignment>  , StepBasic_DateAssignment >(m,"StepAP214_AutoDesignNominalDateAssignment",R"#()#");
    py::class_<StepAP214_AutoDesignPresentedItem ,opencascade::handle<StepAP214_AutoDesignPresentedItem>  , StepVisual_PresentedItem >(m,"StepAP214_AutoDesignPresentedItem",R"#()#");
    py::class_<StepAP214_ExternallyDefinedClass ,opencascade::handle<StepAP214_ExternallyDefinedClass>  , StepAP214_Class >(m,"StepAP214_ExternallyDefinedClass",R"#(Representation of STEP entity ExternallyDefinedClassRepresentation of STEP entity ExternallyDefinedClassRepresentation of STEP entity ExternallyDefinedClass)#");
    py::class_<StepAP214_HArray1OfDocumentReferenceItem ,std::unique_ptr<StepAP214_HArray1OfDocumentReferenceItem>  >(m,"StepAP214_HArray1OfDocumentReferenceItem",R"#()#");

// pre-register typdefs
// ./opencascade/StepAP214_Array1OfAutoDesignDatedItem.hxx
    preregister_template_NCollection_Array1<StepAP214_AutoDesignDatedItem>(m,"StepAP214_Array1OfAutoDesignDatedItem");  
// ./opencascade/StepAP214_AutoDesignGroupedItem.hxx
// ./opencascade/StepAP214_AppliedSecurityClassificationAssignment.hxx
// ./opencascade/StepAP214_DateItem.hxx
// ./opencascade/StepAP214_Array1OfPersonAndOrganizationItem.hxx
    preregister_template_NCollection_Array1<StepAP214_PersonAndOrganizationItem>(m,"StepAP214_Array1OfPersonAndOrganizationItem");  
// ./opencascade/StepAP214_AppliedDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_Array1OfDocumentReferenceItem.hxx
    preregister_template_NCollection_Array1<StepAP214_DocumentReferenceItem>(m,"StepAP214_Array1OfDocumentReferenceItem");  
// ./opencascade/StepAP214_AutoDesignGroupAssignment.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignDateAndTimeItem.hxx
    preregister_template_NCollection_Array1<StepAP214_AutoDesignDateAndTimeItem>(m,"StepAP214_Array1OfAutoDesignDateAndTimeItem");  
// ./opencascade/StepAP214_Array1OfOrganizationItem.hxx
    preregister_template_NCollection_Array1<StepAP214_OrganizationItem>(m,"StepAP214_Array1OfOrganizationItem");  
// ./opencascade/StepAP214_HArray1OfPersonAndOrganizationItem.hxx
// ./opencascade/StepAP214_HArray1OfDateItem.hxx
// ./opencascade/StepAP214_Protocol.hxx
// ./opencascade/StepAP214_ApprovalItem.hxx
// ./opencascade/StepAP214_Array1OfGroupItem.hxx
    preregister_template_NCollection_Array1<StepAP214_GroupItem>(m,"StepAP214_Array1OfGroupItem");  
// ./opencascade/StepAP214.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignReferencingItem.hxx
    preregister_template_NCollection_Array1<StepAP214_AutoDesignReferencingItem>(m,"StepAP214_Array1OfAutoDesignReferencingItem");  
// ./opencascade/StepAP214_PresentedItemSelect.hxx
// ./opencascade/StepAP214_AutoDesignApprovalAssignment.hxx
// ./opencascade/StepAP214_RepItemGroup.hxx
// ./opencascade/StepAP214_HArray1OfOrganizationItem.hxx
// ./opencascade/StepAP214_AutoDesignNominalDateAssignment.hxx
// ./opencascade/StepAP214_OrganizationItem.hxx
// ./opencascade/StepAP214_ExternallyDefinedGeneralProperty.hxx
// ./opencascade/StepAP214_Array1OfApprovalItem.hxx
    preregister_template_NCollection_Array1<StepAP214_ApprovalItem>(m,"StepAP214_Array1OfApprovalItem");  
// ./opencascade/StepAP214_HArray1OfAutoDesignDateAndPersonItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignReferencingItem.hxx
// ./opencascade/StepAP214_Array1OfDateAndTimeItem.hxx
    preregister_template_NCollection_Array1<StepAP214_DateAndTimeItem>(m,"StepAP214_Array1OfDateAndTimeItem");  
// ./opencascade/StepAP214_AutoDesignDateAndPersonAssignment.hxx
// ./opencascade/StepAP214_AutoDesignPresentedItemSelect.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignDatedItem.hxx
// ./opencascade/StepAP214_AutoDesignDocumentReference.hxx
// ./opencascade/StepAP214_AppliedGroupAssignment.hxx
// ./opencascade/StepAP214_AutoDesignOrganizationAssignment.hxx
// ./opencascade/StepAP214_PersonAndOrganizationItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignPresentedItemSelect.hxx
// ./opencascade/StepAP214_Array1OfSecurityClassificationItem.hxx
    preregister_template_NCollection_Array1<StepAP214_SecurityClassificationItem>(m,"StepAP214_Array1OfSecurityClassificationItem");  
// ./opencascade/StepAP214_ExternallyDefinedClass.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignDateAndTimeItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignGeneralOrgItem.hxx
// ./opencascade/StepAP214_HArray1OfDateAndTimeItem.hxx
// ./opencascade/StepAP214_AutoDesignGeneralOrgItem.hxx
// ./opencascade/StepAP214_Array1OfDateItem.hxx
    preregister_template_NCollection_Array1<StepAP214_DateItem>(m,"StepAP214_Array1OfDateItem");  
// ./opencascade/StepAP214_HArray1OfAutoDesignGroupedItem.hxx
// ./opencascade/StepAP214_AppliedDocumentReference.hxx
// ./opencascade/StepAP214_HArray1OfGroupItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignGeneralOrgItem.hxx
    preregister_template_NCollection_Array1<StepAP214_AutoDesignGeneralOrgItem>(m,"StepAP214_Array1OfAutoDesignGeneralOrgItem");  
// ./opencascade/StepAP214_AutoDesignOrganizationItem.hxx
// ./opencascade/StepAP214_AutoDesignDateAndTimeItem.hxx
// ./opencascade/StepAP214_GroupItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignPresentedItemSelect.hxx
    preregister_template_NCollection_Array1<StepAP214_AutoDesignPresentedItemSelect>(m,"StepAP214_Array1OfAutoDesignPresentedItemSelect");  
// ./opencascade/StepAP214_AutoDesignActualDateAssignment.hxx
// ./opencascade/StepAP214_HArray1OfApprovalItem.hxx
// ./opencascade/StepAP214_DateAndTimeItem.hxx
// ./opencascade/StepAP214_AppliedPresentedItem.hxx
// ./opencascade/StepAP214_AutoDesignPresentedItem.hxx
// ./opencascade/StepAP214_ExternalIdentificationItem.hxx
// ./opencascade/StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx
// ./opencascade/StepAP214_AutoDesignActualDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_Array1OfPresentedItemSelect.hxx
    preregister_template_NCollection_Array1<StepAP214_PresentedItemSelect>(m,"StepAP214_Array1OfPresentedItemSelect");  
// ./opencascade/StepAP214_AppliedExternalIdentificationAssignment.hxx
// ./opencascade/StepAP214_SecurityClassificationItem.hxx
// ./opencascade/StepAP214_HArray1OfExternalIdentificationItem.hxx
// ./opencascade/StepAP214_AutoDesignReferencingItem.hxx
// ./opencascade/StepAP214_AppliedDateAssignment.hxx
// ./opencascade/StepAP214_AppliedApprovalAssignment.hxx
// ./opencascade/StepAP214_AutoDesignSecurityClassificationAssignment.hxx
// ./opencascade/StepAP214_Array1OfExternalIdentificationItem.hxx
    preregister_template_NCollection_Array1<StepAP214_ExternalIdentificationItem>(m,"StepAP214_Array1OfExternalIdentificationItem");  
// ./opencascade/StepAP214_Array1OfAutoDesignGroupedItem.hxx
    preregister_template_NCollection_Array1<StepAP214_AutoDesignGroupedItem>(m,"StepAP214_Array1OfAutoDesignGroupedItem");  
// ./opencascade/StepAP214_DocumentReferenceItem.hxx
// ./opencascade/StepAP214_AutoDesignDatedItem.hxx
// ./opencascade/StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_HArray1OfSecurityClassificationItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignDateAndPersonItem.hxx
    preregister_template_NCollection_Array1<StepAP214_AutoDesignDateAndPersonItem>(m,"StepAP214_Array1OfAutoDesignDateAndPersonItem");  
// ./opencascade/StepAP214_HArray1OfDocumentReferenceItem.hxx
// ./opencascade/StepAP214_HArray1OfPresentedItemSelect.hxx
// ./opencascade/StepAP214_Class.hxx
// ./opencascade/StepAP214_AppliedPersonAndOrganizationAssignment.hxx
// ./opencascade/StepAP214_AutoDesignDateAndPersonItem.hxx
// ./opencascade/StepAP214_AppliedOrganizationAssignment.hxx

};

// user-defined post-inclusion per module

// user-defined post
