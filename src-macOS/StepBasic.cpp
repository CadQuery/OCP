
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_OrganizationRole.hxx>
#include <StepBasic_AreaUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionReference.hxx>
#include <StepBasic_ProductDefinitionReferenceWithLocalRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ActionMethod.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_ActionMethod.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_RatioUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_AreaUnit.hxx>
#include <StepData_SelectMember.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepBasic_DerivedUnit.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_Contract.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Person.hxx>
#include <StepBasic_Organization.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Certification.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_Approval.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ThermodynamicTemperatureUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_Action.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Person.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_CoordinatedUniversalTimeOffset.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_ObjectRole.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MassUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_Effectivity.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_LocalTime.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_VolumeUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_SecurityClassificationLevel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_MassUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_VolumeUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_TimeUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_SolidAngleUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepBasic_RatioUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ApprovalRole.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_CertificationType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_TimeUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_DocumentType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_ApprovalStatus.hxx>
#include <TCollection_HAsciiString.hxx>
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
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ContractType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepBasic_SolidAngleUnit.hxx>
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
// ./opencascade/StepBasic_Array1OfApproval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepBasic_Array1OfOrganization.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepBasic_Array1OfUncertaintyMeasureWithUnit.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepBasic_Array1OfDocument.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepBasic_Array1OfNamedUnit.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepBasic_Array1OfProduct.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepBasic_Array1OfDerivedUnitElement.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepBasic_Array1OfPerson.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepBasic_Array1OfProductDefinition.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepBasic_Array1OfProductContext.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepBasic(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepBasic"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepBasic_Action ,opencascade::handle<StepBasic_Action> , Standard_Transient>>(m.attr("StepBasic_Action"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Action::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Action::*)() const>(&StepBasic_Action::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Action::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ActionAssignment ,opencascade::handle<StepBasic_ActionAssignment> , Standard_Transient>>(m.attr("StepBasic_ActionAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ActionAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ActionAssignment::*)() const>(&StepBasic_ActionAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ActionAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ActionMethod ,opencascade::handle<StepBasic_ActionMethod> , Standard_Transient>>(m.attr("StepBasic_ActionMethod"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ActionMethod::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ActionMethod::*)() const>(&StepBasic_ActionMethod::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ActionMethod::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ActionRequestAssignment ,opencascade::handle<StepBasic_ActionRequestAssignment> , Standard_Transient>>(m.attr("StepBasic_ActionRequestAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ActionRequestAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ActionRequestAssignment::*)() const>(&StepBasic_ActionRequestAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ActionRequestAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ActionRequestSolution ,opencascade::handle<StepBasic_ActionRequestSolution> , Standard_Transient>>(m.attr("StepBasic_ActionRequestSolution"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ActionRequestSolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ActionRequestSolution::*)() const>(&StepBasic_ActionRequestSolution::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ActionRequestSolution::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Address ,opencascade::handle<StepBasic_Address> , Standard_Transient>>(m.attr("StepBasic_Address"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Address::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Address::*)() const>(&StepBasic_Address::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Address::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ApplicationContext ,opencascade::handle<StepBasic_ApplicationContext> , Standard_Transient>>(m.attr("StepBasic_ApplicationContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApplicationContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApplicationContext::*)() const>(&StepBasic_ApplicationContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApplicationContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ApplicationContextElement ,opencascade::handle<StepBasic_ApplicationContextElement> , Standard_Transient>>(m.attr("StepBasic_ApplicationContextElement"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApplicationContextElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApplicationContextElement::*)() const>(&StepBasic_ApplicationContextElement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApplicationContextElement::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ApplicationProtocolDefinition ,opencascade::handle<StepBasic_ApplicationProtocolDefinition> , Standard_Transient>>(m.attr("StepBasic_ApplicationProtocolDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApplicationProtocolDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApplicationProtocolDefinition::*)() const>(&StepBasic_ApplicationProtocolDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApplicationProtocolDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Approval ,opencascade::handle<StepBasic_Approval> , Standard_Transient>>(m.attr("StepBasic_Approval"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Approval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Approval::*)() const>(&StepBasic_Approval::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Approval::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StepBasic_ApprovalAssignment ,opencascade::handle<StepBasic_ApprovalAssignment>>(m,"StepBasic_ApprovalAssignment");

    static_cast<py::class_<StepBasic_ApprovalAssignment ,opencascade::handle<StepBasic_ApprovalAssignment> , Standard_Transient>>(m.attr("StepBasic_ApprovalAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalAssignment::*)() const>(&StepBasic_ApprovalAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ApprovalDateTime ,opencascade::handle<StepBasic_ApprovalDateTime> , Standard_Transient>>(m.attr("StepBasic_ApprovalDateTime"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalDateTime::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalDateTime::*)() const>(&StepBasic_ApprovalDateTime::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalDateTime::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ApprovalPersonOrganization ,opencascade::handle<StepBasic_ApprovalPersonOrganization> , Standard_Transient>>(m.attr("StepBasic_ApprovalPersonOrganization"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalPersonOrganization::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalPersonOrganization::*)() const>(&StepBasic_ApprovalPersonOrganization::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalPersonOrganization::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ApprovalRelationship ,opencascade::handle<StepBasic_ApprovalRelationship> , Standard_Transient>>(m.attr("StepBasic_ApprovalRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalRelationship::*)() const>(&StepBasic_ApprovalRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ApprovalRole ,opencascade::handle<StepBasic_ApprovalRole> , Standard_Transient>>(m.attr("StepBasic_ApprovalRole"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalRole::*)() const>(&StepBasic_ApprovalRole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalRole::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ApprovalStatus ,opencascade::handle<StepBasic_ApprovalStatus> , Standard_Transient>>(m.attr("StepBasic_ApprovalStatus"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ApprovalStatus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ApprovalStatus::*)() const>(&StepBasic_ApprovalStatus::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ApprovalStatus::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Certification ,opencascade::handle<StepBasic_Certification> , Standard_Transient>>(m.attr("StepBasic_Certification"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Certification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Certification::*)() const>(&StepBasic_Certification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Certification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_CertificationAssignment ,opencascade::handle<StepBasic_CertificationAssignment> , Standard_Transient>>(m.attr("StepBasic_CertificationAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_CertificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_CertificationAssignment::*)() const>(&StepBasic_CertificationAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_CertificationAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_CertificationType ,opencascade::handle<StepBasic_CertificationType> , Standard_Transient>>(m.attr("StepBasic_CertificationType"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_CertificationType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_CertificationType::*)() const>(&StepBasic_CertificationType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_CertificationType::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_CharacterizedObject ,opencascade::handle<StepBasic_CharacterizedObject> , Standard_Transient>>(m.attr("StepBasic_CharacterizedObject"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_CharacterizedObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_CharacterizedObject::*)() const>(&StepBasic_CharacterizedObject::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_CharacterizedObject::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Contract ,opencascade::handle<StepBasic_Contract> , Standard_Transient>>(m.attr("StepBasic_Contract"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Contract::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Contract::*)() const>(&StepBasic_Contract::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Contract::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ContractAssignment ,opencascade::handle<StepBasic_ContractAssignment> , Standard_Transient>>(m.attr("StepBasic_ContractAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ContractAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ContractAssignment::*)() const>(&StepBasic_ContractAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ContractAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ContractType ,opencascade::handle<StepBasic_ContractType> , Standard_Transient>>(m.attr("StepBasic_ContractType"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ContractType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ContractType::*)() const>(&StepBasic_ContractType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ContractType::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_CoordinatedUniversalTimeOffset ,opencascade::handle<StepBasic_CoordinatedUniversalTimeOffset> , Standard_Transient>>(m.attr("StepBasic_CoordinatedUniversalTimeOffset"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_CoordinatedUniversalTimeOffset::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_CoordinatedUniversalTimeOffset::*)() const>(&StepBasic_CoordinatedUniversalTimeOffset::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_CoordinatedUniversalTimeOffset::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Date ,opencascade::handle<StepBasic_Date> , Standard_Transient>>(m.attr("StepBasic_Date"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Date::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Date::*)() const>(&StepBasic_Date::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Date::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DateAndTime ,opencascade::handle<StepBasic_DateAndTime> , Standard_Transient>>(m.attr("StepBasic_DateAndTime"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DateAndTime::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DateAndTime::*)() const>(&StepBasic_DateAndTime::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DateAndTime::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StepBasic_DateAndTimeAssignment ,opencascade::handle<StepBasic_DateAndTimeAssignment>>(m,"StepBasic_DateAndTimeAssignment");

    static_cast<py::class_<StepBasic_DateAndTimeAssignment ,opencascade::handle<StepBasic_DateAndTimeAssignment> , Standard_Transient>>(m.attr("StepBasic_DateAndTimeAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DateAndTimeAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DateAndTimeAssignment::*)() const>(&StepBasic_DateAndTimeAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DateAndTimeAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StepBasic_DateAssignment ,opencascade::handle<StepBasic_DateAssignment>>(m,"StepBasic_DateAssignment");

    static_cast<py::class_<StepBasic_DateAssignment ,opencascade::handle<StepBasic_DateAssignment> , Standard_Transient>>(m.attr("StepBasic_DateAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DateAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DateAssignment::*)() const>(&StepBasic_DateAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DateAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DateRole ,opencascade::handle<StepBasic_DateRole> , Standard_Transient>>(m.attr("StepBasic_DateRole"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DateRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DateRole::*)() const>(&StepBasic_DateRole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DateRole::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DateTimeRole ,opencascade::handle<StepBasic_DateTimeRole> , Standard_Transient>>(m.attr("StepBasic_DateTimeRole"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DateTimeRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DateTimeRole::*)() const>(&StepBasic_DateTimeRole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DateTimeRole::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DateTimeSelect , shared_ptr<StepBasic_DateTimeSelect> , StepData_SelectType>>(m.attr("StepBasic_DateTimeSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepBasic_DateTimeSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepBasic_DateTimeSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepBasic_DateTimeSelect::CaseNum),
             R"#(Recognizes a DateTimeSelect Kind Entity that is : 1 -> Date 2 -> LocalTime 3 -> DateAndTime 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DerivedUnit ,opencascade::handle<StepBasic_DerivedUnit> , Standard_Transient>>(m.attr("StepBasic_DerivedUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DerivedUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DerivedUnit::*)() const>(&StepBasic_DerivedUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DerivedUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DerivedUnitElement ,opencascade::handle<StepBasic_DerivedUnitElement> , Standard_Transient>>(m.attr("StepBasic_DerivedUnitElement"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DerivedUnitElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DerivedUnitElement::*)() const>(&StepBasic_DerivedUnitElement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DerivedUnitElement::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DimensionalExponents ,opencascade::handle<StepBasic_DimensionalExponents> , Standard_Transient>>(m.attr("StepBasic_DimensionalExponents"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DimensionalExponents::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DimensionalExponents::*)() const>(&StepBasic_DimensionalExponents::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DimensionalExponents::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Document ,opencascade::handle<StepBasic_Document> , Standard_Transient>>(m.attr("StepBasic_Document"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Document::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Document::*)() const>(&StepBasic_Document::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Document::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DocumentProductAssociation ,opencascade::handle<StepBasic_DocumentProductAssociation> , Standard_Transient>>(m.attr("StepBasic_DocumentProductAssociation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentProductAssociation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentProductAssociation::*)() const>(&StepBasic_DocumentProductAssociation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentProductAssociation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StepBasic_DocumentReference ,opencascade::handle<StepBasic_DocumentReference>>(m,"StepBasic_DocumentReference");

    static_cast<py::class_<StepBasic_DocumentReference ,opencascade::handle<StepBasic_DocumentReference> , Standard_Transient>>(m.attr("StepBasic_DocumentReference"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentReference::*)() const>(&StepBasic_DocumentReference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentReference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DocumentRelationship ,opencascade::handle<StepBasic_DocumentRelationship> , Standard_Transient>>(m.attr("StepBasic_DocumentRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentRelationship::*)() const>(&StepBasic_DocumentRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DocumentRepresentationType ,opencascade::handle<StepBasic_DocumentRepresentationType> , Standard_Transient>>(m.attr("StepBasic_DocumentRepresentationType"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentRepresentationType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentRepresentationType::*)() const>(&StepBasic_DocumentRepresentationType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentRepresentationType::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DocumentType ,opencascade::handle<StepBasic_DocumentType> , Standard_Transient>>(m.attr("StepBasic_DocumentType"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentType::*)() const>(&StepBasic_DocumentType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentType::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DocumentUsageConstraint ,opencascade::handle<StepBasic_DocumentUsageConstraint> , Standard_Transient>>(m.attr("StepBasic_DocumentUsageConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentUsageConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentUsageConstraint::*)() const>(&StepBasic_DocumentUsageConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentUsageConstraint::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Effectivity ,opencascade::handle<StepBasic_Effectivity> , Standard_Transient>>(m.attr("StepBasic_Effectivity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Effectivity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Effectivity::*)() const>(&StepBasic_Effectivity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Effectivity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_EffectivityAssignment ,opencascade::handle<StepBasic_EffectivityAssignment> , Standard_Transient>>(m.attr("StepBasic_EffectivityAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_EffectivityAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_EffectivityAssignment::*)() const>(&StepBasic_EffectivityAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_EffectivityAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_EulerAngles ,opencascade::handle<StepBasic_EulerAngles> , Standard_Transient>>(m.attr("StepBasic_EulerAngles"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_EulerAngles::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_EulerAngles::*)() const>(&StepBasic_EulerAngles::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_EulerAngles::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ExternalSource ,opencascade::handle<StepBasic_ExternalSource> , Standard_Transient>>(m.attr("StepBasic_ExternalSource"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ExternalSource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ExternalSource::*)() const>(&StepBasic_ExternalSource::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ExternalSource::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ExternallyDefinedItem ,opencascade::handle<StepBasic_ExternallyDefinedItem> , Standard_Transient>>(m.attr("StepBasic_ExternallyDefinedItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ExternallyDefinedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ExternallyDefinedItem::*)() const>(&StepBasic_ExternallyDefinedItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ExternallyDefinedItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_GeneralProperty ,opencascade::handle<StepBasic_GeneralProperty> , Standard_Transient>>(m.attr("StepBasic_GeneralProperty"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_GeneralProperty::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_GeneralProperty::*)() const>(&StepBasic_GeneralProperty::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_GeneralProperty::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Group ,opencascade::handle<StepBasic_Group> , Standard_Transient>>(m.attr("StepBasic_Group"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Group::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Group::*)() const>(&StepBasic_Group::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Group::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_GroupAssignment ,opencascade::handle<StepBasic_GroupAssignment> , Standard_Transient>>(m.attr("StepBasic_GroupAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_GroupAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_GroupAssignment::*)() const>(&StepBasic_GroupAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_GroupAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_GroupRelationship ,opencascade::handle<StepBasic_GroupRelationship> , Standard_Transient>>(m.attr("StepBasic_GroupRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_GroupRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_GroupRelationship::*)() const>(&StepBasic_GroupRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_GroupRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_HArray1OfApproval ,opencascade::handle<StepBasic_HArray1OfApproval> , StepBasic_Array1OfApproval, Standard_Transient>>(m.attr("StepBasic_HArray1OfApproval"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_Approval> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_Approval> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepBasic_Array1OfApproval & (StepBasic_HArray1OfApproval::*)() const) static_cast<const StepBasic_Array1OfApproval & (StepBasic_HArray1OfApproval::*)() const>(&StepBasic_HArray1OfApproval::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfApproval & (StepBasic_HArray1OfApproval::*)() ) static_cast<StepBasic_Array1OfApproval & (StepBasic_HArray1OfApproval::*)() >(&StepBasic_HArray1OfApproval::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfApproval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfApproval::*)() const>(&StepBasic_HArray1OfApproval::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfApproval::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfApproval::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_HArray1OfDerivedUnitElement ,opencascade::handle<StepBasic_HArray1OfDerivedUnitElement> , StepBasic_Array1OfDerivedUnitElement, Standard_Transient>>(m.attr("StepBasic_HArray1OfDerivedUnitElement"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_DerivedUnitElement> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_DerivedUnitElement> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepBasic_Array1OfDerivedUnitElement & (StepBasic_HArray1OfDerivedUnitElement::*)() const) static_cast<const StepBasic_Array1OfDerivedUnitElement & (StepBasic_HArray1OfDerivedUnitElement::*)() const>(&StepBasic_HArray1OfDerivedUnitElement::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfDerivedUnitElement & (StepBasic_HArray1OfDerivedUnitElement::*)() ) static_cast<StepBasic_Array1OfDerivedUnitElement & (StepBasic_HArray1OfDerivedUnitElement::*)() >(&StepBasic_HArray1OfDerivedUnitElement::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfDerivedUnitElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfDerivedUnitElement::*)() const>(&StepBasic_HArray1OfDerivedUnitElement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfDerivedUnitElement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfDerivedUnitElement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_HArray1OfDocument ,opencascade::handle<StepBasic_HArray1OfDocument> , StepBasic_Array1OfDocument, Standard_Transient>>(m.attr("StepBasic_HArray1OfDocument"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_Document> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_Document> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepBasic_Array1OfDocument & (StepBasic_HArray1OfDocument::*)() const) static_cast<const StepBasic_Array1OfDocument & (StepBasic_HArray1OfDocument::*)() const>(&StepBasic_HArray1OfDocument::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfDocument & (StepBasic_HArray1OfDocument::*)() ) static_cast<StepBasic_Array1OfDocument & (StepBasic_HArray1OfDocument::*)() >(&StepBasic_HArray1OfDocument::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfDocument::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfDocument::*)() const>(&StepBasic_HArray1OfDocument::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfDocument::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfDocument::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_HArray1OfNamedUnit ,opencascade::handle<StepBasic_HArray1OfNamedUnit> , StepBasic_Array1OfNamedUnit, Standard_Transient>>(m.attr("StepBasic_HArray1OfNamedUnit"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_NamedUnit> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_NamedUnit> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepBasic_Array1OfNamedUnit & (StepBasic_HArray1OfNamedUnit::*)() const) static_cast<const StepBasic_Array1OfNamedUnit & (StepBasic_HArray1OfNamedUnit::*)() const>(&StepBasic_HArray1OfNamedUnit::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfNamedUnit & (StepBasic_HArray1OfNamedUnit::*)() ) static_cast<StepBasic_Array1OfNamedUnit & (StepBasic_HArray1OfNamedUnit::*)() >(&StepBasic_HArray1OfNamedUnit::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfNamedUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfNamedUnit::*)() const>(&StepBasic_HArray1OfNamedUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfNamedUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfNamedUnit::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_HArray1OfOrganization ,opencascade::handle<StepBasic_HArray1OfOrganization> , StepBasic_Array1OfOrganization, Standard_Transient>>(m.attr("StepBasic_HArray1OfOrganization"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_Organization> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_Organization> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepBasic_Array1OfOrganization & (StepBasic_HArray1OfOrganization::*)() const) static_cast<const StepBasic_Array1OfOrganization & (StepBasic_HArray1OfOrganization::*)() const>(&StepBasic_HArray1OfOrganization::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfOrganization & (StepBasic_HArray1OfOrganization::*)() ) static_cast<StepBasic_Array1OfOrganization & (StepBasic_HArray1OfOrganization::*)() >(&StepBasic_HArray1OfOrganization::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfOrganization::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfOrganization::*)() const>(&StepBasic_HArray1OfOrganization::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfOrganization::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfOrganization::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_HArray1OfPerson ,opencascade::handle<StepBasic_HArray1OfPerson> , StepBasic_Array1OfPerson, Standard_Transient>>(m.attr("StepBasic_HArray1OfPerson"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_Person> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_Person> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepBasic_Array1OfPerson & (StepBasic_HArray1OfPerson::*)() const) static_cast<const StepBasic_Array1OfPerson & (StepBasic_HArray1OfPerson::*)() const>(&StepBasic_HArray1OfPerson::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfPerson & (StepBasic_HArray1OfPerson::*)() ) static_cast<StepBasic_Array1OfPerson & (StepBasic_HArray1OfPerson::*)() >(&StepBasic_HArray1OfPerson::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfPerson::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfPerson::*)() const>(&StepBasic_HArray1OfPerson::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfPerson::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfPerson::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_HArray1OfProduct ,opencascade::handle<StepBasic_HArray1OfProduct> , StepBasic_Array1OfProduct, Standard_Transient>>(m.attr("StepBasic_HArray1OfProduct"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_Product> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_Product> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepBasic_Array1OfProduct & (StepBasic_HArray1OfProduct::*)() const) static_cast<const StepBasic_Array1OfProduct & (StepBasic_HArray1OfProduct::*)() const>(&StepBasic_HArray1OfProduct::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfProduct & (StepBasic_HArray1OfProduct::*)() ) static_cast<StepBasic_Array1OfProduct & (StepBasic_HArray1OfProduct::*)() >(&StepBasic_HArray1OfProduct::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProduct::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProduct::*)() const>(&StepBasic_HArray1OfProduct::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfProduct::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfProduct::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_HArray1OfProductContext ,opencascade::handle<StepBasic_HArray1OfProductContext> , StepBasic_Array1OfProductContext, Standard_Transient>>(m.attr("StepBasic_HArray1OfProductContext"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_ProductContext> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_ProductContext> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepBasic_Array1OfProductContext & (StepBasic_HArray1OfProductContext::*)() const) static_cast<const StepBasic_Array1OfProductContext & (StepBasic_HArray1OfProductContext::*)() const>(&StepBasic_HArray1OfProductContext::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfProductContext & (StepBasic_HArray1OfProductContext::*)() ) static_cast<StepBasic_Array1OfProductContext & (StepBasic_HArray1OfProductContext::*)() >(&StepBasic_HArray1OfProductContext::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProductContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProductContext::*)() const>(&StepBasic_HArray1OfProductContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfProductContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfProductContext::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_HArray1OfProductDefinition ,opencascade::handle<StepBasic_HArray1OfProductDefinition> , StepBasic_Array1OfProductDefinition, Standard_Transient>>(m.attr("StepBasic_HArray1OfProductDefinition"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_ProductDefinition> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_ProductDefinition> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepBasic_Array1OfProductDefinition & (StepBasic_HArray1OfProductDefinition::*)() const) static_cast<const StepBasic_Array1OfProductDefinition & (StepBasic_HArray1OfProductDefinition::*)() const>(&StepBasic_HArray1OfProductDefinition::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfProductDefinition & (StepBasic_HArray1OfProductDefinition::*)() ) static_cast<StepBasic_Array1OfProductDefinition & (StepBasic_HArray1OfProductDefinition::*)() >(&StepBasic_HArray1OfProductDefinition::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProductDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfProductDefinition::*)() const>(&StepBasic_HArray1OfProductDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfProductDefinition::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfProductDefinition::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_HArray1OfUncertaintyMeasureWithUnit ,opencascade::handle<StepBasic_HArray1OfUncertaintyMeasureWithUnit> , StepBasic_Array1OfUncertaintyMeasureWithUnit, Standard_Transient>>(m.attr("StepBasic_HArray1OfUncertaintyMeasureWithUnit"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepBasic_Array1OfUncertaintyMeasureWithUnit & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() const) static_cast<const StepBasic_Array1OfUncertaintyMeasureWithUnit & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() const>(&StepBasic_HArray1OfUncertaintyMeasureWithUnit::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepBasic_Array1OfUncertaintyMeasureWithUnit & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() ) static_cast<StepBasic_Array1OfUncertaintyMeasureWithUnit & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() >(&StepBasic_HArray1OfUncertaintyMeasureWithUnit::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_HArray1OfUncertaintyMeasureWithUnit::*)() const>(&StepBasic_HArray1OfUncertaintyMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_HArray1OfUncertaintyMeasureWithUnit::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepBasic_HArray1OfUncertaintyMeasureWithUnit::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_IdentificationAssignment ,opencascade::handle<StepBasic_IdentificationAssignment> , Standard_Transient>>(m.attr("StepBasic_IdentificationAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_IdentificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_IdentificationAssignment::*)() const>(&StepBasic_IdentificationAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_IdentificationAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_IdentificationRole ,opencascade::handle<StepBasic_IdentificationRole> , Standard_Transient>>(m.attr("StepBasic_IdentificationRole"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_IdentificationRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_IdentificationRole::*)() const>(&StepBasic_IdentificationRole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_IdentificationRole::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_LocalTime ,opencascade::handle<StepBasic_LocalTime> , Standard_Transient>>(m.attr("StepBasic_LocalTime"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_LocalTime::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_LocalTime::*)() const>(&StepBasic_LocalTime::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_LocalTime::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_MeasureValueMember ,opencascade::handle<StepBasic_MeasureValueMember> , StepData_SelectReal>>(m.attr("StepBasic_MeasureValueMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepBasic_MeasureValueMember::*)() const) static_cast<Standard_Boolean (StepBasic_MeasureValueMember::*)() const>(&StepBasic_MeasureValueMember::HasName),
             R"#(None)#" )
        .def("Name",
             (Standard_CString (StepBasic_MeasureValueMember::*)() const) static_cast<Standard_CString (StepBasic_MeasureValueMember::*)() const>(&StepBasic_MeasureValueMember::Name),
             R"#(None)#" )
        .def("SetName",
             (Standard_Boolean (StepBasic_MeasureValueMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepBasic_MeasureValueMember::*)( const Standard_CString ) >(&StepBasic_MeasureValueMember::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_MeasureValueMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_MeasureValueMember::*)() const>(&StepBasic_MeasureValueMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_MeasureValueMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_MeasureWithUnit ,opencascade::handle<StepBasic_MeasureWithUnit> , Standard_Transient>>(m.attr("StepBasic_MeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_MeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_MeasureWithUnit::*)() const>(&StepBasic_MeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_MeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_NameAssignment ,opencascade::handle<StepBasic_NameAssignment> , Standard_Transient>>(m.attr("StepBasic_NameAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_NameAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_NameAssignment::*)() const>(&StepBasic_NameAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_NameAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_NamedUnit ,opencascade::handle<StepBasic_NamedUnit> , Standard_Transient>>(m.attr("StepBasic_NamedUnit"))
    // constructors
    // custom constructors
    // methods
        .def("SetDimensions",
             (void (StepBasic_NamedUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ) ) static_cast<void (StepBasic_NamedUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ) >(&StepBasic_NamedUnit::SetDimensions),
             R"#(None)#"  , py::arg("aDimensions"))
        .def("Dimensions",
             (opencascade::handle<StepBasic_DimensionalExponents> (StepBasic_NamedUnit::*)() const) static_cast<opencascade::handle<StepBasic_DimensionalExponents> (StepBasic_NamedUnit::*)() const>(&StepBasic_NamedUnit::Dimensions),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_NamedUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_NamedUnit::*)() const>(&StepBasic_NamedUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_NamedUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ObjectRole ,opencascade::handle<StepBasic_ObjectRole> , Standard_Transient>>(m.attr("StepBasic_ObjectRole"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ObjectRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ObjectRole::*)() const>(&StepBasic_ObjectRole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ObjectRole::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Organization ,opencascade::handle<StepBasic_Organization> , Standard_Transient>>(m.attr("StepBasic_Organization"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Organization::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Organization::*)() const>(&StepBasic_Organization::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Organization::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StepBasic_OrganizationAssignment ,opencascade::handle<StepBasic_OrganizationAssignment>>(m,"StepBasic_OrganizationAssignment");

    static_cast<py::class_<StepBasic_OrganizationAssignment ,opencascade::handle<StepBasic_OrganizationAssignment> , Standard_Transient>>(m.attr("StepBasic_OrganizationAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_OrganizationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_OrganizationAssignment::*)() const>(&StepBasic_OrganizationAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_OrganizationAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_OrganizationRole ,opencascade::handle<StepBasic_OrganizationRole> , Standard_Transient>>(m.attr("StepBasic_OrganizationRole"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_OrganizationRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_OrganizationRole::*)() const>(&StepBasic_OrganizationRole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_OrganizationRole::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Person ,opencascade::handle<StepBasic_Person> , Standard_Transient>>(m.attr("StepBasic_Person"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Person::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Person::*)() const>(&StepBasic_Person::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Person::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_PersonAndOrganization ,opencascade::handle<StepBasic_PersonAndOrganization> , Standard_Transient>>(m.attr("StepBasic_PersonAndOrganization"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganization::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganization::*)() const>(&StepBasic_PersonAndOrganization::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PersonAndOrganization::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StepBasic_PersonAndOrganizationAssignment ,opencascade::handle<StepBasic_PersonAndOrganizationAssignment>>(m,"StepBasic_PersonAndOrganizationAssignment");

    static_cast<py::class_<StepBasic_PersonAndOrganizationAssignment ,opencascade::handle<StepBasic_PersonAndOrganizationAssignment> , Standard_Transient>>(m.attr("StepBasic_PersonAndOrganizationAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganizationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganizationAssignment::*)() const>(&StepBasic_PersonAndOrganizationAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PersonAndOrganizationAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_PersonAndOrganizationRole ,opencascade::handle<StepBasic_PersonAndOrganizationRole> , Standard_Transient>>(m.attr("StepBasic_PersonAndOrganizationRole"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganizationRole::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PersonAndOrganizationRole::*)() const>(&StepBasic_PersonAndOrganizationRole::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PersonAndOrganizationRole::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_PersonOrganizationSelect , shared_ptr<StepBasic_PersonOrganizationSelect> , StepData_SelectType>>(m.attr("StepBasic_PersonOrganizationSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepBasic_PersonOrganizationSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepBasic_PersonOrganizationSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepBasic_PersonOrganizationSelect::CaseNum),
             R"#(Recognizes a PersonOrganizationSelect Kind Entity that is : 1 -> Person 2 -> Organization 3 -> PersonAndOrganization 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Product ,opencascade::handle<StepBasic_Product> , Standard_Transient>>(m.attr("StepBasic_Product"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_Product::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_Product::*)() const>(&StepBasic_Product::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_Product::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductCategory ,opencascade::handle<StepBasic_ProductCategory> , Standard_Transient>>(m.attr("StepBasic_ProductCategory"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductCategory::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductCategory::*)() const>(&StepBasic_ProductCategory::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductCategory::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductCategoryRelationship ,opencascade::handle<StepBasic_ProductCategoryRelationship> , Standard_Transient>>(m.attr("StepBasic_ProductCategoryRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductCategoryRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductCategoryRelationship::*)() const>(&StepBasic_ProductCategoryRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductCategoryRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinition ,opencascade::handle<StepBasic_ProductDefinition> , Standard_Transient>>(m.attr("StepBasic_ProductDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinition::*)() const>(&StepBasic_ProductDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinitionFormation ,opencascade::handle<StepBasic_ProductDefinitionFormation> , Standard_Transient>>(m.attr("StepBasic_ProductDefinitionFormation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormation::*)() const>(&StepBasic_ProductDefinitionFormation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionFormation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinitionFormationRelationship ,opencascade::handle<StepBasic_ProductDefinitionFormationRelationship> , Standard_Transient>>(m.attr("StepBasic_ProductDefinitionFormationRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormationRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormationRelationship::*)() const>(&StepBasic_ProductDefinitionFormationRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionFormationRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinitionOrReference , shared_ptr<StepBasic_ProductDefinitionOrReference> , StepData_SelectType>>(m.attr("StepBasic_ProductDefinitionOrReference"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepBasic_ProductDefinitionOrReference::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepBasic_ProductDefinitionOrReference::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepBasic_ProductDefinitionOrReference::CaseNum),
             R"#(Recognizes a ProductDefinitionOrReference Kind Entity that is : 1 -> ProductDefinition 2 -> ProductDefinitionReference 3 -> ProductDefinitionReferenceWithLocalPresentation 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinitionReference ,opencascade::handle<StepBasic_ProductDefinitionReference> , Standard_Transient>>(m.attr("StepBasic_ProductDefinitionReference"))
    // constructors
    // custom constructors
    // methods
        .def("Source",
             (opencascade::handle<StepBasic_ExternalSource> (StepBasic_ProductDefinitionReference::*)() const) static_cast<opencascade::handle<StepBasic_ExternalSource> (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::Source),
             R"#(Returns field Source)#" )
        .def("SetSource",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<StepBasic_ExternalSource> & ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<StepBasic_ExternalSource> & ) >(&StepBasic_ProductDefinitionReference::SetSource),
             R"#(Set field Source)#"  , py::arg("theSource"))
        .def("ProductId",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::ProductId),
             R"#(Returns field ProductId)#" )
        .def("SetProductId",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepBasic_ProductDefinitionReference::SetProductId),
             R"#(Set field ProductId)#"  , py::arg("theProductId"))
        .def("ProductDefinitionFormationId",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::ProductDefinitionFormationId),
             R"#(Returns field ProductDefinitionFormationId)#" )
        .def("SetProductDefinitionFormationId",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepBasic_ProductDefinitionReference::SetProductDefinitionFormationId),
             R"#(Set field ProductDefinitionFormationId)#"  , py::arg("theProductDefinitionFormationId"))
        .def("ProductDefinitionId",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::ProductDefinitionId),
             R"#(Returns field ProductDefinitionId)#" )
        .def("SetProductDefinitionId",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepBasic_ProductDefinitionReference::SetProductDefinitionId),
             R"#(Set field ProductDefinitionId)#"  , py::arg("theProductDefinitionId"))
        .def("IdOwningOrganizationName",
             (opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::IdOwningOrganizationName),
             R"#(Returns field IdOwningOrganizationName)#" )
        .def("SetIdOwningOrganizationName",
             (void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepBasic_ProductDefinitionReference::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepBasic_ProductDefinitionReference::SetIdOwningOrganizationName),
             R"#(Set field IdOwningOrganizationName)#"  , py::arg("theIdOwningOrganizationName"))
        .def("HasIdOwningOrganizationName",
             (Standard_Boolean (StepBasic_ProductDefinitionReference::*)() const) static_cast<Standard_Boolean (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::HasIdOwningOrganizationName),
             R"#(Returns true if IdOwningOrganizationName exists)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionReference::*)() const>(&StepBasic_ProductDefinitionReference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionReference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinitionRelationship ,opencascade::handle<StepBasic_ProductDefinitionRelationship> , Standard_Transient>>(m.attr("StepBasic_ProductDefinitionRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionRelationship::*)() const>(&StepBasic_ProductDefinitionRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductOrFormationOrDefinition , shared_ptr<StepBasic_ProductOrFormationOrDefinition> , StepData_SelectType>>(m.attr("StepBasic_ProductOrFormationOrDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepBasic_ProductOrFormationOrDefinition::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepBasic_ProductOrFormationOrDefinition::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepBasic_ProductOrFormationOrDefinition::CaseNum),
             R"#(Recognizes a kind of ProductOrFormationOrDefinition select type 1 -> Product from StepBasic 2 -> ProductDefinitionFormation from StepBasic 3 -> ProductDefinition from StepBasic 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_RoleAssociation ,opencascade::handle<StepBasic_RoleAssociation> , Standard_Transient>>(m.attr("StepBasic_RoleAssociation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_RoleAssociation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_RoleAssociation::*)() const>(&StepBasic_RoleAssociation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_RoleAssociation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_RoleSelect , shared_ptr<StepBasic_RoleSelect> , StepData_SelectType>>(m.attr("StepBasic_RoleSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepBasic_RoleSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepBasic_RoleSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepBasic_RoleSelect::CaseNum),
             R"#(Recognizes a kind of RoleSelect select type 1 -> ActionAssignment from StepBasic 2 -> ActionRequestAssignment from StepBasic 3 -> ApprovalAssignment from StepBasic 4 -> ApprovalDateTime from StepBasic 5 -> CertificationAssignment from StepBasic 6 -> ContractAssignment from StepBasic 7 -> DocumentReference from StepBasic 8 -> EffectivityAssignment from StepBasic 9 -> GroupAssignment from StepBasic 10 -> NameAssignment from StepBasic 11 -> SecurityClassificationAssignment from StepBasic 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SecurityClassification ,opencascade::handle<StepBasic_SecurityClassification> , Standard_Transient>>(m.attr("StepBasic_SecurityClassification"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassification::*)() const>(&StepBasic_SecurityClassification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SecurityClassification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StepBasic_SecurityClassificationAssignment ,opencascade::handle<StepBasic_SecurityClassificationAssignment>>(m,"StepBasic_SecurityClassificationAssignment");

    static_cast<py::class_<StepBasic_SecurityClassificationAssignment ,opencascade::handle<StepBasic_SecurityClassificationAssignment> , Standard_Transient>>(m.attr("StepBasic_SecurityClassificationAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassificationAssignment::*)() const>(&StepBasic_SecurityClassificationAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SecurityClassificationAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SecurityClassificationLevel ,opencascade::handle<StepBasic_SecurityClassificationLevel> , Standard_Transient>>(m.attr("StepBasic_SecurityClassificationLevel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassificationLevel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SecurityClassificationLevel::*)() const>(&StepBasic_SecurityClassificationLevel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SecurityClassificationLevel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SizeMember ,opencascade::handle<StepBasic_SizeMember> , StepData_SelectReal>>(m.attr("StepBasic_SizeMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepBasic_SizeMember::*)() const) static_cast<Standard_Boolean (StepBasic_SizeMember::*)() const>(&StepBasic_SizeMember::HasName),
             R"#(None)#" )
        .def("Name",
             (Standard_CString (StepBasic_SizeMember::*)() const) static_cast<Standard_CString (StepBasic_SizeMember::*)() const>(&StepBasic_SizeMember::Name),
             R"#(None)#" )
        .def("SetName",
             (Standard_Boolean (StepBasic_SizeMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepBasic_SizeMember::*)( const Standard_CString ) >(&StepBasic_SizeMember::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SizeMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SizeMember::*)() const>(&StepBasic_SizeMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SizeMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SizeSelect , shared_ptr<StepBasic_SizeSelect> , StepData_SelectType>>(m.attr("StepBasic_SizeSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepBasic_SizeSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepBasic_SizeSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepBasic_SizeSelect::CaseNum),
             R"#(Recognizes a TrimmingSelect Kind Entity that is : 1 -> SizeMember 0 else (i.e. Real))#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepBasic_SizeSelect::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepBasic_SizeSelect::*)() const>(&StepBasic_SizeSelect::NewMember),
             R"#(Returns a SizeMember (POSITIVE_LENGTH_MEASURE) as preferred)#" )
        .def("CaseMem",
             (Standard_Integer (StepBasic_SizeSelect::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepBasic_SizeSelect::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepBasic_SizeSelect::CaseMem),
             R"#(Recognizes a SelectMember as Real, named as PARAMETER_VALUE 1 -> PositiveLengthMeasure i.e. Real 0 else (i.e. Entity))#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SourceItem , shared_ptr<StepBasic_SourceItem> , StepData_SelectType>>(m.attr("StepBasic_SourceItem"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepBasic_SourceItem::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepBasic_SourceItem::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepBasic_SourceItem::CaseNum),
             R"#(Recognizes a kind of SourceItem select type 1 -> HAsciiString from TCollection 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepBasic_SourceItem::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepBasic_SourceItem::*)() const>(&StepBasic_SourceItem::NewMember),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_Unit , shared_ptr<StepBasic_Unit> , StepData_SelectType>>(m.attr("StepBasic_Unit"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepBasic_Unit::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepBasic_Unit::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepBasic_Unit::CaseNum),
             R"#(Recognizes a type of Unit Entity 1 -> NamedUnit 2 -> DerivedUnit)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_VersionedActionRequest ,opencascade::handle<StepBasic_VersionedActionRequest> , Standard_Transient>>(m.attr("StepBasic_VersionedActionRequest"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_VersionedActionRequest::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_VersionedActionRequest::*)() const>(&StepBasic_VersionedActionRequest::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_VersionedActionRequest::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_AreaUnit ,opencascade::handle<StepBasic_AreaUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_AreaUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_AreaUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_AreaUnit::*)() const>(&StepBasic_AreaUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_AreaUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_CalendarDate ,opencascade::handle<StepBasic_CalendarDate> , StepBasic_Date>>(m.attr("StepBasic_CalendarDate"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_CalendarDate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_CalendarDate::*)() const>(&StepBasic_CalendarDate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_CalendarDate::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ConversionBasedUnit ,opencascade::handle<StepBasic_ConversionBasedUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_ConversionBasedUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnit::*)() const>(&StepBasic_ConversionBasedUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DigitalDocument ,opencascade::handle<StepBasic_DigitalDocument> , StepBasic_Document>>(m.attr("StepBasic_DigitalDocument"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DigitalDocument::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DigitalDocument::*)() const>(&StepBasic_DigitalDocument::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DigitalDocument::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DocumentFile ,opencascade::handle<StepBasic_DocumentFile> , StepBasic_Document>>(m.attr("StepBasic_DocumentFile"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentFile::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentFile::*)() const>(&StepBasic_DocumentFile::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentFile::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DocumentProductEquivalence ,opencascade::handle<StepBasic_DocumentProductEquivalence> , StepBasic_DocumentProductAssociation>>(m.attr("StepBasic_DocumentProductEquivalence"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DocumentProductEquivalence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DocumentProductEquivalence::*)() const>(&StepBasic_DocumentProductEquivalence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DocumentProductEquivalence::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ExternalIdentificationAssignment ,opencascade::handle<StepBasic_ExternalIdentificationAssignment> , StepBasic_IdentificationAssignment>>(m.attr("StepBasic_ExternalIdentificationAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ExternalIdentificationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ExternalIdentificationAssignment::*)() const>(&StepBasic_ExternalIdentificationAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ExternalIdentificationAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_LengthMeasureWithUnit ,opencascade::handle<StepBasic_LengthMeasureWithUnit> , StepBasic_MeasureWithUnit>>(m.attr("StepBasic_LengthMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_LengthMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_LengthMeasureWithUnit::*)() const>(&StepBasic_LengthMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_LengthMeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_LengthUnit ,opencascade::handle<StepBasic_LengthUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_LengthUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_LengthUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_LengthUnit::*)() const>(&StepBasic_LengthUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_LengthUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_MassMeasureWithUnit ,opencascade::handle<StepBasic_MassMeasureWithUnit> , StepBasic_MeasureWithUnit>>(m.attr("StepBasic_MassMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_MassMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_MassMeasureWithUnit::*)() const>(&StepBasic_MassMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_MassMeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_MassUnit ,opencascade::handle<StepBasic_MassUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_MassUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_MassUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_MassUnit::*)() const>(&StepBasic_MassUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_MassUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_OrdinalDate ,opencascade::handle<StepBasic_OrdinalDate> , StepBasic_Date>>(m.attr("StepBasic_OrdinalDate"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_OrdinalDate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_OrdinalDate::*)() const>(&StepBasic_OrdinalDate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_OrdinalDate::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_OrganizationalAddress ,opencascade::handle<StepBasic_OrganizationalAddress> , StepBasic_Address>>(m.attr("StepBasic_OrganizationalAddress"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_OrganizationalAddress::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_OrganizationalAddress::*)() const>(&StepBasic_OrganizationalAddress::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_OrganizationalAddress::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_PersonalAddress ,opencascade::handle<StepBasic_PersonalAddress> , StepBasic_Address>>(m.attr("StepBasic_PersonalAddress"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PersonalAddress::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PersonalAddress::*)() const>(&StepBasic_PersonalAddress::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PersonalAddress::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_PhysicallyModeledProductDefinition ,opencascade::handle<StepBasic_PhysicallyModeledProductDefinition> , StepBasic_ProductDefinition>>(m.attr("StepBasic_PhysicallyModeledProductDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PhysicallyModeledProductDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PhysicallyModeledProductDefinition::*)() const>(&StepBasic_PhysicallyModeledProductDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PhysicallyModeledProductDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_PlaneAngleMeasureWithUnit ,opencascade::handle<StepBasic_PlaneAngleMeasureWithUnit> , StepBasic_MeasureWithUnit>>(m.attr("StepBasic_PlaneAngleMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PlaneAngleMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PlaneAngleMeasureWithUnit::*)() const>(&StepBasic_PlaneAngleMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PlaneAngleMeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_PlaneAngleUnit ,opencascade::handle<StepBasic_PlaneAngleUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_PlaneAngleUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_PlaneAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_PlaneAngleUnit::*)() const>(&StepBasic_PlaneAngleUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_PlaneAngleUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductConceptContext ,opencascade::handle<StepBasic_ProductConceptContext> , StepBasic_ApplicationContextElement>>(m.attr("StepBasic_ProductConceptContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductConceptContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductConceptContext::*)() const>(&StepBasic_ProductConceptContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductConceptContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductContext ,opencascade::handle<StepBasic_ProductContext> , StepBasic_ApplicationContextElement>>(m.attr("StepBasic_ProductContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductContext::*)() const>(&StepBasic_ProductContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinitionContext ,opencascade::handle<StepBasic_ProductDefinitionContext> , StepBasic_ApplicationContextElement>>(m.attr("StepBasic_ProductDefinitionContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionContext::*)() const>(&StepBasic_ProductDefinitionContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinitionEffectivity ,opencascade::handle<StepBasic_ProductDefinitionEffectivity> , StepBasic_Effectivity>>(m.attr("StepBasic_ProductDefinitionEffectivity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionEffectivity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionEffectivity::*)() const>(&StepBasic_ProductDefinitionEffectivity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionEffectivity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinitionFormationWithSpecifiedSource ,opencascade::handle<StepBasic_ProductDefinitionFormationWithSpecifiedSource> , StepBasic_ProductDefinitionFormation>>(m.attr("StepBasic_ProductDefinitionFormationWithSpecifiedSource"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormationWithSpecifiedSource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionFormationWithSpecifiedSource::*)() const>(&StepBasic_ProductDefinitionFormationWithSpecifiedSource::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionFormationWithSpecifiedSource::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinitionReferenceWithLocalRepresentation ,opencascade::handle<StepBasic_ProductDefinitionReferenceWithLocalRepresentation> , StepBasic_ProductDefinition>>(m.attr("StepBasic_ProductDefinitionReferenceWithLocalRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("Source",
             (opencascade::handle<StepBasic_ExternalSource> (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)() const) static_cast<opencascade::handle<StepBasic_ExternalSource> (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)() const>(&StepBasic_ProductDefinitionReferenceWithLocalRepresentation::Source),
             R"#(Returns field Source)#" )
        .def("SetSource",
             (void (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)( const opencascade::handle<StepBasic_ExternalSource> & ) ) static_cast<void (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)( const opencascade::handle<StepBasic_ExternalSource> & ) >(&StepBasic_ProductDefinitionReferenceWithLocalRepresentation::SetSource),
             R"#(Set field Source)#"  , py::arg("theSource"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionReferenceWithLocalRepresentation::*)() const>(&StepBasic_ProductDefinitionReferenceWithLocalRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionReferenceWithLocalRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductDefinitionWithAssociatedDocuments ,opencascade::handle<StepBasic_ProductDefinitionWithAssociatedDocuments> , StepBasic_ProductDefinition>>(m.attr("StepBasic_ProductDefinitionWithAssociatedDocuments"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionWithAssociatedDocuments::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductDefinitionWithAssociatedDocuments::*)() const>(&StepBasic_ProductDefinitionWithAssociatedDocuments::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductDefinitionWithAssociatedDocuments::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductRelatedProductCategory ,opencascade::handle<StepBasic_ProductRelatedProductCategory> , StepBasic_ProductCategory>>(m.attr("StepBasic_ProductRelatedProductCategory"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductRelatedProductCategory::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductRelatedProductCategory::*)() const>(&StepBasic_ProductRelatedProductCategory::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductRelatedProductCategory::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_RatioMeasureWithUnit ,opencascade::handle<StepBasic_RatioMeasureWithUnit> , StepBasic_MeasureWithUnit>>(m.attr("StepBasic_RatioMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_RatioMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_RatioMeasureWithUnit::*)() const>(&StepBasic_RatioMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_RatioMeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_RatioUnit ,opencascade::handle<StepBasic_RatioUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_RatioUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_RatioUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_RatioUnit::*)() const>(&StepBasic_RatioUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_RatioUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SiUnit ,opencascade::handle<StepBasic_SiUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_SiUnit"))
    // constructors
    // custom constructors
    // methods
        .def("SetDimensions",
             (void (StepBasic_SiUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ) ) static_cast<void (StepBasic_SiUnit::*)( const opencascade::handle<StepBasic_DimensionalExponents> & ) >(&StepBasic_SiUnit::SetDimensions),
             R"#(None)#"  , py::arg("aDimensions"))
        .def("Dimensions",
             (opencascade::handle<StepBasic_DimensionalExponents> (StepBasic_SiUnit::*)() const) static_cast<opencascade::handle<StepBasic_DimensionalExponents> (StepBasic_SiUnit::*)() const>(&StepBasic_SiUnit::Dimensions),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnit::*)() const>(&StepBasic_SiUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SolidAngleMeasureWithUnit ,opencascade::handle<StepBasic_SolidAngleMeasureWithUnit> , StepBasic_MeasureWithUnit>>(m.attr("StepBasic_SolidAngleMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SolidAngleMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SolidAngleMeasureWithUnit::*)() const>(&StepBasic_SolidAngleMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SolidAngleMeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SolidAngleUnit ,opencascade::handle<StepBasic_SolidAngleUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_SolidAngleUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SolidAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SolidAngleUnit::*)() const>(&StepBasic_SolidAngleUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SolidAngleUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ThermodynamicTemperatureUnit ,opencascade::handle<StepBasic_ThermodynamicTemperatureUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_ThermodynamicTemperatureUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ThermodynamicTemperatureUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ThermodynamicTemperatureUnit::*)() const>(&StepBasic_ThermodynamicTemperatureUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ThermodynamicTemperatureUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_TimeMeasureWithUnit ,opencascade::handle<StepBasic_TimeMeasureWithUnit> , StepBasic_MeasureWithUnit>>(m.attr("StepBasic_TimeMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_TimeMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_TimeMeasureWithUnit::*)() const>(&StepBasic_TimeMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_TimeMeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_TimeUnit ,opencascade::handle<StepBasic_TimeUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_TimeUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_TimeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_TimeUnit::*)() const>(&StepBasic_TimeUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_TimeUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_UncertaintyMeasureWithUnit ,opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> , StepBasic_MeasureWithUnit>>(m.attr("StepBasic_UncertaintyMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_UncertaintyMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_UncertaintyMeasureWithUnit::*)() const>(&StepBasic_UncertaintyMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_UncertaintyMeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_VolumeUnit ,opencascade::handle<StepBasic_VolumeUnit> , StepBasic_NamedUnit>>(m.attr("StepBasic_VolumeUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_VolumeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_VolumeUnit::*)() const>(&StepBasic_VolumeUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_VolumeUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_WeekOfYearAndDayDate ,opencascade::handle<StepBasic_WeekOfYearAndDayDate> , StepBasic_Date>>(m.attr("StepBasic_WeekOfYearAndDayDate"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_WeekOfYearAndDayDate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_WeekOfYearAndDayDate::*)() const>(&StepBasic_WeekOfYearAndDayDate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_WeekOfYearAndDayDate::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndAreaUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndAreaUnit> , StepBasic_ConversionBasedUnit>>(m.attr("StepBasic_ConversionBasedUnitAndAreaUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndAreaUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndAreaUnit::*)() const>(&StepBasic_ConversionBasedUnitAndAreaUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndAreaUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndLengthUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndLengthUnit> , StepBasic_ConversionBasedUnit>>(m.attr("StepBasic_ConversionBasedUnitAndLengthUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndLengthUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndLengthUnit::*)() const>(&StepBasic_ConversionBasedUnitAndLengthUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndLengthUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndMassUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndMassUnit> , StepBasic_ConversionBasedUnit>>(m.attr("StepBasic_ConversionBasedUnitAndMassUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndMassUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndMassUnit::*)() const>(&StepBasic_ConversionBasedUnitAndMassUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndMassUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndPlaneAngleUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndPlaneAngleUnit> , StepBasic_ConversionBasedUnit>>(m.attr("StepBasic_ConversionBasedUnitAndPlaneAngleUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndPlaneAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndPlaneAngleUnit::*)() const>(&StepBasic_ConversionBasedUnitAndPlaneAngleUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndPlaneAngleUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndRatioUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndRatioUnit> , StepBasic_ConversionBasedUnit>>(m.attr("StepBasic_ConversionBasedUnitAndRatioUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndRatioUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndRatioUnit::*)() const>(&StepBasic_ConversionBasedUnitAndRatioUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndRatioUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndSolidAngleUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndSolidAngleUnit> , StepBasic_ConversionBasedUnit>>(m.attr("StepBasic_ConversionBasedUnitAndSolidAngleUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndSolidAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndSolidAngleUnit::*)() const>(&StepBasic_ConversionBasedUnitAndSolidAngleUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndSolidAngleUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndTimeUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndTimeUnit> , StepBasic_ConversionBasedUnit>>(m.attr("StepBasic_ConversionBasedUnitAndTimeUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndTimeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndTimeUnit::*)() const>(&StepBasic_ConversionBasedUnitAndTimeUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndTimeUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ConversionBasedUnitAndVolumeUnit ,opencascade::handle<StepBasic_ConversionBasedUnitAndVolumeUnit> , StepBasic_ConversionBasedUnit>>(m.attr("StepBasic_ConversionBasedUnitAndVolumeUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndVolumeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ConversionBasedUnitAndVolumeUnit::*)() const>(&StepBasic_ConversionBasedUnitAndVolumeUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ConversionBasedUnitAndVolumeUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_DesignContext ,opencascade::handle<StepBasic_DesignContext> , StepBasic_ProductDefinitionContext>>(m.attr("StepBasic_DesignContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_DesignContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_DesignContext::*)() const>(&StepBasic_DesignContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_DesignContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_MechanicalContext ,opencascade::handle<StepBasic_MechanicalContext> , StepBasic_ProductContext>>(m.attr("StepBasic_MechanicalContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_MechanicalContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_MechanicalContext::*)() const>(&StepBasic_MechanicalContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_MechanicalContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_ProductType ,opencascade::handle<StepBasic_ProductType> , StepBasic_ProductRelatedProductCategory>>(m.attr("StepBasic_ProductType"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_ProductType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_ProductType::*)() const>(&StepBasic_ProductType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_ProductType::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SiUnitAndAreaUnit ,opencascade::handle<StepBasic_SiUnitAndAreaUnit> , StepBasic_SiUnit>>(m.attr("StepBasic_SiUnitAndAreaUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndAreaUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndAreaUnit::*)() const>(&StepBasic_SiUnitAndAreaUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndAreaUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SiUnitAndLengthUnit ,opencascade::handle<StepBasic_SiUnitAndLengthUnit> , StepBasic_SiUnit>>(m.attr("StepBasic_SiUnitAndLengthUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndLengthUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndLengthUnit::*)() const>(&StepBasic_SiUnitAndLengthUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndLengthUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SiUnitAndMassUnit ,opencascade::handle<StepBasic_SiUnitAndMassUnit> , StepBasic_SiUnit>>(m.attr("StepBasic_SiUnitAndMassUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndMassUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndMassUnit::*)() const>(&StepBasic_SiUnitAndMassUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndMassUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SiUnitAndPlaneAngleUnit ,opencascade::handle<StepBasic_SiUnitAndPlaneAngleUnit> , StepBasic_SiUnit>>(m.attr("StepBasic_SiUnitAndPlaneAngleUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndPlaneAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndPlaneAngleUnit::*)() const>(&StepBasic_SiUnitAndPlaneAngleUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndPlaneAngleUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SiUnitAndRatioUnit ,opencascade::handle<StepBasic_SiUnitAndRatioUnit> , StepBasic_SiUnit>>(m.attr("StepBasic_SiUnitAndRatioUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndRatioUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndRatioUnit::*)() const>(&StepBasic_SiUnitAndRatioUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndRatioUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SiUnitAndSolidAngleUnit ,opencascade::handle<StepBasic_SiUnitAndSolidAngleUnit> , StepBasic_SiUnit>>(m.attr("StepBasic_SiUnitAndSolidAngleUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndSolidAngleUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndSolidAngleUnit::*)() const>(&StepBasic_SiUnitAndSolidAngleUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndSolidAngleUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SiUnitAndThermodynamicTemperatureUnit ,opencascade::handle<StepBasic_SiUnitAndThermodynamicTemperatureUnit> , StepBasic_SiUnit>>(m.attr("StepBasic_SiUnitAndThermodynamicTemperatureUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndThermodynamicTemperatureUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndThermodynamicTemperatureUnit::*)() const>(&StepBasic_SiUnitAndThermodynamicTemperatureUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndThermodynamicTemperatureUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SiUnitAndTimeUnit ,opencascade::handle<StepBasic_SiUnitAndTimeUnit> , StepBasic_SiUnit>>(m.attr("StepBasic_SiUnitAndTimeUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndTimeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndTimeUnit::*)() const>(&StepBasic_SiUnitAndTimeUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndTimeUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepBasic_SiUnitAndVolumeUnit ,opencascade::handle<StepBasic_SiUnitAndVolumeUnit> , StepBasic_SiUnit>>(m.attr("StepBasic_SiUnitAndVolumeUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndVolumeUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepBasic_SiUnitAndVolumeUnit::*)() const>(&StepBasic_SiUnitAndVolumeUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepBasic_SiUnitAndVolumeUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepBasic_DateAssignment.hxx
// ./opencascade/StepBasic_Array1OfApproval.hxx
// ./opencascade/StepBasic_MeasureValueMember.hxx
// ./opencascade/StepBasic_ExternalIdentificationAssignment.hxx
// ./opencascade/StepBasic_PersonalAddress.hxx
// ./opencascade/StepBasic_ActionRequestAssignment.hxx
// ./opencascade/StepBasic_ProductDefinitionWithAssociatedDocuments.hxx
// ./opencascade/StepBasic_Array1OfOrganization.hxx
// ./opencascade/StepBasic_DimensionalExponents.hxx
// ./opencascade/StepBasic_ApprovalRole.hxx
// ./opencascade/StepBasic_ProductDefinitionEffectivity.hxx
// ./opencascade/StepBasic_DocumentUsageConstraint.hxx
// ./opencascade/StepBasic_OrganizationAssignment.hxx
// ./opencascade/StepBasic_MassMeasureWithUnit.hxx
// ./opencascade/StepBasic_SiUnitAndAreaUnit.hxx
// ./opencascade/StepBasic_ProductDefinitionOrReference.hxx
// ./opencascade/StepBasic_Action.hxx
// ./opencascade/StepBasic_MassUnit.hxx
// ./opencascade/StepBasic_DocumentRepresentationType.hxx
// ./opencascade/StepBasic_ActionRequestSolution.hxx
// ./opencascade/StepBasic_PersonAndOrganizationAssignment.hxx
// ./opencascade/StepBasic_Array1OfUncertaintyMeasureWithUnit.hxx
// ./opencascade/StepBasic_HArray1OfApproval.hxx
// ./opencascade/StepBasic_ProductDefinitionFormationRelationship.hxx
// ./opencascade/StepBasic_SourceItem.hxx
// ./opencascade/StepBasic_Array1OfDocument.hxx
// ./opencascade/StepBasic_Array1OfNamedUnit.hxx
// ./opencascade/StepBasic_RatioMeasureWithUnit.hxx
// ./opencascade/StepBasic_ProductCategory.hxx
// ./opencascade/StepBasic_TimeUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndRatioUnit.hxx
// ./opencascade/StepBasic_DateAndTimeAssignment.hxx
// ./opencascade/StepBasic_ApprovalAssignment.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndAreaUnit.hxx
// ./opencascade/StepBasic_SizeSelect.hxx
// ./opencascade/StepBasic_Array1OfProduct.hxx
// ./opencascade/StepBasic_DocumentReference.hxx
// ./opencascade/StepBasic_ProductDefinitionReference.hxx
// ./opencascade/StepBasic_Array1OfDerivedUnitElement.hxx
// ./opencascade/StepBasic_OrganizationRole.hxx
// ./opencascade/StepBasic_Unit.hxx
// ./opencascade/StepBasic_DesignContext.hxx
// ./opencascade/StepBasic_AreaUnit.hxx
// ./opencascade/StepBasic_RatioUnit.hxx
// ./opencascade/StepBasic_GroupAssignment.hxx
// ./opencascade/StepBasic_HArray1OfPerson.hxx
// ./opencascade/StepBasic_LengthUnit.hxx
// ./opencascade/StepBasic_ContractAssignment.hxx
// ./opencascade/StepBasic_EulerAngles.hxx
// ./opencascade/StepBasic_CharacterizedObject.hxx
// ./opencascade/StepBasic_PersonAndOrganizationRole.hxx
// ./opencascade/StepBasic_Address.hxx
// ./opencascade/StepBasic_PersonAndOrganization.hxx
// ./opencascade/StepBasic_ProductType.hxx
// ./opencascade/StepBasic_DocumentProductAssociation.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndPlaneAngleUnit.hxx
// ./opencascade/StepBasic_IdentificationRole.hxx
// ./opencascade/StepBasic_CertificationAssignment.hxx
// ./opencascade/StepBasic_ContractType.hxx
// ./opencascade/StepBasic_ApprovalRelationship.hxx
// ./opencascade/StepBasic_ApprovalDateTime.hxx
// ./opencascade/StepBasic_VersionedActionRequest.hxx
// ./opencascade/StepBasic_HArray1OfDerivedUnitElement.hxx
// ./opencascade/StepBasic_SizeMember.hxx
// ./opencascade/StepBasic_ProductDefinitionFormationWithSpecifiedSource.hxx
// ./opencascade/StepBasic_ProductOrFormationOrDefinition.hxx
// ./opencascade/StepBasic_Organization.hxx
// ./opencascade/StepBasic_ApplicationProtocolDefinition.hxx
// ./opencascade/StepBasic_SiUnitAndPlaneAngleUnit.hxx
// ./opencascade/StepBasic_PlaneAngleUnit.hxx
// ./opencascade/StepBasic_ApplicationContext.hxx
// ./opencascade/StepBasic_ApprovalStatus.hxx
// ./opencascade/StepBasic_SiUnitAndThermodynamicTemperatureUnit.hxx
// ./opencascade/StepBasic_Person.hxx
// ./opencascade/StepBasic_ActionAssignment.hxx
// ./opencascade/StepBasic_SolidAngleMeasureWithUnit.hxx
// ./opencascade/StepBasic_DocumentRelationship.hxx
// ./opencascade/StepBasic_DateTimeRole.hxx
// ./opencascade/StepBasic_PersonOrganizationSelect.hxx
// ./opencascade/StepBasic_UncertaintyMeasureWithUnit.hxx
// ./opencascade/StepBasic_SiPrefix.hxx
// ./opencascade/StepBasic_HArray1OfProduct.hxx
// ./opencascade/StepBasic_LocalTime.hxx
// ./opencascade/StepBasic_Effectivity.hxx
// ./opencascade/StepBasic_ProductDefinitionReferenceWithLocalRepresentation.hxx
// ./opencascade/StepBasic_GroupRelationship.hxx
// ./opencascade/StepBasic_RoleAssociation.hxx
// ./opencascade/StepBasic_SiUnit.hxx
// ./opencascade/StepBasic_NameAssignment.hxx
// ./opencascade/StepBasic_PlaneAngleMeasureWithUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndMassUnit.hxx
// ./opencascade/StepBasic_EffectivityAssignment.hxx
// ./opencascade/StepBasic_ApplicationContextElement.hxx
// ./opencascade/StepBasic_MeasureWithUnit.hxx
// ./opencascade/StepBasic_OrganizationalAddress.hxx
// ./opencascade/StepBasic_ProductRelatedProductCategory.hxx
// ./opencascade/StepBasic_IdentificationAssignment.hxx
// ./opencascade/StepBasic_SiUnitAndLengthUnit.hxx
// ./opencascade/StepBasic_WeekOfYearAndDayDate.hxx
// ./opencascade/StepBasic_ThermodynamicTemperatureUnit.hxx
// ./opencascade/StepBasic_DateTimeSelect.hxx
// ./opencascade/StepBasic_Array1OfPerson.hxx
// ./opencascade/StepBasic_ProductConceptContext.hxx
// ./opencascade/StepBasic_Array1OfProductDefinition.hxx
// ./opencascade/StepBasic_VolumeUnit.hxx
// ./opencascade/StepBasic_ExternalSource.hxx
// ./opencascade/StepBasic_MechanicalContext.hxx
// ./opencascade/StepBasic_HArray1OfDocument.hxx
// ./opencascade/StepBasic_SiUnitAndVolumeUnit.hxx
// ./opencascade/StepBasic_SecurityClassificationAssignment.hxx
// ./opencascade/StepBasic_DigitalDocument.hxx
// ./opencascade/StepBasic_PhysicallyModeledProductDefinition.hxx
// ./opencascade/StepBasic_HArray1OfProductContext.hxx
// ./opencascade/StepBasic_SolidAngleUnit.hxx
// ./opencascade/StepBasic_Date.hxx
// ./opencascade/StepBasic_ObjectRole.hxx
// ./opencascade/StepBasic_SecurityClassificationLevel.hxx
// ./opencascade/StepBasic_SecurityClassification.hxx
// ./opencascade/StepBasic_Array1OfProductContext.hxx
// ./opencascade/StepBasic_Product.hxx
// ./opencascade/StepBasic_ProductDefinition.hxx
// ./opencascade/StepBasic_HArray1OfUncertaintyMeasureWithUnit.hxx
// ./opencascade/StepBasic_ProductContext.hxx
// ./opencascade/StepBasic_HArray1OfNamedUnit.hxx
// ./opencascade/StepBasic_SiUnitAndMassUnit.hxx
// ./opencascade/StepBasic_LengthMeasureWithUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndVolumeUnit.hxx
// ./opencascade/StepBasic_CoordinatedUniversalTimeOffset.hxx
// ./opencascade/StepBasic_DateRole.hxx
// ./opencascade/StepBasic_ConversionBasedUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndTimeUnit.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndSolidAngleUnit.hxx
// ./opencascade/StepBasic_Group.hxx
// ./opencascade/StepBasic_DocumentType.hxx
// ./opencascade/StepBasic_ProductDefinitionContext.hxx
// ./opencascade/StepBasic_SiUnitName.hxx
// ./opencascade/StepBasic_DerivedUnitElement.hxx
// ./opencascade/StepBasic_SiUnitAndRatioUnit.hxx
// ./opencascade/StepBasic_CalendarDate.hxx
// ./opencascade/StepBasic_ApprovalPersonOrganization.hxx
// ./opencascade/StepBasic_Certification.hxx
// ./opencascade/StepBasic_GeneralProperty.hxx
// ./opencascade/StepBasic_ConversionBasedUnitAndLengthUnit.hxx
// ./opencascade/StepBasic_TimeMeasureWithUnit.hxx
// ./opencascade/StepBasic_ProductDefinitionFormation.hxx
// ./opencascade/StepBasic_OrdinalDate.hxx
// ./opencascade/StepBasic_SiUnitAndTimeUnit.hxx
// ./opencascade/StepBasic_AheadOrBehind.hxx
// ./opencascade/StepBasic_Source.hxx
// ./opencascade/StepBasic_ActionMethod.hxx
// ./opencascade/StepBasic_DocumentFile.hxx
// ./opencascade/StepBasic_HArray1OfProductDefinition.hxx
// ./opencascade/StepBasic_CertificationType.hxx
// ./opencascade/StepBasic_ExternallyDefinedItem.hxx
// ./opencascade/StepBasic_Approval.hxx
// ./opencascade/StepBasic_DerivedUnit.hxx
// ./opencascade/StepBasic_DateAndTime.hxx
// ./opencascade/StepBasic_RoleSelect.hxx
// ./opencascade/StepBasic_Contract.hxx
// ./opencascade/StepBasic_DocumentProductEquivalence.hxx
// ./opencascade/StepBasic_ProductDefinitionRelationship.hxx
// ./opencascade/StepBasic_NamedUnit.hxx
// ./opencascade/StepBasic_ProductCategoryRelationship.hxx
// ./opencascade/StepBasic_Document.hxx
// ./opencascade/StepBasic_HArray1OfOrganization.hxx
// ./opencascade/StepBasic_SiUnitAndSolidAngleUnit.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<StepBasic_Approval> >(m,"StepBasic_Array1OfApproval");
    register_template_NCollection_Array1<opencascade::handle<StepBasic_Organization> >(m,"StepBasic_Array1OfOrganization");
    register_template_NCollection_Array1<opencascade::handle<StepBasic_UncertaintyMeasureWithUnit> >(m,"StepBasic_Array1OfUncertaintyMeasureWithUnit");
    register_template_NCollection_Array1<opencascade::handle<StepBasic_Document> >(m,"StepBasic_Array1OfDocument");
    register_template_NCollection_Array1<opencascade::handle<StepBasic_NamedUnit> >(m,"StepBasic_Array1OfNamedUnit");
    register_template_NCollection_Array1<opencascade::handle<StepBasic_Product> >(m,"StepBasic_Array1OfProduct");
    register_template_NCollection_Array1<opencascade::handle<StepBasic_DerivedUnitElement> >(m,"StepBasic_Array1OfDerivedUnitElement");
    register_template_NCollection_Array1<opencascade::handle<StepBasic_Person> >(m,"StepBasic_Array1OfPerson");
    register_template_NCollection_Array1<opencascade::handle<StepBasic_ProductDefinition> >(m,"StepBasic_Array1OfProductDefinition");
    register_template_NCollection_Array1<opencascade::handle<StepBasic_ProductContext> >(m,"StepBasic_Array1OfProductContext");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
