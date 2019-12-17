
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepElement_SurfaceSection.hxx>
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
#include <StepData_SelectMember.hxx>

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
// ./opencascade/StepElement_SequenceOfCurveElementSectionDefinition.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfCurveElementSectionDefinition.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_SequenceOfCurveElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfCurveElementEndReleasePacket.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_SequenceOfElementMaterial.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array2OfCurveElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfHSequenceOfCurveElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfSurfaceSection.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_SequenceOfSurfaceElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfVolumeElementPurpose.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfVolumeElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array2OfSurfaceElementPurpose.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array1OfMeasureOrUnspecifiedValue.hxx
#include "NCollection.hxx"
// ./opencascade/StepElement_Array2OfSurfaceElementPurposeMember.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepElement_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepElement", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StepElement_ElementOrder>(m, "StepElement_ElementOrder",R"#(None)#")
        .value("StepElement_Linear",StepElement_ElementOrder::StepElement_Linear)
        .value("StepElement_Quadratic",StepElement_ElementOrder::StepElement_Quadratic)
        .value("StepElement_Cubic",StepElement_ElementOrder::StepElement_Cubic).export_values();
    py::enum_<StepElement_EnumeratedCurveElementPurpose>(m, "StepElement_EnumeratedCurveElementPurpose",R"#(None)#")
        .value("StepElement_Axial",StepElement_EnumeratedCurveElementPurpose::StepElement_Axial)
        .value("StepElement_YYBending",StepElement_EnumeratedCurveElementPurpose::StepElement_YYBending)
        .value("StepElement_ZZBending",StepElement_EnumeratedCurveElementPurpose::StepElement_ZZBending)
        .value("StepElement_Torsion",StepElement_EnumeratedCurveElementPurpose::StepElement_Torsion)
        .value("StepElement_XYShear",StepElement_EnumeratedCurveElementPurpose::StepElement_XYShear)
        .value("StepElement_XZShear",StepElement_EnumeratedCurveElementPurpose::StepElement_XZShear)
        .value("StepElement_Warping",StepElement_EnumeratedCurveElementPurpose::StepElement_Warping).export_values();
    py::enum_<StepElement_EnumeratedSurfaceElementPurpose>(m, "StepElement_EnumeratedSurfaceElementPurpose",R"#(None)#")
        .value("StepElement_MembraneDirect",StepElement_EnumeratedSurfaceElementPurpose::StepElement_MembraneDirect)
        .value("StepElement_MembraneShear",StepElement_EnumeratedSurfaceElementPurpose::StepElement_MembraneShear)
        .value("StepElement_BendingDirect",StepElement_EnumeratedSurfaceElementPurpose::StepElement_BendingDirect)
        .value("StepElement_BendingTorsion",StepElement_EnumeratedSurfaceElementPurpose::StepElement_BendingTorsion)
        .value("StepElement_NormalToPlaneShear",StepElement_EnumeratedSurfaceElementPurpose::StepElement_NormalToPlaneShear).export_values();
    py::enum_<StepElement_CurveEdge>(m, "StepElement_CurveEdge",R"#(None)#")
        .value("StepElement_ElementEdge",StepElement_CurveEdge::StepElement_ElementEdge).export_values();
    py::enum_<StepElement_Volume3dElementShape>(m, "StepElement_Volume3dElementShape",R"#(None)#")
        .value("StepElement_Hexahedron",StepElement_Volume3dElementShape::StepElement_Hexahedron)
        .value("StepElement_Wedge",StepElement_Volume3dElementShape::StepElement_Wedge)
        .value("StepElement_Tetrahedron",StepElement_Volume3dElementShape::StepElement_Tetrahedron)
        .value("StepElement_Pyramid",StepElement_Volume3dElementShape::StepElement_Pyramid).export_values();
    py::enum_<StepElement_UnspecifiedValue>(m, "StepElement_UnspecifiedValue",R"#(None)#")
        .value("StepElement_Unspecified",StepElement_UnspecifiedValue::StepElement_Unspecified).export_values();
    py::enum_<StepElement_EnumeratedCurveElementFreedom>(m, "StepElement_EnumeratedCurveElementFreedom",R"#(None)#")
        .value("StepElement_XTranslation",StepElement_EnumeratedCurveElementFreedom::StepElement_XTranslation)
        .value("StepElement_YTranslation",StepElement_EnumeratedCurveElementFreedom::StepElement_YTranslation)
        .value("StepElement_ZTranslation",StepElement_EnumeratedCurveElementFreedom::StepElement_ZTranslation)
        .value("StepElement_XRotation",StepElement_EnumeratedCurveElementFreedom::StepElement_XRotation)
        .value("StepElement_YRotation",StepElement_EnumeratedCurveElementFreedom::StepElement_YRotation)
        .value("StepElement_ZRotation",StepElement_EnumeratedCurveElementFreedom::StepElement_ZRotation)
        .value("StepElement_Warp",StepElement_EnumeratedCurveElementFreedom::StepElement_Warp)
        .value("StepElement_None",StepElement_EnumeratedCurveElementFreedom::StepElement_None).export_values();
    py::enum_<StepElement_EnumeratedVolumeElementPurpose>(m, "StepElement_EnumeratedVolumeElementPurpose",R"#(None)#")
        .value("StepElement_StressDisplacement",StepElement_EnumeratedVolumeElementPurpose::StepElement_StressDisplacement).export_values();
    py::enum_<StepElement_Element2dShape>(m, "StepElement_Element2dShape",R"#(None)#")
        .value("StepElement_Quadrilateral",StepElement_Element2dShape::StepElement_Quadrilateral)
        .value("StepElement_Triangle",StepElement_Element2dShape::StepElement_Triangle).export_values();
    py::enum_<StepElement_ElementVolume>(m, "StepElement_ElementVolume",R"#(None)#")
        .value("StepElement_Volume",StepElement_ElementVolume::StepElement_Volume).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<StepElement_HArray1OfSurfaceSection ,std::unique_ptr<StepElement_HArray1OfSurfaceSection>  >(m,"StepElement_HArray1OfSurfaceSection",R"#()#");
    py::class_<StepElement_HArray1OfCurveElementSectionDefinition ,std::unique_ptr<StepElement_HArray1OfCurveElementSectionDefinition>  >(m,"StepElement_HArray1OfCurveElementSectionDefinition",R"#()#");
    py::class_<StepElement_SurfaceElementPurposeMember ,opencascade::handle<StepElement_SurfaceElementPurposeMember>  , StepData_SelectNamed >(m,"StepElement_SurfaceElementPurposeMember",R"#(Representation of member for STEP SELECT type SurfaceElementPurposeRepresentation of member for STEP SELECT type SurfaceElementPurposeRepresentation of member for STEP SELECT type SurfaceElementPurpose)#");
    py::class_<StepElement_HArray1OfVolumeElementPurposeMember ,std::unique_ptr<StepElement_HArray1OfVolumeElementPurposeMember>  >(m,"StepElement_HArray1OfVolumeElementPurposeMember",R"#()#");
    py::class_<StepElement_CurveElementSectionDefinition ,opencascade::handle<StepElement_CurveElementSectionDefinition>  , Standard_Transient >(m,"StepElement_CurveElementSectionDefinition",R"#(Representation of STEP entity CurveElementSectionDefinitionRepresentation of STEP entity CurveElementSectionDefinitionRepresentation of STEP entity CurveElementSectionDefinition)#");
    py::class_<StepElement_ElementDescriptor ,opencascade::handle<StepElement_ElementDescriptor>  , Standard_Transient >(m,"StepElement_ElementDescriptor",R"#(Representation of STEP entity ElementDescriptorRepresentation of STEP entity ElementDescriptorRepresentation of STEP entity ElementDescriptor)#");
    py::class_<StepElement_HArray1OfCurveElementEndReleasePacket ,std::unique_ptr<StepElement_HArray1OfCurveElementEndReleasePacket>  >(m,"StepElement_HArray1OfCurveElementEndReleasePacket",R"#()#");
    py::class_<StepElement_SurfaceElementPurpose ,std::unique_ptr<StepElement_SurfaceElementPurpose>  , StepData_SelectType >(m,"StepElement_SurfaceElementPurpose",R"#(Representation of STEP SELECT type SurfaceElementPurpose)#");
    py::class_<StepElement_HArray1OfVolumeElementPurpose ,std::unique_ptr<StepElement_HArray1OfVolumeElementPurpose>  >(m,"StepElement_HArray1OfVolumeElementPurpose",R"#()#");
    py::class_<StepElement_CurveElementEndReleasePacket ,opencascade::handle<StepElement_CurveElementEndReleasePacket>  , Standard_Transient >(m,"StepElement_CurveElementEndReleasePacket",R"#(Representation of STEP entity CurveElementEndReleasePacketRepresentation of STEP entity CurveElementEndReleasePacketRepresentation of STEP entity CurveElementEndReleasePacket)#");
    py::class_<StepElement_CurveElementPurpose ,std::unique_ptr<StepElement_CurveElementPurpose>  , StepData_SelectType >(m,"StepElement_CurveElementPurpose",R"#(Representation of STEP SELECT type CurveElementPurpose)#");
    py::class_<StepElement_CurveElementSectionDerivedDefinitions ,opencascade::handle<StepElement_CurveElementSectionDerivedDefinitions>  , StepElement_CurveElementSectionDefinition >(m,"StepElement_CurveElementSectionDerivedDefinitions",R"#(Representation of STEP entity CurveElementSectionDerivedDefinitionsRepresentation of STEP entity CurveElementSectionDerivedDefinitionsRepresentation of STEP entity CurveElementSectionDerivedDefinitions)#");
    py::class_<StepElement_SurfaceElementProperty ,opencascade::handle<StepElement_SurfaceElementProperty>  , Standard_Transient >(m,"StepElement_SurfaceElementProperty",R"#(Representation of STEP entity SurfaceElementPropertyRepresentation of STEP entity SurfaceElementPropertyRepresentation of STEP entity SurfaceElementProperty)#");
    py::class_<StepElement_HArray2OfSurfaceElementPurpose ,std::unique_ptr<StepElement_HArray2OfSurfaceElementPurpose>  >(m,"StepElement_HArray2OfSurfaceElementPurpose",R"#()#");
    py::class_<StepElement_HSequenceOfElementMaterial ,std::unique_ptr<StepElement_HSequenceOfElementMaterial>  >(m,"StepElement_HSequenceOfElementMaterial",R"#()#");
    py::class_<StepElement_CurveElementFreedomMember ,opencascade::handle<StepElement_CurveElementFreedomMember>  , StepData_SelectNamed >(m,"StepElement_CurveElementFreedomMember",R"#(Representation of member for STEP SELECT type CurveElementFreedomRepresentation of member for STEP SELECT type CurveElementFreedomRepresentation of member for STEP SELECT type CurveElementFreedom)#");
    py::class_<StepElement_VolumeElementPurpose ,std::unique_ptr<StepElement_VolumeElementPurpose>  , StepData_SelectType >(m,"StepElement_VolumeElementPurpose",R"#(Representation of STEP SELECT type VolumeElementPurpose)#");
    py::class_<StepElement_HArray2OfCurveElementPurposeMember ,std::unique_ptr<StepElement_HArray2OfCurveElementPurposeMember>  >(m,"StepElement_HArray2OfCurveElementPurposeMember",R"#()#");
    py::class_<StepElement_ElementAspect ,std::unique_ptr<StepElement_ElementAspect>  , StepData_SelectType >(m,"StepElement_ElementAspect",R"#(Representation of STEP SELECT type ElementAspect)#");
    py::class_<StepElement_HArray1OfMeasureOrUnspecifiedValue ,std::unique_ptr<StepElement_HArray1OfMeasureOrUnspecifiedValue>  >(m,"StepElement_HArray1OfMeasureOrUnspecifiedValue",R"#()#");
    py::class_<StepElement_CurveElementPurposeMember ,opencascade::handle<StepElement_CurveElementPurposeMember>  , StepData_SelectNamed >(m,"StepElement_CurveElementPurposeMember",R"#(Representation of member for STEP SELECT type CurveElementPurposeRepresentation of member for STEP SELECT type CurveElementPurposeRepresentation of member for STEP SELECT type CurveElementPurpose)#");
    py::class_<StepElement_Surface3dElementDescriptor ,opencascade::handle<StepElement_Surface3dElementDescriptor>  , StepElement_ElementDescriptor >(m,"StepElement_Surface3dElementDescriptor",R"#(Representation of STEP entity Surface3dElementDescriptorRepresentation of STEP entity Surface3dElementDescriptorRepresentation of STEP entity Surface3dElementDescriptor)#");
    py::class_<StepElement_SurfaceSectionField ,opencascade::handle<StepElement_SurfaceSectionField>  , Standard_Transient >(m,"StepElement_SurfaceSectionField",R"#(Representation of STEP entity SurfaceSectionFieldRepresentation of STEP entity SurfaceSectionFieldRepresentation of STEP entity SurfaceSectionField)#");
    py::class_<StepElement_ElementMaterial ,opencascade::handle<StepElement_ElementMaterial>  , Standard_Transient >(m,"StepElement_ElementMaterial",R"#(Representation of STEP entity ElementMaterialRepresentation of STEP entity ElementMaterialRepresentation of STEP entity ElementMaterial)#");
    py::class_<StepElement_CurveElementFreedom ,std::unique_ptr<StepElement_CurveElementFreedom>  , StepData_SelectType >(m,"StepElement_CurveElementFreedom",R"#(Representation of STEP SELECT type CurveElementFreedom)#");
    py::class_<StepElement_SurfaceSectionFieldConstant ,opencascade::handle<StepElement_SurfaceSectionFieldConstant>  , StepElement_SurfaceSectionField >(m,"StepElement_SurfaceSectionFieldConstant",R"#(Representation of STEP entity SurfaceSectionFieldConstantRepresentation of STEP entity SurfaceSectionFieldConstantRepresentation of STEP entity SurfaceSectionFieldConstant)#");
    py::class_<StepElement_HSequenceOfSurfaceElementPurposeMember ,std::unique_ptr<StepElement_HSequenceOfSurfaceElementPurposeMember>  >(m,"StepElement_HSequenceOfSurfaceElementPurposeMember",R"#()#");
    py::class_<StepElement_AnalysisItemWithinRepresentation ,opencascade::handle<StepElement_AnalysisItemWithinRepresentation>  , Standard_Transient >(m,"StepElement_AnalysisItemWithinRepresentation",R"#(Representation of STEP entity AnalysisItemWithinRepresentationRepresentation of STEP entity AnalysisItemWithinRepresentationRepresentation of STEP entity AnalysisItemWithinRepresentation)#");
    py::class_<StepElement_SurfaceSection ,opencascade::handle<StepElement_SurfaceSection>  , Standard_Transient >(m,"StepElement_SurfaceSection",R"#(Representation of STEP entity SurfaceSectionRepresentation of STEP entity SurfaceSectionRepresentation of STEP entity SurfaceSection)#");
    py::class_<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember ,std::unique_ptr<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember>  >(m,"StepElement_HArray1OfHSequenceOfCurveElementPurposeMember",R"#()#");
    py::class_<StepElement_UniformSurfaceSection ,opencascade::handle<StepElement_UniformSurfaceSection>  , StepElement_SurfaceSection >(m,"StepElement_UniformSurfaceSection",R"#(Representation of STEP entity UniformSurfaceSectionRepresentation of STEP entity UniformSurfaceSectionRepresentation of STEP entity UniformSurfaceSection)#");
    py::class_<StepElement_HArray2OfSurfaceElementPurposeMember ,std::unique_ptr<StepElement_HArray2OfSurfaceElementPurposeMember>  >(m,"StepElement_HArray2OfSurfaceElementPurposeMember",R"#()#");
    py::class_<StepElement_MeasureOrUnspecifiedValue ,std::unique_ptr<StepElement_MeasureOrUnspecifiedValue>  , StepData_SelectType >(m,"StepElement_MeasureOrUnspecifiedValue",R"#(Representation of STEP SELECT type MeasureOrUnspecifiedValue)#");
    py::class_<StepElement_ElementAspectMember ,opencascade::handle<StepElement_ElementAspectMember>  , StepData_SelectNamed >(m,"StepElement_ElementAspectMember",R"#(Representation of member for STEP SELECT type ElementAspectRepresentation of member for STEP SELECT type ElementAspectRepresentation of member for STEP SELECT type ElementAspect)#");
    py::class_<StepElement_MeasureOrUnspecifiedValueMember ,opencascade::handle<StepElement_MeasureOrUnspecifiedValueMember>  , StepData_SelectNamed >(m,"StepElement_MeasureOrUnspecifiedValueMember",R"#(Representation of member for STEP SELECT type MeasureOrUnspecifiedValueRepresentation of member for STEP SELECT type MeasureOrUnspecifiedValueRepresentation of member for STEP SELECT type MeasureOrUnspecifiedValue)#");
    py::class_<StepElement_HSequenceOfCurveElementPurposeMember ,std::unique_ptr<StepElement_HSequenceOfCurveElementPurposeMember>  >(m,"StepElement_HSequenceOfCurveElementPurposeMember",R"#()#");
    py::class_<StepElement_VolumeElementPurposeMember ,opencascade::handle<StepElement_VolumeElementPurposeMember>  , StepData_SelectNamed >(m,"StepElement_VolumeElementPurposeMember",R"#(Representation of member for STEP SELECT type VolumeElementPurposeRepresentation of member for STEP SELECT type VolumeElementPurposeRepresentation of member for STEP SELECT type VolumeElementPurpose)#");
    py::class_<StepElement_Volume3dElementDescriptor ,opencascade::handle<StepElement_Volume3dElementDescriptor>  , StepElement_ElementDescriptor >(m,"StepElement_Volume3dElementDescriptor",R"#(Representation of STEP entity Volume3dElementDescriptorRepresentation of STEP entity Volume3dElementDescriptorRepresentation of STEP entity Volume3dElementDescriptor)#");
    py::class_<StepElement_HSequenceOfCurveElementSectionDefinition ,std::unique_ptr<StepElement_HSequenceOfCurveElementSectionDefinition>  >(m,"StepElement_HSequenceOfCurveElementSectionDefinition",R"#()#");
    py::class_<StepElement_Curve3dElementDescriptor ,opencascade::handle<StepElement_Curve3dElementDescriptor>  , StepElement_ElementDescriptor >(m,"StepElement_Curve3dElementDescriptor",R"#(Representation of STEP entity Curve3dElementDescriptorRepresentation of STEP entity Curve3dElementDescriptorRepresentation of STEP entity Curve3dElementDescriptor)#");
    py::class_<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember ,std::unique_ptr<StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember>  >(m,"StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember",R"#()#");
    py::class_<StepElement_SurfaceSectionFieldVarying ,opencascade::handle<StepElement_SurfaceSectionFieldVarying>  , StepElement_SurfaceSectionField >(m,"StepElement_SurfaceSectionFieldVarying",R"#(Representation of STEP entity SurfaceSectionFieldVaryingRepresentation of STEP entity SurfaceSectionFieldVaryingRepresentation of STEP entity SurfaceSectionFieldVarying)#");

