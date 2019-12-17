
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_StartRequest.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_StartWork.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignDateAndTimeAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignSecurityClassification.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_ChangeRequest.hxx>
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
#include <StepAP203_CcDesignApproval.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignSpecificationReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignContract.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignCertification.hxx>
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
void register_RWStepAP203(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepAP203"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepAP203_RWStartRequest ,std::unique_ptr<RWStepAP203_RWStartRequest>  >>(m.attr("RWStepAP203_RWStartRequest"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWStartRequest::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_StartRequest> &  ) const) static_cast<void (RWStepAP203_RWStartRequest::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_StartRequest> &  ) const>(&RWStepAP203_RWStartRequest::ReadStep),
             R"#(Reads StartRequest)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWStartRequest::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_StartRequest> &  ) const) static_cast<void (RWStepAP203_RWStartRequest::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_StartRequest> &  ) const>(&RWStepAP203_RWStartRequest::WriteStep),
             R"#(Writes StartRequest)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWStartRequest::*)( const opencascade::handle<StepAP203_StartRequest> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWStartRequest::*)( const opencascade::handle<StepAP203_StartRequest> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWStartRequest::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP203_RWCcDesignDateAndTimeAssignment ,std::unique_ptr<RWStepAP203_RWCcDesignDateAndTimeAssignment>  >>(m.attr("RWStepAP203_RWCcDesignDateAndTimeAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWCcDesignDateAndTimeAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> &  ) const) static_cast<void (RWStepAP203_RWCcDesignDateAndTimeAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> &  ) const>(&RWStepAP203_RWCcDesignDateAndTimeAssignment::ReadStep),
             R"#(Reads CcDesignDateAndTimeAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWCcDesignDateAndTimeAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> &  ) const) static_cast<void (RWStepAP203_RWCcDesignDateAndTimeAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> &  ) const>(&RWStepAP203_RWCcDesignDateAndTimeAssignment::WriteStep),
             R"#(Writes CcDesignDateAndTimeAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWCcDesignDateAndTimeAssignment::*)( const opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWCcDesignDateAndTimeAssignment::*)( const opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWCcDesignDateAndTimeAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP203_RWChangeRequest ,std::unique_ptr<RWStepAP203_RWChangeRequest>  >>(m.attr("RWStepAP203_RWChangeRequest"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWChangeRequest::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_ChangeRequest> &  ) const) static_cast<void (RWStepAP203_RWChangeRequest::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_ChangeRequest> &  ) const>(&RWStepAP203_RWChangeRequest::ReadStep),
             R"#(Reads ChangeRequest)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWChangeRequest::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_ChangeRequest> &  ) const) static_cast<void (RWStepAP203_RWChangeRequest::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_ChangeRequest> &  ) const>(&RWStepAP203_RWChangeRequest::WriteStep),
             R"#(Writes ChangeRequest)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWChangeRequest::*)( const opencascade::handle<StepAP203_ChangeRequest> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWChangeRequest::*)( const opencascade::handle<StepAP203_ChangeRequest> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWChangeRequest::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP203_RWChange ,std::unique_ptr<RWStepAP203_RWChange>  >>(m.attr("RWStepAP203_RWChange"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWChange::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_Change> &  ) const) static_cast<void (RWStepAP203_RWChange::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_Change> &  ) const>(&RWStepAP203_RWChange::ReadStep),
             R"#(Reads Change)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWChange::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_Change> &  ) const) static_cast<void (RWStepAP203_RWChange::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_Change> &  ) const>(&RWStepAP203_RWChange::WriteStep),
             R"#(Writes Change)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWChange::*)( const opencascade::handle<StepAP203_Change> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWChange::*)( const opencascade::handle<StepAP203_Change> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWChange::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP203_RWCcDesignSpecificationReference ,std::unique_ptr<RWStepAP203_RWCcDesignSpecificationReference>  >>(m.attr("RWStepAP203_RWCcDesignSpecificationReference"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWCcDesignSpecificationReference::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignSpecificationReference> &  ) const) static_cast<void (RWStepAP203_RWCcDesignSpecificationReference::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignSpecificationReference> &  ) const>(&RWStepAP203_RWCcDesignSpecificationReference::ReadStep),
             R"#(Reads CcDesignSpecificationReference)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWCcDesignSpecificationReference::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignSpecificationReference> &  ) const) static_cast<void (RWStepAP203_RWCcDesignSpecificationReference::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignSpecificationReference> &  ) const>(&RWStepAP203_RWCcDesignSpecificationReference::WriteStep),
             R"#(Writes CcDesignSpecificationReference)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWCcDesignSpecificationReference::*)( const opencascade::handle<StepAP203_CcDesignSpecificationReference> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWCcDesignSpecificationReference::*)( const opencascade::handle<StepAP203_CcDesignSpecificationReference> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWCcDesignSpecificationReference::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP203_RWCcDesignCertification ,std::unique_ptr<RWStepAP203_RWCcDesignCertification>  >>(m.attr("RWStepAP203_RWCcDesignCertification"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWCcDesignCertification::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignCertification> &  ) const) static_cast<void (RWStepAP203_RWCcDesignCertification::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignCertification> &  ) const>(&RWStepAP203_RWCcDesignCertification::ReadStep),
             R"#(Reads CcDesignCertification)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWCcDesignCertification::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignCertification> &  ) const) static_cast<void (RWStepAP203_RWCcDesignCertification::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignCertification> &  ) const>(&RWStepAP203_RWCcDesignCertification::WriteStep),
             R"#(Writes CcDesignCertification)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWCcDesignCertification::*)( const opencascade::handle<StepAP203_CcDesignCertification> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWCcDesignCertification::*)( const opencascade::handle<StepAP203_CcDesignCertification> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWCcDesignCertification::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP203_RWStartWork ,std::unique_ptr<RWStepAP203_RWStartWork>  >>(m.attr("RWStepAP203_RWStartWork"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWStartWork::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_StartWork> &  ) const) static_cast<void (RWStepAP203_RWStartWork::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_StartWork> &  ) const>(&RWStepAP203_RWStartWork::ReadStep),
             R"#(Reads StartWork)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWStartWork::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_StartWork> &  ) const) static_cast<void (RWStepAP203_RWStartWork::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_StartWork> &  ) const>(&RWStepAP203_RWStartWork::WriteStep),
             R"#(Writes StartWork)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWStartWork::*)( const opencascade::handle<StepAP203_StartWork> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWStartWork::*)( const opencascade::handle<StepAP203_StartWork> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWStartWork::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP203_RWCcDesignPersonAndOrganizationAssignment ,std::unique_ptr<RWStepAP203_RWCcDesignPersonAndOrganizationAssignment>  >>(m.attr("RWStepAP203_RWCcDesignPersonAndOrganizationAssignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWCcDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> &  ) const) static_cast<void (RWStepAP203_RWCcDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> &  ) const>(&RWStepAP203_RWCcDesignPersonAndOrganizationAssignment::ReadStep),
             R"#(Reads CcDesignPersonAndOrganizationAssignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWCcDesignPersonAndOrganizationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> &  ) const) static_cast<void (RWStepAP203_RWCcDesignPersonAndOrganizationAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> &  ) const>(&RWStepAP203_RWCcDesignPersonAndOrganizationAssignment::WriteStep),
             R"#(Writes CcDesignPersonAndOrganizationAssignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWCcDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWCcDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWCcDesignPersonAndOrganizationAssignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP203_RWCcDesignContract ,std::unique_ptr<RWStepAP203_RWCcDesignContract>  >>(m.attr("RWStepAP203_RWCcDesignContract"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWCcDesignContract::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignContract> &  ) const) static_cast<void (RWStepAP203_RWCcDesignContract::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignContract> &  ) const>(&RWStepAP203_RWCcDesignContract::ReadStep),
             R"#(Reads CcDesignContract)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWCcDesignContract::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignContract> &  ) const) static_cast<void (RWStepAP203_RWCcDesignContract::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignContract> &  ) const>(&RWStepAP203_RWCcDesignContract::WriteStep),
             R"#(Writes CcDesignContract)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWCcDesignContract::*)( const opencascade::handle<StepAP203_CcDesignContract> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWCcDesignContract::*)( const opencascade::handle<StepAP203_CcDesignContract> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWCcDesignContract::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP203_RWCcDesignSecurityClassification ,std::unique_ptr<RWStepAP203_RWCcDesignSecurityClassification>  >>(m.attr("RWStepAP203_RWCcDesignSecurityClassification"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWCcDesignSecurityClassification::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignSecurityClassification> &  ) const) static_cast<void (RWStepAP203_RWCcDesignSecurityClassification::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignSecurityClassification> &  ) const>(&RWStepAP203_RWCcDesignSecurityClassification::ReadStep),
             R"#(Reads CcDesignSecurityClassification)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWCcDesignSecurityClassification::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignSecurityClassification> &  ) const) static_cast<void (RWStepAP203_RWCcDesignSecurityClassification::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignSecurityClassification> &  ) const>(&RWStepAP203_RWCcDesignSecurityClassification::WriteStep),
             R"#(Writes CcDesignSecurityClassification)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWCcDesignSecurityClassification::*)( const opencascade::handle<StepAP203_CcDesignSecurityClassification> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWCcDesignSecurityClassification::*)( const opencascade::handle<StepAP203_CcDesignSecurityClassification> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWCcDesignSecurityClassification::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepAP203_RWCcDesignApproval ,std::unique_ptr<RWStepAP203_RWCcDesignApproval>  >>(m.attr("RWStepAP203_RWCcDesignApproval"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepAP203_RWCcDesignApproval::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignApproval> &  ) const) static_cast<void (RWStepAP203_RWCcDesignApproval::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepAP203_CcDesignApproval> &  ) const>(&RWStepAP203_RWCcDesignApproval::ReadStep),
             R"#(Reads CcDesignApproval)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP203_RWCcDesignApproval::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignApproval> &  ) const) static_cast<void (RWStepAP203_RWCcDesignApproval::*)( StepData_StepWriter & ,  const opencascade::handle<StepAP203_CcDesignApproval> &  ) const>(&RWStepAP203_RWCcDesignApproval::WriteStep),
             R"#(Writes CcDesignApproval)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepAP203_RWCcDesignApproval::*)( const opencascade::handle<StepAP203_CcDesignApproval> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepAP203_RWCcDesignApproval::*)( const opencascade::handle<StepAP203_CcDesignApproval> & ,  Interface_EntityIterator &  ) const>(&RWStepAP203_RWCcDesignApproval::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;

