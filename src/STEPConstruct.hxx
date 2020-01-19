#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StepBasic_ProductDefinition.hxx>
#include <TopoDS_Shape.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_CharacterizedDefinition.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <gp_Pnt.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepBasic_ProductRelatedProductCategory.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_ProductContext.hxx>
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <Interface_InterfaceModel.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <Interface_Graph.hxx>
#include <StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepBasic_SiUnit.hxx>
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
#include <gp_Pnt.hxx>
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
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepData_StepModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <STEPConstruct_Part.hxx>
#include <STEPConstruct_Assembly.hxx>
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

// module includes
#include <STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.hxx>
#include <STEPConstruct_ValidationProps.hxx>
#include <STEPConstruct_ExternRefs.hxx>
#include <STEPConstruct_Tool.hxx>
#include <STEPConstruct_Assembly.hxx>
#include <STEPConstruct_DataMapOfPointTransient.hxx>
#include <STEPConstruct_UnitContext.hxx>
#include <STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.hxx>
#include <STEPConstruct.hxx>
#include <STEPConstruct_PointHasher.hxx>
#include <STEPConstruct_Part.hxx>
#include <STEPConstruct_AP203Context.hxx>
#include <STEPConstruct_ContextTool.hxx>
#include <STEPConstruct_DataMapOfAsciiStringTransient.hxx>
#include <STEPConstruct_Styles.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.hxx
// ./opencascade/STEPConstruct_ValidationProps.hxx
// ./opencascade/STEPConstruct_ExternRefs.hxx
// ./opencascade/STEPConstruct_Tool.hxx
// ./opencascade/STEPConstruct_Assembly.hxx
// ./opencascade/STEPConstruct_DataMapOfPointTransient.hxx
// ./opencascade/STEPConstruct_UnitContext.hxx
// ./opencascade/STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.hxx
// ./opencascade/STEPConstruct.hxx
// ./opencascade/STEPConstruct_PointHasher.hxx
// ./opencascade/STEPConstruct_Part.hxx
// ./opencascade/STEPConstruct_AP203Context.hxx
// ./opencascade/STEPConstruct_ContextTool.hxx
// ./opencascade/STEPConstruct_DataMapOfAsciiStringTransient.hxx
// ./opencascade/STEPConstruct_Styles.hxx

// user-defined post
