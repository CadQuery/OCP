
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
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
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_Representation.hxx>

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
void register_StepAP242_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepAP242", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<StepAP242_IdAttribute ,opencascade::handle<StepAP242_IdAttribute>  , Standard_Transient >(m,"StepAP242_IdAttribute",R"#()#");
    py::class_<StepAP242_IdAttributeSelect , shared_ptr<StepAP242_IdAttributeSelect>  , StepData_SelectType >(m,"StepAP242_IdAttributeSelect",R"#(None)#");
    py::class_<StepAP242_ItemIdentifiedRepresentationUsage ,opencascade::handle<StepAP242_ItemIdentifiedRepresentationUsage>  , Standard_Transient >(m,"StepAP242_ItemIdentifiedRepresentationUsage",R"#()#");
    py::class_<StepAP242_ItemIdentifiedRepresentationUsageDefinition , shared_ptr<StepAP242_ItemIdentifiedRepresentationUsageDefinition>  , StepData_SelectType >(m,"StepAP242_ItemIdentifiedRepresentationUsageDefinition",R"#(None)#");
    py::class_<StepAP242_DraughtingModelItemAssociation ,opencascade::handle<StepAP242_DraughtingModelItemAssociation>  , StepAP242_ItemIdentifiedRepresentationUsage >(m,"StepAP242_DraughtingModelItemAssociation",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepAP242_GeometricItemSpecificUsage ,opencascade::handle<StepAP242_GeometricItemSpecificUsage>  , StepAP242_ItemIdentifiedRepresentationUsage >(m,"StepAP242_GeometricItemSpecificUsage",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");

};

// user-defined post-inclusion per module

// user-defined post
