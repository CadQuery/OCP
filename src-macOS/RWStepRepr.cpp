
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
#include <StepRepr_MappedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MakeFromUsageOption.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ContinuosShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ItemDefinedTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompoundRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ValueRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Apex.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompositeShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Representation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MaterialProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MaterialPropertyRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PerpendicularTo.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_GeometricAlignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Tangent.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CharacterizedRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PropertyDefinitionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_IntegerRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_StructuralResponseProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeRepresentationRelationshipWithTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConstructiveGeometryRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DerivedShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_AllAroundShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Extension.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspectDerivingRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationRelationshipWithTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_SpecifiedHigherUsageOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConstructiveGeometryRepresentationRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompositeGroupShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_StructuralResponsePropertyDefinitionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspectTransition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ParallelOffset.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_BetweenShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CentreOfSymmetry.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ParametricRepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DataEnvironment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_QuantifiedAssemblyComponentUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_FeatureForDatumTargetRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompShAspAndDatumFeatAndShAsp.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

// module includes
#include <RWStepRepr_RWAllAroundShapeAspect.hxx>
#include <RWStepRepr_RWApex.hxx>
#include <RWStepRepr_RWAssemblyComponentUsage.hxx>
#include <RWStepRepr_RWAssemblyComponentUsageSubstitute.hxx>
#include <RWStepRepr_RWBetweenShapeAspect.hxx>
#include <RWStepRepr_RWCentreOfSymmetry.hxx>
#include <RWStepRepr_RWCharacterizedRepresentation.hxx>
#include <RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx>
#include <RWStepRepr_RWCompositeGroupShapeAspect.hxx>
#include <RWStepRepr_RWCompositeShapeAspect.hxx>
#include <RWStepRepr_RWCompoundRepresentationItem.hxx>
#include <RWStepRepr_RWCompShAspAndDatumFeatAndShAsp.hxx>
#include <RWStepRepr_RWConfigurationDesign.hxx>
#include <RWStepRepr_RWConfigurationEffectivity.hxx>
#include <RWStepRepr_RWConfigurationItem.hxx>
#include <RWStepRepr_RWConstructiveGeometryRepresentation.hxx>
#include <RWStepRepr_RWConstructiveGeometryRepresentationRelationship.hxx>
#include <RWStepRepr_RWContinuosShapeAspect.hxx>
#include <RWStepRepr_RWDataEnvironment.hxx>
#include <RWStepRepr_RWDefinitionalRepresentation.hxx>
#include <RWStepRepr_RWDerivedShapeAspect.hxx>
#include <RWStepRepr_RWDescriptiveRepresentationItem.hxx>
#include <RWStepRepr_RWExtension.hxx>
#include <RWStepRepr_RWFeatureForDatumTargetRelationship.hxx>
#include <RWStepRepr_RWFunctionallyDefinedTransformation.hxx>
#include <RWStepRepr_RWGeometricAlignment.hxx>
#include <RWStepRepr_RWGlobalUncertaintyAssignedContext.hxx>
#include <RWStepRepr_RWGlobalUnitAssignedContext.hxx>
#include <RWStepRepr_RWIntegerRepresentationItem.hxx>
#include <RWStepRepr_RWItemDefinedTransformation.hxx>
#include <RWStepRepr_RWMakeFromUsageOption.hxx>
#include <RWStepRepr_RWMappedItem.hxx>
#include <RWStepRepr_RWMaterialDesignation.hxx>
#include <RWStepRepr_RWMaterialProperty.hxx>
#include <RWStepRepr_RWMaterialPropertyRepresentation.hxx>
#include <RWStepRepr_RWMeasureRepresentationItem.hxx>
#include <RWStepRepr_RWParallelOffset.hxx>
#include <RWStepRepr_RWParametricRepresentationContext.hxx>
#include <RWStepRepr_RWPerpendicularTo.hxx>
#include <RWStepRepr_RWProductConcept.hxx>
#include <RWStepRepr_RWProductDefinitionShape.hxx>
#include <RWStepRepr_RWPropertyDefinition.hxx>
#include <RWStepRepr_RWPropertyDefinitionRelationship.hxx>
#include <RWStepRepr_RWPropertyDefinitionRepresentation.hxx>
#include <RWStepRepr_RWQuantifiedAssemblyComponentUsage.hxx>
#include <RWStepRepr_RWRepresentation.hxx>
#include <RWStepRepr_RWRepresentationContext.hxx>
#include <RWStepRepr_RWRepresentationItem.hxx>
#include <RWStepRepr_RWRepresentationMap.hxx>
#include <RWStepRepr_RWRepresentationRelationship.hxx>
#include <RWStepRepr_RWRepresentationRelationshipWithTransformation.hxx>
#include <RWStepRepr_RWReprItemAndLengthMeasureWithUnit.hxx>
#include <RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI.hxx>
#include <RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit.hxx>
#include <RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx>
#include <RWStepRepr_RWShapeAspect.hxx>
#include <RWStepRepr_RWShapeAspectDerivingRelationship.hxx>
#include <RWStepRepr_RWShapeAspectRelationship.hxx>
#include <RWStepRepr_RWShapeAspectTransition.hxx>
#include <RWStepRepr_RWShapeRepresentationRelationshipWithTransformation.hxx>
#include <RWStepRepr_RWSpecifiedHigherUsageOccurrence.hxx>
#include <RWStepRepr_RWStructuralResponseProperty.hxx>
#include <RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation.hxx>
#include <RWStepRepr_RWTangent.hxx>
#include <RWStepRepr_RWValueRepresentationItem.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStepRepr(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStepRepr"));


