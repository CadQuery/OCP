
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
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <RWStepAP214_ReadWriteModule.hxx>
#include <RWStepAP214_GeneralModule.hxx>
#include <RWStepAP214_RWAutoDesignActualDateAndTimeAssignment.hxx>
#include <RWStepAP214_RWAutoDesignActualDateAssignment.hxx>
#include <RWStepAP214_RWAutoDesignApprovalAssignment.hxx>
#include <RWStepAP214_RWAutoDesignDateAndPersonAssignment.hxx>
#include <RWStepAP214_RWAutoDesignGroupAssignment.hxx>
#include <RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment.hxx>
#include <RWStepAP214_RWAutoDesignNominalDateAssignment.hxx>
#include <RWStepAP214_RWAutoDesignOrganizationAssignment.hxx>
#include <RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment.hxx>
#include <RWStepAP214_RWAutoDesignPresentedItem.hxx>
#include <RWStepAP214_RWAutoDesignSecurityClassificationAssignment.hxx>
#include <RWStepAP214_RWAutoDesignDocumentReference.hxx>
#include <RWStepAP214_RWAppliedDateAndTimeAssignment.hxx>
#include <RWStepAP214_RWAppliedDateAssignment.hxx>
#include <RWStepAP214_RWAppliedApprovalAssignment.hxx>
#include <RWStepAP214_RWAppliedGroupAssignment.hxx>
#include <RWStepAP214_RWAppliedOrganizationAssignment.hxx>
#include <RWStepAP214_RWAppliedPersonAndOrganizationAssignment.hxx>
#include <RWStepAP214_RWAppliedPresentedItem.hxx>
#include <RWStepAP214_RWAppliedSecurityClassificationAssignment.hxx>
#include <RWStepAP214_RWAppliedDocumentReference.hxx>
#include <RWStepAP214_RWAppliedExternalIdentificationAssignment.hxx>
#include <RWStepAP214_RWClass.hxx>
#include <RWStepAP214_RWExternallyDefinedClass.hxx>
#include <RWStepAP214_RWExternallyDefinedGeneralProperty.hxx>
#include <RWStepAP214_RWRepItemGroup.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignApprovalAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignNominalDateAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_RepItemGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedDateAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignSecurityClassificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignGroupAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_Class.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedDateAndTimeAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignActualDateAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedApprovalAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedGroupAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedPresentedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignPresentedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepAP214.hxx>
#include <RWStepAP214_GeneralModule.hxx>
#include <RWStepAP214_ReadWriteModule.hxx>
#include <RWStepAP214_RWAppliedApprovalAssignment.hxx>
#include <RWStepAP214_RWAppliedDateAndTimeAssignment.hxx>
#include <RWStepAP214_RWAppliedDateAssignment.hxx>
#include <RWStepAP214_RWAppliedDocumentReference.hxx>
#include <RWStepAP214_RWAppliedExternalIdentificationAssignment.hxx>
#include <RWStepAP214_RWAppliedGroupAssignment.hxx>
#include <RWStepAP214_RWAppliedOrganizationAssignment.hxx>
#include <RWStepAP214_RWAppliedPersonAndOrganizationAssignment.hxx>
#include <RWStepAP214_RWAppliedPresentedItem.hxx>
#include <RWStepAP214_RWAppliedSecurityClassificationAssignment.hxx>
#include <RWStepAP214_RWAutoDesignActualDateAndTimeAssignment.hxx>
#include <RWStepAP214_RWAutoDesignActualDateAssignment.hxx>
#include <RWStepAP214_RWAutoDesignApprovalAssignment.hxx>
#include <RWStepAP214_RWAutoDesignDateAndPersonAssignment.hxx>
#include <RWStepAP214_RWAutoDesignDocumentReference.hxx>
#include <RWStepAP214_RWAutoDesignGroupAssignment.hxx>
#include <RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment.hxx>
#include <RWStepAP214_RWAutoDesignNominalDateAssignment.hxx>
#include <RWStepAP214_RWAutoDesignOrganizationAssignment.hxx>
#include <RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment.hxx>
#include <RWStepAP214_RWAutoDesignPresentedItem.hxx>
#include <RWStepAP214_RWAutoDesignSecurityClassificationAssignment.hxx>
#include <RWStepAP214_RWClass.hxx>
#include <RWStepAP214_RWExternallyDefinedClass.hxx>
#include <RWStepAP214_RWExternallyDefinedGeneralProperty.hxx>
#include <RWStepAP214_RWRepItemGroup.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepAP214_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepAP214", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<RWStepAP214_RWAutoDesignDocumentReference ,std::unique_ptr<RWStepAP214_RWAutoDesignDocumentReference>  >(m,"RWStepAP214_RWAutoDesignDocumentReference",R"#(Read & Write Module for AutoDesignDocumentReference)#");
    py::class_<RWStepAP214_RWAutoDesignApprovalAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignApprovalAssignment>  >(m,"RWStepAP214_RWAutoDesignApprovalAssignment",R"#(Read & Write Module for AutoDesignApprovalAssignment)#");
    py::class_<RWStepAP214_RWAppliedSecurityClassificationAssignment ,std::unique_ptr<RWStepAP214_RWAppliedSecurityClassificationAssignment>  >(m,"RWStepAP214_RWAppliedSecurityClassificationAssignment",R"#(None)#");
    py::class_<RWStepAP214_RWAutoDesignDateAndPersonAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignDateAndPersonAssignment>  >(m,"RWStepAP214_RWAutoDesignDateAndPersonAssignment",R"#(Read & Write Module for AutoDesignDateAndPersonAssignment)#");
    py::class_<RWStepAP214_RWAutoDesignNominalDateAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignNominalDateAssignment>  >(m,"RWStepAP214_RWAutoDesignNominalDateAssignment",R"#(Read & Write Module for AutoDesignNominalDateAssignment)#");
    py::class_<RWStepAP214_RWAppliedDateAssignment ,std::unique_ptr<RWStepAP214_RWAppliedDateAssignment>  >(m,"RWStepAP214_RWAppliedDateAssignment",R"#(Read & Write Module for AppliedDateAssignment)#");
    py::class_<RWStepAP214_RWAutoDesignGroupAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignGroupAssignment>  >(m,"RWStepAP214_RWAutoDesignGroupAssignment",R"#(Read & Write Module for AutoDesignGroupAssignment)#");
    py::class_<RWStepAP214_RWClass ,std::unique_ptr<RWStepAP214_RWClass>  >(m,"RWStepAP214_RWClass",R"#(Read & Write tool for Class)#");
    py::class_<RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment>  >(m,"RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment",R"#(Read & Write Module for AutoDesignPersonAndOrganizationAssignment)#");
    py::class_<RWStepAP214_RWAutoDesignActualDateAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignActualDateAssignment>  >(m,"RWStepAP214_RWAutoDesignActualDateAssignment",R"#(Read & Write Module for AutoDesignActualDateAssignment)#");
    py::class_<RWStepAP214_RWExternallyDefinedGeneralProperty ,std::unique_ptr<RWStepAP214_RWExternallyDefinedGeneralProperty>  >(m,"RWStepAP214_RWExternallyDefinedGeneralProperty",R"#(Read & Write tool for ExternallyDefinedGeneralProperty)#");
    py::class_<RWStepAP214_RWAutoDesignActualDateAndTimeAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignActualDateAndTimeAssignment>  >(m,"RWStepAP214_RWAutoDesignActualDateAndTimeAssignment",R"#(Read & Write Module for AutoDesignActualDateAndTimeAssignment)#");
    py::class_<RWStepAP214_RWAppliedGroupAssignment ,std::unique_ptr<RWStepAP214_RWAppliedGroupAssignment>  >(m,"RWStepAP214_RWAppliedGroupAssignment",R"#(Read & Write tool for AppliedGroupAssignment)#");
    py::class_<RWStepAP214_RWAppliedPresentedItem ,std::unique_ptr<RWStepAP214_RWAppliedPresentedItem>  >(m,"RWStepAP214_RWAppliedPresentedItem",R"#(Read & Write Module for AppliedPresentedItem)#");
    py::class_<RWStepAP214_RWAutoDesignPresentedItem ,std::unique_ptr<RWStepAP214_RWAutoDesignPresentedItem>  >(m,"RWStepAP214_RWAutoDesignPresentedItem",R"#(Read & Write Module for AutoDesignPresentedItem)#");
    py::class_<RWStepAP214 ,std::unique_ptr<RWStepAP214>  >(m,"RWStepAP214",R"#(None)#");
    py::class_<RWStepAP214_GeneralModule ,opencascade::handle<RWStepAP214_GeneralModule>  , StepData_GeneralModule >(m,"RWStepAP214_GeneralModule",R"#(Defines General Services for StepAP214 Entities (Share,Check,Copy; Trace already inherited) Depends (for case numbers) of Protocol from StepAP214Defines General Services for StepAP214 Entities (Share,Check,Copy; Trace already inherited) Depends (for case numbers) of Protocol from StepAP214Defines General Services for StepAP214 Entities (Share,Check,Copy; Trace already inherited) Depends (for case numbers) of Protocol from StepAP214)#");
    py::class_<RWStepAP214_RWRepItemGroup ,std::unique_ptr<RWStepAP214_RWRepItemGroup>  >(m,"RWStepAP214_RWRepItemGroup",R"#(Read & Write tool for RepItemGroup)#");
    py::class_<RWStepAP214_RWExternallyDefinedClass ,std::unique_ptr<RWStepAP214_RWExternallyDefinedClass>  >(m,"RWStepAP214_RWExternallyDefinedClass",R"#(Read & Write tool for ExternallyDefinedClass)#");
    py::class_<RWStepAP214_RWAppliedPersonAndOrganizationAssignment ,std::unique_ptr<RWStepAP214_RWAppliedPersonAndOrganizationAssignment>  >(m,"RWStepAP214_RWAppliedPersonAndOrganizationAssignment",R"#(Read & Write Module for AppliedPersonAndOrganizationAssignment)#");
    py::class_<RWStepAP214_RWAppliedApprovalAssignment ,std::unique_ptr<RWStepAP214_RWAppliedApprovalAssignment>  >(m,"RWStepAP214_RWAppliedApprovalAssignment",R"#(Read & Write Module for AppliedApprovalAssignment)#");
    py::class_<RWStepAP214_RWAppliedOrganizationAssignment ,std::unique_ptr<RWStepAP214_RWAppliedOrganizationAssignment>  >(m,"RWStepAP214_RWAppliedOrganizationAssignment",R"#(Read & Write Module for AppliedOrganizationAssignment)#");
    py::class_<RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment>  >(m,"RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment",R"#(Read & Write Module for AutoDesignNominalDateAndTimeAssignment)#");
    py::class_<RWStepAP214_RWAutoDesignSecurityClassificationAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignSecurityClassificationAssignment>  >(m,"RWStepAP214_RWAutoDesignSecurityClassificationAssignment",R"#(Read & Write Module for AutoDesignSecurityClassificationAssignment)#");
    py::class_<RWStepAP214_RWAppliedDocumentReference ,std::unique_ptr<RWStepAP214_RWAppliedDocumentReference>  >(m,"RWStepAP214_RWAppliedDocumentReference",R"#(Read & Write Module for AppliedDocumentReference)#");
    py::class_<RWStepAP214_ReadWriteModule ,opencascade::handle<RWStepAP214_ReadWriteModule>  , StepData_ReadWriteModule >(m,"RWStepAP214_ReadWriteModule",R"#(General module to read and write StepAP214 entitiesGeneral module to read and write StepAP214 entitiesGeneral module to read and write StepAP214 entities)#");
    py::class_<RWStepAP214_RWAutoDesignOrganizationAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignOrganizationAssignment>  >(m,"RWStepAP214_RWAutoDesignOrganizationAssignment",R"#(Read & Write Module for AutoDesignOrganizationAssignment)#");
    py::class_<RWStepAP214_RWAppliedExternalIdentificationAssignment ,std::unique_ptr<RWStepAP214_RWAppliedExternalIdentificationAssignment>  >(m,"RWStepAP214_RWAppliedExternalIdentificationAssignment",R"#(Read & Write tool for AppliedExternalIdentificationAssignment)#");
    py::class_<RWStepAP214_RWAppliedDateAndTimeAssignment ,std::unique_ptr<RWStepAP214_RWAppliedDateAndTimeAssignment>  >(m,"RWStepAP214_RWAppliedDateAndTimeAssignment",R"#(Read & Write Module for AppliedDateAndTimeAssignment)#");

