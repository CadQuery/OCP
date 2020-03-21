
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
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_Certification.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepAP203_ChangeRequest.hxx>
#include <StepAP203_Change.hxx>
#include <StepAP203_StartRequest.hxx>
#include <StepAP203_StartWork.hxx>
#include <StepBasic_Certification.hxx>
#include <StepBasic_Contract.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepAP203_ChangeRequest.hxx>
#include <StepAP203_StartRequest.hxx>
#include <StepAP203_Change.hxx>
#include <StepAP203_StartWork.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepBasic_Contract.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_Certification.hxx>
#include <StepBasic_Action.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_Action.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_Contract.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepAP203_Change.hxx>
#include <StepAP203_StartWork.hxx>
#include <StepAP203_ChangeRequest.hxx>
#include <StepAP203_StartRequest.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_Contract.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepRepr_SuppliedPartRelationship.hxx>

// module includes
#include <StepAP203_ApprovedItem.hxx>
#include <StepAP203_Array1OfApprovedItem.hxx>
#include <StepAP203_Array1OfCertifiedItem.hxx>
#include <StepAP203_Array1OfChangeRequestItem.hxx>
#include <StepAP203_Array1OfClassifiedItem.hxx>
#include <StepAP203_Array1OfContractedItem.hxx>
#include <StepAP203_Array1OfDateTimeItem.hxx>
#include <StepAP203_Array1OfPersonOrganizationItem.hxx>
#include <StepAP203_Array1OfSpecifiedItem.hxx>
#include <StepAP203_Array1OfStartRequestItem.hxx>
#include <StepAP203_Array1OfWorkItem.hxx>
#include <StepAP203_CcDesignApproval.hxx>
#include <StepAP203_CcDesignCertification.hxx>
#include <StepAP203_CcDesignContract.hxx>
#include <StepAP203_CcDesignDateAndTimeAssignment.hxx>
#include <StepAP203_CcDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP203_CcDesignSecurityClassification.hxx>
#include <StepAP203_CcDesignSpecificationReference.hxx>
#include <StepAP203_CertifiedItem.hxx>
#include <StepAP203_Change.hxx>
#include <StepAP203_ChangeRequest.hxx>
#include <StepAP203_ChangeRequestItem.hxx>
#include <StepAP203_ClassifiedItem.hxx>
#include <StepAP203_ContractedItem.hxx>
#include <StepAP203_DateTimeItem.hxx>
#include <StepAP203_HArray1OfApprovedItem.hxx>
#include <StepAP203_HArray1OfCertifiedItem.hxx>
#include <StepAP203_HArray1OfChangeRequestItem.hxx>
#include <StepAP203_HArray1OfClassifiedItem.hxx>
#include <StepAP203_HArray1OfContractedItem.hxx>
#include <StepAP203_HArray1OfDateTimeItem.hxx>
#include <StepAP203_HArray1OfPersonOrganizationItem.hxx>
#include <StepAP203_HArray1OfSpecifiedItem.hxx>
#include <StepAP203_HArray1OfStartRequestItem.hxx>
#include <StepAP203_HArray1OfWorkItem.hxx>
#include <StepAP203_PersonOrganizationItem.hxx>
#include <StepAP203_SpecifiedItem.hxx>
#include <StepAP203_StartRequest.hxx>
#include <StepAP203_StartRequestItem.hxx>
#include <StepAP203_StartWork.hxx>
#include <StepAP203_WorkItem.hxx>

// template related includes
// ./opencascade\StepAP203_Array1OfPersonOrganizationItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepAP203_Array1OfContractedItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepAP203_Array1OfWorkItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepAP203_Array1OfClassifiedItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepAP203_Array1OfCertifiedItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepAP203_Array1OfSpecifiedItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepAP203_Array1OfStartRequestItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepAP203_Array1OfDateTimeItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepAP203_Array1OfApprovedItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepAP203_Array1OfChangeRequestItem.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepAP203_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepAP203", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<StepAP203_PersonOrganizationItem>(m,"StepAP203_Array1OfPersonOrganizationItem");
    preregister_template_NCollection_Array1<StepAP203_ContractedItem>(m,"StepAP203_Array1OfContractedItem");
    preregister_template_NCollection_Array1<StepAP203_WorkItem>(m,"StepAP203_Array1OfWorkItem");
    preregister_template_NCollection_Array1<StepAP203_ClassifiedItem>(m,"StepAP203_Array1OfClassifiedItem");
    preregister_template_NCollection_Array1<StepAP203_CertifiedItem>(m,"StepAP203_Array1OfCertifiedItem");
    preregister_template_NCollection_Array1<StepAP203_SpecifiedItem>(m,"StepAP203_Array1OfSpecifiedItem");
    preregister_template_NCollection_Array1<StepAP203_StartRequestItem>(m,"StepAP203_Array1OfStartRequestItem");
    preregister_template_NCollection_Array1<StepAP203_DateTimeItem>(m,"StepAP203_Array1OfDateTimeItem");
    preregister_template_NCollection_Array1<StepAP203_ApprovedItem>(m,"StepAP203_Array1OfApprovedItem");
    preregister_template_NCollection_Array1<StepAP203_ChangeRequestItem>(m,"StepAP203_Array1OfChangeRequestItem");

