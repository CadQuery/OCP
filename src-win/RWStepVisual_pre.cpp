
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationStyleByContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_FillAreaStyleColour.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModel.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CompositeText.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CurveStyleFont.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationPlane.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD2.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingPreDefinedColour.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CompositeTextWithExtent.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PreDefinedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PointStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AreaInSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextLiteral.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_FillAreaStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ExternallyDefinedCurveFont.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingCallout.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentedItemRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationLayerUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationSize.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_BackgroundColour.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PreDefinedCurveFont.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationCurveOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PreDefinedColour.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3MultiClipping.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextStyleWithBoxCharacteristics.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TemplateInstance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TessellatedGeometricSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationFillAreaOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleSilhouette.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TessellatedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_Template.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ContextDependentOverRidingStyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3MultiClippingIntersection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleSegmentationCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingPreDefinedCurveFont.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TessellatedAnnotationOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleFillArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ColourRgb.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleBoundary.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CurveStyleFontPattern.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraImage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleParameterLine.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_Invisibility.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ColourSpecification.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_Colour.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationFillArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleControlGrid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ContextDependentInvisibility.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceSideStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_OverRidingStyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PlanarExtent.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepData_StepWriter.hxx>

// module includes
#include <RWStepVisual_RWAnnotationCurveOccurrence.hxx>
#include <RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem.hxx>
#include <RWStepVisual_RWAnnotationFillArea.hxx>
#include <RWStepVisual_RWAnnotationFillAreaOccurrence.hxx>
#include <RWStepVisual_RWAnnotationOccurrence.hxx>
#include <RWStepVisual_RWAnnotationPlane.hxx>
#include <RWStepVisual_RWAreaInSet.hxx>
#include <RWStepVisual_RWBackgroundColour.hxx>
#include <RWStepVisual_RWCameraImage.hxx>
#include <RWStepVisual_RWCameraModel.hxx>
#include <RWStepVisual_RWCameraModelD2.hxx>
#include <RWStepVisual_RWCameraModelD3.hxx>
#include <RWStepVisual_RWCameraModelD3MultiClipping.hxx>
#include <RWStepVisual_RWCameraModelD3MultiClippingIntersection.hxx>
#include <RWStepVisual_RWCameraModelD3MultiClippingUnion.hxx>
#include <RWStepVisual_RWCameraUsage.hxx>
#include <RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation.hxx>
#include <RWStepVisual_RWColour.hxx>
#include <RWStepVisual_RWColourRgb.hxx>
#include <RWStepVisual_RWColourSpecification.hxx>
#include <RWStepVisual_RWCompositeText.hxx>
#include <RWStepVisual_RWCompositeTextWithExtent.hxx>
#include <RWStepVisual_RWContextDependentInvisibility.hxx>
#include <RWStepVisual_RWContextDependentOverRidingStyledItem.hxx>
#include <RWStepVisual_RWCoordinatesList.hxx>
#include <RWStepVisual_RWCurveStyle.hxx>
#include <RWStepVisual_RWCurveStyleFont.hxx>
#include <RWStepVisual_RWCurveStyleFontPattern.hxx>
#include <RWStepVisual_RWDraughtingCallout.hxx>
#include <RWStepVisual_RWDraughtingModel.hxx>
#include <RWStepVisual_RWDraughtingPreDefinedColour.hxx>
#include <RWStepVisual_RWDraughtingPreDefinedCurveFont.hxx>
#include <RWStepVisual_RWExternallyDefinedCurveFont.hxx>
#include <RWStepVisual_RWFillAreaStyle.hxx>
#include <RWStepVisual_RWFillAreaStyleColour.hxx>
#include <RWStepVisual_RWInvisibility.hxx>
#include <RWStepVisual_RWMechanicalDesignGeometricPresentationArea.hxx>
#include <RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation.hxx>
#include <RWStepVisual_RWOverRidingStyledItem.hxx>
#include <RWStepVisual_RWPlanarBox.hxx>
#include <RWStepVisual_RWPlanarExtent.hxx>
#include <RWStepVisual_RWPointStyle.hxx>
#include <RWStepVisual_RWPreDefinedColour.hxx>
#include <RWStepVisual_RWPreDefinedCurveFont.hxx>
#include <RWStepVisual_RWPreDefinedItem.hxx>
#include <RWStepVisual_RWPresentationArea.hxx>
#include <RWStepVisual_RWPresentationLayerAssignment.hxx>
#include <RWStepVisual_RWPresentationLayerUsage.hxx>
#include <RWStepVisual_RWPresentationRepresentation.hxx>
#include <RWStepVisual_RWPresentationSet.hxx>
#include <RWStepVisual_RWPresentationSize.hxx>
#include <RWStepVisual_RWPresentationStyleAssignment.hxx>
#include <RWStepVisual_RWPresentationStyleByContext.hxx>
#include <RWStepVisual_RWPresentationView.hxx>
#include <RWStepVisual_RWPresentedItemRepresentation.hxx>
#include <RWStepVisual_RWStyledItem.hxx>
#include <RWStepVisual_RWSurfaceSideStyle.hxx>
#include <RWStepVisual_RWSurfaceStyleBoundary.hxx>
#include <RWStepVisual_RWSurfaceStyleControlGrid.hxx>
#include <RWStepVisual_RWSurfaceStyleFillArea.hxx>
#include <RWStepVisual_RWSurfaceStyleParameterLine.hxx>
#include <RWStepVisual_RWSurfaceStyleSegmentationCurve.hxx>
#include <RWStepVisual_RWSurfaceStyleSilhouette.hxx>
#include <RWStepVisual_RWSurfaceStyleUsage.hxx>
#include <RWStepVisual_RWTemplate.hxx>
#include <RWStepVisual_RWTemplateInstance.hxx>
#include <RWStepVisual_RWTessellatedAnnotationOccurrence.hxx>
#include <RWStepVisual_RWTessellatedCurveSet.hxx>
#include <RWStepVisual_RWTessellatedGeometricSet.hxx>
#include <RWStepVisual_RWTessellatedItem.hxx>
#include <RWStepVisual_RWTextLiteral.hxx>
#include <RWStepVisual_RWTextStyle.hxx>
#include <RWStepVisual_RWTextStyleForDefinedFont.hxx>
#include <RWStepVisual_RWTextStyleWithBoxCharacteristics.hxx>
#include <RWStepVisual_RWViewVolume.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepVisual_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepVisual", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStepVisual_RWAnnotationCurveOccurrence , shared_ptr<RWStepVisual_RWAnnotationCurveOccurrence> >(m,"RWStepVisual_RWAnnotationCurveOccurrence",R"#(Read & Write Module for AnnotationCurveOccurrence)#");
    py::class_<RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem , shared_ptr<RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem> >(m,"RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem",R"#(Read & Write Module for AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem)#");
    py::class_<RWStepVisual_RWAnnotationFillArea , shared_ptr<RWStepVisual_RWAnnotationFillArea> >(m,"RWStepVisual_RWAnnotationFillArea",R"#(Read & Write Module for AnnotationFillArea)#");
    py::class_<RWStepVisual_RWAnnotationFillAreaOccurrence , shared_ptr<RWStepVisual_RWAnnotationFillAreaOccurrence> >(m,"RWStepVisual_RWAnnotationFillAreaOccurrence",R"#(Read & Write Module for AnnotationFillAreaOccurrence)#");
    py::class_<RWStepVisual_RWAnnotationOccurrence , shared_ptr<RWStepVisual_RWAnnotationOccurrence> >(m,"RWStepVisual_RWAnnotationOccurrence",R"#(Read & Write Module for AnnotationOccurrence)#");
    py::class_<RWStepVisual_RWAnnotationPlane , shared_ptr<RWStepVisual_RWAnnotationPlane> >(m,"RWStepVisual_RWAnnotationPlane",R"#(Read & Write Module for AnnotationPlane)#");
    py::class_<RWStepVisual_RWAreaInSet , shared_ptr<RWStepVisual_RWAreaInSet> >(m,"RWStepVisual_RWAreaInSet",R"#(Read & Write Module for AreaInSet)#");
    py::class_<RWStepVisual_RWBackgroundColour , shared_ptr<RWStepVisual_RWBackgroundColour> >(m,"RWStepVisual_RWBackgroundColour",R"#(Read & Write Module for BackgroundColour)#");
    py::class_<RWStepVisual_RWCameraImage , shared_ptr<RWStepVisual_RWCameraImage> >(m,"RWStepVisual_RWCameraImage",R"#(Read & Write Module for CameraImage)#");
    py::class_<RWStepVisual_RWCameraModel , shared_ptr<RWStepVisual_RWCameraModel> >(m,"RWStepVisual_RWCameraModel",R"#(Read & Write Module for CameraModel)#");
    py::class_<RWStepVisual_RWCameraModelD2 , shared_ptr<RWStepVisual_RWCameraModelD2> >(m,"RWStepVisual_RWCameraModelD2",R"#(Read & Write Module for CameraModelD2)#");
    py::class_<RWStepVisual_RWCameraModelD3 , shared_ptr<RWStepVisual_RWCameraModelD3> >(m,"RWStepVisual_RWCameraModelD3",R"#(Read & Write Module for CameraModelD3)#");
    py::class_<RWStepVisual_RWCameraModelD3MultiClipping , shared_ptr<RWStepVisual_RWCameraModelD3MultiClipping> >(m,"RWStepVisual_RWCameraModelD3MultiClipping",R"#(Read & Write Module for CameraModelD3MultiClipping)#");
    py::class_<RWStepVisual_RWCameraModelD3MultiClippingIntersection , shared_ptr<RWStepVisual_RWCameraModelD3MultiClippingIntersection> >(m,"RWStepVisual_RWCameraModelD3MultiClippingIntersection",R"#(Read & Write Module for CameraModelD3MultiClippingIntersection)#");
    py::class_<RWStepVisual_RWCameraModelD3MultiClippingUnion , shared_ptr<RWStepVisual_RWCameraModelD3MultiClippingUnion> >(m,"RWStepVisual_RWCameraModelD3MultiClippingUnion",R"#(Read & Write Module for CameraModelD3MultiClippingUnion)#");
    py::class_<RWStepVisual_RWCameraUsage , shared_ptr<RWStepVisual_RWCameraUsage> >(m,"RWStepVisual_RWCameraUsage",R"#(Read & Write Module for CameraUsage)#");
    py::class_<RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation , shared_ptr<RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation> >(m,"RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation",R"#(Read & Write Module for complex STEP entity Characterized_Object & Characterized_Representation & Draughting_Model & Representation)#");
    py::class_<RWStepVisual_RWColour , shared_ptr<RWStepVisual_RWColour> >(m,"RWStepVisual_RWColour",R"#(Read & Write Module for Colour)#");
    py::class_<RWStepVisual_RWColourRgb , shared_ptr<RWStepVisual_RWColourRgb> >(m,"RWStepVisual_RWColourRgb",R"#(Read & Write Module for ColourRgb)#");
    py::class_<RWStepVisual_RWColourSpecification , shared_ptr<RWStepVisual_RWColourSpecification> >(m,"RWStepVisual_RWColourSpecification",R"#(Read & Write Module for ColourSpecification)#");
    py::class_<RWStepVisual_RWCompositeText , shared_ptr<RWStepVisual_RWCompositeText> >(m,"RWStepVisual_RWCompositeText",R"#(Read & Write Module for CompositeText)#");
    py::class_<RWStepVisual_RWCompositeTextWithExtent , shared_ptr<RWStepVisual_RWCompositeTextWithExtent> >(m,"RWStepVisual_RWCompositeTextWithExtent",R"#(Read & Write Module for CompositeTextWithExtent)#");
    py::class_<RWStepVisual_RWContextDependentInvisibility , shared_ptr<RWStepVisual_RWContextDependentInvisibility> >(m,"RWStepVisual_RWContextDependentInvisibility",R"#(Read & Write Module for ContextDependentInvisibility)#");
    py::class_<RWStepVisual_RWContextDependentOverRidingStyledItem , shared_ptr<RWStepVisual_RWContextDependentOverRidingStyledItem> >(m,"RWStepVisual_RWContextDependentOverRidingStyledItem",R"#(Read & Write Module for ContextDependentOverRidingStyledItem)#");
    py::class_<RWStepVisual_RWCoordinatesList , shared_ptr<RWStepVisual_RWCoordinatesList> >(m,"RWStepVisual_RWCoordinatesList",R"#(Read & Write Module for AnnotationOccurrence)#");
    py::class_<RWStepVisual_RWCurveStyle , shared_ptr<RWStepVisual_RWCurveStyle> >(m,"RWStepVisual_RWCurveStyle",R"#(Read & Write Module for CurveStyle)#");
    py::class_<RWStepVisual_RWCurveStyleFont , shared_ptr<RWStepVisual_RWCurveStyleFont> >(m,"RWStepVisual_RWCurveStyleFont",R"#(Read & Write Module for CurveStyleFont)#");
    py::class_<RWStepVisual_RWCurveStyleFontPattern , shared_ptr<RWStepVisual_RWCurveStyleFontPattern> >(m,"RWStepVisual_RWCurveStyleFontPattern",R"#(Read & Write Module for CurveStyleFontPattern)#");
    py::class_<RWStepVisual_RWDraughtingCallout , shared_ptr<RWStepVisual_RWDraughtingCallout> >(m,"RWStepVisual_RWDraughtingCallout",R"#(Read & Write Module for DraughtingCallout)#");
    py::class_<RWStepVisual_RWDraughtingModel , shared_ptr<RWStepVisual_RWDraughtingModel> >(m,"RWStepVisual_RWDraughtingModel",R"#(Read & Write tool for DraughtingModel)#");
    py::class_<RWStepVisual_RWDraughtingPreDefinedColour , shared_ptr<RWStepVisual_RWDraughtingPreDefinedColour> >(m,"RWStepVisual_RWDraughtingPreDefinedColour",R"#(Read & Write Module for DraughtingPreDefinedColour)#");
    py::class_<RWStepVisual_RWDraughtingPreDefinedCurveFont , shared_ptr<RWStepVisual_RWDraughtingPreDefinedCurveFont> >(m,"RWStepVisual_RWDraughtingPreDefinedCurveFont",R"#(Read & Write Module for DraughtingPreDefinedCurveFont)#");
    py::class_<RWStepVisual_RWExternallyDefinedCurveFont , shared_ptr<RWStepVisual_RWExternallyDefinedCurveFont> >(m,"RWStepVisual_RWExternallyDefinedCurveFont",R"#(Read & Write tool for ExternallyDefinedCurveFont)#");
    py::class_<RWStepVisual_RWFillAreaStyle , shared_ptr<RWStepVisual_RWFillAreaStyle> >(m,"RWStepVisual_RWFillAreaStyle",R"#(Read & Write Module for FillAreaStyle)#");
    py::class_<RWStepVisual_RWFillAreaStyleColour , shared_ptr<RWStepVisual_RWFillAreaStyleColour> >(m,"RWStepVisual_RWFillAreaStyleColour",R"#(Read & Write Module for FillAreaStyleColour)#");
    py::class_<RWStepVisual_RWInvisibility , shared_ptr<RWStepVisual_RWInvisibility> >(m,"RWStepVisual_RWInvisibility",R"#(Read & Write Module for Invisibility)#");
    py::class_<RWStepVisual_RWMechanicalDesignGeometricPresentationArea , shared_ptr<RWStepVisual_RWMechanicalDesignGeometricPresentationArea> >(m,"RWStepVisual_RWMechanicalDesignGeometricPresentationArea",R"#(Read & Write Module for MechanicalDesignGeometricPresentationArea)#");
    py::class_<RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation , shared_ptr<RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation> >(m,"RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation",R"#(Read & Write Module for MechanicalDesignGeometricPresentationRepresentation)#");
    py::class_<RWStepVisual_RWOverRidingStyledItem , shared_ptr<RWStepVisual_RWOverRidingStyledItem> >(m,"RWStepVisual_RWOverRidingStyledItem",R"#(Read & Write Module for OverRidingStyledItem)#");
    py::class_<RWStepVisual_RWPlanarBox , shared_ptr<RWStepVisual_RWPlanarBox> >(m,"RWStepVisual_RWPlanarBox",R"#(Read & Write Module for PlanarBox)#");
    py::class_<RWStepVisual_RWPlanarExtent , shared_ptr<RWStepVisual_RWPlanarExtent> >(m,"RWStepVisual_RWPlanarExtent",R"#(Read & Write Module for PlanarExtent)#");
    py::class_<RWStepVisual_RWPointStyle , shared_ptr<RWStepVisual_RWPointStyle> >(m,"RWStepVisual_RWPointStyle",R"#(Read & Write Module for PointStyle)#");
    py::class_<RWStepVisual_RWPreDefinedColour , shared_ptr<RWStepVisual_RWPreDefinedColour> >(m,"RWStepVisual_RWPreDefinedColour",R"#(Read & Write Module for PreDefinedColour)#");
    py::class_<RWStepVisual_RWPreDefinedCurveFont , shared_ptr<RWStepVisual_RWPreDefinedCurveFont> >(m,"RWStepVisual_RWPreDefinedCurveFont",R"#(Read & Write Module for PreDefinedCurveFont)#");
    py::class_<RWStepVisual_RWPreDefinedItem , shared_ptr<RWStepVisual_RWPreDefinedItem> >(m,"RWStepVisual_RWPreDefinedItem",R"#(Read & Write Module for PreDefinedItem)#");
    py::class_<RWStepVisual_RWPresentationArea , shared_ptr<RWStepVisual_RWPresentationArea> >(m,"RWStepVisual_RWPresentationArea",R"#(Read & Write Module for PresentationArea)#");
    py::class_<RWStepVisual_RWPresentationLayerAssignment , shared_ptr<RWStepVisual_RWPresentationLayerAssignment> >(m,"RWStepVisual_RWPresentationLayerAssignment",R"#(Read & Write Module for PresentationLayerAssignment)#");
    py::class_<RWStepVisual_RWPresentationLayerUsage , shared_ptr<RWStepVisual_RWPresentationLayerUsage> >(m,"RWStepVisual_RWPresentationLayerUsage",R"#(Read & Write Module for PresentationLayerUsage)#");
    py::class_<RWStepVisual_RWPresentationRepresentation , shared_ptr<RWStepVisual_RWPresentationRepresentation> >(m,"RWStepVisual_RWPresentationRepresentation",R"#(Read & Write Module for PresentationRepresentation)#");
    py::class_<RWStepVisual_RWPresentationSet , shared_ptr<RWStepVisual_RWPresentationSet> >(m,"RWStepVisual_RWPresentationSet",R"#(Read & Write Module for PresentationSet)#");
    py::class_<RWStepVisual_RWPresentationSize , shared_ptr<RWStepVisual_RWPresentationSize> >(m,"RWStepVisual_RWPresentationSize",R"#(Read & Write Module for PresentationSize)#");
    py::class_<RWStepVisual_RWPresentationStyleAssignment , shared_ptr<RWStepVisual_RWPresentationStyleAssignment> >(m,"RWStepVisual_RWPresentationStyleAssignment",R"#(Read & Write Module for PresentationStyleAssignment)#");
    py::class_<RWStepVisual_RWPresentationStyleByContext , shared_ptr<RWStepVisual_RWPresentationStyleByContext> >(m,"RWStepVisual_RWPresentationStyleByContext",R"#(Read & Write Module for PresentationStyleByContext)#");
    py::class_<RWStepVisual_RWPresentationView , shared_ptr<RWStepVisual_RWPresentationView> >(m,"RWStepVisual_RWPresentationView",R"#(Read & Write Module for PresentationView)#");
    py::class_<RWStepVisual_RWPresentedItemRepresentation , shared_ptr<RWStepVisual_RWPresentedItemRepresentation> >(m,"RWStepVisual_RWPresentedItemRepresentation",R"#(Read & Write Module for PresentedItemRepresentation)#");
    py::class_<RWStepVisual_RWStyledItem , shared_ptr<RWStepVisual_RWStyledItem> >(m,"RWStepVisual_RWStyledItem",R"#(Read & Write Module for StyledItem)#");
    py::class_<RWStepVisual_RWSurfaceSideStyle , shared_ptr<RWStepVisual_RWSurfaceSideStyle> >(m,"RWStepVisual_RWSurfaceSideStyle",R"#(Read & Write Module for SurfaceSideStyle)#");
    py::class_<RWStepVisual_RWSurfaceStyleBoundary , shared_ptr<RWStepVisual_RWSurfaceStyleBoundary> >(m,"RWStepVisual_RWSurfaceStyleBoundary",R"#(Read & Write Module for SurfaceStyleBoundary)#");
    py::class_<RWStepVisual_RWSurfaceStyleControlGrid , shared_ptr<RWStepVisual_RWSurfaceStyleControlGrid> >(m,"RWStepVisual_RWSurfaceStyleControlGrid",R"#(Read & Write Module for SurfaceStyleControlGrid)#");
    py::class_<RWStepVisual_RWSurfaceStyleFillArea , shared_ptr<RWStepVisual_RWSurfaceStyleFillArea> >(m,"RWStepVisual_RWSurfaceStyleFillArea",R"#(Read & Write Module for SurfaceStyleFillArea)#");
    py::class_<RWStepVisual_RWSurfaceStyleParameterLine , shared_ptr<RWStepVisual_RWSurfaceStyleParameterLine> >(m,"RWStepVisual_RWSurfaceStyleParameterLine",R"#(Read & Write Module for SurfaceStyleParameterLine)#");
    py::class_<RWStepVisual_RWSurfaceStyleSegmentationCurve , shared_ptr<RWStepVisual_RWSurfaceStyleSegmentationCurve> >(m,"RWStepVisual_RWSurfaceStyleSegmentationCurve",R"#(Read & Write Module for SurfaceStyleSegmentationCurve)#");
    py::class_<RWStepVisual_RWSurfaceStyleSilhouette , shared_ptr<RWStepVisual_RWSurfaceStyleSilhouette> >(m,"RWStepVisual_RWSurfaceStyleSilhouette",R"#(Read & Write Module for SurfaceStyleSilhouette)#");
    py::class_<RWStepVisual_RWSurfaceStyleUsage , shared_ptr<RWStepVisual_RWSurfaceStyleUsage> >(m,"RWStepVisual_RWSurfaceStyleUsage",R"#(Read & Write Module for SurfaceStyleUsage)#");
    py::class_<RWStepVisual_RWTemplate , shared_ptr<RWStepVisual_RWTemplate> >(m,"RWStepVisual_RWTemplate",R"#(Read & Write Module for Template)#");
    py::class_<RWStepVisual_RWTemplateInstance , shared_ptr<RWStepVisual_RWTemplateInstance> >(m,"RWStepVisual_RWTemplateInstance",R"#(Read & Write Module for TemplateInstance)#");
    py::class_<RWStepVisual_RWTessellatedAnnotationOccurrence , shared_ptr<RWStepVisual_RWTessellatedAnnotationOccurrence> >(m,"RWStepVisual_RWTessellatedAnnotationOccurrence",R"#(Read & Write Module for AnnotationOccurrence)#");
    py::class_<RWStepVisual_RWTessellatedCurveSet , shared_ptr<RWStepVisual_RWTessellatedCurveSet> >(m,"RWStepVisual_RWTessellatedCurveSet",R"#(Read & Write Module for AnnotationOccurrence)#");
    py::class_<RWStepVisual_RWTessellatedGeometricSet , shared_ptr<RWStepVisual_RWTessellatedGeometricSet> >(m,"RWStepVisual_RWTessellatedGeometricSet",R"#(Read & Write Module for AnnotationOccurrence)#");
    py::class_<RWStepVisual_RWTessellatedItem , shared_ptr<RWStepVisual_RWTessellatedItem> >(m,"RWStepVisual_RWTessellatedItem",R"#(Read & Write Module for AnnotationOccurrence)#");
    py::class_<RWStepVisual_RWTextLiteral , shared_ptr<RWStepVisual_RWTextLiteral> >(m,"RWStepVisual_RWTextLiteral",R"#(Read & Write Module for TextLiteral)#");
    py::class_<RWStepVisual_RWTextStyle , shared_ptr<RWStepVisual_RWTextStyle> >(m,"RWStepVisual_RWTextStyle",R"#(Read & Write Module for TextStyle)#");
    py::class_<RWStepVisual_RWTextStyleForDefinedFont , shared_ptr<RWStepVisual_RWTextStyleForDefinedFont> >(m,"RWStepVisual_RWTextStyleForDefinedFont",R"#(Read & Write Module for TextStyleForDefinedFont)#");
    py::class_<RWStepVisual_RWTextStyleWithBoxCharacteristics , shared_ptr<RWStepVisual_RWTextStyleWithBoxCharacteristics> >(m,"RWStepVisual_RWTextStyleWithBoxCharacteristics",R"#(Read & Write Module for TextStyleWithBoxCharacteristics)#");
    py::class_<RWStepVisual_RWViewVolume , shared_ptr<RWStepVisual_RWViewVolume> >(m,"RWStepVisual_RWViewVolume",R"#(Read & Write Module for ViewVolume)#");

};

// user-defined post-inclusion per module

// user-defined post
