
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_Representation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_Unit.hxx>
#include <StepBasic_GeneralProperty.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepRepr_ItemDefinedTransformation.hxx>
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_Representation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductConceptContext.hxx>
#include <StepShape_QualifiedRepresentationItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepBasic_PlaneAngleMeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_Representation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_PlaneAngleMeasureWithUnit.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepRepr_Representation.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_DataEnvironment.hxx>
#include <StepRepr_Representation.hxx>

// module includes
#include <StepRepr_AllAroundShapeAspect.hxx>
#include <StepRepr_Apex.hxx>
#include <StepRepr_Array1OfMaterialPropertyRepresentation.hxx>
#include <StepRepr_Array1OfPropertyDefinitionRepresentation.hxx>
#include <StepRepr_Array1OfRepresentationItem.hxx>
#include <StepRepr_Array1OfShapeAspect.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>
#include <StepRepr_BetweenShapeAspect.hxx>
#include <StepRepr_CentreOfSymmetry.hxx>
#include <StepRepr_CharacterizedDefinition.hxx>
#include <StepRepr_CharacterizedRepresentation.hxx>
#include <StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx>
#include <StepRepr_CompositeGroupShapeAspect.hxx>
#include <StepRepr_CompositeShapeAspect.hxx>
#include <StepRepr_CompoundRepresentationItem.hxx>
#include <StepRepr_CompShAspAndDatumFeatAndShAsp.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <StepRepr_ConfigurationDesignItem.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepRepr_ConstructiveGeometryRepresentation.hxx>
#include <StepRepr_ConstructiveGeometryRepresentationRelationship.hxx>
#include <StepRepr_ContinuosShapeAspect.hxx>
#include <StepRepr_DataEnvironment.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <StepRepr_DerivedShapeAspect.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepRepr_Extension.hxx>
#include <StepRepr_ExternallyDefinedRepresentation.hxx>
#include <StepRepr_FeatureForDatumTargetRelationship.hxx>
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <StepRepr_GeometricAlignment.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepRepr_HArray1OfMaterialPropertyRepresentation.hxx>
#include <StepRepr_HArray1OfPropertyDefinitionRepresentation.hxx>
#include <StepRepr_HArray1OfRepresentationItem.hxx>
#include <StepRepr_HArray1OfShapeAspect.hxx>
#include <StepRepr_HSequenceOfMaterialPropertyRepresentation.hxx>
#include <StepRepr_HSequenceOfRepresentationItem.hxx>
#include <StepRepr_IntegerRepresentationItem.hxx>
#include <StepRepr_ItemDefinedTransformation.hxx>
#include <StepRepr_MakeFromUsageOption.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepRepr_MaterialProperty.hxx>
#include <StepRepr_MaterialPropertyRepresentation.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepRepr_ParallelOffset.hxx>
#include <StepRepr_ParametricRepresentationContext.hxx>
#include <StepRepr_PerpendicularTo.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ProductDefinitionUsage.hxx>
#include <StepRepr_PromissoryUsageOccurrence.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinitionRepresentation.hxx>
#include <StepRepr_QuantifiedAssemblyComponentUsage.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepRepr_RepresentationRelationshipWithTransformation.hxx>
#include <StepRepr_RepresentedDefinition.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnit.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI.hxx>
#include <StepRepr_ReprItemAndMeasureWithUnit.hxx>
#include <StepRepr_ReprItemAndMeasureWithUnitAndQRI.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnit.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx>
#include <StepRepr_SequenceOfMaterialPropertyRepresentation.hxx>
#include <StepRepr_SequenceOfRepresentationItem.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectDerivingRelationship.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepRepr_ShapeAspectTransition.hxx>
#include <StepRepr_ShapeDefinition.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepRepr_ShapeRepresentationRelationshipWithTransformation.hxx>
#include <StepRepr_SpecifiedHigherUsageOccurrence.hxx>
#include <StepRepr_StructuralResponseProperty.hxx>
#include <StepRepr_StructuralResponsePropertyDefinitionRepresentation.hxx>
#include <StepRepr_SuppliedPartRelationship.hxx>
#include <StepRepr_Tangent.hxx>
#include <StepRepr_Transformation.hxx>
#include <StepRepr_ValueRange.hxx>
#include <StepRepr_ValueRepresentationItem.hxx>

