
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
#include <StepAP203_Change.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignSpecificationReference.hxx>
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
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_StartRequest.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_ChangeRequest.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignContract.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_StartWork.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignPersonAndOrganizationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP203_CcDesignDateAndTimeAssignment.hxx>
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


    static_cast<py::class_<RWStepAP203_RWCcDesignApproval , shared_ptr<RWStepAP203_RWCcDesignApproval> >>(m.attr("RWStepAP203_RWCcDesignApproval"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP203_RWCcDesignCertification , shared_ptr<RWStepAP203_RWCcDesignCertification> >>(m.attr("RWStepAP203_RWCcDesignCertification"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP203_RWCcDesignContract , shared_ptr<RWStepAP203_RWCcDesignContract> >>(m.attr("RWStepAP203_RWCcDesignContract"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP203_RWCcDesignDateAndTimeAssignment , shared_ptr<RWStepAP203_RWCcDesignDateAndTimeAssignment> >>(m.attr("RWStepAP203_RWCcDesignDateAndTimeAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP203_RWCcDesignPersonAndOrganizationAssignment , shared_ptr<RWStepAP203_RWCcDesignPersonAndOrganizationAssignment> >>(m.attr("RWStepAP203_RWCcDesignPersonAndOrganizationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP203_RWCcDesignSecurityClassification , shared_ptr<RWStepAP203_RWCcDesignSecurityClassification> >>(m.attr("RWStepAP203_RWCcDesignSecurityClassification"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP203_RWCcDesignSpecificationReference , shared_ptr<RWStepAP203_RWCcDesignSpecificationReference> >>(m.attr("RWStepAP203_RWCcDesignSpecificationReference"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP203_RWChange , shared_ptr<RWStepAP203_RWChange> >>(m.attr("RWStepAP203_RWChange"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP203_RWChangeRequest , shared_ptr<RWStepAP203_RWChangeRequest> >>(m.attr("RWStepAP203_RWChangeRequest"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP203_RWStartRequest , shared_ptr<RWStepAP203_RWStartRequest> >>(m.attr("RWStepAP203_RWStartRequest"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP203_RWStartWork , shared_ptr<RWStepAP203_RWStartWork> >>(m.attr("RWStepAP203_RWStartWork"))
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
// ./opencascade/RWStepAP203_RWChange.hxx
// ./opencascade/RWStepAP203_RWCcDesignSpecificationReference.hxx
// ./opencascade/RWStepAP203_RWCcDesignApproval.hxx
// ./opencascade/RWStepAP203_RWCcDesignSecurityClassification.hxx
// ./opencascade/RWStepAP203_RWStartRequest.hxx
// ./opencascade/RWStepAP203_RWChangeRequest.hxx
// ./opencascade/RWStepAP203_RWCcDesignContract.hxx
// ./opencascade/RWStepAP203_RWStartWork.hxx
// ./opencascade/RWStepAP203_RWCcDesignPersonAndOrganizationAssignment.hxx
// ./opencascade/RWStepAP203_RWCcDesignDateAndTimeAssignment.hxx
// ./opencascade/RWStepAP203_RWCcDesignCertification.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
