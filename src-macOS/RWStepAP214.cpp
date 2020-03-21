
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
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedPresentedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedDateAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_RepItemGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignGroupAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignNominalDateAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedApprovalAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignPresentedItem.hxx>
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
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedGroupAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_Class.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignSecurityClassificationAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignApprovalAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AutoDesignActualDateAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepAP214_AppliedDateAndTimeAssignment.hxx>
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

    // default constructor
    register_default_constructor<RWStepAP214 , shared_ptr<RWStepAP214>>(m,"RWStepAP214");

    static_cast<py::class_<RWStepAP214 , shared_ptr<RWStepAP214> >>(m.attr("RWStepAP214"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_GeneralModule ,opencascade::handle<RWStepAP214_GeneralModule> , StepData_GeneralModule>>(m.attr("RWStepAP214_GeneralModule"))
    // constructors
    // custom constructors
    // methods
        .def("FillSharedCase",
             (void (RWStepAP214_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (RWStepAP214_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&RWStepAP214_GeneralModule::FillSharedCase),
             R"#(Specific filling of the list of Entities shared by an Entity <ent>, according to a Case Number <CN> (provided by StepAP214 Protocol).)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("CheckCase",
             (void (RWStepAP214_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const) static_cast<void (RWStepAP214_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & , opencascade::handle<Interface_Check> & ) const>(&RWStepAP214_GeneralModule::CheckCase),
             R"#(Specific Checking of an Entity <ent>)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("CopyCase",
             (void (RWStepAP214_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const) static_cast<void (RWStepAP214_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & , Interface_CopyTool & ) const>(&RWStepAP214_GeneralModule::CopyCase),
             R"#(Specific Copy ("Deep") from <entfrom> to <entto> (same type) by using a CopyTool which provides its working Map. Use method Transferred from CopyTool to work)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("NewVoid",
             (Standard_Boolean (RWStepAP214_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (RWStepAP214_GeneralModule::*)( const Standard_Integer , opencascade::handle<Standard_Transient> & ) const>(&RWStepAP214_GeneralModule::NewVoid),
             R"#(None)#"  , py::arg("CN"),  py::arg("ent"))
        .def("CategoryNumber",
             (Standard_Integer (RWStepAP214_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<Standard_Integer (RWStepAP214_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&RWStepAP214_GeneralModule::CategoryNumber),
             R"#(None)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (RWStepAP214_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (RWStepAP214_GeneralModule::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_ShareTool & ) const>(&RWStepAP214_GeneralModule::Name),
             R"#(Returns the name of a STEP Entity according to its type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (RWStepAP214_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (RWStepAP214_GeneralModule::*)() const>(&RWStepAP214_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&RWStepAP214_GeneralModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAppliedApprovalAssignment , shared_ptr<RWStepAP214_RWAppliedApprovalAssignment> >>(m.attr("RWStepAP214_RWAppliedApprovalAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAppliedDateAndTimeAssignment , shared_ptr<RWStepAP214_RWAppliedDateAndTimeAssignment> >>(m.attr("RWStepAP214_RWAppliedDateAndTimeAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAppliedDateAssignment , shared_ptr<RWStepAP214_RWAppliedDateAssignment> >>(m.attr("RWStepAP214_RWAppliedDateAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAppliedDocumentReference , shared_ptr<RWStepAP214_RWAppliedDocumentReference> >>(m.attr("RWStepAP214_RWAppliedDocumentReference"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAppliedExternalIdentificationAssignment , shared_ptr<RWStepAP214_RWAppliedExternalIdentificationAssignment> >>(m.attr("RWStepAP214_RWAppliedExternalIdentificationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAppliedGroupAssignment , shared_ptr<RWStepAP214_RWAppliedGroupAssignment> >>(m.attr("RWStepAP214_RWAppliedGroupAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAppliedOrganizationAssignment , shared_ptr<RWStepAP214_RWAppliedOrganizationAssignment> >>(m.attr("RWStepAP214_RWAppliedOrganizationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAppliedPersonAndOrganizationAssignment , shared_ptr<RWStepAP214_RWAppliedPersonAndOrganizationAssignment> >>(m.attr("RWStepAP214_RWAppliedPersonAndOrganizationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAppliedPresentedItem , shared_ptr<RWStepAP214_RWAppliedPresentedItem> >>(m.attr("RWStepAP214_RWAppliedPresentedItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAppliedSecurityClassificationAssignment , shared_ptr<RWStepAP214_RWAppliedSecurityClassificationAssignment> >>(m.attr("RWStepAP214_RWAppliedSecurityClassificationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignActualDateAndTimeAssignment , shared_ptr<RWStepAP214_RWAutoDesignActualDateAndTimeAssignment> >>(m.attr("RWStepAP214_RWAutoDesignActualDateAndTimeAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignActualDateAssignment , shared_ptr<RWStepAP214_RWAutoDesignActualDateAssignment> >>(m.attr("RWStepAP214_RWAutoDesignActualDateAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignApprovalAssignment , shared_ptr<RWStepAP214_RWAutoDesignApprovalAssignment> >>(m.attr("RWStepAP214_RWAutoDesignApprovalAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignDateAndPersonAssignment , shared_ptr<RWStepAP214_RWAutoDesignDateAndPersonAssignment> >>(m.attr("RWStepAP214_RWAutoDesignDateAndPersonAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignDocumentReference , shared_ptr<RWStepAP214_RWAutoDesignDocumentReference> >>(m.attr("RWStepAP214_RWAutoDesignDocumentReference"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignGroupAssignment , shared_ptr<RWStepAP214_RWAutoDesignGroupAssignment> >>(m.attr("RWStepAP214_RWAutoDesignGroupAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment , shared_ptr<RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment> >>(m.attr("RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignNominalDateAssignment , shared_ptr<RWStepAP214_RWAutoDesignNominalDateAssignment> >>(m.attr("RWStepAP214_RWAutoDesignNominalDateAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignOrganizationAssignment , shared_ptr<RWStepAP214_RWAutoDesignOrganizationAssignment> >>(m.attr("RWStepAP214_RWAutoDesignOrganizationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment , shared_ptr<RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment> >>(m.attr("RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignPresentedItem , shared_ptr<RWStepAP214_RWAutoDesignPresentedItem> >>(m.attr("RWStepAP214_RWAutoDesignPresentedItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWAutoDesignSecurityClassificationAssignment , shared_ptr<RWStepAP214_RWAutoDesignSecurityClassificationAssignment> >>(m.attr("RWStepAP214_RWAutoDesignSecurityClassificationAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWClass , shared_ptr<RWStepAP214_RWClass> >>(m.attr("RWStepAP214_RWClass"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWExternallyDefinedClass , shared_ptr<RWStepAP214_RWExternallyDefinedClass> >>(m.attr("RWStepAP214_RWExternallyDefinedClass"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWExternallyDefinedGeneralProperty , shared_ptr<RWStepAP214_RWExternallyDefinedGeneralProperty> >>(m.attr("RWStepAP214_RWExternallyDefinedGeneralProperty"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_RWRepItemGroup , shared_ptr<RWStepAP214_RWRepItemGroup> >>(m.attr("RWStepAP214_RWRepItemGroup"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepAP214_ReadWriteModule ,opencascade::handle<RWStepAP214_ReadWriteModule> , StepData_ReadWriteModule>>(m.attr("RWStepAP214_ReadWriteModule"))
    // constructors
    // custom constructors
    // methods
        .def("CaseStep",
             (Standard_Integer (RWStepAP214_ReadWriteModule::*)( const TCollection_AsciiString & ) const) static_cast<Standard_Integer (RWStepAP214_ReadWriteModule::*)( const TCollection_AsciiString & ) const>(&RWStepAP214_ReadWriteModule::CaseStep),
             R"#(associates a positive Case Number to each type of StepAP214 entity, given as a String defined in the EXPRESS form)#"  , py::arg("atype"))
        .def("CaseStep",
             (Standard_Integer (RWStepAP214_ReadWriteModule::*)(  const NCollection_Sequence<TCollection_AsciiString> & ) const) static_cast<Standard_Integer (RWStepAP214_ReadWriteModule::*)(  const NCollection_Sequence<TCollection_AsciiString> & ) const>(&RWStepAP214_ReadWriteModule::CaseStep),
             R"#(associates a positive Case Number to each type of StepAP214 Complex entity, given as a String defined in the EXPRESS form)#"  , py::arg("types"))
        .def("IsComplex",
             (Standard_Boolean (RWStepAP214_ReadWriteModule::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (RWStepAP214_ReadWriteModule::*)( const Standard_Integer ) const>(&RWStepAP214_ReadWriteModule::IsComplex),
             R"#(returns True if the Case Number corresponds to a Complex Type)#"  , py::arg("CN"))
        .def("StepType",
             (const TCollection_AsciiString & (RWStepAP214_ReadWriteModule::*)( const Standard_Integer ) const) static_cast<const TCollection_AsciiString & (RWStepAP214_ReadWriteModule::*)( const Standard_Integer ) const>(&RWStepAP214_ReadWriteModule::StepType),
             R"#(returns a StepType (defined in EXPRESS form which belongs to a Type of Entity, identified by its CaseNumber determined by Protocol)#"  , py::arg("CN"))
        .def("ComplexType",
             (Standard_Boolean (RWStepAP214_ReadWriteModule::*)( const Standard_Integer , NCollection_Sequence<TCollection_AsciiString> & ) const) static_cast<Standard_Boolean (RWStepAP214_ReadWriteModule::*)( const Standard_Integer , NCollection_Sequence<TCollection_AsciiString> & ) const>(&RWStepAP214_ReadWriteModule::ComplexType),
             R"#(None)#"  , py::arg("CN"),  py::arg("types"))
        .def("ReadStep",
             (void (RWStepAP214_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Transient> & ) const) static_cast<void (RWStepAP214_ReadWriteModule::*)( const Standard_Integer , const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<Standard_Transient> & ) const>(&RWStepAP214_ReadWriteModule::ReadStep),
             R"#(None)#"  , py::arg("CN"),  py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepAP214_ReadWriteModule::*)( const Standard_Integer , StepData_StepWriter & , const opencascade::handle<Standard_Transient> & ) const) static_cast<void (RWStepAP214_ReadWriteModule::*)( const Standard_Integer , StepData_StepWriter & , const opencascade::handle<Standard_Transient> & ) const>(&RWStepAP214_ReadWriteModule::WriteStep),
             R"#(None)#"  , py::arg("CN"),  py::arg("SW"),  py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (RWStepAP214_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (RWStepAP214_ReadWriteModule::*)() const>(&RWStepAP214_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&RWStepAP214_ReadWriteModule::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/RWStepAP214_RWAppliedSecurityClassificationAssignment.hxx
// ./opencascade/RWStepAP214_ReadWriteModule.hxx
// ./opencascade/RWStepAP214_RWAutoDesignDateAndPersonAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedPresentedItem.hxx
// ./opencascade/RWStepAP214_RWAutoDesignPersonAndOrganizationAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedDocumentReference.hxx
// ./opencascade/RWStepAP214_RWAutoDesignNominalDateAndTimeAssignment.hxx
// ./opencascade/RWStepAP214_GeneralModule.hxx
// ./opencascade/RWStepAP214_RWExternallyDefinedGeneralProperty.hxx
// ./opencascade/RWStepAP214_RWAppliedDateAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedPersonAndOrganizationAssignment.hxx
// ./opencascade/RWStepAP214_RWRepItemGroup.hxx
// ./opencascade/RWStepAP214_RWAutoDesignGroupAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedExternalIdentificationAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignNominalDateAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedApprovalAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignOrganizationAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignPresentedItem.hxx
// ./opencascade/RWStepAP214.hxx
// ./opencascade/RWStepAP214_RWAppliedOrganizationAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignActualDateAndTimeAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedGroupAssignment.hxx
// ./opencascade/RWStepAP214_RWClass.hxx
// ./opencascade/RWStepAP214_RWAutoDesignSecurityClassificationAssignment.hxx
// ./opencascade/RWStepAP214_RWExternallyDefinedClass.hxx
// ./opencascade/RWStepAP214_RWAutoDesignApprovalAssignment.hxx
// ./opencascade/RWStepAP214_RWAutoDesignDocumentReference.hxx
// ./opencascade/RWStepAP214_RWAutoDesignActualDateAssignment.hxx
// ./opencascade/RWStepAP214_RWAppliedDateAndTimeAssignment.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
