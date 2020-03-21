
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
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_SurfaceSideStyle.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <StepVisual_PlanarExtent.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_AnnotationText.hxx>
#include <StepVisual_CompositeText.hxx>
#include <StepVisual_TextLiteral.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_Colour.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepRepr_Representation.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepVisual_SurfaceStyleFillArea.hxx>
#include <StepVisual_SurfaceStyleBoundary.hxx>
#include <StepVisual_SurfaceStyleParameterLine.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <MeshVS_TwoColors.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepGeom_Plane.hxx>
#include <StepVisual_CameraModelD3MultiClippingIntersection.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepVisual_MarkerMember.hxx>
#include <StepVisual_AnnotationCurveOccurrence.hxx>
#include <StepVisual_AnnotationFillAreaOccurrence.hxx>
#include <StepVisual_AnnotationTextOccurrence.hxx>
#include <StepVisual_TessellatedAnnotationOccurrence.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepVisual_PointStyle.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_NullStyleMember.hxx>
#include <StepVisual_SurfaceStyleUsage.hxx>
#include <StepVisual_Colour.hxx>
#include <StepVisual_PreDefinedItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_Colour.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PreDefinedTextFont.hxx>
#include <StepVisual_ExternallyDefinedTextFont.hxx>
#include <StepVisual_DraughtingCallout.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepGeom_Plane.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnion.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_Colour.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepVisual_CurveStyleFont.hxx>
#include <StepVisual_PreDefinedCurveFont.hxx>
#include <StepVisual_ExternallyDefinedCurveFont.hxx>
#include <StepVisual_PresentedItem.hxx>
#include <StepVisual_FillAreaStyleColour.hxx>
#include <StepVisual_FillAreaStyle.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_AreaInSet.hxx>
#include <StepVisual_CurveStyle.hxx>

