
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
#include <StepBasic_DocumentFile.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Address.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Product.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApprovalRole.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_EffectivityAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndSolidAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_RoleAssociation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_OrganizationRole.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionFormationRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_PlaneAngleMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Contract.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndMassUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_RatioMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_CertificationType.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_CoordinatedUniversalTimeOffset.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndVolumeUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentUsageConstraint.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndLengthUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApplicationContextElement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_OrganizationalAddress.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndSolidAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_PersonalAddress.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SolidAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ThermodynamicTemperatureUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_IdentificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Organization.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Action.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionReferenceWithLocalRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentRepresentationType.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndLengthUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ActionAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ActionMethod.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Group.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Person.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_UncertaintyMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApprovalStatus.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ContractAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_NameAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ActionRequestAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ActionRequestSolution.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductRelatedProductCategory.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ExternalIdentificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_MechanicalContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Certification.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndRatioUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApprovalDateTime.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndMassUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Effectivity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndVolumeUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionFormationWithSpecifiedSource.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ContractType.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionEffectivity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndAreaUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_MassMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApprovalRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_WeekOfYearAndDayDate.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_OrdinalDate.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_MassUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductConceptContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndPlaneAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionWithAssociatedDocuments.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DerivedUnitElement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <TCollection_AsciiString.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ObjectRole.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_GeneralProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndThermodynamicTemperatureUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentProductAssociation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DerivedUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndAreaUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Approval.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndPlaneAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndRatioUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductType.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_CertificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SolidAngleMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_LocalTime.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SecurityClassificationLevel.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentProductEquivalence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndTimeUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductCategoryRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndTimeUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_GroupAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Document.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_CalendarDate.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Date.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepBasic_RWAction.hxx>
#include <RWStepBasic_RWActionAssignment.hxx>
#include <RWStepBasic_RWActionMethod.hxx>
#include <RWStepBasic_RWActionRequestAssignment.hxx>
#include <RWStepBasic_RWActionRequestSolution.hxx>
#include <RWStepBasic_RWAddress.hxx>
#include <RWStepBasic_RWApplicationContext.hxx>
#include <RWStepBasic_RWApplicationContextElement.hxx>
#include <RWStepBasic_RWApplicationProtocolDefinition.hxx>
#include <RWStepBasic_RWApproval.hxx>
#include <RWStepBasic_RWApprovalDateTime.hxx>
#include <RWStepBasic_RWApprovalPersonOrganization.hxx>
#include <RWStepBasic_RWApprovalRelationship.hxx>
#include <RWStepBasic_RWApprovalRole.hxx>
#include <RWStepBasic_RWApprovalStatus.hxx>
#include <RWStepBasic_RWCalendarDate.hxx>
#include <RWStepBasic_RWCertification.hxx>
#include <RWStepBasic_RWCertificationAssignment.hxx>
#include <RWStepBasic_RWCertificationType.hxx>
#include <RWStepBasic_RWCharacterizedObject.hxx>
#include <RWStepBasic_RWContract.hxx>
#include <RWStepBasic_RWContractAssignment.hxx>
#include <RWStepBasic_RWContractType.hxx>
#include <RWStepBasic_RWConversionBasedUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndAreaUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndLengthUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndMassUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndRatioUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndTimeUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndVolumeUnit.hxx>
#include <RWStepBasic_RWCoordinatedUniversalTimeOffset.hxx>
#include <RWStepBasic_RWDate.hxx>
#include <RWStepBasic_RWDateAndTime.hxx>
#include <RWStepBasic_RWDateRole.hxx>
#include <RWStepBasic_RWDateTimeRole.hxx>
#include <RWStepBasic_RWDerivedUnit.hxx>
#include <RWStepBasic_RWDerivedUnitElement.hxx>
#include <RWStepBasic_RWDimensionalExponents.hxx>
#include <RWStepBasic_RWDocument.hxx>
#include <RWStepBasic_RWDocumentFile.hxx>
#include <RWStepBasic_RWDocumentProductAssociation.hxx>
#include <RWStepBasic_RWDocumentProductEquivalence.hxx>
#include <RWStepBasic_RWDocumentRelationship.hxx>
#include <RWStepBasic_RWDocumentRepresentationType.hxx>
#include <RWStepBasic_RWDocumentType.hxx>
#include <RWStepBasic_RWDocumentUsageConstraint.hxx>
#include <RWStepBasic_RWEffectivity.hxx>
#include <RWStepBasic_RWEffectivityAssignment.hxx>
#include <RWStepBasic_RWEulerAngles.hxx>
#include <RWStepBasic_RWExternalIdentificationAssignment.hxx>
#include <RWStepBasic_RWExternallyDefinedItem.hxx>
#include <RWStepBasic_RWExternalSource.hxx>
#include <RWStepBasic_RWGeneralProperty.hxx>
#include <RWStepBasic_RWGroup.hxx>
#include <RWStepBasic_RWGroupAssignment.hxx>
#include <RWStepBasic_RWGroupRelationship.hxx>
#include <RWStepBasic_RWIdentificationAssignment.hxx>
#include <RWStepBasic_RWIdentificationRole.hxx>
#include <RWStepBasic_RWLengthMeasureWithUnit.hxx>
#include <RWStepBasic_RWLengthUnit.hxx>
#include <RWStepBasic_RWLocalTime.hxx>
#include <RWStepBasic_RWMassMeasureWithUnit.hxx>
#include <RWStepBasic_RWMassUnit.hxx>
#include <RWStepBasic_RWMeasureWithUnit.hxx>
#include <RWStepBasic_RWMechanicalContext.hxx>
#include <RWStepBasic_RWNameAssignment.hxx>
#include <RWStepBasic_RWNamedUnit.hxx>
#include <RWStepBasic_RWObjectRole.hxx>
#include <RWStepBasic_RWOrdinalDate.hxx>
#include <RWStepBasic_RWOrganization.hxx>
#include <RWStepBasic_RWOrganizationalAddress.hxx>
#include <RWStepBasic_RWOrganizationRole.hxx>
#include <RWStepBasic_RWPerson.hxx>
#include <RWStepBasic_RWPersonalAddress.hxx>
#include <RWStepBasic_RWPersonAndOrganization.hxx>
#include <RWStepBasic_RWPersonAndOrganizationRole.hxx>
#include <RWStepBasic_RWPlaneAngleMeasureWithUnit.hxx>
#include <RWStepBasic_RWPlaneAngleUnit.hxx>
#include <RWStepBasic_RWProduct.hxx>
#include <RWStepBasic_RWProductCategory.hxx>
#include <RWStepBasic_RWProductCategoryRelationship.hxx>
#include <RWStepBasic_RWProductConceptContext.hxx>
#include <RWStepBasic_RWProductContext.hxx>
#include <RWStepBasic_RWProductDefinition.hxx>
#include <RWStepBasic_RWProductDefinitionContext.hxx>
#include <RWStepBasic_RWProductDefinitionEffectivity.hxx>
#include <RWStepBasic_RWProductDefinitionFormation.hxx>
#include <RWStepBasic_RWProductDefinitionFormationRelationship.hxx>
#include <RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource.hxx>
#include <RWStepBasic_RWProductDefinitionReference.hxx>
#include <RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation.hxx>
#include <RWStepBasic_RWProductDefinitionRelationship.hxx>
#include <RWStepBasic_RWProductDefinitionWithAssociatedDocuments.hxx>
#include <RWStepBasic_RWProductRelatedProductCategory.hxx>
#include <RWStepBasic_RWProductType.hxx>
#include <RWStepBasic_RWRatioMeasureWithUnit.hxx>
#include <RWStepBasic_RWRoleAssociation.hxx>
#include <RWStepBasic_RWSecurityClassification.hxx>
#include <RWStepBasic_RWSecurityClassificationLevel.hxx>
#include <RWStepBasic_RWSiUnit.hxx>
#include <RWStepBasic_RWSiUnitAndAreaUnit.hxx>
#include <RWStepBasic_RWSiUnitAndLengthUnit.hxx>
#include <RWStepBasic_RWSiUnitAndMassUnit.hxx>
#include <RWStepBasic_RWSiUnitAndPlaneAngleUnit.hxx>
#include <RWStepBasic_RWSiUnitAndRatioUnit.hxx>
#include <RWStepBasic_RWSiUnitAndSolidAngleUnit.hxx>
#include <RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit.hxx>
#include <RWStepBasic_RWSiUnitAndTimeUnit.hxx>
#include <RWStepBasic_RWSiUnitAndVolumeUnit.hxx>
#include <RWStepBasic_RWSolidAngleMeasureWithUnit.hxx>
#include <RWStepBasic_RWSolidAngleUnit.hxx>
#include <RWStepBasic_RWThermodynamicTemperatureUnit.hxx>
#include <RWStepBasic_RWUncertaintyMeasureWithUnit.hxx>
#include <RWStepBasic_RWVersionedActionRequest.hxx>
#include <RWStepBasic_RWWeekOfYearAndDayDate.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepBasic_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepBasic", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStepBasic_RWAction , shared_ptr<RWStepBasic_RWAction> >(m,"RWStepBasic_RWAction",R"#(Read & Write tool for Action)#");
    py::class_<RWStepBasic_RWActionAssignment , shared_ptr<RWStepBasic_RWActionAssignment> >(m,"RWStepBasic_RWActionAssignment",R"#(Read & Write tool for ActionAssignment)#");
    py::class_<RWStepBasic_RWActionMethod , shared_ptr<RWStepBasic_RWActionMethod> >(m,"RWStepBasic_RWActionMethod",R"#(Read & Write tool for ActionMethod)#");
    py::class_<RWStepBasic_RWActionRequestAssignment , shared_ptr<RWStepBasic_RWActionRequestAssignment> >(m,"RWStepBasic_RWActionRequestAssignment",R"#(Read & Write tool for ActionRequestAssignment)#");
    py::class_<RWStepBasic_RWActionRequestSolution , shared_ptr<RWStepBasic_RWActionRequestSolution> >(m,"RWStepBasic_RWActionRequestSolution",R"#(Read & Write tool for ActionRequestSolution)#");
    py::class_<RWStepBasic_RWAddress , shared_ptr<RWStepBasic_RWAddress> >(m,"RWStepBasic_RWAddress",R"#(Read & Write Module for Address)#");
    py::class_<RWStepBasic_RWApplicationContext , shared_ptr<RWStepBasic_RWApplicationContext> >(m,"RWStepBasic_RWApplicationContext",R"#(Read & Write Module for ApplicationContext)#");
    py::class_<RWStepBasic_RWApplicationContextElement , shared_ptr<RWStepBasic_RWApplicationContextElement> >(m,"RWStepBasic_RWApplicationContextElement",R"#(Read & Write Module for ApplicationContextElement)#");
    py::class_<RWStepBasic_RWApplicationProtocolDefinition , shared_ptr<RWStepBasic_RWApplicationProtocolDefinition> >(m,"RWStepBasic_RWApplicationProtocolDefinition",R"#(Read & Write Module for ApplicationProtocolDefinition)#");
    py::class_<RWStepBasic_RWApproval , shared_ptr<RWStepBasic_RWApproval> >(m,"RWStepBasic_RWApproval",R"#(Read & Write Module for Approval)#");
    py::class_<RWStepBasic_RWApprovalDateTime , shared_ptr<RWStepBasic_RWApprovalDateTime> >(m,"RWStepBasic_RWApprovalDateTime",R"#(Read & Write Module for ApprovalDateTime)#");
    py::class_<RWStepBasic_RWApprovalPersonOrganization , shared_ptr<RWStepBasic_RWApprovalPersonOrganization> >(m,"RWStepBasic_RWApprovalPersonOrganization",R"#(Read & Write Module for ApprovalPersonOrganization)#");
    py::class_<RWStepBasic_RWApprovalRelationship , shared_ptr<RWStepBasic_RWApprovalRelationship> >(m,"RWStepBasic_RWApprovalRelationship",R"#(Read & Write Module for ApprovalRelationship)#");
    py::class_<RWStepBasic_RWApprovalRole , shared_ptr<RWStepBasic_RWApprovalRole> >(m,"RWStepBasic_RWApprovalRole",R"#(Read & Write Module for ApprovalRole)#");
    py::class_<RWStepBasic_RWApprovalStatus , shared_ptr<RWStepBasic_RWApprovalStatus> >(m,"RWStepBasic_RWApprovalStatus",R"#(Read & Write Module for ApprovalStatus)#");
    py::class_<RWStepBasic_RWCalendarDate , shared_ptr<RWStepBasic_RWCalendarDate> >(m,"RWStepBasic_RWCalendarDate",R"#(Read & Write Module for CalendarDate)#");
    py::class_<RWStepBasic_RWCertification , shared_ptr<RWStepBasic_RWCertification> >(m,"RWStepBasic_RWCertification",R"#(Read & Write tool for Certification)#");
    py::class_<RWStepBasic_RWCertificationAssignment , shared_ptr<RWStepBasic_RWCertificationAssignment> >(m,"RWStepBasic_RWCertificationAssignment",R"#(Read & Write tool for CertificationAssignment)#");
    py::class_<RWStepBasic_RWCertificationType , shared_ptr<RWStepBasic_RWCertificationType> >(m,"RWStepBasic_RWCertificationType",R"#(Read & Write tool for CertificationType)#");
    py::class_<RWStepBasic_RWCharacterizedObject , shared_ptr<RWStepBasic_RWCharacterizedObject> >(m,"RWStepBasic_RWCharacterizedObject",R"#(Read & Write tool for CharacterizedObject)#");
    py::class_<RWStepBasic_RWContract , shared_ptr<RWStepBasic_RWContract> >(m,"RWStepBasic_RWContract",R"#(Read & Write tool for Contract)#");
    py::class_<RWStepBasic_RWContractAssignment , shared_ptr<RWStepBasic_RWContractAssignment> >(m,"RWStepBasic_RWContractAssignment",R"#(Read & Write tool for ContractAssignment)#");
    py::class_<RWStepBasic_RWContractType , shared_ptr<RWStepBasic_RWContractType> >(m,"RWStepBasic_RWContractType",R"#(Read & Write tool for ContractType)#");
    py::class_<RWStepBasic_RWConversionBasedUnit , shared_ptr<RWStepBasic_RWConversionBasedUnit> >(m,"RWStepBasic_RWConversionBasedUnit",R"#(Read & Write Module for ConversionBasedUnit)#");
    py::class_<RWStepBasic_RWConversionBasedUnitAndAreaUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndAreaUnit> >(m,"RWStepBasic_RWConversionBasedUnitAndAreaUnit",R"#(Read & Write Module for RWConversionBasedUnitAndAreaUnit)#");
    py::class_<RWStepBasic_RWConversionBasedUnitAndLengthUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndLengthUnit> >(m,"RWStepBasic_RWConversionBasedUnitAndLengthUnit",R"#(Read & Write Module for ConversionBasedUnitAndLengthUnit)#");
    py::class_<RWStepBasic_RWConversionBasedUnitAndMassUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndMassUnit> >(m,"RWStepBasic_RWConversionBasedUnitAndMassUnit",R"#(Read & Write Module for ConversionBasedUnitAndMassUnit)#");
    py::class_<RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit> >(m,"RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit",R"#(Read & Write Module for ConversionBasedUnitAndPlaneAngleUnit)#");
    py::class_<RWStepBasic_RWConversionBasedUnitAndRatioUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndRatioUnit> >(m,"RWStepBasic_RWConversionBasedUnitAndRatioUnit",R"#(Read & Write Module for ConversionBasedUnitAndRatioUnit)#");
    py::class_<RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit> >(m,"RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit",R"#(Read & Write Module for ConversionBasedUnitAndSolidAngleUnit)#");
    py::class_<RWStepBasic_RWConversionBasedUnitAndTimeUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndTimeUnit> >(m,"RWStepBasic_RWConversionBasedUnitAndTimeUnit",R"#(Read & Write Module for ConversionBasedUnitAndTimeUnit)#");
    py::class_<RWStepBasic_RWConversionBasedUnitAndVolumeUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndVolumeUnit> >(m,"RWStepBasic_RWConversionBasedUnitAndVolumeUnit",R"#(Read & Write Module for ConversionBasedUnitAndVolumeUnit)#");
    py::class_<RWStepBasic_RWCoordinatedUniversalTimeOffset , shared_ptr<RWStepBasic_RWCoordinatedUniversalTimeOffset> >(m,"RWStepBasic_RWCoordinatedUniversalTimeOffset",R"#(Read & Write Module for CoordinatedUniversalTimeOffset)#");
    py::class_<RWStepBasic_RWDate , shared_ptr<RWStepBasic_RWDate> >(m,"RWStepBasic_RWDate",R"#(Read & Write Module for Date)#");
    py::class_<RWStepBasic_RWDateAndTime , shared_ptr<RWStepBasic_RWDateAndTime> >(m,"RWStepBasic_RWDateAndTime",R"#(Read & Write Module for DateAndTime)#");
    py::class_<RWStepBasic_RWDateRole , shared_ptr<RWStepBasic_RWDateRole> >(m,"RWStepBasic_RWDateRole",R"#(Read & Write Module for DateRole)#");
    py::class_<RWStepBasic_RWDateTimeRole , shared_ptr<RWStepBasic_RWDateTimeRole> >(m,"RWStepBasic_RWDateTimeRole",R"#(Read & Write Module for DateTimeRole)#");
    py::class_<RWStepBasic_RWDerivedUnit , shared_ptr<RWStepBasic_RWDerivedUnit> >(m,"RWStepBasic_RWDerivedUnit",R"#(Read & Write Module for DerivedUnit)#");
    py::class_<RWStepBasic_RWDerivedUnitElement , shared_ptr<RWStepBasic_RWDerivedUnitElement> >(m,"RWStepBasic_RWDerivedUnitElement",R"#(Read & Write Module for DerivedUnitElement)#");
    py::class_<RWStepBasic_RWDimensionalExponents , shared_ptr<RWStepBasic_RWDimensionalExponents> >(m,"RWStepBasic_RWDimensionalExponents",R"#(Read & Write Module for DimensionalExponents)#");
    py::class_<RWStepBasic_RWDocument , shared_ptr<RWStepBasic_RWDocument> >(m,"RWStepBasic_RWDocument",R"#(Read & Write tool for Document)#");
    py::class_<RWStepBasic_RWDocumentFile , shared_ptr<RWStepBasic_RWDocumentFile> >(m,"RWStepBasic_RWDocumentFile",R"#(Read & Write tool for DocumentFile)#");
    py::class_<RWStepBasic_RWDocumentProductAssociation , shared_ptr<RWStepBasic_RWDocumentProductAssociation> >(m,"RWStepBasic_RWDocumentProductAssociation",R"#(Read & Write tool for DocumentProductAssociation)#");
    py::class_<RWStepBasic_RWDocumentProductEquivalence , shared_ptr<RWStepBasic_RWDocumentProductEquivalence> >(m,"RWStepBasic_RWDocumentProductEquivalence",R"#(Read & Write tool for DocumentProductEquivalence)#");
    py::class_<RWStepBasic_RWDocumentRelationship , shared_ptr<RWStepBasic_RWDocumentRelationship> >(m,"RWStepBasic_RWDocumentRelationship",R"#(Read & Write Module for DocumentRelationship)#");
    py::class_<RWStepBasic_RWDocumentRepresentationType , shared_ptr<RWStepBasic_RWDocumentRepresentationType> >(m,"RWStepBasic_RWDocumentRepresentationType",R"#(Read & Write tool for DocumentRepresentationType)#");
    py::class_<RWStepBasic_RWDocumentType , shared_ptr<RWStepBasic_RWDocumentType> >(m,"RWStepBasic_RWDocumentType",R"#(Read & Write Module for DocumentType)#");
    py::class_<RWStepBasic_RWDocumentUsageConstraint , shared_ptr<RWStepBasic_RWDocumentUsageConstraint> >(m,"RWStepBasic_RWDocumentUsageConstraint",R"#(Read & Write Module for DocumentUsageConstraint)#");
    py::class_<RWStepBasic_RWEffectivity , shared_ptr<RWStepBasic_RWEffectivity> >(m,"RWStepBasic_RWEffectivity",R"#(Read & Write Module for Effectivity)#");
    py::class_<RWStepBasic_RWEffectivityAssignment , shared_ptr<RWStepBasic_RWEffectivityAssignment> >(m,"RWStepBasic_RWEffectivityAssignment",R"#(Read & Write tool for EffectivityAssignment)#");
    py::class_<RWStepBasic_RWEulerAngles , shared_ptr<RWStepBasic_RWEulerAngles> >(m,"RWStepBasic_RWEulerAngles",R"#(Read & Write tool for EulerAngles)#");
    py::class_<RWStepBasic_RWExternalIdentificationAssignment , shared_ptr<RWStepBasic_RWExternalIdentificationAssignment> >(m,"RWStepBasic_RWExternalIdentificationAssignment",R"#(Read & Write tool for ExternalIdentificationAssignment)#");
    py::class_<RWStepBasic_RWExternalSource , shared_ptr<RWStepBasic_RWExternalSource> >(m,"RWStepBasic_RWExternalSource",R"#(Read & Write tool for ExternalSource)#");
    py::class_<RWStepBasic_RWExternallyDefinedItem , shared_ptr<RWStepBasic_RWExternallyDefinedItem> >(m,"RWStepBasic_RWExternallyDefinedItem",R"#(Read & Write tool for ExternallyDefinedItem)#");
    py::class_<RWStepBasic_RWGeneralProperty , shared_ptr<RWStepBasic_RWGeneralProperty> >(m,"RWStepBasic_RWGeneralProperty",R"#(Read & Write tool for GeneralProperty)#");
    py::class_<RWStepBasic_RWGroup , shared_ptr<RWStepBasic_RWGroup> >(m,"RWStepBasic_RWGroup",R"#(Read & Write tool for Group)#");
    py::class_<RWStepBasic_RWGroupAssignment , shared_ptr<RWStepBasic_RWGroupAssignment> >(m,"RWStepBasic_RWGroupAssignment",R"#(Read & Write tool for GroupAssignment)#");
    py::class_<RWStepBasic_RWGroupRelationship , shared_ptr<RWStepBasic_RWGroupRelationship> >(m,"RWStepBasic_RWGroupRelationship",R"#(Read & Write tool for GroupRelationship)#");
    py::class_<RWStepBasic_RWIdentificationAssignment , shared_ptr<RWStepBasic_RWIdentificationAssignment> >(m,"RWStepBasic_RWIdentificationAssignment",R"#(Read & Write tool for IdentificationAssignment)#");
    py::class_<RWStepBasic_RWIdentificationRole , shared_ptr<RWStepBasic_RWIdentificationRole> >(m,"RWStepBasic_RWIdentificationRole",R"#(Read & Write tool for IdentificationRole)#");
    py::class_<RWStepBasic_RWLengthMeasureWithUnit , shared_ptr<RWStepBasic_RWLengthMeasureWithUnit> >(m,"RWStepBasic_RWLengthMeasureWithUnit",R"#(Read & Write Module for LengthMeasureWithUnit)#");
    py::class_<RWStepBasic_RWLengthUnit , shared_ptr<RWStepBasic_RWLengthUnit> >(m,"RWStepBasic_RWLengthUnit",R"#(Read & Write Module for LengthUnit)#");
    py::class_<RWStepBasic_RWLocalTime , shared_ptr<RWStepBasic_RWLocalTime> >(m,"RWStepBasic_RWLocalTime",R"#(Read & Write Module for LocalTime)#");
    py::class_<RWStepBasic_RWMassMeasureWithUnit , shared_ptr<RWStepBasic_RWMassMeasureWithUnit> >(m,"RWStepBasic_RWMassMeasureWithUnit",R"#(Read & Write Module for MassMeasureWithUnit)#");
    py::class_<RWStepBasic_RWMassUnit , shared_ptr<RWStepBasic_RWMassUnit> >(m,"RWStepBasic_RWMassUnit",R"#(Read & Write tool for MassUnit)#");
    py::class_<RWStepBasic_RWMeasureWithUnit , shared_ptr<RWStepBasic_RWMeasureWithUnit> >(m,"RWStepBasic_RWMeasureWithUnit",R"#(Read & Write Module for MeasureWithUnit)#");
    py::class_<RWStepBasic_RWMechanicalContext , shared_ptr<RWStepBasic_RWMechanicalContext> >(m,"RWStepBasic_RWMechanicalContext",R"#(Read & Write Module for MechanicalContext)#");
    py::class_<RWStepBasic_RWNameAssignment , shared_ptr<RWStepBasic_RWNameAssignment> >(m,"RWStepBasic_RWNameAssignment",R"#(Read & Write tool for NameAssignment)#");
    py::class_<RWStepBasic_RWNamedUnit , shared_ptr<RWStepBasic_RWNamedUnit> >(m,"RWStepBasic_RWNamedUnit",R"#(Read & Write Module for NamedUnit)#");
    py::class_<RWStepBasic_RWObjectRole , shared_ptr<RWStepBasic_RWObjectRole> >(m,"RWStepBasic_RWObjectRole",R"#(Read & Write tool for ObjectRole)#");
    py::class_<RWStepBasic_RWOrdinalDate , shared_ptr<RWStepBasic_RWOrdinalDate> >(m,"RWStepBasic_RWOrdinalDate",R"#(Read & Write Module for OrdinalDate)#");
    py::class_<RWStepBasic_RWOrganization , shared_ptr<RWStepBasic_RWOrganization> >(m,"RWStepBasic_RWOrganization",R"#(Read & Write Module for Organization)#");
    py::class_<RWStepBasic_RWOrganizationRole , shared_ptr<RWStepBasic_RWOrganizationRole> >(m,"RWStepBasic_RWOrganizationRole",R"#(Read & Write Module for OrganizationRole)#");
    py::class_<RWStepBasic_RWOrganizationalAddress , shared_ptr<RWStepBasic_RWOrganizationalAddress> >(m,"RWStepBasic_RWOrganizationalAddress",R"#(Read & Write Module for OrganizationalAddress)#");
    py::class_<RWStepBasic_RWPerson , shared_ptr<RWStepBasic_RWPerson> >(m,"RWStepBasic_RWPerson",R"#(Read & Write Module for Person)#");
    py::class_<RWStepBasic_RWPersonAndOrganization , shared_ptr<RWStepBasic_RWPersonAndOrganization> >(m,"RWStepBasic_RWPersonAndOrganization",R"#(Read & Write Module for PersonAndOrganization)#");
    py::class_<RWStepBasic_RWPersonAndOrganizationRole , shared_ptr<RWStepBasic_RWPersonAndOrganizationRole> >(m,"RWStepBasic_RWPersonAndOrganizationRole",R"#(Read & Write Module for PersonAndOrganizationRole)#");
    py::class_<RWStepBasic_RWPersonalAddress , shared_ptr<RWStepBasic_RWPersonalAddress> >(m,"RWStepBasic_RWPersonalAddress",R"#(Read & Write Module for PersonalAddress)#");
    py::class_<RWStepBasic_RWPlaneAngleMeasureWithUnit , shared_ptr<RWStepBasic_RWPlaneAngleMeasureWithUnit> >(m,"RWStepBasic_RWPlaneAngleMeasureWithUnit",R"#(Read & Write Module for PlaneAngleMeasureWithUnit)#");
    py::class_<RWStepBasic_RWPlaneAngleUnit , shared_ptr<RWStepBasic_RWPlaneAngleUnit> >(m,"RWStepBasic_RWPlaneAngleUnit",R"#(Read & Write Module for PlaneAngleUnit)#");
    py::class_<RWStepBasic_RWProduct , shared_ptr<RWStepBasic_RWProduct> >(m,"RWStepBasic_RWProduct",R"#(Read & Write Module for Product)#");
    py::class_<RWStepBasic_RWProductCategory , shared_ptr<RWStepBasic_RWProductCategory> >(m,"RWStepBasic_RWProductCategory",R"#(Read & Write Module for ProductCategory)#");
    py::class_<RWStepBasic_RWProductCategoryRelationship , shared_ptr<RWStepBasic_RWProductCategoryRelationship> >(m,"RWStepBasic_RWProductCategoryRelationship",R"#(Read & Write tool for ProductCategoryRelationship)#");
    py::class_<RWStepBasic_RWProductConceptContext , shared_ptr<RWStepBasic_RWProductConceptContext> >(m,"RWStepBasic_RWProductConceptContext",R"#(Read & Write tool for ProductConceptContext)#");
    py::class_<RWStepBasic_RWProductContext , shared_ptr<RWStepBasic_RWProductContext> >(m,"RWStepBasic_RWProductContext",R"#(Read & Write Module for ProductContext)#");
    py::class_<RWStepBasic_RWProductDefinition , shared_ptr<RWStepBasic_RWProductDefinition> >(m,"RWStepBasic_RWProductDefinition",R"#(Read & Write Module for ProductDefinition)#");
    py::class_<RWStepBasic_RWProductDefinitionContext , shared_ptr<RWStepBasic_RWProductDefinitionContext> >(m,"RWStepBasic_RWProductDefinitionContext",R"#(Read & Write Module for ProductDefinitionContext)#");
    py::class_<RWStepBasic_RWProductDefinitionEffectivity , shared_ptr<RWStepBasic_RWProductDefinitionEffectivity> >(m,"RWStepBasic_RWProductDefinitionEffectivity",R"#(Read & Write Module for ProductDefinitionEffectivity)#");
    py::class_<RWStepBasic_RWProductDefinitionFormation , shared_ptr<RWStepBasic_RWProductDefinitionFormation> >(m,"RWStepBasic_RWProductDefinitionFormation",R"#(Read & Write Module for ProductDefinitionFormation)#");
    py::class_<RWStepBasic_RWProductDefinitionFormationRelationship , shared_ptr<RWStepBasic_RWProductDefinitionFormationRelationship> >(m,"RWStepBasic_RWProductDefinitionFormationRelationship",R"#(Read & Write tool for ProductDefinitionFormationRelationship)#");
    py::class_<RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource , shared_ptr<RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource> >(m,"RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource",R"#(Read & Write Module for ProductDefinitionFormationWithSpecifiedSource)#");
    py::class_<RWStepBasic_RWProductDefinitionReference , shared_ptr<RWStepBasic_RWProductDefinitionReference> >(m,"RWStepBasic_RWProductDefinitionReference",R"#(Read & Write Module for ProductDefinitionReference)#");
    py::class_<RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation , shared_ptr<RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation> >(m,"RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation",R"#(Read & Write Module for ProductDefinitionReferenceWithLocalRepresentation)#");
    py::class_<RWStepBasic_RWProductDefinitionRelationship , shared_ptr<RWStepBasic_RWProductDefinitionRelationship> >(m,"RWStepBasic_RWProductDefinitionRelationship",R"#(Read & Write tool for ProductDefinitionRelationship)#");
    py::class_<RWStepBasic_RWProductDefinitionWithAssociatedDocuments , shared_ptr<RWStepBasic_RWProductDefinitionWithAssociatedDocuments> >(m,"RWStepBasic_RWProductDefinitionWithAssociatedDocuments",R"#(Read & Write Module for ProductDefinitionWithAssociatedDocuments)#");
    py::class_<RWStepBasic_RWProductRelatedProductCategory , shared_ptr<RWStepBasic_RWProductRelatedProductCategory> >(m,"RWStepBasic_RWProductRelatedProductCategory",R"#(Read & Write Module for ProductRelatedProductCategory)#");
    py::class_<RWStepBasic_RWProductType , shared_ptr<RWStepBasic_RWProductType> >(m,"RWStepBasic_RWProductType",R"#(Read & Write Module for ProductType)#");
    py::class_<RWStepBasic_RWRatioMeasureWithUnit , shared_ptr<RWStepBasic_RWRatioMeasureWithUnit> >(m,"RWStepBasic_RWRatioMeasureWithUnit",R"#(Read & Write Module for RatioMeasureWithUnit)#");
    py::class_<RWStepBasic_RWRoleAssociation , shared_ptr<RWStepBasic_RWRoleAssociation> >(m,"RWStepBasic_RWRoleAssociation",R"#(Read & Write tool for RoleAssociation)#");
    py::class_<RWStepBasic_RWSecurityClassification , shared_ptr<RWStepBasic_RWSecurityClassification> >(m,"RWStepBasic_RWSecurityClassification",R"#(Read & Write Module for SecurityClassification)#");
    py::class_<RWStepBasic_RWSecurityClassificationLevel , shared_ptr<RWStepBasic_RWSecurityClassificationLevel> >(m,"RWStepBasic_RWSecurityClassificationLevel",R"#(Read & Write Module for SecurityClassificationLevel)#");
    py::class_<RWStepBasic_RWSiUnit , shared_ptr<RWStepBasic_RWSiUnit> >(m,"RWStepBasic_RWSiUnit",R"#(Read & Write Module for SiUnit)#");
    py::class_<RWStepBasic_RWSiUnitAndAreaUnit , shared_ptr<RWStepBasic_RWSiUnitAndAreaUnit> >(m,"RWStepBasic_RWSiUnitAndAreaUnit",R"#(Read & Write Module for SiUnitAndAreaUnit)#");
    py::class_<RWStepBasic_RWSiUnitAndLengthUnit , shared_ptr<RWStepBasic_RWSiUnitAndLengthUnit> >(m,"RWStepBasic_RWSiUnitAndLengthUnit",R"#(Read & Write Module for SiUnitAndLengthUnit)#");
    py::class_<RWStepBasic_RWSiUnitAndMassUnit , shared_ptr<RWStepBasic_RWSiUnitAndMassUnit> >(m,"RWStepBasic_RWSiUnitAndMassUnit",R"#(Read & Write Module for SiUnitAndMassUnit)#");
    py::class_<RWStepBasic_RWSiUnitAndPlaneAngleUnit , shared_ptr<RWStepBasic_RWSiUnitAndPlaneAngleUnit> >(m,"RWStepBasic_RWSiUnitAndPlaneAngleUnit",R"#(Read & Write Module for SiUnitAndPlaneAngleUnit)#");
    py::class_<RWStepBasic_RWSiUnitAndRatioUnit , shared_ptr<RWStepBasic_RWSiUnitAndRatioUnit> >(m,"RWStepBasic_RWSiUnitAndRatioUnit",R"#(Read & Write Module for SiUnitAndRatioUnit)#");
    py::class_<RWStepBasic_RWSiUnitAndSolidAngleUnit , shared_ptr<RWStepBasic_RWSiUnitAndSolidAngleUnit> >(m,"RWStepBasic_RWSiUnitAndSolidAngleUnit",R"#(Read & Write Module for SiUnitAndSolidAngleUnit)#");
    py::class_<RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit , shared_ptr<RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit> >(m,"RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit",R"#(Read & Write Module for SiUnitAndThermodynamicTemperatureUnit)#");
    py::class_<RWStepBasic_RWSiUnitAndTimeUnit , shared_ptr<RWStepBasic_RWSiUnitAndTimeUnit> >(m,"RWStepBasic_RWSiUnitAndTimeUnit",R"#(Read & Write Module for SiUnitAndTimeUnit)#");
    py::class_<RWStepBasic_RWSiUnitAndVolumeUnit , shared_ptr<RWStepBasic_RWSiUnitAndVolumeUnit> >(m,"RWStepBasic_RWSiUnitAndVolumeUnit",R"#(Read & Write Module for SiUnitAndVolumeUnit)#");
    py::class_<RWStepBasic_RWSolidAngleMeasureWithUnit , shared_ptr<RWStepBasic_RWSolidAngleMeasureWithUnit> >(m,"RWStepBasic_RWSolidAngleMeasureWithUnit",R"#(Read & Write Module for SolidAngleMeasureWithUnit)#");
    py::class_<RWStepBasic_RWSolidAngleUnit , shared_ptr<RWStepBasic_RWSolidAngleUnit> >(m,"RWStepBasic_RWSolidAngleUnit",R"#(Read & Write Module for SolidAngleUnit)#");
    py::class_<RWStepBasic_RWThermodynamicTemperatureUnit , shared_ptr<RWStepBasic_RWThermodynamicTemperatureUnit> >(m,"RWStepBasic_RWThermodynamicTemperatureUnit",R"#(Read & Write tool for ThermodynamicTemperatureUnit)#");
    py::class_<RWStepBasic_RWUncertaintyMeasureWithUnit , shared_ptr<RWStepBasic_RWUncertaintyMeasureWithUnit> >(m,"RWStepBasic_RWUncertaintyMeasureWithUnit",R"#(Read & Write Module for UncertaintyMeasureWithUnit)#");
    py::class_<RWStepBasic_RWVersionedActionRequest , shared_ptr<RWStepBasic_RWVersionedActionRequest> >(m,"RWStepBasic_RWVersionedActionRequest",R"#(Read & Write tool for VersionedActionRequest)#");
    py::class_<RWStepBasic_RWWeekOfYearAndDayDate , shared_ptr<RWStepBasic_RWWeekOfYearAndDayDate> >(m,"RWStepBasic_RWWeekOfYearAndDayDate",R"#(Read & Write Module for WeekOfYearAndDayDate)#");

};

// user-defined post-inclusion per module

// user-defined post