// pre-register typdefs
// ./opencascade/StepElement_HArray1OfSurfaceSection.hxx
// ./opencascade/StepElement_CurveElementPurposeMember.hxx
// ./opencascade/StepElement_HArray1OfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_HArray2OfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_Surface3dElementDescriptor.hxx
// ./opencascade/StepElement_SurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_Volume3dElementDescriptor.hxx
// ./opencascade/StepElement_SequenceOfCurveElementSectionDefinition.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<StepElement_CurveElementSectionDefinition> >(m,"StepElement_SequenceOfCurveElementSectionDefinition");  
// ./opencascade/StepElement_Array1OfCurveElementSectionDefinition.hxx
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_CurveElementSectionDefinition> >(m,"StepElement_Array1OfCurveElementSectionDefinition");  
// ./opencascade/StepElement_HArray1OfVolumeElementPurposeMember.hxx
// ./opencascade/StepElement_SurfaceSectionField.hxx
// ./opencascade/StepElement_ElementOrder.hxx
// ./opencascade/StepElement_EnumeratedCurveElementPurpose.hxx
// ./opencascade/StepElement_CurveElementSectionDefinition.hxx
// ./opencascade/StepElement_MeasureOrUnspecifiedValue.hxx
// ./opencascade/StepElement_ElementDescriptor.hxx
// ./opencascade/StepElement_ElementMaterial.hxx
// ./opencascade/StepElement_SequenceOfCurveElementPurposeMember.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<StepElement_CurveElementPurposeMember> >(m,"StepElement_SequenceOfCurveElementPurposeMember");  
// ./opencascade/StepElement_Array1OfCurveElementEndReleasePacket.hxx
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_CurveElementEndReleasePacket> >(m,"StepElement_Array1OfCurveElementEndReleasePacket");  
// ./opencascade/StepElement_EnumeratedSurfaceElementPurpose.hxx
// ./opencascade/StepElement_HArray1OfCurveElementEndReleasePacket.hxx
// ./opencascade/StepElement_HArray1OfHSequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_SequenceOfElementMaterial.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<StepElement_ElementMaterial> >(m,"StepElement_SequenceOfElementMaterial");  
// ./opencascade/StepElement_CurveEdge.hxx
// ./opencascade/StepElement_Array2OfCurveElementPurposeMember.hxx
    preregister_template_NCollection_Array2<opencascade::handle<StepElement_CurveElementPurposeMember> >(m,"StepElement_Array2OfCurveElementPurposeMember");  
