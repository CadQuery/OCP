
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
#include <TCollection_HAsciiString.hxx>
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


    static_cast<py::class_<StepAP242_IdAttribute ,opencascade::handle<StepAP242_IdAttribute> , Standard_Transient>>(m.attr("StepAP242_IdAttribute"))
    // constructors
    // custom constructors
    // methods
        .def("SetAttributeValue",
             (void (StepAP242_IdAttribute::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepAP242_IdAttribute::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepAP242_IdAttribute::SetAttributeValue),
             R"#(None)#"  , py::arg("theAttributeValue"))
        .def("AttributeValue",
             (opencascade::handle<TCollection_HAsciiString> (StepAP242_IdAttribute::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepAP242_IdAttribute::*)() const>(&StepAP242_IdAttribute::AttributeValue),
             R"#(Returns field AttributeValue)#" )
        .def("SetIdentifiedItem",
             (void (StepAP242_IdAttribute::*)( const StepAP242_IdAttributeSelect & ) ) static_cast<void (StepAP242_IdAttribute::*)( const StepAP242_IdAttributeSelect & ) >(&StepAP242_IdAttribute::SetIdentifiedItem),
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP242_IdAttributeSelect , shared_ptr<StepAP242_IdAttributeSelect> , StepData_SelectType>>(m.attr("StepAP242_IdAttributeSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP242_IdAttributeSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepAP242_IdAttributeSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepAP242_IdAttributeSelect::CaseNum),
             R"#(Recognizes a IdAttributeSelect Kind Entity that is : 1 -> Action 2 -> Address 3 -> ApplicationContext 4 -> DimensionalSize 5 -> GeometricTolerance 6 -> Group 7 -> Reserved for OrganizatonalProject (not implemented in OCCT) 8 -> ProductCategory 9 -> PropertyDefinition 10 -> Representation 11 -> ShapeAspect 12 -> ShapeAspectRelationship 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP242_ItemIdentifiedRepresentationUsage ,opencascade::handle<StepAP242_ItemIdentifiedRepresentationUsage> , Standard_Transient>>(m.attr("StepAP242_ItemIdentifiedRepresentationUsage"))
    // constructors
    // custom constructors
    // methods
        .def("SetName",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetName),
             R"#(Set field Name)#"  , py::arg("theName"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::Name),
             R"#(Returns field Name)#" )
        .def("SetDescription",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetDescription),
             R"#(Set field Description)#"  , py::arg("theDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::Description),
             R"#(Returns field Description)#" )
        .def("SetDefinition",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const StepAP242_ItemIdentifiedRepresentationUsageDefinition & ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const StepAP242_ItemIdentifiedRepresentationUsageDefinition & ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetDefinition),
             R"#(Set field Definition)#"  , py::arg("theDefinition"))
        .def("Definition",
             (StepAP242_ItemIdentifiedRepresentationUsageDefinition (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<StepAP242_ItemIdentifiedRepresentationUsageDefinition (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::Definition),
             R"#(Returns field Definition)#" )
        .def("SetUsedRepresentation",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepRepr_Representation> & ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepRepr_Representation> & ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetUsedRepresentation),
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
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetIdentifiedItem),
             R"#(Set fiels IdentifiedItem)#"  , py::arg("theIdentifiedItem"))
        .def("IdentifiedItemValue",
             (opencascade::handle<StepRepr_RepresentationItem> (StepAP242_ItemIdentifiedRepresentationUsage::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepRepr_RepresentationItem> (StepAP242_ItemIdentifiedRepresentationUsage::*)( const Standard_Integer ) const>(&StepAP242_ItemIdentifiedRepresentationUsage::IdentifiedItemValue),
             R"#(Returns identified item with given number)#"  , py::arg("num"))
        .def("SetIdentifiedItemValue",
             (void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const Standard_Integer , const opencascade::handle<StepRepr_RepresentationItem> & ) ) static_cast<void (StepAP242_ItemIdentifiedRepresentationUsage::*)( const Standard_Integer , const opencascade::handle<StepRepr_RepresentationItem> & ) >(&StepAP242_ItemIdentifiedRepresentationUsage::SetIdentifiedItemValue),
             R"#(Set identified item with given number)#"  , py::arg("num"),  py::arg("theItem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP242_ItemIdentifiedRepresentationUsage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP242_ItemIdentifiedRepresentationUsage::*)() const>(&StepAP242_ItemIdentifiedRepresentationUsage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP242_ItemIdentifiedRepresentationUsage::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP242_ItemIdentifiedRepresentationUsageDefinition , shared_ptr<StepAP242_ItemIdentifiedRepresentationUsageDefinition> , StepData_SelectType>>(m.attr("StepAP242_ItemIdentifiedRepresentationUsageDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepAP242_ItemIdentifiedRepresentationUsageDefinition::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepAP242_ItemIdentifiedRepresentationUsageDefinition::CaseNum),
             R"#(Recognizes a ItemIdentifiedRepresentationUsageDefinition Kind Entity that is : 1 -> AppliedApprovalAssignment 2 -> AppliedDateAndTimeAssignment 3 -> AppliedDateAssignment 4 -> AppliedDocumentReference 5 -> AppliedExternalIdentificationAssignment 6 -> AppliedGroupAssignment 7 -> AppliedOrganizationAssignment 8 -> AppliedPersonAndOrganizationAssignment 9 -> AppliedSecurityClassificationAssignment 10 -> DimensionalSize 11 -> GeneralProperty 12 -> GeometricTolerance 13 -> ProductDefinitionRelationship 14 -> PropertyDefinition 15 -> PropertyDefinitionRelationship 16 -> ShapeAspect 17 -> ShapeAspectRelationship 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP242_DraughtingModelItemAssociation ,opencascade::handle<StepAP242_DraughtingModelItemAssociation> , StepAP242_ItemIdentifiedRepresentationUsage>>(m.attr("StepAP242_DraughtingModelItemAssociation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP242_DraughtingModelItemAssociation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP242_DraughtingModelItemAssociation::*)() const>(&StepAP242_DraughtingModelItemAssociation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP242_DraughtingModelItemAssociation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepAP242_GeometricItemSpecificUsage ,opencascade::handle<StepAP242_GeometricItemSpecificUsage> , StepAP242_ItemIdentifiedRepresentationUsage>>(m.attr("StepAP242_GeometricItemSpecificUsage"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepAP242_GeometricItemSpecificUsage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepAP242_GeometricItemSpecificUsage::*)() const>(&StepAP242_GeometricItemSpecificUsage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepAP242_GeometricItemSpecificUsage::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepAP242_ItemIdentifiedRepresentationUsage.hxx
// ./opencascade/StepAP242_IdAttributeSelect.hxx
// ./opencascade/StepAP242_DraughtingModelItemAssociation.hxx
// ./opencascade/StepAP242_IdAttribute.hxx
// ./opencascade/StepAP242_GeometricItemSpecificUsage.hxx
// ./opencascade/StepAP242_ItemIdentifiedRepresentationUsageDefinition.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
