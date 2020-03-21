
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_FeaParametricPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>

// module includes
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_AlignedSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx>
#include <StepFEA_Array1OfCurveElementEndOffset.hxx>
#include <StepFEA_Array1OfCurveElementEndRelease.hxx>
#include <StepFEA_Array1OfCurveElementInterval.hxx>
#include <StepFEA_Array1OfDegreeOfFreedom.hxx>
#include <StepFEA_Array1OfElementRepresentation.hxx>
#include <StepFEA_Array1OfNodeRepresentation.hxx>
#include <StepFEA_ConstantSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_CoordinateSystemType.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <StepFEA_CurveEdge.hxx>
#include <StepFEA_CurveElementEndCoordinateSystem.hxx>
#include <StepFEA_CurveElementEndOffset.hxx>
#include <StepFEA_CurveElementEndRelease.hxx>
#include <StepFEA_CurveElementInterval.hxx>
#include <StepFEA_CurveElementIntervalConstant.hxx>
#include <StepFEA_CurveElementIntervalLinearlyVarying.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepFEA_DegreeOfFreedom.hxx>
#include <StepFEA_DegreeOfFreedomMember.hxx>
#include <StepFEA_DummyNode.hxx>
#include <StepFEA_ElementGeometricRelationship.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepFEA_ElementOrElementGroup.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepFEA_ElementVolume.hxx>
#include <StepFEA_EnumeratedDegreeOfFreedom.hxx>
#include <StepFEA_FeaAreaDensity.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepFEA_FeaCurveSectionGeometricRelationship.hxx>
#include <StepFEA_FeaGroup.hxx>
#include <StepFEA_FeaLinearElasticity.hxx>
#include <StepFEA_FeaMassDensity.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentation.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepFEA_FeaModelDefinition.hxx>
#include <StepFEA_FeaMoistureAbsorption.hxx>
#include <StepFEA_FeaParametricPoint.hxx>
#include <StepFEA_FeaRepresentationItem.hxx>
#include <StepFEA_FeaSecantCoefficientOfLinearThermalExpansion.hxx>
#include <StepFEA_FeaShellBendingStiffness.hxx>
#include <StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx>
#include <StepFEA_FeaShellMembraneStiffness.hxx>
#include <StepFEA_FeaShellShearStiffness.hxx>
#include <StepFEA_FeaSurfaceSectionGeometricRelationship.hxx>
#include <StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion.hxx>
#include <StepFEA_FreedomAndCoefficient.hxx>
#include <StepFEA_FreedomsList.hxx>
#include <StepFEA_GeometricNode.hxx>
#include <StepFEA_HArray1OfCurveElementEndOffset.hxx>
#include <StepFEA_HArray1OfCurveElementEndRelease.hxx>
#include <StepFEA_HArray1OfCurveElementInterval.hxx>
#include <StepFEA_HArray1OfDegreeOfFreedom.hxx>
#include <StepFEA_HArray1OfElementRepresentation.hxx>
#include <StepFEA_HArray1OfNodeRepresentation.hxx>
#include <StepFEA_HSequenceOfCurve3dElementProperty.hxx>
#include <StepFEA_HSequenceOfElementGeometricRelationship.hxx>
#include <StepFEA_HSequenceOfElementRepresentation.hxx>
#include <StepFEA_HSequenceOfNodeRepresentation.hxx>
#include <StepFEA_Node.hxx>
#include <StepFEA_NodeDefinition.hxx>
#include <StepFEA_NodeGroup.hxx>
#include <StepFEA_NodeRepresentation.hxx>
#include <StepFEA_NodeSet.hxx>
#include <StepFEA_NodeWithSolutionCoordinateSystem.hxx>
#include <StepFEA_NodeWithVector.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_ParametricSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_SequenceOfCurve3dElementProperty.hxx>
#include <StepFEA_SequenceOfElementGeometricRelationship.hxx>
#include <StepFEA_SequenceOfElementRepresentation.hxx>
#include <StepFEA_SequenceOfNodeRepresentation.hxx>
#include <StepFEA_Surface3dElementRepresentation.hxx>
#include <StepFEA_SymmetricTensor22d.hxx>
#include <StepFEA_SymmetricTensor23d.hxx>
#include <StepFEA_SymmetricTensor23dMember.hxx>
#include <StepFEA_SymmetricTensor42d.hxx>
#include <StepFEA_SymmetricTensor43d.hxx>
#include <StepFEA_SymmetricTensor43dMember.hxx>
#include <StepFEA_UnspecifiedValue.hxx>
#include <StepFEA_Volume3dElementRepresentation.hxx>

