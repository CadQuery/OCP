
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
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
#include <StepDimTol_GeoTolAndGeoTolWthMod.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_PerpendicularityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_RunoutZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumReferenceElement.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ToleranceZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_StraightnessTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_SurfaceProfileTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithMaximumTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CoaxialityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CircularRunoutTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_TotalRunoutTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ProjectedZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMaxTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_FlatnessTolerance.hxx>
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
#include <StepDimTol_PositionTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRef.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumFeature.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_CylindricityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_SymmetryTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedAreaUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_RoundnessTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumTarget.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx>
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
#include <StepDimTol_ParallelismTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_NonUniformZoneDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_DatumReferenceCompartment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ToleranceZone.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ConcentricityTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeneralDatumReference.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_RunoutZoneOrientation.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_ModifiedGeometricTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_LineProfileTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceRelationship.hxx>
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWAngularityTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_AngularityTolerance> & ) const) static_cast<void (RWStepDimTol_RWAngularityTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_AngularityTolerance> & ) const>(&RWStepDimTol_RWAngularityTolerance::ReadStep),
             R"#(Reads AngularityTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWAngularityTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_AngularityTolerance> & ) const) static_cast<void (RWStepDimTol_RWAngularityTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_AngularityTolerance> & ) const>(&RWStepDimTol_RWAngularityTolerance::WriteStep),
             R"#(Writes AngularityTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWAngularityTolerance::*)( const opencascade::handle<StepDimTol_AngularityTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWAngularityTolerance::*)( const opencascade::handle<StepDimTol_AngularityTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWAngularityTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWCircularRunoutTolerance , shared_ptr<RWStepDimTol_RWCircularRunoutTolerance> >>(m.attr("RWStepDimTol_RWCircularRunoutTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWCircularRunoutTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_CircularRunoutTolerance> & ) const) static_cast<void (RWStepDimTol_RWCircularRunoutTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_CircularRunoutTolerance> & ) const>(&RWStepDimTol_RWCircularRunoutTolerance::ReadStep),
             R"#(Reads CircularRunoutTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWCircularRunoutTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_CircularRunoutTolerance> & ) const) static_cast<void (RWStepDimTol_RWCircularRunoutTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_CircularRunoutTolerance> & ) const>(&RWStepDimTol_RWCircularRunoutTolerance::WriteStep),
             R"#(Writes CircularRunoutTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWCircularRunoutTolerance::*)( const opencascade::handle<StepDimTol_CircularRunoutTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWCircularRunoutTolerance::*)( const opencascade::handle<StepDimTol_CircularRunoutTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWCircularRunoutTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWCoaxialityTolerance , shared_ptr<RWStepDimTol_RWCoaxialityTolerance> >>(m.attr("RWStepDimTol_RWCoaxialityTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWCoaxialityTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_CoaxialityTolerance> & ) const) static_cast<void (RWStepDimTol_RWCoaxialityTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_CoaxialityTolerance> & ) const>(&RWStepDimTol_RWCoaxialityTolerance::ReadStep),
             R"#(Reads CoaxialityTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWCoaxialityTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_CoaxialityTolerance> & ) const) static_cast<void (RWStepDimTol_RWCoaxialityTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_CoaxialityTolerance> & ) const>(&RWStepDimTol_RWCoaxialityTolerance::WriteStep),
             R"#(Writes CoaxialityTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWCoaxialityTolerance::*)( const opencascade::handle<StepDimTol_CoaxialityTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWCoaxialityTolerance::*)( const opencascade::handle<StepDimTol_CoaxialityTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWCoaxialityTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWCommonDatum , shared_ptr<RWStepDimTol_RWCommonDatum> >>(m.attr("RWStepDimTol_RWCommonDatum"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWCommonDatum::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_CommonDatum> & ) const) static_cast<void (RWStepDimTol_RWCommonDatum::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_CommonDatum> & ) const>(&RWStepDimTol_RWCommonDatum::ReadStep),
             R"#(Reads CommonDatum)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWCommonDatum::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_CommonDatum> & ) const) static_cast<void (RWStepDimTol_RWCommonDatum::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_CommonDatum> & ) const>(&RWStepDimTol_RWCommonDatum::WriteStep),
             R"#(Writes CommonDatum)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWCommonDatum::*)( const opencascade::handle<StepDimTol_CommonDatum> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWCommonDatum::*)( const opencascade::handle<StepDimTol_CommonDatum> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWCommonDatum::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWConcentricityTolerance , shared_ptr<RWStepDimTol_RWConcentricityTolerance> >>(m.attr("RWStepDimTol_RWConcentricityTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWConcentricityTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ConcentricityTolerance> & ) const) static_cast<void (RWStepDimTol_RWConcentricityTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ConcentricityTolerance> & ) const>(&RWStepDimTol_RWConcentricityTolerance::ReadStep),
             R"#(Reads ConcentricityTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWConcentricityTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ConcentricityTolerance> & ) const) static_cast<void (RWStepDimTol_RWConcentricityTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ConcentricityTolerance> & ) const>(&RWStepDimTol_RWConcentricityTolerance::WriteStep),
             R"#(Writes ConcentricityTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWConcentricityTolerance::*)( const opencascade::handle<StepDimTol_ConcentricityTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWConcentricityTolerance::*)( const opencascade::handle<StepDimTol_ConcentricityTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWConcentricityTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWCylindricityTolerance , shared_ptr<RWStepDimTol_RWCylindricityTolerance> >>(m.attr("RWStepDimTol_RWCylindricityTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWCylindricityTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_CylindricityTolerance> & ) const) static_cast<void (RWStepDimTol_RWCylindricityTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_CylindricityTolerance> & ) const>(&RWStepDimTol_RWCylindricityTolerance::ReadStep),
             R"#(Reads CylindricityTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWCylindricityTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_CylindricityTolerance> & ) const) static_cast<void (RWStepDimTol_RWCylindricityTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_CylindricityTolerance> & ) const>(&RWStepDimTol_RWCylindricityTolerance::WriteStep),
             R"#(Writes CylindricityTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWCylindricityTolerance::*)( const opencascade::handle<StepDimTol_CylindricityTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWCylindricityTolerance::*)( const opencascade::handle<StepDimTol_CylindricityTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWCylindricityTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatum , shared_ptr<RWStepDimTol_RWDatum> >>(m.attr("RWStepDimTol_RWDatum"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWDatum::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_Datum> & ) const) static_cast<void (RWStepDimTol_RWDatum::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_Datum> & ) const>(&RWStepDimTol_RWDatum::ReadStep),
             R"#(Reads Datum)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWDatum::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_Datum> & ) const) static_cast<void (RWStepDimTol_RWDatum::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_Datum> & ) const>(&RWStepDimTol_RWDatum::WriteStep),
             R"#(Writes Datum)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWDatum::*)( const opencascade::handle<StepDimTol_Datum> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWDatum::*)( const opencascade::handle<StepDimTol_Datum> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWDatum::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumFeature , shared_ptr<RWStepDimTol_RWDatumFeature> >>(m.attr("RWStepDimTol_RWDatumFeature"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWDatumFeature::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumFeature> & ) const) static_cast<void (RWStepDimTol_RWDatumFeature::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumFeature> & ) const>(&RWStepDimTol_RWDatumFeature::ReadStep),
             R"#(Reads DatumFeature)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWDatumFeature::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumFeature> & ) const) static_cast<void (RWStepDimTol_RWDatumFeature::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumFeature> & ) const>(&RWStepDimTol_RWDatumFeature::WriteStep),
             R"#(Writes DatumFeature)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWDatumFeature::*)( const opencascade::handle<StepDimTol_DatumFeature> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWDatumFeature::*)( const opencascade::handle<StepDimTol_DatumFeature> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWDatumFeature::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumReference , shared_ptr<RWStepDimTol_RWDatumReference> >>(m.attr("RWStepDimTol_RWDatumReference"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWDatumReference::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumReference> & ) const) static_cast<void (RWStepDimTol_RWDatumReference::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumReference> & ) const>(&RWStepDimTol_RWDatumReference::ReadStep),
             R"#(Reads DatumReference)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWDatumReference::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumReference> & ) const) static_cast<void (RWStepDimTol_RWDatumReference::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumReference> & ) const>(&RWStepDimTol_RWDatumReference::WriteStep),
             R"#(Writes DatumReference)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWDatumReference::*)( const opencascade::handle<StepDimTol_DatumReference> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWDatumReference::*)( const opencascade::handle<StepDimTol_DatumReference> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWDatumReference::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumReferenceCompartment , shared_ptr<RWStepDimTol_RWDatumReferenceCompartment> >>(m.attr("RWStepDimTol_RWDatumReferenceCompartment"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWDatumReferenceCompartment::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumReferenceCompartment> & ) const) static_cast<void (RWStepDimTol_RWDatumReferenceCompartment::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumReferenceCompartment> & ) const>(&RWStepDimTol_RWDatumReferenceCompartment::ReadStep),
             R"#(Reads DatumReferenceElement)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWDatumReferenceCompartment::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumReferenceCompartment> & ) const) static_cast<void (RWStepDimTol_RWDatumReferenceCompartment::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumReferenceCompartment> & ) const>(&RWStepDimTol_RWDatumReferenceCompartment::WriteStep),
             R"#(Writes DatumReferenceElement)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWDatumReferenceCompartment::*)( const opencascade::handle<StepDimTol_DatumReferenceCompartment> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWDatumReferenceCompartment::*)( const opencascade::handle<StepDimTol_DatumReferenceCompartment> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWDatumReferenceCompartment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumReferenceElement , shared_ptr<RWStepDimTol_RWDatumReferenceElement> >>(m.attr("RWStepDimTol_RWDatumReferenceElement"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWDatumReferenceElement::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumReferenceElement> & ) const) static_cast<void (RWStepDimTol_RWDatumReferenceElement::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumReferenceElement> & ) const>(&RWStepDimTol_RWDatumReferenceElement::ReadStep),
             R"#(Reads DatumReferenceElement)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWDatumReferenceElement::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumReferenceElement> & ) const) static_cast<void (RWStepDimTol_RWDatumReferenceElement::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumReferenceElement> & ) const>(&RWStepDimTol_RWDatumReferenceElement::WriteStep),
             R"#(Writes DatumReferenceElement)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWDatumReferenceElement::*)( const opencascade::handle<StepDimTol_DatumReferenceElement> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWDatumReferenceElement::*)( const opencascade::handle<StepDimTol_DatumReferenceElement> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWDatumReferenceElement::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumReferenceModifierWithValue , shared_ptr<RWStepDimTol_RWDatumReferenceModifierWithValue> >>(m.attr("RWStepDimTol_RWDatumReferenceModifierWithValue"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWDatumReferenceModifierWithValue::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumReferenceModifierWithValue> & ) const) static_cast<void (RWStepDimTol_RWDatumReferenceModifierWithValue::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumReferenceModifierWithValue> & ) const>(&RWStepDimTol_RWDatumReferenceModifierWithValue::ReadStep),
             R"#(Reads DatumReferenceModifierWithValue)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWDatumReferenceModifierWithValue::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumReferenceModifierWithValue> & ) const) static_cast<void (RWStepDimTol_RWDatumReferenceModifierWithValue::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumReferenceModifierWithValue> & ) const>(&RWStepDimTol_RWDatumReferenceModifierWithValue::WriteStep),
             R"#(Writes DatumReferenceModifierWithValue)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumSystem , shared_ptr<RWStepDimTol_RWDatumSystem> >>(m.attr("RWStepDimTol_RWDatumSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWDatumSystem::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumSystem> & ) const) static_cast<void (RWStepDimTol_RWDatumSystem::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumSystem> & ) const>(&RWStepDimTol_RWDatumSystem::ReadStep),
             R"#(Reads DatumSystem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWDatumSystem::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumSystem> & ) const) static_cast<void (RWStepDimTol_RWDatumSystem::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumSystem> & ) const>(&RWStepDimTol_RWDatumSystem::WriteStep),
             R"#(Writes DatumSystem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWDatumSystem::*)( const opencascade::handle<StepDimTol_DatumSystem> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWDatumSystem::*)( const opencascade::handle<StepDimTol_DatumSystem> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWDatumSystem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWDatumTarget , shared_ptr<RWStepDimTol_RWDatumTarget> >>(m.attr("RWStepDimTol_RWDatumTarget"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWDatumTarget::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumTarget> & ) const) static_cast<void (RWStepDimTol_RWDatumTarget::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_DatumTarget> & ) const>(&RWStepDimTol_RWDatumTarget::ReadStep),
             R"#(Reads DatumTarget)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWDatumTarget::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumTarget> & ) const) static_cast<void (RWStepDimTol_RWDatumTarget::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_DatumTarget> & ) const>(&RWStepDimTol_RWDatumTarget::WriteStep),
             R"#(Writes DatumTarget)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWDatumTarget::*)( const opencascade::handle<StepDimTol_DatumTarget> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWDatumTarget::*)( const opencascade::handle<StepDimTol_DatumTarget> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWDatumTarget::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWFlatnessTolerance , shared_ptr<RWStepDimTol_RWFlatnessTolerance> >>(m.attr("RWStepDimTol_RWFlatnessTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWFlatnessTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_FlatnessTolerance> & ) const) static_cast<void (RWStepDimTol_RWFlatnessTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_FlatnessTolerance> & ) const>(&RWStepDimTol_RWFlatnessTolerance::ReadStep),
             R"#(Reads FlatnessTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWFlatnessTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_FlatnessTolerance> & ) const) static_cast<void (RWStepDimTol_RWFlatnessTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_FlatnessTolerance> & ) const>(&RWStepDimTol_RWFlatnessTolerance::WriteStep),
             R"#(Writes FlatnessTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWFlatnessTolerance::*)( const opencascade::handle<StepDimTol_FlatnessTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWFlatnessTolerance::*)( const opencascade::handle<StepDimTol_FlatnessTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWFlatnessTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeneralDatumReference , shared_ptr<RWStepDimTol_RWGeneralDatumReference> >>(m.attr("RWStepDimTol_RWGeneralDatumReference"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeneralDatumReference::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeneralDatumReference> & ) const) static_cast<void (RWStepDimTol_RWGeneralDatumReference::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeneralDatumReference> & ) const>(&RWStepDimTol_RWGeneralDatumReference::ReadStep),
             R"#(Reads GeneralDatumReference)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeneralDatumReference::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeneralDatumReference> & ) const) static_cast<void (RWStepDimTol_RWGeneralDatumReference::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeneralDatumReference> & ) const>(&RWStepDimTol_RWGeneralDatumReference::WriteStep),
             R"#(Writes GeneralDatumReference)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeneralDatumReference::*)( const opencascade::handle<StepDimTol_GeneralDatumReference> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeneralDatumReference::*)( const opencascade::handle<StepDimTol_GeneralDatumReference> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeneralDatumReference::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRef , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRef> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthDatRef"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRef::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRef> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRef::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRef> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRef::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRef::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRef> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRef::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRef> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRef::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRef::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRef> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRef::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRef> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRef::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMaxTol> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMaxTol> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMaxTol> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMaxTol> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMaxTol> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMaxTol> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeoTolAndGeoTolWthMod , shared_ptr<RWStepDimTol_RWGeoTolAndGeoTolWthMod> >>(m.attr("RWStepDimTol_RWGeoTolAndGeoTolWthMod"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthMod::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMod> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthMod::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMod> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthMod::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthMod::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMod> & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthMod::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMod> & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthMod::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeoTolAndGeoTolWthMod::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMod> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeoTolAndGeoTolWthMod::*)( const opencascade::handle<StepDimTol_GeoTolAndGeoTolWthMod> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeoTolAndGeoTolWthMod::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricTolerance , shared_ptr<RWStepDimTol_RWGeometricTolerance> >>(m.attr("RWStepDimTol_RWGeometricTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeometricTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricTolerance> & ) const) static_cast<void (RWStepDimTol_RWGeometricTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricTolerance> & ) const>(&RWStepDimTol_RWGeometricTolerance::ReadStep),
             R"#(Reads GeometricTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeometricTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricTolerance> & ) const) static_cast<void (RWStepDimTol_RWGeometricTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricTolerance> & ) const>(&RWStepDimTol_RWGeometricTolerance::WriteStep),
             R"#(Writes GeometricTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeometricTolerance::*)( const opencascade::handle<StepDimTol_GeometricTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeometricTolerance::*)( const opencascade::handle<StepDimTol_GeometricTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeometricTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceRelationship , shared_ptr<RWStepDimTol_RWGeometricToleranceRelationship> >>(m.attr("RWStepDimTol_RWGeometricToleranceRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeometricToleranceRelationship::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceRelationship> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceRelationship::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceRelationship> & ) const>(&RWStepDimTol_RWGeometricToleranceRelationship::ReadStep),
             R"#(Reads GeometricToleranceRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeometricToleranceRelationship::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceRelationship> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceRelationship::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceRelationship> & ) const>(&RWStepDimTol_RWGeometricToleranceRelationship::WriteStep),
             R"#(Writes GeometricToleranceRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeometricToleranceRelationship::*)( const opencascade::handle<StepDimTol_GeometricToleranceRelationship> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceRelationship::*)( const opencascade::handle<StepDimTol_GeometricToleranceRelationship> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeometricToleranceRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceWithDatumReference , shared_ptr<RWStepDimTol_RWGeometricToleranceWithDatumReference> >>(m.attr("RWStepDimTol_RWGeometricToleranceWithDatumReference"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeometricToleranceWithDatumReference::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithDatumReference::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> & ) const>(&RWStepDimTol_RWGeometricToleranceWithDatumReference::ReadStep),
             R"#(Reads GeometricToleranceWithDatumReference)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeometricToleranceWithDatumReference::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithDatumReference::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> & ) const>(&RWStepDimTol_RWGeometricToleranceWithDatumReference::WriteStep),
             R"#(Writes GeometricToleranceWithDatumReference)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeometricToleranceWithDatumReference::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithDatumReference::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithDatumReference> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeometricToleranceWithDatumReference::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit , shared_ptr<RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit> >>(m.attr("RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedAreaUnit> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedAreaUnit> & ) const>(&RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit::ReadStep),
             R"#(Reads GeometricToleranceWithDefinedAreaUnit)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedAreaUnit> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedAreaUnit> & ) const>(&RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit::WriteStep),
             R"#(Writes GeometricToleranceWithDefinedAreaUnit)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedAreaUnit> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedAreaUnit> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceWithDefinedUnit , shared_ptr<RWStepDimTol_RWGeometricToleranceWithDefinedUnit> >>(m.attr("RWStepDimTol_RWGeometricToleranceWithDefinedUnit"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeometricToleranceWithDefinedUnit::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedUnit> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithDefinedUnit::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedUnit> & ) const>(&RWStepDimTol_RWGeometricToleranceWithDefinedUnit::ReadStep),
             R"#(Reads GeometricToleranceWithDefinedUnit)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeometricToleranceWithDefinedUnit::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedUnit> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithDefinedUnit::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedUnit> & ) const>(&RWStepDimTol_RWGeometricToleranceWithDefinedUnit::WriteStep),
             R"#(Writes GeometricToleranceWithDefinedUnit)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeometricToleranceWithDefinedUnit::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedUnit> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithDefinedUnit::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithDefinedUnit> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeometricToleranceWithDefinedUnit::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceWithMaximumTolerance , shared_ptr<RWStepDimTol_RWGeometricToleranceWithMaximumTolerance> >>(m.attr("RWStepDimTol_RWGeometricToleranceWithMaximumTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeometricToleranceWithMaximumTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceWithMaximumTolerance> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithMaximumTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceWithMaximumTolerance> & ) const>(&RWStepDimTol_RWGeometricToleranceWithMaximumTolerance::ReadStep),
             R"#(Reads GeometricToleranceWithMaximumTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeometricToleranceWithMaximumTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceWithMaximumTolerance> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithMaximumTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceWithMaximumTolerance> & ) const>(&RWStepDimTol_RWGeometricToleranceWithMaximumTolerance::WriteStep),
             R"#(Writes GeometricToleranceWithMaximumTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeometricToleranceWithMaximumTolerance::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithMaximumTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithMaximumTolerance::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithMaximumTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeometricToleranceWithMaximumTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWGeometricToleranceWithModifiers , shared_ptr<RWStepDimTol_RWGeometricToleranceWithModifiers> >>(m.attr("RWStepDimTol_RWGeometricToleranceWithModifiers"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWGeometricToleranceWithModifiers::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithModifiers::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> & ) const>(&RWStepDimTol_RWGeometricToleranceWithModifiers::ReadStep),
             R"#(Reads GeometricToleranceWithModifiers)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWGeometricToleranceWithModifiers::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithModifiers::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> & ) const>(&RWStepDimTol_RWGeometricToleranceWithModifiers::WriteStep),
             R"#(Writes GeometricToleranceWithModifiers)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWGeometricToleranceWithModifiers::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWGeometricToleranceWithModifiers::*)( const opencascade::handle<StepDimTol_GeometricToleranceWithModifiers> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWGeometricToleranceWithModifiers::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWLineProfileTolerance , shared_ptr<RWStepDimTol_RWLineProfileTolerance> >>(m.attr("RWStepDimTol_RWLineProfileTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWLineProfileTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_LineProfileTolerance> & ) const) static_cast<void (RWStepDimTol_RWLineProfileTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_LineProfileTolerance> & ) const>(&RWStepDimTol_RWLineProfileTolerance::ReadStep),
             R"#(Reads LineProfileTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWLineProfileTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_LineProfileTolerance> & ) const) static_cast<void (RWStepDimTol_RWLineProfileTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_LineProfileTolerance> & ) const>(&RWStepDimTol_RWLineProfileTolerance::WriteStep),
             R"#(Writes LineProfileTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWLineProfileTolerance::*)( const opencascade::handle<StepDimTol_LineProfileTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWLineProfileTolerance::*)( const opencascade::handle<StepDimTol_LineProfileTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWLineProfileTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWModifiedGeometricTolerance , shared_ptr<RWStepDimTol_RWModifiedGeometricTolerance> >>(m.attr("RWStepDimTol_RWModifiedGeometricTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWModifiedGeometricTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ModifiedGeometricTolerance> & ) const) static_cast<void (RWStepDimTol_RWModifiedGeometricTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ModifiedGeometricTolerance> & ) const>(&RWStepDimTol_RWModifiedGeometricTolerance::ReadStep),
             R"#(Reads ModifiedGeometricTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWModifiedGeometricTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ModifiedGeometricTolerance> & ) const) static_cast<void (RWStepDimTol_RWModifiedGeometricTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ModifiedGeometricTolerance> & ) const>(&RWStepDimTol_RWModifiedGeometricTolerance::WriteStep),
             R"#(Writes ModifiedGeometricTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWModifiedGeometricTolerance::*)( const opencascade::handle<StepDimTol_ModifiedGeometricTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWModifiedGeometricTolerance::*)( const opencascade::handle<StepDimTol_ModifiedGeometricTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWModifiedGeometricTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWNonUniformZoneDefinition , shared_ptr<RWStepDimTol_RWNonUniformZoneDefinition> >>(m.attr("RWStepDimTol_RWNonUniformZoneDefinition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWNonUniformZoneDefinition::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_NonUniformZoneDefinition> & ) const) static_cast<void (RWStepDimTol_RWNonUniformZoneDefinition::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_NonUniformZoneDefinition> & ) const>(&RWStepDimTol_RWNonUniformZoneDefinition::ReadStep),
             R"#(Reads NonUniformZoneDefinition)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWNonUniformZoneDefinition::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_NonUniformZoneDefinition> & ) const) static_cast<void (RWStepDimTol_RWNonUniformZoneDefinition::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_NonUniformZoneDefinition> & ) const>(&RWStepDimTol_RWNonUniformZoneDefinition::WriteStep),
             R"#(Writes NonUniformZoneDefinition)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWNonUniformZoneDefinition::*)( const opencascade::handle<StepDimTol_NonUniformZoneDefinition> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWNonUniformZoneDefinition::*)( const opencascade::handle<StepDimTol_NonUniformZoneDefinition> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWNonUniformZoneDefinition::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWParallelismTolerance , shared_ptr<RWStepDimTol_RWParallelismTolerance> >>(m.attr("RWStepDimTol_RWParallelismTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWParallelismTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ParallelismTolerance> & ) const) static_cast<void (RWStepDimTol_RWParallelismTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ParallelismTolerance> & ) const>(&RWStepDimTol_RWParallelismTolerance::ReadStep),
             R"#(Reads ParallelismTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWParallelismTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ParallelismTolerance> & ) const) static_cast<void (RWStepDimTol_RWParallelismTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ParallelismTolerance> & ) const>(&RWStepDimTol_RWParallelismTolerance::WriteStep),
             R"#(Writes ParallelismTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWParallelismTolerance::*)( const opencascade::handle<StepDimTol_ParallelismTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWParallelismTolerance::*)( const opencascade::handle<StepDimTol_ParallelismTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWParallelismTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWPerpendicularityTolerance , shared_ptr<RWStepDimTol_RWPerpendicularityTolerance> >>(m.attr("RWStepDimTol_RWPerpendicularityTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWPerpendicularityTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_PerpendicularityTolerance> & ) const) static_cast<void (RWStepDimTol_RWPerpendicularityTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_PerpendicularityTolerance> & ) const>(&RWStepDimTol_RWPerpendicularityTolerance::ReadStep),
             R"#(Reads PerpendicularityTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWPerpendicularityTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_PerpendicularityTolerance> & ) const) static_cast<void (RWStepDimTol_RWPerpendicularityTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_PerpendicularityTolerance> & ) const>(&RWStepDimTol_RWPerpendicularityTolerance::WriteStep),
             R"#(Writes PerpendicularityTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWPerpendicularityTolerance::*)( const opencascade::handle<StepDimTol_PerpendicularityTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWPerpendicularityTolerance::*)( const opencascade::handle<StepDimTol_PerpendicularityTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWPerpendicularityTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWPlacedDatumTargetFeature , shared_ptr<RWStepDimTol_RWPlacedDatumTargetFeature> >>(m.attr("RWStepDimTol_RWPlacedDatumTargetFeature"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWPlacedDatumTargetFeature::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_PlacedDatumTargetFeature> & ) const) static_cast<void (RWStepDimTol_RWPlacedDatumTargetFeature::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_PlacedDatumTargetFeature> & ) const>(&RWStepDimTol_RWPlacedDatumTargetFeature::ReadStep),
             R"#(Reads PlacedDatumTargetFeature)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWPlacedDatumTargetFeature::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_PlacedDatumTargetFeature> & ) const) static_cast<void (RWStepDimTol_RWPlacedDatumTargetFeature::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_PlacedDatumTargetFeature> & ) const>(&RWStepDimTol_RWPlacedDatumTargetFeature::WriteStep),
             R"#(Writes PlacedDatumTargetFeature)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWPlacedDatumTargetFeature::*)( const opencascade::handle<StepDimTol_PlacedDatumTargetFeature> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWPlacedDatumTargetFeature::*)( const opencascade::handle<StepDimTol_PlacedDatumTargetFeature> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWPlacedDatumTargetFeature::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWPositionTolerance , shared_ptr<RWStepDimTol_RWPositionTolerance> >>(m.attr("RWStepDimTol_RWPositionTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWPositionTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_PositionTolerance> & ) const) static_cast<void (RWStepDimTol_RWPositionTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_PositionTolerance> & ) const>(&RWStepDimTol_RWPositionTolerance::ReadStep),
             R"#(Reads PositionTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWPositionTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_PositionTolerance> & ) const) static_cast<void (RWStepDimTol_RWPositionTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_PositionTolerance> & ) const>(&RWStepDimTol_RWPositionTolerance::WriteStep),
             R"#(Writes PositionTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWPositionTolerance::*)( const opencascade::handle<StepDimTol_PositionTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWPositionTolerance::*)( const opencascade::handle<StepDimTol_PositionTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWPositionTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWProjectedZoneDefinition , shared_ptr<RWStepDimTol_RWProjectedZoneDefinition> >>(m.attr("RWStepDimTol_RWProjectedZoneDefinition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWProjectedZoneDefinition::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ProjectedZoneDefinition> & ) const) static_cast<void (RWStepDimTol_RWProjectedZoneDefinition::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ProjectedZoneDefinition> & ) const>(&RWStepDimTol_RWProjectedZoneDefinition::ReadStep),
             R"#(Reads ProjectedZoneDefinition)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWProjectedZoneDefinition::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ProjectedZoneDefinition> & ) const) static_cast<void (RWStepDimTol_RWProjectedZoneDefinition::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ProjectedZoneDefinition> & ) const>(&RWStepDimTol_RWProjectedZoneDefinition::WriteStep),
             R"#(Writes ProjectedZoneDefinition)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWProjectedZoneDefinition::*)( const opencascade::handle<StepDimTol_ProjectedZoneDefinition> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWProjectedZoneDefinition::*)( const opencascade::handle<StepDimTol_ProjectedZoneDefinition> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWProjectedZoneDefinition::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWRoundnessTolerance , shared_ptr<RWStepDimTol_RWRoundnessTolerance> >>(m.attr("RWStepDimTol_RWRoundnessTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWRoundnessTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_RoundnessTolerance> & ) const) static_cast<void (RWStepDimTol_RWRoundnessTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_RoundnessTolerance> & ) const>(&RWStepDimTol_RWRoundnessTolerance::ReadStep),
             R"#(Reads RoundnessTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWRoundnessTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_RoundnessTolerance> & ) const) static_cast<void (RWStepDimTol_RWRoundnessTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_RoundnessTolerance> & ) const>(&RWStepDimTol_RWRoundnessTolerance::WriteStep),
             R"#(Writes RoundnessTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWRoundnessTolerance::*)( const opencascade::handle<StepDimTol_RoundnessTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWRoundnessTolerance::*)( const opencascade::handle<StepDimTol_RoundnessTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWRoundnessTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWRunoutZoneDefinition , shared_ptr<RWStepDimTol_RWRunoutZoneDefinition> >>(m.attr("RWStepDimTol_RWRunoutZoneDefinition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWRunoutZoneDefinition::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_RunoutZoneDefinition> & ) const) static_cast<void (RWStepDimTol_RWRunoutZoneDefinition::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_RunoutZoneDefinition> & ) const>(&RWStepDimTol_RWRunoutZoneDefinition::ReadStep),
             R"#(Reads RunoutZoneDefinition)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWRunoutZoneDefinition::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_RunoutZoneDefinition> & ) const) static_cast<void (RWStepDimTol_RWRunoutZoneDefinition::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_RunoutZoneDefinition> & ) const>(&RWStepDimTol_RWRunoutZoneDefinition::WriteStep),
             R"#(Writes RunoutZoneDefinition)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWRunoutZoneDefinition::*)( const opencascade::handle<StepDimTol_RunoutZoneDefinition> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWRunoutZoneDefinition::*)( const opencascade::handle<StepDimTol_RunoutZoneDefinition> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWRunoutZoneDefinition::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWRunoutZoneOrientation , shared_ptr<RWStepDimTol_RWRunoutZoneOrientation> >>(m.attr("RWStepDimTol_RWRunoutZoneOrientation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWRunoutZoneOrientation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_RunoutZoneOrientation> & ) const) static_cast<void (RWStepDimTol_RWRunoutZoneOrientation::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_RunoutZoneOrientation> & ) const>(&RWStepDimTol_RWRunoutZoneOrientation::ReadStep),
             R"#(Reads RunoutZoneOrientation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWRunoutZoneOrientation::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_RunoutZoneOrientation> & ) const) static_cast<void (RWStepDimTol_RWRunoutZoneOrientation::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_RunoutZoneOrientation> & ) const>(&RWStepDimTol_RWRunoutZoneOrientation::WriteStep),
             R"#(Writes RunoutZoneOrientation)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWStraightnessTolerance , shared_ptr<RWStepDimTol_RWStraightnessTolerance> >>(m.attr("RWStepDimTol_RWStraightnessTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWStraightnessTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_StraightnessTolerance> & ) const) static_cast<void (RWStepDimTol_RWStraightnessTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_StraightnessTolerance> & ) const>(&RWStepDimTol_RWStraightnessTolerance::ReadStep),
             R"#(Reads StraightnessTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWStraightnessTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_StraightnessTolerance> & ) const) static_cast<void (RWStepDimTol_RWStraightnessTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_StraightnessTolerance> & ) const>(&RWStepDimTol_RWStraightnessTolerance::WriteStep),
             R"#(Writes StraightnessTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWStraightnessTolerance::*)( const opencascade::handle<StepDimTol_StraightnessTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWStraightnessTolerance::*)( const opencascade::handle<StepDimTol_StraightnessTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWStraightnessTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWSurfaceProfileTolerance , shared_ptr<RWStepDimTol_RWSurfaceProfileTolerance> >>(m.attr("RWStepDimTol_RWSurfaceProfileTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWSurfaceProfileTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_SurfaceProfileTolerance> & ) const) static_cast<void (RWStepDimTol_RWSurfaceProfileTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_SurfaceProfileTolerance> & ) const>(&RWStepDimTol_RWSurfaceProfileTolerance::ReadStep),
             R"#(Reads SurfaceProfileTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWSurfaceProfileTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_SurfaceProfileTolerance> & ) const) static_cast<void (RWStepDimTol_RWSurfaceProfileTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_SurfaceProfileTolerance> & ) const>(&RWStepDimTol_RWSurfaceProfileTolerance::WriteStep),
             R"#(Writes SurfaceProfileTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWSurfaceProfileTolerance::*)( const opencascade::handle<StepDimTol_SurfaceProfileTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWSurfaceProfileTolerance::*)( const opencascade::handle<StepDimTol_SurfaceProfileTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWSurfaceProfileTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWSymmetryTolerance , shared_ptr<RWStepDimTol_RWSymmetryTolerance> >>(m.attr("RWStepDimTol_RWSymmetryTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWSymmetryTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_SymmetryTolerance> & ) const) static_cast<void (RWStepDimTol_RWSymmetryTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_SymmetryTolerance> & ) const>(&RWStepDimTol_RWSymmetryTolerance::ReadStep),
             R"#(Reads SymmetryTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWSymmetryTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_SymmetryTolerance> & ) const) static_cast<void (RWStepDimTol_RWSymmetryTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_SymmetryTolerance> & ) const>(&RWStepDimTol_RWSymmetryTolerance::WriteStep),
             R"#(Writes SymmetryTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWSymmetryTolerance::*)( const opencascade::handle<StepDimTol_SymmetryTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWSymmetryTolerance::*)( const opencascade::handle<StepDimTol_SymmetryTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWSymmetryTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWToleranceZone , shared_ptr<RWStepDimTol_RWToleranceZone> >>(m.attr("RWStepDimTol_RWToleranceZone"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWToleranceZone::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ToleranceZone> & ) const) static_cast<void (RWStepDimTol_RWToleranceZone::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ToleranceZone> & ) const>(&RWStepDimTol_RWToleranceZone::ReadStep),
             R"#(Reads ToleranceZone)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWToleranceZone::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ToleranceZone> & ) const) static_cast<void (RWStepDimTol_RWToleranceZone::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ToleranceZone> & ) const>(&RWStepDimTol_RWToleranceZone::WriteStep),
             R"#(Writes ToleranceZone)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWToleranceZone::*)( const opencascade::handle<StepDimTol_ToleranceZone> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWToleranceZone::*)( const opencascade::handle<StepDimTol_ToleranceZone> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWToleranceZone::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWToleranceZoneDefinition , shared_ptr<RWStepDimTol_RWToleranceZoneDefinition> >>(m.attr("RWStepDimTol_RWToleranceZoneDefinition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWToleranceZoneDefinition::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ToleranceZoneDefinition> & ) const) static_cast<void (RWStepDimTol_RWToleranceZoneDefinition::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ToleranceZoneDefinition> & ) const>(&RWStepDimTol_RWToleranceZoneDefinition::ReadStep),
             R"#(Reads ToleranceZoneDefinition)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWToleranceZoneDefinition::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ToleranceZoneDefinition> & ) const) static_cast<void (RWStepDimTol_RWToleranceZoneDefinition::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ToleranceZoneDefinition> & ) const>(&RWStepDimTol_RWToleranceZoneDefinition::WriteStep),
             R"#(Writes ToleranceZoneDefinition)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWToleranceZoneDefinition::*)( const opencascade::handle<StepDimTol_ToleranceZoneDefinition> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWToleranceZoneDefinition::*)( const opencascade::handle<StepDimTol_ToleranceZoneDefinition> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWToleranceZoneDefinition::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWToleranceZoneForm , shared_ptr<RWStepDimTol_RWToleranceZoneForm> >>(m.attr("RWStepDimTol_RWToleranceZoneForm"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWToleranceZoneForm::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ToleranceZoneForm> & ) const) static_cast<void (RWStepDimTol_RWToleranceZoneForm::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_ToleranceZoneForm> & ) const>(&RWStepDimTol_RWToleranceZoneForm::ReadStep),
             R"#(Reads ToleranceZoneForm)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWToleranceZoneForm::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ToleranceZoneForm> & ) const) static_cast<void (RWStepDimTol_RWToleranceZoneForm::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_ToleranceZoneForm> & ) const>(&RWStepDimTol_RWToleranceZoneForm::WriteStep),
             R"#(Writes ToleranceZoneForm)#"  , py::arg("SW"),  py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWTotalRunoutTolerance , shared_ptr<RWStepDimTol_RWTotalRunoutTolerance> >>(m.attr("RWStepDimTol_RWTotalRunoutTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWTotalRunoutTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_TotalRunoutTolerance> & ) const) static_cast<void (RWStepDimTol_RWTotalRunoutTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_TotalRunoutTolerance> & ) const>(&RWStepDimTol_RWTotalRunoutTolerance::ReadStep),
             R"#(Reads TotalRunoutTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWTotalRunoutTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_TotalRunoutTolerance> & ) const) static_cast<void (RWStepDimTol_RWTotalRunoutTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_TotalRunoutTolerance> & ) const>(&RWStepDimTol_RWTotalRunoutTolerance::WriteStep),
             R"#(Writes TotalRunoutTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWTotalRunoutTolerance::*)( const opencascade::handle<StepDimTol_TotalRunoutTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWTotalRunoutTolerance::*)( const opencascade::handle<StepDimTol_TotalRunoutTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWTotalRunoutTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepDimTol_RWUnequallyDisposedGeometricTolerance , shared_ptr<RWStepDimTol_RWUnequallyDisposedGeometricTolerance> >>(m.attr("RWStepDimTol_RWUnequallyDisposedGeometricTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepDimTol_RWUnequallyDisposedGeometricTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> & ) const) static_cast<void (RWStepDimTol_RWUnequallyDisposedGeometricTolerance::*)( const opencascade::handle<StepData_StepReaderData> & , const Standard_Integer , opencascade::handle<Interface_Check> & , const opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> & ) const>(&RWStepDimTol_RWUnequallyDisposedGeometricTolerance::ReadStep),
             R"#(Reads UnequallyDisposedGeometricTolerance)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepDimTol_RWUnequallyDisposedGeometricTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> & ) const) static_cast<void (RWStepDimTol_RWUnequallyDisposedGeometricTolerance::*)( StepData_StepWriter & , const opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> & ) const>(&RWStepDimTol_RWUnequallyDisposedGeometricTolerance::WriteStep),
             R"#(Writes UnequallyDisposedGeometricTolerance)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepDimTol_RWUnequallyDisposedGeometricTolerance::*)( const opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> & , Interface_EntityIterator & ) const) static_cast<void (RWStepDimTol_RWUnequallyDisposedGeometricTolerance::*)( const opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance> & , Interface_EntityIterator & ) const>(&RWStepDimTol_RWUnequallyDisposedGeometricTolerance::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\RWStepDimTol_RWDatumReferenceModifierWithValue.hxx
