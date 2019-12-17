
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MaterialProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_AllAroundShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationRelationshipWithTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Extension.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DataEnvironment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Tangent.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PerpendicularTo.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_StructuralResponsePropertyDefinitionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ParallelOffset.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CentreOfSymmetry.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Apex.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_BetweenShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_PropertyDefinitionRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_IntegerRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DerivedShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ParametricRepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompositeShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspectDerivingRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ContinuosShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_SpecifiedHigherUsageOccurrence.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeRepresentationRelationshipWithTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompositeGroupShapeAspect.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_Representation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MaterialPropertyRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_QuantifiedAssemblyComponentUsage.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ShapeAspectTransition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConstructiveGeometryRepresentationRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CharacterizedRepresentation.hxx>
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
#include <StepRepr_ItemDefinedTransformation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_MakeFromUsageOption.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CompShAspAndDatumFeatAndShAsp.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_StructuralResponseProperty.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnit.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_ConstructiveGeometryRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_FeatureForDatumTargetRelationship.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_GeometricAlignment.hxx>
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


    static_cast<py::class_<RWStepRepr_RWMaterialProperty ,std::unique_ptr<RWStepRepr_RWMaterialProperty>  >>(m.attr("RWStepRepr_RWMaterialProperty"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWMaterialProperty::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MaterialProperty> &  ) const) static_cast<void (RWStepRepr_RWMaterialProperty::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MaterialProperty> &  ) const>(&RWStepRepr_RWMaterialProperty::ReadStep),
             R"#(Reads MaterialProperty)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWMaterialProperty::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MaterialProperty> &  ) const) static_cast<void (RWStepRepr_RWMaterialProperty::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MaterialProperty> &  ) const>(&RWStepRepr_RWMaterialProperty::WriteStep),
             R"#(Writes MaterialProperty)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWMaterialProperty::*)( const opencascade::handle<StepRepr_MaterialProperty> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWMaterialProperty::*)( const opencascade::handle<StepRepr_MaterialProperty> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWMaterialProperty::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWConfigurationEffectivity ,std::unique_ptr<RWStepRepr_RWConfigurationEffectivity>  >>(m.attr("RWStepRepr_RWConfigurationEffectivity"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWConfigurationEffectivity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ConfigurationEffectivity> &  ) const) static_cast<void (RWStepRepr_RWConfigurationEffectivity::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ConfigurationEffectivity> &  ) const>(&RWStepRepr_RWConfigurationEffectivity::ReadStep),
             R"#(Reads ConfigurationEffectivity)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWConfigurationEffectivity::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ConfigurationEffectivity> &  ) const) static_cast<void (RWStepRepr_RWConfigurationEffectivity::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ConfigurationEffectivity> &  ) const>(&RWStepRepr_RWConfigurationEffectivity::WriteStep),
             R"#(Writes ConfigurationEffectivity)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWConfigurationEffectivity::*)( const opencascade::handle<StepRepr_ConfigurationEffectivity> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWConfigurationEffectivity::*)( const opencascade::handle<StepRepr_ConfigurationEffectivity> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWConfigurationEffectivity::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWRepresentationRelationshipWithTransformation ,std::unique_ptr<RWStepRepr_RWRepresentationRelationshipWithTransformation>  >>(m.attr("RWStepRepr_RWRepresentationRelationshipWithTransformation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWRepresentationRelationshipWithTransformation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_RepresentationRelationshipWithTransformation> &  ) const) static_cast<void (RWStepRepr_RWRepresentationRelationshipWithTransformation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_RepresentationRelationshipWithTransformation> &  ) const>(&RWStepRepr_RWRepresentationRelationshipWithTransformation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWRepresentationRelationshipWithTransformation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_RepresentationRelationshipWithTransformation> &  ) const) static_cast<void (RWStepRepr_RWRepresentationRelationshipWithTransformation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_RepresentationRelationshipWithTransformation> &  ) const>(&RWStepRepr_RWRepresentationRelationshipWithTransformation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWRepresentationRelationshipWithTransformation::*)( const opencascade::handle<StepRepr_RepresentationRelationshipWithTransformation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWRepresentationRelationshipWithTransformation::*)( const opencascade::handle<StepRepr_RepresentationRelationshipWithTransformation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWRepresentationRelationshipWithTransformation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWExtension ,std::unique_ptr<RWStepRepr_RWExtension>  >>(m.attr("RWStepRepr_RWExtension"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWExtension::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_Extension> &  ) const) static_cast<void (RWStepRepr_RWExtension::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_Extension> &  ) const>(&RWStepRepr_RWExtension::ReadStep),
             R"#(Reads Extension)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWExtension::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_Extension> &  ) const) static_cast<void (RWStepRepr_RWExtension::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_Extension> &  ) const>(&RWStepRepr_RWExtension::WriteStep),
             R"#(Writes Extension)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWExtension::*)( const opencascade::handle<StepRepr_Extension> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWExtension::*)( const opencascade::handle<StepRepr_Extension> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWExtension::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWConfigurationDesign ,std::unique_ptr<RWStepRepr_RWConfigurationDesign>  >>(m.attr("RWStepRepr_RWConfigurationDesign"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWConfigurationDesign::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ConfigurationDesign> &  ) const) static_cast<void (RWStepRepr_RWConfigurationDesign::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ConfigurationDesign> &  ) const>(&RWStepRepr_RWConfigurationDesign::ReadStep),
             R"#(Reads ConfigurationDesign)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWConfigurationDesign::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ConfigurationDesign> &  ) const) static_cast<void (RWStepRepr_RWConfigurationDesign::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ConfigurationDesign> &  ) const>(&RWStepRepr_RWConfigurationDesign::WriteStep),
             R"#(Writes ConfigurationDesign)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWConfigurationDesign::*)( const opencascade::handle<StepRepr_ConfigurationDesign> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWConfigurationDesign::*)( const opencascade::handle<StepRepr_ConfigurationDesign> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWConfigurationDesign::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWTangent ,std::unique_ptr<RWStepRepr_RWTangent>  >>(m.attr("RWStepRepr_RWTangent"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWTangent::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_Tangent> &  ) const) static_cast<void (RWStepRepr_RWTangent::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_Tangent> &  ) const>(&RWStepRepr_RWTangent::ReadStep),
             R"#(Reads Tangent)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWTangent::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_Tangent> &  ) const) static_cast<void (RWStepRepr_RWTangent::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_Tangent> &  ) const>(&RWStepRepr_RWTangent::WriteStep),
             R"#(Writes Tangent)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWTangent::*)( const opencascade::handle<StepRepr_Tangent> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWTangent::*)( const opencascade::handle<StepRepr_Tangent> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWTangent::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWMeasureRepresentationItem ,std::unique_ptr<RWStepRepr_RWMeasureRepresentationItem>  >>(m.attr("RWStepRepr_RWMeasureRepresentationItem"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWMeasureRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MeasureRepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWMeasureRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MeasureRepresentationItem> &  ) const>(&RWStepRepr_RWMeasureRepresentationItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWMeasureRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MeasureRepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWMeasureRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MeasureRepresentationItem> &  ) const>(&RWStepRepr_RWMeasureRepresentationItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWMeasureRepresentationItem::*)( const opencascade::handle<StepRepr_MeasureRepresentationItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWMeasureRepresentationItem::*)( const opencascade::handle<StepRepr_MeasureRepresentationItem> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWMeasureRepresentationItem::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWPropertyDefinitionRelationship ,std::unique_ptr<RWStepRepr_RWPropertyDefinitionRelationship>  >>(m.attr("RWStepRepr_RWPropertyDefinitionRelationship"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWPropertyDefinitionRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_PropertyDefinitionRelationship> &  ) const) static_cast<void (RWStepRepr_RWPropertyDefinitionRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_PropertyDefinitionRelationship> &  ) const>(&RWStepRepr_RWPropertyDefinitionRelationship::ReadStep),
             R"#(Reads PropertyDefinitionRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWPropertyDefinitionRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_PropertyDefinitionRelationship> &  ) const) static_cast<void (RWStepRepr_RWPropertyDefinitionRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_PropertyDefinitionRelationship> &  ) const>(&RWStepRepr_RWPropertyDefinitionRelationship::WriteStep),
             R"#(Writes PropertyDefinitionRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWPropertyDefinitionRelationship::*)( const opencascade::handle<StepRepr_PropertyDefinitionRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWPropertyDefinitionRelationship::*)( const opencascade::handle<StepRepr_PropertyDefinitionRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWPropertyDefinitionRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWCentreOfSymmetry ,std::unique_ptr<RWStepRepr_RWCentreOfSymmetry>  >>(m.attr("RWStepRepr_RWCentreOfSymmetry"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWCentreOfSymmetry::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CentreOfSymmetry> &  ) const) static_cast<void (RWStepRepr_RWCentreOfSymmetry::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CentreOfSymmetry> &  ) const>(&RWStepRepr_RWCentreOfSymmetry::ReadStep),
             R"#(Reads CentreOfSymmetry)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWCentreOfSymmetry::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CentreOfSymmetry> &  ) const) static_cast<void (RWStepRepr_RWCentreOfSymmetry::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CentreOfSymmetry> &  ) const>(&RWStepRepr_RWCentreOfSymmetry::WriteStep),
             R"#(Writes CentreOfSymmetry)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWCentreOfSymmetry::*)( const opencascade::handle<StepRepr_CentreOfSymmetry> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWCentreOfSymmetry::*)( const opencascade::handle<StepRepr_CentreOfSymmetry> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWCentreOfSymmetry::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWShapeAspect ,std::unique_ptr<RWStepRepr_RWShapeAspect>  >>(m.attr("RWStepRepr_RWShapeAspect"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ShapeAspect> &  ) const>(&RWStepRepr_RWShapeAspect::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ShapeAspect> &  ) const>(&RWStepRepr_RWShapeAspect::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWShapeAspect::*)( const opencascade::handle<StepRepr_ShapeAspect> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWShapeAspect::*)( const opencascade::handle<StepRepr_ShapeAspect> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWShapeAspect::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWFunctionallyDefinedTransformation ,std::unique_ptr<RWStepRepr_RWFunctionallyDefinedTransformation>  >>(m.attr("RWStepRepr_RWFunctionallyDefinedTransformation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWFunctionallyDefinedTransformation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_FunctionallyDefinedTransformation> &  ) const) static_cast<void (RWStepRepr_RWFunctionallyDefinedTransformation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_FunctionallyDefinedTransformation> &  ) const>(&RWStepRepr_RWFunctionallyDefinedTransformation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWFunctionallyDefinedTransformation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_FunctionallyDefinedTransformation> &  ) const) static_cast<void (RWStepRepr_RWFunctionallyDefinedTransformation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_FunctionallyDefinedTransformation> &  ) const>(&RWStepRepr_RWFunctionallyDefinedTransformation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;


    static_cast<py::class_<RWStepRepr_RWIntegerRepresentationItem ,std::unique_ptr<RWStepRepr_RWIntegerRepresentationItem>  >>(m.attr("RWStepRepr_RWIntegerRepresentationItem"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWIntegerRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_IntegerRepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWIntegerRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_IntegerRepresentationItem> &  ) const>(&RWStepRepr_RWIntegerRepresentationItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWIntegerRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_IntegerRepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWIntegerRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_IntegerRepresentationItem> &  ) const>(&RWStepRepr_RWIntegerRepresentationItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;


    static_cast<py::class_<RWStepRepr_RWParametricRepresentationContext ,std::unique_ptr<RWStepRepr_RWParametricRepresentationContext>  >>(m.attr("RWStepRepr_RWParametricRepresentationContext"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWParametricRepresentationContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ParametricRepresentationContext> &  ) const) static_cast<void (RWStepRepr_RWParametricRepresentationContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ParametricRepresentationContext> &  ) const>(&RWStepRepr_RWParametricRepresentationContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWParametricRepresentationContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ParametricRepresentationContext> &  ) const) static_cast<void (RWStepRepr_RWParametricRepresentationContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ParametricRepresentationContext> &  ) const>(&RWStepRepr_RWParametricRepresentationContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;


    static_cast<py::class_<RWStepRepr_RWMaterialDesignation ,std::unique_ptr<RWStepRepr_RWMaterialDesignation>  >>(m.attr("RWStepRepr_RWMaterialDesignation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWMaterialDesignation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MaterialDesignation> &  ) const) static_cast<void (RWStepRepr_RWMaterialDesignation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MaterialDesignation> &  ) const>(&RWStepRepr_RWMaterialDesignation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWMaterialDesignation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MaterialDesignation> &  ) const) static_cast<void (RWStepRepr_RWMaterialDesignation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MaterialDesignation> &  ) const>(&RWStepRepr_RWMaterialDesignation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWMaterialDesignation::*)( const opencascade::handle<StepRepr_MaterialDesignation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWMaterialDesignation::*)( const opencascade::handle<StepRepr_MaterialDesignation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWMaterialDesignation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWGlobalUncertaintyAssignedContext ,std::unique_ptr<RWStepRepr_RWGlobalUncertaintyAssignedContext>  >>(m.attr("RWStepRepr_RWGlobalUncertaintyAssignedContext"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWGlobalUncertaintyAssignedContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> &  ) const) static_cast<void (RWStepRepr_RWGlobalUncertaintyAssignedContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> &  ) const>(&RWStepRepr_RWGlobalUncertaintyAssignedContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWGlobalUncertaintyAssignedContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> &  ) const) static_cast<void (RWStepRepr_RWGlobalUncertaintyAssignedContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> &  ) const>(&RWStepRepr_RWGlobalUncertaintyAssignedContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWGlobalUncertaintyAssignedContext::*)( const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWGlobalUncertaintyAssignedContext::*)( const opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWGlobalUncertaintyAssignedContext::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWMappedItem ,std::unique_ptr<RWStepRepr_RWMappedItem>  >>(m.attr("RWStepRepr_RWMappedItem"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWMappedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MappedItem> &  ) const) static_cast<void (RWStepRepr_RWMappedItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MappedItem> &  ) const>(&RWStepRepr_RWMappedItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWMappedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MappedItem> &  ) const) static_cast<void (RWStepRepr_RWMappedItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MappedItem> &  ) const>(&RWStepRepr_RWMappedItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWMappedItem::*)( const opencascade::handle<StepRepr_MappedItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWMappedItem::*)( const opencascade::handle<StepRepr_MappedItem> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWMappedItem::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWCompositeShapeAspect ,std::unique_ptr<RWStepRepr_RWCompositeShapeAspect>  >>(m.attr("RWStepRepr_RWCompositeShapeAspect"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWCompositeShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CompositeShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWCompositeShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CompositeShapeAspect> &  ) const>(&RWStepRepr_RWCompositeShapeAspect::ReadStep),
             R"#(Reads CompositeShapeAspect)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWCompositeShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CompositeShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWCompositeShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CompositeShapeAspect> &  ) const>(&RWStepRepr_RWCompositeShapeAspect::WriteStep),
             R"#(Writes CompositeShapeAspect)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWCompositeShapeAspect::*)( const opencascade::handle<StepRepr_CompositeShapeAspect> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWCompositeShapeAspect::*)( const opencascade::handle<StepRepr_CompositeShapeAspect> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWCompositeShapeAspect::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWAssemblyComponentUsageSubstitute ,std::unique_ptr<RWStepRepr_RWAssemblyComponentUsageSubstitute>  >>(m.attr("RWStepRepr_RWAssemblyComponentUsageSubstitute"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWAssemblyComponentUsageSubstitute::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_AssemblyComponentUsageSubstitute> &  ) const) static_cast<void (RWStepRepr_RWAssemblyComponentUsageSubstitute::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_AssemblyComponentUsageSubstitute> &  ) const>(&RWStepRepr_RWAssemblyComponentUsageSubstitute::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWAssemblyComponentUsageSubstitute::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_AssemblyComponentUsageSubstitute> &  ) const) static_cast<void (RWStepRepr_RWAssemblyComponentUsageSubstitute::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_AssemblyComponentUsageSubstitute> &  ) const>(&RWStepRepr_RWAssemblyComponentUsageSubstitute::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWAssemblyComponentUsageSubstitute::*)( const opencascade::handle<StepRepr_AssemblyComponentUsageSubstitute> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWAssemblyComponentUsageSubstitute::*)( const opencascade::handle<StepRepr_AssemblyComponentUsageSubstitute> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWAssemblyComponentUsageSubstitute::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWAssemblyComponentUsage ,std::unique_ptr<RWStepRepr_RWAssemblyComponentUsage>  >>(m.attr("RWStepRepr_RWAssemblyComponentUsage"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWAssemblyComponentUsage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_AssemblyComponentUsage> &  ) const) static_cast<void (RWStepRepr_RWAssemblyComponentUsage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_AssemblyComponentUsage> &  ) const>(&RWStepRepr_RWAssemblyComponentUsage::ReadStep),
             R"#(Reads AssemblyComponentUsage)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWAssemblyComponentUsage::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_AssemblyComponentUsage> &  ) const) static_cast<void (RWStepRepr_RWAssemblyComponentUsage::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_AssemblyComponentUsage> &  ) const>(&RWStepRepr_RWAssemblyComponentUsage::WriteStep),
             R"#(Writes AssemblyComponentUsage)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWAssemblyComponentUsage::*)( const opencascade::handle<StepRepr_AssemblyComponentUsage> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWAssemblyComponentUsage::*)( const opencascade::handle<StepRepr_AssemblyComponentUsage> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWAssemblyComponentUsage::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWSpecifiedHigherUsageOccurrence ,std::unique_ptr<RWStepRepr_RWSpecifiedHigherUsageOccurrence>  >>(m.attr("RWStepRepr_RWSpecifiedHigherUsageOccurrence"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWSpecifiedHigherUsageOccurrence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_SpecifiedHigherUsageOccurrence> &  ) const) static_cast<void (RWStepRepr_RWSpecifiedHigherUsageOccurrence::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_SpecifiedHigherUsageOccurrence> &  ) const>(&RWStepRepr_RWSpecifiedHigherUsageOccurrence::ReadStep),
             R"#(Reads SpecifiedHigherUsageOccurrence)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWSpecifiedHigherUsageOccurrence::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_SpecifiedHigherUsageOccurrence> &  ) const) static_cast<void (RWStepRepr_RWSpecifiedHigherUsageOccurrence::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_SpecifiedHigherUsageOccurrence> &  ) const>(&RWStepRepr_RWSpecifiedHigherUsageOccurrence::WriteStep),
             R"#(Writes SpecifiedHigherUsageOccurrence)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWSpecifiedHigherUsageOccurrence::*)( const opencascade::handle<StepRepr_SpecifiedHigherUsageOccurrence> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWSpecifiedHigherUsageOccurrence::*)( const opencascade::handle<StepRepr_SpecifiedHigherUsageOccurrence> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWSpecifiedHigherUsageOccurrence::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWShapeAspectRelationship ,std::unique_ptr<RWStepRepr_RWShapeAspectRelationship>  >>(m.attr("RWStepRepr_RWShapeAspectRelationship"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWShapeAspectRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ShapeAspectRelationship> &  ) const) static_cast<void (RWStepRepr_RWShapeAspectRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ShapeAspectRelationship> &  ) const>(&RWStepRepr_RWShapeAspectRelationship::ReadStep),
             R"#(Reads ShapeAspectRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWShapeAspectRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ShapeAspectRelationship> &  ) const) static_cast<void (RWStepRepr_RWShapeAspectRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ShapeAspectRelationship> &  ) const>(&RWStepRepr_RWShapeAspectRelationship::WriteStep),
             R"#(Writes ShapeAspectRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWShapeAspectRelationship::*)( const opencascade::handle<StepRepr_ShapeAspectRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWShapeAspectRelationship::*)( const opencascade::handle<StepRepr_ShapeAspectRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWShapeAspectRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWDefinitionalRepresentation ,std::unique_ptr<RWStepRepr_RWDefinitionalRepresentation>  >>(m.attr("RWStepRepr_RWDefinitionalRepresentation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWDefinitionalRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_DefinitionalRepresentation> &  ) const) static_cast<void (RWStepRepr_RWDefinitionalRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_DefinitionalRepresentation> &  ) const>(&RWStepRepr_RWDefinitionalRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWDefinitionalRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_DefinitionalRepresentation> &  ) const) static_cast<void (RWStepRepr_RWDefinitionalRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_DefinitionalRepresentation> &  ) const>(&RWStepRepr_RWDefinitionalRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWDefinitionalRepresentation::*)( const opencascade::handle<StepRepr_DefinitionalRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWDefinitionalRepresentation::*)( const opencascade::handle<StepRepr_DefinitionalRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWDefinitionalRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWRepresentation ,std::unique_ptr<RWStepRepr_RWRepresentation>  >>(m.attr("RWStepRepr_RWRepresentation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_Representation> &  ) const) static_cast<void (RWStepRepr_RWRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_Representation> &  ) const>(&RWStepRepr_RWRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_Representation> &  ) const) static_cast<void (RWStepRepr_RWRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_Representation> &  ) const>(&RWStepRepr_RWRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWRepresentation::*)( const opencascade::handle<StepRepr_Representation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWRepresentation::*)( const opencascade::handle<StepRepr_Representation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWQuantifiedAssemblyComponentUsage ,std::unique_ptr<RWStepRepr_RWQuantifiedAssemblyComponentUsage>  >>(m.attr("RWStepRepr_RWQuantifiedAssemblyComponentUsage"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWQuantifiedAssemblyComponentUsage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_QuantifiedAssemblyComponentUsage> &  ) const) static_cast<void (RWStepRepr_RWQuantifiedAssemblyComponentUsage::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_QuantifiedAssemblyComponentUsage> &  ) const>(&RWStepRepr_RWQuantifiedAssemblyComponentUsage::ReadStep),
             R"#(Reads QuantifiedAssemblyComponentUsage)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWQuantifiedAssemblyComponentUsage::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_QuantifiedAssemblyComponentUsage> &  ) const) static_cast<void (RWStepRepr_RWQuantifiedAssemblyComponentUsage::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_QuantifiedAssemblyComponentUsage> &  ) const>(&RWStepRepr_RWQuantifiedAssemblyComponentUsage::WriteStep),
             R"#(Writes QuantifiedAssemblyComponentUsage)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWQuantifiedAssemblyComponentUsage::*)( const opencascade::handle<StepRepr_QuantifiedAssemblyComponentUsage> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWQuantifiedAssemblyComponentUsage::*)( const opencascade::handle<StepRepr_QuantifiedAssemblyComponentUsage> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWQuantifiedAssemblyComponentUsage::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWConstructiveGeometryRepresentationRelationship ,std::unique_ptr<RWStepRepr_RWConstructiveGeometryRepresentationRelationship>  >>(m.attr("RWStepRepr_RWConstructiveGeometryRepresentationRelationship"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWConstructiveGeometryRepresentationRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ConstructiveGeometryRepresentationRelationship> &  ) const) static_cast<void (RWStepRepr_RWConstructiveGeometryRepresentationRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ConstructiveGeometryRepresentationRelationship> &  ) const>(&RWStepRepr_RWConstructiveGeometryRepresentationRelationship::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWConstructiveGeometryRepresentationRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ConstructiveGeometryRepresentationRelationship> &  ) const) static_cast<void (RWStepRepr_RWConstructiveGeometryRepresentationRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ConstructiveGeometryRepresentationRelationship> &  ) const>(&RWStepRepr_RWConstructiveGeometryRepresentationRelationship::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWConstructiveGeometryRepresentationRelationship::*)( const opencascade::handle<StepRepr_ConstructiveGeometryRepresentationRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWConstructiveGeometryRepresentationRelationship::*)( const opencascade::handle<StepRepr_ConstructiveGeometryRepresentationRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWConstructiveGeometryRepresentationRelationship::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWCharacterizedRepresentation ,std::unique_ptr<RWStepRepr_RWCharacterizedRepresentation>  >>(m.attr("RWStepRepr_RWCharacterizedRepresentation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWCharacterizedRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CharacterizedRepresentation> &  ) const) static_cast<void (RWStepRepr_RWCharacterizedRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CharacterizedRepresentation> &  ) const>(&RWStepRepr_RWCharacterizedRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWCharacterizedRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CharacterizedRepresentation> &  ) const) static_cast<void (RWStepRepr_RWCharacterizedRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CharacterizedRepresentation> &  ) const>(&RWStepRepr_RWCharacterizedRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWCharacterizedRepresentation::*)( const opencascade::handle<StepRepr_CharacterizedRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWCharacterizedRepresentation::*)( const opencascade::handle<StepRepr_CharacterizedRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWCharacterizedRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWValueRepresentationItem ,std::unique_ptr<RWStepRepr_RWValueRepresentationItem>  >>(m.attr("RWStepRepr_RWValueRepresentationItem"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWValueRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ValueRepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWValueRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ValueRepresentationItem> &  ) const>(&RWStepRepr_RWValueRepresentationItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWValueRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ValueRepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWValueRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ValueRepresentationItem> &  ) const>(&RWStepRepr_RWValueRepresentationItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;


    static_cast<py::class_<RWStepRepr_RWProductDefinitionShape ,std::unique_ptr<RWStepRepr_RWProductDefinitionShape>  >>(m.attr("RWStepRepr_RWProductDefinitionShape"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWProductDefinitionShape::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ProductDefinitionShape> &  ) const) static_cast<void (RWStepRepr_RWProductDefinitionShape::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ProductDefinitionShape> &  ) const>(&RWStepRepr_RWProductDefinitionShape::ReadStep),
             R"#(Reads ProductDefinitionShape)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWProductDefinitionShape::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ProductDefinitionShape> &  ) const) static_cast<void (RWStepRepr_RWProductDefinitionShape::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ProductDefinitionShape> &  ) const>(&RWStepRepr_RWProductDefinitionShape::WriteStep),
             R"#(Writes ProductDefinitionShape)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWProductDefinitionShape::*)( const opencascade::handle<StepRepr_ProductDefinitionShape> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWProductDefinitionShape::*)( const opencascade::handle<StepRepr_ProductDefinitionShape> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWProductDefinitionShape::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWCompShAspAndDatumFeatAndShAsp ,std::unique_ptr<RWStepRepr_RWCompShAspAndDatumFeatAndShAsp>  >>(m.attr("RWStepRepr_RWCompShAspAndDatumFeatAndShAsp"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWCompShAspAndDatumFeatAndShAsp::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CompShAspAndDatumFeatAndShAsp> &  ) const) static_cast<void (RWStepRepr_RWCompShAspAndDatumFeatAndShAsp::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CompShAspAndDatumFeatAndShAsp> &  ) const>(&RWStepRepr_RWCompShAspAndDatumFeatAndShAsp::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWCompShAspAndDatumFeatAndShAsp::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CompShAspAndDatumFeatAndShAsp> &  ) const) static_cast<void (RWStepRepr_RWCompShAspAndDatumFeatAndShAsp::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CompShAspAndDatumFeatAndShAsp> &  ) const>(&RWStepRepr_RWCompShAspAndDatumFeatAndShAsp::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWCompShAspAndDatumFeatAndShAsp::*)( const opencascade::handle<StepRepr_CompShAspAndDatumFeatAndShAsp> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWCompShAspAndDatumFeatAndShAsp::*)( const opencascade::handle<StepRepr_CompShAspAndDatumFeatAndShAsp> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWCompShAspAndDatumFeatAndShAsp::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWStructuralResponseProperty ,std::unique_ptr<RWStepRepr_RWStructuralResponseProperty>  >>(m.attr("RWStepRepr_RWStructuralResponseProperty"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWStructuralResponseProperty::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_StructuralResponseProperty> &  ) const) static_cast<void (RWStepRepr_RWStructuralResponseProperty::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_StructuralResponseProperty> &  ) const>(&RWStepRepr_RWStructuralResponseProperty::ReadStep),
             R"#(Reads StructuralResponseProperty)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWStructuralResponseProperty::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_StructuralResponseProperty> &  ) const) static_cast<void (RWStepRepr_RWStructuralResponseProperty::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_StructuralResponseProperty> &  ) const>(&RWStepRepr_RWStructuralResponseProperty::WriteStep),
             R"#(Writes StructuralResponseProperty)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWStructuralResponseProperty::*)( const opencascade::handle<StepRepr_StructuralResponseProperty> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWStructuralResponseProperty::*)( const opencascade::handle<StepRepr_StructuralResponseProperty> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWStructuralResponseProperty::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWReprItemAndLengthMeasureWithUnit ,std::unique_ptr<RWStepRepr_RWReprItemAndLengthMeasureWithUnit>  >>(m.attr("RWStepRepr_RWReprItemAndLengthMeasureWithUnit"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWReprItemAndLengthMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnit> &  ) const) static_cast<void (RWStepRepr_RWReprItemAndLengthMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnit> &  ) const>(&RWStepRepr_RWReprItemAndLengthMeasureWithUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWReprItemAndLengthMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnit> &  ) const) static_cast<void (RWStepRepr_RWReprItemAndLengthMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnit> &  ) const>(&RWStepRepr_RWReprItemAndLengthMeasureWithUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;


    static_cast<py::class_<RWStepRepr_RWFeatureForDatumTargetRelationship ,std::unique_ptr<RWStepRepr_RWFeatureForDatumTargetRelationship>  >>(m.attr("RWStepRepr_RWFeatureForDatumTargetRelationship"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWFeatureForDatumTargetRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_FeatureForDatumTargetRelationship> &  ) const) static_cast<void (RWStepRepr_RWFeatureForDatumTargetRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_FeatureForDatumTargetRelationship> &  ) const>(&RWStepRepr_RWFeatureForDatumTargetRelationship::ReadStep),
             R"#(Reads ShapeAspectRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWFeatureForDatumTargetRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_FeatureForDatumTargetRelationship> &  ) const) static_cast<void (RWStepRepr_RWFeatureForDatumTargetRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_FeatureForDatumTargetRelationship> &  ) const>(&RWStepRepr_RWFeatureForDatumTargetRelationship::WriteStep),
             R"#(Writes ShapeAspectRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWFeatureForDatumTargetRelationship::*)( const opencascade::handle<StepRepr_FeatureForDatumTargetRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWFeatureForDatumTargetRelationship::*)( const opencascade::handle<StepRepr_FeatureForDatumTargetRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWFeatureForDatumTargetRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWGeometricAlignment ,std::unique_ptr<RWStepRepr_RWGeometricAlignment>  >>(m.attr("RWStepRepr_RWGeometricAlignment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWGeometricAlignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_GeometricAlignment> &  ) const) static_cast<void (RWStepRepr_RWGeometricAlignment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_GeometricAlignment> &  ) const>(&RWStepRepr_RWGeometricAlignment::ReadStep),
             R"#(Reads GeometricAlignment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWGeometricAlignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_GeometricAlignment> &  ) const) static_cast<void (RWStepRepr_RWGeometricAlignment::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_GeometricAlignment> &  ) const>(&RWStepRepr_RWGeometricAlignment::WriteStep),
             R"#(Writes GeometricAlignment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWGeometricAlignment::*)( const opencascade::handle<StepRepr_GeometricAlignment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWGeometricAlignment::*)( const opencascade::handle<StepRepr_GeometricAlignment> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWGeometricAlignment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWAllAroundShapeAspect ,std::unique_ptr<RWStepRepr_RWAllAroundShapeAspect>  >>(m.attr("RWStepRepr_RWAllAroundShapeAspect"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWAllAroundShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_AllAroundShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWAllAroundShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_AllAroundShapeAspect> &  ) const>(&RWStepRepr_RWAllAroundShapeAspect::ReadStep),
             R"#(Reads AllAroundShapeAspect)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWAllAroundShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_AllAroundShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWAllAroundShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_AllAroundShapeAspect> &  ) const>(&RWStepRepr_RWAllAroundShapeAspect::WriteStep),
             R"#(Writes AllAroundShapeAspect)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWAllAroundShapeAspect::*)( const opencascade::handle<StepRepr_AllAroundShapeAspect> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWAllAroundShapeAspect::*)( const opencascade::handle<StepRepr_AllAroundShapeAspect> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWAllAroundShapeAspect::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWPropertyDefinition ,std::unique_ptr<RWStepRepr_RWPropertyDefinition>  >>(m.attr("RWStepRepr_RWPropertyDefinition"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWPropertyDefinition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_PropertyDefinition> &  ) const) static_cast<void (RWStepRepr_RWPropertyDefinition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_PropertyDefinition> &  ) const>(&RWStepRepr_RWPropertyDefinition::ReadStep),
             R"#(Reads PropertyDefinition)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWPropertyDefinition::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_PropertyDefinition> &  ) const) static_cast<void (RWStepRepr_RWPropertyDefinition::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_PropertyDefinition> &  ) const>(&RWStepRepr_RWPropertyDefinition::WriteStep),
             R"#(Writes PropertyDefinition)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWPropertyDefinition::*)( const opencascade::handle<StepRepr_PropertyDefinition> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWPropertyDefinition::*)( const opencascade::handle<StepRepr_PropertyDefinition> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWPropertyDefinition::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWRepresentationItem ,std::unique_ptr<RWStepRepr_RWRepresentationItem>  >>(m.attr("RWStepRepr_RWRepresentationItem"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_RepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_RepresentationItem> &  ) const>(&RWStepRepr_RWRepresentationItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_RepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_RepresentationItem> &  ) const>(&RWStepRepr_RWRepresentationItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;


    static_cast<py::class_<RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation ,std::unique_ptr<RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation>  >>(m.attr("RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_StructuralResponsePropertyDefinitionRepresentation> &  ) const) static_cast<void (RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_StructuralResponsePropertyDefinitionRepresentation> &  ) const>(&RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation::ReadStep),
             R"#(Reads StructuralResponsePropertyDefinitionRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_StructuralResponsePropertyDefinitionRepresentation> &  ) const) static_cast<void (RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_StructuralResponsePropertyDefinitionRepresentation> &  ) const>(&RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation::WriteStep),
             R"#(Writes StructuralResponsePropertyDefinitionRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation::*)( const opencascade::handle<StepRepr_StructuralResponsePropertyDefinitionRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation::*)( const opencascade::handle<StepRepr_StructuralResponsePropertyDefinitionRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWApex ,std::unique_ptr<RWStepRepr_RWApex>  >>(m.attr("RWStepRepr_RWApex"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWApex::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_Apex> &  ) const) static_cast<void (RWStepRepr_RWApex::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_Apex> &  ) const>(&RWStepRepr_RWApex::ReadStep),
             R"#(Reads Apex)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWApex::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_Apex> &  ) const) static_cast<void (RWStepRepr_RWApex::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_Apex> &  ) const>(&RWStepRepr_RWApex::WriteStep),
             R"#(Writes Apex)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWApex::*)( const opencascade::handle<StepRepr_Apex> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWApex::*)( const opencascade::handle<StepRepr_Apex> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWApex::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWPropertyDefinitionRepresentation ,std::unique_ptr<RWStepRepr_RWPropertyDefinitionRepresentation>  >>(m.attr("RWStepRepr_RWPropertyDefinitionRepresentation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWPropertyDefinitionRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_PropertyDefinitionRepresentation> &  ) const) static_cast<void (RWStepRepr_RWPropertyDefinitionRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_PropertyDefinitionRepresentation> &  ) const>(&RWStepRepr_RWPropertyDefinitionRepresentation::ReadStep),
             R"#(Reads PropertyDefinitionRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWPropertyDefinitionRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_PropertyDefinitionRepresentation> &  ) const) static_cast<void (RWStepRepr_RWPropertyDefinitionRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_PropertyDefinitionRepresentation> &  ) const>(&RWStepRepr_RWPropertyDefinitionRepresentation::WriteStep),
             R"#(Writes PropertyDefinitionRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWPropertyDefinitionRepresentation::*)( const opencascade::handle<StepRepr_PropertyDefinitionRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWPropertyDefinitionRepresentation::*)( const opencascade::handle<StepRepr_PropertyDefinitionRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWPropertyDefinitionRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWConfigurationItem ,std::unique_ptr<RWStepRepr_RWConfigurationItem>  >>(m.attr("RWStepRepr_RWConfigurationItem"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWConfigurationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ConfigurationItem> &  ) const) static_cast<void (RWStepRepr_RWConfigurationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ConfigurationItem> &  ) const>(&RWStepRepr_RWConfigurationItem::ReadStep),
             R"#(Reads ConfigurationItem)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWConfigurationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ConfigurationItem> &  ) const) static_cast<void (RWStepRepr_RWConfigurationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ConfigurationItem> &  ) const>(&RWStepRepr_RWConfigurationItem::WriteStep),
             R"#(Writes ConfigurationItem)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWConfigurationItem::*)( const opencascade::handle<StepRepr_ConfigurationItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWConfigurationItem::*)( const opencascade::handle<StepRepr_ConfigurationItem> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWConfigurationItem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp ,std::unique_ptr<RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp>  >>(m.attr("RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp> &  ) const) static_cast<void (RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp> &  ) const>(&RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp> &  ) const) static_cast<void (RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp> &  ) const>(&RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp::*)( const opencascade::handle<StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp::*)( const opencascade::handle<StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWRepresentationContext ,std::unique_ptr<RWStepRepr_RWRepresentationContext>  >>(m.attr("RWStepRepr_RWRepresentationContext"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWRepresentationContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_RepresentationContext> &  ) const) static_cast<void (RWStepRepr_RWRepresentationContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_RepresentationContext> &  ) const>(&RWStepRepr_RWRepresentationContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWRepresentationContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_RepresentationContext> &  ) const) static_cast<void (RWStepRepr_RWRepresentationContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_RepresentationContext> &  ) const>(&RWStepRepr_RWRepresentationContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;


    static_cast<py::class_<RWStepRepr_RWContinuosShapeAspect ,std::unique_ptr<RWStepRepr_RWContinuosShapeAspect>  >>(m.attr("RWStepRepr_RWContinuosShapeAspect"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWContinuosShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ContinuosShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWContinuosShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ContinuosShapeAspect> &  ) const>(&RWStepRepr_RWContinuosShapeAspect::ReadStep),
             R"#(Reads ContinuosShapeAspect)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWContinuosShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ContinuosShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWContinuosShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ContinuosShapeAspect> &  ) const>(&RWStepRepr_RWContinuosShapeAspect::WriteStep),
             R"#(Writes ContinuosShapeAspect)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWContinuosShapeAspect::*)( const opencascade::handle<StepRepr_ContinuosShapeAspect> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWContinuosShapeAspect::*)( const opencascade::handle<StepRepr_ContinuosShapeAspect> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWContinuosShapeAspect::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWCompositeGroupShapeAspect ,std::unique_ptr<RWStepRepr_RWCompositeGroupShapeAspect>  >>(m.attr("RWStepRepr_RWCompositeGroupShapeAspect"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWCompositeGroupShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CompositeGroupShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWCompositeGroupShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CompositeGroupShapeAspect> &  ) const>(&RWStepRepr_RWCompositeGroupShapeAspect::ReadStep),
             R"#(Reads CompositeGroupShapeAspect)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWCompositeGroupShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CompositeGroupShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWCompositeGroupShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CompositeGroupShapeAspect> &  ) const>(&RWStepRepr_RWCompositeGroupShapeAspect::WriteStep),
             R"#(Writes CompositeGroupShapeAspect)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWCompositeGroupShapeAspect::*)( const opencascade::handle<StepRepr_CompositeGroupShapeAspect> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWCompositeGroupShapeAspect::*)( const opencascade::handle<StepRepr_CompositeGroupShapeAspect> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWCompositeGroupShapeAspect::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWMaterialPropertyRepresentation ,std::unique_ptr<RWStepRepr_RWMaterialPropertyRepresentation>  >>(m.attr("RWStepRepr_RWMaterialPropertyRepresentation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWMaterialPropertyRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MaterialPropertyRepresentation> &  ) const) static_cast<void (RWStepRepr_RWMaterialPropertyRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MaterialPropertyRepresentation> &  ) const>(&RWStepRepr_RWMaterialPropertyRepresentation::ReadStep),
             R"#(Reads MaterialPropertyRepresentation)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWMaterialPropertyRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MaterialPropertyRepresentation> &  ) const) static_cast<void (RWStepRepr_RWMaterialPropertyRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MaterialPropertyRepresentation> &  ) const>(&RWStepRepr_RWMaterialPropertyRepresentation::WriteStep),
             R"#(Writes MaterialPropertyRepresentation)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWMaterialPropertyRepresentation::*)( const opencascade::handle<StepRepr_MaterialPropertyRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWMaterialPropertyRepresentation::*)( const opencascade::handle<StepRepr_MaterialPropertyRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWMaterialPropertyRepresentation::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI ,std::unique_ptr<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI>  >>(m.attr("RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI> &  ) const) static_cast<void (RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI> &  ) const>(&RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI> &  ) const) static_cast<void (RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI> &  ) const>(&RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;


    static_cast<py::class_<RWStepRepr_RWItemDefinedTransformation ,std::unique_ptr<RWStepRepr_RWItemDefinedTransformation>  >>(m.attr("RWStepRepr_RWItemDefinedTransformation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWItemDefinedTransformation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ItemDefinedTransformation> &  ) const) static_cast<void (RWStepRepr_RWItemDefinedTransformation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ItemDefinedTransformation> &  ) const>(&RWStepRepr_RWItemDefinedTransformation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWItemDefinedTransformation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ItemDefinedTransformation> &  ) const) static_cast<void (RWStepRepr_RWItemDefinedTransformation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ItemDefinedTransformation> &  ) const>(&RWStepRepr_RWItemDefinedTransformation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWItemDefinedTransformation::*)( const opencascade::handle<StepRepr_ItemDefinedTransformation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWItemDefinedTransformation::*)( const opencascade::handle<StepRepr_ItemDefinedTransformation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWItemDefinedTransformation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWGlobalUnitAssignedContext ,std::unique_ptr<RWStepRepr_RWGlobalUnitAssignedContext>  >>(m.attr("RWStepRepr_RWGlobalUnitAssignedContext"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWGlobalUnitAssignedContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_GlobalUnitAssignedContext> &  ) const) static_cast<void (RWStepRepr_RWGlobalUnitAssignedContext::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_GlobalUnitAssignedContext> &  ) const>(&RWStepRepr_RWGlobalUnitAssignedContext::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWGlobalUnitAssignedContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_GlobalUnitAssignedContext> &  ) const) static_cast<void (RWStepRepr_RWGlobalUnitAssignedContext::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_GlobalUnitAssignedContext> &  ) const>(&RWStepRepr_RWGlobalUnitAssignedContext::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWGlobalUnitAssignedContext::*)( const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWGlobalUnitAssignedContext::*)( const opencascade::handle<StepRepr_GlobalUnitAssignedContext> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWGlobalUnitAssignedContext::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWConstructiveGeometryRepresentation ,std::unique_ptr<RWStepRepr_RWConstructiveGeometryRepresentation>  >>(m.attr("RWStepRepr_RWConstructiveGeometryRepresentation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWConstructiveGeometryRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ConstructiveGeometryRepresentation> &  ) const) static_cast<void (RWStepRepr_RWConstructiveGeometryRepresentation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ConstructiveGeometryRepresentation> &  ) const>(&RWStepRepr_RWConstructiveGeometryRepresentation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWConstructiveGeometryRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ConstructiveGeometryRepresentation> &  ) const) static_cast<void (RWStepRepr_RWConstructiveGeometryRepresentation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ConstructiveGeometryRepresentation> &  ) const>(&RWStepRepr_RWConstructiveGeometryRepresentation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWConstructiveGeometryRepresentation::*)( const opencascade::handle<StepRepr_ConstructiveGeometryRepresentation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWConstructiveGeometryRepresentation::*)( const opencascade::handle<StepRepr_ConstructiveGeometryRepresentation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWConstructiveGeometryRepresentation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWRepresentationMap ,std::unique_ptr<RWStepRepr_RWRepresentationMap>  >>(m.attr("RWStepRepr_RWRepresentationMap"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWRepresentationMap::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_RepresentationMap> &  ) const) static_cast<void (RWStepRepr_RWRepresentationMap::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_RepresentationMap> &  ) const>(&RWStepRepr_RWRepresentationMap::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWRepresentationMap::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_RepresentationMap> &  ) const) static_cast<void (RWStepRepr_RWRepresentationMap::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_RepresentationMap> &  ) const>(&RWStepRepr_RWRepresentationMap::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWRepresentationMap::*)( const opencascade::handle<StepRepr_RepresentationMap> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWRepresentationMap::*)( const opencascade::handle<StepRepr_RepresentationMap> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWRepresentationMap::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWPerpendicularTo ,std::unique_ptr<RWStepRepr_RWPerpendicularTo>  >>(m.attr("RWStepRepr_RWPerpendicularTo"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWPerpendicularTo::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_PerpendicularTo> &  ) const) static_cast<void (RWStepRepr_RWPerpendicularTo::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_PerpendicularTo> &  ) const>(&RWStepRepr_RWPerpendicularTo::ReadStep),
             R"#(Reads PerpendicularTo)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWPerpendicularTo::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_PerpendicularTo> &  ) const) static_cast<void (RWStepRepr_RWPerpendicularTo::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_PerpendicularTo> &  ) const>(&RWStepRepr_RWPerpendicularTo::WriteStep),
             R"#(Writes PerpendicularTo)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWPerpendicularTo::*)( const opencascade::handle<StepRepr_PerpendicularTo> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWPerpendicularTo::*)( const opencascade::handle<StepRepr_PerpendicularTo> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWPerpendicularTo::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWBetweenShapeAspect ,std::unique_ptr<RWStepRepr_RWBetweenShapeAspect>  >>(m.attr("RWStepRepr_RWBetweenShapeAspect"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWBetweenShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_BetweenShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWBetweenShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_BetweenShapeAspect> &  ) const>(&RWStepRepr_RWBetweenShapeAspect::ReadStep),
             R"#(Reads BetweenShapeAspect)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWBetweenShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_BetweenShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWBetweenShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_BetweenShapeAspect> &  ) const>(&RWStepRepr_RWBetweenShapeAspect::WriteStep),
             R"#(Writes BetweenShapeAspect)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWBetweenShapeAspect::*)( const opencascade::handle<StepRepr_BetweenShapeAspect> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWBetweenShapeAspect::*)( const opencascade::handle<StepRepr_BetweenShapeAspect> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWBetweenShapeAspect::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit ,std::unique_ptr<RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit>  >>(m.attr("RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnit> &  ) const) static_cast<void (RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnit> &  ) const>(&RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnit> &  ) const) static_cast<void (RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnit> &  ) const>(&RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;


    static_cast<py::class_<RWStepRepr_RWShapeAspectDerivingRelationship ,std::unique_ptr<RWStepRepr_RWShapeAspectDerivingRelationship>  >>(m.attr("RWStepRepr_RWShapeAspectDerivingRelationship"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWShapeAspectDerivingRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ShapeAspectDerivingRelationship> &  ) const) static_cast<void (RWStepRepr_RWShapeAspectDerivingRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ShapeAspectDerivingRelationship> &  ) const>(&RWStepRepr_RWShapeAspectDerivingRelationship::ReadStep),
             R"#(Reads ShapeAspectDerivingRelationship)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWShapeAspectDerivingRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ShapeAspectDerivingRelationship> &  ) const) static_cast<void (RWStepRepr_RWShapeAspectDerivingRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ShapeAspectDerivingRelationship> &  ) const>(&RWStepRepr_RWShapeAspectDerivingRelationship::WriteStep),
             R"#(Writes ShapeAspectDerivingRelationship)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWShapeAspectDerivingRelationship::*)( const opencascade::handle<StepRepr_ShapeAspectDerivingRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWShapeAspectDerivingRelationship::*)( const opencascade::handle<StepRepr_ShapeAspectDerivingRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWShapeAspectDerivingRelationship::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWProductConcept ,std::unique_ptr<RWStepRepr_RWProductConcept>  >>(m.attr("RWStepRepr_RWProductConcept"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWProductConcept::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ProductConcept> &  ) const) static_cast<void (RWStepRepr_RWProductConcept::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ProductConcept> &  ) const>(&RWStepRepr_RWProductConcept::ReadStep),
             R"#(Reads ProductConcept)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWProductConcept::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ProductConcept> &  ) const) static_cast<void (RWStepRepr_RWProductConcept::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ProductConcept> &  ) const>(&RWStepRepr_RWProductConcept::WriteStep),
             R"#(Writes ProductConcept)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWProductConcept::*)( const opencascade::handle<StepRepr_ProductConcept> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWProductConcept::*)( const opencascade::handle<StepRepr_ProductConcept> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWProductConcept::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWCompoundRepresentationItem ,std::unique_ptr<RWStepRepr_RWCompoundRepresentationItem>  >>(m.attr("RWStepRepr_RWCompoundRepresentationItem"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWCompoundRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CompoundRepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWCompoundRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_CompoundRepresentationItem> &  ) const>(&RWStepRepr_RWCompoundRepresentationItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWCompoundRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CompoundRepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWCompoundRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_CompoundRepresentationItem> &  ) const>(&RWStepRepr_RWCompoundRepresentationItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWCompoundRepresentationItem::*)( const opencascade::handle<StepRepr_CompoundRepresentationItem> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWCompoundRepresentationItem::*)( const opencascade::handle<StepRepr_CompoundRepresentationItem> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWCompoundRepresentationItem::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWRepresentationRelationship ,std::unique_ptr<RWStepRepr_RWRepresentationRelationship>  >>(m.attr("RWStepRepr_RWRepresentationRelationship"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWRepresentationRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_RepresentationRelationship> &  ) const) static_cast<void (RWStepRepr_RWRepresentationRelationship::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_RepresentationRelationship> &  ) const>(&RWStepRepr_RWRepresentationRelationship::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWRepresentationRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_RepresentationRelationship> &  ) const) static_cast<void (RWStepRepr_RWRepresentationRelationship::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_RepresentationRelationship> &  ) const>(&RWStepRepr_RWRepresentationRelationship::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWRepresentationRelationship::*)( const opencascade::handle<StepRepr_RepresentationRelationship> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWRepresentationRelationship::*)( const opencascade::handle<StepRepr_RepresentationRelationship> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWRepresentationRelationship::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWDataEnvironment ,std::unique_ptr<RWStepRepr_RWDataEnvironment>  >>(m.attr("RWStepRepr_RWDataEnvironment"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWDataEnvironment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_DataEnvironment> &  ) const) static_cast<void (RWStepRepr_RWDataEnvironment::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_DataEnvironment> &  ) const>(&RWStepRepr_RWDataEnvironment::ReadStep),
             R"#(Reads DataEnvironment)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWDataEnvironment::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_DataEnvironment> &  ) const) static_cast<void (RWStepRepr_RWDataEnvironment::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_DataEnvironment> &  ) const>(&RWStepRepr_RWDataEnvironment::WriteStep),
             R"#(Writes DataEnvironment)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWDataEnvironment::*)( const opencascade::handle<StepRepr_DataEnvironment> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWDataEnvironment::*)( const opencascade::handle<StepRepr_DataEnvironment> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWDataEnvironment::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWDerivedShapeAspect ,std::unique_ptr<RWStepRepr_RWDerivedShapeAspect>  >>(m.attr("RWStepRepr_RWDerivedShapeAspect"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWDerivedShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_DerivedShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWDerivedShapeAspect::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_DerivedShapeAspect> &  ) const>(&RWStepRepr_RWDerivedShapeAspect::ReadStep),
             R"#(Reads DerivedShapeAspect)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWDerivedShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_DerivedShapeAspect> &  ) const) static_cast<void (RWStepRepr_RWDerivedShapeAspect::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_DerivedShapeAspect> &  ) const>(&RWStepRepr_RWDerivedShapeAspect::WriteStep),
             R"#(Writes DerivedShapeAspect)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWDerivedShapeAspect::*)( const opencascade::handle<StepRepr_DerivedShapeAspect> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWDerivedShapeAspect::*)( const opencascade::handle<StepRepr_DerivedShapeAspect> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWDerivedShapeAspect::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWShapeRepresentationRelationshipWithTransformation ,std::unique_ptr<RWStepRepr_RWShapeRepresentationRelationshipWithTransformation>  >>(m.attr("RWStepRepr_RWShapeRepresentationRelationshipWithTransformation"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWShapeRepresentationRelationshipWithTransformation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ShapeRepresentationRelationshipWithTransformation> &  ) const) static_cast<void (RWStepRepr_RWShapeRepresentationRelationshipWithTransformation::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ShapeRepresentationRelationshipWithTransformation> &  ) const>(&RWStepRepr_RWShapeRepresentationRelationshipWithTransformation::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWShapeRepresentationRelationshipWithTransformation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ShapeRepresentationRelationshipWithTransformation> &  ) const) static_cast<void (RWStepRepr_RWShapeRepresentationRelationshipWithTransformation::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ShapeRepresentationRelationshipWithTransformation> &  ) const>(&RWStepRepr_RWShapeRepresentationRelationshipWithTransformation::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWShapeRepresentationRelationshipWithTransformation::*)( const opencascade::handle<StepRepr_ShapeRepresentationRelationshipWithTransformation> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWShapeRepresentationRelationshipWithTransformation::*)( const opencascade::handle<StepRepr_ShapeRepresentationRelationshipWithTransformation> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWShapeRepresentationRelationshipWithTransformation::Share),
             R"#(None)#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWMakeFromUsageOption ,std::unique_ptr<RWStepRepr_RWMakeFromUsageOption>  >>(m.attr("RWStepRepr_RWMakeFromUsageOption"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWMakeFromUsageOption::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MakeFromUsageOption> &  ) const) static_cast<void (RWStepRepr_RWMakeFromUsageOption::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_MakeFromUsageOption> &  ) const>(&RWStepRepr_RWMakeFromUsageOption::ReadStep),
             R"#(Reads MakeFromUsageOption)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWMakeFromUsageOption::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MakeFromUsageOption> &  ) const) static_cast<void (RWStepRepr_RWMakeFromUsageOption::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_MakeFromUsageOption> &  ) const>(&RWStepRepr_RWMakeFromUsageOption::WriteStep),
             R"#(Writes MakeFromUsageOption)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWMakeFromUsageOption::*)( const opencascade::handle<StepRepr_MakeFromUsageOption> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWMakeFromUsageOption::*)( const opencascade::handle<StepRepr_MakeFromUsageOption> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWMakeFromUsageOption::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWParallelOffset ,std::unique_ptr<RWStepRepr_RWParallelOffset>  >>(m.attr("RWStepRepr_RWParallelOffset"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWParallelOffset::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ParallelOffset> &  ) const) static_cast<void (RWStepRepr_RWParallelOffset::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ParallelOffset> &  ) const>(&RWStepRepr_RWParallelOffset::ReadStep),
             R"#(Reads ParallelOffset)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWParallelOffset::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ParallelOffset> &  ) const) static_cast<void (RWStepRepr_RWParallelOffset::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ParallelOffset> &  ) const>(&RWStepRepr_RWParallelOffset::WriteStep),
             R"#(Writes ParallelOffset)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWParallelOffset::*)( const opencascade::handle<StepRepr_ParallelOffset> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWParallelOffset::*)( const opencascade::handle<StepRepr_ParallelOffset> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWParallelOffset::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWShapeAspectTransition ,std::unique_ptr<RWStepRepr_RWShapeAspectTransition>  >>(m.attr("RWStepRepr_RWShapeAspectTransition"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWShapeAspectTransition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ShapeAspectTransition> &  ) const) static_cast<void (RWStepRepr_RWShapeAspectTransition::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ShapeAspectTransition> &  ) const>(&RWStepRepr_RWShapeAspectTransition::ReadStep),
             R"#(Reads ShapeAspectTransition)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWShapeAspectTransition::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ShapeAspectTransition> &  ) const) static_cast<void (RWStepRepr_RWShapeAspectTransition::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ShapeAspectTransition> &  ) const>(&RWStepRepr_RWShapeAspectTransition::WriteStep),
             R"#(Writes ShapeAspectTransition)#"  , py::arg("SW"),  py::arg("ent"))
        .def("Share",
             (void (RWStepRepr_RWShapeAspectTransition::*)( const opencascade::handle<StepRepr_ShapeAspectTransition> & ,  Interface_EntityIterator &  ) const) static_cast<void (RWStepRepr_RWShapeAspectTransition::*)( const opencascade::handle<StepRepr_ShapeAspectTransition> & ,  Interface_EntityIterator &  ) const>(&RWStepRepr_RWShapeAspectTransition::Share),
             R"#(Fills data for graph (shared items))#"  , py::arg("ent"),  py::arg("iter"))