// template related includes
// ./opencascade/StepFEA_Array1OfCurveElementInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfNodeRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfElementRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfCurveElementEndRelease.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfElementRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfElementGeometricRelationship.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfNodeRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfDegreeOfFreedom.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfCurve3dElementProperty.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfCurveElementEndOffset.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepFEA_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepFEA", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StepFEA_ElementVolume>(m, "StepFEA_ElementVolume",R"#(None)#")
        .value("StepFEA_Volume",StepFEA_ElementVolume::StepFEA_Volume).export_values();
    py::enum_<StepFEA_CurveEdge>(m, "StepFEA_CurveEdge",R"#(None)#")
        .value("StepFEA_ElementEdge",StepFEA_CurveEdge::StepFEA_ElementEdge).export_values();
    py::enum_<StepFEA_CoordinateSystemType>(m, "StepFEA_CoordinateSystemType",R"#(None)#")
        .value("StepFEA_Cartesian",StepFEA_CoordinateSystemType::StepFEA_Cartesian)
        .value("StepFEA_Cylindrical",StepFEA_CoordinateSystemType::StepFEA_Cylindrical)
        .value("StepFEA_Spherical",StepFEA_CoordinateSystemType::StepFEA_Spherical).export_values();
    py::enum_<StepFEA_UnspecifiedValue>(m, "StepFEA_UnspecifiedValue",R"#(None)#")
        .value("StepFEA_Unspecified",StepFEA_UnspecifiedValue::StepFEA_Unspecified).export_values();
    py::enum_<StepFEA_EnumeratedDegreeOfFreedom>(m, "StepFEA_EnumeratedDegreeOfFreedom",R"#(None)#")
        .value("StepFEA_XTranslation",StepFEA_EnumeratedDegreeOfFreedom::StepFEA_XTranslation)
        .value("StepFEA_YTranslation",StepFEA_EnumeratedDegreeOfFreedom::StepFEA_YTranslation)
        .value("StepFEA_ZTranslation",StepFEA_EnumeratedDegreeOfFreedom::StepFEA_ZTranslation)
        .value("StepFEA_XRotation",StepFEA_EnumeratedDegreeOfFreedom::StepFEA_XRotation)
        .value("StepFEA_YRotation",StepFEA_EnumeratedDegreeOfFreedom::StepFEA_YRotation)
        .value("StepFEA_ZRotation",StepFEA_EnumeratedDegreeOfFreedom::StepFEA_ZRotation)
        .value("StepFEA_Warp",StepFEA_EnumeratedDegreeOfFreedom::StepFEA_Warp).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<StepFEA_CurveElementInterval> >(m,"StepFEA_Array1OfCurveElementInterval");
    preregister_template_NCollection_Array1<opencascade::handle<StepFEA_NodeRepresentation> >(m,"StepFEA_Array1OfNodeRepresentation");
    preregister_template_NCollection_Array1<opencascade::handle<StepFEA_ElementRepresentation> >(m,"StepFEA_Array1OfElementRepresentation");
    preregister_template_NCollection_Array1<opencascade::handle<StepFEA_CurveElementEndRelease> >(m,"StepFEA_Array1OfCurveElementEndRelease");
    preregister_template_NCollection_Sequence<opencascade::handle<StepFEA_ElementRepresentation> >(m,"StepFEA_SequenceOfElementRepresentation");
    preregister_template_NCollection_Sequence<opencascade::handle<StepFEA_ElementGeometricRelationship> >(m,"StepFEA_SequenceOfElementGeometricRelationship");
    preregister_template_NCollection_Sequence<opencascade::handle<StepFEA_NodeRepresentation> >(m,"StepFEA_SequenceOfNodeRepresentation");
    preregister_template_NCollection_Array1<StepFEA_DegreeOfFreedom>(m,"StepFEA_Array1OfDegreeOfFreedom");
    preregister_template_NCollection_Sequence<opencascade::handle<StepFEA_Curve3dElementProperty> >(m,"StepFEA_SequenceOfCurve3dElementProperty");
    preregister_template_NCollection_Array1<opencascade::handle<StepFEA_CurveElementEndOffset> >(m,"StepFEA_Array1OfCurveElementEndOffset");