// module includes
#include <StepVisual_AnnotationCurveOccurrence.hxx>
#include <StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem.hxx>
#include <StepVisual_AnnotationFillArea.hxx>
#include <StepVisual_AnnotationFillAreaOccurrence.hxx>
#include <StepVisual_AnnotationOccurrence.hxx>
#include <StepVisual_AnnotationPlane.hxx>
#include <StepVisual_AnnotationPlaneElement.hxx>
#include <StepVisual_AnnotationText.hxx>
#include <StepVisual_AnnotationTextOccurrence.hxx>
#include <StepVisual_AreaInSet.hxx>
#include <StepVisual_AreaOrView.hxx>
#include <StepVisual_Array1OfAnnotationPlaneElement.hxx>
#include <StepVisual_Array1OfBoxCharacteristicSelect.hxx>
#include <StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect.hxx>
#include <StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect.hxx>
#include <StepVisual_Array1OfCurveStyleFontPattern.hxx>
#include <StepVisual_Array1OfDirectionCountSelect.hxx>
#include <StepVisual_Array1OfDraughtingCalloutElement.hxx>
#include <StepVisual_Array1OfFillStyleSelect.hxx>
#include <StepVisual_Array1OfInvisibleItem.hxx>
#include <StepVisual_Array1OfLayeredItem.hxx>
#include <StepVisual_Array1OfPresentationStyleAssignment.hxx>
#include <StepVisual_Array1OfPresentationStyleSelect.hxx>
#include <StepVisual_Array1OfStyleContextSelect.hxx>
#include <StepVisual_Array1OfSurfaceStyleElementSelect.hxx>
#include <StepVisual_Array1OfTextOrCharacter.hxx>
#include <StepVisual_BackgroundColour.hxx>
#include <StepVisual_BoxCharacteristicSelect.hxx>
#include <StepVisual_CameraImage.hxx>
#include <StepVisual_CameraImage2dWithScale.hxx>
#include <StepVisual_CameraImage3dWithScale.hxx>
#include <StepVisual_CameraModel.hxx>
#include <StepVisual_CameraModelD2.hxx>
#include <StepVisual_CameraModelD3.hxx>
#include <StepVisual_CameraModelD3MultiClipping.hxx>
#include <StepVisual_CameraModelD3MultiClippingInterectionSelect.hxx>
#include <StepVisual_CameraModelD3MultiClippingIntersection.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnion.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnionSelect.hxx>
#include <StepVisual_CameraUsage.hxx>
#include <StepVisual_CentralOrParallel.hxx>
#include <StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation.hxx>
#include <StepVisual_Colour.hxx>
#include <StepVisual_ColourRgb.hxx>
#include <StepVisual_ColourSpecification.hxx>
#include <StepVisual_CompositeText.hxx>
#include <StepVisual_CompositeTextWithExtent.hxx>
#include <StepVisual_ContextDependentInvisibility.hxx>
#include <StepVisual_ContextDependentOverRidingStyledItem.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_CurveStyleFont.hxx>
#include <StepVisual_CurveStyleFontPattern.hxx>
#include <StepVisual_CurveStyleFontSelect.hxx>
#include <StepVisual_DirectionCountSelect.hxx>
#include <StepVisual_DraughtingAnnotationOccurrence.hxx>
#include <StepVisual_DraughtingCallout.hxx>
#include <StepVisual_DraughtingCalloutElement.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepVisual_DraughtingPreDefinedColour.hxx>
#include <StepVisual_DraughtingPreDefinedCurveFont.hxx>
#include <StepVisual_ExternallyDefinedCurveFont.hxx>
#include <StepVisual_ExternallyDefinedTextFont.hxx>
#include <StepVisual_FillAreaStyle.hxx>
#include <StepVisual_FillAreaStyleColour.hxx>
#include <StepVisual_FillStyleSelect.hxx>
#include <StepVisual_FontSelect.hxx>
#include <StepVisual_HArray1OfAnnotationPlaneElement.hxx>
#include <StepVisual_HArray1OfBoxCharacteristicSelect.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect.hxx>
#include <StepVisual_HArray1OfCurveStyleFontPattern.hxx>
#include <StepVisual_HArray1OfDirectionCountSelect.hxx>
#include <StepVisual_HArray1OfDraughtingCalloutElement.hxx>
#include <StepVisual_HArray1OfFillStyleSelect.hxx>
#include <StepVisual_HArray1OfInvisibleItem.hxx>
#include <StepVisual_HArray1OfLayeredItem.hxx>
#include <StepVisual_HArray1OfPresentationStyleAssignment.hxx>
#include <StepVisual_HArray1OfPresentationStyleSelect.hxx>
#include <StepVisual_HArray1OfStyleContextSelect.hxx>
#include <StepVisual_HArray1OfSurfaceStyleElementSelect.hxx>
#include <StepVisual_HArray1OfTextOrCharacter.hxx>
#include <StepVisual_Invisibility.hxx>
#include <StepVisual_InvisibilityContext.hxx>
#include <StepVisual_InvisibleItem.hxx>
#include <StepVisual_LayeredItem.hxx>
#include <StepVisual_MarkerMember.hxx>
#include <StepVisual_MarkerSelect.hxx>
#include <StepVisual_MarkerType.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationArea.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include <StepVisual_NullStyle.hxx>
#include <StepVisual_NullStyleMember.hxx>
#include <StepVisual_OverRidingStyledItem.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <StepVisual_PlanarExtent.hxx>
#include <StepVisual_PointStyle.hxx>
#include <StepVisual_PreDefinedColour.hxx>
#include <StepVisual_PreDefinedCurveFont.hxx>
#include <StepVisual_PreDefinedItem.hxx>
#include <StepVisual_PreDefinedTextFont.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepVisual_PresentationLayerUsage.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_PresentationRepresentationSelect.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepVisual_PresentationSize.hxx>
#include <StepVisual_PresentationSizeAssignmentSelect.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <StepVisual_PresentationStyleByContext.hxx>
#include <StepVisual_PresentationStyleSelect.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepVisual_PresentedItem.hxx>
#include <StepVisual_PresentedItemRepresentation.hxx>
#include <StepVisual_StyleContextSelect.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepVisual_StyledItemTarget.hxx>
#include <StepVisual_SurfaceSide.hxx>
#include <StepVisual_SurfaceSideStyle.hxx>
#include <StepVisual_SurfaceStyleBoundary.hxx>
#include <StepVisual_SurfaceStyleControlGrid.hxx>
#include <StepVisual_SurfaceStyleElementSelect.hxx>
#include <StepVisual_SurfaceStyleFillArea.hxx>
#include <StepVisual_SurfaceStyleParameterLine.hxx>
#include <StepVisual_SurfaceStyleSegmentationCurve.hxx>
#include <StepVisual_SurfaceStyleSilhouette.hxx>
#include <StepVisual_SurfaceStyleUsage.hxx>
#include <StepVisual_Template.hxx>
#include <StepVisual_TemplateInstance.hxx>
#include <StepVisual_TessellatedAnnotationOccurrence.hxx>
#include <StepVisual_TessellatedCurveSet.hxx>
#include <StepVisual_TessellatedGeometricSet.hxx>
#include <StepVisual_TessellatedItem.hxx>
#include <StepVisual_TextLiteral.hxx>
#include <StepVisual_TextOrCharacter.hxx>
#include <StepVisual_TextPath.hxx>
#include <StepVisual_TextStyle.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepVisual_TextStyleWithBoxCharacteristics.hxx>
#include <StepVisual_ViewVolume.hxx>

