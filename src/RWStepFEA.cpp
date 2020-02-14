
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
#include <StepFEA_AlignedSurface3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementEndOffset.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ConstantSurface3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeWithSolutionCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMassDensity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FreedomsList.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellBendingStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaSecantCoefficientOfLinearThermalExpansion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_DummyNode.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeWithVector.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaAreaDensity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellMembraneStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Node.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaModelDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaCurveSectionGeometricRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FreedomAndCoefficient.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ElementGeometricRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementIntervalConstant.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ParametricSurface3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementIntervalLinearlyVarying.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaSurfaceSectionGeometricRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementInterval.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellShearStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaParametricPoint.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMoistureAbsorption.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaLinearElasticity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Volume3dElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_GeometricNode.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Surface3dElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementEndRelease.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepFEA_RWAlignedCurve3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWAlignedSurface3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWConstantSurface3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWCurve3dElementProperty.hxx>
#include <RWStepFEA_RWCurve3dElementRepresentation.hxx>
#include <RWStepFEA_RWCurveElementEndOffset.hxx>
#include <RWStepFEA_RWCurveElementEndRelease.hxx>
#include <RWStepFEA_RWCurveElementInterval.hxx>
#include <RWStepFEA_RWCurveElementIntervalConstant.hxx>
#include <RWStepFEA_RWCurveElementIntervalLinearlyVarying.hxx>
#include <RWStepFEA_RWCurveElementLocation.hxx>
#include <RWStepFEA_RWDummyNode.hxx>
#include <RWStepFEA_RWElementGeometricRelationship.hxx>
#include <RWStepFEA_RWElementGroup.hxx>
#include <RWStepFEA_RWElementRepresentation.hxx>
#include <RWStepFEA_RWFeaAreaDensity.hxx>
#include <RWStepFEA_RWFeaAxis2Placement3d.hxx>
#include <RWStepFEA_RWFeaCurveSectionGeometricRelationship.hxx>
#include <RWStepFEA_RWFeaGroup.hxx>
#include <RWStepFEA_RWFeaLinearElasticity.hxx>
#include <RWStepFEA_RWFeaMassDensity.hxx>
#include <RWStepFEA_RWFeaMaterialPropertyRepresentation.hxx>
#include <RWStepFEA_RWFeaMaterialPropertyRepresentationItem.hxx>
#include <RWStepFEA_RWFeaModel.hxx>
#include <RWStepFEA_RWFeaModel3d.hxx>
#include <RWStepFEA_RWFeaModelDefinition.hxx>
#include <RWStepFEA_RWFeaMoistureAbsorption.hxx>
#include <RWStepFEA_RWFeaParametricPoint.hxx>
#include <RWStepFEA_RWFeaRepresentationItem.hxx>
#include <RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion.hxx>
#include <RWStepFEA_RWFeaShellBendingStiffness.hxx>
#include <RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness.hxx>
#include <RWStepFEA_RWFeaShellMembraneStiffness.hxx>
#include <RWStepFEA_RWFeaShellShearStiffness.hxx>
#include <RWStepFEA_RWFeaSurfaceSectionGeometricRelationship.hxx>
#include <RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion.hxx>
#include <RWStepFEA_RWFreedomAndCoefficient.hxx>
#include <RWStepFEA_RWFreedomsList.hxx>
#include <RWStepFEA_RWGeometricNode.hxx>
#include <RWStepFEA_RWNode.hxx>
#include <RWStepFEA_RWNodeDefinition.hxx>
#include <RWStepFEA_RWNodeGroup.hxx>
#include <RWStepFEA_RWNodeRepresentation.hxx>
#include <RWStepFEA_RWNodeSet.hxx>
#include <RWStepFEA_RWNodeWithSolutionCoordinateSystem.hxx>
#include <RWStepFEA_RWNodeWithVector.hxx>
#include <RWStepFEA_RWParametricCurve3dElementCoordinateDirection.hxx>
#include <RWStepFEA_RWParametricCurve3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWParametricSurface3dElementCoordinateSystem.hxx>
#include <RWStepFEA_RWSurface3dElementRepresentation.hxx>
#include <RWStepFEA_RWVolume3dElementRepresentation.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepFEA(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepFEA"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepFEA_RWAlignedCurve3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWAlignedCurve3dElementCoordinateSystem>  >>(m.attr("RWStepFEA_RWAlignedCurve3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::ReadStep),
             R"#(Reads AlignedCurve3dElementCoordinateSystem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::WriteStep),
             R"#(Writes AlignedCurve3dElementCoordinateSystem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWAlignedCurve3dElementCoordinateSystem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWAlignedSurface3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWAlignedSurface3dElementCoordinateSystem>  >>(m.attr("RWStepFEA_RWAlignedSurface3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWAlignedSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_AlignedSurface3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWAlignedSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_AlignedSurface3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWAlignedSurface3dElementCoordinateSystem::ReadStep),
             R"#(Reads AlignedSurface3dElementCoordinateSystem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWAlignedSurface3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_AlignedSurface3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWAlignedSurface3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_AlignedSurface3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWAlignedSurface3dElementCoordinateSystem::WriteStep),
             R"#(Writes AlignedSurface3dElementCoordinateSystem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWAlignedSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_AlignedSurface3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWAlignedSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_AlignedSurface3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWAlignedSurface3dElementCoordinateSystem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem>  >>(m.attr("RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ArbitraryVolume3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ArbitraryVolume3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem::ReadStep),
             R"#(Reads ArbitraryVolume3dElementCoordinateSystem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ArbitraryVolume3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ArbitraryVolume3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem::WriteStep),
             R"#(Writes ArbitraryVolume3dElementCoordinateSystem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_ArbitraryVolume3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_ArbitraryVolume3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWConstantSurface3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWConstantSurface3dElementCoordinateSystem>  >>(m.attr("RWStepFEA_RWConstantSurface3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWConstantSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ConstantSurface3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWConstantSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ConstantSurface3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWConstantSurface3dElementCoordinateSystem::ReadStep),
             R"#(Reads ConstantSurface3dElementCoordinateSystem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWConstantSurface3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ConstantSurface3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWConstantSurface3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ConstantSurface3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWConstantSurface3dElementCoordinateSystem::WriteStep),
             R"#(Writes ConstantSurface3dElementCoordinateSystem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWConstantSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_ConstantSurface3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWConstantSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_ConstantSurface3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWConstantSurface3dElementCoordinateSystem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurve3dElementProperty , shared_ptr<RWStepFEA_RWCurve3dElementProperty>  >>(m.attr("RWStepFEA_RWCurve3dElementProperty"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWCurve3dElementProperty::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_Curve3dElementProperty> &  ) const) static_cast<void (RWStepFEA_RWCurve3dElementProperty::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_Curve3dElementProperty> &  ) const>(&RWStepFEA_RWCurve3dElementProperty::ReadStep),
             R"#(Reads Curve3dElementProperty)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWCurve3dElementProperty::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_Curve3dElementProperty> &  ) const) static_cast<void (RWStepFEA_RWCurve3dElementProperty::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_Curve3dElementProperty> &  ) const>(&RWStepFEA_RWCurve3dElementProperty::WriteStep),
             R"#(Writes Curve3dElementProperty)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWCurve3dElementProperty::*)( const opencascade::handle<StepFEA_Curve3dElementProperty> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWCurve3dElementProperty::*)( const opencascade::handle<StepFEA_Curve3dElementProperty> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWCurve3dElementProperty::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurve3dElementRepresentation , shared_ptr<RWStepFEA_RWCurve3dElementRepresentation>  >>(m.attr("RWStepFEA_RWCurve3dElementRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWCurve3dElementRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_Curve3dElementRepresentation> &  ) const) static_cast<void (RWStepFEA_RWCurve3dElementRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_Curve3dElementRepresentation> &  ) const>(&RWStepFEA_RWCurve3dElementRepresentation::ReadStep),
             R"#(Reads Curve3dElementRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWCurve3dElementRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_Curve3dElementRepresentation> &  ) const) static_cast<void (RWStepFEA_RWCurve3dElementRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_Curve3dElementRepresentation> &  ) const>(&RWStepFEA_RWCurve3dElementRepresentation::WriteStep),
             R"#(Writes Curve3dElementRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWCurve3dElementRepresentation::*)( const opencascade::handle<StepFEA_Curve3dElementRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWCurve3dElementRepresentation::*)( const opencascade::handle<StepFEA_Curve3dElementRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWCurve3dElementRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementEndOffset , shared_ptr<RWStepFEA_RWCurveElementEndOffset>  >>(m.attr("RWStepFEA_RWCurveElementEndOffset"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWCurveElementEndOffset::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementEndOffset> &  ) const) static_cast<void (RWStepFEA_RWCurveElementEndOffset::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementEndOffset> &  ) const>(&RWStepFEA_RWCurveElementEndOffset::ReadStep),
             R"#(Reads CurveElementEndOffset)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWCurveElementEndOffset::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementEndOffset> &  ) const) static_cast<void (RWStepFEA_RWCurveElementEndOffset::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementEndOffset> &  ) const>(&RWStepFEA_RWCurveElementEndOffset::WriteStep),
             R"#(Writes CurveElementEndOffset)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWCurveElementEndOffset::*)( const opencascade::handle<StepFEA_CurveElementEndOffset> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWCurveElementEndOffset::*)( const opencascade::handle<StepFEA_CurveElementEndOffset> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWCurveElementEndOffset::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementEndRelease , shared_ptr<RWStepFEA_RWCurveElementEndRelease>  >>(m.attr("RWStepFEA_RWCurveElementEndRelease"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWCurveElementEndRelease::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementEndRelease> &  ) const) static_cast<void (RWStepFEA_RWCurveElementEndRelease::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementEndRelease> &  ) const>(&RWStepFEA_RWCurveElementEndRelease::ReadStep),
             R"#(Reads CurveElementEndRelease)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWCurveElementEndRelease::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementEndRelease> &  ) const) static_cast<void (RWStepFEA_RWCurveElementEndRelease::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementEndRelease> &  ) const>(&RWStepFEA_RWCurveElementEndRelease::WriteStep),
             R"#(Writes CurveElementEndRelease)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWCurveElementEndRelease::*)( const opencascade::handle<StepFEA_CurveElementEndRelease> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWCurveElementEndRelease::*)( const opencascade::handle<StepFEA_CurveElementEndRelease> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWCurveElementEndRelease::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementInterval , shared_ptr<RWStepFEA_RWCurveElementInterval>  >>(m.attr("RWStepFEA_RWCurveElementInterval"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWCurveElementInterval::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementInterval> &  ) const) static_cast<void (RWStepFEA_RWCurveElementInterval::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementInterval> &  ) const>(&RWStepFEA_RWCurveElementInterval::ReadStep),
             R"#(Reads CurveElementInterval)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWCurveElementInterval::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementInterval> &  ) const) static_cast<void (RWStepFEA_RWCurveElementInterval::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementInterval> &  ) const>(&RWStepFEA_RWCurveElementInterval::WriteStep),
             R"#(Writes CurveElementInterval)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWCurveElementInterval::*)( const opencascade::handle<StepFEA_CurveElementInterval> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWCurveElementInterval::*)( const opencascade::handle<StepFEA_CurveElementInterval> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWCurveElementInterval::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementIntervalConstant , shared_ptr<RWStepFEA_RWCurveElementIntervalConstant>  >>(m.attr("RWStepFEA_RWCurveElementIntervalConstant"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWCurveElementIntervalConstant::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementIntervalConstant> &  ) const) static_cast<void (RWStepFEA_RWCurveElementIntervalConstant::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementIntervalConstant> &  ) const>(&RWStepFEA_RWCurveElementIntervalConstant::ReadStep),
             R"#(Reads CurveElementIntervalConstant)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWCurveElementIntervalConstant::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementIntervalConstant> &  ) const) static_cast<void (RWStepFEA_RWCurveElementIntervalConstant::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementIntervalConstant> &  ) const>(&RWStepFEA_RWCurveElementIntervalConstant::WriteStep),
             R"#(Writes CurveElementIntervalConstant)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWCurveElementIntervalConstant::*)( const opencascade::handle<StepFEA_CurveElementIntervalConstant> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWCurveElementIntervalConstant::*)( const opencascade::handle<StepFEA_CurveElementIntervalConstant> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWCurveElementIntervalConstant::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementIntervalLinearlyVarying , shared_ptr<RWStepFEA_RWCurveElementIntervalLinearlyVarying>  >>(m.attr("RWStepFEA_RWCurveElementIntervalLinearlyVarying"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWCurveElementIntervalLinearlyVarying::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementIntervalLinearlyVarying> &  ) const) static_cast<void (RWStepFEA_RWCurveElementIntervalLinearlyVarying::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementIntervalLinearlyVarying> &  ) const>(&RWStepFEA_RWCurveElementIntervalLinearlyVarying::ReadStep),
             R"#(Reads CurveElementIntervalLinearlyVarying)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWCurveElementIntervalLinearlyVarying::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementIntervalLinearlyVarying> &  ) const) static_cast<void (RWStepFEA_RWCurveElementIntervalLinearlyVarying::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementIntervalLinearlyVarying> &  ) const>(&RWStepFEA_RWCurveElementIntervalLinearlyVarying::WriteStep),
             R"#(Writes CurveElementIntervalLinearlyVarying)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWCurveElementIntervalLinearlyVarying::*)( const opencascade::handle<StepFEA_CurveElementIntervalLinearlyVarying> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWCurveElementIntervalLinearlyVarying::*)( const opencascade::handle<StepFEA_CurveElementIntervalLinearlyVarying> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWCurveElementIntervalLinearlyVarying::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementLocation , shared_ptr<RWStepFEA_RWCurveElementLocation>  >>(m.attr("RWStepFEA_RWCurveElementLocation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWCurveElementLocation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementLocation> &  ) const) static_cast<void (RWStepFEA_RWCurveElementLocation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_CurveElementLocation> &  ) const>(&RWStepFEA_RWCurveElementLocation::ReadStep),
             R"#(Reads CurveElementLocation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWCurveElementLocation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementLocation> &  ) const) static_cast<void (RWStepFEA_RWCurveElementLocation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_CurveElementLocation> &  ) const>(&RWStepFEA_RWCurveElementLocation::WriteStep),
             R"#(Writes CurveElementLocation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWCurveElementLocation::*)( const opencascade::handle<StepFEA_CurveElementLocation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWCurveElementLocation::*)( const opencascade::handle<StepFEA_CurveElementLocation> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWCurveElementLocation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWDummyNode , shared_ptr<RWStepFEA_RWDummyNode>  >>(m.attr("RWStepFEA_RWDummyNode"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWDummyNode::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_DummyNode> &  ) const) static_cast<void (RWStepFEA_RWDummyNode::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_DummyNode> &  ) const>(&RWStepFEA_RWDummyNode::ReadStep),
             R"#(Reads DummyNode)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWDummyNode::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_DummyNode> &  ) const) static_cast<void (RWStepFEA_RWDummyNode::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_DummyNode> &  ) const>(&RWStepFEA_RWDummyNode::WriteStep),
             R"#(Writes DummyNode)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWDummyNode::*)( const opencascade::handle<StepFEA_DummyNode> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWDummyNode::*)( const opencascade::handle<StepFEA_DummyNode> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWDummyNode::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWElementGeometricRelationship , shared_ptr<RWStepFEA_RWElementGeometricRelationship>  >>(m.attr("RWStepFEA_RWElementGeometricRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWElementGeometricRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ElementGeometricRelationship> &  ) const) static_cast<void (RWStepFEA_RWElementGeometricRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ElementGeometricRelationship> &  ) const>(&RWStepFEA_RWElementGeometricRelationship::ReadStep),
             R"#(Reads ElementGeometricRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWElementGeometricRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ElementGeometricRelationship> &  ) const) static_cast<void (RWStepFEA_RWElementGeometricRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ElementGeometricRelationship> &  ) const>(&RWStepFEA_RWElementGeometricRelationship::WriteStep),
             R"#(Writes ElementGeometricRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWElementGeometricRelationship::*)( const opencascade::handle<StepFEA_ElementGeometricRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWElementGeometricRelationship::*)( const opencascade::handle<StepFEA_ElementGeometricRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWElementGeometricRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWElementGroup , shared_ptr<RWStepFEA_RWElementGroup>  >>(m.attr("RWStepFEA_RWElementGroup"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWElementGroup::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ElementGroup> &  ) const) static_cast<void (RWStepFEA_RWElementGroup::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ElementGroup> &  ) const>(&RWStepFEA_RWElementGroup::ReadStep),
             R"#(Reads ElementGroup)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWElementGroup::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ElementGroup> &  ) const) static_cast<void (RWStepFEA_RWElementGroup::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ElementGroup> &  ) const>(&RWStepFEA_RWElementGroup::WriteStep),
             R"#(Writes ElementGroup)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWElementGroup::*)( const opencascade::handle<StepFEA_ElementGroup> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWElementGroup::*)( const opencascade::handle<StepFEA_ElementGroup> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWElementGroup::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWElementRepresentation , shared_ptr<RWStepFEA_RWElementRepresentation>  >>(m.attr("RWStepFEA_RWElementRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWElementRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ElementRepresentation> &  ) const) static_cast<void (RWStepFEA_RWElementRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ElementRepresentation> &  ) const>(&RWStepFEA_RWElementRepresentation::ReadStep),
             R"#(Reads ElementRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWElementRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ElementRepresentation> &  ) const) static_cast<void (RWStepFEA_RWElementRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ElementRepresentation> &  ) const>(&RWStepFEA_RWElementRepresentation::WriteStep),
             R"#(Writes ElementRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWElementRepresentation::*)( const opencascade::handle<StepFEA_ElementRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWElementRepresentation::*)( const opencascade::handle<StepFEA_ElementRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWElementRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaAreaDensity , shared_ptr<RWStepFEA_RWFeaAreaDensity>  >>(m.attr("RWStepFEA_RWFeaAreaDensity"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaAreaDensity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaAreaDensity> &  ) const) static_cast<void (RWStepFEA_RWFeaAreaDensity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaAreaDensity> &  ) const>(&RWStepFEA_RWFeaAreaDensity::ReadStep),
             R"#(Reads FeaAreaDensity)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaAreaDensity::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaAreaDensity> &  ) const) static_cast<void (RWStepFEA_RWFeaAreaDensity::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaAreaDensity> &  ) const>(&RWStepFEA_RWFeaAreaDensity::WriteStep),
             R"#(Writes FeaAreaDensity)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaAreaDensity::*)( const opencascade::handle<StepFEA_FeaAreaDensity> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaAreaDensity::*)( const opencascade::handle<StepFEA_FeaAreaDensity> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaAreaDensity::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaAxis2Placement3d , shared_ptr<RWStepFEA_RWFeaAxis2Placement3d>  >>(m.attr("RWStepFEA_RWFeaAxis2Placement3d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaAxis2Placement3d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaAxis2Placement3d> &  ) const) static_cast<void (RWStepFEA_RWFeaAxis2Placement3d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaAxis2Placement3d> &  ) const>(&RWStepFEA_RWFeaAxis2Placement3d::ReadStep),
             R"#(Reads FeaAxis2Placement3d)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaAxis2Placement3d::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaAxis2Placement3d> &  ) const) static_cast<void (RWStepFEA_RWFeaAxis2Placement3d::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaAxis2Placement3d> &  ) const>(&RWStepFEA_RWFeaAxis2Placement3d::WriteStep),
             R"#(Writes FeaAxis2Placement3d)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaAxis2Placement3d::*)( const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaAxis2Placement3d::*)( const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaAxis2Placement3d::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaCurveSectionGeometricRelationship , shared_ptr<RWStepFEA_RWFeaCurveSectionGeometricRelationship>  >>(m.attr("RWStepFEA_RWFeaCurveSectionGeometricRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaCurveSectionGeometricRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaCurveSectionGeometricRelationship> &  ) const) static_cast<void (RWStepFEA_RWFeaCurveSectionGeometricRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaCurveSectionGeometricRelationship> &  ) const>(&RWStepFEA_RWFeaCurveSectionGeometricRelationship::ReadStep),
             R"#(Reads FeaCurveSectionGeometricRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaCurveSectionGeometricRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaCurveSectionGeometricRelationship> &  ) const) static_cast<void (RWStepFEA_RWFeaCurveSectionGeometricRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaCurveSectionGeometricRelationship> &  ) const>(&RWStepFEA_RWFeaCurveSectionGeometricRelationship::WriteStep),
             R"#(Writes FeaCurveSectionGeometricRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaCurveSectionGeometricRelationship::*)( const opencascade::handle<StepFEA_FeaCurveSectionGeometricRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaCurveSectionGeometricRelationship::*)( const opencascade::handle<StepFEA_FeaCurveSectionGeometricRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaCurveSectionGeometricRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaGroup , shared_ptr<RWStepFEA_RWFeaGroup>  >>(m.attr("RWStepFEA_RWFeaGroup"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaGroup::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaGroup> &  ) const) static_cast<void (RWStepFEA_RWFeaGroup::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaGroup> &  ) const>(&RWStepFEA_RWFeaGroup::ReadStep),
             R"#(Reads FeaGroup)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaGroup::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaGroup> &  ) const) static_cast<void (RWStepFEA_RWFeaGroup::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaGroup> &  ) const>(&RWStepFEA_RWFeaGroup::WriteStep),
             R"#(Writes FeaGroup)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaGroup::*)( const opencascade::handle<StepFEA_FeaGroup> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaGroup::*)( const opencascade::handle<StepFEA_FeaGroup> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaGroup::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaLinearElasticity , shared_ptr<RWStepFEA_RWFeaLinearElasticity>  >>(m.attr("RWStepFEA_RWFeaLinearElasticity"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaLinearElasticity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaLinearElasticity> &  ) const) static_cast<void (RWStepFEA_RWFeaLinearElasticity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaLinearElasticity> &  ) const>(&RWStepFEA_RWFeaLinearElasticity::ReadStep),
             R"#(Reads FeaLinearElasticity)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaLinearElasticity::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaLinearElasticity> &  ) const) static_cast<void (RWStepFEA_RWFeaLinearElasticity::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaLinearElasticity> &  ) const>(&RWStepFEA_RWFeaLinearElasticity::WriteStep),
             R"#(Writes FeaLinearElasticity)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaLinearElasticity::*)( const opencascade::handle<StepFEA_FeaLinearElasticity> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaLinearElasticity::*)( const opencascade::handle<StepFEA_FeaLinearElasticity> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaLinearElasticity::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaMassDensity , shared_ptr<RWStepFEA_RWFeaMassDensity>  >>(m.attr("RWStepFEA_RWFeaMassDensity"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaMassDensity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaMassDensity> &  ) const) static_cast<void (RWStepFEA_RWFeaMassDensity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaMassDensity> &  ) const>(&RWStepFEA_RWFeaMassDensity::ReadStep),
             R"#(Reads FeaMassDensity)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaMassDensity::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaMassDensity> &  ) const) static_cast<void (RWStepFEA_RWFeaMassDensity::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaMassDensity> &  ) const>(&RWStepFEA_RWFeaMassDensity::WriteStep),
             R"#(Writes FeaMassDensity)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaMassDensity::*)( const opencascade::handle<StepFEA_FeaMassDensity> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaMassDensity::*)( const opencascade::handle<StepFEA_FeaMassDensity> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaMassDensity::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaMaterialPropertyRepresentation , shared_ptr<RWStepFEA_RWFeaMaterialPropertyRepresentation>  >>(m.attr("RWStepFEA_RWFeaMaterialPropertyRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaMaterialPropertyRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentation> &  ) const) static_cast<void (RWStepFEA_RWFeaMaterialPropertyRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentation> &  ) const>(&RWStepFEA_RWFeaMaterialPropertyRepresentation::ReadStep),
             R"#(Reads FeaMaterialPropertyRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaMaterialPropertyRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentation> &  ) const) static_cast<void (RWStepFEA_RWFeaMaterialPropertyRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentation> &  ) const>(&RWStepFEA_RWFeaMaterialPropertyRepresentation::WriteStep),
             R"#(Writes FeaMaterialPropertyRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaMaterialPropertyRepresentation::*)( const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaMaterialPropertyRepresentation::*)( const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaMaterialPropertyRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaMaterialPropertyRepresentationItem , shared_ptr<RWStepFEA_RWFeaMaterialPropertyRepresentationItem>  >>(m.attr("RWStepFEA_RWFeaMaterialPropertyRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaMaterialPropertyRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentationItem> &  ) const) static_cast<void (RWStepFEA_RWFeaMaterialPropertyRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentationItem> &  ) const>(&RWStepFEA_RWFeaMaterialPropertyRepresentationItem::ReadStep),
             R"#(Reads FeaMaterialPropertyRepresentationItem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaMaterialPropertyRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentationItem> &  ) const) static_cast<void (RWStepFEA_RWFeaMaterialPropertyRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentationItem> &  ) const>(&RWStepFEA_RWFeaMaterialPropertyRepresentationItem::WriteStep),
             R"#(Writes FeaMaterialPropertyRepresentationItem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaMaterialPropertyRepresentationItem::*)( const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentationItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaMaterialPropertyRepresentationItem::*)( const opencascade::handle<StepFEA_FeaMaterialPropertyRepresentationItem> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaMaterialPropertyRepresentationItem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaModel , shared_ptr<RWStepFEA_RWFeaModel>  >>(m.attr("RWStepFEA_RWFeaModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaModel::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaModel> &  ) const) static_cast<void (RWStepFEA_RWFeaModel::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaModel> &  ) const>(&RWStepFEA_RWFeaModel::ReadStep),
             R"#(Reads FeaModel)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaModel::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaModel> &  ) const) static_cast<void (RWStepFEA_RWFeaModel::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaModel> &  ) const>(&RWStepFEA_RWFeaModel::WriteStep),
             R"#(Writes FeaModel)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaModel::*)( const opencascade::handle<StepFEA_FeaModel> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaModel::*)( const opencascade::handle<StepFEA_FeaModel> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaModel::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaModel3d , shared_ptr<RWStepFEA_RWFeaModel3d>  >>(m.attr("RWStepFEA_RWFeaModel3d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaModel3d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaModel3d> &  ) const) static_cast<void (RWStepFEA_RWFeaModel3d::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaModel3d> &  ) const>(&RWStepFEA_RWFeaModel3d::ReadStep),
             R"#(Reads FeaModel3d)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaModel3d::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaModel3d> &  ) const) static_cast<void (RWStepFEA_RWFeaModel3d::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaModel3d> &  ) const>(&RWStepFEA_RWFeaModel3d::WriteStep),
             R"#(Writes FeaModel3d)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaModel3d::*)( const opencascade::handle<StepFEA_FeaModel3d> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaModel3d::*)( const opencascade::handle<StepFEA_FeaModel3d> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaModel3d::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaModelDefinition , shared_ptr<RWStepFEA_RWFeaModelDefinition>  >>(m.attr("RWStepFEA_RWFeaModelDefinition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaModelDefinition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaModelDefinition> &  ) const) static_cast<void (RWStepFEA_RWFeaModelDefinition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaModelDefinition> &  ) const>(&RWStepFEA_RWFeaModelDefinition::ReadStep),
             R"#(Reads FeaModelDefinition)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaModelDefinition::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaModelDefinition> &  ) const) static_cast<void (RWStepFEA_RWFeaModelDefinition::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaModelDefinition> &  ) const>(&RWStepFEA_RWFeaModelDefinition::WriteStep),
             R"#(Writes FeaModelDefinition)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaModelDefinition::*)( const opencascade::handle<StepFEA_FeaModelDefinition> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaModelDefinition::*)( const opencascade::handle<StepFEA_FeaModelDefinition> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaModelDefinition::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaMoistureAbsorption , shared_ptr<RWStepFEA_RWFeaMoistureAbsorption>  >>(m.attr("RWStepFEA_RWFeaMoistureAbsorption"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaMoistureAbsorption::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaMoistureAbsorption> &  ) const) static_cast<void (RWStepFEA_RWFeaMoistureAbsorption::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaMoistureAbsorption> &  ) const>(&RWStepFEA_RWFeaMoistureAbsorption::ReadStep),
             R"#(Reads FeaMoistureAbsorption)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaMoistureAbsorption::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaMoistureAbsorption> &  ) const) static_cast<void (RWStepFEA_RWFeaMoistureAbsorption::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaMoistureAbsorption> &  ) const>(&RWStepFEA_RWFeaMoistureAbsorption::WriteStep),
             R"#(Writes FeaMoistureAbsorption)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaMoistureAbsorption::*)( const opencascade::handle<StepFEA_FeaMoistureAbsorption> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaMoistureAbsorption::*)( const opencascade::handle<StepFEA_FeaMoistureAbsorption> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaMoistureAbsorption::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaParametricPoint , shared_ptr<RWStepFEA_RWFeaParametricPoint>  >>(m.attr("RWStepFEA_RWFeaParametricPoint"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaParametricPoint::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaParametricPoint> &  ) const) static_cast<void (RWStepFEA_RWFeaParametricPoint::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaParametricPoint> &  ) const>(&RWStepFEA_RWFeaParametricPoint::ReadStep),
             R"#(Reads FeaParametricPoint)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaParametricPoint::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaParametricPoint> &  ) const) static_cast<void (RWStepFEA_RWFeaParametricPoint::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaParametricPoint> &  ) const>(&RWStepFEA_RWFeaParametricPoint::WriteStep),
             R"#(Writes FeaParametricPoint)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaParametricPoint::*)( const opencascade::handle<StepFEA_FeaParametricPoint> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaParametricPoint::*)( const opencascade::handle<StepFEA_FeaParametricPoint> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaParametricPoint::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaRepresentationItem , shared_ptr<RWStepFEA_RWFeaRepresentationItem>  >>(m.attr("RWStepFEA_RWFeaRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaRepresentationItem> &  ) const) static_cast<void (RWStepFEA_RWFeaRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaRepresentationItem> &  ) const>(&RWStepFEA_RWFeaRepresentationItem::ReadStep),
             R"#(Reads FeaRepresentationItem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaRepresentationItem> &  ) const) static_cast<void (RWStepFEA_RWFeaRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaRepresentationItem> &  ) const>(&RWStepFEA_RWFeaRepresentationItem::WriteStep),
             R"#(Writes FeaRepresentationItem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaRepresentationItem::*)( const opencascade::handle<StepFEA_FeaRepresentationItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaRepresentationItem::*)( const opencascade::handle<StepFEA_FeaRepresentationItem> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaRepresentationItem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion , shared_ptr<RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion>  >>(m.attr("RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion> &  ) const) static_cast<void (RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion> &  ) const>(&RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion::ReadStep),
             R"#(Reads FeaSecantCoefficientOfLinearThermalExpansion)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion> &  ) const) static_cast<void (RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion> &  ) const>(&RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion::WriteStep),
             R"#(Writes FeaSecantCoefficientOfLinearThermalExpansion)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaShellBendingStiffness , shared_ptr<RWStepFEA_RWFeaShellBendingStiffness>  >>(m.attr("RWStepFEA_RWFeaShellBendingStiffness"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaShellBendingStiffness::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaShellBendingStiffness> &  ) const) static_cast<void (RWStepFEA_RWFeaShellBendingStiffness::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaShellBendingStiffness> &  ) const>(&RWStepFEA_RWFeaShellBendingStiffness::ReadStep),
             R"#(Reads FeaShellBendingStiffness)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaShellBendingStiffness::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaShellBendingStiffness> &  ) const) static_cast<void (RWStepFEA_RWFeaShellBendingStiffness::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaShellBendingStiffness> &  ) const>(&RWStepFEA_RWFeaShellBendingStiffness::WriteStep),
             R"#(Writes FeaShellBendingStiffness)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaShellBendingStiffness::*)( const opencascade::handle<StepFEA_FeaShellBendingStiffness> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaShellBendingStiffness::*)( const opencascade::handle<StepFEA_FeaShellBendingStiffness> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaShellBendingStiffness::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness , shared_ptr<RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness>  >>(m.attr("RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaShellMembraneBendingCouplingStiffness> &  ) const) static_cast<void (RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaShellMembraneBendingCouplingStiffness> &  ) const>(&RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness::ReadStep),
             R"#(Reads FeaShellMembraneBendingCouplingStiffness)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaShellMembraneBendingCouplingStiffness> &  ) const) static_cast<void (RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaShellMembraneBendingCouplingStiffness> &  ) const>(&RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness::WriteStep),
             R"#(Writes FeaShellMembraneBendingCouplingStiffness)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness::*)( const opencascade::handle<StepFEA_FeaShellMembraneBendingCouplingStiffness> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness::*)( const opencascade::handle<StepFEA_FeaShellMembraneBendingCouplingStiffness> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaShellMembraneStiffness , shared_ptr<RWStepFEA_RWFeaShellMembraneStiffness>  >>(m.attr("RWStepFEA_RWFeaShellMembraneStiffness"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaShellMembraneStiffness::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaShellMembraneStiffness> &  ) const) static_cast<void (RWStepFEA_RWFeaShellMembraneStiffness::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaShellMembraneStiffness> &  ) const>(&RWStepFEA_RWFeaShellMembraneStiffness::ReadStep),
             R"#(Reads FeaShellMembraneStiffness)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaShellMembraneStiffness::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaShellMembraneStiffness> &  ) const) static_cast<void (RWStepFEA_RWFeaShellMembraneStiffness::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaShellMembraneStiffness> &  ) const>(&RWStepFEA_RWFeaShellMembraneStiffness::WriteStep),
             R"#(Writes FeaShellMembraneStiffness)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaShellMembraneStiffness::*)( const opencascade::handle<StepFEA_FeaShellMembraneStiffness> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaShellMembraneStiffness::*)( const opencascade::handle<StepFEA_FeaShellMembraneStiffness> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaShellMembraneStiffness::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaShellShearStiffness , shared_ptr<RWStepFEA_RWFeaShellShearStiffness>  >>(m.attr("RWStepFEA_RWFeaShellShearStiffness"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaShellShearStiffness::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaShellShearStiffness> &  ) const) static_cast<void (RWStepFEA_RWFeaShellShearStiffness::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaShellShearStiffness> &  ) const>(&RWStepFEA_RWFeaShellShearStiffness::ReadStep),
             R"#(Reads FeaShellShearStiffness)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaShellShearStiffness::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaShellShearStiffness> &  ) const) static_cast<void (RWStepFEA_RWFeaShellShearStiffness::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaShellShearStiffness> &  ) const>(&RWStepFEA_RWFeaShellShearStiffness::WriteStep),
             R"#(Writes FeaShellShearStiffness)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaShellShearStiffness::*)( const opencascade::handle<StepFEA_FeaShellShearStiffness> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaShellShearStiffness::*)( const opencascade::handle<StepFEA_FeaShellShearStiffness> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaShellShearStiffness::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaSurfaceSectionGeometricRelationship , shared_ptr<RWStepFEA_RWFeaSurfaceSectionGeometricRelationship>  >>(m.attr("RWStepFEA_RWFeaSurfaceSectionGeometricRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaSurfaceSectionGeometricRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaSurfaceSectionGeometricRelationship> &  ) const) static_cast<void (RWStepFEA_RWFeaSurfaceSectionGeometricRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaSurfaceSectionGeometricRelationship> &  ) const>(&RWStepFEA_RWFeaSurfaceSectionGeometricRelationship::ReadStep),
             R"#(Reads FeaSurfaceSectionGeometricRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaSurfaceSectionGeometricRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaSurfaceSectionGeometricRelationship> &  ) const) static_cast<void (RWStepFEA_RWFeaSurfaceSectionGeometricRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaSurfaceSectionGeometricRelationship> &  ) const>(&RWStepFEA_RWFeaSurfaceSectionGeometricRelationship::WriteStep),
             R"#(Writes FeaSurfaceSectionGeometricRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaSurfaceSectionGeometricRelationship::*)( const opencascade::handle<StepFEA_FeaSurfaceSectionGeometricRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaSurfaceSectionGeometricRelationship::*)( const opencascade::handle<StepFEA_FeaSurfaceSectionGeometricRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaSurfaceSectionGeometricRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion , shared_ptr<RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion>  >>(m.attr("RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion> &  ) const) static_cast<void (RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion> &  ) const>(&RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion::ReadStep),
             R"#(Reads FeaTangentialCoefficientOfLinearThermalExpansion)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion> &  ) const) static_cast<void (RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion> &  ) const>(&RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion::WriteStep),
             R"#(Writes FeaTangentialCoefficientOfLinearThermalExpansion)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFreedomAndCoefficient , shared_ptr<RWStepFEA_RWFreedomAndCoefficient>  >>(m.attr("RWStepFEA_RWFreedomAndCoefficient"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFreedomAndCoefficient::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FreedomAndCoefficient> &  ) const) static_cast<void (RWStepFEA_RWFreedomAndCoefficient::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FreedomAndCoefficient> &  ) const>(&RWStepFEA_RWFreedomAndCoefficient::ReadStep),
             R"#(Reads FreedomAndCoefficient)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFreedomAndCoefficient::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FreedomAndCoefficient> &  ) const) static_cast<void (RWStepFEA_RWFreedomAndCoefficient::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FreedomAndCoefficient> &  ) const>(&RWStepFEA_RWFreedomAndCoefficient::WriteStep),
             R"#(Writes FreedomAndCoefficient)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFreedomAndCoefficient::*)( const opencascade::handle<StepFEA_FreedomAndCoefficient> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFreedomAndCoefficient::*)( const opencascade::handle<StepFEA_FreedomAndCoefficient> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFreedomAndCoefficient::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFreedomsList , shared_ptr<RWStepFEA_RWFreedomsList>  >>(m.attr("RWStepFEA_RWFreedomsList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWFreedomsList::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FreedomsList> &  ) const) static_cast<void (RWStepFEA_RWFreedomsList::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_FreedomsList> &  ) const>(&RWStepFEA_RWFreedomsList::ReadStep),
             R"#(Reads FreedomsList)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWFreedomsList::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FreedomsList> &  ) const) static_cast<void (RWStepFEA_RWFreedomsList::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_FreedomsList> &  ) const>(&RWStepFEA_RWFreedomsList::WriteStep),
             R"#(Writes FreedomsList)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWFreedomsList::*)( const opencascade::handle<StepFEA_FreedomsList> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWFreedomsList::*)( const opencascade::handle<StepFEA_FreedomsList> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWFreedomsList::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWGeometricNode , shared_ptr<RWStepFEA_RWGeometricNode>  >>(m.attr("RWStepFEA_RWGeometricNode"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWGeometricNode::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_GeometricNode> &  ) const) static_cast<void (RWStepFEA_RWGeometricNode::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_GeometricNode> &  ) const>(&RWStepFEA_RWGeometricNode::ReadStep),
             R"#(Reads GeometricNode)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWGeometricNode::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_GeometricNode> &  ) const) static_cast<void (RWStepFEA_RWGeometricNode::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_GeometricNode> &  ) const>(&RWStepFEA_RWGeometricNode::WriteStep),
             R"#(Writes GeometricNode)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWGeometricNode::*)( const opencascade::handle<StepFEA_GeometricNode> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWGeometricNode::*)( const opencascade::handle<StepFEA_GeometricNode> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWGeometricNode::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNode , shared_ptr<RWStepFEA_RWNode>  >>(m.attr("RWStepFEA_RWNode"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWNode::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_Node> &  ) const) static_cast<void (RWStepFEA_RWNode::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_Node> &  ) const>(&RWStepFEA_RWNode::ReadStep),
             R"#(Reads Node)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWNode::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_Node> &  ) const) static_cast<void (RWStepFEA_RWNode::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_Node> &  ) const>(&RWStepFEA_RWNode::WriteStep),
             R"#(Writes Node)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWNode::*)( const opencascade::handle<StepFEA_Node> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWNode::*)( const opencascade::handle<StepFEA_Node> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWNode::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeDefinition , shared_ptr<RWStepFEA_RWNodeDefinition>  >>(m.attr("RWStepFEA_RWNodeDefinition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWNodeDefinition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeDefinition> &  ) const) static_cast<void (RWStepFEA_RWNodeDefinition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeDefinition> &  ) const>(&RWStepFEA_RWNodeDefinition::ReadStep),
             R"#(Reads NodeDefinition)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWNodeDefinition::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeDefinition> &  ) const) static_cast<void (RWStepFEA_RWNodeDefinition::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeDefinition> &  ) const>(&RWStepFEA_RWNodeDefinition::WriteStep),
             R"#(Writes NodeDefinition)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWNodeDefinition::*)( const opencascade::handle<StepFEA_NodeDefinition> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWNodeDefinition::*)( const opencascade::handle<StepFEA_NodeDefinition> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWNodeDefinition::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeGroup , shared_ptr<RWStepFEA_RWNodeGroup>  >>(m.attr("RWStepFEA_RWNodeGroup"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWNodeGroup::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeGroup> &  ) const) static_cast<void (RWStepFEA_RWNodeGroup::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeGroup> &  ) const>(&RWStepFEA_RWNodeGroup::ReadStep),
             R"#(Reads NodeGroup)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWNodeGroup::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeGroup> &  ) const) static_cast<void (RWStepFEA_RWNodeGroup::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeGroup> &  ) const>(&RWStepFEA_RWNodeGroup::WriteStep),
             R"#(Writes NodeGroup)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWNodeGroup::*)( const opencascade::handle<StepFEA_NodeGroup> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWNodeGroup::*)( const opencascade::handle<StepFEA_NodeGroup> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWNodeGroup::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeRepresentation , shared_ptr<RWStepFEA_RWNodeRepresentation>  >>(m.attr("RWStepFEA_RWNodeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWNodeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeRepresentation> &  ) const) static_cast<void (RWStepFEA_RWNodeRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeRepresentation> &  ) const>(&RWStepFEA_RWNodeRepresentation::ReadStep),
             R"#(Reads NodeRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWNodeRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeRepresentation> &  ) const) static_cast<void (RWStepFEA_RWNodeRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeRepresentation> &  ) const>(&RWStepFEA_RWNodeRepresentation::WriteStep),
             R"#(Writes NodeRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWNodeRepresentation::*)( const opencascade::handle<StepFEA_NodeRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWNodeRepresentation::*)( const opencascade::handle<StepFEA_NodeRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWNodeRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeSet , shared_ptr<RWStepFEA_RWNodeSet>  >>(m.attr("RWStepFEA_RWNodeSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWNodeSet::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeSet> &  ) const) static_cast<void (RWStepFEA_RWNodeSet::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeSet> &  ) const>(&RWStepFEA_RWNodeSet::ReadStep),
             R"#(Reads NodeSet)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWNodeSet::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeSet> &  ) const) static_cast<void (RWStepFEA_RWNodeSet::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeSet> &  ) const>(&RWStepFEA_RWNodeSet::WriteStep),
             R"#(Writes NodeSet)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWNodeSet::*)( const opencascade::handle<StepFEA_NodeSet> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWNodeSet::*)( const opencascade::handle<StepFEA_NodeSet> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWNodeSet::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeWithSolutionCoordinateSystem , shared_ptr<RWStepFEA_RWNodeWithSolutionCoordinateSystem>  >>(m.attr("RWStepFEA_RWNodeWithSolutionCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWNodeWithSolutionCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeWithSolutionCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWNodeWithSolutionCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeWithSolutionCoordinateSystem> &  ) const>(&RWStepFEA_RWNodeWithSolutionCoordinateSystem::ReadStep),
             R"#(Reads NodeWithSolutionCoordinateSystem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWNodeWithSolutionCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeWithSolutionCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWNodeWithSolutionCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeWithSolutionCoordinateSystem> &  ) const>(&RWStepFEA_RWNodeWithSolutionCoordinateSystem::WriteStep),
             R"#(Writes NodeWithSolutionCoordinateSystem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWNodeWithSolutionCoordinateSystem::*)( const opencascade::handle<StepFEA_NodeWithSolutionCoordinateSystem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWNodeWithSolutionCoordinateSystem::*)( const opencascade::handle<StepFEA_NodeWithSolutionCoordinateSystem> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWNodeWithSolutionCoordinateSystem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeWithVector , shared_ptr<RWStepFEA_RWNodeWithVector>  >>(m.attr("RWStepFEA_RWNodeWithVector"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWNodeWithVector::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeWithVector> &  ) const) static_cast<void (RWStepFEA_RWNodeWithVector::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_NodeWithVector> &  ) const>(&RWStepFEA_RWNodeWithVector::ReadStep),
             R"#(Reads NodeWithVector)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWNodeWithVector::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeWithVector> &  ) const) static_cast<void (RWStepFEA_RWNodeWithVector::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_NodeWithVector> &  ) const>(&RWStepFEA_RWNodeWithVector::WriteStep),
             R"#(Writes NodeWithVector)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWNodeWithVector::*)( const opencascade::handle<StepFEA_NodeWithVector> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWNodeWithVector::*)( const opencascade::handle<StepFEA_NodeWithVector> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWNodeWithVector::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWParametricCurve3dElementCoordinateDirection , shared_ptr<RWStepFEA_RWParametricCurve3dElementCoordinateDirection>  >>(m.attr("RWStepFEA_RWParametricCurve3dElementCoordinateDirection"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWParametricCurve3dElementCoordinateDirection::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> &  ) const) static_cast<void (RWStepFEA_RWParametricCurve3dElementCoordinateDirection::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> &  ) const>(&RWStepFEA_RWParametricCurve3dElementCoordinateDirection::ReadStep),
             R"#(Reads ParametricCurve3dElementCoordinateDirection)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWParametricCurve3dElementCoordinateDirection::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> &  ) const) static_cast<void (RWStepFEA_RWParametricCurve3dElementCoordinateDirection::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> &  ) const>(&RWStepFEA_RWParametricCurve3dElementCoordinateDirection::WriteStep),
             R"#(Writes ParametricCurve3dElementCoordinateDirection)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWParametricCurve3dElementCoordinateDirection::*)( const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWParametricCurve3dElementCoordinateDirection::*)( const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWParametricCurve3dElementCoordinateDirection::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWParametricCurve3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWParametricCurve3dElementCoordinateSystem>  >>(m.attr("RWStepFEA_RWParametricCurve3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWParametricCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWParametricCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWParametricCurve3dElementCoordinateSystem::ReadStep),
             R"#(Reads ParametricCurve3dElementCoordinateSystem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWParametricCurve3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWParametricCurve3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWParametricCurve3dElementCoordinateSystem::WriteStep),
             R"#(Writes ParametricCurve3dElementCoordinateSystem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWParametricCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWParametricCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWParametricCurve3dElementCoordinateSystem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWParametricSurface3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWParametricSurface3dElementCoordinateSystem>  >>(m.attr("RWStepFEA_RWParametricSurface3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWParametricSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ParametricSurface3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWParametricSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_ParametricSurface3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWParametricSurface3dElementCoordinateSystem::ReadStep),
             R"#(Reads ParametricSurface3dElementCoordinateSystem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWParametricSurface3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ParametricSurface3dElementCoordinateSystem> &  ) const) static_cast<void (RWStepFEA_RWParametricSurface3dElementCoordinateSystem::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_ParametricSurface3dElementCoordinateSystem> &  ) const>(&RWStepFEA_RWParametricSurface3dElementCoordinateSystem::WriteStep),
             R"#(Writes ParametricSurface3dElementCoordinateSystem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWParametricSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_ParametricSurface3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWParametricSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_ParametricSurface3dElementCoordinateSystem> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWParametricSurface3dElementCoordinateSystem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWSurface3dElementRepresentation , shared_ptr<RWStepFEA_RWSurface3dElementRepresentation>  >>(m.attr("RWStepFEA_RWSurface3dElementRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWSurface3dElementRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_Surface3dElementRepresentation> &  ) const) static_cast<void (RWStepFEA_RWSurface3dElementRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_Surface3dElementRepresentation> &  ) const>(&RWStepFEA_RWSurface3dElementRepresentation::ReadStep),
             R"#(Reads Surface3dElementRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWSurface3dElementRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_Surface3dElementRepresentation> &  ) const) static_cast<void (RWStepFEA_RWSurface3dElementRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_Surface3dElementRepresentation> &  ) const>(&RWStepFEA_RWSurface3dElementRepresentation::WriteStep),
             R"#(Writes Surface3dElementRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWSurface3dElementRepresentation::*)( const opencascade::handle<StepFEA_Surface3dElementRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWSurface3dElementRepresentation::*)( const opencascade::handle<StepFEA_Surface3dElementRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWSurface3dElementRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWVolume3dElementRepresentation , shared_ptr<RWStepFEA_RWVolume3dElementRepresentation>  >>(m.attr("RWStepFEA_RWVolume3dElementRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ReadStep",
             (void (RWStepFEA_RWVolume3dElementRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_Volume3dElementRepresentation> &  ) const) static_cast<void (RWStepFEA_RWVolume3dElementRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepFEA_Volume3dElementRepresentation> &  ) const>(&RWStepFEA_RWVolume3dElementRepresentation::ReadStep),
             R"#(Reads Volume3dElementRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepFEA_RWVolume3dElementRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_Volume3dElementRepresentation> &  ) const) static_cast<void (RWStepFEA_RWVolume3dElementRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepFEA_Volume3dElementRepresentation> &  ) const>(&RWStepFEA_RWVolume3dElementRepresentation::WriteStep),
             R"#(Writes Volume3dElementRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepFEA_RWVolume3dElementRepresentation::*)( const opencascade::handle<StepFEA_Volume3dElementRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepFEA_RWVolume3dElementRepresentation::*)( const opencascade::handle<StepFEA_Volume3dElementRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepFEA_RWVolume3dElementRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/RWStepFEA_RWAlignedSurface3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWCurve3dElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWCurveElementEndOffset.hxx
