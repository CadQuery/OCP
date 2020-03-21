
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
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepElement_SurfaceSectionField.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_Representation.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>

// module includes
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepElement_Array1OfCurveElementEndReleasePacket.hxx>
#include <StepElement_Array1OfCurveElementSectionDefinition.hxx>
#include <StepElement_Array1OfHSequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember.hxx>
#include <StepElement_Array1OfMeasureOrUnspecifiedValue.hxx>
#include <StepElement_Array1OfSurfaceSection.hxx>
#include <StepElement_Array1OfVolumeElementPurpose.hxx>
#include <StepElement_Array1OfVolumeElementPurposeMember.hxx>
#include <StepElement_Array2OfCurveElementPurposeMember.hxx>
#include <StepElement_Array2OfSurfaceElementPurpose.hxx>
#include <StepElement_Array2OfSurfaceElementPurposeMember.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepElement_CurveEdge.hxx>
#include <StepElement_CurveElementEndReleasePacket.hxx>
#include <StepElement_CurveElementFreedom.hxx>
#include <StepElement_CurveElementFreedomMember.hxx>
#include <StepElement_CurveElementPurpose.hxx>
#include <StepElement_CurveElementPurposeMember.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepElement_CurveElementSectionDerivedDefinitions.hxx>
#include <StepElement_Element2dShape.hxx>
#include <StepElement_ElementAspect.hxx>
#include <StepElement_ElementAspectMember.hxx>
#include <StepElement_ElementDescriptor.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <StepElement_ElementOrder.hxx>
#include <StepElement_ElementVolume.hxx>
#include <StepElement_EnumeratedCurveElementFreedom.hxx>
#include <StepElement_EnumeratedCurveElementPurpose.hxx>
#include <StepElement_EnumeratedSurfaceElementPurpose.hxx>
#include <StepElement_EnumeratedVolumeElementPurpose.hxx>
#include <StepElement_HArray1OfCurveElementEndReleasePacket.hxx>
#include <StepElement_HArray1OfCurveElementSectionDefinition.hxx>
#include <StepElement_HArray1OfHSequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember.hxx>
#include <StepElement_HArray1OfMeasureOrUnspecifiedValue.hxx>
#include <StepElement_HArray1OfSurfaceSection.hxx>
#include <StepElement_HArray1OfVolumeElementPurpose.hxx>
#include <StepElement_HArray1OfVolumeElementPurposeMember.hxx>
#include <StepElement_HArray2OfCurveElementPurposeMember.hxx>
#include <StepElement_HArray2OfSurfaceElementPurpose.hxx>
#include <StepElement_HArray2OfSurfaceElementPurposeMember.hxx>
#include <StepElement_HSequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_HSequenceOfCurveElementSectionDefinition.hxx>
#include <StepElement_HSequenceOfElementMaterial.hxx>
#include <StepElement_HSequenceOfSurfaceElementPurposeMember.hxx>
#include <StepElement_MeasureOrUnspecifiedValue.hxx>
#include <StepElement_MeasureOrUnspecifiedValueMember.hxx>
#include <StepElement_SequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_SequenceOfCurveElementSectionDefinition.hxx>
#include <StepElement_SequenceOfElementMaterial.hxx>
#include <StepElement_SequenceOfSurfaceElementPurposeMember.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepElement_SurfaceElementPurpose.hxx>
#include <StepElement_SurfaceElementPurposeMember.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepElement_SurfaceSectionField.hxx>
#include <StepElement_SurfaceSectionFieldConstant.hxx>
#include <StepElement_SurfaceSectionFieldVarying.hxx>
#include <StepElement_UniformSurfaceSection.hxx>
#include <StepElement_UnspecifiedValue.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepElement_Volume3dElementShape.hxx>
#include <StepElement_VolumeElementPurpose.hxx>
#include <StepElement_VolumeElementPurposeMember.hxx>

