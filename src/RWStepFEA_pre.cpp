
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
void register_RWStepFEA_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStepFEA", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStepFEA_RWAlignedCurve3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWAlignedCurve3dElementCoordinateSystem>  >(m,"RWStepFEA_RWAlignedCurve3dElementCoordinateSystem",R"#(Read & Write tool for AlignedCurve3dElementCoordinateSystem)#");
    py::class_<RWStepFEA_RWAlignedSurface3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWAlignedSurface3dElementCoordinateSystem>  >(m,"RWStepFEA_RWAlignedSurface3dElementCoordinateSystem",R"#(Read & Write tool for AlignedSurface3dElementCoordinateSystem)#");
    py::class_<RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem>  >(m,"RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem",R"#(Read & Write tool for ArbitraryVolume3dElementCoordinateSystem)#");
    py::class_<RWStepFEA_RWConstantSurface3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWConstantSurface3dElementCoordinateSystem>  >(m,"RWStepFEA_RWConstantSurface3dElementCoordinateSystem",R"#(Read & Write tool for ConstantSurface3dElementCoordinateSystem)#");
    py::class_<RWStepFEA_RWCurve3dElementProperty , shared_ptr<RWStepFEA_RWCurve3dElementProperty>  >(m,"RWStepFEA_RWCurve3dElementProperty",R"#(Read & Write tool for Curve3dElementProperty)#");
    py::class_<RWStepFEA_RWCurve3dElementRepresentation , shared_ptr<RWStepFEA_RWCurve3dElementRepresentation>  >(m,"RWStepFEA_RWCurve3dElementRepresentation",R"#(Read & Write tool for Curve3dElementRepresentation)#");
    py::class_<RWStepFEA_RWCurveElementEndOffset , shared_ptr<RWStepFEA_RWCurveElementEndOffset>  >(m,"RWStepFEA_RWCurveElementEndOffset",R"#(Read & Write tool for CurveElementEndOffset)#");
    py::class_<RWStepFEA_RWCurveElementEndRelease , shared_ptr<RWStepFEA_RWCurveElementEndRelease>  >(m,"RWStepFEA_RWCurveElementEndRelease",R"#(Read & Write tool for CurveElementEndRelease)#");
    py::class_<RWStepFEA_RWCurveElementInterval , shared_ptr<RWStepFEA_RWCurveElementInterval>  >(m,"RWStepFEA_RWCurveElementInterval",R"#(Read & Write tool for CurveElementInterval)#");
    py::class_<RWStepFEA_RWCurveElementIntervalConstant , shared_ptr<RWStepFEA_RWCurveElementIntervalConstant>  >(m,"RWStepFEA_RWCurveElementIntervalConstant",R"#(Read & Write tool for CurveElementIntervalConstant)#");
    py::class_<RWStepFEA_RWCurveElementIntervalLinearlyVarying , shared_ptr<RWStepFEA_RWCurveElementIntervalLinearlyVarying>  >(m,"RWStepFEA_RWCurveElementIntervalLinearlyVarying",R"#(Read & Write tool for CurveElementIntervalLinearlyVarying)#");
    py::class_<RWStepFEA_RWCurveElementLocation , shared_ptr<RWStepFEA_RWCurveElementLocation>  >(m,"RWStepFEA_RWCurveElementLocation",R"#(Read & Write tool for CurveElementLocation)#");
    py::class_<RWStepFEA_RWDummyNode , shared_ptr<RWStepFEA_RWDummyNode>  >(m,"RWStepFEA_RWDummyNode",R"#(Read & Write tool for DummyNode)#");
    py::class_<RWStepFEA_RWElementGeometricRelationship , shared_ptr<RWStepFEA_RWElementGeometricRelationship>  >(m,"RWStepFEA_RWElementGeometricRelationship",R"#(Read & Write tool for ElementGeometricRelationship)#");
    py::class_<RWStepFEA_RWElementGroup , shared_ptr<RWStepFEA_RWElementGroup>  >(m,"RWStepFEA_RWElementGroup",R"#(Read & Write tool for ElementGroup)#");
    py::class_<RWStepFEA_RWElementRepresentation , shared_ptr<RWStepFEA_RWElementRepresentation>  >(m,"RWStepFEA_RWElementRepresentation",R"#(Read & Write tool for ElementRepresentation)#");
    py::class_<RWStepFEA_RWFeaAreaDensity , shared_ptr<RWStepFEA_RWFeaAreaDensity>  >(m,"RWStepFEA_RWFeaAreaDensity",R"#(Read & Write tool for FeaAreaDensity)#");
    py::class_<RWStepFEA_RWFeaAxis2Placement3d , shared_ptr<RWStepFEA_RWFeaAxis2Placement3d>  >(m,"RWStepFEA_RWFeaAxis2Placement3d",R"#(Read & Write tool for FeaAxis2Placement3d)#");
    py::class_<RWStepFEA_RWFeaCurveSectionGeometricRelationship , shared_ptr<RWStepFEA_RWFeaCurveSectionGeometricRelationship>  >(m,"RWStepFEA_RWFeaCurveSectionGeometricRelationship",R"#(Read & Write tool for FeaCurveSectionGeometricRelationship)#");
    py::class_<RWStepFEA_RWFeaGroup , shared_ptr<RWStepFEA_RWFeaGroup>  >(m,"RWStepFEA_RWFeaGroup",R"#(Read & Write tool for FeaGroup)#");
    py::class_<RWStepFEA_RWFeaLinearElasticity , shared_ptr<RWStepFEA_RWFeaLinearElasticity>  >(m,"RWStepFEA_RWFeaLinearElasticity",R"#(Read & Write tool for FeaLinearElasticity)#");
    py::class_<RWStepFEA_RWFeaMassDensity , shared_ptr<RWStepFEA_RWFeaMassDensity>  >(m,"RWStepFEA_RWFeaMassDensity",R"#(Read & Write tool for FeaMassDensity)#");
    py::class_<RWStepFEA_RWFeaMaterialPropertyRepresentation , shared_ptr<RWStepFEA_RWFeaMaterialPropertyRepresentation>  >(m,"RWStepFEA_RWFeaMaterialPropertyRepresentation",R"#(Read & Write tool for FeaMaterialPropertyRepresentation)#");
    py::class_<RWStepFEA_RWFeaMaterialPropertyRepresentationItem , shared_ptr<RWStepFEA_RWFeaMaterialPropertyRepresentationItem>  >(m,"RWStepFEA_RWFeaMaterialPropertyRepresentationItem",R"#(Read & Write tool for FeaMaterialPropertyRepresentationItem)#");
    py::class_<RWStepFEA_RWFeaModel , shared_ptr<RWStepFEA_RWFeaModel>  >(m,"RWStepFEA_RWFeaModel",R"#(Read & Write tool for FeaModel)#");
    py::class_<RWStepFEA_RWFeaModel3d , shared_ptr<RWStepFEA_RWFeaModel3d>  >(m,"RWStepFEA_RWFeaModel3d",R"#(Read & Write tool for FeaModel3d)#");
    py::class_<RWStepFEA_RWFeaModelDefinition , shared_ptr<RWStepFEA_RWFeaModelDefinition>  >(m,"RWStepFEA_RWFeaModelDefinition",R"#(Read & Write tool for FeaModelDefinition)#");
    py::class_<RWStepFEA_RWFeaMoistureAbsorption , shared_ptr<RWStepFEA_RWFeaMoistureAbsorption>  >(m,"RWStepFEA_RWFeaMoistureAbsorption",R"#(Read & Write tool for FeaMoistureAbsorption)#");
    py::class_<RWStepFEA_RWFeaParametricPoint , shared_ptr<RWStepFEA_RWFeaParametricPoint>  >(m,"RWStepFEA_RWFeaParametricPoint",R"#(Read & Write tool for FeaParametricPoint)#");
    py::class_<RWStepFEA_RWFeaRepresentationItem , shared_ptr<RWStepFEA_RWFeaRepresentationItem>  >(m,"RWStepFEA_RWFeaRepresentationItem",R"#(Read & Write tool for FeaRepresentationItem)#");
    py::class_<RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion , shared_ptr<RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion>  >(m,"RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion",R"#(Read & Write tool for FeaSecantCoefficientOfLinearThermalExpansion)#");
    py::class_<RWStepFEA_RWFeaShellBendingStiffness , shared_ptr<RWStepFEA_RWFeaShellBendingStiffness>  >(m,"RWStepFEA_RWFeaShellBendingStiffness",R"#(Read & Write tool for FeaShellBendingStiffness)#");
    py::class_<RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness , shared_ptr<RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness>  >(m,"RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness",R"#(Read & Write tool for FeaShellMembraneBendingCouplingStiffness)#");
    py::class_<RWStepFEA_RWFeaShellMembraneStiffness , shared_ptr<RWStepFEA_RWFeaShellMembraneStiffness>  >(m,"RWStepFEA_RWFeaShellMembraneStiffness",R"#(Read & Write tool for FeaShellMembraneStiffness)#");
    py::class_<RWStepFEA_RWFeaShellShearStiffness , shared_ptr<RWStepFEA_RWFeaShellShearStiffness>  >(m,"RWStepFEA_RWFeaShellShearStiffness",R"#(Read & Write tool for FeaShellShearStiffness)#");
    py::class_<RWStepFEA_RWFeaSurfaceSectionGeometricRelationship , shared_ptr<RWStepFEA_RWFeaSurfaceSectionGeometricRelationship>  >(m,"RWStepFEA_RWFeaSurfaceSectionGeometricRelationship",R"#(Read & Write tool for FeaSurfaceSectionGeometricRelationship)#");
    py::class_<RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion , shared_ptr<RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion>  >(m,"RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion",R"#(Read & Write tool for FeaTangentialCoefficientOfLinearThermalExpansion)#");
    py::class_<RWStepFEA_RWFreedomAndCoefficient , shared_ptr<RWStepFEA_RWFreedomAndCoefficient>  >(m,"RWStepFEA_RWFreedomAndCoefficient",R"#(Read & Write tool for FreedomAndCoefficient)#");
    py::class_<RWStepFEA_RWFreedomsList , shared_ptr<RWStepFEA_RWFreedomsList>  >(m,"RWStepFEA_RWFreedomsList",R"#(Read & Write tool for FreedomsList)#");
    py::class_<RWStepFEA_RWGeometricNode , shared_ptr<RWStepFEA_RWGeometricNode>  >(m,"RWStepFEA_RWGeometricNode",R"#(Read & Write tool for GeometricNode)#");
    py::class_<RWStepFEA_RWNode , shared_ptr<RWStepFEA_RWNode>  >(m,"RWStepFEA_RWNode",R"#(Read & Write tool for Node)#");
    py::class_<RWStepFEA_RWNodeDefinition , shared_ptr<RWStepFEA_RWNodeDefinition>  >(m,"RWStepFEA_RWNodeDefinition",R"#(Read & Write tool for NodeDefinition)#");
    py::class_<RWStepFEA_RWNodeGroup , shared_ptr<RWStepFEA_RWNodeGroup>  >(m,"RWStepFEA_RWNodeGroup",R"#(Read & Write tool for NodeGroup)#");
    py::class_<RWStepFEA_RWNodeRepresentation , shared_ptr<RWStepFEA_RWNodeRepresentation>  >(m,"RWStepFEA_RWNodeRepresentation",R"#(Read & Write tool for NodeRepresentation)#");
    py::class_<RWStepFEA_RWNodeSet , shared_ptr<RWStepFEA_RWNodeSet>  >(m,"RWStepFEA_RWNodeSet",R"#(Read & Write tool for NodeSet)#");
    py::class_<RWStepFEA_RWNodeWithSolutionCoordinateSystem , shared_ptr<RWStepFEA_RWNodeWithSolutionCoordinateSystem>  >(m,"RWStepFEA_RWNodeWithSolutionCoordinateSystem",R"#(Read & Write tool for NodeWithSolutionCoordinateSystem)#");
    py::class_<RWStepFEA_RWNodeWithVector , shared_ptr<RWStepFEA_RWNodeWithVector>  >(m,"RWStepFEA_RWNodeWithVector",R"#(Read & Write tool for NodeWithVector)#");
    py::class_<RWStepFEA_RWParametricCurve3dElementCoordinateDirection , shared_ptr<RWStepFEA_RWParametricCurve3dElementCoordinateDirection>  >(m,"RWStepFEA_RWParametricCurve3dElementCoordinateDirection",R"#(Read & Write tool for ParametricCurve3dElementCoordinateDirection)#");
    py::class_<RWStepFEA_RWParametricCurve3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWParametricCurve3dElementCoordinateSystem>  >(m,"RWStepFEA_RWParametricCurve3dElementCoordinateSystem",R"#(Read & Write tool for ParametricCurve3dElementCoordinateSystem)#");
    py::class_<RWStepFEA_RWParametricSurface3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWParametricSurface3dElementCoordinateSystem>  >(m,"RWStepFEA_RWParametricSurface3dElementCoordinateSystem",R"#(Read & Write tool for ParametricSurface3dElementCoordinateSystem)#");
    py::class_<RWStepFEA_RWSurface3dElementRepresentation , shared_ptr<RWStepFEA_RWSurface3dElementRepresentation>  >(m,"RWStepFEA_RWSurface3dElementRepresentation",R"#(Read & Write tool for Surface3dElementRepresentation)#");
    py::class_<RWStepFEA_RWVolume3dElementRepresentation , shared_ptr<RWStepFEA_RWVolume3dElementRepresentation>  >(m,"RWStepFEA_RWVolume3dElementRepresentation",R"#(Read & Write tool for Volume3dElementRepresentation)#");

};

// user-defined post-inclusion per module

// user-defined post
