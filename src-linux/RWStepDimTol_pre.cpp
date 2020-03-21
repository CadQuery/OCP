
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CoaxialityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeneralDatumReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_SurfaceProfileTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ModifiedGeometricTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_SymmetryTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMod.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ToleranceZone.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumReferenceModifierWithValue.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_StraightnessTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_RoundnessTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumReferenceCompartment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ProjectedZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CircularRunoutTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_PerpendicularityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMaxTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedAreaUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_LineProfileTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_NonUniformZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRef.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ToleranceZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_RunoutZoneOrientation.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ParallelismTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumTarget.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ToleranceZoneForm.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_AngularityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_PlacedDatumTargetFeature.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_RunoutZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CylindricityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_TotalRunoutTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumReferenceElement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumFeature.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ConcentricityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_PositionTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CommonDatum.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithMaximumTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_FlatnessTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepDimTol_RWAngularityTolerance.hxx>
#include <RWStepDimTol_RWCircularRunoutTolerance.hxx>
#include <RWStepDimTol_RWCoaxialityTolerance.hxx>
#include <RWStepDimTol_RWCommonDatum.hxx>
#include <RWStepDimTol_RWConcentricityTolerance.hxx>
#include <RWStepDimTol_RWCylindricityTolerance.hxx>
#include <RWStepDimTol_RWDatum.hxx>
#include <RWStepDimTol_RWDatumFeature.hxx>
#include <RWStepDimTol_RWDatumReference.hxx>
#include <RWStepDimTol_RWDatumReferenceCompartment.hxx>
#include <RWStepDimTol_RWDatumReferenceElement.hxx>
#include <RWStepDimTol_RWDatumReferenceModifierWithValue.hxx>
#include <RWStepDimTol_RWDatumSystem.hxx>
#include <RWStepDimTol_RWDatumTarget.hxx>
#include <RWStepDimTol_RWFlatnessTolerance.hxx>
#include <RWStepDimTol_RWGeneralDatumReference.hxx>
#include <RWStepDimTol_RWGeometricTolerance.hxx>
#include <RWStepDimTol_RWGeometricToleranceRelationship.hxx>
#include <RWStepDimTol_RWGeometricToleranceWithDatumReference.hxx>
#include <RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit.hxx>
#include <RWStepDimTol_RWGeometricToleranceWithDefinedUnit.hxx>
#include <RWStepDimTol_RWGeometricToleranceWithMaximumTolerance.hxx>
#include <RWStepDimTol_RWGeometricToleranceWithModifiers.hxx>
#include <RWStepDimTol_RWGeoTolAndGeoTolWthDatRef.hxx>
#include <RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx>
#include <RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx>
#include <RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx>
#include <RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx>
#include <RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol.hxx>
#include <RWStepDimTol_RWGeoTolAndGeoTolWthMod.hxx>
#include <RWStepDimTol_RWLineProfileTolerance.hxx>
#include <RWStepDimTol_RWModifiedGeometricTolerance.hxx>
#include <RWStepDimTol_RWNonUniformZoneDefinition.hxx>
#include <RWStepDimTol_RWParallelismTolerance.hxx>
#include <RWStepDimTol_RWPerpendicularityTolerance.hxx>
#include <RWStepDimTol_RWPlacedDatumTargetFeature.hxx>
#include <RWStepDimTol_RWPositionTolerance.hxx>
#include <RWStepDimTol_RWProjectedZoneDefinition.hxx>
#include <RWStepDimTol_RWRoundnessTolerance.hxx>
#include <RWStepDimTol_RWRunoutZoneDefinition.hxx>
#include <RWStepDimTol_RWRunoutZoneOrientation.hxx>
#include <RWStepDimTol_RWStraightnessTolerance.hxx>
#include <RWStepDimTol_RWSurfaceProfileTolerance.hxx>
#include <RWStepDimTol_RWSymmetryTolerance.hxx>
#include <RWStepDimTol_RWToleranceZone.hxx>
#include <RWStepDimTol_RWToleranceZoneDefinition.hxx>
#include <RWStepDimTol_RWToleranceZoneForm.hxx>
#include <RWStepDimTol_RWTotalRunoutTolerance.hxx>
#include <RWStepDimTol_RWUnequallyDisposedGeometricTolerance.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepDimTol_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepDimTol", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStepDimTol_RWAngularityTolerance , shared_ptr<RWStepDimTol_RWAngularityTolerance> >(m,"RWStepDimTol_RWAngularityTolerance",R"#(Read & Write tool for AngularityTolerance)#");
    py::class_<RWStepDimTol_RWCircularRunoutTolerance , shared_ptr<RWStepDimTol_RWCircularRunoutTolerance> >(m,"RWStepDimTol_RWCircularRunoutTolerance",R"#(Read & Write tool for CircularRunoutTolerance)#");
    py::class_<RWStepDimTol_RWCoaxialityTolerance , shared_ptr<RWStepDimTol_RWCoaxialityTolerance> >(m,"RWStepDimTol_RWCoaxialityTolerance",R"#(Read & Write tool for CoaxialityTolerance)#");
    py::class_<RWStepDimTol_RWCommonDatum , shared_ptr<RWStepDimTol_RWCommonDatum> >(m,"RWStepDimTol_RWCommonDatum",R"#(Read & Write tool for CommonDatum)#");
    py::class_<RWStepDimTol_RWConcentricityTolerance , shared_ptr<RWStepDimTol_RWConcentricityTolerance> >(m,"RWStepDimTol_RWConcentricityTolerance",R"#(Read & Write tool for ConcentricityTolerance)#");
    py::class_<RWStepDimTol_RWCylindricityTolerance , shared_ptr<RWStepDimTol_RWCylindricityTolerance> >(m,"RWStepDimTol_RWCylindricityTolerance",R"#(Read & Write tool for CylindricityTolerance)#");
    py::class_<RWStepDimTol_RWDatum , shared_ptr<RWStepDimTol_RWDatum> >(m,"RWStepDimTol_RWDatum",R"#(Read & Write tool for Datum)#");
    py::class_<RWStepDimTol_RWDatumFeature , shared_ptr<RWStepDimTol_RWDatumFeature> >(m,"RWStepDimTol_RWDatumFeature",R"#(Read & Write tool for DatumFeature)#");
    py::class_<RWStepDimTol_RWDatumReference , shared_ptr<RWStepDimTol_RWDatumReference> >(m,"RWStepDimTol_RWDatumReference",R"#(Read & Write tool for DatumReference)#");
    py::class_<RWStepDimTol_RWDatumReferenceCompartment , shared_ptr<RWStepDimTol_RWDatumReferenceCompartment> >(m,"RWStepDimTol_RWDatumReferenceCompartment",R"#(Read & Write tool for DatumReferenceElement)#");
    py::class_<RWStepDimTol_RWDatumReferenceElement , shared_ptr<RWStepDimTol_RWDatumReferenceElement> >(m,"RWStepDimTol_RWDatumReferenceElement",R"#(Read & Write tool for DatumReferenceElement)#");
    py::class_<RWStepDimTol_RWDatumReferenceModifierWithValue , shared_ptr<RWStepDimTol_RWDatumReferenceModifierWithValue> >(m,"RWStepDimTol_RWDatumReferenceModifierWithValue",R"#(Read & Write tool for DatumReferenceModifierWithValue)#");
    py::class_<RWStepDimTol_RWDatumSystem , shared_ptr<RWStepDimTol_RWDatumSystem> >(m,"RWStepDimTol_RWDatumSystem",R"#(Read & Write tool for DatumSystem)#");
    py::class_<RWStepDimTol_RWDatumTarget , shared_ptr<RWStepDimTol_RWDatumTarget> >(m,"RWStepDimTol_RWDatumTarget",R"#(Read & Write tool for DatumTarget)#");
    py::class_<RWStepDimTol_RWFlatnessTolerance , shared_ptr<RWStepDimTol_RWFlatnessTolerance> >(m,"RWStepDimTol_RWFlatnessTolerance",R"#(Read & Write tool for FlatnessTolerance)#");
    py::class_<RWStepDimTol_RWGeneralDatumReference , shared_ptr<RWStepDimTol_RWGeneralDatumReference> >(m,"RWStepDimTol_RWGeneralDatumReference",R"#(Read & Write tool for GeneralDatumReference)#");
    py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRef , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRef> >(m,"RWStepDimTol_RWGeoTolAndGeoTolWthDatRef",R"#(Read & Write Module for GeoTolAndGeoTolWthDatRef)#");
    py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol> >(m,"RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol",R"#(Read & Write Module for GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol)#");
    py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod> >(m,"RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod",R"#(Read & Write Module for GeoTolAndGeoTolWthDatRefAndGeoTolWthMod)#");
    py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol> >(m,"RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol",R"#(Read & Write Module for ReprItemAndLengthMeasureWithUni)#");
    py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol> >(m,"RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol",R"#(Read & Write Module for GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol)#");
    py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol> >(m,"RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol",R"#(Read & Write Module for GeoTolAndGeoTolWthMaxTol)#");
    py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthMod , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthMod> >(m,"RWStepDimTol_RWGeoTolAndGeoTolWthMod",R"#(Read & Write Module for GeoTolAndGeoTolWthMod)#");
    py::class_<RWStepDimTol_RWGeometricTolerance , shared_ptr<RWStepDimTol_RWGeometricTolerance> >(m,"RWStepDimTol_RWGeometricTolerance",R"#(Read & Write tool for GeometricTolerance)#");
    py::class_<RWStepDimTol_RWGeometricToleranceRelationship , shared_ptr<RWStepDimTol_RWGeometricToleranceRelationship> >(m,"RWStepDimTol_RWGeometricToleranceRelationship",R"#(Read & Write tool for GeometricToleranceRelationship)#");
    py::class_<RWStepDimTol_RWGeometricToleranceWithDatumReference , shared_ptr<RWStepDimTol_RWGeometricToleranceWithDatumReference> >(m,"RWStepDimTol_RWGeometricToleranceWithDatumReference",R"#(Read & Write tool for GeometricToleranceWithDatumReference)#");
    py::class_<RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit , shared_ptr<RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit> >(m,"RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit",R"#(Read & Write tool for GeometricToleranceWithDefinedAreaUnit)#");
    py::class_<RWStepDimTol_RWGeometricToleranceWithDefinedUnit , shared_ptr<RWStepDimTol_RWGeometricToleranceWithDefinedUnit> >(m,"RWStepDimTol_RWGeometricToleranceWithDefinedUnit",R"#(Read & Write tool for GeometricToleranceWithDefinedUnit)#");
    py::class_<RWStepDimTol_RWGeometricToleranceWithMaximumTolerance , shared_ptr<RWStepDimTol_RWGeometricToleranceWithMaximumTolerance> >(m,"RWStepDimTol_RWGeometricToleranceWithMaximumTolerance",R"#(Read & Write tool for GeometricToleranceWithMaximumTolerance)#");
    py::class_<RWStepDimTol_RWGeometricToleranceWithModifiers , shared_ptr<RWStepDimTol_RWGeometricToleranceWithModifiers> >(m,"RWStepDimTol_RWGeometricToleranceWithModifiers",R"#(Read & Write tool for GeometricToleranceWithModifiers)#");
    py::class_<RWStepDimTol_RWLineProfileTolerance , shared_ptr<RWStepDimTol_RWLineProfileTolerance> >(m,"RWStepDimTol_RWLineProfileTolerance",R"#(Read & Write tool for LineProfileTolerance)#");
    py::class_<RWStepDimTol_RWModifiedGeometricTolerance , shared_ptr<RWStepDimTol_RWModifiedGeometricTolerance> >(m,"RWStepDimTol_RWModifiedGeometricTolerance",R"#(Read & Write tool for ModifiedGeometricTolerance)#");
    py::class_<RWStepDimTol_RWNonUniformZoneDefinition , shared_ptr<RWStepDimTol_RWNonUniformZoneDefinition> >(m,"RWStepDimTol_RWNonUniformZoneDefinition",R"#(Read & Write tool for NonUniformZoneDefinition)#");
    py::class_<RWStepDimTol_RWParallelismTolerance , shared_ptr<RWStepDimTol_RWParallelismTolerance> >(m,"RWStepDimTol_RWParallelismTolerance",R"#(Read & Write tool for ParallelismTolerance)#");
    py::class_<RWStepDimTol_RWPerpendicularityTolerance , shared_ptr<RWStepDimTol_RWPerpendicularityTolerance> >(m,"RWStepDimTol_RWPerpendicularityTolerance",R"#(Read & Write tool for PerpendicularityTolerance)#");
    py::class_<RWStepDimTol_RWPlacedDatumTargetFeature , shared_ptr<RWStepDimTol_RWPlacedDatumTargetFeature> >(m,"RWStepDimTol_RWPlacedDatumTargetFeature",R"#(Read & Write tool for PlacedDatumTargetFeature)#");
    py::class_<RWStepDimTol_RWPositionTolerance , shared_ptr<RWStepDimTol_RWPositionTolerance> >(m,"RWStepDimTol_RWPositionTolerance",R"#(Read & Write tool for PositionTolerance)#");
    py::class_<RWStepDimTol_RWProjectedZoneDefinition , shared_ptr<RWStepDimTol_RWProjectedZoneDefinition> >(m,"RWStepDimTol_RWProjectedZoneDefinition",R"#(Read & Write tool for ProjectedZoneDefinition)#");
    py::class_<RWStepDimTol_RWRoundnessTolerance , shared_ptr<RWStepDimTol_RWRoundnessTolerance> >(m,"RWStepDimTol_RWRoundnessTolerance",R"#(Read & Write tool for RoundnessTolerance)#");
    py::class_<RWStepDimTol_RWRunoutZoneDefinition , shared_ptr<RWStepDimTol_RWRunoutZoneDefinition> >(m,"RWStepDimTol_RWRunoutZoneDefinition",R"#(Read & Write tool for RunoutZoneDefinition)#");
    py::class_<RWStepDimTol_RWRunoutZoneOrientation , shared_ptr<RWStepDimTol_RWRunoutZoneOrientation> >(m,"RWStepDimTol_RWRunoutZoneOrientation",R"#(Read & Write tool for RunoutZoneOrientation)#");
    py::class_<RWStepDimTol_RWStraightnessTolerance , shared_ptr<RWStepDimTol_RWStraightnessTolerance> >(m,"RWStepDimTol_RWStraightnessTolerance",R"#(Read & Write tool for StraightnessTolerance)#");
    py::class_<RWStepDimTol_RWSurfaceProfileTolerance , shared_ptr<RWStepDimTol_RWSurfaceProfileTolerance> >(m,"RWStepDimTol_RWSurfaceProfileTolerance",R"#(Read & Write tool for SurfaceProfileTolerance)#");
    py::class_<RWStepDimTol_RWSymmetryTolerance , shared_ptr<RWStepDimTol_RWSymmetryTolerance> >(m,"RWStepDimTol_RWSymmetryTolerance",R"#(Read & Write tool for SymmetryTolerance)#");
    py::class_<RWStepDimTol_RWToleranceZone , shared_ptr<RWStepDimTol_RWToleranceZone> >(m,"RWStepDimTol_RWToleranceZone",R"#(Read & Write tool for ToleranceZone)#");
    py::class_<RWStepDimTol_RWToleranceZoneDefinition , shared_ptr<RWStepDimTol_RWToleranceZoneDefinition> >(m,"RWStepDimTol_RWToleranceZoneDefinition",R"#(Read & Write tool for ToleranceZoneDefinition)#");
    py::class_<RWStepDimTol_RWToleranceZoneForm , shared_ptr<RWStepDimTol_RWToleranceZoneForm> >(m,"RWStepDimTol_RWToleranceZoneForm",R"#(Read & Write tool for ToleranceZoneForm)#");
    py::class_<RWStepDimTol_RWTotalRunoutTolerance , shared_ptr<RWStepDimTol_RWTotalRunoutTolerance> >(m,"RWStepDimTol_RWTotalRunoutTolerance",R"#(Read & Write tool for TotalRunoutTolerance)#");
    py::class_<RWStepDimTol_RWUnequallyDisposedGeometricTolerance , shared_ptr<RWStepDimTol_RWUnequallyDisposedGeometricTolerance> >(m,"RWStepDimTol_RWUnequallyDisposedGeometricTolerance",R"#(Read & Write tool for UnequallyDisposedGeometricTolerance)#");

};

// user-defined post-inclusion per module

// user-defined post