;


    static_cast<py::class_<RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI ,std::unique_ptr<RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI>  >>(m.attr("RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI> &  ) const) static_cast<void (RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI> &  ) const>(&RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI> &  ) const) static_cast<void (RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI> &  ) const>(&RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;


    static_cast<py::class_<RWStepRepr_RWDescriptiveRepresentationItem ,std::unique_ptr<RWStepRepr_RWDescriptiveRepresentationItem>  >>(m.attr("RWStepRepr_RWDescriptiveRepresentationItem"))
        .def(py::init<  >()  )
        .def("ReadStep",
             (void (RWStepRepr_RWDescriptiveRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_DescriptiveRepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWDescriptiveRepresentationItem::*)( const opencascade::handle<StepData_StepReaderData> & ,  const Standard_Integer ,  opencascade::handle<Interface_Check> & ,  const opencascade::handle<StepRepr_DescriptiveRepresentationItem> &  ) const>(&RWStepRepr_RWDescriptiveRepresentationItem::ReadStep),
             R"#(None)#"  , py::arg("data"),  py::arg("num"),  py::arg("ach"),  py::arg("ent"))
        .def("WriteStep",
             (void (RWStepRepr_RWDescriptiveRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_DescriptiveRepresentationItem> &  ) const) static_cast<void (RWStepRepr_RWDescriptiveRepresentationItem::*)( StepData_StepWriter & ,  const opencascade::handle<StepRepr_DescriptiveRepresentationItem> &  ) const>(&RWStepRepr_RWDescriptiveRepresentationItem::WriteStep),
             R"#(None)#"  , py::arg("SW"),  py::arg("ent"))
;

// functions
// ./opencascade/RWStepRepr_RWMaterialProperty.hxx
// ./opencascade/RWStepRepr_RWAllAroundShapeAspect.hxx
// ./opencascade/RWStepRepr_RWConfigurationEffectivity.hxx
// ./opencascade/RWStepRepr_RWRepresentationMap.hxx
// ./opencascade/RWStepRepr_RWRepresentationRelationshipWithTransformation.hxx
// ./opencascade/RWStepRepr_RWPropertyDefinition.hxx
// ./opencascade/RWStepRepr_RWExtension.hxx
// ./opencascade/RWStepRepr_RWDataEnvironment.hxx
// ./opencascade/RWStepRepr_RWConfigurationDesign.hxx
// ./opencascade/RWStepRepr_RWRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWTangent.hxx
// ./opencascade/RWStepRepr_RWPerpendicularTo.hxx
// ./opencascade/RWStepRepr_RWMeasureRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation.hxx
// ./opencascade/RWStepRepr_RWPropertyDefinitionRelationship.hxx
// ./opencascade/RWStepRepr_RWParallelOffset.hxx
// ./opencascade/RWStepRepr_RWCentreOfSymmetry.hxx
// ./opencascade/RWStepRepr_RWApex.hxx
// ./opencascade/RWStepRepr_RWShapeAspect.hxx
// ./opencascade/RWStepRepr_RWBetweenShapeAspect.hxx
// ./opencascade/RWStepRepr_RWFunctionallyDefinedTransformation.hxx
// ./opencascade/RWStepRepr_RWPropertyDefinitionRepresentation.hxx
// ./opencascade/RWStepRepr_RWIntegerRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWDerivedShapeAspect.hxx
// ./opencascade/RWStepRepr_RWParametricRepresentationContext.hxx
// ./opencascade/RWStepRepr_RWConfigurationItem.hxx
// ./opencascade/RWStepRepr_RWMaterialDesignation.hxx
// ./opencascade/RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit.hxx
// ./opencascade/RWStepRepr_RWGlobalUncertaintyAssignedContext.hxx
// ./opencascade/RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx
// ./opencascade/RWStepRepr_RWMappedItem.hxx
// ./opencascade/RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI.hxx
// ./opencascade/RWStepRepr_RWCompositeShapeAspect.hxx
// ./opencascade/RWStepRepr_RWRepresentationContext.hxx
// ./opencascade/RWStepRepr_RWAssemblyComponentUsageSubstitute.hxx
// ./opencascade/RWStepRepr_RWShapeAspectDerivingRelationship.hxx
// ./opencascade/RWStepRepr_RWAssemblyComponentUsage.hxx
// ./opencascade/RWStepRepr_RWContinuosShapeAspect.hxx
// ./opencascade/RWStepRepr_RWSpecifiedHigherUsageOccurrence.hxx
// ./opencascade/RWStepRepr_RWShapeRepresentationRelationshipWithTransformation.hxx
// ./opencascade/RWStepRepr_RWShapeAspectRelationship.hxx
// ./opencascade/RWStepRepr_RWCompositeGroupShapeAspect.hxx
// ./opencascade/RWStepRepr_RWDefinitionalRepresentation.hxx
// ./opencascade/RWStepRepr_RWProductConcept.hxx
// ./opencascade/RWStepRepr_RWRepresentation.hxx
// ./opencascade/RWStepRepr_RWMaterialPropertyRepresentation.hxx
// ./opencascade/RWStepRepr_RWQuantifiedAssemblyComponentUsage.hxx
// ./opencascade/RWStepRepr_RWShapeAspectTransition.hxx
// ./opencascade/RWStepRepr_RWConstructiveGeometryRepresentationRelationship.hxx
// ./opencascade/RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx
// ./opencascade/RWStepRepr_RWCharacterizedRepresentation.hxx
// ./opencascade/RWStepRepr_RWCompoundRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWValueRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWItemDefinedTransformation.hxx
// ./opencascade/RWStepRepr_RWProductDefinitionShape.hxx
// ./opencascade/RWStepRepr_RWMakeFromUsageOption.hxx
// ./opencascade/RWStepRepr_RWCompShAspAndDatumFeatAndShAsp.hxx
// ./opencascade/RWStepRepr_RWGlobalUnitAssignedContext.hxx
// ./opencascade/RWStepRepr_RWStructuralResponseProperty.hxx
// ./opencascade/RWStepRepr_RWRepresentationRelationship.hxx
// ./opencascade/RWStepRepr_RWReprItemAndLengthMeasureWithUnit.hxx
// ./opencascade/RWStepRepr_RWConstructiveGeometryRepresentation.hxx
// ./opencascade/RWStepRepr_RWFeatureForDatumTargetRelationship.hxx
// ./opencascade/RWStepRepr_RWDescriptiveRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWGeometricAlignment.hxx

// operators

// register typdefs
// ./opencascade/RWStepRepr_RWMaterialProperty.hxx
// ./opencascade/RWStepRepr_RWAllAroundShapeAspect.hxx
// ./opencascade/RWStepRepr_RWConfigurationEffectivity.hxx
// ./opencascade/RWStepRepr_RWRepresentationMap.hxx
// ./opencascade/RWStepRepr_RWRepresentationRelationshipWithTransformation.hxx
// ./opencascade/RWStepRepr_RWPropertyDefinition.hxx
// ./opencascade/RWStepRepr_RWExtension.hxx
// ./opencascade/RWStepRepr_RWDataEnvironment.hxx
// ./opencascade/RWStepRepr_RWConfigurationDesign.hxx
// ./opencascade/RWStepRepr_RWRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWTangent.hxx
// ./opencascade/RWStepRepr_RWPerpendicularTo.hxx
// ./opencascade/RWStepRepr_RWMeasureRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation.hxx
// ./opencascade/RWStepRepr_RWPropertyDefinitionRelationship.hxx
// ./opencascade/RWStepRepr_RWParallelOffset.hxx
// ./opencascade/RWStepRepr_RWCentreOfSymmetry.hxx
// ./opencascade/RWStepRepr_RWApex.hxx
// ./opencascade/RWStepRepr_RWShapeAspect.hxx
// ./opencascade/RWStepRepr_RWBetweenShapeAspect.hxx
// ./opencascade/RWStepRepr_RWFunctionallyDefinedTransformation.hxx
// ./opencascade/RWStepRepr_RWPropertyDefinitionRepresentation.hxx
// ./opencascade/RWStepRepr_RWIntegerRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWDerivedShapeAspect.hxx
// ./opencascade/RWStepRepr_RWParametricRepresentationContext.hxx
// ./opencascade/RWStepRepr_RWConfigurationItem.hxx
// ./opencascade/RWStepRepr_RWMaterialDesignation.hxx
// ./opencascade/RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit.hxx
// ./opencascade/RWStepRepr_RWGlobalUncertaintyAssignedContext.hxx
// ./opencascade/RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx
// ./opencascade/RWStepRepr_RWMappedItem.hxx
// ./opencascade/RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI.hxx
// ./opencascade/RWStepRepr_RWCompositeShapeAspect.hxx
// ./opencascade/RWStepRepr_RWRepresentationContext.hxx
// ./opencascade/RWStepRepr_RWAssemblyComponentUsageSubstitute.hxx
// ./opencascade/RWStepRepr_RWShapeAspectDerivingRelationship.hxx
// ./opencascade/RWStepRepr_RWAssemblyComponentUsage.hxx
// ./opencascade/RWStepRepr_RWContinuosShapeAspect.hxx
// ./opencascade/RWStepRepr_RWSpecifiedHigherUsageOccurrence.hxx
// ./opencascade/RWStepRepr_RWShapeRepresentationRelationshipWithTransformation.hxx
// ./opencascade/RWStepRepr_RWShapeAspectRelationship.hxx
// ./opencascade/RWStepRepr_RWCompositeGroupShapeAspect.hxx
// ./opencascade/RWStepRepr_RWDefinitionalRepresentation.hxx
// ./opencascade/RWStepRepr_RWProductConcept.hxx
// ./opencascade/RWStepRepr_RWRepresentation.hxx
// ./opencascade/RWStepRepr_RWMaterialPropertyRepresentation.hxx
// ./opencascade/RWStepRepr_RWQuantifiedAssemblyComponentUsage.hxx
// ./opencascade/RWStepRepr_RWShapeAspectTransition.hxx
// ./opencascade/RWStepRepr_RWConstructiveGeometryRepresentationRelationship.hxx
// ./opencascade/RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx
// ./opencascade/RWStepRepr_RWCharacterizedRepresentation.hxx
// ./opencascade/RWStepRepr_RWCompoundRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWValueRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWItemDefinedTransformation.hxx
// ./opencascade/RWStepRepr_RWProductDefinitionShape.hxx
// ./opencascade/RWStepRepr_RWMakeFromUsageOption.hxx
// ./opencascade/RWStepRepr_RWCompShAspAndDatumFeatAndShAsp.hxx
// ./opencascade/RWStepRepr_RWGlobalUnitAssignedContext.hxx
// ./opencascade/RWStepRepr_RWStructuralResponseProperty.hxx
// ./opencascade/RWStepRepr_RWRepresentationRelationship.hxx
// ./opencascade/RWStepRepr_RWReprItemAndLengthMeasureWithUnit.hxx
// ./opencascade/RWStepRepr_RWConstructiveGeometryRepresentation.hxx
// ./opencascade/RWStepRepr_RWFeatureForDatumTargetRelationship.hxx
// ./opencascade/RWStepRepr_RWDescriptiveRepresentationItem.hxx
// ./opencascade/RWStepRepr_RWGeometricAlignment.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
