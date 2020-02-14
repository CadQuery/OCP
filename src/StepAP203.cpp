
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepBasic_Action.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepBasic_Certification.hxx>
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
#include <StepBasic_VersionedActionRequest.hxx>
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
#include <StepAP203_ChangeRequest.hxx>
#include <StepAP203_StartRequest.hxx>
#include <StepAP203_Change.hxx>
#include <StepAP203_StartWork.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepBasic_Contract.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_Certification.hxx>
#include <StepRepr_SuppliedPartRelationship.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Action.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_Contract.hxx>

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
// ./opencascade/StepAP203_Array1OfApprovedItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP203_Array1OfStartRequestItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP203_Array1OfDateTimeItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP203_Array1OfContractedItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP203_Array1OfWorkItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP203_Array1OfClassifiedItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP203_Array1OfSpecifiedItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP203_Array1OfCertifiedItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP203_Array1OfPersonOrganizationItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepAP203_Array1OfChangeRequestItem.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepAP203(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepAP203"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepAP203_ApprovedItem , shared_ptr<StepAP203_ApprovedItem>  , StepData_SelectType >>(m.attr("StepAP203_ApprovedItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP203_ApprovedItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP203_ApprovedItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP203_ApprovedItem::CaseNum),
             R"#(Recognizes a kind of ApprovedItem select type 1 -> ProductDefinitionFormation from StepBasic 2 -> ProductDefinition from StepBasic 3 -> ConfigurationEffectivity from StepRepr 4 -> ConfigurationItem from StepRepr 5 -> SecurityClassification from StepBasic 6 -> ChangeRequest from StepAP203 7 -> Change from StepAP203 8 -> StartRequest from StepAP203 9 -> StartWork from StepAP203 10 -> Certification from StepBasic 11 -> Contract from StepBasic 0 else)#"  , py::arg("ent"))
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::ProductDefinitionFormation),
             R"#(Returns Value as ProductDefinitionFormation (or Null if another type))#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::ProductDefinition),
             R"#(Returns Value as ProductDefinition (or Null if another type))#" )
        .def("ConfigurationEffectivity",
             (opencascade::handle<StepRepr_ConfigurationEffectivity> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepRepr_ConfigurationEffectivity> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::ConfigurationEffectivity),
             R"#(Returns Value as ConfigurationEffectivity (or Null if another type))#" )
        .def("ConfigurationItem",
             (opencascade::handle<StepRepr_ConfigurationItem> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepRepr_ConfigurationItem> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::ConfigurationItem),
             R"#(Returns Value as ConfigurationItem (or Null if another type))#" )
        .def("SecurityClassification",
             (opencascade::handle<StepBasic_SecurityClassification> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepBasic_SecurityClassification> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::SecurityClassification),
             R"#(Returns Value as SecurityClassification (or Null if another type))#" )
        .def("ChangeRequest",
             (opencascade::handle<StepAP203_ChangeRequest> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepAP203_ChangeRequest> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::ChangeRequest),
             R"#(Returns Value as ChangeRequest (or Null if another type))#" )
        .def("Change",
             (opencascade::handle<StepAP203_Change> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepAP203_Change> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::Change),
             R"#(Returns Value as Change (or Null if another type))#" )
        .def("StartRequest",
             (opencascade::handle<StepAP203_StartRequest> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepAP203_StartRequest> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::StartRequest),
             R"#(Returns Value as StartRequest (or Null if another type))#" )
        .def("StartWork",
             (opencascade::handle<StepAP203_StartWork> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepAP203_StartWork> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::StartWork),
             R"#(Returns Value as StartWork (or Null if another type))#" )
        .def("Certification",
             (opencascade::handle<StepBasic_Certification> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepBasic_Certification> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::Certification),
             R"#(Returns Value as Certification (or Null if another type))#" )
        .def("Contract",
             (opencascade::handle<StepBasic_Contract> (StepAP203_ApprovedItem::*)() const) static_cast<opencascade::handle<StepBasic_Contract> (StepAP203_ApprovedItem::*)() const>(&StepAP203_ApprovedItem::Contract),
             R"#(Returns Value as Contract (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_CcDesignApproval ,opencascade::handle<StepAP203_CcDesignApproval>  , StepBasic_ApprovalAssignment >>(m.attr("StepAP203_CcDesignApproval"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_CcDesignApproval::*)( const opencascade::handle<StepBasic_Approval> & ,  const opencascade::handle<StepAP203_HArray1OfApprovedItem> &  ) ) static_cast<void (StepAP203_CcDesignApproval::*)( const opencascade::handle<StepBasic_Approval> & ,  const opencascade::handle<StepAP203_HArray1OfApprovedItem> &  ) >(&StepAP203_CcDesignApproval::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aApprovalAssignment_AssignedApproval"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfApprovedItem> (StepAP203_CcDesignApproval::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfApprovedItem> (StepAP203_CcDesignApproval::*)() const>(&StepAP203_CcDesignApproval::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_CcDesignApproval::*)( const opencascade::handle<StepAP203_HArray1OfApprovedItem> &  ) ) static_cast<void (StepAP203_CcDesignApproval::*)( const opencascade::handle<StepAP203_HArray1OfApprovedItem> &  ) >(&StepAP203_CcDesignApproval::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_CcDesignApproval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_CcDesignApproval::*)() const>(&StepAP203_CcDesignApproval::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_CcDesignApproval::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_CcDesignApproval::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_CcDesignCertification ,opencascade::handle<StepAP203_CcDesignCertification>  , StepBasic_CertificationAssignment >>(m.attr("StepAP203_CcDesignCertification"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_CcDesignCertification::*)( const opencascade::handle<StepBasic_Certification> & ,  const opencascade::handle<StepAP203_HArray1OfCertifiedItem> &  ) ) static_cast<void (StepAP203_CcDesignCertification::*)( const opencascade::handle<StepBasic_Certification> & ,  const opencascade::handle<StepAP203_HArray1OfCertifiedItem> &  ) >(&StepAP203_CcDesignCertification::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aCertificationAssignment_AssignedCertification"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfCertifiedItem> (StepAP203_CcDesignCertification::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfCertifiedItem> (StepAP203_CcDesignCertification::*)() const>(&StepAP203_CcDesignCertification::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_CcDesignCertification::*)( const opencascade::handle<StepAP203_HArray1OfCertifiedItem> &  ) ) static_cast<void (StepAP203_CcDesignCertification::*)( const opencascade::handle<StepAP203_HArray1OfCertifiedItem> &  ) >(&StepAP203_CcDesignCertification::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_CcDesignCertification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_CcDesignCertification::*)() const>(&StepAP203_CcDesignCertification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_CcDesignCertification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_CcDesignCertification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_CcDesignContract ,opencascade::handle<StepAP203_CcDesignContract>  , StepBasic_ContractAssignment >>(m.attr("StepAP203_CcDesignContract"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_CcDesignContract::*)( const opencascade::handle<StepBasic_Contract> & ,  const opencascade::handle<StepAP203_HArray1OfContractedItem> &  ) ) static_cast<void (StepAP203_CcDesignContract::*)( const opencascade::handle<StepBasic_Contract> & ,  const opencascade::handle<StepAP203_HArray1OfContractedItem> &  ) >(&StepAP203_CcDesignContract::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aContractAssignment_AssignedContract"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfContractedItem> (StepAP203_CcDesignContract::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfContractedItem> (StepAP203_CcDesignContract::*)() const>(&StepAP203_CcDesignContract::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_CcDesignContract::*)( const opencascade::handle<StepAP203_HArray1OfContractedItem> &  ) ) static_cast<void (StepAP203_CcDesignContract::*)( const opencascade::handle<StepAP203_HArray1OfContractedItem> &  ) >(&StepAP203_CcDesignContract::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_CcDesignContract::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_CcDesignContract::*)() const>(&StepAP203_CcDesignContract::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_CcDesignContract::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_CcDesignContract::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_CcDesignDateAndTimeAssignment ,opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment>  , StepBasic_DateAndTimeAssignment >>(m.attr("StepAP203_CcDesignDateAndTimeAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_CcDesignDateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  const opencascade::handle<StepBasic_DateTimeRole> & ,  const opencascade::handle<StepAP203_HArray1OfDateTimeItem> &  ) ) static_cast<void (StepAP203_CcDesignDateAndTimeAssignment::*)( const opencascade::handle<StepBasic_DateAndTime> & ,  const opencascade::handle<StepBasic_DateTimeRole> & ,  const opencascade::handle<StepAP203_HArray1OfDateTimeItem> &  ) >(&StepAP203_CcDesignDateAndTimeAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDateAndTimeAssignment_AssignedDateAndTime"),  py::arg("aDateAndTimeAssignment_Role"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfDateTimeItem> (StepAP203_CcDesignDateAndTimeAssignment::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfDateTimeItem> (StepAP203_CcDesignDateAndTimeAssignment::*)() const>(&StepAP203_CcDesignDateAndTimeAssignment::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_CcDesignDateAndTimeAssignment::*)( const opencascade::handle<StepAP203_HArray1OfDateTimeItem> &  ) ) static_cast<void (StepAP203_CcDesignDateAndTimeAssignment::*)( const opencascade::handle<StepAP203_HArray1OfDateTimeItem> &  ) >(&StepAP203_CcDesignDateAndTimeAssignment::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_CcDesignDateAndTimeAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_CcDesignDateAndTimeAssignment::*)() const>(&StepAP203_CcDesignDateAndTimeAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_CcDesignDateAndTimeAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_CcDesignDateAndTimeAssignment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_CcDesignPersonAndOrganizationAssignment ,opencascade::handle<StepAP203_CcDesignPersonAndOrganizationAssignment>  , StepBasic_PersonAndOrganizationAssignment >>(m.attr("StepAP203_CcDesignPersonAndOrganizationAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_CcDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> & ,  const opencascade::handle<StepAP203_HArray1OfPersonOrganizationItem> &  ) ) static_cast<void (StepAP203_CcDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepBasic_PersonAndOrganization> & ,  const opencascade::handle<StepBasic_PersonAndOrganizationRole> & ,  const opencascade::handle<StepAP203_HArray1OfPersonOrganizationItem> &  ) >(&StepAP203_CcDesignPersonAndOrganizationAssignment::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aPersonAndOrganizationAssignment_AssignedPersonAndOrganization"),  py::arg("aPersonAndOrganizationAssignment_Role"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfPersonOrganizationItem> (StepAP203_CcDesignPersonAndOrganizationAssignment::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfPersonOrganizationItem> (StepAP203_CcDesignPersonAndOrganizationAssignment::*)() const>(&StepAP203_CcDesignPersonAndOrganizationAssignment::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_CcDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP203_HArray1OfPersonOrganizationItem> &  ) ) static_cast<void (StepAP203_CcDesignPersonAndOrganizationAssignment::*)( const opencascade::handle<StepAP203_HArray1OfPersonOrganizationItem> &  ) >(&StepAP203_CcDesignPersonAndOrganizationAssignment::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_CcDesignPersonAndOrganizationAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_CcDesignPersonAndOrganizationAssignment::*)() const>(&StepAP203_CcDesignPersonAndOrganizationAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_CcDesignPersonAndOrganizationAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_CcDesignPersonAndOrganizationAssignment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_CcDesignSecurityClassification ,opencascade::handle<StepAP203_CcDesignSecurityClassification>  , StepBasic_SecurityClassificationAssignment >>(m.attr("StepAP203_CcDesignSecurityClassification"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_CcDesignSecurityClassification::*)( const opencascade::handle<StepBasic_SecurityClassification> & ,  const opencascade::handle<StepAP203_HArray1OfClassifiedItem> &  ) ) static_cast<void (StepAP203_CcDesignSecurityClassification::*)( const opencascade::handle<StepBasic_SecurityClassification> & ,  const opencascade::handle<StepAP203_HArray1OfClassifiedItem> &  ) >(&StepAP203_CcDesignSecurityClassification::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aSecurityClassificationAssignment_AssignedSecurityClassification"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfClassifiedItem> (StepAP203_CcDesignSecurityClassification::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfClassifiedItem> (StepAP203_CcDesignSecurityClassification::*)() const>(&StepAP203_CcDesignSecurityClassification::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_CcDesignSecurityClassification::*)( const opencascade::handle<StepAP203_HArray1OfClassifiedItem> &  ) ) static_cast<void (StepAP203_CcDesignSecurityClassification::*)( const opencascade::handle<StepAP203_HArray1OfClassifiedItem> &  ) >(&StepAP203_CcDesignSecurityClassification::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_CcDesignSecurityClassification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_CcDesignSecurityClassification::*)() const>(&StepAP203_CcDesignSecurityClassification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_CcDesignSecurityClassification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_CcDesignSecurityClassification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_CcDesignSpecificationReference ,opencascade::handle<StepAP203_CcDesignSpecificationReference>  , StepBasic_DocumentReference >>(m.attr("StepAP203_CcDesignSpecificationReference"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_CcDesignSpecificationReference::*)( const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepAP203_HArray1OfSpecifiedItem> &  ) ) static_cast<void (StepAP203_CcDesignSpecificationReference::*)( const opencascade::handle<StepBasic_Document> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepAP203_HArray1OfSpecifiedItem> &  ) >(&StepAP203_CcDesignSpecificationReference::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDocumentReference_AssignedDocument"),  py::arg("aDocumentReference_Source"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfSpecifiedItem> (StepAP203_CcDesignSpecificationReference::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfSpecifiedItem> (StepAP203_CcDesignSpecificationReference::*)() const>(&StepAP203_CcDesignSpecificationReference::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_CcDesignSpecificationReference::*)( const opencascade::handle<StepAP203_HArray1OfSpecifiedItem> &  ) ) static_cast<void (StepAP203_CcDesignSpecificationReference::*)( const opencascade::handle<StepAP203_HArray1OfSpecifiedItem> &  ) >(&StepAP203_CcDesignSpecificationReference::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_CcDesignSpecificationReference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_CcDesignSpecificationReference::*)() const>(&StepAP203_CcDesignSpecificationReference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_CcDesignSpecificationReference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_CcDesignSpecificationReference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_CertifiedItem , shared_ptr<StepAP203_CertifiedItem>  , StepData_SelectType >>(m.attr("StepAP203_CertifiedItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP203_CertifiedItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP203_CertifiedItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP203_CertifiedItem::CaseNum),
             R"#(Recognizes a kind of CertifiedItem select type 1 -> SuppliedPartRelationship from StepRepr 0 else)#"  , py::arg("ent"))
        .def("SuppliedPartRelationship",
             (opencascade::handle<StepRepr_SuppliedPartRelationship> (StepAP203_CertifiedItem::*)() const) static_cast<opencascade::handle<StepRepr_SuppliedPartRelationship> (StepAP203_CertifiedItem::*)() const>(&StepAP203_CertifiedItem::SuppliedPartRelationship),
             R"#(Returns Value as SuppliedPartRelationship (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_Change ,opencascade::handle<StepAP203_Change>  , StepBasic_ActionAssignment >>(m.attr("StepAP203_Change"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_Change::*)( const opencascade::handle<StepBasic_Action> & ,  const opencascade::handle<StepAP203_HArray1OfWorkItem> &  ) ) static_cast<void (StepAP203_Change::*)( const opencascade::handle<StepBasic_Action> & ,  const opencascade::handle<StepAP203_HArray1OfWorkItem> &  ) >(&StepAP203_Change::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aActionAssignment_AssignedAction"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfWorkItem> (StepAP203_Change::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfWorkItem> (StepAP203_Change::*)() const>(&StepAP203_Change::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_Change::*)( const opencascade::handle<StepAP203_HArray1OfWorkItem> &  ) ) static_cast<void (StepAP203_Change::*)( const opencascade::handle<StepAP203_HArray1OfWorkItem> &  ) >(&StepAP203_Change::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_Change::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_Change::*)() const>(&StepAP203_Change::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_Change::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_Change::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_ChangeRequest ,opencascade::handle<StepAP203_ChangeRequest>  , StepBasic_ActionRequestAssignment >>(m.attr("StepAP203_ChangeRequest"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_ChangeRequest::*)( const opencascade::handle<StepBasic_VersionedActionRequest> & ,  const opencascade::handle<StepAP203_HArray1OfChangeRequestItem> &  ) ) static_cast<void (StepAP203_ChangeRequest::*)( const opencascade::handle<StepBasic_VersionedActionRequest> & ,  const opencascade::handle<StepAP203_HArray1OfChangeRequestItem> &  ) >(&StepAP203_ChangeRequest::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aActionRequestAssignment_AssignedActionRequest"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfChangeRequestItem> (StepAP203_ChangeRequest::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfChangeRequestItem> (StepAP203_ChangeRequest::*)() const>(&StepAP203_ChangeRequest::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_ChangeRequest::*)( const opencascade::handle<StepAP203_HArray1OfChangeRequestItem> &  ) ) static_cast<void (StepAP203_ChangeRequest::*)( const opencascade::handle<StepAP203_HArray1OfChangeRequestItem> &  ) >(&StepAP203_ChangeRequest::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_ChangeRequest::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_ChangeRequest::*)() const>(&StepAP203_ChangeRequest::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_ChangeRequest::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_ChangeRequest::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_ChangeRequestItem , shared_ptr<StepAP203_ChangeRequestItem>  , StepData_SelectType >>(m.attr("StepAP203_ChangeRequestItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP203_ChangeRequestItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP203_ChangeRequestItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP203_ChangeRequestItem::CaseNum),
             R"#(Recognizes a kind of ChangeRequestItem select type 1 -> ProductDefinitionFormation from StepBasic 0 else)#"  , py::arg("ent"))
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_ChangeRequestItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_ChangeRequestItem::*)() const>(&StepAP203_ChangeRequestItem::ProductDefinitionFormation),
             R"#(Returns Value as ProductDefinitionFormation (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_ClassifiedItem , shared_ptr<StepAP203_ClassifiedItem>  , StepData_SelectType >>(m.attr("StepAP203_ClassifiedItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP203_ClassifiedItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP203_ClassifiedItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP203_ClassifiedItem::CaseNum),
             R"#(Recognizes a kind of ClassifiedItem select type 1 -> ProductDefinitionFormation from StepBasic 2 -> AssemblyComponentUsage from StepRepr 0 else)#"  , py::arg("ent"))
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_ClassifiedItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_ClassifiedItem::*)() const>(&StepAP203_ClassifiedItem::ProductDefinitionFormation),
             R"#(Returns Value as ProductDefinitionFormation (or Null if another type))#" )
        .def("AssemblyComponentUsage",
             (opencascade::handle<StepRepr_AssemblyComponentUsage> (StepAP203_ClassifiedItem::*)() const) static_cast<opencascade::handle<StepRepr_AssemblyComponentUsage> (StepAP203_ClassifiedItem::*)() const>(&StepAP203_ClassifiedItem::AssemblyComponentUsage),
             R"#(Returns Value as AssemblyComponentUsage (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_ContractedItem , shared_ptr<StepAP203_ContractedItem>  , StepData_SelectType >>(m.attr("StepAP203_ContractedItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP203_ContractedItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP203_ContractedItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP203_ContractedItem::CaseNum),
             R"#(Recognizes a kind of ContractedItem select type 1 -> ProductDefinitionFormation from StepBasic 0 else)#"  , py::arg("ent"))
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_ContractedItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_ContractedItem::*)() const>(&StepAP203_ContractedItem::ProductDefinitionFormation),
             R"#(Returns Value as ProductDefinitionFormation (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_DateTimeItem , shared_ptr<StepAP203_DateTimeItem>  , StepData_SelectType >>(m.attr("StepAP203_DateTimeItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP203_DateTimeItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP203_DateTimeItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP203_DateTimeItem::CaseNum),
             R"#(Recognizes a kind of DateTimeItem select type 1 -> ProductDefinition from StepBasic 2 -> ChangeRequest from StepAP203 3 -> StartRequest from StepAP203 4 -> Change from StepAP203 5 -> StartWork from StepAP203 6 -> ApprovalPersonOrganization from StepBasic 7 -> Contract from StepBasic 8 -> SecurityClassification from StepBasic 9 -> Certification from StepBasic 0 else)#"  , py::arg("ent"))
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP203_DateTimeItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP203_DateTimeItem::*)() const>(&StepAP203_DateTimeItem::ProductDefinition),
             R"#(Returns Value as ProductDefinition (or Null if another type))#" )
        .def("ChangeRequest",
             (opencascade::handle<StepAP203_ChangeRequest> (StepAP203_DateTimeItem::*)() const) static_cast<opencascade::handle<StepAP203_ChangeRequest> (StepAP203_DateTimeItem::*)() const>(&StepAP203_DateTimeItem::ChangeRequest),
             R"#(Returns Value as ChangeRequest (or Null if another type))#" )
        .def("StartRequest",
             (opencascade::handle<StepAP203_StartRequest> (StepAP203_DateTimeItem::*)() const) static_cast<opencascade::handle<StepAP203_StartRequest> (StepAP203_DateTimeItem::*)() const>(&StepAP203_DateTimeItem::StartRequest),
             R"#(Returns Value as StartRequest (or Null if another type))#" )
        .def("Change",
             (opencascade::handle<StepAP203_Change> (StepAP203_DateTimeItem::*)() const) static_cast<opencascade::handle<StepAP203_Change> (StepAP203_DateTimeItem::*)() const>(&StepAP203_DateTimeItem::Change),
             R"#(Returns Value as Change (or Null if another type))#" )
        .def("StartWork",
             (opencascade::handle<StepAP203_StartWork> (StepAP203_DateTimeItem::*)() const) static_cast<opencascade::handle<StepAP203_StartWork> (StepAP203_DateTimeItem::*)() const>(&StepAP203_DateTimeItem::StartWork),
             R"#(Returns Value as StartWork (or Null if another type))#" )
        .def("ApprovalPersonOrganization",
             (opencascade::handle<StepBasic_ApprovalPersonOrganization> (StepAP203_DateTimeItem::*)() const) static_cast<opencascade::handle<StepBasic_ApprovalPersonOrganization> (StepAP203_DateTimeItem::*)() const>(&StepAP203_DateTimeItem::ApprovalPersonOrganization),
             R"#(Returns Value as ApprovalPersonOrganization (or Null if another type))#" )
        .def("Contract",
             (opencascade::handle<StepBasic_Contract> (StepAP203_DateTimeItem::*)() const) static_cast<opencascade::handle<StepBasic_Contract> (StepAP203_DateTimeItem::*)() const>(&StepAP203_DateTimeItem::Contract),
             R"#(Returns Value as Contract (or Null if another type))#" )
        .def("SecurityClassification",
             (opencascade::handle<StepBasic_SecurityClassification> (StepAP203_DateTimeItem::*)() const) static_cast<opencascade::handle<StepBasic_SecurityClassification> (StepAP203_DateTimeItem::*)() const>(&StepAP203_DateTimeItem::SecurityClassification),
             R"#(Returns Value as SecurityClassification (or Null if another type))#" )
        .def("Certification",
             (opencascade::handle<StepBasic_Certification> (StepAP203_DateTimeItem::*)() const) static_cast<opencascade::handle<StepBasic_Certification> (StepAP203_DateTimeItem::*)() const>(&StepAP203_DateTimeItem::Certification),
             R"#(Returns Value as Certification (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_HArray1OfApprovedItem ,opencascade::handle<StepAP203_HArray1OfApprovedItem>  , StepAP203_Array1OfApprovedItem , Standard_Transient >>(m.attr("StepAP203_HArray1OfApprovedItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP203_ApprovedItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP203_ApprovedItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepAP203_Array1OfApprovedItem & (StepAP203_HArray1OfApprovedItem::*)() const) static_cast<const StepAP203_Array1OfApprovedItem & (StepAP203_HArray1OfApprovedItem::*)() const>(&StepAP203_HArray1OfApprovedItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP203_Array1OfApprovedItem & (StepAP203_HArray1OfApprovedItem::*)() ) static_cast<StepAP203_Array1OfApprovedItem & (StepAP203_HArray1OfApprovedItem::*)() >(&StepAP203_HArray1OfApprovedItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfApprovedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfApprovedItem::*)() const>(&StepAP203_HArray1OfApprovedItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_HArray1OfApprovedItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_HArray1OfApprovedItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_HArray1OfCertifiedItem ,opencascade::handle<StepAP203_HArray1OfCertifiedItem>  , StepAP203_Array1OfCertifiedItem , Standard_Transient >>(m.attr("StepAP203_HArray1OfCertifiedItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP203_CertifiedItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP203_CertifiedItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepAP203_Array1OfCertifiedItem & (StepAP203_HArray1OfCertifiedItem::*)() const) static_cast<const StepAP203_Array1OfCertifiedItem & (StepAP203_HArray1OfCertifiedItem::*)() const>(&StepAP203_HArray1OfCertifiedItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP203_Array1OfCertifiedItem & (StepAP203_HArray1OfCertifiedItem::*)() ) static_cast<StepAP203_Array1OfCertifiedItem & (StepAP203_HArray1OfCertifiedItem::*)() >(&StepAP203_HArray1OfCertifiedItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfCertifiedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfCertifiedItem::*)() const>(&StepAP203_HArray1OfCertifiedItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_HArray1OfCertifiedItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_HArray1OfCertifiedItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_HArray1OfChangeRequestItem ,opencascade::handle<StepAP203_HArray1OfChangeRequestItem>  , StepAP203_Array1OfChangeRequestItem , Standard_Transient >>(m.attr("StepAP203_HArray1OfChangeRequestItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP203_ChangeRequestItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP203_ChangeRequestItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepAP203_Array1OfChangeRequestItem & (StepAP203_HArray1OfChangeRequestItem::*)() const) static_cast<const StepAP203_Array1OfChangeRequestItem & (StepAP203_HArray1OfChangeRequestItem::*)() const>(&StepAP203_HArray1OfChangeRequestItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP203_Array1OfChangeRequestItem & (StepAP203_HArray1OfChangeRequestItem::*)() ) static_cast<StepAP203_Array1OfChangeRequestItem & (StepAP203_HArray1OfChangeRequestItem::*)() >(&StepAP203_HArray1OfChangeRequestItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfChangeRequestItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfChangeRequestItem::*)() const>(&StepAP203_HArray1OfChangeRequestItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_HArray1OfChangeRequestItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_HArray1OfChangeRequestItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_HArray1OfClassifiedItem ,opencascade::handle<StepAP203_HArray1OfClassifiedItem>  , StepAP203_Array1OfClassifiedItem , Standard_Transient >>(m.attr("StepAP203_HArray1OfClassifiedItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP203_ClassifiedItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP203_ClassifiedItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepAP203_Array1OfClassifiedItem & (StepAP203_HArray1OfClassifiedItem::*)() const) static_cast<const StepAP203_Array1OfClassifiedItem & (StepAP203_HArray1OfClassifiedItem::*)() const>(&StepAP203_HArray1OfClassifiedItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP203_Array1OfClassifiedItem & (StepAP203_HArray1OfClassifiedItem::*)() ) static_cast<StepAP203_Array1OfClassifiedItem & (StepAP203_HArray1OfClassifiedItem::*)() >(&StepAP203_HArray1OfClassifiedItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfClassifiedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfClassifiedItem::*)() const>(&StepAP203_HArray1OfClassifiedItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_HArray1OfClassifiedItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_HArray1OfClassifiedItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_HArray1OfContractedItem ,opencascade::handle<StepAP203_HArray1OfContractedItem>  , StepAP203_Array1OfContractedItem , Standard_Transient >>(m.attr("StepAP203_HArray1OfContractedItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP203_ContractedItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP203_ContractedItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepAP203_Array1OfContractedItem & (StepAP203_HArray1OfContractedItem::*)() const) static_cast<const StepAP203_Array1OfContractedItem & (StepAP203_HArray1OfContractedItem::*)() const>(&StepAP203_HArray1OfContractedItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP203_Array1OfContractedItem & (StepAP203_HArray1OfContractedItem::*)() ) static_cast<StepAP203_Array1OfContractedItem & (StepAP203_HArray1OfContractedItem::*)() >(&StepAP203_HArray1OfContractedItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfContractedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfContractedItem::*)() const>(&StepAP203_HArray1OfContractedItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_HArray1OfContractedItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_HArray1OfContractedItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_HArray1OfDateTimeItem ,opencascade::handle<StepAP203_HArray1OfDateTimeItem>  , StepAP203_Array1OfDateTimeItem , Standard_Transient >>(m.attr("StepAP203_HArray1OfDateTimeItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP203_DateTimeItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP203_DateTimeItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepAP203_Array1OfDateTimeItem & (StepAP203_HArray1OfDateTimeItem::*)() const) static_cast<const StepAP203_Array1OfDateTimeItem & (StepAP203_HArray1OfDateTimeItem::*)() const>(&StepAP203_HArray1OfDateTimeItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP203_Array1OfDateTimeItem & (StepAP203_HArray1OfDateTimeItem::*)() ) static_cast<StepAP203_Array1OfDateTimeItem & (StepAP203_HArray1OfDateTimeItem::*)() >(&StepAP203_HArray1OfDateTimeItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfDateTimeItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfDateTimeItem::*)() const>(&StepAP203_HArray1OfDateTimeItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_HArray1OfDateTimeItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_HArray1OfDateTimeItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_HArray1OfPersonOrganizationItem ,opencascade::handle<StepAP203_HArray1OfPersonOrganizationItem>  , StepAP203_Array1OfPersonOrganizationItem , Standard_Transient >>(m.attr("StepAP203_HArray1OfPersonOrganizationItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP203_PersonOrganizationItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP203_PersonOrganizationItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepAP203_Array1OfPersonOrganizationItem & (StepAP203_HArray1OfPersonOrganizationItem::*)() const) static_cast<const StepAP203_Array1OfPersonOrganizationItem & (StepAP203_HArray1OfPersonOrganizationItem::*)() const>(&StepAP203_HArray1OfPersonOrganizationItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP203_Array1OfPersonOrganizationItem & (StepAP203_HArray1OfPersonOrganizationItem::*)() ) static_cast<StepAP203_Array1OfPersonOrganizationItem & (StepAP203_HArray1OfPersonOrganizationItem::*)() >(&StepAP203_HArray1OfPersonOrganizationItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfPersonOrganizationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfPersonOrganizationItem::*)() const>(&StepAP203_HArray1OfPersonOrganizationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_HArray1OfPersonOrganizationItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_HArray1OfPersonOrganizationItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_HArray1OfSpecifiedItem ,opencascade::handle<StepAP203_HArray1OfSpecifiedItem>  , StepAP203_Array1OfSpecifiedItem , Standard_Transient >>(m.attr("StepAP203_HArray1OfSpecifiedItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP203_SpecifiedItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP203_SpecifiedItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepAP203_Array1OfSpecifiedItem & (StepAP203_HArray1OfSpecifiedItem::*)() const) static_cast<const StepAP203_Array1OfSpecifiedItem & (StepAP203_HArray1OfSpecifiedItem::*)() const>(&StepAP203_HArray1OfSpecifiedItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP203_Array1OfSpecifiedItem & (StepAP203_HArray1OfSpecifiedItem::*)() ) static_cast<StepAP203_Array1OfSpecifiedItem & (StepAP203_HArray1OfSpecifiedItem::*)() >(&StepAP203_HArray1OfSpecifiedItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfSpecifiedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfSpecifiedItem::*)() const>(&StepAP203_HArray1OfSpecifiedItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_HArray1OfSpecifiedItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_HArray1OfSpecifiedItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_HArray1OfStartRequestItem ,opencascade::handle<StepAP203_HArray1OfStartRequestItem>  , StepAP203_Array1OfStartRequestItem , Standard_Transient >>(m.attr("StepAP203_HArray1OfStartRequestItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP203_StartRequestItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP203_StartRequestItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepAP203_Array1OfStartRequestItem & (StepAP203_HArray1OfStartRequestItem::*)() const) static_cast<const StepAP203_Array1OfStartRequestItem & (StepAP203_HArray1OfStartRequestItem::*)() const>(&StepAP203_HArray1OfStartRequestItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP203_Array1OfStartRequestItem & (StepAP203_HArray1OfStartRequestItem::*)() ) static_cast<StepAP203_Array1OfStartRequestItem & (StepAP203_HArray1OfStartRequestItem::*)() >(&StepAP203_HArray1OfStartRequestItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfStartRequestItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfStartRequestItem::*)() const>(&StepAP203_HArray1OfStartRequestItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_HArray1OfStartRequestItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_HArray1OfStartRequestItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_HArray1OfWorkItem ,opencascade::handle<StepAP203_HArray1OfWorkItem>  , StepAP203_Array1OfWorkItem , Standard_Transient >>(m.attr("StepAP203_HArray1OfWorkItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepAP203_WorkItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepAP203_WorkItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepAP203_Array1OfWorkItem & (StepAP203_HArray1OfWorkItem::*)() const) static_cast<const StepAP203_Array1OfWorkItem & (StepAP203_HArray1OfWorkItem::*)() const>(&StepAP203_HArray1OfWorkItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepAP203_Array1OfWorkItem & (StepAP203_HArray1OfWorkItem::*)() ) static_cast<StepAP203_Array1OfWorkItem & (StepAP203_HArray1OfWorkItem::*)() >(&StepAP203_HArray1OfWorkItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfWorkItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_HArray1OfWorkItem::*)() const>(&StepAP203_HArray1OfWorkItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_HArray1OfWorkItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_HArray1OfWorkItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_PersonOrganizationItem , shared_ptr<StepAP203_PersonOrganizationItem>  , StepData_SelectType >>(m.attr("StepAP203_PersonOrganizationItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP203_PersonOrganizationItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP203_PersonOrganizationItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP203_PersonOrganizationItem::CaseNum),
             R"#(Recognizes a kind of PersonOrganizationItem select type 1 -> Change from StepAP203 2 -> StartWork from StepAP203 3 -> ChangeRequest from StepAP203 4 -> StartRequest from StepAP203 5 -> ConfigurationItem from StepRepr 6 -> Product from StepBasic 7 -> ProductDefinitionFormation from StepBasic 8 -> ProductDefinition from StepBasic 9 -> Contract from StepBasic 10 -> SecurityClassification from StepBasic 0 else)#"  , py::arg("ent"))
        .def("Change",
             (opencascade::handle<StepAP203_Change> (StepAP203_PersonOrganizationItem::*)() const) static_cast<opencascade::handle<StepAP203_Change> (StepAP203_PersonOrganizationItem::*)() const>(&StepAP203_PersonOrganizationItem::Change),
             R"#(Returns Value as Change (or Null if another type))#" )
        .def("StartWork",
             (opencascade::handle<StepAP203_StartWork> (StepAP203_PersonOrganizationItem::*)() const) static_cast<opencascade::handle<StepAP203_StartWork> (StepAP203_PersonOrganizationItem::*)() const>(&StepAP203_PersonOrganizationItem::StartWork),
             R"#(Returns Value as StartWork (or Null if another type))#" )
        .def("ChangeRequest",
             (opencascade::handle<StepAP203_ChangeRequest> (StepAP203_PersonOrganizationItem::*)() const) static_cast<opencascade::handle<StepAP203_ChangeRequest> (StepAP203_PersonOrganizationItem::*)() const>(&StepAP203_PersonOrganizationItem::ChangeRequest),
             R"#(Returns Value as ChangeRequest (or Null if another type))#" )
        .def("StartRequest",
             (opencascade::handle<StepAP203_StartRequest> (StepAP203_PersonOrganizationItem::*)() const) static_cast<opencascade::handle<StepAP203_StartRequest> (StepAP203_PersonOrganizationItem::*)() const>(&StepAP203_PersonOrganizationItem::StartRequest),
             R"#(Returns Value as StartRequest (or Null if another type))#" )
        .def("ConfigurationItem",
             (opencascade::handle<StepRepr_ConfigurationItem> (StepAP203_PersonOrganizationItem::*)() const) static_cast<opencascade::handle<StepRepr_ConfigurationItem> (StepAP203_PersonOrganizationItem::*)() const>(&StepAP203_PersonOrganizationItem::ConfigurationItem),
             R"#(Returns Value as ConfigurationItem (or Null if another type))#" )
        .def("Product",
             (opencascade::handle<StepBasic_Product> (StepAP203_PersonOrganizationItem::*)() const) static_cast<opencascade::handle<StepBasic_Product> (StepAP203_PersonOrganizationItem::*)() const>(&StepAP203_PersonOrganizationItem::Product),
             R"#(Returns Value as Product (or Null if another type))#" )
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_PersonOrganizationItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_PersonOrganizationItem::*)() const>(&StepAP203_PersonOrganizationItem::ProductDefinitionFormation),
             R"#(Returns Value as ProductDefinitionFormation (or Null if another type))#" )
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP203_PersonOrganizationItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP203_PersonOrganizationItem::*)() const>(&StepAP203_PersonOrganizationItem::ProductDefinition),
             R"#(Returns Value as ProductDefinition (or Null if another type))#" )
        .def("Contract",
             (opencascade::handle<StepBasic_Contract> (StepAP203_PersonOrganizationItem::*)() const) static_cast<opencascade::handle<StepBasic_Contract> (StepAP203_PersonOrganizationItem::*)() const>(&StepAP203_PersonOrganizationItem::Contract),
             R"#(Returns Value as Contract (or Null if another type))#" )
        .def("SecurityClassification",
             (opencascade::handle<StepBasic_SecurityClassification> (StepAP203_PersonOrganizationItem::*)() const) static_cast<opencascade::handle<StepBasic_SecurityClassification> (StepAP203_PersonOrganizationItem::*)() const>(&StepAP203_PersonOrganizationItem::SecurityClassification),
             R"#(Returns Value as SecurityClassification (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_SpecifiedItem , shared_ptr<StepAP203_SpecifiedItem>  , StepData_SelectType >>(m.attr("StepAP203_SpecifiedItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP203_SpecifiedItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP203_SpecifiedItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP203_SpecifiedItem::CaseNum),
             R"#(Recognizes a kind of SpecifiedItem select type 1 -> ProductDefinition from StepBasic 2 -> ShapeAspect from StepRepr 0 else)#"  , py::arg("ent"))
        .def("ProductDefinition",
             (opencascade::handle<StepBasic_ProductDefinition> (StepAP203_SpecifiedItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinition> (StepAP203_SpecifiedItem::*)() const>(&StepAP203_SpecifiedItem::ProductDefinition),
             R"#(Returns Value as ProductDefinition (or Null if another type))#" )
        .def("ShapeAspect",
             (opencascade::handle<StepRepr_ShapeAspect> (StepAP203_SpecifiedItem::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepAP203_SpecifiedItem::*)() const>(&StepAP203_SpecifiedItem::ShapeAspect),
             R"#(Returns Value as ShapeAspect (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_StartRequest ,opencascade::handle<StepAP203_StartRequest>  , StepBasic_ActionRequestAssignment >>(m.attr("StepAP203_StartRequest"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_StartRequest::*)( const opencascade::handle<StepBasic_VersionedActionRequest> & ,  const opencascade::handle<StepAP203_HArray1OfStartRequestItem> &  ) ) static_cast<void (StepAP203_StartRequest::*)( const opencascade::handle<StepBasic_VersionedActionRequest> & ,  const opencascade::handle<StepAP203_HArray1OfStartRequestItem> &  ) >(&StepAP203_StartRequest::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aActionRequestAssignment_AssignedActionRequest"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfStartRequestItem> (StepAP203_StartRequest::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfStartRequestItem> (StepAP203_StartRequest::*)() const>(&StepAP203_StartRequest::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_StartRequest::*)( const opencascade::handle<StepAP203_HArray1OfStartRequestItem> &  ) ) static_cast<void (StepAP203_StartRequest::*)( const opencascade::handle<StepAP203_HArray1OfStartRequestItem> &  ) >(&StepAP203_StartRequest::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_StartRequest::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_StartRequest::*)() const>(&StepAP203_StartRequest::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_StartRequest::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_StartRequest::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_StartRequestItem , shared_ptr<StepAP203_StartRequestItem>  , StepData_SelectType >>(m.attr("StepAP203_StartRequestItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP203_StartRequestItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP203_StartRequestItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP203_StartRequestItem::CaseNum),
             R"#(Recognizes a kind of StartRequestItem select type 1 -> ProductDefinitionFormation from StepBasic 0 else)#"  , py::arg("ent"))
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_StartRequestItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_StartRequestItem::*)() const>(&StepAP203_StartRequestItem::ProductDefinitionFormation),
             R"#(Returns Value as ProductDefinitionFormation (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_StartWork ,opencascade::handle<StepAP203_StartWork>  , StepBasic_ActionAssignment >>(m.attr("StepAP203_StartWork"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepAP203_StartWork::*)( const opencascade::handle<StepBasic_Action> & ,  const opencascade::handle<StepAP203_HArray1OfWorkItem> &  ) ) static_cast<void (StepAP203_StartWork::*)( const opencascade::handle<StepBasic_Action> & ,  const opencascade::handle<StepAP203_HArray1OfWorkItem> &  ) >(&StepAP203_StartWork::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aActionAssignment_AssignedAction"),  py::arg("aItems"))
        .def("Items",
             (opencascade::handle<StepAP203_HArray1OfWorkItem> (StepAP203_StartWork::*)() const) static_cast<opencascade::handle<StepAP203_HArray1OfWorkItem> (StepAP203_StartWork::*)() const>(&StepAP203_StartWork::Items),
             R"#(Returns field Items)#" )
        .def("SetItems",
             (void (StepAP203_StartWork::*)( const opencascade::handle<StepAP203_HArray1OfWorkItem> &  ) ) static_cast<void (StepAP203_StartWork::*)( const opencascade::handle<StepAP203_HArray1OfWorkItem> &  ) >(&StepAP203_StartWork::SetItems),
             R"#(Set field Items)#"  , py::arg("Items"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP203_StartWork::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP203_StartWork::*)() const>(&StepAP203_StartWork::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP203_StartWork::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP203_StartWork::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP203_WorkItem , shared_ptr<StepAP203_WorkItem>  , StepData_SelectType >>(m.attr("StepAP203_WorkItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP203_WorkItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP203_WorkItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP203_WorkItem::CaseNum),
             R"#(Recognizes a kind of WorkItem select type 1 -> ProductDefinitionFormation from StepBasic 0 else)#"  , py::arg("ent"))
        .def("ProductDefinitionFormation",
             (opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_WorkItem::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionFormation> (StepAP203_WorkItem::*)() const>(&StepAP203_WorkItem::ProductDefinitionFormation),
             R"#(Returns Value as ProductDefinitionFormation (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepAP203_Change.hxx
// ./opencascade/StepAP203_Array1OfApprovedItem.hxx
// ./opencascade/StepAP203_CcDesignApproval.hxx
// ./opencascade/StepAP203_WorkItem.hxx
// ./opencascade/StepAP203_HArray1OfContractedItem.hxx
// ./opencascade/StepAP203_CcDesignSecurityClassification.hxx
// ./opencascade/StepAP203_HArray1OfStartRequestItem.hxx
// ./opencascade/StepAP203_ChangeRequest.hxx
// ./opencascade/StepAP203_HArray1OfSpecifiedItem.hxx
// ./opencascade/StepAP203_HArray1OfPersonOrganizationItem.hxx
// ./opencascade/StepAP203_Array1OfStartRequestItem.hxx
// ./opencascade/StepAP203_Array1OfDateTimeItem.hxx
// ./opencascade/StepAP203_SpecifiedItem.hxx
// ./opencascade/StepAP203_ContractedItem.hxx
// ./opencascade/StepAP203_Array1OfContractedItem.hxx
// ./opencascade/StepAP203_Array1OfWorkItem.hxx
// ./opencascade/StepAP203_ClassifiedItem.hxx
// ./opencascade/StepAP203_CcDesignCertification.hxx
// ./opencascade/StepAP203_ApprovedItem.hxx
// ./opencascade/StepAP203_Array1OfClassifiedItem.hxx
// ./opencascade/StepAP203_HArray1OfChangeRequestItem.hxx
// ./opencascade/StepAP203_Array1OfSpecifiedItem.hxx
// ./opencascade/StepAP203_StartRequest.hxx
// ./opencascade/StepAP203_HArray1OfApprovedItem.hxx
// ./opencascade/StepAP203_PersonOrganizationItem.hxx
// ./opencascade/StepAP203_DateTimeItem.hxx
// ./opencascade/StepAP203_CertifiedItem.hxx
// ./opencascade/StepAP203_StartRequestItem.hxx
// ./opencascade/StepAP203_HArray1OfWorkItem.hxx
// ./opencascade/StepAP203_CcDesignDateAndTimeAssignment.hxx
// ./opencascade/StepAP203_CcDesignPersonAndOrganizationAssignment.hxx
// ./opencascade/StepAP203_CcDesignSpecificationReference.hxx
// ./opencascade/StepAP203_HArray1OfClassifiedItem.hxx
// ./opencascade/StepAP203_Array1OfCertifiedItem.hxx
// ./opencascade/StepAP203_Array1OfPersonOrganizationItem.hxx
// ./opencascade/StepAP203_StartWork.hxx
// ./opencascade/StepAP203_ChangeRequestItem.hxx
// ./opencascade/StepAP203_Array1OfChangeRequestItem.hxx
// ./opencascade/StepAP203_CcDesignContract.hxx
// ./opencascade/StepAP203_HArray1OfDateTimeItem.hxx
// ./opencascade/StepAP203_HArray1OfCertifiedItem.hxx

// operators

// register typdefs
    register_template_NCollection_Array1<StepAP203_ApprovedItem>(m,"StepAP203_Array1OfApprovedItem");  
    register_template_NCollection_Array1<StepAP203_StartRequestItem>(m,"StepAP203_Array1OfStartRequestItem");  
    register_template_NCollection_Array1<StepAP203_DateTimeItem>(m,"StepAP203_Array1OfDateTimeItem");  
    register_template_NCollection_Array1<StepAP203_ContractedItem>(m,"StepAP203_Array1OfContractedItem");  
    register_template_NCollection_Array1<StepAP203_WorkItem>(m,"StepAP203_Array1OfWorkItem");  
    register_template_NCollection_Array1<StepAP203_ClassifiedItem>(m,"StepAP203_Array1OfClassifiedItem");  
    register_template_NCollection_Array1<StepAP203_SpecifiedItem>(m,"StepAP203_Array1OfSpecifiedItem");  
    register_template_NCollection_Array1<StepAP203_CertifiedItem>(m,"StepAP203_Array1OfCertifiedItem");  
    register_template_NCollection_Array1<StepAP203_PersonOrganizationItem>(m,"StepAP203_Array1OfPersonOrganizationItem");  
    register_template_NCollection_Array1<StepAP203_ChangeRequestItem>(m,"StepAP203_Array1OfChangeRequestItem");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