// classes forward declarations only
    py::class_<StepFEA_Curve3dElementProperty ,opencascade::handle<StepFEA_Curve3dElementProperty> , Standard_Transient>(m,"StepFEA_Curve3dElementProperty",R"#(Representation of STEP entity Curve3dElementPropertyRepresentation of STEP entity Curve3dElementPropertyRepresentation of STEP entity Curve3dElementProperty)#");
    py::class_<StepFEA_CurveElementEndCoordinateSystem , shared_ptr<StepFEA_CurveElementEndCoordinateSystem> , StepData_SelectType>(m,"StepFEA_CurveElementEndCoordinateSystem",R"#(Representation of STEP SELECT type CurveElementEndCoordinateSystem)#");
    py::class_<StepFEA_CurveElementEndOffset ,opencascade::handle<StepFEA_CurveElementEndOffset> , Standard_Transient>(m,"StepFEA_CurveElementEndOffset",R"#(Representation of STEP entity CurveElementEndOffsetRepresentation of STEP entity CurveElementEndOffsetRepresentation of STEP entity CurveElementEndOffset)#");
    py::class_<StepFEA_CurveElementEndRelease ,opencascade::handle<StepFEA_CurveElementEndRelease> , Standard_Transient>(m,"StepFEA_CurveElementEndRelease",R"#(Representation of STEP entity CurveElementEndReleaseRepresentation of STEP entity CurveElementEndReleaseRepresentation of STEP entity CurveElementEndRelease)#");
    py::class_<StepFEA_CurveElementInterval ,opencascade::handle<StepFEA_CurveElementInterval> , Standard_Transient>(m,"StepFEA_CurveElementInterval",R"#(Representation of STEP entity CurveElementIntervalRepresentation of STEP entity CurveElementIntervalRepresentation of STEP entity CurveElementInterval)#");
    py::class_<StepFEA_CurveElementLocation ,opencascade::handle<StepFEA_CurveElementLocation> , Standard_Transient>(m,"StepFEA_CurveElementLocation",R"#(Representation of STEP entity CurveElementLocationRepresentation of STEP entity CurveElementLocationRepresentation of STEP entity CurveElementLocation)#");
    py::class_<StepFEA_DegreeOfFreedom , shared_ptr<StepFEA_DegreeOfFreedom> , StepData_SelectType>(m,"StepFEA_DegreeOfFreedom",R"#(Representation of STEP SELECT type DegreeOfFreedom)#");
    py::class_<StepFEA_DegreeOfFreedomMember ,opencascade::handle<StepFEA_DegreeOfFreedomMember> , StepData_SelectNamed>(m,"StepFEA_DegreeOfFreedomMember",R"#(Representation of member for STEP SELECT type CurveElementFreedomRepresentation of member for STEP SELECT type CurveElementFreedomRepresentation of member for STEP SELECT type CurveElementFreedom)#");
    py::class_<StepFEA_ElementGeometricRelationship ,opencascade::handle<StepFEA_ElementGeometricRelationship> , Standard_Transient>(m,"StepFEA_ElementGeometricRelationship",R"#(Representation of STEP entity ElementGeometricRelationshipRepresentation of STEP entity ElementGeometricRelationshipRepresentation of STEP entity ElementGeometricRelationship)#");
    py::class_<StepFEA_ElementOrElementGroup , shared_ptr<StepFEA_ElementOrElementGroup> , StepData_SelectType>(m,"StepFEA_ElementOrElementGroup",R"#(Representation of STEP SELECT type ElementOrElementGroup)#");
    py::class_<StepFEA_ElementRepresentation ,opencascade::handle<StepFEA_ElementRepresentation> , StepRepr_Representation>(m,"StepFEA_ElementRepresentation",R"#(Representation of STEP entity ElementRepresentationRepresentation of STEP entity ElementRepresentationRepresentation of STEP entity ElementRepresentation)#");
    py::class_<StepFEA_FeaAxis2Placement3d ,opencascade::handle<StepFEA_FeaAxis2Placement3d> , StepGeom_Axis2Placement3d>(m,"StepFEA_FeaAxis2Placement3d",R"#(Representation of STEP entity FeaAxis2Placement3dRepresentation of STEP entity FeaAxis2Placement3dRepresentation of STEP entity FeaAxis2Placement3d)#");
    py::class_<StepFEA_FeaCurveSectionGeometricRelationship ,opencascade::handle<StepFEA_FeaCurveSectionGeometricRelationship> , Standard_Transient>(m,"StepFEA_FeaCurveSectionGeometricRelationship",R"#(Representation of STEP entity FeaCurveSectionGeometricRelationshipRepresentation of STEP entity FeaCurveSectionGeometricRelationshipRepresentation of STEP entity FeaCurveSectionGeometricRelationship)#");
    py::class_<StepFEA_FeaGroup ,opencascade::handle<StepFEA_FeaGroup> , StepBasic_Group>(m,"StepFEA_FeaGroup",R"#(Representation of STEP entity FeaGroupRepresentation of STEP entity FeaGroupRepresentation of STEP entity FeaGroup)#");
    py::class_<StepFEA_FeaMaterialPropertyRepresentation ,opencascade::handle<StepFEA_FeaMaterialPropertyRepresentation> , StepRepr_MaterialPropertyRepresentation>(m,"StepFEA_FeaMaterialPropertyRepresentation",R"#(Representation of STEP entity FeaMaterialPropertyRepresentationRepresentation of STEP entity FeaMaterialPropertyRepresentationRepresentation of STEP entity FeaMaterialPropertyRepresentation)#");
    py::class_<StepFEA_FeaMaterialPropertyRepresentationItem ,opencascade::handle<StepFEA_FeaMaterialPropertyRepresentationItem> , StepRepr_RepresentationItem>(m,"StepFEA_FeaMaterialPropertyRepresentationItem",R"#(Representation of STEP entity FeaMaterialPropertyRepresentationItemRepresentation of STEP entity FeaMaterialPropertyRepresentationItemRepresentation of STEP entity FeaMaterialPropertyRepresentationItem)#");
    py::class_<StepFEA_FeaModel ,opencascade::handle<StepFEA_FeaModel> , StepRepr_Representation>(m,"StepFEA_FeaModel",R"#(Representation of STEP entity FeaModelRepresentation of STEP entity FeaModelRepresentation of STEP entity FeaModel)#");
    py::class_<StepFEA_FeaModelDefinition ,opencascade::handle<StepFEA_FeaModelDefinition> , StepRepr_ShapeAspect>(m,"StepFEA_FeaModelDefinition",R"#(Representation of STEP entity FeaModelDefinitionRepresentation of STEP entity FeaModelDefinitionRepresentation of STEP entity FeaModelDefinition)#");
    py::class_<StepFEA_FeaParametricPoint ,opencascade::handle<StepFEA_FeaParametricPoint> , StepGeom_Point>(m,"StepFEA_FeaParametricPoint",R"#(Representation of STEP entity FeaParametricPointRepresentation of STEP entity FeaParametricPointRepresentation of STEP entity FeaParametricPoint)#");
    py::class_<StepFEA_FeaRepresentationItem ,opencascade::handle<StepFEA_FeaRepresentationItem> , StepRepr_RepresentationItem>(m,"StepFEA_FeaRepresentationItem",R"#(Representation of STEP entity FeaRepresentationItemRepresentation of STEP entity FeaRepresentationItemRepresentation of STEP entity FeaRepresentationItem)#");
    py::class_<StepFEA_FeaSurfaceSectionGeometricRelationship ,opencascade::handle<StepFEA_FeaSurfaceSectionGeometricRelationship> , Standard_Transient>(m,"StepFEA_FeaSurfaceSectionGeometricRelationship",R"#(Representation of STEP entity FeaSurfaceSectionGeometricRelationshipRepresentation of STEP entity FeaSurfaceSectionGeometricRelationshipRepresentation of STEP entity FeaSurfaceSectionGeometricRelationship)#");
    py::class_<StepFEA_FreedomAndCoefficient ,opencascade::handle<StepFEA_FreedomAndCoefficient> , Standard_Transient>(m,"StepFEA_FreedomAndCoefficient",R"#(Representation of STEP entity FreedomAndCoefficientRepresentation of STEP entity FreedomAndCoefficientRepresentation of STEP entity FreedomAndCoefficient)#");
    py::class_<StepFEA_FreedomsList ,opencascade::handle<StepFEA_FreedomsList> , Standard_Transient>(m,"StepFEA_FreedomsList",R"#(Representation of STEP entity FreedomsListRepresentation of STEP entity FreedomsListRepresentation of STEP entity FreedomsList)#");
    py::class_<StepFEA_HArray1OfCurveElementEndOffset ,opencascade::handle<StepFEA_HArray1OfCurveElementEndOffset> , StepFEA_Array1OfCurveElementEndOffset, Standard_Transient>(m,"StepFEA_HArray1OfCurveElementEndOffset",R"#()#");
    py::class_<StepFEA_HArray1OfCurveElementEndRelease ,opencascade::handle<StepFEA_HArray1OfCurveElementEndRelease> , StepFEA_Array1OfCurveElementEndRelease, Standard_Transient>(m,"StepFEA_HArray1OfCurveElementEndRelease",R"#()#");
    py::class_<StepFEA_HArray1OfCurveElementInterval ,opencascade::handle<StepFEA_HArray1OfCurveElementInterval> , StepFEA_Array1OfCurveElementInterval, Standard_Transient>(m,"StepFEA_HArray1OfCurveElementInterval",R"#()#");
    py::class_<StepFEA_HArray1OfDegreeOfFreedom ,opencascade::handle<StepFEA_HArray1OfDegreeOfFreedom> , StepFEA_Array1OfDegreeOfFreedom, Standard_Transient>(m,"StepFEA_HArray1OfDegreeOfFreedom",R"#()#");
    py::class_<StepFEA_HArray1OfElementRepresentation ,opencascade::handle<StepFEA_HArray1OfElementRepresentation> , StepFEA_Array1OfElementRepresentation, Standard_Transient>(m,"StepFEA_HArray1OfElementRepresentation",R"#()#");
    py::class_<StepFEA_HArray1OfNodeRepresentation ,opencascade::handle<StepFEA_HArray1OfNodeRepresentation> , StepFEA_Array1OfNodeRepresentation, Standard_Transient>(m,"StepFEA_HArray1OfNodeRepresentation",R"#()#");
    py::class_<StepFEA_HSequenceOfCurve3dElementProperty ,opencascade::handle<StepFEA_HSequenceOfCurve3dElementProperty> , StepFEA_SequenceOfCurve3dElementProperty, Standard_Transient>(m,"StepFEA_HSequenceOfCurve3dElementProperty",R"#()#");
    py::class_<StepFEA_HSequenceOfElementGeometricRelationship ,opencascade::handle<StepFEA_HSequenceOfElementGeometricRelationship> , StepFEA_SequenceOfElementGeometricRelationship, Standard_Transient>(m,"StepFEA_HSequenceOfElementGeometricRelationship",R"#()#");
    py::class_<StepFEA_HSequenceOfElementRepresentation ,opencascade::handle<StepFEA_HSequenceOfElementRepresentation> , StepFEA_SequenceOfElementRepresentation, Standard_Transient>(m,"StepFEA_HSequenceOfElementRepresentation",R"#()#");
    py::class_<StepFEA_HSequenceOfNodeRepresentation ,opencascade::handle<StepFEA_HSequenceOfNodeRepresentation> , StepFEA_SequenceOfNodeRepresentation, Standard_Transient>(m,"StepFEA_HSequenceOfNodeRepresentation",R"#()#");
    py::class_<StepFEA_NodeDefinition ,opencascade::handle<StepFEA_NodeDefinition> , StepRepr_ShapeAspect>(m,"StepFEA_NodeDefinition",R"#(Representation of STEP entity NodeDefinitionRepresentation of STEP entity NodeDefinitionRepresentation of STEP entity NodeDefinition)#");
    py::class_<StepFEA_NodeRepresentation ,opencascade::handle<StepFEA_NodeRepresentation> , StepRepr_Representation>(m,"StepFEA_NodeRepresentation",R"#(Representation of STEP entity NodeRepresentationRepresentation of STEP entity NodeRepresentationRepresentation of STEP entity NodeRepresentation)#");
    py::class_<StepFEA_NodeSet ,opencascade::handle<StepFEA_NodeSet> , StepGeom_GeometricRepresentationItem>(m,"StepFEA_NodeSet",R"#(Representation of STEP entity NodeSetRepresentation of STEP entity NodeSetRepresentation of STEP entity NodeSet)#");
    py::class_<StepFEA_SymmetricTensor22d , shared_ptr<StepFEA_SymmetricTensor22d> , StepData_SelectType>(m,"StepFEA_SymmetricTensor22d",R"#(Representation of STEP SELECT type SymmetricTensor22d)#");
    py::class_<StepFEA_SymmetricTensor23d , shared_ptr<StepFEA_SymmetricTensor23d> , StepData_SelectType>(m,"StepFEA_SymmetricTensor23d",R"#(Representation of STEP SELECT type SymmetricTensor23d)#");
    py::class_<StepFEA_SymmetricTensor23dMember ,opencascade::handle<StepFEA_SymmetricTensor23dMember> , StepData_SelectArrReal>(m,"StepFEA_SymmetricTensor23dMember",R"#(Representation of member for STEP SELECT type SymmetricTensor23dRepresentation of member for STEP SELECT type SymmetricTensor23dRepresentation of member for STEP SELECT type SymmetricTensor23d)#");
    py::class_<StepFEA_SymmetricTensor42d , shared_ptr<StepFEA_SymmetricTensor42d> , StepData_SelectType>(m,"StepFEA_SymmetricTensor42d",R"#(Representation of STEP SELECT type SymmetricTensor42d)#");
    py::class_<StepFEA_SymmetricTensor43d , shared_ptr<StepFEA_SymmetricTensor43d> , StepData_SelectType>(m,"StepFEA_SymmetricTensor43d",R"#(Representation of STEP SELECT type SymmetricTensor43d)#");
    py::class_<StepFEA_SymmetricTensor43dMember ,opencascade::handle<StepFEA_SymmetricTensor43dMember> , StepData_SelectArrReal>(m,"StepFEA_SymmetricTensor43dMember",R"#(Representation of member for STEP SELECT type SymmetricTensor43dRepresentation of member for STEP SELECT type SymmetricTensor43dRepresentation of member for STEP SELECT type SymmetricTensor43d)#");
    py::class_<StepFEA_AlignedCurve3dElementCoordinateSystem ,opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>(m,"StepFEA_AlignedCurve3dElementCoordinateSystem",R"#(Representation of STEP entity AlignedCurve3dElementCoordinateSystemRepresentation of STEP entity AlignedCurve3dElementCoordinateSystemRepresentation of STEP entity AlignedCurve3dElementCoordinateSystem)#");
    py::class_<StepFEA_AlignedSurface3dElementCoordinateSystem ,opencascade::handle<StepFEA_AlignedSurface3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>(m,"StepFEA_AlignedSurface3dElementCoordinateSystem",R"#(Representation of STEP entity AlignedSurface3dElementCoordinateSystemRepresentation of STEP entity AlignedSurface3dElementCoordinateSystemRepresentation of STEP entity AlignedSurface3dElementCoordinateSystem)#");
    py::class_<StepFEA_ArbitraryVolume3dElementCoordinateSystem ,opencascade::handle<StepFEA_ArbitraryVolume3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>(m,"StepFEA_ArbitraryVolume3dElementCoordinateSystem",R"#(Representation of STEP entity ArbitraryVolume3dElementCoordinateSystemRepresentation of STEP entity ArbitraryVolume3dElementCoordinateSystemRepresentation of STEP entity ArbitraryVolume3dElementCoordinateSystem)#");
    py::class_<StepFEA_ConstantSurface3dElementCoordinateSystem ,opencascade::handle<StepFEA_ConstantSurface3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>(m,"StepFEA_ConstantSurface3dElementCoordinateSystem",R"#(Representation of STEP entity ConstantSurface3dElementCoordinateSystemRepresentation of STEP entity ConstantSurface3dElementCoordinateSystemRepresentation of STEP entity ConstantSurface3dElementCoordinateSystem)#");
    py::class_<StepFEA_Curve3dElementRepresentation ,opencascade::handle<StepFEA_Curve3dElementRepresentation> , StepFEA_ElementRepresentation>(m,"StepFEA_Curve3dElementRepresentation",R"#(Representation of STEP entity Curve3dElementRepresentationRepresentation of STEP entity Curve3dElementRepresentationRepresentation of STEP entity Curve3dElementRepresentation)#");
    py::class_<StepFEA_CurveElementIntervalConstant ,opencascade::handle<StepFEA_CurveElementIntervalConstant> , StepFEA_CurveElementInterval>(m,"StepFEA_CurveElementIntervalConstant",R"#(Representation of STEP entity CurveElementIntervalConstantRepresentation of STEP entity CurveElementIntervalConstantRepresentation of STEP entity CurveElementIntervalConstant)#");
    py::class_<StepFEA_CurveElementIntervalLinearlyVarying ,opencascade::handle<StepFEA_CurveElementIntervalLinearlyVarying> , StepFEA_CurveElementInterval>(m,"StepFEA_CurveElementIntervalLinearlyVarying",R"#(Representation of STEP entity CurveElementIntervalLinearlyVaryingRepresentation of STEP entity CurveElementIntervalLinearlyVaryingRepresentation of STEP entity CurveElementIntervalLinearlyVarying)#");
    py::class_<StepFEA_DummyNode ,opencascade::handle<StepFEA_DummyNode> , StepFEA_NodeRepresentation>(m,"StepFEA_DummyNode",R"#(Representation of STEP entity DummyNodeRepresentation of STEP entity DummyNodeRepresentation of STEP entity DummyNode)#");
    py::class_<StepFEA_ElementGroup ,opencascade::handle<StepFEA_ElementGroup> , StepFEA_FeaGroup>(m,"StepFEA_ElementGroup",R"#(Representation of STEP entity ElementGroupRepresentation of STEP entity ElementGroupRepresentation of STEP entity ElementGroup)#");
    py::class_<StepFEA_FeaAreaDensity ,opencascade::handle<StepFEA_FeaAreaDensity> , StepFEA_FeaMaterialPropertyRepresentationItem>(m,"StepFEA_FeaAreaDensity",R"#(Representation of STEP entity FeaAreaDensityRepresentation of STEP entity FeaAreaDensityRepresentation of STEP entity FeaAreaDensity)#");
    py::class_<StepFEA_FeaLinearElasticity ,opencascade::handle<StepFEA_FeaLinearElasticity> , StepFEA_FeaMaterialPropertyRepresentationItem>(m,"StepFEA_FeaLinearElasticity",R"#(Representation of STEP entity FeaLinearElasticityRepresentation of STEP entity FeaLinearElasticityRepresentation of STEP entity FeaLinearElasticity)#");
    py::class_<StepFEA_FeaMassDensity ,opencascade::handle<StepFEA_FeaMassDensity> , StepFEA_FeaMaterialPropertyRepresentationItem>(m,"StepFEA_FeaMassDensity",R"#(Representation of STEP entity FeaMassDensityRepresentation of STEP entity FeaMassDensityRepresentation of STEP entity FeaMassDensity)#");
    py::class_<StepFEA_FeaModel3d ,opencascade::handle<StepFEA_FeaModel3d> , StepFEA_FeaModel>(m,"StepFEA_FeaModel3d",R"#(Representation of STEP entity FeaModel3dRepresentation of STEP entity FeaModel3dRepresentation of STEP entity FeaModel3d)#");
    py::class_<StepFEA_FeaMoistureAbsorption ,opencascade::handle<StepFEA_FeaMoistureAbsorption> , StepFEA_FeaMaterialPropertyRepresentationItem>(m,"StepFEA_FeaMoistureAbsorption",R"#(Representation of STEP entity FeaMoistureAbsorptionRepresentation of STEP entity FeaMoistureAbsorptionRepresentation of STEP entity FeaMoistureAbsorption)#");
    py::class_<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion ,opencascade::handle<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion> , StepFEA_FeaMaterialPropertyRepresentationItem>(m,"StepFEA_FeaSecantCoefficientOfLinearThermalExpansion",R"#(Representation of STEP entity FeaSecantCoefficientOfLinearThermalExpansionRepresentation of STEP entity FeaSecantCoefficientOfLinearThermalExpansionRepresentation of STEP entity FeaSecantCoefficientOfLinearThermalExpansion)#");
    py::class_<StepFEA_FeaShellBendingStiffness ,opencascade::handle<StepFEA_FeaShellBendingStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>(m,"StepFEA_FeaShellBendingStiffness",R"#(Representation of STEP entity FeaShellBendingStiffnessRepresentation of STEP entity FeaShellBendingStiffnessRepresentation of STEP entity FeaShellBendingStiffness)#");
    py::class_<StepFEA_FeaShellMembraneBendingCouplingStiffness ,opencascade::handle<StepFEA_FeaShellMembraneBendingCouplingStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>(m,"StepFEA_FeaShellMembraneBendingCouplingStiffness",R"#(Representation of STEP entity FeaShellMembraneBendingCouplingStiffnessRepresentation of STEP entity FeaShellMembraneBendingCouplingStiffnessRepresentation of STEP entity FeaShellMembraneBendingCouplingStiffness)#");
    py::class_<StepFEA_FeaShellMembraneStiffness ,opencascade::handle<StepFEA_FeaShellMembraneStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>(m,"StepFEA_FeaShellMembraneStiffness",R"#(Representation of STEP entity FeaShellMembraneStiffnessRepresentation of STEP entity FeaShellMembraneStiffnessRepresentation of STEP entity FeaShellMembraneStiffness)#");
    py::class_<StepFEA_FeaShellShearStiffness ,opencascade::handle<StepFEA_FeaShellShearStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>(m,"StepFEA_FeaShellShearStiffness",R"#(Representation of STEP entity FeaShellShearStiffnessRepresentation of STEP entity FeaShellShearStiffnessRepresentation of STEP entity FeaShellShearStiffness)#");
    py::class_<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion ,opencascade::handle<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion> , StepFEA_FeaMaterialPropertyRepresentationItem>(m,"StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion",R"#(Representation of STEP entity FeaTangentialCoefficientOfLinearThermalExpansionRepresentation of STEP entity FeaTangentialCoefficientOfLinearThermalExpansionRepresentation of STEP entity FeaTangentialCoefficientOfLinearThermalExpansion)#");
    py::class_<StepFEA_GeometricNode ,opencascade::handle<StepFEA_GeometricNode> , StepFEA_NodeRepresentation>(m,"StepFEA_GeometricNode",R"#(Representation of STEP entity GeometricNodeRepresentation of STEP entity GeometricNodeRepresentation of STEP entity GeometricNode)#");
    py::class_<StepFEA_Node ,opencascade::handle<StepFEA_Node> , StepFEA_NodeRepresentation>(m,"StepFEA_Node",R"#(Representation of STEP entity NodeRepresentation of STEP entity NodeRepresentation of STEP entity Node)#");
    py::class_<StepFEA_NodeGroup ,opencascade::handle<StepFEA_NodeGroup> , StepFEA_FeaGroup>(m,"StepFEA_NodeGroup",R"#(Representation of STEP entity NodeGroupRepresentation of STEP entity NodeGroupRepresentation of STEP entity NodeGroup)#");
    py::class_<StepFEA_ParametricCurve3dElementCoordinateDirection ,opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> , StepFEA_FeaRepresentationItem>(m,"StepFEA_ParametricCurve3dElementCoordinateDirection",R"#(Representation of STEP entity ParametricCurve3dElementCoordinateDirectionRepresentation of STEP entity ParametricCurve3dElementCoordinateDirectionRepresentation of STEP entity ParametricCurve3dElementCoordinateDirection)#");
    py::class_<StepFEA_ParametricCurve3dElementCoordinateSystem ,opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>(m,"StepFEA_ParametricCurve3dElementCoordinateSystem",R"#(Representation of STEP entity ParametricCurve3dElementCoordinateSystemRepresentation of STEP entity ParametricCurve3dElementCoordinateSystemRepresentation of STEP entity ParametricCurve3dElementCoordinateSystem)#");
    py::class_<StepFEA_ParametricSurface3dElementCoordinateSystem ,opencascade::handle<StepFEA_ParametricSurface3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>(m,"StepFEA_ParametricSurface3dElementCoordinateSystem",R"#(Representation of STEP entity ParametricSurface3dElementCoordinateSystemRepresentation of STEP entity ParametricSurface3dElementCoordinateSystemRepresentation of STEP entity ParametricSurface3dElementCoordinateSystem)#");
    py::class_<StepFEA_Surface3dElementRepresentation ,opencascade::handle<StepFEA_Surface3dElementRepresentation> , StepFEA_ElementRepresentation>(m,"StepFEA_Surface3dElementRepresentation",R"#(Representation of STEP entity Surface3dElementRepresentationRepresentation of STEP entity Surface3dElementRepresentationRepresentation of STEP entity Surface3dElementRepresentation)#");
    py::class_<StepFEA_Volume3dElementRepresentation ,opencascade::handle<StepFEA_Volume3dElementRepresentation> , StepFEA_ElementRepresentation>(m,"StepFEA_Volume3dElementRepresentation",R"#(Representation of STEP entity Volume3dElementRepresentationRepresentation of STEP entity Volume3dElementRepresentationRepresentation of STEP entity Volume3dElementRepresentation)#");
    py::class_<StepFEA_NodeWithSolutionCoordinateSystem ,opencascade::handle<StepFEA_NodeWithSolutionCoordinateSystem> , StepFEA_Node>(m,"StepFEA_NodeWithSolutionCoordinateSystem",R"#(Representation of STEP entity NodeWithSolutionCoordinateSystemRepresentation of STEP entity NodeWithSolutionCoordinateSystemRepresentation of STEP entity NodeWithSolutionCoordinateSystem)#");
    py::class_<StepFEA_NodeWithVector ,opencascade::handle<StepFEA_NodeWithVector> , StepFEA_Node>(m,"StepFEA_NodeWithVector",R"#(Representation of STEP entity NodeWithVectorRepresentation of STEP entity NodeWithVectorRepresentation of STEP entity NodeWithVector)#");

};

// user-defined post-inclusion per module

// user-defined post