// ./opencascade/StepElement_SurfaceElementPurpose.hxx
// ./opencascade/StepElement_CurveElementFreedom.hxx
// ./opencascade/StepElement_HArray1OfVolumeElementPurpose.hxx
// ./opencascade/StepElement_ElementAspectMember.hxx
// ./opencascade/StepElement_SurfaceSectionFieldConstant.hxx
// ./opencascade/StepElement_Volume3dElementShape.hxx
// ./opencascade/StepElement_CurveElementEndReleasePacket.hxx
// ./opencascade/StepElement_UnspecifiedValue.hxx
// ./opencascade/StepElement_EnumeratedCurveElementFreedom.hxx
// ./opencascade/StepElement_HSequenceOfCurveElementSectionDefinition.hxx
// ./opencascade/StepElement_Array1OfHSequenceOfCurveElementPurposeMember.hxx
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_HSequenceOfCurveElementPurposeMember> >(m,"StepElement_Array1OfHSequenceOfCurveElementPurposeMember");  
// ./opencascade/StepElement_CurveElementPurpose.hxx
// ./opencascade/StepElement_Array1OfSurfaceSection.hxx
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_SurfaceSection> >(m,"StepElement_Array1OfSurfaceSection");  
// ./opencascade/StepElement_EnumeratedVolumeElementPurpose.hxx
// ./opencascade/StepElement_HSequenceOfSurfaceElementPurposeMember.hxx
// ./opencascade/StepElement_CurveElementSectionDerivedDefinitions.hxx
// ./opencascade/StepElement_MeasureOrUnspecifiedValueMember.hxx
// ./opencascade/StepElement_SurfaceElementProperty.hxx
// ./opencascade/StepElement_Element2dShape.hxx
// ./opencascade/StepElement_SequenceOfSurfaceElementPurposeMember.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<StepElement_SurfaceElementPurposeMember> >(m,"StepElement_SequenceOfSurfaceElementPurposeMember");  
// ./opencascade/StepElement_AnalysisItemWithinRepresentation.hxx
// ./opencascade/StepElement_Array1OfVolumeElementPurpose.hxx
    preregister_template_NCollection_Array1<StepElement_VolumeElementPurpose>(m,"StepElement_Array1OfVolumeElementPurpose");  