// classes forward declarations only
    py::class_<StepAP203_ApprovedItem , shared_ptr<StepAP203_ApprovedItem> , StepData_SelectType>(m,"StepAP203_ApprovedItem",R"#(Representation of STEP SELECT type ApprovedItem)#");
    py::class_<StepAP203_CcDesignApproval ,opencascade::handle<StepAP203_CcDesignApproval> , StepBasic_ApprovalAssignment>(m,"StepAP203_CcDesignApproval",R"#(Representation of STEP entity CcDesignApprovalRepresentation of STEP entity CcDesignApprovalRepresentation of STEP entity CcDesignApproval)#");
    py::class_<StepAP203_CcDesignCertification ,opencascade::handle<StepAP203_CcDesignCertification> , StepBasic_CertificationAssignment>(m,"StepAP203_CcDesignCertification",R"#(Representation of STEP entity CcDesignCertificationRepresentation of STEP entity CcDesignCertificationRepresentation of STEP entity CcDesignCertification)#");
    py::class_<StepAP203_CcDesignContract ,opencascade::handle<StepAP203_CcDesignContract> , StepBasic_ContractAssignment>(m,"StepAP203_CcDesignContract",R"#(Representation of STEP entity CcDesignContractRepresentation of STEP entity CcDesignContractRepresentation of STEP entity CcDesignContract)#");
    py::class_<StepAP203_CcDesignDateAndTimeAssignment ,opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> , StepBasic_DateAndTimeAssignment>(m,"StepAP203_CcDesignDateAndTimeAssignment",R"#(Representation of STEP entity CcDesignDateAndTimeAssignmentRepresentation of STEP entity CcDesignDateAndTimeAssignmentRepresentation of STEP entity CcDesignDateAndTimeAssignment)#");
    py::class_<StepAP203_CcDesignPersonAndOrganizationAssignment ,opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> , StepBasic_PersonAndOrganizationAssignment>(m,"StepAP203_CcDesignPersonAndOrganizationAssignment",R"#(Representation of STEP entity CcDesignPersonAndOrganizationAssignmentRepresentation of STEP entity CcDesignPersonAndOrganizationAssignmentRepresentation of STEP entity CcDesignPersonAndOrganizationAssignment)#");
    py::class_<StepAP203_CcDesignSecurityClassification ,opencascade::handle<StepAP203_CcDesignSecurityClassification> , StepBasic_SecurityClassificationAssignment>(m,"StepAP203_CcDesignSecurityClassification",R"#(Representation of STEP entity CcDesignSecurityClassificationRepresentation of STEP entity CcDesignSecurityClassificationRepresentation of STEP entity CcDesignSecurityClassification)#");
    py::class_<StepAP203_CcDesignSpecificationReference ,opencascade::handle<StepAP203_CcDesignSpecificationReference> , StepBasic_DocumentReference>(m,"StepAP203_CcDesignSpecificationReference",R"#(Representation of STEP entity CcDesignSpecificationReferenceRepresentation of STEP entity CcDesignSpecificationReferenceRepresentation of STEP entity CcDesignSpecificationReference)#");
    py::class_<StepAP203_CertifiedItem , shared_ptr<StepAP203_CertifiedItem> , StepData_SelectType>(m,"StepAP203_CertifiedItem",R"#(Representation of STEP SELECT type CertifiedItem)#");
    py::class_<StepAP203_Change ,opencascade::handle<StepAP203_Change> , StepBasic_ActionAssignment>(m,"StepAP203_Change",R"#(Representation of STEP entity ChangeRepresentation of STEP entity ChangeRepresentation of STEP entity Change)#");
    py::class_<StepAP203_ChangeRequest ,opencascade::handle<StepAP203_ChangeRequest> , StepBasic_ActionRequestAssignment>(m,"StepAP203_ChangeRequest",R"#(Representation of STEP entity ChangeRequestRepresentation of STEP entity ChangeRequestRepresentation of STEP entity ChangeRequest)#");
    py::class_<StepAP203_ChangeRequestItem , shared_ptr<StepAP203_ChangeRequestItem> , StepData_SelectType>(m,"StepAP203_ChangeRequestItem",R"#(Representation of STEP SELECT type ChangeRequestItem)#");
    py::class_<StepAP203_ClassifiedItem , shared_ptr<StepAP203_ClassifiedItem> , StepData_SelectType>(m,"StepAP203_ClassifiedItem",R"#(Representation of STEP SELECT type ClassifiedItem)#");
    py::class_<StepAP203_ContractedItem , shared_ptr<StepAP203_ContractedItem> , StepData_SelectType>(m,"StepAP203_ContractedItem",R"#(Representation of STEP SELECT type ContractedItem)#");
    py::class_<StepAP203_DateTimeItem , shared_ptr<StepAP203_DateTimeItem> , StepData_SelectType>(m,"StepAP203_DateTimeItem",R"#(Representation of STEP SELECT type DateTimeItem)#");
    py::class_<StepAP203_HArray1OfApprovedItem ,opencascade::handle<StepAP203_HArray1OfApprovedItem> , StepAP203_Array1OfApprovedItem, Standard_Transient>(m,"StepAP203_HArray1OfApprovedItem",R"#()#");
    py::class_<StepAP203_HArray1OfCertifiedItem ,opencascade::handle<StepAP203_HArray1OfCertifiedItem> , StepAP203_Array1OfCertifiedItem, Standard_Transient>(m,"StepAP203_HArray1OfCertifiedItem",R"#()#");
    py::class_<StepAP203_HArray1OfChangeRequestItem ,opencascade::handle<StepAP203_HArray1OfChangeRequestItem> , StepAP203_Array1OfChangeRequestItem, Standard_Transient>(m,"StepAP203_HArray1OfChangeRequestItem",R"#()#");
    py::class_<StepAP203_HArray1OfClassifiedItem ,opencascade::handle<StepAP203_HArray1OfClassifiedItem> , StepAP203_Array1OfClassifiedItem, Standard_Transient>(m,"StepAP203_HArray1OfClassifiedItem",R"#()#");
    py::class_<StepAP203_HArray1OfContractedItem ,opencascade::handle<StepAP203_HArray1OfContractedItem> , StepAP203_Array1OfContractedItem, Standard_Transient>(m,"StepAP203_HArray1OfContractedItem",R"#()#");
    py::class_<StepAP203_HArray1OfDateTimeItem ,opencascade::handle<StepAP203_HArray1OfDateTimeItem> , StepAP203_Array1OfDateTimeItem, Standard_Transient>(m,"StepAP203_HArray1OfDateTimeItem",R"#()#");
    py::class_<StepAP203_HArray1OfPersonOrganizationItem ,opencascade::handle<StepAP203_HArray1OfPersonOrganizationItem> , StepAP203_Array1OfPersonOrganizationItem, Standard_Transient>(m,"StepAP203_HArray1OfPersonOrganizationItem",R"#()#");
    py::class_<StepAP203_HArray1OfSpecifiedItem ,opencascade::handle<StepAP203_HArray1OfSpecifiedItem> , StepAP203_Array1OfSpecifiedItem, Standard_Transient>(m,"StepAP203_HArray1OfSpecifiedItem",R"#()#");
    py::class_<StepAP203_HArray1OfStartRequestItem ,opencascade::handle<StepAP203_HArray1OfStartRequestItem> , StepAP203_Array1OfStartRequestItem, Standard_Transient>(m,"StepAP203_HArray1OfStartRequestItem",R"#()#");
    py::class_<StepAP203_HArray1OfWorkItem ,opencascade::handle<StepAP203_HArray1OfWorkItem> , StepAP203_Array1OfWorkItem, Standard_Transient>(m,"StepAP203_HArray1OfWorkItem",R"#()#");
    py::class_<StepAP203_PersonOrganizationItem , shared_ptr<StepAP203_PersonOrganizationItem> , StepData_SelectType>(m,"StepAP203_PersonOrganizationItem",R"#(Representation of STEP SELECT type PersonOrganizationItem)#");
    py::class_<StepAP203_SpecifiedItem , shared_ptr<StepAP203_SpecifiedItem> , StepData_SelectType>(m,"StepAP203_SpecifiedItem",R"#(Representation of STEP SELECT type SpecifiedItem)#");
    py::class_<StepAP203_StartRequest ,opencascade::handle<StepAP203_StartRequest> , StepBasic_ActionRequestAssignment>(m,"StepAP203_StartRequest",R"#(Representation of STEP entity StartRequestRepresentation of STEP entity StartRequestRepresentation of STEP entity StartRequest)#");
    py::class_<StepAP203_StartRequestItem , shared_ptr<StepAP203_StartRequestItem> , StepData_SelectType>(m,"StepAP203_StartRequestItem",R"#(Representation of STEP SELECT type StartRequestItem)#");
    py::class_<StepAP203_StartWork ,opencascade::handle<StepAP203_StartWork> , StepBasic_ActionAssignment>(m,"StepAP203_StartWork",R"#(Representation of STEP entity StartWorkRepresentation of STEP entity StartWorkRepresentation of STEP entity StartWork)#");
    py::class_<StepAP203_WorkItem , shared_ptr<StepAP203_WorkItem> , StepData_SelectType>(m,"StepAP203_WorkItem",R"#(Representation of STEP SELECT type WorkItem)#");

};

// user-defined post-inclusion per module

// user-defined post
