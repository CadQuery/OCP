
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
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepBasic_Product.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepData_StepModel.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>

// module includes
#include <StepAP209_Construct.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepAP209(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepAP209"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepAP209_Construct , shared_ptr<StepAP209_Construct> , STEPConstruct_Tool>>(m.attr("StepAP209_Construct"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<XSControl_WorkSession> & >()  , py::arg("WS") )
    // custom constructors
    // methods
        .def("Init",
             (Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<XSControl_WorkSession> & ) ) static_cast<Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<XSControl_WorkSession> & ) >(&StepAP209_Construct::Init),
             R"#(Initializes tool; returns True if succeeded)#"  , py::arg("WS"))
        .def("IsDesing",
             (Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ) const) static_cast<Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ) const>(&StepAP209_Construct::IsDesing),
             R"#(None)#"  , py::arg("PD"))
        .def("IsAnalys",
             (Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ) const) static_cast<Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ) const>(&StepAP209_Construct::IsAnalys),
             R"#(None)#"  , py::arg("PD"))
        .def("FeaModel",
             (opencascade::handle<StepFEA_FeaModel> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_Product> & ) const) static_cast<opencascade::handle<StepFEA_FeaModel> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_Product> & ) const>(&StepAP209_Construct::FeaModel),
             R"#(None)#"  , py::arg("Prod"))
        .def("FeaModel",
             (opencascade::handle<StepFEA_FeaModel> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ) const) static_cast<opencascade::handle<StepFEA_FeaModel> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ) const>(&StepAP209_Construct::FeaModel),
             R"#(None)#"  , py::arg("PDF"))
        .def("GetFeaAxis2Placement3d",
             (opencascade::handle<StepFEA_FeaAxis2Placement3d> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_FeaModel> & ) const) static_cast<opencascade::handle<StepFEA_FeaAxis2Placement3d> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_FeaModel> & ) const>(&StepAP209_Construct::GetFeaAxis2Placement3d),
             R"#(None)#"  , py::arg("theFeaModel"))
        .def("IdealShape",
             (opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_Product> & ) const) static_cast<opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_Product> & ) const>(&StepAP209_Construct::IdealShape),
             R"#(None)#"  , py::arg("Prod"))
        .def("IdealShape",
             (opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ) const) static_cast<opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ) const>(&StepAP209_Construct::IdealShape),
             R"#(None)#"  , py::arg("PDF"))
        .def("NominShape",
             (opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_Product> & ) const) static_cast<opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_Product> & ) const>(&StepAP209_Construct::NominShape),
             R"#(None)#"  , py::arg("Prod"))
        .def("NominShape",
             (opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ) const) static_cast<opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinitionFormation> & ) const>(&StepAP209_Construct::NominShape),
             R"#(None)#"  , py::arg("PDF"))
        .def("GetElementMaterial",
             (opencascade::handle<StepElement_HSequenceOfElementMaterial> (StepAP209_Construct::*)() const) static_cast<opencascade::handle<StepElement_HSequenceOfElementMaterial> (StepAP209_Construct::*)() const>(&StepAP209_Construct::GetElementMaterial),
             R"#(None)#" )
        .def("GetElemGeomRelat",
             (opencascade::handle<StepFEA_HSequenceOfElementGeometricRelationship> (StepAP209_Construct::*)() const) static_cast<opencascade::handle<StepFEA_HSequenceOfElementGeometricRelationship> (StepAP209_Construct::*)() const>(&StepAP209_Construct::GetElemGeomRelat),
             R"#(None)#" )
        .def("GetElements1D",
             (opencascade::handle<StepFEA_HSequenceOfElementRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_FeaModel> & ) const) static_cast<opencascade::handle<StepFEA_HSequenceOfElementRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_FeaModel> & ) const>(&StepAP209_Construct::GetElements1D),
             R"#(None)#"  , py::arg("theFeaModel"))
        .def("GetElements2D",
             (opencascade::handle<StepFEA_HSequenceOfElementRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_FeaModel> & ) const) static_cast<opencascade::handle<StepFEA_HSequenceOfElementRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_FeaModel> & ) const>(&StepAP209_Construct::GetElements2D),
             R"#(None)#"  , py::arg("theFEAModel"))
        .def("GetElements3D",
             (opencascade::handle<StepFEA_HSequenceOfElementRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_FeaModel> & ) const) static_cast<opencascade::handle<StepFEA_HSequenceOfElementRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_FeaModel> & ) const>(&StepAP209_Construct::GetElements3D),
             R"#(None)#"  , py::arg("theFEAModel"))
        .def("GetCurElemSection",
             (opencascade::handle<StepElement_HSequenceOfCurveElementSectionDefinition> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_Curve3dElementRepresentation> & ) const) static_cast<opencascade::handle<StepElement_HSequenceOfCurveElementSectionDefinition> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_Curve3dElementRepresentation> & ) const>(&StepAP209_Construct::GetCurElemSection),
             R"#(Getting list of curve_element_section_definitions for given element_representation)#"  , py::arg("ElemRepr"))
        .def("GetShReprForElem",
             (opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_ElementRepresentation> & ) const) static_cast<opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepFEA_ElementRepresentation> & ) const>(&StepAP209_Construct::GetShReprForElem),
             R"#(None)#"  , py::arg("ElemRepr"))
        .def("CreateAnalysStructure",
             (Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_Product> & ) const) static_cast<Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_Product> & ) const>(&StepAP209_Construct::CreateAnalysStructure),
             R"#(Create empty structure for idealized_analysis_shape)#"  , py::arg("Prod"))
        .def("CreateFeaStructure",
             (Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_Product> & ) const) static_cast<Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_Product> & ) const>(&StepAP209_Construct::CreateFeaStructure),
             R"#(Create fea structure)#"  , py::arg("Prod"))
        .def("ReplaceCcDesingToApplied",
             (Standard_Boolean (StepAP209_Construct::*)() const) static_cast<Standard_Boolean (StepAP209_Construct::*)() const>(&StepAP209_Construct::ReplaceCcDesingToApplied),
             R"#(Put into model entities Applied... for AP209 instead of entities CcDesing... from AP203.)#" )
        .def("CreateAddingEntities",
             (Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinition> & ) const) static_cast<Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinition> & ) const>(&StepAP209_Construct::CreateAddingEntities),
             R"#(Create approval.. , date.. , time.. , person.. and organization.. entities for analysis structure)#"  , py::arg("AnaPD"))
        .def("CreateAP203Structure",
             (opencascade::handle<StepData_StepModel> (StepAP209_Construct::*)() const) static_cast<opencascade::handle<StepData_StepModel> (StepAP209_Construct::*)() const>(&StepAP209_Construct::CreateAP203Structure),
             R"#(Create AP203 structure from existing AP209 structure)#" )
        .def("CreateAdding203Entities",
             (Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinition> & , opencascade::handle<StepData_StepModel> & ) const) static_cast<Standard_Boolean (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinition> & , opencascade::handle<StepData_StepModel> & ) const>(&StepAP209_Construct::CreateAdding203Entities),
             R"#(Create approval.. , date.. , time.. , person.. and organization.. entities for 203 structure)#"  , py::arg("PD"),  py::arg("aModel"))
        .def("FeaModel",
             (opencascade::handle<StepFEA_FeaModel> (StepAP209_Construct::*)( const opencascade::handle<StepRepr_ProductDefinitionShape> & ) const) static_cast<opencascade::handle<StepFEA_FeaModel> (StepAP209_Construct::*)( const opencascade::handle<StepRepr_ProductDefinitionShape> & ) const>(&StepAP209_Construct::FeaModel),
             R"#(None)#"  , py::arg("PDS"))
        .def("FeaModel",
             (opencascade::handle<StepFEA_FeaModel> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinition> & ) const) static_cast<opencascade::handle<StepFEA_FeaModel> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinition> & ) const>(&StepAP209_Construct::FeaModel),
             R"#(None)#"  , py::arg("PD"))
        .def("IdealShape",
             (opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinition> & ) const) static_cast<opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepBasic_ProductDefinition> & ) const>(&StepAP209_Construct::IdealShape),
             R"#(None)#"  , py::arg("PD"))
        .def("IdealShape",
             (opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepRepr_ProductDefinitionShape> & ) const) static_cast<opencascade::handle<StepShape_ShapeRepresentation> (StepAP209_Construct::*)( const opencascade::handle<StepRepr_ProductDefinitionShape> & ) const>(&StepAP209_Construct::IdealShape),
             R"#(None)#"  , py::arg("PDS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\StepAP209_Construct.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