//Python trampoline classes

// classes


    static_cast<py::class_<RWStepRepr_RWAllAroundShapeAspect , shared_ptr<RWStepRepr_RWAllAroundShapeAspect> >>(m.attr("RWStepRepr_RWAllAroundShapeAspect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWApex , shared_ptr<RWStepRepr_RWApex> >>(m.attr("RWStepRepr_RWApex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWAssemblyComponentUsage , shared_ptr<RWStepRepr_RWAssemblyComponentUsage> >>(m.attr("RWStepRepr_RWAssemblyComponentUsage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWAssemblyComponentUsageSubstitute , shared_ptr<RWStepRepr_RWAssemblyComponentUsageSubstitute> >>(m.attr("RWStepRepr_RWAssemblyComponentUsageSubstitute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWBetweenShapeAspect , shared_ptr<RWStepRepr_RWBetweenShapeAspect> >>(m.attr("RWStepRepr_RWBetweenShapeAspect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWCentreOfSymmetry , shared_ptr<RWStepRepr_RWCentreOfSymmetry> >>(m.attr("RWStepRepr_RWCentreOfSymmetry"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWCharacterizedRepresentation , shared_ptr<RWStepRepr_RWCharacterizedRepresentation> >>(m.attr("RWStepRepr_RWCharacterizedRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp , shared_ptr<RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp> >>(m.attr("RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWCompShAspAndDatumFeatAndShAsp , shared_ptr<RWStepRepr_RWCompShAspAndDatumFeatAndShAsp> >>(m.attr("RWStepRepr_RWCompShAspAndDatumFeatAndShAsp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWCompositeGroupShapeAspect , shared_ptr<RWStepRepr_RWCompositeGroupShapeAspect> >>(m.attr("RWStepRepr_RWCompositeGroupShapeAspect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWCompositeShapeAspect , shared_ptr<RWStepRepr_RWCompositeShapeAspect> >>(m.attr("RWStepRepr_RWCompositeShapeAspect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWCompoundRepresentationItem , shared_ptr<RWStepRepr_RWCompoundRepresentationItem> >>(m.attr("RWStepRepr_RWCompoundRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWConfigurationDesign , shared_ptr<RWStepRepr_RWConfigurationDesign> >>(m.attr("RWStepRepr_RWConfigurationDesign"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWConfigurationEffectivity , shared_ptr<RWStepRepr_RWConfigurationEffectivity> >>(m.attr("RWStepRepr_RWConfigurationEffectivity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWConfigurationItem , shared_ptr<RWStepRepr_RWConfigurationItem> >>(m.attr("RWStepRepr_RWConfigurationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWConstructiveGeometryRepresentation , shared_ptr<RWStepRepr_RWConstructiveGeometryRepresentation> >>(m.attr("RWStepRepr_RWConstructiveGeometryRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWConstructiveGeometryRepresentationRelationship , shared_ptr<RWStepRepr_RWConstructiveGeometryRepresentationRelationship> >>(m.attr("RWStepRepr_RWConstructiveGeometryRepresentationRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWContinuosShapeAspect , shared_ptr<RWStepRepr_RWContinuosShapeAspect> >>(m.attr("RWStepRepr_RWContinuosShapeAspect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWDataEnvironment , shared_ptr<RWStepRepr_RWDataEnvironment> >>(m.attr("RWStepRepr_RWDataEnvironment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWDefinitionalRepresentation , shared_ptr<RWStepRepr_RWDefinitionalRepresentation> >>(m.attr("RWStepRepr_RWDefinitionalRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWDerivedShapeAspect , shared_ptr<RWStepRepr_RWDerivedShapeAspect> >>(m.attr("RWStepRepr_RWDerivedShapeAspect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWDescriptiveRepresentationItem , shared_ptr<RWStepRepr_RWDescriptiveRepresentationItem> >>(m.attr("RWStepRepr_RWDescriptiveRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWExtension , shared_ptr<RWStepRepr_RWExtension> >>(m.attr("RWStepRepr_RWExtension"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWFeatureForDatumTargetRelationship , shared_ptr<RWStepRepr_RWFeatureForDatumTargetRelationship> >>(m.attr("RWStepRepr_RWFeatureForDatumTargetRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWFunctionallyDefinedTransformation , shared_ptr<RWStepRepr_RWFunctionallyDefinedTransformation> >>(m.attr("RWStepRepr_RWFunctionallyDefinedTransformation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWGeometricAlignment , shared_ptr<RWStepRepr_RWGeometricAlignment> >>(m.attr("RWStepRepr_RWGeometricAlignment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWGlobalUncertaintyAssignedContext , shared_ptr<RWStepRepr_RWGlobalUncertaintyAssignedContext> >>(m.attr("RWStepRepr_RWGlobalUncertaintyAssignedContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWGlobalUnitAssignedContext , shared_ptr<RWStepRepr_RWGlobalUnitAssignedContext> >>(m.attr("RWStepRepr_RWGlobalUnitAssignedContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWIntegerRepresentationItem , shared_ptr<RWStepRepr_RWIntegerRepresentationItem> >>(m.attr("RWStepRepr_RWIntegerRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWItemDefinedTransformation , shared_ptr<RWStepRepr_RWItemDefinedTransformation> >>(m.attr("RWStepRepr_RWItemDefinedTransformation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWMakeFromUsageOption , shared_ptr<RWStepRepr_RWMakeFromUsageOption> >>(m.attr("RWStepRepr_RWMakeFromUsageOption"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWMappedItem , shared_ptr<RWStepRepr_RWMappedItem> >>(m.attr("RWStepRepr_RWMappedItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWMaterialDesignation , shared_ptr<RWStepRepr_RWMaterialDesignation> >>(m.attr("RWStepRepr_RWMaterialDesignation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWMaterialProperty , shared_ptr<RWStepRepr_RWMaterialProperty> >>(m.attr("RWStepRepr_RWMaterialProperty"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWMaterialPropertyRepresentation , shared_ptr<RWStepRepr_RWMaterialPropertyRepresentation> >>(m.attr("RWStepRepr_RWMaterialPropertyRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWMeasureRepresentationItem , shared_ptr<RWStepRepr_RWMeasureRepresentationItem> >>(m.attr("RWStepRepr_RWMeasureRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWParallelOffset , shared_ptr<RWStepRepr_RWParallelOffset> >>(m.attr("RWStepRepr_RWParallelOffset"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWParametricRepresentationContext , shared_ptr<RWStepRepr_RWParametricRepresentationContext> >>(m.attr("RWStepRepr_RWParametricRepresentationContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWPerpendicularTo , shared_ptr<RWStepRepr_RWPerpendicularTo> >>(m.attr("RWStepRepr_RWPerpendicularTo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWProductConcept , shared_ptr<RWStepRepr_RWProductConcept> >>(m.attr("RWStepRepr_RWProductConcept"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWProductDefinitionShape , shared_ptr<RWStepRepr_RWProductDefinitionShape> >>(m.attr("RWStepRepr_RWProductDefinitionShape"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWPropertyDefinition , shared_ptr<RWStepRepr_RWPropertyDefinition> >>(m.attr("RWStepRepr_RWPropertyDefinition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWPropertyDefinitionRelationship , shared_ptr<RWStepRepr_RWPropertyDefinitionRelationship> >>(m.attr("RWStepRepr_RWPropertyDefinitionRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWPropertyDefinitionRepresentation , shared_ptr<RWStepRepr_RWPropertyDefinitionRepresentation> >>(m.attr("RWStepRepr_RWPropertyDefinitionRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWQuantifiedAssemblyComponentUsage , shared_ptr<RWStepRepr_RWQuantifiedAssemblyComponentUsage> >>(m.attr("RWStepRepr_RWQuantifiedAssemblyComponentUsage"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWReprItemAndLengthMeasureWithUnit , shared_ptr<RWStepRepr_RWReprItemAndLengthMeasureWithUnit> >>(m.attr("RWStepRepr_RWReprItemAndLengthMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI , shared_ptr<RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI> >>(m.attr("RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit , shared_ptr<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit> >>(m.attr("RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI , shared_ptr<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI> >>(m.attr("RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWRepresentation , shared_ptr<RWStepRepr_RWRepresentation> >>(m.attr("RWStepRepr_RWRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWRepresentationContext , shared_ptr<RWStepRepr_RWRepresentationContext> >>(m.attr("RWStepRepr_RWRepresentationContext"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWRepresentationItem , shared_ptr<RWStepRepr_RWRepresentationItem> >>(m.attr("RWStepRepr_RWRepresentationItem"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWRepresentationMap , shared_ptr<RWStepRepr_RWRepresentationMap> >>(m.attr("RWStepRepr_RWRepresentationMap"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWRepresentationRelationship , shared_ptr<RWStepRepr_RWRepresentationRelationship> >>(m.attr("RWStepRepr_RWRepresentationRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWRepresentationRelationshipWithTransformation , shared_ptr<RWStepRepr_RWRepresentationRelationshipWithTransformation> >>(m.attr("RWStepRepr_RWRepresentationRelationshipWithTransformation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWShapeAspect , shared_ptr<RWStepRepr_RWShapeAspect> >>(m.attr("RWStepRepr_RWShapeAspect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWShapeAspectDerivingRelationship , shared_ptr<RWStepRepr_RWShapeAspectDerivingRelationship> >>(m.attr("RWStepRepr_RWShapeAspectDerivingRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWShapeAspectRelationship , shared_ptr<RWStepRepr_RWShapeAspectRelationship> >>(m.attr("RWStepRepr_RWShapeAspectRelationship"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWShapeAspectTransition , shared_ptr<RWStepRepr_RWShapeAspectTransition> >>(m.attr("RWStepRepr_RWShapeAspectTransition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWShapeRepresentationRelationshipWithTransformation , shared_ptr<RWStepRepr_RWShapeRepresentationRelationshipWithTransformation> >>(m.attr("RWStepRepr_RWShapeRepresentationRelationshipWithTransformation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWSpecifiedHigherUsageOccurrence , shared_ptr<RWStepRepr_RWSpecifiedHigherUsageOccurrence> >>(m.attr("RWStepRepr_RWSpecifiedHigherUsageOccurrence"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWStructuralResponseProperty , shared_ptr<RWStepRepr_RWStructuralResponseProperty> >>(m.attr("RWStepRepr_RWStructuralResponseProperty"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation , shared_ptr<RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation> >>(m.attr("RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWTangent , shared_ptr<RWStepRepr_RWTangent> >>(m.attr("RWStepRepr_RWTangent"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStepRepr_RWValueRepresentationItem , shared_ptr<RWStepRepr_RWValueRepresentationItem> >>(m.attr("RWStepRepr_RWValueRepresentationItem"))
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
// ./opencascade/RWStepRepr_RWMappedItem.hxx
// ./opencascade/RWStepRepr_RWProductDefinitionShape.hxx
// ./opencascade/RWStepRepr_RWFunctionallyDefinedTransformation.hxx
// ./opencascade/RWStepRepr_RWMakeFromUsageOption.hxx
// ./opencascade/RWStepRepr_RWContinuosShapeAspect.hxx
// ./opencascade/RWStepRepr_RWRepresentationRelationship.hxx
// ./opencascade/RWStepRepr_RWItemDefinedTransformation.hxx
// ./opencascade/RWStepRepr_RWCompoundRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWValueRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWApex.hxx
// ./opencascade/RWStepRepr_RWGlobalUnitAssignedContext.hxx
// ./opencascade/RWStepRepr_RWCompositeShapeAspect.hxx
// ./opencascade/RWStepRepr_RWRepresentation.hxx
// ./opencascade/RWStepRepr_RWMeasureRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWConfigurationItem.hxx
// ./opencascade/RWStepRepr_RWDescriptiveRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI.hxx
// ./opencascade/RWStepRepr_RWRepresentationContext.hxx
// ./opencascade/RWStepRepr_RWMaterialProperty.hxx
// ./opencascade/RWStepRepr_RWProductConcept.hxx
// ./opencascade/RWStepRepr_RWMaterialPropertyRepresentation.hxx
// ./opencascade/RWStepRepr_RWPropertyDefinitionRelationship.hxx
// ./opencascade/RWStepRepr_RWPerpendicularTo.hxx
// ./opencascade/RWStepRepr_RWGeometricAlignment.hxx
// ./opencascade/RWStepRepr_RWTangent.hxx
// ./opencascade/RWStepRepr_RWCharacterizedRepresentation.hxx
// ./opencascade/RWStepRepr_RWPropertyDefinitionRepresentation.hxx
// ./opencascade/RWStepRepr_RWRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWIntegerRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWShapeAspect.hxx
// ./opencascade/RWStepRepr_RWStructuralResponseProperty.hxx
// ./opencascade/RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx
// ./opencascade/RWStepRepr_RWShapeRepresentationRelationshipWithTransformation.hxx
// ./opencascade/RWStepRepr_RWConstructiveGeometryRepresentation.hxx
// ./opencascade/RWStepRepr_RWDerivedShapeAspect.hxx
// ./opencascade/RWStepRepr_RWAllAroundShapeAspect.hxx
// ./opencascade/RWStepRepr_RWExtension.hxx
// ./opencascade/RWStepRepr_RWShapeAspectDerivingRelationship.hxx
// ./opencascade/RWStepRepr_RWRepresentationRelationshipWithTransformation.hxx
// ./opencascade/RWStepRepr_RWSpecifiedHigherUsageOccurrence.hxx
// ./opencascade/RWStepRepr_RWDefinitionalRepresentation.hxx
// ./opencascade/RWStepRepr_RWConstructiveGeometryRepresentationRelationship.hxx
// ./opencascade/RWStepRepr_RWReprItemAndLengthMeasureWithUnit.hxx
// ./opencascade/RWStepRepr_RWCompositeGroupShapeAspect.hxx
// ./opencascade/RWStepRepr_RWAssemblyComponentUsage.hxx
// ./opencascade/RWStepRepr_RWShapeAspectRelationship.hxx
// ./opencascade/RWStepRepr_RWGlobalUncertaintyAssignedContext.hxx
// ./opencascade/RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation.hxx
// ./opencascade/RWStepRepr_RWMaterialDesignation.hxx
// ./opencascade/RWStepRepr_RWConfigurationEffectivity.hxx
// ./opencascade/RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx
// ./opencascade/RWStepRepr_RWShapeAspectTransition.hxx
// ./opencascade/RWStepRepr_RWAssemblyComponentUsageSubstitute.hxx
// ./opencascade/RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit.hxx
// ./opencascade/RWStepRepr_RWParallelOffset.hxx
// ./opencascade/RWStepRepr_RWRepresentationMap.hxx
// ./opencascade/RWStepRepr_RWBetweenShapeAspect.hxx
// ./opencascade/RWStepRepr_RWCentreOfSymmetry.hxx
// ./opencascade/RWStepRepr_RWParametricRepresentationContext.hxx
// ./opencascade/RWStepRepr_RWConfigurationDesign.hxx
// ./opencascade/RWStepRepr_RWDataEnvironment.hxx
// ./opencascade/RWStepRepr_RWQuantifiedAssemblyComponentUsage.hxx
// ./opencascade/RWStepRepr_RWPropertyDefinition.hxx
// ./opencascade/RWStepRepr_RWFeatureForDatumTargetRelationship.hxx
// ./opencascade/RWStepRepr_RWCompShAspAndDatumFeatAndShAsp.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
