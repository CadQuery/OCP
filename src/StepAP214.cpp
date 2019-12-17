
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_StepAP214(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepAP214"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepAP214_AutoDesignGroupedItem ,std::unique_ptr<StepAP214_AutoDesignGroupedItem>  , StepData_SelectType >>(m.attr("StepAP214_AutoDesignGroupedItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_AutoDesignGroupedItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_AutoDesignGroupedItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_AutoDesignGroupedItem::CaseNum),
             R"#(Recognizes a AutoDesignGroupedItem Kind Entity that is : 1 -> AdvancedBrepShapeRepresentation 2 -> CsgShapeRepresentation 3 -> FacetedBrepShapeRepresentation 4 -> GeometricallyBoundedSurfaceShapeRepresentation 5 -> GeometricallyBoundedWireframeShapeRepresentation 6 -> ManifoldSurfaceShapeRepresentation 7 -> Representation 8 -> RepresentationItem 9 -> ShapeAspect 10 -> ShapeRepresentation 11 -> TemplateInstance 0 else)#"  , py::arg("ent"))
        .def("AdvancedBrepShapeRepresentation",
             (opencascade::handle<StepShape_AdvancedBrepShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepShape_AdvancedBrepShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::AdvancedBrepShapeRepresentation),
             R"#(returns Value as a AdvancedBrepShapeRepresentation (Null if another type))#" )
        .def("CsgShapeRepresentation",
             (opencascade::handle<StepShape_CsgShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepShape_CsgShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::CsgShapeRepresentation),
             R"#(returns Value as a CsgShapeRepresentation (Null if another type))#" )
        .def("FacetedBrepShapeRepresentation",
             (opencascade::handle<StepShape_FacetedBrepShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepShape_FacetedBrepShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::FacetedBrepShapeRepresentation),
             R"#(returns Value as a FacetedBrepShapeRepresentation (Null if another type))#" )
        .def("GeometricallyBoundedSurfaceShapeRepresentation",
             (opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::GeometricallyBoundedSurfaceShapeRepresentation),
             R"#(returns Value as a GeometricallyBoundedSurfaceShapeRepresentation (Null if another type))#" )
        .def("GeometricallyBoundedWireframeShapeRepresentation",
             (opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::GeometricallyBoundedWireframeShapeRepresentation),
             R"#(returns Value as a GeometricallyBoundedWireframeShapeRepresentation (Null if another type))#" )
        .def("ManifoldSurfaceShapeRepresentation",
             (opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::ManifoldSurfaceShapeRepresentation),
             R"#(returns Value as a ManifoldSurfaceShapeRepresentation (Null if another type))#" )
        .def("Representation",
             (opencascade::handle<StepRepr_Representation> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepRepr_Representation> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::Representation),
             R"#(returns Value as a Representation (Null if another type))#" )
        .def("RepresentationItem",
             (opencascade::handle<StepRepr_RepresentationItem> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepRepr_RepresentationItem> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::RepresentationItem),
             R"#(returns Value as a RepresentationItem (Null if another type))#" )
        .def("ShapeAspect",
             (opencascade::handle<StepRepr_ShapeAspect> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::ShapeAspect),
             R"#(returns Value as a ShapeAspect (Null if another type))#" )
        .def("ShapeRepresentation",
             (opencascade::handle<StepShape_ShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepShape_ShapeRepresentation> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::ShapeRepresentation),
             R"#(returns Value as a ShapeRepresentation (Null if another type))#" )
        .def("TemplateInstance",
             (opencascade::handle<StepVisual_TemplateInstance> (StepAP214_AutoDesignGroupedItem::*)() const) static_cast<opencascade::handle<StepVisual_TemplateInstance> (StepAP214_AutoDesignGroupedItem::*)() const>(&StepAP214_AutoDesignGroupedItem::TemplateInstance),
             R"#(returns Value as a TemplateInstance (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_AppliedDateAndTimeAssignment ,opencascade::handle<StepAP214_AppliedDateAndTimeAssignment>  , StepBasic_DateAndTimeAssignment >>(m.attr("StepAP214_AppliedDateAndTimeAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AppliedDateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  const opencascade::handle<StepBasic_DateTimeRole> & ,  const opencascade::handle<StepAP214_HArray1OfDateAndTimeItem> &  ) ) static_cast<void (StepAP214_AppliedDateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  const opencascade::handle<StepBasic_DateTimeRole> & ,  const opencascade::handle<StepAP214_HArray1OfDateAndTimeItem> &  ) >(&StepAP214_AppliedDateAndTimeAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedDateAndTime"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AppliedDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_HArray1OfDateAndTimeItem> &  ) ) static_cast<void (StepAP214_AppliedDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_HArray1OfDateAndTimeItem> &  ) >(&StepAP214_AppliedDateAndTimeAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfDateAndTimeItem> (StepAP214_AppliedDateAndTimeAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfDateAndTimeItem> (StepAP214_AppliedDateAndTimeAssignment::*)() const>(&StepAP214_AppliedDateAndTimeAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_DateAndTimeItem (StepAP214_AppliedDateAndTimeAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_DateAndTimeItem (StepAP214_AppliedDateAndTimeAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AppliedDateAndTimeAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AppliedDateAndTimeAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AppliedDateAndTimeAssignment::*)() const>(&StepAP214_AppliedDateAndTimeAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AppliedDateAndTimeAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AppliedDateAndTimeAssignment::*)() const>(&StepAP214_AppliedDateAndTimeAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AppliedDateAndTimeAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AppliedDateAndTimeAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfPersonAndOrganizationItem ,std::unique_ptr<StepAP214_HArray1OfPersonAndOrganizationItem>  >>(m.attr("StepAP214_HArray1OfPersonAndOrganizationItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_PersonAndOrganizationItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_PersonAndOrganizationItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfPersonAndOrganizationItem & (StepAP214_HArray1OfPersonAndOrganizationItem::*)() const) static_cast<const StepAP214_Array1OfPersonAndOrganizationItem & (StepAP214_HArray1OfPersonAndOrganizationItem::*)() const>(&StepAP214_HArray1OfPersonAndOrganizationItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfPersonAndOrganizationItem & (StepAP214_HArray1OfPersonAndOrganizationItem::*)() ) static_cast<StepAP214_Array1OfPersonAndOrganizationItem & (StepAP214_HArray1OfPersonAndOrganizationItem::*)() >(&StepAP214_HArray1OfPersonAndOrganizationItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfPersonAndOrganizationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfPersonAndOrganizationItem::*)() const>(&StepAP214_HArray1OfPersonAndOrganizationItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfPersonAndOrganizationItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfPersonAndOrganizationItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_Protocol ,opencascade::handle<StepAP214_Protocol>  , StepData_Protocol >>(m.attr("StepAP214_Protocol"))
        .def(py::init<  >()  )
        .def("TypeNumber",
             (Standard_Integer (StepAP214_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Integer (StepAP214_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const>(&StepAP214_Protocol::TypeNumber),
             R"#(Returns a Case Number for each of the StepAP214 Entities)#"  , py::arg("atype"))
        .def("SchemaName",
             (Standard_CString (StepAP214_Protocol::*)() const) static_cast<Standard_CString (StepAP214_Protocol::*)() const>(&StepAP214_Protocol::SchemaName),
             R"#(None)#" )
        .def("NbResources",
             (Standard_Integer (StepAP214_Protocol::*)() const) static_cast<Standard_Integer (StepAP214_Protocol::*)() const>(&StepAP214_Protocol::NbResources),
             R"#(Returns count of Protocol used as Resources (level one))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (StepAP214_Protocol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Interface_Protocol> (StepAP214_Protocol::*)( const Standard_Integer  ) const>(&StepAP214_Protocol::Resource),
             R"#(Returns a Resource, given its rank (between 1 and NbResources))#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_Protocol::*)() const>(&StepAP214_Protocol::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_Protocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_Protocol::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<StepAP214 ,std::unique_ptr<StepAP214>>(m,"StepAP214");

    static_cast<py::class_<StepAP214 ,std::unique_ptr<StepAP214>  >>(m.attr("StepAP214"))
        .def_static("Protocol_s",
                    (opencascade::handle<StepAP214_Protocol> (*)() ) static_cast<opencascade::handle<StepAP214_Protocol> (*)() >(&StepAP214::Protocol),
                    R"#(creates a Protocol)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignApprovalAssignment ,opencascade::handle<StepAP214_AutoDesignApprovalAssignment>  , StepBasic_ApprovalAssignment >>(m.attr("StepAP214_AutoDesignApprovalAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignApprovalAssignment::*)( const opencascade::handle<StepBasic_Approval> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) ) static_cast<void (StepAP214_AutoDesignApprovalAssignment::*)( const opencascade::handle<StepBasic_Approval> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) >(&StepAP214_AutoDesignApprovalAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedApproval"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignApprovalAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) ) static_cast<void (StepAP214_AutoDesignApprovalAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) >(&StepAP214_AutoDesignApprovalAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> (StepAP214_AutoDesignApprovalAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> (StepAP214_AutoDesignApprovalAssignment::*)() const>(&StepAP214_AutoDesignApprovalAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_AutoDesignGeneralOrgItem (StepAP214_AutoDesignApprovalAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignGeneralOrgItem (StepAP214_AutoDesignApprovalAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignApprovalAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignApprovalAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignApprovalAssignment::*)() const>(&StepAP214_AutoDesignApprovalAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignApprovalAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignApprovalAssignment::*)() const>(&StepAP214_AutoDesignApprovalAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignApprovalAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignApprovalAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfOrganizationItem ,std::unique_ptr<StepAP214_HArray1OfOrganizationItem>  >>(m.attr("StepAP214_HArray1OfOrganizationItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_OrganizationItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_OrganizationItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfOrganizationItem & (StepAP214_HArray1OfOrganizationItem::*)() const) static_cast<const StepAP214_Array1OfOrganizationItem & (StepAP214_HArray1OfOrganizationItem::*)() const>(&StepAP214_HArray1OfOrganizationItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfOrganizationItem & (StepAP214_HArray1OfOrganizationItem::*)() ) static_cast<StepAP214_Array1OfOrganizationItem & (StepAP214_HArray1OfOrganizationItem::*)() >(&StepAP214_HArray1OfOrganizationItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfOrganizationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfOrganizationItem::*)() const>(&StepAP214_HArray1OfOrganizationItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfOrganizationItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfOrganizationItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_ExternallyDefinedGeneralProperty ,opencascade::handle<StepAP214_ExternallyDefinedGeneralProperty>  , StepBasic_GeneralProperty >>(m.attr("StepAP214_ExternallyDefinedGeneralProperty"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_ExternallyDefinedGeneralProperty::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const StepBasic_SourceItem & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) ) static_cast<void (StepAP214_ExternallyDefinedGeneralProperty::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const StepBasic_SourceItem & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) >(&StepAP214_ExternallyDefinedGeneralProperty::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aGeneralProperty_Id"),  py::arg("aGeneralProperty_Name"),  py::arg("hasGeneralProperty_Description"),  py::arg("aGeneralProperty_Description"),  py::arg("aExternallyDefinedItem_ItemId"),  py::arg("aExternallyDefinedItem_Source"))
        .def("ExternallyDefinedItem",
             (opencascade::handle<StepBasic_ExternallyDefinedItem> (StepAP214_ExternallyDefinedGeneralProperty::*)() const) static_cast<opencascade::handle<StepBasic_ExternallyDefinedItem> (StepAP214_ExternallyDefinedGeneralProperty::*)() const>(&StepAP214_ExternallyDefinedGeneralProperty::ExternallyDefinedItem),
             R"#(Returns data for supertype ExternallyDefinedItem)#" )
        .def("SetExternallyDefinedItem",
             (void (StepAP214_ExternallyDefinedGeneralProperty::*)( const opencascade::handle<StepBasic_ExternallyDefinedItem> &  ) ) static_cast<void (StepAP214_ExternallyDefinedGeneralProperty::*)( const opencascade::handle<StepBasic_ExternallyDefinedItem> &  ) >(&StepAP214_ExternallyDefinedGeneralProperty::SetExternallyDefinedItem),
             R"#(Set data for supertype ExternallyDefinedItem)#"  , py::arg("ExternallyDefinedItem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_ExternallyDefinedGeneralProperty::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_ExternallyDefinedGeneralProperty::*)() const>(&StepAP214_ExternallyDefinedGeneralProperty::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_ExternallyDefinedGeneralProperty::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_ExternallyDefinedGeneralProperty::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfAutoDesignReferencingItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignReferencingItem>  >>(m.attr("StepAP214_HArray1OfAutoDesignReferencingItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_AutoDesignReferencingItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_AutoDesignReferencingItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfAutoDesignReferencingItem & (StepAP214_HArray1OfAutoDesignReferencingItem::*)() const) static_cast<const StepAP214_Array1OfAutoDesignReferencingItem & (StepAP214_HArray1OfAutoDesignReferencingItem::*)() const>(&StepAP214_HArray1OfAutoDesignReferencingItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfAutoDesignReferencingItem & (StepAP214_HArray1OfAutoDesignReferencingItem::*)() ) static_cast<StepAP214_Array1OfAutoDesignReferencingItem & (StepAP214_HArray1OfAutoDesignReferencingItem::*)() >(&StepAP214_HArray1OfAutoDesignReferencingItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignReferencingItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignReferencingItem::*)() const>(&StepAP214_HArray1OfAutoDesignReferencingItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfAutoDesignReferencingItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfAutoDesignReferencingItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignPresentedItemSelect ,std::unique_ptr<StepAP214_AutoDesignPresentedItemSelect>  , StepData_SelectType >>(m.attr("StepAP214_AutoDesignPresentedItemSelect"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_AutoDesignPresentedItemSelect::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_AutoDesignPresentedItemSelect::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_AutoDesignPresentedItemSelect::CaseNum),
             R"#(Recognizes a AutoDesignPresentedItemSelect Kind Entity that is : 1 -> ProductDefinition, 2 -> ProductDefinitionRelationship, 3 -> ProductDefinitionShape 4 -> RepresentationRelationship 5 -> ShapeAspect 6 -> DocumentRelationship, 0 else)#"  , py::arg("ent"))
        .def("ProductDefinitionRelationship",
             (opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_AutoDesignPresentedItemSelect::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_AutoDesignPresentedItemSelect::*)() const>(&StepAP214_AutoDesignPresentedItemSelect::ProductDefinitionRelationship),
             R"#(returns Value as a ProductDefinitionRelationship (Null if another type))#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP214_AutoDesignPresentedItemSelect::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP214_AutoDesignPresentedItemSelect::*)() const>(&StepAP214_AutoDesignPresentedItemSelect::ProductDefinition),
             R"#(returns Value as a ProductDefinition (Null if another type))#" )
        .def("ProductDefinitionShape",
             (opencascade::handle<StepRepr_ProductDefinitionShape> (StepAP214_AutoDesignPresentedItemSelect::*)() const) static_cast<opencascade::handle<StepRepr_ProductDefinitionShape> (StepAP214_AutoDesignPresentedItemSelect::*)() const>(&StepAP214_AutoDesignPresentedItemSelect::ProductDefinitionShape),
             R"#(returns Value as a ProductDefinitionShape (Null if another type))#" )
        .def("RepresentationRelationship",
             (opencascade::handle<StepRepr_RepresentationRelationship> (StepAP214_AutoDesignPresentedItemSelect::*)() const) static_cast<opencascade::handle<StepRepr_RepresentationRelationship> (StepAP214_AutoDesignPresentedItemSelect::*)() const>(&StepAP214_AutoDesignPresentedItemSelect::RepresentationRelationship),
             R"#(returns Value as a RepresentationRelationship (Null if another type))#" )
        .def("ShapeAspect",
             (opencascade::handle<StepRepr_ShapeAspect> (StepAP214_AutoDesignPresentedItemSelect::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepAP214_AutoDesignPresentedItemSelect::*)() const>(&StepAP214_AutoDesignPresentedItemSelect::ShapeAspect),
             R"#(returns Value as a ShapeAspect (Null if another type))#" )
        .def("DocumentRelationship",
             (opencascade::handle<StepBasic_DocumentRelationship> (StepAP214_AutoDesignPresentedItemSelect::*)() const) static_cast<opencascade::handle<StepBasic_DocumentRelationship> (StepAP214_AutoDesignPresentedItemSelect::*)() const>(&StepAP214_AutoDesignPresentedItemSelect::DocumentRelationship),
             R"#(returns Value as a DocumentRelationship (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_AutoDesignDocumentReference ,opencascade::handle<StepAP214_AutoDesignDocumentReference>  , StepBasic_DocumentReference >>(m.attr("StepAP214_AutoDesignDocumentReference"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignDocumentReference::*)( const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignReferencingItem> &  ) ) static_cast<void (StepAP214_AutoDesignDocumentReference::*)( const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignReferencingItem> &  ) >(&StepAP214_AutoDesignDocumentReference::Init),
             R"#(None)#"  , py::arg("aAssignedDocument"),  py::arg("aSource"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignReferencingItem> (StepAP214_AutoDesignDocumentReference::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignReferencingItem> (StepAP214_AutoDesignDocumentReference::*)() const>(&StepAP214_AutoDesignDocumentReference::Items),
             R"#(None)#" )
        .def("SetItems",
             (void (StepAP214_AutoDesignDocumentReference::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignReferencingItem> &  ) ) static_cast<void (StepAP214_AutoDesignDocumentReference::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignReferencingItem> &  ) >(&StepAP214_AutoDesignDocumentReference::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("ItemsValue",
             (StepAP214_AutoDesignReferencingItem (StepAP214_AutoDesignDocumentReference::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignReferencingItem (StepAP214_AutoDesignDocumentReference::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignDocumentReference::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignDocumentReference::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignDocumentReference::*)() const>(&StepAP214_AutoDesignDocumentReference::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignDocumentReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignDocumentReference::*)() const>(&StepAP214_AutoDesignDocumentReference::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignDocumentReference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignDocumentReference::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignOrganizationAssignment ,opencascade::handle<StepAP214_AutoDesignOrganizationAssignment>  , StepBasic_OrganizationAssignment >>(m.attr("StepAP214_AutoDesignOrganizationAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignOrganizationAssignment::*)( const opencascade::handle<StepBasic_Organization> & ,  const opencascade::handle<StepBasic_OrganizationRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) ) static_cast<void (StepAP214_AutoDesignOrganizationAssignment::*)( const opencascade::handle<StepBasic_Organization> & ,  const opencascade::handle<StepBasic_OrganizationRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) >(&StepAP214_AutoDesignOrganizationAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedOrganization"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignOrganizationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) ) static_cast<void (StepAP214_AutoDesignOrganizationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) >(&StepAP214_AutoDesignOrganizationAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> (StepAP214_AutoDesignOrganizationAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> (StepAP214_AutoDesignOrganizationAssignment::*)() const>(&StepAP214_AutoDesignOrganizationAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_AutoDesignGeneralOrgItem (StepAP214_AutoDesignOrganizationAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignGeneralOrgItem (StepAP214_AutoDesignOrganizationAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignOrganizationAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignOrganizationAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignOrganizationAssignment::*)() const>(&StepAP214_AutoDesignOrganizationAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignOrganizationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignOrganizationAssignment::*)() const>(&StepAP214_AutoDesignOrganizationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignOrganizationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignOrganizationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfAutoDesignPresentedItemSelect ,std::unique_ptr<StepAP214_HArray1OfAutoDesignPresentedItemSelect>  >>(m.attr("StepAP214_HArray1OfAutoDesignPresentedItemSelect"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_AutoDesignPresentedItemSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_AutoDesignPresentedItemSelect> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfAutoDesignPresentedItemSelect & (StepAP214_HArray1OfAutoDesignPresentedItemSelect::*)() const) static_cast<const StepAP214_Array1OfAutoDesignPresentedItemSelect & (StepAP214_HArray1OfAutoDesignPresentedItemSelect::*)() const>(&StepAP214_HArray1OfAutoDesignPresentedItemSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfAutoDesignPresentedItemSelect & (StepAP214_HArray1OfAutoDesignPresentedItemSelect::*)() ) static_cast<StepAP214_Array1OfAutoDesignPresentedItemSelect & (StepAP214_HArray1OfAutoDesignPresentedItemSelect::*)() >(&StepAP214_HArray1OfAutoDesignPresentedItemSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignPresentedItemSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignPresentedItemSelect::*)() const>(&StepAP214_HArray1OfAutoDesignPresentedItemSelect::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfAutoDesignPresentedItemSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfAutoDesignPresentedItemSelect::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfAutoDesignDateAndTimeItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignDateAndTimeItem>  >>(m.attr("StepAP214_HArray1OfAutoDesignDateAndTimeItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_AutoDesignDateAndTimeItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_AutoDesignDateAndTimeItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfAutoDesignDateAndTimeItem & (StepAP214_HArray1OfAutoDesignDateAndTimeItem::*)() const) static_cast<const StepAP214_Array1OfAutoDesignDateAndTimeItem & (StepAP214_HArray1OfAutoDesignDateAndTimeItem::*)() const>(&StepAP214_HArray1OfAutoDesignDateAndTimeItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfAutoDesignDateAndTimeItem & (StepAP214_HArray1OfAutoDesignDateAndTimeItem::*)() ) static_cast<StepAP214_Array1OfAutoDesignDateAndTimeItem & (StepAP214_HArray1OfAutoDesignDateAndTimeItem::*)() >(&StepAP214_HArray1OfAutoDesignDateAndTimeItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignDateAndTimeItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignDateAndTimeItem::*)() const>(&StepAP214_HArray1OfAutoDesignDateAndTimeItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfAutoDesignDateAndTimeItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfAutoDesignDateAndTimeItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfDateAndTimeItem ,std::unique_ptr<StepAP214_HArray1OfDateAndTimeItem>  >>(m.attr("StepAP214_HArray1OfDateAndTimeItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_DateAndTimeItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_DateAndTimeItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfDateAndTimeItem & (StepAP214_HArray1OfDateAndTimeItem::*)() const) static_cast<const StepAP214_Array1OfDateAndTimeItem & (StepAP214_HArray1OfDateAndTimeItem::*)() const>(&StepAP214_HArray1OfDateAndTimeItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfDateAndTimeItem & (StepAP214_HArray1OfDateAndTimeItem::*)() ) static_cast<StepAP214_Array1OfDateAndTimeItem & (StepAP214_HArray1OfDateAndTimeItem::*)() >(&StepAP214_HArray1OfDateAndTimeItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfDateAndTimeItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfDateAndTimeItem::*)() const>(&StepAP214_HArray1OfDateAndTimeItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfDateAndTimeItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfDateAndTimeItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfAutoDesignGroupedItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignGroupedItem>  >>(m.attr("StepAP214_HArray1OfAutoDesignGroupedItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_AutoDesignGroupedItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_AutoDesignGroupedItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfAutoDesignGroupedItem & (StepAP214_HArray1OfAutoDesignGroupedItem::*)() const) static_cast<const StepAP214_Array1OfAutoDesignGroupedItem & (StepAP214_HArray1OfAutoDesignGroupedItem::*)() const>(&StepAP214_HArray1OfAutoDesignGroupedItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfAutoDesignGroupedItem & (StepAP214_HArray1OfAutoDesignGroupedItem::*)() ) static_cast<StepAP214_Array1OfAutoDesignGroupedItem & (StepAP214_HArray1OfAutoDesignGroupedItem::*)() >(&StepAP214_HArray1OfAutoDesignGroupedItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignGroupedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignGroupedItem::*)() const>(&StepAP214_HArray1OfAutoDesignGroupedItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfAutoDesignGroupedItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfAutoDesignGroupedItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfGroupItem ,std::unique_ptr<StepAP214_HArray1OfGroupItem>  >>(m.attr("StepAP214_HArray1OfGroupItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_GroupItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_GroupItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfGroupItem & (StepAP214_HArray1OfGroupItem::*)() const) static_cast<const StepAP214_Array1OfGroupItem & (StepAP214_HArray1OfGroupItem::*)() const>(&StepAP214_HArray1OfGroupItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfGroupItem & (StepAP214_HArray1OfGroupItem::*)() ) static_cast<StepAP214_Array1OfGroupItem & (StepAP214_HArray1OfGroupItem::*)() >(&StepAP214_HArray1OfGroupItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfGroupItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfGroupItem::*)() const>(&StepAP214_HArray1OfGroupItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfGroupItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfGroupItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignDateAndTimeItem ,std::unique_ptr<StepAP214_AutoDesignDateAndTimeItem>  , StepData_SelectType >>(m.attr("StepAP214_AutoDesignDateAndTimeItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_AutoDesignDateAndTimeItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_AutoDesignDateAndTimeItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_AutoDesignDateAndTimeItem::CaseNum),
             R"#(Recognizes a AutoDesignDateAndTimeItem Kind Entity that is : 1 -> ApprovalPersonOrganization 2 -> AutoDesignDateAndPersonAssignment 0 else)#"  , py::arg("ent"))
        .def("ApprovalPersonOrganization",
             (opencascade::handle<StepBasic_ApprovalPersonOrganization> (StepAP214_AutoDesignDateAndTimeItem::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalPersonOrganization> (StepAP214_AutoDesignDateAndTimeItem::*)() const>(&StepAP214_AutoDesignDateAndTimeItem::ApprovalPersonOrganization),
             R"#(returns Value as a ApprovalPersonOrganization (Null if another type))#" )
        .def("AutoDesignDateAndPersonAssignment",
             (opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment> (StepAP214_AutoDesignDateAndTimeItem::*)() const) static_cast<opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment> (StepAP214_AutoDesignDateAndTimeItem::*)() const>(&StepAP214_AutoDesignDateAndTimeItem::AutoDesignDateAndPersonAssignment),
             R"#(returns Value as a AutoDesignDateAndPersonAssignment (Null if another type))#" )
        .def("ProductDefinitionEffectivity",
             (opencascade::handle<StepBasic_ProductDefinitionEffectivity> (StepAP214_AutoDesignDateAndTimeItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionEffectivity> (StepAP214_AutoDesignDateAndTimeItem::*)() const>(&StepAP214_AutoDesignDateAndTimeItem::ProductDefinitionEffectivity),
             R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignActualDateAssignment ,opencascade::handle<StepAP214_AutoDesignActualDateAssignment>  , StepBasic_DateAssignment >>(m.attr("StepAP214_AutoDesignActualDateAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignActualDateAssignment::*)( const opencascade::handle<StepBasic_Date> & ,  const opencascade::handle<StepBasic_DateRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> &  ) ) static_cast<void (StepAP214_AutoDesignActualDateAssignment::*)( const opencascade::handle<StepBasic_Date> & ,  const opencascade::handle<StepBasic_DateRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> &  ) >(&StepAP214_AutoDesignActualDateAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedDate"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignActualDateAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> &  ) ) static_cast<void (StepAP214_AutoDesignActualDateAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> &  ) >(&StepAP214_AutoDesignActualDateAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> (StepAP214_AutoDesignActualDateAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> (StepAP214_AutoDesignActualDateAssignment::*)() const>(&StepAP214_AutoDesignActualDateAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_AutoDesignDatedItem (StepAP214_AutoDesignActualDateAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignDatedItem (StepAP214_AutoDesignActualDateAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignActualDateAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignActualDateAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignActualDateAssignment::*)() const>(&StepAP214_AutoDesignActualDateAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignActualDateAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignActualDateAssignment::*)() const>(&StepAP214_AutoDesignActualDateAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignActualDateAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignActualDateAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AppliedPresentedItem ,opencascade::handle<StepAP214_AppliedPresentedItem>  , StepVisual_PresentedItem >>(m.attr("StepAP214_AppliedPresentedItem"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AppliedPresentedItem::*)( const opencascade::handle<StepAP214_HArray1OfPresentedItemSelect> &  ) ) static_cast<void (StepAP214_AppliedPresentedItem::*)( const opencascade::handle<StepAP214_HArray1OfPresentedItemSelect> &  ) >(&StepAP214_AppliedPresentedItem::Init),
             R"#(None)#"  , py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AppliedPresentedItem::*)( const opencascade::handle<StepAP214_HArray1OfPresentedItemSelect> &  ) ) static_cast<void (StepAP214_AppliedPresentedItem::*)( const opencascade::handle<StepAP214_HArray1OfPresentedItemSelect> &  ) >(&StepAP214_AppliedPresentedItem::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfPresentedItemSelect> (StepAP214_AppliedPresentedItem::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfPresentedItemSelect> (StepAP214_AppliedPresentedItem::*)() const>(&StepAP214_AppliedPresentedItem::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_PresentedItemSelect (StepAP214_AppliedPresentedItem::*)( const Standard_Integer  ) const) static_cast<StepAP214_PresentedItemSelect (StepAP214_AppliedPresentedItem::*)( const Standard_Integer  ) const>(&StepAP214_AppliedPresentedItem::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AppliedPresentedItem::*)() const) static_cast<Standard_Integer (StepAP214_AppliedPresentedItem::*)() const>(&StepAP214_AppliedPresentedItem::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AppliedPresentedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AppliedPresentedItem::*)() const>(&StepAP214_AppliedPresentedItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AppliedPresentedItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AppliedPresentedItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_ExternalIdentificationItem ,std::unique_ptr<StepAP214_ExternalIdentificationItem>  , StepData_SelectType >>(m.attr("StepAP214_ExternalIdentificationItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_ExternalIdentificationItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_ExternalIdentificationItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_ExternalIdentificationItem::CaseNum),
             R"#(Recognizes a kind of ExternalIdentificationItem select type 1 -> DocumentFile from StepBasic 2 -> ExternallyDefinedClass from StepAP214 3 -> ExternallyDefinedGeneralProperty from StepAP214 4 -> ProductDefinition from StepBasic 5 -> AppliedOrganizationAssignment from AP214 6 -> AppliedPersonAndOrganizationAssignment from AP214 7 -> Approval from StepBasic 8 -> ApprovalStatus from StepBasic 9 -> ExternalSource from StepBasic 10 -> OrganizationalAddress from StepBasic 11 -> SecurityClassification from StepBasic 12 -> TrimmedCurve from StepGeom 13 -> VersionedActionRequest from StepBasic 14 -> DateAndTimeAssignment from StepBasic 15 -> DateAssignment from StepBasic 0 else)#"  , py::arg("ent"))
        .def("DocumentFile",
             (opencascade::handle<StepBasic_DocumentFile> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepBasic_DocumentFile> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::DocumentFile),
             R"#(Returns Value as DocumentFile (or Null if another type))#" )
        .def("ExternallyDefinedClass",
             (opencascade::handle<StepAP214_ExternallyDefinedClass> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepAP214_ExternallyDefinedClass> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::ExternallyDefinedClass),
             R"#(Returns Value as ExternallyDefinedClass (or Null if another type))#" )
        .def("ExternallyDefinedGeneralProperty",
             (opencascade::handle<StepAP214_ExternallyDefinedGeneralProperty> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepAP214_ExternallyDefinedGeneralProperty> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::ExternallyDefinedGeneralProperty),
             R"#(Returns Value as ExternallyDefinedGeneralProperty (or Null if another type))#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::ProductDefinition),
             R"#(Returns Value as ProductDefinition (or Null if another type))#" )
        .def("AppliedOrganizationAssignment",
             (opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::AppliedOrganizationAssignment),
             R"#(Returns Value as AppliedOrganizationAssignment (or Null if another type))#" )
        .def("AppliedPersonAndOrganizationAssignment",
             (opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::AppliedPersonAndOrganizationAssignment),
             R"#(Returns Value as AppliedPersonAndOrganizationAssignment (or Null if another type))#" )
        .def("Approval",
             (opencascade::handle<StepBasic_Approval> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepBasic_Approval> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::Approval),
             R"#(Returns Value as Approval (or Null if another type))#" )
        .def("ApprovalStatus",
             (opencascade::handle<StepBasic_ApprovalStatus> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalStatus> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::ApprovalStatus),
             R"#(Returns Value as ApprovalStatus (or Null if another type))#" )
        .def("ExternalSource",
             (opencascade::handle<StepBasic_ExternalSource> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepBasic_ExternalSource> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::ExternalSource),
             R"#(Returns Value as ExternalSource (or Null if another type))#" )
        .def("OrganizationalAddress",
             (opencascade::handle<StepBasic_OrganizationalAddress> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepBasic_OrganizationalAddress> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::OrganizationalAddress),
             R"#(Returns Value as OrganizationalAddress (or Null if another type))#" )
        .def("SecurityClassification",
             (opencascade::handle<StepBasic_SecurityClassification> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepBasic_SecurityClassification> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::SecurityClassification),
             R"#(Returns Value as SecurityClassification (or Null if another type))#" )
        .def("TrimmedCurve",
             (opencascade::handle<StepGeom_TrimmedCurve> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepGeom_TrimmedCurve> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::TrimmedCurve),
             R"#(Returns Value as TrimmedCurve (or Null if another type))#" )
        .def("VersionedActionRequest",
             (opencascade::handle<StepBasic_VersionedActionRequest> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepBasic_VersionedActionRequest> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::VersionedActionRequest),
             R"#(Returns Value as VersionedActionRequest (or Null if another type))#" )
        .def("DateAndTimeAssignment",
             (opencascade::handle<StepBasic_DateAndTimeAssignment> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepBasic_DateAndTimeAssignment> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::DateAndTimeAssignment),
             R"#(Returns Value as DateAndTimeAssignment (or Null if another type))#" )
        .def("DateAssignment",
             (opencascade::handle<StepBasic_DateAssignment> (StepAP214_ExternalIdentificationItem::*)() const) static_cast<opencascade::handle<StepBasic_DateAssignment> (StepAP214_ExternalIdentificationItem::*)() const>(&StepAP214_ExternalIdentificationItem::DateAssignment),
             R"#(Returns Value as DateAssignment (or Null if another type))#" )
;


    static_cast<py::class_<StepAP214_AutoDesignActualDateAndTimeAssignment ,opencascade::handle<StepAP214_AutoDesignActualDateAndTimeAssignment>  , StepBasic_DateAndTimeAssignment >>(m.attr("StepAP214_AutoDesignActualDateAndTimeAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignActualDateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  const opencascade::handle<StepBasic_DateTimeRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> &  ) ) static_cast<void (StepAP214_AutoDesignActualDateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  const opencascade::handle<StepBasic_DateTimeRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> &  ) >(&StepAP214_AutoDesignActualDateAndTimeAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedDateAndTime"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignActualDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> &  ) ) static_cast<void (StepAP214_AutoDesignActualDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> &  ) >(&StepAP214_AutoDesignActualDateAndTimeAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> (StepAP214_AutoDesignActualDateAndTimeAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> (StepAP214_AutoDesignActualDateAndTimeAssignment::*)() const>(&StepAP214_AutoDesignActualDateAndTimeAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_AutoDesignDateAndTimeItem (StepAP214_AutoDesignActualDateAndTimeAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignDateAndTimeItem (StepAP214_AutoDesignActualDateAndTimeAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignActualDateAndTimeAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignActualDateAndTimeAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignActualDateAndTimeAssignment::*)() const>(&StepAP214_AutoDesignActualDateAndTimeAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignActualDateAndTimeAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignActualDateAndTimeAssignment::*)() const>(&StepAP214_AutoDesignActualDateAndTimeAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignActualDateAndTimeAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignActualDateAndTimeAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfExternalIdentificationItem ,std::unique_ptr<StepAP214_HArray1OfExternalIdentificationItem>  >>(m.attr("StepAP214_HArray1OfExternalIdentificationItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_ExternalIdentificationItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_ExternalIdentificationItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfExternalIdentificationItem & (StepAP214_HArray1OfExternalIdentificationItem::*)() const) static_cast<const StepAP214_Array1OfExternalIdentificationItem & (StepAP214_HArray1OfExternalIdentificationItem::*)() const>(&StepAP214_HArray1OfExternalIdentificationItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfExternalIdentificationItem & (StepAP214_HArray1OfExternalIdentificationItem::*)() ) static_cast<StepAP214_Array1OfExternalIdentificationItem & (StepAP214_HArray1OfExternalIdentificationItem::*)() >(&StepAP214_HArray1OfExternalIdentificationItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfExternalIdentificationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfExternalIdentificationItem::*)() const>(&StepAP214_HArray1OfExternalIdentificationItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfExternalIdentificationItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfExternalIdentificationItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AppliedDateAssignment ,opencascade::handle<StepAP214_AppliedDateAssignment>  , StepBasic_DateAssignment >>(m.attr("StepAP214_AppliedDateAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AppliedDateAssignment::*)( const opencascade::handle<StepBasic_Date> & ,  const opencascade::handle<StepBasic_DateRole> & ,  const opencascade::handle<StepAP214_HArray1OfDateItem> &  ) ) static_cast<void (StepAP214_AppliedDateAssignment::*)( const opencascade::handle<StepBasic_Date> & ,  const opencascade::handle<StepBasic_DateRole> & ,  const opencascade::handle<StepAP214_HArray1OfDateItem> &  ) >(&StepAP214_AppliedDateAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedDate"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AppliedDateAssignment::*)( const opencascade::handle<StepAP214_HArray1OfDateItem> &  ) ) static_cast<void (StepAP214_AppliedDateAssignment::*)( const opencascade::handle<StepAP214_HArray1OfDateItem> &  ) >(&StepAP214_AppliedDateAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfDateItem> (StepAP214_AppliedDateAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfDateItem> (StepAP214_AppliedDateAssignment::*)() const>(&StepAP214_AppliedDateAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_DateItem (StepAP214_AppliedDateAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_DateItem (StepAP214_AppliedDateAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AppliedDateAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AppliedDateAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AppliedDateAssignment::*)() const>(&StepAP214_AppliedDateAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AppliedDateAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AppliedDateAssignment::*)() const>(&StepAP214_AppliedDateAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AppliedDateAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AppliedDateAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignSecurityClassificationAssignment ,opencascade::handle<StepAP214_AutoDesignSecurityClassificationAssignment>  , StepBasic_SecurityClassificationAssignment >>(m.attr("StepAP214_AutoDesignSecurityClassificationAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignSecurityClassificationAssignment::*)( const opencascade::handle<StepBasic_SecurityClassification> & ,  const opencascade::handle<StepBasic_HArray1OfApproval> &  ) ) static_cast<void (StepAP214_AutoDesignSecurityClassificationAssignment::*)( const opencascade::handle<StepBasic_SecurityClassification> & ,  const opencascade::handle<StepBasic_HArray1OfApproval> &  ) >(&StepAP214_AutoDesignSecurityClassificationAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedSecurityClassification"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignSecurityClassificationAssignment::*)( const opencascade::handle<StepBasic_HArray1OfApproval> &  ) ) static_cast<void (StepAP214_AutoDesignSecurityClassificationAssignment::*)( const opencascade::handle<StepBasic_HArray1OfApproval> &  ) >(&StepAP214_AutoDesignSecurityClassificationAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepBasic_HArray1OfApproval> (StepAP214_AutoDesignSecurityClassificationAssignment::*)() const) static_cast<opencascade::handle<StepBasic_HArray1OfApproval> (StepAP214_AutoDesignSecurityClassificationAssignment::*)() const>(&StepAP214_AutoDesignSecurityClassificationAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (opencascade::handle<StepBasic_Approval> (StepAP214_AutoDesignSecurityClassificationAssignment::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepBasic_Approval> (StepAP214_AutoDesignSecurityClassificationAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignSecurityClassificationAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignSecurityClassificationAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignSecurityClassificationAssignment::*)() const>(&StepAP214_AutoDesignSecurityClassificationAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignSecurityClassificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignSecurityClassificationAssignment::*)() const>(&StepAP214_AutoDesignSecurityClassificationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignSecurityClassificationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignSecurityClassificationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignDatedItem ,std::unique_ptr<StepAP214_AutoDesignDatedItem>  , StepData_SelectType >>(m.attr("StepAP214_AutoDesignDatedItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_AutoDesignDatedItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_AutoDesignDatedItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_AutoDesignDatedItem::CaseNum),
             R"#(Recognizes a AutoDesignDatedItem Kind Entity that is : 1 -> ApprovalPersonOrganization 2 -> AutoDesignDateAndPersonAssignment 0 else)#"  , py::arg("ent"))
        .def("ApprovalPersonOrganization",
             (opencascade::handle<StepBasic_ApprovalPersonOrganization> (StepAP214_AutoDesignDatedItem::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalPersonOrganization> (StepAP214_AutoDesignDatedItem::*)() const>(&StepAP214_AutoDesignDatedItem::ApprovalPersonOrganization),
             R"#(returns Value as a ApprovalPersonOrganization (Null if another type))#" )
        .def("AutoDesignDateAndPersonAssignment",
             (opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment> (StepAP214_AutoDesignDatedItem::*)() const) static_cast<opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment> (StepAP214_AutoDesignDatedItem::*)() const>(&StepAP214_AutoDesignDatedItem::AutoDesignDateAndPersonAssignment),
             R"#(returns Value as a AutoDesignDateAndPersonAssignment (Null if another type))#" )
        .def("ProductDefinitionEffectivity",
             (opencascade::handle<StepBasic_ProductDefinitionEffectivity> (StepAP214_AutoDesignDatedItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionEffectivity> (StepAP214_AutoDesignDatedItem::*)() const>(&StepAP214_AutoDesignDatedItem::ProductDefinitionEffectivity),
             R"#(returns Value as a ProductDefinitionEffectivity)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfSecurityClassificationItem ,std::unique_ptr<StepAP214_HArray1OfSecurityClassificationItem>  >>(m.attr("StepAP214_HArray1OfSecurityClassificationItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_SecurityClassificationItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_SecurityClassificationItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfSecurityClassificationItem & (StepAP214_HArray1OfSecurityClassificationItem::*)() const) static_cast<const StepAP214_Array1OfSecurityClassificationItem & (StepAP214_HArray1OfSecurityClassificationItem::*)() const>(&StepAP214_HArray1OfSecurityClassificationItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfSecurityClassificationItem & (StepAP214_HArray1OfSecurityClassificationItem::*)() ) static_cast<StepAP214_Array1OfSecurityClassificationItem & (StepAP214_HArray1OfSecurityClassificationItem::*)() >(&StepAP214_HArray1OfSecurityClassificationItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfSecurityClassificationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfSecurityClassificationItem::*)() const>(&StepAP214_HArray1OfSecurityClassificationItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfSecurityClassificationItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfSecurityClassificationItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfPresentedItemSelect ,std::unique_ptr<StepAP214_HArray1OfPresentedItemSelect>  >>(m.attr("StepAP214_HArray1OfPresentedItemSelect"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_PresentedItemSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_PresentedItemSelect> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfPresentedItemSelect & (StepAP214_HArray1OfPresentedItemSelect::*)() const) static_cast<const StepAP214_Array1OfPresentedItemSelect & (StepAP214_HArray1OfPresentedItemSelect::*)() const>(&StepAP214_HArray1OfPresentedItemSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfPresentedItemSelect & (StepAP214_HArray1OfPresentedItemSelect::*)() ) static_cast<StepAP214_Array1OfPresentedItemSelect & (StepAP214_HArray1OfPresentedItemSelect::*)() >(&StepAP214_HArray1OfPresentedItemSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfPresentedItemSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfPresentedItemSelect::*)() const>(&StepAP214_HArray1OfPresentedItemSelect::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfPresentedItemSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfPresentedItemSelect::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AppliedPersonAndOrganizationAssignment ,opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment>  , StepBasic_PersonAndOrganizationAssignment >>(m.attr("StepAP214_AppliedPersonAndOrganizationAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AppliedPersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> & ,  const opencascade::handle<StepAP214_HArray1OfPersonAndOrganizationItem> &  ) ) static_cast<void (StepAP214_AppliedPersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> & ,  const opencascade::handle<StepAP214_HArray1OfPersonAndOrganizationItem> &  ) >(&StepAP214_AppliedPersonAndOrganizationAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedPersonAndOrganization"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AppliedPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfPersonAndOrganizationItem> &  ) ) static_cast<void (StepAP214_AppliedPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfPersonAndOrganizationItem> &  ) >(&StepAP214_AppliedPersonAndOrganizationAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfPersonAndOrganizationItem> (StepAP214_AppliedPersonAndOrganizationAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfPersonAndOrganizationItem> (StepAP214_AppliedPersonAndOrganizationAssignment::*)() const>(&StepAP214_AppliedPersonAndOrganizationAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_PersonAndOrganizationItem (StepAP214_AppliedPersonAndOrganizationAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_PersonAndOrganizationItem (StepAP214_AppliedPersonAndOrganizationAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AppliedPersonAndOrganizationAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AppliedPersonAndOrganizationAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AppliedPersonAndOrganizationAssignment::*)() const>(&StepAP214_AppliedPersonAndOrganizationAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AppliedPersonAndOrganizationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AppliedPersonAndOrganizationAssignment::*)() const>(&StepAP214_AppliedPersonAndOrganizationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AppliedPersonAndOrganizationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AppliedPersonAndOrganizationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AppliedOrganizationAssignment ,opencascade::handle<StepAP214_AppliedOrganizationAssignment>  , StepBasic_OrganizationAssignment >>(m.attr("StepAP214_AppliedOrganizationAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AppliedOrganizationAssignment::*)( const opencascade::handle<StepBasic_Organization> & ,  const opencascade::handle<StepBasic_OrganizationRole> & ,  const opencascade::handle<StepAP214_HArray1OfOrganizationItem> &  ) ) static_cast<void (StepAP214_AppliedOrganizationAssignment::*)( const opencascade::handle<StepBasic_Organization> & ,  const opencascade::handle<StepBasic_OrganizationRole> & ,  const opencascade::handle<StepAP214_HArray1OfOrganizationItem> &  ) >(&StepAP214_AppliedOrganizationAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedOrganization"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AppliedOrganizationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfOrganizationItem> &  ) ) static_cast<void (StepAP214_AppliedOrganizationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfOrganizationItem> &  ) >(&StepAP214_AppliedOrganizationAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfOrganizationItem> (StepAP214_AppliedOrganizationAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfOrganizationItem> (StepAP214_AppliedOrganizationAssignment::*)() const>(&StepAP214_AppliedOrganizationAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_OrganizationItem (StepAP214_AppliedOrganizationAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_OrganizationItem (StepAP214_AppliedOrganizationAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AppliedOrganizationAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AppliedOrganizationAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AppliedOrganizationAssignment::*)() const>(&StepAP214_AppliedOrganizationAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AppliedOrganizationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AppliedOrganizationAssignment::*)() const>(&StepAP214_AppliedOrganizationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AppliedOrganizationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AppliedOrganizationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AppliedSecurityClassificationAssignment ,opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment>  , StepBasic_SecurityClassificationAssignment >>(m.attr("StepAP214_AppliedSecurityClassificationAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AppliedSecurityClassificationAssignment::*)( const opencascade::handle<StepBasic_SecurityClassification> & ,  const opencascade::handle<StepAP214_HArray1OfSecurityClassificationItem> &  ) ) static_cast<void (StepAP214_AppliedSecurityClassificationAssignment::*)( const opencascade::handle<StepBasic_SecurityClassification> & ,  const opencascade::handle<StepAP214_HArray1OfSecurityClassificationItem> &  ) >(&StepAP214_AppliedSecurityClassificationAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedSecurityClassification"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AppliedSecurityClassificationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfSecurityClassificationItem> &  ) ) static_cast<void (StepAP214_AppliedSecurityClassificationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfSecurityClassificationItem> &  ) >(&StepAP214_AppliedSecurityClassificationAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfSecurityClassificationItem> (StepAP214_AppliedSecurityClassificationAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfSecurityClassificationItem> (StepAP214_AppliedSecurityClassificationAssignment::*)() const>(&StepAP214_AppliedSecurityClassificationAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (const StepAP214_SecurityClassificationItem & (StepAP214_AppliedSecurityClassificationAssignment::*)( const Standard_Integer  ) const) static_cast<const StepAP214_SecurityClassificationItem & (StepAP214_AppliedSecurityClassificationAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AppliedSecurityClassificationAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AppliedSecurityClassificationAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AppliedSecurityClassificationAssignment::*)() const>(&StepAP214_AppliedSecurityClassificationAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AppliedSecurityClassificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AppliedSecurityClassificationAssignment::*)() const>(&StepAP214_AppliedSecurityClassificationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AppliedSecurityClassificationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AppliedSecurityClassificationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignGroupAssignment ,opencascade::handle<StepAP214_AutoDesignGroupAssignment>  , StepBasic_GroupAssignment >>(m.attr("StepAP214_AutoDesignGroupAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignGroupAssignment::*)( const opencascade::handle<StepBasic_Group> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignGroupedItem> &  ) ) static_cast<void (StepAP214_AutoDesignGroupAssignment::*)( const opencascade::handle<StepBasic_Group> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignGroupedItem> &  ) >(&StepAP214_AutoDesignGroupAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedGroup"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignGroupAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignGroupedItem> &  ) ) static_cast<void (StepAP214_AutoDesignGroupAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignGroupedItem> &  ) >(&StepAP214_AutoDesignGroupAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignGroupedItem> (StepAP214_AutoDesignGroupAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignGroupedItem> (StepAP214_AutoDesignGroupAssignment::*)() const>(&StepAP214_AutoDesignGroupAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_AutoDesignGroupedItem (StepAP214_AutoDesignGroupAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignGroupedItem (StepAP214_AutoDesignGroupAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignGroupAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignGroupAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignGroupAssignment::*)() const>(&StepAP214_AutoDesignGroupAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignGroupAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignGroupAssignment::*)() const>(&StepAP214_AutoDesignGroupAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignGroupAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignGroupAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_ApprovalItem ,std::unique_ptr<StepAP214_ApprovalItem>  , StepData_SelectType >>(m.attr("StepAP214_ApprovalItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_ApprovalItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_ApprovalItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_ApprovalItem::CaseNum),
             R"#(Recognizes a ApprovalItem Kind Entity that is : 1 -> AssemblyComponentUsageSubstitute 2 -> DocumentFile 3 -> MaterialDesignation 4 -> MechanicalDesignGeometricPresentationRepresentation 5 -> PresentationArea 6 -> Product 7 -> ProductDefinition 8 -> ProductDefinitionFormation 9 -> ProductDefinitionRelationship 10 -> PropertyDefinition 11 -> ShapeRepresentation 12 -> SecurityClassification 13 -> ConfigurationItem 14 -> Date 15 -> Document 16 -> Effectivity 17 -> Group 18 -> GroupRelationship 19 -> ProductDefinitionFormationRelationship 20 -> Representation 21 -> ShapeAspectRelationship 0 else)#"  , py::arg("ent"))
        .def("AssemblyComponentUsageSubstitute",
             (opencascade::handle<StepRepr_AssemblyComponentUsageSubstitute> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepRepr_AssemblyComponentUsageSubstitute> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::AssemblyComponentUsageSubstitute),
             R"#(returns Value as a AssemblyComponentUsageSubstitute (Null if another type))#" )
        .def("DocumentFile",
             (opencascade::handle<StepBasic_DocumentFile> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_DocumentFile> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::DocumentFile),
             R"#(returns Value as a DocumentFile (Null if another type))#" )
        .def("MaterialDesignation",
             (opencascade::handle<StepRepr_MaterialDesignation> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepRepr_MaterialDesignation> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::MaterialDesignation),
             R"#(returns Value as a MaterialDesignation (Null if another type))#" )
        .def("MechanicalDesignGeometricPresentationRepresentation",
             (opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::MechanicalDesignGeometricPresentationRepresentation),
             R"#(returns Value as a MechanicalDesignGeometricPresentationRepresentation (Null if another type))#" )
        .def("PresentationArea",
             (opencascade::handle<StepVisual_PresentationArea> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepVisual_PresentationArea> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::PresentationArea),
             R"#(returns Value as a PresentationArea (Null if another type))#" )
        .def("Product",
             (opencascade::handle<StepBasic_Product> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_Product> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::Product),
             R"#(returns Value as a Product (Null if another type))#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::ProductDefinition),
             R"#(returns Value as a ProductDefinition (Null if another type))#" )
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::ProductDefinitionFormation),
             R"#(returns Value as a ProductDefinitionFormation (Null if another type))#" )
        .def("ProductDefinitionRelationship",
             (opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::ProductDefinitionRelationship),
             R"#(returns Value as aProductDefinitionRelationship (Null if another type))#" )
        .def("PropertyDefinition",
             (opencascade::handle<StepRepr_PropertyDefinition> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepRepr_PropertyDefinition> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::PropertyDefinition),
             R"#(returns Value as a PropertyDefinition (Null if another type))#" )
        .def("ShapeRepresentation",
             (opencascade::handle<StepShape_ShapeRepresentation> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepShape_ShapeRepresentation> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::ShapeRepresentation),
             R"#(returns Value as a ShapeRepresentation (Null if another type))#" )
        .def("SecurityClassification",
             (opencascade::handle<StepBasic_SecurityClassification> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_SecurityClassification> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::SecurityClassification),
             R"#(returns Value as a SecurityClassification (Null if another type))#" )
        .def("ConfigurationItem",
             (opencascade::handle<StepRepr_ConfigurationItem> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepRepr_ConfigurationItem> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::ConfigurationItem),
             R"#(returns Value as a ConfigurationItem (Null if another type))#" )
        .def("Date",
             (opencascade::handle<StepBasic_Date> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_Date> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::Date),
             R"#(returns Value as a Date (Null if another type))#" )
        .def("Document",
             (opencascade::handle<StepBasic_Document> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_Document> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::Document),
             R"#(returns Value as a Document (Null if another type))#" )
        .def("Effectivity",
             (opencascade::handle<StepBasic_Effectivity> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_Effectivity> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::Effectivity),
             R"#(returns Value as a Effectivity (Null if another type))#" )
        .def("Group",
             (opencascade::handle<StepBasic_Group> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_Group> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::Group),
             R"#(returns Value as a Group (Null if another type))#" )
        .def("GroupRelationship",
             (opencascade::handle<StepBasic_GroupRelationship> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_GroupRelationship> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::GroupRelationship),
             R"#(returns Value as a GroupRelationship (Null if another type))#" )
        .def("ProductDefinitionFormationRelationship",
             (opencascade::handle<StepBasic_ProductDefinitionFormationRelationship> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormationRelationship> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::ProductDefinitionFormationRelationship),
             R"#(returns Value as a ProductDefinitionFormationRelationship (Null if another type))#" )
        .def("Representation",
             (opencascade::handle<StepRepr_Representation> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepRepr_Representation> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::Representation),
             R"#(returns Value as a Representation (Null if another type))#" )
        .def("ShapeAspectRelationship",
             (opencascade::handle<StepRepr_ShapeAspectRelationship> (StepAP214_ApprovalItem::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspectRelationship> (StepAP214_ApprovalItem::*)() const>(&StepAP214_ApprovalItem::ShapeAspectRelationship),
             R"#(returns Value as a ShapeAspectRelationship (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_RepItemGroup ,opencascade::handle<StepAP214_RepItemGroup>  , StepBasic_Group >>(m.attr("StepAP214_RepItemGroup"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_RepItemGroup::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepAP214_RepItemGroup::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepAP214_RepItemGroup::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aGroup_Name"),  py::arg("hasGroup_Description"),  py::arg("aGroup_Description"),  py::arg("aRepresentationItem_Name"))
        .def("RepresentationItem",
             (opencascade::handle<StepRepr_RepresentationItem> (StepAP214_RepItemGroup::*)() const) static_cast<opencascade::handle<StepRepr_RepresentationItem> (StepAP214_RepItemGroup::*)() const>(&StepAP214_RepItemGroup::RepresentationItem),
             R"#(Returns data for supertype RepresentationItem)#" )
        .def("SetRepresentationItem",
             (void (StepAP214_RepItemGroup::*)( const opencascade::handle<StepRepr_RepresentationItem> &  ) ) static_cast<void (StepAP214_RepItemGroup::*)( const opencascade::handle<StepRepr_RepresentationItem> &  ) >(&StepAP214_RepItemGroup::SetRepresentationItem),
             R"#(Set data for supertype RepresentationItem)#"  , py::arg("RepresentationItem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_RepItemGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_RepItemGroup::*)() const>(&StepAP214_RepItemGroup::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_RepItemGroup::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_RepItemGroup::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_OrganizationItem ,std::unique_ptr<StepAP214_OrganizationItem>  , StepAP214_ApprovalItem >>(m.attr("StepAP214_OrganizationItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_OrganizationItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_OrganizationItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_OrganizationItem::CaseNum),
             R"#(Recognizes a OrganizationItem Kind Entity that is :)#"  , py::arg("ent"))
        .def("AppliedOrganizationAssignment",
             (opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP214_OrganizationItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP214_OrganizationItem::*)() const>(&StepAP214_OrganizationItem::AppliedOrganizationAssignment),
             R"#(returns Value as a AppliedOrganizationAssignment (Null if another type))#" )
        .def("Approval",
             (opencascade::handle<StepBasic_Approval> (StepAP214_OrganizationItem::*)() const) static_cast<opencascade::handle<StepBasic_Approval> (StepAP214_OrganizationItem::*)() const>(&StepAP214_OrganizationItem::Approval),
             R"#(returns Value as a Approval (Null if another type))#" )
        .def("AppliedSecurityClassificationAssignment",
             (opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> (StepAP214_OrganizationItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> (StepAP214_OrganizationItem::*)() const>(&StepAP214_OrganizationItem::AppliedSecurityClassificationAssignment),
             R"#(returns Value as a AppliedSecurityClassificationAssignment (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_AutoDesignDateAndPersonAssignment ,opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment>  , StepBasic_PersonAndOrganizationAssignment >>(m.attr("StepAP214_AutoDesignDateAndPersonAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignDateAndPersonAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndPersonItem> &  ) ) static_cast<void (StepAP214_AutoDesignDateAndPersonAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndPersonItem> &  ) >(&StepAP214_AutoDesignDateAndPersonAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedPersonAndOrganization"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignDateAndPersonAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndPersonItem> &  ) ) static_cast<void (StepAP214_AutoDesignDateAndPersonAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndPersonItem> &  ) >(&StepAP214_AutoDesignDateAndPersonAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndPersonItem> (StepAP214_AutoDesignDateAndPersonAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndPersonItem> (StepAP214_AutoDesignDateAndPersonAssignment::*)() const>(&StepAP214_AutoDesignDateAndPersonAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_AutoDesignDateAndPersonItem (StepAP214_AutoDesignDateAndPersonAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignDateAndPersonItem (StepAP214_AutoDesignDateAndPersonAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignDateAndPersonAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignDateAndPersonAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignDateAndPersonAssignment::*)() const>(&StepAP214_AutoDesignDateAndPersonAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignDateAndPersonAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignDateAndPersonAssignment::*)() const>(&StepAP214_AutoDesignDateAndPersonAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignDateAndPersonAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignDateAndPersonAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AppliedGroupAssignment ,opencascade::handle<StepAP214_AppliedGroupAssignment>  , StepBasic_GroupAssignment >>(m.attr("StepAP214_AppliedGroupAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AppliedGroupAssignment::*)( const opencascade::handle<StepBasic_Group> & ,  const opencascade::handle<StepAP214_HArray1OfGroupItem> &  ) ) static_cast<void (StepAP214_AppliedGroupAssignment::*)( const opencascade::handle<StepBasic_Group> & ,  const opencascade::handle<StepAP214_HArray1OfGroupItem> &  ) >(&StepAP214_AppliedGroupAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aGroupAssignment_AssignedGroup"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfGroupItem> (StepAP214_AppliedGroupAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfGroupItem> (StepAP214_AppliedGroupAssignment::*)() const>(&StepAP214_AppliedGroupAssignment::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP214_AppliedGroupAssignment::*)( const opencascade::handle<StepAP214_HArray1OfGroupItem> &  ) ) static_cast<void (StepAP214_AppliedGroupAssignment::*)( const opencascade::handle<StepAP214_HArray1OfGroupItem> &  ) >(&StepAP214_AppliedGroupAssignment::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AppliedGroupAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AppliedGroupAssignment::*)() const>(&StepAP214_AppliedGroupAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AppliedGroupAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AppliedGroupAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfAutoDesignGeneralOrgItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignGeneralOrgItem>  >>(m.attr("StepAP214_HArray1OfAutoDesignGeneralOrgItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_AutoDesignGeneralOrgItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_AutoDesignGeneralOrgItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfAutoDesignGeneralOrgItem & (StepAP214_HArray1OfAutoDesignGeneralOrgItem::*)() const) static_cast<const StepAP214_Array1OfAutoDesignGeneralOrgItem & (StepAP214_HArray1OfAutoDesignGeneralOrgItem::*)() const>(&StepAP214_HArray1OfAutoDesignGeneralOrgItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfAutoDesignGeneralOrgItem & (StepAP214_HArray1OfAutoDesignGeneralOrgItem::*)() ) static_cast<StepAP214_Array1OfAutoDesignGeneralOrgItem & (StepAP214_HArray1OfAutoDesignGeneralOrgItem::*)() >(&StepAP214_HArray1OfAutoDesignGeneralOrgItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignGeneralOrgItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignGeneralOrgItem::*)() const>(&StepAP214_HArray1OfAutoDesignGeneralOrgItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfAutoDesignGeneralOrgItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfAutoDesignGeneralOrgItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AppliedDocumentReference ,opencascade::handle<StepAP214_AppliedDocumentReference>  , StepBasic_DocumentReference >>(m.attr("StepAP214_AppliedDocumentReference"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AppliedDocumentReference::*)( const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepAP214_HArray1OfDocumentReferenceItem> &  ) ) static_cast<void (StepAP214_AppliedDocumentReference::*)( const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepAP214_HArray1OfDocumentReferenceItem> &  ) >(&StepAP214_AppliedDocumentReference::Init),
             R"#(None)#"  , py::arg("aAssignedDocument"),  py::arg("aSource"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfDocumentReferenceItem> (StepAP214_AppliedDocumentReference::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfDocumentReferenceItem> (StepAP214_AppliedDocumentReference::*)() const>(&StepAP214_AppliedDocumentReference::Items),
             R"#(None)#" )
        .def("SetItems",
             (void (StepAP214_AppliedDocumentReference::*)( const opencascade::handle<StepAP214_HArray1OfDocumentReferenceItem> &  ) ) static_cast<void (StepAP214_AppliedDocumentReference::*)( const opencascade::handle<StepAP214_HArray1OfDocumentReferenceItem> &  ) >(&StepAP214_AppliedDocumentReference::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("ItemsValue",
             (StepAP214_DocumentReferenceItem (StepAP214_AppliedDocumentReference::*)( const Standard_Integer  ) const) static_cast<StepAP214_DocumentReferenceItem (StepAP214_AppliedDocumentReference::*)( const Standard_Integer  ) const>(&StepAP214_AppliedDocumentReference::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AppliedDocumentReference::*)() const) static_cast<Standard_Integer (StepAP214_AppliedDocumentReference::*)() const>(&StepAP214_AppliedDocumentReference::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AppliedDocumentReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AppliedDocumentReference::*)() const>(&StepAP214_AppliedDocumentReference::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AppliedDocumentReference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AppliedDocumentReference::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_GroupItem ,std::unique_ptr<StepAP214_GroupItem>  , StepData_SelectType >>(m.attr("StepAP214_GroupItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_GroupItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_GroupItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_GroupItem::CaseNum),
             R"#(Recognizes a GroupItem Kind Entity that is : 1 -> GeometricRepresentationItem 2 -> GroupRelationship 3 -> MappedItem 4 -> ProductDefinition 5 -> ProductDefinitionFormation 6 -> PropertyDefinitionRepresentation 7 -> Representation 8 -> RepresentationItem 9 -> RepresentationRelationshipWithTransformation 10 -> ShapeAspect 11 -> ShapeAspectRelationship 12 -> ShapeRepresentationRelationship 13 -> StyledItem 14 -> TopologicalRepresentationItem 0 else)#"  , py::arg("ent"))
        .def("GeometricRepresentationItem",
             (opencascade::handle<StepGeom_GeometricRepresentationItem> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepGeom_GeometricRepresentationItem> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::GeometricRepresentationItem),
             R"#(returns Value as a GeometricRepresentationItem (Null if another type))#" )
        .def("GroupRelationship",
             (opencascade::handle<StepBasic_GroupRelationship> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepBasic_GroupRelationship> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::GroupRelationship),
             R"#(returns Value as a GroupRelationship (Null if another type))#" )
        .def("MappedItem",
             (opencascade::handle<StepRepr_MappedItem> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepRepr_MappedItem> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::MappedItem),
             R"#(returns Value as a MappedItem (Null if another type))#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::ProductDefinition),
             R"#(returns Value as a ProductDefinition (Null if another type))#" )
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::ProductDefinitionFormation),
             R"#(returns Value as a ProductDefinitionFormation (Null if another type))#" )
        .def("PropertyDefinitionRepresentation",
             (opencascade::handle<StepRepr_PropertyDefinitionRepresentation> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepRepr_PropertyDefinitionRepresentation> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::PropertyDefinitionRepresentation),
             R"#(returns Value as a PropertyDefinitionRepresentation (Null if another type))#" )
        .def("Representation",
             (opencascade::handle<StepRepr_Representation> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepRepr_Representation> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::Representation),
             R"#(returns Value as a Representation (Null if another type))#" )
        .def("RepresentationItem",
             (opencascade::handle<StepRepr_RepresentationItem> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepRepr_RepresentationItem> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::RepresentationItem),
             R"#(returns Value as a RepresentationItem (Null if another type))#" )
        .def("RepresentationRelationshipWithTransformation",
             (opencascade::handle<StepRepr_RepresentationRelationshipWithTransformation> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepRepr_RepresentationRelationshipWithTransformation> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::RepresentationRelationshipWithTransformation),
             R"#(returns Value as a RepresentationRelationshipWithTransformation (Null if another type))#" )
        .def("ShapeAspect",
             (opencascade::handle<StepRepr_ShapeAspect> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::ShapeAspect),
             R"#(returns Value as a ShapeAspect (Null if another type))#" )
        .def("ShapeAspectRelationship",
             (opencascade::handle<StepRepr_ShapeAspectRelationship> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspectRelationship> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::ShapeAspectRelationship),
             R"#(returns Value as a ShapeAspectRelationship (Null if another type))#" )
        .def("ShapeRepresentationRelationship",
             (opencascade::handle<StepRepr_ShapeRepresentationRelationship> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepRepr_ShapeRepresentationRelationship> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::ShapeRepresentationRelationship),
             R"#(returns Value as a ShapeRepresentationRelationship (Null if another type))#" )
        .def("StyledItem",
             (opencascade::handle<StepVisual_StyledItem> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepVisual_StyledItem> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::StyledItem),
             R"#(returns Value as a StyledItem (Null if another type))#" )
        .def("TopologicalRepresentationItem",
             (opencascade::handle<StepShape_TopologicalRepresentationItem> (StepAP214_GroupItem::*)() const) static_cast<opencascade::handle<StepShape_TopologicalRepresentationItem> (StepAP214_GroupItem::*)() const>(&StepAP214_GroupItem::TopologicalRepresentationItem),
             R"#(returns Value as a TopologicalRepresentationItem (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_DateAndTimeItem ,std::unique_ptr<StepAP214_DateAndTimeItem>  , StepAP214_ApprovalItem >>(m.attr("StepAP214_DateAndTimeItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_DateAndTimeItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_DateAndTimeItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_DateAndTimeItem::CaseNum),
             R"#(Recognizes a DateAndTimeItem Kind Entity that is : 1 -> ApprovalPersonOrganization 2 -> AppliedDateAndPersonAssignment 3 -> AppliedOrganizationAssignment 4 -> AssemblyComponentUsageSubstitute 5 -> DocumentFile 6 -> Effectivity 7 -> MaterialDesignation 8 -> MechanicalDesignGeometricPresentationRepresentation 9 -> PresentationArea 10 -> Product 11 -> ProductDefinition 12 -> ProductDefinitionFormation 13 -> ProductDefinitionRelationship 14 -> PropertyDefinition 15 -> ShapeRepresentation 16 -> SecurityClassification 0 else)#"  , py::arg("ent"))
        .def("ApprovalPersonOrganization",
             (opencascade::handle<StepBasic_ApprovalPersonOrganization> (StepAP214_DateAndTimeItem::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalPersonOrganization> (StepAP214_DateAndTimeItem::*)() const>(&StepAP214_DateAndTimeItem::ApprovalPersonOrganization),
             R"#(returns Value as a ApprovalPersonOrganization (Null if another type))#" )
        .def("AppliedPersonAndOrganizationAssignment",
             (opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> (StepAP214_DateAndTimeItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> (StepAP214_DateAndTimeItem::*)() const>(&StepAP214_DateAndTimeItem::AppliedPersonAndOrganizationAssignment),
             R"#(returns Value as a AppliedDateAndPersonAssignment (Null if another type))#" )
        .def("AppliedOrganizationAssignment",
             (opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP214_DateAndTimeItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP214_DateAndTimeItem::*)() const>(&StepAP214_DateAndTimeItem::AppliedOrganizationAssignment),
             R"#(returns Value as a AppliedOrganizationAssignment (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_AutoDesignPersonAndOrganizationAssignment ,opencascade::handle<StepAP214_AutoDesignPersonAndOrganizationAssignment>  , StepBasic_PersonAndOrganizationAssignment >>(m.attr("StepAP214_AutoDesignPersonAndOrganizationAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) ) static_cast<void (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) >(&StepAP214_AutoDesignPersonAndOrganizationAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedPersonAndOrganization"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) ) static_cast<void (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> &  ) >(&StepAP214_AutoDesignPersonAndOrganizationAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignGeneralOrgItem> (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)() const>(&StepAP214_AutoDesignPersonAndOrganizationAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_AutoDesignGeneralOrgItem (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignGeneralOrgItem (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignPersonAndOrganizationAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)() const>(&StepAP214_AutoDesignPersonAndOrganizationAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignPersonAndOrganizationAssignment::*)() const>(&StepAP214_AutoDesignPersonAndOrganizationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignPersonAndOrganizationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignPersonAndOrganizationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_SecurityClassificationItem ,std::unique_ptr<StepAP214_SecurityClassificationItem>  , StepAP214_ApprovalItem >>(m.attr("StepAP214_SecurityClassificationItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_SecurityClassificationItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_SecurityClassificationItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_SecurityClassificationItem::CaseNum),
             R"#(Recognizes a SecurityClassificationItem Kind Entity that is : 1 -> Action 2 -> AssemblyComponentUsage 3 -> AssemblyComponentUsageSubstitute 4 -> ConfigurationDesign 5 -> ConfigurationEffectivity 6 -> Document 7 -> DocumentFile 8 -> DraughtingModel 9 -> GeneralProperty 10 -> MakeFromUsageOption 11 -> MaterialDesignation 12 -> MechanicalDesignGeometricPresentationRepresentation 13 -> PresentationArea 14 -> Product 15 -> ProductConcept 16 -> ProductDefinition 17 -> ProductDefinitionFormation 18 -> ProductDefinitionRelationship 19 -> ProductDefinitionUsage 20 -> PropertyDefinition 21 -> ShapeRepresentation 22 -> VersionedActionRequest 0 else)#"  , py::arg("ent"))
        .def("Action",
             (opencascade::handle<StepBasic_Action> (StepAP214_SecurityClassificationItem::*)() const) static_cast<opencascade::handle<StepBasic_Action> (StepAP214_SecurityClassificationItem::*)() const>(&StepAP214_SecurityClassificationItem::Action),
             R"#(returns Value as a Action (Null if another type))#" )
        .def("AssemblyComponentUsage",
             (opencascade::handle<StepRepr_AssemblyComponentUsage> (StepAP214_SecurityClassificationItem::*)() const) static_cast<opencascade::handle<StepRepr_AssemblyComponentUsage> (StepAP214_SecurityClassificationItem::*)() const>(&StepAP214_SecurityClassificationItem::AssemblyComponentUsage),
             R"#(returns Value as a AssemblyComponentUsage (Null if another type))#" )
        .def("ConfigurationDesign",
             (opencascade::handle<StepRepr_ConfigurationDesign> (StepAP214_SecurityClassificationItem::*)() const) static_cast<opencascade::handle<StepRepr_ConfigurationDesign> (StepAP214_SecurityClassificationItem::*)() const>(&StepAP214_SecurityClassificationItem::ConfigurationDesign),
             R"#(returns Value as a ConfigurationDesign (Null if another type))#" )
        .def("ConfigurationEffectivity",
             (opencascade::handle<StepRepr_ConfigurationEffectivity> (StepAP214_SecurityClassificationItem::*)() const) static_cast<opencascade::handle<StepRepr_ConfigurationEffectivity> (StepAP214_SecurityClassificationItem::*)() const>(&StepAP214_SecurityClassificationItem::ConfigurationEffectivity),
             R"#(returns Value as a ConfigurationEffectivity (Null if another type))#" )
        .def("DraughtingModel",
             (opencascade::handle<StepVisual_DraughtingModel> (StepAP214_SecurityClassificationItem::*)() const) static_cast<opencascade::handle<StepVisual_DraughtingModel> (StepAP214_SecurityClassificationItem::*)() const>(&StepAP214_SecurityClassificationItem::DraughtingModel),
             R"#(returns Value as a DraughtingModel (Null if another type))#" )
        .def("GeneralProperty",
             (opencascade::handle<StepBasic_GeneralProperty> (StepAP214_SecurityClassificationItem::*)() const) static_cast<opencascade::handle<StepBasic_GeneralProperty> (StepAP214_SecurityClassificationItem::*)() const>(&StepAP214_SecurityClassificationItem::GeneralProperty),
             R"#(returns Value as a GeneralProperty (Null if another type))#" )
        .def("MakeFromUsageOption",
             (opencascade::handle<StepRepr_MakeFromUsageOption> (StepAP214_SecurityClassificationItem::*)() const) static_cast<opencascade::handle<StepRepr_MakeFromUsageOption> (StepAP214_SecurityClassificationItem::*)() const>(&StepAP214_SecurityClassificationItem::MakeFromUsageOption),
             R"#(returns Value as a MakeFromUsageOption (Null if another type))#" )
        .def("ProductConcept",
             (opencascade::handle<StepRepr_ProductConcept> (StepAP214_SecurityClassificationItem::*)() const) static_cast<opencascade::handle<StepRepr_ProductConcept> (StepAP214_SecurityClassificationItem::*)() const>(&StepAP214_SecurityClassificationItem::ProductConcept),
             R"#(returns Value as a ProductConcept (Null if another type))#" )
        .def("ProductDefinitionUsage",
             (opencascade::handle<StepRepr_ProductDefinitionUsage> (StepAP214_SecurityClassificationItem::*)() const) static_cast<opencascade::handle<StepRepr_ProductDefinitionUsage> (StepAP214_SecurityClassificationItem::*)() const>(&StepAP214_SecurityClassificationItem::ProductDefinitionUsage),
             R"#(returns Value as a ProductDefinitionUsage (Null if another type))#" )
        .def("VersionedActionRequest",
             (opencascade::handle<StepBasic_VersionedActionRequest> (StepAP214_SecurityClassificationItem::*)() const) static_cast<opencascade::handle<StepBasic_VersionedActionRequest> (StepAP214_SecurityClassificationItem::*)() const>(&StepAP214_SecurityClassificationItem::VersionedActionRequest),
             R"#(returns Value as a VersionedActionRequest (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_AppliedApprovalAssignment ,opencascade::handle<StepAP214_AppliedApprovalAssignment>  , StepBasic_ApprovalAssignment >>(m.attr("StepAP214_AppliedApprovalAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AppliedApprovalAssignment::*)( const opencascade::handle<StepBasic_Approval> & ,  const opencascade::handle<StepAP214_HArray1OfApprovalItem> &  ) ) static_cast<void (StepAP214_AppliedApprovalAssignment::*)( const opencascade::handle<StepBasic_Approval> & ,  const opencascade::handle<StepAP214_HArray1OfApprovalItem> &  ) >(&StepAP214_AppliedApprovalAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedApproval"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AppliedApprovalAssignment::*)( const opencascade::handle<StepAP214_HArray1OfApprovalItem> &  ) ) static_cast<void (StepAP214_AppliedApprovalAssignment::*)( const opencascade::handle<StepAP214_HArray1OfApprovalItem> &  ) >(&StepAP214_AppliedApprovalAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfApprovalItem> (StepAP214_AppliedApprovalAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfApprovalItem> (StepAP214_AppliedApprovalAssignment::*)() const>(&StepAP214_AppliedApprovalAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_ApprovalItem (StepAP214_AppliedApprovalAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_ApprovalItem (StepAP214_AppliedApprovalAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AppliedApprovalAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AppliedApprovalAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AppliedApprovalAssignment::*)() const>(&StepAP214_AppliedApprovalAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AppliedApprovalAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AppliedApprovalAssignment::*)() const>(&StepAP214_AppliedApprovalAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AppliedApprovalAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AppliedApprovalAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignNominalDateAndTimeAssignment ,opencascade::handle<StepAP214_AutoDesignNominalDateAndTimeAssignment>  , StepBasic_DateAndTimeAssignment >>(m.attr("StepAP214_AutoDesignNominalDateAndTimeAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  const opencascade::handle<StepBasic_DateTimeRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> &  ) ) static_cast<void (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  const opencascade::handle<StepBasic_DateTimeRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> &  ) >(&StepAP214_AutoDesignNominalDateAndTimeAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedDateAndTime"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> &  ) ) static_cast<void (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> &  ) >(&StepAP214_AutoDesignNominalDateAndTimeAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignDateAndTimeItem> (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)() const>(&StepAP214_AutoDesignNominalDateAndTimeAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_AutoDesignDateAndTimeItem (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignDateAndTimeItem (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignNominalDateAndTimeAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)() const>(&StepAP214_AutoDesignNominalDateAndTimeAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignNominalDateAndTimeAssignment::*)() const>(&StepAP214_AutoDesignNominalDateAndTimeAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignNominalDateAndTimeAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignNominalDateAndTimeAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_Class ,opencascade::handle<StepAP214_Class>  , StepBasic_Group >>(m.attr("StepAP214_Class"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_Class::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_Class::*)() const>(&StepAP214_Class::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_Class::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_Class::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_DateItem ,std::unique_ptr<StepAP214_DateItem>  , StepAP214_ApprovalItem >>(m.attr("StepAP214_DateItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_DateItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_DateItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_DateItem::CaseNum),
             R"#(Recognizes a DateItem Kind Entity that is : 1 -> ApprovalPersonOrganization 2 -> AppliedDateAndPersonAssignment 3 -> AppliedOrganizationAssignment 4 -> AssemblyComponentUsageSubstitute 5 -> DocumentFile 6 -> Effectivity 7 -> MaterialDesignation 8 -> MechanicalDesignGeometricPresentationRepresentation 9 -> PresentationArea 10 -> Product 11 -> ProductDefinition 12 -> ProductDefinitionFormation 13 -> ProductDefinitionRelationship 14 -> PropertyDefinition 15 -> ShapeRepresentation 16 -> AppliedSecurityClassificationAssignment 17 -> Document 0 else)#"  , py::arg("ent"))
        .def("ApprovalPersonOrganization",
             (opencascade::handle<StepBasic_ApprovalPersonOrganization> (StepAP214_DateItem::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalPersonOrganization> (StepAP214_DateItem::*)() const>(&StepAP214_DateItem::ApprovalPersonOrganization),
             R"#(returns Value as a ApprovalPersonOrganization (Null if another type))#" )
        .def("AppliedPersonAndOrganizationAssignment",
             (opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> (StepAP214_DateItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> (StepAP214_DateItem::*)() const>(&StepAP214_DateItem::AppliedPersonAndOrganizationAssignment),
             R"#(returns Value as a AppliedDateAndPersonAssignment (Null if another type))#" )
        .def("AppliedOrganizationAssignment",
             (opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP214_DateItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP214_DateItem::*)() const>(&StepAP214_DateItem::AppliedOrganizationAssignment),
             R"#(returns Value as a AppliedOrganizationAssignment (Null if another type))#" )
        .def("AppliedSecurityClassificationAssignment",
             (opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> (StepAP214_DateItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> (StepAP214_DateItem::*)() const>(&StepAP214_DateItem::AppliedSecurityClassificationAssignment),
             R"#(returns Value as a AppliedSecurityClassificationAssignment (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_PresentedItemSelect ,std::unique_ptr<StepAP214_PresentedItemSelect>  , StepData_SelectType >>(m.attr("StepAP214_PresentedItemSelect"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_PresentedItemSelect::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_PresentedItemSelect::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_PresentedItemSelect::CaseNum),
             R"#(Recognizes a PresentedItemSelect Kind Entity that is : 1 -> ProductDefinition, 2 -> ProductDefinitionRelationship, 0 else)#"  , py::arg("ent"))
        .def("ProductDefinitionRelationship",
             (opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_PresentedItemSelect::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_PresentedItemSelect::*)() const>(&StepAP214_PresentedItemSelect::ProductDefinitionRelationship),
             R"#(returns Value as a ProductDefinitionRelationship (Null if another type))#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP214_PresentedItemSelect::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP214_PresentedItemSelect::*)() const>(&StepAP214_PresentedItemSelect::ProductDefinition),
             R"#(returns Value as a ProductDefinition (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_HArray1OfAutoDesignDateAndPersonItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignDateAndPersonItem>  >>(m.attr("StepAP214_HArray1OfAutoDesignDateAndPersonItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_AutoDesignDateAndPersonItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_AutoDesignDateAndPersonItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfAutoDesignDateAndPersonItem & (StepAP214_HArray1OfAutoDesignDateAndPersonItem::*)() const) static_cast<const StepAP214_Array1OfAutoDesignDateAndPersonItem & (StepAP214_HArray1OfAutoDesignDateAndPersonItem::*)() const>(&StepAP214_HArray1OfAutoDesignDateAndPersonItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfAutoDesignDateAndPersonItem & (StepAP214_HArray1OfAutoDesignDateAndPersonItem::*)() ) static_cast<StepAP214_Array1OfAutoDesignDateAndPersonItem & (StepAP214_HArray1OfAutoDesignDateAndPersonItem::*)() >(&StepAP214_HArray1OfAutoDesignDateAndPersonItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignDateAndPersonItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignDateAndPersonItem::*)() const>(&StepAP214_HArray1OfAutoDesignDateAndPersonItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfAutoDesignDateAndPersonItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfAutoDesignDateAndPersonItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_PersonAndOrganizationItem ,std::unique_ptr<StepAP214_PersonAndOrganizationItem>  , StepAP214_ApprovalItem >>(m.attr("StepAP214_PersonAndOrganizationItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_PersonAndOrganizationItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_PersonAndOrganizationItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_PersonAndOrganizationItem::CaseNum),
             R"#(Recognizes a APersonAndOrganizationItem Kind Entity that is : 1 -> AppliedOrganizationAssignment 2 -> AssemblyComponentUsageSubstitute 3 -> DocumentFile 4 -> MaterialDesignation 5 -> MechanicalDesignGeometricPresentationRepresentation 6 -> PresentationArea 7 -> Product 8 -> ProductDefinition 9 -> ProductDefinitionFormation 10 -> ProductDefinitionRelationship 11 -> PropertyDefinition 12 -> ShapeRepresentation 13 -> SecurityClassification 14 -> AppliedSecurityClassificationAssignment 15 -> Approval 0 else)#"  , py::arg("ent"))
        .def("AppliedOrganizationAssignment",
             (opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP214_PersonAndOrganizationItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP214_PersonAndOrganizationItem::*)() const>(&StepAP214_PersonAndOrganizationItem::AppliedOrganizationAssignment),
             R"#(returns Value as a AppliedOrganizationAssignment (Null if another type))#" )
        .def("AppliedSecurityClassificationAssignment",
             (opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> (StepAP214_PersonAndOrganizationItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> (StepAP214_PersonAndOrganizationItem::*)() const>(&StepAP214_PersonAndOrganizationItem::AppliedSecurityClassificationAssignment),
             R"#(returns Value as a AppliedSecurityClassificationAssignment (Null if another type))#" )
        .def("Approval",
             (opencascade::handle<StepBasic_Approval> (StepAP214_PersonAndOrganizationItem::*)() const) static_cast<opencascade::handle<StepBasic_Approval> (StepAP214_PersonAndOrganizationItem::*)() const>(&StepAP214_PersonAndOrganizationItem::Approval),
             R"#(returns Value as a Approval (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_AutoDesignGeneralOrgItem ,std::unique_ptr<StepAP214_AutoDesignGeneralOrgItem>  , StepData_SelectType >>(m.attr("StepAP214_AutoDesignGeneralOrgItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_AutoDesignGeneralOrgItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_AutoDesignGeneralOrgItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_AutoDesignGeneralOrgItem::CaseNum),
             R"#(Recognizes a AutoDesignGeneralOrgItem Kind Entity that is : 1 Product from StepBasic, 2 ProductDefinition from StepBasic, 3 ProductDefinitionFormation from StepBasic, 4 ProductDefinitionRelationship from StepBasic, 5 ProductDefinitionWithAssociatedDocuments from StepBasic, 6 Representation from StepRepr 7 ExternallyDefinedRepresentation from StepRepr, 8 AutoDesignDocumentReference from StepAP214, 0 else)#"  , py::arg("ent"))
        .def("Product",
             (opencascade::handle<StepBasic_Product> (StepAP214_AutoDesignGeneralOrgItem::*)() const) static_cast<opencascade::handle<StepBasic_Product> (StepAP214_AutoDesignGeneralOrgItem::*)() const>(&StepAP214_AutoDesignGeneralOrgItem::Product),
             R"#(returns Value as a Product (Null if another type))#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP214_AutoDesignGeneralOrgItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP214_AutoDesignGeneralOrgItem::*)() const>(&StepAP214_AutoDesignGeneralOrgItem::ProductDefinition),
             R"#(returns Value as a ProductDefinition (Null if another type))#" )
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP214_AutoDesignGeneralOrgItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP214_AutoDesignGeneralOrgItem::*)() const>(&StepAP214_AutoDesignGeneralOrgItem::ProductDefinitionFormation),
             R"#(returns Value as a ProductDefinitionFormation (Null if another type))#" )
        .def("ProductDefinitionRelationship",
             (opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_AutoDesignGeneralOrgItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_AutoDesignGeneralOrgItem::*)() const>(&StepAP214_AutoDesignGeneralOrgItem::ProductDefinitionRelationship),
             R"#(returns Value as a ProductDefinitionRelationship (Null if another type))#" )
        .def("ProductDefinitionWithAssociatedDocuments",
             (opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> (StepAP214_AutoDesignGeneralOrgItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> (StepAP214_AutoDesignGeneralOrgItem::*)() const>(&StepAP214_AutoDesignGeneralOrgItem::ProductDefinitionWithAssociatedDocuments),
             R"#(returns Value as a ProductDefinitionWithAssociatedDocuments (Null if another type))#" )
        .def("Representation",
             (opencascade::handle<StepRepr_Representation> (StepAP214_AutoDesignGeneralOrgItem::*)() const) static_cast<opencascade::handle<StepRepr_Representation> (StepAP214_AutoDesignGeneralOrgItem::*)() const>(&StepAP214_AutoDesignGeneralOrgItem::Representation),
             R"#(returns Value as a Representation (Null if another type))#" )
        .def("ExternallyDefinedRepresentation",
             (opencascade::handle<StepRepr_ExternallyDefinedRepresentation> (StepAP214_AutoDesignGeneralOrgItem::*)() const) static_cast<opencascade::handle<StepRepr_ExternallyDefinedRepresentation> (StepAP214_AutoDesignGeneralOrgItem::*)() const>(&StepAP214_AutoDesignGeneralOrgItem::ExternallyDefinedRepresentation),
             R"#(returns Value as a Representation (Null if another type))#" )
        .def("AutoDesignDocumentReference",
             (opencascade::handle<StepAP214_AutoDesignDocumentReference> (StepAP214_AutoDesignGeneralOrgItem::*)() const) static_cast<opencascade::handle<StepAP214_AutoDesignDocumentReference> (StepAP214_AutoDesignGeneralOrgItem::*)() const>(&StepAP214_AutoDesignGeneralOrgItem::AutoDesignDocumentReference),
             R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfApprovalItem ,std::unique_ptr<StepAP214_HArray1OfApprovalItem>  >>(m.attr("StepAP214_HArray1OfApprovalItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_ApprovalItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_ApprovalItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfApprovalItem & (StepAP214_HArray1OfApprovalItem::*)() const) static_cast<const StepAP214_Array1OfApprovalItem & (StepAP214_HArray1OfApprovalItem::*)() const>(&StepAP214_HArray1OfApprovalItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfApprovalItem & (StepAP214_HArray1OfApprovalItem::*)() ) static_cast<StepAP214_Array1OfApprovalItem & (StepAP214_HArray1OfApprovalItem::*)() >(&StepAP214_HArray1OfApprovalItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfApprovalItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfApprovalItem::*)() const>(&StepAP214_HArray1OfApprovalItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfApprovalItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfApprovalItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AppliedExternalIdentificationAssignment ,opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment>  , StepBasic_ExternalIdentificationAssignment >>(m.attr("StepAP214_AppliedExternalIdentificationAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AppliedExternalIdentificationAssignment::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_IdentificationRole> & ,  const opencascade::handle<StepBasic_ExternalSource> & ,  const opencascade::handle<StepAP214_HArray1OfExternalIdentificationItem> &  ) ) static_cast<void (StepAP214_AppliedExternalIdentificationAssignment::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_IdentificationRole> & ,  const opencascade::handle<StepBasic_ExternalSource> & ,  const opencascade::handle<StepAP214_HArray1OfExternalIdentificationItem> &  ) >(&StepAP214_AppliedExternalIdentificationAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aIdentificationAssignment_AssignedId"),  py::arg("aIdentificationAssignment_Role"),  py::arg("aExternalIdentificationAssignment_Source"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfExternalIdentificationItem> (StepAP214_AppliedExternalIdentificationAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfExternalIdentificationItem> (StepAP214_AppliedExternalIdentificationAssignment::*)() const>(&StepAP214_AppliedExternalIdentificationAssignment::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP214_AppliedExternalIdentificationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfExternalIdentificationItem> &  ) ) static_cast<void (StepAP214_AppliedExternalIdentificationAssignment::*)( const opencascade::handle<StepAP214_HArray1OfExternalIdentificationItem> &  ) >(&StepAP214_AppliedExternalIdentificationAssignment::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AppliedExternalIdentificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AppliedExternalIdentificationAssignment::*)() const>(&StepAP214_AppliedExternalIdentificationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AppliedExternalIdentificationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AppliedExternalIdentificationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_DocumentReferenceItem ,std::unique_ptr<StepAP214_DocumentReferenceItem>  , StepData_SelectType >>(m.attr("StepAP214_DocumentReferenceItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_DocumentReferenceItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_DocumentReferenceItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_DocumentReferenceItem::CaseNum),
             R"#(Recognizes a DocumentReferenceItem Kind Entity that is :)#"  , py::arg("ent"))
        .def("Approval",
             (opencascade::handle<StepBasic_Approval> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepBasic_Approval> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::Approval),
             R"#(returns Value as a Approval (Null if another type))#" )
        .def("DescriptiveRepresentationItem",
             (opencascade::handle<StepRepr_DescriptiveRepresentationItem> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepRepr_DescriptiveRepresentationItem> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::DescriptiveRepresentationItem),
             R"#(returns Value as a (Null if another type))#" )
        .def("MaterialDesignation",
             (opencascade::handle<StepRepr_MaterialDesignation> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepRepr_MaterialDesignation> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::MaterialDesignation),
             R"#(returns Value as a MaterialDesignation (Null if another type))#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::ProductDefinition),
             R"#(returns Value as a ProductDefinition (Null if another type))#" )
        .def("ProductDefinitionRelationship",
             (opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::ProductDefinitionRelationship),
             R"#(returns Value as aProductDefinitionRelationship (Null if another type))#" )
        .def("PropertyDefinition",
             (opencascade::handle<StepRepr_PropertyDefinition> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepRepr_PropertyDefinition> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::PropertyDefinition),
             R"#(returns Value as a PropertyDefinition (Null if another type))#" )
        .def("Representation",
             (opencascade::handle<StepRepr_Representation> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepRepr_Representation> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::Representation),
             R"#(returns Value as a Representation (Null if another type))#" )
        .def("ShapeAspect",
             (opencascade::handle<StepRepr_ShapeAspect> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::ShapeAspect),
             R"#(returns Value as a ShapeAspect (Null if another type))#" )
        .def("ShapeAspectRelationship",
             (opencascade::handle<StepRepr_ShapeAspectRelationship> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspectRelationship> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::ShapeAspectRelationship),
             R"#(returns Value as a ShapeAspectRelationship (Null if another type))#" )
        .def("AppliedExternalIdentificationAssignment",
             (opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::AppliedExternalIdentificationAssignment),
             R"#(returns Value as a AppliedExternalIdentificationAssignment (Null if another type))#" )
        .def("AssemblyComponentUsage",
             (opencascade::handle<StepRepr_AssemblyComponentUsage> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepRepr_AssemblyComponentUsage> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::AssemblyComponentUsage),
             R"#(returns Value as a AssemblyComponentUsage (Null if another type))#" )
        .def("CharacterizedObject",
             (opencascade::handle<StepBasic_CharacterizedObject> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepBasic_CharacterizedObject> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::CharacterizedObject),
             R"#(returns Value as a CharacterizedObject (Null if another type))#" )
        .def("DimensionalSize",
             (opencascade::handle<StepShape_DimensionalSize> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepShape_DimensionalSize> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::DimensionalSize),
             R"#(returns Value as a DimensionalSize (Null if another type))#" )
        .def("ExternallyDefinedItem",
             (opencascade::handle<StepBasic_ExternallyDefinedItem> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepBasic_ExternallyDefinedItem> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::ExternallyDefinedItem),
             R"#(returns Value as a ExternallyDefinedItem (Null if another type))#" )
        .def("Group",
             (opencascade::handle<StepBasic_Group> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepBasic_Group> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::Group),
             R"#(returns Value as a Group (Null if another type))#" )
        .def("GroupRelationship",
             (opencascade::handle<StepBasic_GroupRelationship> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepBasic_GroupRelationship> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::GroupRelationship),
             R"#(returns Value as a GroupRelationship (Null if another type))#" )
        .def("MeasureRepresentationItem",
             (opencascade::handle<StepRepr_MeasureRepresentationItem> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepRepr_MeasureRepresentationItem> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::MeasureRepresentationItem),
             R"#(returns Value as a MeasureRepresentationItem (Null if another type))#" )
        .def("ProductCategory",
             (opencascade::handle<StepBasic_ProductCategory> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductCategory> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::ProductCategory),
             R"#(returns Value as a ProductCategory (Null if another type))#" )
        .def("ProductDefinitionContext",
             (opencascade::handle<StepBasic_ProductDefinitionContext> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionContext> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::ProductDefinitionContext),
             R"#(returns Value as a ProductDefinitionContext (Null if another type))#" )
        .def("RepresentationItem",
             (opencascade::handle<StepRepr_RepresentationItem> (StepAP214_DocumentReferenceItem::*)() const) static_cast<opencascade::handle<StepRepr_RepresentationItem> (StepAP214_DocumentReferenceItem::*)() const>(&StepAP214_DocumentReferenceItem::RepresentationItem),
             R"#(returns Value as a RepresentationItem (Null if another type))#" )
;


    static_cast<py::class_<StepAP214_AutoDesignDateAndPersonItem ,std::unique_ptr<StepAP214_AutoDesignDateAndPersonItem>  , StepData_SelectType >>(m.attr("StepAP214_AutoDesignDateAndPersonItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_AutoDesignDateAndPersonItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_AutoDesignDateAndPersonItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_AutoDesignDateAndPersonItem::CaseNum),
             R"#(Recognizes a AutoDesignDateAndPersonItem Kind Entity that is : 1 AutoDesignOrganizationAssignment from StepAP214, 2 Product from StepBasic, 3 ProductDefinition from StepBasic, 4 ProductDefinitionFormation from StepBasic, 5 Representation from StepRepr, 6 AutoDesignDocumentReference from StepAP214, 7 ExternallyDefinedRepresentation from StepRepr, 8 ProductDefinitionRelationship from StepBasic, 9 ProductDefinitionWithAssociatedDocuments from StepBasic 0 else)#"  , py::arg("ent"))
        .def("AutoDesignOrganizationAssignment",
             (opencascade::handle<StepAP214_AutoDesignOrganizationAssignment> (StepAP214_AutoDesignDateAndPersonItem::*)() const) static_cast<opencascade::handle<StepAP214_AutoDesignOrganizationAssignment> (StepAP214_AutoDesignDateAndPersonItem::*)() const>(&StepAP214_AutoDesignDateAndPersonItem::AutoDesignOrganizationAssignment),
             R"#(None)#" )
        .def("Product",
             (opencascade::handle<StepBasic_Product> (StepAP214_AutoDesignDateAndPersonItem::*)() const) static_cast<opencascade::handle<StepBasic_Product> (StepAP214_AutoDesignDateAndPersonItem::*)() const>(&StepAP214_AutoDesignDateAndPersonItem::Product),
             R"#(None)#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP214_AutoDesignDateAndPersonItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP214_AutoDesignDateAndPersonItem::*)() const>(&StepAP214_AutoDesignDateAndPersonItem::ProductDefinition),
             R"#(None)#" )
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP214_AutoDesignDateAndPersonItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP214_AutoDesignDateAndPersonItem::*)() const>(&StepAP214_AutoDesignDateAndPersonItem::ProductDefinitionFormation),
             R"#(None)#" )
        .def("Representation",
             (opencascade::handle<StepRepr_Representation> (StepAP214_AutoDesignDateAndPersonItem::*)() const) static_cast<opencascade::handle<StepRepr_Representation> (StepAP214_AutoDesignDateAndPersonItem::*)() const>(&StepAP214_AutoDesignDateAndPersonItem::Representation),
             R"#(None)#" )
        .def("AutoDesignDocumentReference",
             (opencascade::handle<StepAP214_AutoDesignDocumentReference> (StepAP214_AutoDesignDateAndPersonItem::*)() const) static_cast<opencascade::handle<StepAP214_AutoDesignDocumentReference> (StepAP214_AutoDesignDateAndPersonItem::*)() const>(&StepAP214_AutoDesignDateAndPersonItem::AutoDesignDocumentReference),
             R"#(None)#" )
        .def("ExternallyDefinedRepresentation",
             (opencascade::handle<StepRepr_ExternallyDefinedRepresentation> (StepAP214_AutoDesignDateAndPersonItem::*)() const) static_cast<opencascade::handle<StepRepr_ExternallyDefinedRepresentation> (StepAP214_AutoDesignDateAndPersonItem::*)() const>(&StepAP214_AutoDesignDateAndPersonItem::ExternallyDefinedRepresentation),
             R"#(None)#" )
        .def("ProductDefinitionRelationship",
             (opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_AutoDesignDateAndPersonItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_AutoDesignDateAndPersonItem::*)() const>(&StepAP214_AutoDesignDateAndPersonItem::ProductDefinitionRelationship),
             R"#(None)#" )
        .def("ProductDefinitionWithAssociatedDocuments",
             (opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> (StepAP214_AutoDesignDateAndPersonItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> (StepAP214_AutoDesignDateAndPersonItem::*)() const>(&StepAP214_AutoDesignDateAndPersonItem::ProductDefinitionWithAssociatedDocuments),
             R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfDateItem ,std::unique_ptr<StepAP214_HArray1OfDateItem>  >>(m.attr("StepAP214_HArray1OfDateItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_DateItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_DateItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfDateItem & (StepAP214_HArray1OfDateItem::*)() const) static_cast<const StepAP214_Array1OfDateItem & (StepAP214_HArray1OfDateItem::*)() const>(&StepAP214_HArray1OfDateItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfDateItem & (StepAP214_HArray1OfDateItem::*)() ) static_cast<StepAP214_Array1OfDateItem & (StepAP214_HArray1OfDateItem::*)() >(&StepAP214_HArray1OfDateItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfDateItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfDateItem::*)() const>(&StepAP214_HArray1OfDateItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfDateItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfDateItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfAutoDesignDatedItem ,std::unique_ptr<StepAP214_HArray1OfAutoDesignDatedItem>  >>(m.attr("StepAP214_HArray1OfAutoDesignDatedItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_AutoDesignDatedItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_AutoDesignDatedItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfAutoDesignDatedItem & (StepAP214_HArray1OfAutoDesignDatedItem::*)() const) static_cast<const StepAP214_Array1OfAutoDesignDatedItem & (StepAP214_HArray1OfAutoDesignDatedItem::*)() const>(&StepAP214_HArray1OfAutoDesignDatedItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfAutoDesignDatedItem & (StepAP214_HArray1OfAutoDesignDatedItem::*)() ) static_cast<StepAP214_Array1OfAutoDesignDatedItem & (StepAP214_HArray1OfAutoDesignDatedItem::*)() >(&StepAP214_HArray1OfAutoDesignDatedItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignDatedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfAutoDesignDatedItem::*)() const>(&StepAP214_HArray1OfAutoDesignDatedItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfAutoDesignDatedItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfAutoDesignDatedItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignOrganizationItem ,std::unique_ptr<StepAP214_AutoDesignOrganizationItem>  , StepAP214_AutoDesignGeneralOrgItem >>(m.attr("StepAP214_AutoDesignOrganizationItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_AutoDesignOrganizationItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_AutoDesignOrganizationItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_AutoDesignOrganizationItem::CaseNum),
             R"#(None)#"  , py::arg("ent"))
        .def("Document",
             (opencascade::handle<StepBasic_Document> (StepAP214_AutoDesignOrganizationItem::*)() const) static_cast<opencascade::handle<StepBasic_Document> (StepAP214_AutoDesignOrganizationItem::*)() const>(&StepAP214_AutoDesignOrganizationItem::Document),
             R"#(None)#" )
        .def("PhysicallyModeledProductDefinition",
             (opencascade::handle<StepBasic_PhysicallyModeledProductDefinition> (StepAP214_AutoDesignOrganizationItem::*)() const) static_cast<opencascade::handle<StepBasic_PhysicallyModeledProductDefinition> (StepAP214_AutoDesignOrganizationItem::*)() const>(&StepAP214_AutoDesignOrganizationItem::PhysicallyModeledProductDefinition),
             R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignReferencingItem ,std::unique_ptr<StepAP214_AutoDesignReferencingItem>  , StepData_SelectType >>(m.attr("StepAP214_AutoDesignReferencingItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepAP214_AutoDesignReferencingItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP214_AutoDesignReferencingItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP214_AutoDesignReferencingItem::CaseNum),
             R"#(Recognizes a AutoDesignReferencingItem Kind Entity that is : 1 Approval from StepBasic, 2 DocumentRelationship from StepBasic, 3 ExternallyDefinedRepresentation from StepRepr, 4 MappedItem from StepRepr, 5 MaterialDesignation from StepRepr, 6 PresentationArea from StepVisual, 7 PresentationView from StepVisual, 8 ProductCategory from StepBasic, 9 ProductDefinition from StepBasic, 10 ProductDefinitionRelationship from StepBasic, 11 PropertyDefinition from StepBasic, 12 Representation from StepRepr, 13 RepresentationRelationship from StepRepr, 14 ShapeAspect from StepRepr 0 else)#"  , py::arg("ent"))
        .def("Approval",
             (opencascade::handle<StepBasic_Approval> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepBasic_Approval> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::Approval),
             R"#(None)#" )
        .def("DocumentRelationship",
             (opencascade::handle<StepBasic_DocumentRelationship> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepBasic_DocumentRelationship> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::DocumentRelationship),
             R"#(None)#" )
        .def("ExternallyDefinedRepresentation",
             (opencascade::handle<StepRepr_ExternallyDefinedRepresentation> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepRepr_ExternallyDefinedRepresentation> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::ExternallyDefinedRepresentation),
             R"#(None)#" )
        .def("MappedItem",
             (opencascade::handle<StepRepr_MappedItem> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepRepr_MappedItem> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::MappedItem),
             R"#(None)#" )
        .def("MaterialDesignation",
             (opencascade::handle<StepRepr_MaterialDesignation> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepRepr_MaterialDesignation> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::MaterialDesignation),
             R"#(None)#" )
        .def("PresentationArea",
             (opencascade::handle<StepVisual_PresentationArea> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepVisual_PresentationArea> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::PresentationArea),
             R"#(None)#" )
        .def("PresentationView",
             (opencascade::handle<StepVisual_PresentationView> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepVisual_PresentationView> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::PresentationView),
             R"#(None)#" )
        .def("ProductCategory",
             (opencascade::handle<StepBasic_ProductCategory> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductCategory> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::ProductCategory),
             R"#(None)#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::ProductDefinition),
             R"#(None)#" )
        .def("ProductDefinitionRelationship",
             (opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::ProductDefinitionRelationship),
             R"#(None)#" )
        .def("PropertyDefinition",
             (opencascade::handle<StepRepr_PropertyDefinition> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepRepr_PropertyDefinition> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::PropertyDefinition),
             R"#(None)#" )
        .def("Representation",
             (opencascade::handle<StepRepr_Representation> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepRepr_Representation> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::Representation),
             R"#(None)#" )
        .def("RepresentationRelationship",
             (opencascade::handle<StepRepr_RepresentationRelationship> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepRepr_RepresentationRelationship> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::RepresentationRelationship),
             R"#(None)#" )
        .def("ShapeAspect",
             (opencascade::handle<StepRepr_ShapeAspect> (StepAP214_AutoDesignReferencingItem::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepAP214_AutoDesignReferencingItem::*)() const>(&StepAP214_AutoDesignReferencingItem::ShapeAspect),
             R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignNominalDateAssignment ,opencascade::handle<StepAP214_AutoDesignNominalDateAssignment>  , StepBasic_DateAssignment >>(m.attr("StepAP214_AutoDesignNominalDateAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignNominalDateAssignment::*)( const opencascade::handle<StepBasic_Date> & ,  const opencascade::handle<StepBasic_DateRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> &  ) ) static_cast<void (StepAP214_AutoDesignNominalDateAssignment::*)( const opencascade::handle<StepBasic_Date> & ,  const opencascade::handle<StepBasic_DateRole> & ,  const opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> &  ) >(&StepAP214_AutoDesignNominalDateAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedDate"),  py::arg("aRole"),  py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignNominalDateAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> &  ) ) static_cast<void (StepAP214_AutoDesignNominalDateAssignment::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> &  ) >(&StepAP214_AutoDesignNominalDateAssignment::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> (StepAP214_AutoDesignNominalDateAssignment::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> (StepAP214_AutoDesignNominalDateAssignment::*)() const>(&StepAP214_AutoDesignNominalDateAssignment::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_AutoDesignDatedItem (StepAP214_AutoDesignNominalDateAssignment::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignDatedItem (StepAP214_AutoDesignNominalDateAssignment::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignNominalDateAssignment::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignNominalDateAssignment::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignNominalDateAssignment::*)() const>(&StepAP214_AutoDesignNominalDateAssignment::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignNominalDateAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignNominalDateAssignment::*)() const>(&StepAP214_AutoDesignNominalDateAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignNominalDateAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignNominalDateAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_AutoDesignPresentedItem ,opencascade::handle<StepAP214_AutoDesignPresentedItem>  , StepVisual_PresentedItem >>(m.attr("StepAP214_AutoDesignPresentedItem"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_AutoDesignPresentedItem::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignPresentedItemSelect> &  ) ) static_cast<void (StepAP214_AutoDesignPresentedItem::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignPresentedItemSelect> &  ) >(&StepAP214_AutoDesignPresentedItem::Init),
             R"#(None)#"  , py::arg("aItems"))
        .def("SetItems",
             (void (StepAP214_AutoDesignPresentedItem::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignPresentedItemSelect> &  ) ) static_cast<void (StepAP214_AutoDesignPresentedItem::*)( const opencascade::handle<StepAP214_HArray1OfAutoDesignPresentedItemSelect> &  ) >(&StepAP214_AutoDesignPresentedItem::SetItems),
             R"#(None)#"  , py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP214_HArray1OfAutoDesignPresentedItemSelect> (StepAP214_AutoDesignPresentedItem::*)() const) static_cast<opencascade::handle<StepAP214_HArray1OfAutoDesignPresentedItemSelect> (StepAP214_AutoDesignPresentedItem::*)() const>(&StepAP214_AutoDesignPresentedItem::Items),
             R"#(None)#" )
        .def("ItemsValue",
             (StepAP214_AutoDesignPresentedItemSelect (StepAP214_AutoDesignPresentedItem::*)( const Standard_Integer  ) const) static_cast<StepAP214_AutoDesignPresentedItemSelect (StepAP214_AutoDesignPresentedItem::*)( const Standard_Integer  ) const>(&StepAP214_AutoDesignPresentedItem::ItemsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbItems",
             (Standard_Integer (StepAP214_AutoDesignPresentedItem::*)() const) static_cast<Standard_Integer (StepAP214_AutoDesignPresentedItem::*)() const>(&StepAP214_AutoDesignPresentedItem::NbItems),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignPresentedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignPresentedItem::*)() const>(&StepAP214_AutoDesignPresentedItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_AutoDesignPresentedItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_AutoDesignPresentedItem::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_ExternallyDefinedClass ,opencascade::handle<StepAP214_ExternallyDefinedClass>  , StepAP214_Class >>(m.attr("StepAP214_ExternallyDefinedClass"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepAP214_ExternallyDefinedClass::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const StepBasic_SourceItem & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) ) static_cast<void (StepAP214_ExternallyDefinedClass::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const StepBasic_SourceItem & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) >(&StepAP214_ExternallyDefinedClass::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aGroup_Name"),  py::arg("hasGroup_Description"),  py::arg("aGroup_Description"),  py::arg("aExternallyDefinedItem_ItemId"),  py::arg("aExternallyDefinedItem_Source"))
        .def("ExternallyDefinedItem",
             (opencascade::handle<StepBasic_ExternallyDefinedItem> (StepAP214_ExternallyDefinedClass::*)() const) static_cast<opencascade::handle<StepBasic_ExternallyDefinedItem> (StepAP214_ExternallyDefinedClass::*)() const>(&StepAP214_ExternallyDefinedClass::ExternallyDefinedItem),
             R"#(Returns data for supertype ExternallyDefinedItem)#" )
        .def("SetExternallyDefinedItem",
             (void (StepAP214_ExternallyDefinedClass::*)( const opencascade::handle<StepBasic_ExternallyDefinedItem> &  ) ) static_cast<void (StepAP214_ExternallyDefinedClass::*)( const opencascade::handle<StepBasic_ExternallyDefinedItem> &  ) >(&StepAP214_ExternallyDefinedClass::SetExternallyDefinedItem),
             R"#(Set data for supertype ExternallyDefinedItem)#"  , py::arg("ExternallyDefinedItem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_ExternallyDefinedClass::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_ExternallyDefinedClass::*)() const>(&StepAP214_ExternallyDefinedClass::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_ExternallyDefinedClass::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_ExternallyDefinedClass::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepAP214_HArray1OfDocumentReferenceItem ,std::unique_ptr<StepAP214_HArray1OfDocumentReferenceItem>  >>(m.attr("StepAP214_HArray1OfDocumentReferenceItem"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP214_DocumentReferenceItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP214_DocumentReferenceItem> & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepAP214_Array1OfDocumentReferenceItem & (StepAP214_HArray1OfDocumentReferenceItem::*)() const) static_cast<const StepAP214_Array1OfDocumentReferenceItem & (StepAP214_HArray1OfDocumentReferenceItem::*)() const>(&StepAP214_HArray1OfDocumentReferenceItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP214_Array1OfDocumentReferenceItem & (StepAP214_HArray1OfDocumentReferenceItem::*)() ) static_cast<StepAP214_Array1OfDocumentReferenceItem & (StepAP214_HArray1OfDocumentReferenceItem::*)() >(&StepAP214_HArray1OfDocumentReferenceItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfDocumentReferenceItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP214_HArray1OfDocumentReferenceItem::*)() const>(&StepAP214_HArray1OfDocumentReferenceItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP214_HArray1OfDocumentReferenceItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP214_HArray1OfDocumentReferenceItem::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/StepAP214_Array1OfAutoDesignDatedItem.hxx
// ./opencascade/StepAP214_AutoDesignGroupedItem.hxx
// ./opencascade/StepAP214_AppliedSecurityClassificationAssignment.hxx
// ./opencascade/StepAP214_DateItem.hxx
// ./opencascade/StepAP214_Array1OfPersonAndOrganizationItem.hxx
// ./opencascade/StepAP214_AppliedDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_Array1OfDocumentReferenceItem.hxx
// ./opencascade/StepAP214_AutoDesignGroupAssignment.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignDateAndTimeItem.hxx
// ./opencascade/StepAP214_Array1OfOrganizationItem.hxx
// ./opencascade/StepAP214_HArray1OfPersonAndOrganizationItem.hxx
// ./opencascade/StepAP214_HArray1OfDateItem.hxx
// ./opencascade/StepAP214_Protocol.hxx
// ./opencascade/StepAP214_ApprovalItem.hxx
// ./opencascade/StepAP214_Array1OfGroupItem.hxx
// ./opencascade/StepAP214.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignReferencingItem.hxx
// ./opencascade/StepAP214_PresentedItemSelect.hxx
// ./opencascade/StepAP214_AutoDesignApprovalAssignment.hxx
// ./opencascade/StepAP214_RepItemGroup.hxx
// ./opencascade/StepAP214_HArray1OfOrganizationItem.hxx
// ./opencascade/StepAP214_AutoDesignNominalDateAssignment.hxx
// ./opencascade/StepAP214_OrganizationItem.hxx
// ./opencascade/StepAP214_ExternallyDefinedGeneralProperty.hxx
// ./opencascade/StepAP214_Array1OfApprovalItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignDateAndPersonItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignReferencingItem.hxx
// ./opencascade/StepAP214_Array1OfDateAndTimeItem.hxx
// ./opencascade/StepAP214_AutoDesignDateAndPersonAssignment.hxx
// ./opencascade/StepAP214_AutoDesignPresentedItemSelect.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignDatedItem.hxx
// ./opencascade/StepAP214_AutoDesignDocumentReference.hxx
// ./opencascade/StepAP214_AppliedGroupAssignment.hxx
// ./opencascade/StepAP214_AutoDesignOrganizationAssignment.hxx
// ./opencascade/StepAP214_PersonAndOrganizationItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignPresentedItemSelect.hxx
// ./opencascade/StepAP214_Array1OfSecurityClassificationItem.hxx
// ./opencascade/StepAP214_ExternallyDefinedClass.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignDateAndTimeItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignGeneralOrgItem.hxx
// ./opencascade/StepAP214_HArray1OfDateAndTimeItem.hxx
// ./opencascade/StepAP214_AutoDesignGeneralOrgItem.hxx
// ./opencascade/StepAP214_Array1OfDateItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignGroupedItem.hxx
// ./opencascade/StepAP214_AppliedDocumentReference.hxx
// ./opencascade/StepAP214_HArray1OfGroupItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignGeneralOrgItem.hxx
// ./opencascade/StepAP214_AutoDesignOrganizationItem.hxx
// ./opencascade/StepAP214_AutoDesignDateAndTimeItem.hxx
// ./opencascade/StepAP214_GroupItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignPresentedItemSelect.hxx
// ./opencascade/StepAP214_AutoDesignActualDateAssignment.hxx
// ./opencascade/StepAP214_HArray1OfApprovalItem.hxx
// ./opencascade/StepAP214_DateAndTimeItem.hxx
// ./opencascade/StepAP214_AppliedPresentedItem.hxx
// ./opencascade/StepAP214_AutoDesignPresentedItem.hxx
// ./opencascade/StepAP214_ExternalIdentificationItem.hxx
// ./opencascade/StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx
// ./opencascade/StepAP214_AutoDesignActualDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_Array1OfPresentedItemSelect.hxx
// ./opencascade/StepAP214_AppliedExternalIdentificationAssignment.hxx
// ./opencascade/StepAP214_SecurityClassificationItem.hxx
// ./opencascade/StepAP214_HArray1OfExternalIdentificationItem.hxx
// ./opencascade/StepAP214_AutoDesignReferencingItem.hxx
// ./opencascade/StepAP214_AppliedDateAssignment.hxx
// ./opencascade/StepAP214_AppliedApprovalAssignment.hxx
// ./opencascade/StepAP214_AutoDesignSecurityClassificationAssignment.hxx
// ./opencascade/StepAP214_Array1OfExternalIdentificationItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignGroupedItem.hxx
// ./opencascade/StepAP214_DocumentReferenceItem.hxx
// ./opencascade/StepAP214_AutoDesignDatedItem.hxx
// ./opencascade/StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_HArray1OfSecurityClassificationItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignDateAndPersonItem.hxx
// ./opencascade/StepAP214_HArray1OfDocumentReferenceItem.hxx
// ./opencascade/StepAP214_HArray1OfPresentedItemSelect.hxx
// ./opencascade/StepAP214_Class.hxx
// ./opencascade/StepAP214_AppliedPersonAndOrganizationAssignment.hxx
// ./opencascade/StepAP214_AutoDesignDateAndPersonItem.hxx
// ./opencascade/StepAP214_AppliedOrganizationAssignment.hxx

// operators

// register typdefs
// ./opencascade/StepAP214_Array1OfAutoDesignDatedItem.hxx
    register_template_NCollection_Array1<StepAP214_AutoDesignDatedItem>(m,"StepAP214_Array1OfAutoDesignDatedItem");  
// ./opencascade/StepAP214_AutoDesignGroupedItem.hxx
// ./opencascade/StepAP214_AppliedSecurityClassificationAssignment.hxx
// ./opencascade/StepAP214_DateItem.hxx
// ./opencascade/StepAP214_Array1OfPersonAndOrganizationItem.hxx
    register_template_NCollection_Array1<StepAP214_PersonAndOrganizationItem>(m,"StepAP214_Array1OfPersonAndOrganizationItem");  
// ./opencascade/StepAP214_AppliedDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_Array1OfDocumentReferenceItem.hxx
    register_template_NCollection_Array1<StepAP214_DocumentReferenceItem>(m,"StepAP214_Array1OfDocumentReferenceItem");  
// ./opencascade/StepAP214_AutoDesignGroupAssignment.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignDateAndTimeItem.hxx
    register_template_NCollection_Array1<StepAP214_AutoDesignDateAndTimeItem>(m,"StepAP214_Array1OfAutoDesignDateAndTimeItem");  
// ./opencascade/StepAP214_Array1OfOrganizationItem.hxx
    register_template_NCollection_Array1<StepAP214_OrganizationItem>(m,"StepAP214_Array1OfOrganizationItem");  
// ./opencascade/StepAP214_HArray1OfPersonAndOrganizationItem.hxx
// ./opencascade/StepAP214_HArray1OfDateItem.hxx
// ./opencascade/StepAP214_Protocol.hxx
// ./opencascade/StepAP214_ApprovalItem.hxx
// ./opencascade/StepAP214_Array1OfGroupItem.hxx
    register_template_NCollection_Array1<StepAP214_GroupItem>(m,"StepAP214_Array1OfGroupItem");  
// ./opencascade/StepAP214.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignReferencingItem.hxx
    register_template_NCollection_Array1<StepAP214_AutoDesignReferencingItem>(m,"StepAP214_Array1OfAutoDesignReferencingItem");  
// ./opencascade/StepAP214_PresentedItemSelect.hxx
// ./opencascade/StepAP214_AutoDesignApprovalAssignment.hxx
// ./opencascade/StepAP214_RepItemGroup.hxx
// ./opencascade/StepAP214_HArray1OfOrganizationItem.hxx
// ./opencascade/StepAP214_AutoDesignNominalDateAssignment.hxx
// ./opencascade/StepAP214_OrganizationItem.hxx
// ./opencascade/StepAP214_ExternallyDefinedGeneralProperty.hxx
// ./opencascade/StepAP214_Array1OfApprovalItem.hxx
    register_template_NCollection_Array1<StepAP214_ApprovalItem>(m,"StepAP214_Array1OfApprovalItem");  
// ./opencascade/StepAP214_HArray1OfAutoDesignDateAndPersonItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignReferencingItem.hxx
// ./opencascade/StepAP214_Array1OfDateAndTimeItem.hxx
    register_template_NCollection_Array1<StepAP214_DateAndTimeItem>(m,"StepAP214_Array1OfDateAndTimeItem");  
// ./opencascade/StepAP214_AutoDesignDateAndPersonAssignment.hxx
// ./opencascade/StepAP214_AutoDesignPresentedItemSelect.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignDatedItem.hxx
// ./opencascade/StepAP214_AutoDesignDocumentReference.hxx
// ./opencascade/StepAP214_AppliedGroupAssignment.hxx
// ./opencascade/StepAP214_AutoDesignOrganizationAssignment.hxx
// ./opencascade/StepAP214_PersonAndOrganizationItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignPresentedItemSelect.hxx
// ./opencascade/StepAP214_Array1OfSecurityClassificationItem.hxx
    register_template_NCollection_Array1<StepAP214_SecurityClassificationItem>(m,"StepAP214_Array1OfSecurityClassificationItem");  
// ./opencascade/StepAP214_ExternallyDefinedClass.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignDateAndTimeItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignGeneralOrgItem.hxx
// ./opencascade/StepAP214_HArray1OfDateAndTimeItem.hxx
// ./opencascade/StepAP214_AutoDesignGeneralOrgItem.hxx
// ./opencascade/StepAP214_Array1OfDateItem.hxx
    register_template_NCollection_Array1<StepAP214_DateItem>(m,"StepAP214_Array1OfDateItem");  
// ./opencascade/StepAP214_HArray1OfAutoDesignGroupedItem.hxx
// ./opencascade/StepAP214_AppliedDocumentReference.hxx
// ./opencascade/StepAP214_HArray1OfGroupItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignGeneralOrgItem.hxx
    register_template_NCollection_Array1<StepAP214_AutoDesignGeneralOrgItem>(m,"StepAP214_Array1OfAutoDesignGeneralOrgItem");  
// ./opencascade/StepAP214_AutoDesignOrganizationItem.hxx
// ./opencascade/StepAP214_AutoDesignDateAndTimeItem.hxx
// ./opencascade/StepAP214_GroupItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignPresentedItemSelect.hxx
    register_template_NCollection_Array1<StepAP214_AutoDesignPresentedItemSelect>(m,"StepAP214_Array1OfAutoDesignPresentedItemSelect");  
// ./opencascade/StepAP214_AutoDesignActualDateAssignment.hxx
// ./opencascade/StepAP214_HArray1OfApprovalItem.hxx
// ./opencascade/StepAP214_DateAndTimeItem.hxx
// ./opencascade/StepAP214_AppliedPresentedItem.hxx
// ./opencascade/StepAP214_AutoDesignPresentedItem.hxx
// ./opencascade/StepAP214_ExternalIdentificationItem.hxx
// ./opencascade/StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx
// ./opencascade/StepAP214_AutoDesignActualDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_Array1OfPresentedItemSelect.hxx
    register_template_NCollection_Array1<StepAP214_PresentedItemSelect>(m,"StepAP214_Array1OfPresentedItemSelect");  
// ./opencascade/StepAP214_AppliedExternalIdentificationAssignment.hxx
// ./opencascade/StepAP214_SecurityClassificationItem.hxx
// ./opencascade/StepAP214_HArray1OfExternalIdentificationItem.hxx
// ./opencascade/StepAP214_AutoDesignReferencingItem.hxx
// ./opencascade/StepAP214_AppliedDateAssignment.hxx
// ./opencascade/StepAP214_AppliedApprovalAssignment.hxx
// ./opencascade/StepAP214_AutoDesignSecurityClassificationAssignment.hxx
// ./opencascade/StepAP214_Array1OfExternalIdentificationItem.hxx
    register_template_NCollection_Array1<StepAP214_ExternalIdentificationItem>(m,"StepAP214_Array1OfExternalIdentificationItem");  
// ./opencascade/StepAP214_Array1OfAutoDesignGroupedItem.hxx
    register_template_NCollection_Array1<StepAP214_AutoDesignGroupedItem>(m,"StepAP214_Array1OfAutoDesignGroupedItem");  
// ./opencascade/StepAP214_DocumentReferenceItem.hxx
// ./opencascade/StepAP214_AutoDesignDatedItem.hxx
// ./opencascade/StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_HArray1OfSecurityClassificationItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignDateAndPersonItem.hxx
    register_template_NCollection_Array1<StepAP214_AutoDesignDateAndPersonItem>(m,"StepAP214_Array1OfAutoDesignDateAndPersonItem");  
// ./opencascade/StepAP214_HArray1OfDocumentReferenceItem.hxx
// ./opencascade/StepAP214_HArray1OfPresentedItemSelect.hxx
// ./opencascade/StepAP214_Class.hxx
// ./opencascade/StepAP214_AppliedPersonAndOrganizationAssignment.hxx
// ./opencascade/StepAP214_AutoDesignDateAndPersonItem.hxx
// ./opencascade/StepAP214_AppliedOrganizationAssignment.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