// ./opencascade\RWStepDimTol_RWPlacedDatumTargetFeature.hxx
// ./opencascade\RWStepDimTol_RWGeoTolAndGeoTolWthMod.hxx
// ./opencascade\RWStepDimTol_RWPerpendicularityTolerance.hxx
// ./opencascade\RWStepDimTol_RWUnequallyDisposedGeometricTolerance.hxx
// ./opencascade\RWStepDimTol_RWRunoutZoneDefinition.hxx
// ./opencascade\RWStepDimTol_RWDatumReferenceElement.hxx
// ./opencascade\RWStepDimTol_RWDatum.hxx
// ./opencascade\RWStepDimTol_RWGeometricToleranceWithDatumReference.hxx
// ./opencascade\RWStepDimTol_RWToleranceZoneDefinition.hxx
// ./opencascade\RWStepDimTol_RWStraightnessTolerance.hxx
// ./opencascade\RWStepDimTol_RWSurfaceProfileTolerance.hxx
// ./opencascade\RWStepDimTol_RWDatumReference.hxx
// ./opencascade\RWStepDimTol_RWGeometricToleranceWithMaximumTolerance.hxx
// ./opencascade\RWStepDimTol_RWCoaxialityTolerance.hxx
// ./opencascade\RWStepDimTol_RWCircularRunoutTolerance.hxx
// ./opencascade\RWStepDimTol_RWTotalRunoutTolerance.hxx
// ./opencascade\RWStepDimTol_RWProjectedZoneDefinition.hxx
// ./opencascade\RWStepDimTol_RWGeoTolAndGeoTolWthMaxTol.hxx
// ./opencascade\RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx
// ./opencascade\RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx
// ./opencascade\RWStepDimTol_RWFlatnessTolerance.hxx
// ./opencascade\RWStepDimTol_RWDatumSystem.hxx
// ./opencascade\RWStepDimTol_RWCommonDatum.hxx
// ./opencascade\RWStepDimTol_RWPositionTolerance.hxx
// ./opencascade\RWStepDimTol_RWGeoTolAndGeoTolWthDatRef.hxx
// ./opencascade\RWStepDimTol_RWGeometricToleranceWithModifiers.hxx
// ./opencascade\RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx
// ./opencascade\RWStepDimTol_RWDatumFeature.hxx
// ./opencascade\RWStepDimTol_RWCylindricityTolerance.hxx
// ./opencascade\RWStepDimTol_RWSymmetryTolerance.hxx
// ./opencascade\RWStepDimTol_RWGeometricToleranceWithDefinedAreaUnit.hxx
// ./opencascade\RWStepDimTol_RWRoundnessTolerance.hxx
// ./opencascade\RWStepDimTol_RWDatumTarget.hxx
// ./opencascade\RWStepDimTol_RWGeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx
// ./opencascade\RWStepDimTol_RWAngularityTolerance.hxx
// ./opencascade\RWStepDimTol_RWToleranceZoneForm.hxx
// ./opencascade\RWStepDimTol_RWParallelismTolerance.hxx
// ./opencascade\RWStepDimTol_RWNonUniformZoneDefinition.hxx
// ./opencascade\RWStepDimTol_RWDatumReferenceCompartment.hxx
// ./opencascade\RWStepDimTol_RWToleranceZone.hxx
// ./opencascade\RWStepDimTol_RWConcentricityTolerance.hxx
// ./opencascade\RWStepDimTol_RWGeometricToleranceWithDefinedUnit.hxx
// ./opencascade\RWStepDimTol_RWGeometricTolerance.hxx
// ./opencascade\RWStepDimTol_RWGeneralDatumReference.hxx
// ./opencascade\RWStepDimTol_RWRunoutZoneOrientation.hxx
// ./opencascade\RWStepDimTol_RWModifiedGeometricTolerance.hxx
// ./opencascade\RWStepDimTol_RWLineProfileTolerance.hxx
// ./opencascade\RWStepDimTol_RWGeometricToleranceRelationship.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
