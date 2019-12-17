
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_RWStepAP214(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepAP214"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepAP214_RWAutoDesignDocumentReference ,std::unique_ptr<RWStepAP214_RWAutoDesignDocumentReference>  >>(m.attr("RWStepAP214_RWAutoDesignDocumentReference"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignDocumentReference::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignDocumentReference> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignDocumentReference::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignDocumentReference> &  ) const>(&RWStepAP214_RWAutoDesignDocumentReference::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignDocumentReference::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignDocumentReference> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignDocumentReference::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignDocumentReference> &  ) const>(&RWStepAP214_RWAutoDesignDocumentReference::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignDocumentReference::*)( const opencascade::handle<StepAP214_AutoDesignDocumentReference> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignDocumentReference::*)( const opencascade::handle<StepAP214_AutoDesignDocumentReference> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignDocumentReference::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignApprovalAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignApprovalAssignment>  >>(m.attr("RWStepAP214_RWAutoDesignApprovalAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignApprovalAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignApprovalAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignApprovalAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignApprovalAssignment> &  ) const>(&RWStepAP214_RWAutoDesignApprovalAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignApprovalAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignApprovalAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignApprovalAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignApprovalAssignment> &  ) const>(&RWStepAP214_RWAutoDesignApprovalAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignApprovalAssignment::*)( const opencascade::handle<StepAP214_AutoDesignApprovalAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignApprovalAssignment::*)( const opencascade::handle<StepAP214_AutoDesignApprovalAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignApprovalAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAppliedSecurityClassificationAssignment ,std::unique_ptr<RWStepAP214_RWAppliedSecurityClassificationAssignment>  >>(m.attr("RWStepAP214_RWAppliedSecurityClassificationAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAppliedSecurityClassificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedSecurityClassificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> &  ) const>(&RWStepAP214_RWAppliedSecurityClassificationAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAppliedSecurityClassificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedSecurityClassificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> &  ) const>(&RWStepAP214_RWAppliedSecurityClassificationAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAppliedSecurityClassificationAssignment::*)( const opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAppliedSecurityClassificationAssignment::*)( const opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAppliedSecurityClassificationAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignDateAndPersonAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignDateAndPersonAssignment>  >>(m.attr("RWStepAP214_RWAutoDesignDateAndPersonAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignDateAndPersonAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignDateAndPersonAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment> &  ) const>(&RWStepAP214_RWAutoDesignDateAndPersonAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignDateAndPersonAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignDateAndPersonAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment> &  ) const>(&RWStepAP214_RWAutoDesignDateAndPersonAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignDateAndPersonAssignment::*)( const opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignDateAndPersonAssignment::*)( const opencascade::handle<StepAP214_AutoDesignDateAndPersonAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignDateAndPersonAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignNominalDateAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignNominalDateAssignment>  >>(m.attr("RWStepAP214_RWAutoDesignNominalDateAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignNominalDateAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignNominalDateAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignNominalDateAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignNominalDateAssignment> &  ) const>(&RWStepAP214_RWAutoDesignNominalDateAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignNominalDateAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignNominalDateAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignNominalDateAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignNominalDateAssignment> &  ) const>(&RWStepAP214_RWAutoDesignNominalDateAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignNominalDateAssignment::*)( const opencascade::handle<StepAP214_AutoDesignNominalDateAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignNominalDateAssignment::*)( const opencascade::handle<StepAP214_AutoDesignNominalDateAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignNominalDateAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAppliedDateAssignment ,std::unique_ptr<RWStepAP214_RWAppliedDateAssignment>  >>(m.attr("RWStepAP214_RWAppliedDateAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAppliedDateAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedDateAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedDateAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedDateAssignment> &  ) const>(&RWStepAP214_RWAppliedDateAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAppliedDateAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedDateAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedDateAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedDateAssignment> &  ) const>(&RWStepAP214_RWAppliedDateAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAppliedDateAssignment::*)( const opencascade::handle<StepAP214_AppliedDateAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAppliedDateAssignment::*)( const opencascade::handle<StepAP214_AppliedDateAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAppliedDateAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignGroupAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignGroupAssignment>  >>(m.attr("RWStepAP214_RWAutoDesignGroupAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignGroupAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignGroupAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignGroupAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignGroupAssignment> &  ) const>(&RWStepAP214_RWAutoDesignGroupAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignGroupAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignGroupAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignGroupAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignGroupAssignment> &  ) const>(&RWStepAP214_RWAutoDesignGroupAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignGroupAssignment::*)( const opencascade::handle<StepAP214_AutoDesignGroupAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignGroupAssignment::*)( const opencascade::handle<StepAP214_AutoDesignGroupAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignGroupAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWClass ,std::unique_ptr<RWStepAP214_RWClass>  >>(m.attr("RWStepAP214_RWClass"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWClass::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_Class> &  ) const) static_cast<void (RWStepAP214_RWClass::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_Class> &  ) const>(&RWStepAP214_RWClass::ReadStep),
             R"#(Reads Class)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWClass::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_Class> &  ) const) static_cast<void (RWStepAP214_RWClass::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_Class> &  ) const>(&RWStepAP214_RWClass::WriteStep),
             R"#(Writes Class)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWClass::*)( const opencascade::handle<StepAP214_Class> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWClass::*)( const opencascade::handle<StepAP214_Class> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWClass::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment>  >>(m.attr("RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignPersonAndOrganizationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignPersonAndOrganizationAssignment> &  ) const>(&RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignPersonAndOrganizationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignPersonAndOrganizationAssignment> &  ) const>(&RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP214_AutoDesignPersonAndOrganizationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP214_AutoDesignPersonAndOrganizationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignActualDateAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignActualDateAssignment>  >>(m.attr("RWStepAP214_RWAutoDesignActualDateAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignActualDateAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignActualDateAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignActualDateAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignActualDateAssignment> &  ) const>(&RWStepAP214_RWAutoDesignActualDateAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignActualDateAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignActualDateAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignActualDateAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignActualDateAssignment> &  ) const>(&RWStepAP214_RWAutoDesignActualDateAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignActualDateAssignment::*)( const opencascade::handle<StepAP214_AutoDesignActualDateAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignActualDateAssignment::*)( const opencascade::handle<StepAP214_AutoDesignActualDateAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignActualDateAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWExternallyDefinedGeneralProperty ,std::unique_ptr<RWStepAP214_RWExternallyDefinedGeneralProperty>  >>(m.attr("RWStepAP214_RWExternallyDefinedGeneralProperty"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWExternallyDefinedGeneralProperty::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_ExternallyDefinedGeneralProperty> &  ) const) static_cast<void (RWStepAP214_RWExternallyDefinedGeneralProperty::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_ExternallyDefinedGeneralProperty> &  ) const>(&RWStepAP214_RWExternallyDefinedGeneralProperty::ReadStep),
             R"#(Reads ExternallyDefinedGeneralProperty)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWExternallyDefinedGeneralProperty::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_ExternallyDefinedGeneralProperty> &  ) const) static_cast<void (RWStepAP214_RWExternallyDefinedGeneralProperty::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_ExternallyDefinedGeneralProperty> &  ) const>(&RWStepAP214_RWExternallyDefinedGeneralProperty::WriteStep),
             R"#(Writes ExternallyDefinedGeneralProperty)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWExternallyDefinedGeneralProperty::*)( const opencascade::handle<StepAP214_ExternallyDefinedGeneralProperty> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWExternallyDefinedGeneralProperty::*)( const opencascade::handle<StepAP214_ExternallyDefinedGeneralProperty> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWExternallyDefinedGeneralProperty::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignActualDateAndTimeAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignActualDateAndTimeAssignment>  >>(m.attr("RWStepAP214_RWAutoDesignActualDateAndTimeAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignActualDateAndTimeAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignActualDateAndTimeAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignActualDateAndTimeAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignActualDateAndTimeAssignment> &  ) const>(&RWStepAP214_RWAutoDesignActualDateAndTimeAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignActualDateAndTimeAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignActualDateAndTimeAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignActualDateAndTimeAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignActualDateAndTimeAssignment> &  ) const>(&RWStepAP214_RWAutoDesignActualDateAndTimeAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignActualDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_AutoDesignActualDateAndTimeAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignActualDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_AutoDesignActualDateAndTimeAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignActualDateAndTimeAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAppliedGroupAssignment ,std::unique_ptr<RWStepAP214_RWAppliedGroupAssignment>  >>(m.attr("RWStepAP214_RWAppliedGroupAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAppliedGroupAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedGroupAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedGroupAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedGroupAssignment> &  ) const>(&RWStepAP214_RWAppliedGroupAssignment::ReadStep),
             R"#(Reads AppliedGroupAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAppliedGroupAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedGroupAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedGroupAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedGroupAssignment> &  ) const>(&RWStepAP214_RWAppliedGroupAssignment::WriteStep),
             R"#(Writes AppliedGroupAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAppliedGroupAssignment::*)( const opencascade::handle<StepAP214_AppliedGroupAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAppliedGroupAssignment::*)( const opencascade::handle<StepAP214_AppliedGroupAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAppliedGroupAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAppliedPresentedItem ,std::unique_ptr<RWStepAP214_RWAppliedPresentedItem>  >>(m.attr("RWStepAP214_RWAppliedPresentedItem"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAppliedPresentedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedPresentedItem> &  ) const) static_cast<void (RWStepAP214_RWAppliedPresentedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedPresentedItem> &  ) const>(&RWStepAP214_RWAppliedPresentedItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAppliedPresentedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedPresentedItem> &  ) const) static_cast<void (RWStepAP214_RWAppliedPresentedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedPresentedItem> &  ) const>(&RWStepAP214_RWAppliedPresentedItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAppliedPresentedItem::*)( const opencascade::handle<StepAP214_AppliedPresentedItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAppliedPresentedItem::*)( const opencascade::handle<StepAP214_AppliedPresentedItem> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAppliedPresentedItem::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignPresentedItem ,std::unique_ptr<RWStepAP214_RWAutoDesignPresentedItem>  >>(m.attr("RWStepAP214_RWAutoDesignPresentedItem"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignPresentedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignPresentedItem> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignPresentedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignPresentedItem> &  ) const>(&RWStepAP214_RWAutoDesignPresentedItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignPresentedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignPresentedItem> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignPresentedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignPresentedItem> &  ) const>(&RWStepAP214_RWAutoDesignPresentedItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignPresentedItem::*)( const opencascade::handle<StepAP214_AutoDesignPresentedItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignPresentedItem::*)( const opencascade::handle<StepAP214_AutoDesignPresentedItem> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignPresentedItem::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;

    register_default_constructor<RWStepAP214 ,std::unique_ptr<RWStepAP214>>(m,"RWStepAP214");

    static_cast<py::class_<RWStepAP214 ,std::unique_ptr<RWStepAP214>  >>(m.attr("RWStepAP214"))
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&RWStepAP214::Init),
                    R"#(enforced the initialisation of the libraries)#" )
;


    static_cast<py::class_<RWStepAP214_GeneralModule ,opencascade::handle<RWStepAP214_GeneralModule>  , StepData_GeneralModule >>(m.attr("RWStepAP214_GeneralModule"))
        .def(py::init<  >()  )
        .def("FillSharedCase",
             (void (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_GeneralModule::FillSharedCase),
             R"#(Specific filling of the list of Entities shared by an Entity <ent>, according to a Case Number <CN> (provided by StepAP214 Protocol).)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("CheckCase",
             (void (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&RWStepAP214_GeneralModule::CheckCase),
             R"#(Specific Checking of an Entity <ent>)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("CopyCase",
             (void (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> & ,  Interface_CopyTool &  ) const) static_cast<void (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> & ,  Interface_CopyTool &  ) const>(&RWStepAP214_GeneralModule::CopyCase),
             R"#(Specific Copy ("Deep") from <entfrom> to <entto> (same type) by using a CopyTool which provides its working Map. Use method Transferred from CopyTool to work)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("NewVoid",
             (Standard_Boolean (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const>(&RWStepAP214_GeneralModule::NewVoid),
             R"#(None)#"  , py::arg("CN"),  py::arg("ent"))
        .def("CategoryNumber",
             (Standard_Integer (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const) static_cast<Standard_Integer (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const>(&RWStepAP214_GeneralModule::CategoryNumber),
             R"#(None)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (RWStepAP214_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const>(&RWStepAP214_GeneralModule::Name),
             R"#(Returns the name of a STEP Entity according to its type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (RWStepAP214_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (RWStepAP214_GeneralModule::*)() const>(&RWStepAP214_GeneralModule::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&RWStepAP214_GeneralModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&RWStepAP214_GeneralModule::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<RWStepAP214_RWRepItemGroup ,std::unique_ptr<RWStepAP214_RWRepItemGroup>  >>(m.attr("RWStepAP214_RWRepItemGroup"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWRepItemGroup::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_RepItemGroup> &  ) const) static_cast<void (RWStepAP214_RWRepItemGroup::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_RepItemGroup> &  ) const>(&RWStepAP214_RWRepItemGroup::ReadStep),
             R"#(Reads RepItemGroup)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWRepItemGroup::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_RepItemGroup> &  ) const) static_cast<void (RWStepAP214_RWRepItemGroup::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_RepItemGroup> &  ) const>(&RWStepAP214_RWRepItemGroup::WriteStep),
             R"#(Writes RepItemGroup)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWRepItemGroup::*)( const opencascade::handle<StepAP214_RepItemGroup> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWRepItemGroup::*)( const opencascade::handle<StepAP214_RepItemGroup> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWRepItemGroup::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWExternallyDefinedClass ,std::unique_ptr<RWStepAP214_RWExternallyDefinedClass>  >>(m.attr("RWStepAP214_RWExternallyDefinedClass"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWExternallyDefinedClass::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_ExternallyDefinedClass> &  ) const) static_cast<void (RWStepAP214_RWExternallyDefinedClass::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_ExternallyDefinedClass> &  ) const>(&RWStepAP214_RWExternallyDefinedClass::ReadStep),
             R"#(Reads ExternallyDefinedClass)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWExternallyDefinedClass::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_ExternallyDefinedClass> &  ) const) static_cast<void (RWStepAP214_RWExternallyDefinedClass::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_ExternallyDefinedClass> &  ) const>(&RWStepAP214_RWExternallyDefinedClass::WriteStep),
             R"#(Writes ExternallyDefinedClass)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWExternallyDefinedClass::*)( const opencascade::handle<StepAP214_ExternallyDefinedClass> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWExternallyDefinedClass::*)( const opencascade::handle<StepAP214_ExternallyDefinedClass> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWExternallyDefinedClass::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAppliedPersonAndOrganizationAssignment ,std::unique_ptr<RWStepAP214_RWAppliedPersonAndOrganizationAssignment>  >>(m.attr("RWStepAP214_RWAppliedPersonAndOrganizationAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAppliedPersonAndOrganizationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedPersonAndOrganizationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> &  ) const>(&RWStepAP214_RWAppliedPersonAndOrganizationAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAppliedPersonAndOrganizationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedPersonAndOrganizationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> &  ) const>(&RWStepAP214_RWAppliedPersonAndOrganizationAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAppliedPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAppliedPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAppliedPersonAndOrganizationAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAppliedApprovalAssignment ,std::unique_ptr<RWStepAP214_RWAppliedApprovalAssignment>  >>(m.attr("RWStepAP214_RWAppliedApprovalAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAppliedApprovalAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedApprovalAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedApprovalAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedApprovalAssignment> &  ) const>(&RWStepAP214_RWAppliedApprovalAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAppliedApprovalAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedApprovalAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedApprovalAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedApprovalAssignment> &  ) const>(&RWStepAP214_RWAppliedApprovalAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAppliedApprovalAssignment::*)( const opencascade::handle<StepAP214_AppliedApprovalAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAppliedApprovalAssignment::*)( const opencascade::handle<StepAP214_AppliedApprovalAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAppliedApprovalAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAppliedOrganizationAssignment ,std::unique_ptr<RWStepAP214_RWAppliedOrganizationAssignment>  >>(m.attr("RWStepAP214_RWAppliedOrganizationAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAppliedOrganizationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedOrganizationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedOrganizationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedOrganizationAssignment> &  ) const>(&RWStepAP214_RWAppliedOrganizationAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAppliedOrganizationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedOrganizationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedOrganizationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedOrganizationAssignment> &  ) const>(&RWStepAP214_RWAppliedOrganizationAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAppliedOrganizationAssignment::*)( const opencascade::handle<StepAP214_AppliedOrganizationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAppliedOrganizationAssignment::*)( const opencascade::handle<StepAP214_AppliedOrganizationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAppliedOrganizationAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment>  >>(m.attr("RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignNominalDateAndTimeAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignNominalDateAndTimeAssignment> &  ) const>(&RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignNominalDateAndTimeAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignNominalDateAndTimeAssignment> &  ) const>(&RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_AutoDesignNominalDateAndTimeAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_AutoDesignNominalDateAndTimeAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignSecurityClassificationAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignSecurityClassificationAssignment>  >>(m.attr("RWStepAP214_RWAutoDesignSecurityClassificationAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignSecurityClassificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignSecurityClassificationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignSecurityClassificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignSecurityClassificationAssignment> &  ) const>(&RWStepAP214_RWAutoDesignSecurityClassificationAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignSecurityClassificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignSecurityClassificationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignSecurityClassificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignSecurityClassificationAssignment> &  ) const>(&RWStepAP214_RWAutoDesignSecurityClassificationAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignSecurityClassificationAssignment::*)( const opencascade::handle<StepAP214_AutoDesignSecurityClassificationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignSecurityClassificationAssignment::*)( const opencascade::handle<StepAP214_AutoDesignSecurityClassificationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignSecurityClassificationAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAppliedDocumentReference ,std::unique_ptr<RWStepAP214_RWAppliedDocumentReference>  >>(m.attr("RWStepAP214_RWAppliedDocumentReference"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAppliedDocumentReference::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedDocumentReference> &  ) const) static_cast<void (RWStepAP214_RWAppliedDocumentReference::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedDocumentReference> &  ) const>(&RWStepAP214_RWAppliedDocumentReference::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAppliedDocumentReference::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedDocumentReference> &  ) const) static_cast<void (RWStepAP214_RWAppliedDocumentReference::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedDocumentReference> &  ) const>(&RWStepAP214_RWAppliedDocumentReference::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAppliedDocumentReference::*)( const opencascade::handle<StepAP214_AppliedDocumentReference> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAppliedDocumentReference::*)( const opencascade::handle<StepAP214_AppliedDocumentReference> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAppliedDocumentReference::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_ReadWriteModule ,opencascade::handle<RWStepAP214_ReadWriteModule>  , StepData_ReadWriteModule >>(m.attr("RWStepAP214_ReadWriteModule"))
        .def(py::init<  >()  )
        .def("CaseStep",
             (Standard_Integer (RWStepAP214_ReadWriteModule::*)( const TCollection_AsciiString &  ) const) static_cast<Standard_Integer (RWStepAP214_ReadWriteModule::*)( const TCollection_AsciiString &  ) const>(&RWStepAP214_ReadWriteModule::CaseStep),
             R"#(associates a positive Case Number to each type of StepAP214 entity, given as a String defined in the EXPRESS form)#"  , py::arg("atype"))
        .def("CaseStep",
             (Standard_Integer (RWStepAP214_ReadWriteModule::*)(  const NCollection_Sequence<TCollection_AsciiString> &  ) const) static_cast<Standard_Integer (RWStepAP214_ReadWriteModule::*)(  const NCollection_Sequence<TCollection_AsciiString> &  ) const>(&RWStepAP214_ReadWriteModule::CaseStep),
             R"#(associates a positive Case Number to each type of StepAP214 Complex entity, given as a String defined in the EXPRESS form)#"  , py::arg("types"))
        .def("IsComplex",
             (Standard_Boolean (RWStepAP214_ReadWriteModule::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (RWStepAP214_ReadWriteModule::*)( const Standard_Integer  ) const>(&RWStepAP214_ReadWriteModule::IsComplex),
             R"#(returns True if the Case Number corresponds to a Complex Type)#"  , py::arg("CN"))
        .def("StepType",
             (const TCollection_AsciiString & (RWStepAP214_ReadWriteModule::*)( const Standard_Integer  ) const) static_cast<const TCollection_AsciiString & (RWStepAP214_ReadWriteModule::*)( const Standard_Integer  ) const>(&RWStepAP214_ReadWriteModule::StepType),
             R"#(returns a StepType (defined in EXPRESS form which belongs to a Type of Entity, identified by its CaseNumber determined by Protocol)#"  , py::arg("CN"))
        .def("ComplexType",
             (Standard_Boolean (RWStepAP214_ReadWriteModule::*)( const Standard_Integer ,  NCollection_Sequence<TCollection_AsciiString> &  ) const) static_cast<Standard_Boolean (RWStepAP214_ReadWriteModule::*)( const Standard_Integer ,  NCollection_Sequence<TCollection_AsciiString> &  ) const>(&RWStepAP214_ReadWriteModule::ComplexType),
             R"#(None)#"  , py::arg("CN"),  py::arg("types"))
        .def("ReadStep",
             (void (RWStepAP214_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<Standard_Transient> &  ) const) static_cast<void (RWStepAP214_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<Standard_Transient> &  ) const>(&RWStepAP214_ReadWriteModule::ReadStep),
             R"#(None)#"  , py::arg("CN"),  py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_ReadWriteModule::*)( const Standard_Integer ,  StepData_StepWriter & ,  const opencascade::handle<Standard_Transient> &  ) const) static_cast<void (RWStepAP214_ReadWriteModule::*)( const Standard_Integer ,  StepData_StepWriter & ,  const opencascade::handle<Standard_Transient> &  ) const>(&RWStepAP214_ReadWriteModule::WriteStep),
             R"#(None)#"  , py::arg("CN"),  py::arg("SW"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (RWStepAP214_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (RWStepAP214_ReadWriteModule::*)() const>(&RWStepAP214_ReadWriteModule::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&RWStepAP214_ReadWriteModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&RWStepAP214_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignOrganizationAssignment ,std::unique_ptr<RWStepAP214_RWAutoDesignOrganizationAssignment>  >>(m.attr("RWStepAP214_RWAutoDesignOrganizationAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAutoDesignOrganizationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignOrganizationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignOrganizationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AutoDesignOrganizationAssignment> &  ) const>(&RWStepAP214_RWAutoDesignOrganizationAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAutoDesignOrganizationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignOrganizationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAutoDesignOrganizationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AutoDesignOrganizationAssignment> &  ) const>(&RWStepAP214_RWAutoDesignOrganizationAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAutoDesignOrganizationAssignment::*)( const opencascade::handle<StepAP214_AutoDesignOrganizationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAutoDesignOrganizationAssignment::*)( const opencascade::handle<StepAP214_AutoDesignOrganizationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAutoDesignOrganizationAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAppliedExternalIdentificationAssignment ,std::unique_ptr<RWStepAP214_RWAppliedExternalIdentificationAssignment>  >>(m.attr("RWStepAP214_RWAppliedExternalIdentificationAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAppliedExternalIdentificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedExternalIdentificationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment> &  ) const>(&RWStepAP214_RWAppliedExternalIdentificationAssignment::ReadStep),
             R"#(Reads AppliedExternalIdentificationAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAppliedExternalIdentificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedExternalIdentificationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment> &  ) const>(&RWStepAP214_RWAppliedExternalIdentificationAssignment::WriteStep),
             R"#(Writes AppliedExternalIdentificationAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAppliedExternalIdentificationAssignment::*)( const opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAppliedExternalIdentificationAssignment::*)( const opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAppliedExternalIdentificationAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP214_RWAppliedDateAndTimeAssignment ,std::unique_ptr<RWStepAP214_RWAppliedDateAndTimeAssignment>  >>(m.attr("RWStepAP214_RWAppliedDateAndTimeAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP214_RWAppliedDateAndTimeAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedDateAndTimeAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedDateAndTimeAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP214_AppliedDateAndTimeAssignment> &  ) const>(&RWStepAP214_RWAppliedDateAndTimeAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_RWAppliedDateAndTimeAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedDateAndTimeAssignment> &  ) const) static_cast<void (RWStepAP214_RWAppliedDateAndTimeAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP214_AppliedDateAndTimeAssignment> &  ) const>(&RWStepAP214_RWAppliedDateAndTimeAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP214_RWAppliedDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_AppliedDateAndTimeAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP214_RWAppliedDateAndTimeAssignment::*)( const opencascade::handle<StepAP214_AppliedDateAndTimeAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP214_RWAppliedDateAndTimeAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;

// functions
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

// operators

// register typdefs
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


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
