
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
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_RunoutZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_NonUniformZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CylindricityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMod.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_SurfaceProfileTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeneralDatumReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_LineProfileTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumReferenceElement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumReferenceModifierWithValue.hxx>
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
#include <StepDimTol_DatumTarget.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CommonDatum.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ParallelismTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_RoundnessTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRef.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ToleranceZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_PositionTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumFeature.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ToleranceZone.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithMaximumTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_TotalRunoutTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumReferenceCompartment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_FlatnessTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_AngularityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ToleranceZoneForm.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_PerpendicularityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ProjectedZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ModifiedGeometricTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMaxTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ConcentricityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_RunoutZoneOrientation.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_SymmetryTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CircularRunoutTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CoaxialityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_StraightnessTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedAreaUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
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
void register_RWStepDimTol(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepDimTol"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepDimTol_RWAngularityTolerance , shared_ptr<RWStepDimTol_RWAngularityTolerance> >>(m.attr("RWStepDimTol_RWAngularityTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWCircularRunoutTolerance , shared_ptr<RWStepDimTol_RWCircularRunoutTolerance> >>(m.attr("RWStepDimTol_RWCircularRunoutTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWCoaxialityTolerance , shared_ptr<RWStepDimTol_RWCoaxialityTolerance> >>(m.attr("RWStepDimTol_RWCoaxialityTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWCommonDatum , shared_ptr<RWStepDimTol_RWCommonDatum> >>(m.attr("RWStepDimTol_RWCommonDatum"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWConcentricityTolerance , shared_ptr<RWStepDimTol_RWConcentricityTolerance> >>(m.attr("RWStepDimTol_RWConcentricityTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWCylindricityTolerance , shared_ptr<RWStepDimTol_RWCylindricityTolerance> >>(m.attr("RWStepDimTol_RWCylindricityTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatum , shared_ptr<RWStepDimTol_RWDatum> >>(m.attr("RWStepDimTol_RWDatum"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumFeature , shared_ptr<RWStepDimTol_RWDatumFeature> >>(m.attr("RWStepDimTol_RWDatumFeature"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumReference , shared_ptr<RWStepDimTol_RWDatumReference> >>(m.attr("RWStepDimTol_RWDatumReference"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumReferenceCompartment , shared_ptr<RWStepDimTol_RWDatumReferenceCompartment> >>(m.attr("RWStepDimTol_RWDatumReferenceCompartment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumReferenceElement , shared_ptr<RWStepDimTol_RWDatumReferenceElement> >>(m.attr("RWStepDimTol_RWDatumReferenceElement"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumReferenceModifierWithValue , shared_ptr<RWStepDimTol_RWDatumReferenceModifierWithValue> >>(m.attr("RWStepDimTol_RWDatumReferenceModifierWithValue"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumSystem , shared_ptr<RWStepDimTol_RWDatumSystem> >>(m.attr("RWStepDimTol_RWDatumSystem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumTarget , shared_ptr<RWStepDimTol_RWDatumTarget> >>(m.attr("RWStepDimTol_RWDatumTarget"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWFlatnessTolerance , shared_ptr<RWStepDimTol_RWFlatnessTolerance> >>(m.attr("RWStepDimTol_RWFlatnessTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeneralDatumReference , shared_ptr<RWStepDimTol_RWGeneralDatumReference> >>(m.attr("RWStepDimTol_RWGeneralDatumReference"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRef , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRef> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthDatRef"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthMod , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthMod> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthMod"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricTolerance , shared_ptr<RWStepDimTol_RWGeometricTolerance> >>(m.attr("RWStepDimTol_RWGeometricTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceRelationship , shared_ptr<RWStepDimTol_RWGeometricToleranceRelationship> >>(m.attr("RWStepDimTol_RWGeometricToleranceRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceWithDatumReference , shared_ptr<RWStepDimTol_RWGeometricToleranceWithDatumReference> >>(m.attr("RWStepDimTol_RWGeometricToleranceWithDatumReference"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit , shared_ptr<RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit> >>(m.attr("RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceWithDefinedUnit , shared_ptr<RWStepDimTol_RWGeometricToleranceWithDefinedUnit> >>(m.attr("RWStepDimTol_RWGeometricToleranceWithDefinedUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceWithMaximumTolerance , shared_ptr<RWStepDimTol_RWGeometricToleranceWithMaximumTolerance> >>(m.attr("RWStepDimTol_RWGeometricToleranceWithMaximumTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceWithModifiers , shared_ptr<RWStepDimTol_RWGeometricToleranceWithModifiers> >>(m.attr("RWStepDimTol_RWGeometricToleranceWithModifiers"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWLineProfileTolerance , shared_ptr<RWStepDimTol_RWLineProfileTolerance> >>(m.attr("RWStepDimTol_RWLineProfileTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWModifiedGeometricTolerance , shared_ptr<RWStepDimTol_RWModifiedGeometricTolerance> >>(m.attr("RWStepDimTol_RWModifiedGeometricTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWNonUniformZoneDefinition , shared_ptr<RWStepDimTol_RWNonUniformZoneDefinition> >>(m.attr("RWStepDimTol_RWNonUniformZoneDefinition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWParallelismTolerance , shared_ptr<RWStepDimTol_RWParallelismTolerance> >>(m.attr("RWStepDimTol_RWParallelismTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWPerpendicularityTolerance , shared_ptr<RWStepDimTol_RWPerpendicularityTolerance> >>(m.attr("RWStepDimTol_RWPerpendicularityTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWPlacedDatumTargetFeature , shared_ptr<RWStepDimTol_RWPlacedDatumTargetFeature> >>(m.attr("RWStepDimTol_RWPlacedDatumTargetFeature"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWPositionTolerance , shared_ptr<RWStepDimTol_RWPositionTolerance> >>(m.attr("RWStepDimTol_RWPositionTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWProjectedZoneDefinition , shared_ptr<RWStepDimTol_RWProjectedZoneDefinition> >>(m.attr("RWStepDimTol_RWProjectedZoneDefinition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWRoundnessTolerance , shared_ptr<RWStepDimTol_RWRoundnessTolerance> >>(m.attr("RWStepDimTol_RWRoundnessTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWRunoutZoneDefinition , shared_ptr<RWStepDimTol_RWRunoutZoneDefinition> >>(m.attr("RWStepDimTol_RWRunoutZoneDefinition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWRunoutZoneOrientation , shared_ptr<RWStepDimTol_RWRunoutZoneOrientation> >>(m.attr("RWStepDimTol_RWRunoutZoneOrientation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWStraightnessTolerance , shared_ptr<RWStepDimTol_RWStraightnessTolerance> >>(m.attr("RWStepDimTol_RWStraightnessTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWSurfaceProfileTolerance , shared_ptr<RWStepDimTol_RWSurfaceProfileTolerance> >>(m.attr("RWStepDimTol_RWSurfaceProfileTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWSymmetryTolerance , shared_ptr<RWStepDimTol_RWSymmetryTolerance> >>(m.attr("RWStepDimTol_RWSymmetryTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWToleranceZone , shared_ptr<RWStepDimTol_RWToleranceZone> >>(m.attr("RWStepDimTol_RWToleranceZone"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWToleranceZoneDefinition , shared_ptr<RWStepDimTol_RWToleranceZoneDefinition> >>(m.attr("RWStepDimTol_RWToleranceZoneDefinition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWToleranceZoneForm , shared_ptr<RWStepDimTol_RWToleranceZoneForm> >>(m.attr("RWStepDimTol_RWToleranceZoneForm"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWTotalRunoutTolerance , shared_ptr<RWStepDimTol_RWTotalRunoutTolerance> >>(m.attr("RWStepDimTol_RWTotalRunoutTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWUnequallyDisposedGeometricTolerance , shared_ptr<RWStepDimTol_RWUnequallyDisposedGeometricTolerance> >>(m.attr("RWStepDimTol_RWUnequallyDisposedGeometricTolerance"))
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
// ./opencascade/RWStepDimTol_RWGeometricToleranceWithModifiers.hxx
// ./opencascade/RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx
// ./opencascade/RWStepDimTol_RWRunoutZoneDefinition.hxx
// ./opencascade/RWStepDimTol_RWUnequallyDisposedGeometricTolerance.hxx
// ./opencascade/RWStepDimTol_RWNonUniformZoneDefinition.hxx
// ./opencascade/RWStepDimTol_RWCylindricityTolerance.hxx
// ./opencascade/RWStepDimTol_RWGeoTolAndGeoTolWthMod.hxx
// ./opencascade/RWStepDimTol_RWDatumSystem.hxx
// ./opencascade/RWStepDimTol_RWSurfaceProfileTolerance.hxx
// ./opencascade/RWStepDimTol_RWGeneralDatumReference.hxx
// ./opencascade/RWStepDimTol_RWLineProfileTolerance.hxx
// ./opencascade/RWStepDimTol_RWDatumReferenceElement.hxx
// ./opencascade/RWStepDimTol_RWDatumReferenceModifierWithValue.hxx
// ./opencascade/RWStepDimTol_RWPlacedDatumTargetFeature.hxx
// ./opencascade/RWStepDimTol_RWDatumReference.hxx
// ./opencascade/RWStepDimTol_RWDatumTarget.hxx
// ./opencascade/RWStepDimTol_RWCommonDatum.hxx
// ./opencascade/RWStepDimTol_RWParallelismTolerance.hxx
// ./opencascade/RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx
// ./opencascade/RWStepDimTol_RWRoundnessTolerance.hxx
// ./opencascade/RWStepDimTol_RWGeoTolAndGeoTolWthDatRef.hxx
// ./opencascade/RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx
// ./opencascade/RWStepDimTol_RWToleranceZoneDefinition.hxx
// ./opencascade/RWStepDimTol_RWDatum.hxx
// ./opencascade/RWStepDimTol_RWPositionTolerance.hxx
// ./opencascade/RWStepDimTol_RWDatumFeature.hxx
// ./opencascade/RWStepDimTol_RWGeometricToleranceWithDefinedUnit.hxx
// ./opencascade/RWStepDimTol_RWToleranceZone.hxx
// ./opencascade/RWStepDimTol_RWGeometricToleranceWithMaximumTolerance.hxx
// ./opencascade/RWStepDimTol_RWGeometricToleranceWithDatumReference.hxx
// ./opencascade/RWStepDimTol_RWTotalRunoutTolerance.hxx
// ./opencascade/RWStepDimTol_RWDatumReferenceCompartment.hxx
// ./opencascade/RWStepDimTol_RWFlatnessTolerance.hxx
// ./opencascade/RWStepDimTol_RWAngularityTolerance.hxx
// ./opencascade/RWStepDimTol_RWToleranceZoneForm.hxx
// ./opencascade/RWStepDimTol_RWPerpendicularityTolerance.hxx
// ./opencascade/RWStepDimTol_RWProjectedZoneDefinition.hxx
// ./opencascade/RWStepDimTol_RWModifiedGeometricTolerance.hxx
// ./opencascade/RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol.hxx
// ./opencascade/RWStepDimTol_RWConcentricityTolerance.hxx
// ./opencascade/RWStepDimTol_RWRunoutZoneOrientation.hxx
// ./opencascade/RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx
// ./opencascade/RWStepDimTol_RWGeometricToleranceRelationship.hxx
// ./opencascade/RWStepDimTol_RWSymmetryTolerance.hxx
// ./opencascade/RWStepDimTol_RWCircularRunoutTolerance.hxx
// ./opencascade/RWStepDimTol_RWCoaxialityTolerance.hxx
// ./opencascade/RWStepDimTol_RWStraightnessTolerance.hxx
// ./opencascade/RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit.hxx
// ./opencascade/RWStepDimTol_RWGeometricTolerance.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
