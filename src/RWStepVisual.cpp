
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
#include <StepVisual_DraughtingModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_OverRidingStyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextStyle.hxx>
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
#include <StepVisual_CurveStyleFontPattern.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleBoundary.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PreDefinedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3MultiClipping.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleFillArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationFillArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleSegmentationCurve.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextLiteral.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AreaInSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CurveStyleFont.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_FillAreaStyleColour.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingPreDefinedCurveFont.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingCallout.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleControlGrid.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD3MultiClippingIntersection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CompositeTextWithExtent.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TessellatedGeometricSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationSize.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModel.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_Invisibility.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TessellatedAnnotationOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PlanarExtent.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ExternallyDefinedCurveFont.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ContextDependentInvisibility.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentedItemRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ColourRgb.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraImage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_FillAreaStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraModelD2.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationPlane.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingPreDefinedColour.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationCurveOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ContextDependentOverRidingStyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TemplateInstance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextStyleWithBoxCharacteristics.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationFillAreaOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceSideStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationStyleByContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PreDefinedColour.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_Template.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CompositeText.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_CameraUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TessellatedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_ColourSpecification.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationLayerUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleParameterLine.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_BackgroundColour.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PointStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_SurfaceStyleSilhouette.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PreDefinedCurveFont.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_PlanarBox.hxx>
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


    static_cast<py::class_<RWStepVisual_RWAnnotationCurveOccurrence , shared_ptr<RWStepVisual_RWAnnotationCurveOccurrence>  >>(m.attr("RWStepVisual_RWAnnotationCurveOccurrence"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWAnnotationCurveOccurrence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationCurveOccurrence> &  ) const) static_cast<void (RWStepVisual_RWAnnotationCurveOccurrence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationCurveOccurrence> &  ) const>(&RWStepVisual_RWAnnotationCurveOccurrence::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWAnnotationCurveOccurrence::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationCurveOccurrence> &  ) const) static_cast<void (RWStepVisual_RWAnnotationCurveOccurrence::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationCurveOccurrence> &  ) const>(&RWStepVisual_RWAnnotationCurveOccurrence::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWAnnotationCurveOccurrence::*)( const opencascade::handle<StepVisual_AnnotationCurveOccurrence> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWAnnotationCurveOccurrence::*)( const opencascade::handle<StepVisual_AnnotationCurveOccurrence> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWAnnotationCurveOccurrence::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem , shared_ptr<RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem>  >>(m.attr("RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem> &  ) const) static_cast<void (RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem> &  ) const>(&RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem> &  ) const) static_cast<void (RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem> &  ) const>(&RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::*)( const opencascade::handle<StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::*)( const opencascade::handle<StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAnnotationFillArea , shared_ptr<RWStepVisual_RWAnnotationFillArea>  >>(m.attr("RWStepVisual_RWAnnotationFillArea"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWAnnotationFillArea::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationFillArea> &  ) const) static_cast<void (RWStepVisual_RWAnnotationFillArea::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationFillArea> &  ) const>(&RWStepVisual_RWAnnotationFillArea::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWAnnotationFillArea::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationFillArea> &  ) const) static_cast<void (RWStepVisual_RWAnnotationFillArea::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationFillArea> &  ) const>(&RWStepVisual_RWAnnotationFillArea::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWAnnotationFillArea::*)( const opencascade::handle<StepVisual_AnnotationFillArea> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWAnnotationFillArea::*)( const opencascade::handle<StepVisual_AnnotationFillArea> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWAnnotationFillArea::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAnnotationFillAreaOccurrence , shared_ptr<RWStepVisual_RWAnnotationFillAreaOccurrence>  >>(m.attr("RWStepVisual_RWAnnotationFillAreaOccurrence"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWAnnotationFillAreaOccurrence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationFillAreaOccurrence> &  ) const) static_cast<void (RWStepVisual_RWAnnotationFillAreaOccurrence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationFillAreaOccurrence> &  ) const>(&RWStepVisual_RWAnnotationFillAreaOccurrence::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWAnnotationFillAreaOccurrence::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationFillAreaOccurrence> &  ) const) static_cast<void (RWStepVisual_RWAnnotationFillAreaOccurrence::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationFillAreaOccurrence> &  ) const>(&RWStepVisual_RWAnnotationFillAreaOccurrence::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWAnnotationFillAreaOccurrence::*)( const opencascade::handle<StepVisual_AnnotationFillAreaOccurrence> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWAnnotationFillAreaOccurrence::*)( const opencascade::handle<StepVisual_AnnotationFillAreaOccurrence> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWAnnotationFillAreaOccurrence::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAnnotationOccurrence , shared_ptr<RWStepVisual_RWAnnotationOccurrence>  >>(m.attr("RWStepVisual_RWAnnotationOccurrence"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWAnnotationOccurrence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationOccurrence> &  ) const) static_cast<void (RWStepVisual_RWAnnotationOccurrence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationOccurrence> &  ) const>(&RWStepVisual_RWAnnotationOccurrence::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWAnnotationOccurrence::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationOccurrence> &  ) const) static_cast<void (RWStepVisual_RWAnnotationOccurrence::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationOccurrence> &  ) const>(&RWStepVisual_RWAnnotationOccurrence::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWAnnotationOccurrence::*)( const opencascade::handle<StepVisual_AnnotationOccurrence> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWAnnotationOccurrence::*)( const opencascade::handle<StepVisual_AnnotationOccurrence> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWAnnotationOccurrence::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAnnotationPlane , shared_ptr<RWStepVisual_RWAnnotationPlane>  >>(m.attr("RWStepVisual_RWAnnotationPlane"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWAnnotationPlane::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationPlane> &  ) const) static_cast<void (RWStepVisual_RWAnnotationPlane::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AnnotationPlane> &  ) const>(&RWStepVisual_RWAnnotationPlane::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWAnnotationPlane::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationPlane> &  ) const) static_cast<void (RWStepVisual_RWAnnotationPlane::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AnnotationPlane> &  ) const>(&RWStepVisual_RWAnnotationPlane::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWAnnotationPlane::*)( const opencascade::handle<StepVisual_AnnotationPlane> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWAnnotationPlane::*)( const opencascade::handle<StepVisual_AnnotationPlane> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWAnnotationPlane::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWAreaInSet , shared_ptr<RWStepVisual_RWAreaInSet>  >>(m.attr("RWStepVisual_RWAreaInSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWAreaInSet::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AreaInSet> &  ) const) static_cast<void (RWStepVisual_RWAreaInSet::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_AreaInSet> &  ) const>(&RWStepVisual_RWAreaInSet::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWAreaInSet::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AreaInSet> &  ) const) static_cast<void (RWStepVisual_RWAreaInSet::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_AreaInSet> &  ) const>(&RWStepVisual_RWAreaInSet::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWAreaInSet::*)( const opencascade::handle<StepVisual_AreaInSet> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWAreaInSet::*)( const opencascade::handle<StepVisual_AreaInSet> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWAreaInSet::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWBackgroundColour , shared_ptr<RWStepVisual_RWBackgroundColour>  >>(m.attr("RWStepVisual_RWBackgroundColour"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWBackgroundColour::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_BackgroundColour> &  ) const) static_cast<void (RWStepVisual_RWBackgroundColour::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_BackgroundColour> &  ) const>(&RWStepVisual_RWBackgroundColour::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWBackgroundColour::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_BackgroundColour> &  ) const) static_cast<void (RWStepVisual_RWBackgroundColour::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_BackgroundColour> &  ) const>(&RWStepVisual_RWBackgroundColour::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWBackgroundColour::*)( const opencascade::handle<StepVisual_BackgroundColour> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWBackgroundColour::*)( const opencascade::handle<StepVisual_BackgroundColour> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWBackgroundColour::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraImage , shared_ptr<RWStepVisual_RWCameraImage>  >>(m.attr("RWStepVisual_RWCameraImage"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCameraImage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraImage> &  ) const) static_cast<void (RWStepVisual_RWCameraImage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraImage> &  ) const>(&RWStepVisual_RWCameraImage::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCameraImage::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraImage> &  ) const) static_cast<void (RWStepVisual_RWCameraImage::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraImage> &  ) const>(&RWStepVisual_RWCameraImage::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCameraImage::*)( const opencascade::handle<StepVisual_CameraImage> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCameraImage::*)( const opencascade::handle<StepVisual_CameraImage> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCameraImage::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModel , shared_ptr<RWStepVisual_RWCameraModel>  >>(m.attr("RWStepVisual_RWCameraModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCameraModel::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModel> &  ) const) static_cast<void (RWStepVisual_RWCameraModel::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModel> &  ) const>(&RWStepVisual_RWCameraModel::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCameraModel::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModel> &  ) const) static_cast<void (RWStepVisual_RWCameraModel::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModel> &  ) const>(&RWStepVisual_RWCameraModel::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModelD2 , shared_ptr<RWStepVisual_RWCameraModelD2>  >>(m.attr("RWStepVisual_RWCameraModelD2"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCameraModelD2::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModelD2> &  ) const) static_cast<void (RWStepVisual_RWCameraModelD2::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModelD2> &  ) const>(&RWStepVisual_RWCameraModelD2::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCameraModelD2::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModelD2> &  ) const) static_cast<void (RWStepVisual_RWCameraModelD2::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModelD2> &  ) const>(&RWStepVisual_RWCameraModelD2::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCameraModelD2::*)( const opencascade::handle<StepVisual_CameraModelD2> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCameraModelD2::*)( const opencascade::handle<StepVisual_CameraModelD2> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCameraModelD2::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModelD3 , shared_ptr<RWStepVisual_RWCameraModelD3>  >>(m.attr("RWStepVisual_RWCameraModelD3"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCameraModelD3::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModelD3> &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModelD3> &  ) const>(&RWStepVisual_RWCameraModelD3::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCameraModelD3::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModelD3> &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModelD3> &  ) const>(&RWStepVisual_RWCameraModelD3::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCameraModelD3::*)( const opencascade::handle<StepVisual_CameraModelD3> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3::*)( const opencascade::handle<StepVisual_CameraModelD3> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCameraModelD3::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModelD3MultiClipping , shared_ptr<RWStepVisual_RWCameraModelD3MultiClipping>  >>(m.attr("RWStepVisual_RWCameraModelD3MultiClipping"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCameraModelD3MultiClipping::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClipping> &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3MultiClipping::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClipping> &  ) const>(&RWStepVisual_RWCameraModelD3MultiClipping::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCameraModelD3MultiClipping::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClipping> &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3MultiClipping::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClipping> &  ) const>(&RWStepVisual_RWCameraModelD3MultiClipping::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCameraModelD3MultiClipping::*)( const opencascade::handle<StepVisual_CameraModelD3MultiClipping> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3MultiClipping::*)( const opencascade::handle<StepVisual_CameraModelD3MultiClipping> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCameraModelD3MultiClipping::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModelD3MultiClippingIntersection , shared_ptr<RWStepVisual_RWCameraModelD3MultiClippingIntersection>  >>(m.attr("RWStepVisual_RWCameraModelD3MultiClippingIntersection"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCameraModelD3MultiClippingIntersection::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClippingIntersection> &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3MultiClippingIntersection::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClippingIntersection> &  ) const>(&RWStepVisual_RWCameraModelD3MultiClippingIntersection::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCameraModelD3MultiClippingIntersection::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClippingIntersection> &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3MultiClippingIntersection::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClippingIntersection> &  ) const>(&RWStepVisual_RWCameraModelD3MultiClippingIntersection::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCameraModelD3MultiClippingIntersection::*)( const opencascade::handle<StepVisual_CameraModelD3MultiClippingIntersection> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3MultiClippingIntersection::*)( const opencascade::handle<StepVisual_CameraModelD3MultiClippingIntersection> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCameraModelD3MultiClippingIntersection::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraModelD3MultiClippingUnion , shared_ptr<RWStepVisual_RWCameraModelD3MultiClippingUnion>  >>(m.attr("RWStepVisual_RWCameraModelD3MultiClippingUnion"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCameraModelD3MultiClippingUnion::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClippingUnion> &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3MultiClippingUnion::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClippingUnion> &  ) const>(&RWStepVisual_RWCameraModelD3MultiClippingUnion::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCameraModelD3MultiClippingUnion::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClippingUnion> &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3MultiClippingUnion::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraModelD3MultiClippingUnion> &  ) const>(&RWStepVisual_RWCameraModelD3MultiClippingUnion::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCameraModelD3MultiClippingUnion::*)( const opencascade::handle<StepVisual_CameraModelD3MultiClippingUnion> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCameraModelD3MultiClippingUnion::*)( const opencascade::handle<StepVisual_CameraModelD3MultiClippingUnion> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCameraModelD3MultiClippingUnion::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCameraUsage , shared_ptr<RWStepVisual_RWCameraUsage>  >>(m.attr("RWStepVisual_RWCameraUsage"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCameraUsage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraUsage> &  ) const) static_cast<void (RWStepVisual_RWCameraUsage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CameraUsage> &  ) const>(&RWStepVisual_RWCameraUsage::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCameraUsage::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraUsage> &  ) const) static_cast<void (RWStepVisual_RWCameraUsage::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CameraUsage> &  ) const>(&RWStepVisual_RWCameraUsage::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCameraUsage::*)( const opencascade::handle<StepVisual_CameraUsage> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCameraUsage::*)( const opencascade::handle<StepVisual_CameraUsage> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCameraUsage::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation , shared_ptr<RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation>  >>(m.attr("RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation> &  ) const) static_cast<void (RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation> &  ) const>(&RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation> &  ) const) static_cast<void (RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation> &  ) const>(&RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::*)( const opencascade::handle<StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::*)( const opencascade::handle<StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWColour , shared_ptr<RWStepVisual_RWColour>  >>(m.attr("RWStepVisual_RWColour"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWColour::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_Colour> &  ) const) static_cast<void (RWStepVisual_RWColour::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_Colour> &  ) const>(&RWStepVisual_RWColour::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWColour::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_Colour> &  ) const) static_cast<void (RWStepVisual_RWColour::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_Colour> &  ) const>(&RWStepVisual_RWColour::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWColourRgb , shared_ptr<RWStepVisual_RWColourRgb>  >>(m.attr("RWStepVisual_RWColourRgb"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWColourRgb::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ColourRgb> &  ) const) static_cast<void (RWStepVisual_RWColourRgb::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ColourRgb> &  ) const>(&RWStepVisual_RWColourRgb::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWColourRgb::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ColourRgb> &  ) const) static_cast<void (RWStepVisual_RWColourRgb::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ColourRgb> &  ) const>(&RWStepVisual_RWColourRgb::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWColourSpecification , shared_ptr<RWStepVisual_RWColourSpecification>  >>(m.attr("RWStepVisual_RWColourSpecification"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWColourSpecification::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ColourSpecification> &  ) const) static_cast<void (RWStepVisual_RWColourSpecification::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ColourSpecification> &  ) const>(&RWStepVisual_RWColourSpecification::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWColourSpecification::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ColourSpecification> &  ) const) static_cast<void (RWStepVisual_RWColourSpecification::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ColourSpecification> &  ) const>(&RWStepVisual_RWColourSpecification::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCompositeText , shared_ptr<RWStepVisual_RWCompositeText>  >>(m.attr("RWStepVisual_RWCompositeText"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCompositeText::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CompositeText> &  ) const) static_cast<void (RWStepVisual_RWCompositeText::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CompositeText> &  ) const>(&RWStepVisual_RWCompositeText::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCompositeText::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CompositeText> &  ) const) static_cast<void (RWStepVisual_RWCompositeText::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CompositeText> &  ) const>(&RWStepVisual_RWCompositeText::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCompositeText::*)( const opencascade::handle<StepVisual_CompositeText> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCompositeText::*)( const opencascade::handle<StepVisual_CompositeText> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCompositeText::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCompositeTextWithExtent , shared_ptr<RWStepVisual_RWCompositeTextWithExtent>  >>(m.attr("RWStepVisual_RWCompositeTextWithExtent"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCompositeTextWithExtent::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CompositeTextWithExtent> &  ) const) static_cast<void (RWStepVisual_RWCompositeTextWithExtent::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CompositeTextWithExtent> &  ) const>(&RWStepVisual_RWCompositeTextWithExtent::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCompositeTextWithExtent::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CompositeTextWithExtent> &  ) const) static_cast<void (RWStepVisual_RWCompositeTextWithExtent::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CompositeTextWithExtent> &  ) const>(&RWStepVisual_RWCompositeTextWithExtent::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCompositeTextWithExtent::*)( const opencascade::handle<StepVisual_CompositeTextWithExtent> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCompositeTextWithExtent::*)( const opencascade::handle<StepVisual_CompositeTextWithExtent> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCompositeTextWithExtent::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWContextDependentInvisibility , shared_ptr<RWStepVisual_RWContextDependentInvisibility>  >>(m.attr("RWStepVisual_RWContextDependentInvisibility"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWContextDependentInvisibility::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ContextDependentInvisibility> &  ) const) static_cast<void (RWStepVisual_RWContextDependentInvisibility::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ContextDependentInvisibility> &  ) const>(&RWStepVisual_RWContextDependentInvisibility::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWContextDependentInvisibility::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ContextDependentInvisibility> &  ) const) static_cast<void (RWStepVisual_RWContextDependentInvisibility::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ContextDependentInvisibility> &  ) const>(&RWStepVisual_RWContextDependentInvisibility::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWContextDependentInvisibility::*)( const opencascade::handle<StepVisual_ContextDependentInvisibility> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWContextDependentInvisibility::*)( const opencascade::handle<StepVisual_ContextDependentInvisibility> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWContextDependentInvisibility::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWContextDependentOverRidingStyledItem , shared_ptr<RWStepVisual_RWContextDependentOverRidingStyledItem>  >>(m.attr("RWStepVisual_RWContextDependentOverRidingStyledItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWContextDependentOverRidingStyledItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ContextDependentOverRidingStyledItem> &  ) const) static_cast<void (RWStepVisual_RWContextDependentOverRidingStyledItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ContextDependentOverRidingStyledItem> &  ) const>(&RWStepVisual_RWContextDependentOverRidingStyledItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWContextDependentOverRidingStyledItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ContextDependentOverRidingStyledItem> &  ) const) static_cast<void (RWStepVisual_RWContextDependentOverRidingStyledItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ContextDependentOverRidingStyledItem> &  ) const>(&RWStepVisual_RWContextDependentOverRidingStyledItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWContextDependentOverRidingStyledItem::*)( const opencascade::handle<StepVisual_ContextDependentOverRidingStyledItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWContextDependentOverRidingStyledItem::*)( const opencascade::handle<StepVisual_ContextDependentOverRidingStyledItem> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWContextDependentOverRidingStyledItem::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCoordinatesList , shared_ptr<RWStepVisual_RWCoordinatesList>  >>(m.attr("RWStepVisual_RWCoordinatesList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCoordinatesList::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CoordinatesList> &  ) const) static_cast<void (RWStepVisual_RWCoordinatesList::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CoordinatesList> &  ) const>(&RWStepVisual_RWCoordinatesList::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCoordinatesList::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CoordinatesList> &  ) const) static_cast<void (RWStepVisual_RWCoordinatesList::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CoordinatesList> &  ) const>(&RWStepVisual_RWCoordinatesList::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCurveStyle , shared_ptr<RWStepVisual_RWCurveStyle>  >>(m.attr("RWStepVisual_RWCurveStyle"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCurveStyle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CurveStyle> &  ) const) static_cast<void (RWStepVisual_RWCurveStyle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CurveStyle> &  ) const>(&RWStepVisual_RWCurveStyle::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCurveStyle::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CurveStyle> &  ) const) static_cast<void (RWStepVisual_RWCurveStyle::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CurveStyle> &  ) const>(&RWStepVisual_RWCurveStyle::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCurveStyle::*)( const opencascade::handle<StepVisual_CurveStyle> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCurveStyle::*)( const opencascade::handle<StepVisual_CurveStyle> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCurveStyle::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCurveStyleFont , shared_ptr<RWStepVisual_RWCurveStyleFont>  >>(m.attr("RWStepVisual_RWCurveStyleFont"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCurveStyleFont::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CurveStyleFont> &  ) const) static_cast<void (RWStepVisual_RWCurveStyleFont::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CurveStyleFont> &  ) const>(&RWStepVisual_RWCurveStyleFont::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCurveStyleFont::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CurveStyleFont> &  ) const) static_cast<void (RWStepVisual_RWCurveStyleFont::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CurveStyleFont> &  ) const>(&RWStepVisual_RWCurveStyleFont::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWCurveStyleFont::*)( const opencascade::handle<StepVisual_CurveStyleFont> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWCurveStyleFont::*)( const opencascade::handle<StepVisual_CurveStyleFont> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWCurveStyleFont::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWCurveStyleFontPattern , shared_ptr<RWStepVisual_RWCurveStyleFontPattern>  >>(m.attr("RWStepVisual_RWCurveStyleFontPattern"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWCurveStyleFontPattern::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CurveStyleFontPattern> &  ) const) static_cast<void (RWStepVisual_RWCurveStyleFontPattern::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_CurveStyleFontPattern> &  ) const>(&RWStepVisual_RWCurveStyleFontPattern::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWCurveStyleFontPattern::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CurveStyleFontPattern> &  ) const) static_cast<void (RWStepVisual_RWCurveStyleFontPattern::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_CurveStyleFontPattern> &  ) const>(&RWStepVisual_RWCurveStyleFontPattern::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWDraughtingCallout , shared_ptr<RWStepVisual_RWDraughtingCallout>  >>(m.attr("RWStepVisual_RWDraughtingCallout"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWDraughtingCallout::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_DraughtingCallout> &  ) const) static_cast<void (RWStepVisual_RWDraughtingCallout::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_DraughtingCallout> &  ) const>(&RWStepVisual_RWDraughtingCallout::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWDraughtingCallout::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_DraughtingCallout> &  ) const) static_cast<void (RWStepVisual_RWDraughtingCallout::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_DraughtingCallout> &  ) const>(&RWStepVisual_RWDraughtingCallout::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWDraughtingCallout::*)( const opencascade::handle<StepVisual_DraughtingCallout> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWDraughtingCallout::*)( const opencascade::handle<StepVisual_DraughtingCallout> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWDraughtingCallout::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWDraughtingModel , shared_ptr<RWStepVisual_RWDraughtingModel>  >>(m.attr("RWStepVisual_RWDraughtingModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWDraughtingModel::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_DraughtingModel> &  ) const) static_cast<void (RWStepVisual_RWDraughtingModel::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_DraughtingModel> &  ) const>(&RWStepVisual_RWDraughtingModel::ReadStep),
             R"#(Reads DraughtingModel)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWDraughtingModel::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_DraughtingModel> &  ) const) static_cast<void (RWStepVisual_RWDraughtingModel::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_DraughtingModel> &  ) const>(&RWStepVisual_RWDraughtingModel::WriteStep),
             R"#(Writes DraughtingModel)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWDraughtingModel::*)( const opencascade::handle<StepVisual_DraughtingModel> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWDraughtingModel::*)( const opencascade::handle<StepVisual_DraughtingModel> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWDraughtingModel::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWDraughtingPreDefinedColour , shared_ptr<RWStepVisual_RWDraughtingPreDefinedColour>  >>(m.attr("RWStepVisual_RWDraughtingPreDefinedColour"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWDraughtingPreDefinedColour::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_DraughtingPreDefinedColour> &  ) const) static_cast<void (RWStepVisual_RWDraughtingPreDefinedColour::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_DraughtingPreDefinedColour> &  ) const>(&RWStepVisual_RWDraughtingPreDefinedColour::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWDraughtingPreDefinedColour::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_DraughtingPreDefinedColour> &  ) const) static_cast<void (RWStepVisual_RWDraughtingPreDefinedColour::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_DraughtingPreDefinedColour> &  ) const>(&RWStepVisual_RWDraughtingPreDefinedColour::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWDraughtingPreDefinedCurveFont , shared_ptr<RWStepVisual_RWDraughtingPreDefinedCurveFont>  >>(m.attr("RWStepVisual_RWDraughtingPreDefinedCurveFont"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWDraughtingPreDefinedCurveFont::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_DraughtingPreDefinedCurveFont> &  ) const) static_cast<void (RWStepVisual_RWDraughtingPreDefinedCurveFont::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_DraughtingPreDefinedCurveFont> &  ) const>(&RWStepVisual_RWDraughtingPreDefinedCurveFont::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWDraughtingPreDefinedCurveFont::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_DraughtingPreDefinedCurveFont> &  ) const) static_cast<void (RWStepVisual_RWDraughtingPreDefinedCurveFont::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_DraughtingPreDefinedCurveFont> &  ) const>(&RWStepVisual_RWDraughtingPreDefinedCurveFont::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWExternallyDefinedCurveFont , shared_ptr<RWStepVisual_RWExternallyDefinedCurveFont>  >>(m.attr("RWStepVisual_RWExternallyDefinedCurveFont"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWExternallyDefinedCurveFont::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ExternallyDefinedCurveFont> &  ) const) static_cast<void (RWStepVisual_RWExternallyDefinedCurveFont::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ExternallyDefinedCurveFont> &  ) const>(&RWStepVisual_RWExternallyDefinedCurveFont::ReadStep),
             R"#(Reads ExternallyDefinedCurveFont)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWExternallyDefinedCurveFont::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ExternallyDefinedCurveFont> &  ) const) static_cast<void (RWStepVisual_RWExternallyDefinedCurveFont::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ExternallyDefinedCurveFont> &  ) const>(&RWStepVisual_RWExternallyDefinedCurveFont::WriteStep),
             R"#(Writes ExternallyDefinedCurveFont)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWExternallyDefinedCurveFont::*)( const opencascade::handle<StepVisual_ExternallyDefinedCurveFont> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWExternallyDefinedCurveFont::*)( const opencascade::handle<StepVisual_ExternallyDefinedCurveFont> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWExternallyDefinedCurveFont::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWFillAreaStyle , shared_ptr<RWStepVisual_RWFillAreaStyle>  >>(m.attr("RWStepVisual_RWFillAreaStyle"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWFillAreaStyle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_FillAreaStyle> &  ) const) static_cast<void (RWStepVisual_RWFillAreaStyle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_FillAreaStyle> &  ) const>(&RWStepVisual_RWFillAreaStyle::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWFillAreaStyle::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_FillAreaStyle> &  ) const) static_cast<void (RWStepVisual_RWFillAreaStyle::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_FillAreaStyle> &  ) const>(&RWStepVisual_RWFillAreaStyle::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWFillAreaStyle::*)( const opencascade::handle<StepVisual_FillAreaStyle> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWFillAreaStyle::*)( const opencascade::handle<StepVisual_FillAreaStyle> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWFillAreaStyle::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWFillAreaStyleColour , shared_ptr<RWStepVisual_RWFillAreaStyleColour>  >>(m.attr("RWStepVisual_RWFillAreaStyleColour"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWFillAreaStyleColour::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_FillAreaStyleColour> &  ) const) static_cast<void (RWStepVisual_RWFillAreaStyleColour::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_FillAreaStyleColour> &  ) const>(&RWStepVisual_RWFillAreaStyleColour::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWFillAreaStyleColour::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_FillAreaStyleColour> &  ) const) static_cast<void (RWStepVisual_RWFillAreaStyleColour::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_FillAreaStyleColour> &  ) const>(&RWStepVisual_RWFillAreaStyleColour::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWFillAreaStyleColour::*)( const opencascade::handle<StepVisual_FillAreaStyleColour> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWFillAreaStyleColour::*)( const opencascade::handle<StepVisual_FillAreaStyleColour> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWFillAreaStyleColour::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWInvisibility , shared_ptr<RWStepVisual_RWInvisibility>  >>(m.attr("RWStepVisual_RWInvisibility"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWInvisibility::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_Invisibility> &  ) const) static_cast<void (RWStepVisual_RWInvisibility::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_Invisibility> &  ) const>(&RWStepVisual_RWInvisibility::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWInvisibility::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_Invisibility> &  ) const) static_cast<void (RWStepVisual_RWInvisibility::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_Invisibility> &  ) const>(&RWStepVisual_RWInvisibility::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWInvisibility::*)( const opencascade::handle<StepVisual_Invisibility> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWInvisibility::*)( const opencascade::handle<StepVisual_Invisibility> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWInvisibility::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWMechanicalDesignGeometricPresentationArea , shared_ptr<RWStepVisual_RWMechanicalDesignGeometricPresentationArea>  >>(m.attr("RWStepVisual_RWMechanicalDesignGeometricPresentationArea"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWMechanicalDesignGeometricPresentationArea::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationArea> &  ) const) static_cast<void (RWStepVisual_RWMechanicalDesignGeometricPresentationArea::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationArea> &  ) const>(&RWStepVisual_RWMechanicalDesignGeometricPresentationArea::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWMechanicalDesignGeometricPresentationArea::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationArea> &  ) const) static_cast<void (RWStepVisual_RWMechanicalDesignGeometricPresentationArea::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationArea> &  ) const>(&RWStepVisual_RWMechanicalDesignGeometricPresentationArea::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWMechanicalDesignGeometricPresentationArea::*)( const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationArea> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWMechanicalDesignGeometricPresentationArea::*)( const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationArea> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWMechanicalDesignGeometricPresentationArea::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation , shared_ptr<RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation>  >>(m.attr("RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> &  ) const) static_cast<void (RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> &  ) const>(&RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> &  ) const) static_cast<void (RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> &  ) const>(&RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation::*)( const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation::*)( const opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWOverRidingStyledItem , shared_ptr<RWStepVisual_RWOverRidingStyledItem>  >>(m.attr("RWStepVisual_RWOverRidingStyledItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWOverRidingStyledItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_OverRidingStyledItem> &  ) const) static_cast<void (RWStepVisual_RWOverRidingStyledItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_OverRidingStyledItem> &  ) const>(&RWStepVisual_RWOverRidingStyledItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWOverRidingStyledItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_OverRidingStyledItem> &  ) const) static_cast<void (RWStepVisual_RWOverRidingStyledItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_OverRidingStyledItem> &  ) const>(&RWStepVisual_RWOverRidingStyledItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWOverRidingStyledItem::*)( const opencascade::handle<StepVisual_OverRidingStyledItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWOverRidingStyledItem::*)( const opencascade::handle<StepVisual_OverRidingStyledItem> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWOverRidingStyledItem::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPlanarBox , shared_ptr<RWStepVisual_RWPlanarBox>  >>(m.attr("RWStepVisual_RWPlanarBox"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPlanarBox::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PlanarBox> &  ) const) static_cast<void (RWStepVisual_RWPlanarBox::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PlanarBox> &  ) const>(&RWStepVisual_RWPlanarBox::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPlanarBox::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PlanarBox> &  ) const) static_cast<void (RWStepVisual_RWPlanarBox::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PlanarBox> &  ) const>(&RWStepVisual_RWPlanarBox::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPlanarBox::*)( const opencascade::handle<StepVisual_PlanarBox> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPlanarBox::*)( const opencascade::handle<StepVisual_PlanarBox> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPlanarBox::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPlanarExtent , shared_ptr<RWStepVisual_RWPlanarExtent>  >>(m.attr("RWStepVisual_RWPlanarExtent"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPlanarExtent::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PlanarExtent> &  ) const) static_cast<void (RWStepVisual_RWPlanarExtent::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PlanarExtent> &  ) const>(&RWStepVisual_RWPlanarExtent::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPlanarExtent::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PlanarExtent> &  ) const) static_cast<void (RWStepVisual_RWPlanarExtent::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PlanarExtent> &  ) const>(&RWStepVisual_RWPlanarExtent::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPointStyle , shared_ptr<RWStepVisual_RWPointStyle>  >>(m.attr("RWStepVisual_RWPointStyle"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPointStyle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PointStyle> &  ) const) static_cast<void (RWStepVisual_RWPointStyle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PointStyle> &  ) const>(&RWStepVisual_RWPointStyle::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPointStyle::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PointStyle> &  ) const) static_cast<void (RWStepVisual_RWPointStyle::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PointStyle> &  ) const>(&RWStepVisual_RWPointStyle::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPointStyle::*)( const opencascade::handle<StepVisual_PointStyle> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPointStyle::*)( const opencascade::handle<StepVisual_PointStyle> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPointStyle::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPreDefinedColour , shared_ptr<RWStepVisual_RWPreDefinedColour>  >>(m.attr("RWStepVisual_RWPreDefinedColour"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPreDefinedColour::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PreDefinedColour> &  ) const) static_cast<void (RWStepVisual_RWPreDefinedColour::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PreDefinedColour> &  ) const>(&RWStepVisual_RWPreDefinedColour::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPreDefinedColour::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PreDefinedColour> &  ) const) static_cast<void (RWStepVisual_RWPreDefinedColour::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PreDefinedColour> &  ) const>(&RWStepVisual_RWPreDefinedColour::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPreDefinedCurveFont , shared_ptr<RWStepVisual_RWPreDefinedCurveFont>  >>(m.attr("RWStepVisual_RWPreDefinedCurveFont"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPreDefinedCurveFont::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PreDefinedCurveFont> &  ) const) static_cast<void (RWStepVisual_RWPreDefinedCurveFont::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PreDefinedCurveFont> &  ) const>(&RWStepVisual_RWPreDefinedCurveFont::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPreDefinedCurveFont::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PreDefinedCurveFont> &  ) const) static_cast<void (RWStepVisual_RWPreDefinedCurveFont::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PreDefinedCurveFont> &  ) const>(&RWStepVisual_RWPreDefinedCurveFont::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPreDefinedItem , shared_ptr<RWStepVisual_RWPreDefinedItem>  >>(m.attr("RWStepVisual_RWPreDefinedItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPreDefinedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PreDefinedItem> &  ) const) static_cast<void (RWStepVisual_RWPreDefinedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PreDefinedItem> &  ) const>(&RWStepVisual_RWPreDefinedItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPreDefinedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PreDefinedItem> &  ) const) static_cast<void (RWStepVisual_RWPreDefinedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PreDefinedItem> &  ) const>(&RWStepVisual_RWPreDefinedItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationArea , shared_ptr<RWStepVisual_RWPresentationArea>  >>(m.attr("RWStepVisual_RWPresentationArea"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPresentationArea::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationArea> &  ) const) static_cast<void (RWStepVisual_RWPresentationArea::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationArea> &  ) const>(&RWStepVisual_RWPresentationArea::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPresentationArea::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationArea> &  ) const) static_cast<void (RWStepVisual_RWPresentationArea::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationArea> &  ) const>(&RWStepVisual_RWPresentationArea::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPresentationArea::*)( const opencascade::handle<StepVisual_PresentationArea> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPresentationArea::*)( const opencascade::handle<StepVisual_PresentationArea> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPresentationArea::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationLayerAssignment , shared_ptr<RWStepVisual_RWPresentationLayerAssignment>  >>(m.attr("RWStepVisual_RWPresentationLayerAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPresentationLayerAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationLayerAssignment> &  ) const) static_cast<void (RWStepVisual_RWPresentationLayerAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationLayerAssignment> &  ) const>(&RWStepVisual_RWPresentationLayerAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPresentationLayerAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationLayerAssignment> &  ) const) static_cast<void (RWStepVisual_RWPresentationLayerAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationLayerAssignment> &  ) const>(&RWStepVisual_RWPresentationLayerAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPresentationLayerAssignment::*)( const opencascade::handle<StepVisual_PresentationLayerAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPresentationLayerAssignment::*)( const opencascade::handle<StepVisual_PresentationLayerAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPresentationLayerAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationLayerUsage , shared_ptr<RWStepVisual_RWPresentationLayerUsage>  >>(m.attr("RWStepVisual_RWPresentationLayerUsage"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPresentationLayerUsage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationLayerUsage> &  ) const) static_cast<void (RWStepVisual_RWPresentationLayerUsage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationLayerUsage> &  ) const>(&RWStepVisual_RWPresentationLayerUsage::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPresentationLayerUsage::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationLayerUsage> &  ) const) static_cast<void (RWStepVisual_RWPresentationLayerUsage::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationLayerUsage> &  ) const>(&RWStepVisual_RWPresentationLayerUsage::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPresentationLayerUsage::*)( const opencascade::handle<StepVisual_PresentationLayerUsage> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPresentationLayerUsage::*)( const opencascade::handle<StepVisual_PresentationLayerUsage> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPresentationLayerUsage::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationRepresentation , shared_ptr<RWStepVisual_RWPresentationRepresentation>  >>(m.attr("RWStepVisual_RWPresentationRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPresentationRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationRepresentation> &  ) const) static_cast<void (RWStepVisual_RWPresentationRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationRepresentation> &  ) const>(&RWStepVisual_RWPresentationRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPresentationRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationRepresentation> &  ) const) static_cast<void (RWStepVisual_RWPresentationRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationRepresentation> &  ) const>(&RWStepVisual_RWPresentationRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPresentationRepresentation::*)( const opencascade::handle<StepVisual_PresentationRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPresentationRepresentation::*)( const opencascade::handle<StepVisual_PresentationRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPresentationRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationSet , shared_ptr<RWStepVisual_RWPresentationSet>  >>(m.attr("RWStepVisual_RWPresentationSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPresentationSet::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationSet> &  ) const) static_cast<void (RWStepVisual_RWPresentationSet::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationSet> &  ) const>(&RWStepVisual_RWPresentationSet::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPresentationSet::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationSet> &  ) const) static_cast<void (RWStepVisual_RWPresentationSet::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationSet> &  ) const>(&RWStepVisual_RWPresentationSet::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationSize , shared_ptr<RWStepVisual_RWPresentationSize>  >>(m.attr("RWStepVisual_RWPresentationSize"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPresentationSize::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationSize> &  ) const) static_cast<void (RWStepVisual_RWPresentationSize::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationSize> &  ) const>(&RWStepVisual_RWPresentationSize::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPresentationSize::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationSize> &  ) const) static_cast<void (RWStepVisual_RWPresentationSize::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationSize> &  ) const>(&RWStepVisual_RWPresentationSize::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPresentationSize::*)( const opencascade::handle<StepVisual_PresentationSize> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPresentationSize::*)( const opencascade::handle<StepVisual_PresentationSize> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPresentationSize::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationStyleAssignment , shared_ptr<RWStepVisual_RWPresentationStyleAssignment>  >>(m.attr("RWStepVisual_RWPresentationStyleAssignment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPresentationStyleAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationStyleAssignment> &  ) const) static_cast<void (RWStepVisual_RWPresentationStyleAssignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationStyleAssignment> &  ) const>(&RWStepVisual_RWPresentationStyleAssignment::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPresentationStyleAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationStyleAssignment> &  ) const) static_cast<void (RWStepVisual_RWPresentationStyleAssignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationStyleAssignment> &  ) const>(&RWStepVisual_RWPresentationStyleAssignment::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPresentationStyleAssignment::*)( const opencascade::handle<StepVisual_PresentationStyleAssignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPresentationStyleAssignment::*)( const opencascade::handle<StepVisual_PresentationStyleAssignment> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPresentationStyleAssignment::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationStyleByContext , shared_ptr<RWStepVisual_RWPresentationStyleByContext>  >>(m.attr("RWStepVisual_RWPresentationStyleByContext"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPresentationStyleByContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationStyleByContext> &  ) const) static_cast<void (RWStepVisual_RWPresentationStyleByContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationStyleByContext> &  ) const>(&RWStepVisual_RWPresentationStyleByContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPresentationStyleByContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationStyleByContext> &  ) const) static_cast<void (RWStepVisual_RWPresentationStyleByContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationStyleByContext> &  ) const>(&RWStepVisual_RWPresentationStyleByContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPresentationStyleByContext::*)( const opencascade::handle<StepVisual_PresentationStyleByContext> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPresentationStyleByContext::*)( const opencascade::handle<StepVisual_PresentationStyleByContext> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPresentationStyleByContext::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentationView , shared_ptr<RWStepVisual_RWPresentationView>  >>(m.attr("RWStepVisual_RWPresentationView"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPresentationView::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationView> &  ) const) static_cast<void (RWStepVisual_RWPresentationView::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentationView> &  ) const>(&RWStepVisual_RWPresentationView::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPresentationView::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationView> &  ) const) static_cast<void (RWStepVisual_RWPresentationView::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentationView> &  ) const>(&RWStepVisual_RWPresentationView::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPresentationView::*)( const opencascade::handle<StepVisual_PresentationView> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPresentationView::*)( const opencascade::handle<StepVisual_PresentationView> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPresentationView::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWPresentedItemRepresentation , shared_ptr<RWStepVisual_RWPresentedItemRepresentation>  >>(m.attr("RWStepVisual_RWPresentedItemRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWPresentedItemRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentedItemRepresentation> &  ) const) static_cast<void (RWStepVisual_RWPresentedItemRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_PresentedItemRepresentation> &  ) const>(&RWStepVisual_RWPresentedItemRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWPresentedItemRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentedItemRepresentation> &  ) const) static_cast<void (RWStepVisual_RWPresentedItemRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_PresentedItemRepresentation> &  ) const>(&RWStepVisual_RWPresentedItemRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWPresentedItemRepresentation::*)( const opencascade::handle<StepVisual_PresentedItemRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWPresentedItemRepresentation::*)( const opencascade::handle<StepVisual_PresentedItemRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWPresentedItemRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWStyledItem , shared_ptr<RWStepVisual_RWStyledItem>  >>(m.attr("RWStepVisual_RWStyledItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWStyledItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_StyledItem> &  ) const) static_cast<void (RWStepVisual_RWStyledItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_StyledItem> &  ) const>(&RWStepVisual_RWStyledItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWStyledItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_StyledItem> &  ) const) static_cast<void (RWStepVisual_RWStyledItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_StyledItem> &  ) const>(&RWStepVisual_RWStyledItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWStyledItem::*)( const opencascade::handle<StepVisual_StyledItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWStyledItem::*)( const opencascade::handle<StepVisual_StyledItem> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWStyledItem::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceSideStyle , shared_ptr<RWStepVisual_RWSurfaceSideStyle>  >>(m.attr("RWStepVisual_RWSurfaceSideStyle"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWSurfaceSideStyle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceSideStyle> &  ) const) static_cast<void (RWStepVisual_RWSurfaceSideStyle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceSideStyle> &  ) const>(&RWStepVisual_RWSurfaceSideStyle::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWSurfaceSideStyle::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceSideStyle> &  ) const) static_cast<void (RWStepVisual_RWSurfaceSideStyle::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceSideStyle> &  ) const>(&RWStepVisual_RWSurfaceSideStyle::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWSurfaceSideStyle::*)( const opencascade::handle<StepVisual_SurfaceSideStyle> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWSurfaceSideStyle::*)( const opencascade::handle<StepVisual_SurfaceSideStyle> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWSurfaceSideStyle::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleBoundary , shared_ptr<RWStepVisual_RWSurfaceStyleBoundary>  >>(m.attr("RWStepVisual_RWSurfaceStyleBoundary"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWSurfaceStyleBoundary::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleBoundary> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleBoundary::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleBoundary> &  ) const>(&RWStepVisual_RWSurfaceStyleBoundary::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWSurfaceStyleBoundary::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleBoundary> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleBoundary::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleBoundary> &  ) const>(&RWStepVisual_RWSurfaceStyleBoundary::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWSurfaceStyleBoundary::*)( const opencascade::handle<StepVisual_SurfaceStyleBoundary> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleBoundary::*)( const opencascade::handle<StepVisual_SurfaceStyleBoundary> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWSurfaceStyleBoundary::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleControlGrid , shared_ptr<RWStepVisual_RWSurfaceStyleControlGrid>  >>(m.attr("RWStepVisual_RWSurfaceStyleControlGrid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWSurfaceStyleControlGrid::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleControlGrid> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleControlGrid::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleControlGrid> &  ) const>(&RWStepVisual_RWSurfaceStyleControlGrid::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWSurfaceStyleControlGrid::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleControlGrid> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleControlGrid::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleControlGrid> &  ) const>(&RWStepVisual_RWSurfaceStyleControlGrid::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWSurfaceStyleControlGrid::*)( const opencascade::handle<StepVisual_SurfaceStyleControlGrid> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleControlGrid::*)( const opencascade::handle<StepVisual_SurfaceStyleControlGrid> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWSurfaceStyleControlGrid::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleFillArea , shared_ptr<RWStepVisual_RWSurfaceStyleFillArea>  >>(m.attr("RWStepVisual_RWSurfaceStyleFillArea"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWSurfaceStyleFillArea::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleFillArea> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleFillArea::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleFillArea> &  ) const>(&RWStepVisual_RWSurfaceStyleFillArea::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWSurfaceStyleFillArea::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleFillArea> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleFillArea::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleFillArea> &  ) const>(&RWStepVisual_RWSurfaceStyleFillArea::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWSurfaceStyleFillArea::*)( const opencascade::handle<StepVisual_SurfaceStyleFillArea> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleFillArea::*)( const opencascade::handle<StepVisual_SurfaceStyleFillArea> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWSurfaceStyleFillArea::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleParameterLine , shared_ptr<RWStepVisual_RWSurfaceStyleParameterLine>  >>(m.attr("RWStepVisual_RWSurfaceStyleParameterLine"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWSurfaceStyleParameterLine::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleParameterLine> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleParameterLine::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleParameterLine> &  ) const>(&RWStepVisual_RWSurfaceStyleParameterLine::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWSurfaceStyleParameterLine::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleParameterLine> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleParameterLine::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleParameterLine> &  ) const>(&RWStepVisual_RWSurfaceStyleParameterLine::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWSurfaceStyleParameterLine::*)( const opencascade::handle<StepVisual_SurfaceStyleParameterLine> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleParameterLine::*)( const opencascade::handle<StepVisual_SurfaceStyleParameterLine> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWSurfaceStyleParameterLine::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleSegmentationCurve , shared_ptr<RWStepVisual_RWSurfaceStyleSegmentationCurve>  >>(m.attr("RWStepVisual_RWSurfaceStyleSegmentationCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWSurfaceStyleSegmentationCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleSegmentationCurve> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleSegmentationCurve::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleSegmentationCurve> &  ) const>(&RWStepVisual_RWSurfaceStyleSegmentationCurve::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWSurfaceStyleSegmentationCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleSegmentationCurve> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleSegmentationCurve::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleSegmentationCurve> &  ) const>(&RWStepVisual_RWSurfaceStyleSegmentationCurve::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWSurfaceStyleSegmentationCurve::*)( const opencascade::handle<StepVisual_SurfaceStyleSegmentationCurve> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleSegmentationCurve::*)( const opencascade::handle<StepVisual_SurfaceStyleSegmentationCurve> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWSurfaceStyleSegmentationCurve::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleSilhouette , shared_ptr<RWStepVisual_RWSurfaceStyleSilhouette>  >>(m.attr("RWStepVisual_RWSurfaceStyleSilhouette"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWSurfaceStyleSilhouette::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleSilhouette> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleSilhouette::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleSilhouette> &  ) const>(&RWStepVisual_RWSurfaceStyleSilhouette::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWSurfaceStyleSilhouette::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleSilhouette> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleSilhouette::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleSilhouette> &  ) const>(&RWStepVisual_RWSurfaceStyleSilhouette::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWSurfaceStyleSilhouette::*)( const opencascade::handle<StepVisual_SurfaceStyleSilhouette> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleSilhouette::*)( const opencascade::handle<StepVisual_SurfaceStyleSilhouette> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWSurfaceStyleSilhouette::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWSurfaceStyleUsage , shared_ptr<RWStepVisual_RWSurfaceStyleUsage>  >>(m.attr("RWStepVisual_RWSurfaceStyleUsage"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWSurfaceStyleUsage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleUsage> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleUsage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_SurfaceStyleUsage> &  ) const>(&RWStepVisual_RWSurfaceStyleUsage::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWSurfaceStyleUsage::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleUsage> &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleUsage::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_SurfaceStyleUsage> &  ) const>(&RWStepVisual_RWSurfaceStyleUsage::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWSurfaceStyleUsage::*)( const opencascade::handle<StepVisual_SurfaceStyleUsage> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWSurfaceStyleUsage::*)( const opencascade::handle<StepVisual_SurfaceStyleUsage> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWSurfaceStyleUsage::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTemplate , shared_ptr<RWStepVisual_RWTemplate>  >>(m.attr("RWStepVisual_RWTemplate"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWTemplate::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_Template> &  ) const) static_cast<void (RWStepVisual_RWTemplate::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_Template> &  ) const>(&RWStepVisual_RWTemplate::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWTemplate::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_Template> &  ) const) static_cast<void (RWStepVisual_RWTemplate::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_Template> &  ) const>(&RWStepVisual_RWTemplate::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWTemplate::*)( const opencascade::handle<StepVisual_Template> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWTemplate::*)( const opencascade::handle<StepVisual_Template> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWTemplate::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTemplateInstance , shared_ptr<RWStepVisual_RWTemplateInstance>  >>(m.attr("RWStepVisual_RWTemplateInstance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWTemplateInstance::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TemplateInstance> &  ) const) static_cast<void (RWStepVisual_RWTemplateInstance::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TemplateInstance> &  ) const>(&RWStepVisual_RWTemplateInstance::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWTemplateInstance::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TemplateInstance> &  ) const) static_cast<void (RWStepVisual_RWTemplateInstance::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TemplateInstance> &  ) const>(&RWStepVisual_RWTemplateInstance::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWTemplateInstance::*)( const opencascade::handle<StepVisual_TemplateInstance> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWTemplateInstance::*)( const opencascade::handle<StepVisual_TemplateInstance> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWTemplateInstance::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTessellatedAnnotationOccurrence , shared_ptr<RWStepVisual_RWTessellatedAnnotationOccurrence>  >>(m.attr("RWStepVisual_RWTessellatedAnnotationOccurrence"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWTessellatedAnnotationOccurrence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TessellatedAnnotationOccurrence> &  ) const) static_cast<void (RWStepVisual_RWTessellatedAnnotationOccurrence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TessellatedAnnotationOccurrence> &  ) const>(&RWStepVisual_RWTessellatedAnnotationOccurrence::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWTessellatedAnnotationOccurrence::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TessellatedAnnotationOccurrence> &  ) const) static_cast<void (RWStepVisual_RWTessellatedAnnotationOccurrence::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TessellatedAnnotationOccurrence> &  ) const>(&RWStepVisual_RWTessellatedAnnotationOccurrence::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWTessellatedAnnotationOccurrence::*)( const opencascade::handle<StepVisual_TessellatedAnnotationOccurrence> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWTessellatedAnnotationOccurrence::*)( const opencascade::handle<StepVisual_TessellatedAnnotationOccurrence> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWTessellatedAnnotationOccurrence::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTessellatedCurveSet , shared_ptr<RWStepVisual_RWTessellatedCurveSet>  >>(m.attr("RWStepVisual_RWTessellatedCurveSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWTessellatedCurveSet::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TessellatedCurveSet> &  ) const) static_cast<void (RWStepVisual_RWTessellatedCurveSet::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TessellatedCurveSet> &  ) const>(&RWStepVisual_RWTessellatedCurveSet::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWTessellatedCurveSet::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TessellatedCurveSet> &  ) const) static_cast<void (RWStepVisual_RWTessellatedCurveSet::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TessellatedCurveSet> &  ) const>(&RWStepVisual_RWTessellatedCurveSet::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWTessellatedCurveSet::*)( const opencascade::handle<StepVisual_TessellatedCurveSet> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWTessellatedCurveSet::*)( const opencascade::handle<StepVisual_TessellatedCurveSet> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWTessellatedCurveSet::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTessellatedGeometricSet , shared_ptr<RWStepVisual_RWTessellatedGeometricSet>  >>(m.attr("RWStepVisual_RWTessellatedGeometricSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWTessellatedGeometricSet::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TessellatedGeometricSet> &  ) const) static_cast<void (RWStepVisual_RWTessellatedGeometricSet::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TessellatedGeometricSet> &  ) const>(&RWStepVisual_RWTessellatedGeometricSet::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWTessellatedGeometricSet::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TessellatedGeometricSet> &  ) const) static_cast<void (RWStepVisual_RWTessellatedGeometricSet::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TessellatedGeometricSet> &  ) const>(&RWStepVisual_RWTessellatedGeometricSet::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWTessellatedGeometricSet::*)( const opencascade::handle<StepVisual_TessellatedGeometricSet> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWTessellatedGeometricSet::*)( const opencascade::handle<StepVisual_TessellatedGeometricSet> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWTessellatedGeometricSet::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTessellatedItem , shared_ptr<RWStepVisual_RWTessellatedItem>  >>(m.attr("RWStepVisual_RWTessellatedItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWTessellatedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TessellatedItem> &  ) const) static_cast<void (RWStepVisual_RWTessellatedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TessellatedItem> &  ) const>(&RWStepVisual_RWTessellatedItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWTessellatedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TessellatedItem> &  ) const) static_cast<void (RWStepVisual_RWTessellatedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TessellatedItem> &  ) const>(&RWStepVisual_RWTessellatedItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTextLiteral , shared_ptr<RWStepVisual_RWTextLiteral>  >>(m.attr("RWStepVisual_RWTextLiteral"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWTextLiteral::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TextLiteral> &  ) const) static_cast<void (RWStepVisual_RWTextLiteral::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TextLiteral> &  ) const>(&RWStepVisual_RWTextLiteral::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWTextLiteral::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TextLiteral> &  ) const) static_cast<void (RWStepVisual_RWTextLiteral::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TextLiteral> &  ) const>(&RWStepVisual_RWTextLiteral::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWTextLiteral::*)( const opencascade::handle<StepVisual_TextLiteral> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWTextLiteral::*)( const opencascade::handle<StepVisual_TextLiteral> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWTextLiteral::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTextStyle , shared_ptr<RWStepVisual_RWTextStyle>  >>(m.attr("RWStepVisual_RWTextStyle"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWTextStyle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TextStyle> &  ) const) static_cast<void (RWStepVisual_RWTextStyle::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TextStyle> &  ) const>(&RWStepVisual_RWTextStyle::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWTextStyle::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TextStyle> &  ) const) static_cast<void (RWStepVisual_RWTextStyle::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TextStyle> &  ) const>(&RWStepVisual_RWTextStyle::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWTextStyle::*)( const opencascade::handle<StepVisual_TextStyle> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWTextStyle::*)( const opencascade::handle<StepVisual_TextStyle> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWTextStyle::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTextStyleForDefinedFont , shared_ptr<RWStepVisual_RWTextStyleForDefinedFont>  >>(m.attr("RWStepVisual_RWTextStyleForDefinedFont"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWTextStyleForDefinedFont::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TextStyleForDefinedFont> &  ) const) static_cast<void (RWStepVisual_RWTextStyleForDefinedFont::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TextStyleForDefinedFont> &  ) const>(&RWStepVisual_RWTextStyleForDefinedFont::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWTextStyleForDefinedFont::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TextStyleForDefinedFont> &  ) const) static_cast<void (RWStepVisual_RWTextStyleForDefinedFont::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TextStyleForDefinedFont> &  ) const>(&RWStepVisual_RWTextStyleForDefinedFont::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWTextStyleForDefinedFont::*)( const opencascade::handle<StepVisual_TextStyleForDefinedFont> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWTextStyleForDefinedFont::*)( const opencascade::handle<StepVisual_TextStyleForDefinedFont> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWTextStyleForDefinedFont::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWTextStyleWithBoxCharacteristics , shared_ptr<RWStepVisual_RWTextStyleWithBoxCharacteristics>  >>(m.attr("RWStepVisual_RWTextStyleWithBoxCharacteristics"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWTextStyleWithBoxCharacteristics::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TextStyleWithBoxCharacteristics> &  ) const) static_cast<void (RWStepVisual_RWTextStyleWithBoxCharacteristics::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_TextStyleWithBoxCharacteristics> &  ) const>(&RWStepVisual_RWTextStyleWithBoxCharacteristics::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWTextStyleWithBoxCharacteristics::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TextStyleWithBoxCharacteristics> &  ) const) static_cast<void (RWStepVisual_RWTextStyleWithBoxCharacteristics::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_TextStyleWithBoxCharacteristics> &  ) const>(&RWStepVisual_RWTextStyleWithBoxCharacteristics::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWTextStyleWithBoxCharacteristics::*)( const opencascade::handle<StepVisual_TextStyleWithBoxCharacteristics> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWTextStyleWithBoxCharacteristics::*)( const opencascade::handle<StepVisual_TextStyleWithBoxCharacteristics> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWTextStyleWithBoxCharacteristics::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepVisual_RWViewVolume , shared_ptr<RWStepVisual_RWViewVolume>  >>(m.attr("RWStepVisual_RWViewVolume"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepVisual_RWViewVolume::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ViewVolume> &  ) const) static_cast<void (RWStepVisual_RWViewVolume::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepVisual_ViewVolume> &  ) const>(&RWStepVisual_RWViewVolume::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepVisual_RWViewVolume::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ViewVolume> &  ) const) static_cast<void (RWStepVisual_RWViewVolume::*)( StepData_StepWriter & ,  const opencascade::handle<StepVisual_ViewVolume> &  ) const>(&RWStepVisual_RWViewVolume::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepVisual_RWViewVolume::*)( const opencascade::handle<StepVisual_ViewVolume> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepVisual_RWViewVolume::*)( const opencascade::handle<StepVisual_ViewVolume> & ,  Interface_EntityIterator &  ) const>(&RWStepVisual_RWViewVolume::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/RWStepVisual_RWDraughtingModel.hxx
// ./opencascade/RWStepVisual_RWTextStyleForDefinedFont.hxx
// ./opencascade/RWStepVisual_RWMechanicalDesignGeometricPresentationRepresentation.hxx
// ./opencascade/RWStepVisual_RWOverRidingStyledItem.hxx
// ./opencascade/RWStepVisual_RWTextStyle.hxx
// ./opencascade/RWStepVisual_RWColour.hxx
// ./opencascade/RWStepVisual_RWCurveStyle.hxx
// ./opencascade/RWStepVisual_RWCurveStyleFontPattern.hxx
// ./opencascade/RWStepVisual_RWCoordinatesList.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleBoundary.hxx
// ./opencascade/RWStepVisual_RWTessellatedCurveSet.hxx
// ./opencascade/RWStepVisual_RWMechanicalDesignGeometricPresentationArea.hxx
// ./opencascade/RWStepVisual_RWPreDefinedItem.hxx
// ./opencascade/RWStepVisual_RWCameraModelD3MultiClipping.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleFillArea.hxx
// ./opencascade/RWStepVisual_RWAnnotationFillArea.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleSegmentationCurve.hxx
// ./opencascade/RWStepVisual_RWCameraModelD3MultiClippingUnion.hxx
// ./opencascade/RWStepVisual_RWCameraModelD3.hxx
// ./opencascade/RWStepVisual_RWAnnotationOccurrence.hxx
// ./opencascade/RWStepVisual_RWPresentationArea.hxx
// ./opencascade/RWStepVisual_RWTextLiteral.hxx
// ./opencascade/RWStepVisual_RWAreaInSet.hxx
// ./opencascade/RWStepVisual_RWCurveStyleFont.hxx
// ./opencascade/RWStepVisual_RWFillAreaStyleColour.hxx
// ./opencascade/RWStepVisual_RWDraughtingPreDefinedCurveFont.hxx
// ./opencascade/RWStepVisual_RWDraughtingCallout.hxx
// ./opencascade/RWStepVisual_RWPresentationSet.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleControlGrid.hxx
// ./opencascade/RWStepVisual_RWCameraModelD3MultiClippingIntersection.hxx
// ./opencascade/RWStepVisual_RWCompositeTextWithExtent.hxx
// ./opencascade/RWStepVisual_RWTessellatedGeometricSet.hxx
// ./opencascade/RWStepVisual_RWPresentationSize.hxx
// ./opencascade/RWStepVisual_RWCameraModel.hxx
// ./opencascade/RWStepVisual_RWInvisibility.hxx
// ./opencascade/RWStepVisual_RWTessellatedAnnotationOccurrence.hxx
// ./opencascade/RWStepVisual_RWPlanarExtent.hxx
// ./opencascade/RWStepVisual_RWExternallyDefinedCurveFont.hxx
// ./opencascade/RWStepVisual_RWContextDependentInvisibility.hxx
// ./opencascade/RWStepVisual_RWPresentedItemRepresentation.hxx
// ./opencascade/RWStepVisual_RWPresentationRepresentation.hxx
// ./opencascade/RWStepVisual_RWColourRgb.hxx
// ./opencascade/RWStepVisual_RWCameraImage.hxx
// ./opencascade/RWStepVisual_RWCharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation.hxx
// ./opencascade/RWStepVisual_RWFillAreaStyle.hxx
// ./opencascade/RWStepVisual_RWCameraModelD2.hxx
// ./opencascade/RWStepVisual_RWAnnotationPlane.hxx
// ./opencascade/RWStepVisual_RWDraughtingPreDefinedColour.hxx
// ./opencascade/RWStepVisual_RWAnnotationCurveOccurrence.hxx
// ./opencascade/RWStepVisual_RWContextDependentOverRidingStyledItem.hxx
// ./opencascade/RWStepVisual_RWAnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem.hxx
// ./opencascade/RWStepVisual_RWTemplateInstance.hxx
// ./opencascade/RWStepVisual_RWTextStyleWithBoxCharacteristics.hxx
// ./opencascade/RWStepVisual_RWAnnotationFillAreaOccurrence.hxx
// ./opencascade/RWStepVisual_RWSurfaceSideStyle.hxx
// ./opencascade/RWStepVisual_RWPresentationStyleByContext.hxx
// ./opencascade/RWStepVisual_RWPresentationView.hxx
// ./opencascade/RWStepVisual_RWPreDefinedColour.hxx
// ./opencascade/RWStepVisual_RWTemplate.hxx
// ./opencascade/RWStepVisual_RWViewVolume.hxx
// ./opencascade/RWStepVisual_RWCompositeText.hxx
// ./opencascade/RWStepVisual_RWCameraUsage.hxx
// ./opencascade/RWStepVisual_RWTessellatedItem.hxx
// ./opencascade/RWStepVisual_RWColourSpecification.hxx
// ./opencascade/RWStepVisual_RWPresentationLayerAssignment.hxx
// ./opencascade/RWStepVisual_RWStyledItem.hxx
// ./opencascade/RWStepVisual_RWPresentationLayerUsage.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleParameterLine.hxx
// ./opencascade/RWStepVisual_RWBackgroundColour.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleUsage.hxx
// ./opencascade/RWStepVisual_RWPointStyle.hxx
// ./opencascade/RWStepVisual_RWSurfaceStyleSilhouette.hxx
// ./opencascade/RWStepVisual_RWPreDefinedCurveFont.hxx
// ./opencascade/RWStepVisual_RWPresentationStyleAssignment.hxx
// ./opencascade/RWStepVisual_RWPlanarBox.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
