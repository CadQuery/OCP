
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepShape_PlusMinusTolerance.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepDimTol_HArray1OfDatumReferenceElement.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_Datum.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepDimTol_GeneralDatumReference.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepDimTol_DatumSystem.hxx>
#include <StepDimTol_DatumReference.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_ModifiedGeometricTolerance.hxx>
#include <StepDimTol_PositionTolerance.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepDimTol_Datum.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>

// module includes
#include <StepDimTol_AngularityTolerance.hxx>
#include <StepDimTol_AreaUnitType.hxx>
#include <StepDimTol_Array1OfDatumReference.hxx>
#include <StepDimTol_Array1OfDatumReferenceCompartment.hxx>
#include <StepDimTol_Array1OfDatumReferenceElement.hxx>
#include <StepDimTol_Array1OfDatumReferenceModifier.hxx>
#include <StepDimTol_Array1OfDatumSystemOrReference.hxx>
#include <StepDimTol_Array1OfGeometricToleranceModifier.hxx>
#include <StepDimTol_Array1OfToleranceZoneTarget.hxx>
#include <StepDimTol_CircularRunoutTolerance.hxx>
#include <StepDimTol_CoaxialityTolerance.hxx>
#include <StepDimTol_CommonDatum.hxx>
#include <StepDimTol_ConcentricityTolerance.hxx>
#include <StepDimTol_CylindricityTolerance.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepDimTol_DatumFeature.hxx>
#include <StepDimTol_DatumOrCommonDatum.hxx>
#include <StepDimTol_DatumReference.hxx>
#include <StepDimTol_DatumReferenceCompartment.hxx>
#include <StepDimTol_DatumReferenceElement.hxx>
#include <StepDimTol_DatumReferenceModifier.hxx>
#include <StepDimTol_DatumReferenceModifierType.hxx>
#include <StepDimTol_DatumReferenceModifierWithValue.hxx>
#include <StepDimTol_DatumSystem.hxx>
#include <StepDimTol_DatumSystemOrReference.hxx>
#include <StepDimTol_DatumTarget.hxx>
#include <StepDimTol_FlatnessTolerance.hxx>
#include <StepDimTol_GeneralDatumReference.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepDimTol_GeometricToleranceModifier.hxx>
#include <StepDimTol_GeometricToleranceRelationship.hxx>
#include <StepDimTol_GeometricToleranceTarget.hxx>
#include <StepDimTol_GeometricToleranceType.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedAreaUnit.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedUnit.hxx>
#include <StepDimTol_GeometricToleranceWithMaximumTolerance.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRef.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMaxTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMod.hxx>
#include <StepDimTol_HArray1OfDatumReference.hxx>
#include <StepDimTol_HArray1OfDatumReferenceCompartment.hxx>
#include <StepDimTol_HArray1OfDatumReferenceElement.hxx>
#include <StepDimTol_HArray1OfDatumReferenceModifier.hxx>
#include <StepDimTol_HArray1OfDatumSystemOrReference.hxx>
#include <StepDimTol_HArray1OfGeometricToleranceModifier.hxx>
#include <StepDimTol_HArray1OfToleranceZoneTarget.hxx>
#include <StepDimTol_LimitCondition.hxx>
#include <StepDimTol_LineProfileTolerance.hxx>
#include <StepDimTol_ModifiedGeometricTolerance.hxx>
#include <StepDimTol_NonUniformZoneDefinition.hxx>
#include <StepDimTol_ParallelismTolerance.hxx>
#include <StepDimTol_PerpendicularityTolerance.hxx>
#include <StepDimTol_PlacedDatumTargetFeature.hxx>
#include <StepDimTol_PositionTolerance.hxx>
#include <StepDimTol_ProjectedZoneDefinition.hxx>
#include <StepDimTol_RoundnessTolerance.hxx>
#include <StepDimTol_RunoutZoneDefinition.hxx>
#include <StepDimTol_RunoutZoneOrientation.hxx>
#include <StepDimTol_ShapeToleranceSelect.hxx>
#include <StepDimTol_SimpleDatumReferenceModifier.hxx>
#include <StepDimTol_SimpleDatumReferenceModifierMember.hxx>
#include <StepDimTol_StraightnessTolerance.hxx>
#include <StepDimTol_SurfaceProfileTolerance.hxx>
#include <StepDimTol_SymmetryTolerance.hxx>
#include <StepDimTol_ToleranceZone.hxx>
#include <StepDimTol_ToleranceZoneDefinition.hxx>
#include <StepDimTol_ToleranceZoneForm.hxx>
#include <StepDimTol_ToleranceZoneTarget.hxx>
#include <StepDimTol_TotalRunoutTolerance.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>

