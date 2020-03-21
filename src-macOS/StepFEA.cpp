
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
#include <StepData_SelectMember.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_FeaParametricPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>

// module includes
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_AlignedSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx>
#include <StepFEA_Array1OfCurveElementEndOffset.hxx>
#include <StepFEA_Array1OfCurveElementEndRelease.hxx>
#include <StepFEA_Array1OfCurveElementInterval.hxx>
#include <StepFEA_Array1OfDegreeOfFreedom.hxx>
#include <StepFEA_Array1OfElementRepresentation.hxx>
#include <StepFEA_Array1OfNodeRepresentation.hxx>
#include <StepFEA_ConstantSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_CoordinateSystemType.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <StepFEA_CurveEdge.hxx>
#include <StepFEA_CurveElementEndCoordinateSystem.hxx>
#include <StepFEA_CurveElementEndOffset.hxx>
#include <StepFEA_CurveElementEndRelease.hxx>
#include <StepFEA_CurveElementInterval.hxx>
#include <StepFEA_CurveElementIntervalConstant.hxx>
#include <StepFEA_CurveElementIntervalLinearlyVarying.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepFEA_DegreeOfFreedom.hxx>
#include <StepFEA_DegreeOfFreedomMember.hxx>
#include <StepFEA_DummyNode.hxx>
#include <StepFEA_ElementGeometricRelationship.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepFEA_ElementOrElementGroup.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepFEA_ElementVolume.hxx>
#include <StepFEA_EnumeratedDegreeOfFreedom.hxx>
#include <StepFEA_FeaAreaDensity.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepFEA_FeaCurveSectionGeometricRelationship.hxx>
#include <StepFEA_FeaGroup.hxx>
#include <StepFEA_FeaLinearElasticity.hxx>
#include <StepFEA_FeaMassDensity.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentation.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepFEA_FeaModelDefinition.hxx>
#include <StepFEA_FeaMoistureAbsorption.hxx>
#include <StepFEA_FeaParametricPoint.hxx>
#include <StepFEA_FeaRepresentationItem.hxx>
#include <StepFEA_FeaSecantCoefficientOfLinearThermalExpansion.hxx>
#include <StepFEA_FeaShellBendingStiffness.hxx>
#include <StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx>
#include <StepFEA_FeaShellMembraneStiffness.hxx>
#include <StepFEA_FeaShellShearStiffness.hxx>
#include <StepFEA_FeaSurfaceSectionGeometricRelationship.hxx>
#include <StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion.hxx>
#include <StepFEA_FreedomAndCoefficient.hxx>
#include <StepFEA_FreedomsList.hxx>
#include <StepFEA_GeometricNode.hxx>
#include <StepFEA_HArray1OfCurveElementEndOffset.hxx>
#include <StepFEA_HArray1OfCurveElementEndRelease.hxx>
#include <StepFEA_HArray1OfCurveElementInterval.hxx>
#include <StepFEA_HArray1OfDegreeOfFreedom.hxx>
#include <StepFEA_HArray1OfElementRepresentation.hxx>
#include <StepFEA_HArray1OfNodeRepresentation.hxx>
#include <StepFEA_HSequenceOfCurve3dElementProperty.hxx>
#include <StepFEA_HSequenceOfElementGeometricRelationship.hxx>
#include <StepFEA_HSequenceOfElementRepresentation.hxx>
#include <StepFEA_HSequenceOfNodeRepresentation.hxx>
#include <StepFEA_Node.hxx>
#include <StepFEA_NodeDefinition.hxx>
#include <StepFEA_NodeGroup.hxx>
#include <StepFEA_NodeRepresentation.hxx>
#include <StepFEA_NodeSet.hxx>
#include <StepFEA_NodeWithSolutionCoordinateSystem.hxx>
#include <StepFEA_NodeWithVector.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_ParametricSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_SequenceOfCurve3dElementProperty.hxx>
#include <StepFEA_SequenceOfElementGeometricRelationship.hxx>
#include <StepFEA_SequenceOfElementRepresentation.hxx>
#include <StepFEA_SequenceOfNodeRepresentation.hxx>
#include <StepFEA_Surface3dElementRepresentation.hxx>
#include <StepFEA_SymmetricTensor22d.hxx>
#include <StepFEA_SymmetricTensor23d.hxx>
#include <StepFEA_SymmetricTensor23dMember.hxx>
#include <StepFEA_SymmetricTensor42d.hxx>
#include <StepFEA_SymmetricTensor43d.hxx>
#include <StepFEA_SymmetricTensor43dMember.hxx>
#include <StepFEA_UnspecifiedValue.hxx>
#include <StepFEA_Volume3dElementRepresentation.hxx>

