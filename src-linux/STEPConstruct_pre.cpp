
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepBasic_ProductRelatedProductCategory.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_ProductContext.hxx>
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <TopLoc_Location.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_Binder.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <STEPConstruct_Tool.hxx>
#include <STEPConstruct_UnitContext.hxx>
#include <STEPConstruct_Part.hxx>
#include <STEPConstruct_Assembly.hxx>
#include <STEPConstruct_Styles.hxx>
#include <STEPConstruct_ValidationProps.hxx>
#include <STEPConstruct_ExternRefs.hxx>
#include <STEPConstruct_AP203Context.hxx>
#include <STEPConstruct_ContextTool.hxx>
#include <STEPConstruct_PointHasher.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepBasic_ProductRelatedProductCategory.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_ProductContext.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepData_StepModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <STEPConstruct_Part.hxx>
#include <STEPConstruct_Assembly.hxx>
#include <StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepBasic_SiUnit.hxx>
#include <gp_Pnt.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TopoDS_Shape.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_CharacterizedDefinition.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <gp_Pnt.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <Interface_InterfaceModel.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <Interface_Graph.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <TopoDS_Shape.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepVisual_Colour.hxx>
#include <Quantity_Color.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_SecurityClassificationLevel.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_ApprovalRole.hxx>
#include <StepAP203_CcDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP203_CcDesignSecurityClassification.hxx>
#include <StepAP203_CcDesignDateAndTimeAssignment.hxx>
#include <StepAP203_CcDesignApproval.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepBasic_ApprovalDateTime.hxx>
#include <StepBasic_ProductCategoryRelationship.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <STEPConstruct_Part.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>

// module includes
#include <STEPConstruct.hxx>
#include <STEPConstruct_AP203Context.hxx>
#include <STEPConstruct_Assembly.hxx>
#include <STEPConstruct_ContextTool.hxx>
#include <STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.hxx>
#include <STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.hxx>
#include <STEPConstruct_DataMapOfAsciiStringTransient.hxx>
#include <STEPConstruct_DataMapOfPointTransient.hxx>
#include <STEPConstruct_ExternRefs.hxx>
#include <STEPConstruct_Part.hxx>
#include <STEPConstruct_PointHasher.hxx>
#include <STEPConstruct_Styles.hxx>
#include <STEPConstruct_Tool.hxx>
#include <STEPConstruct_UnitContext.hxx>
#include <STEPConstruct_ValidationProps.hxx>

// template related includes
// ./opencascade/STEPConstruct_DataMapOfAsciiStringTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/STEPConstruct_DataMapOfPointTransient.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_STEPConstruct_enums(py::module &main_module) {


py::module m = main_module.def_submodule("STEPConstruct", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<STEPConstruct , shared_ptr<STEPConstruct> >(m,"STEPConstruct",R"#(Defines tools for creation and investigation STEP constructs used for representing various kinds of data, such as product and assembly structure, unit contexts, associated information The creation of these structures is made according to currently active schema (AP203 or AP214 CD2 or DIS) This is taken from parameter write.step.schema)#");
    py::class_<STEPConstruct_AP203Context , shared_ptr<STEPConstruct_AP203Context> >(m,"STEPConstruct_AP203Context",R"#(Maintains context specific for AP203 (required data and management information such as persons, dates, approvals etc.) It contains static entities (which can be shared), default values for person and organisation, and also provides tool for creating management entities around specific part (SDR).)#");
    py::class_<STEPConstruct_Assembly , shared_ptr<STEPConstruct_Assembly> >(m,"STEPConstruct_Assembly",R"#(This operator creates and checks an item of an assembly, from its basic data : a ShapeRepresentation, a Location ...)#");
    py::class_<STEPConstruct_ContextTool , shared_ptr<STEPConstruct_ContextTool> >(m,"STEPConstruct_ContextTool",R"#(Maintains global context tool for writing. Gives access to Product Definition Context (one per Model) Maintains ApplicationProtocolDefinition entity (common for all products) Also maintains context specific for AP203 and provides set of methods to work with various STEP constructs as required by Actor)#");
    py::class_<STEPConstruct_Part , shared_ptr<STEPConstruct_Part> >(m,"STEPConstruct_Part",R"#(Provides tools for creating STEP structures associated with part (SDR), such as PRODUCT, PDF etc., as requied by current schema Also allows to investigate and modify this data)#");
    py::class_<STEPConstruct_PointHasher , shared_ptr<STEPConstruct_PointHasher> >(m,"STEPConstruct_PointHasher",R"#(None)#");
    py::class_<STEPConstruct_Tool , shared_ptr<STEPConstruct_Tool> >(m,"STEPConstruct_Tool",R"#(Provides basic functionalities for tools which are intended for encoding/decoding specific STEP constructs)#");
    py::class_<STEPConstruct_UnitContext , shared_ptr<STEPConstruct_UnitContext> >(m,"STEPConstruct_UnitContext",R"#(Tool for creation (encoding) and decoding (for writing and reading accordingly) context defining units and tolerances (uncerntanties))#");
    py::class_<STEPConstruct_ExternRefs , shared_ptr<STEPConstruct_ExternRefs> , STEPConstruct_Tool>(m,"STEPConstruct_ExternRefs",R"#(Provides a tool for analyzing (reading) and creating (writing) references to external files in STEP)#");
    py::class_<STEPConstruct_Styles , shared_ptr<STEPConstruct_Styles> , STEPConstruct_Tool>(m,"STEPConstruct_Styles",R"#(Provides a mechanism for reading and writing shape styles (such as color) to and from the STEP file This tool maintains a list of styles, either taking them from STEP model (reading), or filling it by calls to AddStyle or directly (writing). Some methods deal with general structures of styles and presentations in STEP, but there are methods which deal with particular implementation of colors (as described in RP))#");
    py::class_<STEPConstruct_ValidationProps , shared_ptr<STEPConstruct_ValidationProps> , STEPConstruct_Tool>(m,"STEPConstruct_ValidationProps",R"#(This class provides tools for access (write and read) the validation properties on shapes in the STEP file. These are surface area, solid volume and centroid.)#");

};

// user-defined post-inclusion per module

// user-defined post
