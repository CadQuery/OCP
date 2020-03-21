
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
#include <StepVisual_ExternallyDefinedCurveFont.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_OverRidingStyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TessellatedAnnotationOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_BackgroundColour.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AreaInSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingPreDefinedColour.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TessellatedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CurveStyleFont.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentedItemRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleBoundary.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3MultiClippingIntersection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_Template.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PointStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PreDefinedColour.hxx>
#include <StepData_StepWriter.hxx>
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
#include <StepVisual_CurveStyleFontPattern.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CompositeTextWithExtent.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ColourRgb.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationFillAreaOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextStyleWithBoxCharacteristics.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3MultiClipping.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraImage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TessellatedGeometricSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleParameterLine.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingCallout.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ContextDependentInvisibility.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationLayerUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_FillAreaStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModel.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TemplateInstance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationStyleByContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextLiteral.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CompositeText.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ContextDependentOverRidingStyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_FillAreaStyleColour.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleSilhouette.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationSize.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ColourSpecification.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingPreDefinedCurveFont.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationFillArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceSideStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PreDefinedCurveFont.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleFillArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_Invisibility.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD2.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleControlGrid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_Colour.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PreDefinedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PlanarExtent.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationCurveOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleSegmentationCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

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
void register_RWStepVisual(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepVisual"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepVisual_RWAnnotationCurveOccurrence , shared_ptr<RWStepVisual_RWAnnotationCurveOccurrence> >>(m.attr("RWStepVisual_RWAnnotationCurveOccurrence"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem , shared_ptr<RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem> >>(m.attr("RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAnnotationFillArea , shared_ptr<RWStepVisual_RWAnnotationFillArea> >>(m.attr("RWStepVisual_RWAnnotationFillArea"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAnnotationFillAreaOccurrence , shared_ptr<RWStepVisual_RWAnnotationFillAreaOccurrence> >>(m.attr("RWStepVisual_RWAnnotationFillAreaOccurrence"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAnnotationOccurrence , shared_ptr<RWStepVisual_RWAnnotationOccurrence> >>(m.attr("RWStepVisual_RWAnnotationOccurrence"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAnnotationPlane , shared_ptr<RWStepVisual_RWAnnotationPlane> >>(m.attr("RWStepVisual_RWAnnotationPlane"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAreaInSet , shared_ptr<RWStepVisual_RWAreaInSet> >>(m.attr("RWStepVisual_RWAreaInSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWBackgroundColour , shared_ptr<RWStepVisual_RWBackgroundColour> >>(m.attr("RWStepVisual_RWBackgroundColour"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraImage , shared_ptr<RWStepVisual_RWCameraImage> >>(m.attr("RWStepVisual_RWCameraImage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModel , shared_ptr<RWStepVisual_RWCameraModel> >>(m.attr("RWStepVisual_RWCameraModel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModelD2 , shared_ptr<RWStepVisual_RWCameraModelD2> >>(m.attr("RWStepVisual_RWCameraModelD2"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModelD3 , shared_ptr<RWStepVisual_RWCameraModelD3> >>(m.attr("RWStepVisual_RWCameraModelD3"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModelD3MultiClipping , shared_ptr<RWStepVisual_RWCameraModelD3MultiClipping> >>(m.attr("RWStepVisual_RWCameraModelD3MultiClipping"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModelD3MultiClippingIntersection , shared_ptr<RWStepVisual_RWCameraModelD3MultiClippingIntersection> >>(m.attr("RWStepVisual_RWCameraModelD3MultiClippingIntersection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModelD3MultiClippingUnion , shared_ptr<RWStepVisual_RWCameraModelD3MultiClippingUnion> >>(m.attr("RWStepVisual_RWCameraModelD3MultiClippingUnion"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraUsage , shared_ptr<RWStepVisual_RWCameraUsage> >>(m.attr("RWStepVisual_RWCameraUsage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation , shared_ptr<RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation> >>(m.attr("RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWColour , shared_ptr<RWStepVisual_RWColour> >>(m.attr("RWStepVisual_RWColour"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWColourRgb , shared_ptr<RWStepVisual_RWColourRgb> >>(m.attr("RWStepVisual_RWColourRgb"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWColourSpecification , shared_ptr<RWStepVisual_RWColourSpecification> >>(m.attr("RWStepVisual_RWColourSpecification"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCompositeText , shared_ptr<RWStepVisual_RWCompositeText> >>(m.attr("RWStepVisual_RWCompositeText"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCompositeTextWithExtent , shared_ptr<RWStepVisual_RWCompositeTextWithExtent> >>(m.attr("RWStepVisual_RWCompositeTextWithExtent"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWContextDependentInvisibility , shared_ptr<RWStepVisual_RWContextDependentInvisibility> >>(m.attr("RWStepVisual_RWContextDependentInvisibility"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWContextDependentOverRidingStyledItem , shared_ptr<RWStepVisual_RWContextDependentOverRidingStyledItem> >>(m.attr("RWStepVisual_RWContextDependentOverRidingStyledItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCoordinatesList , shared_ptr<RWStepVisual_RWCoordinatesList> >>(m.attr("RWStepVisual_RWCoordinatesList"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCurveStyle , shared_ptr<RWStepVisual_RWCurveStyle> >>(m.attr("RWStepVisual_RWCurveStyle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCurveStyleFont , shared_ptr<RWStepVisual_RWCurveStyleFont> >>(m.attr("RWStepVisual_RWCurveStyleFont"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCurveStyleFontPattern , shared_ptr<RWStepVisual_RWCurveStyleFontPattern> >>(m.attr("RWStepVisual_RWCurveStyleFontPattern"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWDraughtingCallout , shared_ptr<RWStepVisual_RWDraughtingCallout> >>(m.attr("RWStepVisual_RWDraughtingCallout"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWDraughtingModel , shared_ptr<RWStepVisual_RWDraughtingModel> >>(m.attr("RWStepVisual_RWDraughtingModel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWDraughtingPreDefinedColour , shared_ptr<RWStepVisual_RWDraughtingPreDefinedColour> >>(m.attr("RWStepVisual_RWDraughtingPreDefinedColour"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWDraughtingPreDefinedCurveFont , shared_ptr<RWStepVisual_RWDraughtingPreDefinedCurveFont> >>(m.attr("RWStepVisual_RWDraughtingPreDefinedCurveFont"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWExternallyDefinedCurveFont , shared_ptr<RWStepVisual_RWExternallyDefinedCurveFont> >>(m.attr("RWStepVisual_RWExternallyDefinedCurveFont"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWFillAreaStyle , shared_ptr<RWStepVisual_RWFillAreaStyle> >>(m.attr("RWStepVisual_RWFillAreaStyle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWFillAreaStyleColour , shared_ptr<RWStepVisual_RWFillAreaStyleColour> >>(m.attr("RWStepVisual_RWFillAreaStyleColour"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWInvisibility , shared_ptr<RWStepVisual_RWInvisibility> >>(m.attr("RWStepVisual_RWInvisibility"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWMechanicalDesignGeometricPresentationArea , shared_ptr<RWStepVisual_RWMechanicalDesignGeometricPresentationArea> >>(m.attr("RWStepVisual_RWMechanicalDesignGeometricPresentationArea"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation , shared_ptr<RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation> >>(m.attr("RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWOverRidingStyledItem , shared_ptr<RWStepVisual_RWOverRidingStyledItem> >>(m.attr("RWStepVisual_RWOverRidingStyledItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPlanarBox , shared_ptr<RWStepVisual_RWPlanarBox> >>(m.attr("RWStepVisual_RWPlanarBox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPlanarExtent , shared_ptr<RWStepVisual_RWPlanarExtent> >>(m.attr("RWStepVisual_RWPlanarExtent"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPointStyle , shared_ptr<RWStepVisual_RWPointStyle> >>(m.attr("RWStepVisual_RWPointStyle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPreDefinedColour , shared_ptr<RWStepVisual_RWPreDefinedColour> >>(m.attr("RWStepVisual_RWPreDefinedColour"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPreDefinedCurveFont , shared_ptr<RWStepVisual_RWPreDefinedCurveFont> >>(m.attr("RWStepVisual_RWPreDefinedCurveFont"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPreDefinedItem , shared_ptr<RWStepVisual_RWPreDefinedItem> >>(m.attr("RWStepVisual_RWPreDefinedItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationArea , shared_ptr<RWStepVisual_RWPresentationArea> >>(m.attr("RWStepVisual_RWPresentationArea"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationLayerAssignment , shared_ptr<RWStepVisual_RWPresentationLayerAssignment> >>(m.attr("RWStepVisual_RWPresentationLayerAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationLayerUsage , shared_ptr<RWStepVisual_RWPresentationLayerUsage> >>(m.attr("RWStepVisual_RWPresentationLayerUsage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationRepresentation , shared_ptr<RWStepVisual_RWPresentationRepresentation> >>(m.attr("RWStepVisual_RWPresentationRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationSet , shared_ptr<RWStepVisual_RWPresentationSet> >>(m.attr("RWStepVisual_RWPresentationSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationSize , shared_ptr<RWStepVisual_RWPresentationSize> >>(m.attr("RWStepVisual_RWPresentationSize"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationStyleAssignment , shared_ptr<RWStepVisual_RWPresentationStyleAssignment> >>(m.attr("RWStepVisual_RWPresentationStyleAssignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationStyleByContext , shared_ptr<RWStepVisual_RWPresentationStyleByContext> >>(m.attr("RWStepVisual_RWPresentationStyleByContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationView , shared_ptr<RWStepVisual_RWPresentationView> >>(m.attr("RWStepVisual_RWPresentationView"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentedItemRepresentation , shared_ptr<RWStepVisual_RWPresentedItemRepresentation> >>(m.attr("RWStepVisual_RWPresentedItemRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWStyledItem , shared_ptr<RWStepVisual_RWStyledItem> >>(m.attr("RWStepVisual_RWStyledItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceSideStyle , shared_ptr<RWStepVisual_RWSurfaceSideStyle> >>(m.attr("RWStepVisual_RWSurfaceSideStyle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleBoundary , shared_ptr<RWStepVisual_RWSurfaceStyleBoundary> >>(m.attr("RWStepVisual_RWSurfaceStyleBoundary"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleControlGrid , shared_ptr<RWStepVisual_RWSurfaceStyleControlGrid> >>(m.attr("RWStepVisual_RWSurfaceStyleControlGrid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleFillArea , shared_ptr<RWStepVisual_RWSurfaceStyleFillArea> >>(m.attr("RWStepVisual_RWSurfaceStyleFillArea"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleParameterLine , shared_ptr<RWStepVisual_RWSurfaceStyleParameterLine> >>(m.attr("RWStepVisual_RWSurfaceStyleParameterLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleSegmentationCurve , shared_ptr<RWStepVisual_RWSurfaceStyleSegmentationCurve> >>(m.attr("RWStepVisual_RWSurfaceStyleSegmentationCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleSilhouette , shared_ptr<RWStepVisual_RWSurfaceStyleSilhouette> >>(m.attr("RWStepVisual_RWSurfaceStyleSilhouette"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleUsage , shared_ptr<RWStepVisual_RWSurfaceStyleUsage> >>(m.attr("RWStepVisual_RWSurfaceStyleUsage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTemplate , shared_ptr<RWStepVisual_RWTemplate> >>(m.attr("RWStepVisual_RWTemplate"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTemplateInstance , shared_ptr<RWStepVisual_RWTemplateInstance> >>(m.attr("RWStepVisual_RWTemplateInstance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTessellatedAnnotationOccurrence , shared_ptr<RWStepVisual_RWTessellatedAnnotationOccurrence> >>(m.attr("RWStepVisual_RWTessellatedAnnotationOccurrence"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTessellatedCurveSet , shared_ptr<RWStepVisual_RWTessellatedCurveSet> >>(m.attr("RWStepVisual_RWTessellatedCurveSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTessellatedGeometricSet , shared_ptr<RWStepVisual_RWTessellatedGeometricSet> >>(m.attr("RWStepVisual_RWTessellatedGeometricSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTessellatedItem , shared_ptr<RWStepVisual_RWTessellatedItem> >>(m.attr("RWStepVisual_RWTessellatedItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTextLiteral , shared_ptr<RWStepVisual_RWTextLiteral> >>(m.attr("RWStepVisual_RWTextLiteral"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTextStyle , shared_ptr<RWStepVisual_RWTextStyle> >>(m.attr("RWStepVisual_RWTextStyle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTextStyleForDefinedFont , shared_ptr<RWStepVisual_RWTextStyleForDefinedFont> >>(m.attr("RWStepVisual_RWTextStyleForDefinedFont"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTextStyleWithBoxCharacteristics , shared_ptr<RWStepVisual_RWTextStyleWithBoxCharacteristics> >>(m.attr("RWStepVisual_RWTextStyleWithBoxCharacteristics"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWViewVolume , shared_ptr<RWStepVisual_RWViewVolume> >>(m.attr("RWStepVisual_RWViewVolume"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/RWStepVisual_RWExternallyDefinedCurveFont.hxx
// ./opencascade/RWStepVisual_RWOverRidingStyledItem.hxx
// ./opencascade/RWStepVisual_RWPresentationRepresentation.hxx
// ./opencascade/RWStepVisual_RWTessellatedAnnotationOccurrence.hxx
// ./opencascade/RWStepVisual_RWBackgroundColour.hxx
// ./opencascade/RWStepVisual_RWAreaInSet.hxx
// ./opencascade/RWStepVisual_RWDraughtingPreDefinedColour.hxx
// ./opencascade/RWStepVisual_RWTextStyleForDefinedFont.hxx
// ./opencascade/RWStepVisual_RWTessellatedItem.hxx
// ./opencascade/RWStepVisual_RWCurveStyleFont.hxx
// ./opencascade/RWStepVisual_RWPresentedItemRepresentation.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleBoundary.hxx
// ./opencascade/RWStepVisual_RWCameraModelD3MultiClippingIntersection.hxx
// ./opencascade/RWStepVisual_RWTextStyle.hxx
// ./opencascade/RWStepVisual_RWDraughtingModel.hxx
// ./opencascade/RWStepVisual_RWTemplate.hxx
// ./opencascade/RWStepVisual_RWPointStyle.hxx
// ./opencascade/RWStepVisual_RWPreDefinedColour.hxx
// ./opencascade/RWStepVisual_RWCameraUsage.hxx
// ./opencascade/RWStepVisual_RWAnnotationPlane.hxx
// ./opencascade/RWStepVisual_RWCurveStyleFontPattern.hxx
// ./opencascade/RWStepVisual_RWCompositeTextWithExtent.hxx
// ./opencascade/RWStepVisual_RWColourRgb.hxx
// ./opencascade/RWStepVisual_RWAnnotationFillAreaOccurrence.hxx
// ./opencascade/RWStepVisual_RWTextStyleWithBoxCharacteristics.hxx
// ./opencascade/RWStepVisual_RWCameraModelD3MultiClipping.hxx
// ./opencascade/RWStepVisual_RWCameraImage.hxx
// ./opencascade/RWStepVisual_RWTessellatedGeometricSet.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleParameterLine.hxx
// ./opencascade/RWStepVisual_RWDraughtingCallout.hxx
// ./opencascade/RWStepVisual_RWContextDependentInvisibility.hxx
// ./opencascade/RWStepVisual_RWCameraModelD3.hxx
// ./opencascade/RWStepVisual_RWPresentationLayerUsage.hxx
// ./opencascade/RWStepVisual_RWFillAreaStyle.hxx
// ./opencascade/RWStepVisual_RWPresentationView.hxx
// ./opencascade/RWStepVisual_RWAnnotationOccurrence.hxx
// ./opencascade/RWStepVisual_RWCameraModel.hxx
// ./opencascade/RWStepVisual_RWTemplateInstance.hxx
// ./opencascade/RWStepVisual_RWPresentationStyleAssignment.hxx
// ./opencascade/RWStepVisual_RWViewVolume.hxx
// ./opencascade/RWStepVisual_RWPresentationStyleByContext.hxx
// ./opencascade/RWStepVisual_RWPlanarBox.hxx
// ./opencascade/RWStepVisual_RWTextLiteral.hxx
// ./opencascade/RWStepVisual_RWCompositeText.hxx
// ./opencascade/RWStepVisual_RWContextDependentOverRidingStyledItem.hxx
// ./opencascade/RWStepVisual_RWMechanicalDesignGeometricPresentationArea.hxx
// ./opencascade/RWStepVisual_RWFillAreaStyleColour.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleSilhouette.hxx
// ./opencascade/RWStepVisual_RWCameraModelD3MultiClippingUnion.hxx
// ./opencascade/RWStepVisual_RWPresentationSet.hxx
// ./opencascade/RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation.hxx
// ./opencascade/RWStepVisual_RWPresentationSize.hxx
// ./opencascade/RWStepVisual_RWColourSpecification.hxx
// ./opencascade/RWStepVisual_RWDraughtingPreDefinedCurveFont.hxx
// ./opencascade/RWStepVisual_RWAnnotationFillArea.hxx
// ./opencascade/RWStepVisual_RWSurfaceSideStyle.hxx
// ./opencascade/RWStepVisual_RWPreDefinedCurveFont.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleFillArea.hxx
// ./opencascade/RWStepVisual_RWPresentationArea.hxx
// ./opencascade/RWStepVisual_RWInvisibility.hxx
// ./opencascade/RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation.hxx
// ./opencascade/RWStepVisual_RWCameraModelD2.hxx
// ./opencascade/RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleControlGrid.hxx
// ./opencascade/RWStepVisual_RWPresentationLayerAssignment.hxx
// ./opencascade/RWStepVisual_RWCoordinatesList.hxx
// ./opencascade/RWStepVisual_RWColour.hxx
// ./opencascade/RWStepVisual_RWCurveStyle.hxx
// ./opencascade/RWStepVisual_RWPreDefinedItem.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleUsage.hxx
// ./opencascade/RWStepVisual_RWPlanarExtent.hxx
// ./opencascade/RWStepVisual_RWStyledItem.hxx
// ./opencascade/RWStepVisual_RWAnnotationCurveOccurrence.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleSegmentationCurve.hxx
// ./opencascade/RWStepVisual_RWTessellatedCurveSet.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
