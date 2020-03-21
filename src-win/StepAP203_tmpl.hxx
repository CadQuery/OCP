#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

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
#include <StepAP203_Array1OfPersonOrganizationItem.hxx>
#include <StepAP203_HArray1OfChangeRequestItem.hxx>
#include <StepAP203_HArray1OfClassifiedItem.hxx>
#include <StepAP203_StartRequestItem.hxx>
#include <StepAP203_CcDesignCertification.hxx>
#include <StepAP203_ContractedItem.hxx>
#include <StepAP203_CcDesignDateAndTimeAssignment.hxx>
#include <StepAP203_ApprovedItem.hxx>
#include <StepAP203_DateTimeItem.hxx>
#include <StepAP203_Change.hxx>
#include <StepAP203_ClassifiedItem.hxx>
#include <StepAP203_Array1OfContractedItem.hxx>
#include <StepAP203_CcDesignApproval.hxx>
#include <StepAP203_Array1OfWorkItem.hxx>
#include <StepAP203_HArray1OfStartRequestItem.hxx>
#include <StepAP203_StartWork.hxx>
#include <StepAP203_ChangeRequestItem.hxx>
#include <StepAP203_Array1OfClassifiedItem.hxx>
#include <StepAP203_HArray1OfSpecifiedItem.hxx>
#include <StepAP203_Array1OfCertifiedItem.hxx>
#include <StepAP203_CcDesignContract.hxx>
#include <StepAP203_HArray1OfCertifiedItem.hxx>
#include <StepAP203_CcDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP203_HArray1OfPersonOrganizationItem.hxx>
#include <StepAP203_HArray1OfApprovedItem.hxx>
#include <StepAP203_Array1OfSpecifiedItem.hxx>
#include <StepAP203_PersonOrganizationItem.hxx>
#include <StepAP203_HArray1OfContractedItem.hxx>
#include <StepAP203_Array1OfStartRequestItem.hxx>
#include <StepAP203_HArray1OfDateTimeItem.hxx>
#include <StepAP203_SpecifiedItem.hxx>
#include <StepAP203_Array1OfDateTimeItem.hxx>
#include <StepAP203_HArray1OfWorkItem.hxx>
#include <StepAP203_WorkItem.hxx>
#include <StepAP203_Array1OfApprovedItem.hxx>
#include <StepAP203_StartRequest.hxx>
#include <StepAP203_CcDesignSpecificationReference.hxx>
#include <StepAP203_CcDesignSecurityClassification.hxx>
#include <StepAP203_ChangeRequest.hxx>
#include <StepAP203_CertifiedItem.hxx>
#include <StepAP203_Array1OfChangeRequestItem.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade\StepAP203_Array1OfPersonOrganizationItem.hxx
// ./opencascade\StepAP203_HArray1OfChangeRequestItem.hxx
// ./opencascade\StepAP203_HArray1OfClassifiedItem.hxx
// ./opencascade\StepAP203_StartRequestItem.hxx
// ./opencascade\StepAP203_CcDesignCertification.hxx
// ./opencascade\StepAP203_ContractedItem.hxx
// ./opencascade\StepAP203_CcDesignDateAndTimeAssignment.hxx
// ./opencascade\StepAP203_ApprovedItem.hxx
// ./opencascade\StepAP203_DateTimeItem.hxx
// ./opencascade\StepAP203_Change.hxx
// ./opencascade\StepAP203_ClassifiedItem.hxx
// ./opencascade\StepAP203_Array1OfContractedItem.hxx
// ./opencascade\StepAP203_CcDesignApproval.hxx
// ./opencascade\StepAP203_Array1OfWorkItem.hxx
// ./opencascade\StepAP203_HArray1OfStartRequestItem.hxx
// ./opencascade\StepAP203_StartWork.hxx
// ./opencascade\StepAP203_ChangeRequestItem.hxx
// ./opencascade\StepAP203_Array1OfClassifiedItem.hxx
// ./opencascade\StepAP203_HArray1OfSpecifiedItem.hxx
// ./opencascade\StepAP203_Array1OfCertifiedItem.hxx
// ./opencascade\StepAP203_CcDesignContract.hxx
// ./opencascade\StepAP203_HArray1OfCertifiedItem.hxx
// ./opencascade\StepAP203_CcDesignPersonAndOrganizationAssignment.hxx
// ./opencascade\StepAP203_HArray1OfPersonOrganizationItem.hxx
// ./opencascade\StepAP203_HArray1OfApprovedItem.hxx
// ./opencascade\StepAP203_Array1OfSpecifiedItem.hxx
// ./opencascade\StepAP203_PersonOrganizationItem.hxx
// ./opencascade\StepAP203_HArray1OfContractedItem.hxx
// ./opencascade\StepAP203_Array1OfStartRequestItem.hxx
// ./opencascade\StepAP203_HArray1OfDateTimeItem.hxx
// ./opencascade\StepAP203_SpecifiedItem.hxx
// ./opencascade\StepAP203_Array1OfDateTimeItem.hxx
// ./opencascade\StepAP203_HArray1OfWorkItem.hxx
// ./opencascade\StepAP203_WorkItem.hxx
// ./opencascade\StepAP203_Array1OfApprovedItem.hxx
// ./opencascade\StepAP203_StartRequest.hxx
// ./opencascade\StepAP203_CcDesignSpecificationReference.hxx
// ./opencascade\StepAP203_CcDesignSecurityClassification.hxx
// ./opencascade\StepAP203_ChangeRequest.hxx
// ./opencascade\StepAP203_CertifiedItem.hxx
// ./opencascade\StepAP203_Array1OfChangeRequestItem.hxx

// user-defined post