// ./opencascade/StepElement_Array1OfVolumeElementPurposeMember.hxx
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_VolumeElementPurposeMember> >(m,"StepElement_Array1OfVolumeElementPurposeMember");  
// ./opencascade/StepElement_HArray2OfSurfaceElementPurpose.hxx
// ./opencascade/StepElement_SurfaceSectionFieldVarying.hxx
// ./opencascade/StepElement_HSequenceOfElementMaterial.hxx
// ./opencascade/StepElement_ElementVolume.hxx
// ./opencascade/StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember.hxx
    preregister_template_NCollection_Array1<opencascade::handle<StepElement_HSequenceOfSurfaceElementPurposeMember> >(m,"StepElement_Array1OfHSequenceOfSurfaceElementPurposeMember");  
// ./opencascade/StepElement_SurfaceSection.hxx
// ./opencascade/StepElement_CurveElementFreedomMember.hxx
// ./opencascade/StepElement_HSequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_Array2OfSurfaceElementPurpose.hxx
    preregister_template_NCollection_Array2<StepElement_SurfaceElementPurpose>(m,"StepElement_Array2OfSurfaceElementPurpose");  
// ./opencascade/StepElement_VolumeElementPurpose.hxx
// ./opencascade/StepElement_HArray1OfHSequenceOfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_HArray2OfCurveElementPurposeMember.hxx
// ./opencascade/StepElement_Curve3dElementDescriptor.hxx
// ./opencascade/StepElement_ElementAspect.hxx
// ./opencascade/StepElement_UniformSurfaceSection.hxx
// ./opencascade/StepElement_Array1OfMeasureOrUnspecifiedValue.hxx
    preregister_template_NCollection_Array1<StepElement_MeasureOrUnspecifiedValue>(m,"StepElement_Array1OfMeasureOrUnspecifiedValue");  
// ./opencascade/StepElement_HArray1OfMeasureOrUnspecifiedValue.hxx
// ./opencascade/StepElement_Array2OfSurfaceElementPurposeMember.hxx
    preregister_template_NCollection_Array2<opencascade::handle<StepElement_SurfaceElementPurposeMember> >(m,"StepElement_Array2OfSurfaceElementPurposeMember");  
// ./opencascade/StepElement_VolumeElementPurposeMember.hxx

};

// user-defined post-inclusion per module

// user-defined post