// ./opencascade/RWStepFEA_RWCurve3dElementProperty.hxx
// ./opencascade/RWStepFEA_RWElementGroup.hxx
// ./opencascade/RWStepFEA_RWFeaGroup.hxx
// ./opencascade/RWStepFEA_RWFeaMaterialPropertyRepresentation.hxx
// ./opencascade/RWStepFEA_RWConstantSurface3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWNodeWithSolutionCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWFeaAxis2Placement3d.hxx
// ./opencascade/RWStepFEA_RWFeaMassDensity.hxx
// ./opencascade/RWStepFEA_RWFreedomsList.hxx
// ./opencascade/RWStepFEA_RWFeaShellBendingStiffness.hxx
// ./opencascade/RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/RWStepFEA_RWFeaModel3d.hxx
// ./opencascade/RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWDummyNode.hxx
// ./opencascade/RWStepFEA_RWNodeWithVector.hxx
// ./opencascade/RWStepFEA_RWFeaAreaDensity.hxx
// ./opencascade/RWStepFEA_RWFeaShellMembraneStiffness.hxx
// ./opencascade/RWStepFEA_RWNode.hxx
// ./opencascade/RWStepFEA_RWFeaModelDefinition.hxx
// ./opencascade/RWStepFEA_RWFeaCurveSectionGeometricRelationship.hxx
// ./opencascade/RWStepFEA_RWElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWFreedomAndCoefficient.hxx
// ./opencascade/RWStepFEA_RWParametricCurve3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWElementGeometricRelationship.hxx
// ./opencascade/RWStepFEA_RWAlignedCurve3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness.hxx
// ./opencascade/RWStepFEA_RWCurveElementLocation.hxx
// ./opencascade/RWStepFEA_RWCurveElementIntervalConstant.hxx
// ./opencascade/RWStepFEA_RWNodeDefinition.hxx
// ./opencascade/RWStepFEA_RWFeaMaterialPropertyRepresentationItem.hxx
// ./opencascade/RWStepFEA_RWParametricSurface3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWFeaModel.hxx
// ./opencascade/RWStepFEA_RWCurveElementIntervalLinearlyVarying.hxx
// ./opencascade/RWStepFEA_RWFeaSurfaceSectionGeometricRelationship.hxx
// ./opencascade/RWStepFEA_RWCurveElementInterval.hxx
// ./opencascade/RWStepFEA_RWNodeGroup.hxx
// ./opencascade/RWStepFEA_RWFeaShellShearStiffness.hxx
// ./opencascade/RWStepFEA_RWNodeRepresentation.hxx
// ./opencascade/RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/RWStepFEA_RWFeaParametricPoint.hxx
// ./opencascade/RWStepFEA_RWFeaMoistureAbsorption.hxx
// ./opencascade/RWStepFEA_RWFeaLinearElasticity.hxx
// ./opencascade/RWStepFEA_RWNodeSet.hxx
// ./opencascade/RWStepFEA_RWVolume3dElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWGeometricNode.hxx
// ./opencascade/RWStepFEA_RWParametricCurve3dElementCoordinateDirection.hxx
// ./opencascade/RWStepFEA_RWFeaRepresentationItem.hxx
// ./opencascade/RWStepFEA_RWSurface3dElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWCurveElementEndRelease.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