// template related includes
// ./opencascade\StepElement_Array1OfSurfaceSection.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_Array2OfSurfaceElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_SequenceOfCurveElementSectionDefinition.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_SequenceOfSurfaceElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_Array2OfSurfaceElementPurpose.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_SequenceOfCurveElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_SequenceOfElementMaterial.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_Array1OfVolumeElementPurpose.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_Array1OfMeasureOrUnspecifiedValue.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_Array1OfCurveElementEndReleasePacket.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_Array1OfHSequenceOfCurveElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_Array2OfCurveElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_Array1OfCurveElementSectionDefinition.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\StepElement_Array1OfVolumeElementPurposeMember.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepElement_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepElement", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StepElement_UnspecifiedValue>(m, "StepElement_UnspecifiedValue",R"#(None)#")
        .value("StepElement_Unspecified",StepElement_UnspecifiedValue::StepElement_Unspecified).export_values();
    py::enum_<StepElement_EnumeratedVolumeElementPurpose>(m, "StepElement_EnumeratedVolumeElementPurpose",R"#(None)#")
        .value("StepElement_StressDisplacement",StepElement_EnumeratedVolumeElementPurpose::StepElement_StressDisplacement).export_values();
    py::enum_<StepElement_CurveEdge>(m, "StepElement_CurveEdge",R"#(None)#")
        .value("StepElement_ElementEdge",StepElement_CurveEdge::StepElement_ElementEdge).export_values();
    py::enum_<StepElement_EnumeratedSurfaceElementPurpose>(m, "StepElement_EnumeratedSurfaceElementPurpose",R"#(None)#")
        .value("StepElement_MembraneDirect",StepElement_EnumeratedSurfaceElementPurpose::StepElement_MembraneDirect)
        .value("StepElement_MembraneShear",StepElement_EnumeratedSurfaceElementPurpose::StepElement_MembraneShear)
        .value("StepElement_BendingDirect",StepElement_EnumeratedSurfaceElementPurpose::StepElement_BendingDirect)
        .value("StepElement_BendingTorsion",StepElement_EnumeratedSurfaceElementPurpose::StepElement_BendingTorsion)
        .value("StepElement_NormalToPlaneShear",StepElement_EnumeratedSurfaceElementPurpose::StepElement_NormalToPlaneShear).export_values();
    py::enum_<StepElement_ElementOrder>(m, "StepElement_ElementOrder",R"#(None)#")
        .value("StepElement_Linear",StepElement_ElementOrder::StepElement_Linear)
        .value("StepElement_Quadratic",StepElement_ElementOrder::StepElement_Quadratic)
        .value("StepElement_Cubic",StepElement_ElementOrder::StepElement_Cubic).export_values();
    py::enum_<StepElement_ElementVolume>(m, "StepElement_ElementVolume",R"#(None)#")
        .value("StepElement_Volume",StepElement_ElementVolume::StepElement_Volume).export_values();
    py::enum_<StepElement_EnumeratedCurveElementPurpose>(m, "StepElement_EnumeratedCurveElementPurpose",R"#(None)#")
        .value("StepElement_Axial",StepElement_EnumeratedCurveElementPurpose::StepElement_Axial)
        .value("StepElement_YYBending",StepElement_EnumeratedCurveElementPurpose::StepElement_YYBending)
        .value("StepElement_ZZBending",StepElement_EnumeratedCurveElementPurpose::StepElement_ZZBending)
        .value("StepElement_Torsion",StepElement_EnumeratedCurveElementPurpose::StepElement_Torsion)
        .value("StepElement_XYShear",StepElement_EnumeratedCurveElementPurpose::StepElement_XYShear)
        .value("StepElement_XZShear",StepElement_EnumeratedCurveElementPurpose::StepElement_XZShear)
        .value("StepElement_Warping",StepElement_EnumeratedCurveElementPurpose::StepElement_Warping).export_values();
    py::enum_<StepElement_Volume3dElementShape>(m, "StepElement_Volume3dElementShape",R"#(None)#")
        .value("StepElement_Hexahedron",StepElement_Volume3dElementShape::StepElement_Hexahedron)
        .value("StepElement_Wedge",StepElement_Volume3dElementShape::StepElement_Wedge)
        .value("StepElement_Tetrahedron",StepElement_Volume3dElementShape::StepElement_Tetrahedron)
        .value("StepElement_Pyramid",StepElement_Volume3dElementShape::StepElement_Pyramid).export_values();
    py::enum_<StepElement_EnumeratedCurveElementFreedom>(m, "StepElement_EnumeratedCurveElementFreedom",R"#(None)#")
        .value("StepElement_XTranslation",StepElement_EnumeratedCurveElementFreedom::StepElement_XTranslation)
        .value("StepElement_YTranslation",StepElement_EnumeratedCurveElementFreedom::StepElement_YTranslation)
        .value("StepElement_ZTranslation",StepElement_EnumeratedCurveElementFreedom::StepElement_ZTranslation)
        .value("StepElement_XRotation",StepElement_EnumeratedCurveElementFreedom::StepElement_XRotation)
        .value("StepElement_YRotation",StepElement_EnumeratedCurveElementFreedom::StepElement_YRotation)
        .value("StepElement_ZRotation",StepElement_EnumeratedCurveElementFreedom::StepElement_ZRotation)
        .value("StepElement_Warp",StepElement_EnumeratedCurveElementFreedom::StepElement_Warp)
        .value("StepElement_None",StepElement_EnumeratedCurveElementFreedom::StepElement_None).export_values();
    py::enum_<StepElement_Element2dShape>(m, "StepElement_Element2dShape",R"#(None)#")
        .value("StepElement_Quadrilateral",StepElement_Element2dShape::StepElement_Quadrilateral)
        .value("StepElement_Triangle",StepElement_Element2dShape::StepElement_Triangle).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_SurfaceSection> >(m,"StepElement_Array1OfSurfaceSection");
    preregister_template_NCollection_Array2<opencascade::handle<StepElement_SurfaceElementPurposeMember> >(m,"StepElement_Array2OfSurfaceElementPurposeMember");
    preregister_template_NCollection_Sequence<opencascade::handle<StepElement_CurveElementSectionDefinition> >(m,"StepElement_SequenceOfCurveElementSectionDefinition");
    preregister_template_NCollection_Sequence<opencascade::handle<StepElement_SurfaceElementPurposeMember> >(m,"StepElement_SequenceOfSurfaceElementPurposeMember");
    preregister_template_NCollection_Array2<StepElement_SurfaceElementPurpose>(m,"StepElement_Array2OfSurfaceElementPurpose");
    preregister_template_NCollection_Sequence<opencascade::handle<StepElement_CurveElementPurposeMember> >(m,"StepElement_SequenceOfCurveElementPurposeMember");
    preregister_template_NCollection_Sequence<opencascade::handle<StepElement_ElementMaterial> >(m,"StepElement_SequenceOfElementMaterial");
    preregister_template_NCollection_Array1<StepElement_VolumeElementPurpose>(m,"StepElement_Array1OfVolumeElementPurpose");
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_HSequenceOfSurfaceElementPurposeMember> >(m,"StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember");
    preregister_template_NCollection_Array1<StepElement_MeasureOrUnspecifiedValue>(m,"StepElement_Array1OfMeasureOrUnspecifiedValue");
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_CurveElementEndReleasePacket> >(m,"StepElement_Array1OfCurveElementEndReleasePacket");
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_HSequenceOfCurveElementPurposeMember> >(m,"StepElement_Array1OfHSequenceOfCurveElementPurposeMember");
    preregister_template_NCollection_Array2<opencascade::handle<StepElement_CurveElementPurposeMember> >(m,"StepElement_Array2OfCurveElementPurposeMember");
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_CurveElementSectionDefinition> >(m,"StepElement_Array1OfCurveElementSectionDefinition");
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_VolumeElementPurposeMember> >(m,"StepElement_Array1OfVolumeElementPurposeMember");