// template related includes
// ./opencascade/StepDimTol_Array1OfDatumReferenceModifier.hxx
#include "NCollection.hxx"
// ./opencascade/StepDimTol_Array1OfDatumReferenceElement.hxx
#include "NCollection.hxx"
// ./opencascade/StepDimTol_Array1OfGeometricToleranceModifier.hxx
#include "NCollection.hxx"
// ./opencascade/StepDimTol_Array1OfDatumSystemOrReference.hxx
#include "NCollection.hxx"
// ./opencascade/StepDimTol_Array1OfDatumReferenceCompartment.hxx
#include "NCollection.hxx"
// ./opencascade/StepDimTol_Array1OfDatumReference.hxx
#include "NCollection.hxx"
// ./opencascade/StepDimTol_Array1OfToleranceZoneTarget.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepDimTol_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepDimTol", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StepDimTol_SimpleDatumReferenceModifier>(m, "StepDimTol_SimpleDatumReferenceModifier",R"#(None)#")
        .value("StepDimTol_SDRMAnyCrossSection",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMAnyCrossSection)
        .value("StepDimTol_SDRMAnyLongitudinalSection",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMAnyLongitudinalSection)
        .value("StepDimTol_SDRMBasic",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMBasic)
        .value("StepDimTol_SDRMContactingFeature",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMContactingFeature)
        .value("StepDimTol_SDRMDegreeOfFreedomConstraintU",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMDegreeOfFreedomConstraintU)
        .value("StepDimTol_SDRMDegreeOfFreedomConstraintV",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMDegreeOfFreedomConstraintV)
        .value("StepDimTol_SDRMDegreeOfFreedomConstraintW",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMDegreeOfFreedomConstraintW)
        .value("StepDimTol_SDRMDegreeOfFreedomConstraintX",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMDegreeOfFreedomConstraintX)
        .value("StepDimTol_SDRMDegreeOfFreedomConstraintY",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMDegreeOfFreedomConstraintY)
        .value("StepDimTol_SDRMDegreeOfFreedomConstraintZ",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMDegreeOfFreedomConstraintZ)
        .value("StepDimTol_SDRMDistanceVariable",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMDistanceVariable)
        .value("StepDimTol_SDRMFreeState",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMFreeState)
        .value("StepDimTol_SDRMLeastMaterialRequirement",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMLeastMaterialRequirement)
        .value("StepDimTol_SDRMLine",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMLine)
        .value("StepDimTol_SDRMMajorDiameter",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMMajorDiameter)
        .value("StepDimTol_SDRMMaximumMaterialRequirement",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMMaximumMaterialRequirement)
        .value("StepDimTol_SDRMMinorDiameter",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMMinorDiameter)
        .value("StepDimTol_SDRMOrientation",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMOrientation)
        .value("StepDimTol_SDRMPitchDiameter",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMPitchDiameter)
        .value("StepDimTol_SDRMPlane",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMPlane)
        .value("StepDimTol_SDRMPoint",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMPoint)
        .value("StepDimTol_SDRMTranslation",StepDimTol_SimpleDatumReferenceModifier::StepDimTol_SDRMTranslation).export_values();
    py::enum_<StepDimTol_GeometricToleranceType>(m, "StepDimTol_GeometricToleranceType",R"#(None)#")
        .value("StepDimTol_GTTAngularityTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTAngularityTolerance)
        .value("StepDimTol_GTTCircularRunoutTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTCircularRunoutTolerance)
        .value("StepDimTol_GTTCoaxialityTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTCoaxialityTolerance)
        .value("StepDimTol_GTTConcentricityTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTConcentricityTolerance)
        .value("StepDimTol_GTTCylindricityTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTCylindricityTolerance)
        .value("StepDimTol_GTTFlatnessTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTFlatnessTolerance)
        .value("StepDimTol_GTTLineProfileTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTLineProfileTolerance)
        .value("StepDimTol_GTTParallelismTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTParallelismTolerance)
        .value("StepDimTol_GTTPerpendicularityTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTPerpendicularityTolerance)
        .value("StepDimTol_GTTPositionTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTPositionTolerance)
        .value("StepDimTol_GTTRoundnessTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTRoundnessTolerance)
        .value("StepDimTol_GTTStraightnessTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTStraightnessTolerance)
        .value("StepDimTol_GTTSurfaceProfileTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTSurfaceProfileTolerance)
        .value("StepDimTol_GTTSymmetryTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTSymmetryTolerance)
        .value("StepDimTol_GTTTotalRunoutTolerance",StepDimTol_GeometricToleranceType::StepDimTol_GTTTotalRunoutTolerance).export_values();
    py::enum_<StepDimTol_GeometricToleranceModifier>(m, "StepDimTol_GeometricToleranceModifier",R"#(None)#")
        .value("StepDimTol_GTMAnyCrossSection",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMAnyCrossSection)
        .value("StepDimTol_GTMCommonZone",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMCommonZone)
        .value("StepDimTol_GTMEachRadialElement",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMEachRadialElement)
        .value("StepDimTol_GTMFreeState",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMFreeState)
        .value("StepDimTol_GTMLeastMaterialRequirement",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMLeastMaterialRequirement)
        .value("StepDimTol_GTMLineElement",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMLineElement)
        .value("StepDimTol_GTMMajorDiameter",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMMajorDiameter)
        .value("StepDimTol_GTMMaximumMaterialRequirement",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMMaximumMaterialRequirement)
        .value("StepDimTol_GTMMinorDiameter",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMMinorDiameter)
        .value("StepDimTol_GTMNotConvex",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMNotConvex)
        .value("StepDimTol_GTMPitchDiameter",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMPitchDiameter)
        .value("StepDimTol_GTMReciprocityRequirement",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMReciprocityRequirement)
        .value("StepDimTol_GTMSeparateRequirement",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMSeparateRequirement)
        .value("StepDimTol_GTMStatisticalTolerance",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMStatisticalTolerance)
        .value("StepDimTol_GTMTangentPlane",StepDimTol_GeometricToleranceModifier::StepDimTol_GTMTangentPlane).export_values();
    py::enum_<StepDimTol_LimitCondition>(m, "StepDimTol_LimitCondition",R"#(None)#")
        .value("StepDimTol_MaximumMaterialCondition",StepDimTol_LimitCondition::StepDimTol_MaximumMaterialCondition)
        .value("StepDimTol_LeastMaterialCondition",StepDimTol_LimitCondition::StepDimTol_LeastMaterialCondition)
        .value("StepDimTol_RegardlessOfFeatureSize",StepDimTol_LimitCondition::StepDimTol_RegardlessOfFeatureSize).export_values();
    py::enum_<StepDimTol_DatumReferenceModifierType>(m, "StepDimTol_DatumReferenceModifierType",R"#(None)#")
        .value("StepDimTol_CircularOrCylindrical",StepDimTol_DatumReferenceModifierType::StepDimTol_CircularOrCylindrical)
        .value("StepDimTol_Distance",StepDimTol_DatumReferenceModifierType::StepDimTol_Distance)
        .value("StepDimTol_Projected",StepDimTol_DatumReferenceModifierType::StepDimTol_Projected)
        .value("StepDimTol_Spherical",StepDimTol_DatumReferenceModifierType::StepDimTol_Spherical).export_values();
    py::enum_<StepDimTol_AreaUnitType>(m, "StepDimTol_AreaUnitType",R"#(None)#")
        .value("StepDimTol_Circular",StepDimTol_AreaUnitType::StepDimTol_Circular)
        .value("StepDimTol_Rectangular",StepDimTol_AreaUnitType::StepDimTol_Rectangular)
        .value("StepDimTol_Square",StepDimTol_AreaUnitType::StepDimTol_Square).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<StepDimTol_DatumReferenceModifier>(m,"StepDimTol_Array1OfDatumReferenceModifier");  
    preregister_template_NCollection_Array1<opencascade::handle<StepDimTol_DatumReferenceElement> >(m,"StepDimTol_Array1OfDatumReferenceElement");  
    preregister_template_NCollection_Array1<StepDimTol_GeometricToleranceModifier>(m,"StepDimTol_Array1OfGeometricToleranceModifier");  
    preregister_template_NCollection_Array1<StepDimTol_DatumSystemOrReference>(m,"StepDimTol_Array1OfDatumSystemOrReference");  
    preregister_template_NCollection_Array1<opencascade::handle<StepDimTol_DatumReferenceCompartment> >(m,"StepDimTol_Array1OfDatumReferenceCompartment");  
    preregister_template_NCollection_Array1<opencascade::handle<StepDimTol_DatumReference> >(m,"StepDimTol_Array1OfDatumReference");  
    preregister_template_NCollection_Array1<StepDimTol_ToleranceZoneTarget>(m,"StepDimTol_Array1OfToleranceZoneTarget");  

// classes forward declarations only
    py::class_<StepDimTol_CommonDatum ,opencascade::handle<StepDimTol_CommonDatum>  , StepRepr_CompositeShapeAspect >(m,"StepDimTol_CommonDatum",R"#(Representation of STEP entity CommonDatumRepresentation of STEP entity CommonDatumRepresentation of STEP entity CommonDatum)#");
    py::class_<StepDimTol_Datum ,opencascade::handle<StepDimTol_Datum>  , StepRepr_ShapeAspect >(m,"StepDimTol_Datum",R"#(Representation of STEP entity DatumRepresentation of STEP entity DatumRepresentation of STEP entity Datum)#");
    py::class_<StepDimTol_DatumFeature ,opencascade::handle<StepDimTol_DatumFeature>  , StepRepr_ShapeAspect >(m,"StepDimTol_DatumFeature",R"#(Representation of STEP entity DatumFeatureRepresentation of STEP entity DatumFeatureRepresentation of STEP entity DatumFeature)#");
    py::class_<StepDimTol_DatumOrCommonDatum , shared_ptr<StepDimTol_DatumOrCommonDatum>  , StepData_SelectType >(m,"StepDimTol_DatumOrCommonDatum",R"#(None)#");
    py::class_<StepDimTol_DatumReference ,opencascade::handle<StepDimTol_DatumReference>  , Standard_Transient >(m,"StepDimTol_DatumReference",R"#(Representation of STEP entity DatumReferenceRepresentation of STEP entity DatumReferenceRepresentation of STEP entity DatumReference)#");
    py::class_<StepDimTol_DatumReferenceModifier , shared_ptr<StepDimTol_DatumReferenceModifier>  , StepData_SelectType >(m,"StepDimTol_DatumReferenceModifier",R"#(None)#");
    py::class_<StepDimTol_DatumReferenceModifierWithValue ,opencascade::handle<StepDimTol_DatumReferenceModifierWithValue>  , Standard_Transient >(m,"StepDimTol_DatumReferenceModifierWithValue",R"#(Representation of STEP entity DatumReferenceModifierWithValueRepresentation of STEP entity DatumReferenceModifierWithValueRepresentation of STEP entity DatumReferenceModifierWithValue)#");
    py::class_<StepDimTol_DatumSystem ,opencascade::handle<StepDimTol_DatumSystem>  , StepRepr_ShapeAspect >(m,"StepDimTol_DatumSystem",R"#(Representation of STEP entity DatumSystemRepresentation of STEP entity DatumSystemRepresentation of STEP entity DatumSystem)#");
    py::class_<StepDimTol_DatumSystemOrReference , shared_ptr<StepDimTol_DatumSystemOrReference>  , StepData_SelectType >(m,"StepDimTol_DatumSystemOrReference",R"#(None)#");
    py::class_<StepDimTol_DatumTarget ,opencascade::handle<StepDimTol_DatumTarget>  , StepRepr_ShapeAspect >(m,"StepDimTol_DatumTarget",R"#(Representation of STEP entity DatumTargetRepresentation of STEP entity DatumTargetRepresentation of STEP entity DatumTarget)#");
    py::class_<StepDimTol_GeneralDatumReference ,opencascade::handle<StepDimTol_GeneralDatumReference>  , StepRepr_ShapeAspect >(m,"StepDimTol_GeneralDatumReference",R"#(Representation of STEP entity GeneralDatumReferenceRepresentation of STEP entity GeneralDatumReferenceRepresentation of STEP entity GeneralDatumReference)#");
    py::class_<StepDimTol_GeometricTolerance ,opencascade::handle<StepDimTol_GeometricTolerance>  , Standard_Transient >(m,"StepDimTol_GeometricTolerance",R"#(Representation of STEP entity GeometricToleranceRepresentation of STEP entity GeometricToleranceRepresentation of STEP entity GeometricTolerance)#");
    py::class_<StepDimTol_GeometricToleranceRelationship ,opencascade::handle<StepDimTol_GeometricToleranceRelationship>  , Standard_Transient >(m,"StepDimTol_GeometricToleranceRelationship",R"#(Representation of STEP entity GeometricToleranceRelationshipRepresentation of STEP entity GeometricToleranceRelationshipRepresentation of STEP entity GeometricToleranceRelationship)#");
    py::class_<StepDimTol_GeometricToleranceTarget , shared_ptr<StepDimTol_GeometricToleranceTarget>  , StepData_SelectType >(m,"StepDimTol_GeometricToleranceTarget",R"#(None)#");
    py::class_<StepDimTol_HArray1OfDatumReference ,opencascade::handle<StepDimTol_HArray1OfDatumReference>  , StepDimTol_Array1OfDatumReference , Standard_Transient >(m,"StepDimTol_HArray1OfDatumReference",R"#()#");
    py::class_<StepDimTol_HArray1OfDatumReferenceCompartment ,opencascade::handle<StepDimTol_HArray1OfDatumReferenceCompartment>  , StepDimTol_Array1OfDatumReferenceCompartment , Standard_Transient >(m,"StepDimTol_HArray1OfDatumReferenceCompartment",R"#()#");
    py::class_<StepDimTol_HArray1OfDatumReferenceElement ,opencascade::handle<StepDimTol_HArray1OfDatumReferenceElement>  , StepDimTol_Array1OfDatumReferenceElement , Standard_Transient >(m,"StepDimTol_HArray1OfDatumReferenceElement",R"#()#");
    py::class_<StepDimTol_HArray1OfDatumReferenceModifier ,opencascade::handle<StepDimTol_HArray1OfDatumReferenceModifier>  , StepDimTol_Array1OfDatumReferenceModifier , Standard_Transient >(m,"StepDimTol_HArray1OfDatumReferenceModifier",R"#()#");
    py::class_<StepDimTol_HArray1OfDatumSystemOrReference ,opencascade::handle<StepDimTol_HArray1OfDatumSystemOrReference>  , StepDimTol_Array1OfDatumSystemOrReference , Standard_Transient >(m,"StepDimTol_HArray1OfDatumSystemOrReference",R"#()#");
    py::class_<StepDimTol_HArray1OfGeometricToleranceModifier ,opencascade::handle<StepDimTol_HArray1OfGeometricToleranceModifier>  , StepDimTol_Array1OfGeometricToleranceModifier , Standard_Transient >(m,"StepDimTol_HArray1OfGeometricToleranceModifier",R"#()#");
    py::class_<StepDimTol_HArray1OfToleranceZoneTarget ,opencascade::handle<StepDimTol_HArray1OfToleranceZoneTarget>  , StepDimTol_Array1OfToleranceZoneTarget , Standard_Transient >(m,"StepDimTol_HArray1OfToleranceZoneTarget",R"#()#");
    py::class_<StepDimTol_RunoutZoneOrientation ,opencascade::handle<StepDimTol_RunoutZoneOrientation>  , Standard_Transient >(m,"StepDimTol_RunoutZoneOrientation",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepDimTol_ShapeToleranceSelect , shared_ptr<StepDimTol_ShapeToleranceSelect>  , StepData_SelectType >(m,"StepDimTol_ShapeToleranceSelect",R"#(Representation of STEP SELECT type ShapeToleranceSelect)#");
    py::class_<StepDimTol_SimpleDatumReferenceModifierMember ,opencascade::handle<StepDimTol_SimpleDatumReferenceModifierMember>  , StepData_SelectInt >(m,"StepDimTol_SimpleDatumReferenceModifierMember",R"#(Defines SimpleDatumReferenceModifier as unique member of DatumReferenceModifier Works with an EnumToolDefines SimpleDatumReferenceModifier as unique member of DatumReferenceModifier Works with an EnumToolDefines SimpleDatumReferenceModifier as unique member of DatumReferenceModifier Works with an EnumTool)#");
    py::class_<StepDimTol_ToleranceZone ,opencascade::handle<StepDimTol_ToleranceZone>  , StepRepr_ShapeAspect >(m,"StepDimTol_ToleranceZone",R"#(Representation of STEP entity ToleranceZoneRepresentation of STEP entity ToleranceZoneRepresentation of STEP entity ToleranceZone)#");
    py::class_<StepDimTol_ToleranceZoneDefinition ,opencascade::handle<StepDimTol_ToleranceZoneDefinition>  , Standard_Transient >(m,"StepDimTol_ToleranceZoneDefinition",R"#(Representation of STEP entity ToleranceZoneDefinitionRepresentation of STEP entity ToleranceZoneDefinitionRepresentation of STEP entity ToleranceZoneDefinition)#");
    py::class_<StepDimTol_ToleranceZoneForm ,opencascade::handle<StepDimTol_ToleranceZoneForm>  , Standard_Transient >(m,"StepDimTol_ToleranceZoneForm",R"#(Added for Dimensional TolerancesAdded for Dimensional TolerancesAdded for Dimensional Tolerances)#");
    py::class_<StepDimTol_ToleranceZoneTarget , shared_ptr<StepDimTol_ToleranceZoneTarget>  , StepData_SelectType >(m,"StepDimTol_ToleranceZoneTarget",R"#(None)#");
    py::class_<StepDimTol_CylindricityTolerance ,opencascade::handle<StepDimTol_CylindricityTolerance>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_CylindricityTolerance",R"#(Representation of STEP entity CylindricityToleranceRepresentation of STEP entity CylindricityToleranceRepresentation of STEP entity CylindricityTolerance)#");
    py::class_<StepDimTol_DatumReferenceCompartment ,opencascade::handle<StepDimTol_DatumReferenceCompartment>  , StepDimTol_GeneralDatumReference >(m,"StepDimTol_DatumReferenceCompartment",R"#(Representation of STEP entity DatumReferenceCompartmentRepresentation of STEP entity DatumReferenceCompartmentRepresentation of STEP entity DatumReferenceCompartment)#");
    py::class_<StepDimTol_DatumReferenceElement ,opencascade::handle<StepDimTol_DatumReferenceElement>  , StepDimTol_GeneralDatumReference >(m,"StepDimTol_DatumReferenceElement",R"#(Representation of STEP entity DatumReferenceElementRepresentation of STEP entity DatumReferenceElementRepresentation of STEP entity DatumReferenceElement)#");
    py::class_<StepDimTol_FlatnessTolerance ,opencascade::handle<StepDimTol_FlatnessTolerance>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_FlatnessTolerance",R"#(Representation of STEP entity FlatnessToleranceRepresentation of STEP entity FlatnessToleranceRepresentation of STEP entity FlatnessTolerance)#");
    py::class_<StepDimTol_GeoTolAndGeoTolWthDatRef ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRef>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_GeoTolAndGeoTolWthDatRef",R"#()#");
    py::class_<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod",R"#()#");
    py::class_<StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol",R"#()#");
    py::class_<StepDimTol_GeoTolAndGeoTolWthMod ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMod>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_GeoTolAndGeoTolWthMod",R"#()#");
    py::class_<StepDimTol_GeometricToleranceWithDatumReference ,opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_GeometricToleranceWithDatumReference",R"#(Representation of STEP entity GeometricToleranceWithDatumReferenceRepresentation of STEP entity GeometricToleranceWithDatumReferenceRepresentation of STEP entity GeometricToleranceWithDatumReference)#");
    py::class_<StepDimTol_GeometricToleranceWithDefinedUnit ,opencascade::handle<StepDimTol_GeometricToleranceWithDefinedUnit>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_GeometricToleranceWithDefinedUnit",R"#(Representation of STEP entity GeometricToleranceWithDefinedUnitRepresentation of STEP entity GeometricToleranceWithDefinedUnitRepresentation of STEP entity GeometricToleranceWithDefinedUnit)#");
    py::class_<StepDimTol_GeometricToleranceWithModifiers ,opencascade::handle<StepDimTol_GeometricToleranceWithModifiers>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_GeometricToleranceWithModifiers",R"#(Representation of STEP entity GeometricToleranceWithModifiersRepresentation of STEP entity GeometricToleranceWithModifiersRepresentation of STEP entity GeometricToleranceWithModifiers)#");
    py::class_<StepDimTol_LineProfileTolerance ,opencascade::handle<StepDimTol_LineProfileTolerance>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_LineProfileTolerance",R"#(Representation of STEP entity LineProfileToleranceRepresentation of STEP entity LineProfileToleranceRepresentation of STEP entity LineProfileTolerance)#");
    py::class_<StepDimTol_ModifiedGeometricTolerance ,opencascade::handle<StepDimTol_ModifiedGeometricTolerance>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_ModifiedGeometricTolerance",R"#(Representation of STEP entity ModifiedGeometricToleranceRepresentation of STEP entity ModifiedGeometricToleranceRepresentation of STEP entity ModifiedGeometricTolerance)#");
    py::class_<StepDimTol_NonUniformZoneDefinition ,opencascade::handle<StepDimTol_NonUniformZoneDefinition>  , StepDimTol_ToleranceZoneDefinition >(m,"StepDimTol_NonUniformZoneDefinition",R"#(Representation of STEP entity NonUniformZoneDefinitionRepresentation of STEP entity NonUniformZoneDefinitionRepresentation of STEP entity NonUniformZoneDefinition)#");
    py::class_<StepDimTol_PlacedDatumTargetFeature ,opencascade::handle<StepDimTol_PlacedDatumTargetFeature>  , StepDimTol_DatumTarget >(m,"StepDimTol_PlacedDatumTargetFeature",R"#(Representation of STEP entity PlacedDatumTargetFeatureRepresentation of STEP entity PlacedDatumTargetFeatureRepresentation of STEP entity PlacedDatumTargetFeature)#");
    py::class_<StepDimTol_PositionTolerance ,opencascade::handle<StepDimTol_PositionTolerance>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_PositionTolerance",R"#(Representation of STEP entity PositionToleranceRepresentation of STEP entity PositionToleranceRepresentation of STEP entity PositionTolerance)#");
    py::class_<StepDimTol_ProjectedZoneDefinition ,opencascade::handle<StepDimTol_ProjectedZoneDefinition>  , StepDimTol_ToleranceZoneDefinition >(m,"StepDimTol_ProjectedZoneDefinition",R"#(Representation of STEP entity ProjectedZoneDefinitionRepresentation of STEP entity ProjectedZoneDefinitionRepresentation of STEP entity ProjectedZoneDefinition)#");
    py::class_<StepDimTol_RoundnessTolerance ,opencascade::handle<StepDimTol_RoundnessTolerance>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_RoundnessTolerance",R"#(Representation of STEP entity RoundnessToleranceRepresentation of STEP entity RoundnessToleranceRepresentation of STEP entity RoundnessTolerance)#");
    py::class_<StepDimTol_RunoutZoneDefinition ,opencascade::handle<StepDimTol_RunoutZoneDefinition>  , StepDimTol_ToleranceZoneDefinition >(m,"StepDimTol_RunoutZoneDefinition",R"#(Representation of STEP entity ToleranceZoneDefinitionRepresentation of STEP entity ToleranceZoneDefinitionRepresentation of STEP entity ToleranceZoneDefinition)#");
    py::class_<StepDimTol_StraightnessTolerance ,opencascade::handle<StepDimTol_StraightnessTolerance>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_StraightnessTolerance",R"#(Representation of STEP entity StraightnessToleranceRepresentation of STEP entity StraightnessToleranceRepresentation of STEP entity StraightnessTolerance)#");
    py::class_<StepDimTol_SurfaceProfileTolerance ,opencascade::handle<StepDimTol_SurfaceProfileTolerance>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_SurfaceProfileTolerance",R"#(Representation of STEP entity SurfaceProfileToleranceRepresentation of STEP entity SurfaceProfileToleranceRepresentation of STEP entity SurfaceProfileTolerance)#");
    py::class_<StepDimTol_UnequallyDisposedGeometricTolerance ,opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance>  , StepDimTol_GeometricTolerance >(m,"StepDimTol_UnequallyDisposedGeometricTolerance",R"#(Representation of STEP entity UnequallyDisposedGeometricToleranceRepresentation of STEP entity UnequallyDisposedGeometricToleranceRepresentation of STEP entity UnequallyDisposedGeometricTolerance)#");
    py::class_<StepDimTol_AngularityTolerance ,opencascade::handle<StepDimTol_AngularityTolerance>  , StepDimTol_GeometricToleranceWithDatumReference >(m,"StepDimTol_AngularityTolerance",R"#(Representation of STEP entity AngularityToleranceRepresentation of STEP entity AngularityToleranceRepresentation of STEP entity AngularityTolerance)#");
    py::class_<StepDimTol_CircularRunoutTolerance ,opencascade::handle<StepDimTol_CircularRunoutTolerance>  , StepDimTol_GeometricToleranceWithDatumReference >(m,"StepDimTol_CircularRunoutTolerance",R"#(Representation of STEP entity CircularRunoutToleranceRepresentation of STEP entity CircularRunoutToleranceRepresentation of STEP entity CircularRunoutTolerance)#");
    py::class_<StepDimTol_CoaxialityTolerance ,opencascade::handle<StepDimTol_CoaxialityTolerance>  , StepDimTol_GeometricToleranceWithDatumReference >(m,"StepDimTol_CoaxialityTolerance",R"#(Representation of STEP entity CoaxialityToleranceRepresentation of STEP entity CoaxialityToleranceRepresentation of STEP entity CoaxialityTolerance)#");
    py::class_<StepDimTol_ConcentricityTolerance ,opencascade::handle<StepDimTol_ConcentricityTolerance>  , StepDimTol_GeometricToleranceWithDatumReference >(m,"StepDimTol_ConcentricityTolerance",R"#(Representation of STEP entity ConcentricityToleranceRepresentation of STEP entity ConcentricityToleranceRepresentation of STEP entity ConcentricityTolerance)#");
    py::class_<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol>  , StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod >(m,"StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol",R"#()#");
    py::class_<StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol>  , StepDimTol_GeoTolAndGeoTolWthDatRef >(m,"StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol",R"#()#");
    py::class_<StepDimTol_GeoTolAndGeoTolWthMaxTol ,opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMaxTol>  , StepDimTol_GeoTolAndGeoTolWthMod >(m,"StepDimTol_GeoTolAndGeoTolWthMaxTol",R"#()#");
    py::class_<StepDimTol_GeometricToleranceWithDefinedAreaUnit ,opencascade::handle<StepDimTol_GeometricToleranceWithDefinedAreaUnit>  , StepDimTol_GeometricToleranceWithDefinedUnit >(m,"StepDimTol_GeometricToleranceWithDefinedAreaUnit",R"#(Representation of STEP entity GeometricToleranceWithDefinedAreaUnitRepresentation of STEP entity GeometricToleranceWithDefinedAreaUnitRepresentation of STEP entity GeometricToleranceWithDefinedAreaUnit)#");
    py::class_<StepDimTol_GeometricToleranceWithMaximumTolerance ,opencascade::handle<StepDimTol_GeometricToleranceWithMaximumTolerance>  , StepDimTol_GeometricToleranceWithModifiers >(m,"StepDimTol_GeometricToleranceWithMaximumTolerance",R"#(Representation of STEP entity GeometricToleranceWithMaximumToleranceRepresentation of STEP entity GeometricToleranceWithMaximumToleranceRepresentation of STEP entity GeometricToleranceWithMaximumTolerance)#");
    py::class_<StepDimTol_ParallelismTolerance ,opencascade::handle<StepDimTol_ParallelismTolerance>  , StepDimTol_GeometricToleranceWithDatumReference >(m,"StepDimTol_ParallelismTolerance",R"#(Representation of STEP entity ParallelismToleranceRepresentation of STEP entity ParallelismToleranceRepresentation of STEP entity ParallelismTolerance)#");
    py::class_<StepDimTol_PerpendicularityTolerance ,opencascade::handle<StepDimTol_PerpendicularityTolerance>  , StepDimTol_GeometricToleranceWithDatumReference >(m,"StepDimTol_PerpendicularityTolerance",R"#(Representation of STEP entity PerpendicularityToleranceRepresentation of STEP entity PerpendicularityToleranceRepresentation of STEP entity PerpendicularityTolerance)#");
    py::class_<StepDimTol_SymmetryTolerance ,opencascade::handle<StepDimTol_SymmetryTolerance>  , StepDimTol_GeometricToleranceWithDatumReference >(m,"StepDimTol_SymmetryTolerance",R"#(Representation of STEP entity SymmetryToleranceRepresentation of STEP entity SymmetryToleranceRepresentation of STEP entity SymmetryTolerance)#");
    py::class_<StepDimTol_TotalRunoutTolerance ,opencascade::handle<StepDimTol_TotalRunoutTolerance>  , StepDimTol_GeometricToleranceWithDatumReference >(m,"StepDimTol_TotalRunoutTolerance",R"#(Representation of STEP entity TotalRunoutToleranceRepresentation of STEP entity TotalRunoutToleranceRepresentation of STEP entity TotalRunoutTolerance)#");

};

// user-defined post-inclusion per module

// user-defined post