// template related includes
// ./opencascade\StepVisual_Array1OfAnnotationPlaneElement.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfLayeredItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfInvisibleItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfCurveStyleFontPattern.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfFillStyleSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfTextOrCharacter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfDirectionCountSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfBoxCharacteristicSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfPresentationStyleSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_TessellatedCurveSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_TessellatedGeometricSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfDraughtingCalloutElement.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfSurfaceStyleElementSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfPresentationStyleAssignment.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepVisual_Array1OfStyleContextSelect.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepVisual_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepVisual", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StepVisual_MarkerType>(m, "StepVisual_MarkerType",R"#(None)#")
        .value("StepVisual_mtDot",StepVisual_MarkerType::StepVisual_mtDot)
        .value("StepVisual_mtX",StepVisual_MarkerType::StepVisual_mtX)
        .value("StepVisual_mtPlus",StepVisual_MarkerType::StepVisual_mtPlus)
        .value("StepVisual_mtAsterisk",StepVisual_MarkerType::StepVisual_mtAsterisk)
        .value("StepVisual_mtRing",StepVisual_MarkerType::StepVisual_mtRing)
        .value("StepVisual_mtSquare",StepVisual_MarkerType::StepVisual_mtSquare)
        .value("StepVisual_mtTriangle",StepVisual_MarkerType::StepVisual_mtTriangle).export_values();
    py::enum_<StepVisual_TextPath>(m, "StepVisual_TextPath",R"#(None)#")
        .value("StepVisual_tpUp",StepVisual_TextPath::StepVisual_tpUp)
        .value("StepVisual_tpRight",StepVisual_TextPath::StepVisual_tpRight)
        .value("StepVisual_tpDown",StepVisual_TextPath::StepVisual_tpDown)
        .value("StepVisual_tpLeft",StepVisual_TextPath::StepVisual_tpLeft).export_values();
    py::enum_<StepVisual_SurfaceSide>(m, "StepVisual_SurfaceSide",R"#(None)#")
        .value("StepVisual_ssNegative",StepVisual_SurfaceSide::StepVisual_ssNegative)
        .value("StepVisual_ssPositive",StepVisual_SurfaceSide::StepVisual_ssPositive)
        .value("StepVisual_ssBoth",StepVisual_SurfaceSide::StepVisual_ssBoth).export_values();
    py::enum_<StepVisual_CentralOrParallel>(m, "StepVisual_CentralOrParallel",R"#(None)#")
        .value("StepVisual_copCentral",StepVisual_CentralOrParallel::StepVisual_copCentral)
        .value("StepVisual_copParallel",StepVisual_CentralOrParallel::StepVisual_copParallel).export_values();
    py::enum_<StepVisual_NullStyle>(m, "StepVisual_NullStyle",R"#(None)#")
        .value("StepVisual_Null",StepVisual_NullStyle::StepVisual_Null).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<StepVisual_AnnotationPlaneElement>(m,"StepVisual_Array1OfAnnotationPlaneElement");
    preregister_template_NCollection_Array1<StepVisual_LayeredItem>(m,"StepVisual_Array1OfLayeredItem");
    preregister_template_NCollection_Array1<StepVisual_InvisibleItem>(m,"StepVisual_Array1OfInvisibleItem");
    preregister_template_NCollection_Array1<opencascade::handle<StepVisual_CurveStyleFontPattern> >(m,"StepVisual_Array1OfCurveStyleFontPattern");
    preregister_template_NCollection_Array1<StepVisual_FillStyleSelect>(m,"StepVisual_Array1OfFillStyleSelect");
    preregister_template_NCollection_Array1<StepVisual_TextOrCharacter>(m,"StepVisual_Array1OfTextOrCharacter");
    preregister_template_NCollection_Array1<StepVisual_DirectionCountSelect>(m,"StepVisual_Array1OfDirectionCountSelect");
    preregister_template_NCollection_Array1<StepVisual_CameraModelD3MultiClippingInterectionSelect>(m,"StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect");
    preregister_template_NCollection_Array1<StepVisual_BoxCharacteristicSelect>(m,"StepVisual_Array1OfBoxCharacteristicSelect");
    preregister_template_NCollection_Array1<StepVisual_PresentationStyleSelect>(m,"StepVisual_Array1OfPresentationStyleSelect");
    preregister_template_NCollection_Vector<opencascade::handle<TColStd_HSequenceOfInteger> >(m,"StepVisual_VectorOfHSequenceOfInteger");
    preregister_template_NCollection_Array1<opencascade::handle<StepVisual_TessellatedItem> >(m,"StepVisual_Array1OfTessellatedItem");
    preregister_template_NCollection_Array1<StepVisual_DraughtingCalloutElement>(m,"StepVisual_Array1OfDraughtingCalloutElement");
    preregister_template_NCollection_Array1<StepVisual_CameraModelD3MultiClippingUnionSelect>(m,"StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect");
    preregister_template_NCollection_Array1<StepVisual_SurfaceStyleElementSelect>(m,"StepVisual_Array1OfSurfaceStyleElementSelect");
    preregister_template_NCollection_Array1<opencascade::handle<StepVisual_PresentationStyleAssignment> >(m,"StepVisual_Array1OfPresentationStyleAssignment");
    preregister_template_NCollection_Array1<StepVisual_StyleContextSelect>(m,"StepVisual_Array1OfStyleContextSelect");

