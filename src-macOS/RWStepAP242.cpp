
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
#include <StepAP242_ItemIdentifiedRepresentationUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_IdAttribute.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_DraughtingModelItemAssociation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP242_GeometricItemSpecificUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepAP242_RWDraughtingModelItemAssociation.hxx>
#include <RWStepAP242_RWGeometricItemSpecificUsage.hxx>
#include <RWStepAP242_RWIdAttribute.hxx>
#include <RWStepAP242_RWItemIdentifiedRepresentationUsage.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepAP242(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepAP242"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepAP242_RWDraughtingModelItemAssociation , shared_ptr<RWStepAP242_RWDraughtingModelItemAssociation> >>(m.attr("RWStepAP242_RWDraughtingModelItemAssociation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP242_RWGeometricItemSpecificUsage , shared_ptr<RWStepAP242_RWGeometricItemSpecificUsage> >>(m.attr("RWStepAP242_RWGeometricItemSpecificUsage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP242_RWIdAttribute , shared_ptr<RWStepAP242_RWIdAttribute> >>(m.attr("RWStepAP242_RWIdAttribute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP242_RWItemIdentifiedRepresentationUsage , shared_ptr<RWStepAP242_RWItemIdentifiedRepresentationUsage> >>(m.attr("RWStepAP242_RWItemIdentifiedRepresentationUsage"))
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
// ./opencascade/RWStepAP242_RWItemIdentifiedRepresentationUsage.hxx
// ./opencascade/RWStepAP242_RWIdAttribute.hxx
// ./opencascade/RWStepAP242_RWDraughtingModelItemAssociation.hxx
// ./opencascade/RWStepAP242_RWGeometricItemSpecificUsage.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