// classes forward declarations only
    py::class_<StepElement_AnalysisItemWithinRepresentation ,opencascade::handle<StepElement_AnalysisItemWithinRepresentation> , Standard_Transient>(m,"StepElement_AnalysisItemWithinRepresentation",R"#(Representation of STEP entity AnalysisItemWithinRepresentationRepresentation of STEP entity AnalysisItemWithinRepresentationRepresentation of STEP entity AnalysisItemWithinRepresentation)#");
    py::class_<StepElement_CurveElementEndReleasePacket ,opencascade::handle<StepElement_CurveElementEndReleasePacket> , Standard_Transient>(m,"StepElement_CurveElementEndReleasePacket",R"#(Representation of STEP entity CurveElementEndReleasePacketRepresentation of STEP entity CurveElementEndReleasePacketRepresentation of STEP entity CurveElementEndReleasePacket)#");
    py::class_<StepElement_CurveElementFreedom , shared_ptr<StepElement_CurveElementFreedom> , StepData_SelectType>(m,"StepElement_CurveElementFreedom",R"#(Representation of STEP SELECT type CurveElementFreedom)#");
    py::class_<StepElement_CurveElementFreedomMember ,opencascade::handle<StepElement_CurveElementFreedomMember> , StepData_SelectNamed>(m,"StepElement_CurveElementFreedomMember",R"#(Representation of member for STEP SELECT type CurveElementFreedomRepresentation of member for STEP SELECT type CurveElementFreedomRepresentation of member for STEP SELECT type CurveElementFreedom)#");
    py::class_<StepElement_CurveElementPurpose , shared_ptr<StepElement_CurveElementPurpose> , StepData_SelectType>(m,"StepElement_CurveElementPurpose",R"#(Representation of STEP SELECT type CurveElementPurpose)#");
    py::class_<StepElement_CurveElementPurposeMember ,opencascade::handle<StepElement_CurveElementPurposeMember> , StepData_SelectNamed>(m,"StepElement_CurveElementPurposeMember",R"#(Representation of member for STEP SELECT type CurveElementPurposeRepresentation of member for STEP SELECT type CurveElementPurposeRepresentation of member for STEP SELECT type CurveElementPurpose)#");
    py::class_<StepElement_CurveElementSectionDefinition ,opencascade::handle<StepElement_CurveElementSectionDefinition> , Standard_Transient>(m,"StepElement_CurveElementSectionDefinition",R"#(Representation of STEP entity CurveElementSectionDefinitionRepresentation of STEP entity CurveElementSectionDefinitionRepresentation of STEP entity CurveElementSectionDefinition)#");
    py::class_<StepElement_ElementAspect , shared_ptr<StepElement_ElementAspect> , StepData_SelectType>(m,"StepElement_ElementAspect",R"#(Representation of STEP SELECT type ElementAspect)#");
    py::class_<StepElement_ElementAspectMember ,opencascade::handle<StepElement_ElementAspectMember> , StepData_SelectNamed>(m,"StepElement_ElementAspectMember",R"#(Representation of member for STEP SELECT type ElementAspectRepresentation of member for STEP SELECT type ElementAspectRepresentation of member for STEP SELECT type ElementAspect)#");
    py::class_<StepElement_ElementDescriptor ,opencascade::handle<StepElement_ElementDescriptor> , Standard_Transient>(m,"StepElement_ElementDescriptor",R"#(Representation of STEP entity ElementDescriptorRepresentation of STEP entity ElementDescriptorRepresentation of STEP entity ElementDescriptor)#");
    py::class_<StepElement_ElementMaterial ,opencascade::handle<StepElement_ElementMaterial> , Standard_Transient>(m,"StepElement_ElementMaterial",R"#(Representation of STEP entity ElementMaterialRepresentation of STEP entity ElementMaterialRepresentation of STEP entity ElementMaterial)#");
    py::class_<StepElement_HArray1OfCurveElementEndReleasePacket ,opencascade::handle<StepElement_HArray1OfCurveElementEndReleasePacket> , StepElement_Array1OfCurveElementEndReleasePacket, Standard_Transient>(m,"StepElement_HArray1OfCurveElementEndReleasePacket",R"#()#");
    py::class_<StepElement_HArray1OfCurveElementSectionDefinition ,opencascade::handle<StepElement_HArray1OfCurveElementSectionDefinition> , StepElement_Array1OfCurveElementSectionDefinition, Standard_Transient>(m,"StepElement_HArray1OfCurveElementSectionDefinition",R"#()#");
    py::class_<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember ,opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> , StepElement_Array1OfHSequenceOfCurveElementPurposeMember, Standard_Transient>(m,"StepElement_HArray1OfHSequenceOfCurveElementPurposeMember",R"#()#");
    py::class_<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember ,opencascade::handle<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember> , StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember, Standard_Transient>(m,"StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember",R"#()#");
    py::class_<StepElement_HArray1OfMeasureOrUnspecifiedValue ,opencascade::handle<StepElement_HArray1OfMeasureOrUnspecifiedValue> , StepElement_Array1OfMeasureOrUnspecifiedValue, Standard_Transient>(m,"StepElement_HArray1OfMeasureOrUnspecifiedValue",R"#()#");
    py::class_<StepElement_HArray1OfSurfaceSection ,opencascade::handle<StepElement_HArray1OfSurfaceSection> , StepElement_Array1OfSurfaceSection, Standard_Transient>(m,"StepElement_HArray1OfSurfaceSection",R"#()#");
    py::class_<StepElement_HArray1OfVolumeElementPurpose ,opencascade::handle<StepElement_HArray1OfVolumeElementPurpose> , StepElement_Array1OfVolumeElementPurpose, Standard_Transient>(m,"StepElement_HArray1OfVolumeElementPurpose",R"#()#");
    py::class_<StepElement_HArray1OfVolumeElementPurposeMember ,opencascade::handle<StepElement_HArray1OfVolumeElementPurposeMember> , StepElement_Array1OfVolumeElementPurposeMember, Standard_Transient>(m,"StepElement_HArray1OfVolumeElementPurposeMember",R"#()#");
    py::class_<StepElement_HArray2OfCurveElementPurposeMember ,opencascade::handle<StepElement_HArray2OfCurveElementPurposeMember> , StepElement_Array2OfCurveElementPurposeMember, Standard_Transient>(m,"StepElement_HArray2OfCurveElementPurposeMember",R"#()#");
    py::class_<StepElement_HArray2OfSurfaceElementPurpose ,opencascade::handle<StepElement_HArray2OfSurfaceElementPurpose> , StepElement_Array2OfSurfaceElementPurpose, Standard_Transient>(m,"StepElement_HArray2OfSurfaceElementPurpose",R"#()#");
    py::class_<StepElement_HArray2OfSurfaceElementPurposeMember ,opencascade::handle<StepElement_HArray2OfSurfaceElementPurposeMember> , StepElement_Array2OfSurfaceElementPurposeMember, Standard_Transient>(m,"StepElement_HArray2OfSurfaceElementPurposeMember",R"#()#");
    py::class_<StepElement_HSequenceOfCurveElementPurposeMember ,opencascade::handle<StepElement_HSequenceOfCurveElementPurposeMember> , StepElement_SequenceOfCurveElementPurposeMember, Standard_Transient>(m,"StepElement_HSequenceOfCurveElementPurposeMember",R"#()#");
    py::class_<StepElement_HSequenceOfCurveElementSectionDefinition ,opencascade::handle<StepElement_HSequenceOfCurveElementSectionDefinition> , StepElement_SequenceOfCurveElementSectionDefinition, Standard_Transient>(m,"StepElement_HSequenceOfCurveElementSectionDefinition",R"#()#");
    py::class_<StepElement_HSequenceOfElementMaterial ,opencascade::handle<StepElement_HSequenceOfElementMaterial> , StepElement_SequenceOfElementMaterial, Standard_Transient>(m,"StepElement_HSequenceOfElementMaterial",R"#()#");
    py::class_<StepElement_HSequenceOfSurfaceElementPurposeMember ,opencascade::handle<StepElement_HSequenceOfSurfaceElementPurposeMember> , StepElement_SequenceOfSurfaceElementPurposeMember, Standard_Transient>(m,"StepElement_HSequenceOfSurfaceElementPurposeMember",R"#()#");
    py::class_<StepElement_MeasureOrUnspecifiedValue , shared_ptr<StepElement_MeasureOrUnspecifiedValue> , StepData_SelectType>(m,"StepElement_MeasureOrUnspecifiedValue",R"#(Representation of STEP SELECT type MeasureOrUnspecifiedValue)#");
    py::class_<StepElement_MeasureOrUnspecifiedValueMember ,opencascade::handle<StepElement_MeasureOrUnspecifiedValueMember> , StepData_SelectNamed>(m,"StepElement_MeasureOrUnspecifiedValueMember",R"#(Representation of member for STEP SELECT type MeasureOrUnspecifiedValueRepresentation of member for STEP SELECT type MeasureOrUnspecifiedValueRepresentation of member for STEP SELECT type MeasureOrUnspecifiedValue)#");
    py::class_<StepElement_SurfaceElementProperty ,opencascade::handle<StepElement_SurfaceElementProperty> , Standard_Transient>(m,"StepElement_SurfaceElementProperty",R"#(Representation of STEP entity SurfaceElementPropertyRepresentation of STEP entity SurfaceElementPropertyRepresentation of STEP entity SurfaceElementProperty)#");
    py::class_<StepElement_SurfaceElementPurpose , shared_ptr<StepElement_SurfaceElementPurpose> , StepData_SelectType>(m,"StepElement_SurfaceElementPurpose",R"#(Representation of STEP SELECT type SurfaceElementPurpose)#");
    py::class_<StepElement_SurfaceElementPurposeMember ,opencascade::handle<StepElement_SurfaceElementPurposeMember> , StepData_SelectNamed>(m,"StepElement_SurfaceElementPurposeMember",R"#(Representation of member for STEP SELECT type SurfaceElementPurposeRepresentation of member for STEP SELECT type SurfaceElementPurposeRepresentation of member for STEP SELECT type SurfaceElementPurpose)#");
    py::class_<StepElement_SurfaceSection ,opencascade::handle<StepElement_SurfaceSection> , Standard_Transient>(m,"StepElement_SurfaceSection",R"#(Representation of STEP entity SurfaceSectionRepresentation of STEP entity SurfaceSectionRepresentation of STEP entity SurfaceSection)#");
    py::class_<StepElement_SurfaceSectionField ,opencascade::handle<StepElement_SurfaceSectionField> , Standard_Transient>(m,"StepElement_SurfaceSectionField",R"#(Representation of STEP entity SurfaceSectionFieldRepresentation of STEP entity SurfaceSectionFieldRepresentation of STEP entity SurfaceSectionField)#");
    py::class_<StepElement_VolumeElementPurpose , shared_ptr<StepElement_VolumeElementPurpose> , StepData_SelectType>(m,"StepElement_VolumeElementPurpose",R"#(Representation of STEP SELECT type VolumeElementPurpose)#");
    py::class_<StepElement_VolumeElementPurposeMember ,opencascade::handle<StepElement_VolumeElementPurposeMember> , StepData_SelectNamed>(m,"StepElement_VolumeElementPurposeMember",R"#(Representation of member for STEP SELECT type VolumeElementPurposeRepresentation of member for STEP SELECT type VolumeElementPurposeRepresentation of member for STEP SELECT type VolumeElementPurpose)#");
    py::class_<StepElement_Curve3dElementDescriptor ,opencascade::handle<StepElement_Curve3dElementDescriptor> , StepElement_ElementDescriptor>(m,"StepElement_Curve3dElementDescriptor",R"#(Representation of STEP entity Curve3dElementDescriptorRepresentation of STEP entity Curve3dElementDescriptorRepresentation of STEP entity Curve3dElementDescriptor)#");
    py::class_<StepElement_CurveElementSectionDerivedDefinitions ,opencascade::handle<StepElement_CurveElementSectionDerivedDefinitions> , StepElement_CurveElementSectionDefinition>(m,"StepElement_CurveElementSectionDerivedDefinitions",R"#(Representation of STEP entity CurveElementSectionDerivedDefinitionsRepresentation of STEP entity CurveElementSectionDerivedDefinitionsRepresentation of STEP entity CurveElementSectionDerivedDefinitions)#");
    py::class_<StepElement_Surface3dElementDescriptor ,opencascade::handle<StepElement_Surface3dElementDescriptor> , StepElement_ElementDescriptor>(m,"StepElement_Surface3dElementDescriptor",R"#(Representation of STEP entity Surface3dElementDescriptorRepresentation of STEP entity Surface3dElementDescriptorRepresentation of STEP entity Surface3dElementDescriptor)#");
    py::class_<StepElement_SurfaceSectionFieldConstant ,opencascade::handle<StepElement_SurfaceSectionFieldConstant> , StepElement_SurfaceSectionField>(m,"StepElement_SurfaceSectionFieldConstant",R"#(Representation of STEP entity SurfaceSectionFieldConstantRepresentation of STEP entity SurfaceSectionFieldConstantRepresentation of STEP entity SurfaceSectionFieldConstant)#");
    py::class_<StepElement_SurfaceSectionFieldVarying ,opencascade::handle<StepElement_SurfaceSectionFieldVarying> , StepElement_SurfaceSectionField>(m,"StepElement_SurfaceSectionFieldVarying",R"#(Representation of STEP entity SurfaceSectionFieldVaryingRepresentation of STEP entity SurfaceSectionFieldVaryingRepresentation of STEP entity SurfaceSectionFieldVarying)#");
    py::class_<StepElement_UniformSurfaceSection ,opencascade::handle<StepElement_UniformSurfaceSection> , StepElement_SurfaceSection>(m,"StepElement_UniformSurfaceSection",R"#(Representation of STEP entity UniformSurfaceSectionRepresentation of STEP entity UniformSurfaceSectionRepresentation of STEP entity UniformSurfaceSection)#");
    py::class_<StepElement_Volume3dElementDescriptor ,opencascade::handle<StepElement_Volume3dElementDescriptor> , StepElement_ElementDescriptor>(m,"StepElement_Volume3dElementDescriptor",R"#(Representation of STEP entity Volume3dElementDescriptorRepresentation of STEP entity Volume3dElementDescriptorRepresentation of STEP entity Volume3dElementDescriptor)#");

};

// user-defined post-inclusion per module

// user-defined post
