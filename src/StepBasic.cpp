
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ApprovalRole.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionReference.hxx>
#include <StepBasic_ProductDefinitionReferenceWithLocalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ActionMethod.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Product.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ContractType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_VolumeUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ActionAssignment.hxx>
#include <StepBasic_ActionRequestAssignment.hxx>
#include <StepBasic_ApprovalAssignment.hxx>
#include <StepBasic_ApprovalDateTime.hxx>
#include <StepBasic_CertificationAssignment.hxx>
#include <StepBasic_ContractAssignment.hxx>
#include <StepBasic_DocumentReference.hxx>
#include <StepBasic_EffectivityAssignment.hxx>
#include <StepBasic_GroupAssignment.hxx>
#include <StepBasic_NameAssignment.hxx>
#include <StepBasic_SecurityClassificationAssignment.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_Person.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ActionMethod.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_CertificationType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_LocalTime.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_TimeUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_Certification.hxx>
#include <StepBasic_ThermodynamicTemperatureUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_AreaUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_ApprovalStatus.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_LocalTime.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepBasic_Approval.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_SolidAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_OrganizationRole.hxx>
#include <StepBasic_Action.hxx>
#include <StepBasic_VolumeUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepBasic_Group.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_Approval.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_DocumentType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_TimeUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_CoordinatedUniversalTimeOffset.hxx>
#include <StepBasic_Contract.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_DocumentType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MassUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Group.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Product.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ObjectRole.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_Person.hxx>
#include <StepBasic_Organization.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_SolidAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_RatioUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_Effectivity.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepBasic_DerivedUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_RatioUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_MassUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_SecurityClassificationLevel.hxx>
#include <StepBasic_AreaUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>

// module includes
#include <StepBasic_Action.hxx>
#include <StepBasic_ActionAssignment.hxx>
#include <StepBasic_ActionMethod.hxx>
#include <StepBasic_ActionRequestAssignment.hxx>
#include <StepBasic_ActionRequestSolution.hxx>
#include <StepBasic_Address.hxx>
#include <StepBasic_AheadOrBehind.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_ApplicationContextElement.hxx>
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ApprovalAssignment.hxx>
#include <StepBasic_ApprovalDateTime.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepBasic_ApprovalRelationship.hxx>
#include <StepBasic_ApprovalRole.hxx>
#include <StepBasic_ApprovalStatus.hxx>
#include <StepBasic_AreaUnit.hxx>
#include <StepBasic_Array1OfApproval.hxx>
#include <StepBasic_Array1OfDerivedUnitElement.hxx>
#include <StepBasic_Array1OfDocument.hxx>
#include <StepBasic_Array1OfNamedUnit.hxx>
#include <StepBasic_Array1OfOrganization.hxx>
#include <StepBasic_Array1OfPerson.hxx>
#include <StepBasic_Array1OfProduct.hxx>
#include <StepBasic_Array1OfProductContext.hxx>
#include <StepBasic_Array1OfProductDefinition.hxx>
#include <StepBasic_Array1OfUncertaintyMeasureWithUnit.hxx>
#include <StepBasic_CalendarDate.hxx>
#include <StepBasic_Certification.hxx>
#include <StepBasic_CertificationAssignment.hxx>
#include <StepBasic_CertificationType.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <StepBasic_Contract.hxx>
#include <StepBasic_ContractAssignment.hxx>
#include <StepBasic_ContractType.hxx>
#include <StepBasic_ConversionBasedUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndAreaUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndLengthUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndMassUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndPlaneAngleUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndRatioUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndSolidAngleUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndTimeUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndVolumeUnit.hxx>
#include <StepBasic_CoordinatedUniversalTimeOffset.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateAndTimeAssignment.hxx>
#include <StepBasic_DateAssignment.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_DateTimeSelect.hxx>
#include <StepBasic_DerivedUnit.hxx>
#include <StepBasic_DerivedUnitElement.hxx>
#include <StepBasic_DesignContext.hxx>
#include <StepBasic_DigitalDocument.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepBasic_DocumentProductAssociation.hxx>
#include <StepBasic_DocumentProductEquivalence.hxx>
#include <StepBasic_DocumentReference.hxx>
#include <StepBasic_DocumentRelationship.hxx>
#include <StepBasic_DocumentRepresentationType.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepBasic_DocumentUsageConstraint.hxx>
#include <StepBasic_Effectivity.hxx>
#include <StepBasic_EffectivityAssignment.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepBasic_ExternalIdentificationAssignment.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_GeneralProperty.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_GroupAssignment.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepBasic_HArray1OfApproval.hxx>
#include <StepBasic_HArray1OfDerivedUnitElement.hxx>
#include <StepBasic_HArray1OfDocument.hxx>
#include <StepBasic_HArray1OfNamedUnit.hxx>
#include <StepBasic_HArray1OfOrganization.hxx>
#include <StepBasic_HArray1OfPerson.hxx>
#include <StepBasic_HArray1OfProduct.hxx>
#include <StepBasic_HArray1OfProductContext.hxx>
#include <StepBasic_HArray1OfProductDefinition.hxx>
#include <StepBasic_HArray1OfUncertaintyMeasureWithUnit.hxx>
#include <StepBasic_IdentificationAssignment.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepBasic_LocalTime.hxx>
#include <StepBasic_MassMeasureWithUnit.hxx>
#include <StepBasic_MassUnit.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_MechanicalContext.hxx>
#include <StepBasic_NameAssignment.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepBasic_ObjectRole.hxx>
#include <StepBasic_OrdinalDate.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_OrganizationalAddress.hxx>
#include <StepBasic_OrganizationAssignment.hxx>
#include <StepBasic_OrganizationRole.hxx>
#include <StepBasic_Person.hxx>
#include <StepBasic_PersonalAddress.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationAssignment.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_PersonOrganizationSelect.hxx>
#include <StepBasic_PhysicallyModeledProductDefinition.hxx>
#include <StepBasic_PlaneAngleMeasureWithUnit.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepBasic_ProductCategoryRelationship.hxx>
#include <StepBasic_ProductConceptContext.hxx>
#include <StepBasic_ProductContext.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_ProductDefinitionEffectivity.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionFormationRelationship.hxx>
#include <StepBasic_ProductDefinitionFormationWithSpecifiedSource.hxx>
#include <StepBasic_ProductDefinitionOrReference.hxx>
#include <StepBasic_ProductDefinitionReference.hxx>
#include <StepBasic_ProductDefinitionReferenceWithLocalRepresentation.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepBasic_ProductDefinitionWithAssociatedDocuments.hxx>
#include <StepBasic_ProductOrFormationOrDefinition.hxx>
#include <StepBasic_ProductRelatedProductCategory.hxx>
#include <StepBasic_ProductType.hxx>
#include <StepBasic_RatioMeasureWithUnit.hxx>
#include <StepBasic_RatioUnit.hxx>
#include <StepBasic_RoleAssociation.hxx>
#include <StepBasic_RoleSelect.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_SecurityClassificationAssignment.hxx>
#include <StepBasic_SecurityClassificationLevel.hxx>
#include <StepBasic_SiPrefix.hxx>
#include <StepBasic_SiUnit.hxx>
#include <StepBasic_SiUnitAndAreaUnit.hxx>
#include <StepBasic_SiUnitAndLengthUnit.hxx>
#include <StepBasic_SiUnitAndMassUnit.hxx>
#include <StepBasic_SiUnitAndPlaneAngleUnit.hxx>
#include <StepBasic_SiUnitAndRatioUnit.hxx>
#include <StepBasic_SiUnitAndSolidAngleUnit.hxx>
#include <StepBasic_SiUnitAndThermodynamicTemperatureUnit.hxx>
#include <StepBasic_SiUnitAndTimeUnit.hxx>
#include <StepBasic_SiUnitAndVolumeUnit.hxx>
#include <StepBasic_SiUnitName.hxx>
#include <StepBasic_SizeMember.hxx>
#include <StepBasic_SizeSelect.hxx>
#include <StepBasic_SolidAngleMeasureWithUnit.hxx>
#include <StepBasic_SolidAngleUnit.hxx>
#include <StepBasic_Source.hxx>
#include <StepBasic_SourceItem.hxx>
#include <StepBasic_ThermodynamicTemperatureUnit.hxx>
#include <StepBasic_TimeMeasureWithUnit.hxx>
#include <StepBasic_TimeUnit.hxx>
#include <StepBasic_UncertaintyMeasureWithUnit.hxx>
#include <StepBasic_Unit.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepBasic_VolumeUnit.hxx>
#include <StepBasic_WeekOfYearAndDayDate.hxx>

