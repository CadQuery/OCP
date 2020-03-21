
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
#include <StepFEA_FeaParametricPoint.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_GeometricNode.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementEndOffset.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ParametricSurface3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementInterval.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Volume3dElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaSurfaceSectionGeometricRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ElementGeometricRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellMembraneStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaModelDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaAreaDensity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementIntervalConstant.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellShearStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_DummyNode.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementEndRelease.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMassDensity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeWithVector.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaCurveSectionGeometricRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FreedomsList.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMoistureAbsorption.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaShellBendingStiffness.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaLinearElasticity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeSet.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaSecantCoefficientOfLinearThermalExpansion.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementIntervalLinearlyVarying.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FeaRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_FreedomAndCoefficient.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_NodeWithSolutionCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Surface3dElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_AlignedSurface3dElementCoordinateSystem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Node.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_ConstantSurface3dElementCoordinateSystem.hxx>
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


    static_cast<py::class_<RWStepFEA_RWAlignedCurve3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWAlignedCurve3dElementCoordinateSystem> >>(m.attr("RWStepFEA_RWAlignedCurve3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWAlignedSurface3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWAlignedSurface3dElementCoordinateSystem> >>(m.attr("RWStepFEA_RWAlignedSurface3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem> >>(m.attr("RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWConstantSurface3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWConstantSurface3dElementCoordinateSystem> >>(m.attr("RWStepFEA_RWConstantSurface3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurve3dElementProperty , shared_ptr<RWStepFEA_RWCurve3dElementProperty> >>(m.attr("RWStepFEA_RWCurve3dElementProperty"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurve3dElementRepresentation , shared_ptr<RWStepFEA_RWCurve3dElementRepresentation> >>(m.attr("RWStepFEA_RWCurve3dElementRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementEndOffset , shared_ptr<RWStepFEA_RWCurveElementEndOffset> >>(m.attr("RWStepFEA_RWCurveElementEndOffset"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementEndRelease , shared_ptr<RWStepFEA_RWCurveElementEndRelease> >>(m.attr("RWStepFEA_RWCurveElementEndRelease"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementInterval , shared_ptr<RWStepFEA_RWCurveElementInterval> >>(m.attr("RWStepFEA_RWCurveElementInterval"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementIntervalConstant , shared_ptr<RWStepFEA_RWCurveElementIntervalConstant> >>(m.attr("RWStepFEA_RWCurveElementIntervalConstant"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementIntervalLinearlyVarying , shared_ptr<RWStepFEA_RWCurveElementIntervalLinearlyVarying> >>(m.attr("RWStepFEA_RWCurveElementIntervalLinearlyVarying"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWCurveElementLocation , shared_ptr<RWStepFEA_RWCurveElementLocation> >>(m.attr("RWStepFEA_RWCurveElementLocation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWDummyNode , shared_ptr<RWStepFEA_RWDummyNode> >>(m.attr("RWStepFEA_RWDummyNode"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWElementGeometricRelationship , shared_ptr<RWStepFEA_RWElementGeometricRelationship> >>(m.attr("RWStepFEA_RWElementGeometricRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWElementGroup , shared_ptr<RWStepFEA_RWElementGroup> >>(m.attr("RWStepFEA_RWElementGroup"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWElementRepresentation , shared_ptr<RWStepFEA_RWElementRepresentation> >>(m.attr("RWStepFEA_RWElementRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaAreaDensity , shared_ptr<RWStepFEA_RWFeaAreaDensity> >>(m.attr("RWStepFEA_RWFeaAreaDensity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaAxis2Placement3d , shared_ptr<RWStepFEA_RWFeaAxis2Placement3d> >>(m.attr("RWStepFEA_RWFeaAxis2Placement3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaCurveSectionGeometricRelationship , shared_ptr<RWStepFEA_RWFeaCurveSectionGeometricRelationship> >>(m.attr("RWStepFEA_RWFeaCurveSectionGeometricRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaGroup , shared_ptr<RWStepFEA_RWFeaGroup> >>(m.attr("RWStepFEA_RWFeaGroup"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaLinearElasticity , shared_ptr<RWStepFEA_RWFeaLinearElasticity> >>(m.attr("RWStepFEA_RWFeaLinearElasticity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaMassDensity , shared_ptr<RWStepFEA_RWFeaMassDensity> >>(m.attr("RWStepFEA_RWFeaMassDensity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaMaterialPropertyRepresentation , shared_ptr<RWStepFEA_RWFeaMaterialPropertyRepresentation> >>(m.attr("RWStepFEA_RWFeaMaterialPropertyRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaMaterialPropertyRepresentationItem , shared_ptr<RWStepFEA_RWFeaMaterialPropertyRepresentationItem> >>(m.attr("RWStepFEA_RWFeaMaterialPropertyRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaModel , shared_ptr<RWStepFEA_RWFeaModel> >>(m.attr("RWStepFEA_RWFeaModel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaModel3d , shared_ptr<RWStepFEA_RWFeaModel3d> >>(m.attr("RWStepFEA_RWFeaModel3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaModelDefinition , shared_ptr<RWStepFEA_RWFeaModelDefinition> >>(m.attr("RWStepFEA_RWFeaModelDefinition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaMoistureAbsorption , shared_ptr<RWStepFEA_RWFeaMoistureAbsorption> >>(m.attr("RWStepFEA_RWFeaMoistureAbsorption"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaParametricPoint , shared_ptr<RWStepFEA_RWFeaParametricPoint> >>(m.attr("RWStepFEA_RWFeaParametricPoint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaRepresentationItem , shared_ptr<RWStepFEA_RWFeaRepresentationItem> >>(m.attr("RWStepFEA_RWFeaRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion , shared_ptr<RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion> >>(m.attr("RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaShellBendingStiffness , shared_ptr<RWStepFEA_RWFeaShellBendingStiffness> >>(m.attr("RWStepFEA_RWFeaShellBendingStiffness"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness , shared_ptr<RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness> >>(m.attr("RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaShellMembraneStiffness , shared_ptr<RWStepFEA_RWFeaShellMembraneStiffness> >>(m.attr("RWStepFEA_RWFeaShellMembraneStiffness"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaShellShearStiffness , shared_ptr<RWStepFEA_RWFeaShellShearStiffness> >>(m.attr("RWStepFEA_RWFeaShellShearStiffness"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaSurfaceSectionGeometricRelationship , shared_ptr<RWStepFEA_RWFeaSurfaceSectionGeometricRelationship> >>(m.attr("RWStepFEA_RWFeaSurfaceSectionGeometricRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion , shared_ptr<RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion> >>(m.attr("RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFreedomAndCoefficient , shared_ptr<RWStepFEA_RWFreedomAndCoefficient> >>(m.attr("RWStepFEA_RWFreedomAndCoefficient"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWFreedomsList , shared_ptr<RWStepFEA_RWFreedomsList> >>(m.attr("RWStepFEA_RWFreedomsList"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWGeometricNode , shared_ptr<RWStepFEA_RWGeometricNode> >>(m.attr("RWStepFEA_RWGeometricNode"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNode , shared_ptr<RWStepFEA_RWNode> >>(m.attr("RWStepFEA_RWNode"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeDefinition , shared_ptr<RWStepFEA_RWNodeDefinition> >>(m.attr("RWStepFEA_RWNodeDefinition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeGroup , shared_ptr<RWStepFEA_RWNodeGroup> >>(m.attr("RWStepFEA_RWNodeGroup"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeRepresentation , shared_ptr<RWStepFEA_RWNodeRepresentation> >>(m.attr("RWStepFEA_RWNodeRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeSet , shared_ptr<RWStepFEA_RWNodeSet> >>(m.attr("RWStepFEA_RWNodeSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeWithSolutionCoordinateSystem , shared_ptr<RWStepFEA_RWNodeWithSolutionCoordinateSystem> >>(m.attr("RWStepFEA_RWNodeWithSolutionCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWNodeWithVector , shared_ptr<RWStepFEA_RWNodeWithVector> >>(m.attr("RWStepFEA_RWNodeWithVector"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWParametricCurve3dElementCoordinateDirection , shared_ptr<RWStepFEA_RWParametricCurve3dElementCoordinateDirection> >>(m.attr("RWStepFEA_RWParametricCurve3dElementCoordinateDirection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWParametricCurve3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWParametricCurve3dElementCoordinateSystem> >>(m.attr("RWStepFEA_RWParametricCurve3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWParametricSurface3dElementCoordinateSystem , shared_ptr<RWStepFEA_RWParametricSurface3dElementCoordinateSystem> >>(m.attr("RWStepFEA_RWParametricSurface3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWSurface3dElementRepresentation , shared_ptr<RWStepFEA_RWSurface3dElementRepresentation> >>(m.attr("RWStepFEA_RWSurface3dElementRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepFEA_RWVolume3dElementRepresentation , shared_ptr<RWStepFEA_RWVolume3dElementRepresentation> >>(m.attr("RWStepFEA_RWVolume3dElementRepresentation"))
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
// ./opencascade/RWStepFEA_RWFeaParametricPoint.hxx
// ./opencascade/RWStepFEA_RWGeometricNode.hxx
// ./opencascade/RWStepFEA_RWNodeDefinition.hxx
// ./opencascade/RWStepFEA_RWCurve3dElementProperty.hxx
// ./opencascade/RWStepFEA_RWParametricCurve3dElementCoordinateDirection.hxx
// ./opencascade/RWStepFEA_RWFeaAxis2Placement3d.hxx
// ./opencascade/RWStepFEA_RWCurveElementEndOffset.hxx
// ./opencascade/RWStepFEA_RWParametricSurface3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWNodeGroup.hxx
// ./opencascade/RWStepFEA_RWElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWFeaModel3d.hxx
// ./opencascade/RWStepFEA_RWCurveElementInterval.hxx
// ./opencascade/RWStepFEA_RWVolume3dElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWFeaSurfaceSectionGeometricRelationship.hxx
// ./opencascade/RWStepFEA_RWElementGeometricRelationship.hxx
// ./opencascade/RWStepFEA_RWFeaShellMembraneStiffness.hxx
// ./opencascade/RWStepFEA_RWFeaModelDefinition.hxx
// ./opencascade/RWStepFEA_RWFeaShellMembraneBendingCouplingStiffness.hxx
// ./opencascade/RWStepFEA_RWFeaAreaDensity.hxx
// ./opencascade/RWStepFEA_RWCurveElementIntervalConstant.hxx
// ./opencascade/RWStepFEA_RWFeaTangentialCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/RWStepFEA_RWFeaModel.hxx
// ./opencascade/RWStepFEA_RWFeaShellShearStiffness.hxx
// ./opencascade/RWStepFEA_RWDummyNode.hxx
// ./opencascade/RWStepFEA_RWArbitraryVolume3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWCurveElementEndRelease.hxx
// ./opencascade/RWStepFEA_RWFeaMaterialPropertyRepresentation.hxx
// ./opencascade/RWStepFEA_RWCurve3dElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWFeaMassDensity.hxx
// ./opencascade/RWStepFEA_RWNodeWithVector.hxx
// ./opencascade/RWStepFEA_RWFeaCurveSectionGeometricRelationship.hxx
// ./opencascade/RWStepFEA_RWFreedomsList.hxx
// ./opencascade/RWStepFEA_RWFeaGroup.hxx
// ./opencascade/RWStepFEA_RWFeaMoistureAbsorption.hxx
// ./opencascade/RWStepFEA_RWFeaShellBendingStiffness.hxx
// ./opencascade/RWStepFEA_RWFeaLinearElasticity.hxx
// ./opencascade/RWStepFEA_RWAlignedCurve3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWFeaMaterialPropertyRepresentationItem.hxx
// ./opencascade/RWStepFEA_RWNodeSet.hxx
// ./opencascade/RWStepFEA_RWNodeRepresentation.hxx
// ./opencascade/RWStepFEA_RWFeaSecantCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/RWStepFEA_RWElementGroup.hxx
// ./opencascade/RWStepFEA_RWCurveElementIntervalLinearlyVarying.hxx
// ./opencascade/RWStepFEA_RWCurveElementLocation.hxx
// ./opencascade/RWStepFEA_RWParametricCurve3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWFeaRepresentationItem.hxx
// ./opencascade/RWStepFEA_RWFreedomAndCoefficient.hxx
// ./opencascade/RWStepFEA_RWNodeWithSolutionCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWSurface3dElementRepresentation.hxx
// ./opencascade/RWStepFEA_RWAlignedSurface3dElementCoordinateSystem.hxx
// ./opencascade/RWStepFEA_RWNode.hxx
// ./opencascade/RWStepFEA_RWConstantSurface3dElementCoordinateSystem.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