// pre-register typdefs
// ./opencascade/RWStepAP214_RWAutoDesignDocumentReference.hxx
// ./opencascade/RWStepAP214.hxx
// ./opencascade/RWStepAP214_RWAutoDesignApprovalAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedSecurityClassificationAssignment.hxx
// ./opencascade/RWStepAP214_GeneralModule.hxx
// ./opencascade/RWStepAP214_RWAutoDesignDateAndPersonAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignOrganizationAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignNominalDateAssignment.hxx
// ./opencascade/RWStepAP214_RWRepItemGroup.hxx
// ./opencascade/RWStepAP214_RWAppliedDateAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignSecurityClassificationAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignGroupAssignment.hxx
// ./opencascade/RWStepAP214_RWExternallyDefinedClass.hxx
// ./opencascade/RWStepAP214_RWClass.hxx
// ./opencascade/RWStepAP214_RWAppliedDateAndTimeAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedPersonAndOrganizationAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignActualDateAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedDocumentReference.hxx
// ./opencascade/RWStepAP214_RWExternallyDefinedGeneralProperty.hxx
// ./opencascade/RWStepAP214_RWAppliedApprovalAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignActualDateAndTimeAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedExternalIdentificationAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedGroupAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedOrganizationAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedPresentedItem.hxx
// ./opencascade/RWStepAP214_ReadWriteModule.hxx
// ./opencascade/RWStepAP214_RWAutoDesignPresentedItem.hxx

};

// user-defined post-inclusion per module

// user-defined post