// classes forward declarations only
    py::class_<StepVisual_AnnotationFillArea ,opencascade::handle<StepVisual_AnnotationFillArea> , StepShape_GeometricCurveSet>(m,"StepVisual_AnnotationFillArea",R"#()#");
    py::class_<StepVisual_AnnotationPlaneElement , shared_ptr<StepVisual_AnnotationPlaneElement> , StepData_SelectType>(m,"StepVisual_AnnotationPlaneElement",R"#(None)#");
    py::class_<StepVisual_AnnotationText ,opencascade::handle<StepVisual_AnnotationText> , StepRepr_MappedItem>(m,"StepVisual_AnnotationText",R"#()#");
    py::class_<StepVisual_AreaInSet ,opencascade::handle<StepVisual_AreaInSet> , Standard_Transient>(m,"StepVisual_AreaInSet",R"#()#");
    py::class_<StepVisual_AreaOrView , shared_ptr<StepVisual_AreaOrView> , StepData_SelectType>(m,"StepVisual_AreaOrView",R"#(None)#");
    py::class_<StepVisual_BoxCharacteristicSelect , shared_ptr<StepVisual_BoxCharacteristicSelect> >(m,"StepVisual_BoxCharacteristicSelect",R"#(None)#");
    py::class_<StepVisual_CameraImage ,opencascade::handle<StepVisual_CameraImage> , StepRepr_MappedItem>(m,"StepVisual_CameraImage",R"#()#");
    py::class_<StepVisual_CameraModel ,opencascade::handle<StepVisual_CameraModel> , StepGeom_GeometricRepresentationItem>(m,"StepVisual_CameraModel",R"#()#");
    py::class_<StepVisual_CameraModelD3MultiClippingInterectionSelect , shared_ptr<StepVisual_CameraModelD3MultiClippingInterectionSelect> , StepData_SelectType>(m,"StepVisual_CameraModelD3MultiClippingInterectionSelect",R"#(None)#");
    py::class_<StepVisual_CameraModelD3MultiClippingIntersection ,opencascade::handle<StepVisual_CameraModelD3MultiClippingIntersection> , StepGeom_GeometricRepresentationItem>(m,"StepVisual_CameraModelD3MultiClippingIntersection",R"#()#");
    py::class_<StepVisual_CameraModelD3MultiClippingUnion ,opencascade::handle<StepVisual_CameraModelD3MultiClippingUnion> , StepGeom_GeometricRepresentationItem>(m,"StepVisual_CameraModelD3MultiClippingUnion",R"#()#");
    py::class_<StepVisual_CameraModelD3MultiClippingUnionSelect , shared_ptr<StepVisual_CameraModelD3MultiClippingUnionSelect> , StepData_SelectType>(m,"StepVisual_CameraModelD3MultiClippingUnionSelect",R"#(None)#");
    py::class_<StepVisual_CameraUsage ,opencascade::handle<StepVisual_CameraUsage> , StepRepr_RepresentationMap>(m,"StepVisual_CameraUsage",R"#()#");
    py::class_<StepVisual_Colour ,opencascade::handle<StepVisual_Colour> , Standard_Transient>(m,"StepVisual_Colour",R"#()#");
    py::class_<StepVisual_CompositeText ,opencascade::handle<StepVisual_CompositeText> , StepGeom_GeometricRepresentationItem>(m,"StepVisual_CompositeText",R"#()#");
    py::class_<StepVisual_CurveStyle ,opencascade::handle<StepVisual_CurveStyle> , Standard_Transient>(m,"StepVisual_CurveStyle",R"#()#");
    py::class_<StepVisual_CurveStyleFont ,opencascade::handle<StepVisual_CurveStyleFont> , Standard_Transient>(m,"StepVisual_CurveStyleFont",R"#()#");
    py::class_<StepVisual_CurveStyleFontPattern ,opencascade::handle<StepVisual_CurveStyleFontPattern> , Standard_Transient>(m,"StepVisual_CurveStyleFontPattern",R"#()#");
    py::class_<StepVisual_CurveStyleFontSelect , shared_ptr<StepVisual_CurveStyleFontSelect> , StepData_SelectType>(m,"StepVisual_CurveStyleFontSelect",R"#(None)#");
    py::class_<StepVisual_DirectionCountSelect , shared_ptr<StepVisual_DirectionCountSelect> >(m,"StepVisual_DirectionCountSelect",R"#(None)#");
    py::class_<StepVisual_DraughtingCallout ,opencascade::handle<StepVisual_DraughtingCallout> , StepGeom_GeometricRepresentationItem>(m,"StepVisual_DraughtingCallout",R"#()#");
    py::class_<StepVisual_DraughtingCalloutElement , shared_ptr<StepVisual_DraughtingCalloutElement> , StepData_SelectType>(m,"StepVisual_DraughtingCalloutElement",R"#(None)#");
    py::class_<StepVisual_DraughtingModel ,opencascade::handle<StepVisual_DraughtingModel> , StepRepr_Representation>(m,"StepVisual_DraughtingModel",R"#(Representation of STEP entity DraughtingModelRepresentation of STEP entity DraughtingModelRepresentation of STEP entity DraughtingModel)#");
    py::class_<StepVisual_ExternallyDefinedCurveFont ,opencascade::handle<StepVisual_ExternallyDefinedCurveFont> , StepBasic_ExternallyDefinedItem>(m,"StepVisual_ExternallyDefinedCurveFont",R"#(Representation of STEP entity ExternallyDefinedCurveFontRepresentation of STEP entity ExternallyDefinedCurveFontRepresentation of STEP entity ExternallyDefinedCurveFont)#");
    py::class_<StepVisual_ExternallyDefinedTextFont ,opencascade::handle<StepVisual_ExternallyDefinedTextFont> , StepBasic_ExternallyDefinedItem>(m,"StepVisual_ExternallyDefinedTextFont",R"#(Representation of STEP entity ExternallyDefinedTextFontRepresentation of STEP entity ExternallyDefinedTextFontRepresentation of STEP entity ExternallyDefinedTextFont)#");
    py::class_<StepVisual_FillAreaStyle ,opencascade::handle<StepVisual_FillAreaStyle> , Standard_Transient>(m,"StepVisual_FillAreaStyle",R"#()#");
    py::class_<StepVisual_FillAreaStyleColour ,opencascade::handle<StepVisual_FillAreaStyleColour> , Standard_Transient>(m,"StepVisual_FillAreaStyleColour",R"#()#");
    py::class_<StepVisual_FillStyleSelect , shared_ptr<StepVisual_FillStyleSelect> , StepData_SelectType>(m,"StepVisual_FillStyleSelect",R"#(None)#");
    py::class_<StepVisual_FontSelect , shared_ptr<StepVisual_FontSelect> , StepData_SelectType>(m,"StepVisual_FontSelect",R"#(None)#");
    py::class_<StepVisual_HArray1OfAnnotationPlaneElement ,opencascade::handle<StepVisual_HArray1OfAnnotationPlaneElement> , StepVisual_Array1OfAnnotationPlaneElement, Standard_Transient>(m,"StepVisual_HArray1OfAnnotationPlaneElement",R"#()#");
    py::class_<StepVisual_HArray1OfBoxCharacteristicSelect ,opencascade::handle<StepVisual_HArray1OfBoxCharacteristicSelect> , StepVisual_Array1OfBoxCharacteristicSelect, Standard_Transient>(m,"StepVisual_HArray1OfBoxCharacteristicSelect",R"#()#");
    py::class_<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect ,opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect> , StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect, Standard_Transient>(m,"StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect",R"#()#");
    py::class_<StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect ,opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect> , StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect, Standard_Transient>(m,"StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect",R"#()#");
    py::class_<StepVisual_HArray1OfCurveStyleFontPattern ,opencascade::handle<StepVisual_HArray1OfCurveStyleFontPattern> , StepVisual_Array1OfCurveStyleFontPattern, Standard_Transient>(m,"StepVisual_HArray1OfCurveStyleFontPattern",R"#()#");
    py::class_<StepVisual_HArray1OfDirectionCountSelect ,opencascade::handle<StepVisual_HArray1OfDirectionCountSelect> , StepVisual_Array1OfDirectionCountSelect, Standard_Transient>(m,"StepVisual_HArray1OfDirectionCountSelect",R"#()#");
    py::class_<StepVisual_HArray1OfDraughtingCalloutElement ,opencascade::handle<StepVisual_HArray1OfDraughtingCalloutElement> , StepVisual_Array1OfDraughtingCalloutElement, Standard_Transient>(m,"StepVisual_HArray1OfDraughtingCalloutElement",R"#()#");
    py::class_<StepVisual_HArray1OfFillStyleSelect ,opencascade::handle<StepVisual_HArray1OfFillStyleSelect> , StepVisual_Array1OfFillStyleSelect, Standard_Transient>(m,"StepVisual_HArray1OfFillStyleSelect",R"#()#");
    py::class_<StepVisual_HArray1OfInvisibleItem ,opencascade::handle<StepVisual_HArray1OfInvisibleItem> , StepVisual_Array1OfInvisibleItem, Standard_Transient>(m,"StepVisual_HArray1OfInvisibleItem",R"#()#");
    py::class_<StepVisual_HArray1OfLayeredItem ,opencascade::handle<StepVisual_HArray1OfLayeredItem> , StepVisual_Array1OfLayeredItem, Standard_Transient>(m,"StepVisual_HArray1OfLayeredItem",R"#()#");
    py::class_<StepVisual_HArray1OfPresentationStyleAssignment ,opencascade::handle<StepVisual_HArray1OfPresentationStyleAssignment> , StepVisual_Array1OfPresentationStyleAssignment, Standard_Transient>(m,"StepVisual_HArray1OfPresentationStyleAssignment",R"#()#");
    py::class_<StepVisual_HArray1OfPresentationStyleSelect ,opencascade::handle<StepVisual_HArray1OfPresentationStyleSelect> , StepVisual_Array1OfPresentationStyleSelect, Standard_Transient>(m,"StepVisual_HArray1OfPresentationStyleSelect",R"#()#");
    py::class_<StepVisual_HArray1OfStyleContextSelect ,opencascade::handle<StepVisual_HArray1OfStyleContextSelect> , StepVisual_Array1OfStyleContextSelect, Standard_Transient>(m,"StepVisual_HArray1OfStyleContextSelect",R"#()#");
    py::class_<StepVisual_HArray1OfSurfaceStyleElementSelect ,opencascade::handle<StepVisual_HArray1OfSurfaceStyleElementSelect> , StepVisual_Array1OfSurfaceStyleElementSelect, Standard_Transient>(m,"StepVisual_HArray1OfSurfaceStyleElementSelect",R"#()#");
    py::class_<StepVisual_HArray1OfTextOrCharacter ,opencascade::handle<StepVisual_HArray1OfTextOrCharacter> , StepVisual_Array1OfTextOrCharacter, Standard_Transient>(m,"StepVisual_HArray1OfTextOrCharacter",R"#()#");
    py::class_<StepVisual_Invisibility ,opencascade::handle<StepVisual_Invisibility> , Standard_Transient>(m,"StepVisual_Invisibility",R"#()#");
    py::class_<StepVisual_InvisibilityContext , shared_ptr<StepVisual_InvisibilityContext> , StepData_SelectType>(m,"StepVisual_InvisibilityContext",R"#(None)#");
    py::class_<StepVisual_InvisibleItem , shared_ptr<StepVisual_InvisibleItem> , StepData_SelectType>(m,"StepVisual_InvisibleItem",R"#(None)#");
    py::class_<StepVisual_LayeredItem , shared_ptr<StepVisual_LayeredItem> , StepData_SelectType>(m,"StepVisual_LayeredItem",R"#(None)#");
    py::class_<StepVisual_MarkerMember ,opencascade::handle<StepVisual_MarkerMember> , StepData_SelectInt>(m,"StepVisual_MarkerMember",R"#(Defines MarkerType as unique member of MarkerSelect Works with an EnumToolDefines MarkerType as unique member of MarkerSelect Works with an EnumToolDefines MarkerType as unique member of MarkerSelect Works with an EnumTool)#");
    py::class_<StepVisual_MarkerSelect , shared_ptr<StepVisual_MarkerSelect> , StepData_SelectType>(m,"StepVisual_MarkerSelect",R"#(None)#");
    py::class_<StepVisual_NullStyleMember ,opencascade::handle<StepVisual_NullStyleMember> , StepData_SelectInt>(m,"StepVisual_NullStyleMember",R"#(Defines NullStyle as unique member of PresentationStyleSelect Works with an EnumToolDefines NullStyle as unique member of PresentationStyleSelect Works with an EnumToolDefines NullStyle as unique member of PresentationStyleSelect Works with an EnumTool)#");
    py::class_<StepVisual_PlanarExtent ,opencascade::handle<StepVisual_PlanarExtent> , StepGeom_GeometricRepresentationItem>(m,"StepVisual_PlanarExtent",R"#()#");
    py::class_<StepVisual_PointStyle ,opencascade::handle<StepVisual_PointStyle> , Standard_Transient>(m,"StepVisual_PointStyle",R"#()#");
    py::class_<StepVisual_PreDefinedItem ,opencascade::handle<StepVisual_PreDefinedItem> , Standard_Transient>(m,"StepVisual_PreDefinedItem",R"#()#");
    py::class_<StepVisual_PresentationLayerAssignment ,opencascade::handle<StepVisual_PresentationLayerAssignment> , Standard_Transient>(m,"StepVisual_PresentationLayerAssignment",R"#()#");
    py::class_<StepVisual_PresentationLayerUsage ,opencascade::handle<StepVisual_PresentationLayerUsage> , Standard_Transient>(m,"StepVisual_PresentationLayerUsage",R"#(Added from StepVisual Rev2 to Rev4Added from StepVisual Rev2 to Rev4Added from StepVisual Rev2 to Rev4)#");
    py::class_<StepVisual_PresentationRepresentation ,opencascade::handle<StepVisual_PresentationRepresentation> , StepRepr_Representation>(m,"StepVisual_PresentationRepresentation",R"#()#");
    py::class_<StepVisual_PresentationRepresentationSelect , shared_ptr<StepVisual_PresentationRepresentationSelect> , StepData_SelectType>(m,"StepVisual_PresentationRepresentationSelect",R"#(None)#");
    py::class_<StepVisual_PresentationSet ,opencascade::handle<StepVisual_PresentationSet> , Standard_Transient>(m,"StepVisual_PresentationSet",R"#()#");
    py::class_<StepVisual_PresentationSize ,opencascade::handle<StepVisual_PresentationSize> , Standard_Transient>(m,"StepVisual_PresentationSize",R"#()#");
    py::class_<StepVisual_PresentationSizeAssignmentSelect , shared_ptr<StepVisual_PresentationSizeAssignmentSelect> , StepData_SelectType>(m,"StepVisual_PresentationSizeAssignmentSelect",R"#(None)#");
    py::class_<StepVisual_PresentationStyleAssignment ,opencascade::handle<StepVisual_PresentationStyleAssignment> , Standard_Transient>(m,"StepVisual_PresentationStyleAssignment",R"#()#");
    py::class_<StepVisual_PresentationStyleSelect , shared_ptr<StepVisual_PresentationStyleSelect> , StepData_SelectType>(m,"StepVisual_PresentationStyleSelect",R"#(None)#");
    py::class_<StepVisual_PresentedItem ,opencascade::handle<StepVisual_PresentedItem> , Standard_Transient>(m,"StepVisual_PresentedItem",R"#()#");
    py::class_<StepVisual_PresentedItemRepresentation ,opencascade::handle<StepVisual_PresentedItemRepresentation> , Standard_Transient>(m,"StepVisual_PresentedItemRepresentation",R"#(Added from StepVisual Rev2 to Rev4Added from StepVisual Rev2 to Rev4Added from StepVisual Rev2 to Rev4)#");
    py::class_<StepVisual_StyleContextSelect , shared_ptr<StepVisual_StyleContextSelect> , StepData_SelectType>(m,"StepVisual_StyleContextSelect",R"#(None)#");
    py::class_<StepVisual_StyledItem ,opencascade::handle<StepVisual_StyledItem> , StepRepr_RepresentationItem>(m,"StepVisual_StyledItem",R"#()#");
    py::class_<StepVisual_StyledItemTarget , shared_ptr<StepVisual_StyledItemTarget> , StepData_SelectType>(m,"StepVisual_StyledItemTarget",R"#(None)#");
    py::class_<StepVisual_SurfaceSideStyle ,opencascade::handle<StepVisual_SurfaceSideStyle> , Standard_Transient>(m,"StepVisual_SurfaceSideStyle",R"#()#");
    py::class_<StepVisual_SurfaceStyleBoundary ,opencascade::handle<StepVisual_SurfaceStyleBoundary> , Standard_Transient>(m,"StepVisual_SurfaceStyleBoundary",R"#()#");
    py::class_<StepVisual_SurfaceStyleControlGrid ,opencascade::handle<StepVisual_SurfaceStyleControlGrid> , Standard_Transient>(m,"StepVisual_SurfaceStyleControlGrid",R"#()#");
    py::class_<StepVisual_SurfaceStyleElementSelect , shared_ptr<StepVisual_SurfaceStyleElementSelect> , StepData_SelectType>(m,"StepVisual_SurfaceStyleElementSelect",R"#(None)#");
    py::class_<StepVisual_SurfaceStyleFillArea ,opencascade::handle<StepVisual_SurfaceStyleFillArea> , Standard_Transient>(m,"StepVisual_SurfaceStyleFillArea",R"#()#");
    py::class_<StepVisual_SurfaceStyleParameterLine ,opencascade::handle<StepVisual_SurfaceStyleParameterLine> , Standard_Transient>(m,"StepVisual_SurfaceStyleParameterLine",R"#()#");
    py::class_<StepVisual_SurfaceStyleSegmentationCurve ,opencascade::handle<StepVisual_SurfaceStyleSegmentationCurve> , Standard_Transient>(m,"StepVisual_SurfaceStyleSegmentationCurve",R"#()#");
    py::class_<StepVisual_SurfaceStyleSilhouette ,opencascade::handle<StepVisual_SurfaceStyleSilhouette> , Standard_Transient>(m,"StepVisual_SurfaceStyleSilhouette",R"#()#");
    py::class_<StepVisual_SurfaceStyleUsage ,opencascade::handle<StepVisual_SurfaceStyleUsage> , Standard_Transient>(m,"StepVisual_SurfaceStyleUsage",R"#()#");
    py::class_<StepVisual_Template ,opencascade::handle<StepVisual_Template> , StepRepr_Representation>(m,"StepVisual_Template",R"#()#");
    py::class_<StepVisual_TemplateInstance ,opencascade::handle<StepVisual_TemplateInstance> , StepRepr_MappedItem>(m,"StepVisual_TemplateInstance",R"#()#");
    py::class_<StepVisual_TessellatedItem ,opencascade::handle<StepVisual_TessellatedItem> , StepGeom_GeometricRepresentationItem>(m,"StepVisual_TessellatedItem",R"#()#");
    py::class_<StepVisual_TextLiteral ,opencascade::handle<StepVisual_TextLiteral> , StepGeom_GeometricRepresentationItem>(m,"StepVisual_TextLiteral",R"#()#");
    py::class_<StepVisual_TextOrCharacter , shared_ptr<StepVisual_TextOrCharacter> , StepData_SelectType>(m,"StepVisual_TextOrCharacter",R"#(None)#");
    py::class_<StepVisual_TextStyle ,opencascade::handle<StepVisual_TextStyle> , Standard_Transient>(m,"StepVisual_TextStyle",R"#()#");
    py::class_<StepVisual_TextStyleForDefinedFont ,opencascade::handle<StepVisual_TextStyleForDefinedFont> , Standard_Transient>(m,"StepVisual_TextStyleForDefinedFont",R"#()#");
    py::class_<StepVisual_ViewVolume ,opencascade::handle<StepVisual_ViewVolume> , Standard_Transient>(m,"StepVisual_ViewVolume",R"#()#");
    py::class_<StepVisual_AnnotationOccurrence ,opencascade::handle<StepVisual_AnnotationOccurrence> , StepVisual_StyledItem>(m,"StepVisual_AnnotationOccurrence",R"#()#");
    py::class_<StepVisual_BackgroundColour ,opencascade::handle<StepVisual_BackgroundColour> , StepVisual_Colour>(m,"StepVisual_BackgroundColour",R"#()#");
    py::class_<StepVisual_CameraImage2dWithScale ,opencascade::handle<StepVisual_CameraImage2dWithScale> , StepVisual_CameraImage>(m,"StepVisual_CameraImage2dWithScale",R"#()#");
    py::class_<StepVisual_CameraImage3dWithScale ,opencascade::handle<StepVisual_CameraImage3dWithScale> , StepVisual_CameraImage>(m,"StepVisual_CameraImage3dWithScale",R"#()#");
    py::class_<StepVisual_CameraModelD2 ,opencascade::handle<StepVisual_CameraModelD2> , StepVisual_CameraModel>(m,"StepVisual_CameraModelD2",R"#()#");
    py::class_<StepVisual_CameraModelD3 ,opencascade::handle<StepVisual_CameraModelD3> , StepVisual_CameraModel>(m,"StepVisual_CameraModelD3",R"#()#");
    py::class_<StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation ,opencascade::handle<StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation> , StepVisual_DraughtingModel>(m,"StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation",R"#(Added for Dimensional Tolerances Complex STEP entity Characterized_Object & Characterized_Representation & Draughting_Model & RepresentationAdded for Dimensional Tolerances Complex STEP entity Characterized_Object & Characterized_Representation & Draughting_Model & RepresentationAdded for Dimensional Tolerances Complex STEP entity Characterized_Object & Characterized_Representation & Draughting_Model & Representation)#");
    py::class_<StepVisual_ColourSpecification ,opencascade::handle<StepVisual_ColourSpecification> , StepVisual_Colour>(m,"StepVisual_ColourSpecification",R"#()#");
    py::class_<StepVisual_CompositeTextWithExtent ,opencascade::handle<StepVisual_CompositeTextWithExtent> , StepVisual_CompositeText>(m,"StepVisual_CompositeTextWithExtent",R"#()#");
    py::class_<StepVisual_ContextDependentInvisibility ,opencascade::handle<StepVisual_ContextDependentInvisibility> , StepVisual_Invisibility>(m,"StepVisual_ContextDependentInvisibility",R"#()#");
    py::class_<StepVisual_CoordinatesList ,opencascade::handle<StepVisual_CoordinatesList> , StepVisual_TessellatedItem>(m,"StepVisual_CoordinatesList",R"#()#");
    py::class_<StepVisual_MechanicalDesignGeometricPresentationRepresentation ,opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> , StepVisual_PresentationRepresentation>(m,"StepVisual_MechanicalDesignGeometricPresentationRepresentation",R"#()#");
    py::class_<StepVisual_OverRidingStyledItem ,opencascade::handle<StepVisual_OverRidingStyledItem> , StepVisual_StyledItem>(m,"StepVisual_OverRidingStyledItem",R"#()#");
    py::class_<StepVisual_PlanarBox ,opencascade::handle<StepVisual_PlanarBox> , StepVisual_PlanarExtent>(m,"StepVisual_PlanarBox",R"#()#");
    py::class_<StepVisual_PreDefinedColour ,opencascade::handle<StepVisual_PreDefinedColour> , StepVisual_Colour>(m,"StepVisual_PreDefinedColour",R"#()#");
    py::class_<StepVisual_PreDefinedCurveFont ,opencascade::handle<StepVisual_PreDefinedCurveFont> , StepVisual_PreDefinedItem>(m,"StepVisual_PreDefinedCurveFont",R"#()#");
    py::class_<StepVisual_PreDefinedTextFont ,opencascade::handle<StepVisual_PreDefinedTextFont> , StepVisual_PreDefinedItem>(m,"StepVisual_PreDefinedTextFont",R"#()#");
    py::class_<StepVisual_PresentationArea ,opencascade::handle<StepVisual_PresentationArea> , StepVisual_PresentationRepresentation>(m,"StepVisual_PresentationArea",R"#()#");
    py::class_<StepVisual_PresentationStyleByContext ,opencascade::handle<StepVisual_PresentationStyleByContext> , StepVisual_PresentationStyleAssignment>(m,"StepVisual_PresentationStyleByContext",R"#()#");
    py::class_<StepVisual_PresentationView ,opencascade::handle<StepVisual_PresentationView> , StepVisual_PresentationRepresentation>(m,"StepVisual_PresentationView",R"#()#");
    py::class_<StepVisual_TessellatedAnnotationOccurrence ,opencascade::handle<StepVisual_TessellatedAnnotationOccurrence> , StepVisual_StyledItem>(m,"StepVisual_TessellatedAnnotationOccurrence",R"#()#");
    py::class_<StepVisual_TessellatedCurveSet ,opencascade::handle<StepVisual_TessellatedCurveSet> , StepVisual_TessellatedItem>(m,"StepVisual_TessellatedCurveSet",R"#()#");
    py::class_<StepVisual_TessellatedGeometricSet ,opencascade::handle<StepVisual_TessellatedGeometricSet> , StepVisual_TessellatedItem>(m,"StepVisual_TessellatedGeometricSet",R"#()#");
    py::class_<StepVisual_TextStyleWithBoxCharacteristics ,opencascade::handle<StepVisual_TextStyleWithBoxCharacteristics> , StepVisual_TextStyle>(m,"StepVisual_TextStyleWithBoxCharacteristics",R"#()#");
    py::class_<StepVisual_AnnotationCurveOccurrence ,opencascade::handle<StepVisual_AnnotationCurveOccurrence> , StepVisual_AnnotationOccurrence>(m,"StepVisual_AnnotationCurveOccurrence",R"#()#");
    py::class_<StepVisual_AnnotationFillAreaOccurrence ,opencascade::handle<StepVisual_AnnotationFillAreaOccurrence> , StepVisual_AnnotationOccurrence>(m,"StepVisual_AnnotationFillAreaOccurrence",R"#()#");
    py::class_<StepVisual_AnnotationPlane ,opencascade::handle<StepVisual_AnnotationPlane> , StepVisual_AnnotationOccurrence>(m,"StepVisual_AnnotationPlane",R"#()#");
    py::class_<StepVisual_AnnotationTextOccurrence ,opencascade::handle<StepVisual_AnnotationTextOccurrence> , StepVisual_AnnotationOccurrence>(m,"StepVisual_AnnotationTextOccurrence",R"#()#");
    py::class_<StepVisual_CameraModelD3MultiClipping ,opencascade::handle<StepVisual_CameraModelD3MultiClipping> , StepVisual_CameraModelD3>(m,"StepVisual_CameraModelD3MultiClipping",R"#()#");
    py::class_<StepVisual_ColourRgb ,opencascade::handle<StepVisual_ColourRgb> , StepVisual_ColourSpecification>(m,"StepVisual_ColourRgb",R"#()#");
    py::class_<StepVisual_ContextDependentOverRidingStyledItem ,opencascade::handle<StepVisual_ContextDependentOverRidingStyledItem> , StepVisual_OverRidingStyledItem>(m,"StepVisual_ContextDependentOverRidingStyledItem",R"#()#");
    py::class_<StepVisual_DraughtingAnnotationOccurrence ,opencascade::handle<StepVisual_DraughtingAnnotationOccurrence> , StepVisual_AnnotationOccurrence>(m,"StepVisual_DraughtingAnnotationOccurrence",R"#()#");
    py::class_<StepVisual_DraughtingPreDefinedColour ,opencascade::handle<StepVisual_DraughtingPreDefinedColour> , StepVisual_PreDefinedColour>(m,"StepVisual_DraughtingPreDefinedColour",R"#()#");
    py::class_<StepVisual_DraughtingPreDefinedCurveFont ,opencascade::handle<StepVisual_DraughtingPreDefinedCurveFont> , StepVisual_PreDefinedCurveFont>(m,"StepVisual_DraughtingPreDefinedCurveFont",R"#()#");
    py::class_<StepVisual_MechanicalDesignGeometricPresentationArea ,opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationArea> , StepVisual_PresentationArea>(m,"StepVisual_MechanicalDesignGeometricPresentationArea",R"#()#");
    py::class_<StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem ,opencascade::handle<StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem> , StepVisual_AnnotationCurveOccurrence>(m,"StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem",R"#(Added for Dimensional Tolerances Complex STEP entity AnnotationCurveOccurrence & AnnotationOccurrence & GeometricRepresentationItem & RepresentationItem & StyledItemAdded for Dimensional Tolerances Complex STEP entity AnnotationCurveOccurrence & AnnotationOccurrence & GeometricRepresentationItem & RepresentationItem & StyledItemAdded for Dimensional Tolerances Complex STEP entity AnnotationCurveOccurrence & AnnotationOccurrence & GeometricRepresentationItem & RepresentationItem & StyledItem)#");

};

// user-defined post-inclusion per module

// user-defined post
