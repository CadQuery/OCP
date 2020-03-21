
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
void register_RWStepBasic(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepBasic"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepBasic_RWAction , shared_ptr<RWStepBasic_RWAction> >>(m.attr("RWStepBasic_RWAction"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWActionAssignment , shared_ptr<RWStepBasic_RWActionAssignment> >>(m.attr("RWStepBasic_RWActionAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWActionMethod , shared_ptr<RWStepBasic_RWActionMethod> >>(m.attr("RWStepBasic_RWActionMethod"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWActionRequestAssignment , shared_ptr<RWStepBasic_RWActionRequestAssignment> >>(m.attr("RWStepBasic_RWActionRequestAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWActionRequestSolution , shared_ptr<RWStepBasic_RWActionRequestSolution> >>(m.attr("RWStepBasic_RWActionRequestSolution"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWAddress , shared_ptr<RWStepBasic_RWAddress> >>(m.attr("RWStepBasic_RWAddress"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApplicationContext , shared_ptr<RWStepBasic_RWApplicationContext> >>(m.attr("RWStepBasic_RWApplicationContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApplicationContextElement , shared_ptr<RWStepBasic_RWApplicationContextElement> >>(m.attr("RWStepBasic_RWApplicationContextElement"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApplicationProtocolDefinition , shared_ptr<RWStepBasic_RWApplicationProtocolDefinition> >>(m.attr("RWStepBasic_RWApplicationProtocolDefinition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApproval , shared_ptr<RWStepBasic_RWApproval> >>(m.attr("RWStepBasic_RWApproval"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApprovalDateTime , shared_ptr<RWStepBasic_RWApprovalDateTime> >>(m.attr("RWStepBasic_RWApprovalDateTime"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApprovalPersonOrganization , shared_ptr<RWStepBasic_RWApprovalPersonOrganization> >>(m.attr("RWStepBasic_RWApprovalPersonOrganization"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApprovalRelationship , shared_ptr<RWStepBasic_RWApprovalRelationship> >>(m.attr("RWStepBasic_RWApprovalRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApprovalRole , shared_ptr<RWStepBasic_RWApprovalRole> >>(m.attr("RWStepBasic_RWApprovalRole"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWApprovalStatus , shared_ptr<RWStepBasic_RWApprovalStatus> >>(m.attr("RWStepBasic_RWApprovalStatus"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCalendarDate , shared_ptr<RWStepBasic_RWCalendarDate> >>(m.attr("RWStepBasic_RWCalendarDate"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCertification , shared_ptr<RWStepBasic_RWCertification> >>(m.attr("RWStepBasic_RWCertification"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCertificationAssignment , shared_ptr<RWStepBasic_RWCertificationAssignment> >>(m.attr("RWStepBasic_RWCertificationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCertificationType , shared_ptr<RWStepBasic_RWCertificationType> >>(m.attr("RWStepBasic_RWCertificationType"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCharacterizedObject , shared_ptr<RWStepBasic_RWCharacterizedObject> >>(m.attr("RWStepBasic_RWCharacterizedObject"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWContract , shared_ptr<RWStepBasic_RWContract> >>(m.attr("RWStepBasic_RWContract"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWContractAssignment , shared_ptr<RWStepBasic_RWContractAssignment> >>(m.attr("RWStepBasic_RWContractAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWContractType , shared_ptr<RWStepBasic_RWContractType> >>(m.attr("RWStepBasic_RWContractType"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnit , shared_ptr<RWStepBasic_RWConversionBasedUnit> >>(m.attr("RWStepBasic_RWConversionBasedUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndAreaUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndAreaUnit> >>(m.attr("RWStepBasic_RWConversionBasedUnitAndAreaUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndLengthUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndLengthUnit> >>(m.attr("RWStepBasic_RWConversionBasedUnitAndLengthUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndMassUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndMassUnit> >>(m.attr("RWStepBasic_RWConversionBasedUnitAndMassUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit> >>(m.attr("RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndRatioUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndRatioUnit> >>(m.attr("RWStepBasic_RWConversionBasedUnitAndRatioUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit> >>(m.attr("RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndTimeUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndTimeUnit> >>(m.attr("RWStepBasic_RWConversionBasedUnitAndTimeUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWConversionBasedUnitAndVolumeUnit , shared_ptr<RWStepBasic_RWConversionBasedUnitAndVolumeUnit> >>(m.attr("RWStepBasic_RWConversionBasedUnitAndVolumeUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWCoordinatedUniversalTimeOffset , shared_ptr<RWStepBasic_RWCoordinatedUniversalTimeOffset> >>(m.attr("RWStepBasic_RWCoordinatedUniversalTimeOffset"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDate , shared_ptr<RWStepBasic_RWDate> >>(m.attr("RWStepBasic_RWDate"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDateAndTime , shared_ptr<RWStepBasic_RWDateAndTime> >>(m.attr("RWStepBasic_RWDateAndTime"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDateRole , shared_ptr<RWStepBasic_RWDateRole> >>(m.attr("RWStepBasic_RWDateRole"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDateTimeRole , shared_ptr<RWStepBasic_RWDateTimeRole> >>(m.attr("RWStepBasic_RWDateTimeRole"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDerivedUnit , shared_ptr<RWStepBasic_RWDerivedUnit> >>(m.attr("RWStepBasic_RWDerivedUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDerivedUnitElement , shared_ptr<RWStepBasic_RWDerivedUnitElement> >>(m.attr("RWStepBasic_RWDerivedUnitElement"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDimensionalExponents , shared_ptr<RWStepBasic_RWDimensionalExponents> >>(m.attr("RWStepBasic_RWDimensionalExponents"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocument , shared_ptr<RWStepBasic_RWDocument> >>(m.attr("RWStepBasic_RWDocument"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentFile , shared_ptr<RWStepBasic_RWDocumentFile> >>(m.attr("RWStepBasic_RWDocumentFile"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentProductAssociation , shared_ptr<RWStepBasic_RWDocumentProductAssociation> >>(m.attr("RWStepBasic_RWDocumentProductAssociation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentProductEquivalence , shared_ptr<RWStepBasic_RWDocumentProductEquivalence> >>(m.attr("RWStepBasic_RWDocumentProductEquivalence"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentRelationship , shared_ptr<RWStepBasic_RWDocumentRelationship> >>(m.attr("RWStepBasic_RWDocumentRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentRepresentationType , shared_ptr<RWStepBasic_RWDocumentRepresentationType> >>(m.attr("RWStepBasic_RWDocumentRepresentationType"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentType , shared_ptr<RWStepBasic_RWDocumentType> >>(m.attr("RWStepBasic_RWDocumentType"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWDocumentUsageConstraint , shared_ptr<RWStepBasic_RWDocumentUsageConstraint> >>(m.attr("RWStepBasic_RWDocumentUsageConstraint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWEffectivity , shared_ptr<RWStepBasic_RWEffectivity> >>(m.attr("RWStepBasic_RWEffectivity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWEffectivityAssignment , shared_ptr<RWStepBasic_RWEffectivityAssignment> >>(m.attr("RWStepBasic_RWEffectivityAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWEulerAngles , shared_ptr<RWStepBasic_RWEulerAngles> >>(m.attr("RWStepBasic_RWEulerAngles"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWExternalIdentificationAssignment , shared_ptr<RWStepBasic_RWExternalIdentificationAssignment> >>(m.attr("RWStepBasic_RWExternalIdentificationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWExternalSource , shared_ptr<RWStepBasic_RWExternalSource> >>(m.attr("RWStepBasic_RWExternalSource"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWExternallyDefinedItem , shared_ptr<RWStepBasic_RWExternallyDefinedItem> >>(m.attr("RWStepBasic_RWExternallyDefinedItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWGeneralProperty , shared_ptr<RWStepBasic_RWGeneralProperty> >>(m.attr("RWStepBasic_RWGeneralProperty"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWGroup , shared_ptr<RWStepBasic_RWGroup> >>(m.attr("RWStepBasic_RWGroup"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWGroupAssignment , shared_ptr<RWStepBasic_RWGroupAssignment> >>(m.attr("RWStepBasic_RWGroupAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWGroupRelationship , shared_ptr<RWStepBasic_RWGroupRelationship> >>(m.attr("RWStepBasic_RWGroupRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWIdentificationAssignment , shared_ptr<RWStepBasic_RWIdentificationAssignment> >>(m.attr("RWStepBasic_RWIdentificationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWIdentificationRole , shared_ptr<RWStepBasic_RWIdentificationRole> >>(m.attr("RWStepBasic_RWIdentificationRole"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWLengthMeasureWithUnit , shared_ptr<RWStepBasic_RWLengthMeasureWithUnit> >>(m.attr("RWStepBasic_RWLengthMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWLengthUnit , shared_ptr<RWStepBasic_RWLengthUnit> >>(m.attr("RWStepBasic_RWLengthUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWLocalTime , shared_ptr<RWStepBasic_RWLocalTime> >>(m.attr("RWStepBasic_RWLocalTime"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWMassMeasureWithUnit , shared_ptr<RWStepBasic_RWMassMeasureWithUnit> >>(m.attr("RWStepBasic_RWMassMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWMassUnit , shared_ptr<RWStepBasic_RWMassUnit> >>(m.attr("RWStepBasic_RWMassUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWMeasureWithUnit , shared_ptr<RWStepBasic_RWMeasureWithUnit> >>(m.attr("RWStepBasic_RWMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWMechanicalContext , shared_ptr<RWStepBasic_RWMechanicalContext> >>(m.attr("RWStepBasic_RWMechanicalContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWNameAssignment , shared_ptr<RWStepBasic_RWNameAssignment> >>(m.attr("RWStepBasic_RWNameAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWNamedUnit , shared_ptr<RWStepBasic_RWNamedUnit> >>(m.attr("RWStepBasic_RWNamedUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWObjectRole , shared_ptr<RWStepBasic_RWObjectRole> >>(m.attr("RWStepBasic_RWObjectRole"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWOrdinalDate , shared_ptr<RWStepBasic_RWOrdinalDate> >>(m.attr("RWStepBasic_RWOrdinalDate"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWOrganization , shared_ptr<RWStepBasic_RWOrganization> >>(m.attr("RWStepBasic_RWOrganization"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWOrganizationRole , shared_ptr<RWStepBasic_RWOrganizationRole> >>(m.attr("RWStepBasic_RWOrganizationRole"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWOrganizationalAddress , shared_ptr<RWStepBasic_RWOrganizationalAddress> >>(m.attr("RWStepBasic_RWOrganizationalAddress"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPerson , shared_ptr<RWStepBasic_RWPerson> >>(m.attr("RWStepBasic_RWPerson"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPersonAndOrganization , shared_ptr<RWStepBasic_RWPersonAndOrganization> >>(m.attr("RWStepBasic_RWPersonAndOrganization"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPersonAndOrganizationRole , shared_ptr<RWStepBasic_RWPersonAndOrganizationRole> >>(m.attr("RWStepBasic_RWPersonAndOrganizationRole"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPersonalAddress , shared_ptr<RWStepBasic_RWPersonalAddress> >>(m.attr("RWStepBasic_RWPersonalAddress"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPlaneAngleMeasureWithUnit , shared_ptr<RWStepBasic_RWPlaneAngleMeasureWithUnit> >>(m.attr("RWStepBasic_RWPlaneAngleMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWPlaneAngleUnit , shared_ptr<RWStepBasic_RWPlaneAngleUnit> >>(m.attr("RWStepBasic_RWPlaneAngleUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProduct , shared_ptr<RWStepBasic_RWProduct> >>(m.attr("RWStepBasic_RWProduct"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductCategory , shared_ptr<RWStepBasic_RWProductCategory> >>(m.attr("RWStepBasic_RWProductCategory"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductCategoryRelationship , shared_ptr<RWStepBasic_RWProductCategoryRelationship> >>(m.attr("RWStepBasic_RWProductCategoryRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductConceptContext , shared_ptr<RWStepBasic_RWProductConceptContext> >>(m.attr("RWStepBasic_RWProductConceptContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductContext , shared_ptr<RWStepBasic_RWProductContext> >>(m.attr("RWStepBasic_RWProductContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinition , shared_ptr<RWStepBasic_RWProductDefinition> >>(m.attr("RWStepBasic_RWProductDefinition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionContext , shared_ptr<RWStepBasic_RWProductDefinitionContext> >>(m.attr("RWStepBasic_RWProductDefinitionContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionEffectivity , shared_ptr<RWStepBasic_RWProductDefinitionEffectivity> >>(m.attr("RWStepBasic_RWProductDefinitionEffectivity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionFormation , shared_ptr<RWStepBasic_RWProductDefinitionFormation> >>(m.attr("RWStepBasic_RWProductDefinitionFormation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionFormationRelationship , shared_ptr<RWStepBasic_RWProductDefinitionFormationRelationship> >>(m.attr("RWStepBasic_RWProductDefinitionFormationRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource , shared_ptr<RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource> >>(m.attr("RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionReference , shared_ptr<RWStepBasic_RWProductDefinitionReference> >>(m.attr("RWStepBasic_RWProductDefinitionReference"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation , shared_ptr<RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation> >>(m.attr("RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionRelationship , shared_ptr<RWStepBasic_RWProductDefinitionRelationship> >>(m.attr("RWStepBasic_RWProductDefinitionRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductDefinitionWithAssociatedDocuments , shared_ptr<RWStepBasic_RWProductDefinitionWithAssociatedDocuments> >>(m.attr("RWStepBasic_RWProductDefinitionWithAssociatedDocuments"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductRelatedProductCategory , shared_ptr<RWStepBasic_RWProductRelatedProductCategory> >>(m.attr("RWStepBasic_RWProductRelatedProductCategory"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWProductType , shared_ptr<RWStepBasic_RWProductType> >>(m.attr("RWStepBasic_RWProductType"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWRatioMeasureWithUnit , shared_ptr<RWStepBasic_RWRatioMeasureWithUnit> >>(m.attr("RWStepBasic_RWRatioMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWRoleAssociation , shared_ptr<RWStepBasic_RWRoleAssociation> >>(m.attr("RWStepBasic_RWRoleAssociation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSecurityClassification , shared_ptr<RWStepBasic_RWSecurityClassification> >>(m.attr("RWStepBasic_RWSecurityClassification"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSecurityClassificationLevel , shared_ptr<RWStepBasic_RWSecurityClassificationLevel> >>(m.attr("RWStepBasic_RWSecurityClassificationLevel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnit , shared_ptr<RWStepBasic_RWSiUnit> >>(m.attr("RWStepBasic_RWSiUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndAreaUnit , shared_ptr<RWStepBasic_RWSiUnitAndAreaUnit> >>(m.attr("RWStepBasic_RWSiUnitAndAreaUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndLengthUnit , shared_ptr<RWStepBasic_RWSiUnitAndLengthUnit> >>(m.attr("RWStepBasic_RWSiUnitAndLengthUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndMassUnit , shared_ptr<RWStepBasic_RWSiUnitAndMassUnit> >>(m.attr("RWStepBasic_RWSiUnitAndMassUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndPlaneAngleUnit , shared_ptr<RWStepBasic_RWSiUnitAndPlaneAngleUnit> >>(m.attr("RWStepBasic_RWSiUnitAndPlaneAngleUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndRatioUnit , shared_ptr<RWStepBasic_RWSiUnitAndRatioUnit> >>(m.attr("RWStepBasic_RWSiUnitAndRatioUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndSolidAngleUnit , shared_ptr<RWStepBasic_RWSiUnitAndSolidAngleUnit> >>(m.attr("RWStepBasic_RWSiUnitAndSolidAngleUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit , shared_ptr<RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit> >>(m.attr("RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndTimeUnit , shared_ptr<RWStepBasic_RWSiUnitAndTimeUnit> >>(m.attr("RWStepBasic_RWSiUnitAndTimeUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSiUnitAndVolumeUnit , shared_ptr<RWStepBasic_RWSiUnitAndVolumeUnit> >>(m.attr("RWStepBasic_RWSiUnitAndVolumeUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSolidAngleMeasureWithUnit , shared_ptr<RWStepBasic_RWSolidAngleMeasureWithUnit> >>(m.attr("RWStepBasic_RWSolidAngleMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWSolidAngleUnit , shared_ptr<RWStepBasic_RWSolidAngleUnit> >>(m.attr("RWStepBasic_RWSolidAngleUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWThermodynamicTemperatureUnit , shared_ptr<RWStepBasic_RWThermodynamicTemperatureUnit> >>(m.attr("RWStepBasic_RWThermodynamicTemperatureUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWUncertaintyMeasureWithUnit , shared_ptr<RWStepBasic_RWUncertaintyMeasureWithUnit> >>(m.attr("RWStepBasic_RWUncertaintyMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWVersionedActionRequest , shared_ptr<RWStepBasic_RWVersionedActionRequest> >>(m.attr("RWStepBasic_RWVersionedActionRequest"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepBasic_RWWeekOfYearAndDayDate , shared_ptr<RWStepBasic_RWWeekOfYearAndDayDate> >>(m.attr("RWStepBasic_RWWeekOfYearAndDayDate"))
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
// ./opencascade/RWStepBasic_RWDocumentFile.hxx
// ./opencascade/RWStepBasic_RWAddress.hxx
// ./opencascade/RWStepBasic_RWProduct.hxx
// ./opencascade/RWStepBasic_RWApprovalRole.hxx
// ./opencascade/RWStepBasic_RWPersonAndOrganization.hxx
// ./opencascade/RWStepBasic_RWCharacterizedObject.hxx
// ./opencascade/RWStepBasic_RWEffectivityAssignment.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit.hxx
// ./opencascade/RWStepBasic_RWProductContext.hxx
// ./opencascade/RWStepBasic_RWRoleAssociation.hxx
// ./opencascade/RWStepBasic_RWOrganizationRole.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionFormationRelationship.hxx
// ./opencascade/RWStepBasic_RWPlaneAngleMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWContract.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndMassUnit.hxx
// ./opencascade/RWStepBasic_RWGroupRelationship.hxx
// ./opencascade/RWStepBasic_RWRatioMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWCertificationType.hxx
// ./opencascade/RWStepBasic_RWCoordinatedUniversalTimeOffset.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndVolumeUnit.hxx
// ./opencascade/RWStepBasic_RWDocumentUsageConstraint.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndLengthUnit.hxx
// ./opencascade/RWStepBasic_RWApplicationContextElement.hxx
// ./opencascade/RWStepBasic_RWDateRole.hxx
// ./opencascade/RWStepBasic_RWOrganizationalAddress.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndSolidAngleUnit.hxx
// ./opencascade/RWStepBasic_RWPersonalAddress.hxx
// ./opencascade/RWStepBasic_RWVersionedActionRequest.hxx
// ./opencascade/RWStepBasic_RWExternalSource.hxx
// ./opencascade/RWStepBasic_RWSolidAngleUnit.hxx
// ./opencascade/RWStepBasic_RWThermodynamicTemperatureUnit.hxx
// ./opencascade/RWStepBasic_RWLengthMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionReference.hxx
// ./opencascade/RWStepBasic_RWIdentificationAssignment.hxx
// ./opencascade/RWStepBasic_RWOrganization.hxx
// ./opencascade/RWStepBasic_RWAction.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation.hxx
// ./opencascade/RWStepBasic_RWDocumentRepresentationType.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndLengthUnit.hxx
// ./opencascade/RWStepBasic_RWActionAssignment.hxx
// ./opencascade/RWStepBasic_RWActionMethod.hxx
// ./opencascade/RWStepBasic_RWGroup.hxx
// ./opencascade/RWStepBasic_RWProductCategory.hxx
// ./opencascade/RWStepBasic_RWPerson.hxx
// ./opencascade/RWStepBasic_RWDateAndTime.hxx
// ./opencascade/RWStepBasic_RWUncertaintyMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWApprovalStatus.hxx
// ./opencascade/RWStepBasic_RWContractAssignment.hxx
// ./opencascade/RWStepBasic_RWEulerAngles.hxx
// ./opencascade/RWStepBasic_RWNameAssignment.hxx
// ./opencascade/RWStepBasic_RWActionRequestAssignment.hxx
// ./opencascade/RWStepBasic_RWMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWActionRequestSolution.hxx
// ./opencascade/RWStepBasic_RWApplicationContext.hxx
// ./opencascade/RWStepBasic_RWProductRelatedProductCategory.hxx
// ./opencascade/RWStepBasic_RWExternalIdentificationAssignment.hxx
// ./opencascade/RWStepBasic_RWMechanicalContext.hxx
// ./opencascade/RWStepBasic_RWCertification.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndRatioUnit.hxx
// ./opencascade/RWStepBasic_RWApprovalDateTime.hxx
// ./opencascade/RWStepBasic_RWProductDefinition.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndMassUnit.hxx
// ./opencascade/RWStepBasic_RWEffectivity.hxx
// ./opencascade/RWStepBasic_RWDocumentRelationship.hxx
// ./opencascade/RWStepBasic_RWPersonAndOrganizationRole.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndVolumeUnit.hxx
// ./opencascade/RWStepBasic_RWIdentificationRole.hxx
// ./opencascade/RWStepBasic_RWNamedUnit.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource.hxx
// ./opencascade/RWStepBasic_RWContractType.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionEffectivity.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndAreaUnit.hxx
// ./opencascade/RWStepBasic_RWMassMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWApprovalRelationship.hxx
// ./opencascade/RWStepBasic_RWWeekOfYearAndDayDate.hxx
// ./opencascade/RWStepBasic_RWOrdinalDate.hxx
// ./opencascade/RWStepBasic_RWMassUnit.hxx
// ./opencascade/RWStepBasic_RWProductConceptContext.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndPlaneAngleUnit.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionWithAssociatedDocuments.hxx
// ./opencascade/RWStepBasic_RWDerivedUnitElement.hxx
// ./opencascade/RWStepBasic_RWSiUnit.hxx
// ./opencascade/RWStepBasic_RWObjectRole.hxx
// ./opencascade/RWStepBasic_RWGeneralProperty.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit.hxx
// ./opencascade/RWStepBasic_RWDocumentProductAssociation.hxx
// ./opencascade/RWStepBasic_RWDerivedUnit.hxx
// ./opencascade/RWStepBasic_RWDateTimeRole.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndAreaUnit.hxx
// ./opencascade/RWStepBasic_RWPlaneAngleUnit.hxx
// ./opencascade/RWStepBasic_RWExternallyDefinedItem.hxx
// ./opencascade/RWStepBasic_RWApproval.hxx
// ./opencascade/RWStepBasic_RWDocumentType.hxx
// ./opencascade/RWStepBasic_RWSecurityClassification.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndRatioUnit.hxx
// ./opencascade/RWStepBasic_RWProductType.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionContext.hxx
// ./opencascade/RWStepBasic_RWCertificationAssignment.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnit.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionRelationship.hxx
// ./opencascade/RWStepBasic_RWSolidAngleMeasureWithUnit.hxx
// ./opencascade/RWStepBasic_RWLocalTime.hxx
// ./opencascade/RWStepBasic_RWLengthUnit.hxx
// ./opencascade/RWStepBasic_RWSecurityClassificationLevel.hxx
// ./opencascade/RWStepBasic_RWDocumentProductEquivalence.hxx
// ./opencascade/RWStepBasic_RWApplicationProtocolDefinition.hxx
// ./opencascade/RWStepBasic_RWApprovalPersonOrganization.hxx
// ./opencascade/RWStepBasic_RWConversionBasedUnitAndTimeUnit.hxx
// ./opencascade/RWStepBasic_RWProductCategoryRelationship.hxx
// ./opencascade/RWStepBasic_RWSiUnitAndTimeUnit.hxx
// ./opencascade/RWStepBasic_RWGroupAssignment.hxx
// ./opencascade/RWStepBasic_RWDimensionalExponents.hxx
// ./opencascade/RWStepBasic_RWDocument.hxx
// ./opencascade/RWStepBasic_RWCalendarDate.hxx
// ./opencascade/RWStepBasic_RWDate.hxx
// ./opencascade/RWStepBasic_RWProductDefinitionFormation.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
