
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
#include <StepBasic_AreaUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_DocumentType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_MassUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Contract.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_Action.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApprovalStatus.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_ActionMethod.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_CertificationType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_MassUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_TimeUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_Effectivity.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_RatioUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_OrganizationRole.hxx>
#include <StepBasic_Group.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_VolumeUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_LocalTime.hxx>
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
#include <StepBasic_SecurityClassification.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Product.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_SolidAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ThermodynamicTemperatureUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_TimeUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_Person.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_CoordinatedUniversalTimeOffset.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionReference.hxx>
#include <StepBasic_ProductDefinitionReferenceWithLocalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_SolidAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_Person.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_VolumeUnit.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ObjectRole.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ContractType.hxx>
#include <StepBasic_AreaUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ApprovalRole.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepBasic_DerivedUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_RatioUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_Certification.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_SecurityClassificationLevel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Product.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_LocalTime.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ActionMethod.hxx>
#include <StepBasic_Approval.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>

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
// ./opencascade\StepBasic_Array1OfApproval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepBasic_Array1OfDerivedUnitElement.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepBasic_Array1OfProductContext.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepBasic_Array1OfProduct.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepBasic_Array1OfOrganization.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepBasic_Array1OfUncertaintyMeasureWithUnit.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepBasic_Array1OfNamedUnit.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepBasic_Array1OfDocument.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepBasic_Array1OfPerson.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepBasic_Array1OfProductDefinition.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepBasic_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepBasic", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StepBasic_SiUnitName>(m, "StepBasic_SiUnitName",R"#(None)#")
        .value("StepBasic_sunMetre",StepBasic_SiUnitName::StepBasic_sunMetre)
        .value("StepBasic_sunGram",StepBasic_SiUnitName::StepBasic_sunGram)
        .value("StepBasic_sunSecond",StepBasic_SiUnitName::StepBasic_sunSecond)
        .value("StepBasic_sunAmpere",StepBasic_SiUnitName::StepBasic_sunAmpere)
        .value("StepBasic_sunKelvin",StepBasic_SiUnitName::StepBasic_sunKelvin)
        .value("StepBasic_sunMole",StepBasic_SiUnitName::StepBasic_sunMole)
        .value("StepBasic_sunCandela",StepBasic_SiUnitName::StepBasic_sunCandela)
        .value("StepBasic_sunRadian",StepBasic_SiUnitName::StepBasic_sunRadian)
        .value("StepBasic_sunSteradian",StepBasic_SiUnitName::StepBasic_sunSteradian)
        .value("StepBasic_sunHertz",StepBasic_SiUnitName::StepBasic_sunHertz)
        .value("StepBasic_sunNewton",StepBasic_SiUnitName::StepBasic_sunNewton)
        .value("StepBasic_sunPascal",StepBasic_SiUnitName::StepBasic_sunPascal)
        .value("StepBasic_sunJoule",StepBasic_SiUnitName::StepBasic_sunJoule)
        .value("StepBasic_sunWatt",StepBasic_SiUnitName::StepBasic_sunWatt)
        .value("StepBasic_sunCoulomb",StepBasic_SiUnitName::StepBasic_sunCoulomb)
        .value("StepBasic_sunVolt",StepBasic_SiUnitName::StepBasic_sunVolt)
        .value("StepBasic_sunFarad",StepBasic_SiUnitName::StepBasic_sunFarad)
        .value("StepBasic_sunOhm",StepBasic_SiUnitName::StepBasic_sunOhm)
        .value("StepBasic_sunSiemens",StepBasic_SiUnitName::StepBasic_sunSiemens)
        .value("StepBasic_sunWeber",StepBasic_SiUnitName::StepBasic_sunWeber)
        .value("StepBasic_sunTesla",StepBasic_SiUnitName::StepBasic_sunTesla)
        .value("StepBasic_sunHenry",StepBasic_SiUnitName::StepBasic_sunHenry)
        .value("StepBasic_sunDegreeCelsius",StepBasic_SiUnitName::StepBasic_sunDegreeCelsius)
        .value("StepBasic_sunLumen",StepBasic_SiUnitName::StepBasic_sunLumen)
        .value("StepBasic_sunLux",StepBasic_SiUnitName::StepBasic_sunLux)
        .value("StepBasic_sunBecquerel",StepBasic_SiUnitName::StepBasic_sunBecquerel)
        .value("StepBasic_sunGray",StepBasic_SiUnitName::StepBasic_sunGray)
        .value("StepBasic_sunSievert",StepBasic_SiUnitName::StepBasic_sunSievert).export_values();
    py::enum_<StepBasic_Source>(m, "StepBasic_Source",R"#(None)#")
        .value("StepBasic_sMade",StepBasic_Source::StepBasic_sMade)
        .value("StepBasic_sBought",StepBasic_Source::StepBasic_sBought)
        .value("StepBasic_sNotKnown",StepBasic_Source::StepBasic_sNotKnown).export_values();
    py::enum_<StepBasic_SiPrefix>(m, "StepBasic_SiPrefix",R"#(None)#")
        .value("StepBasic_spExa",StepBasic_SiPrefix::StepBasic_spExa)
        .value("StepBasic_spPeta",StepBasic_SiPrefix::StepBasic_spPeta)
        .value("StepBasic_spTera",StepBasic_SiPrefix::StepBasic_spTera)
        .value("StepBasic_spGiga",StepBasic_SiPrefix::StepBasic_spGiga)
        .value("StepBasic_spMega",StepBasic_SiPrefix::StepBasic_spMega)
        .value("StepBasic_spKilo",StepBasic_SiPrefix::StepBasic_spKilo)
        .value("StepBasic_spHecto",StepBasic_SiPrefix::StepBasic_spHecto)
        .value("StepBasic_spDeca",StepBasic_SiPrefix::StepBasic_spDeca)
        .value("StepBasic_spDeci",StepBasic_SiPrefix::StepBasic_spDeci)
        .value("StepBasic_spCenti",StepBasic_SiPrefix::StepBasic_spCenti)
        .value("StepBasic_spMilli",StepBasic_SiPrefix::StepBasic_spMilli)
        .value("StepBasic_spMicro",StepBasic_SiPrefix::StepBasic_spMicro)
        .value("StepBasic_spNano",StepBasic_SiPrefix::StepBasic_spNano)
        .value("StepBasic_spPico",StepBasic_SiPrefix::StepBasic_spPico)
        .value("StepBasic_spFemto",StepBasic_SiPrefix::StepBasic_spFemto)
        .value("StepBasic_spAtto",StepBasic_SiPrefix::StepBasic_spAtto).export_values();
    py::enum_<StepBasic_AheadOrBehind>(m, "StepBasic_AheadOrBehind",R"#(None)#")
        .value("StepBasic_aobAhead",StepBasic_AheadOrBehind::StepBasic_aobAhead)
        .value("StepBasic_aobExact",StepBasic_AheadOrBehind::StepBasic_aobExact)
        .value("StepBasic_aobBehind",StepBasic_AheadOrBehind::StepBasic_aobBehind).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<StepBasic_Approval> >(m,"StepBasic_Array1OfApproval");
    preregister_template_NCollection_Array1<opencascade::handle<StepBasic_DerivedUnitElement> >(m,"StepBasic_Array1OfDerivedUnitElement");
    preregister_template_NCollection_Array1<opencascade::handle<StepBasic_ProductContext> >(m,"StepBasic_Array1OfProductContext");
    preregister_template_NCollection_Array1<opencascade::handle<StepBasic_Product> >(m,"StepBasic_Array1OfProduct");
    preregister_template_NCollection_Array1<opencascade::handle<StepBasic_Organization> >(m,"StepBasic_Array1OfOrganization");
    preregister_template_NCollection_Array1<opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> >(m,"StepBasic_Array1OfUncertaintyMeasureWithUnit");
    preregister_template_NCollection_Array1<opencascade::handle<StepBasic_NamedUnit> >(m,"StepBasic_Array1OfNamedUnit");
    preregister_template_NCollection_Array1<opencascade::handle<StepBasic_Document> >(m,"StepBasic_Array1OfDocument");
    preregister_template_NCollection_Array1<opencascade::handle<StepBasic_Person> >(m,"StepBasic_Array1OfPerson");
    preregister_template_NCollection_Array1<opencascade::handle<StepBasic_ProductDefinition> >(m,"StepBasic_Array1OfProductDefinition");