// template related includes
// ./opencascade/StepRepr_Array1OfPropertyDefinitionRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepRepr_Array1OfRepresentationItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepRepr_SequenceOfRepresentationItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepRepr_Array1OfShapeAspect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepRepr_SequenceOfMaterialPropertyRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepRepr_Array1OfMaterialPropertyRepresentation.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepRepr(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepRepr"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepRepr_AssemblyComponentUsageSubstitute ,opencascade::handle<StepRepr_AssemblyComponentUsageSubstitute> , Standard_Transient>>(m.attr("StepRepr_AssemblyComponentUsageSubstitute"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_AssemblyComponentUsageSubstitute::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_AssemblyComponentUsageSubstitute::*)() const>(&StepRepr_AssemblyComponentUsageSubstitute::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_AssemblyComponentUsageSubstitute::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_CharacterizedDefinition , shared_ptr<StepRepr_CharacterizedDefinition> , StepData_SelectType>>(m.attr("StepRepr_CharacterizedDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepRepr_CharacterizedDefinition::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepRepr_CharacterizedDefinition::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepRepr_CharacterizedDefinition::CaseNum),
             R"#(Recognizes a kind of CharacterizedDefinition select type 1 -> CharacterizedObject from StepBasic 2 -> ProductDefinition from StepBasic 3 -> ProductDefinitionRelationship from StepBasic 4 -> ProductDefinitionShape from StepRepr 5 -> ShapeAspect from StepRepr 6 -> ShapeAspectRelationship from StepRepr 7 -> DocumentFile from StepBasic 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ConfigurationDesign ,opencascade::handle<StepRepr_ConfigurationDesign> , Standard_Transient>>(m.attr("StepRepr_ConfigurationDesign"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ConfigurationDesign::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ConfigurationDesign::*)() const>(&StepRepr_ConfigurationDesign::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ConfigurationDesign::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ConfigurationDesignItem , shared_ptr<StepRepr_ConfigurationDesignItem> , StepData_SelectType>>(m.attr("StepRepr_ConfigurationDesignItem"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepRepr_ConfigurationDesignItem::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepRepr_ConfigurationDesignItem::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepRepr_ConfigurationDesignItem::CaseNum),
             R"#(Recognizes a kind of ConfigurationDesignItem select type 1 -> ProductDefinition from StepBasic 2 -> ProductDefinitionFormation from StepBasic 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ConfigurationEffectivity ,opencascade::handle<StepRepr_ConfigurationEffectivity> , StepBasic_ProductDefinitionEffectivity>>(m.attr("StepRepr_ConfigurationEffectivity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ConfigurationEffectivity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ConfigurationEffectivity::*)() const>(&StepRepr_ConfigurationEffectivity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ConfigurationEffectivity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ConfigurationItem ,opencascade::handle<StepRepr_ConfigurationItem> , Standard_Transient>>(m.attr("StepRepr_ConfigurationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ConfigurationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ConfigurationItem::*)() const>(&StepRepr_ConfigurationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ConfigurationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_DataEnvironment ,opencascade::handle<StepRepr_DataEnvironment> , Standard_Transient>>(m.attr("StepRepr_DataEnvironment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_DataEnvironment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_DataEnvironment::*)() const>(&StepRepr_DataEnvironment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_DataEnvironment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_FunctionallyDefinedTransformation ,opencascade::handle<StepRepr_FunctionallyDefinedTransformation> , Standard_Transient>>(m.attr("StepRepr_FunctionallyDefinedTransformation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_FunctionallyDefinedTransformation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_FunctionallyDefinedTransformation::*)() const>(&StepRepr_FunctionallyDefinedTransformation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_FunctionallyDefinedTransformation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_HArray1OfMaterialPropertyRepresentation ,opencascade::handle<StepRepr_HArray1OfMaterialPropertyRepresentation> , StepRepr_Array1OfMaterialPropertyRepresentation, Standard_Transient>>(m.attr("StepRepr_HArray1OfMaterialPropertyRepresentation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepRepr_MaterialPropertyRepresentation> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepRepr_MaterialPropertyRepresentation> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepRepr_Array1OfMaterialPropertyRepresentation & (StepRepr_HArray1OfMaterialPropertyRepresentation::*)() const) static_cast<const StepRepr_Array1OfMaterialPropertyRepresentation & (StepRepr_HArray1OfMaterialPropertyRepresentation::*)() const>(&StepRepr_HArray1OfMaterialPropertyRepresentation::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepRepr_Array1OfMaterialPropertyRepresentation & (StepRepr_HArray1OfMaterialPropertyRepresentation::*)() ) static_cast<StepRepr_Array1OfMaterialPropertyRepresentation & (StepRepr_HArray1OfMaterialPropertyRepresentation::*)() >(&StepRepr_HArray1OfMaterialPropertyRepresentation::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_HArray1OfMaterialPropertyRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_HArray1OfMaterialPropertyRepresentation::*)() const>(&StepRepr_HArray1OfMaterialPropertyRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_HArray1OfMaterialPropertyRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepRepr_HArray1OfMaterialPropertyRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_HArray1OfPropertyDefinitionRepresentation ,opencascade::handle<StepRepr_HArray1OfPropertyDefinitionRepresentation> , StepRepr_Array1OfPropertyDefinitionRepresentation, Standard_Transient>>(m.attr("StepRepr_HArray1OfPropertyDefinitionRepresentation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepRepr_PropertyDefinitionRepresentation> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepRepr_PropertyDefinitionRepresentation> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepRepr_Array1OfPropertyDefinitionRepresentation & (StepRepr_HArray1OfPropertyDefinitionRepresentation::*)() const) static_cast<const StepRepr_Array1OfPropertyDefinitionRepresentation & (StepRepr_HArray1OfPropertyDefinitionRepresentation::*)() const>(&StepRepr_HArray1OfPropertyDefinitionRepresentation::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepRepr_Array1OfPropertyDefinitionRepresentation & (StepRepr_HArray1OfPropertyDefinitionRepresentation::*)() ) static_cast<StepRepr_Array1OfPropertyDefinitionRepresentation & (StepRepr_HArray1OfPropertyDefinitionRepresentation::*)() >(&StepRepr_HArray1OfPropertyDefinitionRepresentation::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_HArray1OfPropertyDefinitionRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_HArray1OfPropertyDefinitionRepresentation::*)() const>(&StepRepr_HArray1OfPropertyDefinitionRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_HArray1OfPropertyDefinitionRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepRepr_HArray1OfPropertyDefinitionRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_HArray1OfRepresentationItem ,opencascade::handle<StepRepr_HArray1OfRepresentationItem> , StepRepr_Array1OfRepresentationItem, Standard_Transient>>(m.attr("StepRepr_HArray1OfRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepRepr_RepresentationItem> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepRepr_RepresentationItem> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepRepr_Array1OfRepresentationItem & (StepRepr_HArray1OfRepresentationItem::*)() const) static_cast<const StepRepr_Array1OfRepresentationItem & (StepRepr_HArray1OfRepresentationItem::*)() const>(&StepRepr_HArray1OfRepresentationItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepRepr_Array1OfRepresentationItem & (StepRepr_HArray1OfRepresentationItem::*)() ) static_cast<StepRepr_Array1OfRepresentationItem & (StepRepr_HArray1OfRepresentationItem::*)() >(&StepRepr_HArray1OfRepresentationItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_HArray1OfRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_HArray1OfRepresentationItem::*)() const>(&StepRepr_HArray1OfRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_HArray1OfRepresentationItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepRepr_HArray1OfRepresentationItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_HArray1OfShapeAspect ,opencascade::handle<StepRepr_HArray1OfShapeAspect> , StepRepr_Array1OfShapeAspect, Standard_Transient>>(m.attr("StepRepr_HArray1OfShapeAspect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepRepr_ShapeAspect> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepRepr_ShapeAspect> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepRepr_Array1OfShapeAspect & (StepRepr_HArray1OfShapeAspect::*)() const) static_cast<const StepRepr_Array1OfShapeAspect & (StepRepr_HArray1OfShapeAspect::*)() const>(&StepRepr_HArray1OfShapeAspect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepRepr_Array1OfShapeAspect & (StepRepr_HArray1OfShapeAspect::*)() ) static_cast<StepRepr_Array1OfShapeAspect & (StepRepr_HArray1OfShapeAspect::*)() >(&StepRepr_HArray1OfShapeAspect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_HArray1OfShapeAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_HArray1OfShapeAspect::*)() const>(&StepRepr_HArray1OfShapeAspect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_HArray1OfShapeAspect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepRepr_HArray1OfShapeAspect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_HSequenceOfMaterialPropertyRepresentation ,opencascade::handle<StepRepr_HSequenceOfMaterialPropertyRepresentation> , StepRepr_SequenceOfMaterialPropertyRepresentation, Standard_Transient>>(m.attr("StepRepr_HSequenceOfMaterialPropertyRepresentation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepRepr_MaterialPropertyRepresentation> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StepRepr_SequenceOfMaterialPropertyRepresentation & (StepRepr_HSequenceOfMaterialPropertyRepresentation::*)() const) static_cast<const StepRepr_SequenceOfMaterialPropertyRepresentation & (StepRepr_HSequenceOfMaterialPropertyRepresentation::*)() const>(&StepRepr_HSequenceOfMaterialPropertyRepresentation::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepRepr_HSequenceOfMaterialPropertyRepresentation::*)(  const opencascade::handle<StepRepr_MaterialPropertyRepresentation> & ) ) static_cast<void (StepRepr_HSequenceOfMaterialPropertyRepresentation::*)(  const opencascade::handle<StepRepr_MaterialPropertyRepresentation> & ) >(&StepRepr_HSequenceOfMaterialPropertyRepresentation::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepRepr_HSequenceOfMaterialPropertyRepresentation::*)( NCollection_Sequence<opencascade::handle<StepRepr_MaterialPropertyRepresentation> > & ) ) static_cast<void (StepRepr_HSequenceOfMaterialPropertyRepresentation::*)( NCollection_Sequence<opencascade::handle<StepRepr_MaterialPropertyRepresentation> > & ) >(&StepRepr_HSequenceOfMaterialPropertyRepresentation::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepRepr_SequenceOfMaterialPropertyRepresentation & (StepRepr_HSequenceOfMaterialPropertyRepresentation::*)() ) static_cast<StepRepr_SequenceOfMaterialPropertyRepresentation & (StepRepr_HSequenceOfMaterialPropertyRepresentation::*)() >(&StepRepr_HSequenceOfMaterialPropertyRepresentation::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_HSequenceOfMaterialPropertyRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_HSequenceOfMaterialPropertyRepresentation::*)() const>(&StepRepr_HSequenceOfMaterialPropertyRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_HSequenceOfMaterialPropertyRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepRepr_HSequenceOfMaterialPropertyRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_HSequenceOfRepresentationItem ,opencascade::handle<StepRepr_HSequenceOfRepresentationItem> , StepRepr_SequenceOfRepresentationItem, Standard_Transient>>(m.attr("StepRepr_HSequenceOfRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepRepr_RepresentationItem> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StepRepr_SequenceOfRepresentationItem & (StepRepr_HSequenceOfRepresentationItem::*)() const) static_cast<const StepRepr_SequenceOfRepresentationItem & (StepRepr_HSequenceOfRepresentationItem::*)() const>(&StepRepr_HSequenceOfRepresentationItem::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepRepr_HSequenceOfRepresentationItem::*)(  const opencascade::handle<StepRepr_RepresentationItem> & ) ) static_cast<void (StepRepr_HSequenceOfRepresentationItem::*)(  const opencascade::handle<StepRepr_RepresentationItem> & ) >(&StepRepr_HSequenceOfRepresentationItem::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepRepr_HSequenceOfRepresentationItem::*)( NCollection_Sequence<opencascade::handle<StepRepr_RepresentationItem> > & ) ) static_cast<void (StepRepr_HSequenceOfRepresentationItem::*)( NCollection_Sequence<opencascade::handle<StepRepr_RepresentationItem> > & ) >(&StepRepr_HSequenceOfRepresentationItem::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepRepr_SequenceOfRepresentationItem & (StepRepr_HSequenceOfRepresentationItem::*)() ) static_cast<StepRepr_SequenceOfRepresentationItem & (StepRepr_HSequenceOfRepresentationItem::*)() >(&StepRepr_HSequenceOfRepresentationItem::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_HSequenceOfRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_HSequenceOfRepresentationItem::*)() const>(&StepRepr_HSequenceOfRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_HSequenceOfRepresentationItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepRepr_HSequenceOfRepresentationItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ItemDefinedTransformation ,opencascade::handle<StepRepr_ItemDefinedTransformation> , Standard_Transient>>(m.attr("StepRepr_ItemDefinedTransformation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ItemDefinedTransformation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ItemDefinedTransformation::*)() const>(&StepRepr_ItemDefinedTransformation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ItemDefinedTransformation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_MaterialDesignation ,opencascade::handle<StepRepr_MaterialDesignation> , Standard_Transient>>(m.attr("StepRepr_MaterialDesignation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_MaterialDesignation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_MaterialDesignation::*)() const>(&StepRepr_MaterialDesignation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_MaterialDesignation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ProductConcept ,opencascade::handle<StepRepr_ProductConcept> , Standard_Transient>>(m.attr("StepRepr_ProductConcept"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ProductConcept::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ProductConcept::*)() const>(&StepRepr_ProductConcept::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ProductConcept::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ProductDefinitionUsage ,opencascade::handle<StepRepr_ProductDefinitionUsage> , StepBasic_ProductDefinitionRelationship>>(m.attr("StepRepr_ProductDefinitionUsage"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ProductDefinitionUsage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ProductDefinitionUsage::*)() const>(&StepRepr_ProductDefinitionUsage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ProductDefinitionUsage::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_PropertyDefinition ,opencascade::handle<StepRepr_PropertyDefinition> , Standard_Transient>>(m.attr("StepRepr_PropertyDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_PropertyDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_PropertyDefinition::*)() const>(&StepRepr_PropertyDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_PropertyDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_PropertyDefinitionRelationship ,opencascade::handle<StepRepr_PropertyDefinitionRelationship> , Standard_Transient>>(m.attr("StepRepr_PropertyDefinitionRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_PropertyDefinitionRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_PropertyDefinitionRelationship::*)() const>(&StepRepr_PropertyDefinitionRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_PropertyDefinitionRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_PropertyDefinitionRepresentation ,opencascade::handle<StepRepr_PropertyDefinitionRepresentation> , Standard_Transient>>(m.attr("StepRepr_PropertyDefinitionRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_PropertyDefinitionRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_PropertyDefinitionRepresentation::*)() const>(&StepRepr_PropertyDefinitionRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_PropertyDefinitionRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_Representation ,opencascade::handle<StepRepr_Representation> , Standard_Transient>>(m.attr("StepRepr_Representation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_Representation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_Representation::*)() const>(&StepRepr_Representation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_Representation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_RepresentationContext ,opencascade::handle<StepRepr_RepresentationContext> , Standard_Transient>>(m.attr("StepRepr_RepresentationContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_RepresentationContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_RepresentationContext::*)() const>(&StepRepr_RepresentationContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_RepresentationContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_RepresentationItem ,opencascade::handle<StepRepr_RepresentationItem> , Standard_Transient>>(m.attr("StepRepr_RepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_RepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_RepresentationItem::*)() const>(&StepRepr_RepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_RepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_RepresentationMap ,opencascade::handle<StepRepr_RepresentationMap> , Standard_Transient>>(m.attr("StepRepr_RepresentationMap"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_RepresentationMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_RepresentationMap::*)() const>(&StepRepr_RepresentationMap::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_RepresentationMap::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_RepresentationRelationship ,opencascade::handle<StepRepr_RepresentationRelationship> , Standard_Transient>>(m.attr("StepRepr_RepresentationRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_RepresentationRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_RepresentationRelationship::*)() const>(&StepRepr_RepresentationRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_RepresentationRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_RepresentedDefinition , shared_ptr<StepRepr_RepresentedDefinition> , StepData_SelectType>>(m.attr("StepRepr_RepresentedDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepRepr_RepresentedDefinition::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepRepr_RepresentedDefinition::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepRepr_RepresentedDefinition::CaseNum),
             R"#(Recognizes a kind of RepresentedDefinition select type 1 -> GeneralProperty from StepBasic 2 -> PropertyDefinition from StepRepr 3 -> PropertyDefinitionRelationship from StepRepr 4 -> ShapeAspect from StepRepr 5 -> ShapeAspectRelationship from StepRepr 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ShapeAspect ,opencascade::handle<StepRepr_ShapeAspect> , Standard_Transient>>(m.attr("StepRepr_ShapeAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ShapeAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ShapeAspect::*)() const>(&StepRepr_ShapeAspect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ShapeAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ShapeAspectRelationship ,opencascade::handle<StepRepr_ShapeAspectRelationship> , Standard_Transient>>(m.attr("StepRepr_ShapeAspectRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ShapeAspectRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ShapeAspectRelationship::*)() const>(&StepRepr_ShapeAspectRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ShapeAspectRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ShapeDefinition , shared_ptr<StepRepr_ShapeDefinition> , StepData_SelectType>>(m.attr("StepRepr_ShapeDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepRepr_ShapeDefinition::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepRepr_ShapeDefinition::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepRepr_ShapeDefinition::CaseNum),
             R"#(Recognizes a ShapeDefinition Kind Entity that is : 1 -> ProductDefinitionShape 2 -> ShapeAspect 3 -> ShapeAspectRelationship 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_SuppliedPartRelationship ,opencascade::handle<StepRepr_SuppliedPartRelationship> , StepBasic_ProductDefinitionRelationship>>(m.attr("StepRepr_SuppliedPartRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_SuppliedPartRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_SuppliedPartRelationship::*)() const>(&StepRepr_SuppliedPartRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_SuppliedPartRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_Transformation , shared_ptr<StepRepr_Transformation> , StepData_SelectType>>(m.attr("StepRepr_Transformation"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepRepr_Transformation::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepRepr_Transformation::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepRepr_Transformation::CaseNum),
             R"#(Recognizes a Transformation Kind Entity that is : 1 -> ItemDefinedTransformation 2 -> FunctionallyDefinedTransformation 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_AssemblyComponentUsage ,opencascade::handle<StepRepr_AssemblyComponentUsage> , StepRepr_ProductDefinitionUsage>>(m.attr("StepRepr_AssemblyComponentUsage"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_AssemblyComponentUsage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_AssemblyComponentUsage::*)() const>(&StepRepr_AssemblyComponentUsage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_AssemblyComponentUsage::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_CharacterizedRepresentation ,opencascade::handle<StepRepr_CharacterizedRepresentation> , StepRepr_Representation>>(m.attr("StepRepr_CharacterizedRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("SetDescription",
             (void (StepRepr_CharacterizedRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepRepr_CharacterizedRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepRepr_CharacterizedRepresentation::SetDescription),
             R"#(None)#"  , py::arg("theDescription"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepRepr_CharacterizedRepresentation::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepRepr_CharacterizedRepresentation::*)() const>(&StepRepr_CharacterizedRepresentation::Description),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_CharacterizedRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_CharacterizedRepresentation::*)() const>(&StepRepr_CharacterizedRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_CharacterizedRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_CompShAspAndDatumFeatAndShAsp ,opencascade::handle<StepRepr_CompShAspAndDatumFeatAndShAsp> , StepRepr_ShapeAspect>>(m.attr("StepRepr_CompShAspAndDatumFeatAndShAsp"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_CompShAspAndDatumFeatAndShAsp::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_CompShAspAndDatumFeatAndShAsp::*)() const>(&StepRepr_CompShAspAndDatumFeatAndShAsp::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_CompShAspAndDatumFeatAndShAsp::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_CompositeShapeAspect ,opencascade::handle<StepRepr_CompositeShapeAspect> , StepRepr_ShapeAspect>>(m.attr("StepRepr_CompositeShapeAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_CompositeShapeAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_CompositeShapeAspect::*)() const>(&StepRepr_CompositeShapeAspect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_CompositeShapeAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_CompoundRepresentationItem ,opencascade::handle<StepRepr_CompoundRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepRepr_CompoundRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_CompoundRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_CompoundRepresentationItem::*)() const>(&StepRepr_CompoundRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_CompoundRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ConstructiveGeometryRepresentation ,opencascade::handle<StepRepr_ConstructiveGeometryRepresentation> , StepRepr_Representation>>(m.attr("StepRepr_ConstructiveGeometryRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ConstructiveGeometryRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ConstructiveGeometryRepresentation::*)() const>(&StepRepr_ConstructiveGeometryRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ConstructiveGeometryRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ConstructiveGeometryRepresentationRelationship ,opencascade::handle<StepRepr_ConstructiveGeometryRepresentationRelationship> , StepRepr_RepresentationRelationship>>(m.attr("StepRepr_ConstructiveGeometryRepresentationRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ConstructiveGeometryRepresentationRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ConstructiveGeometryRepresentationRelationship::*)() const>(&StepRepr_ConstructiveGeometryRepresentationRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ConstructiveGeometryRepresentationRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_DefinitionalRepresentation ,opencascade::handle<StepRepr_DefinitionalRepresentation> , StepRepr_Representation>>(m.attr("StepRepr_DefinitionalRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_DefinitionalRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_DefinitionalRepresentation::*)() const>(&StepRepr_DefinitionalRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_DefinitionalRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_DerivedShapeAspect ,opencascade::handle<StepRepr_DerivedShapeAspect> , StepRepr_ShapeAspect>>(m.attr("StepRepr_DerivedShapeAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_DerivedShapeAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_DerivedShapeAspect::*)() const>(&StepRepr_DerivedShapeAspect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_DerivedShapeAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_DescriptiveRepresentationItem ,opencascade::handle<StepRepr_DescriptiveRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepRepr_DescriptiveRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_DescriptiveRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_DescriptiveRepresentationItem::*)() const>(&StepRepr_DescriptiveRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_DescriptiveRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ExternallyDefinedRepresentation ,opencascade::handle<StepRepr_ExternallyDefinedRepresentation> , StepRepr_Representation>>(m.attr("StepRepr_ExternallyDefinedRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ExternallyDefinedRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ExternallyDefinedRepresentation::*)() const>(&StepRepr_ExternallyDefinedRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ExternallyDefinedRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_FeatureForDatumTargetRelationship ,opencascade::handle<StepRepr_FeatureForDatumTargetRelationship> , StepRepr_ShapeAspectRelationship>>(m.attr("StepRepr_FeatureForDatumTargetRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_FeatureForDatumTargetRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_FeatureForDatumTargetRelationship::*)() const>(&StepRepr_FeatureForDatumTargetRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_FeatureForDatumTargetRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_GlobalUncertaintyAssignedContext ,opencascade::handle<StepRepr_GlobalUncertaintyAssignedContext> , StepRepr_RepresentationContext>>(m.attr("StepRepr_GlobalUncertaintyAssignedContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_GlobalUncertaintyAssignedContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_GlobalUncertaintyAssignedContext::*)() const>(&StepRepr_GlobalUncertaintyAssignedContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_GlobalUncertaintyAssignedContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_GlobalUnitAssignedContext ,opencascade::handle<StepRepr_GlobalUnitAssignedContext> , StepRepr_RepresentationContext>>(m.attr("StepRepr_GlobalUnitAssignedContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_GlobalUnitAssignedContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_GlobalUnitAssignedContext::*)() const>(&StepRepr_GlobalUnitAssignedContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_GlobalUnitAssignedContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_IntegerRepresentationItem ,opencascade::handle<StepRepr_IntegerRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepRepr_IntegerRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("SetValue",
             (void (StepRepr_IntegerRepresentationItem::*)( const Standard_Integer ) ) static_cast<void (StepRepr_IntegerRepresentationItem::*)( const Standard_Integer ) >(&StepRepr_IntegerRepresentationItem::SetValue),
             R"#(None)#"  , py::arg("theValue"))
        .def("Value",
             (Standard_Integer (StepRepr_IntegerRepresentationItem::*)() const) static_cast<Standard_Integer (StepRepr_IntegerRepresentationItem::*)() const>(&StepRepr_IntegerRepresentationItem::Value),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_IntegerRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_IntegerRepresentationItem::*)() const>(&StepRepr_IntegerRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_IntegerRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_MakeFromUsageOption ,opencascade::handle<StepRepr_MakeFromUsageOption> , StepRepr_ProductDefinitionUsage>>(m.attr("StepRepr_MakeFromUsageOption"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_MakeFromUsageOption::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_MakeFromUsageOption::*)() const>(&StepRepr_MakeFromUsageOption::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_MakeFromUsageOption::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_MappedItem ,opencascade::handle<StepRepr_MappedItem> , StepRepr_RepresentationItem>>(m.attr("StepRepr_MappedItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_MappedItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_MappedItem::*)() const>(&StepRepr_MappedItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_MappedItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_MaterialProperty ,opencascade::handle<StepRepr_MaterialProperty> , StepRepr_PropertyDefinition>>(m.attr("StepRepr_MaterialProperty"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_MaterialProperty::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_MaterialProperty::*)() const>(&StepRepr_MaterialProperty::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_MaterialProperty::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_MaterialPropertyRepresentation ,opencascade::handle<StepRepr_MaterialPropertyRepresentation> , StepRepr_PropertyDefinitionRepresentation>>(m.attr("StepRepr_MaterialPropertyRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_MaterialPropertyRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_MaterialPropertyRepresentation::*)() const>(&StepRepr_MaterialPropertyRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_MaterialPropertyRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_MeasureRepresentationItem ,opencascade::handle<StepRepr_MeasureRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepRepr_MeasureRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_MeasureRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_MeasureRepresentationItem::*)() const>(&StepRepr_MeasureRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_MeasureRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ParametricRepresentationContext ,opencascade::handle<StepRepr_ParametricRepresentationContext> , StepRepr_RepresentationContext>>(m.attr("StepRepr_ParametricRepresentationContext"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ParametricRepresentationContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ParametricRepresentationContext::*)() const>(&StepRepr_ParametricRepresentationContext::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ParametricRepresentationContext::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ProductDefinitionShape ,opencascade::handle<StepRepr_ProductDefinitionShape> , StepRepr_PropertyDefinition>>(m.attr("StepRepr_ProductDefinitionShape"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ProductDefinitionShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ProductDefinitionShape::*)() const>(&StepRepr_ProductDefinitionShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ProductDefinitionShape::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ReprItemAndMeasureWithUnit ,opencascade::handle<StepRepr_ReprItemAndMeasureWithUnit> , StepRepr_RepresentationItem>>(m.attr("StepRepr_ReprItemAndMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndMeasureWithUnit::*)() const>(&StepRepr_ReprItemAndMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ReprItemAndMeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ShapeAspectDerivingRelationship ,opencascade::handle<StepRepr_ShapeAspectDerivingRelationship> , StepRepr_ShapeAspectRelationship>>(m.attr("StepRepr_ShapeAspectDerivingRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ShapeAspectDerivingRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ShapeAspectDerivingRelationship::*)() const>(&StepRepr_ShapeAspectDerivingRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ShapeAspectDerivingRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ShapeAspectTransition ,opencascade::handle<StepRepr_ShapeAspectTransition> , StepRepr_ShapeAspectRelationship>>(m.attr("StepRepr_ShapeAspectTransition"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ShapeAspectTransition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ShapeAspectTransition::*)() const>(&StepRepr_ShapeAspectTransition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ShapeAspectTransition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ShapeRepresentationRelationship ,opencascade::handle<StepRepr_ShapeRepresentationRelationship> , StepRepr_RepresentationRelationship>>(m.attr("StepRepr_ShapeRepresentationRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ShapeRepresentationRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ShapeRepresentationRelationship::*)() const>(&StepRepr_ShapeRepresentationRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ShapeRepresentationRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_StructuralResponseProperty ,opencascade::handle<StepRepr_StructuralResponseProperty> , StepRepr_PropertyDefinition>>(m.attr("StepRepr_StructuralResponseProperty"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_StructuralResponseProperty::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_StructuralResponseProperty::*)() const>(&StepRepr_StructuralResponseProperty::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_StructuralResponseProperty::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_StructuralResponsePropertyDefinitionRepresentation ,opencascade::handle<StepRepr_StructuralResponsePropertyDefinitionRepresentation> , StepRepr_PropertyDefinitionRepresentation>>(m.attr("StepRepr_StructuralResponsePropertyDefinitionRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_StructuralResponsePropertyDefinitionRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_StructuralResponsePropertyDefinitionRepresentation::*)() const>(&StepRepr_StructuralResponsePropertyDefinitionRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_StructuralResponsePropertyDefinitionRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ValueRepresentationItem ,opencascade::handle<StepRepr_ValueRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepRepr_ValueRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("SetValueComponentMember",
             (void (StepRepr_ValueRepresentationItem::*)( const opencascade::handle<StepBasic_MeasureValueMember> & ) ) static_cast<void (StepRepr_ValueRepresentationItem::*)( const opencascade::handle<StepBasic_MeasureValueMember> & ) >(&StepRepr_ValueRepresentationItem::SetValueComponentMember),
             R"#(None)#"  , py::arg("theValueComponentMember"))
        .def("ValueComponentMember",
             (opencascade::handle<StepBasic_MeasureValueMember> (StepRepr_ValueRepresentationItem::*)() const) static_cast<opencascade::handle<StepBasic_MeasureValueMember> (StepRepr_ValueRepresentationItem::*)() const>(&StepRepr_ValueRepresentationItem::ValueComponentMember),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ValueRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ValueRepresentationItem::*)() const>(&StepRepr_ValueRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ValueRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_Apex ,opencascade::handle<StepRepr_Apex> , StepRepr_DerivedShapeAspect>>(m.attr("StepRepr_Apex"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_Apex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_Apex::*)() const>(&StepRepr_Apex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_Apex::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_CentreOfSymmetry ,opencascade::handle<StepRepr_CentreOfSymmetry> , StepRepr_DerivedShapeAspect>>(m.attr("StepRepr_CentreOfSymmetry"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_CentreOfSymmetry::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_CentreOfSymmetry::*)() const>(&StepRepr_CentreOfSymmetry::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_CentreOfSymmetry::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp ,opencascade::handle<StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp> , StepRepr_CompShAspAndDatumFeatAndShAsp>>(m.attr("StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp::*)() const>(&StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_CompositeGroupShapeAspect ,opencascade::handle<StepRepr_CompositeGroupShapeAspect> , StepRepr_CompositeShapeAspect>>(m.attr("StepRepr_CompositeGroupShapeAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_CompositeGroupShapeAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_CompositeGroupShapeAspect::*)() const>(&StepRepr_CompositeGroupShapeAspect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_CompositeGroupShapeAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ContinuosShapeAspect ,opencascade::handle<StepRepr_ContinuosShapeAspect> , StepRepr_CompositeShapeAspect>>(m.attr("StepRepr_ContinuosShapeAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ContinuosShapeAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ContinuosShapeAspect::*)() const>(&StepRepr_ContinuosShapeAspect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ContinuosShapeAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_Extension ,opencascade::handle<StepRepr_Extension> , StepRepr_DerivedShapeAspect>>(m.attr("StepRepr_Extension"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_Extension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_Extension::*)() const>(&StepRepr_Extension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_Extension::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_GeometricAlignment ,opencascade::handle<StepRepr_GeometricAlignment> , StepRepr_DerivedShapeAspect>>(m.attr("StepRepr_GeometricAlignment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_GeometricAlignment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_GeometricAlignment::*)() const>(&StepRepr_GeometricAlignment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_GeometricAlignment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_NextAssemblyUsageOccurrence ,opencascade::handle<StepRepr_NextAssemblyUsageOccurrence> , StepRepr_AssemblyComponentUsage>>(m.attr("StepRepr_NextAssemblyUsageOccurrence"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_NextAssemblyUsageOccurrence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_NextAssemblyUsageOccurrence::*)() const>(&StepRepr_NextAssemblyUsageOccurrence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_NextAssemblyUsageOccurrence::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ParallelOffset ,opencascade::handle<StepRepr_ParallelOffset> , StepRepr_DerivedShapeAspect>>(m.attr("StepRepr_ParallelOffset"))
    // constructors
    // custom constructors
    // methods
        .def("Offset",
             (opencascade::handle<StepBasic_MeasureWithUnit> (StepRepr_ParallelOffset::*)() const) static_cast<opencascade::handle<StepBasic_MeasureWithUnit> (StepRepr_ParallelOffset::*)() const>(&StepRepr_ParallelOffset::Offset),
             R"#(Returns field Offset)#" )
        .def("SetOffset",
             (void (StepRepr_ParallelOffset::*)( const opencascade::handle<StepBasic_MeasureWithUnit> & ) ) static_cast<void (StepRepr_ParallelOffset::*)( const opencascade::handle<StepBasic_MeasureWithUnit> & ) >(&StepRepr_ParallelOffset::SetOffset),
             R"#(Set field Offset)#"  , py::arg("theOffset"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ParallelOffset::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ParallelOffset::*)() const>(&StepRepr_ParallelOffset::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ParallelOffset::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_PerpendicularTo ,opencascade::handle<StepRepr_PerpendicularTo> , StepRepr_DerivedShapeAspect>>(m.attr("StepRepr_PerpendicularTo"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_PerpendicularTo::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_PerpendicularTo::*)() const>(&StepRepr_PerpendicularTo::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_PerpendicularTo::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_PromissoryUsageOccurrence ,opencascade::handle<StepRepr_PromissoryUsageOccurrence> , StepRepr_AssemblyComponentUsage>>(m.attr("StepRepr_PromissoryUsageOccurrence"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_PromissoryUsageOccurrence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_PromissoryUsageOccurrence::*)() const>(&StepRepr_PromissoryUsageOccurrence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_PromissoryUsageOccurrence::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_QuantifiedAssemblyComponentUsage ,opencascade::handle<StepRepr_QuantifiedAssemblyComponentUsage> , StepRepr_AssemblyComponentUsage>>(m.attr("StepRepr_QuantifiedAssemblyComponentUsage"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_QuantifiedAssemblyComponentUsage::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_QuantifiedAssemblyComponentUsage::*)() const>(&StepRepr_QuantifiedAssemblyComponentUsage::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_QuantifiedAssemblyComponentUsage::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ReprItemAndLengthMeasureWithUnit ,opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnit> , StepRepr_ReprItemAndMeasureWithUnit>>(m.attr("StepRepr_ReprItemAndLengthMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndLengthMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndLengthMeasureWithUnit::*)() const>(&StepRepr_ReprItemAndLengthMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ReprItemAndLengthMeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ReprItemAndMeasureWithUnitAndQRI ,opencascade::handle<StepRepr_ReprItemAndMeasureWithUnitAndQRI> , StepRepr_ReprItemAndMeasureWithUnit>>(m.attr("StepRepr_ReprItemAndMeasureWithUnitAndQRI"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndMeasureWithUnitAndQRI::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndMeasureWithUnitAndQRI::*)() const>(&StepRepr_ReprItemAndMeasureWithUnitAndQRI::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ReprItemAndMeasureWithUnitAndQRI::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ReprItemAndPlaneAngleMeasureWithUnit ,opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnit> , StepRepr_ReprItemAndMeasureWithUnit>>(m.attr("StepRepr_ReprItemAndPlaneAngleMeasureWithUnit"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndPlaneAngleMeasureWithUnit::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndPlaneAngleMeasureWithUnit::*)() const>(&StepRepr_ReprItemAndPlaneAngleMeasureWithUnit::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ReprItemAndPlaneAngleMeasureWithUnit::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_RepresentationRelationshipWithTransformation ,opencascade::handle<StepRepr_RepresentationRelationshipWithTransformation> , StepRepr_ShapeRepresentationRelationship>>(m.attr("StepRepr_RepresentationRelationshipWithTransformation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_RepresentationRelationshipWithTransformation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_RepresentationRelationshipWithTransformation::*)() const>(&StepRepr_RepresentationRelationshipWithTransformation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_RepresentationRelationshipWithTransformation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_SpecifiedHigherUsageOccurrence ,opencascade::handle<StepRepr_SpecifiedHigherUsageOccurrence> , StepRepr_AssemblyComponentUsage>>(m.attr("StepRepr_SpecifiedHigherUsageOccurrence"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_SpecifiedHigherUsageOccurrence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_SpecifiedHigherUsageOccurrence::*)() const>(&StepRepr_SpecifiedHigherUsageOccurrence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_SpecifiedHigherUsageOccurrence::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_Tangent ,opencascade::handle<StepRepr_Tangent> , StepRepr_DerivedShapeAspect>>(m.attr("StepRepr_Tangent"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_Tangent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_Tangent::*)() const>(&StepRepr_Tangent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_Tangent::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ValueRange ,opencascade::handle<StepRepr_ValueRange> , StepRepr_CompoundRepresentationItem>>(m.attr("StepRepr_ValueRange"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ValueRange::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ValueRange::*)() const>(&StepRepr_ValueRange::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ValueRange::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_AllAroundShapeAspect ,opencascade::handle<StepRepr_AllAroundShapeAspect> , StepRepr_ContinuosShapeAspect>>(m.attr("StepRepr_AllAroundShapeAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_AllAroundShapeAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_AllAroundShapeAspect::*)() const>(&StepRepr_AllAroundShapeAspect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_AllAroundShapeAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_BetweenShapeAspect ,opencascade::handle<StepRepr_BetweenShapeAspect> , StepRepr_ContinuosShapeAspect>>(m.attr("StepRepr_BetweenShapeAspect"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_BetweenShapeAspect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_BetweenShapeAspect::*)() const>(&StepRepr_BetweenShapeAspect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_BetweenShapeAspect::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI ,opencascade::handle<StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI> , StepRepr_ReprItemAndMeasureWithUnitAndQRI>>(m.attr("StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI::*)() const>(&StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI ,opencascade::handle<StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI> , StepRepr_ReprItemAndMeasureWithUnitAndQRI>>(m.attr("StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI::*)() const>(&StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepRepr_ShapeRepresentationRelationshipWithTransformation ,opencascade::handle<StepRepr_ShapeRepresentationRelationshipWithTransformation> , StepRepr_RepresentationRelationshipWithTransformation>>(m.attr("StepRepr_ShapeRepresentationRelationshipWithTransformation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepRepr_ShapeRepresentationRelationshipWithTransformation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepRepr_ShapeRepresentationRelationshipWithTransformation::*)() const>(&StepRepr_ShapeRepresentationRelationshipWithTransformation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepRepr_ShapeRepresentationRelationshipWithTransformation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepRepr_Tangent.hxx
// ./opencascade/StepRepr_ParametricRepresentationContext.hxx
// ./opencascade/StepRepr_RepresentationRelationshipWithTransformation.hxx
// ./opencascade/StepRepr_Array1OfPropertyDefinitionRepresentation.hxx
// ./opencascade/StepRepr_PropertyDefinition.hxx
// ./opencascade/StepRepr_GlobalUnitAssignedContext.hxx
// ./opencascade/StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx
// ./opencascade/StepRepr_ProductDefinitionUsage.hxx
// ./opencascade/StepRepr_Representation.hxx
// ./opencascade/StepRepr_Array1OfRepresentationItem.hxx
// ./opencascade/StepRepr_ExternallyDefinedRepresentation.hxx
// ./opencascade/StepRepr_ConstructiveGeometryRepresentationRelationship.hxx
// ./opencascade/StepRepr_CentreOfSymmetry.hxx
// ./opencascade/StepRepr_CompShAspAndDatumFeatAndShAsp.hxx
// ./opencascade/StepRepr_IntegerRepresentationItem.hxx
// ./opencascade/StepRepr_CharacterizedDefinition.hxx
// ./opencascade/StepRepr_StructuralResponseProperty.hxx
// ./opencascade/StepRepr_ReprItemAndMeasureWithUnit.hxx
// ./opencascade/StepRepr_MaterialDesignation.hxx
// ./opencascade/StepRepr_DerivedShapeAspect.hxx
// ./opencascade/StepRepr_CompoundRepresentationItem.hxx
// ./opencascade/StepRepr_ShapeRepresentationRelationship.hxx
// ./opencascade/StepRepr_ShapeAspect.hxx
// ./opencascade/StepRepr_MeasureRepresentationItem.hxx
// ./opencascade/StepRepr_HArray1OfShapeAspect.hxx
// ./opencascade/StepRepr_RepresentedDefinition.hxx
// ./opencascade/StepRepr_ConstructiveGeometryRepresentation.hxx
// ./opencascade/StepRepr_HSequenceOfMaterialPropertyRepresentation.hxx
// ./opencascade/StepRepr_Transformation.hxx
// ./opencascade/StepRepr_PropertyDefinitionRelationship.hxx
// ./opencascade/StepRepr_RepresentationMap.hxx
// ./opencascade/StepRepr_ConfigurationDesignItem.hxx
// ./opencascade/StepRepr_ItemDefinedTransformation.hxx
// ./opencascade/StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI.hxx
// ./opencascade/StepRepr_RepresentationItem.hxx
// ./opencascade/StepRepr_Extension.hxx
// ./opencascade/StepRepr_HArray1OfPropertyDefinitionRepresentation.hxx
// ./opencascade/StepRepr_SequenceOfRepresentationItem.hxx
// ./opencascade/StepRepr_MappedItem.hxx
// ./opencascade/StepRepr_MaterialProperty.hxx
// ./opencascade/StepRepr_Array1OfShapeAspect.hxx
// ./opencascade/StepRepr_PromissoryUsageOccurrence.hxx
// ./opencascade/StepRepr_ShapeDefinition.hxx
// ./opencascade/StepRepr_FeatureForDatumTargetRelationship.hxx
// ./opencascade/StepRepr_ProductConcept.hxx
// ./opencascade/StepRepr_ReprItemAndMeasureWithUnitAndQRI.hxx
// ./opencascade/StepRepr_ShapeAspectRelationship.hxx
// ./opencascade/StepRepr_AssemblyComponentUsageSubstitute.hxx
// ./opencascade/StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx
// ./opencascade/StepRepr_HSequenceOfRepresentationItem.hxx
// ./opencascade/StepRepr_FunctionallyDefinedTransformation.hxx
// ./opencascade/StepRepr_ContinuosShapeAspect.hxx
// ./opencascade/StepRepr_ConfigurationItem.hxx
// ./opencascade/StepRepr_ValueRange.hxx
// ./opencascade/StepRepr_StructuralResponsePropertyDefinitionRepresentation.hxx
// ./opencascade/StepRepr_GeometricAlignment.hxx
// ./opencascade/StepRepr_ShapeAspectDerivingRelationship.hxx
// ./opencascade/StepRepr_ShapeAspectTransition.hxx
// ./opencascade/StepRepr_ParallelOffset.hxx
// ./opencascade/StepRepr_DataEnvironment.hxx
// ./opencascade/StepRepr_ProductDefinitionShape.hxx
// ./opencascade/StepRepr_RepresentationRelationship.hxx
// ./opencascade/StepRepr_SequenceOfMaterialPropertyRepresentation.hxx
// ./opencascade/StepRepr_DescriptiveRepresentationItem.hxx
// ./opencascade/StepRepr_NextAssemblyUsageOccurrence.hxx
// ./opencascade/StepRepr_RepresentationContext.hxx
// ./opencascade/StepRepr_CompositeShapeAspect.hxx
// ./opencascade/StepRepr_PerpendicularTo.hxx
// ./opencascade/StepRepr_HArray1OfRepresentationItem.hxx
// ./opencascade/StepRepr_ReprItemAndPlaneAngleMeasureWithUnit.hxx
// ./opencascade/StepRepr_CompositeGroupShapeAspect.hxx
// ./opencascade/StepRepr_ConfigurationEffectivity.hxx
// ./opencascade/StepRepr_AssemblyComponentUsage.hxx
// ./opencascade/StepRepr_HArray1OfMaterialPropertyRepresentation.hxx
// ./opencascade/StepRepr_AllAroundShapeAspect.hxx
// ./opencascade/StepRepr_CharacterizedRepresentation.hxx
// ./opencascade/StepRepr_ConfigurationDesign.hxx
// ./opencascade/StepRepr_ReprItemAndLengthMeasureWithUnit.hxx
// ./opencascade/StepRepr_Array1OfMaterialPropertyRepresentation.hxx
// ./opencascade/StepRepr_ShapeRepresentationRelationshipWithTransformation.hxx
// ./opencascade/StepRepr_DefinitionalRepresentation.hxx
// ./opencascade/StepRepr_PropertyDefinitionRepresentation.hxx
// ./opencascade/StepRepr_QuantifiedAssemblyComponentUsage.hxx
// ./opencascade/StepRepr_Apex.hxx
// ./opencascade/StepRepr_SpecifiedHigherUsageOccurrence.hxx
// ./opencascade/StepRepr_GlobalUncertaintyAssignedContext.hxx
// ./opencascade/StepRepr_SuppliedPartRelationship.hxx
// ./opencascade/StepRepr_BetweenShapeAspect.hxx
// ./opencascade/StepRepr_ValueRepresentationItem.hxx
// ./opencascade/StepRepr_MakeFromUsageOption.hxx
// ./opencascade/StepRepr_MaterialPropertyRepresentation.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<StepRepr_PropertyDefinitionRepresentation> >(m,"StepRepr_Array1OfPropertyDefinitionRepresentation");
    register_template_NCollection_Array1<opencascade::handle<StepRepr_RepresentationItem> >(m,"StepRepr_Array1OfRepresentationItem");
    register_template_NCollection_Sequence<opencascade::handle<StepRepr_RepresentationItem> >(m,"StepRepr_SequenceOfRepresentationItem");
    register_template_NCollection_Array1<opencascade::handle<StepRepr_ShapeAspect> >(m,"StepRepr_Array1OfShapeAspect");
    register_template_NCollection_Sequence<opencascade::handle<StepRepr_MaterialPropertyRepresentation> >(m,"StepRepr_SequenceOfMaterialPropertyRepresentation");
    register_template_NCollection_Array1<opencascade::handle<StepRepr_MaterialPropertyRepresentation> >(m,"StepRepr_Array1OfMaterialPropertyRepresentation");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
