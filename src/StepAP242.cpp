
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_Representation.hxx>
#include <StepBasic_Action.hxx>
#include <StepBasic_Address.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepAP214_AppliedApprovalAssignment.hxx>
#include <StepAP214_AppliedDateAndTimeAssignment.hxx>
#include <StepAP214_AppliedDateAssignment.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepAP214_AppliedGroupAssignment.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepBasic_GeneralProperty.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <TCollection_HAsciiString.hxx>

// module includes
#include <StepAP242_DraughtingModelItemAssociation.hxx>
#include <StepAP242_GeometricItemSpecificUsage.hxx>
#include <StepAP242_IdAttribute.hxx>
#include <StepAP242_IdAttributeSelect.hxx>
#include <StepAP242_ItemIdentifiedRepresentationUsage.hxx>
#include <StepAP242_ItemIdentifiedRepresentationUsageDefinition.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepAP242(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepAP242"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepAP242_IdAttribute ,opencascade::handle<StepAP242_IdAttribute>  , Standard_Transient >>(m.attr("StepAP242_IdAttribute"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (StepAP242_IdAttribute::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const StepAP242_IdAttributeSelect &  ) ) static_cast<void (StepAP242_IdAttribute::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const StepAP242_IdAttributeSelect &  ) >(&StepAP242_IdAttribute::Init),
             R"#(Init all field own and inherited)#"  , py::arg("theAttributeValue"),  py::arg("theIdentifiedItem"))
        .def("SetAttributeValue",
             (void (StepAP242_IdAttribute::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepAP242_IdAttribute::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepAP242_IdAttribute::SetAttributeValue),
             R"#(None)#"  , py::arg("theAttributeValue"))
        .def("AttributeValue",
             (opencascade::handle<TCollection_HAsciiString> (StepAP242_IdAttribute::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepAP242_IdAttribute::*)() const>(&StepAP242_IdAttribute::AttributeValue),
             R"#(Returns field AttributeValue)#" )
        .def("SetIdentifiedItem",
             (void (StepAP242_IdAttribute::*)( const StepAP242_IdAttributeSelect &  ) ) static_cast<void (StepAP242_IdAttribute::*)( const StepAP242_IdAttributeSelect &  ) >(&StepAP242_IdAttribute::SetIdentifiedItem),
             R"#(Set field IdentifiedItem)#"  , py::arg("theIdentifiedItem"))
        .def("IdentifiedItem",
             (StepAP242_IdAttributeSelect (StepAP242_IdAttribute::*)() const) static_cast<StepAP242_IdAttributeSelect (StepAP242_IdAttribute::*)() const>(&StepAP242_IdAttribute::IdentifiedItem),
             R"#(Returns IdentifiedItem)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP242_IdAttribute::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP242_IdAttribute::*)() const>(&StepAP242_IdAttribute::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP242_IdAttribute::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP242_IdAttribute::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepAP242_IdAttributeSelect , shared_ptr<StepAP242_IdAttributeSelect>  , StepData_SelectType >>(m.attr("StepAP242_IdAttributeSelect"))
        .def(py::init<  >()  )
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP242_IdAttributeSelect::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP242_IdAttributeSelect::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP242_IdAttributeSelect::CaseNum),
             R"#(Recognizes a IdAttributeSelect Kind Entity that is : 1 -> Action 2 -> Address 3 -> ApplicationContext 4 -> DimensionalSize 5 -> GeometricTolerance 6 -> Group 7 -> Reserved for OrganizatonalProject (not implemented in OCCT) 8 -> ProductCategory 9 -> PropertyDefinition 10 -> Representation 11 -> ShapeAspect 12 -> ShapeAspectRelationship 0 else)#"  , py::arg("ent"))
        .def("Action",
             (opencascade::handle<StepBasic_Action> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepBasic_Action> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::Action),
             R"#(returns Value as a Action (Null if another type))#" )
        .def("Address",
             (opencascade::handle<StepBasic_Address> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepBasic_Address> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::Address),
             R"#(returns Value as a Address (Null if another type))#" )
        .def("ApplicationContext",
             (opencascade::handle<StepBasic_ApplicationContext> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepBasic_ApplicationContext> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::ApplicationContext),
             R"#(returns Value as a ApplicationContext (Null if another type))#" )
        .def("DimensionalSize",
             (opencascade::handle<StepShape_DimensionalSize> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepShape_DimensionalSize> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::DimensionalSize),
             R"#(returns Value as a DimensionalSize (Null if another type))#" )
        .def("GeometricTolerance",
             (opencascade::handle<StepDimTol_GeometricTolerance> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepDimTol_GeometricTolerance> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::GeometricTolerance),
             R"#(returns Value as a GeometricTolerance (Null if another type))#" )
        .def("Group",
             (opencascade::handle<StepBasic_Group> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepBasic_Group> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::Group),
             R"#(returns Value as a Group (Null if another type))#" )
        .def("ProductCategory",
             (opencascade::handle<StepBasic_ProductCategory> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepBasic_ProductCategory> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::ProductCategory),
             R"#(returns Value as a ProductCategory (Null if another type))#" )
        .def("PropertyDefinition",
             (opencascade::handle<StepRepr_PropertyDefinition> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepRepr_PropertyDefinition> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::PropertyDefinition),
             R"#(returns Value as a PropertyDefinition (Null if another type))#" )
        .def("Representation",
             (opencascade::handle<StepRepr_Representation> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepRepr_Representation> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::Representation),
             R"#(returns Value as a Representation (Null if another type))#" )
        .def("ShapeAspect",
             (opencascade::handle<StepRepr_ShapeAspect> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::ShapeAspect),
             R"#(returns Value as a ShapeAspect (Null if another type))#" )
        .def("ShapeAspectRelationship",
             (opencascade::handle<StepRepr_ShapeAspectRelationship> (StepAP242_IdAttributeSelect::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspectRelationship> (StepAP242_IdAttributeSelect::*)() const>(&StepAP242_IdAttributeSelect::ShapeAspectRelationship),
             R"#(returns Value as a ShapeAspectRelationship (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepAP242_ItemIdentifiedRepresentationUsage ,opencascade::handle<StepAP242_ItemIdentifiedRepresentationUsage>  , Standard_Transient >>(m.attr("StepAP242_ItemIdentifiedRepresentationUsage"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const StepAP242_ItemIdentifiedRepresentationUsageDefinition & ,  const opencascade::handle<StepRepr_Representation> & ,  const opencascade::handle<StepRepr_HArray1OfRepresentationItem> &  ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const StepAP242_ItemIdentifiedRepresentationUsageDefinition & ,  const opencascade::handle<StepRepr_Representation> & ,  const opencascade::handle<StepRepr_HArray1OfRepresentationItem> &  ) >(&StepAP242_ItemIdentifiedRepresentationUsage::Init),
             R"#(Init all fields own and inherited)#"  , py::arg("theName"),  py::arg("theDescription"),  py::arg("theDefinition"),  py::arg("theUsedRepresentation"),  py::arg("theIdentifiedItem"))
        .def("SetName",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetName),
             R"#(Set field Name)#"  , py::arg("theName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::Name),
             R"#(Returns field Name)#" )
        .def("SetDescription",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetDescription),
             R"#(Set field Description)#"  , py::arg("theDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::Description),
             R"#(Returns field Description)#" )
        .def("SetDefinition",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const StepAP242_ItemIdentifiedRepresentationUsageDefinition &  ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const StepAP242_ItemIdentifiedRepresentationUsageDefinition &  ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetDefinition),
             R"#(Set field Definition)#"  , py::arg("theDefinition"))
        .def("Definition",
             (StepAP242_ItemIdentifiedRepresentationUsageDefinition (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<StepAP242_ItemIdentifiedRepresentationUsageDefinition (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::Definition),
             R"#(Returns field Definition)#" )
        .def("SetUsedRepresentation",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepRepr_Representation> &  ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepRepr_Representation> &  ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetUsedRepresentation),
             R"#(Set field UsedRepresentation)#"  , py::arg("theUsedRepresentation"))
        .def("UsedRepresentation",
             (opencascade::handle<StepRepr_Representation> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<opencascade::handle<StepRepr_Representation> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::UsedRepresentation),
             R"#(Retuns field UsedRepresentation)#" )
        .def("IdentifiedItem",
             (opencascade::handle<StepRepr_HArray1OfRepresentationItem> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<opencascade::handle<StepRepr_HArray1OfRepresentationItem> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::IdentifiedItem),
             R"#(Returns field IdentifiedItem)#" )
        .def("NbIdentifiedItem",
             (Standard_Integer (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<Standard_Integer (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::NbIdentifiedItem),
             R"#(Returns number of identified items)#" )
        .def("SetIdentifiedItem",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepRepr_HArray1OfRepresentationItem> &  ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepRepr_HArray1OfRepresentationItem> &  ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetIdentifiedItem),
             R"#(Set fiels IdentifiedItem)#"  , py::arg("theIdentifiedItem"))
        .def("IdentifiedItemValue",
             (opencascade::handle<StepRepr_RepresentationItem> (StepAP242_ItemIdentifiedRepresentationUsage::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepRepr_RepresentationItem> (StepAP242_ItemIdentifiedRepresentationUsage::*)( const Standard_Integer  ) const>(&StepAP242_ItemIdentifiedRepresentationUsage::IdentifiedItemValue),
             R"#(Returns identified item with given number)#"  , py::arg("num"))
        .def("SetIdentifiedItemValue",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const Standard_Integer ,  const opencascade::handle<StepRepr_RepresentationItem> &  ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const Standard_Integer ,  const opencascade::handle<StepRepr_RepresentationItem> &  ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetIdentifiedItemValue),
             R"#(Set identified item with given number)#"  , py::arg("num"),  py::arg("theItem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP242_ItemIdentifiedRepresentationUsage::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP242_ItemIdentifiedRepresentationUsage::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepAP242_ItemIdentifiedRepresentationUsageDefinition , shared_ptr<StepAP242_ItemIdentifiedRepresentationUsageDefinition>  , StepData_SelectType >>(m.attr("StepAP242_ItemIdentifiedRepresentationUsageDefinition"))
        .def(py::init<  >()  )
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::CaseNum),
             R"#(Recognizes a ItemIdentifiedRepresentationUsageDefinition Kind Entity that is : 1 -> AppliedApprovalAssignment 2 -> AppliedDateAndTimeAssignment 3 -> AppliedDateAssignment 4 -> AppliedDocumentReference 5 -> AppliedExternalIdentificationAssignment 6 -> AppliedGroupAssignment 7 -> AppliedOrganizationAssignment 8 -> AppliedPersonAndOrganizationAssignment 9 -> AppliedSecurityClassificationAssignment 10 -> DimensionalSize 11 -> GeneralProperty 12 -> GeometricTolerance 13 -> ProductDefinitionRelationship 14 -> PropertyDefinition 15 -> PropertyDefinitionRelationship 16 -> ShapeAspect 17 -> ShapeAspectRelationship 0 else)#"  , py::arg("ent"))
        .def("AppliedApprovalAssignment",
             (opencascade::handle<StepAP214_AppliedApprovalAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepAP214_AppliedApprovalAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::AppliedApprovalAssignment),
             R"#(returns Value as a AppliedApprovalAssignment (Null if another type))#" )
        .def("AppliedDateAndTimeAssignment",
             (opencascade::handle<StepAP214_AppliedDateAndTimeAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepAP214_AppliedDateAndTimeAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::AppliedDateAndTimeAssignment),
             R"#(returns Value as a AppliedDateAndTimeAssignment (Null if another type))#" )
        .def("AppliedDateAssignment",
             (opencascade::handle<StepAP214_AppliedDateAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepAP214_AppliedDateAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::AppliedDateAssignment),
             R"#(returns Value as a AppliedDateAssignment (Null if another type))#" )
        .def("AppliedDocumentReference",
             (opencascade::handle<StepAP214_AppliedDocumentReference> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepAP214_AppliedDocumentReference> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::AppliedDocumentReference),
             R"#(returns Value as a AppliedDocumentReference (Null if another type))#" )
        .def("AppliedExternalIdentificationAssignment",
             (opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepAP214_AppliedExternalIdentificationAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::AppliedExternalIdentificationAssignment),
             R"#(returns Value as a AppliedExternalIdentificationAssignment (Null if another type))#" )
        .def("AppliedGroupAssignment",
             (opencascade::handle<StepAP214_AppliedGroupAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepAP214_AppliedGroupAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::AppliedGroupAssignment),
             R"#(returns Value as a AppliedGroupAssignment (Null if another type))#" )
        .def("AppliedOrganizationAssignment",
             (opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepAP214_AppliedOrganizationAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::AppliedOrganizationAssignment),
             R"#(returns Value as a AppliedOrganizationAssignment (Null if another type))#" )
        .def("AppliedPersonAndOrganizationAssignment",
             (opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepAP214_AppliedPersonAndOrganizationAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::AppliedPersonAndOrganizationAssignment),
             R"#(returns Value as a AppliedPersonAndOrganizationAssignment (Null if another type))#" )
        .def("AppliedSecurityClassificationAssignment",
             (opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepAP214_AppliedSecurityClassificationAssignment> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::AppliedSecurityClassificationAssignment),
             R"#(returns Value as a AppliedSecurityClassificationAssignment (Null if another type))#" )
        .def("DimensionalSize",
             (opencascade::handle<StepShape_DimensionalSize> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepShape_DimensionalSize> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::DimensionalSize),
             R"#(returns Value as a DimensionalSize (Null if another type))#" )
        .def("GeneralProperty",
             (opencascade::handle<StepBasic_GeneralProperty> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepBasic_GeneralProperty> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::GeneralProperty),
             R"#(returns Value as a GeneralProperty (Null if another type))#" )
        .def("GeometricTolerance",
             (opencascade::handle<StepDimTol_GeometricTolerance> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepDimTol_GeometricTolerance> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::GeometricTolerance),
             R"#(returns Value as a GeometricTolerance (Null if another type))#" )
        .def("ProductDefinitionRelationship",
             (opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepBasic_ProductDefinitionRelationship> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::ProductDefinitionRelationship),
             R"#(returns Value as a ProductDefinitionRelationship (Null if another type))#" )
        .def("PropertyDefinition",
             (opencascade::handle<StepRepr_PropertyDefinition> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepRepr_PropertyDefinition> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::PropertyDefinition),
             R"#(returns Value as a PropertyDefinition (Null if another type))#" )
        .def("PropertyDefinitionRelationship",
             (opencascade::handle<StepRepr_PropertyDefinitionRelationship> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepRepr_PropertyDefinitionRelationship> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::PropertyDefinitionRelationship),
             R"#(returns Value as a PropertyDefinitionRelationship (Null if another type))#" )
        .def("ShapeAspect",
             (opencascade::handle<StepRepr_ShapeAspect> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::ShapeAspect),
             R"#(returns Value as a ShapeAspect (Null if another type))#" )
        .def("ShapeAspectRelationship",
             (opencascade::handle<StepRepr_ShapeAspectRelationship> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspectRelationship> (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::ShapeAspectRelationship),
             R"#(returns Value as a ShapeAspectRelationship (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepAP242_DraughtingModelItemAssociation ,opencascade::handle<StepAP242_DraughtingModelItemAssociation>  , StepAP242_ItemIdentifiedRepresentationUsage >>(m.attr("StepAP242_DraughtingModelItemAssociation"))
        .def(py::init<  >()  )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP242_DraughtingModelItemAssociation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP242_DraughtingModelItemAssociation::*)() const>(&StepAP242_DraughtingModelItemAssociation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP242_DraughtingModelItemAssociation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP242_DraughtingModelItemAssociation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepAP242_GeometricItemSpecificUsage ,opencascade::handle<StepAP242_GeometricItemSpecificUsage>  , StepAP242_ItemIdentifiedRepresentationUsage >>(m.attr("StepAP242_GeometricItemSpecificUsage"))
        .def(py::init<  >()  )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP242_GeometricItemSpecificUsage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP242_GeometricItemSpecificUsage::*)() const>(&StepAP242_GeometricItemSpecificUsage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP242_GeometricItemSpecificUsage::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepAP242_GeometricItemSpecificUsage::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/StepAP242_GeometricItemSpecificUsage.hxx
// ./opencascade/StepAP242_ItemIdentifiedRepresentationUsage.hxx
// ./opencascade/StepAP242_DraughtingModelItemAssociation.hxx
// ./opencascade/StepAP242_IdAttributeSelect.hxx
// ./opencascade/StepAP242_ItemIdentifiedRepresentationUsageDefinition.hxx
// ./opencascade/StepAP242_IdAttribute.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