// classes forward declarations only
    py::class_<StepBasic_Action ,opencascade::handle<StepBasic_Action> , Standard_Transient>(m,"StepBasic_Action",R"#(Representation of STEP entity ActionRepresentation of STEP entity ActionRepresentation of STEP entity Action)#");
    py::class_<StepBasic_ActionAssignment ,opencascade::handle<StepBasic_ActionAssignment> , Standard_Transient>(m,"StepBasic_ActionAssignment",R"#(Representation of STEP entity ActionAssignmentRepresentation of STEP entity ActionAssignmentRepresentation of STEP entity ActionAssignment)#");
    py::class_<StepBasic_ActionMethod ,opencascade::handle<StepBasic_ActionMethod> , Standard_Transient>(m,"StepBasic_ActionMethod",R"#(Representation of STEP entity ActionMethodRepresentation of STEP entity ActionMethodRepresentation of STEP entity ActionMethod)#");
    py::class_<StepBasic_ActionRequestAssignment ,opencascade::handle<StepBasic_ActionRequestAssignment> , Standard_Transient>(m,"StepBasic_ActionRequestAssignment",R"#(Representation of STEP entity ActionRequestAssignmentRepresentation of STEP entity ActionRequestAssignmentRepresentation of STEP entity ActionRequestAssignment)#");
    py::class_<StepBasic_ActionRequestSolution ,opencascade::handle<StepBasic_ActionRequestSolution> , Standard_Transient>(m,"StepBasic_ActionRequestSolution",R"#(Representation of STEP entity ActionRequestSolutionRepresentation of STEP entity ActionRequestSolutionRepresentation of STEP entity ActionRequestSolution)#");
    py::class_<StepBasic_Address ,opencascade::handle<StepBasic_Address> , Standard_Transient>(m,"StepBasic_Address",R"#()#");
    py::class_<StepBasic_ApplicationContext ,opencascade::handle<StepBasic_ApplicationContext> , Standard_Transient>(m,"StepBasic_ApplicationContext",R"#()#");
    py::class_<StepBasic_ApplicationContextElement ,opencascade::handle<StepBasic_ApplicationContextElement> , Standard_Transient>(m,"StepBasic_ApplicationContextElement",R"#()#");
    py::class_<StepBasic_ApplicationProtocolDefinition ,opencascade::handle<StepBasic_ApplicationProtocolDefinition> , Standard_Transient>(m,"StepBasic_ApplicationProtocolDefinition",R"#()#");
    py::class_<StepBasic_Approval ,opencascade::handle<StepBasic_Approval> , Standard_Transient>(m,"StepBasic_Approval",R"#()#");
    py::class_<StepBasic_ApprovalAssignment ,opencascade::handle<StepBasic_ApprovalAssignment> , Standard_Transient>(m,"StepBasic_ApprovalAssignment",R"#()#");
    py::class_<StepBasic_ApprovalDateTime ,opencascade::handle<StepBasic_ApprovalDateTime> , Standard_Transient>(m,"StepBasic_ApprovalDateTime",R"#(Added from StepBasic Rev2 to Rev4Added from StepBasic Rev2 to Rev4Added from StepBasic Rev2 to Rev4)#");
    py::class_<StepBasic_ApprovalPersonOrganization ,opencascade::handle<StepBasic_ApprovalPersonOrganization> , Standard_Transient>(m,"StepBasic_ApprovalPersonOrganization",R"#()#");
    py::class_<StepBasic_ApprovalRelationship ,opencascade::handle<StepBasic_ApprovalRelationship> , Standard_Transient>(m,"StepBasic_ApprovalRelationship",R"#()#");
    py::class_<StepBasic_ApprovalRole ,opencascade::handle<StepBasic_ApprovalRole> , Standard_Transient>(m,"StepBasic_ApprovalRole",R"#()#");
    py::class_<StepBasic_ApprovalStatus ,opencascade::handle<StepBasic_ApprovalStatus> , Standard_Transient>(m,"StepBasic_ApprovalStatus",R"#()#");
    py::class_<StepBasic_Certification ,opencascade::handle<StepBasic_Certification> , Standard_Transient>(m,"StepBasic_Certification",R"#(Representation of STEP entity CertificationRepresentation of STEP entity CertificationRepresentation of STEP entity Certification)#");
    py::class_<StepBasic_CertificationAssignment ,opencascade::handle<StepBasic_CertificationAssignment> , Standard_Transient>(m,"StepBasic_CertificationAssignment",R"#(Representation of STEP entity CertificationAssignmentRepresentation of STEP entity CertificationAssignmentRepresentation of STEP entity CertificationAssignment)#");
    py::class_<StepBasic_CertificationType ,opencascade::handle<StepBasic_CertificationType> , Standard_Transient>(m,"StepBasic_CertificationType",R"#(Representation of STEP entity CertificationTypeRepresentation of STEP entity CertificationTypeRepresentation of STEP entity CertificationType)#");
    py::class_<StepBasic_CharacterizedObject ,opencascade::handle<StepBasic_CharacterizedObject> , Standard_Transient>(m,"StepBasic_CharacterizedObject",R"#(Representation of STEP entity CharacterizedObjectRepresentation of STEP entity CharacterizedObjectRepresentation of STEP entity CharacterizedObject)#");
    py::class_<StepBasic_Contract ,opencascade::handle<StepBasic_Contract> , Standard_Transient>(m,"StepBasic_Contract",R"#(Representation of STEP entity ContractRepresentation of STEP entity ContractRepresentation of STEP entity Contract)#");
    py::class_<StepBasic_ContractAssignment ,opencascade::handle<StepBasic_ContractAssignment> , Standard_Transient>(m,"StepBasic_ContractAssignment",R"#(Representation of STEP entity ContractAssignmentRepresentation of STEP entity ContractAssignmentRepresentation of STEP entity ContractAssignment)#");
    py::class_<StepBasic_ContractType ,opencascade::handle<StepBasic_ContractType> , Standard_Transient>(m,"StepBasic_ContractType",R"#(Representation of STEP entity ContractTypeRepresentation of STEP entity ContractTypeRepresentation of STEP entity ContractType)#");
    py::class_<StepBasic_CoordinatedUniversalTimeOffset ,opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> , Standard_Transient>(m,"StepBasic_CoordinatedUniversalTimeOffset",R"#()#");
    py::class_<StepBasic_Date ,opencascade::handle<StepBasic_Date> , Standard_Transient>(m,"StepBasic_Date",R"#()#");
    py::class_<StepBasic_DateAndTime ,opencascade::handle<StepBasic_DateAndTime> , Standard_Transient>(m,"StepBasic_DateAndTime",R"#()#");
    py::class_<StepBasic_DateAndTimeAssignment ,opencascade::handle<StepBasic_DateAndTimeAssignment> , Standard_Transient>(m,"StepBasic_DateAndTimeAssignment",R"#()#");
    py::class_<StepBasic_DateAssignment ,opencascade::handle<StepBasic_DateAssignment> , Standard_Transient>(m,"StepBasic_DateAssignment",R"#()#");
    py::class_<StepBasic_DateRole ,opencascade::handle<StepBasic_DateRole> , Standard_Transient>(m,"StepBasic_DateRole",R"#()#");
    py::class_<StepBasic_DateTimeRole ,opencascade::handle<StepBasic_DateTimeRole> , Standard_Transient>(m,"StepBasic_DateTimeRole",R"#()#");
    py::class_<StepBasic_DateTimeSelect , shared_ptr<StepBasic_DateTimeSelect> , StepData_SelectType>(m,"StepBasic_DateTimeSelect",R"#(None)#");
    py::class_<StepBasic_DerivedUnit ,opencascade::handle<StepBasic_DerivedUnit> , Standard_Transient>(m,"StepBasic_DerivedUnit",R"#(Added from StepBasic Rev2 to Rev4Added from StepBasic Rev2 to Rev4Added from StepBasic Rev2 to Rev4)#");
    py::class_<StepBasic_DerivedUnitElement ,opencascade::handle<StepBasic_DerivedUnitElement> , Standard_Transient>(m,"StepBasic_DerivedUnitElement",R"#(Added from StepBasic Rev2 to Rev4Added from StepBasic Rev2 to Rev4Added from StepBasic Rev2 to Rev4)#");
    py::class_<StepBasic_DimensionalExponents ,opencascade::handle<StepBasic_DimensionalExponents> , Standard_Transient>(m,"StepBasic_DimensionalExponents",R"#()#");
    py::class_<StepBasic_Document ,opencascade::handle<StepBasic_Document> , Standard_Transient>(m,"StepBasic_Document",R"#(Representation of STEP entity DocumentRepresentation of STEP entity DocumentRepresentation of STEP entity Document)#");
    py::class_<StepBasic_DocumentProductAssociation ,opencascade::handle<StepBasic_DocumentProductAssociation> , Standard_Transient>(m,"StepBasic_DocumentProductAssociation",R"#(Representation of STEP entity DocumentProductAssociationRepresentation of STEP entity DocumentProductAssociationRepresentation of STEP entity DocumentProductAssociation)#");
    py::class_<StepBasic_DocumentReference ,opencascade::handle<StepBasic_DocumentReference> , Standard_Transient>(m,"StepBasic_DocumentReference",R"#()#");
    py::class_<StepBasic_DocumentRelationship ,opencascade::handle<StepBasic_DocumentRelationship> , Standard_Transient>(m,"StepBasic_DocumentRelationship",R"#()#");
    py::class_<StepBasic_DocumentRepresentationType ,opencascade::handle<StepBasic_DocumentRepresentationType> , Standard_Transient>(m,"StepBasic_DocumentRepresentationType",R"#(Representation of STEP entity DocumentRepresentationTypeRepresentation of STEP entity DocumentRepresentationTypeRepresentation of STEP entity DocumentRepresentationType)#");
    py::class_<StepBasic_DocumentType ,opencascade::handle<StepBasic_DocumentType> , Standard_Transient>(m,"StepBasic_DocumentType",R"#()#");
    py::class_<StepBasic_DocumentUsageConstraint ,opencascade::handle<StepBasic_DocumentUsageConstraint> , Standard_Transient>(m,"StepBasic_DocumentUsageConstraint",R"#()#");
    py::class_<StepBasic_Effectivity ,opencascade::handle<StepBasic_Effectivity> , Standard_Transient>(m,"StepBasic_Effectivity",R"#()#");
    py::class_<StepBasic_EffectivityAssignment ,opencascade::handle<StepBasic_EffectivityAssignment> , Standard_Transient>(m,"StepBasic_EffectivityAssignment",R"#(Representation of STEP entity EffectivityAssignmentRepresentation of STEP entity EffectivityAssignmentRepresentation of STEP entity EffectivityAssignment)#");
    py::class_<StepBasic_EulerAngles ,opencascade::handle<StepBasic_EulerAngles> , Standard_Transient>(m,"StepBasic_EulerAngles",R"#(Representation of STEP entity EulerAnglesRepresentation of STEP entity EulerAnglesRepresentation of STEP entity EulerAngles)#");
    py::class_<StepBasic_ExternalSource ,opencascade::handle<StepBasic_ExternalSource> , Standard_Transient>(m,"StepBasic_ExternalSource",R"#(Representation of STEP entity ExternalSourceRepresentation of STEP entity ExternalSourceRepresentation of STEP entity ExternalSource)#");
    py::class_<StepBasic_ExternallyDefinedItem ,opencascade::handle<StepBasic_ExternallyDefinedItem> , Standard_Transient>(m,"StepBasic_ExternallyDefinedItem",R"#(Representation of STEP entity ExternallyDefinedItemRepresentation of STEP entity ExternallyDefinedItemRepresentation of STEP entity ExternallyDefinedItem)#");
    py::class_<StepBasic_GeneralProperty ,opencascade::handle<StepBasic_GeneralProperty> , Standard_Transient>(m,"StepBasic_GeneralProperty",R"#(Representation of STEP entity GeneralPropertyRepresentation of STEP entity GeneralPropertyRepresentation of STEP entity GeneralProperty)#");
    py::class_<StepBasic_Group ,opencascade::handle<StepBasic_Group> , Standard_Transient>(m,"StepBasic_Group",R"#(Representation of STEP entity GroupRepresentation of STEP entity GroupRepresentation of STEP entity Group)#");
    py::class_<StepBasic_GroupAssignment ,opencascade::handle<StepBasic_GroupAssignment> , Standard_Transient>(m,"StepBasic_GroupAssignment",R"#(Representation of STEP entity GroupAssignmentRepresentation of STEP entity GroupAssignmentRepresentation of STEP entity GroupAssignment)#");
    py::class_<StepBasic_GroupRelationship ,opencascade::handle<StepBasic_GroupRelationship> , Standard_Transient>(m,"StepBasic_GroupRelationship",R"#(Representation of STEP entity GroupRelationshipRepresentation of STEP entity GroupRelationshipRepresentation of STEP entity GroupRelationship)#");
    py::class_<StepBasic_HArray1OfApproval ,opencascade::handle<StepBasic_HArray1OfApproval> , StepBasic_Array1OfApproval, Standard_Transient>(m,"StepBasic_HArray1OfApproval",R"#()#");
    py::class_<StepBasic_HArray1OfDerivedUnitElement ,opencascade::handle<StepBasic_HArray1OfDerivedUnitElement> , StepBasic_Array1OfDerivedUnitElement, Standard_Transient>(m,"StepBasic_HArray1OfDerivedUnitElement",R"#()#");
    py::class_<StepBasic_HArray1OfDocument ,opencascade::handle<StepBasic_HArray1OfDocument> , StepBasic_Array1OfDocument, Standard_Transient>(m,"StepBasic_HArray1OfDocument",R"#()#");
    py::class_<StepBasic_HArray1OfNamedUnit ,opencascade::handle<StepBasic_HArray1OfNamedUnit> , StepBasic_Array1OfNamedUnit, Standard_Transient>(m,"StepBasic_HArray1OfNamedUnit",R"#()#");
    py::class_<StepBasic_HArray1OfOrganization ,opencascade::handle<StepBasic_HArray1OfOrganization> , StepBasic_Array1OfOrganization, Standard_Transient>(m,"StepBasic_HArray1OfOrganization",R"#()#");
    py::class_<StepBasic_HArray1OfPerson ,opencascade::handle<StepBasic_HArray1OfPerson> , StepBasic_Array1OfPerson, Standard_Transient>(m,"StepBasic_HArray1OfPerson",R"#()#");
    py::class_<StepBasic_HArray1OfProduct ,opencascade::handle<StepBasic_HArray1OfProduct> , StepBasic_Array1OfProduct, Standard_Transient>(m,"StepBasic_HArray1OfProduct",R"#()#");
    py::class_<StepBasic_HArray1OfProductContext ,opencascade::handle<StepBasic_HArray1OfProductContext> , StepBasic_Array1OfProductContext, Standard_Transient>(m,"StepBasic_HArray1OfProductContext",R"#()#");
    py::class_<StepBasic_HArray1OfProductDefinition ,opencascade::handle<StepBasic_HArray1OfProductDefinition> , StepBasic_Array1OfProductDefinition, Standard_Transient>(m,"StepBasic_HArray1OfProductDefinition",R"#()#");
    py::class_<StepBasic_HArray1OfUncertaintyMeasureWithUnit ,opencascade::handle<StepBasic_HArray1OfUncertaintyMeasureWithUnit> , StepBasic_Array1OfUncertaintyMeasureWithUnit, Standard_Transient>(m,"StepBasic_HArray1OfUncertaintyMeasureWithUnit",R"#()#");
    py::class_<StepBasic_IdentificationAssignment ,opencascade::handle<StepBasic_IdentificationAssignment> , Standard_Transient>(m,"StepBasic_IdentificationAssignment",R"#(Representation of STEP entity IdentificationAssignmentRepresentation of STEP entity IdentificationAssignmentRepresentation of STEP entity IdentificationAssignment)#");
    py::class_<StepBasic_IdentificationRole ,opencascade::handle<StepBasic_IdentificationRole> , Standard_Transient>(m,"StepBasic_IdentificationRole",R"#(Representation of STEP entity IdentificationRoleRepresentation of STEP entity IdentificationRoleRepresentation of STEP entity IdentificationRole)#");
    py::class_<StepBasic_LocalTime ,opencascade::handle<StepBasic_LocalTime> , Standard_Transient>(m,"StepBasic_LocalTime",R"#()#");
    py::class_<StepBasic_MeasureValueMember ,opencascade::handle<StepBasic_MeasureValueMember> , StepData_SelectReal>(m,"StepBasic_MeasureValueMember",R"#(for Select MeasureValue, i.e. : length_measure,time_measure,plane_angle_measure, solid_angle_measure,ratio_measure,parameter_value, context_dependent_measure,positive_length_measure, positive_plane_angle_measure,positive_ratio_measure, area_measure,volume_measure, count_measurefor Select MeasureValue, i.e. : length_measure,time_measure,plane_angle_measure, solid_angle_measure,ratio_measure,parameter_value, context_dependent_measure,positive_length_measure, positive_plane_angle_measure,positive_ratio_measure, area_measure,volume_measure, count_measurefor Select MeasureValue, i.e. : length_measure,time_measure,plane_angle_measure, solid_angle_measure,ratio_measure,parameter_value, context_dependent_measure,positive_length_measure, positive_plane_angle_measure,positive_ratio_measure, area_measure,volume_measure, count_measure)#");
    py::class_<StepBasic_MeasureWithUnit ,opencascade::handle<StepBasic_MeasureWithUnit> , Standard_Transient>(m,"StepBasic_MeasureWithUnit",R"#()#");
    py::class_<StepBasic_NameAssignment ,opencascade::handle<StepBasic_NameAssignment> , Standard_Transient>(m,"StepBasic_NameAssignment",R"#(Representation of STEP entity NameAssignmentRepresentation of STEP entity NameAssignmentRepresentation of STEP entity NameAssignment)#");
    py::class_<StepBasic_NamedUnit ,opencascade::handle<StepBasic_NamedUnit> , Standard_Transient>(m,"StepBasic_NamedUnit",R"#()#");
    py::class_<StepBasic_ObjectRole ,opencascade::handle<StepBasic_ObjectRole> , Standard_Transient>(m,"StepBasic_ObjectRole",R"#(Representation of STEP entity ObjectRoleRepresentation of STEP entity ObjectRoleRepresentation of STEP entity ObjectRole)#");
    py::class_<StepBasic_Organization ,opencascade::handle<StepBasic_Organization> , Standard_Transient>(m,"StepBasic_Organization",R"#()#");
    py::class_<StepBasic_OrganizationAssignment ,opencascade::handle<StepBasic_OrganizationAssignment> , Standard_Transient>(m,"StepBasic_OrganizationAssignment",R"#()#");
    py::class_<StepBasic_OrganizationRole ,opencascade::handle<StepBasic_OrganizationRole> , Standard_Transient>(m,"StepBasic_OrganizationRole",R"#()#");
    py::class_<StepBasic_Person ,opencascade::handle<StepBasic_Person> , Standard_Transient>(m,"StepBasic_Person",R"#()#");
    py::class_<StepBasic_PersonAndOrganization ,opencascade::handle<StepBasic_PersonAndOrganization> , Standard_Transient>(m,"StepBasic_PersonAndOrganization",R"#()#");
    py::class_<StepBasic_PersonAndOrganizationAssignment ,opencascade::handle<StepBasic_PersonAndOrganizationAssignment> , Standard_Transient>(m,"StepBasic_PersonAndOrganizationAssignment",R"#()#");
    py::class_<StepBasic_PersonAndOrganizationRole ,opencascade::handle<StepBasic_PersonAndOrganizationRole> , Standard_Transient>(m,"StepBasic_PersonAndOrganizationRole",R"#()#");
    py::class_<StepBasic_PersonOrganizationSelect , shared_ptr<StepBasic_PersonOrganizationSelect> , StepData_SelectType>(m,"StepBasic_PersonOrganizationSelect",R"#(None)#");
    py::class_<StepBasic_Product ,opencascade::handle<StepBasic_Product> , Standard_Transient>(m,"StepBasic_Product",R"#()#");
    py::class_<StepBasic_ProductCategory ,opencascade::handle<StepBasic_ProductCategory> , Standard_Transient>(m,"StepBasic_ProductCategory",R"#()#");
    py::class_<StepBasic_ProductCategoryRelationship ,opencascade::handle<StepBasic_ProductCategoryRelationship> , Standard_Transient>(m,"StepBasic_ProductCategoryRelationship",R"#(Representation of STEP entity ProductCategoryRelationshipRepresentation of STEP entity ProductCategoryRelationshipRepresentation of STEP entity ProductCategoryRelationship)#");
    py::class_<StepBasic_ProductDefinition ,opencascade::handle<StepBasic_ProductDefinition> , Standard_Transient>(m,"StepBasic_ProductDefinition",R"#()#");
    py::class_<StepBasic_ProductDefinitionFormation ,opencascade::handle<StepBasic_ProductDefinitionFormation> , Standard_Transient>(m,"StepBasic_ProductDefinitionFormation",R"#()#");
    py::class_<StepBasic_ProductDefinitionFormationRelationship ,opencascade::handle<StepBasic_ProductDefinitionFormationRelationship> , Standard_Transient>(m,"StepBasic_ProductDefinitionFormationRelationship",R"#(Representation of STEP entity ProductDefinitionFormationRelationshipRepresentation of STEP entity ProductDefinitionFormationRelationshipRepresentation of STEP entity ProductDefinitionFormationRelationship)#");
    py::class_<StepBasic_ProductDefinitionOrReference , shared_ptr<StepBasic_ProductDefinitionOrReference> , StepData_SelectType>(m,"StepBasic_ProductDefinitionOrReference",R"#(None)#");
    py::class_<StepBasic_ProductDefinitionReference ,opencascade::handle<StepBasic_ProductDefinitionReference> , Standard_Transient>(m,"StepBasic_ProductDefinitionReference",R"#(Representation of STEP entity Product_Definition_ReferenceRepresentation of STEP entity Product_Definition_ReferenceRepresentation of STEP entity Product_Definition_Reference)#");
    py::class_<StepBasic_ProductDefinitionRelationship ,opencascade::handle<StepBasic_ProductDefinitionRelationship> , Standard_Transient>(m,"StepBasic_ProductDefinitionRelationship",R"#(Representation of STEP entity ProductDefinitionRelationshipRepresentation of STEP entity ProductDefinitionRelationshipRepresentation of STEP entity ProductDefinitionRelationship)#");
    py::class_<StepBasic_ProductOrFormationOrDefinition , shared_ptr<StepBasic_ProductOrFormationOrDefinition> , StepData_SelectType>(m,"StepBasic_ProductOrFormationOrDefinition",R"#(Representation of STEP SELECT type ProductOrFormationOrDefinition)#");
    py::class_<StepBasic_RoleAssociation ,opencascade::handle<StepBasic_RoleAssociation> , Standard_Transient>(m,"StepBasic_RoleAssociation",R"#(Representation of STEP entity RoleAssociationRepresentation of STEP entity RoleAssociationRepresentation of STEP entity RoleAssociation)#");
    py::class_<StepBasic_RoleSelect , shared_ptr<StepBasic_RoleSelect> , StepData_SelectType>(m,"StepBasic_RoleSelect",R"#(Representation of STEP SELECT type RoleSelect)#");
    py::class_<StepBasic_SecurityClassification ,opencascade::handle<StepBasic_SecurityClassification> , Standard_Transient>(m,"StepBasic_SecurityClassification",R"#()#");
    py::class_<StepBasic_SecurityClassificationAssignment ,opencascade::handle<StepBasic_SecurityClassificationAssignment> , Standard_Transient>(m,"StepBasic_SecurityClassificationAssignment",R"#()#");
    py::class_<StepBasic_SecurityClassificationLevel ,opencascade::handle<StepBasic_SecurityClassificationLevel> , Standard_Transient>(m,"StepBasic_SecurityClassificationLevel",R"#()#");
    py::class_<StepBasic_SizeMember ,opencascade::handle<StepBasic_SizeMember> , StepData_SelectReal>(m,"StepBasic_SizeMember",R"#(For immediate members of SizeSelect, i.e. : ParameterValue (a Real)For immediate members of SizeSelect, i.e. : ParameterValue (a Real)For immediate members of SizeSelect, i.e. : ParameterValue (a Real))#");
    py::class_<StepBasic_SizeSelect , shared_ptr<StepBasic_SizeSelect> , StepData_SelectType>(m,"StepBasic_SizeSelect",R"#(None)#");
    py::class_<StepBasic_SourceItem , shared_ptr<StepBasic_SourceItem> , StepData_SelectType>(m,"StepBasic_SourceItem",R"#(Representation of STEP SELECT type SourceItem)#");
    py::class_<StepBasic_Unit , shared_ptr<StepBasic_Unit> , StepData_SelectType>(m,"StepBasic_Unit",R"#(Implements a select type unit (NamedUnit or DerivedUnit))#");
    py::class_<StepBasic_VersionedActionRequest ,opencascade::handle<StepBasic_VersionedActionRequest> , Standard_Transient>(m,"StepBasic_VersionedActionRequest",R"#(Representation of STEP entity VersionedActionRequestRepresentation of STEP entity VersionedActionRequestRepresentation of STEP entity VersionedActionRequest)#");
    py::class_<StepBasic_AreaUnit ,opencascade::handle<StepBasic_AreaUnit> , StepBasic_NamedUnit>(m,"StepBasic_AreaUnit",R"#()#");
    py::class_<StepBasic_CalendarDate ,opencascade::handle<StepBasic_CalendarDate> , StepBasic_Date>(m,"StepBasic_CalendarDate",R"#()#");
    py::class_<StepBasic_ConversionBasedUnit ,opencascade::handle<StepBasic_ConversionBasedUnit> , StepBasic_NamedUnit>(m,"StepBasic_ConversionBasedUnit",R"#()#");
    py::class_<StepBasic_DigitalDocument ,opencascade::handle<StepBasic_DigitalDocument> , StepBasic_Document>(m,"StepBasic_DigitalDocument",R"#()#");
    py::class_<StepBasic_DocumentFile ,opencascade::handle<StepBasic_DocumentFile> , StepBasic_Document>(m,"StepBasic_DocumentFile",R"#(Representation of STEP entity DocumentFileRepresentation of STEP entity DocumentFileRepresentation of STEP entity DocumentFile)#");
    py::class_<StepBasic_DocumentProductEquivalence ,opencascade::handle<StepBasic_DocumentProductEquivalence> , StepBasic_DocumentProductAssociation>(m,"StepBasic_DocumentProductEquivalence",R"#(Representation of STEP entity DocumentProductEquivalenceRepresentation of STEP entity DocumentProductEquivalenceRepresentation of STEP entity DocumentProductEquivalence)#");
    py::class_<StepBasic_ExternalIdentificationAssignment ,opencascade::handle<StepBasic_ExternalIdentificationAssignment> , StepBasic_IdentificationAssignment>(m,"StepBasic_ExternalIdentificationAssignment",R"#(Representation of STEP entity ExternalIdentificationAssignmentRepresentation of STEP entity ExternalIdentificationAssignmentRepresentation of STEP entity ExternalIdentificationAssignment)#");
    py::class_<StepBasic_LengthMeasureWithUnit ,opencascade::handle<StepBasic_LengthMeasureWithUnit> , StepBasic_MeasureWithUnit>(m,"StepBasic_LengthMeasureWithUnit",R"#()#");
    py::class_<StepBasic_LengthUnit ,opencascade::handle<StepBasic_LengthUnit> , StepBasic_NamedUnit>(m,"StepBasic_LengthUnit",R"#()#");
    py::class_<StepBasic_MassMeasureWithUnit ,opencascade::handle<StepBasic_MassMeasureWithUnit> , StepBasic_MeasureWithUnit>(m,"StepBasic_MassMeasureWithUnit",R"#()#");
    py::class_<StepBasic_MassUnit ,opencascade::handle<StepBasic_MassUnit> , StepBasic_NamedUnit>(m,"StepBasic_MassUnit",R"#(Representation of STEP entity MassUnitRepresentation of STEP entity MassUnitRepresentation of STEP entity MassUnit)#");
    py::class_<StepBasic_OrdinalDate ,opencascade::handle<StepBasic_OrdinalDate> , StepBasic_Date>(m,"StepBasic_OrdinalDate",R"#()#");
    py::class_<StepBasic_OrganizationalAddress ,opencascade::handle<StepBasic_OrganizationalAddress> , StepBasic_Address>(m,"StepBasic_OrganizationalAddress",R"#()#");
    py::class_<StepBasic_PersonalAddress ,opencascade::handle<StepBasic_PersonalAddress> , StepBasic_Address>(m,"StepBasic_PersonalAddress",R"#()#");
    py::class_<StepBasic_PhysicallyModeledProductDefinition ,opencascade::handle<StepBasic_PhysicallyModeledProductDefinition> , StepBasic_ProductDefinition>(m,"StepBasic_PhysicallyModeledProductDefinition",R"#()#");
    py::class_<StepBasic_PlaneAngleMeasureWithUnit ,opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> , StepBasic_MeasureWithUnit>(m,"StepBasic_PlaneAngleMeasureWithUnit",R"#()#");
    py::class_<StepBasic_PlaneAngleUnit ,opencascade::handle<StepBasic_PlaneAngleUnit> , StepBasic_NamedUnit>(m,"StepBasic_PlaneAngleUnit",R"#()#");
    py::class_<StepBasic_ProductConceptContext ,opencascade::handle<StepBasic_ProductConceptContext> , StepBasic_ApplicationContextElement>(m,"StepBasic_ProductConceptContext",R"#(Representation of STEP entity ProductConceptContextRepresentation of STEP entity ProductConceptContextRepresentation of STEP entity ProductConceptContext)#");
    py::class_<StepBasic_ProductContext ,opencascade::handle<StepBasic_ProductContext> , StepBasic_ApplicationContextElement>(m,"StepBasic_ProductContext",R"#()#");
    py::class_<StepBasic_ProductDefinitionContext ,opencascade::handle<StepBasic_ProductDefinitionContext> , StepBasic_ApplicationContextElement>(m,"StepBasic_ProductDefinitionContext",R"#()#");
    py::class_<StepBasic_ProductDefinitionEffectivity ,opencascade::handle<StepBasic_ProductDefinitionEffectivity> , StepBasic_Effectivity>(m,"StepBasic_ProductDefinitionEffectivity",R"#()#");
    py::class_<StepBasic_ProductDefinitionFormationWithSpecifiedSource ,opencascade::handle<StepBasic_ProductDefinitionFormationWithSpecifiedSource> , StepBasic_ProductDefinitionFormation>(m,"StepBasic_ProductDefinitionFormationWithSpecifiedSource",R"#()#");
    py::class_<StepBasic_ProductDefinitionReferenceWithLocalRepresentation ,opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation> , StepBasic_ProductDefinition>(m,"StepBasic_ProductDefinitionReferenceWithLocalRepresentation",R"#()#");
    py::class_<StepBasic_ProductDefinitionWithAssociatedDocuments ,opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> , StepBasic_ProductDefinition>(m,"StepBasic_ProductDefinitionWithAssociatedDocuments",R"#()#");
    py::class_<StepBasic_ProductRelatedProductCategory ,opencascade::handle<StepBasic_ProductRelatedProductCategory> , StepBasic_ProductCategory>(m,"StepBasic_ProductRelatedProductCategory",R"#()#");
    py::class_<StepBasic_RatioMeasureWithUnit ,opencascade::handle<StepBasic_RatioMeasureWithUnit> , StepBasic_MeasureWithUnit>(m,"StepBasic_RatioMeasureWithUnit",R"#()#");
    py::class_<StepBasic_RatioUnit ,opencascade::handle<StepBasic_RatioUnit> , StepBasic_NamedUnit>(m,"StepBasic_RatioUnit",R"#()#");
    py::class_<StepBasic_SiUnit ,opencascade::handle<StepBasic_SiUnit> , StepBasic_NamedUnit>(m,"StepBasic_SiUnit",R"#()#");
    py::class_<StepBasic_SolidAngleMeasureWithUnit ,opencascade::handle<StepBasic_SolidAngleMeasureWithUnit> , StepBasic_MeasureWithUnit>(m,"StepBasic_SolidAngleMeasureWithUnit",R"#()#");
    py::class_<StepBasic_SolidAngleUnit ,opencascade::handle<StepBasic_SolidAngleUnit> , StepBasic_NamedUnit>(m,"StepBasic_SolidAngleUnit",R"#()#");
    py::class_<StepBasic_ThermodynamicTemperatureUnit ,opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> , StepBasic_NamedUnit>(m,"StepBasic_ThermodynamicTemperatureUnit",R"#(Representation of STEP entity ThermodynamicTemperatureUnitRepresentation of STEP entity ThermodynamicTemperatureUnitRepresentation of STEP entity ThermodynamicTemperatureUnit)#");
    py::class_<StepBasic_TimeMeasureWithUnit ,opencascade::handle<StepBasic_TimeMeasureWithUnit> , StepBasic_MeasureWithUnit>(m,"StepBasic_TimeMeasureWithUnit",R"#()#");
    py::class_<StepBasic_TimeUnit ,opencascade::handle<StepBasic_TimeUnit> , StepBasic_NamedUnit>(m,"StepBasic_TimeUnit",R"#()#");
    py::class_<StepBasic_UncertaintyMeasureWithUnit ,opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> , StepBasic_MeasureWithUnit>(m,"StepBasic_UncertaintyMeasureWithUnit",R"#()#");
    py::class_<StepBasic_VolumeUnit ,opencascade::handle<StepBasic_VolumeUnit> , StepBasic_NamedUnit>(m,"StepBasic_VolumeUnit",R"#()#");
    py::class_<StepBasic_WeekOfYearAndDayDate ,opencascade::handle<StepBasic_WeekOfYearAndDayDate> , StepBasic_Date>(m,"StepBasic_WeekOfYearAndDayDate",R"#()#");
    py::class_<StepBasic_ConversionBasedUnitAndAreaUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndAreaUnit> , StepBasic_ConversionBasedUnit>(m,"StepBasic_ConversionBasedUnitAndAreaUnit",R"#()#");
    py::class_<StepBasic_ConversionBasedUnitAndLengthUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndLengthUnit> , StepBasic_ConversionBasedUnit>(m,"StepBasic_ConversionBasedUnitAndLengthUnit",R"#()#");
    py::class_<StepBasic_ConversionBasedUnitAndMassUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndMassUnit> , StepBasic_ConversionBasedUnit>(m,"StepBasic_ConversionBasedUnitAndMassUnit",R"#()#");
    py::class_<StepBasic_ConversionBasedUnitAndPlaneAngleUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndPlaneAngleUnit> , StepBasic_ConversionBasedUnit>(m,"StepBasic_ConversionBasedUnitAndPlaneAngleUnit",R"#()#");
    py::class_<StepBasic_ConversionBasedUnitAndRatioUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndRatioUnit> , StepBasic_ConversionBasedUnit>(m,"StepBasic_ConversionBasedUnitAndRatioUnit",R"#()#");
    py::class_<StepBasic_ConversionBasedUnitAndSolidAngleUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndSolidAngleUnit> , StepBasic_ConversionBasedUnit>(m,"StepBasic_ConversionBasedUnitAndSolidAngleUnit",R"#()#");
    py::class_<StepBasic_ConversionBasedUnitAndTimeUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndTimeUnit> , StepBasic_ConversionBasedUnit>(m,"StepBasic_ConversionBasedUnitAndTimeUnit",R"#()#");
    py::class_<StepBasic_ConversionBasedUnitAndVolumeUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndVolumeUnit> , StepBasic_ConversionBasedUnit>(m,"StepBasic_ConversionBasedUnitAndVolumeUnit",R"#()#");
    py::class_<StepBasic_DesignContext ,opencascade::handle<StepBasic_DesignContext> , StepBasic_ProductDefinitionContext>(m,"StepBasic_DesignContext",R"#(class added to Schema AP214 around April 1996class added to Schema AP214 around April 1996class added to Schema AP214 around April 1996)#");
    py::class_<StepBasic_MechanicalContext ,opencascade::handle<StepBasic_MechanicalContext> , StepBasic_ProductContext>(m,"StepBasic_MechanicalContext",R"#()#");
    py::class_<StepBasic_ProductType ,opencascade::handle<StepBasic_ProductType> , StepBasic_ProductRelatedProductCategory>(m,"StepBasic_ProductType",R"#()#");
    py::class_<StepBasic_SiUnitAndAreaUnit ,opencascade::handle<StepBasic_SiUnitAndAreaUnit> , StepBasic_SiUnit>(m,"StepBasic_SiUnitAndAreaUnit",R"#()#");
    py::class_<StepBasic_SiUnitAndLengthUnit ,opencascade::handle<StepBasic_SiUnitAndLengthUnit> , StepBasic_SiUnit>(m,"StepBasic_SiUnitAndLengthUnit",R"#()#");
    py::class_<StepBasic_SiUnitAndMassUnit ,opencascade::handle<StepBasic_SiUnitAndMassUnit> , StepBasic_SiUnit>(m,"StepBasic_SiUnitAndMassUnit",R"#()#");
    py::class_<StepBasic_SiUnitAndPlaneAngleUnit ,opencascade::handle<StepBasic_SiUnitAndPlaneAngleUnit> , StepBasic_SiUnit>(m,"StepBasic_SiUnitAndPlaneAngleUnit",R"#()#");
    py::class_<StepBasic_SiUnitAndRatioUnit ,opencascade::handle<StepBasic_SiUnitAndRatioUnit> , StepBasic_SiUnit>(m,"StepBasic_SiUnitAndRatioUnit",R"#()#");
    py::class_<StepBasic_SiUnitAndSolidAngleUnit ,opencascade::handle<StepBasic_SiUnitAndSolidAngleUnit> , StepBasic_SiUnit>(m,"StepBasic_SiUnitAndSolidAngleUnit",R"#()#");
    py::class_<StepBasic_SiUnitAndThermodynamicTemperatureUnit ,opencascade::handle<StepBasic_SiUnitAndThermodynamicTemperatureUnit> , StepBasic_SiUnit>(m,"StepBasic_SiUnitAndThermodynamicTemperatureUnit",R"#()#");
    py::class_<StepBasic_SiUnitAndTimeUnit ,opencascade::handle<StepBasic_SiUnitAndTimeUnit> , StepBasic_SiUnit>(m,"StepBasic_SiUnitAndTimeUnit",R"#()#");
    py::class_<StepBasic_SiUnitAndVolumeUnit ,opencascade::handle<StepBasic_SiUnitAndVolumeUnit> , StepBasic_SiUnit>(m,"StepBasic_SiUnitAndVolumeUnit",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