// template related includes
// ./opencascade/StepBasic_Array1OfUncertaintyMeasureWithUnit.hxx
#include "NCollection.hxx"
// ./opencascade/StepBasic_Array1OfProductDefinition.hxx
#include "NCollection.hxx"
// ./opencascade/StepBasic_Array1OfNamedUnit.hxx
#include "NCollection.hxx"
// ./opencascade/StepBasic_Array1OfPerson.hxx
#include "NCollection.hxx"
// ./opencascade/StepBasic_Array1OfProduct.hxx
#include "NCollection.hxx"
// ./opencascade/StepBasic_Array1OfDerivedUnitElement.hxx
#include "NCollection.hxx"
// ./opencascade/StepBasic_Array1OfDocument.hxx
#include "NCollection.hxx"
// ./opencascade/StepBasic_Array1OfProductContext.hxx
#include "NCollection.hxx"
// ./opencascade/StepBasic_Array1OfOrganization.hxx
#include "NCollection.hxx"
// ./opencascade/StepBasic_Array1OfApproval.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepBasic(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepBasic"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepBasic_ApprovalPersonOrganization ,opencascade::handle<StepBasic_ApprovalPersonOrganization>  , Standard_Transient >>(m.attr("StepBasic_ApprovalPersonOrganization"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ApprovalPersonOrganization::*)( const StepBasic_PersonOrganizationSelect & ,  const opencascade::handle<StepBasic_Approval> & ,  const opencascade::handle<StepBasic_ApprovalRole> &  ) ) static_cast<void (StepBasic_ApprovalPersonOrganization::*)( const StepBasic_PersonOrganizationSelect & ,  const opencascade::handle<StepBasic_Approval> & ,  const opencascade::handle<StepBasic_ApprovalRole> &  ) >(&StepBasic_ApprovalPersonOrganization::Init),
             R"#(None)#"  , py::arg("aPersonOrganization"),  py::arg("aAuthorizedApproval"),  py::arg("aRole"))
        .def("SetPersonOrganization",
             (void (StepBasic_ApprovalPersonOrganization::*)( const StepBasic_PersonOrganizationSelect &  ) ) static_cast<void (StepBasic_ApprovalPersonOrganization::*)( const StepBasic_PersonOrganizationSelect &  ) >(&StepBasic_ApprovalPersonOrganization::SetPersonOrganization),
             R"#(None)#"  , py::arg("aPersonOrganization"))
        .def("PersonOrganization",
             (StepBasic_PersonOrganizationSelect (StepBasic_ApprovalPersonOrganization::*)() const) static_cast<StepBasic_PersonOrganizationSelect (StepBasic_ApprovalPersonOrganization::*)() const>(&StepBasic_ApprovalPersonOrganization::PersonOrganization),
             R"#(None)#" )
        .def("SetAuthorizedApproval",
             (void (StepBasic_ApprovalPersonOrganization::*)( const opencascade::handle<StepBasic_Approval> &  ) ) static_cast<void (StepBasic_ApprovalPersonOrganization::*)( const opencascade::handle<StepBasic_Approval> &  ) >(&StepBasic_ApprovalPersonOrganization::SetAuthorizedApproval),
             R"#(None)#"  , py::arg("aAuthorizedApproval"))
        .def("AuthorizedApproval",
             (opencascade::handle<StepBasic_Approval> (StepBasic_ApprovalPersonOrganization::*)() const) static_cast<opencascade::handle<StepBasic_Approval> (StepBasic_ApprovalPersonOrganization::*)() const>(&StepBasic_ApprovalPersonOrganization::AuthorizedApproval),
             R"#(None)#" )
        .def("SetRole",
             (void (StepBasic_ApprovalPersonOrganization::*)( const opencascade::handle<StepBasic_ApprovalRole> &  ) ) static_cast<void (StepBasic_ApprovalPersonOrganization::*)( const opencascade::handle<StepBasic_ApprovalRole> &  ) >(&StepBasic_ApprovalPersonOrganization::SetRole),
             R"#(None)#"  , py::arg("aRole"))
        .def("Role",
             (opencascade::handle<StepBasic_ApprovalRole> (StepBasic_ApprovalPersonOrganization::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalRole> (StepBasic_ApprovalPersonOrganization::*)() const>(&StepBasic_ApprovalPersonOrganization::Role),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalPersonOrganization::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalPersonOrganization::*)() const>(&StepBasic_ApprovalPersonOrganization::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalPersonOrganization::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ApprovalPersonOrganization::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SizeMember ,opencascade::handle<StepBasic_SizeMember>  , StepData_SelectReal >>(m.attr("StepBasic_SizeMember"))
        .def(py::init<  >()  )
        .def("HasName",
             (Standard_Boolean (StepBasic_SizeMember::*)() const) static_cast<Standard_Boolean (StepBasic_SizeMember::*)() const>(&StepBasic_SizeMember::HasName),
             R"#(None)#" )
        .def("Name",
             (Standard_CString (StepBasic_SizeMember::*)() const) static_cast<Standard_CString (StepBasic_SizeMember::*)() const>(&StepBasic_SizeMember::Name),
             R"#(None)#" )
        .def("SetName",
             (Standard_Boolean (StepBasic_SizeMember::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (StepBasic_SizeMember::*)( const Standard_CString  ) >(&StepBasic_SizeMember::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SizeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SizeMember::*)() const>(&StepBasic_SizeMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SizeMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SizeMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_HArray1OfProductContext ,std::unique_ptr<StepBasic_HArray1OfProductContext>  >>(m.attr("StepBasic_HArray1OfProductContext"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_ProductContext> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_ProductContext> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepBasic_Array1OfProductContext & (StepBasic_HArray1OfProductContext::*)() const) static_cast<const StepBasic_Array1OfProductContext & (StepBasic_HArray1OfProductContext::*)() const>(&StepBasic_HArray1OfProductContext::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfProductContext & (StepBasic_HArray1OfProductContext::*)() ) static_cast<StepBasic_Array1OfProductContext & (StepBasic_HArray1OfProductContext::*)() >(&StepBasic_HArray1OfProductContext::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProductContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProductContext::*)() const>(&StepBasic_HArray1OfProductContext::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfProductContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfProductContext::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_CharacterizedObject ,opencascade::handle<StepBasic_CharacterizedObject>  , Standard_Transient >>(m.attr("StepBasic_CharacterizedObject"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_CharacterizedObject::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_CharacterizedObject::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_CharacterizedObject::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_CharacterizedObject::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_CharacterizedObject::*)() const>(&StepBasic_CharacterizedObject::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_CharacterizedObject::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_CharacterizedObject::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_CharacterizedObject::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_CharacterizedObject::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_CharacterizedObject::*)() const>(&StepBasic_CharacterizedObject::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_CharacterizedObject::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_CharacterizedObject::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_CharacterizedObject::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_CharacterizedObject::*)() const) static_cast<Standard_Boolean (StepBasic_CharacterizedObject::*)() const>(&StepBasic_CharacterizedObject::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_CharacterizedObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_CharacterizedObject::*)() const>(&StepBasic_CharacterizedObject::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_CharacterizedObject::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_CharacterizedObject::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_HArray1OfPerson ,std::unique_ptr<StepBasic_HArray1OfPerson>  >>(m.attr("StepBasic_HArray1OfPerson"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_Person> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_Person> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepBasic_Array1OfPerson & (StepBasic_HArray1OfPerson::*)() const) static_cast<const StepBasic_Array1OfPerson & (StepBasic_HArray1OfPerson::*)() const>(&StepBasic_HArray1OfPerson::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfPerson & (StepBasic_HArray1OfPerson::*)() ) static_cast<StepBasic_Array1OfPerson & (StepBasic_HArray1OfPerson::*)() >(&StepBasic_HArray1OfPerson::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfPerson::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfPerson::*)() const>(&StepBasic_HArray1OfPerson::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfPerson::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfPerson::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Action ,opencascade::handle<StepBasic_Action>  , Standard_Transient >>(m.attr("StepBasic_Action"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Action::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ActionMethod> &  ) ) static_cast<void (StepBasic_Action::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ActionMethod> &  ) >(&StepBasic_Action::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"),  py::arg("aChosenMethod"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Action::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Action::*)() const>(&StepBasic_Action::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_Action::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Action::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Action::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Action::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Action::*)() const>(&StepBasic_Action::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_Action::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Action::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Action::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_Action::*)() const) static_cast<Standard_Boolean (StepBasic_Action::*)() const>(&StepBasic_Action::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("ChosenMethod",
             (opencascade::handle<StepBasic_ActionMethod> (StepBasic_Action::*)() const) static_cast<opencascade::handle<StepBasic_ActionMethod> (StepBasic_Action::*)() const>(&StepBasic_Action::ChosenMethod),
             R"#(Returns field ChosenMethod)#" )
        .def("SetChosenMethod",
             (void (StepBasic_Action::*)( const opencascade::handle<StepBasic_ActionMethod> &  ) ) static_cast<void (StepBasic_Action::*)( const opencascade::handle<StepBasic_ActionMethod> &  ) >(&StepBasic_Action::SetChosenMethod),
             R"#(Set field ChosenMethod)#"  , py::arg("ChosenMethod"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Action::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Action::*)() const>(&StepBasic_Action::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Action::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Action::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DateRole ,opencascade::handle<StepBasic_DateRole>  , Standard_Transient >>(m.attr("StepBasic_DateRole"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DateRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DateRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DateRole::Init),
             R"#(None)#"  , py::arg("aName"))
        .def("SetName",
             (void (StepBasic_DateRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DateRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DateRole::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DateRole::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DateRole::*)() const>(&StepBasic_DateRole::Name),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DateRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DateRole::*)() const>(&StepBasic_DateRole::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DateRole::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DateRole::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ExternalSource ,opencascade::handle<StepBasic_ExternalSource>  , Standard_Transient >>(m.attr("StepBasic_ExternalSource"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ExternalSource::*)( const StepBasic_SourceItem &  ) ) static_cast<void (StepBasic_ExternalSource::*)( const StepBasic_SourceItem &  ) >(&StepBasic_ExternalSource::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aSourceId"))
        .def("SourceId",
             (StepBasic_SourceItem (StepBasic_ExternalSource::*)() const) static_cast<StepBasic_SourceItem (StepBasic_ExternalSource::*)() const>(&StepBasic_ExternalSource::SourceId),
             R"#(Returns field SourceId)#" )
        .def("SetSourceId",
             (void (StepBasic_ExternalSource::*)( const StepBasic_SourceItem &  ) ) static_cast<void (StepBasic_ExternalSource::*)( const StepBasic_SourceItem &  ) >(&StepBasic_ExternalSource::SetSourceId),
             R"#(Set field SourceId)#"  , py::arg("SourceId"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ExternalSource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ExternalSource::*)() const>(&StepBasic_ExternalSource::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ExternalSource::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ExternalSource::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_HArray1OfOrganization ,std::unique_ptr<StepBasic_HArray1OfOrganization>  >>(m.attr("StepBasic_HArray1OfOrganization"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_Organization> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_Organization> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepBasic_Array1OfOrganization & (StepBasic_HArray1OfOrganization::*)() const) static_cast<const StepBasic_Array1OfOrganization & (StepBasic_HArray1OfOrganization::*)() const>(&StepBasic_HArray1OfOrganization::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfOrganization & (StepBasic_HArray1OfOrganization::*)() ) static_cast<StepBasic_Array1OfOrganization & (StepBasic_HArray1OfOrganization::*)() >(&StepBasic_HArray1OfOrganization::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfOrganization::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfOrganization::*)() const>(&StepBasic_HArray1OfOrganization::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfOrganization::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfOrganization::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Contract ,opencascade::handle<StepBasic_Contract>  , Standard_Transient >>(m.attr("StepBasic_Contract"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Contract::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ContractType> &  ) ) static_cast<void (StepBasic_Contract::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ContractType> &  ) >(&StepBasic_Contract::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("aPurpose"),  py::arg("aKind"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Contract::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Contract::*)() const>(&StepBasic_Contract::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_Contract::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Contract::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Contract::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Purpose",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Contract::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Contract::*)() const>(&StepBasic_Contract::Purpose),
             R"#(Returns field Purpose)#" )
        .def("SetPurpose",
             (void (StepBasic_Contract::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Contract::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Contract::SetPurpose),
             R"#(Set field Purpose)#"  , py::arg("Purpose"))
        .def("Kind",
             (opencascade::handle<StepBasic_ContractType> (StepBasic_Contract::*)() const) static_cast<opencascade::handle<StepBasic_ContractType> (StepBasic_Contract::*)() const>(&StepBasic_Contract::Kind),
             R"#(Returns field Kind)#" )
        .def("SetKind",
             (void (StepBasic_Contract::*)( const opencascade::handle<StepBasic_ContractType> &  ) ) static_cast<void (StepBasic_Contract::*)( const opencascade::handle<StepBasic_ContractType> &  ) >(&StepBasic_Contract::SetKind),
             R"#(Set field Kind)#"  , py::arg("Kind"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Contract::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Contract::*)() const>(&StepBasic_Contract::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Contract::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Contract::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DimensionalExponents ,opencascade::handle<StepBasic_DimensionalExponents>  , Standard_Transient >>(m.attr("StepBasic_DimensionalExponents"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DimensionalExponents::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (StepBasic_DimensionalExponents::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&StepBasic_DimensionalExponents::Init),
             R"#(None)#"  , py::arg("aLengthExponent"),  py::arg("aMassExponent"),  py::arg("aTimeExponent"),  py::arg("aElectricCurrentExponent"),  py::arg("aThermodynamicTemperatureExponent"),  py::arg("aAmountOfSubstanceExponent"),  py::arg("aLuminousIntensityExponent"))
        .def("SetLengthExponent",
             (void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) ) static_cast<void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) >(&StepBasic_DimensionalExponents::SetLengthExponent),
             R"#(None)#"  , py::arg("aLengthExponent"))
        .def("LengthExponent",
             (Standard_Real (StepBasic_DimensionalExponents::*)() const) static_cast<Standard_Real (StepBasic_DimensionalExponents::*)() const>(&StepBasic_DimensionalExponents::LengthExponent),
             R"#(None)#" )
        .def("SetMassExponent",
             (void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) ) static_cast<void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) >(&StepBasic_DimensionalExponents::SetMassExponent),
             R"#(None)#"  , py::arg("aMassExponent"))
        .def("MassExponent",
             (Standard_Real (StepBasic_DimensionalExponents::*)() const) static_cast<Standard_Real (StepBasic_DimensionalExponents::*)() const>(&StepBasic_DimensionalExponents::MassExponent),
             R"#(None)#" )
        .def("SetTimeExponent",
             (void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) ) static_cast<void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) >(&StepBasic_DimensionalExponents::SetTimeExponent),
             R"#(None)#"  , py::arg("aTimeExponent"))
        .def("TimeExponent",
             (Standard_Real (StepBasic_DimensionalExponents::*)() const) static_cast<Standard_Real (StepBasic_DimensionalExponents::*)() const>(&StepBasic_DimensionalExponents::TimeExponent),
             R"#(None)#" )
        .def("SetElectricCurrentExponent",
             (void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) ) static_cast<void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) >(&StepBasic_DimensionalExponents::SetElectricCurrentExponent),
             R"#(None)#"  , py::arg("aElectricCurrentExponent"))
        .def("ElectricCurrentExponent",
             (Standard_Real (StepBasic_DimensionalExponents::*)() const) static_cast<Standard_Real (StepBasic_DimensionalExponents::*)() const>(&StepBasic_DimensionalExponents::ElectricCurrentExponent),
             R"#(None)#" )
        .def("SetThermodynamicTemperatureExponent",
             (void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) ) static_cast<void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) >(&StepBasic_DimensionalExponents::SetThermodynamicTemperatureExponent),
             R"#(None)#"  , py::arg("aThermodynamicTemperatureExponent"))
        .def("ThermodynamicTemperatureExponent",
             (Standard_Real (StepBasic_DimensionalExponents::*)() const) static_cast<Standard_Real (StepBasic_DimensionalExponents::*)() const>(&StepBasic_DimensionalExponents::ThermodynamicTemperatureExponent),
             R"#(None)#" )
        .def("SetAmountOfSubstanceExponent",
             (void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) ) static_cast<void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) >(&StepBasic_DimensionalExponents::SetAmountOfSubstanceExponent),
             R"#(None)#"  , py::arg("aAmountOfSubstanceExponent"))
        .def("AmountOfSubstanceExponent",
             (Standard_Real (StepBasic_DimensionalExponents::*)() const) static_cast<Standard_Real (StepBasic_DimensionalExponents::*)() const>(&StepBasic_DimensionalExponents::AmountOfSubstanceExponent),
             R"#(None)#" )
        .def("SetLuminousIntensityExponent",
             (void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) ) static_cast<void (StepBasic_DimensionalExponents::*)( const Standard_Real  ) >(&StepBasic_DimensionalExponents::SetLuminousIntensityExponent),
             R"#(None)#"  , py::arg("aLuminousIntensityExponent"))
        .def("LuminousIntensityExponent",
             (Standard_Real (StepBasic_DimensionalExponents::*)() const) static_cast<Standard_Real (StepBasic_DimensionalExponents::*)() const>(&StepBasic_DimensionalExponents::LuminousIntensityExponent),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DimensionalExponents::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DimensionalExponents::*)() const>(&StepBasic_DimensionalExponents::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DimensionalExponents::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DimensionalExponents::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_NamedUnit ,opencascade::handle<StepBasic_NamedUnit>  , Standard_Transient >>(m.attr("StepBasic_NamedUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_NamedUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> &  ) ) static_cast<void (StepBasic_NamedUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> &  ) >(&StepBasic_NamedUnit::Init),
             R"#(None)#"  , py::arg("aDimensions"))
        .def("SetDimensions",
             (void (StepBasic_NamedUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> &  ) ) static_cast<void (StepBasic_NamedUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> &  ) >(&StepBasic_NamedUnit::SetDimensions),
             R"#(None)#"  , py::arg("aDimensions"))
        .def("Dimensions",
             (opencascade::handle<StepBasic_DimensionalExponents> (StepBasic_NamedUnit::*)() const) static_cast<opencascade::handle<StepBasic_DimensionalExponents> (StepBasic_NamedUnit::*)() const>(&StepBasic_NamedUnit::Dimensions),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_NamedUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_NamedUnit::*)() const>(&StepBasic_NamedUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_NamedUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_NamedUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DateTimeRole ,opencascade::handle<StepBasic_DateTimeRole>  , Standard_Transient >>(m.attr("StepBasic_DateTimeRole"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DateTimeRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DateTimeRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DateTimeRole::Init),
             R"#(None)#"  , py::arg("aName"))
        .def("SetName",
             (void (StepBasic_DateTimeRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DateTimeRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DateTimeRole::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DateTimeRole::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DateTimeRole::*)() const>(&StepBasic_DateTimeRole::Name),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DateTimeRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DateTimeRole::*)() const>(&StepBasic_DateTimeRole::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DateTimeRole::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DateTimeRole::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_HArray1OfProductDefinition ,std::unique_ptr<StepBasic_HArray1OfProductDefinition>  >>(m.attr("StepBasic_HArray1OfProductDefinition"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_ProductDefinition> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_ProductDefinition> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepBasic_Array1OfProductDefinition & (StepBasic_HArray1OfProductDefinition::*)() const) static_cast<const StepBasic_Array1OfProductDefinition & (StepBasic_HArray1OfProductDefinition::*)() const>(&StepBasic_HArray1OfProductDefinition::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfProductDefinition & (StepBasic_HArray1OfProductDefinition::*)() ) static_cast<StepBasic_Array1OfProductDefinition & (StepBasic_HArray1OfProductDefinition::*)() >(&StepBasic_HArray1OfProductDefinition::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProductDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProductDefinition::*)() const>(&StepBasic_HArray1OfProductDefinition::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfProductDefinition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfProductDefinition::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_PersonOrganizationSelect ,std::unique_ptr<StepBasic_PersonOrganizationSelect>  , StepData_SelectType >>(m.attr("StepBasic_PersonOrganizationSelect"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepBasic_PersonOrganizationSelect::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepBasic_PersonOrganizationSelect::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepBasic_PersonOrganizationSelect::CaseNum),
             R"#(Recognizes a PersonOrganizationSelect Kind Entity that is : 1 -> Person 2 -> Organization 3 -> PersonAndOrganization 0 else)#"  , py::arg("ent"))
        .def("Person",
             (opencascade::handle<StepBasic_Person> (StepBasic_PersonOrganizationSelect::*)() const) static_cast<opencascade::handle<StepBasic_Person> (StepBasic_PersonOrganizationSelect::*)() const>(&StepBasic_PersonOrganizationSelect::Person),
             R"#(returns Value as a Person (Null if another type))#" )
        .def("Organization",
             (opencascade::handle<StepBasic_Organization> (StepBasic_PersonOrganizationSelect::*)() const) static_cast<opencascade::handle<StepBasic_Organization> (StepBasic_PersonOrganizationSelect::*)() const>(&StepBasic_PersonOrganizationSelect::Organization),
             R"#(returns Value as a Organization (Null if another type))#" )
        .def("PersonAndOrganization",
             (opencascade::handle<StepBasic_PersonAndOrganization> (StepBasic_PersonOrganizationSelect::*)() const) static_cast<opencascade::handle<StepBasic_PersonAndOrganization> (StepBasic_PersonOrganizationSelect::*)() const>(&StepBasic_PersonOrganizationSelect::PersonAndOrganization),
             R"#(returns Value as a PersonAndOrganization (Null if another type))#" )
;


    static_cast<py::class_<StepBasic_ActionRequestSolution ,opencascade::handle<StepBasic_ActionRequestSolution>  , Standard_Transient >>(m.attr("StepBasic_ActionRequestSolution"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ActionRequestSolution::*)( const opencascade::handle<StepBasic_ActionMethod> & ,  const opencascade::handle<StepBasic_VersionedActionRequest> &  ) ) static_cast<void (StepBasic_ActionRequestSolution::*)( const opencascade::handle<StepBasic_ActionMethod> & ,  const opencascade::handle<StepBasic_VersionedActionRequest> &  ) >(&StepBasic_ActionRequestSolution::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aMethod"),  py::arg("aRequest"))
        .def("Method",
             (opencascade::handle<StepBasic_ActionMethod> (StepBasic_ActionRequestSolution::*)() const) static_cast<opencascade::handle<StepBasic_ActionMethod> (StepBasic_ActionRequestSolution::*)() const>(&StepBasic_ActionRequestSolution::Method),
             R"#(Returns field Method)#" )
        .def("SetMethod",
             (void (StepBasic_ActionRequestSolution::*)( const opencascade::handle<StepBasic_ActionMethod> &  ) ) static_cast<void (StepBasic_ActionRequestSolution::*)( const opencascade::handle<StepBasic_ActionMethod> &  ) >(&StepBasic_ActionRequestSolution::SetMethod),
             R"#(Set field Method)#"  , py::arg("Method"))
        .def("Request",
             (opencascade::handle<StepBasic_VersionedActionRequest> (StepBasic_ActionRequestSolution::*)() const) static_cast<opencascade::handle<StepBasic_VersionedActionRequest> (StepBasic_ActionRequestSolution::*)() const>(&StepBasic_ActionRequestSolution::Request),
             R"#(Returns field Request)#" )
        .def("SetRequest",
             (void (StepBasic_ActionRequestSolution::*)( const opencascade::handle<StepBasic_VersionedActionRequest> &  ) ) static_cast<void (StepBasic_ActionRequestSolution::*)( const opencascade::handle<StepBasic_VersionedActionRequest> &  ) >(&StepBasic_ActionRequestSolution::SetRequest),
             R"#(Set field Request)#"  , py::arg("Request"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ActionRequestSolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ActionRequestSolution::*)() const>(&StepBasic_ActionRequestSolution::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ActionRequestSolution::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ActionRequestSolution::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Certification ,opencascade::handle<StepBasic_Certification>  , Standard_Transient >>(m.attr("StepBasic_Certification"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Certification::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_CertificationType> &  ) ) static_cast<void (StepBasic_Certification::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_CertificationType> &  ) >(&StepBasic_Certification::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("aPurpose"),  py::arg("aKind"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Certification::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Certification::*)() const>(&StepBasic_Certification::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_Certification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Certification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Certification::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Purpose",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Certification::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Certification::*)() const>(&StepBasic_Certification::Purpose),
             R"#(Returns field Purpose)#" )
        .def("SetPurpose",
             (void (StepBasic_Certification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Certification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Certification::SetPurpose),
             R"#(Set field Purpose)#"  , py::arg("Purpose"))
        .def("Kind",
             (opencascade::handle<StepBasic_CertificationType> (StepBasic_Certification::*)() const) static_cast<opencascade::handle<StepBasic_CertificationType> (StepBasic_Certification::*)() const>(&StepBasic_Certification::Kind),
             R"#(Returns field Kind)#" )
        .def("SetKind",
             (void (StepBasic_Certification::*)( const opencascade::handle<StepBasic_CertificationType> &  ) ) static_cast<void (StepBasic_Certification::*)( const opencascade::handle<StepBasic_CertificationType> &  ) >(&StepBasic_Certification::SetKind),
             R"#(Set field Kind)#"  , py::arg("Kind"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Certification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Certification::*)() const>(&StepBasic_Certification::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Certification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Certification::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Effectivity ,opencascade::handle<StepBasic_Effectivity>  , Standard_Transient >>(m.attr("StepBasic_Effectivity"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Effectivity::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Effectivity::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Effectivity::Init),
             R"#(None)#"  , py::arg("aid"))
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Effectivity::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Effectivity::*)() const>(&StepBasic_Effectivity::Id),
             R"#(None)#" )
        .def("SetId",
             (void (StepBasic_Effectivity::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Effectivity::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Effectivity::SetId),
             R"#(None)#"  , py::arg("aid"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Effectivity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Effectivity::*)() const>(&StepBasic_Effectivity::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Effectivity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Effectivity::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DateTimeSelect ,std::unique_ptr<StepBasic_DateTimeSelect>  , StepData_SelectType >>(m.attr("StepBasic_DateTimeSelect"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepBasic_DateTimeSelect::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepBasic_DateTimeSelect::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepBasic_DateTimeSelect::CaseNum),
             R"#(Recognizes a DateTimeSelect Kind Entity that is : 1 -> Date 2 -> LocalTime 3 -> DateAndTime 0 else)#"  , py::arg("ent"))
        .def("Date",
             (opencascade::handle<StepBasic_Date> (StepBasic_DateTimeSelect::*)() const) static_cast<opencascade::handle<StepBasic_Date> (StepBasic_DateTimeSelect::*)() const>(&StepBasic_DateTimeSelect::Date),
             R"#(returns Value as a Date (Null if another type))#" )
        .def("LocalTime",
             (opencascade::handle<StepBasic_LocalTime> (StepBasic_DateTimeSelect::*)() const) static_cast<opencascade::handle<StepBasic_LocalTime> (StepBasic_DateTimeSelect::*)() const>(&StepBasic_DateTimeSelect::LocalTime),
             R"#(returns Value as a LocalTime (Null if another type))#" )
        .def("DateAndTime",
             (opencascade::handle<StepBasic_DateAndTime> (StepBasic_DateTimeSelect::*)() const) static_cast<opencascade::handle<StepBasic_DateAndTime> (StepBasic_DateTimeSelect::*)() const>(&StepBasic_DateTimeSelect::DateAndTime),
             R"#(returns Value as a DateAndTime (Null if another type))#" )
;


    static_cast<py::class_<StepBasic_DocumentType ,opencascade::handle<StepBasic_DocumentType>  , Standard_Transient >>(m.attr("StepBasic_DocumentType"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DocumentType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentType::Init),
             R"#(None)#"  , py::arg("apdt"))
        .def("ProductDataType",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentType::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentType::*)() const>(&StepBasic_DocumentType::ProductDataType),
             R"#(None)#" )
        .def("SetProductDataType",
             (void (StepBasic_DocumentType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentType::SetProductDataType),
             R"#(None)#"  , py::arg("apdt"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentType::*)() const>(&StepBasic_DocumentType::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentType::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DocumentType::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_CertificationAssignment ,opencascade::handle<StepBasic_CertificationAssignment>  , Standard_Transient >>(m.attr("StepBasic_CertificationAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_CertificationAssignment::*)( const opencascade::handle<StepBasic_Certification> &  ) ) static_cast<void (StepBasic_CertificationAssignment::*)( const opencascade::handle<StepBasic_Certification> &  ) >(&StepBasic_CertificationAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aAssignedCertification"))
        .def("AssignedCertification",
             (opencascade::handle<StepBasic_Certification> (StepBasic_CertificationAssignment::*)() const) static_cast<opencascade::handle<StepBasic_Certification> (StepBasic_CertificationAssignment::*)() const>(&StepBasic_CertificationAssignment::AssignedCertification),
             R"#(Returns field AssignedCertification)#" )
        .def("SetAssignedCertification",
             (void (StepBasic_CertificationAssignment::*)( const opencascade::handle<StepBasic_Certification> &  ) ) static_cast<void (StepBasic_CertificationAssignment::*)( const opencascade::handle<StepBasic_Certification> &  ) >(&StepBasic_CertificationAssignment::SetAssignedCertification),
             R"#(Set field AssignedCertification)#"  , py::arg("AssignedCertification"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_CertificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_CertificationAssignment::*)() const>(&StepBasic_CertificationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_CertificationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_CertificationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ExternallyDefinedItem ,opencascade::handle<StepBasic_ExternallyDefinedItem>  , Standard_Transient >>(m.attr("StepBasic_ExternallyDefinedItem"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ExternallyDefinedItem::*)( const StepBasic_SourceItem & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) ) static_cast<void (StepBasic_ExternallyDefinedItem::*)( const StepBasic_SourceItem & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) >(&StepBasic_ExternallyDefinedItem::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aItemId"),  py::arg("aSource"))
        .def("ItemId",
             (StepBasic_SourceItem (StepBasic_ExternallyDefinedItem::*)() const) static_cast<StepBasic_SourceItem (StepBasic_ExternallyDefinedItem::*)() const>(&StepBasic_ExternallyDefinedItem::ItemId),
             R"#(Returns field ItemId)#" )
        .def("SetItemId",
             (void (StepBasic_ExternallyDefinedItem::*)( const StepBasic_SourceItem &  ) ) static_cast<void (StepBasic_ExternallyDefinedItem::*)( const StepBasic_SourceItem &  ) >(&StepBasic_ExternallyDefinedItem::SetItemId),
             R"#(Set field ItemId)#"  , py::arg("ItemId"))
        .def("Source",
             (opencascade::handle<StepBasic_ExternalSource> (StepBasic_ExternallyDefinedItem::*)() const) static_cast<opencascade::handle<StepBasic_ExternalSource> (StepBasic_ExternallyDefinedItem::*)() const>(&StepBasic_ExternallyDefinedItem::Source),
             R"#(Returns field Source)#" )
        .def("SetSource",
             (void (StepBasic_ExternallyDefinedItem::*)( const opencascade::handle<StepBasic_ExternalSource> &  ) ) static_cast<void (StepBasic_ExternallyDefinedItem::*)( const opencascade::handle<StepBasic_ExternalSource> &  ) >(&StepBasic_ExternallyDefinedItem::SetSource),
             R"#(Set field Source)#"  , py::arg("Source"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ExternallyDefinedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ExternallyDefinedItem::*)() const>(&StepBasic_ExternallyDefinedItem::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ExternallyDefinedItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ExternallyDefinedItem::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<StepBasic_DocumentReference ,opencascade::handle<StepBasic_DocumentReference>>(m,"StepBasic_DocumentReference");

    static_cast<py::class_<StepBasic_DocumentReference ,opencascade::handle<StepBasic_DocumentReference>  , Standard_Transient >>(m.attr("StepBasic_DocumentReference"))
        .def("Init0",
             (void (StepBasic_DocumentReference::*)( const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentReference::*)( const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentReference::Init0),
             R"#(None)#"  , py::arg("aAssignedDocument"),  py::arg("aSource"))
        .def("AssignedDocument",
             (opencascade::handle<StepBasic_Document> (StepBasic_DocumentReference::*)() const) static_cast<opencascade::handle<StepBasic_Document> (StepBasic_DocumentReference::*)() const>(&StepBasic_DocumentReference::AssignedDocument),
             R"#(None)#" )
        .def("SetAssignedDocument",
             (void (StepBasic_DocumentReference::*)( const opencascade::handle<StepBasic_Document> &  ) ) static_cast<void (StepBasic_DocumentReference::*)( const opencascade::handle<StepBasic_Document> &  ) >(&StepBasic_DocumentReference::SetAssignedDocument),
             R"#(None)#"  , py::arg("aAssignedDocument"))
        .def("Source",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentReference::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentReference::*)() const>(&StepBasic_DocumentReference::Source),
             R"#(None)#" )
        .def("SetSource",
             (void (StepBasic_DocumentReference::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentReference::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentReference::SetSource),
             R"#(None)#"  , py::arg("aSource"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentReference::*)() const>(&StepBasic_DocumentReference::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentReference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DocumentReference::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Approval ,opencascade::handle<StepBasic_Approval>  , Standard_Transient >>(m.attr("StepBasic_Approval"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Approval::*)( const opencascade::handle<StepBasic_ApprovalStatus> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Approval::*)( const opencascade::handle<StepBasic_ApprovalStatus> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Approval::Init),
             R"#(None)#"  , py::arg("aStatus"),  py::arg("aLevel"))
        .def("SetStatus",
             (void (StepBasic_Approval::*)( const opencascade::handle<StepBasic_ApprovalStatus> &  ) ) static_cast<void (StepBasic_Approval::*)( const opencascade::handle<StepBasic_ApprovalStatus> &  ) >(&StepBasic_Approval::SetStatus),
             R"#(None)#"  , py::arg("aStatus"))
        .def("Status",
             (opencascade::handle<StepBasic_ApprovalStatus> (StepBasic_Approval::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalStatus> (StepBasic_Approval::*)() const>(&StepBasic_Approval::Status),
             R"#(None)#" )
        .def("SetLevel",
             (void (StepBasic_Approval::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Approval::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Approval::SetLevel),
             R"#(None)#"  , py::arg("aLevel"))
        .def("Level",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Approval::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Approval::*)() const>(&StepBasic_Approval::Level),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Approval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Approval::*)() const>(&StepBasic_Approval::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Approval::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Approval::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_GeneralProperty ,opencascade::handle<StepBasic_GeneralProperty>  , Standard_Transient >>(m.attr("StepBasic_GeneralProperty"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_GeneralProperty::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_GeneralProperty::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_GeneralProperty::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aId"),  py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"))
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_GeneralProperty::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_GeneralProperty::*)() const>(&StepBasic_GeneralProperty::Id),
             R"#(Returns field Id)#" )
        .def("SetId",
             (void (StepBasic_GeneralProperty::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_GeneralProperty::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_GeneralProperty::SetId),
             R"#(Set field Id)#"  , py::arg("Id"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_GeneralProperty::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_GeneralProperty::*)() const>(&StepBasic_GeneralProperty::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_GeneralProperty::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_GeneralProperty::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_GeneralProperty::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_GeneralProperty::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_GeneralProperty::*)() const>(&StepBasic_GeneralProperty::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_GeneralProperty::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_GeneralProperty::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_GeneralProperty::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_GeneralProperty::*)() const) static_cast<Standard_Boolean (StepBasic_GeneralProperty::*)() const>(&StepBasic_GeneralProperty::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_GeneralProperty::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_GeneralProperty::*)() const>(&StepBasic_GeneralProperty::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_GeneralProperty::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_GeneralProperty::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<StepBasic_ApprovalAssignment ,opencascade::handle<StepBasic_ApprovalAssignment>>(m,"StepBasic_ApprovalAssignment");

    static_cast<py::class_<StepBasic_ApprovalAssignment ,opencascade::handle<StepBasic_ApprovalAssignment>  , Standard_Transient >>(m.attr("StepBasic_ApprovalAssignment"))
        .def("Init",
             (void (StepBasic_ApprovalAssignment::*)( const opencascade::handle<StepBasic_Approval> &  ) ) static_cast<void (StepBasic_ApprovalAssignment::*)( const opencascade::handle<StepBasic_Approval> &  ) >(&StepBasic_ApprovalAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedApproval"))
        .def("SetAssignedApproval",
             (void (StepBasic_ApprovalAssignment::*)( const opencascade::handle<StepBasic_Approval> &  ) ) static_cast<void (StepBasic_ApprovalAssignment::*)( const opencascade::handle<StepBasic_Approval> &  ) >(&StepBasic_ApprovalAssignment::SetAssignedApproval),
             R"#(None)#"  , py::arg("aAssignedApproval"))
        .def("AssignedApproval",
             (opencascade::handle<StepBasic_Approval> (StepBasic_ApprovalAssignment::*)() const) static_cast<opencascade::handle<StepBasic_Approval> (StepBasic_ApprovalAssignment::*)() const>(&StepBasic_ApprovalAssignment::AssignedApproval),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalAssignment::*)() const>(&StepBasic_ApprovalAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ApprovalAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ApprovalRelationship ,opencascade::handle<StepBasic_ApprovalRelationship>  , Standard_Transient >>(m.attr("StepBasic_ApprovalRelationship"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ApprovalRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Approval> & ,  const opencascade::handle<StepBasic_Approval> &  ) ) static_cast<void (StepBasic_ApprovalRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Approval> & ,  const opencascade::handle<StepBasic_Approval> &  ) >(&StepBasic_ApprovalRelationship::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDescription"),  py::arg("aRelatingApproval"),  py::arg("aRelatedApproval"))
        .def("SetName",
             (void (StepBasic_ApprovalRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApprovalRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApprovalRelationship::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ApprovalRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ApprovalRelationship::*)() const>(&StepBasic_ApprovalRelationship::Name),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepBasic_ApprovalRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApprovalRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApprovalRelationship::SetDescription),
             R"#(None)#"  , py::arg("aDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ApprovalRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ApprovalRelationship::*)() const>(&StepBasic_ApprovalRelationship::Description),
             R"#(None)#" )
        .def("SetRelatingApproval",
             (void (StepBasic_ApprovalRelationship::*)( const opencascade::handle<StepBasic_Approval> &  ) ) static_cast<void (StepBasic_ApprovalRelationship::*)( const opencascade::handle<StepBasic_Approval> &  ) >(&StepBasic_ApprovalRelationship::SetRelatingApproval),
             R"#(None)#"  , py::arg("aRelatingApproval"))
        .def("RelatingApproval",
             (opencascade::handle<StepBasic_Approval> (StepBasic_ApprovalRelationship::*)() const) static_cast<opencascade::handle<StepBasic_Approval> (StepBasic_ApprovalRelationship::*)() const>(&StepBasic_ApprovalRelationship::RelatingApproval),
             R"#(None)#" )
        .def("SetRelatedApproval",
             (void (StepBasic_ApprovalRelationship::*)( const opencascade::handle<StepBasic_Approval> &  ) ) static_cast<void (StepBasic_ApprovalRelationship::*)( const opencascade::handle<StepBasic_Approval> &  ) >(&StepBasic_ApprovalRelationship::SetRelatedApproval),
             R"#(None)#"  , py::arg("aRelatedApproval"))
        .def("RelatedApproval",
             (opencascade::handle<StepBasic_Approval> (StepBasic_ApprovalRelationship::*)() const) static_cast<opencascade::handle<StepBasic_Approval> (StepBasic_ApprovalRelationship::*)() const>(&StepBasic_ApprovalRelationship::RelatedApproval),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalRelationship::*)() const>(&StepBasic_ApprovalRelationship::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalRelationship::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ApprovalRelationship::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<StepBasic_DateAssignment ,opencascade::handle<StepBasic_DateAssignment>>(m,"StepBasic_DateAssignment");

    static_cast<py::class_<StepBasic_DateAssignment ,opencascade::handle<StepBasic_DateAssignment>  , Standard_Transient >>(m.attr("StepBasic_DateAssignment"))
        .def("Init",
             (void (StepBasic_DateAssignment::*)( const opencascade::handle<StepBasic_Date> & ,  const opencascade::handle<StepBasic_DateRole> &  ) ) static_cast<void (StepBasic_DateAssignment::*)( const opencascade::handle<StepBasic_Date> & ,  const opencascade::handle<StepBasic_DateRole> &  ) >(&StepBasic_DateAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedDate"),  py::arg("aRole"))
        .def("SetAssignedDate",
             (void (StepBasic_DateAssignment::*)( const opencascade::handle<StepBasic_Date> &  ) ) static_cast<void (StepBasic_DateAssignment::*)( const opencascade::handle<StepBasic_Date> &  ) >(&StepBasic_DateAssignment::SetAssignedDate),
             R"#(None)#"  , py::arg("aAssignedDate"))
        .def("AssignedDate",
             (opencascade::handle<StepBasic_Date> (StepBasic_DateAssignment::*)() const) static_cast<opencascade::handle<StepBasic_Date> (StepBasic_DateAssignment::*)() const>(&StepBasic_DateAssignment::AssignedDate),
             R"#(None)#" )
        .def("SetRole",
             (void (StepBasic_DateAssignment::*)( const opencascade::handle<StepBasic_DateRole> &  ) ) static_cast<void (StepBasic_DateAssignment::*)( const opencascade::handle<StepBasic_DateRole> &  ) >(&StepBasic_DateAssignment::SetRole),
             R"#(None)#"  , py::arg("aRole"))
        .def("Role",
             (opencascade::handle<StepBasic_DateRole> (StepBasic_DateAssignment::*)() const) static_cast<opencascade::handle<StepBasic_DateRole> (StepBasic_DateAssignment::*)() const>(&StepBasic_DateAssignment::Role),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DateAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DateAssignment::*)() const>(&StepBasic_DateAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DateAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DateAssignment::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<StepBasic_OrganizationAssignment ,opencascade::handle<StepBasic_OrganizationAssignment>>(m,"StepBasic_OrganizationAssignment");

    static_cast<py::class_<StepBasic_OrganizationAssignment ,opencascade::handle<StepBasic_OrganizationAssignment>  , Standard_Transient >>(m.attr("StepBasic_OrganizationAssignment"))
        .def("Init",
             (void (StepBasic_OrganizationAssignment::*)( const opencascade::handle<StepBasic_Organization> & ,  const opencascade::handle<StepBasic_OrganizationRole> &  ) ) static_cast<void (StepBasic_OrganizationAssignment::*)( const opencascade::handle<StepBasic_Organization> & ,  const opencascade::handle<StepBasic_OrganizationRole> &  ) >(&StepBasic_OrganizationAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedOrganization"),  py::arg("aRole"))
        .def("SetAssignedOrganization",
             (void (StepBasic_OrganizationAssignment::*)( const opencascade::handle<StepBasic_Organization> &  ) ) static_cast<void (StepBasic_OrganizationAssignment::*)( const opencascade::handle<StepBasic_Organization> &  ) >(&StepBasic_OrganizationAssignment::SetAssignedOrganization),
             R"#(None)#"  , py::arg("aAssignedOrganization"))
        .def("AssignedOrganization",
             (opencascade::handle<StepBasic_Organization> (StepBasic_OrganizationAssignment::*)() const) static_cast<opencascade::handle<StepBasic_Organization> (StepBasic_OrganizationAssignment::*)() const>(&StepBasic_OrganizationAssignment::AssignedOrganization),
             R"#(None)#" )
        .def("SetRole",
             (void (StepBasic_OrganizationAssignment::*)( const opencascade::handle<StepBasic_OrganizationRole> &  ) ) static_cast<void (StepBasic_OrganizationAssignment::*)( const opencascade::handle<StepBasic_OrganizationRole> &  ) >(&StepBasic_OrganizationAssignment::SetRole),
             R"#(None)#"  , py::arg("aRole"))
        .def("Role",
             (opencascade::handle<StepBasic_OrganizationRole> (StepBasic_OrganizationAssignment::*)() const) static_cast<opencascade::handle<StepBasic_OrganizationRole> (StepBasic_OrganizationAssignment::*)() const>(&StepBasic_OrganizationAssignment::Role),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_OrganizationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_OrganizationAssignment::*)() const>(&StepBasic_OrganizationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_OrganizationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_OrganizationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_LengthUnit ,opencascade::handle<StepBasic_LengthUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_LengthUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_LengthUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_LengthUnit::*)() const>(&StepBasic_LengthUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_LengthUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_LengthUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ContractType ,opencascade::handle<StepBasic_ContractType>  , Standard_Transient >>(m.attr("StepBasic_ContractType"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ContractType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ContractType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ContractType::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ContractType::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ContractType::*)() const>(&StepBasic_ContractType::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_ContractType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ContractType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ContractType::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ContractType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ContractType::*)() const>(&StepBasic_ContractType::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ContractType::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ContractType::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_GroupAssignment ,opencascade::handle<StepBasic_GroupAssignment>  , Standard_Transient >>(m.attr("StepBasic_GroupAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_GroupAssignment::*)( const opencascade::handle<StepBasic_Group> &  ) ) static_cast<void (StepBasic_GroupAssignment::*)( const opencascade::handle<StepBasic_Group> &  ) >(&StepBasic_GroupAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aAssignedGroup"))
        .def("AssignedGroup",
             (opencascade::handle<StepBasic_Group> (StepBasic_GroupAssignment::*)() const) static_cast<opencascade::handle<StepBasic_Group> (StepBasic_GroupAssignment::*)() const>(&StepBasic_GroupAssignment::AssignedGroup),
             R"#(Returns field AssignedGroup)#" )
        .def("SetAssignedGroup",
             (void (StepBasic_GroupAssignment::*)( const opencascade::handle<StepBasic_Group> &  ) ) static_cast<void (StepBasic_GroupAssignment::*)( const opencascade::handle<StepBasic_Group> &  ) >(&StepBasic_GroupAssignment::SetAssignedGroup),
             R"#(Set field AssignedGroup)#"  , py::arg("AssignedGroup"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_GroupAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_GroupAssignment::*)() const>(&StepBasic_GroupAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_GroupAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_GroupAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_AreaUnit ,opencascade::handle<StepBasic_AreaUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_AreaUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_AreaUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_AreaUnit::*)() const>(&StepBasic_AreaUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_AreaUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_AreaUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_MassUnit ,opencascade::handle<StepBasic_MassUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_MassUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_MassUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_MassUnit::*)() const>(&StepBasic_MassUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_MassUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_MassUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_OrganizationRole ,opencascade::handle<StepBasic_OrganizationRole>  , Standard_Transient >>(m.attr("StepBasic_OrganizationRole"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_OrganizationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_OrganizationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_OrganizationRole::Init),
             R"#(None)#"  , py::arg("aName"))
        .def("SetName",
             (void (StepBasic_OrganizationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_OrganizationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_OrganizationRole::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_OrganizationRole::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_OrganizationRole::*)() const>(&StepBasic_OrganizationRole::Name),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_OrganizationRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_OrganizationRole::*)() const>(&StepBasic_OrganizationRole::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_OrganizationRole::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_OrganizationRole::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_IdentificationAssignment ,opencascade::handle<StepBasic_IdentificationAssignment>  , Standard_Transient >>(m.attr("StepBasic_IdentificationAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_IdentificationAssignment::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_IdentificationRole> &  ) ) static_cast<void (StepBasic_IdentificationAssignment::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_IdentificationRole> &  ) >(&StepBasic_IdentificationAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aAssignedId"),  py::arg("aRole"))
        .def("AssignedId",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_IdentificationAssignment::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_IdentificationAssignment::*)() const>(&StepBasic_IdentificationAssignment::AssignedId),
             R"#(Returns field AssignedId)#" )
        .def("SetAssignedId",
             (void (StepBasic_IdentificationAssignment::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_IdentificationAssignment::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_IdentificationAssignment::SetAssignedId),
             R"#(Set field AssignedId)#"  , py::arg("AssignedId"))
        .def("Role",
             (opencascade::handle<StepBasic_IdentificationRole> (StepBasic_IdentificationAssignment::*)() const) static_cast<opencascade::handle<StepBasic_IdentificationRole> (StepBasic_IdentificationAssignment::*)() const>(&StepBasic_IdentificationAssignment::Role),
             R"#(Returns field Role)#" )
        .def("SetRole",
             (void (StepBasic_IdentificationAssignment::*)( const opencascade::handle<StepBasic_IdentificationRole> &  ) ) static_cast<void (StepBasic_IdentificationAssignment::*)( const opencascade::handle<StepBasic_IdentificationRole> &  ) >(&StepBasic_IdentificationAssignment::SetRole),
             R"#(Set field Role)#"  , py::arg("Role"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_IdentificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_IdentificationAssignment::*)() const>(&StepBasic_IdentificationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_IdentificationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_IdentificationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ApprovalDateTime ,opencascade::handle<StepBasic_ApprovalDateTime>  , Standard_Transient >>(m.attr("StepBasic_ApprovalDateTime"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ApprovalDateTime::*)( const StepBasic_DateTimeSelect & ,  const opencascade::handle<StepBasic_Approval> &  ) ) static_cast<void (StepBasic_ApprovalDateTime::*)( const StepBasic_DateTimeSelect & ,  const opencascade::handle<StepBasic_Approval> &  ) >(&StepBasic_ApprovalDateTime::Init),
             R"#(None)#"  , py::arg("aDateTime"),  py::arg("aDatedApproval"))
        .def("SetDateTime",
             (void (StepBasic_ApprovalDateTime::*)( const StepBasic_DateTimeSelect &  ) ) static_cast<void (StepBasic_ApprovalDateTime::*)( const StepBasic_DateTimeSelect &  ) >(&StepBasic_ApprovalDateTime::SetDateTime),
             R"#(None)#"  , py::arg("aDateTime"))
        .def("DateTime",
             (StepBasic_DateTimeSelect (StepBasic_ApprovalDateTime::*)() const) static_cast<StepBasic_DateTimeSelect (StepBasic_ApprovalDateTime::*)() const>(&StepBasic_ApprovalDateTime::DateTime),
             R"#(None)#" )
        .def("SetDatedApproval",
             (void (StepBasic_ApprovalDateTime::*)( const opencascade::handle<StepBasic_Approval> &  ) ) static_cast<void (StepBasic_ApprovalDateTime::*)( const opencascade::handle<StepBasic_Approval> &  ) >(&StepBasic_ApprovalDateTime::SetDatedApproval),
             R"#(None)#"  , py::arg("aDatedApproval"))
        .def("DatedApproval",
             (opencascade::handle<StepBasic_Approval> (StepBasic_ApprovalDateTime::*)() const) static_cast<opencascade::handle<StepBasic_Approval> (StepBasic_ApprovalDateTime::*)() const>(&StepBasic_ApprovalDateTime::DatedApproval),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalDateTime::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalDateTime::*)() const>(&StepBasic_ApprovalDateTime::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalDateTime::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ApprovalDateTime::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinitionFormationRelationship ,opencascade::handle<StepBasic_ProductDefinitionFormationRelationship>  , Standard_Transient >>(m.attr("StepBasic_ProductDefinitionFormationRelationship"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) ) static_cast<void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) >(&StepBasic_ProductDefinitionFormationRelationship::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aId"),  py::arg("aName"),  py::arg("aDescription"),  py::arg("aRelatingProductDefinitionFormation"),  py::arg("aRelatedProductDefinitionFormation"))
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionFormationRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionFormationRelationship::*)() const>(&StepBasic_ProductDefinitionFormationRelationship::Id),
             R"#(Returns field Id)#" )
        .def("SetId",
             (void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionFormationRelationship::SetId),
             R"#(Set field Id)#"  , py::arg("Id"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionFormationRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionFormationRelationship::*)() const>(&StepBasic_ProductDefinitionFormationRelationship::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionFormationRelationship::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionFormationRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionFormationRelationship::*)() const>(&StepBasic_ProductDefinitionFormationRelationship::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionFormationRelationship::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("RelatingProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepBasic_ProductDefinitionFormationRelationship::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepBasic_ProductDefinitionFormationRelationship::*)() const>(&StepBasic_ProductDefinitionFormationRelationship::RelatingProductDefinitionFormation),
             R"#(Returns field RelatingProductDefinitionFormation)#" )
        .def("SetRelatingProductDefinitionFormation",
             (void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) ) static_cast<void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) >(&StepBasic_ProductDefinitionFormationRelationship::SetRelatingProductDefinitionFormation),
             R"#(Set field RelatingProductDefinitionFormation)#"  , py::arg("RelatingProductDefinitionFormation"))
        .def("RelatedProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepBasic_ProductDefinitionFormationRelationship::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepBasic_ProductDefinitionFormationRelationship::*)() const>(&StepBasic_ProductDefinitionFormationRelationship::RelatedProductDefinitionFormation),
             R"#(Returns field RelatedProductDefinitionFormation)#" )
        .def("SetRelatedProductDefinitionFormation",
             (void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) ) static_cast<void (StepBasic_ProductDefinitionFormationRelationship::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) >(&StepBasic_ProductDefinitionFormationRelationship::SetRelatedProductDefinitionFormation),
             R"#(Set field RelatedProductDefinitionFormation)#"  , py::arg("RelatedProductDefinitionFormation"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormationRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormationRelationship::*)() const>(&StepBasic_ProductDefinitionFormationRelationship::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionFormationRelationship::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductDefinitionFormationRelationship::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SecurityClassificationLevel ,opencascade::handle<StepBasic_SecurityClassificationLevel>  , Standard_Transient >>(m.attr("StepBasic_SecurityClassificationLevel"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_SecurityClassificationLevel::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_SecurityClassificationLevel::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_SecurityClassificationLevel::Init),
             R"#(None)#"  , py::arg("aName"))
        .def("SetName",
             (void (StepBasic_SecurityClassificationLevel::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_SecurityClassificationLevel::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_SecurityClassificationLevel::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_SecurityClassificationLevel::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_SecurityClassificationLevel::*)() const>(&StepBasic_SecurityClassificationLevel::Name),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassificationLevel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassificationLevel::*)() const>(&StepBasic_SecurityClassificationLevel::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SecurityClassificationLevel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SecurityClassificationLevel::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductOrFormationOrDefinition ,std::unique_ptr<StepBasic_ProductOrFormationOrDefinition>  , StepData_SelectType >>(m.attr("StepBasic_ProductOrFormationOrDefinition"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepBasic_ProductOrFormationOrDefinition::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepBasic_ProductOrFormationOrDefinition::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepBasic_ProductOrFormationOrDefinition::CaseNum),
             R"#(Recognizes a kind of ProductOrFormationOrDefinition select type 1 -> Product from StepBasic 2 -> ProductDefinitionFormation from StepBasic 3 -> ProductDefinition from StepBasic 0 else)#"  , py::arg("ent"))
        .def("Product",
             (opencascade::handle<StepBasic_Product> (StepBasic_ProductOrFormationOrDefinition::*)() const) static_cast<opencascade::handle<StepBasic_Product> (StepBasic_ProductOrFormationOrDefinition::*)() const>(&StepBasic_ProductOrFormationOrDefinition::Product),
             R"#(Returns Value as Product (or Null if another type))#" )
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepBasic_ProductOrFormationOrDefinition::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepBasic_ProductOrFormationOrDefinition::*)() const>(&StepBasic_ProductOrFormationOrDefinition::ProductDefinitionFormation),
             R"#(Returns Value as ProductDefinitionFormation (or Null if another type))#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepBasic_ProductOrFormationOrDefinition::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepBasic_ProductOrFormationOrDefinition::*)() const>(&StepBasic_ProductOrFormationOrDefinition::ProductDefinition),
             R"#(Returns Value as ProductDefinition (or Null if another type))#" )
;


    static_cast<py::class_<StepBasic_ProductCategory ,opencascade::handle<StepBasic_ProductCategory>  , Standard_Transient >>(m.attr("StepBasic_ProductCategory"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductCategory::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductCategory::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductCategory::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("hasAdescription"),  py::arg("aDescription"))
        .def("SetName",
             (void (StepBasic_ProductCategory::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductCategory::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductCategory::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductCategory::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductCategory::*)() const>(&StepBasic_ProductCategory::Name),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepBasic_ProductCategory::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductCategory::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductCategory::SetDescription),
             R"#(None)#"  , py::arg("aDescription"))
        .def("UnSetDescription",
             (void (StepBasic_ProductCategory::*)() ) static_cast<void (StepBasic_ProductCategory::*)() >(&StepBasic_ProductCategory::UnSetDescription),
             R"#(None)#" )
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductCategory::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductCategory::*)() const>(&StepBasic_ProductCategory::Description),
             R"#(None)#" )
        .def("HasDescription",
             (Standard_Boolean (StepBasic_ProductCategory::*)() const) static_cast<Standard_Boolean (StepBasic_ProductCategory::*)() const>(&StepBasic_ProductCategory::HasDescription),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductCategory::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductCategory::*)() const>(&StepBasic_ProductCategory::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductCategory::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductCategory::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_LocalTime ,opencascade::handle<StepBasic_LocalTime>  , Standard_Transient >>(m.attr("StepBasic_LocalTime"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_LocalTime::*)( const Standard_Integer ,  const Standard_Boolean ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Real ,  const opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> &  ) ) static_cast<void (StepBasic_LocalTime::*)( const Standard_Integer ,  const Standard_Boolean ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Real ,  const opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> &  ) >(&StepBasic_LocalTime::Init),
             R"#(None)#"  , py::arg("aHourComponent"),  py::arg("hasAminuteComponent"),  py::arg("aMinuteComponent"),  py::arg("hasAsecondComponent"),  py::arg("aSecondComponent"),  py::arg("aZone"))
        .def("SetHourComponent",
             (void (StepBasic_LocalTime::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_LocalTime::*)( const Standard_Integer  ) >(&StepBasic_LocalTime::SetHourComponent),
             R"#(None)#"  , py::arg("aHourComponent"))
        .def("HourComponent",
             (Standard_Integer (StepBasic_LocalTime::*)() const) static_cast<Standard_Integer (StepBasic_LocalTime::*)() const>(&StepBasic_LocalTime::HourComponent),
             R"#(None)#" )
        .def("SetMinuteComponent",
             (void (StepBasic_LocalTime::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_LocalTime::*)( const Standard_Integer  ) >(&StepBasic_LocalTime::SetMinuteComponent),
             R"#(None)#"  , py::arg("aMinuteComponent"))
        .def("UnSetMinuteComponent",
             (void (StepBasic_LocalTime::*)() ) static_cast<void (StepBasic_LocalTime::*)() >(&StepBasic_LocalTime::UnSetMinuteComponent),
             R"#(None)#" )
        .def("MinuteComponent",
             (Standard_Integer (StepBasic_LocalTime::*)() const) static_cast<Standard_Integer (StepBasic_LocalTime::*)() const>(&StepBasic_LocalTime::MinuteComponent),
             R"#(None)#" )
        .def("HasMinuteComponent",
             (Standard_Boolean (StepBasic_LocalTime::*)() const) static_cast<Standard_Boolean (StepBasic_LocalTime::*)() const>(&StepBasic_LocalTime::HasMinuteComponent),
             R"#(None)#" )
        .def("SetSecondComponent",
             (void (StepBasic_LocalTime::*)( const Standard_Real  ) ) static_cast<void (StepBasic_LocalTime::*)( const Standard_Real  ) >(&StepBasic_LocalTime::SetSecondComponent),
             R"#(None)#"  , py::arg("aSecondComponent"))
        .def("UnSetSecondComponent",
             (void (StepBasic_LocalTime::*)() ) static_cast<void (StepBasic_LocalTime::*)() >(&StepBasic_LocalTime::UnSetSecondComponent),
             R"#(None)#" )
        .def("SecondComponent",
             (Standard_Real (StepBasic_LocalTime::*)() const) static_cast<Standard_Real (StepBasic_LocalTime::*)() const>(&StepBasic_LocalTime::SecondComponent),
             R"#(None)#" )
        .def("HasSecondComponent",
             (Standard_Boolean (StepBasic_LocalTime::*)() const) static_cast<Standard_Boolean (StepBasic_LocalTime::*)() const>(&StepBasic_LocalTime::HasSecondComponent),
             R"#(None)#" )
        .def("SetZone",
             (void (StepBasic_LocalTime::*)( const opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> &  ) ) static_cast<void (StepBasic_LocalTime::*)( const opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> &  ) >(&StepBasic_LocalTime::SetZone),
             R"#(None)#"  , py::arg("aZone"))
        .def("Zone",
             (opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> (StepBasic_LocalTime::*)() const) static_cast<opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> (StepBasic_LocalTime::*)() const>(&StepBasic_LocalTime::Zone),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_LocalTime::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_LocalTime::*)() const>(&StepBasic_LocalTime::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_LocalTime::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_LocalTime::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Document ,opencascade::handle<StepBasic_Document>  , Standard_Transient >>(m.attr("StepBasic_Document"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Document::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_DocumentType> &  ) ) static_cast<void (StepBasic_Document::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_DocumentType> &  ) >(&StepBasic_Document::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aId"),  py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"),  py::arg("aKind"))
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Document::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Document::*)() const>(&StepBasic_Document::Id),
             R"#(Returns field Id)#" )
        .def("SetId",
             (void (StepBasic_Document::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Document::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Document::SetId),
             R"#(Set field Id)#"  , py::arg("Id"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Document::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Document::*)() const>(&StepBasic_Document::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_Document::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Document::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Document::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Document::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Document::*)() const>(&StepBasic_Document::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_Document::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Document::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Document::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_Document::*)() const) static_cast<Standard_Boolean (StepBasic_Document::*)() const>(&StepBasic_Document::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("Kind",
             (opencascade::handle<StepBasic_DocumentType> (StepBasic_Document::*)() const) static_cast<opencascade::handle<StepBasic_DocumentType> (StepBasic_Document::*)() const>(&StepBasic_Document::Kind),
             R"#(Returns field Kind)#" )
        .def("SetKind",
             (void (StepBasic_Document::*)( const opencascade::handle<StepBasic_DocumentType> &  ) ) static_cast<void (StepBasic_Document::*)( const opencascade::handle<StepBasic_DocumentType> &  ) >(&StepBasic_Document::SetKind),
             R"#(Set field Kind)#"  , py::arg("Kind"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Document::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Document::*)() const>(&StepBasic_Document::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Document::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Document::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_HArray1OfApproval ,std::unique_ptr<StepBasic_HArray1OfApproval>  >>(m.attr("StepBasic_HArray1OfApproval"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_Approval> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_Approval> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepBasic_Array1OfApproval & (StepBasic_HArray1OfApproval::*)() const) static_cast<const StepBasic_Array1OfApproval & (StepBasic_HArray1OfApproval::*)() const>(&StepBasic_HArray1OfApproval::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfApproval & (StepBasic_HArray1OfApproval::*)() ) static_cast<StepBasic_Array1OfApproval & (StepBasic_HArray1OfApproval::*)() >(&StepBasic_HArray1OfApproval::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfApproval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfApproval::*)() const>(&StepBasic_HArray1OfApproval::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfApproval::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfApproval::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ApplicationContextElement ,opencascade::handle<StepBasic_ApplicationContextElement>  , Standard_Transient >>(m.attr("StepBasic_ApplicationContextElement"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ApplicationContextElement::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ApplicationContext> &  ) ) static_cast<void (StepBasic_ApplicationContextElement::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ApplicationContext> &  ) >(&StepBasic_ApplicationContextElement::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aFrameOfReference"))
        .def("SetName",
             (void (StepBasic_ApplicationContextElement::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApplicationContextElement::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApplicationContextElement::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ApplicationContextElement::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ApplicationContextElement::*)() const>(&StepBasic_ApplicationContextElement::Name),
             R"#(None)#" )
        .def("SetFrameOfReference",
             (void (StepBasic_ApplicationContextElement::*)( const opencascade::handle<StepBasic_ApplicationContext> &  ) ) static_cast<void (StepBasic_ApplicationContextElement::*)( const opencascade::handle<StepBasic_ApplicationContext> &  ) >(&StepBasic_ApplicationContextElement::SetFrameOfReference),
             R"#(None)#"  , py::arg("aFrameOfReference"))
        .def("FrameOfReference",
             (opencascade::handle<StepBasic_ApplicationContext> (StepBasic_ApplicationContextElement::*)() const) static_cast<opencascade::handle<StepBasic_ApplicationContext> (StepBasic_ApplicationContextElement::*)() const>(&StepBasic_ApplicationContextElement::FrameOfReference),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApplicationContextElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApplicationContextElement::*)() const>(&StepBasic_ApplicationContextElement::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApplicationContextElement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ApplicationContextElement::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Address ,opencascade::handle<StepBasic_Address>  , Standard_Transient >>(m.attr("StepBasic_Address"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Address::*)( const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::Init),
             R"#(None)#"  , py::arg("hasAinternalLocation"),  py::arg("aInternalLocation"),  py::arg("hasAstreetNumber"),  py::arg("aStreetNumber"),  py::arg("hasAstreet"),  py::arg("aStreet"),  py::arg("hasApostalBox"),  py::arg("aPostalBox"),  py::arg("hasAtown"),  py::arg("aTown"),  py::arg("hasAregion"),  py::arg("aRegion"),  py::arg("hasApostalCode"),  py::arg("aPostalCode"),  py::arg("hasAcountry"),  py::arg("aCountry"),  py::arg("hasAfacsimileNumber"),  py::arg("aFacsimileNumber"),  py::arg("hasAtelephoneNumber"),  py::arg("aTelephoneNumber"),  py::arg("hasAelectronicMailAddress"),  py::arg("aElectronicMailAddress"),  py::arg("hasAtelexNumber"),  py::arg("aTelexNumber"))
        .def("SetInternalLocation",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetInternalLocation),
             R"#(None)#"  , py::arg("aInternalLocation"))
        .def("UnSetInternalLocation",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetInternalLocation),
             R"#(None)#" )
        .def("InternalLocation",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::InternalLocation),
             R"#(None)#" )
        .def("HasInternalLocation",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasInternalLocation),
             R"#(None)#" )
        .def("SetStreetNumber",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetStreetNumber),
             R"#(None)#"  , py::arg("aStreetNumber"))
        .def("UnSetStreetNumber",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetStreetNumber),
             R"#(None)#" )
        .def("StreetNumber",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::StreetNumber),
             R"#(None)#" )
        .def("HasStreetNumber",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasStreetNumber),
             R"#(None)#" )
        .def("SetStreet",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetStreet),
             R"#(None)#"  , py::arg("aStreet"))
        .def("UnSetStreet",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetStreet),
             R"#(None)#" )
        .def("Street",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::Street),
             R"#(None)#" )
        .def("HasStreet",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasStreet),
             R"#(None)#" )
        .def("SetPostalBox",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetPostalBox),
             R"#(None)#"  , py::arg("aPostalBox"))
        .def("UnSetPostalBox",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetPostalBox),
             R"#(None)#" )
        .def("PostalBox",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::PostalBox),
             R"#(None)#" )
        .def("HasPostalBox",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasPostalBox),
             R"#(None)#" )
        .def("SetTown",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetTown),
             R"#(None)#"  , py::arg("aTown"))
        .def("UnSetTown",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetTown),
             R"#(None)#" )
        .def("Town",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::Town),
             R"#(None)#" )
        .def("HasTown",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasTown),
             R"#(None)#" )
        .def("SetRegion",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetRegion),
             R"#(None)#"  , py::arg("aRegion"))
        .def("UnSetRegion",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetRegion),
             R"#(None)#" )
        .def("Region",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::Region),
             R"#(None)#" )
        .def("HasRegion",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasRegion),
             R"#(None)#" )
        .def("SetPostalCode",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetPostalCode),
             R"#(None)#"  , py::arg("aPostalCode"))
        .def("UnSetPostalCode",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetPostalCode),
             R"#(None)#" )
        .def("PostalCode",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::PostalCode),
             R"#(None)#" )
        .def("HasPostalCode",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasPostalCode),
             R"#(None)#" )
        .def("SetCountry",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetCountry),
             R"#(None)#"  , py::arg("aCountry"))
        .def("UnSetCountry",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetCountry),
             R"#(None)#" )
        .def("Country",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::Country),
             R"#(None)#" )
        .def("HasCountry",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasCountry),
             R"#(None)#" )
        .def("SetFacsimileNumber",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetFacsimileNumber),
             R"#(None)#"  , py::arg("aFacsimileNumber"))
        .def("UnSetFacsimileNumber",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetFacsimileNumber),
             R"#(None)#" )
        .def("FacsimileNumber",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::FacsimileNumber),
             R"#(None)#" )
        .def("HasFacsimileNumber",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasFacsimileNumber),
             R"#(None)#" )
        .def("SetTelephoneNumber",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetTelephoneNumber),
             R"#(None)#"  , py::arg("aTelephoneNumber"))
        .def("UnSetTelephoneNumber",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetTelephoneNumber),
             R"#(None)#" )
        .def("TelephoneNumber",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::TelephoneNumber),
             R"#(None)#" )
        .def("HasTelephoneNumber",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasTelephoneNumber),
             R"#(None)#" )
        .def("SetElectronicMailAddress",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetElectronicMailAddress),
             R"#(None)#"  , py::arg("aElectronicMailAddress"))
        .def("UnSetElectronicMailAddress",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetElectronicMailAddress),
             R"#(None)#" )
        .def("ElectronicMailAddress",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::ElectronicMailAddress),
             R"#(None)#" )
        .def("HasElectronicMailAddress",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasElectronicMailAddress),
             R"#(None)#" )
        .def("SetTelexNumber",
             (void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Address::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Address::SetTelexNumber),
             R"#(None)#"  , py::arg("aTelexNumber"))
        .def("UnSetTelexNumber",
             (void (StepBasic_Address::*)() ) static_cast<void (StepBasic_Address::*)() >(&StepBasic_Address::UnSetTelexNumber),
             R"#(None)#" )
        .def("TelexNumber",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Address::*)() const>(&StepBasic_Address::TelexNumber),
             R"#(None)#" )
        .def("HasTelexNumber",
             (Standard_Boolean (StepBasic_Address::*)() const) static_cast<Standard_Boolean (StepBasic_Address::*)() const>(&StepBasic_Address::HasTelexNumber),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Address::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Address::*)() const>(&StepBasic_Address::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Address::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Address::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Person ,opencascade::handle<StepBasic_Person>  , Standard_Transient >>(m.attr("StepBasic_Person"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Person::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) ) static_cast<void (StepBasic_Person::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) >(&StepBasic_Person::Init),
             R"#(None)#"  , py::arg("aId"),  py::arg("hasAlastName"),  py::arg("aLastName"),  py::arg("hasAfirstName"),  py::arg("aFirstName"),  py::arg("hasAmiddleNames"),  py::arg("aMiddleNames"),  py::arg("hasAprefixTitles"),  py::arg("aPrefixTitles"),  py::arg("hasAsuffixTitles"),  py::arg("aSuffixTitles"))
        .def("SetId",
             (void (StepBasic_Person::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Person::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Person::SetId),
             R"#(None)#"  , py::arg("aId"))
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)() const>(&StepBasic_Person::Id),
             R"#(None)#" )
        .def("SetLastName",
             (void (StepBasic_Person::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Person::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Person::SetLastName),
             R"#(None)#"  , py::arg("aLastName"))
        .def("UnSetLastName",
             (void (StepBasic_Person::*)() ) static_cast<void (StepBasic_Person::*)() >(&StepBasic_Person::UnSetLastName),
             R"#(None)#" )
        .def("LastName",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)() const>(&StepBasic_Person::LastName),
             R"#(None)#" )
        .def("HasLastName",
             (Standard_Boolean (StepBasic_Person::*)() const) static_cast<Standard_Boolean (StepBasic_Person::*)() const>(&StepBasic_Person::HasLastName),
             R"#(None)#" )
        .def("SetFirstName",
             (void (StepBasic_Person::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Person::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Person::SetFirstName),
             R"#(None)#"  , py::arg("aFirstName"))
        .def("UnSetFirstName",
             (void (StepBasic_Person::*)() ) static_cast<void (StepBasic_Person::*)() >(&StepBasic_Person::UnSetFirstName),
             R"#(None)#" )
        .def("FirstName",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)() const>(&StepBasic_Person::FirstName),
             R"#(None)#" )
        .def("HasFirstName",
             (Standard_Boolean (StepBasic_Person::*)() const) static_cast<Standard_Boolean (StepBasic_Person::*)() const>(&StepBasic_Person::HasFirstName),
             R"#(None)#" )
        .def("SetMiddleNames",
             (void (StepBasic_Person::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) ) static_cast<void (StepBasic_Person::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) >(&StepBasic_Person::SetMiddleNames),
             R"#(None)#"  , py::arg("aMiddleNames"))
        .def("UnSetMiddleNames",
             (void (StepBasic_Person::*)() ) static_cast<void (StepBasic_Person::*)() >(&StepBasic_Person::UnSetMiddleNames),
             R"#(None)#" )
        .def("MiddleNames",
             (opencascade::handle<Interface_HArray1OfHAsciiString> (StepBasic_Person::*)() const) static_cast<opencascade::handle<Interface_HArray1OfHAsciiString> (StepBasic_Person::*)() const>(&StepBasic_Person::MiddleNames),
             R"#(None)#" )
        .def("HasMiddleNames",
             (Standard_Boolean (StepBasic_Person::*)() const) static_cast<Standard_Boolean (StepBasic_Person::*)() const>(&StepBasic_Person::HasMiddleNames),
             R"#(None)#" )
        .def("MiddleNamesValue",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)( const Standard_Integer  ) const>(&StepBasic_Person::MiddleNamesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbMiddleNames",
             (Standard_Integer (StepBasic_Person::*)() const) static_cast<Standard_Integer (StepBasic_Person::*)() const>(&StepBasic_Person::NbMiddleNames),
             R"#(None)#" )
        .def("SetPrefixTitles",
             (void (StepBasic_Person::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) ) static_cast<void (StepBasic_Person::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) >(&StepBasic_Person::SetPrefixTitles),
             R"#(None)#"  , py::arg("aPrefixTitles"))
        .def("UnSetPrefixTitles",
             (void (StepBasic_Person::*)() ) static_cast<void (StepBasic_Person::*)() >(&StepBasic_Person::UnSetPrefixTitles),
             R"#(None)#" )
        .def("PrefixTitles",
             (opencascade::handle<Interface_HArray1OfHAsciiString> (StepBasic_Person::*)() const) static_cast<opencascade::handle<Interface_HArray1OfHAsciiString> (StepBasic_Person::*)() const>(&StepBasic_Person::PrefixTitles),
             R"#(None)#" )
        .def("HasPrefixTitles",
             (Standard_Boolean (StepBasic_Person::*)() const) static_cast<Standard_Boolean (StepBasic_Person::*)() const>(&StepBasic_Person::HasPrefixTitles),
             R"#(None)#" )
        .def("PrefixTitlesValue",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)( const Standard_Integer  ) const>(&StepBasic_Person::PrefixTitlesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbPrefixTitles",
             (Standard_Integer (StepBasic_Person::*)() const) static_cast<Standard_Integer (StepBasic_Person::*)() const>(&StepBasic_Person::NbPrefixTitles),
             R"#(None)#" )
        .def("SetSuffixTitles",
             (void (StepBasic_Person::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) ) static_cast<void (StepBasic_Person::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> &  ) >(&StepBasic_Person::SetSuffixTitles),
             R"#(None)#"  , py::arg("aSuffixTitles"))
        .def("UnSetSuffixTitles",
             (void (StepBasic_Person::*)() ) static_cast<void (StepBasic_Person::*)() >(&StepBasic_Person::UnSetSuffixTitles),
             R"#(None)#" )
        .def("SuffixTitles",
             (opencascade::handle<Interface_HArray1OfHAsciiString> (StepBasic_Person::*)() const) static_cast<opencascade::handle<Interface_HArray1OfHAsciiString> (StepBasic_Person::*)() const>(&StepBasic_Person::SuffixTitles),
             R"#(None)#" )
        .def("HasSuffixTitles",
             (Standard_Boolean (StepBasic_Person::*)() const) static_cast<Standard_Boolean (StepBasic_Person::*)() const>(&StepBasic_Person::HasSuffixTitles),
             R"#(None)#" )
        .def("SuffixTitlesValue",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Person::*)( const Standard_Integer  ) const>(&StepBasic_Person::SuffixTitlesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbSuffixTitles",
             (Standard_Integer (StepBasic_Person::*)() const) static_cast<Standard_Integer (StepBasic_Person::*)() const>(&StepBasic_Person::NbSuffixTitles),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Person::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Person::*)() const>(&StepBasic_Person::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Person::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Person::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_HArray1OfDocument ,std::unique_ptr<StepBasic_HArray1OfDocument>  >>(m.attr("StepBasic_HArray1OfDocument"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_Document> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_Document> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepBasic_Array1OfDocument & (StepBasic_HArray1OfDocument::*)() const) static_cast<const StepBasic_Array1OfDocument & (StepBasic_HArray1OfDocument::*)() const>(&StepBasic_HArray1OfDocument::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfDocument & (StepBasic_HArray1OfDocument::*)() ) static_cast<StepBasic_Array1OfDocument & (StepBasic_HArray1OfDocument::*)() >(&StepBasic_HArray1OfDocument::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfDocument::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfDocument::*)() const>(&StepBasic_HArray1OfDocument::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfDocument::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfDocument::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_GroupRelationship ,opencascade::handle<StepBasic_GroupRelationship>  , Standard_Transient >>(m.attr("StepBasic_GroupRelationship"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_GroupRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Group> & ,  const opencascade::handle<StepBasic_Group> &  ) ) static_cast<void (StepBasic_GroupRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Group> & ,  const opencascade::handle<StepBasic_Group> &  ) >(&StepBasic_GroupRelationship::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"),  py::arg("aRelatingGroup"),  py::arg("aRelatedGroup"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_GroupRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_GroupRelationship::*)() const>(&StepBasic_GroupRelationship::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_GroupRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_GroupRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_GroupRelationship::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_GroupRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_GroupRelationship::*)() const>(&StepBasic_GroupRelationship::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_GroupRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_GroupRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_GroupRelationship::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_GroupRelationship::*)() const) static_cast<Standard_Boolean (StepBasic_GroupRelationship::*)() const>(&StepBasic_GroupRelationship::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("RelatingGroup",
             (opencascade::handle<StepBasic_Group> (StepBasic_GroupRelationship::*)() const) static_cast<opencascade::handle<StepBasic_Group> (StepBasic_GroupRelationship::*)() const>(&StepBasic_GroupRelationship::RelatingGroup),
             R"#(Returns field RelatingGroup)#" )
        .def("SetRelatingGroup",
             (void (StepBasic_GroupRelationship::*)( const opencascade::handle<StepBasic_Group> &  ) ) static_cast<void (StepBasic_GroupRelationship::*)( const opencascade::handle<StepBasic_Group> &  ) >(&StepBasic_GroupRelationship::SetRelatingGroup),
             R"#(Set field RelatingGroup)#"  , py::arg("RelatingGroup"))
        .def("RelatedGroup",
             (opencascade::handle<StepBasic_Group> (StepBasic_GroupRelationship::*)() const) static_cast<opencascade::handle<StepBasic_Group> (StepBasic_GroupRelationship::*)() const>(&StepBasic_GroupRelationship::RelatedGroup),
             R"#(Returns field RelatedGroup)#" )
        .def("SetRelatedGroup",
             (void (StepBasic_GroupRelationship::*)( const opencascade::handle<StepBasic_Group> &  ) ) static_cast<void (StepBasic_GroupRelationship::*)( const opencascade::handle<StepBasic_Group> &  ) >(&StepBasic_GroupRelationship::SetRelatedGroup),
             R"#(Set field RelatedGroup)#"  , py::arg("RelatedGroup"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_GroupRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_GroupRelationship::*)() const>(&StepBasic_GroupRelationship::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_GroupRelationship::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_GroupRelationship::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DocumentUsageConstraint ,opencascade::handle<StepBasic_DocumentUsageConstraint>  , Standard_Transient >>(m.attr("StepBasic_DocumentUsageConstraint"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DocumentUsageConstraint::*)( const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentUsageConstraint::*)( const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentUsageConstraint::Init),
             R"#(None)#"  , py::arg("aSource"),  py::arg("ase"),  py::arg("asev"))
        .def("Source",
             (opencascade::handle<StepBasic_Document> (StepBasic_DocumentUsageConstraint::*)() const) static_cast<opencascade::handle<StepBasic_Document> (StepBasic_DocumentUsageConstraint::*)() const>(&StepBasic_DocumentUsageConstraint::Source),
             R"#(None)#" )
        .def("SetSource",
             (void (StepBasic_DocumentUsageConstraint::*)( const opencascade::handle<StepBasic_Document> &  ) ) static_cast<void (StepBasic_DocumentUsageConstraint::*)( const opencascade::handle<StepBasic_Document> &  ) >(&StepBasic_DocumentUsageConstraint::SetSource),
             R"#(None)#"  , py::arg("aSource"))
        .def("SubjectElement",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentUsageConstraint::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentUsageConstraint::*)() const>(&StepBasic_DocumentUsageConstraint::SubjectElement),
             R"#(None)#" )
        .def("SetSubjectElement",
             (void (StepBasic_DocumentUsageConstraint::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentUsageConstraint::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentUsageConstraint::SetSubjectElement),
             R"#(None)#"  , py::arg("ase"))
        .def("SubjectElementValue",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentUsageConstraint::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentUsageConstraint::*)() const>(&StepBasic_DocumentUsageConstraint::SubjectElementValue),
             R"#(None)#" )
        .def("SetSubjectElementValue",
             (void (StepBasic_DocumentUsageConstraint::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentUsageConstraint::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentUsageConstraint::SetSubjectElementValue),
             R"#(None)#"  , py::arg("asev"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentUsageConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentUsageConstraint::*)() const>(&StepBasic_DocumentUsageConstraint::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentUsageConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DocumentUsageConstraint::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinitionFormation ,opencascade::handle<StepBasic_ProductDefinitionFormation>  , Standard_Transient >>(m.attr("StepBasic_ProductDefinitionFormation"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductDefinitionFormation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Product> &  ) ) static_cast<void (StepBasic_ProductDefinitionFormation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Product> &  ) >(&StepBasic_ProductDefinitionFormation::Init),
             R"#(None)#"  , py::arg("aId"),  py::arg("aDescription"),  py::arg("aOfProduct"))
        .def("SetId",
             (void (StepBasic_ProductDefinitionFormation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionFormation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionFormation::SetId),
             R"#(None)#"  , py::arg("aId"))
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionFormation::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionFormation::*)() const>(&StepBasic_ProductDefinitionFormation::Id),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepBasic_ProductDefinitionFormation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionFormation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionFormation::SetDescription),
             R"#(None)#"  , py::arg("aDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionFormation::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionFormation::*)() const>(&StepBasic_ProductDefinitionFormation::Description),
             R"#(None)#" )
        .def("SetOfProduct",
             (void (StepBasic_ProductDefinitionFormation::*)( const opencascade::handle<StepBasic_Product> &  ) ) static_cast<void (StepBasic_ProductDefinitionFormation::*)( const opencascade::handle<StepBasic_Product> &  ) >(&StepBasic_ProductDefinitionFormation::SetOfProduct),
             R"#(None)#"  , py::arg("aOfProduct"))
        .def("OfProduct",
             (opencascade::handle<StepBasic_Product> (StepBasic_ProductDefinitionFormation::*)() const) static_cast<opencascade::handle<StepBasic_Product> (StepBasic_ProductDefinitionFormation::*)() const>(&StepBasic_ProductDefinitionFormation::OfProduct),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormation::*)() const>(&StepBasic_ProductDefinitionFormation::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionFormation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductDefinitionFormation::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_NameAssignment ,opencascade::handle<StepBasic_NameAssignment>  , Standard_Transient >>(m.attr("StepBasic_NameAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_NameAssignment::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_NameAssignment::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_NameAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aAssignedName"))
        .def("AssignedName",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_NameAssignment::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_NameAssignment::*)() const>(&StepBasic_NameAssignment::AssignedName),
             R"#(Returns field AssignedName)#" )
        .def("SetAssignedName",
             (void (StepBasic_NameAssignment::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_NameAssignment::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_NameAssignment::SetAssignedName),
             R"#(Set field AssignedName)#"  , py::arg("AssignedName"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_NameAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_NameAssignment::*)() const>(&StepBasic_NameAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_NameAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_NameAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ThermodynamicTemperatureUnit ,opencascade::handle<StepBasic_ThermodynamicTemperatureUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_ThermodynamicTemperatureUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ThermodynamicTemperatureUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ThermodynamicTemperatureUnit::*)() const>(&StepBasic_ThermodynamicTemperatureUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ThermodynamicTemperatureUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ThermodynamicTemperatureUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinitionContext ,opencascade::handle<StepBasic_ProductDefinitionContext>  , StepBasic_ApplicationContextElement >>(m.attr("StepBasic_ProductDefinitionContext"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductDefinitionContext::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ApplicationContext> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionContext::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ApplicationContext> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionContext::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aFrameOfReference"),  py::arg("aLifeCycleStage"))
        .def("SetLifeCycleStage",
             (void (StepBasic_ProductDefinitionContext::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionContext::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionContext::SetLifeCycleStage),
             R"#(None)#"  , py::arg("aLifeCycleStage"))
        .def("LifeCycleStage",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionContext::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionContext::*)() const>(&StepBasic_ProductDefinitionContext::LifeCycleStage),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionContext::*)() const>(&StepBasic_ProductDefinitionContext::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductDefinitionContext::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_HArray1OfDerivedUnitElement ,std::unique_ptr<StepBasic_HArray1OfDerivedUnitElement>  >>(m.attr("StepBasic_HArray1OfDerivedUnitElement"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_DerivedUnitElement> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_DerivedUnitElement> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepBasic_Array1OfDerivedUnitElement & (StepBasic_HArray1OfDerivedUnitElement::*)() const) static_cast<const StepBasic_Array1OfDerivedUnitElement & (StepBasic_HArray1OfDerivedUnitElement::*)() const>(&StepBasic_HArray1OfDerivedUnitElement::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfDerivedUnitElement & (StepBasic_HArray1OfDerivedUnitElement::*)() ) static_cast<StepBasic_Array1OfDerivedUnitElement & (StepBasic_HArray1OfDerivedUnitElement::*)() >(&StepBasic_HArray1OfDerivedUnitElement::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfDerivedUnitElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfDerivedUnitElement::*)() const>(&StepBasic_HArray1OfDerivedUnitElement::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfDerivedUnitElement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfDerivedUnitElement::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<StepBasic_DateAndTimeAssignment ,opencascade::handle<StepBasic_DateAndTimeAssignment>>(m,"StepBasic_DateAndTimeAssignment");

    static_cast<py::class_<StepBasic_DateAndTimeAssignment ,opencascade::handle<StepBasic_DateAndTimeAssignment>  , Standard_Transient >>(m.attr("StepBasic_DateAndTimeAssignment"))
        .def("Init",
             (void (StepBasic_DateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  const opencascade::handle<StepBasic_DateTimeRole> &  ) ) static_cast<void (StepBasic_DateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  const opencascade::handle<StepBasic_DateTimeRole> &  ) >(&StepBasic_DateAndTimeAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedDateAndTime"),  py::arg("aRole"))
        .def("SetAssignedDateAndTime",
             (void (StepBasic_DateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> &  ) ) static_cast<void (StepBasic_DateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> &  ) >(&StepBasic_DateAndTimeAssignment::SetAssignedDateAndTime),
             R"#(None)#"  , py::arg("aAssignedDateAndTime"))
        .def("AssignedDateAndTime",
             (opencascade::handle<StepBasic_DateAndTime> (StepBasic_DateAndTimeAssignment::*)() const) static_cast<opencascade::handle<StepBasic_DateAndTime> (StepBasic_DateAndTimeAssignment::*)() const>(&StepBasic_DateAndTimeAssignment::AssignedDateAndTime),
             R"#(None)#" )
        .def("SetRole",
             (void (StepBasic_DateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateTimeRole> &  ) ) static_cast<void (StepBasic_DateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateTimeRole> &  ) >(&StepBasic_DateAndTimeAssignment::SetRole),
             R"#(None)#"  , py::arg("aRole"))
        .def("Role",
             (opencascade::handle<StepBasic_DateTimeRole> (StepBasic_DateAndTimeAssignment::*)() const) static_cast<opencascade::handle<StepBasic_DateTimeRole> (StepBasic_DateAndTimeAssignment::*)() const>(&StepBasic_DateAndTimeAssignment::Role),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DateAndTimeAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DateAndTimeAssignment::*)() const>(&StepBasic_DateAndTimeAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DateAndTimeAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DateAndTimeAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Organization ,opencascade::handle<StepBasic_Organization>  , Standard_Transient >>(m.attr("StepBasic_Organization"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Organization::*)( const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Organization::*)( const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Organization::Init),
             R"#(None)#"  , py::arg("hasAid"),  py::arg("aId"),  py::arg("aName"),  py::arg("aDescription"))
        .def("SetId",
             (void (StepBasic_Organization::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Organization::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Organization::SetId),
             R"#(None)#"  , py::arg("aId"))
        .def("UnSetId",
             (void (StepBasic_Organization::*)() ) static_cast<void (StepBasic_Organization::*)() >(&StepBasic_Organization::UnSetId),
             R"#(None)#" )
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Organization::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Organization::*)() const>(&StepBasic_Organization::Id),
             R"#(None)#" )
        .def("HasId",
             (Standard_Boolean (StepBasic_Organization::*)() const) static_cast<Standard_Boolean (StepBasic_Organization::*)() const>(&StepBasic_Organization::HasId),
             R"#(None)#" )
        .def("SetName",
             (void (StepBasic_Organization::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Organization::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Organization::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Organization::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Organization::*)() const>(&StepBasic_Organization::Name),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepBasic_Organization::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Organization::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Organization::SetDescription),
             R"#(None)#"  , py::arg("aDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Organization::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Organization::*)() const>(&StepBasic_Organization::Description),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Organization::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Organization::*)() const>(&StepBasic_Organization::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Organization::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Organization::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_TimeUnit ,opencascade::handle<StepBasic_TimeUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_TimeUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_TimeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_TimeUnit::*)() const>(&StepBasic_TimeUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_TimeUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_TimeUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_CoordinatedUniversalTimeOffset ,opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset>  , Standard_Transient >>(m.attr("StepBasic_CoordinatedUniversalTimeOffset"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_CoordinatedUniversalTimeOffset::*)( const Standard_Integer ,  const Standard_Boolean ,  const Standard_Integer ,  const StepBasic_AheadOrBehind  ) ) static_cast<void (StepBasic_CoordinatedUniversalTimeOffset::*)( const Standard_Integer ,  const Standard_Boolean ,  const Standard_Integer ,  const StepBasic_AheadOrBehind  ) >(&StepBasic_CoordinatedUniversalTimeOffset::Init),
             R"#(None)#"  , py::arg("aHourOffset"),  py::arg("hasAminuteOffset"),  py::arg("aMinuteOffset"),  py::arg("aSense"))
        .def("SetHourOffset",
             (void (StepBasic_CoordinatedUniversalTimeOffset::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_CoordinatedUniversalTimeOffset::*)( const Standard_Integer  ) >(&StepBasic_CoordinatedUniversalTimeOffset::SetHourOffset),
             R"#(None)#"  , py::arg("aHourOffset"))
        .def("HourOffset",
             (Standard_Integer (StepBasic_CoordinatedUniversalTimeOffset::*)() const) static_cast<Standard_Integer (StepBasic_CoordinatedUniversalTimeOffset::*)() const>(&StepBasic_CoordinatedUniversalTimeOffset::HourOffset),
             R"#(None)#" )
        .def("SetMinuteOffset",
             (void (StepBasic_CoordinatedUniversalTimeOffset::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_CoordinatedUniversalTimeOffset::*)( const Standard_Integer  ) >(&StepBasic_CoordinatedUniversalTimeOffset::SetMinuteOffset),
             R"#(None)#"  , py::arg("aMinuteOffset"))
        .def("UnSetMinuteOffset",
             (void (StepBasic_CoordinatedUniversalTimeOffset::*)() ) static_cast<void (StepBasic_CoordinatedUniversalTimeOffset::*)() >(&StepBasic_CoordinatedUniversalTimeOffset::UnSetMinuteOffset),
             R"#(None)#" )
        .def("MinuteOffset",
             (Standard_Integer (StepBasic_CoordinatedUniversalTimeOffset::*)() const) static_cast<Standard_Integer (StepBasic_CoordinatedUniversalTimeOffset::*)() const>(&StepBasic_CoordinatedUniversalTimeOffset::MinuteOffset),
             R"#(None)#" )
        .def("HasMinuteOffset",
             (Standard_Boolean (StepBasic_CoordinatedUniversalTimeOffset::*)() const) static_cast<Standard_Boolean (StepBasic_CoordinatedUniversalTimeOffset::*)() const>(&StepBasic_CoordinatedUniversalTimeOffset::HasMinuteOffset),
             R"#(None)#" )
        .def("SetSense",
             (void (StepBasic_CoordinatedUniversalTimeOffset::*)( const StepBasic_AheadOrBehind  ) ) static_cast<void (StepBasic_CoordinatedUniversalTimeOffset::*)( const StepBasic_AheadOrBehind  ) >(&StepBasic_CoordinatedUniversalTimeOffset::SetSense),
             R"#(None)#"  , py::arg("aSense"))
        .def("Sense",
             (StepBasic_AheadOrBehind (StepBasic_CoordinatedUniversalTimeOffset::*)() const) static_cast<StepBasic_AheadOrBehind (StepBasic_CoordinatedUniversalTimeOffset::*)() const>(&StepBasic_CoordinatedUniversalTimeOffset::Sense),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_CoordinatedUniversalTimeOffset::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_CoordinatedUniversalTimeOffset::*)() const>(&StepBasic_CoordinatedUniversalTimeOffset::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_CoordinatedUniversalTimeOffset::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_CoordinatedUniversalTimeOffset::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DerivedUnit ,opencascade::handle<StepBasic_DerivedUnit>  , Standard_Transient >>(m.attr("StepBasic_DerivedUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DerivedUnit::*)( const opencascade::handle<StepBasic_HArray1OfDerivedUnitElement> &  ) ) static_cast<void (StepBasic_DerivedUnit::*)( const opencascade::handle<StepBasic_HArray1OfDerivedUnitElement> &  ) >(&StepBasic_DerivedUnit::Init),
             R"#(None)#"  , py::arg("elements"))
        .def("SetElements",
             (void (StepBasic_DerivedUnit::*)( const opencascade::handle<StepBasic_HArray1OfDerivedUnitElement> &  ) ) static_cast<void (StepBasic_DerivedUnit::*)( const opencascade::handle<StepBasic_HArray1OfDerivedUnitElement> &  ) >(&StepBasic_DerivedUnit::SetElements),
             R"#(None)#"  , py::arg("elements"))
        .def("Elements",
             (opencascade::handle<StepBasic_HArray1OfDerivedUnitElement> (StepBasic_DerivedUnit::*)() const) static_cast<opencascade::handle<StepBasic_HArray1OfDerivedUnitElement> (StepBasic_DerivedUnit::*)() const>(&StepBasic_DerivedUnit::Elements),
             R"#(None)#" )
        .def("NbElements",
             (Standard_Integer (StepBasic_DerivedUnit::*)() const) static_cast<Standard_Integer (StepBasic_DerivedUnit::*)() const>(&StepBasic_DerivedUnit::NbElements),
             R"#(None)#" )
        .def("ElementsValue",
             (opencascade::handle<StepBasic_DerivedUnitElement> (StepBasic_DerivedUnit::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepBasic_DerivedUnitElement> (StepBasic_DerivedUnit::*)( const Standard_Integer  ) const>(&StepBasic_DerivedUnit::ElementsValue),
             R"#(None)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DerivedUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DerivedUnit::*)() const>(&StepBasic_DerivedUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DerivedUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DerivedUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_IdentificationRole ,opencascade::handle<StepBasic_IdentificationRole>  , Standard_Transient >>(m.attr("StepBasic_IdentificationRole"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_IdentificationRole::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_IdentificationRole::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_IdentificationRole::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_IdentificationRole::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_IdentificationRole::*)() const>(&StepBasic_IdentificationRole::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_IdentificationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_IdentificationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_IdentificationRole::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_IdentificationRole::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_IdentificationRole::*)() const>(&StepBasic_IdentificationRole::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_IdentificationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_IdentificationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_IdentificationRole::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_IdentificationRole::*)() const) static_cast<Standard_Boolean (StepBasic_IdentificationRole::*)() const>(&StepBasic_IdentificationRole::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_IdentificationRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_IdentificationRole::*)() const>(&StepBasic_IdentificationRole::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_IdentificationRole::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_IdentificationRole::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_EffectivityAssignment ,opencascade::handle<StepBasic_EffectivityAssignment>  , Standard_Transient >>(m.attr("StepBasic_EffectivityAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_EffectivityAssignment::*)( const opencascade::handle<StepBasic_Effectivity> &  ) ) static_cast<void (StepBasic_EffectivityAssignment::*)( const opencascade::handle<StepBasic_Effectivity> &  ) >(&StepBasic_EffectivityAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aAssignedEffectivity"))
        .def("AssignedEffectivity",
             (opencascade::handle<StepBasic_Effectivity> (StepBasic_EffectivityAssignment::*)() const) static_cast<opencascade::handle<StepBasic_Effectivity> (StepBasic_EffectivityAssignment::*)() const>(&StepBasic_EffectivityAssignment::AssignedEffectivity),
             R"#(Returns field AssignedEffectivity)#" )
        .def("SetAssignedEffectivity",
             (void (StepBasic_EffectivityAssignment::*)( const opencascade::handle<StepBasic_Effectivity> &  ) ) static_cast<void (StepBasic_EffectivityAssignment::*)( const opencascade::handle<StepBasic_Effectivity> &  ) >(&StepBasic_EffectivityAssignment::SetAssignedEffectivity),
             R"#(Set field AssignedEffectivity)#"  , py::arg("AssignedEffectivity"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_EffectivityAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_EffectivityAssignment::*)() const>(&StepBasic_EffectivityAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_EffectivityAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_EffectivityAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Unit ,std::unique_ptr<StepBasic_Unit>  , StepData_SelectType >>(m.attr("StepBasic_Unit"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepBasic_Unit::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepBasic_Unit::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepBasic_Unit::CaseNum),
             R"#(Recognizes a type of Unit Entity 1 -> NamedUnit 2 -> DerivedUnit)#"  , py::arg("ent"))
        .def("NamedUnit",
             (opencascade::handle<StepBasic_NamedUnit> (StepBasic_Unit::*)() const) static_cast<opencascade::handle<StepBasic_NamedUnit> (StepBasic_Unit::*)() const>(&StepBasic_Unit::NamedUnit),
             R"#(returns Value as a NamedUnit (Null if another type))#" )
        .def("DerivedUnit",
             (opencascade::handle<StepBasic_DerivedUnit> (StepBasic_Unit::*)() const) static_cast<opencascade::handle<StepBasic_DerivedUnit> (StepBasic_Unit::*)() const>(&StepBasic_Unit::DerivedUnit),
             R"#(returns Value as a DerivedUnit (Null if another type))#" )
;


    static_cast<py::class_<StepBasic_SecurityClassification ,opencascade::handle<StepBasic_SecurityClassification>  , Standard_Transient >>(m.attr("StepBasic_SecurityClassification"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_SecurityClassification::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_SecurityClassificationLevel> &  ) ) static_cast<void (StepBasic_SecurityClassification::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_SecurityClassificationLevel> &  ) >(&StepBasic_SecurityClassification::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPurpose"),  py::arg("aSecurityLevel"))
        .def("SetName",
             (void (StepBasic_SecurityClassification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_SecurityClassification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_SecurityClassification::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_SecurityClassification::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_SecurityClassification::*)() const>(&StepBasic_SecurityClassification::Name),
             R"#(None)#" )
        .def("SetPurpose",
             (void (StepBasic_SecurityClassification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_SecurityClassification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_SecurityClassification::SetPurpose),
             R"#(None)#"  , py::arg("aPurpose"))
        .def("Purpose",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_SecurityClassification::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_SecurityClassification::*)() const>(&StepBasic_SecurityClassification::Purpose),
             R"#(None)#" )
        .def("SetSecurityLevel",
             (void (StepBasic_SecurityClassification::*)( const opencascade::handle<StepBasic_SecurityClassificationLevel> &  ) ) static_cast<void (StepBasic_SecurityClassification::*)( const opencascade::handle<StepBasic_SecurityClassificationLevel> &  ) >(&StepBasic_SecurityClassification::SetSecurityLevel),
             R"#(None)#"  , py::arg("aSecurityLevel"))
        .def("SecurityLevel",
             (opencascade::handle<StepBasic_SecurityClassificationLevel> (StepBasic_SecurityClassification::*)() const) static_cast<opencascade::handle<StepBasic_SecurityClassificationLevel> (StepBasic_SecurityClassification::*)() const>(&StepBasic_SecurityClassification::SecurityLevel),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassification::*)() const>(&StepBasic_SecurityClassification::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SecurityClassification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SecurityClassification::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_HArray1OfProduct ,std::unique_ptr<StepBasic_HArray1OfProduct>  >>(m.attr("StepBasic_HArray1OfProduct"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_Product> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_Product> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepBasic_Array1OfProduct & (StepBasic_HArray1OfProduct::*)() const) static_cast<const StepBasic_Array1OfProduct & (StepBasic_HArray1OfProduct::*)() const>(&StepBasic_HArray1OfProduct::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfProduct & (StepBasic_HArray1OfProduct::*)() ) static_cast<StepBasic_Array1OfProduct & (StepBasic_HArray1OfProduct::*)() >(&StepBasic_HArray1OfProduct::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProduct::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProduct::*)() const>(&StepBasic_HArray1OfProduct::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfProduct::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfProduct::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductContext ,opencascade::handle<StepBasic_ProductContext>  , StepBasic_ApplicationContextElement >>(m.attr("StepBasic_ProductContext"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductContext::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ApplicationContext> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductContext::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ApplicationContext> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductContext::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aFrameOfReference"),  py::arg("aDisciplineType"))
        .def("SetDisciplineType",
             (void (StepBasic_ProductContext::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductContext::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductContext::SetDisciplineType),
             R"#(None)#"  , py::arg("aDisciplineType"))
        .def("DisciplineType",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductContext::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductContext::*)() const>(&StepBasic_ProductContext::DisciplineType),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductContext::*)() const>(&StepBasic_ProductContext::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductContext::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinitionOrReference ,std::unique_ptr<StepBasic_ProductDefinitionOrReference>  , StepData_SelectType >>(m.attr("StepBasic_ProductDefinitionOrReference"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepBasic_ProductDefinitionOrReference::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepBasic_ProductDefinitionOrReference::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepBasic_ProductDefinitionOrReference::CaseNum),
             R"#(Recognizes a ProductDefinitionOrReference Kind Entity that is : 1 -> ProductDefinition 2 -> ProductDefinitionReference 3 -> ProductDefinitionReferenceWithLocalPresentation 0 else)#"  , py::arg("ent"))
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepBasic_ProductDefinitionOrReference::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepBasic_ProductDefinitionOrReference::*)() const>(&StepBasic_ProductDefinitionOrReference::ProductDefinition),
             R"#(returns Value as a ProductDefinition (Null if another type))#" )
        .def("ProductDefinitionReference",
             (opencascade::handle<StepBasic_ProductDefinitionReference> (StepBasic_ProductDefinitionOrReference::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionReference> (StepBasic_ProductDefinitionOrReference::*)() const>(&StepBasic_ProductDefinitionOrReference::ProductDefinitionReference),
             R"#(returns Value as a ProductDefinitionReference (Null if another type))#" )
        .def("ProductDefinitionReferenceWithLocalRepresentation",
             (opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation> (StepBasic_ProductDefinitionOrReference::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation> (StepBasic_ProductDefinitionOrReference::*)() const>(&StepBasic_ProductDefinitionOrReference::ProductDefinitionReferenceWithLocalRepresentation),
             R"#(returns Value as a ProductDefinitionReferenceWithLocalRepresentation (Null if another type))#" )
;


    static_cast<py::class_<StepBasic_DigitalDocument ,opencascade::handle<StepBasic_DigitalDocument>  , StepBasic_Document >>(m.attr("StepBasic_DigitalDocument"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DigitalDocument::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DigitalDocument::*)() const>(&StepBasic_DigitalDocument::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DigitalDocument::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DigitalDocument::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ExternalIdentificationAssignment ,opencascade::handle<StepBasic_ExternalIdentificationAssignment>  , StepBasic_IdentificationAssignment >>(m.attr("StepBasic_ExternalIdentificationAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ExternalIdentificationAssignment::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_IdentificationRole> & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) ) static_cast<void (StepBasic_ExternalIdentificationAssignment::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_IdentificationRole> & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) >(&StepBasic_ExternalIdentificationAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aIdentificationAssignment_AssignedId"),  py::arg("aIdentificationAssignment_Role"),  py::arg("aSource"))
        .def("Source",
             (opencascade::handle<StepBasic_ExternalSource> (StepBasic_ExternalIdentificationAssignment::*)() const) static_cast<opencascade::handle<StepBasic_ExternalSource> (StepBasic_ExternalIdentificationAssignment::*)() const>(&StepBasic_ExternalIdentificationAssignment::Source),
             R"#(Returns field Source)#" )
        .def("SetSource",
             (void (StepBasic_ExternalIdentificationAssignment::*)( const opencascade::handle<StepBasic_ExternalSource> &  ) ) static_cast<void (StepBasic_ExternalIdentificationAssignment::*)( const opencascade::handle<StepBasic_ExternalSource> &  ) >(&StepBasic_ExternalIdentificationAssignment::SetSource),
             R"#(Set field Source)#"  , py::arg("Source"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ExternalIdentificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ExternalIdentificationAssignment::*)() const>(&StepBasic_ExternalIdentificationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ExternalIdentificationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ExternalIdentificationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_VolumeUnit ,opencascade::handle<StepBasic_VolumeUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_VolumeUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_VolumeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_VolumeUnit::*)() const>(&StepBasic_VolumeUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_VolumeUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_VolumeUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinitionFormationWithSpecifiedSource ,opencascade::handle<StepBasic_ProductDefinitionFormationWithSpecifiedSource>  , StepBasic_ProductDefinitionFormation >>(m.attr("StepBasic_ProductDefinitionFormationWithSpecifiedSource"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductDefinitionFormationWithSpecifiedSource::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Product> & ,  const StepBasic_Source  ) ) static_cast<void (StepBasic_ProductDefinitionFormationWithSpecifiedSource::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Product> & ,  const StepBasic_Source  ) >(&StepBasic_ProductDefinitionFormationWithSpecifiedSource::Init),
             R"#(None)#"  , py::arg("aId"),  py::arg("aDescription"),  py::arg("aOfProduct"),  py::arg("aMakeOrBuy"))
        .def("SetMakeOrBuy",
             (void (StepBasic_ProductDefinitionFormationWithSpecifiedSource::*)( const StepBasic_Source  ) ) static_cast<void (StepBasic_ProductDefinitionFormationWithSpecifiedSource::*)( const StepBasic_Source  ) >(&StepBasic_ProductDefinitionFormationWithSpecifiedSource::SetMakeOrBuy),
             R"#(None)#"  , py::arg("aMakeOrBuy"))
        .def("MakeOrBuy",
             (StepBasic_Source (StepBasic_ProductDefinitionFormationWithSpecifiedSource::*)() const) static_cast<StepBasic_Source (StepBasic_ProductDefinitionFormationWithSpecifiedSource::*)() const>(&StepBasic_ProductDefinitionFormationWithSpecifiedSource::MakeOrBuy),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormationWithSpecifiedSource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormationWithSpecifiedSource::*)() const>(&StepBasic_ProductDefinitionFormationWithSpecifiedSource::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionFormationWithSpecifiedSource::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductDefinitionFormationWithSpecifiedSource::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ApplicationContext ,opencascade::handle<StepBasic_ApplicationContext>  , Standard_Transient >>(m.attr("StepBasic_ApplicationContext"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ApplicationContext::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApplicationContext::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApplicationContext::Init),
             R"#(None)#"  , py::arg("aApplication"))
        .def("SetApplication",
             (void (StepBasic_ApplicationContext::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApplicationContext::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApplicationContext::SetApplication),
             R"#(None)#"  , py::arg("aApplication"))
        .def("Application",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ApplicationContext::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ApplicationContext::*)() const>(&StepBasic_ApplicationContext::Application),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApplicationContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApplicationContext::*)() const>(&StepBasic_ApplicationContext::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApplicationContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ApplicationContext::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<StepBasic_SecurityClassificationAssignment ,opencascade::handle<StepBasic_SecurityClassificationAssignment>>(m,"StepBasic_SecurityClassificationAssignment");

    static_cast<py::class_<StepBasic_SecurityClassificationAssignment ,opencascade::handle<StepBasic_SecurityClassificationAssignment>  , Standard_Transient >>(m.attr("StepBasic_SecurityClassificationAssignment"))
        .def("Init",
             (void (StepBasic_SecurityClassificationAssignment::*)( const opencascade::handle<StepBasic_SecurityClassification> &  ) ) static_cast<void (StepBasic_SecurityClassificationAssignment::*)( const opencascade::handle<StepBasic_SecurityClassification> &  ) >(&StepBasic_SecurityClassificationAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedSecurityClassification"))
        .def("SetAssignedSecurityClassification",
             (void (StepBasic_SecurityClassificationAssignment::*)( const opencascade::handle<StepBasic_SecurityClassification> &  ) ) static_cast<void (StepBasic_SecurityClassificationAssignment::*)( const opencascade::handle<StepBasic_SecurityClassification> &  ) >(&StepBasic_SecurityClassificationAssignment::SetAssignedSecurityClassification),
             R"#(None)#"  , py::arg("aAssignedSecurityClassification"))
        .def("AssignedSecurityClassification",
             (opencascade::handle<StepBasic_SecurityClassification> (StepBasic_SecurityClassificationAssignment::*)() const) static_cast<opencascade::handle<StepBasic_SecurityClassification> (StepBasic_SecurityClassificationAssignment::*)() const>(&StepBasic_SecurityClassificationAssignment::AssignedSecurityClassification),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassificationAssignment::*)() const>(&StepBasic_SecurityClassificationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SecurityClassificationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SecurityClassificationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SiUnit ,opencascade::handle<StepBasic_SiUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_SiUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_SiUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) ) static_cast<void (StepBasic_SiUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) >(&StepBasic_SiUnit::Init),
             R"#(None)#"  , py::arg("hasAprefix"),  py::arg("aPrefix"),  py::arg("aName"))
        .def("SetPrefix",
             (void (StepBasic_SiUnit::*)( const StepBasic_SiPrefix  ) ) static_cast<void (StepBasic_SiUnit::*)( const StepBasic_SiPrefix  ) >(&StepBasic_SiUnit::SetPrefix),
             R"#(None)#"  , py::arg("aPrefix"))
        .def("UnSetPrefix",
             (void (StepBasic_SiUnit::*)() ) static_cast<void (StepBasic_SiUnit::*)() >(&StepBasic_SiUnit::UnSetPrefix),
             R"#(None)#" )
        .def("Prefix",
             (StepBasic_SiPrefix (StepBasic_SiUnit::*)() const) static_cast<StepBasic_SiPrefix (StepBasic_SiUnit::*)() const>(&StepBasic_SiUnit::Prefix),
             R"#(None)#" )
        .def("HasPrefix",
             (Standard_Boolean (StepBasic_SiUnit::*)() const) static_cast<Standard_Boolean (StepBasic_SiUnit::*)() const>(&StepBasic_SiUnit::HasPrefix),
             R"#(None)#" )
        .def("SetName",
             (void (StepBasic_SiUnit::*)( const StepBasic_SiUnitName  ) ) static_cast<void (StepBasic_SiUnit::*)( const StepBasic_SiUnitName  ) >(&StepBasic_SiUnit::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (StepBasic_SiUnitName (StepBasic_SiUnit::*)() const) static_cast<StepBasic_SiUnitName (StepBasic_SiUnit::*)() const>(&StepBasic_SiUnit::Name),
             R"#(None)#" )
        .def("SetDimensions",
             (void (StepBasic_SiUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> &  ) ) static_cast<void (StepBasic_SiUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> &  ) >(&StepBasic_SiUnit::SetDimensions),
             R"#(None)#"  , py::arg("aDimensions"))
        .def("Dimensions",
             (opencascade::handle<StepBasic_DimensionalExponents> (StepBasic_SiUnit::*)() const) static_cast<opencascade::handle<StepBasic_DimensionalExponents> (StepBasic_SiUnit::*)() const>(&StepBasic_SiUnit::Dimensions),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnit::*)() const>(&StepBasic_SiUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SiUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinitionRelationship ,opencascade::handle<StepBasic_ProductDefinitionRelationship>  , Standard_Transient >>(m.attr("StepBasic_ProductDefinitionRelationship"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinition> & ,  const opencascade::handle<StepBasic_ProductDefinition> &  ) ) static_cast<void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinition> & ,  const opencascade::handle<StepBasic_ProductDefinition> &  ) >(&StepBasic_ProductDefinitionRelationship::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aId"),  py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"),  py::arg("aRelatingProductDefinition"),  py::arg("aRelatedProductDefinition"))
        .def("Init",
             (void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const StepBasic_ProductDefinitionOrReference & ,  const StepBasic_ProductDefinitionOrReference &  ) ) static_cast<void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const StepBasic_ProductDefinitionOrReference & ,  const StepBasic_ProductDefinitionOrReference &  ) >(&StepBasic_ProductDefinitionRelationship::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aId"),  py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"),  py::arg("aRelatingProductDefinition"),  py::arg("aRelatedProductDefinition"))
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionRelationship::*)() const>(&StepBasic_ProductDefinitionRelationship::Id),
             R"#(Returns field Id)#" )
        .def("SetId",
             (void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionRelationship::SetId),
             R"#(Set field Id)#"  , py::arg("Id"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionRelationship::*)() const>(&StepBasic_ProductDefinitionRelationship::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionRelationship::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionRelationship::*)() const>(&StepBasic_ProductDefinitionRelationship::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionRelationship::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_ProductDefinitionRelationship::*)() const) static_cast<Standard_Boolean (StepBasic_ProductDefinitionRelationship::*)() const>(&StepBasic_ProductDefinitionRelationship::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("RelatingProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepBasic_ProductDefinitionRelationship::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepBasic_ProductDefinitionRelationship::*)() const>(&StepBasic_ProductDefinitionRelationship::RelatingProductDefinition),
             R"#(Returns field RelatingProductDefinition)#" )
        .def("RelatingProductDefinitionAP242",
             (StepBasic_ProductDefinitionOrReference (StepBasic_ProductDefinitionRelationship::*)() const) static_cast<StepBasic_ProductDefinitionOrReference (StepBasic_ProductDefinitionRelationship::*)() const>(&StepBasic_ProductDefinitionRelationship::RelatingProductDefinitionAP242),
             R"#(Returns field RelatingProductDefinition in AP242)#" )
        .def("SetRelatingProductDefinition",
             (void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<StepBasic_ProductDefinition> &  ) ) static_cast<void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<StepBasic_ProductDefinition> &  ) >(&StepBasic_ProductDefinitionRelationship::SetRelatingProductDefinition),
             R"#(Set field RelatingProductDefinition)#"  , py::arg("RelatingProductDefinition"))
        .def("SetRelatingProductDefinition",
             (void (StepBasic_ProductDefinitionRelationship::*)( const StepBasic_ProductDefinitionOrReference &  ) ) static_cast<void (StepBasic_ProductDefinitionRelationship::*)( const StepBasic_ProductDefinitionOrReference &  ) >(&StepBasic_ProductDefinitionRelationship::SetRelatingProductDefinition),
             R"#(Set field RelatingProductDefinition in AP242)#"  , py::arg("RelatingProductDefinition"))
        .def("RelatedProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepBasic_ProductDefinitionRelationship::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepBasic_ProductDefinitionRelationship::*)() const>(&StepBasic_ProductDefinitionRelationship::RelatedProductDefinition),
             R"#(Returns field RelatedProductDefinition)#" )
        .def("RelatedProductDefinitionAP242",
             (StepBasic_ProductDefinitionOrReference (StepBasic_ProductDefinitionRelationship::*)() const) static_cast<StepBasic_ProductDefinitionOrReference (StepBasic_ProductDefinitionRelationship::*)() const>(&StepBasic_ProductDefinitionRelationship::RelatedProductDefinitionAP242),
             R"#(Returns field RelatedProductDefinition in AP242)#" )
        .def("SetRelatedProductDefinition",
             (void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<StepBasic_ProductDefinition> &  ) ) static_cast<void (StepBasic_ProductDefinitionRelationship::*)( const opencascade::handle<StepBasic_ProductDefinition> &  ) >(&StepBasic_ProductDefinitionRelationship::SetRelatedProductDefinition),
             R"#(Set field RelatedProductDefinition)#"  , py::arg("RelatedProductDefinition"))
        .def("SetRelatedProductDefinition",
             (void (StepBasic_ProductDefinitionRelationship::*)( const StepBasic_ProductDefinitionOrReference &  ) ) static_cast<void (StepBasic_ProductDefinitionRelationship::*)( const StepBasic_ProductDefinitionOrReference &  ) >(&StepBasic_ProductDefinitionRelationship::SetRelatedProductDefinition),
             R"#(Set field RelatedProductDefinition in AP242)#"  , py::arg("RelatedProductDefinition"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionRelationship::*)() const>(&StepBasic_ProductDefinitionRelationship::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionRelationship::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductDefinitionRelationship::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DesignContext ,opencascade::handle<StepBasic_DesignContext>  , StepBasic_ProductDefinitionContext >>(m.attr("StepBasic_DesignContext"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DesignContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DesignContext::*)() const>(&StepBasic_DesignContext::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DesignContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DesignContext::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductConceptContext ,opencascade::handle<StepBasic_ProductConceptContext>  , StepBasic_ApplicationContextElement >>(m.attr("StepBasic_ProductConceptContext"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductConceptContext::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ApplicationContext> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductConceptContext::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ApplicationContext> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductConceptContext::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aApplicationContextElement_Name"),  py::arg("aApplicationContextElement_FrameOfReference"),  py::arg("aMarketSegmentType"))
        .def("MarketSegmentType",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductConceptContext::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductConceptContext::*)() const>(&StepBasic_ProductConceptContext::MarketSegmentType),
             R"#(Returns field MarketSegmentType)#" )
        .def("SetMarketSegmentType",
             (void (StepBasic_ProductConceptContext::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductConceptContext::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductConceptContext::SetMarketSegmentType),
             R"#(Set field MarketSegmentType)#"  , py::arg("MarketSegmentType"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductConceptContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductConceptContext::*)() const>(&StepBasic_ProductConceptContext::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductConceptContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductConceptContext::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SiUnitAndTimeUnit ,opencascade::handle<StepBasic_SiUnitAndTimeUnit>  , StepBasic_SiUnit >>(m.attr("StepBasic_SiUnitAndTimeUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_SiUnitAndTimeUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) ) static_cast<void (StepBasic_SiUnitAndTimeUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) >(&StepBasic_SiUnitAndTimeUnit::Init),
             R"#(None)#"  , py::arg("hasAprefix"),  py::arg("aPrefix"),  py::arg("aName"))
        .def("SetTimeUnit",
             (void (StepBasic_SiUnitAndTimeUnit::*)( const opencascade::handle<StepBasic_TimeUnit> &  ) ) static_cast<void (StepBasic_SiUnitAndTimeUnit::*)( const opencascade::handle<StepBasic_TimeUnit> &  ) >(&StepBasic_SiUnitAndTimeUnit::SetTimeUnit),
             R"#(None)#"  , py::arg("aTimeUnit"))
        .def("TimeUnit",
             (opencascade::handle<StepBasic_TimeUnit> (StepBasic_SiUnitAndTimeUnit::*)() const) static_cast<opencascade::handle<StepBasic_TimeUnit> (StepBasic_SiUnitAndTimeUnit::*)() const>(&StepBasic_SiUnitAndTimeUnit::TimeUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndTimeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndTimeUnit::*)() const>(&StepBasic_SiUnitAndTimeUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndTimeUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SiUnitAndTimeUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SiUnitAndThermodynamicTemperatureUnit ,opencascade::handle<StepBasic_SiUnitAndThermodynamicTemperatureUnit>  , StepBasic_SiUnit >>(m.attr("StepBasic_SiUnitAndThermodynamicTemperatureUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_SiUnitAndThermodynamicTemperatureUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) ) static_cast<void (StepBasic_SiUnitAndThermodynamicTemperatureUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) >(&StepBasic_SiUnitAndThermodynamicTemperatureUnit::Init),
             R"#(None)#"  , py::arg("hasAprefix"),  py::arg("aPrefix"),  py::arg("aName"))
        .def("SetThermodynamicTemperatureUnit",
             (void (StepBasic_SiUnitAndThermodynamicTemperatureUnit::*)( const opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> &  ) ) static_cast<void (StepBasic_SiUnitAndThermodynamicTemperatureUnit::*)( const opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> &  ) >(&StepBasic_SiUnitAndThermodynamicTemperatureUnit::SetThermodynamicTemperatureUnit),
             R"#(None)#"  , py::arg("aThermodynamicTemperatureUnit"))
        .def("ThermodynamicTemperatureUnit",
             (opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> (StepBasic_SiUnitAndThermodynamicTemperatureUnit::*)() const) static_cast<opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> (StepBasic_SiUnitAndThermodynamicTemperatureUnit::*)() const>(&StepBasic_SiUnitAndThermodynamicTemperatureUnit::ThermodynamicTemperatureUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndThermodynamicTemperatureUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndThermodynamicTemperatureUnit::*)() const>(&StepBasic_SiUnitAndThermodynamicTemperatureUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndThermodynamicTemperatureUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SiUnitAndThermodynamicTemperatureUnit::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<StepBasic_PersonAndOrganizationAssignment ,opencascade::handle<StepBasic_PersonAndOrganizationAssignment>>(m,"StepBasic_PersonAndOrganizationAssignment");

    static_cast<py::class_<StepBasic_PersonAndOrganizationAssignment ,opencascade::handle<StepBasic_PersonAndOrganizationAssignment>  , Standard_Transient >>(m.attr("StepBasic_PersonAndOrganizationAssignment"))
        .def("Init",
             (void (StepBasic_PersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> &  ) ) static_cast<void (StepBasic_PersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> &  ) >(&StepBasic_PersonAndOrganizationAssignment::Init),
             R"#(None)#"  , py::arg("aAssignedPersonAndOrganization"),  py::arg("aRole"))
        .def("SetAssignedPersonAndOrganization",
             (void (StepBasic_PersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> &  ) ) static_cast<void (StepBasic_PersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> &  ) >(&StepBasic_PersonAndOrganizationAssignment::SetAssignedPersonAndOrganization),
             R"#(None)#"  , py::arg("aAssignedPersonAndOrganization"))
        .def("AssignedPersonAndOrganization",
             (opencascade::handle<StepBasic_PersonAndOrganization> (StepBasic_PersonAndOrganizationAssignment::*)() const) static_cast<opencascade::handle<StepBasic_PersonAndOrganization> (StepBasic_PersonAndOrganizationAssignment::*)() const>(&StepBasic_PersonAndOrganizationAssignment::AssignedPersonAndOrganization),
             R"#(None)#" )
        .def("SetRole",
             (void (StepBasic_PersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganizationRole> &  ) ) static_cast<void (StepBasic_PersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganizationRole> &  ) >(&StepBasic_PersonAndOrganizationAssignment::SetRole),
             R"#(None)#"  , py::arg("aRole"))
        .def("Role",
             (opencascade::handle<StepBasic_PersonAndOrganizationRole> (StepBasic_PersonAndOrganizationAssignment::*)() const) static_cast<opencascade::handle<StepBasic_PersonAndOrganizationRole> (StepBasic_PersonAndOrganizationAssignment::*)() const>(&StepBasic_PersonAndOrganizationAssignment::Role),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganizationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganizationAssignment::*)() const>(&StepBasic_PersonAndOrganizationAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PersonAndOrganizationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_PersonAndOrganizationAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DateAndTime ,opencascade::handle<StepBasic_DateAndTime>  , Standard_Transient >>(m.attr("StepBasic_DateAndTime"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DateAndTime::*)( const opencascade::handle<StepBasic_Date> & ,  const opencascade::handle<StepBasic_LocalTime> &  ) ) static_cast<void (StepBasic_DateAndTime::*)( const opencascade::handle<StepBasic_Date> & ,  const opencascade::handle<StepBasic_LocalTime> &  ) >(&StepBasic_DateAndTime::Init),
             R"#(None)#"  , py::arg("aDateComponent"),  py::arg("aTimeComponent"))
        .def("SetDateComponent",
             (void (StepBasic_DateAndTime::*)( const opencascade::handle<StepBasic_Date> &  ) ) static_cast<void (StepBasic_DateAndTime::*)( const opencascade::handle<StepBasic_Date> &  ) >(&StepBasic_DateAndTime::SetDateComponent),
             R"#(None)#"  , py::arg("aDateComponent"))
        .def("DateComponent",
             (opencascade::handle<StepBasic_Date> (StepBasic_DateAndTime::*)() const) static_cast<opencascade::handle<StepBasic_Date> (StepBasic_DateAndTime::*)() const>(&StepBasic_DateAndTime::DateComponent),
             R"#(None)#" )
        .def("SetTimeComponent",
             (void (StepBasic_DateAndTime::*)( const opencascade::handle<StepBasic_LocalTime> &  ) ) static_cast<void (StepBasic_DateAndTime::*)( const opencascade::handle<StepBasic_LocalTime> &  ) >(&StepBasic_DateAndTime::SetTimeComponent),
             R"#(None)#"  , py::arg("aTimeComponent"))
        .def("TimeComponent",
             (opencascade::handle<StepBasic_LocalTime> (StepBasic_DateAndTime::*)() const) static_cast<opencascade::handle<StepBasic_LocalTime> (StepBasic_DateAndTime::*)() const>(&StepBasic_DateAndTime::TimeComponent),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DateAndTime::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DateAndTime::*)() const>(&StepBasic_DateAndTime::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DateAndTime::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DateAndTime::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_PersonalAddress ,opencascade::handle<StepBasic_PersonalAddress>  , StepBasic_Address >>(m.attr("StepBasic_PersonalAddress"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_PersonalAddress::*)( const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_HArray1OfPerson> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_PersonalAddress::*)( const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_HArray1OfPerson> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_PersonalAddress::Init),
             R"#(None)#"  , py::arg("hasAinternalLocation"),  py::arg("aInternalLocation"),  py::arg("hasAstreetNumber"),  py::arg("aStreetNumber"),  py::arg("hasAstreet"),  py::arg("aStreet"),  py::arg("hasApostalBox"),  py::arg("aPostalBox"),  py::arg("hasAtown"),  py::arg("aTown"),  py::arg("hasAregion"),  py::arg("aRegion"),  py::arg("hasApostalCode"),  py::arg("aPostalCode"),  py::arg("hasAcountry"),  py::arg("aCountry"),  py::arg("hasAfacsimileNumber"),  py::arg("aFacsimileNumber"),  py::arg("hasAtelephoneNumber"),  py::arg("aTelephoneNumber"),  py::arg("hasAelectronicMailAddress"),  py::arg("aElectronicMailAddress"),  py::arg("hasAtelexNumber"),  py::arg("aTelexNumber"),  py::arg("aPeople"),  py::arg("aDescription"))
        .def("SetPeople",
             (void (StepBasic_PersonalAddress::*)( const opencascade::handle<StepBasic_HArray1OfPerson> &  ) ) static_cast<void (StepBasic_PersonalAddress::*)( const opencascade::handle<StepBasic_HArray1OfPerson> &  ) >(&StepBasic_PersonalAddress::SetPeople),
             R"#(None)#"  , py::arg("aPeople"))
        .def("People",
             (opencascade::handle<StepBasic_HArray1OfPerson> (StepBasic_PersonalAddress::*)() const) static_cast<opencascade::handle<StepBasic_HArray1OfPerson> (StepBasic_PersonalAddress::*)() const>(&StepBasic_PersonalAddress::People),
             R"#(None)#" )
        .def("PeopleValue",
             (opencascade::handle<StepBasic_Person> (StepBasic_PersonalAddress::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepBasic_Person> (StepBasic_PersonalAddress::*)( const Standard_Integer  ) const>(&StepBasic_PersonalAddress::PeopleValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbPeople",
             (Standard_Integer (StepBasic_PersonalAddress::*)() const) static_cast<Standard_Integer (StepBasic_PersonalAddress::*)() const>(&StepBasic_PersonalAddress::NbPeople),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepBasic_PersonalAddress::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_PersonalAddress::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_PersonalAddress::SetDescription),
             R"#(None)#"  , py::arg("aDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_PersonalAddress::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_PersonalAddress::*)() const>(&StepBasic_PersonalAddress::Description),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PersonalAddress::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PersonalAddress::*)() const>(&StepBasic_PersonalAddress::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PersonalAddress::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_PersonalAddress::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_OrganizationalAddress ,opencascade::handle<StepBasic_OrganizationalAddress>  , StepBasic_Address >>(m.attr("StepBasic_OrganizationalAddress"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_OrganizationalAddress::*)( const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_HArray1OfOrganization> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_OrganizationalAddress::*)( const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_HArray1OfOrganization> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_OrganizationalAddress::Init),
             R"#(None)#"  , py::arg("hasAinternalLocation"),  py::arg("aInternalLocation"),  py::arg("hasAstreetNumber"),  py::arg("aStreetNumber"),  py::arg("hasAstreet"),  py::arg("aStreet"),  py::arg("hasApostalBox"),  py::arg("aPostalBox"),  py::arg("hasAtown"),  py::arg("aTown"),  py::arg("hasAregion"),  py::arg("aRegion"),  py::arg("hasApostalCode"),  py::arg("aPostalCode"),  py::arg("hasAcountry"),  py::arg("aCountry"),  py::arg("hasAfacsimileNumber"),  py::arg("aFacsimileNumber"),  py::arg("hasAtelephoneNumber"),  py::arg("aTelephoneNumber"),  py::arg("hasAelectronicMailAddress"),  py::arg("aElectronicMailAddress"),  py::arg("hasAtelexNumber"),  py::arg("aTelexNumber"),  py::arg("aOrganizations"),  py::arg("aDescription"))
        .def("SetOrganizations",
             (void (StepBasic_OrganizationalAddress::*)( const opencascade::handle<StepBasic_HArray1OfOrganization> &  ) ) static_cast<void (StepBasic_OrganizationalAddress::*)( const opencascade::handle<StepBasic_HArray1OfOrganization> &  ) >(&StepBasic_OrganizationalAddress::SetOrganizations),
             R"#(None)#"  , py::arg("aOrganizations"))
        .def("Organizations",
             (opencascade::handle<StepBasic_HArray1OfOrganization> (StepBasic_OrganizationalAddress::*)() const) static_cast<opencascade::handle<StepBasic_HArray1OfOrganization> (StepBasic_OrganizationalAddress::*)() const>(&StepBasic_OrganizationalAddress::Organizations),
             R"#(None)#" )
        .def("OrganizationsValue",
             (opencascade::handle<StepBasic_Organization> (StepBasic_OrganizationalAddress::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepBasic_Organization> (StepBasic_OrganizationalAddress::*)( const Standard_Integer  ) const>(&StepBasic_OrganizationalAddress::OrganizationsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbOrganizations",
             (Standard_Integer (StepBasic_OrganizationalAddress::*)() const) static_cast<Standard_Integer (StepBasic_OrganizationalAddress::*)() const>(&StepBasic_OrganizationalAddress::NbOrganizations),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepBasic_OrganizationalAddress::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_OrganizationalAddress::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_OrganizationalAddress::SetDescription),
             R"#(None)#"  , py::arg("aDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_OrganizationalAddress::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_OrganizationalAddress::*)() const>(&StepBasic_OrganizationalAddress::Description),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_OrganizationalAddress::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_OrganizationalAddress::*)() const>(&StepBasic_OrganizationalAddress::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_OrganizationalAddress::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_OrganizationalAddress::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ActionAssignment ,opencascade::handle<StepBasic_ActionAssignment>  , Standard_Transient >>(m.attr("StepBasic_ActionAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ActionAssignment::*)( const opencascade::handle<StepBasic_Action> &  ) ) static_cast<void (StepBasic_ActionAssignment::*)( const opencascade::handle<StepBasic_Action> &  ) >(&StepBasic_ActionAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aAssignedAction"))
        .def("AssignedAction",
             (opencascade::handle<StepBasic_Action> (StepBasic_ActionAssignment::*)() const) static_cast<opencascade::handle<StepBasic_Action> (StepBasic_ActionAssignment::*)() const>(&StepBasic_ActionAssignment::AssignedAction),
             R"#(Returns field AssignedAction)#" )
        .def("SetAssignedAction",
             (void (StepBasic_ActionAssignment::*)( const opencascade::handle<StepBasic_Action> &  ) ) static_cast<void (StepBasic_ActionAssignment::*)( const opencascade::handle<StepBasic_Action> &  ) >(&StepBasic_ActionAssignment::SetAssignedAction),
             R"#(Set field AssignedAction)#"  , py::arg("AssignedAction"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ActionAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ActionAssignment::*)() const>(&StepBasic_ActionAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ActionAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ActionAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ActionRequestAssignment ,opencascade::handle<StepBasic_ActionRequestAssignment>  , Standard_Transient >>(m.attr("StepBasic_ActionRequestAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ActionRequestAssignment::*)( const opencascade::handle<StepBasic_VersionedActionRequest> &  ) ) static_cast<void (StepBasic_ActionRequestAssignment::*)( const opencascade::handle<StepBasic_VersionedActionRequest> &  ) >(&StepBasic_ActionRequestAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aAssignedActionRequest"))
        .def("AssignedActionRequest",
             (opencascade::handle<StepBasic_VersionedActionRequest> (StepBasic_ActionRequestAssignment::*)() const) static_cast<opencascade::handle<StepBasic_VersionedActionRequest> (StepBasic_ActionRequestAssignment::*)() const>(&StepBasic_ActionRequestAssignment::AssignedActionRequest),
             R"#(Returns field AssignedActionRequest)#" )
        .def("SetAssignedActionRequest",
             (void (StepBasic_ActionRequestAssignment::*)( const opencascade::handle<StepBasic_VersionedActionRequest> &  ) ) static_cast<void (StepBasic_ActionRequestAssignment::*)( const opencascade::handle<StepBasic_VersionedActionRequest> &  ) >(&StepBasic_ActionRequestAssignment::SetAssignedActionRequest),
             R"#(Set field AssignedActionRequest)#"  , py::arg("AssignedActionRequest"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ActionRequestAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ActionRequestAssignment::*)() const>(&StepBasic_ActionRequestAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ActionRequestAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ActionRequestAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SourceItem ,std::unique_ptr<StepBasic_SourceItem>  , StepData_SelectType >>(m.attr("StepBasic_SourceItem"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepBasic_SourceItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepBasic_SourceItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepBasic_SourceItem::CaseNum),
             R"#(Recognizes a kind of SourceItem select type 1 -> HAsciiString from TCollection 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepBasic_SourceItem::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepBasic_SourceItem::*)() const>(&StepBasic_SourceItem::NewMember),
             R"#(None)#" )
        .def("Identifier",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_SourceItem::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_SourceItem::*)() const>(&StepBasic_SourceItem::Identifier),
             R"#(Returns Value as Identifier (or Null if another type))#" )
;


    static_cast<py::class_<StepBasic_SiUnitAndLengthUnit ,opencascade::handle<StepBasic_SiUnitAndLengthUnit>  , StepBasic_SiUnit >>(m.attr("StepBasic_SiUnitAndLengthUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_SiUnitAndLengthUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) ) static_cast<void (StepBasic_SiUnitAndLengthUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) >(&StepBasic_SiUnitAndLengthUnit::Init),
             R"#(None)#"  , py::arg("hasAprefix"),  py::arg("aPrefix"),  py::arg("aName"))
        .def("SetLengthUnit",
             (void (StepBasic_SiUnitAndLengthUnit::*)( const opencascade::handle<StepBasic_LengthUnit> &  ) ) static_cast<void (StepBasic_SiUnitAndLengthUnit::*)( const opencascade::handle<StepBasic_LengthUnit> &  ) >(&StepBasic_SiUnitAndLengthUnit::SetLengthUnit),
             R"#(None)#"  , py::arg("aLengthUnit"))
        .def("LengthUnit",
             (opencascade::handle<StepBasic_LengthUnit> (StepBasic_SiUnitAndLengthUnit::*)() const) static_cast<opencascade::handle<StepBasic_LengthUnit> (StepBasic_SiUnitAndLengthUnit::*)() const>(&StepBasic_SiUnitAndLengthUnit::LengthUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndLengthUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndLengthUnit::*)() const>(&StepBasic_SiUnitAndLengthUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndLengthUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SiUnitAndLengthUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ApprovalRole ,opencascade::handle<StepBasic_ApprovalRole>  , Standard_Transient >>(m.attr("StepBasic_ApprovalRole"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ApprovalRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApprovalRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApprovalRole::Init),
             R"#(None)#"  , py::arg("aRole"))
        .def("SetRole",
             (void (StepBasic_ApprovalRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApprovalRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApprovalRole::SetRole),
             R"#(None)#"  , py::arg("aRole"))
        .def("Role",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ApprovalRole::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ApprovalRole::*)() const>(&StepBasic_ApprovalRole::Role),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalRole::*)() const>(&StepBasic_ApprovalRole::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalRole::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ApprovalRole::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SizeSelect ,std::unique_ptr<StepBasic_SizeSelect>  , StepData_SelectType >>(m.attr("StepBasic_SizeSelect"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepBasic_SizeSelect::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepBasic_SizeSelect::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepBasic_SizeSelect::CaseNum),
             R"#(Recognizes a TrimmingSelect Kind Entity that is : 1 -> SizeMember 0 else (i.e. Real))#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepBasic_SizeSelect::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepBasic_SizeSelect::*)() const>(&StepBasic_SizeSelect::NewMember),
             R"#(Returns a SizeMember (POSITIVE_LENGTH_MEASURE) as preferred)#" )
        .def("CaseMem",
             (Standard_Integer (StepBasic_SizeSelect::*)( const opencascade::handle<StepData_SelectMember> &  ) const) static_cast<Standard_Integer (StepBasic_SizeSelect::*)( const opencascade::handle<StepData_SelectMember> &  ) const>(&StepBasic_SizeSelect::CaseMem),
             R"#(Recognizes a SelectMember as Real, named as PARAMETER_VALUE 1 -> PositiveLengthMeasure i.e. Real 0 else (i.e. Entity))#"  , py::arg("ent"))
        .def("SetRealValue",
             (void (StepBasic_SizeSelect::*)( const Standard_Real  ) ) static_cast<void (StepBasic_SizeSelect::*)( const Standard_Real  ) >(&StepBasic_SizeSelect::SetRealValue),
             R"#(None)#"  , py::arg("aReal"))
        .def("RealValue",
             (Standard_Real (StepBasic_SizeSelect::*)() const) static_cast<Standard_Real (StepBasic_SizeSelect::*)() const>(&StepBasic_SizeSelect::RealValue),
             R"#(returns Value as a Real (Null if another type))#" )
;


    static_cast<py::class_<StepBasic_DocumentFile ,opencascade::handle<StepBasic_DocumentFile>  , StepBasic_Document >>(m.attr("StepBasic_DocumentFile"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DocumentFile::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_DocumentType> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentFile::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_DocumentType> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentFile::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDocument_Id"),  py::arg("aDocument_Name"),  py::arg("hasDocument_Description"),  py::arg("aDocument_Description"),  py::arg("aDocument_Kind"),  py::arg("aCharacterizedObject_Name"),  py::arg("hasCharacterizedObject_Description"),  py::arg("aCharacterizedObject_Description"))
        .def("CharacterizedObject",
             (opencascade::handle<StepBasic_CharacterizedObject> (StepBasic_DocumentFile::*)() const) static_cast<opencascade::handle<StepBasic_CharacterizedObject> (StepBasic_DocumentFile::*)() const>(&StepBasic_DocumentFile::CharacterizedObject),
             R"#(Returns data for supertype CharacterizedObject)#" )
        .def("SetCharacterizedObject",
             (void (StepBasic_DocumentFile::*)( const opencascade::handle<StepBasic_CharacterizedObject> &  ) ) static_cast<void (StepBasic_DocumentFile::*)( const opencascade::handle<StepBasic_CharacterizedObject> &  ) >(&StepBasic_DocumentFile::SetCharacterizedObject),
             R"#(Set data for supertype CharacterizedObject)#"  , py::arg("CharacterizedObject"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentFile::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentFile::*)() const>(&StepBasic_DocumentFile::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentFile::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DocumentFile::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ContractAssignment ,opencascade::handle<StepBasic_ContractAssignment>  , Standard_Transient >>(m.attr("StepBasic_ContractAssignment"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ContractAssignment::*)( const opencascade::handle<StepBasic_Contract> &  ) ) static_cast<void (StepBasic_ContractAssignment::*)( const opencascade::handle<StepBasic_Contract> &  ) >(&StepBasic_ContractAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aAssignedContract"))
        .def("AssignedContract",
             (opencascade::handle<StepBasic_Contract> (StepBasic_ContractAssignment::*)() const) static_cast<opencascade::handle<StepBasic_Contract> (StepBasic_ContractAssignment::*)() const>(&StepBasic_ContractAssignment::AssignedContract),
             R"#(Returns field AssignedContract)#" )
        .def("SetAssignedContract",
             (void (StepBasic_ContractAssignment::*)( const opencascade::handle<StepBasic_Contract> &  ) ) static_cast<void (StepBasic_ContractAssignment::*)( const opencascade::handle<StepBasic_Contract> &  ) >(&StepBasic_ContractAssignment::SetAssignedContract),
             R"#(Set field AssignedContract)#"  , py::arg("AssignedContract"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ContractAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ContractAssignment::*)() const>(&StepBasic_ContractAssignment::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ContractAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ContractAssignment::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DocumentProductAssociation ,opencascade::handle<StepBasic_DocumentProductAssociation>  , Standard_Transient >>(m.attr("StepBasic_DocumentProductAssociation"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DocumentProductAssociation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Document> & ,  const StepBasic_ProductOrFormationOrDefinition &  ) ) static_cast<void (StepBasic_DocumentProductAssociation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Document> & ,  const StepBasic_ProductOrFormationOrDefinition &  ) >(&StepBasic_DocumentProductAssociation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"),  py::arg("aRelatingDocument"),  py::arg("aRelatedProduct"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentProductAssociation::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentProductAssociation::*)() const>(&StepBasic_DocumentProductAssociation::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_DocumentProductAssociation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentProductAssociation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentProductAssociation::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentProductAssociation::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentProductAssociation::*)() const>(&StepBasic_DocumentProductAssociation::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_DocumentProductAssociation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentProductAssociation::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentProductAssociation::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_DocumentProductAssociation::*)() const) static_cast<Standard_Boolean (StepBasic_DocumentProductAssociation::*)() const>(&StepBasic_DocumentProductAssociation::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("RelatingDocument",
             (opencascade::handle<StepBasic_Document> (StepBasic_DocumentProductAssociation::*)() const) static_cast<opencascade::handle<StepBasic_Document> (StepBasic_DocumentProductAssociation::*)() const>(&StepBasic_DocumentProductAssociation::RelatingDocument),
             R"#(Returns field RelatingDocument)#" )
        .def("SetRelatingDocument",
             (void (StepBasic_DocumentProductAssociation::*)( const opencascade::handle<StepBasic_Document> &  ) ) static_cast<void (StepBasic_DocumentProductAssociation::*)( const opencascade::handle<StepBasic_Document> &  ) >(&StepBasic_DocumentProductAssociation::SetRelatingDocument),
             R"#(Set field RelatingDocument)#"  , py::arg("RelatingDocument"))
        .def("RelatedProduct",
             (StepBasic_ProductOrFormationOrDefinition (StepBasic_DocumentProductAssociation::*)() const) static_cast<StepBasic_ProductOrFormationOrDefinition (StepBasic_DocumentProductAssociation::*)() const>(&StepBasic_DocumentProductAssociation::RelatedProduct),
             R"#(Returns field RelatedProduct)#" )
        .def("SetRelatedProduct",
             (void (StepBasic_DocumentProductAssociation::*)( const StepBasic_ProductOrFormationOrDefinition &  ) ) static_cast<void (StepBasic_DocumentProductAssociation::*)( const StepBasic_ProductOrFormationOrDefinition &  ) >(&StepBasic_DocumentProductAssociation::SetRelatedProduct),
             R"#(Set field RelatedProduct)#"  , py::arg("RelatedProduct"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentProductAssociation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentProductAssociation::*)() const>(&StepBasic_DocumentProductAssociation::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentProductAssociation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DocumentProductAssociation::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SiUnitAndMassUnit ,opencascade::handle<StepBasic_SiUnitAndMassUnit>  , StepBasic_SiUnit >>(m.attr("StepBasic_SiUnitAndMassUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_SiUnitAndMassUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) ) static_cast<void (StepBasic_SiUnitAndMassUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) >(&StepBasic_SiUnitAndMassUnit::Init),
             R"#(None)#"  , py::arg("hasAprefix"),  py::arg("aPrefix"),  py::arg("aName"))
        .def("SetMassUnit",
             (void (StepBasic_SiUnitAndMassUnit::*)( const opencascade::handle<StepBasic_MassUnit> &  ) ) static_cast<void (StepBasic_SiUnitAndMassUnit::*)( const opencascade::handle<StepBasic_MassUnit> &  ) >(&StepBasic_SiUnitAndMassUnit::SetMassUnit),
             R"#(None)#"  , py::arg("aMassUnit"))
        .def("MassUnit",
             (opencascade::handle<StepBasic_MassUnit> (StepBasic_SiUnitAndMassUnit::*)() const) static_cast<opencascade::handle<StepBasic_MassUnit> (StepBasic_SiUnitAndMassUnit::*)() const>(&StepBasic_SiUnitAndMassUnit::MassUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndMassUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndMassUnit::*)() const>(&StepBasic_SiUnitAndMassUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndMassUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SiUnitAndMassUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_RatioUnit ,opencascade::handle<StepBasic_RatioUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_RatioUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_RatioUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_RatioUnit::*)() const>(&StepBasic_RatioUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_RatioUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_RatioUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinitionReference ,opencascade::handle<StepBasic_ProductDefinitionReference>  , Standard_Transient >>(m.attr("StepBasic_ProductDefinitionReference"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<StepBasic_ExternalSource> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<StepBasic_ExternalSource> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionReference::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("theSource"),  py::arg("theProductId"),  py::arg("theProductDefinitionFormationId"),  py::arg("theProductDefinitionId"),  py::arg("theIdOwningOrganizationName"))
        .def("Init",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<StepBasic_ExternalSource> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<StepBasic_ExternalSource> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionReference::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("theSource"),  py::arg("theProductId"),  py::arg("theProductDefinitionFormationId"),  py::arg("theProductDefinitionId"))
        .def("Source",
             (opencascade::handle<StepBasic_ExternalSource> (StepBasic_ProductDefinitionReference::*)() const) static_cast<opencascade::handle<StepBasic_ExternalSource> (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::Source),
             R"#(Returns field Source)#" )
        .def("SetSource",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<StepBasic_ExternalSource> &  ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<StepBasic_ExternalSource> &  ) >(&StepBasic_ProductDefinitionReference::SetSource),
             R"#(Set field Source)#"  , py::arg("theSource"))
        .def("ProductId",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::ProductId),
             R"#(Returns field ProductId)#" )
        .def("SetProductId",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionReference::SetProductId),
             R"#(Set field ProductId)#"  , py::arg("theProductId"))
        .def("ProductDefinitionFormationId",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::ProductDefinitionFormationId),
             R"#(Returns field ProductDefinitionFormationId)#" )
        .def("SetProductDefinitionFormationId",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionReference::SetProductDefinitionFormationId),
             R"#(Set field ProductDefinitionFormationId)#"  , py::arg("theProductDefinitionFormationId"))
        .def("ProductDefinitionId",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::ProductDefinitionId),
             R"#(Returns field ProductDefinitionId)#" )
        .def("SetProductDefinitionId",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionReference::SetProductDefinitionId),
             R"#(Set field ProductDefinitionId)#"  , py::arg("theProductDefinitionId"))
        .def("IdOwningOrganizationName",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::IdOwningOrganizationName),
             R"#(Returns field IdOwningOrganizationName)#" )
        .def("SetIdOwningOrganizationName",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinitionReference::SetIdOwningOrganizationName),
             R"#(Set field IdOwningOrganizationName)#"  , py::arg("theIdOwningOrganizationName"))
        .def("HasIdOwningOrganizationName",
             (Standard_Boolean (StepBasic_ProductDefinitionReference::*)() const) static_cast<Standard_Boolean (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::HasIdOwningOrganizationName),
             R"#(Returns true if IdOwningOrganizationName exists)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionReference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductDefinitionReference::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ActionMethod ,opencascade::handle<StepBasic_ActionMethod>  , Standard_Transient >>(m.attr("StepBasic_ActionMethod"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ActionMethod::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ActionMethod::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ActionMethod::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"),  py::arg("aConsequence"),  py::arg("aPurpose"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ActionMethod::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ActionMethod::*)() const>(&StepBasic_ActionMethod::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_ActionMethod::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ActionMethod::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ActionMethod::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ActionMethod::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ActionMethod::*)() const>(&StepBasic_ActionMethod::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_ActionMethod::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ActionMethod::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ActionMethod::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_ActionMethod::*)() const) static_cast<Standard_Boolean (StepBasic_ActionMethod::*)() const>(&StepBasic_ActionMethod::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("Consequence",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ActionMethod::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ActionMethod::*)() const>(&StepBasic_ActionMethod::Consequence),
             R"#(Returns field Consequence)#" )
        .def("SetConsequence",
             (void (StepBasic_ActionMethod::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ActionMethod::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ActionMethod::SetConsequence),
             R"#(Set field Consequence)#"  , py::arg("Consequence"))
        .def("Purpose",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ActionMethod::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ActionMethod::*)() const>(&StepBasic_ActionMethod::Purpose),
             R"#(Returns field Purpose)#" )
        .def("SetPurpose",
             (void (StepBasic_ActionMethod::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ActionMethod::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ActionMethod::SetPurpose),
             R"#(Set field Purpose)#"  , py::arg("Purpose"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ActionMethod::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ActionMethod::*)() const>(&StepBasic_ActionMethod::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ActionMethod::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ActionMethod::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_MeasureValueMember ,opencascade::handle<StepBasic_MeasureValueMember>  , StepData_SelectReal >>(m.attr("StepBasic_MeasureValueMember"))
        .def(py::init<  >()  )
        .def("HasName",
             (Standard_Boolean (StepBasic_MeasureValueMember::*)() const) static_cast<Standard_Boolean (StepBasic_MeasureValueMember::*)() const>(&StepBasic_MeasureValueMember::HasName),
             R"#(None)#" )
        .def("Name",
             (Standard_CString (StepBasic_MeasureValueMember::*)() const) static_cast<Standard_CString (StepBasic_MeasureValueMember::*)() const>(&StepBasic_MeasureValueMember::Name),
             R"#(None)#" )
        .def("SetName",
             (Standard_Boolean (StepBasic_MeasureValueMember::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (StepBasic_MeasureValueMember::*)( const Standard_CString  ) >(&StepBasic_MeasureValueMember::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_MeasureValueMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_MeasureValueMember::*)() const>(&StepBasic_MeasureValueMember::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_MeasureValueMember::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_MeasureValueMember::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_RoleAssociation ,opencascade::handle<StepBasic_RoleAssociation>  , Standard_Transient >>(m.attr("StepBasic_RoleAssociation"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_RoleAssociation::*)( const opencascade::handle<StepBasic_ObjectRole> & ,  const StepBasic_RoleSelect &  ) ) static_cast<void (StepBasic_RoleAssociation::*)( const opencascade::handle<StepBasic_ObjectRole> & ,  const StepBasic_RoleSelect &  ) >(&StepBasic_RoleAssociation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRole"),  py::arg("aItemWithRole"))
        .def("Role",
             (opencascade::handle<StepBasic_ObjectRole> (StepBasic_RoleAssociation::*)() const) static_cast<opencascade::handle<StepBasic_ObjectRole> (StepBasic_RoleAssociation::*)() const>(&StepBasic_RoleAssociation::Role),
             R"#(Returns field Role)#" )
        .def("SetRole",
             (void (StepBasic_RoleAssociation::*)( const opencascade::handle<StepBasic_ObjectRole> &  ) ) static_cast<void (StepBasic_RoleAssociation::*)( const opencascade::handle<StepBasic_ObjectRole> &  ) >(&StepBasic_RoleAssociation::SetRole),
             R"#(Set field Role)#"  , py::arg("Role"))
        .def("ItemWithRole",
             (StepBasic_RoleSelect (StepBasic_RoleAssociation::*)() const) static_cast<StepBasic_RoleSelect (StepBasic_RoleAssociation::*)() const>(&StepBasic_RoleAssociation::ItemWithRole),
             R"#(Returns field ItemWithRole)#" )
        .def("SetItemWithRole",
             (void (StepBasic_RoleAssociation::*)( const StepBasic_RoleSelect &  ) ) static_cast<void (StepBasic_RoleAssociation::*)( const StepBasic_RoleSelect &  ) >(&StepBasic_RoleAssociation::SetItemWithRole),
             R"#(Set field ItemWithRole)#"  , py::arg("ItemWithRole"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_RoleAssociation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_RoleAssociation::*)() const>(&StepBasic_RoleAssociation::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_RoleAssociation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_RoleAssociation::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_PersonAndOrganization ,opencascade::handle<StepBasic_PersonAndOrganization>  , Standard_Transient >>(m.attr("StepBasic_PersonAndOrganization"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_PersonAndOrganization::*)( const opencascade::handle<StepBasic_Person> & ,  const opencascade::handle<StepBasic_Organization> &  ) ) static_cast<void (StepBasic_PersonAndOrganization::*)( const opencascade::handle<StepBasic_Person> & ,  const opencascade::handle<StepBasic_Organization> &  ) >(&StepBasic_PersonAndOrganization::Init),
             R"#(None)#"  , py::arg("aThePerson"),  py::arg("aTheOrganization"))
        .def("SetThePerson",
             (void (StepBasic_PersonAndOrganization::*)( const opencascade::handle<StepBasic_Person> &  ) ) static_cast<void (StepBasic_PersonAndOrganization::*)( const opencascade::handle<StepBasic_Person> &  ) >(&StepBasic_PersonAndOrganization::SetThePerson),
             R"#(None)#"  , py::arg("aThePerson"))
        .def("ThePerson",
             (opencascade::handle<StepBasic_Person> (StepBasic_PersonAndOrganization::*)() const) static_cast<opencascade::handle<StepBasic_Person> (StepBasic_PersonAndOrganization::*)() const>(&StepBasic_PersonAndOrganization::ThePerson),
             R"#(None)#" )
        .def("SetTheOrganization",
             (void (StepBasic_PersonAndOrganization::*)( const opencascade::handle<StepBasic_Organization> &  ) ) static_cast<void (StepBasic_PersonAndOrganization::*)( const opencascade::handle<StepBasic_Organization> &  ) >(&StepBasic_PersonAndOrganization::SetTheOrganization),
             R"#(None)#"  , py::arg("aTheOrganization"))
        .def("TheOrganization",
             (opencascade::handle<StepBasic_Organization> (StepBasic_PersonAndOrganization::*)() const) static_cast<opencascade::handle<StepBasic_Organization> (StepBasic_PersonAndOrganization::*)() const>(&StepBasic_PersonAndOrganization::TheOrganization),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganization::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganization::*)() const>(&StepBasic_PersonAndOrganization::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PersonAndOrganization::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_PersonAndOrganization::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ApplicationProtocolDefinition ,opencascade::handle<StepBasic_ApplicationProtocolDefinition>  , Standard_Transient >>(m.attr("StepBasic_ApplicationProtocolDefinition"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ApplicationProtocolDefinition::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const opencascade::handle<StepBasic_ApplicationContext> &  ) ) static_cast<void (StepBasic_ApplicationProtocolDefinition::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const opencascade::handle<StepBasic_ApplicationContext> &  ) >(&StepBasic_ApplicationProtocolDefinition::Init),
             R"#(None)#"  , py::arg("aStatus"),  py::arg("aApplicationInterpretedModelSchemaName"),  py::arg("aApplicationProtocolYear"),  py::arg("aApplication"))
        .def("SetStatus",
             (void (StepBasic_ApplicationProtocolDefinition::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApplicationProtocolDefinition::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApplicationProtocolDefinition::SetStatus),
             R"#(None)#"  , py::arg("aStatus"))
        .def("Status",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ApplicationProtocolDefinition::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ApplicationProtocolDefinition::*)() const>(&StepBasic_ApplicationProtocolDefinition::Status),
             R"#(None)#" )
        .def("SetApplicationInterpretedModelSchemaName",
             (void (StepBasic_ApplicationProtocolDefinition::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApplicationProtocolDefinition::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApplicationProtocolDefinition::SetApplicationInterpretedModelSchemaName),
             R"#(None)#"  , py::arg("aApplicationInterpretedModelSchemaName"))
        .def("ApplicationInterpretedModelSchemaName",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ApplicationProtocolDefinition::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ApplicationProtocolDefinition::*)() const>(&StepBasic_ApplicationProtocolDefinition::ApplicationInterpretedModelSchemaName),
             R"#(None)#" )
        .def("SetApplicationProtocolYear",
             (void (StepBasic_ApplicationProtocolDefinition::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_ApplicationProtocolDefinition::*)( const Standard_Integer  ) >(&StepBasic_ApplicationProtocolDefinition::SetApplicationProtocolYear),
             R"#(None)#"  , py::arg("aApplicationProtocolYear"))
        .def("ApplicationProtocolYear",
             (Standard_Integer (StepBasic_ApplicationProtocolDefinition::*)() const) static_cast<Standard_Integer (StepBasic_ApplicationProtocolDefinition::*)() const>(&StepBasic_ApplicationProtocolDefinition::ApplicationProtocolYear),
             R"#(None)#" )
        .def("SetApplication",
             (void (StepBasic_ApplicationProtocolDefinition::*)( const opencascade::handle<StepBasic_ApplicationContext> &  ) ) static_cast<void (StepBasic_ApplicationProtocolDefinition::*)( const opencascade::handle<StepBasic_ApplicationContext> &  ) >(&StepBasic_ApplicationProtocolDefinition::SetApplication),
             R"#(None)#"  , py::arg("aApplication"))
        .def("Application",
             (opencascade::handle<StepBasic_ApplicationContext> (StepBasic_ApplicationProtocolDefinition::*)() const) static_cast<opencascade::handle<StepBasic_ApplicationContext> (StepBasic_ApplicationProtocolDefinition::*)() const>(&StepBasic_ApplicationProtocolDefinition::Application),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApplicationProtocolDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApplicationProtocolDefinition::*)() const>(&StepBasic_ApplicationProtocolDefinition::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApplicationProtocolDefinition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ApplicationProtocolDefinition::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DocumentRepresentationType ,opencascade::handle<StepBasic_DocumentRepresentationType>  , Standard_Transient >>(m.attr("StepBasic_DocumentRepresentationType"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DocumentRepresentationType::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Document> &  ) ) static_cast<void (StepBasic_DocumentRepresentationType::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Document> &  ) >(&StepBasic_DocumentRepresentationType::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("aRepresentedDocument"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentRepresentationType::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentRepresentationType::*)() const>(&StepBasic_DocumentRepresentationType::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_DocumentRepresentationType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentRepresentationType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentRepresentationType::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("RepresentedDocument",
             (opencascade::handle<StepBasic_Document> (StepBasic_DocumentRepresentationType::*)() const) static_cast<opencascade::handle<StepBasic_Document> (StepBasic_DocumentRepresentationType::*)() const>(&StepBasic_DocumentRepresentationType::RepresentedDocument),
             R"#(Returns field RepresentedDocument)#" )
        .def("SetRepresentedDocument",
             (void (StepBasic_DocumentRepresentationType::*)( const opencascade::handle<StepBasic_Document> &  ) ) static_cast<void (StepBasic_DocumentRepresentationType::*)( const opencascade::handle<StepBasic_Document> &  ) >(&StepBasic_DocumentRepresentationType::SetRepresentedDocument),
             R"#(Set field RepresentedDocument)#"  , py::arg("RepresentedDocument"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentRepresentationType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentRepresentationType::*)() const>(&StepBasic_DocumentRepresentationType::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentRepresentationType::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DocumentRepresentationType::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SiUnitAndSolidAngleUnit ,opencascade::handle<StepBasic_SiUnitAndSolidAngleUnit>  , StepBasic_SiUnit >>(m.attr("StepBasic_SiUnitAndSolidAngleUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_SiUnitAndSolidAngleUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) ) static_cast<void (StepBasic_SiUnitAndSolidAngleUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) >(&StepBasic_SiUnitAndSolidAngleUnit::Init),
             R"#(None)#"  , py::arg("hasAprefix"),  py::arg("aPrefix"),  py::arg("aName"))
        .def("SetSolidAngleUnit",
             (void (StepBasic_SiUnitAndSolidAngleUnit::*)( const opencascade::handle<StepBasic_SolidAngleUnit> &  ) ) static_cast<void (StepBasic_SiUnitAndSolidAngleUnit::*)( const opencascade::handle<StepBasic_SolidAngleUnit> &  ) >(&StepBasic_SiUnitAndSolidAngleUnit::SetSolidAngleUnit),
             R"#(None)#"  , py::arg("aSolidAngleUnit"))
        .def("SolidAngleUnit",
             (opencascade::handle<StepBasic_SolidAngleUnit> (StepBasic_SiUnitAndSolidAngleUnit::*)() const) static_cast<opencascade::handle<StepBasic_SolidAngleUnit> (StepBasic_SiUnitAndSolidAngleUnit::*)() const>(&StepBasic_SiUnitAndSolidAngleUnit::SolidAngleUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndSolidAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndSolidAngleUnit::*)() const>(&StepBasic_SiUnitAndSolidAngleUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndSolidAngleUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SiUnitAndSolidAngleUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DocumentRelationship ,opencascade::handle<StepBasic_DocumentRelationship>  , Standard_Transient >>(m.attr("StepBasic_DocumentRelationship"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DocumentRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<StepBasic_Document> &  ) ) static_cast<void (StepBasic_DocumentRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<StepBasic_Document> &  ) >(&StepBasic_DocumentRelationship::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aDescription"),  py::arg("aRelating"),  py::arg("aRelated"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentRelationship::*)() const>(&StepBasic_DocumentRelationship::Name),
             R"#(None)#" )
        .def("SetName",
             (void (StepBasic_DocumentRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentRelationship::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_DocumentRelationship::*)() const>(&StepBasic_DocumentRelationship::Description),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepBasic_DocumentRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_DocumentRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_DocumentRelationship::SetDescription),
             R"#(None)#"  , py::arg("aDescription"))
        .def("RelatingDocument",
             (opencascade::handle<StepBasic_Document> (StepBasic_DocumentRelationship::*)() const) static_cast<opencascade::handle<StepBasic_Document> (StepBasic_DocumentRelationship::*)() const>(&StepBasic_DocumentRelationship::RelatingDocument),
             R"#(None)#" )
        .def("SetRelatingDocument",
             (void (StepBasic_DocumentRelationship::*)( const opencascade::handle<StepBasic_Document> &  ) ) static_cast<void (StepBasic_DocumentRelationship::*)( const opencascade::handle<StepBasic_Document> &  ) >(&StepBasic_DocumentRelationship::SetRelatingDocument),
             R"#(None)#"  , py::arg("aRelating"))
        .def("RelatedDocument",
             (opencascade::handle<StepBasic_Document> (StepBasic_DocumentRelationship::*)() const) static_cast<opencascade::handle<StepBasic_Document> (StepBasic_DocumentRelationship::*)() const>(&StepBasic_DocumentRelationship::RelatedDocument),
             R"#(None)#" )
        .def("SetRelatedDocument",
             (void (StepBasic_DocumentRelationship::*)( const opencascade::handle<StepBasic_Document> &  ) ) static_cast<void (StepBasic_DocumentRelationship::*)( const opencascade::handle<StepBasic_Document> &  ) >(&StepBasic_DocumentRelationship::SetRelatedDocument),
             R"#(None)#"  , py::arg("aRelated"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentRelationship::*)() const>(&StepBasic_DocumentRelationship::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentRelationship::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DocumentRelationship::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SiUnitAndAreaUnit ,opencascade::handle<StepBasic_SiUnitAndAreaUnit>  , StepBasic_SiUnit >>(m.attr("StepBasic_SiUnitAndAreaUnit"))
        .def(py::init<  >()  )
        .def("SetAreaUnit",
             (void (StepBasic_SiUnitAndAreaUnit::*)( const opencascade::handle<StepBasic_AreaUnit> &  ) ) static_cast<void (StepBasic_SiUnitAndAreaUnit::*)( const opencascade::handle<StepBasic_AreaUnit> &  ) >(&StepBasic_SiUnitAndAreaUnit::SetAreaUnit),
             R"#(None)#"  , py::arg("anAreaUnit"))
        .def("AreaUnit",
             (opencascade::handle<StepBasic_AreaUnit> (StepBasic_SiUnitAndAreaUnit::*)() const) static_cast<opencascade::handle<StepBasic_AreaUnit> (StepBasic_SiUnitAndAreaUnit::*)() const>(&StepBasic_SiUnitAndAreaUnit::AreaUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndAreaUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndAreaUnit::*)() const>(&StepBasic_SiUnitAndAreaUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndAreaUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SiUnitAndAreaUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_EulerAngles ,opencascade::handle<StepBasic_EulerAngles>  , Standard_Transient >>(m.attr("StepBasic_EulerAngles"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_EulerAngles::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<void (StepBasic_EulerAngles::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) >(&StepBasic_EulerAngles::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aAngles"))
        .def("Angles",
             (opencascade::handle<TColStd_HArray1OfReal> (StepBasic_EulerAngles::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepBasic_EulerAngles::*)() const>(&StepBasic_EulerAngles::Angles),
             R"#(Returns field Angles)#" )
        .def("SetAngles",
             (void (StepBasic_EulerAngles::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<void (StepBasic_EulerAngles::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) >(&StepBasic_EulerAngles::SetAngles),
             R"#(Set field Angles)#"  , py::arg("Angles"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_EulerAngles::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_EulerAngles::*)() const>(&StepBasic_EulerAngles::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_EulerAngles::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_EulerAngles::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinitionEffectivity ,opencascade::handle<StepBasic_ProductDefinitionEffectivity>  , StepBasic_Effectivity >>(m.attr("StepBasic_ProductDefinitionEffectivity"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductDefinitionEffectivity::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinitionRelationship> &  ) ) static_cast<void (StepBasic_ProductDefinitionEffectivity::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinitionRelationship> &  ) >(&StepBasic_ProductDefinitionEffectivity::Init),
             R"#(None)#"  , py::arg("aId"),  py::arg("aUsage"))
        .def("Usage",
             (opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepBasic_ProductDefinitionEffectivity::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepBasic_ProductDefinitionEffectivity::*)() const>(&StepBasic_ProductDefinitionEffectivity::Usage),
             R"#(None)#" )
        .def("SetUsage",
             (void (StepBasic_ProductDefinitionEffectivity::*)( const opencascade::handle<StepBasic_ProductDefinitionRelationship> &  ) ) static_cast<void (StepBasic_ProductDefinitionEffectivity::*)( const opencascade::handle<StepBasic_ProductDefinitionRelationship> &  ) >(&StepBasic_ProductDefinitionEffectivity::SetUsage),
             R"#(None)#"  , py::arg("aUsage"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionEffectivity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionEffectivity::*)() const>(&StepBasic_ProductDefinitionEffectivity::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionEffectivity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductDefinitionEffectivity::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductRelatedProductCategory ,opencascade::handle<StepBasic_ProductRelatedProductCategory>  , StepBasic_ProductCategory >>(m.attr("StepBasic_ProductRelatedProductCategory"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductRelatedProductCategory::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_HArray1OfProduct> &  ) ) static_cast<void (StepBasic_ProductRelatedProductCategory::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_HArray1OfProduct> &  ) >(&StepBasic_ProductRelatedProductCategory::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("hasAdescription"),  py::arg("aDescription"),  py::arg("aProducts"))
        .def("SetProducts",
             (void (StepBasic_ProductRelatedProductCategory::*)( const opencascade::handle<StepBasic_HArray1OfProduct> &  ) ) static_cast<void (StepBasic_ProductRelatedProductCategory::*)( const opencascade::handle<StepBasic_HArray1OfProduct> &  ) >(&StepBasic_ProductRelatedProductCategory::SetProducts),
             R"#(None)#"  , py::arg("aProducts"))
        .def("Products",
             (opencascade::handle<StepBasic_HArray1OfProduct> (StepBasic_ProductRelatedProductCategory::*)() const) static_cast<opencascade::handle<StepBasic_HArray1OfProduct> (StepBasic_ProductRelatedProductCategory::*)() const>(&StepBasic_ProductRelatedProductCategory::Products),
             R"#(None)#" )
        .def("ProductsValue",
             (opencascade::handle<StepBasic_Product> (StepBasic_ProductRelatedProductCategory::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepBasic_Product> (StepBasic_ProductRelatedProductCategory::*)( const Standard_Integer  ) const>(&StepBasic_ProductRelatedProductCategory::ProductsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbProducts",
             (Standard_Integer (StepBasic_ProductRelatedProductCategory::*)() const) static_cast<Standard_Integer (StepBasic_ProductRelatedProductCategory::*)() const>(&StepBasic_ProductRelatedProductCategory::NbProducts),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductRelatedProductCategory::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductRelatedProductCategory::*)() const>(&StepBasic_ProductRelatedProductCategory::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductRelatedProductCategory::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductRelatedProductCategory::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SiUnitAndVolumeUnit ,opencascade::handle<StepBasic_SiUnitAndVolumeUnit>  , StepBasic_SiUnit >>(m.attr("StepBasic_SiUnitAndVolumeUnit"))
        .def(py::init<  >()  )
        .def("SetVolumeUnit",
             (void (StepBasic_SiUnitAndVolumeUnit::*)( const opencascade::handle<StepBasic_VolumeUnit> &  ) ) static_cast<void (StepBasic_SiUnitAndVolumeUnit::*)( const opencascade::handle<StepBasic_VolumeUnit> &  ) >(&StepBasic_SiUnitAndVolumeUnit::SetVolumeUnit),
             R"#(None)#"  , py::arg("aVolumeUnit"))
        .def("VolumeUnit",
             (opencascade::handle<StepBasic_VolumeUnit> (StepBasic_SiUnitAndVolumeUnit::*)() const) static_cast<opencascade::handle<StepBasic_VolumeUnit> (StepBasic_SiUnitAndVolumeUnit::*)() const>(&StepBasic_SiUnitAndVolumeUnit::VolumeUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndVolumeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndVolumeUnit::*)() const>(&StepBasic_SiUnitAndVolumeUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndVolumeUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SiUnitAndVolumeUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Product ,opencascade::handle<StepBasic_Product>  , Standard_Transient >>(m.attr("StepBasic_Product"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Product::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_HArray1OfProductContext> &  ) ) static_cast<void (StepBasic_Product::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_HArray1OfProductContext> &  ) >(&StepBasic_Product::Init),
             R"#(None)#"  , py::arg("aId"),  py::arg("aName"),  py::arg("aDescription"),  py::arg("aFrameOfReference"))
        .def("SetId",
             (void (StepBasic_Product::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Product::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Product::SetId),
             R"#(None)#"  , py::arg("aId"))
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Product::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Product::*)() const>(&StepBasic_Product::Id),
             R"#(None)#" )
        .def("SetName",
             (void (StepBasic_Product::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Product::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Product::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Product::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Product::*)() const>(&StepBasic_Product::Name),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepBasic_Product::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Product::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Product::SetDescription),
             R"#(None)#"  , py::arg("aDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Product::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Product::*)() const>(&StepBasic_Product::Description),
             R"#(None)#" )
        .def("SetFrameOfReference",
             (void (StepBasic_Product::*)( const opencascade::handle<StepBasic_HArray1OfProductContext> &  ) ) static_cast<void (StepBasic_Product::*)( const opencascade::handle<StepBasic_HArray1OfProductContext> &  ) >(&StepBasic_Product::SetFrameOfReference),
             R"#(None)#"  , py::arg("aFrameOfReference"))
        .def("FrameOfReference",
             (opencascade::handle<StepBasic_HArray1OfProductContext> (StepBasic_Product::*)() const) static_cast<opencascade::handle<StepBasic_HArray1OfProductContext> (StepBasic_Product::*)() const>(&StepBasic_Product::FrameOfReference),
             R"#(None)#" )
        .def("FrameOfReferenceValue",
             (opencascade::handle<StepBasic_ProductContext> (StepBasic_Product::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepBasic_ProductContext> (StepBasic_Product::*)( const Standard_Integer  ) const>(&StepBasic_Product::FrameOfReferenceValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbFrameOfReference",
             (Standard_Integer (StepBasic_Product::*)() const) static_cast<Standard_Integer (StepBasic_Product::*)() const>(&StepBasic_Product::NbFrameOfReference),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Product::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Product::*)() const>(&StepBasic_Product::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Product::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Product::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ConversionBasedUnit ,opencascade::handle<StepBasic_ConversionBasedUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_ConversionBasedUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ConversionBasedUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) >(&StepBasic_ConversionBasedUnit::Init),
             R"#(None)#"  , py::arg("aDimensions"),  py::arg("aName"),  py::arg("aConversionFactor"))
        .def("SetName",
             (void (StepBasic_ConversionBasedUnit::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ConversionBasedUnit::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ConversionBasedUnit::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ConversionBasedUnit::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ConversionBasedUnit::*)() const>(&StepBasic_ConversionBasedUnit::Name),
             R"#(None)#" )
        .def("SetConversionFactor",
             (void (StepBasic_ConversionBasedUnit::*)( const opencascade::handle<StepBasic_MeasureWithUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnit::*)( const opencascade::handle<StepBasic_MeasureWithUnit> &  ) >(&StepBasic_ConversionBasedUnit::SetConversionFactor),
             R"#(None)#"  , py::arg("aConversionFactor"))
        .def("ConversionFactor",
             (opencascade::handle<StepBasic_MeasureWithUnit> (StepBasic_ConversionBasedUnit::*)() const) static_cast<opencascade::handle<StepBasic_MeasureWithUnit> (StepBasic_ConversionBasedUnit::*)() const>(&StepBasic_ConversionBasedUnit::ConversionFactor),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnit::*)() const>(&StepBasic_ConversionBasedUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ConversionBasedUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_MeasureWithUnit ,opencascade::handle<StepBasic_MeasureWithUnit>  , Standard_Transient >>(m.attr("StepBasic_MeasureWithUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_MeasureWithUnit::*)( const opencascade::handle<StepBasic_MeasureValueMember> & ,  const StepBasic_Unit &  ) ) static_cast<void (StepBasic_MeasureWithUnit::*)( const opencascade::handle<StepBasic_MeasureValueMember> & ,  const StepBasic_Unit &  ) >(&StepBasic_MeasureWithUnit::Init),
             R"#(None)#"  , py::arg("aValueComponent"),  py::arg("aUnitComponent"))
        .def("SetValueComponent",
             (void (StepBasic_MeasureWithUnit::*)( const Standard_Real  ) ) static_cast<void (StepBasic_MeasureWithUnit::*)( const Standard_Real  ) >(&StepBasic_MeasureWithUnit::SetValueComponent),
             R"#(None)#"  , py::arg("aValueComponent"))
        .def("ValueComponent",
             (Standard_Real (StepBasic_MeasureWithUnit::*)() const) static_cast<Standard_Real (StepBasic_MeasureWithUnit::*)() const>(&StepBasic_MeasureWithUnit::ValueComponent),
             R"#(None)#" )
        .def("ValueComponentMember",
             (opencascade::handle<StepBasic_MeasureValueMember> (StepBasic_MeasureWithUnit::*)() const) static_cast<opencascade::handle<StepBasic_MeasureValueMember> (StepBasic_MeasureWithUnit::*)() const>(&StepBasic_MeasureWithUnit::ValueComponentMember),
             R"#(None)#" )
        .def("SetValueComponentMember",
             (void (StepBasic_MeasureWithUnit::*)( const opencascade::handle<StepBasic_MeasureValueMember> &  ) ) static_cast<void (StepBasic_MeasureWithUnit::*)( const opencascade::handle<StepBasic_MeasureValueMember> &  ) >(&StepBasic_MeasureWithUnit::SetValueComponentMember),
             R"#(None)#"  , py::arg("val"))
        .def("SetUnitComponent",
             (void (StepBasic_MeasureWithUnit::*)( const StepBasic_Unit &  ) ) static_cast<void (StepBasic_MeasureWithUnit::*)( const StepBasic_Unit &  ) >(&StepBasic_MeasureWithUnit::SetUnitComponent),
             R"#(None)#"  , py::arg("aUnitComponent"))
        .def("UnitComponent",
             (StepBasic_Unit (StepBasic_MeasureWithUnit::*)() const) static_cast<StepBasic_Unit (StepBasic_MeasureWithUnit::*)() const>(&StepBasic_MeasureWithUnit::UnitComponent),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_MeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_MeasureWithUnit::*)() const>(&StepBasic_MeasureWithUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_MeasureWithUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_MeasureWithUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndSolidAngleUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndSolidAngleUnit>  , StepBasic_ConversionBasedUnit >>(m.attr("StepBasic_ConversionBasedUnitAndSolidAngleUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ConversionBasedUnitAndSolidAngleUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndSolidAngleUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) >(&StepBasic_ConversionBasedUnitAndSolidAngleUnit::Init),
             R"#(None)#"  , py::arg("aDimensions"),  py::arg("aName"),  py::arg("aConversionFactor"))
        .def("SetSolidAngleUnit",
             (void (StepBasic_ConversionBasedUnitAndSolidAngleUnit::*)( const opencascade::handle<StepBasic_SolidAngleUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndSolidAngleUnit::*)( const opencascade::handle<StepBasic_SolidAngleUnit> &  ) >(&StepBasic_ConversionBasedUnitAndSolidAngleUnit::SetSolidAngleUnit),
             R"#(None)#"  , py::arg("aSolidAngleUnit"))
        .def("SolidAngleUnit",
             (opencascade::handle<StepBasic_SolidAngleUnit> (StepBasic_ConversionBasedUnitAndSolidAngleUnit::*)() const) static_cast<opencascade::handle<StepBasic_SolidAngleUnit> (StepBasic_ConversionBasedUnitAndSolidAngleUnit::*)() const>(&StepBasic_ConversionBasedUnitAndSolidAngleUnit::SolidAngleUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndSolidAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndSolidAngleUnit::*)() const>(&StepBasic_ConversionBasedUnitAndSolidAngleUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndSolidAngleUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ConversionBasedUnitAndSolidAngleUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SolidAngleMeasureWithUnit ,opencascade::handle<StepBasic_SolidAngleMeasureWithUnit>  , StepBasic_MeasureWithUnit >>(m.attr("StepBasic_SolidAngleMeasureWithUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SolidAngleMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SolidAngleMeasureWithUnit::*)() const>(&StepBasic_SolidAngleMeasureWithUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SolidAngleMeasureWithUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SolidAngleMeasureWithUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_HArray1OfNamedUnit ,std::unique_ptr<StepBasic_HArray1OfNamedUnit>  >>(m.attr("StepBasic_HArray1OfNamedUnit"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_NamedUnit> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_NamedUnit> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepBasic_Array1OfNamedUnit & (StepBasic_HArray1OfNamedUnit::*)() const) static_cast<const StepBasic_Array1OfNamedUnit & (StepBasic_HArray1OfNamedUnit::*)() const>(&StepBasic_HArray1OfNamedUnit::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfNamedUnit & (StepBasic_HArray1OfNamedUnit::*)() ) static_cast<StepBasic_Array1OfNamedUnit & (StepBasic_HArray1OfNamedUnit::*)() >(&StepBasic_HArray1OfNamedUnit::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfNamedUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfNamedUnit::*)() const>(&StepBasic_HArray1OfNamedUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfNamedUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfNamedUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndPlaneAngleUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndPlaneAngleUnit>  , StepBasic_ConversionBasedUnit >>(m.attr("StepBasic_ConversionBasedUnitAndPlaneAngleUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ConversionBasedUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) >(&StepBasic_ConversionBasedUnitAndPlaneAngleUnit::Init),
             R"#(None)#"  , py::arg("aDimensions"),  py::arg("aName"),  py::arg("aConversionFactor"))
        .def("SetPlaneAngleUnit",
             (void (StepBasic_ConversionBasedUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepBasic_PlaneAngleUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepBasic_PlaneAngleUnit> &  ) >(&StepBasic_ConversionBasedUnitAndPlaneAngleUnit::SetPlaneAngleUnit),
             R"#(None)#"  , py::arg("aPlaneAngleUnit"))
        .def("PlaneAngleUnit",
             (opencascade::handle<StepBasic_PlaneAngleUnit> (StepBasic_ConversionBasedUnitAndPlaneAngleUnit::*)() const) static_cast<opencascade::handle<StepBasic_PlaneAngleUnit> (StepBasic_ConversionBasedUnitAndPlaneAngleUnit::*)() const>(&StepBasic_ConversionBasedUnitAndPlaneAngleUnit::PlaneAngleUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndPlaneAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndPlaneAngleUnit::*)() const>(&StepBasic_ConversionBasedUnitAndPlaneAngleUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndPlaneAngleUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ConversionBasedUnitAndPlaneAngleUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SolidAngleUnit ,opencascade::handle<StepBasic_SolidAngleUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_SolidAngleUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SolidAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SolidAngleUnit::*)() const>(&StepBasic_SolidAngleUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SolidAngleUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SolidAngleUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Date ,opencascade::handle<StepBasic_Date>  , Standard_Transient >>(m.attr("StepBasic_Date"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Date::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_Date::*)( const Standard_Integer  ) >(&StepBasic_Date::Init),
             R"#(None)#"  , py::arg("aYearComponent"))
        .def("SetYearComponent",
             (void (StepBasic_Date::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_Date::*)( const Standard_Integer  ) >(&StepBasic_Date::SetYearComponent),
             R"#(None)#"  , py::arg("aYearComponent"))
        .def("YearComponent",
             (Standard_Integer (StepBasic_Date::*)() const) static_cast<Standard_Integer (StepBasic_Date::*)() const>(&StepBasic_Date::YearComponent),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Date::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Date::*)() const>(&StepBasic_Date::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Date::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Date::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_VersionedActionRequest ,opencascade::handle<StepBasic_VersionedActionRequest>  , Standard_Transient >>(m.attr("StepBasic_VersionedActionRequest"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_VersionedActionRequest::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_VersionedActionRequest::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_VersionedActionRequest::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aId"),  py::arg("aVersion"),  py::arg("aPurpose"),  py::arg("hasDescription"),  py::arg("aDescription"))
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_VersionedActionRequest::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_VersionedActionRequest::*)() const>(&StepBasic_VersionedActionRequest::Id),
             R"#(Returns field Id)#" )
        .def("SetId",
             (void (StepBasic_VersionedActionRequest::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_VersionedActionRequest::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_VersionedActionRequest::SetId),
             R"#(Set field Id)#"  , py::arg("Id"))
        .def("Version",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_VersionedActionRequest::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_VersionedActionRequest::*)() const>(&StepBasic_VersionedActionRequest::Version),
             R"#(Returns field Version)#" )
        .def("SetVersion",
             (void (StepBasic_VersionedActionRequest::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_VersionedActionRequest::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_VersionedActionRequest::SetVersion),
             R"#(Set field Version)#"  , py::arg("Version"))
        .def("Purpose",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_VersionedActionRequest::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_VersionedActionRequest::*)() const>(&StepBasic_VersionedActionRequest::Purpose),
             R"#(Returns field Purpose)#" )
        .def("SetPurpose",
             (void (StepBasic_VersionedActionRequest::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_VersionedActionRequest::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_VersionedActionRequest::SetPurpose),
             R"#(Set field Purpose)#"  , py::arg("Purpose"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_VersionedActionRequest::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_VersionedActionRequest::*)() const>(&StepBasic_VersionedActionRequest::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_VersionedActionRequest::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_VersionedActionRequest::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_VersionedActionRequest::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_VersionedActionRequest::*)() const) static_cast<Standard_Boolean (StepBasic_VersionedActionRequest::*)() const>(&StepBasic_VersionedActionRequest::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_VersionedActionRequest::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_VersionedActionRequest::*)() const>(&StepBasic_VersionedActionRequest::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_VersionedActionRequest::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_VersionedActionRequest::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_MechanicalContext ,opencascade::handle<StepBasic_MechanicalContext>  , StepBasic_ProductContext >>(m.attr("StepBasic_MechanicalContext"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_MechanicalContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_MechanicalContext::*)() const>(&StepBasic_MechanicalContext::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_MechanicalContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_MechanicalContext::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_PersonAndOrganizationRole ,opencascade::handle<StepBasic_PersonAndOrganizationRole>  , Standard_Transient >>(m.attr("StepBasic_PersonAndOrganizationRole"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_PersonAndOrganizationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_PersonAndOrganizationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_PersonAndOrganizationRole::Init),
             R"#(None)#"  , py::arg("aName"))
        .def("SetName",
             (void (StepBasic_PersonAndOrganizationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_PersonAndOrganizationRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_PersonAndOrganizationRole::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_PersonAndOrganizationRole::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_PersonAndOrganizationRole::*)() const>(&StepBasic_PersonAndOrganizationRole::Name),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganizationRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganizationRole::*)() const>(&StepBasic_PersonAndOrganizationRole::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PersonAndOrganizationRole::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_PersonAndOrganizationRole::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_CalendarDate ,opencascade::handle<StepBasic_CalendarDate>  , StepBasic_Date >>(m.attr("StepBasic_CalendarDate"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_CalendarDate::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (StepBasic_CalendarDate::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&StepBasic_CalendarDate::Init),
             R"#(None)#"  , py::arg("aYearComponent"),  py::arg("aDayComponent"),  py::arg("aMonthComponent"))
        .def("SetDayComponent",
             (void (StepBasic_CalendarDate::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_CalendarDate::*)( const Standard_Integer  ) >(&StepBasic_CalendarDate::SetDayComponent),
             R"#(None)#"  , py::arg("aDayComponent"))
        .def("DayComponent",
             (Standard_Integer (StepBasic_CalendarDate::*)() const) static_cast<Standard_Integer (StepBasic_CalendarDate::*)() const>(&StepBasic_CalendarDate::DayComponent),
             R"#(None)#" )
        .def("SetMonthComponent",
             (void (StepBasic_CalendarDate::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_CalendarDate::*)( const Standard_Integer  ) >(&StepBasic_CalendarDate::SetMonthComponent),
             R"#(None)#"  , py::arg("aMonthComponent"))
        .def("MonthComponent",
             (Standard_Integer (StepBasic_CalendarDate::*)() const) static_cast<Standard_Integer (StepBasic_CalendarDate::*)() const>(&StepBasic_CalendarDate::MonthComponent),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_CalendarDate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_CalendarDate::*)() const>(&StepBasic_CalendarDate::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_CalendarDate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_CalendarDate::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SiUnitAndPlaneAngleUnit ,opencascade::handle<StepBasic_SiUnitAndPlaneAngleUnit>  , StepBasic_SiUnit >>(m.attr("StepBasic_SiUnitAndPlaneAngleUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_SiUnitAndPlaneAngleUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) ) static_cast<void (StepBasic_SiUnitAndPlaneAngleUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) >(&StepBasic_SiUnitAndPlaneAngleUnit::Init),
             R"#(None)#"  , py::arg("hasAprefix"),  py::arg("aPrefix"),  py::arg("aName"))
        .def("SetPlaneAngleUnit",
             (void (StepBasic_SiUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepBasic_PlaneAngleUnit> &  ) ) static_cast<void (StepBasic_SiUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepBasic_PlaneAngleUnit> &  ) >(&StepBasic_SiUnitAndPlaneAngleUnit::SetPlaneAngleUnit),
             R"#(None)#"  , py::arg("aPlaneAngleUnit"))
        .def("PlaneAngleUnit",
             (opencascade::handle<StepBasic_PlaneAngleUnit> (StepBasic_SiUnitAndPlaneAngleUnit::*)() const) static_cast<opencascade::handle<StepBasic_PlaneAngleUnit> (StepBasic_SiUnitAndPlaneAngleUnit::*)() const>(&StepBasic_SiUnitAndPlaneAngleUnit::PlaneAngleUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndPlaneAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndPlaneAngleUnit::*)() const>(&StepBasic_SiUnitAndPlaneAngleUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndPlaneAngleUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SiUnitAndPlaneAngleUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_CertificationType ,opencascade::handle<StepBasic_CertificationType>  , Standard_Transient >>(m.attr("StepBasic_CertificationType"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_CertificationType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_CertificationType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_CertificationType::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_CertificationType::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_CertificationType::*)() const>(&StepBasic_CertificationType::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_CertificationType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_CertificationType::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_CertificationType::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_CertificationType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_CertificationType::*)() const>(&StepBasic_CertificationType::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_CertificationType::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_CertificationType::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndMassUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndMassUnit>  , StepBasic_ConversionBasedUnit >>(m.attr("StepBasic_ConversionBasedUnitAndMassUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ConversionBasedUnitAndMassUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndMassUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) >(&StepBasic_ConversionBasedUnitAndMassUnit::Init),
             R"#(None)#"  , py::arg("aDimensions"),  py::arg("aName"),  py::arg("aConversionFactor"))
        .def("SetMassUnit",
             (void (StepBasic_ConversionBasedUnitAndMassUnit::*)( const opencascade::handle<StepBasic_MassUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndMassUnit::*)( const opencascade::handle<StepBasic_MassUnit> &  ) >(&StepBasic_ConversionBasedUnitAndMassUnit::SetMassUnit),
             R"#(None)#"  , py::arg("aMassUnit"))
        .def("MassUnit",
             (opencascade::handle<StepBasic_MassUnit> (StepBasic_ConversionBasedUnitAndMassUnit::*)() const) static_cast<opencascade::handle<StepBasic_MassUnit> (StepBasic_ConversionBasedUnitAndMassUnit::*)() const>(&StepBasic_ConversionBasedUnitAndMassUnit::MassUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndMassUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndMassUnit::*)() const>(&StepBasic_ConversionBasedUnitAndMassUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndMassUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ConversionBasedUnitAndMassUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_PlaneAngleUnit ,opencascade::handle<StepBasic_PlaneAngleUnit>  , StepBasic_NamedUnit >>(m.attr("StepBasic_PlaneAngleUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PlaneAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PlaneAngleUnit::*)() const>(&StepBasic_PlaneAngleUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PlaneAngleUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_PlaneAngleUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_TimeMeasureWithUnit ,opencascade::handle<StepBasic_TimeMeasureWithUnit>  , StepBasic_MeasureWithUnit >>(m.attr("StepBasic_TimeMeasureWithUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_TimeMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_TimeMeasureWithUnit::*)() const>(&StepBasic_TimeMeasureWithUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_TimeMeasureWithUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_TimeMeasureWithUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_RoleSelect ,std::unique_ptr<StepBasic_RoleSelect>  , StepData_SelectType >>(m.attr("StepBasic_RoleSelect"))
        .def(py::init<  >()  )
        .def("CaseNum",
             (Standard_Integer (StepBasic_RoleSelect::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepBasic_RoleSelect::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepBasic_RoleSelect::CaseNum),
             R"#(Recognizes a kind of RoleSelect select type 1 -> ActionAssignment from StepBasic 2 -> ActionRequestAssignment from StepBasic 3 -> ApprovalAssignment from StepBasic 4 -> ApprovalDateTime from StepBasic 5 -> CertificationAssignment from StepBasic 6 -> ContractAssignment from StepBasic 7 -> DocumentReference from StepBasic 8 -> EffectivityAssignment from StepBasic 9 -> GroupAssignment from StepBasic 10 -> NameAssignment from StepBasic 11 -> SecurityClassificationAssignment from StepBasic 0 else)#"  , py::arg("ent"))
        .def("ActionAssignment",
             (opencascade::handle<StepBasic_ActionAssignment> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_ActionAssignment> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::ActionAssignment),
             R"#(Returns Value as ActionAssignment (or Null if another type))#" )
        .def("ActionRequestAssignment",
             (opencascade::handle<StepBasic_ActionRequestAssignment> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_ActionRequestAssignment> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::ActionRequestAssignment),
             R"#(Returns Value as ActionRequestAssignment (or Null if another type))#" )
        .def("ApprovalAssignment",
             (opencascade::handle<StepBasic_ApprovalAssignment> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalAssignment> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::ApprovalAssignment),
             R"#(Returns Value as ApprovalAssignment (or Null if another type))#" )
        .def("ApprovalDateTime",
             (opencascade::handle<StepBasic_ApprovalDateTime> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalDateTime> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::ApprovalDateTime),
             R"#(Returns Value as ApprovalDateTime (or Null if another type))#" )
        .def("CertificationAssignment",
             (opencascade::handle<StepBasic_CertificationAssignment> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_CertificationAssignment> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::CertificationAssignment),
             R"#(Returns Value as CertificationAssignment (or Null if another type))#" )
        .def("ContractAssignment",
             (opencascade::handle<StepBasic_ContractAssignment> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_ContractAssignment> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::ContractAssignment),
             R"#(Returns Value as ContractAssignment (or Null if another type))#" )
        .def("DocumentReference",
             (opencascade::handle<StepBasic_DocumentReference> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_DocumentReference> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::DocumentReference),
             R"#(Returns Value as DocumentReference (or Null if another type))#" )
        .def("EffectivityAssignment",
             (opencascade::handle<StepBasic_EffectivityAssignment> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_EffectivityAssignment> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::EffectivityAssignment),
             R"#(Returns Value as EffectivityAssignment (or Null if another type))#" )
        .def("GroupAssignment",
             (opencascade::handle<StepBasic_GroupAssignment> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_GroupAssignment> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::GroupAssignment),
             R"#(Returns Value as GroupAssignment (or Null if another type))#" )
        .def("NameAssignment",
             (opencascade::handle<StepBasic_NameAssignment> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_NameAssignment> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::NameAssignment),
             R"#(Returns Value as NameAssignment (or Null if another type))#" )
        .def("SecurityClassificationAssignment",
             (opencascade::handle<StepBasic_SecurityClassificationAssignment> (StepBasic_RoleSelect::*)() const) static_cast<opencascade::handle<StepBasic_SecurityClassificationAssignment> (StepBasic_RoleSelect::*)() const>(&StepBasic_RoleSelect::SecurityClassificationAssignment),
             R"#(Returns Value as SecurityClassificationAssignment (or Null if another type))#" )
;


    static_cast<py::class_<StepBasic_HArray1OfUncertaintyMeasureWithUnit ,std::unique_ptr<StepBasic_HArray1OfUncertaintyMeasureWithUnit>  >>(m.attr("StepBasic_HArray1OfUncertaintyMeasureWithUnit"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> > & >()  , py::arg("theOther") )
        .def("Array1",
             (const StepBasic_Array1OfUncertaintyMeasureWithUnit & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() const) static_cast<const StepBasic_Array1OfUncertaintyMeasureWithUnit & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() const>(&StepBasic_HArray1OfUncertaintyMeasureWithUnit::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfUncertaintyMeasureWithUnit & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() ) static_cast<StepBasic_Array1OfUncertaintyMeasureWithUnit & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() >(&StepBasic_HArray1OfUncertaintyMeasureWithUnit::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() const>(&StepBasic_HArray1OfUncertaintyMeasureWithUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfUncertaintyMeasureWithUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfUncertaintyMeasureWithUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndAreaUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndAreaUnit>  , StepBasic_ConversionBasedUnit >>(m.attr("StepBasic_ConversionBasedUnitAndAreaUnit"))
        .def(py::init<  >()  )
        .def("SetAreaUnit",
             (void (StepBasic_ConversionBasedUnitAndAreaUnit::*)( const opencascade::handle<StepBasic_AreaUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndAreaUnit::*)( const opencascade::handle<StepBasic_AreaUnit> &  ) >(&StepBasic_ConversionBasedUnitAndAreaUnit::SetAreaUnit),
             R"#(None)#"  , py::arg("anAreaUnit"))
        .def("AreaUnit",
             (opencascade::handle<StepBasic_AreaUnit> (StepBasic_ConversionBasedUnitAndAreaUnit::*)() const) static_cast<opencascade::handle<StepBasic_AreaUnit> (StepBasic_ConversionBasedUnitAndAreaUnit::*)() const>(&StepBasic_ConversionBasedUnitAndAreaUnit::AreaUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndAreaUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndAreaUnit::*)() const>(&StepBasic_ConversionBasedUnitAndAreaUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndAreaUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ConversionBasedUnitAndAreaUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_UncertaintyMeasureWithUnit ,opencascade::handle<StepBasic_UncertaintyMeasureWithUnit>  , StepBasic_MeasureWithUnit >>(m.attr("StepBasic_UncertaintyMeasureWithUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_UncertaintyMeasureWithUnit::*)( const opencascade::handle<StepBasic_MeasureValueMember> & ,  const StepBasic_Unit & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_UncertaintyMeasureWithUnit::*)( const opencascade::handle<StepBasic_MeasureValueMember> & ,  const StepBasic_Unit & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_UncertaintyMeasureWithUnit::Init),
             R"#(None)#"  , py::arg("aValueComponent"),  py::arg("aUnitComponent"),  py::arg("aName"),  py::arg("aDescription"))
        .def("SetName",
             (void (StepBasic_UncertaintyMeasureWithUnit::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_UncertaintyMeasureWithUnit::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_UncertaintyMeasureWithUnit::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_UncertaintyMeasureWithUnit::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_UncertaintyMeasureWithUnit::*)() const>(&StepBasic_UncertaintyMeasureWithUnit::Name),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepBasic_UncertaintyMeasureWithUnit::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_UncertaintyMeasureWithUnit::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_UncertaintyMeasureWithUnit::SetDescription),
             R"#(None)#"  , py::arg("aDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_UncertaintyMeasureWithUnit::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_UncertaintyMeasureWithUnit::*)() const>(&StepBasic_UncertaintyMeasureWithUnit::Description),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_UncertaintyMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_UncertaintyMeasureWithUnit::*)() const>(&StepBasic_UncertaintyMeasureWithUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_UncertaintyMeasureWithUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_UncertaintyMeasureWithUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_PlaneAngleMeasureWithUnit ,opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit>  , StepBasic_MeasureWithUnit >>(m.attr("StepBasic_PlaneAngleMeasureWithUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PlaneAngleMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PlaneAngleMeasureWithUnit::*)() const>(&StepBasic_PlaneAngleMeasureWithUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PlaneAngleMeasureWithUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_PlaneAngleMeasureWithUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinition ,opencascade::handle<StepBasic_ProductDefinition>  , Standard_Transient >>(m.attr("StepBasic_ProductDefinition"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductDefinition::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> & ,  const opencascade::handle<StepBasic_ProductDefinitionContext> &  ) ) static_cast<void (StepBasic_ProductDefinition::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> & ,  const opencascade::handle<StepBasic_ProductDefinitionContext> &  ) >(&StepBasic_ProductDefinition::Init),
             R"#(None)#"  , py::arg("aId"),  py::arg("aDescription"),  py::arg("aFormation"),  py::arg("aFrameOfReference"))
        .def("SetId",
             (void (StepBasic_ProductDefinition::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinition::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinition::SetId),
             R"#(None)#"  , py::arg("aId"))
        .def("Id",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinition::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinition::*)() const>(&StepBasic_ProductDefinition::Id),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepBasic_ProductDefinition::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductDefinition::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductDefinition::SetDescription),
             R"#(None)#"  , py::arg("aDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinition::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinition::*)() const>(&StepBasic_ProductDefinition::Description),
             R"#(None)#" )
        .def("SetFormation",
             (void (StepBasic_ProductDefinition::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) ) static_cast<void (StepBasic_ProductDefinition::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) >(&StepBasic_ProductDefinition::SetFormation),
             R"#(None)#"  , py::arg("aFormation"))
        .def("Formation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepBasic_ProductDefinition::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepBasic_ProductDefinition::*)() const>(&StepBasic_ProductDefinition::Formation),
             R"#(None)#" )
        .def("SetFrameOfReference",
             (void (StepBasic_ProductDefinition::*)( const opencascade::handle<StepBasic_ProductDefinitionContext> &  ) ) static_cast<void (StepBasic_ProductDefinition::*)( const opencascade::handle<StepBasic_ProductDefinitionContext> &  ) >(&StepBasic_ProductDefinition::SetFrameOfReference),
             R"#(None)#"  , py::arg("aFrameOfReference"))
        .def("FrameOfReference",
             (opencascade::handle<StepBasic_ProductDefinitionContext> (StepBasic_ProductDefinition::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionContext> (StepBasic_ProductDefinition::*)() const>(&StepBasic_ProductDefinition::FrameOfReference),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinition::*)() const>(&StepBasic_ProductDefinition::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductDefinition::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_WeekOfYearAndDayDate ,opencascade::handle<StepBasic_WeekOfYearAndDayDate>  , StepBasic_Date >>(m.attr("StepBasic_WeekOfYearAndDayDate"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_WeekOfYearAndDayDate::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Integer  ) ) static_cast<void (StepBasic_WeekOfYearAndDayDate::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Integer  ) >(&StepBasic_WeekOfYearAndDayDate::Init),
             R"#(None)#"  , py::arg("aYearComponent"),  py::arg("aWeekComponent"),  py::arg("hasAdayComponent"),  py::arg("aDayComponent"))
        .def("SetWeekComponent",
             (void (StepBasic_WeekOfYearAndDayDate::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_WeekOfYearAndDayDate::*)( const Standard_Integer  ) >(&StepBasic_WeekOfYearAndDayDate::SetWeekComponent),
             R"#(None)#"  , py::arg("aWeekComponent"))
        .def("WeekComponent",
             (Standard_Integer (StepBasic_WeekOfYearAndDayDate::*)() const) static_cast<Standard_Integer (StepBasic_WeekOfYearAndDayDate::*)() const>(&StepBasic_WeekOfYearAndDayDate::WeekComponent),
             R"#(None)#" )
        .def("SetDayComponent",
             (void (StepBasic_WeekOfYearAndDayDate::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_WeekOfYearAndDayDate::*)( const Standard_Integer  ) >(&StepBasic_WeekOfYearAndDayDate::SetDayComponent),
             R"#(None)#"  , py::arg("aDayComponent"))
        .def("UnSetDayComponent",
             (void (StepBasic_WeekOfYearAndDayDate::*)() ) static_cast<void (StepBasic_WeekOfYearAndDayDate::*)() >(&StepBasic_WeekOfYearAndDayDate::UnSetDayComponent),
             R"#(None)#" )
        .def("DayComponent",
             (Standard_Integer (StepBasic_WeekOfYearAndDayDate::*)() const) static_cast<Standard_Integer (StepBasic_WeekOfYearAndDayDate::*)() const>(&StepBasic_WeekOfYearAndDayDate::DayComponent),
             R"#(None)#" )
        .def("HasDayComponent",
             (Standard_Boolean (StepBasic_WeekOfYearAndDayDate::*)() const) static_cast<Standard_Boolean (StepBasic_WeekOfYearAndDayDate::*)() const>(&StepBasic_WeekOfYearAndDayDate::HasDayComponent),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_WeekOfYearAndDayDate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_WeekOfYearAndDayDate::*)() const>(&StepBasic_WeekOfYearAndDayDate::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_WeekOfYearAndDayDate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_WeekOfYearAndDayDate::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_Group ,opencascade::handle<StepBasic_Group>  , Standard_Transient >>(m.attr("StepBasic_Group"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_Group::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Group::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Group::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Group::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Group::*)() const>(&StepBasic_Group::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_Group::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Group::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Group::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_Group::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_Group::*)() const>(&StepBasic_Group::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_Group::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_Group::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_Group::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_Group::*)() const) static_cast<Standard_Boolean (StepBasic_Group::*)() const>(&StepBasic_Group::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Group::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Group::*)() const>(&StepBasic_Group::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Group::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_Group::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinitionReferenceWithLocalRepresentation ,opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation>  , StepBasic_ProductDefinition >>(m.attr("StepBasic_ProductDefinitionReferenceWithLocalRepresentation"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)( const opencascade::handle<StepBasic_ExternalSource> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> & ,  const opencascade::handle<StepBasic_ProductDefinitionContext> &  ) ) static_cast<void (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)( const opencascade::handle<StepBasic_ExternalSource> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> & ,  const opencascade::handle<StepBasic_ProductDefinitionContext> &  ) >(&StepBasic_ProductDefinitionReferenceWithLocalRepresentation::Init),
             R"#(None)#"  , py::arg("theSource"),  py::arg("theId"),  py::arg("theDescription"),  py::arg("theFormation"),  py::arg("theFrameOfReference"))
        .def("Source",
             (opencascade::handle<StepBasic_ExternalSource> (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)() const) static_cast<opencascade::handle<StepBasic_ExternalSource> (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)() const>(&StepBasic_ProductDefinitionReferenceWithLocalRepresentation::Source),
             R"#(Returns field Source)#" )
        .def("SetSource",
             (void (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)( const opencascade::handle<StepBasic_ExternalSource> &  ) ) static_cast<void (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)( const opencascade::handle<StepBasic_ExternalSource> &  ) >(&StepBasic_ProductDefinitionReferenceWithLocalRepresentation::SetSource),
             R"#(Set field Source)#"  , py::arg("theSource"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)() const>(&StepBasic_ProductDefinitionReferenceWithLocalRepresentation::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionReferenceWithLocalRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductDefinitionReferenceWithLocalRepresentation::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_PhysicallyModeledProductDefinition ,opencascade::handle<StepBasic_PhysicallyModeledProductDefinition>  , StepBasic_ProductDefinition >>(m.attr("StepBasic_PhysicallyModeledProductDefinition"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PhysicallyModeledProductDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PhysicallyModeledProductDefinition::*)() const>(&StepBasic_PhysicallyModeledProductDefinition::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PhysicallyModeledProductDefinition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_PhysicallyModeledProductDefinition::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DerivedUnitElement ,opencascade::handle<StepBasic_DerivedUnitElement>  , Standard_Transient >>(m.attr("StepBasic_DerivedUnitElement"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_DerivedUnitElement::*)( const opencascade::handle<StepBasic_NamedUnit> & ,  const Standard_Real  ) ) static_cast<void (StepBasic_DerivedUnitElement::*)( const opencascade::handle<StepBasic_NamedUnit> & ,  const Standard_Real  ) >(&StepBasic_DerivedUnitElement::Init),
             R"#(None)#"  , py::arg("aUnit"),  py::arg("aExponent"))
        .def("SetUnit",
             (void (StepBasic_DerivedUnitElement::*)( const opencascade::handle<StepBasic_NamedUnit> &  ) ) static_cast<void (StepBasic_DerivedUnitElement::*)( const opencascade::handle<StepBasic_NamedUnit> &  ) >(&StepBasic_DerivedUnitElement::SetUnit),
             R"#(None)#"  , py::arg("aUnit"))
        .def("Unit",
             (opencascade::handle<StepBasic_NamedUnit> (StepBasic_DerivedUnitElement::*)() const) static_cast<opencascade::handle<StepBasic_NamedUnit> (StepBasic_DerivedUnitElement::*)() const>(&StepBasic_DerivedUnitElement::Unit),
             R"#(None)#" )
        .def("SetExponent",
             (void (StepBasic_DerivedUnitElement::*)( const Standard_Real  ) ) static_cast<void (StepBasic_DerivedUnitElement::*)( const Standard_Real  ) >(&StepBasic_DerivedUnitElement::SetExponent),
             R"#(None)#"  , py::arg("aExponent"))
        .def("Exponent",
             (Standard_Real (StepBasic_DerivedUnitElement::*)() const) static_cast<Standard_Real (StepBasic_DerivedUnitElement::*)() const>(&StepBasic_DerivedUnitElement::Exponent),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DerivedUnitElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DerivedUnitElement::*)() const>(&StepBasic_DerivedUnitElement::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DerivedUnitElement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DerivedUnitElement::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndRatioUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndRatioUnit>  , StepBasic_ConversionBasedUnit >>(m.attr("StepBasic_ConversionBasedUnitAndRatioUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ConversionBasedUnitAndRatioUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndRatioUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) >(&StepBasic_ConversionBasedUnitAndRatioUnit::Init),
             R"#(None)#"  , py::arg("aDimensions"),  py::arg("aName"),  py::arg("aConversionFactor"))
        .def("SetRatioUnit",
             (void (StepBasic_ConversionBasedUnitAndRatioUnit::*)( const opencascade::handle<StepBasic_RatioUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndRatioUnit::*)( const opencascade::handle<StepBasic_RatioUnit> &  ) >(&StepBasic_ConversionBasedUnitAndRatioUnit::SetRatioUnit),
             R"#(None)#"  , py::arg("aRatioUnit"))
        .def("RatioUnit",
             (opencascade::handle<StepBasic_RatioUnit> (StepBasic_ConversionBasedUnitAndRatioUnit::*)() const) static_cast<opencascade::handle<StepBasic_RatioUnit> (StepBasic_ConversionBasedUnitAndRatioUnit::*)() const>(&StepBasic_ConversionBasedUnitAndRatioUnit::RatioUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndRatioUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndRatioUnit::*)() const>(&StepBasic_ConversionBasedUnitAndRatioUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndRatioUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ConversionBasedUnitAndRatioUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_LengthMeasureWithUnit ,opencascade::handle<StepBasic_LengthMeasureWithUnit>  , StepBasic_MeasureWithUnit >>(m.attr("StepBasic_LengthMeasureWithUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_LengthMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_LengthMeasureWithUnit::*)() const>(&StepBasic_LengthMeasureWithUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_LengthMeasureWithUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_LengthMeasureWithUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndLengthUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndLengthUnit>  , StepBasic_ConversionBasedUnit >>(m.attr("StepBasic_ConversionBasedUnitAndLengthUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ConversionBasedUnitAndLengthUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndLengthUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) >(&StepBasic_ConversionBasedUnitAndLengthUnit::Init),
             R"#(None)#"  , py::arg("aDimensions"),  py::arg("aName"),  py::arg("aConversionFactor"))
        .def("SetLengthUnit",
             (void (StepBasic_ConversionBasedUnitAndLengthUnit::*)( const opencascade::handle<StepBasic_LengthUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndLengthUnit::*)( const opencascade::handle<StepBasic_LengthUnit> &  ) >(&StepBasic_ConversionBasedUnitAndLengthUnit::SetLengthUnit),
             R"#(None)#"  , py::arg("aLengthUnit"))
        .def("LengthUnit",
             (opencascade::handle<StepBasic_LengthUnit> (StepBasic_ConversionBasedUnitAndLengthUnit::*)() const) static_cast<opencascade::handle<StepBasic_LengthUnit> (StepBasic_ConversionBasedUnitAndLengthUnit::*)() const>(&StepBasic_ConversionBasedUnitAndLengthUnit::LengthUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndLengthUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndLengthUnit::*)() const>(&StepBasic_ConversionBasedUnitAndLengthUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndLengthUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ConversionBasedUnitAndLengthUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductDefinitionWithAssociatedDocuments ,opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments>  , StepBasic_ProductDefinition >>(m.attr("StepBasic_ProductDefinitionWithAssociatedDocuments"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductDefinitionWithAssociatedDocuments::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> & ,  const opencascade::handle<StepBasic_ProductDefinitionContext> & ,  const opencascade::handle<StepBasic_HArray1OfDocument> &  ) ) static_cast<void (StepBasic_ProductDefinitionWithAssociatedDocuments::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> & ,  const opencascade::handle<StepBasic_ProductDefinitionContext> & ,  const opencascade::handle<StepBasic_HArray1OfDocument> &  ) >(&StepBasic_ProductDefinitionWithAssociatedDocuments::Init),
             R"#(None)#"  , py::arg("aId"),  py::arg("aDescription"),  py::arg("aFormation"),  py::arg("aFrame"),  py::arg("aDocIds"))
        .def("DocIds",
             (opencascade::handle<StepBasic_HArray1OfDocument> (StepBasic_ProductDefinitionWithAssociatedDocuments::*)() const) static_cast<opencascade::handle<StepBasic_HArray1OfDocument> (StepBasic_ProductDefinitionWithAssociatedDocuments::*)() const>(&StepBasic_ProductDefinitionWithAssociatedDocuments::DocIds),
             R"#(None)#" )
        .def("SetDocIds",
             (void (StepBasic_ProductDefinitionWithAssociatedDocuments::*)( const opencascade::handle<StepBasic_HArray1OfDocument> &  ) ) static_cast<void (StepBasic_ProductDefinitionWithAssociatedDocuments::*)( const opencascade::handle<StepBasic_HArray1OfDocument> &  ) >(&StepBasic_ProductDefinitionWithAssociatedDocuments::SetDocIds),
             R"#(None)#"  , py::arg("DocIds"))
        .def("NbDocIds",
             (Standard_Integer (StepBasic_ProductDefinitionWithAssociatedDocuments::*)() const) static_cast<Standard_Integer (StepBasic_ProductDefinitionWithAssociatedDocuments::*)() const>(&StepBasic_ProductDefinitionWithAssociatedDocuments::NbDocIds),
             R"#(None)#" )
        .def("DocIdsValue",
             (opencascade::handle<StepBasic_Document> (StepBasic_ProductDefinitionWithAssociatedDocuments::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepBasic_Document> (StepBasic_ProductDefinitionWithAssociatedDocuments::*)( const Standard_Integer  ) const>(&StepBasic_ProductDefinitionWithAssociatedDocuments::DocIdsValue),
             R"#(None)#"  , py::arg("num"))
        .def("SetDocIdsValue",
             (void (StepBasic_ProductDefinitionWithAssociatedDocuments::*)( const Standard_Integer ,  const opencascade::handle<StepBasic_Document> &  ) ) static_cast<void (StepBasic_ProductDefinitionWithAssociatedDocuments::*)( const Standard_Integer ,  const opencascade::handle<StepBasic_Document> &  ) >(&StepBasic_ProductDefinitionWithAssociatedDocuments::SetDocIdsValue),
             R"#(None)#"  , py::arg("num"),  py::arg("adoc"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionWithAssociatedDocuments::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionWithAssociatedDocuments::*)() const>(&StepBasic_ProductDefinitionWithAssociatedDocuments::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionWithAssociatedDocuments::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductDefinitionWithAssociatedDocuments::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductCategoryRelationship ,opencascade::handle<StepBasic_ProductCategoryRelationship>  , Standard_Transient >>(m.attr("StepBasic_ProductCategoryRelationship"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ProductCategoryRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductCategory> & ,  const opencascade::handle<StepBasic_ProductCategory> &  ) ) static_cast<void (StepBasic_ProductCategoryRelationship::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_ProductCategory> & ,  const opencascade::handle<StepBasic_ProductCategory> &  ) >(&StepBasic_ProductCategoryRelationship::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"),  py::arg("aCategory"),  py::arg("aSubCategory"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductCategoryRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductCategoryRelationship::*)() const>(&StepBasic_ProductCategoryRelationship::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_ProductCategoryRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductCategoryRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductCategoryRelationship::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductCategoryRelationship::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductCategoryRelationship::*)() const>(&StepBasic_ProductCategoryRelationship::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_ProductCategoryRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ProductCategoryRelationship::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ProductCategoryRelationship::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_ProductCategoryRelationship::*)() const) static_cast<Standard_Boolean (StepBasic_ProductCategoryRelationship::*)() const>(&StepBasic_ProductCategoryRelationship::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("Category",
             (opencascade::handle<StepBasic_ProductCategory> (StepBasic_ProductCategoryRelationship::*)() const) static_cast<opencascade::handle<StepBasic_ProductCategory> (StepBasic_ProductCategoryRelationship::*)() const>(&StepBasic_ProductCategoryRelationship::Category),
             R"#(Returns field Category)#" )
        .def("SetCategory",
             (void (StepBasic_ProductCategoryRelationship::*)( const opencascade::handle<StepBasic_ProductCategory> &  ) ) static_cast<void (StepBasic_ProductCategoryRelationship::*)( const opencascade::handle<StepBasic_ProductCategory> &  ) >(&StepBasic_ProductCategoryRelationship::SetCategory),
             R"#(Set field Category)#"  , py::arg("Category"))
        .def("SubCategory",
             (opencascade::handle<StepBasic_ProductCategory> (StepBasic_ProductCategoryRelationship::*)() const) static_cast<opencascade::handle<StepBasic_ProductCategory> (StepBasic_ProductCategoryRelationship::*)() const>(&StepBasic_ProductCategoryRelationship::SubCategory),
             R"#(Returns field SubCategory)#" )
        .def("SetSubCategory",
             (void (StepBasic_ProductCategoryRelationship::*)( const opencascade::handle<StepBasic_ProductCategory> &  ) ) static_cast<void (StepBasic_ProductCategoryRelationship::*)( const opencascade::handle<StepBasic_ProductCategory> &  ) >(&StepBasic_ProductCategoryRelationship::SetSubCategory),
             R"#(Set field SubCategory)#"  , py::arg("SubCategory"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductCategoryRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductCategoryRelationship::*)() const>(&StepBasic_ProductCategoryRelationship::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductCategoryRelationship::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductCategoryRelationship::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_DocumentProductEquivalence ,opencascade::handle<StepBasic_DocumentProductEquivalence>  , StepBasic_DocumentProductAssociation >>(m.attr("StepBasic_DocumentProductEquivalence"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentProductEquivalence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentProductEquivalence::*)() const>(&StepBasic_DocumentProductEquivalence::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentProductEquivalence::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_DocumentProductEquivalence::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ApprovalStatus ,opencascade::handle<StepBasic_ApprovalStatus>  , Standard_Transient >>(m.attr("StepBasic_ApprovalStatus"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ApprovalStatus::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApprovalStatus::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApprovalStatus::Init),
             R"#(None)#"  , py::arg("aName"))
        .def("SetName",
             (void (StepBasic_ApprovalStatus::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ApprovalStatus::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ApprovalStatus::SetName),
             R"#(None)#"  , py::arg("aName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ApprovalStatus::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ApprovalStatus::*)() const>(&StepBasic_ApprovalStatus::Name),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalStatus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalStatus::*)() const>(&StepBasic_ApprovalStatus::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalStatus::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ApprovalStatus::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ProductType ,opencascade::handle<StepBasic_ProductType>  , StepBasic_ProductRelatedProductCategory >>(m.attr("StepBasic_ProductType"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductType::*)() const>(&StepBasic_ProductType::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductType::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ProductType::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ObjectRole ,opencascade::handle<StepBasic_ObjectRole>  , Standard_Transient >>(m.attr("StepBasic_ObjectRole"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ObjectRole::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ObjectRole::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ObjectRole::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aName"),  py::arg("hasDescription"),  py::arg("aDescription"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ObjectRole::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ObjectRole::*)() const>(&StepBasic_ObjectRole::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepBasic_ObjectRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ObjectRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ObjectRole::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ObjectRole::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ObjectRole::*)() const>(&StepBasic_ObjectRole::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepBasic_ObjectRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepBasic_ObjectRole::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepBasic_ObjectRole::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("HasDescription",
             (Standard_Boolean (StepBasic_ObjectRole::*)() const) static_cast<Standard_Boolean (StepBasic_ObjectRole::*)() const>(&StepBasic_ObjectRole::HasDescription),
             R"#(Returns True if optional field Description is defined)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ObjectRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ObjectRole::*)() const>(&StepBasic_ObjectRole::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ObjectRole::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ObjectRole::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_RatioMeasureWithUnit ,opencascade::handle<StepBasic_RatioMeasureWithUnit>  , StepBasic_MeasureWithUnit >>(m.attr("StepBasic_RatioMeasureWithUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_RatioMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_RatioMeasureWithUnit::*)() const>(&StepBasic_RatioMeasureWithUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_RatioMeasureWithUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_RatioMeasureWithUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndTimeUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndTimeUnit>  , StepBasic_ConversionBasedUnit >>(m.attr("StepBasic_ConversionBasedUnitAndTimeUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_ConversionBasedUnitAndTimeUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndTimeUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) >(&StepBasic_ConversionBasedUnitAndTimeUnit::Init),
             R"#(None)#"  , py::arg("aDimensions"),  py::arg("aName"),  py::arg("aConversionFactor"))
        .def("SetTimeUnit",
             (void (StepBasic_ConversionBasedUnitAndTimeUnit::*)( const opencascade::handle<StepBasic_TimeUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndTimeUnit::*)( const opencascade::handle<StepBasic_TimeUnit> &  ) >(&StepBasic_ConversionBasedUnitAndTimeUnit::SetTimeUnit),
             R"#(None)#"  , py::arg("aTimeUnit"))
        .def("TimeUnit",
             (opencascade::handle<StepBasic_TimeUnit> (StepBasic_ConversionBasedUnitAndTimeUnit::*)() const) static_cast<opencascade::handle<StepBasic_TimeUnit> (StepBasic_ConversionBasedUnitAndTimeUnit::*)() const>(&StepBasic_ConversionBasedUnitAndTimeUnit::TimeUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndTimeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndTimeUnit::*)() const>(&StepBasic_ConversionBasedUnitAndTimeUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndTimeUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ConversionBasedUnitAndTimeUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_SiUnitAndRatioUnit ,opencascade::handle<StepBasic_SiUnitAndRatioUnit>  , StepBasic_SiUnit >>(m.attr("StepBasic_SiUnitAndRatioUnit"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_SiUnitAndRatioUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) ) static_cast<void (StepBasic_SiUnitAndRatioUnit::*)( const Standard_Boolean ,  const StepBasic_SiPrefix ,  const StepBasic_SiUnitName  ) >(&StepBasic_SiUnitAndRatioUnit::Init),
             R"#(None)#"  , py::arg("hasAprefix"),  py::arg("aPrefix"),  py::arg("aName"))
        .def("SetRatioUnit",
             (void (StepBasic_SiUnitAndRatioUnit::*)( const opencascade::handle<StepBasic_RatioUnit> &  ) ) static_cast<void (StepBasic_SiUnitAndRatioUnit::*)( const opencascade::handle<StepBasic_RatioUnit> &  ) >(&StepBasic_SiUnitAndRatioUnit::SetRatioUnit),
             R"#(None)#"  , py::arg("aRatioUnit"))
        .def("RatioUnit",
             (opencascade::handle<StepBasic_RatioUnit> (StepBasic_SiUnitAndRatioUnit::*)() const) static_cast<opencascade::handle<StepBasic_RatioUnit> (StepBasic_SiUnitAndRatioUnit::*)() const>(&StepBasic_SiUnitAndRatioUnit::RatioUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndRatioUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndRatioUnit::*)() const>(&StepBasic_SiUnitAndRatioUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndRatioUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_SiUnitAndRatioUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_MassMeasureWithUnit ,opencascade::handle<StepBasic_MassMeasureWithUnit>  , StepBasic_MeasureWithUnit >>(m.attr("StepBasic_MassMeasureWithUnit"))
        .def(py::init<  >()  )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_MassMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_MassMeasureWithUnit::*)() const>(&StepBasic_MassMeasureWithUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_MassMeasureWithUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_MassMeasureWithUnit::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_OrdinalDate ,opencascade::handle<StepBasic_OrdinalDate>  , StepBasic_Date >>(m.attr("StepBasic_OrdinalDate"))
        .def(py::init<  >()  )
        .def("Init",
             (void (StepBasic_OrdinalDate::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (StepBasic_OrdinalDate::*)( const Standard_Integer ,  const Standard_Integer  ) >(&StepBasic_OrdinalDate::Init),
             R"#(None)#"  , py::arg("aYearComponent"),  py::arg("aDayComponent"))
        .def("SetDayComponent",
             (void (StepBasic_OrdinalDate::*)( const Standard_Integer  ) ) static_cast<void (StepBasic_OrdinalDate::*)( const Standard_Integer  ) >(&StepBasic_OrdinalDate::SetDayComponent),
             R"#(None)#"  , py::arg("aDayComponent"))
        .def("DayComponent",
             (Standard_Integer (StepBasic_OrdinalDate::*)() const) static_cast<Standard_Integer (StepBasic_OrdinalDate::*)() const>(&StepBasic_OrdinalDate::DayComponent),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_OrdinalDate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_OrdinalDate::*)() const>(&StepBasic_OrdinalDate::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_OrdinalDate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_OrdinalDate::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndVolumeUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndVolumeUnit>  , StepBasic_ConversionBasedUnit >>(m.attr("StepBasic_ConversionBasedUnitAndVolumeUnit"))
        .def(py::init<  >()  )
        .def("SetVolumeUnit",
             (void (StepBasic_ConversionBasedUnitAndVolumeUnit::*)( const opencascade::handle<StepBasic_VolumeUnit> &  ) ) static_cast<void (StepBasic_ConversionBasedUnitAndVolumeUnit::*)( const opencascade::handle<StepBasic_VolumeUnit> &  ) >(&StepBasic_ConversionBasedUnitAndVolumeUnit::SetVolumeUnit),
             R"#(None)#"  , py::arg("aVolumeUnit"))
        .def("VolumeUnit",
             (opencascade::handle<StepBasic_VolumeUnit> (StepBasic_ConversionBasedUnitAndVolumeUnit::*)() const) static_cast<opencascade::handle<StepBasic_VolumeUnit> (StepBasic_ConversionBasedUnitAndVolumeUnit::*)() const>(&StepBasic_ConversionBasedUnitAndVolumeUnit::VolumeUnit),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndVolumeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndVolumeUnit::*)() const>(&StepBasic_ConversionBasedUnitAndVolumeUnit::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndVolumeUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_ConversionBasedUnitAndVolumeUnit::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/StepBasic_ProductContext.hxx
// ./opencascade/StepBasic_ApprovalPersonOrganization.hxx
// ./opencascade/StepBasic_EulerAngles.hxx
// ./opencascade/StepBasic_SizeMember.hxx
// ./opencascade/StepBasic_ProductDefinitionOrReference.hxx
// ./opencascade/StepBasic_HArray1OfProductContext.hxx
// ./opencascade/StepBasic_PlaneAngleUnit.hxx
// ./opencascade/StepBasic_CharacterizedObject.hxx
// ./opencascade/StepBasic_DigitalDocument.hxx
// ./opencascade/StepBasic_HArray1OfPerson.hxx
// ./opencascade/StepBasic_LengthMeasureWithUnit.hxx
// ./opencascade/StepBasic_ExternalIdentificationAssignment.hxx
// ./opencascade/StepBasic_ProductDefinitionEffectivity.hxx
// ./opencascade/StepBasic_VolumeUnit.hxx
// ./opencascade/StepBasic_Array1OfUncertaintyMeasureWithUnit.hxx
// ./opencascade/StepBasic_Action.hxx
// ./opencascade/StepBasic_TimeMeasureWithUnit.hxx
// ./opencascade/StepBasic_DateRole.hxx
// ./opencascade/StepBasic_ProductDefinitionFormationWithSpecifiedSource.hxx
// ./opencascade/StepBasic_ExternalSource.hxx
// ./opencascade/StepBasic_ProductRelatedProductCategory.hxx
// ./opencascade/StepBasic_HArray1OfOrganization.hxx
// ./opencascade/StepBasic_ApplicationContext.hxx
// ./opencascade/StepBasic_Array1OfProductDefinition.hxx
// ./opencascade/StepBasic_Contract.hxx
// ./opencascade/StepBasic_ObjectRole.hxx
// ./opencascade/StepBasic_DimensionalExponents.hxx
// ./opencascade/StepBasic_SiUnitAndVolumeUnit.hxx
// ./opencascade/StepBasic_NamedUnit.hxx
// ./opencascade/StepBasic_SecurityClassificationAssignment.hxx
// ./opencascade/StepBasic_DateTimeRole.hxx
// ./opencascade/StepBasic_Array1OfNamedUnit.hxx
// ./opencascade/StepBasic_RoleSelect.hxx
// ./opencascade/StepBasic_HArray1OfProductDefinition.hxx
// ./opencascade/StepBasic_SiUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndLengthUnit.hxx
// ./opencascade/StepBasic_PersonOrganizationSelect.hxx
// ./opencascade/StepBasic_ProductDefinitionRelationship.hxx
// ./opencascade/StepBasic_ActionRequestSolution.hxx
// ./opencascade/StepBasic_Product.hxx
// ./opencascade/StepBasic_Array1OfPerson.hxx
// ./opencascade/StepBasic_Certification.hxx
// ./opencascade/StepBasic_DesignContext.hxx
// ./opencascade/StepBasic_Effectivity.hxx
// ./opencascade/StepBasic_HArray1OfUncertaintyMeasureWithUnit.hxx
// ./opencascade/StepBasic_ProductConceptContext.hxx
// ./opencascade/StepBasic_DateTimeSelect.hxx
// ./opencascade/StepBasic_Array1OfProduct.hxx
// ./opencascade/StepBasic_MassMeasureWithUnit.hxx
// ./opencascade/StepBasic_DocumentType.hxx
// ./opencascade/StepBasic_SiUnitAndTimeUnit.hxx
// ./opencascade/StepBasic_ProductDefinitionWithAssociatedDocuments.hxx
// ./opencascade/StepBasic_CertificationAssignment.hxx
// ./opencascade/StepBasic_SiUnitAndThermodynamicTemperatureUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndAreaUnit.hxx
// ./opencascade/StepBasic_RatioMeasureWithUnit.hxx
// ./opencascade/StepBasic_UncertaintyMeasureWithUnit.hxx
// ./opencascade/StepBasic_ExternallyDefinedItem.hxx
// ./opencascade/StepBasic_PersonAndOrganizationAssignment.hxx
// ./opencascade/StepBasic_DocumentReference.hxx
// ./opencascade/StepBasic_ConversionBasedUnit.hxx
// ./opencascade/StepBasic_Approval.hxx
// ./opencascade/StepBasic_Source.hxx
// ./opencascade/StepBasic_DateAndTime.hxx
// ./opencascade/StepBasic_GeneralProperty.hxx
// ./opencascade/StepBasic_ProductCategoryRelationship.hxx
// ./opencascade/StepBasic_ApprovalAssignment.hxx
// ./opencascade/StepBasic_PersonalAddress.hxx
// ./opencascade/StepBasic_ApprovalRelationship.hxx
// ./opencascade/StepBasic_MeasureWithUnit.hxx
// ./opencascade/StepBasic_OrganizationalAddress.hxx
// ./opencascade/StepBasic_PlaneAngleMeasureWithUnit.hxx
// ./opencascade/StepBasic_DateAssignment.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndSolidAngleUnit.hxx
// ./opencascade/StepBasic_OrganizationAssignment.hxx
// ./opencascade/StepBasic_ActionAssignment.hxx
// ./opencascade/StepBasic_LengthUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndVolumeUnit.hxx
// ./opencascade/StepBasic_ContractType.hxx
// ./opencascade/StepBasic_ActionRequestAssignment.hxx
// ./opencascade/StepBasic_SolidAngleMeasureWithUnit.hxx
// ./opencascade/StepBasic_GroupAssignment.hxx
// ./opencascade/StepBasic_SourceItem.hxx
// ./opencascade/StepBasic_AreaUnit.hxx
// ./opencascade/StepBasic_ProductDefinition.hxx
// ./opencascade/StepBasic_MassUnit.hxx
// ./opencascade/StepBasic_SiUnitAndLengthUnit.hxx
// ./opencascade/StepBasic_OrganizationRole.hxx
// ./opencascade/StepBasic_HArray1OfNamedUnit.hxx
// ./opencascade/StepBasic_DocumentProductEquivalence.hxx
// ./opencascade/StepBasic_IdentificationAssignment.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndPlaneAngleUnit.hxx
// ./opencascade/StepBasic_ApprovalDateTime.hxx
// ./opencascade/StepBasic_ApprovalRole.hxx
// ./opencascade/StepBasic_ProductDefinitionFormationRelationship.hxx
// ./opencascade/StepBasic_WeekOfYearAndDayDate.hxx
// ./opencascade/StepBasic_SecurityClassificationLevel.hxx
// ./opencascade/StepBasic_SizeSelect.hxx
// ./opencascade/StepBasic_ProductOrFormationOrDefinition.hxx
// ./opencascade/StepBasic_SolidAngleUnit.hxx
// ./opencascade/StepBasic_DocumentFile.hxx
// ./opencascade/StepBasic_ProductCategory.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndTimeUnit.hxx
// ./opencascade/StepBasic_LocalTime.hxx
// ./opencascade/StepBasic_ContractAssignment.hxx
// ./opencascade/StepBasic_Document.hxx
// ./opencascade/StepBasic_Date.hxx
// ./opencascade/StepBasic_HArray1OfApproval.hxx
// ./opencascade/StepBasic_DocumentProductAssociation.hxx
// ./opencascade/StepBasic_ApplicationContextElement.hxx
// ./opencascade/StepBasic_Group.hxx
// ./opencascade/StepBasic_Address.hxx
// ./opencascade/StepBasic_SiUnitAndMassUnit.hxx
// ./opencascade/StepBasic_Person.hxx
// ./opencascade/StepBasic_VersionedActionRequest.hxx
// ./opencascade/StepBasic_HArray1OfDocument.hxx
// ./opencascade/StepBasic_RatioUnit.hxx
// ./opencascade/StepBasic_GroupRelationship.hxx
// ./opencascade/StepBasic_ApprovalStatus.hxx
// ./opencascade/StepBasic_DocumentUsageConstraint.hxx
// ./opencascade/StepBasic_SiUnitName.hxx
// ./opencascade/StepBasic_ProductDefinitionReference.hxx
// ./opencascade/StepBasic_ProductDefinitionReferenceWithLocalRepresentation.hxx
// ./opencascade/StepBasic_ProductDefinitionFormation.hxx
// ./opencascade/StepBasic_ActionMethod.hxx
// ./opencascade/StepBasic_MechanicalContext.hxx
// ./opencascade/StepBasic_NameAssignment.hxx
// ./opencascade/StepBasic_MeasureValueMember.hxx
// ./opencascade/StepBasic_OrdinalDate.hxx
// ./opencascade/StepBasic_ThermodynamicTemperatureUnit.hxx
// ./opencascade/StepBasic_RoleAssociation.hxx
// ./opencascade/StepBasic_PhysicallyModeledProductDefinition.hxx
// ./opencascade/StepBasic_ProductDefinitionContext.hxx
// ./opencascade/StepBasic_PersonAndOrganization.hxx
// ./opencascade/StepBasic_HArray1OfDerivedUnitElement.hxx
// ./opencascade/StepBasic_PersonAndOrganizationRole.hxx
// ./opencascade/StepBasic_ProductType.hxx
// ./opencascade/StepBasic_CalendarDate.hxx
// ./opencascade/StepBasic_DateAndTimeAssignment.hxx
// ./opencascade/StepBasic_Array1OfDerivedUnitElement.hxx
// ./opencascade/StepBasic_ApplicationProtocolDefinition.hxx
// ./opencascade/StepBasic_Organization.hxx
// ./opencascade/StepBasic_DerivedUnitElement.hxx
// ./opencascade/StepBasic_TimeUnit.hxx
// ./opencascade/StepBasic_Array1OfDocument.hxx
// ./opencascade/StepBasic_DocumentRepresentationType.hxx
// ./opencascade/StepBasic_Array1OfProductContext.hxx
// ./opencascade/StepBasic_CoordinatedUniversalTimeOffset.hxx
// ./opencascade/StepBasic_Array1OfOrganization.hxx
// ./opencascade/StepBasic_SiUnitAndPlaneAngleUnit.hxx
// ./opencascade/StepBasic_Array1OfApproval.hxx
// ./opencascade/StepBasic_DerivedUnit.hxx
// ./opencascade/StepBasic_SiPrefix.hxx
// ./opencascade/StepBasic_SiUnitAndSolidAngleUnit.hxx
// ./opencascade/StepBasic_IdentificationRole.hxx
// ./opencascade/StepBasic_SiUnitAndRatioUnit.hxx
// ./opencascade/StepBasic_EffectivityAssignment.hxx
// ./opencascade/StepBasic_AheadOrBehind.hxx
// ./opencascade/StepBasic_DocumentRelationship.hxx
// ./opencascade/StepBasic_Unit.hxx
// ./opencascade/StepBasic_CertificationType.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndRatioUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndMassUnit.hxx
// ./opencascade/StepBasic_SecurityClassification.hxx
// ./opencascade/StepBasic_SiUnitAndAreaUnit.hxx
// ./opencascade/StepBasic_HArray1OfProduct.hxx

// operators

// register typdefs
// ./opencascade/StepBasic_ProductContext.hxx
// ./opencascade/StepBasic_ApprovalPersonOrganization.hxx
// ./opencascade/StepBasic_EulerAngles.hxx
// ./opencascade/StepBasic_SizeMember.hxx
// ./opencascade/StepBasic_ProductDefinitionOrReference.hxx
// ./opencascade/StepBasic_HArray1OfProductContext.hxx
// ./opencascade/StepBasic_PlaneAngleUnit.hxx
// ./opencascade/StepBasic_CharacterizedObject.hxx
// ./opencascade/StepBasic_DigitalDocument.hxx
// ./opencascade/StepBasic_HArray1OfPerson.hxx
// ./opencascade/StepBasic_LengthMeasureWithUnit.hxx
// ./opencascade/StepBasic_ExternalIdentificationAssignment.hxx
// ./opencascade/StepBasic_ProductDefinitionEffectivity.hxx
// ./opencascade/StepBasic_VolumeUnit.hxx
// ./opencascade/StepBasic_Array1OfUncertaintyMeasureWithUnit.hxx
    register_template_NCollection_Array1<opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> >(m,"StepBasic_Array1OfUncertaintyMeasureWithUnit");  
// ./opencascade/StepBasic_Action.hxx
// ./opencascade/StepBasic_TimeMeasureWithUnit.hxx
// ./opencascade/StepBasic_DateRole.hxx
// ./opencascade/StepBasic_ProductDefinitionFormationWithSpecifiedSource.hxx
// ./opencascade/StepBasic_ExternalSource.hxx
// ./opencascade/StepBasic_ProductRelatedProductCategory.hxx
// ./opencascade/StepBasic_HArray1OfOrganization.hxx
// ./opencascade/StepBasic_ApplicationContext.hxx
// ./opencascade/StepBasic_Array1OfProductDefinition.hxx
    register_template_NCollection_Array1<opencascade::handle<StepBasic_ProductDefinition> >(m,"StepBasic_Array1OfProductDefinition");  
// ./opencascade/StepBasic_Contract.hxx
// ./opencascade/StepBasic_ObjectRole.hxx
// ./opencascade/StepBasic_DimensionalExponents.hxx
// ./opencascade/StepBasic_SiUnitAndVolumeUnit.hxx
// ./opencascade/StepBasic_NamedUnit.hxx
// ./opencascade/StepBasic_SecurityClassificationAssignment.hxx
// ./opencascade/StepBasic_DateTimeRole.hxx
// ./opencascade/StepBasic_Array1OfNamedUnit.hxx
    register_template_NCollection_Array1<opencascade::handle<StepBasic_NamedUnit> >(m,"StepBasic_Array1OfNamedUnit");  
// ./opencascade/StepBasic_RoleSelect.hxx
// ./opencascade/StepBasic_HArray1OfProductDefinition.hxx
// ./opencascade/StepBasic_SiUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndLengthUnit.hxx
// ./opencascade/StepBasic_PersonOrganizationSelect.hxx
// ./opencascade/StepBasic_ProductDefinitionRelationship.hxx
// ./opencascade/StepBasic_ActionRequestSolution.hxx
// ./opencascade/StepBasic_Product.hxx
// ./opencascade/StepBasic_Array1OfPerson.hxx
    register_template_NCollection_Array1<opencascade::handle<StepBasic_Person> >(m,"StepBasic_Array1OfPerson");  
// ./opencascade/StepBasic_Certification.hxx
// ./opencascade/StepBasic_DesignContext.hxx
// ./opencascade/StepBasic_Effectivity.hxx
// ./opencascade/StepBasic_HArray1OfUncertaintyMeasureWithUnit.hxx
// ./opencascade/StepBasic_ProductConceptContext.hxx
// ./opencascade/StepBasic_DateTimeSelect.hxx
// ./opencascade/StepBasic_Array1OfProduct.hxx
    register_template_NCollection_Array1<opencascade::handle<StepBasic_Product> >(m,"StepBasic_Array1OfProduct");  
// ./opencascade/StepBasic_MassMeasureWithUnit.hxx
// ./opencascade/StepBasic_DocumentType.hxx
// ./opencascade/StepBasic_SiUnitAndTimeUnit.hxx
// ./opencascade/StepBasic_ProductDefinitionWithAssociatedDocuments.hxx
// ./opencascade/StepBasic_CertificationAssignment.hxx
// ./opencascade/StepBasic_SiUnitAndThermodynamicTemperatureUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndAreaUnit.hxx
// ./opencascade/StepBasic_RatioMeasureWithUnit.hxx
// ./opencascade/StepBasic_UncertaintyMeasureWithUnit.hxx
// ./opencascade/StepBasic_ExternallyDefinedItem.hxx
// ./opencascade/StepBasic_PersonAndOrganizationAssignment.hxx
// ./opencascade/StepBasic_DocumentReference.hxx
// ./opencascade/StepBasic_ConversionBasedUnit.hxx
// ./opencascade/StepBasic_Approval.hxx
// ./opencascade/StepBasic_Source.hxx
// ./opencascade/StepBasic_DateAndTime.hxx
// ./opencascade/StepBasic_GeneralProperty.hxx
// ./opencascade/StepBasic_ProductCategoryRelationship.hxx
// ./opencascade/StepBasic_ApprovalAssignment.hxx
// ./opencascade/StepBasic_PersonalAddress.hxx
// ./opencascade/StepBasic_ApprovalRelationship.hxx
// ./opencascade/StepBasic_MeasureWithUnit.hxx
// ./opencascade/StepBasic_OrganizationalAddress.hxx
// ./opencascade/StepBasic_PlaneAngleMeasureWithUnit.hxx
// ./opencascade/StepBasic_DateAssignment.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndSolidAngleUnit.hxx
// ./opencascade/StepBasic_OrganizationAssignment.hxx
// ./opencascade/StepBasic_ActionAssignment.hxx
// ./opencascade/StepBasic_LengthUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndVolumeUnit.hxx
// ./opencascade/StepBasic_ContractType.hxx
// ./opencascade/StepBasic_ActionRequestAssignment.hxx
// ./opencascade/StepBasic_SolidAngleMeasureWithUnit.hxx
// ./opencascade/StepBasic_GroupAssignment.hxx
// ./opencascade/StepBasic_SourceItem.hxx
// ./opencascade/StepBasic_AreaUnit.hxx
// ./opencascade/StepBasic_ProductDefinition.hxx
// ./opencascade/StepBasic_MassUnit.hxx
// ./opencascade/StepBasic_SiUnitAndLengthUnit.hxx
// ./opencascade/StepBasic_OrganizationRole.hxx
// ./opencascade/StepBasic_HArray1OfNamedUnit.hxx
// ./opencascade/StepBasic_DocumentProductEquivalence.hxx
// ./opencascade/StepBasic_IdentificationAssignment.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndPlaneAngleUnit.hxx
// ./opencascade/StepBasic_ApprovalDateTime.hxx
// ./opencascade/StepBasic_ApprovalRole.hxx
// ./opencascade/StepBasic_ProductDefinitionFormationRelationship.hxx
// ./opencascade/StepBasic_WeekOfYearAndDayDate.hxx
// ./opencascade/StepBasic_SecurityClassificationLevel.hxx
// ./opencascade/StepBasic_SizeSelect.hxx
// ./opencascade/StepBasic_ProductOrFormationOrDefinition.hxx
// ./opencascade/StepBasic_SolidAngleUnit.hxx
// ./opencascade/StepBasic_DocumentFile.hxx
// ./opencascade/StepBasic_ProductCategory.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndTimeUnit.hxx
// ./opencascade/StepBasic_LocalTime.hxx
// ./opencascade/StepBasic_ContractAssignment.hxx
// ./opencascade/StepBasic_Document.hxx
// ./opencascade/StepBasic_Date.hxx
// ./opencascade/StepBasic_HArray1OfApproval.hxx
// ./opencascade/StepBasic_DocumentProductAssociation.hxx
// ./opencascade/StepBasic_ApplicationContextElement.hxx
// ./opencascade/StepBasic_Group.hxx
// ./opencascade/StepBasic_Address.hxx
// ./opencascade/StepBasic_SiUnitAndMassUnit.hxx
// ./opencascade/StepBasic_Person.hxx
// ./opencascade/StepBasic_VersionedActionRequest.hxx
// ./opencascade/StepBasic_HArray1OfDocument.hxx
// ./opencascade/StepBasic_RatioUnit.hxx
// ./opencascade/StepBasic_GroupRelationship.hxx
// ./opencascade/StepBasic_ApprovalStatus.hxx
// ./opencascade/StepBasic_DocumentUsageConstraint.hxx
// ./opencascade/StepBasic_SiUnitName.hxx
// ./opencascade/StepBasic_ProductDefinitionReference.hxx
// ./opencascade/StepBasic_ProductDefinitionReferenceWithLocalRepresentation.hxx
// ./opencascade/StepBasic_ProductDefinitionFormation.hxx
// ./opencascade/StepBasic_ActionMethod.hxx
// ./opencascade/StepBasic_MechanicalContext.hxx
// ./opencascade/StepBasic_NameAssignment.hxx
// ./opencascade/StepBasic_MeasureValueMember.hxx
// ./opencascade/StepBasic_OrdinalDate.hxx
// ./opencascade/StepBasic_ThermodynamicTemperatureUnit.hxx
// ./opencascade/StepBasic_RoleAssociation.hxx
// ./opencascade/StepBasic_PhysicallyModeledProductDefinition.hxx
// ./opencascade/StepBasic_ProductDefinitionContext.hxx
// ./opencascade/StepBasic_PersonAndOrganization.hxx
// ./opencascade/StepBasic_HArray1OfDerivedUnitElement.hxx
// ./opencascade/StepBasic_PersonAndOrganizationRole.hxx
// ./opencascade/StepBasic_ProductType.hxx
// ./opencascade/StepBasic_CalendarDate.hxx
// ./opencascade/StepBasic_DateAndTimeAssignment.hxx
// ./opencascade/StepBasic_Array1OfDerivedUnitElement.hxx
    register_template_NCollection_Array1<opencascade::handle<StepBasic_DerivedUnitElement> >(m,"StepBasic_Array1OfDerivedUnitElement");  
// ./opencascade/StepBasic_ApplicationProtocolDefinition.hxx
// ./opencascade/StepBasic_Organization.hxx
// ./opencascade/StepBasic_DerivedUnitElement.hxx
// ./opencascade/StepBasic_TimeUnit.hxx
// ./opencascade/StepBasic_Array1OfDocument.hxx
    register_template_NCollection_Array1<opencascade::handle<StepBasic_Document> >(m,"StepBasic_Array1OfDocument");  
// ./opencascade/StepBasic_DocumentRepresentationType.hxx
// ./opencascade/StepBasic_Array1OfProductContext.hxx
    register_template_NCollection_Array1<opencascade::handle<StepBasic_ProductContext> >(m,"StepBasic_Array1OfProductContext");  
// ./opencascade/StepBasic_CoordinatedUniversalTimeOffset.hxx
// ./opencascade/StepBasic_Array1OfOrganization.hxx
    register_template_NCollection_Array1<opencascade::handle<StepBasic_Organization> >(m,"StepBasic_Array1OfOrganization");  
// ./opencascade/StepBasic_SiUnitAndPlaneAngleUnit.hxx
// ./opencascade/StepBasic_Array1OfApproval.hxx
    register_template_NCollection_Array1<opencascade::handle<StepBasic_Approval> >(m,"StepBasic_Array1OfApproval");  
// ./opencascade/StepBasic_DerivedUnit.hxx
// ./opencascade/StepBasic_SiPrefix.hxx
// ./opencascade/StepBasic_SiUnitAndSolidAngleUnit.hxx
// ./opencascade/StepBasic_IdentificationRole.hxx
// ./opencascade/StepBasic_SiUnitAndRatioUnit.hxx
// ./opencascade/StepBasic_EffectivityAssignment.hxx
// ./opencascade/StepBasic_AheadOrBehind.hxx
// ./opencascade/StepBasic_DocumentRelationship.hxx
// ./opencascade/StepBasic_Unit.hxx
// ./opencascade/StepBasic_CertificationType.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndRatioUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndMassUnit.hxx
// ./opencascade/StepBasic_SecurityClassification.hxx
// ./opencascade/StepBasic_SiUnitAndAreaUnit.hxx
// ./opencascade/StepBasic_HArray1OfProduct.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
