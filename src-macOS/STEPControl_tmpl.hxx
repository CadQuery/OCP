#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <XSControl_WorkSession.hxx>
#include <StepData_StepModel.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <XSControl_WorkSession.hxx>
#include <StepData_StepModel.hxx>
#include <TopoDS_Shape.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <XSControl_WorkSession.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepShape_NonManifoldSurfaceShapeRepresentation.hxx>
#include <StepRepr_Representation.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepShape_FaceSurface.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Compound.hxx>

// module includes
#include <STEPControl_Reader.hxx>
#include <STEPControl_Writer.hxx>
#include <STEPControl_Controller.hxx>
#include <STEPControl_ActorWrite.hxx>
#include <STEPControl_ActorRead.hxx>
#include <STEPControl_StepModelType.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/STEPControl_Reader.hxx
// ./opencascade/STEPControl_Writer.hxx
// ./opencascade/STEPControl_Controller.hxx
// ./opencascade/STEPControl_ActorWrite.hxx
// ./opencascade/STEPControl_ActorRead.hxx
// ./opencascade/STEPControl_StepModelType.hxx

// user-defined post