// template related includes
// ./opencascade/StepFEA_Array1OfCurveElementInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfNodeRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfElementRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfCurveElementEndRelease.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfElementRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfElementGeometricRelationship.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfNodeRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfDegreeOfFreedom.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfCurve3dElementProperty.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfCurveElementEndOffset.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepFEA(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepFEA"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepFEA_Curve3dElementProperty ,opencascade::handle<StepFEA_Curve3dElementProperty> , Standard_Transient>>(m.attr("StepFEA_Curve3dElementProperty"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_Curve3dElementProperty::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_Curve3dElementProperty::*)() const>(&StepFEA_Curve3dElementProperty::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_Curve3dElementProperty::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementEndCoordinateSystem , shared_ptr<StepFEA_CurveElementEndCoordinateSystem> , StepData_SelectType>>(m.attr("StepFEA_CurveElementEndCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_CurveElementEndCoordinateSystem::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_CurveElementEndCoordinateSystem::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_CurveElementEndCoordinateSystem::CaseNum),
             R"#(Recognizes a kind of CurveElementEndCoordinateSystem select type 1 -> FeaAxis2Placement3d from StepFEA 2 -> AlignedCurve3dElementCoordinateSystem from StepFEA 3 -> ParametricCurve3dElementCoordinateSystem from StepFEA 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementEndOffset ,opencascade::handle<StepFEA_CurveElementEndOffset> , Standard_Transient>>(m.attr("StepFEA_CurveElementEndOffset"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementEndOffset::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementEndOffset::*)() const>(&StepFEA_CurveElementEndOffset::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementEndOffset::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementEndRelease ,opencascade::handle<StepFEA_CurveElementEndRelease> , Standard_Transient>>(m.attr("StepFEA_CurveElementEndRelease"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementEndRelease::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementEndRelease::*)() const>(&StepFEA_CurveElementEndRelease::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementEndRelease::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementInterval ,opencascade::handle<StepFEA_CurveElementInterval> , Standard_Transient>>(m.attr("StepFEA_CurveElementInterval"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementInterval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementInterval::*)() const>(&StepFEA_CurveElementInterval::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementInterval::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementLocation ,opencascade::handle<StepFEA_CurveElementLocation> , Standard_Transient>>(m.attr("StepFEA_CurveElementLocation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementLocation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementLocation::*)() const>(&StepFEA_CurveElementLocation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementLocation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_DegreeOfFreedom , shared_ptr<StepFEA_DegreeOfFreedom> , StepData_SelectType>>(m.attr("StepFEA_DegreeOfFreedom"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_DegreeOfFreedom::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_DegreeOfFreedom::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_DegreeOfFreedom::CaseNum),
             R"#(Recognizes a kind of CurveElementFreedom select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepFEA_DegreeOfFreedom::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepFEA_DegreeOfFreedom::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepFEA_DegreeOfFreedom::CaseMem),
             R"#(Recognizes a items of select member CurveElementFreedomMember 1 -> EnumeratedCurveElementFreedom 2 -> ApplicationDefinedDegreeOfFreedom 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepFEA_DegreeOfFreedom::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepFEA_DegreeOfFreedom::*)() const>(&StepFEA_DegreeOfFreedom::NewMember),
             R"#(Returns a new select member the type CurveElementFreedomMember)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_DegreeOfFreedomMember ,opencascade::handle<StepFEA_DegreeOfFreedomMember> , StepData_SelectNamed>>(m.attr("StepFEA_DegreeOfFreedomMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepFEA_DegreeOfFreedomMember::*)() const) static_cast<Standard_Boolean (StepFEA_DegreeOfFreedomMember::*)() const>(&StepFEA_DegreeOfFreedomMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepFEA_DegreeOfFreedomMember::*)() const) static_cast<Standard_CString (StepFEA_DegreeOfFreedomMember::*)() const>(&StepFEA_DegreeOfFreedomMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepFEA_DegreeOfFreedomMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepFEA_DegreeOfFreedomMember::*)( const Standard_CString ) >(&StepFEA_DegreeOfFreedomMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepFEA_DegreeOfFreedomMember::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepFEA_DegreeOfFreedomMember::*)( const Standard_CString ) const>(&StepFEA_DegreeOfFreedomMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_DegreeOfFreedomMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_DegreeOfFreedomMember::*)() const>(&StepFEA_DegreeOfFreedomMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_DegreeOfFreedomMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ElementGeometricRelationship ,opencascade::handle<StepFEA_ElementGeometricRelationship> , Standard_Transient>>(m.attr("StepFEA_ElementGeometricRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ElementGeometricRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ElementGeometricRelationship::*)() const>(&StepFEA_ElementGeometricRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ElementGeometricRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ElementOrElementGroup , shared_ptr<StepFEA_ElementOrElementGroup> , StepData_SelectType>>(m.attr("StepFEA_ElementOrElementGroup"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_ElementOrElementGroup::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_ElementOrElementGroup::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_ElementOrElementGroup::CaseNum),
             R"#(Recognizes a kind of ElementOrElementGroup select type 1 -> ElementRepresentation from StepFEA 2 -> ElementGroup from StepFEA 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ElementRepresentation ,opencascade::handle<StepFEA_ElementRepresentation> , StepRepr_Representation>>(m.attr("StepFEA_ElementRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ElementRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ElementRepresentation::*)() const>(&StepFEA_ElementRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ElementRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaAxis2Placement3d ,opencascade::handle<StepFEA_FeaAxis2Placement3d> , StepGeom_Axis2Placement3d>>(m.attr("StepFEA_FeaAxis2Placement3d"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaAxis2Placement3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaAxis2Placement3d::*)() const>(&StepFEA_FeaAxis2Placement3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaAxis2Placement3d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaCurveSectionGeometricRelationship ,opencascade::handle<StepFEA_FeaCurveSectionGeometricRelationship> , Standard_Transient>>(m.attr("StepFEA_FeaCurveSectionGeometricRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaCurveSectionGeometricRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaCurveSectionGeometricRelationship::*)() const>(&StepFEA_FeaCurveSectionGeometricRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaCurveSectionGeometricRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaGroup ,opencascade::handle<StepFEA_FeaGroup> , StepBasic_Group>>(m.attr("StepFEA_FeaGroup"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaGroup::*)() const>(&StepFEA_FeaGroup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaGroup::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaMaterialPropertyRepresentation ,opencascade::handle<StepFEA_FeaMaterialPropertyRepresentation> , StepRepr_MaterialPropertyRepresentation>>(m.attr("StepFEA_FeaMaterialPropertyRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaMaterialPropertyRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaMaterialPropertyRepresentation::*)() const>(&StepFEA_FeaMaterialPropertyRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaMaterialPropertyRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaMaterialPropertyRepresentationItem ,opencascade::handle<StepFEA_FeaMaterialPropertyRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepFEA_FeaMaterialPropertyRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaMaterialPropertyRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaMaterialPropertyRepresentationItem::*)() const>(&StepFEA_FeaMaterialPropertyRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaMaterialPropertyRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaModel ,opencascade::handle<StepFEA_FeaModel> , StepRepr_Representation>>(m.attr("StepFEA_FeaModel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaModel::*)() const>(&StepFEA_FeaModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaModelDefinition ,opencascade::handle<StepFEA_FeaModelDefinition> , StepRepr_ShapeAspect>>(m.attr("StepFEA_FeaModelDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaModelDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaModelDefinition::*)() const>(&StepFEA_FeaModelDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaModelDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaParametricPoint ,opencascade::handle<StepFEA_FeaParametricPoint> , StepGeom_Point>>(m.attr("StepFEA_FeaParametricPoint"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaParametricPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaParametricPoint::*)() const>(&StepFEA_FeaParametricPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaParametricPoint::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaRepresentationItem ,opencascade::handle<StepFEA_FeaRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepFEA_FeaRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaRepresentationItem::*)() const>(&StepFEA_FeaRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaSurfaceSectionGeometricRelationship ,opencascade::handle<StepFEA_FeaSurfaceSectionGeometricRelationship> , Standard_Transient>>(m.attr("StepFEA_FeaSurfaceSectionGeometricRelationship"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaSurfaceSectionGeometricRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaSurfaceSectionGeometricRelationship::*)() const>(&StepFEA_FeaSurfaceSectionGeometricRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaSurfaceSectionGeometricRelationship::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FreedomAndCoefficient ,opencascade::handle<StepFEA_FreedomAndCoefficient> , Standard_Transient>>(m.attr("StepFEA_FreedomAndCoefficient"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FreedomAndCoefficient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FreedomAndCoefficient::*)() const>(&StepFEA_FreedomAndCoefficient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FreedomAndCoefficient::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FreedomsList ,opencascade::handle<StepFEA_FreedomsList> , Standard_Transient>>(m.attr("StepFEA_FreedomsList"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FreedomsList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FreedomsList::*)() const>(&StepFEA_FreedomsList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FreedomsList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_HArray1OfCurveElementEndOffset ,opencascade::handle<StepFEA_HArray1OfCurveElementEndOffset> , StepFEA_Array1OfCurveElementEndOffset, Standard_Transient>>(m.attr("StepFEA_HArray1OfCurveElementEndOffset"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepFEA_CurveElementEndOffset> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepFEA_CurveElementEndOffset> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepFEA_Array1OfCurveElementEndOffset & (StepFEA_HArray1OfCurveElementEndOffset::*)() const) static_cast<const StepFEA_Array1OfCurveElementEndOffset & (StepFEA_HArray1OfCurveElementEndOffset::*)() const>(&StepFEA_HArray1OfCurveElementEndOffset::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepFEA_Array1OfCurveElementEndOffset & (StepFEA_HArray1OfCurveElementEndOffset::*)() ) static_cast<StepFEA_Array1OfCurveElementEndOffset & (StepFEA_HArray1OfCurveElementEndOffset::*)() >(&StepFEA_HArray1OfCurveElementEndOffset::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfCurveElementEndOffset::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfCurveElementEndOffset::*)() const>(&StepFEA_HArray1OfCurveElementEndOffset::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_HArray1OfCurveElementEndOffset::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_HArray1OfCurveElementEndOffset::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_HArray1OfCurveElementEndRelease ,opencascade::handle<StepFEA_HArray1OfCurveElementEndRelease> , StepFEA_Array1OfCurveElementEndRelease, Standard_Transient>>(m.attr("StepFEA_HArray1OfCurveElementEndRelease"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepFEA_CurveElementEndRelease> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepFEA_CurveElementEndRelease> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepFEA_Array1OfCurveElementEndRelease & (StepFEA_HArray1OfCurveElementEndRelease::*)() const) static_cast<const StepFEA_Array1OfCurveElementEndRelease & (StepFEA_HArray1OfCurveElementEndRelease::*)() const>(&StepFEA_HArray1OfCurveElementEndRelease::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepFEA_Array1OfCurveElementEndRelease & (StepFEA_HArray1OfCurveElementEndRelease::*)() ) static_cast<StepFEA_Array1OfCurveElementEndRelease & (StepFEA_HArray1OfCurveElementEndRelease::*)() >(&StepFEA_HArray1OfCurveElementEndRelease::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfCurveElementEndRelease::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfCurveElementEndRelease::*)() const>(&StepFEA_HArray1OfCurveElementEndRelease::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_HArray1OfCurveElementEndRelease::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_HArray1OfCurveElementEndRelease::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_HArray1OfCurveElementInterval ,opencascade::handle<StepFEA_HArray1OfCurveElementInterval> , StepFEA_Array1OfCurveElementInterval, Standard_Transient>>(m.attr("StepFEA_HArray1OfCurveElementInterval"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepFEA_CurveElementInterval> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepFEA_CurveElementInterval> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepFEA_Array1OfCurveElementInterval & (StepFEA_HArray1OfCurveElementInterval::*)() const) static_cast<const StepFEA_Array1OfCurveElementInterval & (StepFEA_HArray1OfCurveElementInterval::*)() const>(&StepFEA_HArray1OfCurveElementInterval::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepFEA_Array1OfCurveElementInterval & (StepFEA_HArray1OfCurveElementInterval::*)() ) static_cast<StepFEA_Array1OfCurveElementInterval & (StepFEA_HArray1OfCurveElementInterval::*)() >(&StepFEA_HArray1OfCurveElementInterval::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfCurveElementInterval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfCurveElementInterval::*)() const>(&StepFEA_HArray1OfCurveElementInterval::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_HArray1OfCurveElementInterval::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_HArray1OfCurveElementInterval::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_HArray1OfDegreeOfFreedom ,opencascade::handle<StepFEA_HArray1OfDegreeOfFreedom> , StepFEA_Array1OfDegreeOfFreedom, Standard_Transient>>(m.attr("StepFEA_HArray1OfDegreeOfFreedom"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepFEA_DegreeOfFreedom & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepFEA_DegreeOfFreedom> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepFEA_Array1OfDegreeOfFreedom & (StepFEA_HArray1OfDegreeOfFreedom::*)() const) static_cast<const StepFEA_Array1OfDegreeOfFreedom & (StepFEA_HArray1OfDegreeOfFreedom::*)() const>(&StepFEA_HArray1OfDegreeOfFreedom::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepFEA_Array1OfDegreeOfFreedom & (StepFEA_HArray1OfDegreeOfFreedom::*)() ) static_cast<StepFEA_Array1OfDegreeOfFreedom & (StepFEA_HArray1OfDegreeOfFreedom::*)() >(&StepFEA_HArray1OfDegreeOfFreedom::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfDegreeOfFreedom::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfDegreeOfFreedom::*)() const>(&StepFEA_HArray1OfDegreeOfFreedom::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_HArray1OfDegreeOfFreedom::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_HArray1OfDegreeOfFreedom::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_HArray1OfElementRepresentation ,opencascade::handle<StepFEA_HArray1OfElementRepresentation> , StepFEA_Array1OfElementRepresentation, Standard_Transient>>(m.attr("StepFEA_HArray1OfElementRepresentation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepFEA_ElementRepresentation> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepFEA_ElementRepresentation> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepFEA_Array1OfElementRepresentation & (StepFEA_HArray1OfElementRepresentation::*)() const) static_cast<const StepFEA_Array1OfElementRepresentation & (StepFEA_HArray1OfElementRepresentation::*)() const>(&StepFEA_HArray1OfElementRepresentation::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepFEA_Array1OfElementRepresentation & (StepFEA_HArray1OfElementRepresentation::*)() ) static_cast<StepFEA_Array1OfElementRepresentation & (StepFEA_HArray1OfElementRepresentation::*)() >(&StepFEA_HArray1OfElementRepresentation::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfElementRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfElementRepresentation::*)() const>(&StepFEA_HArray1OfElementRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_HArray1OfElementRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_HArray1OfElementRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_HArray1OfNodeRepresentation ,opencascade::handle<StepFEA_HArray1OfNodeRepresentation> , StepFEA_Array1OfNodeRepresentation, Standard_Transient>>(m.attr("StepFEA_HArray1OfNodeRepresentation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepFEA_NodeRepresentation> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepFEA_NodeRepresentation> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepFEA_Array1OfNodeRepresentation & (StepFEA_HArray1OfNodeRepresentation::*)() const) static_cast<const StepFEA_Array1OfNodeRepresentation & (StepFEA_HArray1OfNodeRepresentation::*)() const>(&StepFEA_HArray1OfNodeRepresentation::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepFEA_Array1OfNodeRepresentation & (StepFEA_HArray1OfNodeRepresentation::*)() ) static_cast<StepFEA_Array1OfNodeRepresentation & (StepFEA_HArray1OfNodeRepresentation::*)() >(&StepFEA_HArray1OfNodeRepresentation::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfNodeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfNodeRepresentation::*)() const>(&StepFEA_HArray1OfNodeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_HArray1OfNodeRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_HArray1OfNodeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_HSequenceOfCurve3dElementProperty ,opencascade::handle<StepFEA_HSequenceOfCurve3dElementProperty> , StepFEA_SequenceOfCurve3dElementProperty, Standard_Transient>>(m.attr("StepFEA_HSequenceOfCurve3dElementProperty"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepFEA_Curve3dElementProperty> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StepFEA_SequenceOfCurve3dElementProperty & (StepFEA_HSequenceOfCurve3dElementProperty::*)() const) static_cast<const StepFEA_SequenceOfCurve3dElementProperty & (StepFEA_HSequenceOfCurve3dElementProperty::*)() const>(&StepFEA_HSequenceOfCurve3dElementProperty::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepFEA_HSequenceOfCurve3dElementProperty::*)(  const opencascade::handle<StepFEA_Curve3dElementProperty> & ) ) static_cast<void (StepFEA_HSequenceOfCurve3dElementProperty::*)(  const opencascade::handle<StepFEA_Curve3dElementProperty> & ) >(&StepFEA_HSequenceOfCurve3dElementProperty::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepFEA_HSequenceOfCurve3dElementProperty::*)( NCollection_Sequence<opencascade::handle<StepFEA_Curve3dElementProperty> > & ) ) static_cast<void (StepFEA_HSequenceOfCurve3dElementProperty::*)( NCollection_Sequence<opencascade::handle<StepFEA_Curve3dElementProperty> > & ) >(&StepFEA_HSequenceOfCurve3dElementProperty::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepFEA_SequenceOfCurve3dElementProperty & (StepFEA_HSequenceOfCurve3dElementProperty::*)() ) static_cast<StepFEA_SequenceOfCurve3dElementProperty & (StepFEA_HSequenceOfCurve3dElementProperty::*)() >(&StepFEA_HSequenceOfCurve3dElementProperty::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_HSequenceOfCurve3dElementProperty::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_HSequenceOfCurve3dElementProperty::*)() const>(&StepFEA_HSequenceOfCurve3dElementProperty::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_HSequenceOfCurve3dElementProperty::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_HSequenceOfCurve3dElementProperty::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_HSequenceOfElementGeometricRelationship ,opencascade::handle<StepFEA_HSequenceOfElementGeometricRelationship> , StepFEA_SequenceOfElementGeometricRelationship, Standard_Transient>>(m.attr("StepFEA_HSequenceOfElementGeometricRelationship"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepFEA_ElementGeometricRelationship> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StepFEA_SequenceOfElementGeometricRelationship & (StepFEA_HSequenceOfElementGeometricRelationship::*)() const) static_cast<const StepFEA_SequenceOfElementGeometricRelationship & (StepFEA_HSequenceOfElementGeometricRelationship::*)() const>(&StepFEA_HSequenceOfElementGeometricRelationship::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepFEA_HSequenceOfElementGeometricRelationship::*)(  const opencascade::handle<StepFEA_ElementGeometricRelationship> & ) ) static_cast<void (StepFEA_HSequenceOfElementGeometricRelationship::*)(  const opencascade::handle<StepFEA_ElementGeometricRelationship> & ) >(&StepFEA_HSequenceOfElementGeometricRelationship::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepFEA_HSequenceOfElementGeometricRelationship::*)( NCollection_Sequence<opencascade::handle<StepFEA_ElementGeometricRelationship> > & ) ) static_cast<void (StepFEA_HSequenceOfElementGeometricRelationship::*)( NCollection_Sequence<opencascade::handle<StepFEA_ElementGeometricRelationship> > & ) >(&StepFEA_HSequenceOfElementGeometricRelationship::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepFEA_SequenceOfElementGeometricRelationship & (StepFEA_HSequenceOfElementGeometricRelationship::*)() ) static_cast<StepFEA_SequenceOfElementGeometricRelationship & (StepFEA_HSequenceOfElementGeometricRelationship::*)() >(&StepFEA_HSequenceOfElementGeometricRelationship::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_HSequenceOfElementGeometricRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_HSequenceOfElementGeometricRelationship::*)() const>(&StepFEA_HSequenceOfElementGeometricRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_HSequenceOfElementGeometricRelationship::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_HSequenceOfElementGeometricRelationship::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_HSequenceOfElementRepresentation ,opencascade::handle<StepFEA_HSequenceOfElementRepresentation> , StepFEA_SequenceOfElementRepresentation, Standard_Transient>>(m.attr("StepFEA_HSequenceOfElementRepresentation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepFEA_ElementRepresentation> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StepFEA_SequenceOfElementRepresentation & (StepFEA_HSequenceOfElementRepresentation::*)() const) static_cast<const StepFEA_SequenceOfElementRepresentation & (StepFEA_HSequenceOfElementRepresentation::*)() const>(&StepFEA_HSequenceOfElementRepresentation::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepFEA_HSequenceOfElementRepresentation::*)(  const opencascade::handle<StepFEA_ElementRepresentation> & ) ) static_cast<void (StepFEA_HSequenceOfElementRepresentation::*)(  const opencascade::handle<StepFEA_ElementRepresentation> & ) >(&StepFEA_HSequenceOfElementRepresentation::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepFEA_HSequenceOfElementRepresentation::*)( NCollection_Sequence<opencascade::handle<StepFEA_ElementRepresentation> > & ) ) static_cast<void (StepFEA_HSequenceOfElementRepresentation::*)( NCollection_Sequence<opencascade::handle<StepFEA_ElementRepresentation> > & ) >(&StepFEA_HSequenceOfElementRepresentation::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepFEA_SequenceOfElementRepresentation & (StepFEA_HSequenceOfElementRepresentation::*)() ) static_cast<StepFEA_SequenceOfElementRepresentation & (StepFEA_HSequenceOfElementRepresentation::*)() >(&StepFEA_HSequenceOfElementRepresentation::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_HSequenceOfElementRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_HSequenceOfElementRepresentation::*)() const>(&StepFEA_HSequenceOfElementRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_HSequenceOfElementRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_HSequenceOfElementRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_HSequenceOfNodeRepresentation ,opencascade::handle<StepFEA_HSequenceOfNodeRepresentation> , StepFEA_SequenceOfNodeRepresentation, Standard_Transient>>(m.attr("StepFEA_HSequenceOfNodeRepresentation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<StepFEA_NodeRepresentation> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const StepFEA_SequenceOfNodeRepresentation & (StepFEA_HSequenceOfNodeRepresentation::*)() const) static_cast<const StepFEA_SequenceOfNodeRepresentation & (StepFEA_HSequenceOfNodeRepresentation::*)() const>(&StepFEA_HSequenceOfNodeRepresentation::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (StepFEA_HSequenceOfNodeRepresentation::*)(  const opencascade::handle<StepFEA_NodeRepresentation> & ) ) static_cast<void (StepFEA_HSequenceOfNodeRepresentation::*)(  const opencascade::handle<StepFEA_NodeRepresentation> & ) >(&StepFEA_HSequenceOfNodeRepresentation::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (StepFEA_HSequenceOfNodeRepresentation::*)( NCollection_Sequence<opencascade::handle<StepFEA_NodeRepresentation> > & ) ) static_cast<void (StepFEA_HSequenceOfNodeRepresentation::*)( NCollection_Sequence<opencascade::handle<StepFEA_NodeRepresentation> > & ) >(&StepFEA_HSequenceOfNodeRepresentation::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (StepFEA_SequenceOfNodeRepresentation & (StepFEA_HSequenceOfNodeRepresentation::*)() ) static_cast<StepFEA_SequenceOfNodeRepresentation & (StepFEA_HSequenceOfNodeRepresentation::*)() >(&StepFEA_HSequenceOfNodeRepresentation::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_HSequenceOfNodeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_HSequenceOfNodeRepresentation::*)() const>(&StepFEA_HSequenceOfNodeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_HSequenceOfNodeRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_HSequenceOfNodeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeDefinition ,opencascade::handle<StepFEA_NodeDefinition> , StepRepr_ShapeAspect>>(m.attr("StepFEA_NodeDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_NodeDefinition::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_NodeDefinition::*)() const>(&StepFEA_NodeDefinition::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_NodeDefinition::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeRepresentation ,opencascade::handle<StepFEA_NodeRepresentation> , StepRepr_Representation>>(m.attr("StepFEA_NodeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_NodeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_NodeRepresentation::*)() const>(&StepFEA_NodeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_NodeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeSet ,opencascade::handle<StepFEA_NodeSet> , StepGeom_GeometricRepresentationItem>>(m.attr("StepFEA_NodeSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_NodeSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_NodeSet::*)() const>(&StepFEA_NodeSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_NodeSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor22d , shared_ptr<StepFEA_SymmetricTensor22d> , StepData_SelectType>>(m.attr("StepFEA_SymmetricTensor22d"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_SymmetricTensor22d::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_SymmetricTensor22d::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_SymmetricTensor22d::CaseNum),
             R"#(Recognizes a kind of SymmetricTensor22d select type 1 -> HArray1OfReal from TColStd 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor23d , shared_ptr<StepFEA_SymmetricTensor23d> , StepData_SelectType>>(m.attr("StepFEA_SymmetricTensor23d"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_SymmetricTensor23d::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_SymmetricTensor23d::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_SymmetricTensor23d::CaseNum),
             R"#(Recognizes a kind of SymmetricTensor23d select type return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepFEA_SymmetricTensor23d::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepFEA_SymmetricTensor23d::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepFEA_SymmetricTensor23d::CaseMem),
             R"#(Recognizes a items of select member SymmetricTensor23dMember 1 -> IsotropicSymmetricTensor23d 2 -> OrthotropicSymmetricTensor23d 3 -> AnisotropicSymmetricTensor23d 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepFEA_SymmetricTensor23d::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepFEA_SymmetricTensor23d::*)() const>(&StepFEA_SymmetricTensor23d::NewMember),
             R"#(Returns a new select member the type SymmetricTensor23dMember)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor23dMember ,opencascade::handle<StepFEA_SymmetricTensor23dMember> , StepData_SelectArrReal>>(m.attr("StepFEA_SymmetricTensor23dMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepFEA_SymmetricTensor23dMember::*)() const) static_cast<Standard_Boolean (StepFEA_SymmetricTensor23dMember::*)() const>(&StepFEA_SymmetricTensor23dMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepFEA_SymmetricTensor23dMember::*)() const) static_cast<Standard_CString (StepFEA_SymmetricTensor23dMember::*)() const>(&StepFEA_SymmetricTensor23dMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepFEA_SymmetricTensor23dMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepFEA_SymmetricTensor23dMember::*)( const Standard_CString ) >(&StepFEA_SymmetricTensor23dMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepFEA_SymmetricTensor23dMember::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepFEA_SymmetricTensor23dMember::*)( const Standard_CString ) const>(&StepFEA_SymmetricTensor23dMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_SymmetricTensor23dMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_SymmetricTensor23dMember::*)() const>(&StepFEA_SymmetricTensor23dMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_SymmetricTensor23dMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor42d , shared_ptr<StepFEA_SymmetricTensor42d> , StepData_SelectType>>(m.attr("StepFEA_SymmetricTensor42d"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_SymmetricTensor42d::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_SymmetricTensor42d::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_SymmetricTensor42d::CaseNum),
             R"#(Recognizes a kind of SymmetricTensor42d select type 1 -> HArray1OfReal from TColStd 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor43d , shared_ptr<StepFEA_SymmetricTensor43d> , StepData_SelectType>>(m.attr("StepFEA_SymmetricTensor43d"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_SymmetricTensor43d::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_SymmetricTensor43d::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_SymmetricTensor43d::CaseNum),
             R"#(return 0)#"  , py::arg("ent"))
        .def("CaseMem",
             (Standard_Integer (StepFEA_SymmetricTensor43d::*)( const opencascade::handle<StepData_SelectMember> & ) const) static_cast<Standard_Integer (StepFEA_SymmetricTensor43d::*)( const opencascade::handle<StepData_SelectMember> & ) const>(&StepFEA_SymmetricTensor43d::CaseMem),
             R"#(Recognizes a items of select member CurveElementFreedomMember 1 -> AnisotropicSymmetricTensor43d 2 -> FeaIsotropicSymmetricTensor43d 3 -> FeaIsoOrthotropicSymmetricTensor43d 4 -> FeaTransverseIsotropicSymmetricTensor43d 5 -> FeaColumnNormalisedOrthotropicSymmetricTensor43d 6 -> FeaColumnNormalisedMonoclinicSymmetricTensor43d 0 else)#"  , py::arg("ent"))
        .def("NewMember",
             (opencascade::handle<StepData_SelectMember> (StepFEA_SymmetricTensor43d::*)() const) static_cast<opencascade::handle<StepData_SelectMember> (StepFEA_SymmetricTensor43d::*)() const>(&StepFEA_SymmetricTensor43d::NewMember),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor43dMember ,opencascade::handle<StepFEA_SymmetricTensor43dMember> , StepData_SelectArrReal>>(m.attr("StepFEA_SymmetricTensor43dMember"))
    // constructors
    // custom constructors
    // methods
        .def("HasName",
             (Standard_Boolean (StepFEA_SymmetricTensor43dMember::*)() const) static_cast<Standard_Boolean (StepFEA_SymmetricTensor43dMember::*)() const>(&StepFEA_SymmetricTensor43dMember::HasName),
             R"#(Returns True if has name)#" )
        .def("Name",
             (Standard_CString (StepFEA_SymmetricTensor43dMember::*)() const) static_cast<Standard_CString (StepFEA_SymmetricTensor43dMember::*)() const>(&StepFEA_SymmetricTensor43dMember::Name),
             R"#(Returns set name)#" )
        .def("SetName",
             (Standard_Boolean (StepFEA_SymmetricTensor43dMember::*)( const Standard_CString ) ) static_cast<Standard_Boolean (StepFEA_SymmetricTensor43dMember::*)( const Standard_CString ) >(&StepFEA_SymmetricTensor43dMember::SetName),
             R"#(Set name)#"  , py::arg("name"))
        .def("Matches",
             (Standard_Boolean (StepFEA_SymmetricTensor43dMember::*)( const Standard_CString ) const) static_cast<Standard_Boolean (StepFEA_SymmetricTensor43dMember::*)( const Standard_CString ) const>(&StepFEA_SymmetricTensor43dMember::Matches),
             R"#(Tells if the name of a SelectMember matches a given one;)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_SymmetricTensor43dMember::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_SymmetricTensor43dMember::*)() const>(&StepFEA_SymmetricTensor43dMember::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_SymmetricTensor43dMember::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_AlignedCurve3dElementCoordinateSystem ,opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_AlignedCurve3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_AlignedCurve3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_AlignedCurve3dElementCoordinateSystem::*)() const>(&StepFEA_AlignedCurve3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_AlignedCurve3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_AlignedSurface3dElementCoordinateSystem ,opencascade::handle<StepFEA_AlignedSurface3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_AlignedSurface3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_AlignedSurface3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_AlignedSurface3dElementCoordinateSystem::*)() const>(&StepFEA_AlignedSurface3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_AlignedSurface3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ArbitraryVolume3dElementCoordinateSystem ,opencascade::handle<StepFEA_ArbitraryVolume3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_ArbitraryVolume3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ArbitraryVolume3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ArbitraryVolume3dElementCoordinateSystem::*)() const>(&StepFEA_ArbitraryVolume3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ArbitraryVolume3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ConstantSurface3dElementCoordinateSystem ,opencascade::handle<StepFEA_ConstantSurface3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_ConstantSurface3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ConstantSurface3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ConstantSurface3dElementCoordinateSystem::*)() const>(&StepFEA_ConstantSurface3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ConstantSurface3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_Curve3dElementRepresentation ,opencascade::handle<StepFEA_Curve3dElementRepresentation> , StepFEA_ElementRepresentation>>(m.attr("StepFEA_Curve3dElementRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_Curve3dElementRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_Curve3dElementRepresentation::*)() const>(&StepFEA_Curve3dElementRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_Curve3dElementRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementIntervalConstant ,opencascade::handle<StepFEA_CurveElementIntervalConstant> , StepFEA_CurveElementInterval>>(m.attr("StepFEA_CurveElementIntervalConstant"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementIntervalConstant::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementIntervalConstant::*)() const>(&StepFEA_CurveElementIntervalConstant::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementIntervalConstant::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementIntervalLinearlyVarying ,opencascade::handle<StepFEA_CurveElementIntervalLinearlyVarying> , StepFEA_CurveElementInterval>>(m.attr("StepFEA_CurveElementIntervalLinearlyVarying"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementIntervalLinearlyVarying::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementIntervalLinearlyVarying::*)() const>(&StepFEA_CurveElementIntervalLinearlyVarying::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementIntervalLinearlyVarying::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_DummyNode ,opencascade::handle<StepFEA_DummyNode> , StepFEA_NodeRepresentation>>(m.attr("StepFEA_DummyNode"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_DummyNode::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_DummyNode::*)() const>(&StepFEA_DummyNode::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_DummyNode::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ElementGroup ,opencascade::handle<StepFEA_ElementGroup> , StepFEA_FeaGroup>>(m.attr("StepFEA_ElementGroup"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ElementGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ElementGroup::*)() const>(&StepFEA_ElementGroup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ElementGroup::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaAreaDensity ,opencascade::handle<StepFEA_FeaAreaDensity> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaAreaDensity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaAreaDensity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaAreaDensity::*)() const>(&StepFEA_FeaAreaDensity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaAreaDensity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaLinearElasticity ,opencascade::handle<StepFEA_FeaLinearElasticity> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaLinearElasticity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaLinearElasticity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaLinearElasticity::*)() const>(&StepFEA_FeaLinearElasticity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaLinearElasticity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaMassDensity ,opencascade::handle<StepFEA_FeaMassDensity> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaMassDensity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaMassDensity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaMassDensity::*)() const>(&StepFEA_FeaMassDensity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaMassDensity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaModel3d ,opencascade::handle<StepFEA_FeaModel3d> , StepFEA_FeaModel>>(m.attr("StepFEA_FeaModel3d"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaModel3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaModel3d::*)() const>(&StepFEA_FeaModel3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaModel3d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaMoistureAbsorption ,opencascade::handle<StepFEA_FeaMoistureAbsorption> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaMoistureAbsorption"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaMoistureAbsorption::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaMoistureAbsorption::*)() const>(&StepFEA_FeaMoistureAbsorption::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaMoistureAbsorption::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion ,opencascade::handle<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaSecantCoefficientOfLinearThermalExpansion"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)() const>(&StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaShellBendingStiffness ,opencascade::handle<StepFEA_FeaShellBendingStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaShellBendingStiffness"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaShellBendingStiffness::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaShellBendingStiffness::*)() const>(&StepFEA_FeaShellBendingStiffness::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaShellBendingStiffness::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaShellMembraneBendingCouplingStiffness ,opencascade::handle<StepFEA_FeaShellMembraneBendingCouplingStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaShellMembraneBendingCouplingStiffness"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaShellMembraneBendingCouplingStiffness::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaShellMembraneBendingCouplingStiffness::*)() const>(&StepFEA_FeaShellMembraneBendingCouplingStiffness::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaShellMembraneBendingCouplingStiffness::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaShellMembraneStiffness ,opencascade::handle<StepFEA_FeaShellMembraneStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaShellMembraneStiffness"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaShellMembraneStiffness::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaShellMembraneStiffness::*)() const>(&StepFEA_FeaShellMembraneStiffness::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaShellMembraneStiffness::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaShellShearStiffness ,opencascade::handle<StepFEA_FeaShellShearStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaShellShearStiffness"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaShellShearStiffness::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaShellShearStiffness::*)() const>(&StepFEA_FeaShellShearStiffness::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaShellShearStiffness::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion ,opencascade::handle<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::*)() const>(&StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_GeometricNode ,opencascade::handle<StepFEA_GeometricNode> , StepFEA_NodeRepresentation>>(m.attr("StepFEA_GeometricNode"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_GeometricNode::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_GeometricNode::*)() const>(&StepFEA_GeometricNode::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_GeometricNode::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_Node ,opencascade::handle<StepFEA_Node> , StepFEA_NodeRepresentation>>(m.attr("StepFEA_Node"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_Node::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_Node::*)() const>(&StepFEA_Node::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_Node::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeGroup ,opencascade::handle<StepFEA_NodeGroup> , StepFEA_FeaGroup>>(m.attr("StepFEA_NodeGroup"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_NodeGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_NodeGroup::*)() const>(&StepFEA_NodeGroup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_NodeGroup::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ParametricCurve3dElementCoordinateDirection ,opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_ParametricCurve3dElementCoordinateDirection"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ParametricCurve3dElementCoordinateDirection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ParametricCurve3dElementCoordinateDirection::*)() const>(&StepFEA_ParametricCurve3dElementCoordinateDirection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ParametricCurve3dElementCoordinateDirection::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ParametricCurve3dElementCoordinateSystem ,opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_ParametricCurve3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ParametricCurve3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ParametricCurve3dElementCoordinateSystem::*)() const>(&StepFEA_ParametricCurve3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ParametricCurve3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ParametricSurface3dElementCoordinateSystem ,opencascade::handle<StepFEA_ParametricSurface3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_ParametricSurface3dElementCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ParametricSurface3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ParametricSurface3dElementCoordinateSystem::*)() const>(&StepFEA_ParametricSurface3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ParametricSurface3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_Surface3dElementRepresentation ,opencascade::handle<StepFEA_Surface3dElementRepresentation> , StepFEA_ElementRepresentation>>(m.attr("StepFEA_Surface3dElementRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_Surface3dElementRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_Surface3dElementRepresentation::*)() const>(&StepFEA_Surface3dElementRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_Surface3dElementRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_Volume3dElementRepresentation ,opencascade::handle<StepFEA_Volume3dElementRepresentation> , StepFEA_ElementRepresentation>>(m.attr("StepFEA_Volume3dElementRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_Volume3dElementRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_Volume3dElementRepresentation::*)() const>(&StepFEA_Volume3dElementRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_Volume3dElementRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeWithSolutionCoordinateSystem ,opencascade::handle<StepFEA_NodeWithSolutionCoordinateSystem> , StepFEA_Node>>(m.attr("StepFEA_NodeWithSolutionCoordinateSystem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_NodeWithSolutionCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_NodeWithSolutionCoordinateSystem::*)() const>(&StepFEA_NodeWithSolutionCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_NodeWithSolutionCoordinateSystem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeWithVector ,opencascade::handle<StepFEA_NodeWithVector> , StepFEA_Node>>(m.attr("StepFEA_NodeWithVector"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_NodeWithVector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_NodeWithVector::*)() const>(&StepFEA_NodeWithVector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_NodeWithVector::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepFEA_FeaMassDensity.hxx
// ./opencascade/StepFEA_Array1OfCurveElementInterval.hxx
// ./opencascade/StepFEA_SymmetricTensor43d.hxx
// ./opencascade/StepFEA_SymmetricTensor23dMember.hxx
// ./opencascade/StepFEA_AlignedSurface3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_Volume3dElementRepresentation.hxx
// ./opencascade/StepFEA_DummyNode.hxx
// ./opencascade/StepFEA_CurveElementEndRelease.hxx
// ./opencascade/StepFEA_HSequenceOfElementRepresentation.hxx
// ./opencascade/StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/StepFEA_NodeDefinition.hxx
// ./opencascade/StepFEA_SymmetricTensor43dMember.hxx
// ./opencascade/StepFEA_FeaMoistureAbsorption.hxx
// ./opencascade/StepFEA_HArray1OfCurveElementEndOffset.hxx
// ./opencascade/StepFEA_HArray1OfCurveElementEndRelease.hxx
// ./opencascade/StepFEA_FeaMaterialPropertyRepresentationItem.hxx
// ./opencascade/StepFEA_NodeSet.hxx
// ./opencascade/StepFEA_SymmetricTensor22d.hxx
// ./opencascade/StepFEA_FeaModel.hxx
// ./opencascade/StepFEA_CurveElementEndOffset.hxx
// ./opencascade/StepFEA_ElementVolume.hxx
// ./opencascade/StepFEA_ParametricCurve3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_FeaGroup.hxx
// ./opencascade/StepFEA_CurveEdge.hxx
// ./opencascade/StepFEA_CurveElementIntervalLinearlyVarying.hxx
// ./opencascade/StepFEA_DegreeOfFreedom.hxx
// ./opencascade/StepFEA_Array1OfNodeRepresentation.hxx
// ./opencascade/StepFEA_Array1OfElementRepresentation.hxx
// ./opencascade/StepFEA_Node.hxx
// ./opencascade/StepFEA_Array1OfCurveElementEndRelease.hxx
// ./opencascade/StepFEA_FreedomAndCoefficient.hxx
// ./opencascade/StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx
// ./opencascade/StepFEA_Surface3dElementRepresentation.hxx
// ./opencascade/StepFEA_CurveElementLocation.hxx
// ./opencascade/StepFEA_FreedomsList.hxx
// ./opencascade/StepFEA_SymmetricTensor42d.hxx
// ./opencascade/StepFEA_FeaShellShearStiffness.hxx
// ./opencascade/StepFEA_ElementRepresentation.hxx
// ./opencascade/StepFEA_HArray1OfElementRepresentation.hxx
// ./opencascade/StepFEA_FeaRepresentationItem.hxx
// ./opencascade/StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_CurveElementIntervalConstant.hxx
// ./opencascade/StepFEA_GeometricNode.hxx
// ./opencascade/StepFEA_FeaAreaDensity.hxx
// ./opencascade/StepFEA_ConstantSurface3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_SequenceOfElementRepresentation.hxx
// ./opencascade/StepFEA_HArray1OfCurveElementInterval.hxx
// ./opencascade/StepFEA_HSequenceOfNodeRepresentation.hxx
// ./opencascade/StepFEA_CoordinateSystemType.hxx
// ./opencascade/StepFEA_NodeRepresentation.hxx
// ./opencascade/StepFEA_UnspecifiedValue.hxx
// ./opencascade/StepFEA_FeaModelDefinition.hxx
// ./opencascade/StepFEA_HSequenceOfCurve3dElementProperty.hxx
// ./opencascade/StepFEA_ParametricCurve3dElementCoordinateDirection.hxx
// ./opencascade/StepFEA_AlignedCurve3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_ElementGroup.hxx
// ./opencascade/StepFEA_ElementOrElementGroup.hxx
// ./opencascade/StepFEA_DegreeOfFreedomMember.hxx
// ./opencascade/StepFEA_FeaCurveSectionGeometricRelationship.hxx
// ./opencascade/StepFEA_SequenceOfElementGeometricRelationship.hxx
// ./opencascade/StepFEA_SequenceOfNodeRepresentation.hxx
// ./opencascade/StepFEA_ElementGeometricRelationship.hxx
// ./opencascade/StepFEA_CurveElementInterval.hxx
// ./opencascade/StepFEA_HSequenceOfElementGeometricRelationship.hxx
// ./opencascade/StepFEA_Array1OfDegreeOfFreedom.hxx
// ./opencascade/StepFEA_Curve3dElementRepresentation.hxx
// ./opencascade/StepFEA_Curve3dElementProperty.hxx
// ./opencascade/StepFEA_CurveElementEndCoordinateSystem.hxx
// ./opencascade/StepFEA_NodeWithSolutionCoordinateSystem.hxx
// ./opencascade/StepFEA_HArray1OfDegreeOfFreedom.hxx
// ./opencascade/StepFEA_ParametricSurface3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_FeaParametricPoint.hxx
// ./opencascade/StepFEA_EnumeratedDegreeOfFreedom.hxx
// ./opencascade/StepFEA_SequenceOfCurve3dElementProperty.hxx
// ./opencascade/StepFEA_SymmetricTensor23d.hxx
// ./opencascade/StepFEA_FeaSurfaceSectionGeometricRelationship.hxx
// ./opencascade/StepFEA_FeaLinearElasticity.hxx
// ./opencascade/StepFEA_HArray1OfNodeRepresentation.hxx
// ./opencascade/StepFEA_FeaMaterialPropertyRepresentation.hxx
// ./opencascade/StepFEA_FeaAxis2Placement3d.hxx
// ./opencascade/StepFEA_FeaShellBendingStiffness.hxx
// ./opencascade/StepFEA_FeaModel3d.hxx
// ./opencascade/StepFEA_FeaSecantCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/StepFEA_Array1OfCurveElementEndOffset.hxx
// ./opencascade/StepFEA_FeaShellMembraneStiffness.hxx
// ./opencascade/StepFEA_NodeGroup.hxx
// ./opencascade/StepFEA_NodeWithVector.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<StepFEA_CurveElementInterval> >(m,"StepFEA_Array1OfCurveElementInterval");
    register_template_NCollection_Array1<opencascade::handle<StepFEA_NodeRepresentation> >(m,"StepFEA_Array1OfNodeRepresentation");
    register_template_NCollection_Array1<opencascade::handle<StepFEA_ElementRepresentation> >(m,"StepFEA_Array1OfElementRepresentation");
    register_template_NCollection_Array1<opencascade::handle<StepFEA_CurveElementEndRelease> >(m,"StepFEA_Array1OfCurveElementEndRelease");
    register_template_NCollection_Sequence<opencascade::handle<StepFEA_ElementRepresentation> >(m,"StepFEA_SequenceOfElementRepresentation");
    register_template_NCollection_Sequence<opencascade::handle<StepFEA_ElementGeometricRelationship> >(m,"StepFEA_SequenceOfElementGeometricRelationship");
    register_template_NCollection_Sequence<opencascade::handle<StepFEA_NodeRepresentation> >(m,"StepFEA_SequenceOfNodeRepresentation");
    register_template_NCollection_Array1<StepFEA_DegreeOfFreedom>(m,"StepFEA_Array1OfDegreeOfFreedom");
    register_template_NCollection_Sequence<opencascade::handle<StepFEA_Curve3dElementProperty> >(m,"StepFEA_SequenceOfCurve3dElementProperty");
    register_template_NCollection_Array1<opencascade::handle<StepFEA_CurveElementEndOffset> >(m,"StepFEA_Array1OfCurveElementEndOffset");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
