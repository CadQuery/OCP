
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
#include <StepBasic_ActionRequestSolution.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ContractType.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndPlaneAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_MechanicalContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductType.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndThermodynamicTemperatureUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SolidAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SecurityClassificationLevel.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndPlaneAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_OrdinalDate.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <TCollection_AsciiString.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_LocalTime.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DerivedUnitElement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionWithAssociatedDocuments.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentProductEquivalence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_CertificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_MassUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndAreaUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndSolidAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_RatioMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApprovalStatus.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_NameAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ActionRequestAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApprovalRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ThermodynamicTemperatureUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductCategoryRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndMassUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DerivedUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionFormationWithSpecifiedSource.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentProductAssociation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentRepresentationType.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_WeekOfYearAndDayDate.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductRelatedProductCategory.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Approval.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_GeneralProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ActionMethod.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Address.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndSolidAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionReferenceWithLocalRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Document.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_PersonalAddress.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionEffectivity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_UncertaintyMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductConceptContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_OrganizationalAddress.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_CoordinatedUniversalTimeOffset.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApplicationContextElement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApprovalRole.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Action.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndTimeUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Group.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ActionAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ContractAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndAreaUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_MassMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndLengthUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Effectivity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Date.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndTimeUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_IdentificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ExternalIdentificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndVolumeUnit.hxx>
#include <StepData_StepWriter.hxx>
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
#include <StepBasic_CertificationType.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ObjectRole.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndRatioUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_CalendarDate.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Person.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Certification.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SiUnitAndMassUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_EffectivityAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_GroupAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ApprovalDateTime.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Contract.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_SolidAngleMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndRatioUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_PlaneAngleMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Product.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_DocumentUsageConstraint.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndVolumeUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_Organization.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ProductContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepBasic_ConversionBasedUnitAndLengthUnit.hxx>
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
void register_RWStepBasic(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepBasic"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepBasic_RWAction , shared_ptr<RWStepBasic_RWAction>  >>(m.attr("RWStepBasic_RWAction"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWAction::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Action> &  ) const) static_cast<void (RWStepBasic_RWAction::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Action> &  ) const>(&RWStepBasic_RWAction::ReadStep),
             R"#(Reads Action)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWAction::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Action> &  ) const) static_cast<void (RWStepBasic_RWAction::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Action> &  ) const>(&RWStepBasic_RWAction::WriteStep),
             R"#(Writes Action)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWAction::*)( const opencascade::handle<StepBasic_Action> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWAction::*)( const opencascade::handle<StepBasic_Action> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWAction::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWActionAssignment , shared_ptr<RWStepBasic_RWActionAssignment>  >>(m.attr("RWStepBasic_RWActionAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWActionAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ActionAssignment> &  ) const) static_cast<void (RWStepBasic_RWActionAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ActionAssignment> &  ) const>(&RWStepBasic_RWActionAssignment::ReadStep),
             R"#(Reads ActionAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWActionAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ActionAssignment> &  ) const) static_cast<void (RWStepBasic_RWActionAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ActionAssignment> &  ) const>(&RWStepBasic_RWActionAssignment::WriteStep),
             R"#(Writes ActionAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWActionAssignment::*)( const opencascade::handle<StepBasic_ActionAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWActionAssignment::*)( const opencascade::handle<StepBasic_ActionAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWActionAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWActionMethod , shared_ptr<RWStepBasic_RWActionMethod>  >>(m.attr("RWStepBasic_RWActionMethod"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWActionMethod::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ActionMethod> &  ) const) static_cast<void (RWStepBasic_RWActionMethod::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ActionMethod> &  ) const>(&RWStepBasic_RWActionMethod::ReadStep),
             R"#(Reads ActionMethod)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWActionMethod::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ActionMethod> &  ) const) static_cast<void (RWStepBasic_RWActionMethod::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ActionMethod> &  ) const>(&RWStepBasic_RWActionMethod::WriteStep),
             R"#(Writes ActionMethod)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWActionMethod::*)( const opencascade::handle<StepBasic_ActionMethod> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWActionMethod::*)( const opencascade::handle<StepBasic_ActionMethod> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWActionMethod::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWActionRequestAssignment , shared_ptr<RWStepBasic_RWActionRequestAssignment>  >>(m.attr("RWStepBasic_RWActionRequestAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWActionRequestAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ActionRequestAssignment> &  ) const) static_cast<void (RWStepBasic_RWActionRequestAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ActionRequestAssignment> &  ) const>(&RWStepBasic_RWActionRequestAssignment::ReadStep),
             R"#(Reads ActionRequestAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWActionRequestAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ActionRequestAssignment> &  ) const) static_cast<void (RWStepBasic_RWActionRequestAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ActionRequestAssignment> &  ) const>(&RWStepBasic_RWActionRequestAssignment::WriteStep),
             R"#(Writes ActionRequestAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWActionRequestAssignment::*)( const opencascade::handle<StepBasic_ActionRequestAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWActionRequestAssignment::*)( const opencascade::handle<StepBasic_ActionRequestAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWActionRequestAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWActionRequestSolution , shared_ptr<RWStepBasic_RWActionRequestSolution>  >>(m.attr("RWStepBasic_RWActionRequestSolution"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWActionRequestSolution::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ActionRequestSolution> &  ) const) static_cast<void (RWStepBasic_RWActionRequestSolution::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ActionRequestSolution> &  ) const>(&RWStepBasic_RWActionRequestSolution::ReadStep),
             R"#(Reads ActionRequestSolution)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWActionRequestSolution::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ActionRequestSolution> &  ) const) static_cast<void (RWStepBasic_RWActionRequestSolution::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ActionRequestSolution> &  ) const>(&RWStepBasic_RWActionRequestSolution::WriteStep),
             R"#(Writes ActionRequestSolution)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWActionRequestSolution::*)( const opencascade::handle<StepBasic_ActionRequestSolution> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWActionRequestSolution::*)( const opencascade::handle<StepBasic_ActionRequestSolution> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWActionRequestSolution::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWAddress , shared_ptr<RWStepBasic_RWAddress>  >>(m.attr("RWStepBasic_RWAddress"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWAddress::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Address> &  ) const) static_cast<void (RWStepBasic_RWAddress::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Address> &  ) const>(&RWStepBasic_RWAddress::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWAddress::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Address> &  ) const) static_cast<void (RWStepBasic_RWAddress::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Address> &  ) const>(&RWStepBasic_RWAddress::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApplicationContext , shared_ptr<RWStepBasic_RWApplicationContext>  >>(m.attr("RWStepBasic_RWApplicationContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWApplicationContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApplicationContext> &  ) const) static_cast<void (RWStepBasic_RWApplicationContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApplicationContext> &  ) const>(&RWStepBasic_RWApplicationContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWApplicationContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApplicationContext> &  ) const) static_cast<void (RWStepBasic_RWApplicationContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApplicationContext> &  ) const>(&RWStepBasic_RWApplicationContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApplicationContextElement , shared_ptr<RWStepBasic_RWApplicationContextElement>  >>(m.attr("RWStepBasic_RWApplicationContextElement"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWApplicationContextElement::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApplicationContextElement> &  ) const) static_cast<void (RWStepBasic_RWApplicationContextElement::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApplicationContextElement> &  ) const>(&RWStepBasic_RWApplicationContextElement::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWApplicationContextElement::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApplicationContextElement> &  ) const) static_cast<void (RWStepBasic_RWApplicationContextElement::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApplicationContextElement> &  ) const>(&RWStepBasic_RWApplicationContextElement::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWApplicationContextElement::*)( const opencascade::handle<StepBasic_ApplicationContextElement> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWApplicationContextElement::*)( const opencascade::handle<StepBasic_ApplicationContextElement> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWApplicationContextElement::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApplicationProtocolDefinition , shared_ptr<RWStepBasic_RWApplicationProtocolDefinition>  >>(m.attr("RWStepBasic_RWApplicationProtocolDefinition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWApplicationProtocolDefinition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApplicationProtocolDefinition> &  ) const) static_cast<void (RWStepBasic_RWApplicationProtocolDefinition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApplicationProtocolDefinition> &  ) const>(&RWStepBasic_RWApplicationProtocolDefinition::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWApplicationProtocolDefinition::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApplicationProtocolDefinition> &  ) const) static_cast<void (RWStepBasic_RWApplicationProtocolDefinition::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApplicationProtocolDefinition> &  ) const>(&RWStepBasic_RWApplicationProtocolDefinition::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWApplicationProtocolDefinition::*)( const opencascade::handle<StepBasic_ApplicationProtocolDefinition> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWApplicationProtocolDefinition::*)( const opencascade::handle<StepBasic_ApplicationProtocolDefinition> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWApplicationProtocolDefinition::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApproval , shared_ptr<RWStepBasic_RWApproval>  >>(m.attr("RWStepBasic_RWApproval"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWApproval::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Approval> &  ) const) static_cast<void (RWStepBasic_RWApproval::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Approval> &  ) const>(&RWStepBasic_RWApproval::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWApproval::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Approval> &  ) const) static_cast<void (RWStepBasic_RWApproval::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Approval> &  ) const>(&RWStepBasic_RWApproval::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWApproval::*)( const opencascade::handle<StepBasic_Approval> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWApproval::*)( const opencascade::handle<StepBasic_Approval> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWApproval::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApprovalDateTime , shared_ptr<RWStepBasic_RWApprovalDateTime>  >>(m.attr("RWStepBasic_RWApprovalDateTime"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWApprovalDateTime::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApprovalDateTime> &  ) const) static_cast<void (RWStepBasic_RWApprovalDateTime::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApprovalDateTime> &  ) const>(&RWStepBasic_RWApprovalDateTime::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWApprovalDateTime::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApprovalDateTime> &  ) const) static_cast<void (RWStepBasic_RWApprovalDateTime::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApprovalDateTime> &  ) const>(&RWStepBasic_RWApprovalDateTime::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWApprovalDateTime::*)( const opencascade::handle<StepBasic_ApprovalDateTime> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWApprovalDateTime::*)( const opencascade::handle<StepBasic_ApprovalDateTime> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWApprovalDateTime::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApprovalPersonOrganization , shared_ptr<RWStepBasic_RWApprovalPersonOrganization>  >>(m.attr("RWStepBasic_RWApprovalPersonOrganization"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWApprovalPersonOrganization::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApprovalPersonOrganization> &  ) const) static_cast<void (RWStepBasic_RWApprovalPersonOrganization::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApprovalPersonOrganization> &  ) const>(&RWStepBasic_RWApprovalPersonOrganization::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWApprovalPersonOrganization::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApprovalPersonOrganization> &  ) const) static_cast<void (RWStepBasic_RWApprovalPersonOrganization::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApprovalPersonOrganization> &  ) const>(&RWStepBasic_RWApprovalPersonOrganization::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWApprovalPersonOrganization::*)( const opencascade::handle<StepBasic_ApprovalPersonOrganization> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWApprovalPersonOrganization::*)( const opencascade::handle<StepBasic_ApprovalPersonOrganization> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWApprovalPersonOrganization::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApprovalRelationship , shared_ptr<RWStepBasic_RWApprovalRelationship>  >>(m.attr("RWStepBasic_RWApprovalRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWApprovalRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApprovalRelationship> &  ) const) static_cast<void (RWStepBasic_RWApprovalRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApprovalRelationship> &  ) const>(&RWStepBasic_RWApprovalRelationship::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWApprovalRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApprovalRelationship> &  ) const) static_cast<void (RWStepBasic_RWApprovalRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApprovalRelationship> &  ) const>(&RWStepBasic_RWApprovalRelationship::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWApprovalRelationship::*)( const opencascade::handle<StepBasic_ApprovalRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWApprovalRelationship::*)( const opencascade::handle<StepBasic_ApprovalRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWApprovalRelationship::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApprovalRole , shared_ptr<RWStepBasic_RWApprovalRole>  >>(m.attr("RWStepBasic_RWApprovalRole"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWApprovalRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApprovalRole> &  ) const) static_cast<void (RWStepBasic_RWApprovalRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApprovalRole> &  ) const>(&RWStepBasic_RWApprovalRole::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWApprovalRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApprovalRole> &  ) const) static_cast<void (RWStepBasic_RWApprovalRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApprovalRole> &  ) const>(&RWStepBasic_RWApprovalRole::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApprovalStatus , shared_ptr<RWStepBasic_RWApprovalStatus>  >>(m.attr("RWStepBasic_RWApprovalStatus"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWApprovalStatus::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApprovalStatus> &  ) const) static_cast<void (RWStepBasic_RWApprovalStatus::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ApprovalStatus> &  ) const>(&RWStepBasic_RWApprovalStatus::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWApprovalStatus::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApprovalStatus> &  ) const) static_cast<void (RWStepBasic_RWApprovalStatus::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ApprovalStatus> &  ) const>(&RWStepBasic_RWApprovalStatus::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCalendarDate , shared_ptr<RWStepBasic_RWCalendarDate>  >>(m.attr("RWStepBasic_RWCalendarDate"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWCalendarDate::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_CalendarDate> &  ) const) static_cast<void (RWStepBasic_RWCalendarDate::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_CalendarDate> &  ) const>(&RWStepBasic_RWCalendarDate::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWCalendarDate::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_CalendarDate> &  ) const) static_cast<void (RWStepBasic_RWCalendarDate::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_CalendarDate> &  ) const>(&RWStepBasic_RWCalendarDate::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCertification , shared_ptr<RWStepBasic_RWCertification>  >>(m.attr("RWStepBasic_RWCertification"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWCertification::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Certification> &  ) const) static_cast<void (RWStepBasic_RWCertification::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Certification> &  ) const>(&RWStepBasic_RWCertification::ReadStep),
             R"#(Reads Certification)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWCertification::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Certification> &  ) const) static_cast<void (RWStepBasic_RWCertification::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Certification> &  ) const>(&RWStepBasic_RWCertification::WriteStep),
             R"#(Writes Certification)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWCertification::*)( const opencascade::handle<StepBasic_Certification> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWCertification::*)( const opencascade::handle<StepBasic_Certification> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWCertification::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCertificationAssignment , shared_ptr<RWStepBasic_RWCertificationAssignment>  >>(m.attr("RWStepBasic_RWCertificationAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWCertificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_CertificationAssignment> &  ) const) static_cast<void (RWStepBasic_RWCertificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_CertificationAssignment> &  ) const>(&RWStepBasic_RWCertificationAssignment::ReadStep),
             R"#(Reads CertificationAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWCertificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_CertificationAssignment> &  ) const) static_cast<void (RWStepBasic_RWCertificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_CertificationAssignment> &  ) const>(&RWStepBasic_RWCertificationAssignment::WriteStep),
             R"#(Writes CertificationAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWCertificationAssignment::*)( const opencascade::handle<StepBasic_CertificationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWCertificationAssignment::*)( const opencascade::handle<StepBasic_CertificationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWCertificationAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCertificationType , shared_ptr<RWStepBasic_RWCertificationType>  >>(m.attr("RWStepBasic_RWCertificationType"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWCertificationType::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_CertificationType> &  ) const) static_cast<void (RWStepBasic_RWCertificationType::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_CertificationType> &  ) const>(&RWStepBasic_RWCertificationType::ReadStep),
             R"#(Reads CertificationType)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWCertificationType::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_CertificationType> &  ) const) static_cast<void (RWStepBasic_RWCertificationType::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_CertificationType> &  ) const>(&RWStepBasic_RWCertificationType::WriteStep),
             R"#(Writes CertificationType)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWCertificationType::*)( const opencascade::handle<StepBasic_CertificationType> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWCertificationType::*)( const opencascade::handle<StepBasic_CertificationType> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWCertificationType::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCharacterizedObject , shared_ptr<RWStepBasic_RWCharacterizedObject>  >>(m.attr("RWStepBasic_RWCharacterizedObject"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWCharacterizedObject::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_CharacterizedObject> &  ) const) static_cast<void (RWStepBasic_RWCharacterizedObject::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_CharacterizedObject> &  ) const>(&RWStepBasic_RWCharacterizedObject::ReadStep),
             R"#(Reads CharacterizedObject)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWCharacterizedObject::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_CharacterizedObject> &  ) const) static_cast<void (RWStepBasic_RWCharacterizedObject::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_CharacterizedObject> &  ) const>(&RWStepBasic_RWCharacterizedObject::WriteStep),
             R"#(Writes CharacterizedObject)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWCharacterizedObject::*)( const opencascade::handle<StepBasic_CharacterizedObject> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWCharacterizedObject::*)( const opencascade::handle<StepBasic_CharacterizedObject> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWCharacterizedObject::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWContract , shared_ptr<RWStepBasic_RWContract>  >>(m.attr("RWStepBasic_RWContract"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWContract::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Contract> &  ) const) static_cast<void (RWStepBasic_RWContract::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Contract> &  ) const>(&RWStepBasic_RWContract::ReadStep),
             R"#(Reads Contract)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWContract::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Contract> &  ) const) static_cast<void (RWStepBasic_RWContract::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Contract> &  ) const>(&RWStepBasic_RWContract::WriteStep),
             R"#(Writes Contract)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWContract::*)( const opencascade::handle<StepBasic_Contract> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWContract::*)( const opencascade::handle<StepBasic_Contract> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWContract::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWContractAssignment , shared_ptr<RWStepBasic_RWContractAssignment>  >>(m.attr("RWStepBasic_RWContractAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWContractAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ContractAssignment> &  ) const) static_cast<void (RWStepBasic_RWContractAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ContractAssignment> &  ) const>(&RWStepBasic_RWContractAssignment::ReadStep),
             R"#(Reads ContractAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWContractAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ContractAssignment> &  ) const) static_cast<void (RWStepBasic_RWContractAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ContractAssignment> &  ) const>(&RWStepBasic_RWContractAssignment::WriteStep),
             R"#(Writes ContractAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWContractAssignment::*)( const opencascade::handle<StepBasic_ContractAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWContractAssignment::*)( const opencascade::handle<StepBasic_ContractAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWContractAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWContractType , shared_ptr<RWStepBasic_RWContractType>  >>(m.attr("RWStepBasic_RWContractType"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWContractType::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ContractType> &  ) const) static_cast<void (RWStepBasic_RWContractType::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ContractType> &  ) const>(&RWStepBasic_RWContractType::ReadStep),
             R"#(Reads ContractType)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWContractType::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ContractType> &  ) const) static_cast<void (RWStepBasic_RWContractType::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ContractType> &  ) const>(&RWStepBasic_RWContractType::WriteStep),
             R"#(Writes ContractType)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWContractType::*)( const opencascade::handle<StepBasic_ContractType> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWContractType::*)( const opencascade::handle<StepBasic_ContractType> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWContractType::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnit , shared_ptr<RWStepBasic_RWConversionBasedUnit>  >>(m.attr("RWStepBasic_RWConversionBasedUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWConversionBasedUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWConversionBasedUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWConversionBasedUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWConversionBasedUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndAreaUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndAreaUnit>  >>(m.attr("RWStepBasic_RWConversionBasedUnitAndAreaUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWConversionBasedUnitAndAreaUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndAreaUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndAreaUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndAreaUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndAreaUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWConversionBasedUnitAndAreaUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndAreaUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndAreaUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndAreaUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndAreaUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWConversionBasedUnitAndAreaUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndAreaUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndAreaUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndAreaUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWConversionBasedUnitAndAreaUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndLengthUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndLengthUnit>  >>(m.attr("RWStepBasic_RWConversionBasedUnitAndLengthUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWConversionBasedUnitAndLengthUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndLengthUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndLengthUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndLengthUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndLengthUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWConversionBasedUnitAndLengthUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndLengthUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndLengthUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndLengthUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndLengthUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWConversionBasedUnitAndLengthUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndLengthUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndLengthUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndLengthUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWConversionBasedUnitAndLengthUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndMassUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndMassUnit>  >>(m.attr("RWStepBasic_RWConversionBasedUnitAndMassUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWConversionBasedUnitAndMassUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndMassUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndMassUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndMassUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndMassUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWConversionBasedUnitAndMassUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndMassUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndMassUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndMassUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndMassUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWConversionBasedUnitAndMassUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndMassUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndMassUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndMassUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWConversionBasedUnitAndMassUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit>  >>(m.attr("RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndPlaneAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndPlaneAngleUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndPlaneAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndPlaneAngleUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndPlaneAngleUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndPlaneAngleUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndRatioUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndRatioUnit>  >>(m.attr("RWStepBasic_RWConversionBasedUnitAndRatioUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWConversionBasedUnitAndRatioUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndRatioUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndRatioUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndRatioUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndRatioUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWConversionBasedUnitAndRatioUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndRatioUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndRatioUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndRatioUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndRatioUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWConversionBasedUnitAndRatioUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndRatioUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndRatioUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndRatioUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWConversionBasedUnitAndRatioUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit>  >>(m.attr("RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndSolidAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndSolidAngleUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndSolidAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndSolidAngleUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndSolidAngleUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndSolidAngleUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndTimeUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndTimeUnit>  >>(m.attr("RWStepBasic_RWConversionBasedUnitAndTimeUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWConversionBasedUnitAndTimeUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndTimeUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndTimeUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndTimeUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndTimeUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWConversionBasedUnitAndTimeUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndTimeUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndTimeUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndTimeUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndTimeUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWConversionBasedUnitAndTimeUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndTimeUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndTimeUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndTimeUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWConversionBasedUnitAndTimeUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndVolumeUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndVolumeUnit>  >>(m.attr("RWStepBasic_RWConversionBasedUnitAndVolumeUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWConversionBasedUnitAndVolumeUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndVolumeUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndVolumeUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndVolumeUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndVolumeUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWConversionBasedUnitAndVolumeUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndVolumeUnit> &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndVolumeUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ConversionBasedUnitAndVolumeUnit> &  ) const>(&RWStepBasic_RWConversionBasedUnitAndVolumeUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWConversionBasedUnitAndVolumeUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndVolumeUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWConversionBasedUnitAndVolumeUnit::*)( const opencascade::handle<StepBasic_ConversionBasedUnitAndVolumeUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWConversionBasedUnitAndVolumeUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCoordinatedUniversalTimeOffset , shared_ptr<RWStepBasic_RWCoordinatedUniversalTimeOffset>  >>(m.attr("RWStepBasic_RWCoordinatedUniversalTimeOffset"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWCoordinatedUniversalTimeOffset::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> &  ) const) static_cast<void (RWStepBasic_RWCoordinatedUniversalTimeOffset::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> &  ) const>(&RWStepBasic_RWCoordinatedUniversalTimeOffset::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWCoordinatedUniversalTimeOffset::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> &  ) const) static_cast<void (RWStepBasic_RWCoordinatedUniversalTimeOffset::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> &  ) const>(&RWStepBasic_RWCoordinatedUniversalTimeOffset::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDate , shared_ptr<RWStepBasic_RWDate>  >>(m.attr("RWStepBasic_RWDate"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDate::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Date> &  ) const) static_cast<void (RWStepBasic_RWDate::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Date> &  ) const>(&RWStepBasic_RWDate::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDate::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Date> &  ) const) static_cast<void (RWStepBasic_RWDate::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Date> &  ) const>(&RWStepBasic_RWDate::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDateAndTime , shared_ptr<RWStepBasic_RWDateAndTime>  >>(m.attr("RWStepBasic_RWDateAndTime"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDateAndTime::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DateAndTime> &  ) const) static_cast<void (RWStepBasic_RWDateAndTime::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DateAndTime> &  ) const>(&RWStepBasic_RWDateAndTime::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDateAndTime::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DateAndTime> &  ) const) static_cast<void (RWStepBasic_RWDateAndTime::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DateAndTime> &  ) const>(&RWStepBasic_RWDateAndTime::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDateAndTime::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDateAndTime::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDateAndTime::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDateRole , shared_ptr<RWStepBasic_RWDateRole>  >>(m.attr("RWStepBasic_RWDateRole"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDateRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DateRole> &  ) const) static_cast<void (RWStepBasic_RWDateRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DateRole> &  ) const>(&RWStepBasic_RWDateRole::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDateRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DateRole> &  ) const) static_cast<void (RWStepBasic_RWDateRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DateRole> &  ) const>(&RWStepBasic_RWDateRole::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDateTimeRole , shared_ptr<RWStepBasic_RWDateTimeRole>  >>(m.attr("RWStepBasic_RWDateTimeRole"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDateTimeRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DateTimeRole> &  ) const) static_cast<void (RWStepBasic_RWDateTimeRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DateTimeRole> &  ) const>(&RWStepBasic_RWDateTimeRole::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDateTimeRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DateTimeRole> &  ) const) static_cast<void (RWStepBasic_RWDateTimeRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DateTimeRole> &  ) const>(&RWStepBasic_RWDateTimeRole::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDerivedUnit , shared_ptr<RWStepBasic_RWDerivedUnit>  >>(m.attr("RWStepBasic_RWDerivedUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDerivedUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DerivedUnit> &  ) const) static_cast<void (RWStepBasic_RWDerivedUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DerivedUnit> &  ) const>(&RWStepBasic_RWDerivedUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDerivedUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DerivedUnit> &  ) const) static_cast<void (RWStepBasic_RWDerivedUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DerivedUnit> &  ) const>(&RWStepBasic_RWDerivedUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDerivedUnit::*)( const opencascade::handle<StepBasic_DerivedUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDerivedUnit::*)( const opencascade::handle<StepBasic_DerivedUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDerivedUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDerivedUnitElement , shared_ptr<RWStepBasic_RWDerivedUnitElement>  >>(m.attr("RWStepBasic_RWDerivedUnitElement"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDerivedUnitElement::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DerivedUnitElement> &  ) const) static_cast<void (RWStepBasic_RWDerivedUnitElement::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DerivedUnitElement> &  ) const>(&RWStepBasic_RWDerivedUnitElement::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDerivedUnitElement::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DerivedUnitElement> &  ) const) static_cast<void (RWStepBasic_RWDerivedUnitElement::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DerivedUnitElement> &  ) const>(&RWStepBasic_RWDerivedUnitElement::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDerivedUnitElement::*)( const opencascade::handle<StepBasic_DerivedUnitElement> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDerivedUnitElement::*)( const opencascade::handle<StepBasic_DerivedUnitElement> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDerivedUnitElement::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDimensionalExponents , shared_ptr<RWStepBasic_RWDimensionalExponents>  >>(m.attr("RWStepBasic_RWDimensionalExponents"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDimensionalExponents::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DimensionalExponents> &  ) const) static_cast<void (RWStepBasic_RWDimensionalExponents::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DimensionalExponents> &  ) const>(&RWStepBasic_RWDimensionalExponents::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDimensionalExponents::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DimensionalExponents> &  ) const) static_cast<void (RWStepBasic_RWDimensionalExponents::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DimensionalExponents> &  ) const>(&RWStepBasic_RWDimensionalExponents::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocument , shared_ptr<RWStepBasic_RWDocument>  >>(m.attr("RWStepBasic_RWDocument"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDocument::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Document> &  ) const) static_cast<void (RWStepBasic_RWDocument::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Document> &  ) const>(&RWStepBasic_RWDocument::ReadStep),
             R"#(Reads Document)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDocument::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Document> &  ) const) static_cast<void (RWStepBasic_RWDocument::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Document> &  ) const>(&RWStepBasic_RWDocument::WriteStep),
             R"#(Writes Document)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDocument::*)( const opencascade::handle<StepBasic_Document> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDocument::*)( const opencascade::handle<StepBasic_Document> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDocument::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentFile , shared_ptr<RWStepBasic_RWDocumentFile>  >>(m.attr("RWStepBasic_RWDocumentFile"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDocumentFile::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentFile> &  ) const) static_cast<void (RWStepBasic_RWDocumentFile::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentFile> &  ) const>(&RWStepBasic_RWDocumentFile::ReadStep),
             R"#(Reads DocumentFile)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDocumentFile::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentFile> &  ) const) static_cast<void (RWStepBasic_RWDocumentFile::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentFile> &  ) const>(&RWStepBasic_RWDocumentFile::WriteStep),
             R"#(Writes DocumentFile)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDocumentFile::*)( const opencascade::handle<StepBasic_DocumentFile> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDocumentFile::*)( const opencascade::handle<StepBasic_DocumentFile> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDocumentFile::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentProductAssociation , shared_ptr<RWStepBasic_RWDocumentProductAssociation>  >>(m.attr("RWStepBasic_RWDocumentProductAssociation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDocumentProductAssociation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentProductAssociation> &  ) const) static_cast<void (RWStepBasic_RWDocumentProductAssociation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentProductAssociation> &  ) const>(&RWStepBasic_RWDocumentProductAssociation::ReadStep),
             R"#(Reads DocumentProductAssociation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDocumentProductAssociation::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentProductAssociation> &  ) const) static_cast<void (RWStepBasic_RWDocumentProductAssociation::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentProductAssociation> &  ) const>(&RWStepBasic_RWDocumentProductAssociation::WriteStep),
             R"#(Writes DocumentProductAssociation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDocumentProductAssociation::*)( const opencascade::handle<StepBasic_DocumentProductAssociation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDocumentProductAssociation::*)( const opencascade::handle<StepBasic_DocumentProductAssociation> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDocumentProductAssociation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentProductEquivalence , shared_ptr<RWStepBasic_RWDocumentProductEquivalence>  >>(m.attr("RWStepBasic_RWDocumentProductEquivalence"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDocumentProductEquivalence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentProductEquivalence> &  ) const) static_cast<void (RWStepBasic_RWDocumentProductEquivalence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentProductEquivalence> &  ) const>(&RWStepBasic_RWDocumentProductEquivalence::ReadStep),
             R"#(Reads DocumentProductEquivalence)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDocumentProductEquivalence::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentProductEquivalence> &  ) const) static_cast<void (RWStepBasic_RWDocumentProductEquivalence::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentProductEquivalence> &  ) const>(&RWStepBasic_RWDocumentProductEquivalence::WriteStep),
             R"#(Writes DocumentProductEquivalence)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDocumentProductEquivalence::*)( const opencascade::handle<StepBasic_DocumentProductEquivalence> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDocumentProductEquivalence::*)( const opencascade::handle<StepBasic_DocumentProductEquivalence> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDocumentProductEquivalence::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentRelationship , shared_ptr<RWStepBasic_RWDocumentRelationship>  >>(m.attr("RWStepBasic_RWDocumentRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDocumentRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentRelationship> &  ) const) static_cast<void (RWStepBasic_RWDocumentRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentRelationship> &  ) const>(&RWStepBasic_RWDocumentRelationship::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDocumentRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentRelationship> &  ) const) static_cast<void (RWStepBasic_RWDocumentRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentRelationship> &  ) const>(&RWStepBasic_RWDocumentRelationship::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDocumentRelationship::*)( const opencascade::handle<StepBasic_DocumentRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDocumentRelationship::*)( const opencascade::handle<StepBasic_DocumentRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDocumentRelationship::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentRepresentationType , shared_ptr<RWStepBasic_RWDocumentRepresentationType>  >>(m.attr("RWStepBasic_RWDocumentRepresentationType"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDocumentRepresentationType::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentRepresentationType> &  ) const) static_cast<void (RWStepBasic_RWDocumentRepresentationType::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentRepresentationType> &  ) const>(&RWStepBasic_RWDocumentRepresentationType::ReadStep),
             R"#(Reads DocumentRepresentationType)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDocumentRepresentationType::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentRepresentationType> &  ) const) static_cast<void (RWStepBasic_RWDocumentRepresentationType::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentRepresentationType> &  ) const>(&RWStepBasic_RWDocumentRepresentationType::WriteStep),
             R"#(Writes DocumentRepresentationType)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDocumentRepresentationType::*)( const opencascade::handle<StepBasic_DocumentRepresentationType> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDocumentRepresentationType::*)( const opencascade::handle<StepBasic_DocumentRepresentationType> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDocumentRepresentationType::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentType , shared_ptr<RWStepBasic_RWDocumentType>  >>(m.attr("RWStepBasic_RWDocumentType"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDocumentType::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentType> &  ) const) static_cast<void (RWStepBasic_RWDocumentType::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentType> &  ) const>(&RWStepBasic_RWDocumentType::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDocumentType::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentType> &  ) const) static_cast<void (RWStepBasic_RWDocumentType::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentType> &  ) const>(&RWStepBasic_RWDocumentType::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDocumentType::*)( const opencascade::handle<StepBasic_DocumentType> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDocumentType::*)( const opencascade::handle<StepBasic_DocumentType> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDocumentType::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentUsageConstraint , shared_ptr<RWStepBasic_RWDocumentUsageConstraint>  >>(m.attr("RWStepBasic_RWDocumentUsageConstraint"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWDocumentUsageConstraint::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentUsageConstraint> &  ) const) static_cast<void (RWStepBasic_RWDocumentUsageConstraint::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_DocumentUsageConstraint> &  ) const>(&RWStepBasic_RWDocumentUsageConstraint::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWDocumentUsageConstraint::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentUsageConstraint> &  ) const) static_cast<void (RWStepBasic_RWDocumentUsageConstraint::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_DocumentUsageConstraint> &  ) const>(&RWStepBasic_RWDocumentUsageConstraint::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWDocumentUsageConstraint::*)( const opencascade::handle<StepBasic_DocumentUsageConstraint> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWDocumentUsageConstraint::*)( const opencascade::handle<StepBasic_DocumentUsageConstraint> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWDocumentUsageConstraint::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWEffectivity , shared_ptr<RWStepBasic_RWEffectivity>  >>(m.attr("RWStepBasic_RWEffectivity"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWEffectivity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Effectivity> &  ) const) static_cast<void (RWStepBasic_RWEffectivity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Effectivity> &  ) const>(&RWStepBasic_RWEffectivity::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWEffectivity::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Effectivity> &  ) const) static_cast<void (RWStepBasic_RWEffectivity::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Effectivity> &  ) const>(&RWStepBasic_RWEffectivity::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWEffectivity::*)( const opencascade::handle<StepBasic_Effectivity> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWEffectivity::*)( const opencascade::handle<StepBasic_Effectivity> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWEffectivity::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWEffectivityAssignment , shared_ptr<RWStepBasic_RWEffectivityAssignment>  >>(m.attr("RWStepBasic_RWEffectivityAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWEffectivityAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_EffectivityAssignment> &  ) const) static_cast<void (RWStepBasic_RWEffectivityAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_EffectivityAssignment> &  ) const>(&RWStepBasic_RWEffectivityAssignment::ReadStep),
             R"#(Reads EffectivityAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWEffectivityAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_EffectivityAssignment> &  ) const) static_cast<void (RWStepBasic_RWEffectivityAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_EffectivityAssignment> &  ) const>(&RWStepBasic_RWEffectivityAssignment::WriteStep),
             R"#(Writes EffectivityAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWEffectivityAssignment::*)( const opencascade::handle<StepBasic_EffectivityAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWEffectivityAssignment::*)( const opencascade::handle<StepBasic_EffectivityAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWEffectivityAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWEulerAngles , shared_ptr<RWStepBasic_RWEulerAngles>  >>(m.attr("RWStepBasic_RWEulerAngles"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWEulerAngles::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_EulerAngles> &  ) const) static_cast<void (RWStepBasic_RWEulerAngles::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_EulerAngles> &  ) const>(&RWStepBasic_RWEulerAngles::ReadStep),
             R"#(Reads EulerAngles)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWEulerAngles::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_EulerAngles> &  ) const) static_cast<void (RWStepBasic_RWEulerAngles::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_EulerAngles> &  ) const>(&RWStepBasic_RWEulerAngles::WriteStep),
             R"#(Writes EulerAngles)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWEulerAngles::*)( const opencascade::handle<StepBasic_EulerAngles> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWEulerAngles::*)( const opencascade::handle<StepBasic_EulerAngles> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWEulerAngles::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWExternalIdentificationAssignment , shared_ptr<RWStepBasic_RWExternalIdentificationAssignment>  >>(m.attr("RWStepBasic_RWExternalIdentificationAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWExternalIdentificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ExternalIdentificationAssignment> &  ) const) static_cast<void (RWStepBasic_RWExternalIdentificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ExternalIdentificationAssignment> &  ) const>(&RWStepBasic_RWExternalIdentificationAssignment::ReadStep),
             R"#(Reads ExternalIdentificationAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWExternalIdentificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ExternalIdentificationAssignment> &  ) const) static_cast<void (RWStepBasic_RWExternalIdentificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ExternalIdentificationAssignment> &  ) const>(&RWStepBasic_RWExternalIdentificationAssignment::WriteStep),
             R"#(Writes ExternalIdentificationAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWExternalIdentificationAssignment::*)( const opencascade::handle<StepBasic_ExternalIdentificationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWExternalIdentificationAssignment::*)( const opencascade::handle<StepBasic_ExternalIdentificationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWExternalIdentificationAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWExternalSource , shared_ptr<RWStepBasic_RWExternalSource>  >>(m.attr("RWStepBasic_RWExternalSource"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWExternalSource::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) const) static_cast<void (RWStepBasic_RWExternalSource::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) const>(&RWStepBasic_RWExternalSource::ReadStep),
             R"#(Reads ExternalSource)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWExternalSource::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) const) static_cast<void (RWStepBasic_RWExternalSource::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ExternalSource> &  ) const>(&RWStepBasic_RWExternalSource::WriteStep),
             R"#(Writes ExternalSource)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWExternalSource::*)( const opencascade::handle<StepBasic_ExternalSource> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWExternalSource::*)( const opencascade::handle<StepBasic_ExternalSource> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWExternalSource::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWExternallyDefinedItem , shared_ptr<RWStepBasic_RWExternallyDefinedItem>  >>(m.attr("RWStepBasic_RWExternallyDefinedItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWExternallyDefinedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ExternallyDefinedItem> &  ) const) static_cast<void (RWStepBasic_RWExternallyDefinedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ExternallyDefinedItem> &  ) const>(&RWStepBasic_RWExternallyDefinedItem::ReadStep),
             R"#(Reads ExternallyDefinedItem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWExternallyDefinedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ExternallyDefinedItem> &  ) const) static_cast<void (RWStepBasic_RWExternallyDefinedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ExternallyDefinedItem> &  ) const>(&RWStepBasic_RWExternallyDefinedItem::WriteStep),
             R"#(Writes ExternallyDefinedItem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWExternallyDefinedItem::*)( const opencascade::handle<StepBasic_ExternallyDefinedItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWExternallyDefinedItem::*)( const opencascade::handle<StepBasic_ExternallyDefinedItem> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWExternallyDefinedItem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWGeneralProperty , shared_ptr<RWStepBasic_RWGeneralProperty>  >>(m.attr("RWStepBasic_RWGeneralProperty"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWGeneralProperty::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_GeneralProperty> &  ) const) static_cast<void (RWStepBasic_RWGeneralProperty::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_GeneralProperty> &  ) const>(&RWStepBasic_RWGeneralProperty::ReadStep),
             R"#(Reads GeneralProperty)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWGeneralProperty::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_GeneralProperty> &  ) const) static_cast<void (RWStepBasic_RWGeneralProperty::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_GeneralProperty> &  ) const>(&RWStepBasic_RWGeneralProperty::WriteStep),
             R"#(Writes GeneralProperty)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWGeneralProperty::*)( const opencascade::handle<StepBasic_GeneralProperty> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWGeneralProperty::*)( const opencascade::handle<StepBasic_GeneralProperty> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWGeneralProperty::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWGroup , shared_ptr<RWStepBasic_RWGroup>  >>(m.attr("RWStepBasic_RWGroup"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWGroup::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Group> &  ) const) static_cast<void (RWStepBasic_RWGroup::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Group> &  ) const>(&RWStepBasic_RWGroup::ReadStep),
             R"#(Reads Group)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWGroup::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Group> &  ) const) static_cast<void (RWStepBasic_RWGroup::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Group> &  ) const>(&RWStepBasic_RWGroup::WriteStep),
             R"#(Writes Group)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWGroup::*)( const opencascade::handle<StepBasic_Group> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWGroup::*)( const opencascade::handle<StepBasic_Group> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWGroup::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWGroupAssignment , shared_ptr<RWStepBasic_RWGroupAssignment>  >>(m.attr("RWStepBasic_RWGroupAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWGroupAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_GroupAssignment> &  ) const) static_cast<void (RWStepBasic_RWGroupAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_GroupAssignment> &  ) const>(&RWStepBasic_RWGroupAssignment::ReadStep),
             R"#(Reads GroupAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWGroupAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_GroupAssignment> &  ) const) static_cast<void (RWStepBasic_RWGroupAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_GroupAssignment> &  ) const>(&RWStepBasic_RWGroupAssignment::WriteStep),
             R"#(Writes GroupAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWGroupAssignment::*)( const opencascade::handle<StepBasic_GroupAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWGroupAssignment::*)( const opencascade::handle<StepBasic_GroupAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWGroupAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWGroupRelationship , shared_ptr<RWStepBasic_RWGroupRelationship>  >>(m.attr("RWStepBasic_RWGroupRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWGroupRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_GroupRelationship> &  ) const) static_cast<void (RWStepBasic_RWGroupRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_GroupRelationship> &  ) const>(&RWStepBasic_RWGroupRelationship::ReadStep),
             R"#(Reads GroupRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWGroupRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_GroupRelationship> &  ) const) static_cast<void (RWStepBasic_RWGroupRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_GroupRelationship> &  ) const>(&RWStepBasic_RWGroupRelationship::WriteStep),
             R"#(Writes GroupRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWGroupRelationship::*)( const opencascade::handle<StepBasic_GroupRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWGroupRelationship::*)( const opencascade::handle<StepBasic_GroupRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWGroupRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWIdentificationAssignment , shared_ptr<RWStepBasic_RWIdentificationAssignment>  >>(m.attr("RWStepBasic_RWIdentificationAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWIdentificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_IdentificationAssignment> &  ) const) static_cast<void (RWStepBasic_RWIdentificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_IdentificationAssignment> &  ) const>(&RWStepBasic_RWIdentificationAssignment::ReadStep),
             R"#(Reads IdentificationAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWIdentificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_IdentificationAssignment> &  ) const) static_cast<void (RWStepBasic_RWIdentificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_IdentificationAssignment> &  ) const>(&RWStepBasic_RWIdentificationAssignment::WriteStep),
             R"#(Writes IdentificationAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWIdentificationAssignment::*)( const opencascade::handle<StepBasic_IdentificationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWIdentificationAssignment::*)( const opencascade::handle<StepBasic_IdentificationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWIdentificationAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWIdentificationRole , shared_ptr<RWStepBasic_RWIdentificationRole>  >>(m.attr("RWStepBasic_RWIdentificationRole"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWIdentificationRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_IdentificationRole> &  ) const) static_cast<void (RWStepBasic_RWIdentificationRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_IdentificationRole> &  ) const>(&RWStepBasic_RWIdentificationRole::ReadStep),
             R"#(Reads IdentificationRole)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWIdentificationRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_IdentificationRole> &  ) const) static_cast<void (RWStepBasic_RWIdentificationRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_IdentificationRole> &  ) const>(&RWStepBasic_RWIdentificationRole::WriteStep),
             R"#(Writes IdentificationRole)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWIdentificationRole::*)( const opencascade::handle<StepBasic_IdentificationRole> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWIdentificationRole::*)( const opencascade::handle<StepBasic_IdentificationRole> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWIdentificationRole::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWLengthMeasureWithUnit , shared_ptr<RWStepBasic_RWLengthMeasureWithUnit>  >>(m.attr("RWStepBasic_RWLengthMeasureWithUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWLengthMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_LengthMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWLengthMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_LengthMeasureWithUnit> &  ) const>(&RWStepBasic_RWLengthMeasureWithUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWLengthMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_LengthMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWLengthMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_LengthMeasureWithUnit> &  ) const>(&RWStepBasic_RWLengthMeasureWithUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWLengthMeasureWithUnit::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWLengthMeasureWithUnit::*)( const opencascade::handle<StepBasic_LengthMeasureWithUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWLengthMeasureWithUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWLengthUnit , shared_ptr<RWStepBasic_RWLengthUnit>  >>(m.attr("RWStepBasic_RWLengthUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWLengthUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_LengthUnit> &  ) const) static_cast<void (RWStepBasic_RWLengthUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_LengthUnit> &  ) const>(&RWStepBasic_RWLengthUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWLengthUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_LengthUnit> &  ) const) static_cast<void (RWStepBasic_RWLengthUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_LengthUnit> &  ) const>(&RWStepBasic_RWLengthUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWLengthUnit::*)( const opencascade::handle<StepBasic_LengthUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWLengthUnit::*)( const opencascade::handle<StepBasic_LengthUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWLengthUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWLocalTime , shared_ptr<RWStepBasic_RWLocalTime>  >>(m.attr("RWStepBasic_RWLocalTime"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWLocalTime::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_LocalTime> &  ) const) static_cast<void (RWStepBasic_RWLocalTime::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_LocalTime> &  ) const>(&RWStepBasic_RWLocalTime::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWLocalTime::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_LocalTime> &  ) const) static_cast<void (RWStepBasic_RWLocalTime::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_LocalTime> &  ) const>(&RWStepBasic_RWLocalTime::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWLocalTime::*)( const opencascade::handle<StepBasic_LocalTime> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWLocalTime::*)( const opencascade::handle<StepBasic_LocalTime> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWLocalTime::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWMassMeasureWithUnit , shared_ptr<RWStepBasic_RWMassMeasureWithUnit>  >>(m.attr("RWStepBasic_RWMassMeasureWithUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWMassMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_MassMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWMassMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_MassMeasureWithUnit> &  ) const>(&RWStepBasic_RWMassMeasureWithUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWMassMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_MassMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWMassMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_MassMeasureWithUnit> &  ) const>(&RWStepBasic_RWMassMeasureWithUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWMassMeasureWithUnit::*)( const opencascade::handle<StepBasic_MassMeasureWithUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWMassMeasureWithUnit::*)( const opencascade::handle<StepBasic_MassMeasureWithUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWMassMeasureWithUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWMassUnit , shared_ptr<RWStepBasic_RWMassUnit>  >>(m.attr("RWStepBasic_RWMassUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWMassUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_MassUnit> &  ) const) static_cast<void (RWStepBasic_RWMassUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_MassUnit> &  ) const>(&RWStepBasic_RWMassUnit::ReadStep),
             R"#(Reads MassUnit)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWMassUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_MassUnit> &  ) const) static_cast<void (RWStepBasic_RWMassUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_MassUnit> &  ) const>(&RWStepBasic_RWMassUnit::WriteStep),
             R"#(Writes MassUnit)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWMassUnit::*)( const opencascade::handle<StepBasic_MassUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWMassUnit::*)( const opencascade::handle<StepBasic_MassUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWMassUnit::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWMeasureWithUnit , shared_ptr<RWStepBasic_RWMeasureWithUnit>  >>(m.attr("RWStepBasic_RWMeasureWithUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) const>(&RWStepBasic_RWMeasureWithUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_MeasureWithUnit> &  ) const>(&RWStepBasic_RWMeasureWithUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWMeasureWithUnit::*)( const opencascade::handle<StepBasic_MeasureWithUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWMeasureWithUnit::*)( const opencascade::handle<StepBasic_MeasureWithUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWMeasureWithUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWMechanicalContext , shared_ptr<RWStepBasic_RWMechanicalContext>  >>(m.attr("RWStepBasic_RWMechanicalContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWMechanicalContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_MechanicalContext> &  ) const) static_cast<void (RWStepBasic_RWMechanicalContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_MechanicalContext> &  ) const>(&RWStepBasic_RWMechanicalContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWMechanicalContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_MechanicalContext> &  ) const) static_cast<void (RWStepBasic_RWMechanicalContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_MechanicalContext> &  ) const>(&RWStepBasic_RWMechanicalContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWMechanicalContext::*)( const opencascade::handle<StepBasic_MechanicalContext> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWMechanicalContext::*)( const opencascade::handle<StepBasic_MechanicalContext> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWMechanicalContext::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWNameAssignment , shared_ptr<RWStepBasic_RWNameAssignment>  >>(m.attr("RWStepBasic_RWNameAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWNameAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_NameAssignment> &  ) const) static_cast<void (RWStepBasic_RWNameAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_NameAssignment> &  ) const>(&RWStepBasic_RWNameAssignment::ReadStep),
             R"#(Reads NameAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWNameAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_NameAssignment> &  ) const) static_cast<void (RWStepBasic_RWNameAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_NameAssignment> &  ) const>(&RWStepBasic_RWNameAssignment::WriteStep),
             R"#(Writes NameAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWNameAssignment::*)( const opencascade::handle<StepBasic_NameAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWNameAssignment::*)( const opencascade::handle<StepBasic_NameAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWNameAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWNamedUnit , shared_ptr<RWStepBasic_RWNamedUnit>  >>(m.attr("RWStepBasic_RWNamedUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWNamedUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_NamedUnit> &  ) const) static_cast<void (RWStepBasic_RWNamedUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_NamedUnit> &  ) const>(&RWStepBasic_RWNamedUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWNamedUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_NamedUnit> &  ) const) static_cast<void (RWStepBasic_RWNamedUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_NamedUnit> &  ) const>(&RWStepBasic_RWNamedUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWNamedUnit::*)( const opencascade::handle<StepBasic_NamedUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWNamedUnit::*)( const opencascade::handle<StepBasic_NamedUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWNamedUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWObjectRole , shared_ptr<RWStepBasic_RWObjectRole>  >>(m.attr("RWStepBasic_RWObjectRole"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWObjectRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ObjectRole> &  ) const) static_cast<void (RWStepBasic_RWObjectRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ObjectRole> &  ) const>(&RWStepBasic_RWObjectRole::ReadStep),
             R"#(Reads ObjectRole)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWObjectRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ObjectRole> &  ) const) static_cast<void (RWStepBasic_RWObjectRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ObjectRole> &  ) const>(&RWStepBasic_RWObjectRole::WriteStep),
             R"#(Writes ObjectRole)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWObjectRole::*)( const opencascade::handle<StepBasic_ObjectRole> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWObjectRole::*)( const opencascade::handle<StepBasic_ObjectRole> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWObjectRole::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWOrdinalDate , shared_ptr<RWStepBasic_RWOrdinalDate>  >>(m.attr("RWStepBasic_RWOrdinalDate"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWOrdinalDate::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_OrdinalDate> &  ) const) static_cast<void (RWStepBasic_RWOrdinalDate::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_OrdinalDate> &  ) const>(&RWStepBasic_RWOrdinalDate::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWOrdinalDate::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_OrdinalDate> &  ) const) static_cast<void (RWStepBasic_RWOrdinalDate::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_OrdinalDate> &  ) const>(&RWStepBasic_RWOrdinalDate::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWOrganization , shared_ptr<RWStepBasic_RWOrganization>  >>(m.attr("RWStepBasic_RWOrganization"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWOrganization::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Organization> &  ) const) static_cast<void (RWStepBasic_RWOrganization::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Organization> &  ) const>(&RWStepBasic_RWOrganization::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWOrganization::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Organization> &  ) const) static_cast<void (RWStepBasic_RWOrganization::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Organization> &  ) const>(&RWStepBasic_RWOrganization::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWOrganizationRole , shared_ptr<RWStepBasic_RWOrganizationRole>  >>(m.attr("RWStepBasic_RWOrganizationRole"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWOrganizationRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_OrganizationRole> &  ) const) static_cast<void (RWStepBasic_RWOrganizationRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_OrganizationRole> &  ) const>(&RWStepBasic_RWOrganizationRole::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWOrganizationRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_OrganizationRole> &  ) const) static_cast<void (RWStepBasic_RWOrganizationRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_OrganizationRole> &  ) const>(&RWStepBasic_RWOrganizationRole::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWOrganizationalAddress , shared_ptr<RWStepBasic_RWOrganizationalAddress>  >>(m.attr("RWStepBasic_RWOrganizationalAddress"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWOrganizationalAddress::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_OrganizationalAddress> &  ) const) static_cast<void (RWStepBasic_RWOrganizationalAddress::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_OrganizationalAddress> &  ) const>(&RWStepBasic_RWOrganizationalAddress::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWOrganizationalAddress::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_OrganizationalAddress> &  ) const) static_cast<void (RWStepBasic_RWOrganizationalAddress::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_OrganizationalAddress> &  ) const>(&RWStepBasic_RWOrganizationalAddress::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWOrganizationalAddress::*)( const opencascade::handle<StepBasic_OrganizationalAddress> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWOrganizationalAddress::*)( const opencascade::handle<StepBasic_OrganizationalAddress> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWOrganizationalAddress::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPerson , shared_ptr<RWStepBasic_RWPerson>  >>(m.attr("RWStepBasic_RWPerson"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWPerson::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Person> &  ) const) static_cast<void (RWStepBasic_RWPerson::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Person> &  ) const>(&RWStepBasic_RWPerson::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWPerson::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Person> &  ) const) static_cast<void (RWStepBasic_RWPerson::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Person> &  ) const>(&RWStepBasic_RWPerson::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPersonAndOrganization , shared_ptr<RWStepBasic_RWPersonAndOrganization>  >>(m.attr("RWStepBasic_RWPersonAndOrganization"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWPersonAndOrganization::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_PersonAndOrganization> &  ) const) static_cast<void (RWStepBasic_RWPersonAndOrganization::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_PersonAndOrganization> &  ) const>(&RWStepBasic_RWPersonAndOrganization::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWPersonAndOrganization::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_PersonAndOrganization> &  ) const) static_cast<void (RWStepBasic_RWPersonAndOrganization::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_PersonAndOrganization> &  ) const>(&RWStepBasic_RWPersonAndOrganization::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWPersonAndOrganization::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWPersonAndOrganization::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWPersonAndOrganization::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPersonAndOrganizationRole , shared_ptr<RWStepBasic_RWPersonAndOrganizationRole>  >>(m.attr("RWStepBasic_RWPersonAndOrganizationRole"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWPersonAndOrganizationRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> &  ) const) static_cast<void (RWStepBasic_RWPersonAndOrganizationRole::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> &  ) const>(&RWStepBasic_RWPersonAndOrganizationRole::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWPersonAndOrganizationRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> &  ) const) static_cast<void (RWStepBasic_RWPersonAndOrganizationRole::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> &  ) const>(&RWStepBasic_RWPersonAndOrganizationRole::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPersonalAddress , shared_ptr<RWStepBasic_RWPersonalAddress>  >>(m.attr("RWStepBasic_RWPersonalAddress"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWPersonalAddress::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_PersonalAddress> &  ) const) static_cast<void (RWStepBasic_RWPersonalAddress::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_PersonalAddress> &  ) const>(&RWStepBasic_RWPersonalAddress::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWPersonalAddress::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_PersonalAddress> &  ) const) static_cast<void (RWStepBasic_RWPersonalAddress::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_PersonalAddress> &  ) const>(&RWStepBasic_RWPersonalAddress::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWPersonalAddress::*)( const opencascade::handle<StepBasic_PersonalAddress> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWPersonalAddress::*)( const opencascade::handle<StepBasic_PersonalAddress> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWPersonalAddress::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPlaneAngleMeasureWithUnit , shared_ptr<RWStepBasic_RWPlaneAngleMeasureWithUnit>  >>(m.attr("RWStepBasic_RWPlaneAngleMeasureWithUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWPlaneAngleMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWPlaneAngleMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> &  ) const>(&RWStepBasic_RWPlaneAngleMeasureWithUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWPlaneAngleMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWPlaneAngleMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> &  ) const>(&RWStepBasic_RWPlaneAngleMeasureWithUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWPlaneAngleMeasureWithUnit::*)( const opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWPlaneAngleMeasureWithUnit::*)( const opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWPlaneAngleMeasureWithUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPlaneAngleUnit , shared_ptr<RWStepBasic_RWPlaneAngleUnit>  >>(m.attr("RWStepBasic_RWPlaneAngleUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWPlaneAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_PlaneAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWPlaneAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_PlaneAngleUnit> &  ) const>(&RWStepBasic_RWPlaneAngleUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWPlaneAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_PlaneAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWPlaneAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_PlaneAngleUnit> &  ) const>(&RWStepBasic_RWPlaneAngleUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWPlaneAngleUnit::*)( const opencascade::handle<StepBasic_PlaneAngleUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWPlaneAngleUnit::*)( const opencascade::handle<StepBasic_PlaneAngleUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWPlaneAngleUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProduct , shared_ptr<RWStepBasic_RWProduct>  >>(m.attr("RWStepBasic_RWProduct"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProduct::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Product> &  ) const) static_cast<void (RWStepBasic_RWProduct::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_Product> &  ) const>(&RWStepBasic_RWProduct::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProduct::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Product> &  ) const) static_cast<void (RWStepBasic_RWProduct::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_Product> &  ) const>(&RWStepBasic_RWProduct::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProduct::*)( const opencascade::handle<StepBasic_Product> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProduct::*)( const opencascade::handle<StepBasic_Product> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProduct::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductCategory , shared_ptr<RWStepBasic_RWProductCategory>  >>(m.attr("RWStepBasic_RWProductCategory"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductCategory::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductCategory> &  ) const) static_cast<void (RWStepBasic_RWProductCategory::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductCategory> &  ) const>(&RWStepBasic_RWProductCategory::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductCategory::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductCategory> &  ) const) static_cast<void (RWStepBasic_RWProductCategory::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductCategory> &  ) const>(&RWStepBasic_RWProductCategory::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductCategoryRelationship , shared_ptr<RWStepBasic_RWProductCategoryRelationship>  >>(m.attr("RWStepBasic_RWProductCategoryRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductCategoryRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductCategoryRelationship> &  ) const) static_cast<void (RWStepBasic_RWProductCategoryRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductCategoryRelationship> &  ) const>(&RWStepBasic_RWProductCategoryRelationship::ReadStep),
             R"#(Reads ProductCategoryRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductCategoryRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductCategoryRelationship> &  ) const) static_cast<void (RWStepBasic_RWProductCategoryRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductCategoryRelationship> &  ) const>(&RWStepBasic_RWProductCategoryRelationship::WriteStep),
             R"#(Writes ProductCategoryRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductCategoryRelationship::*)( const opencascade::handle<StepBasic_ProductCategoryRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductCategoryRelationship::*)( const opencascade::handle<StepBasic_ProductCategoryRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductCategoryRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductConceptContext , shared_ptr<RWStepBasic_RWProductConceptContext>  >>(m.attr("RWStepBasic_RWProductConceptContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductConceptContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductConceptContext> &  ) const) static_cast<void (RWStepBasic_RWProductConceptContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductConceptContext> &  ) const>(&RWStepBasic_RWProductConceptContext::ReadStep),
             R"#(Reads ProductConceptContext)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductConceptContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductConceptContext> &  ) const) static_cast<void (RWStepBasic_RWProductConceptContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductConceptContext> &  ) const>(&RWStepBasic_RWProductConceptContext::WriteStep),
             R"#(Writes ProductConceptContext)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductConceptContext::*)( const opencascade::handle<StepBasic_ProductConceptContext> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductConceptContext::*)( const opencascade::handle<StepBasic_ProductConceptContext> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductConceptContext::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductContext , shared_ptr<RWStepBasic_RWProductContext>  >>(m.attr("RWStepBasic_RWProductContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductContext> &  ) const) static_cast<void (RWStepBasic_RWProductContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductContext> &  ) const>(&RWStepBasic_RWProductContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductContext> &  ) const) static_cast<void (RWStepBasic_RWProductContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductContext> &  ) const>(&RWStepBasic_RWProductContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductContext::*)( const opencascade::handle<StepBasic_ProductContext> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductContext::*)( const opencascade::handle<StepBasic_ProductContext> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductContext::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinition , shared_ptr<RWStepBasic_RWProductDefinition>  >>(m.attr("RWStepBasic_RWProductDefinition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductDefinition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinition> &  ) const) static_cast<void (RWStepBasic_RWProductDefinition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinition> &  ) const>(&RWStepBasic_RWProductDefinition::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductDefinition::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinition> &  ) const) static_cast<void (RWStepBasic_RWProductDefinition::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinition> &  ) const>(&RWStepBasic_RWProductDefinition::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductDefinition::*)( const opencascade::handle<StepBasic_ProductDefinition> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductDefinition::*)( const opencascade::handle<StepBasic_ProductDefinition> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductDefinition::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionContext , shared_ptr<RWStepBasic_RWProductDefinitionContext>  >>(m.attr("RWStepBasic_RWProductDefinitionContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductDefinitionContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionContext> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionContext> &  ) const>(&RWStepBasic_RWProductDefinitionContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductDefinitionContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionContext> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionContext> &  ) const>(&RWStepBasic_RWProductDefinitionContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductDefinitionContext::*)( const opencascade::handle<StepBasic_ProductDefinitionContext> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionContext::*)( const opencascade::handle<StepBasic_ProductDefinitionContext> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductDefinitionContext::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionEffectivity , shared_ptr<RWStepBasic_RWProductDefinitionEffectivity>  >>(m.attr("RWStepBasic_RWProductDefinitionEffectivity"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductDefinitionEffectivity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionEffectivity> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionEffectivity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionEffectivity> &  ) const>(&RWStepBasic_RWProductDefinitionEffectivity::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductDefinitionEffectivity::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionEffectivity> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionEffectivity::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionEffectivity> &  ) const>(&RWStepBasic_RWProductDefinitionEffectivity::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductDefinitionEffectivity::*)( const opencascade::handle<StepBasic_ProductDefinitionEffectivity> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionEffectivity::*)( const opencascade::handle<StepBasic_ProductDefinitionEffectivity> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductDefinitionEffectivity::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionFormation , shared_ptr<RWStepBasic_RWProductDefinitionFormation>  >>(m.attr("RWStepBasic_RWProductDefinitionFormation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductDefinitionFormation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionFormation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) const>(&RWStepBasic_RWProductDefinitionFormation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductDefinitionFormation::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionFormation::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionFormation> &  ) const>(&RWStepBasic_RWProductDefinitionFormation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductDefinitionFormation::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionFormation::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductDefinitionFormation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionFormationRelationship , shared_ptr<RWStepBasic_RWProductDefinitionFormationRelationship>  >>(m.attr("RWStepBasic_RWProductDefinitionFormationRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductDefinitionFormationRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormationRelationship> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionFormationRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormationRelationship> &  ) const>(&RWStepBasic_RWProductDefinitionFormationRelationship::ReadStep),
             R"#(Reads ProductDefinitionFormationRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductDefinitionFormationRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionFormationRelationship> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionFormationRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionFormationRelationship> &  ) const>(&RWStepBasic_RWProductDefinitionFormationRelationship::WriteStep),
             R"#(Writes ProductDefinitionFormationRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductDefinitionFormationRelationship::*)( const opencascade::handle<StepBasic_ProductDefinitionFormationRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionFormationRelationship::*)( const opencascade::handle<StepBasic_ProductDefinitionFormationRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductDefinitionFormationRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource , shared_ptr<RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource>  >>(m.attr("RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormationWithSpecifiedSource> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionFormationWithSpecifiedSource> &  ) const>(&RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionFormationWithSpecifiedSource> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionFormationWithSpecifiedSource> &  ) const>(&RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource::*)( const opencascade::handle<StepBasic_ProductDefinitionFormationWithSpecifiedSource> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource::*)( const opencascade::handle<StepBasic_ProductDefinitionFormationWithSpecifiedSource> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionReference , shared_ptr<RWStepBasic_RWProductDefinitionReference>  >>(m.attr("RWStepBasic_RWProductDefinitionReference"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductDefinitionReference::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionReference> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionReference::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionReference> &  ) const>(&RWStepBasic_RWProductDefinitionReference::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductDefinitionReference::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionReference> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionReference::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionReference> &  ) const>(&RWStepBasic_RWProductDefinitionReference::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductDefinitionReference::*)( const opencascade::handle<StepBasic_ProductDefinitionReference> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionReference::*)( const opencascade::handle<StepBasic_ProductDefinitionReference> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductDefinitionReference::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation , shared_ptr<RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation>  >>(m.attr("RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation> &  ) const>(&RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation> &  ) const>(&RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation::*)( const opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation::*)( const opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionRelationship , shared_ptr<RWStepBasic_RWProductDefinitionRelationship>  >>(m.attr("RWStepBasic_RWProductDefinitionRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductDefinitionRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionRelationship> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionRelationship> &  ) const>(&RWStepBasic_RWProductDefinitionRelationship::ReadStep),
             R"#(Reads ProductDefinitionRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductDefinitionRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionRelationship> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionRelationship> &  ) const>(&RWStepBasic_RWProductDefinitionRelationship::WriteStep),
             R"#(Writes ProductDefinitionRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductDefinitionRelationship::*)( const opencascade::handle<StepBasic_ProductDefinitionRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionRelationship::*)( const opencascade::handle<StepBasic_ProductDefinitionRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductDefinitionRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionWithAssociatedDocuments , shared_ptr<RWStepBasic_RWProductDefinitionWithAssociatedDocuments>  >>(m.attr("RWStepBasic_RWProductDefinitionWithAssociatedDocuments"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductDefinitionWithAssociatedDocuments::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionWithAssociatedDocuments::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> &  ) const>(&RWStepBasic_RWProductDefinitionWithAssociatedDocuments::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductDefinitionWithAssociatedDocuments::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionWithAssociatedDocuments::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> &  ) const>(&RWStepBasic_RWProductDefinitionWithAssociatedDocuments::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductDefinitionWithAssociatedDocuments::*)( const opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductDefinitionWithAssociatedDocuments::*)( const opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductDefinitionWithAssociatedDocuments::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductRelatedProductCategory , shared_ptr<RWStepBasic_RWProductRelatedProductCategory>  >>(m.attr("RWStepBasic_RWProductRelatedProductCategory"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductRelatedProductCategory::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductRelatedProductCategory> &  ) const) static_cast<void (RWStepBasic_RWProductRelatedProductCategory::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductRelatedProductCategory> &  ) const>(&RWStepBasic_RWProductRelatedProductCategory::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductRelatedProductCategory::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductRelatedProductCategory> &  ) const) static_cast<void (RWStepBasic_RWProductRelatedProductCategory::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductRelatedProductCategory> &  ) const>(&RWStepBasic_RWProductRelatedProductCategory::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductRelatedProductCategory::*)( const opencascade::handle<StepBasic_ProductRelatedProductCategory> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductRelatedProductCategory::*)( const opencascade::handle<StepBasic_ProductRelatedProductCategory> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductRelatedProductCategory::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductType , shared_ptr<RWStepBasic_RWProductType>  >>(m.attr("RWStepBasic_RWProductType"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWProductType::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductType> &  ) const) static_cast<void (RWStepBasic_RWProductType::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ProductType> &  ) const>(&RWStepBasic_RWProductType::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWProductType::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductType> &  ) const) static_cast<void (RWStepBasic_RWProductType::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ProductType> &  ) const>(&RWStepBasic_RWProductType::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWProductType::*)( const opencascade::handle<StepBasic_ProductType> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWProductType::*)( const opencascade::handle<StepBasic_ProductType> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWProductType::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWRatioMeasureWithUnit , shared_ptr<RWStepBasic_RWRatioMeasureWithUnit>  >>(m.attr("RWStepBasic_RWRatioMeasureWithUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWRatioMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_RatioMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWRatioMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_RatioMeasureWithUnit> &  ) const>(&RWStepBasic_RWRatioMeasureWithUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWRatioMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_RatioMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWRatioMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_RatioMeasureWithUnit> &  ) const>(&RWStepBasic_RWRatioMeasureWithUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWRatioMeasureWithUnit::*)( const opencascade::handle<StepBasic_RatioMeasureWithUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWRatioMeasureWithUnit::*)( const opencascade::handle<StepBasic_RatioMeasureWithUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWRatioMeasureWithUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWRoleAssociation , shared_ptr<RWStepBasic_RWRoleAssociation>  >>(m.attr("RWStepBasic_RWRoleAssociation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWRoleAssociation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_RoleAssociation> &  ) const) static_cast<void (RWStepBasic_RWRoleAssociation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_RoleAssociation> &  ) const>(&RWStepBasic_RWRoleAssociation::ReadStep),
             R"#(Reads RoleAssociation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWRoleAssociation::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_RoleAssociation> &  ) const) static_cast<void (RWStepBasic_RWRoleAssociation::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_RoleAssociation> &  ) const>(&RWStepBasic_RWRoleAssociation::WriteStep),
             R"#(Writes RoleAssociation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWRoleAssociation::*)( const opencascade::handle<StepBasic_RoleAssociation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWRoleAssociation::*)( const opencascade::handle<StepBasic_RoleAssociation> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWRoleAssociation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSecurityClassification , shared_ptr<RWStepBasic_RWSecurityClassification>  >>(m.attr("RWStepBasic_RWSecurityClassification"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSecurityClassification::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SecurityClassification> &  ) const) static_cast<void (RWStepBasic_RWSecurityClassification::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SecurityClassification> &  ) const>(&RWStepBasic_RWSecurityClassification::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSecurityClassification::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SecurityClassification> &  ) const) static_cast<void (RWStepBasic_RWSecurityClassification::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SecurityClassification> &  ) const>(&RWStepBasic_RWSecurityClassification::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWSecurityClassification::*)( const opencascade::handle<StepBasic_SecurityClassification> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWSecurityClassification::*)( const opencascade::handle<StepBasic_SecurityClassification> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWSecurityClassification::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSecurityClassificationLevel , shared_ptr<RWStepBasic_RWSecurityClassificationLevel>  >>(m.attr("RWStepBasic_RWSecurityClassificationLevel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSecurityClassificationLevel::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SecurityClassificationLevel> &  ) const) static_cast<void (RWStepBasic_RWSecurityClassificationLevel::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SecurityClassificationLevel> &  ) const>(&RWStepBasic_RWSecurityClassificationLevel::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSecurityClassificationLevel::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SecurityClassificationLevel> &  ) const) static_cast<void (RWStepBasic_RWSecurityClassificationLevel::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SecurityClassificationLevel> &  ) const>(&RWStepBasic_RWSecurityClassificationLevel::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnit , shared_ptr<RWStepBasic_RWSiUnit>  >>(m.attr("RWStepBasic_RWSiUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSiUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnit> &  ) const>(&RWStepBasic_RWSiUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSiUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnit> &  ) const>(&RWStepBasic_RWSiUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("DecodePrefix",
             (Standard_Boolean (RWStepBasic_RWSiUnit::*)( StepBasic_SiPrefix & ,  const Standard_CString  ) const) static_cast<Standard_Boolean (RWStepBasic_RWSiUnit::*)( StepBasic_SiPrefix & ,  const Standard_CString  ) const>(&RWStepBasic_RWSiUnit::DecodePrefix),
             R"#(None)#"  , py::arg("aPrefix"),  py::arg("text"))
        .def("DecodeName",
             (Standard_Boolean (RWStepBasic_RWSiUnit::*)( StepBasic_SiUnitName & ,  const Standard_CString  ) const) static_cast<Standard_Boolean (RWStepBasic_RWSiUnit::*)( StepBasic_SiUnitName & ,  const Standard_CString  ) const>(&RWStepBasic_RWSiUnit::DecodeName),
             R"#(None)#"  , py::arg("aName"),  py::arg("text"))
        .def("EncodePrefix",
             (TCollection_AsciiString (RWStepBasic_RWSiUnit::*)( const StepBasic_SiPrefix  ) const) static_cast<TCollection_AsciiString (RWStepBasic_RWSiUnit::*)( const StepBasic_SiPrefix  ) const>(&RWStepBasic_RWSiUnit::EncodePrefix),
             R"#(None)#"  , py::arg("aPrefix"))
        .def("EncodeName",
             (TCollection_AsciiString (RWStepBasic_RWSiUnit::*)( const StepBasic_SiUnitName  ) const) static_cast<TCollection_AsciiString (RWStepBasic_RWSiUnit::*)( const StepBasic_SiUnitName  ) const>(&RWStepBasic_RWSiUnit::EncodeName),
             R"#(None)#"  , py::arg("aName"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndAreaUnit , shared_ptr<RWStepBasic_RWSiUnitAndAreaUnit>  >>(m.attr("RWStepBasic_RWSiUnitAndAreaUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSiUnitAndAreaUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndAreaUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndAreaUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndAreaUnit> &  ) const>(&RWStepBasic_RWSiUnitAndAreaUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSiUnitAndAreaUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndAreaUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndAreaUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndAreaUnit> &  ) const>(&RWStepBasic_RWSiUnitAndAreaUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndLengthUnit , shared_ptr<RWStepBasic_RWSiUnitAndLengthUnit>  >>(m.attr("RWStepBasic_RWSiUnitAndLengthUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSiUnitAndLengthUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndLengthUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndLengthUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndLengthUnit> &  ) const>(&RWStepBasic_RWSiUnitAndLengthUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSiUnitAndLengthUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndLengthUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndLengthUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndLengthUnit> &  ) const>(&RWStepBasic_RWSiUnitAndLengthUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndMassUnit , shared_ptr<RWStepBasic_RWSiUnitAndMassUnit>  >>(m.attr("RWStepBasic_RWSiUnitAndMassUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSiUnitAndMassUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndMassUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndMassUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndMassUnit> &  ) const>(&RWStepBasic_RWSiUnitAndMassUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSiUnitAndMassUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndMassUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndMassUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndMassUnit> &  ) const>(&RWStepBasic_RWSiUnitAndMassUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndPlaneAngleUnit , shared_ptr<RWStepBasic_RWSiUnitAndPlaneAngleUnit>  >>(m.attr("RWStepBasic_RWSiUnitAndPlaneAngleUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSiUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndPlaneAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndPlaneAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndPlaneAngleUnit> &  ) const>(&RWStepBasic_RWSiUnitAndPlaneAngleUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSiUnitAndPlaneAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndPlaneAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndPlaneAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndPlaneAngleUnit> &  ) const>(&RWStepBasic_RWSiUnitAndPlaneAngleUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndRatioUnit , shared_ptr<RWStepBasic_RWSiUnitAndRatioUnit>  >>(m.attr("RWStepBasic_RWSiUnitAndRatioUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSiUnitAndRatioUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndRatioUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndRatioUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndRatioUnit> &  ) const>(&RWStepBasic_RWSiUnitAndRatioUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSiUnitAndRatioUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndRatioUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndRatioUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndRatioUnit> &  ) const>(&RWStepBasic_RWSiUnitAndRatioUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndSolidAngleUnit , shared_ptr<RWStepBasic_RWSiUnitAndSolidAngleUnit>  >>(m.attr("RWStepBasic_RWSiUnitAndSolidAngleUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSiUnitAndSolidAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndSolidAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndSolidAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndSolidAngleUnit> &  ) const>(&RWStepBasic_RWSiUnitAndSolidAngleUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSiUnitAndSolidAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndSolidAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndSolidAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndSolidAngleUnit> &  ) const>(&RWStepBasic_RWSiUnitAndSolidAngleUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit , shared_ptr<RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit>  >>(m.attr("RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndThermodynamicTemperatureUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndThermodynamicTemperatureUnit> &  ) const>(&RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndThermodynamicTemperatureUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndThermodynamicTemperatureUnit> &  ) const>(&RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndTimeUnit , shared_ptr<RWStepBasic_RWSiUnitAndTimeUnit>  >>(m.attr("RWStepBasic_RWSiUnitAndTimeUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSiUnitAndTimeUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndTimeUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndTimeUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndTimeUnit> &  ) const>(&RWStepBasic_RWSiUnitAndTimeUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSiUnitAndTimeUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndTimeUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndTimeUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndTimeUnit> &  ) const>(&RWStepBasic_RWSiUnitAndTimeUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndVolumeUnit , shared_ptr<RWStepBasic_RWSiUnitAndVolumeUnit>  >>(m.attr("RWStepBasic_RWSiUnitAndVolumeUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSiUnitAndVolumeUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndVolumeUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndVolumeUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SiUnitAndVolumeUnit> &  ) const>(&RWStepBasic_RWSiUnitAndVolumeUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSiUnitAndVolumeUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndVolumeUnit> &  ) const) static_cast<void (RWStepBasic_RWSiUnitAndVolumeUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SiUnitAndVolumeUnit> &  ) const>(&RWStepBasic_RWSiUnitAndVolumeUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSolidAngleMeasureWithUnit , shared_ptr<RWStepBasic_RWSolidAngleMeasureWithUnit>  >>(m.attr("RWStepBasic_RWSolidAngleMeasureWithUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSolidAngleMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SolidAngleMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWSolidAngleMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SolidAngleMeasureWithUnit> &  ) const>(&RWStepBasic_RWSolidAngleMeasureWithUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSolidAngleMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SolidAngleMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWSolidAngleMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SolidAngleMeasureWithUnit> &  ) const>(&RWStepBasic_RWSolidAngleMeasureWithUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWSolidAngleMeasureWithUnit::*)( const opencascade::handle<StepBasic_SolidAngleMeasureWithUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWSolidAngleMeasureWithUnit::*)( const opencascade::handle<StepBasic_SolidAngleMeasureWithUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWSolidAngleMeasureWithUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSolidAngleUnit , shared_ptr<RWStepBasic_RWSolidAngleUnit>  >>(m.attr("RWStepBasic_RWSolidAngleUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWSolidAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SolidAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWSolidAngleUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_SolidAngleUnit> &  ) const>(&RWStepBasic_RWSolidAngleUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWSolidAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SolidAngleUnit> &  ) const) static_cast<void (RWStepBasic_RWSolidAngleUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_SolidAngleUnit> &  ) const>(&RWStepBasic_RWSolidAngleUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWSolidAngleUnit::*)( const opencascade::handle<StepBasic_SolidAngleUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWSolidAngleUnit::*)( const opencascade::handle<StepBasic_SolidAngleUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWSolidAngleUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWThermodynamicTemperatureUnit , shared_ptr<RWStepBasic_RWThermodynamicTemperatureUnit>  >>(m.attr("RWStepBasic_RWThermodynamicTemperatureUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWThermodynamicTemperatureUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> &  ) const) static_cast<void (RWStepBasic_RWThermodynamicTemperatureUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> &  ) const>(&RWStepBasic_RWThermodynamicTemperatureUnit::ReadStep),
             R"#(Reads ThermodynamicTemperatureUnit)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWThermodynamicTemperatureUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> &  ) const) static_cast<void (RWStepBasic_RWThermodynamicTemperatureUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> &  ) const>(&RWStepBasic_RWThermodynamicTemperatureUnit::WriteStep),
             R"#(Writes ThermodynamicTemperatureUnit)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWThermodynamicTemperatureUnit::*)( const opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWThermodynamicTemperatureUnit::*)( const opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWThermodynamicTemperatureUnit::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWUncertaintyMeasureWithUnit , shared_ptr<RWStepBasic_RWUncertaintyMeasureWithUnit>  >>(m.attr("RWStepBasic_RWUncertaintyMeasureWithUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWUncertaintyMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWUncertaintyMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> &  ) const>(&RWStepBasic_RWUncertaintyMeasureWithUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWUncertaintyMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> &  ) const) static_cast<void (RWStepBasic_RWUncertaintyMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> &  ) const>(&RWStepBasic_RWUncertaintyMeasureWithUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWUncertaintyMeasureWithUnit::*)( const opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWUncertaintyMeasureWithUnit::*)( const opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWUncertaintyMeasureWithUnit::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWVersionedActionRequest , shared_ptr<RWStepBasic_RWVersionedActionRequest>  >>(m.attr("RWStepBasic_RWVersionedActionRequest"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWVersionedActionRequest::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_VersionedActionRequest> &  ) const) static_cast<void (RWStepBasic_RWVersionedActionRequest::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_VersionedActionRequest> &  ) const>(&RWStepBasic_RWVersionedActionRequest::ReadStep),
             R"#(Reads VersionedActionRequest)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWVersionedActionRequest::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_VersionedActionRequest> &  ) const) static_cast<void (RWStepBasic_RWVersionedActionRequest::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_VersionedActionRequest> &  ) const>(&RWStepBasic_RWVersionedActionRequest::WriteStep),
             R"#(Writes VersionedActionRequest)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepBasic_RWVersionedActionRequest::*)( const opencascade::handle<StepBasic_VersionedActionRequest> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepBasic_RWVersionedActionRequest::*)( const opencascade::handle<StepBasic_VersionedActionRequest> & ,  Interface_EntityIterator &  ) const>(&RWStepBasic_RWVersionedActionRequest::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWWeekOfYearAndDayDate , shared_ptr<RWStepBasic_RWWeekOfYearAndDayDate>  >>(m.attr("RWStepBasic_RWWeekOfYearAndDayDate"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepBasic_RWWeekOfYearAndDayDate::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_WeekOfYearAndDayDate> &  ) const) static_cast<void (RWStepBasic_RWWeekOfYearAndDayDate::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepBasic_WeekOfYearAndDayDate> &  ) const>(&RWStepBasic_RWWeekOfYearAndDayDate::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepBasic_RWWeekOfYearAndDayDate::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_WeekOfYearAndDayDate> &  ) const) static_cast<void (RWStepBasic_RWWeekOfYearAndDayDate::*)( StepData_StepWriter & ,  const opencascade::handle<StepBasic_WeekOfYearAndDayDate> &  ) const>(&RWStepBasic_RWWeekOfYearAndDayDate::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/RWStepBasic_RWActionRequestSolution.hxx
// ./opencascade/RWStepBasic_RWContractType.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit.hxx
// ./opencascade/RWStepBasic_RWDocumentFile.hxx
// ./opencascade/RWStepBasic_RWMechanicalContext.hxx
// ./opencascade/RWStepBasic_RWProductType.hxx
// ./opencascade/RWStepBasic_RWProductDefinition.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit.hxx
// ./opencascade/RWStepBasic_RWSolidAngleUnit.hxx
// ./opencascade/RWStepBasic_RWSecurityClassificationLevel.hxx
// ./opencascade/RWStepBasic_RWGroupRelationship.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndPlaneAngleUnit.hxx
// ./opencascade/RWStepBasic_RWOrdinalDate.hxx
// ./opencascade/RWStepBasic_RWSiUnit.hxx
// ./opencascade/RWStepBasic_RWExternallyDefinedItem.hxx
// ./opencascade/RWStepBasic_RWLocalTime.hxx
// ./opencascade/RWStepBasic_RWDerivedUnitElement.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionWithAssociatedDocuments.hxx
// ./opencascade/RWStepBasic_RWDocumentProductEquivalence.hxx
// ./opencascade/RWStepBasic_RWCertificationAssignment.hxx
// ./opencascade/RWStepBasic_RWMassUnit.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndAreaUnit.hxx
// ./opencascade/RWStepBasic_RWMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndSolidAngleUnit.hxx
// ./opencascade/RWStepBasic_RWApplicationProtocolDefinition.hxx
// ./opencascade/RWStepBasic_RWRatioMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWApprovalStatus.hxx
// ./opencascade/RWStepBasic_RWNameAssignment.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionRelationship.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionFormation.hxx
// ./opencascade/RWStepBasic_RWActionRequestAssignment.hxx
// ./opencascade/RWStepBasic_RWApprovalRelationship.hxx
// ./opencascade/RWStepBasic_RWThermodynamicTemperatureUnit.hxx
// ./opencascade/RWStepBasic_RWProductCategoryRelationship.hxx
// ./opencascade/RWStepBasic_RWDocumentRelationship.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndMassUnit.hxx
// ./opencascade/RWStepBasic_RWNamedUnit.hxx
// ./opencascade/RWStepBasic_RWDerivedUnit.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource.hxx
// ./opencascade/RWStepBasic_RWDocumentProductAssociation.hxx
// ./opencascade/RWStepBasic_RWPersonAndOrganizationRole.hxx
// ./opencascade/RWStepBasic_RWDocumentRepresentationType.hxx
// ./opencascade/RWStepBasic_RWVersionedActionRequest.hxx
// ./opencascade/RWStepBasic_RWWeekOfYearAndDayDate.hxx
// ./opencascade/RWStepBasic_RWApplicationContext.hxx
// ./opencascade/RWStepBasic_RWIdentificationRole.hxx
// ./opencascade/RWStepBasic_RWProductRelatedProductCategory.hxx
// ./opencascade/RWStepBasic_RWProductCategory.hxx
// ./opencascade/RWStepBasic_RWApproval.hxx
// ./opencascade/RWStepBasic_RWDateTimeRole.hxx
// ./opencascade/RWStepBasic_RWEulerAngles.hxx
// ./opencascade/RWStepBasic_RWGeneralProperty.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnit.hxx
// ./opencascade/RWStepBasic_RWActionMethod.hxx
// ./opencascade/RWStepBasic_RWAddress.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation.hxx
// ./opencascade/RWStepBasic_RWDocument.hxx
// ./opencascade/RWStepBasic_RWPersonalAddress.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionEffectivity.hxx
// ./opencascade/RWStepBasic_RWCharacterizedObject.hxx
// ./opencascade/RWStepBasic_RWUncertaintyMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWProductConceptContext.hxx
// ./opencascade/RWStepBasic_RWExternalSource.hxx
// ./opencascade/RWStepBasic_RWLengthMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWOrganizationalAddress.hxx
// ./opencascade/RWStepBasic_RWCoordinatedUniversalTimeOffset.hxx
// ./opencascade/RWStepBasic_RWApplicationContextElement.hxx
// ./opencascade/RWStepBasic_RWSecurityClassification.hxx
// ./opencascade/RWStepBasic_RWApprovalRole.hxx
// ./opencascade/RWStepBasic_RWAction.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndTimeUnit.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionReference.hxx
// ./opencascade/RWStepBasic_RWGroup.hxx
// ./opencascade/RWStepBasic_RWActionAssignment.hxx
// ./opencascade/RWStepBasic_RWContractAssignment.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndAreaUnit.hxx
// ./opencascade/RWStepBasic_RWMassMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndLengthUnit.hxx
// ./opencascade/RWStepBasic_RWEffectivity.hxx
// ./opencascade/RWStepBasic_RWDate.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndTimeUnit.hxx
// ./opencascade/RWStepBasic_RWApprovalPersonOrganization.hxx
// ./opencascade/RWStepBasic_RWLengthUnit.hxx
// ./opencascade/RWStepBasic_RWIdentificationAssignment.hxx
// ./opencascade/RWStepBasic_RWDateAndTime.hxx
// ./opencascade/RWStepBasic_RWExternalIdentificationAssignment.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndVolumeUnit.hxx
// ./opencascade/RWStepBasic_RWRoleAssociation.hxx
// ./opencascade/RWStepBasic_RWOrganizationRole.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionFormationRelationship.hxx
// ./opencascade/RWStepBasic_RWCertificationType.hxx
// ./opencascade/RWStepBasic_RWDocumentType.hxx
// ./opencascade/RWStepBasic_RWDimensionalExponents.hxx
// ./opencascade/RWStepBasic_RWObjectRole.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndRatioUnit.hxx
// ./opencascade/RWStepBasic_RWCalendarDate.hxx
// ./opencascade/RWStepBasic_RWDateRole.hxx
// ./opencascade/RWStepBasic_RWPerson.hxx
// ./opencascade/RWStepBasic_RWCertification.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndMassUnit.hxx
// ./opencascade/RWStepBasic_RWPersonAndOrganization.hxx
// ./opencascade/RWStepBasic_RWEffectivityAssignment.hxx
// ./opencascade/RWStepBasic_RWPlaneAngleUnit.hxx
// ./opencascade/RWStepBasic_RWGroupAssignment.hxx
// ./opencascade/RWStepBasic_RWApprovalDateTime.hxx
// ./opencascade/RWStepBasic_RWContract.hxx
// ./opencascade/RWStepBasic_RWSolidAngleMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndRatioUnit.hxx
// ./opencascade/RWStepBasic_RWPlaneAngleMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionContext.hxx
// ./opencascade/RWStepBasic_RWProduct.hxx
// ./opencascade/RWStepBasic_RWDocumentUsageConstraint.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndVolumeUnit.hxx
// ./opencascade/RWStepBasic_RWOrganization.hxx
// ./opencascade/RWStepBasic_RWProductContext.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndLengthUnit.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
