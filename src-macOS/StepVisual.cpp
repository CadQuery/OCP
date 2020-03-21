
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepVisual_SurfaceSideStyle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PointStyle.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_NullStyleMember.hxx>
#include <StepVisual_SurfaceStyleUsage.hxx>
#include <StepVisual_PlanarExtent.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_FillAreaStyleColour.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepVisual_AnnotationCurveOccurrence.hxx>
#include <StepVisual_AnnotationFillAreaOccurrence.hxx>
#include <StepVisual_AnnotationTextOccurrence.hxx>
#include <StepVisual_TessellatedAnnotationOccurrence.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_Colour.hxx>
#include <StepGeom_Plane.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnion.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_AreaInSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PreDefinedItem.hxx>
#include <StepGeom_Plane.hxx>
#include <StepVisual_CameraModelD3MultiClippingIntersection.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_PreDefinedTextFont.hxx>
#include <StepVisual_ExternallyDefinedTextFont.hxx>
#include <MeshVS_TwoColors.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_FillAreaStyle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_CurveStyleFont.hxx>
#include <StepVisual_PreDefinedCurveFont.hxx>
#include <StepVisual_ExternallyDefinedCurveFont.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_AnnotationText.hxx>
#include <StepVisual_CompositeText.hxx>
#include <StepVisual_TextLiteral.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_Colour.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_DraughtingCallout.hxx>
#include <StepVisual_StyledItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepData_SelectMember.hxx>
#include <StepVisual_MarkerMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepVisual_SurfaceStyleFillArea.hxx>
#include <StepVisual_SurfaceStyleBoundary.hxx>
#include <StepVisual_SurfaceStyleParameterLine.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_Colour.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepVisual_PresentedItem.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepRepr_Representation.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_Colour.hxx>
#include <TCollection_HAsciiString.hxx>

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
// ./opencascade/StepVisual_Array1OfDirectionCountSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfTextOrCharacter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfDraughtingCalloutElement.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfFillStyleSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfAnnotationPlaneElement.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfBoxCharacteristicSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfInvisibleItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfStyleContextSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfCurveStyleFontPattern.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_TessellatedCurveSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfSurfaceStyleElementSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfLayeredItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfPresentationStyleSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_TessellatedGeometricSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepVisual_Array1OfPresentationStyleAssignment.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepVisual(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepVisual"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepVisual_AnnotationFillArea ,opencascade::handle<StepVisual_AnnotationFillArea> , StepShape_GeometricCurveSet>>(m.attr("StepVisual_AnnotationFillArea"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_AnnotationFillArea::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_AnnotationFillArea::*)() const>(&StepVisual_AnnotationFillArea::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_AnnotationFillArea::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_AnnotationPlaneElement , shared_ptr<StepVisual_AnnotationPlaneElement> , StepData_SelectType>>(m.attr("StepVisual_AnnotationPlaneElement"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_AnnotationPlaneElement::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_AnnotationPlaneElement::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_AnnotationPlaneElement::CaseNum),
             R"#(Recognizes a IdAttributeSelect Kind Entity that is : 1 -> DraughtingCallout 2 -> StyledItem 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_AnnotationText ,opencascade::handle<StepVisual_AnnotationText> , StepRepr_MappedItem>>(m.attr("StepVisual_AnnotationText"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_AnnotationText::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_AnnotationText::*)() const>(&StepVisual_AnnotationText::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_AnnotationText::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_AreaInSet ,opencascade::handle<StepVisual_AreaInSet> , Standard_Transient>>(m.attr("StepVisual_AreaInSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_AreaInSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_AreaInSet::*)() const>(&StepVisual_AreaInSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_AreaInSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_AreaOrView , shared_ptr<StepVisual_AreaOrView> , StepData_SelectType>>(m.attr("StepVisual_AreaOrView"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_AreaOrView::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_AreaOrView::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_AreaOrView::CaseNum),
             R"#(Recognizes a AreaOrView Kind Entity that is : 1 -> PresentationArea 2 -> PresentationView 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_BoxCharacteristicSelect , shared_ptr<StepVisual_BoxCharacteristicSelect> >>(m.attr("StepVisual_BoxCharacteristicSelect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraImage ,opencascade::handle<StepVisual_CameraImage> , StepRepr_MappedItem>>(m.attr("StepVisual_CameraImage"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CameraImage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CameraImage::*)() const>(&StepVisual_CameraImage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CameraImage::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraModel ,opencascade::handle<StepVisual_CameraModel> , StepGeom_GeometricRepresentationItem>>(m.attr("StepVisual_CameraModel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CameraModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CameraModel::*)() const>(&StepVisual_CameraModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CameraModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraModelD3MultiClippingInterectionSelect , shared_ptr<StepVisual_CameraModelD3MultiClippingInterectionSelect> , StepData_SelectType>>(m.attr("StepVisual_CameraModelD3MultiClippingInterectionSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_CameraModelD3MultiClippingInterectionSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_CameraModelD3MultiClippingInterectionSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_CameraModelD3MultiClippingInterectionSelect::CaseNum),
             R"#(Recognizes a IdAttributeSelect Kind Entity that is : 1 -> Plane 2 -> CameraModelD3MultiClippingUnion 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraModelD3MultiClippingIntersection ,opencascade::handle<StepVisual_CameraModelD3MultiClippingIntersection> , StepGeom_GeometricRepresentationItem>>(m.attr("StepVisual_CameraModelD3MultiClippingIntersection"))
    // constructors
    // custom constructors
    // methods
        .def("SetShapeClipping",
             (void (StepVisual_CameraModelD3MultiClippingIntersection::*)( const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect> & ) ) static_cast<void (StepVisual_CameraModelD3MultiClippingIntersection::*)( const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect> & ) >(&StepVisual_CameraModelD3MultiClippingIntersection::SetShapeClipping),
             R"#(None)#"  , py::arg("theShapeClipping"))
        .def("ShapeClipping",
             (const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect> (StepVisual_CameraModelD3MultiClippingIntersection::*)() ) static_cast<const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect> (StepVisual_CameraModelD3MultiClippingIntersection::*)() >(&StepVisual_CameraModelD3MultiClippingIntersection::ShapeClipping),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CameraModelD3MultiClippingIntersection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CameraModelD3MultiClippingIntersection::*)() const>(&StepVisual_CameraModelD3MultiClippingIntersection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CameraModelD3MultiClippingIntersection::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraModelD3MultiClippingUnion ,opencascade::handle<StepVisual_CameraModelD3MultiClippingUnion> , StepGeom_GeometricRepresentationItem>>(m.attr("StepVisual_CameraModelD3MultiClippingUnion"))
    // constructors
    // custom constructors
    // methods
        .def("SetShapeClipping",
             (void (StepVisual_CameraModelD3MultiClippingUnion::*)( const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect> & ) ) static_cast<void (StepVisual_CameraModelD3MultiClippingUnion::*)( const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect> & ) >(&StepVisual_CameraModelD3MultiClippingUnion::SetShapeClipping),
             R"#(None)#"  , py::arg("theShapeClipping"))
        .def("ShapeClipping",
             (const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect> (StepVisual_CameraModelD3MultiClippingUnion::*)() ) static_cast<const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect> (StepVisual_CameraModelD3MultiClippingUnion::*)() >(&StepVisual_CameraModelD3MultiClippingUnion::ShapeClipping),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CameraModelD3MultiClippingUnion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CameraModelD3MultiClippingUnion::*)() const>(&StepVisual_CameraModelD3MultiClippingUnion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CameraModelD3MultiClippingUnion::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraModelD3MultiClippingUnionSelect , shared_ptr<StepVisual_CameraModelD3MultiClippingUnionSelect> , StepData_SelectType>>(m.attr("StepVisual_CameraModelD3MultiClippingUnionSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_CameraModelD3MultiClippingUnionSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_CameraModelD3MultiClippingUnionSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_CameraModelD3MultiClippingUnionSelect::CaseNum),
             R"#(Recognizes a IdAttributeSelect Kind Entity that is : 1 -> Plane 2 -> CameraModelD3MultiClippingIntersection 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraUsage ,opencascade::handle<StepVisual_CameraUsage> , StepRepr_RepresentationMap>>(m.attr("StepVisual_CameraUsage"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CameraUsage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CameraUsage::*)() const>(&StepVisual_CameraUsage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CameraUsage::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_Colour ,opencascade::handle<StepVisual_Colour> , Standard_Transient>>(m.attr("StepVisual_Colour"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_Colour::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_Colour::*)() const>(&StepVisual_Colour::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_Colour::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CompositeText ,opencascade::handle<StepVisual_CompositeText> , StepGeom_GeometricRepresentationItem>>(m.attr("StepVisual_CompositeText"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CompositeText::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CompositeText::*)() const>(&StepVisual_CompositeText::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CompositeText::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CurveStyle ,opencascade::handle<StepVisual_CurveStyle> , Standard_Transient>>(m.attr("StepVisual_CurveStyle"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CurveStyle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CurveStyle::*)() const>(&StepVisual_CurveStyle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CurveStyle::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CurveStyleFont ,opencascade::handle<StepVisual_CurveStyleFont> , Standard_Transient>>(m.attr("StepVisual_CurveStyleFont"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CurveStyleFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CurveStyleFont::*)() const>(&StepVisual_CurveStyleFont::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CurveStyleFont::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CurveStyleFontPattern ,opencascade::handle<StepVisual_CurveStyleFontPattern> , Standard_Transient>>(m.attr("StepVisual_CurveStyleFontPattern"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CurveStyleFontPattern::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CurveStyleFontPattern::*)() const>(&StepVisual_CurveStyleFontPattern::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CurveStyleFontPattern::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CurveStyleFontSelect , shared_ptr<StepVisual_CurveStyleFontSelect> , StepData_SelectType>>(m.attr("StepVisual_CurveStyleFontSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_CurveStyleFontSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_CurveStyleFontSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_CurveStyleFontSelect::CaseNum),
             R"#(Recognizes a CurveStyleFontSelect Kind Entity that is : 1 -> CurveStyleFont 2 -> PreDefinedCurveFont 3 -> ExternallyDefinedCurveFont 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_DirectionCountSelect , shared_ptr<StepVisual_DirectionCountSelect> >>(m.attr("StepVisual_DirectionCountSelect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_DraughtingCallout ,opencascade::handle<StepVisual_DraughtingCallout> , StepGeom_GeometricRepresentationItem>>(m.attr("StepVisual_DraughtingCallout"))
    // constructors
    // custom constructors
    // methods
        .def("Contents",
             (opencascade::handle<StepVisual_HArray1OfDraughtingCalloutElement> (StepVisual_DraughtingCallout::*)() const) static_cast<opencascade::handle<StepVisual_HArray1OfDraughtingCalloutElement> (StepVisual_DraughtingCallout::*)() const>(&StepVisual_DraughtingCallout::Contents),
             R"#(Returns field Contents)#" )
        .def("SetContents",
             (void (StepVisual_DraughtingCallout::*)( const opencascade::handle<StepVisual_HArray1OfDraughtingCalloutElement> & ) ) static_cast<void (StepVisual_DraughtingCallout::*)( const opencascade::handle<StepVisual_HArray1OfDraughtingCalloutElement> & ) >(&StepVisual_DraughtingCallout::SetContents),
             R"#(Set field Contents)#"  , py::arg("theContents"))
        .def("NbContents",
             (Standard_Integer (StepVisual_DraughtingCallout::*)() const) static_cast<Standard_Integer (StepVisual_DraughtingCallout::*)() const>(&StepVisual_DraughtingCallout::NbContents),
             R"#(Returns number of Contents)#" )
        .def("ContentsValue",
             (StepVisual_DraughtingCalloutElement (StepVisual_DraughtingCallout::*)( const Standard_Integer ) const) static_cast<StepVisual_DraughtingCalloutElement (StepVisual_DraughtingCallout::*)( const Standard_Integer ) const>(&StepVisual_DraughtingCallout::ContentsValue),
             R"#(Returns Contents with the given number)#"  , py::arg("theNum"))
        .def("SetContentsValue",
             (void (StepVisual_DraughtingCallout::*)( const Standard_Integer , const StepVisual_DraughtingCalloutElement & ) ) static_cast<void (StepVisual_DraughtingCallout::*)( const Standard_Integer , const StepVisual_DraughtingCalloutElement & ) >(&StepVisual_DraughtingCallout::SetContentsValue),
             R"#(Sets Contents with given number)#"  , py::arg("theNum"),  py::arg("theItem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_DraughtingCallout::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_DraughtingCallout::*)() const>(&StepVisual_DraughtingCallout::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_DraughtingCallout::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_DraughtingCalloutElement , shared_ptr<StepVisual_DraughtingCalloutElement> , StepData_SelectType>>(m.attr("StepVisual_DraughtingCalloutElement"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_DraughtingCalloutElement::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_DraughtingCalloutElement::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_DraughtingCalloutElement::CaseNum),
             R"#(Recognizes a IdAttributeSelect Kind Entity that is : 1 -> AnnotationCurveOccurrence 2 -> AnnotationTextOccurrence 3 -> TessellatedAnnotationOccurrence 4 -> AnnotationFillAreaOccurrence 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_DraughtingModel ,opencascade::handle<StepVisual_DraughtingModel> , StepRepr_Representation>>(m.attr("StepVisual_DraughtingModel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_DraughtingModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_DraughtingModel::*)() const>(&StepVisual_DraughtingModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_DraughtingModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_ExternallyDefinedCurveFont ,opencascade::handle<StepVisual_ExternallyDefinedCurveFont> , StepBasic_ExternallyDefinedItem>>(m.attr("StepVisual_ExternallyDefinedCurveFont"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_ExternallyDefinedCurveFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_ExternallyDefinedCurveFont::*)() const>(&StepVisual_ExternallyDefinedCurveFont::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_ExternallyDefinedCurveFont::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_ExternallyDefinedTextFont ,opencascade::handle<StepVisual_ExternallyDefinedTextFont> , StepBasic_ExternallyDefinedItem>>(m.attr("StepVisual_ExternallyDefinedTextFont"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_ExternallyDefinedTextFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_ExternallyDefinedTextFont::*)() const>(&StepVisual_ExternallyDefinedTextFont::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_ExternallyDefinedTextFont::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_FillAreaStyle ,opencascade::handle<StepVisual_FillAreaStyle> , Standard_Transient>>(m.attr("StepVisual_FillAreaStyle"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_FillAreaStyle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_FillAreaStyle::*)() const>(&StepVisual_FillAreaStyle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_FillAreaStyle::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_FillAreaStyleColour ,opencascade::handle<StepVisual_FillAreaStyleColour> , Standard_Transient>>(m.attr("StepVisual_FillAreaStyleColour"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_FillAreaStyleColour::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_FillAreaStyleColour::*)() const>(&StepVisual_FillAreaStyleColour::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_FillAreaStyleColour::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_FillStyleSelect , shared_ptr<StepVisual_FillStyleSelect> , StepData_SelectType>>(m.attr("StepVisual_FillStyleSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_FillStyleSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_FillStyleSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_FillStyleSelect::CaseNum),
             R"#(Recognizes a FillStyleSelect Kind Entity that is : 1 -> FillAreaStyleColour 2 -> ExternallyDefinedTileStyle 3 -> FillAreaStyleTiles 4 -> ExternallyDefinedHatchStyle 5 -> FillAreaStyleHatching 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_FontSelect , shared_ptr<StepVisual_FontSelect> , StepData_SelectType>>(m.attr("StepVisual_FontSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_FontSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_FontSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_FontSelect::CaseNum),
             R"#(Recognizes a FontSelect Kind Entity that is : 1 -> PreDefinedTextFont 2 -> ExternallyDefinedTextFont 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfAnnotationPlaneElement ,opencascade::handle<StepVisual_HArray1OfAnnotationPlaneElement> , StepVisual_Array1OfAnnotationPlaneElement, Standard_Transient>>(m.attr("StepVisual_HArray1OfAnnotationPlaneElement"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_AnnotationPlaneElement & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_AnnotationPlaneElement> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfAnnotationPlaneElement & (StepVisual_HArray1OfAnnotationPlaneElement::*)() const) static_cast<const StepVisual_Array1OfAnnotationPlaneElement & (StepVisual_HArray1OfAnnotationPlaneElement::*)() const>(&StepVisual_HArray1OfAnnotationPlaneElement::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfAnnotationPlaneElement & (StepVisual_HArray1OfAnnotationPlaneElement::*)() ) static_cast<StepVisual_Array1OfAnnotationPlaneElement & (StepVisual_HArray1OfAnnotationPlaneElement::*)() >(&StepVisual_HArray1OfAnnotationPlaneElement::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfAnnotationPlaneElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfAnnotationPlaneElement::*)() const>(&StepVisual_HArray1OfAnnotationPlaneElement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfAnnotationPlaneElement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfAnnotationPlaneElement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfBoxCharacteristicSelect ,opencascade::handle<StepVisual_HArray1OfBoxCharacteristicSelect> , StepVisual_Array1OfBoxCharacteristicSelect, Standard_Transient>>(m.attr("StepVisual_HArray1OfBoxCharacteristicSelect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_BoxCharacteristicSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_BoxCharacteristicSelect> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfBoxCharacteristicSelect & (StepVisual_HArray1OfBoxCharacteristicSelect::*)() const) static_cast<const StepVisual_Array1OfBoxCharacteristicSelect & (StepVisual_HArray1OfBoxCharacteristicSelect::*)() const>(&StepVisual_HArray1OfBoxCharacteristicSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfBoxCharacteristicSelect & (StepVisual_HArray1OfBoxCharacteristicSelect::*)() ) static_cast<StepVisual_Array1OfBoxCharacteristicSelect & (StepVisual_HArray1OfBoxCharacteristicSelect::*)() >(&StepVisual_HArray1OfBoxCharacteristicSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfBoxCharacteristicSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfBoxCharacteristicSelect::*)() const>(&StepVisual_HArray1OfBoxCharacteristicSelect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfBoxCharacteristicSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfBoxCharacteristicSelect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect ,opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect> , StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect, Standard_Transient>>(m.attr("StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_CameraModelD3MultiClippingInterectionSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_CameraModelD3MultiClippingInterectionSelect> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect & (StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::*)() const) static_cast<const StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect & (StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::*)() const>(&StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect & (StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::*)() ) static_cast<StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect & (StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::*)() >(&StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::*)() const>(&StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect ,opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect> , StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect, Standard_Transient>>(m.attr("StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_CameraModelD3MultiClippingUnionSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_CameraModelD3MultiClippingUnionSelect> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect & (StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::*)() const) static_cast<const StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect & (StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::*)() const>(&StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect & (StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::*)() ) static_cast<StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect & (StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::*)() >(&StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::*)() const>(&StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfCurveStyleFontPattern ,opencascade::handle<StepVisual_HArray1OfCurveStyleFontPattern> , StepVisual_Array1OfCurveStyleFontPattern, Standard_Transient>>(m.attr("StepVisual_HArray1OfCurveStyleFontPattern"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepVisual_CurveStyleFontPattern> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepVisual_CurveStyleFontPattern> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfCurveStyleFontPattern & (StepVisual_HArray1OfCurveStyleFontPattern::*)() const) static_cast<const StepVisual_Array1OfCurveStyleFontPattern & (StepVisual_HArray1OfCurveStyleFontPattern::*)() const>(&StepVisual_HArray1OfCurveStyleFontPattern::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfCurveStyleFontPattern & (StepVisual_HArray1OfCurveStyleFontPattern::*)() ) static_cast<StepVisual_Array1OfCurveStyleFontPattern & (StepVisual_HArray1OfCurveStyleFontPattern::*)() >(&StepVisual_HArray1OfCurveStyleFontPattern::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfCurveStyleFontPattern::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfCurveStyleFontPattern::*)() const>(&StepVisual_HArray1OfCurveStyleFontPattern::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfCurveStyleFontPattern::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfCurveStyleFontPattern::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfDirectionCountSelect ,opencascade::handle<StepVisual_HArray1OfDirectionCountSelect> , StepVisual_Array1OfDirectionCountSelect, Standard_Transient>>(m.attr("StepVisual_HArray1OfDirectionCountSelect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_DirectionCountSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_DirectionCountSelect> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfDirectionCountSelect & (StepVisual_HArray1OfDirectionCountSelect::*)() const) static_cast<const StepVisual_Array1OfDirectionCountSelect & (StepVisual_HArray1OfDirectionCountSelect::*)() const>(&StepVisual_HArray1OfDirectionCountSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfDirectionCountSelect & (StepVisual_HArray1OfDirectionCountSelect::*)() ) static_cast<StepVisual_Array1OfDirectionCountSelect & (StepVisual_HArray1OfDirectionCountSelect::*)() >(&StepVisual_HArray1OfDirectionCountSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfDirectionCountSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfDirectionCountSelect::*)() const>(&StepVisual_HArray1OfDirectionCountSelect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfDirectionCountSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfDirectionCountSelect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfDraughtingCalloutElement ,opencascade::handle<StepVisual_HArray1OfDraughtingCalloutElement> , StepVisual_Array1OfDraughtingCalloutElement, Standard_Transient>>(m.attr("StepVisual_HArray1OfDraughtingCalloutElement"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_DraughtingCalloutElement & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_DraughtingCalloutElement> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfDraughtingCalloutElement & (StepVisual_HArray1OfDraughtingCalloutElement::*)() const) static_cast<const StepVisual_Array1OfDraughtingCalloutElement & (StepVisual_HArray1OfDraughtingCalloutElement::*)() const>(&StepVisual_HArray1OfDraughtingCalloutElement::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfDraughtingCalloutElement & (StepVisual_HArray1OfDraughtingCalloutElement::*)() ) static_cast<StepVisual_Array1OfDraughtingCalloutElement & (StepVisual_HArray1OfDraughtingCalloutElement::*)() >(&StepVisual_HArray1OfDraughtingCalloutElement::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfDraughtingCalloutElement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfDraughtingCalloutElement::*)() const>(&StepVisual_HArray1OfDraughtingCalloutElement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfDraughtingCalloutElement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfDraughtingCalloutElement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfFillStyleSelect ,opencascade::handle<StepVisual_HArray1OfFillStyleSelect> , StepVisual_Array1OfFillStyleSelect, Standard_Transient>>(m.attr("StepVisual_HArray1OfFillStyleSelect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_FillStyleSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_FillStyleSelect> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfFillStyleSelect & (StepVisual_HArray1OfFillStyleSelect::*)() const) static_cast<const StepVisual_Array1OfFillStyleSelect & (StepVisual_HArray1OfFillStyleSelect::*)() const>(&StepVisual_HArray1OfFillStyleSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfFillStyleSelect & (StepVisual_HArray1OfFillStyleSelect::*)() ) static_cast<StepVisual_Array1OfFillStyleSelect & (StepVisual_HArray1OfFillStyleSelect::*)() >(&StepVisual_HArray1OfFillStyleSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfFillStyleSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfFillStyleSelect::*)() const>(&StepVisual_HArray1OfFillStyleSelect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfFillStyleSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfFillStyleSelect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfInvisibleItem ,opencascade::handle<StepVisual_HArray1OfInvisibleItem> , StepVisual_Array1OfInvisibleItem, Standard_Transient>>(m.attr("StepVisual_HArray1OfInvisibleItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_InvisibleItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_InvisibleItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfInvisibleItem & (StepVisual_HArray1OfInvisibleItem::*)() const) static_cast<const StepVisual_Array1OfInvisibleItem & (StepVisual_HArray1OfInvisibleItem::*)() const>(&StepVisual_HArray1OfInvisibleItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfInvisibleItem & (StepVisual_HArray1OfInvisibleItem::*)() ) static_cast<StepVisual_Array1OfInvisibleItem & (StepVisual_HArray1OfInvisibleItem::*)() >(&StepVisual_HArray1OfInvisibleItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfInvisibleItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfInvisibleItem::*)() const>(&StepVisual_HArray1OfInvisibleItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfInvisibleItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfInvisibleItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfLayeredItem ,opencascade::handle<StepVisual_HArray1OfLayeredItem> , StepVisual_Array1OfLayeredItem, Standard_Transient>>(m.attr("StepVisual_HArray1OfLayeredItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_LayeredItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_LayeredItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfLayeredItem & (StepVisual_HArray1OfLayeredItem::*)() const) static_cast<const StepVisual_Array1OfLayeredItem & (StepVisual_HArray1OfLayeredItem::*)() const>(&StepVisual_HArray1OfLayeredItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfLayeredItem & (StepVisual_HArray1OfLayeredItem::*)() ) static_cast<StepVisual_Array1OfLayeredItem & (StepVisual_HArray1OfLayeredItem::*)() >(&StepVisual_HArray1OfLayeredItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfLayeredItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfLayeredItem::*)() const>(&StepVisual_HArray1OfLayeredItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfLayeredItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfLayeredItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfPresentationStyleAssignment ,opencascade::handle<StepVisual_HArray1OfPresentationStyleAssignment> , StepVisual_Array1OfPresentationStyleAssignment, Standard_Transient>>(m.attr("StepVisual_HArray1OfPresentationStyleAssignment"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepVisual_PresentationStyleAssignment> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepVisual_PresentationStyleAssignment> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfPresentationStyleAssignment & (StepVisual_HArray1OfPresentationStyleAssignment::*)() const) static_cast<const StepVisual_Array1OfPresentationStyleAssignment & (StepVisual_HArray1OfPresentationStyleAssignment::*)() const>(&StepVisual_HArray1OfPresentationStyleAssignment::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfPresentationStyleAssignment & (StepVisual_HArray1OfPresentationStyleAssignment::*)() ) static_cast<StepVisual_Array1OfPresentationStyleAssignment & (StepVisual_HArray1OfPresentationStyleAssignment::*)() >(&StepVisual_HArray1OfPresentationStyleAssignment::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfPresentationStyleAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfPresentationStyleAssignment::*)() const>(&StepVisual_HArray1OfPresentationStyleAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfPresentationStyleAssignment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfPresentationStyleAssignment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfPresentationStyleSelect ,opencascade::handle<StepVisual_HArray1OfPresentationStyleSelect> , StepVisual_Array1OfPresentationStyleSelect, Standard_Transient>>(m.attr("StepVisual_HArray1OfPresentationStyleSelect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_PresentationStyleSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_PresentationStyleSelect> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfPresentationStyleSelect & (StepVisual_HArray1OfPresentationStyleSelect::*)() const) static_cast<const StepVisual_Array1OfPresentationStyleSelect & (StepVisual_HArray1OfPresentationStyleSelect::*)() const>(&StepVisual_HArray1OfPresentationStyleSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfPresentationStyleSelect & (StepVisual_HArray1OfPresentationStyleSelect::*)() ) static_cast<StepVisual_Array1OfPresentationStyleSelect & (StepVisual_HArray1OfPresentationStyleSelect::*)() >(&StepVisual_HArray1OfPresentationStyleSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfPresentationStyleSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfPresentationStyleSelect::*)() const>(&StepVisual_HArray1OfPresentationStyleSelect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfPresentationStyleSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfPresentationStyleSelect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfStyleContextSelect ,opencascade::handle<StepVisual_HArray1OfStyleContextSelect> , StepVisual_Array1OfStyleContextSelect, Standard_Transient>>(m.attr("StepVisual_HArray1OfStyleContextSelect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_StyleContextSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_StyleContextSelect> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfStyleContextSelect & (StepVisual_HArray1OfStyleContextSelect::*)() const) static_cast<const StepVisual_Array1OfStyleContextSelect & (StepVisual_HArray1OfStyleContextSelect::*)() const>(&StepVisual_HArray1OfStyleContextSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfStyleContextSelect & (StepVisual_HArray1OfStyleContextSelect::*)() ) static_cast<StepVisual_Array1OfStyleContextSelect & (StepVisual_HArray1OfStyleContextSelect::*)() >(&StepVisual_HArray1OfStyleContextSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfStyleContextSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfStyleContextSelect::*)() const>(&StepVisual_HArray1OfStyleContextSelect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfStyleContextSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfStyleContextSelect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfSurfaceStyleElementSelect ,opencascade::handle<StepVisual_HArray1OfSurfaceStyleElementSelect> , StepVisual_Array1OfSurfaceStyleElementSelect, Standard_Transient>>(m.attr("StepVisual_HArray1OfSurfaceStyleElementSelect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_SurfaceStyleElementSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_SurfaceStyleElementSelect> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfSurfaceStyleElementSelect & (StepVisual_HArray1OfSurfaceStyleElementSelect::*)() const) static_cast<const StepVisual_Array1OfSurfaceStyleElementSelect & (StepVisual_HArray1OfSurfaceStyleElementSelect::*)() const>(&StepVisual_HArray1OfSurfaceStyleElementSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfSurfaceStyleElementSelect & (StepVisual_HArray1OfSurfaceStyleElementSelect::*)() ) static_cast<StepVisual_Array1OfSurfaceStyleElementSelect & (StepVisual_HArray1OfSurfaceStyleElementSelect::*)() >(&StepVisual_HArray1OfSurfaceStyleElementSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfSurfaceStyleElementSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfSurfaceStyleElementSelect::*)() const>(&StepVisual_HArray1OfSurfaceStyleElementSelect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfSurfaceStyleElementSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfSurfaceStyleElementSelect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_HArray1OfTextOrCharacter ,opencascade::handle<StepVisual_HArray1OfTextOrCharacter> , StepVisual_Array1OfTextOrCharacter, Standard_Transient>>(m.attr("StepVisual_HArray1OfTextOrCharacter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepVisual_TextOrCharacter & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepVisual_TextOrCharacter> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepVisual_Array1OfTextOrCharacter & (StepVisual_HArray1OfTextOrCharacter::*)() const) static_cast<const StepVisual_Array1OfTextOrCharacter & (StepVisual_HArray1OfTextOrCharacter::*)() const>(&StepVisual_HArray1OfTextOrCharacter::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepVisual_Array1OfTextOrCharacter & (StepVisual_HArray1OfTextOrCharacter::*)() ) static_cast<StepVisual_Array1OfTextOrCharacter & (StepVisual_HArray1OfTextOrCharacter::*)() >(&StepVisual_HArray1OfTextOrCharacter::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfTextOrCharacter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_HArray1OfTextOrCharacter::*)() const>(&StepVisual_HArray1OfTextOrCharacter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_HArray1OfTextOrCharacter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepVisual_HArray1OfTextOrCharacter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_Invisibility ,opencascade::handle<StepVisual_Invisibility> , Standard_Transient>>(m.attr("StepVisual_Invisibility"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_Invisibility::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_Invisibility::*)() const>(&StepVisual_Invisibility::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_Invisibility::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_InvisibilityContext , shared_ptr<StepVisual_InvisibilityContext> , StepData_SelectType>>(m.attr("StepVisual_InvisibilityContext"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_InvisibilityContext::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_InvisibilityContext::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_InvisibilityContext::CaseNum),
             R"#(Recognizes a InvisibilityContext Kind Entity that is : 1 -> PresentationRepresentation 2 -> PresentationSet 2 -> DraughtingModel 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_InvisibleItem , shared_ptr<StepVisual_InvisibleItem> , StepData_SelectType>>(m.attr("StepVisual_InvisibleItem"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_InvisibleItem::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_InvisibleItem::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_InvisibleItem::CaseNum),
             R"#(Recognizes a InvisibleItem Kind Entity that is : 1 -> StyledItem 2 -> PresentationLayerAssignment 3 -> PresentationRepresentation 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_LayeredItem , shared_ptr<StepVisual_LayeredItem> , StepData_SelectType>>(m.attr("StepVisual_LayeredItem"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_LayeredItem::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_LayeredItem::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_LayeredItem::CaseNum),
             R"#(Recognizes a LayeredItem Kind Entity that is : 1 -> PresentationRepresentation 2 -> RepresentationItem 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_MarkerMember ,opencascade::handle<StepVisual_MarkerMember> , StepData_SelectInt>>(m.attr("StepVisual_MarkerMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepVisual_MarkerMember::*)() const) static_cast<Standard_Boolean (StepVisual_MarkerMember::*)() const>(&StepVisual_MarkerMember::HasName),
             R"#(None)#" )
        .def("Name",
             (Standard_CString (StepVisual_MarkerMember::*)() const) static_cast<Standard_CString (StepVisual_MarkerMember::*)() const>(&StepVisual_MarkerMember::Name),
             R"#(None)#" )
        .def("SetName",
             (Standard_Boolean (StepVisual_MarkerMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepVisual_MarkerMember::*)( const Standard_CString ) >(&StepVisual_MarkerMember::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("EnumText",
             (Standard_CString (StepVisual_MarkerMember::*)() const) static_cast<Standard_CString (StepVisual_MarkerMember::*)() const>(&StepVisual_MarkerMember::EnumText),
             R"#(None)#" )
        .def("SetEnumText",
             (void (StepVisual_MarkerMember::*)( const Standard_Integer , const Standard_CString ) ) static_cast<void (StepVisual_MarkerMember::*)( const Standard_Integer , const Standard_CString ) >(&StepVisual_MarkerMember::SetEnumText),
             R"#(None)#"  , py::arg("val"),  py::arg("text"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_MarkerMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_MarkerMember::*)() const>(&StepVisual_MarkerMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_MarkerMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_MarkerSelect , shared_ptr<StepVisual_MarkerSelect> , StepData_SelectType>>(m.attr("StepVisual_MarkerSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_MarkerSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_MarkerSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_MarkerSelect::CaseNum),
             R"#(Recognizes a MarkerSelect Kind Entity that is : 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepVisual_MarkerSelect::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepVisual_MarkerSelect::*)() const>(&StepVisual_MarkerSelect::NewMember),
             R"#(Returns a new MarkerMember)#" )
        .def("CaseMem",
             (Standard_Integer (StepVisual_MarkerSelect::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepVisual_MarkerSelect::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepVisual_MarkerSelect::CaseMem),
             R"#(Returns 1 for a SelectMember enum, named MARKER_TYPE)#"  , py::arg("sm"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_NullStyleMember ,opencascade::handle<StepVisual_NullStyleMember> , StepData_SelectInt>>(m.attr("StepVisual_NullStyleMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepVisual_NullStyleMember::*)() const) static_cast<Standard_Boolean (StepVisual_NullStyleMember::*)() const>(&StepVisual_NullStyleMember::HasName),
             R"#(None)#" )
        .def("Name",
             (Standard_CString (StepVisual_NullStyleMember::*)() const) static_cast<Standard_CString (StepVisual_NullStyleMember::*)() const>(&StepVisual_NullStyleMember::Name),
             R"#(None)#" )
        .def("SetName",
             (Standard_Boolean (StepVisual_NullStyleMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepVisual_NullStyleMember::*)( const Standard_CString ) >(&StepVisual_NullStyleMember::SetName),
             R"#(None)#"  , py::arg(""))
        .def("Kind",
             (Standard_Integer (StepVisual_NullStyleMember::*)() const) static_cast<Standard_Integer (StepVisual_NullStyleMember::*)() const>(&StepVisual_NullStyleMember::Kind),
             R"#(None)#" )
        .def("EnumText",
             (Standard_CString (StepVisual_NullStyleMember::*)() const) static_cast<Standard_CString (StepVisual_NullStyleMember::*)() const>(&StepVisual_NullStyleMember::EnumText),
             R"#(None)#" )
        .def("SetEnumText",
             (void (StepVisual_NullStyleMember::*)( const Standard_Integer , const Standard_CString ) ) static_cast<void (StepVisual_NullStyleMember::*)( const Standard_Integer , const Standard_CString ) >(&StepVisual_NullStyleMember::SetEnumText),
             R"#(None)#"  , py::arg("theValue"),  py::arg("theText"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_NullStyleMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_NullStyleMember::*)() const>(&StepVisual_NullStyleMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_NullStyleMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PlanarExtent ,opencascade::handle<StepVisual_PlanarExtent> , StepGeom_GeometricRepresentationItem>>(m.attr("StepVisual_PlanarExtent"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PlanarExtent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PlanarExtent::*)() const>(&StepVisual_PlanarExtent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PlanarExtent::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PointStyle ,opencascade::handle<StepVisual_PointStyle> , Standard_Transient>>(m.attr("StepVisual_PointStyle"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PointStyle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PointStyle::*)() const>(&StepVisual_PointStyle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PointStyle::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PreDefinedItem ,opencascade::handle<StepVisual_PreDefinedItem> , Standard_Transient>>(m.attr("StepVisual_PreDefinedItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PreDefinedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PreDefinedItem::*)() const>(&StepVisual_PreDefinedItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PreDefinedItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationLayerAssignment ,opencascade::handle<StepVisual_PresentationLayerAssignment> , Standard_Transient>>(m.attr("StepVisual_PresentationLayerAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentationLayerAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentationLayerAssignment::*)() const>(&StepVisual_PresentationLayerAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentationLayerAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationLayerUsage ,opencascade::handle<StepVisual_PresentationLayerUsage> , Standard_Transient>>(m.attr("StepVisual_PresentationLayerUsage"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentationLayerUsage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentationLayerUsage::*)() const>(&StepVisual_PresentationLayerUsage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentationLayerUsage::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationRepresentation ,opencascade::handle<StepVisual_PresentationRepresentation> , StepRepr_Representation>>(m.attr("StepVisual_PresentationRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentationRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentationRepresentation::*)() const>(&StepVisual_PresentationRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentationRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationRepresentationSelect , shared_ptr<StepVisual_PresentationRepresentationSelect> , StepData_SelectType>>(m.attr("StepVisual_PresentationRepresentationSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_PresentationRepresentationSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_PresentationRepresentationSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_PresentationRepresentationSelect::CaseNum),
             R"#(Recognizes a PresentationRepresentationSelect Kind Entity that is : 1 -> PresentationRepresentation 2 -> PresentationSet 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationSet ,opencascade::handle<StepVisual_PresentationSet> , Standard_Transient>>(m.attr("StepVisual_PresentationSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentationSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentationSet::*)() const>(&StepVisual_PresentationSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentationSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationSize ,opencascade::handle<StepVisual_PresentationSize> , Standard_Transient>>(m.attr("StepVisual_PresentationSize"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentationSize::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentationSize::*)() const>(&StepVisual_PresentationSize::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentationSize::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationSizeAssignmentSelect , shared_ptr<StepVisual_PresentationSizeAssignmentSelect> , StepData_SelectType>>(m.attr("StepVisual_PresentationSizeAssignmentSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_PresentationSizeAssignmentSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_PresentationSizeAssignmentSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_PresentationSizeAssignmentSelect::CaseNum),
             R"#(Recognizes a PresentationSizeAssignmentSelect Kind Entity that is : 1 -> PresentationView 2 -> PresentationArea 3 -> AreaInSet 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationStyleAssignment ,opencascade::handle<StepVisual_PresentationStyleAssignment> , Standard_Transient>>(m.attr("StepVisual_PresentationStyleAssignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentationStyleAssignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentationStyleAssignment::*)() const>(&StepVisual_PresentationStyleAssignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentationStyleAssignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationStyleSelect , shared_ptr<StepVisual_PresentationStyleSelect> , StepData_SelectType>>(m.attr("StepVisual_PresentationStyleSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_PresentationStyleSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_PresentationStyleSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_PresentationStyleSelect::CaseNum),
             R"#(Recognizes a PresentationStyleSelect Kind Entity that is : 1 -> PointStyle 2 -> CurveStyle 3 -> SurfaceStyleUsage 4 -> SymbolStyle 5 -> FillAreaStyle 6 -> TextStyle 7 -> NullStyle 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StepVisual_PresentedItem ,opencascade::handle<StepVisual_PresentedItem>>(m,"StepVisual_PresentedItem");

    static_cast<py::class_<StepVisual_PresentedItem ,opencascade::handle<StepVisual_PresentedItem> , Standard_Transient>>(m.attr("StepVisual_PresentedItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentedItem::*)() const>(&StepVisual_PresentedItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentedItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentedItemRepresentation ,opencascade::handle<StepVisual_PresentedItemRepresentation> , Standard_Transient>>(m.attr("StepVisual_PresentedItemRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentedItemRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentedItemRepresentation::*)() const>(&StepVisual_PresentedItemRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentedItemRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_StyleContextSelect , shared_ptr<StepVisual_StyleContextSelect> , StepData_SelectType>>(m.attr("StepVisual_StyleContextSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_StyleContextSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_StyleContextSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_StyleContextSelect::CaseNum),
             R"#(Recognizes a StyleContextSelect Kind Entity that is : 1 -> Representation 2 -> RepresentationItem 3 -> PresentationSet 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_StyledItem ,opencascade::handle<StepVisual_StyledItem> , StepRepr_RepresentationItem>>(m.attr("StepVisual_StyledItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Styles",
             (const opencascade::handle<StepVisual_HArray1OfPresentationStyleAssignment> & (StepVisual_StyledItem::*)() const) static_cast<const opencascade::handle<StepVisual_HArray1OfPresentationStyleAssignment> & (StepVisual_StyledItem::*)() const>(&StepVisual_StyledItem::Styles),
             R"#(None)#" )
        .def("StylesValue",
             (const opencascade::handle<StepVisual_PresentationStyleAssignment> & (StepVisual_StyledItem::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<StepVisual_PresentationStyleAssignment> & (StepVisual_StyledItem::*)( const Standard_Integer ) const>(&StepVisual_StyledItem::StylesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbStyles",
             (Standard_Integer (StepVisual_StyledItem::*)() const) static_cast<Standard_Integer (StepVisual_StyledItem::*)() const>(&StepVisual_StyledItem::NbStyles),
             R"#(None)#" )
        .def("Item",
             (const opencascade::handle<StepRepr_RepresentationItem> & (StepVisual_StyledItem::*)() const) static_cast<const opencascade::handle<StepRepr_RepresentationItem> & (StepVisual_StyledItem::*)() const>(&StepVisual_StyledItem::Item),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_StyledItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_StyledItem::*)() const>(&StepVisual_StyledItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_StyledItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_StyledItemTarget , shared_ptr<StepVisual_StyledItemTarget> , StepData_SelectType>>(m.attr("StepVisual_StyledItemTarget"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_StyledItemTarget::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_StyledItemTarget::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_StyledItemTarget::CaseNum),
             R"#(Recognizes a StyledItemTarget Kind Entity that is : 1 -> GeometricRepresentationItem 2 -> MappedItem 3 -> Representation 4 -> TopologicalRepresentationItem 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_SurfaceSideStyle ,opencascade::handle<StepVisual_SurfaceSideStyle> , Standard_Transient>>(m.attr("StepVisual_SurfaceSideStyle"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_SurfaceSideStyle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_SurfaceSideStyle::*)() const>(&StepVisual_SurfaceSideStyle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_SurfaceSideStyle::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_SurfaceStyleBoundary ,opencascade::handle<StepVisual_SurfaceStyleBoundary> , Standard_Transient>>(m.attr("StepVisual_SurfaceStyleBoundary"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleBoundary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleBoundary::*)() const>(&StepVisual_SurfaceStyleBoundary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_SurfaceStyleBoundary::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_SurfaceStyleControlGrid ,opencascade::handle<StepVisual_SurfaceStyleControlGrid> , Standard_Transient>>(m.attr("StepVisual_SurfaceStyleControlGrid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleControlGrid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleControlGrid::*)() const>(&StepVisual_SurfaceStyleControlGrid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_SurfaceStyleControlGrid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_SurfaceStyleElementSelect , shared_ptr<StepVisual_SurfaceStyleElementSelect> , StepData_SelectType>>(m.attr("StepVisual_SurfaceStyleElementSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_SurfaceStyleElementSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_SurfaceStyleElementSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_SurfaceStyleElementSelect::CaseNum),
             R"#(Recognizes a SurfaceStyleElementSelect Kind Entity that is : 1 -> SurfaceStyleFillArea 2 -> SurfaceStyleBoundary 3 -> SurfaceStyleParameterLine 4 -> SurfaceStyleSilhouette 5 -> SurfaceStyleSegmentationCurve 6 -> SurfaceStyleControlGrid 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_SurfaceStyleFillArea ,opencascade::handle<StepVisual_SurfaceStyleFillArea> , Standard_Transient>>(m.attr("StepVisual_SurfaceStyleFillArea"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleFillArea::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleFillArea::*)() const>(&StepVisual_SurfaceStyleFillArea::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_SurfaceStyleFillArea::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_SurfaceStyleParameterLine ,opencascade::handle<StepVisual_SurfaceStyleParameterLine> , Standard_Transient>>(m.attr("StepVisual_SurfaceStyleParameterLine"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleParameterLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleParameterLine::*)() const>(&StepVisual_SurfaceStyleParameterLine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_SurfaceStyleParameterLine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_SurfaceStyleSegmentationCurve ,opencascade::handle<StepVisual_SurfaceStyleSegmentationCurve> , Standard_Transient>>(m.attr("StepVisual_SurfaceStyleSegmentationCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleSegmentationCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleSegmentationCurve::*)() const>(&StepVisual_SurfaceStyleSegmentationCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_SurfaceStyleSegmentationCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_SurfaceStyleSilhouette ,opencascade::handle<StepVisual_SurfaceStyleSilhouette> , Standard_Transient>>(m.attr("StepVisual_SurfaceStyleSilhouette"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleSilhouette::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleSilhouette::*)() const>(&StepVisual_SurfaceStyleSilhouette::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_SurfaceStyleSilhouette::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_SurfaceStyleUsage ,opencascade::handle<StepVisual_SurfaceStyleUsage> , Standard_Transient>>(m.attr("StepVisual_SurfaceStyleUsage"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleUsage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_SurfaceStyleUsage::*)() const>(&StepVisual_SurfaceStyleUsage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_SurfaceStyleUsage::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_Template ,opencascade::handle<StepVisual_Template> , StepRepr_Representation>>(m.attr("StepVisual_Template"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_Template::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_Template::*)() const>(&StepVisual_Template::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_Template::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_TemplateInstance ,opencascade::handle<StepVisual_TemplateInstance> , StepRepr_MappedItem>>(m.attr("StepVisual_TemplateInstance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_TemplateInstance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_TemplateInstance::*)() const>(&StepVisual_TemplateInstance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_TemplateInstance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_TessellatedItem ,opencascade::handle<StepVisual_TessellatedItem> , StepGeom_GeometricRepresentationItem>>(m.attr("StepVisual_TessellatedItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_TessellatedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_TessellatedItem::*)() const>(&StepVisual_TessellatedItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_TessellatedItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_TextLiteral ,opencascade::handle<StepVisual_TextLiteral> , StepGeom_GeometricRepresentationItem>>(m.attr("StepVisual_TextLiteral"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_TextLiteral::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_TextLiteral::*)() const>(&StepVisual_TextLiteral::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_TextLiteral::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_TextOrCharacter , shared_ptr<StepVisual_TextOrCharacter> , StepData_SelectType>>(m.attr("StepVisual_TextOrCharacter"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepVisual_TextOrCharacter::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepVisual_TextOrCharacter::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepVisual_TextOrCharacter::CaseNum),
             R"#(Recognizes a TextOrCharacter Kind Entity that is : 1 -> AnnotationText 2 -> CompositeText 3 -> TextLiteral 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_TextStyle ,opencascade::handle<StepVisual_TextStyle> , Standard_Transient>>(m.attr("StepVisual_TextStyle"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_TextStyle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_TextStyle::*)() const>(&StepVisual_TextStyle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_TextStyle::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_TextStyleForDefinedFont ,opencascade::handle<StepVisual_TextStyleForDefinedFont> , Standard_Transient>>(m.attr("StepVisual_TextStyleForDefinedFont"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_TextStyleForDefinedFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_TextStyleForDefinedFont::*)() const>(&StepVisual_TextStyleForDefinedFont::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_TextStyleForDefinedFont::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_ViewVolume ,opencascade::handle<StepVisual_ViewVolume> , Standard_Transient>>(m.attr("StepVisual_ViewVolume"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_ViewVolume::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_ViewVolume::*)() const>(&StepVisual_ViewVolume::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_ViewVolume::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_AnnotationOccurrence ,opencascade::handle<StepVisual_AnnotationOccurrence> , StepVisual_StyledItem>>(m.attr("StepVisual_AnnotationOccurrence"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_AnnotationOccurrence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_AnnotationOccurrence::*)() const>(&StepVisual_AnnotationOccurrence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_AnnotationOccurrence::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_BackgroundColour ,opencascade::handle<StepVisual_BackgroundColour> , StepVisual_Colour>>(m.attr("StepVisual_BackgroundColour"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_BackgroundColour::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_BackgroundColour::*)() const>(&StepVisual_BackgroundColour::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_BackgroundColour::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraImage2dWithScale ,opencascade::handle<StepVisual_CameraImage2dWithScale> , StepVisual_CameraImage>>(m.attr("StepVisual_CameraImage2dWithScale"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CameraImage2dWithScale::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CameraImage2dWithScale::*)() const>(&StepVisual_CameraImage2dWithScale::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CameraImage2dWithScale::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraImage3dWithScale ,opencascade::handle<StepVisual_CameraImage3dWithScale> , StepVisual_CameraImage>>(m.attr("StepVisual_CameraImage3dWithScale"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CameraImage3dWithScale::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CameraImage3dWithScale::*)() const>(&StepVisual_CameraImage3dWithScale::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CameraImage3dWithScale::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraModelD2 ,opencascade::handle<StepVisual_CameraModelD2> , StepVisual_CameraModel>>(m.attr("StepVisual_CameraModelD2"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CameraModelD2::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CameraModelD2::*)() const>(&StepVisual_CameraModelD2::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CameraModelD2::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraModelD3 ,opencascade::handle<StepVisual_CameraModelD3> , StepVisual_CameraModel>>(m.attr("StepVisual_CameraModelD3"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CameraModelD3::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CameraModelD3::*)() const>(&StepVisual_CameraModelD3::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CameraModelD3::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation ,opencascade::handle<StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation> , StepVisual_DraughtingModel>>(m.attr("StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::*)() const>(&StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_ColourSpecification ,opencascade::handle<StepVisual_ColourSpecification> , StepVisual_Colour>>(m.attr("StepVisual_ColourSpecification"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_ColourSpecification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_ColourSpecification::*)() const>(&StepVisual_ColourSpecification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_ColourSpecification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CompositeTextWithExtent ,opencascade::handle<StepVisual_CompositeTextWithExtent> , StepVisual_CompositeText>>(m.attr("StepVisual_CompositeTextWithExtent"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CompositeTextWithExtent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CompositeTextWithExtent::*)() const>(&StepVisual_CompositeTextWithExtent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CompositeTextWithExtent::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_ContextDependentInvisibility ,opencascade::handle<StepVisual_ContextDependentInvisibility> , StepVisual_Invisibility>>(m.attr("StepVisual_ContextDependentInvisibility"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_ContextDependentInvisibility::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_ContextDependentInvisibility::*)() const>(&StepVisual_ContextDependentInvisibility::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_ContextDependentInvisibility::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CoordinatesList ,opencascade::handle<StepVisual_CoordinatesList> , StepVisual_TessellatedItem>>(m.attr("StepVisual_CoordinatesList"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CoordinatesList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CoordinatesList::*)() const>(&StepVisual_CoordinatesList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CoordinatesList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_MechanicalDesignGeometricPresentationRepresentation ,opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationRepresentation> , StepVisual_PresentationRepresentation>>(m.attr("StepVisual_MechanicalDesignGeometricPresentationRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_MechanicalDesignGeometricPresentationRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_MechanicalDesignGeometricPresentationRepresentation::*)() const>(&StepVisual_MechanicalDesignGeometricPresentationRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_MechanicalDesignGeometricPresentationRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_OverRidingStyledItem ,opencascade::handle<StepVisual_OverRidingStyledItem> , StepVisual_StyledItem>>(m.attr("StepVisual_OverRidingStyledItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_OverRidingStyledItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_OverRidingStyledItem::*)() const>(&StepVisual_OverRidingStyledItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_OverRidingStyledItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PlanarBox ,opencascade::handle<StepVisual_PlanarBox> , StepVisual_PlanarExtent>>(m.attr("StepVisual_PlanarBox"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PlanarBox::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PlanarBox::*)() const>(&StepVisual_PlanarBox::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PlanarBox::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PreDefinedColour ,opencascade::handle<StepVisual_PreDefinedColour> , StepVisual_Colour>>(m.attr("StepVisual_PreDefinedColour"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PreDefinedColour::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PreDefinedColour::*)() const>(&StepVisual_PreDefinedColour::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PreDefinedColour::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PreDefinedCurveFont ,opencascade::handle<StepVisual_PreDefinedCurveFont> , StepVisual_PreDefinedItem>>(m.attr("StepVisual_PreDefinedCurveFont"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PreDefinedCurveFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PreDefinedCurveFont::*)() const>(&StepVisual_PreDefinedCurveFont::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PreDefinedCurveFont::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PreDefinedTextFont ,opencascade::handle<StepVisual_PreDefinedTextFont> , StepVisual_PreDefinedItem>>(m.attr("StepVisual_PreDefinedTextFont"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PreDefinedTextFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PreDefinedTextFont::*)() const>(&StepVisual_PreDefinedTextFont::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PreDefinedTextFont::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationArea ,opencascade::handle<StepVisual_PresentationArea> , StepVisual_PresentationRepresentation>>(m.attr("StepVisual_PresentationArea"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentationArea::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentationArea::*)() const>(&StepVisual_PresentationArea::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentationArea::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationStyleByContext ,opencascade::handle<StepVisual_PresentationStyleByContext> , StepVisual_PresentationStyleAssignment>>(m.attr("StepVisual_PresentationStyleByContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentationStyleByContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentationStyleByContext::*)() const>(&StepVisual_PresentationStyleByContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentationStyleByContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_PresentationView ,opencascade::handle<StepVisual_PresentationView> , StepVisual_PresentationRepresentation>>(m.attr("StepVisual_PresentationView"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_PresentationView::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_PresentationView::*)() const>(&StepVisual_PresentationView::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_PresentationView::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_TessellatedAnnotationOccurrence ,opencascade::handle<StepVisual_TessellatedAnnotationOccurrence> , StepVisual_StyledItem>>(m.attr("StepVisual_TessellatedAnnotationOccurrence"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_TessellatedAnnotationOccurrence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_TessellatedAnnotationOccurrence::*)() const>(&StepVisual_TessellatedAnnotationOccurrence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_TessellatedAnnotationOccurrence::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_TessellatedCurveSet ,opencascade::handle<StepVisual_TessellatedCurveSet> , StepVisual_TessellatedItem>>(m.attr("StepVisual_TessellatedCurveSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_TessellatedCurveSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_TessellatedCurveSet::*)() const>(&StepVisual_TessellatedCurveSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_TessellatedCurveSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_TessellatedGeometricSet ,opencascade::handle<StepVisual_TessellatedGeometricSet> , StepVisual_TessellatedItem>>(m.attr("StepVisual_TessellatedGeometricSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_TessellatedGeometricSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_TessellatedGeometricSet::*)() const>(&StepVisual_TessellatedGeometricSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_TessellatedGeometricSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_TextStyleWithBoxCharacteristics ,opencascade::handle<StepVisual_TextStyleWithBoxCharacteristics> , StepVisual_TextStyle>>(m.attr("StepVisual_TextStyleWithBoxCharacteristics"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_TextStyleWithBoxCharacteristics::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_TextStyleWithBoxCharacteristics::*)() const>(&StepVisual_TextStyleWithBoxCharacteristics::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_TextStyleWithBoxCharacteristics::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_AnnotationCurveOccurrence ,opencascade::handle<StepVisual_AnnotationCurveOccurrence> , StepVisual_AnnotationOccurrence>>(m.attr("StepVisual_AnnotationCurveOccurrence"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_AnnotationCurveOccurrence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_AnnotationCurveOccurrence::*)() const>(&StepVisual_AnnotationCurveOccurrence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_AnnotationCurveOccurrence::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_AnnotationFillAreaOccurrence ,opencascade::handle<StepVisual_AnnotationFillAreaOccurrence> , StepVisual_AnnotationOccurrence>>(m.attr("StepVisual_AnnotationFillAreaOccurrence"))
    // constructors
    // custom constructors
    // methods
        .def("FillStyleTarget",
             (opencascade::handle<StepGeom_GeometricRepresentationItem> (StepVisual_AnnotationFillAreaOccurrence::*)() const) static_cast<opencascade::handle<StepGeom_GeometricRepresentationItem> (StepVisual_AnnotationFillAreaOccurrence::*)() const>(&StepVisual_AnnotationFillAreaOccurrence::FillStyleTarget),
             R"#(Returns field fill_style_target)#" )
        .def("SetFillStyleTarget",
             (void (StepVisual_AnnotationFillAreaOccurrence::*)( const opencascade::handle<StepGeom_GeometricRepresentationItem> & ) ) static_cast<void (StepVisual_AnnotationFillAreaOccurrence::*)( const opencascade::handle<StepGeom_GeometricRepresentationItem> & ) >(&StepVisual_AnnotationFillAreaOccurrence::SetFillStyleTarget),
             R"#(Set field fill_style_target)#"  , py::arg("theTarget"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_AnnotationFillAreaOccurrence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_AnnotationFillAreaOccurrence::*)() const>(&StepVisual_AnnotationFillAreaOccurrence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_AnnotationFillAreaOccurrence::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_AnnotationPlane ,opencascade::handle<StepVisual_AnnotationPlane> , StepVisual_AnnotationOccurrence>>(m.attr("StepVisual_AnnotationPlane"))
    // constructors
    // custom constructors
    // methods
        .def("Elements",
             (opencascade::handle<StepVisual_HArray1OfAnnotationPlaneElement> (StepVisual_AnnotationPlane::*)() const) static_cast<opencascade::handle<StepVisual_HArray1OfAnnotationPlaneElement> (StepVisual_AnnotationPlane::*)() const>(&StepVisual_AnnotationPlane::Elements),
             R"#(Returns field Elements)#" )
        .def("SetElements",
             (void (StepVisual_AnnotationPlane::*)( const opencascade::handle<StepVisual_HArray1OfAnnotationPlaneElement> & ) ) static_cast<void (StepVisual_AnnotationPlane::*)( const opencascade::handle<StepVisual_HArray1OfAnnotationPlaneElement> & ) >(&StepVisual_AnnotationPlane::SetElements),
             R"#(Set field Elements)#"  , py::arg("theElements"))
        .def("NbElements",
             (Standard_Integer (StepVisual_AnnotationPlane::*)() const) static_cast<Standard_Integer (StepVisual_AnnotationPlane::*)() const>(&StepVisual_AnnotationPlane::NbElements),
             R"#(Returns number of Elements)#" )
        .def("ElementsValue",
             (StepVisual_AnnotationPlaneElement (StepVisual_AnnotationPlane::*)( const Standard_Integer ) const) static_cast<StepVisual_AnnotationPlaneElement (StepVisual_AnnotationPlane::*)( const Standard_Integer ) const>(&StepVisual_AnnotationPlane::ElementsValue),
             R"#(Returns Elements with the given number)#"  , py::arg("theNum"))
        .def("SetElementsValue",
             (void (StepVisual_AnnotationPlane::*)( const Standard_Integer , const StepVisual_AnnotationPlaneElement & ) ) static_cast<void (StepVisual_AnnotationPlane::*)( const Standard_Integer , const StepVisual_AnnotationPlaneElement & ) >(&StepVisual_AnnotationPlane::SetElementsValue),
             R"#(Sets Elements with given number)#"  , py::arg("theNum"),  py::arg("theItem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_AnnotationPlane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_AnnotationPlane::*)() const>(&StepVisual_AnnotationPlane::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_AnnotationPlane::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_AnnotationTextOccurrence ,opencascade::handle<StepVisual_AnnotationTextOccurrence> , StepVisual_AnnotationOccurrence>>(m.attr("StepVisual_AnnotationTextOccurrence"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_AnnotationTextOccurrence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_AnnotationTextOccurrence::*)() const>(&StepVisual_AnnotationTextOccurrence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_AnnotationTextOccurrence::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_CameraModelD3MultiClipping ,opencascade::handle<StepVisual_CameraModelD3MultiClipping> , StepVisual_CameraModelD3>>(m.attr("StepVisual_CameraModelD3MultiClipping"))
    // constructors
    // custom constructors
    // methods
        .def("SetShapeClipping",
             (void (StepVisual_CameraModelD3MultiClipping::*)( const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect> & ) ) static_cast<void (StepVisual_CameraModelD3MultiClipping::*)( const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect> & ) >(&StepVisual_CameraModelD3MultiClipping::SetShapeClipping),
             R"#(None)#"  , py::arg("theShapeClipping"))
        .def("ShapeClipping",
             (const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect> (StepVisual_CameraModelD3MultiClipping::*)() ) static_cast<const opencascade::handle<StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect> (StepVisual_CameraModelD3MultiClipping::*)() >(&StepVisual_CameraModelD3MultiClipping::ShapeClipping),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_CameraModelD3MultiClipping::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_CameraModelD3MultiClipping::*)() const>(&StepVisual_CameraModelD3MultiClipping::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_CameraModelD3MultiClipping::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_ColourRgb ,opencascade::handle<StepVisual_ColourRgb> , StepVisual_ColourSpecification>>(m.attr("StepVisual_ColourRgb"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_ColourRgb::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_ColourRgb::*)() const>(&StepVisual_ColourRgb::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_ColourRgb::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_ContextDependentOverRidingStyledItem ,opencascade::handle<StepVisual_ContextDependentOverRidingStyledItem> , StepVisual_OverRidingStyledItem>>(m.attr("StepVisual_ContextDependentOverRidingStyledItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_ContextDependentOverRidingStyledItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_ContextDependentOverRidingStyledItem::*)() const>(&StepVisual_ContextDependentOverRidingStyledItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_ContextDependentOverRidingStyledItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_DraughtingAnnotationOccurrence ,opencascade::handle<StepVisual_DraughtingAnnotationOccurrence> , StepVisual_AnnotationOccurrence>>(m.attr("StepVisual_DraughtingAnnotationOccurrence"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_DraughtingAnnotationOccurrence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_DraughtingAnnotationOccurrence::*)() const>(&StepVisual_DraughtingAnnotationOccurrence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_DraughtingAnnotationOccurrence::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_DraughtingPreDefinedColour ,opencascade::handle<StepVisual_DraughtingPreDefinedColour> , StepVisual_PreDefinedColour>>(m.attr("StepVisual_DraughtingPreDefinedColour"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_DraughtingPreDefinedColour::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_DraughtingPreDefinedColour::*)() const>(&StepVisual_DraughtingPreDefinedColour::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_DraughtingPreDefinedColour::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_DraughtingPreDefinedCurveFont ,opencascade::handle<StepVisual_DraughtingPreDefinedCurveFont> , StepVisual_PreDefinedCurveFont>>(m.attr("StepVisual_DraughtingPreDefinedCurveFont"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_DraughtingPreDefinedCurveFont::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_DraughtingPreDefinedCurveFont::*)() const>(&StepVisual_DraughtingPreDefinedCurveFont::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_DraughtingPreDefinedCurveFont::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_MechanicalDesignGeometricPresentationArea ,opencascade::handle<StepVisual_MechanicalDesignGeometricPresentationArea> , StepVisual_PresentationArea>>(m.attr("StepVisual_MechanicalDesignGeometricPresentationArea"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_MechanicalDesignGeometricPresentationArea::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_MechanicalDesignGeometricPresentationArea::*)() const>(&StepVisual_MechanicalDesignGeometricPresentationArea::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_MechanicalDesignGeometricPresentationArea::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem ,opencascade::handle<StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem> , StepVisual_AnnotationCurveOccurrence>>(m.attr("StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::*)() const>(&StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepVisual_Array1OfDirectionCountSelect.hxx
// ./opencascade/StepVisual_SurfaceStyleUsage.hxx
// ./opencascade/StepVisual_DraughtingCallout.hxx
// ./opencascade/StepVisual_PresentationLayerAssignment.hxx
// ./opencascade/StepVisual_HArray1OfFillStyleSelect.hxx
// ./opencascade/StepVisual_HArray1OfInvisibleItem.hxx
// ./opencascade/StepVisual_MechanicalDesignGeometricPresentationArea.hxx
// ./opencascade/StepVisual_PresentationStyleSelect.hxx
// ./opencascade/StepVisual_CompositeTextWithExtent.hxx
// ./opencascade/StepVisual_HArray1OfPresentationStyleAssignment.hxx
// ./opencascade/StepVisual_FillStyleSelect.hxx
// ./opencascade/StepVisual_StyleContextSelect.hxx
// ./opencascade/StepVisual_AnnotationPlane.hxx
// ./opencascade/StepVisual_SurfaceSide.hxx
// ./opencascade/StepVisual_PresentationSize.hxx
// ./opencascade/StepVisual_ColourSpecification.hxx
// ./opencascade/StepVisual_ViewVolume.hxx
// ./opencascade/StepVisual_TemplateInstance.hxx
// ./opencascade/StepVisual_CurveStyleFont.hxx
// ./opencascade/StepVisual_CharacterizedObjectAndCharacterizedRepresentationAndDraughtingModelAndRepresentation.hxx
// ./opencascade/StepVisual_TextStyle.hxx
// ./opencascade/StepVisual_DraughtingCalloutElement.hxx
// ./opencascade/StepVisual_Array1OfTextOrCharacter.hxx
// ./opencascade/StepVisual_AnnotationText.hxx
// ./opencascade/StepVisual_CameraModelD3MultiClippingUnion.hxx
// ./opencascade/StepVisual_ExternallyDefinedTextFont.hxx
// ./opencascade/StepVisual_PresentationLayerUsage.hxx
// ./opencascade/StepVisual_SurfaceStyleParameterLine.hxx
// ./opencascade/StepVisual_InvisibilityContext.hxx
// ./opencascade/StepVisual_AnnotationFillAreaOccurrence.hxx
// ./opencascade/StepVisual_FillAreaStyleColour.hxx
// ./opencascade/StepVisual_CameraImage2dWithScale.hxx
// ./opencascade/StepVisual_Array1OfDraughtingCalloutElement.hxx
// ./opencascade/StepVisual_CurveStyleFontPattern.hxx
// ./opencascade/StepVisual_CameraModelD3MultiClippingInterectionSelect.hxx
// ./opencascade/StepVisual_SurfaceSideStyle.hxx
// ./opencascade/StepVisual_PresentationSet.hxx
// ./opencascade/StepVisual_CameraUsage.hxx
// ./opencascade/StepVisual_HArray1OfCameraModelD3MultiClippingInterectionSelect.hxx
// ./opencascade/StepVisual_Array1OfFillStyleSelect.hxx
// ./opencascade/StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx
// ./opencascade/StepVisual_DraughtingModel.hxx
// ./opencascade/StepVisual_TextLiteral.hxx
// ./opencascade/StepVisual_PresentationStyleByContext.hxx
// ./opencascade/StepVisual_PresentationSizeAssignmentSelect.hxx
// ./opencascade/StepVisual_PlanarExtent.hxx
// ./opencascade/StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect.hxx
// ./opencascade/StepVisual_DirectionCountSelect.hxx
// ./opencascade/StepVisual_PreDefinedColour.hxx
// ./opencascade/StepVisual_DraughtingPreDefinedColour.hxx
// ./opencascade/StepVisual_CameraModelD3MultiClippingUnionSelect.hxx
// ./opencascade/StepVisual_AreaOrView.hxx
// ./opencascade/StepVisual_Array1OfAnnotationPlaneElement.hxx
// ./opencascade/StepVisual_CameraModelD3MultiClipping.hxx
// ./opencascade/StepVisual_Array1OfBoxCharacteristicSelect.hxx
// ./opencascade/StepVisual_HArray1OfDirectionCountSelect.hxx
// ./opencascade/StepVisual_AnnotationCurveOccurrence.hxx
// ./opencascade/StepVisual_ContextDependentOverRidingStyledItem.hxx
// ./opencascade/StepVisual_CameraModelD3.hxx
// ./opencascade/StepVisual_NullStyle.hxx
// ./opencascade/StepVisual_TextPath.hxx
// ./opencascade/StepVisual_InvisibleItem.hxx
// ./opencascade/StepVisual_Array1OfInvisibleItem.hxx
// ./opencascade/StepVisual_HArray1OfDraughtingCalloutElement.hxx
// ./opencascade/StepVisual_BoxCharacteristicSelect.hxx
// ./opencascade/StepVisual_LayeredItem.hxx
// ./opencascade/StepVisual_Array1OfStyleContextSelect.hxx
// ./opencascade/StepVisual_Array1OfCurveStyleFontPattern.hxx
// ./opencascade/StepVisual_ContextDependentInvisibility.hxx
// ./opencascade/StepVisual_NullStyleMember.hxx
// ./opencascade/StepVisual_FontSelect.hxx
// ./opencascade/StepVisual_CameraImage.hxx
// ./opencascade/StepVisual_TessellatedCurveSet.hxx
// ./opencascade/StepVisual_AnnotationCurveOccurrenceAndAnnotationOccurrenceAndGeomReprItemAndReprItemAndStyledItem.hxx
// ./opencascade/StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect.hxx
// ./opencascade/StepVisual_SurfaceStyleSilhouette.hxx
// ./opencascade/StepVisual_SurfaceStyleFillArea.hxx
// ./opencascade/StepVisual_CameraModel.hxx
// ./opencascade/StepVisual_PreDefinedItem.hxx
// ./opencascade/StepVisual_CurveStyleFontSelect.hxx
// ./opencascade/StepVisual_CameraImage3dWithScale.hxx
// ./opencascade/StepVisual_PresentationRepresentationSelect.hxx
// ./opencascade/StepVisual_OverRidingStyledItem.hxx
// ./opencascade/StepVisual_DraughtingPreDefinedCurveFont.hxx
// ./opencascade/StepVisual_TextOrCharacter.hxx
// ./opencascade/StepVisual_HArray1OfTextOrCharacter.hxx
// ./opencascade/StepVisual_PointStyle.hxx
// ./opencascade/StepVisual_CoordinatesList.hxx
// ./opencascade/StepVisual_Invisibility.hxx
// ./opencascade/StepVisual_PreDefinedTextFont.hxx
// ./opencascade/StepVisual_BackgroundColour.hxx
// ./opencascade/StepVisual_AnnotationOccurrence.hxx
// ./opencascade/StepVisual_SurfaceStyleControlGrid.hxx
// ./opencascade/StepVisual_AnnotationPlaneElement.hxx
// ./opencascade/StepVisual_TessellatedAnnotationOccurrence.hxx
// ./opencascade/StepVisual_FillAreaStyle.hxx
// ./opencascade/StepVisual_CameraModelD3MultiClippingIntersection.hxx
// ./opencascade/StepVisual_ColourRgb.hxx
// ./opencascade/StepVisual_SurfaceStyleBoundary.hxx
// ./opencascade/StepVisual_MarkerSelect.hxx
// ./opencascade/StepVisual_AnnotationTextOccurrence.hxx
// ./opencascade/StepVisual_CentralOrParallel.hxx
// ./opencascade/StepVisual_HArray1OfBoxCharacteristicSelect.hxx
// ./opencascade/StepVisual_PresentedItem.hxx
// ./opencascade/StepVisual_HArray1OfPresentationStyleSelect.hxx
// ./opencascade/StepVisual_MarkerType.hxx
// ./opencascade/StepVisual_HArray1OfLayeredItem.hxx
// ./opencascade/StepVisual_HArray1OfSurfaceStyleElementSelect.hxx
// ./opencascade/StepVisual_AnnotationFillArea.hxx
// ./opencascade/StepVisual_TessellatedItem.hxx
// ./opencascade/StepVisual_HArray1OfCameraModelD3MultiClippingUnionSelect.hxx
// ./opencascade/StepVisual_DraughtingAnnotationOccurrence.hxx
// ./opencascade/StepVisual_StyledItem.hxx
// ./opencascade/StepVisual_PresentationStyleAssignment.hxx
// ./opencascade/StepVisual_AreaInSet.hxx
// ./opencascade/StepVisual_SurfaceStyleElementSelect.hxx
// ./opencascade/StepVisual_Array1OfSurfaceStyleElementSelect.hxx
// ./opencascade/StepVisual_PreDefinedCurveFont.hxx
// ./opencascade/StepVisual_CurveStyle.hxx
// ./opencascade/StepVisual_TextStyleWithBoxCharacteristics.hxx
// ./opencascade/StepVisual_Colour.hxx
// ./opencascade/StepVisual_HArray1OfAnnotationPlaneElement.hxx
// ./opencascade/StepVisual_PresentedItemRepresentation.hxx
// ./opencascade/StepVisual_CameraModelD2.hxx
// ./opencascade/StepVisual_PresentationRepresentation.hxx
// ./opencascade/StepVisual_CompositeText.hxx
// ./opencascade/StepVisual_MarkerMember.hxx
// ./opencascade/StepVisual_ExternallyDefinedCurveFont.hxx
// ./opencascade/StepVisual_PresentationView.hxx
// ./opencascade/StepVisual_Template.hxx
// ./opencascade/StepVisual_Array1OfLayeredItem.hxx
// ./opencascade/StepVisual_StyledItemTarget.hxx
// ./opencascade/StepVisual_HArray1OfCurveStyleFontPattern.hxx
// ./opencascade/StepVisual_SurfaceStyleSegmentationCurve.hxx
// ./opencascade/StepVisual_HArray1OfStyleContextSelect.hxx
// ./opencascade/StepVisual_Array1OfPresentationStyleSelect.hxx
// ./opencascade/StepVisual_TessellatedGeometricSet.hxx
// ./opencascade/StepVisual_TextStyleForDefinedFont.hxx
// ./opencascade/StepVisual_Array1OfPresentationStyleAssignment.hxx
// ./opencascade/StepVisual_PlanarBox.hxx
// ./opencascade/StepVisual_PresentationArea.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<StepVisual_DirectionCountSelect>(m,"StepVisual_Array1OfDirectionCountSelect");
    register_template_NCollection_Array1<StepVisual_TextOrCharacter>(m,"StepVisual_Array1OfTextOrCharacter");
    register_template_NCollection_Array1<StepVisual_DraughtingCalloutElement>(m,"StepVisual_Array1OfDraughtingCalloutElement");
    register_template_NCollection_Array1<StepVisual_FillStyleSelect>(m,"StepVisual_Array1OfFillStyleSelect");
    register_template_NCollection_Array1<StepVisual_CameraModelD3MultiClippingUnionSelect>(m,"StepVisual_Array1OfCameraModelD3MultiClippingUnionSelect");
    register_template_NCollection_Array1<StepVisual_AnnotationPlaneElement>(m,"StepVisual_Array1OfAnnotationPlaneElement");
    register_template_NCollection_Array1<StepVisual_BoxCharacteristicSelect>(m,"StepVisual_Array1OfBoxCharacteristicSelect");
    register_template_NCollection_Array1<StepVisual_InvisibleItem>(m,"StepVisual_Array1OfInvisibleItem");
    register_template_NCollection_Array1<StepVisual_StyleContextSelect>(m,"StepVisual_Array1OfStyleContextSelect");
    register_template_NCollection_Array1<opencascade::handle<StepVisual_CurveStyleFontPattern> >(m,"StepVisual_Array1OfCurveStyleFontPattern");
    register_template_NCollection_Vector<opencascade::handle<TColStd_HSequenceOfInteger> >(m,"StepVisual_VectorOfHSequenceOfInteger");
    register_template_NCollection_Array1<StepVisual_CameraModelD3MultiClippingInterectionSelect>(m,"StepVisual_Array1OfCameraModelD3MultiClippingInterectionSelect");
    register_template_NCollection_Array1<StepVisual_SurfaceStyleElementSelect>(m,"StepVisual_Array1OfSurfaceStyleElementSelect");
    register_template_NCollection_Array1<StepVisual_LayeredItem>(m,"StepVisual_Array1OfLayeredItem");
    register_template_NCollection_Array1<StepVisual_PresentationStyleSelect>(m,"StepVisual_Array1OfPresentationStyleSelect");
    register_template_NCollection_Array1<opencascade::handle<StepVisual_TessellatedItem> >(m,"StepVisual_Array1OfTessellatedItem");
    register_template_NCollection_Array1<opencascade::handle<StepVisual_PresentationStyleAssignment> >(m,"StepVisual_Array1OfPresentationStyleAssignment");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
