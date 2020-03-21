
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
#include <StepAP203_CcDesignContract.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignDateAndTimeAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_ChangeRequest.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignCertification.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignPersonAndOrganizationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_Change.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_StartWork.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignSpecificationReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_StartRequest.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignApproval.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignSecurityClassification.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepAP203_RWCcDesignApproval.hxx>
#include <RWStepAP203_RWCcDesignCertification.hxx>
#include <RWStepAP203_RWCcDesignContract.hxx>
#include <RWStepAP203_RWCcDesignDateAndTimeAssignment.hxx>
#include <RWStepAP203_RWCcDesignPersonAndOrganizationAssignment.hxx>
#include <RWStepAP203_RWCcDesignSecurityClassification.hxx>
#include <RWStepAP203_RWCcDesignSpecificationReference.hxx>
#include <RWStepAP203_RWChange.hxx>
#include <RWStepAP203_RWChangeRequest.hxx>
#include <RWStepAP203_RWStartRequest.hxx>
#include <RWStepAP203_RWStartWork.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepAP203_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepAP203", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStepAP203_RWCcDesignApproval , shared_ptr<RWStepAP203_RWCcDesignApproval> >(m,"RWStepAP203_RWCcDesignApproval",R"#(Read & Write tool for CcDesignApproval)#");
    py::class_<RWStepAP203_RWCcDesignCertification , shared_ptr<RWStepAP203_RWCcDesignCertification> >(m,"RWStepAP203_RWCcDesignCertification",R"#(Read & Write tool for CcDesignCertification)#");
    py::class_<RWStepAP203_RWCcDesignContract , shared_ptr<RWStepAP203_RWCcDesignContract> >(m,"RWStepAP203_RWCcDesignContract",R"#(Read & Write tool for CcDesignContract)#");
    py::class_<RWStepAP203_RWCcDesignDateAndTimeAssignment , shared_ptr<RWStepAP203_RWCcDesignDateAndTimeAssignment> >(m,"RWStepAP203_RWCcDesignDateAndTimeAssignment",R"#(Read & Write tool for CcDesignDateAndTimeAssignment)#");
    py::class_<RWStepAP203_RWCcDesignPersonAndOrganizationAssignment , shared_ptr<RWStepAP203_RWCcDesignPersonAndOrganizationAssignment> >(m,"RWStepAP203_RWCcDesignPersonAndOrganizationAssignment",R"#(Read & Write tool for CcDesignPersonAndOrganizationAssignment)#");
    py::class_<RWStepAP203_RWCcDesignSecurityClassification , shared_ptr<RWStepAP203_RWCcDesignSecurityClassification> >(m,"RWStepAP203_RWCcDesignSecurityClassification",R"#(Read & Write tool for CcDesignSecurityClassification)#");
    py::class_<RWStepAP203_RWCcDesignSpecificationReference , shared_ptr<RWStepAP203_RWCcDesignSpecificationReference> >(m,"RWStepAP203_RWCcDesignSpecificationReference",R"#(Read & Write tool for CcDesignSpecificationReference)#");
    py::class_<RWStepAP203_RWChange , shared_ptr<RWStepAP203_RWChange> >(m,"RWStepAP203_RWChange",R"#(Read & Write tool for Change)#");
    py::class_<RWStepAP203_RWChangeRequest , shared_ptr<RWStepAP203_RWChangeRequest> >(m,"RWStepAP203_RWChangeRequest",R"#(Read & Write tool for ChangeRequest)#");
    py::class_<RWStepAP203_RWStartRequest , shared_ptr<RWStepAP203_RWStartRequest> >(m,"RWStepAP203_RWStartRequest",R"#(Read & Write tool for StartRequest)#");
    py::class_<RWStepAP203_RWStartWork , shared_ptr<RWStepAP203_RWStartWork> >(m,"RWStepAP203_RWStartWork",R"#(Read & Write tool for StartWork)#");

};

// user-defined post-inclusion per module

// user-defined post