// functions
// ./opencascade/RWStepAP203_RWStartRequest.hxx
// ./opencascade/RWStepAP203_RWStartWork.hxx
// ./opencascade/RWStepAP203_RWCcDesignDateAndTimeAssignment.hxx
// ./opencascade/RWStepAP203_RWCcDesignSecurityClassification.hxx
// ./opencascade/RWStepAP203_RWChangeRequest.hxx
// ./opencascade/RWStepAP203_RWCcDesignPersonAndOrganizationAssignment.hxx
// ./opencascade/RWStepAP203_RWChange.hxx
// ./opencascade/RWStepAP203_RWCcDesignApproval.hxx
// ./opencascade/RWStepAP203_RWCcDesignSpecificationReference.hxx
// ./opencascade/RWStepAP203_RWCcDesignContract.hxx
// ./opencascade/RWStepAP203_RWCcDesignCertification.hxx

// operators

// register typdefs
// ./opencascade/RWStepAP203_RWStartRequest.hxx
// ./opencascade/RWStepAP203_RWStartWork.hxx
// ./opencascade/RWStepAP203_RWCcDesignDateAndTimeAssignment.hxx
// ./opencascade/RWStepAP203_RWCcDesignSecurityClassification.hxx
// ./opencascade/RWStepAP203_RWChangeRequest.hxx
// ./opencascade/RWStepAP203_RWCcDesignPersonAndOrganizationAssignment.hxx
// ./opencascade/RWStepAP203_RWChange.hxx
// ./opencascade/RWStepAP203_RWCcDesignApproval.hxx
// ./opencascade/RWStepAP203_RWCcDesignSpecificationReference.hxx
// ./opencascade/RWStepAP203_RWCcDesignContract.hxx
// ./opencascade/RWStepAP203_RWCcDesignCertification.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
