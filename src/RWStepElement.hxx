#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementEndReleasePacket.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSectionField.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_ElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSectionFieldVarying.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSectionFieldConstant.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_CurveElementSectionDerivedDefinitions.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_UniformSurfaceSection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepElement_RWVolume3dElementDescriptor.hxx>
#include <RWStepElement_RWElementMaterial.hxx>
#include <RWStepElement_RWAnalysisItemWithinRepresentation.hxx>
#include <RWStepElement_RWCurve3dElementDescriptor.hxx>
#include <RWStepElement_RWCurveElementEndReleasePacket.hxx>
#include <RWStepElement_RWCurveElementSectionDefinition.hxx>
#include <RWStepElement_RWSurfaceSectionField.hxx>
#include <RWStepElement_RWElementDescriptor.hxx>
#include <RWStepElement_RWSurfaceSectionFieldVarying.hxx>
#include <RWStepElement_RWSurfaceSectionFieldConstant.hxx>
#include <RWStepElement_RWCurveElementSectionDerivedDefinitions.hxx>
#include <RWStepElement_RWUniformSurfaceSection.hxx>
#include <RWStepElement_RWSurfaceSection.hxx>
#include <RWStepElement_RWSurface3dElementDescriptor.hxx>
#include <RWStepElement_RWSurfaceElementProperty.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/RWStepElement_RWVolume3dElementDescriptor.hxx
// ./opencascade/RWStepElement_RWElementMaterial.hxx
// ./opencascade/RWStepElement_RWAnalysisItemWithinRepresentation.hxx
// ./opencascade/RWStepElement_RWCurve3dElementDescriptor.hxx
// ./opencascade/RWStepElement_RWCurveElementEndReleasePacket.hxx
// ./opencascade/RWStepElement_RWCurveElementSectionDefinition.hxx
// ./opencascade/RWStepElement_RWSurfaceSectionField.hxx
// ./opencascade/RWStepElement_RWElementDescriptor.hxx
// ./opencascade/RWStepElement_RWSurfaceSectionFieldVarying.hxx
// ./opencascade/RWStepElement_RWSurfaceSectionFieldConstant.hxx
// ./opencascade/RWStepElement_RWCurveElementSectionDerivedDefinitions.hxx
// ./opencascade/RWStepElement_RWUniformSurfaceSection.hxx
// ./opencascade/RWStepElement_RWSurfaceSection.hxx
// ./opencascade/RWStepElement_RWSurface3dElementDescriptor.hxx
// ./opencascade/RWStepElement_RWSurfaceElementProperty.hxx

// user-defined post
