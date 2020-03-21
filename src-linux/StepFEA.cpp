
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
#include <StepFEA_FeaModel.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_SelectMember.hxx>
#include <StepFEA_FeaModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepData_SelectMember.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaParametricPoint.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <TCollection_HAsciiString.hxx>

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
// ./opencascade/StepFEA_Array1OfCurveElementEndOffset.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfElementRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfCurveElementEndRelease.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfElementRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfElementGeometricRelationship.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfCurve3dElementProperty.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfNodeRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_SequenceOfNodeRepresentation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfDegreeOfFreedom.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepFEA_Array1OfCurveElementInterval.hxx
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_HArray1OfCurveElementInterval> & , const opencascade::handle<StepFEA_HArray1OfCurveElementEndOffset> & , const opencascade::handle<StepFEA_HArray1OfCurveElementEndRelease> & ) ) static_cast<void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_HArray1OfCurveElementInterval> & , const opencascade::handle<StepFEA_HArray1OfCurveElementEndOffset> & , const opencascade::handle<StepFEA_HArray1OfCurveElementEndRelease> & ) >(&StepFEA_Curve3dElementProperty::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aPropertyId"),  py::arg("aDescription"),  py::arg("aIntervalDefinitions"),  py::arg("aEndOffsets"),  py::arg("aEndReleases"))
        .def("PropertyId",
             (opencascade::handle<TCollection_HAsciiString> (StepFEA_Curve3dElementProperty::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepFEA_Curve3dElementProperty::*)() const>(&StepFEA_Curve3dElementProperty::PropertyId),
             R"#(Returns field PropertyId)#" )
        .def("SetPropertyId",
             (void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepFEA_Curve3dElementProperty::SetPropertyId),
             R"#(Set field PropertyId)#"  , py::arg("PropertyId"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepFEA_Curve3dElementProperty::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepFEA_Curve3dElementProperty::*)() const>(&StepFEA_Curve3dElementProperty::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepFEA_Curve3dElementProperty::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("IntervalDefinitions",
             (opencascade::handle<StepFEA_HArray1OfCurveElementInterval> (StepFEA_Curve3dElementProperty::*)() const) static_cast<opencascade::handle<StepFEA_HArray1OfCurveElementInterval> (StepFEA_Curve3dElementProperty::*)() const>(&StepFEA_Curve3dElementProperty::IntervalDefinitions),
             R"#(Returns field IntervalDefinitions)#" )
        .def("SetIntervalDefinitions",
             (void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<StepFEA_HArray1OfCurveElementInterval> & ) ) static_cast<void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<StepFEA_HArray1OfCurveElementInterval> & ) >(&StepFEA_Curve3dElementProperty::SetIntervalDefinitions),
             R"#(Set field IntervalDefinitions)#"  , py::arg("IntervalDefinitions"))
        .def("EndOffsets",
             (opencascade::handle<StepFEA_HArray1OfCurveElementEndOffset> (StepFEA_Curve3dElementProperty::*)() const) static_cast<opencascade::handle<StepFEA_HArray1OfCurveElementEndOffset> (StepFEA_Curve3dElementProperty::*)() const>(&StepFEA_Curve3dElementProperty::EndOffsets),
             R"#(Returns field EndOffsets)#" )
        .def("SetEndOffsets",
             (void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<StepFEA_HArray1OfCurveElementEndOffset> & ) ) static_cast<void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<StepFEA_HArray1OfCurveElementEndOffset> & ) >(&StepFEA_Curve3dElementProperty::SetEndOffsets),
             R"#(Set field EndOffsets)#"  , py::arg("EndOffsets"))
        .def("EndReleases",
             (opencascade::handle<StepFEA_HArray1OfCurveElementEndRelease> (StepFEA_Curve3dElementProperty::*)() const) static_cast<opencascade::handle<StepFEA_HArray1OfCurveElementEndRelease> (StepFEA_Curve3dElementProperty::*)() const>(&StepFEA_Curve3dElementProperty::EndReleases),
             R"#(Returns field EndReleases)#" )
        .def("SetEndReleases",
             (void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<StepFEA_HArray1OfCurveElementEndRelease> & ) ) static_cast<void (StepFEA_Curve3dElementProperty::*)( const opencascade::handle<StepFEA_HArray1OfCurveElementEndRelease> & ) >(&StepFEA_Curve3dElementProperty::SetEndReleases),
             R"#(Set field EndReleases)#"  , py::arg("EndReleases"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_Curve3dElementProperty::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_Curve3dElementProperty::*)() const>(&StepFEA_Curve3dElementProperty::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_Curve3dElementProperty::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_Curve3dElementProperty::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementEndCoordinateSystem , shared_ptr<StepFEA_CurveElementEndCoordinateSystem> , StepData_SelectType>>(m.attr("StepFEA_CurveElementEndCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_CurveElementEndCoordinateSystem::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_CurveElementEndCoordinateSystem::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_CurveElementEndCoordinateSystem::CaseNum),
             R"#(Recognizes a kind of CurveElementEndCoordinateSystem select type 1 -> FeaAxis2Placement3d from StepFEA 2 -> AlignedCurve3dElementCoordinateSystem from StepFEA 3 -> ParametricCurve3dElementCoordinateSystem from StepFEA 0 else)#"  , py::arg("ent"))
        .def("FeaAxis2Placement3d",
             (opencascade::handle<StepFEA_FeaAxis2Placement3d> (StepFEA_CurveElementEndCoordinateSystem::*)() const) static_cast<opencascade::handle<StepFEA_FeaAxis2Placement3d> (StepFEA_CurveElementEndCoordinateSystem::*)() const>(&StepFEA_CurveElementEndCoordinateSystem::FeaAxis2Placement3d),
             R"#(Returns Value as FeaAxis2Placement3d (or Null if another type))#" )
        .def("AlignedCurve3dElementCoordinateSystem",
             (opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> (StepFEA_CurveElementEndCoordinateSystem::*)() const) static_cast<opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> (StepFEA_CurveElementEndCoordinateSystem::*)() const>(&StepFEA_CurveElementEndCoordinateSystem::AlignedCurve3dElementCoordinateSystem),
             R"#(Returns Value as AlignedCurve3dElementCoordinateSystem (or Null if another type))#" )
        .def("ParametricCurve3dElementCoordinateSystem",
             (opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> (StepFEA_CurveElementEndCoordinateSystem::*)() const) static_cast<opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> (StepFEA_CurveElementEndCoordinateSystem::*)() const>(&StepFEA_CurveElementEndCoordinateSystem::ParametricCurve3dElementCoordinateSystem),
             R"#(Returns Value as ParametricCurve3dElementCoordinateSystem (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementEndOffset ,opencascade::handle<StepFEA_CurveElementEndOffset> , Standard_Transient>>(m.attr("StepFEA_CurveElementEndOffset"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_CurveElementEndOffset::*)( const StepFEA_CurveElementEndCoordinateSystem & , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepFEA_CurveElementEndOffset::*)( const StepFEA_CurveElementEndCoordinateSystem & , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepFEA_CurveElementEndOffset::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aCoordinateSystem"),  py::arg("aOffsetVector"))
        .def("CoordinateSystem",
             (StepFEA_CurveElementEndCoordinateSystem (StepFEA_CurveElementEndOffset::*)() const) static_cast<StepFEA_CurveElementEndCoordinateSystem (StepFEA_CurveElementEndOffset::*)() const>(&StepFEA_CurveElementEndOffset::CoordinateSystem),
             R"#(Returns field CoordinateSystem)#" )
        .def("SetCoordinateSystem",
             (void (StepFEA_CurveElementEndOffset::*)( const StepFEA_CurveElementEndCoordinateSystem & ) ) static_cast<void (StepFEA_CurveElementEndOffset::*)( const StepFEA_CurveElementEndCoordinateSystem & ) >(&StepFEA_CurveElementEndOffset::SetCoordinateSystem),
             R"#(Set field CoordinateSystem)#"  , py::arg("CoordinateSystem"))
        .def("OffsetVector",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_CurveElementEndOffset::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_CurveElementEndOffset::*)() const>(&StepFEA_CurveElementEndOffset::OffsetVector),
             R"#(Returns field OffsetVector)#" )
        .def("SetOffsetVector",
             (void (StepFEA_CurveElementEndOffset::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepFEA_CurveElementEndOffset::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepFEA_CurveElementEndOffset::SetOffsetVector),
             R"#(Set field OffsetVector)#"  , py::arg("OffsetVector"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementEndOffset::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementEndOffset::*)() const>(&StepFEA_CurveElementEndOffset::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementEndOffset::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_CurveElementEndOffset::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementEndRelease ,opencascade::handle<StepFEA_CurveElementEndRelease> , Standard_Transient>>(m.attr("StepFEA_CurveElementEndRelease"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_CurveElementEndRelease::*)( const StepFEA_CurveElementEndCoordinateSystem & , const opencascade::handle<StepElement_HArray1OfCurveElementEndReleasePacket> & ) ) static_cast<void (StepFEA_CurveElementEndRelease::*)( const StepFEA_CurveElementEndCoordinateSystem & , const opencascade::handle<StepElement_HArray1OfCurveElementEndReleasePacket> & ) >(&StepFEA_CurveElementEndRelease::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aCoordinateSystem"),  py::arg("aReleases"))
        .def("CoordinateSystem",
             (StepFEA_CurveElementEndCoordinateSystem (StepFEA_CurveElementEndRelease::*)() const) static_cast<StepFEA_CurveElementEndCoordinateSystem (StepFEA_CurveElementEndRelease::*)() const>(&StepFEA_CurveElementEndRelease::CoordinateSystem),
             R"#(Returns field CoordinateSystem)#" )
        .def("SetCoordinateSystem",
             (void (StepFEA_CurveElementEndRelease::*)( const StepFEA_CurveElementEndCoordinateSystem & ) ) static_cast<void (StepFEA_CurveElementEndRelease::*)( const StepFEA_CurveElementEndCoordinateSystem & ) >(&StepFEA_CurveElementEndRelease::SetCoordinateSystem),
             R"#(Set field CoordinateSystem)#"  , py::arg("CoordinateSystem"))
        .def("Releases",
             (opencascade::handle<StepElement_HArray1OfCurveElementEndReleasePacket> (StepFEA_CurveElementEndRelease::*)() const) static_cast<opencascade::handle<StepElement_HArray1OfCurveElementEndReleasePacket> (StepFEA_CurveElementEndRelease::*)() const>(&StepFEA_CurveElementEndRelease::Releases),
             R"#(Returns field Releases)#" )
        .def("SetReleases",
             (void (StepFEA_CurveElementEndRelease::*)( const opencascade::handle<StepElement_HArray1OfCurveElementEndReleasePacket> & ) ) static_cast<void (StepFEA_CurveElementEndRelease::*)( const opencascade::handle<StepElement_HArray1OfCurveElementEndReleasePacket> & ) >(&StepFEA_CurveElementEndRelease::SetReleases),
             R"#(Set field Releases)#"  , py::arg("Releases"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementEndRelease::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementEndRelease::*)() const>(&StepFEA_CurveElementEndRelease::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementEndRelease::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_CurveElementEndRelease::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementInterval ,opencascade::handle<StepFEA_CurveElementInterval> , Standard_Transient>>(m.attr("StepFEA_CurveElementInterval"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_CurveElementInterval::*)( const opencascade::handle<StepFEA_CurveElementLocation> & , const opencascade::handle<StepBasic_EulerAngles> & ) ) static_cast<void (StepFEA_CurveElementInterval::*)( const opencascade::handle<StepFEA_CurveElementLocation> & , const opencascade::handle<StepBasic_EulerAngles> & ) >(&StepFEA_CurveElementInterval::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aFinishPosition"),  py::arg("aEuAngles"))
        .def("FinishPosition",
             (opencascade::handle<StepFEA_CurveElementLocation> (StepFEA_CurveElementInterval::*)() const) static_cast<opencascade::handle<StepFEA_CurveElementLocation> (StepFEA_CurveElementInterval::*)() const>(&StepFEA_CurveElementInterval::FinishPosition),
             R"#(Returns field FinishPosition)#" )
        .def("SetFinishPosition",
             (void (StepFEA_CurveElementInterval::*)( const opencascade::handle<StepFEA_CurveElementLocation> & ) ) static_cast<void (StepFEA_CurveElementInterval::*)( const opencascade::handle<StepFEA_CurveElementLocation> & ) >(&StepFEA_CurveElementInterval::SetFinishPosition),
             R"#(Set field FinishPosition)#"  , py::arg("FinishPosition"))
        .def("EuAngles",
             (opencascade::handle<StepBasic_EulerAngles> (StepFEA_CurveElementInterval::*)() const) static_cast<opencascade::handle<StepBasic_EulerAngles> (StepFEA_CurveElementInterval::*)() const>(&StepFEA_CurveElementInterval::EuAngles),
             R"#(Returns field EuAngles)#" )
        .def("SetEuAngles",
             (void (StepFEA_CurveElementInterval::*)( const opencascade::handle<StepBasic_EulerAngles> & ) ) static_cast<void (StepFEA_CurveElementInterval::*)( const opencascade::handle<StepBasic_EulerAngles> & ) >(&StepFEA_CurveElementInterval::SetEuAngles),
             R"#(Set field EuAngles)#"  , py::arg("EuAngles"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementInterval::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementInterval::*)() const>(&StepFEA_CurveElementInterval::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementInterval::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_CurveElementInterval::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementLocation ,opencascade::handle<StepFEA_CurveElementLocation> , Standard_Transient>>(m.attr("StepFEA_CurveElementLocation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_CurveElementLocation::*)( const opencascade::handle<StepFEA_FeaParametricPoint> & ) ) static_cast<void (StepFEA_CurveElementLocation::*)( const opencascade::handle<StepFEA_FeaParametricPoint> & ) >(&StepFEA_CurveElementLocation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aCoordinate"))
        .def("Coordinate",
             (opencascade::handle<StepFEA_FeaParametricPoint> (StepFEA_CurveElementLocation::*)() const) static_cast<opencascade::handle<StepFEA_FeaParametricPoint> (StepFEA_CurveElementLocation::*)() const>(&StepFEA_CurveElementLocation::Coordinate),
             R"#(Returns field Coordinate)#" )
        .def("SetCoordinate",
             (void (StepFEA_CurveElementLocation::*)( const opencascade::handle<StepFEA_FeaParametricPoint> & ) ) static_cast<void (StepFEA_CurveElementLocation::*)( const opencascade::handle<StepFEA_FeaParametricPoint> & ) >(&StepFEA_CurveElementLocation::SetCoordinate),
             R"#(Set field Coordinate)#"  , py::arg("Coordinate"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementLocation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementLocation::*)() const>(&StepFEA_CurveElementLocation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementLocation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_CurveElementLocation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_DegreeOfFreedom , shared_ptr<StepFEA_DegreeOfFreedom> , StepData_SelectType>>(m.attr("StepFEA_DegreeOfFreedom"))
    // constructors
        .def(py::init<  >()  )
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
        .def("SetEnumeratedDegreeOfFreedom",
             (void (StepFEA_DegreeOfFreedom::*)( const StepFEA_EnumeratedDegreeOfFreedom ) ) static_cast<void (StepFEA_DegreeOfFreedom::*)( const StepFEA_EnumeratedDegreeOfFreedom ) >(&StepFEA_DegreeOfFreedom::SetEnumeratedDegreeOfFreedom),
             R"#(Returns Value as EnumeratedDegreeOfFreedom (or Null if another type))#"  , py::arg("aVal"))
        .def("EnumeratedDegreeOfFreedom",
             (StepFEA_EnumeratedDegreeOfFreedom (StepFEA_DegreeOfFreedom::*)() const) static_cast<StepFEA_EnumeratedDegreeOfFreedom (StepFEA_DegreeOfFreedom::*)() const>(&StepFEA_DegreeOfFreedom::EnumeratedDegreeOfFreedom),
             R"#(Returns Value as EnumeratedDegreeOfFreedom (or Null if another type))#" )
        .def("SetApplicationDefinedDegreeOfFreedom",
             (void (StepFEA_DegreeOfFreedom::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepFEA_DegreeOfFreedom::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepFEA_DegreeOfFreedom::SetApplicationDefinedDegreeOfFreedom),
             R"#(Set Value for ApplicationDefinedDegreeOfFreedom)#"  , py::arg("aVal"))
        .def("ApplicationDefinedDegreeOfFreedom",
             (opencascade::handle<TCollection_HAsciiString> (StepFEA_DegreeOfFreedom::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepFEA_DegreeOfFreedom::*)() const>(&StepFEA_DegreeOfFreedom::ApplicationDefinedDegreeOfFreedom),
             R"#(Returns Value as ApplicationDefinedDegreeOfFreedom (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_DegreeOfFreedomMember ,opencascade::handle<StepFEA_DegreeOfFreedomMember> , StepData_SelectNamed>>(m.attr("StepFEA_DegreeOfFreedomMember"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_DegreeOfFreedomMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ElementGeometricRelationship ,opencascade::handle<StepFEA_ElementGeometricRelationship> , Standard_Transient>>(m.attr("StepFEA_ElementGeometricRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_ElementGeometricRelationship::*)( const StepFEA_ElementOrElementGroup & , const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & , const StepElement_ElementAspect & ) ) static_cast<void (StepFEA_ElementGeometricRelationship::*)( const StepFEA_ElementOrElementGroup & , const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & , const StepElement_ElementAspect & ) >(&StepFEA_ElementGeometricRelationship::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aElementRef"),  py::arg("aItem"),  py::arg("aAspect"))
        .def("ElementRef",
             (StepFEA_ElementOrElementGroup (StepFEA_ElementGeometricRelationship::*)() const) static_cast<StepFEA_ElementOrElementGroup (StepFEA_ElementGeometricRelationship::*)() const>(&StepFEA_ElementGeometricRelationship::ElementRef),
             R"#(Returns field ElementRef)#" )
        .def("SetElementRef",
             (void (StepFEA_ElementGeometricRelationship::*)( const StepFEA_ElementOrElementGroup & ) ) static_cast<void (StepFEA_ElementGeometricRelationship::*)( const StepFEA_ElementOrElementGroup & ) >(&StepFEA_ElementGeometricRelationship::SetElementRef),
             R"#(Set field ElementRef)#"  , py::arg("ElementRef"))
        .def("Item",
             (opencascade::handle<StepElement_AnalysisItemWithinRepresentation> (StepFEA_ElementGeometricRelationship::*)() const) static_cast<opencascade::handle<StepElement_AnalysisItemWithinRepresentation> (StepFEA_ElementGeometricRelationship::*)() const>(&StepFEA_ElementGeometricRelationship::Item),
             R"#(Returns field Item)#" )
        .def("SetItem",
             (void (StepFEA_ElementGeometricRelationship::*)( const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) ) static_cast<void (StepFEA_ElementGeometricRelationship::*)( const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) >(&StepFEA_ElementGeometricRelationship::SetItem),
             R"#(Set field Item)#"  , py::arg("Item"))
        .def("Aspect",
             (StepElement_ElementAspect (StepFEA_ElementGeometricRelationship::*)() const) static_cast<StepElement_ElementAspect (StepFEA_ElementGeometricRelationship::*)() const>(&StepFEA_ElementGeometricRelationship::Aspect),
             R"#(Returns field Aspect)#" )
        .def("SetAspect",
             (void (StepFEA_ElementGeometricRelationship::*)( const StepElement_ElementAspect & ) ) static_cast<void (StepFEA_ElementGeometricRelationship::*)( const StepElement_ElementAspect & ) >(&StepFEA_ElementGeometricRelationship::SetAspect),
             R"#(Set field Aspect)#"  , py::arg("Aspect"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ElementGeometricRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ElementGeometricRelationship::*)() const>(&StepFEA_ElementGeometricRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ElementGeometricRelationship::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_ElementGeometricRelationship::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ElementOrElementGroup , shared_ptr<StepFEA_ElementOrElementGroup> , StepData_SelectType>>(m.attr("StepFEA_ElementOrElementGroup"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_ElementOrElementGroup::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_ElementOrElementGroup::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_ElementOrElementGroup::CaseNum),
             R"#(Recognizes a kind of ElementOrElementGroup select type 1 -> ElementRepresentation from StepFEA 2 -> ElementGroup from StepFEA 0 else)#"  , py::arg("ent"))
        .def("ElementRepresentation",
             (opencascade::handle<StepFEA_ElementRepresentation> (StepFEA_ElementOrElementGroup::*)() const) static_cast<opencascade::handle<StepFEA_ElementRepresentation> (StepFEA_ElementOrElementGroup::*)() const>(&StepFEA_ElementOrElementGroup::ElementRepresentation),
             R"#(Returns Value as ElementRepresentation (or Null if another type))#" )
        .def("ElementGroup",
             (opencascade::handle<StepFEA_ElementGroup> (StepFEA_ElementOrElementGroup::*)() const) static_cast<opencascade::handle<StepFEA_ElementGroup> (StepFEA_ElementOrElementGroup::*)() const>(&StepFEA_ElementOrElementGroup::ElementGroup),
             R"#(Returns Value as ElementGroup (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ElementRepresentation ,opencascade::handle<StepFEA_ElementRepresentation> , StepRepr_Representation>>(m.attr("StepFEA_ElementRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_ElementRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) ) static_cast<void (StepFEA_ElementRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) >(&StepFEA_ElementRepresentation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentation_Name"),  py::arg("aRepresentation_Items"),  py::arg("aRepresentation_ContextOfItems"),  py::arg("aNodeList"))
        .def("NodeList",
             (opencascade::handle<StepFEA_HArray1OfNodeRepresentation> (StepFEA_ElementRepresentation::*)() const) static_cast<opencascade::handle<StepFEA_HArray1OfNodeRepresentation> (StepFEA_ElementRepresentation::*)() const>(&StepFEA_ElementRepresentation::NodeList),
             R"#(Returns field NodeList)#" )
        .def("SetNodeList",
             (void (StepFEA_ElementRepresentation::*)( const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) ) static_cast<void (StepFEA_ElementRepresentation::*)( const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) >(&StepFEA_ElementRepresentation::SetNodeList),
             R"#(Set field NodeList)#"  , py::arg("NodeList"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ElementRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ElementRepresentation::*)() const>(&StepFEA_ElementRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ElementRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_ElementRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaAxis2Placement3d ,opencascade::handle<StepFEA_FeaAxis2Placement3d> , StepGeom_Axis2Placement3d>>(m.attr("StepFEA_FeaAxis2Placement3d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaAxis2Placement3d::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const StepFEA_CoordinateSystemType , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepFEA_FeaAxis2Placement3d::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_CartesianPoint> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const Standard_Boolean , const opencascade::handle<StepGeom_Direction> & , const StepFEA_CoordinateSystemType , const opencascade::handle<TCollection_HAsciiString> & ) >(&StepFEA_FeaAxis2Placement3d::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aPlacement_Location"),  py::arg("hasAxis2Placement3d_Axis"),  py::arg("aAxis2Placement3d_Axis"),  py::arg("hasAxis2Placement3d_RefDirection"),  py::arg("aAxis2Placement3d_RefDirection"),  py::arg("aSystemType"),  py::arg("aDescription"))
        .def("SystemType",
             (StepFEA_CoordinateSystemType (StepFEA_FeaAxis2Placement3d::*)() const) static_cast<StepFEA_CoordinateSystemType (StepFEA_FeaAxis2Placement3d::*)() const>(&StepFEA_FeaAxis2Placement3d::SystemType),
             R"#(Returns field SystemType)#" )
        .def("SetSystemType",
             (void (StepFEA_FeaAxis2Placement3d::*)( const StepFEA_CoordinateSystemType ) ) static_cast<void (StepFEA_FeaAxis2Placement3d::*)( const StepFEA_CoordinateSystemType ) >(&StepFEA_FeaAxis2Placement3d::SetSystemType),
             R"#(Set field SystemType)#"  , py::arg("SystemType"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepFEA_FeaAxis2Placement3d::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepFEA_FeaAxis2Placement3d::*)() const>(&StepFEA_FeaAxis2Placement3d::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepFEA_FeaAxis2Placement3d::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepFEA_FeaAxis2Placement3d::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepFEA_FeaAxis2Placement3d::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaAxis2Placement3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaAxis2Placement3d::*)() const>(&StepFEA_FeaAxis2Placement3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaAxis2Placement3d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaAxis2Placement3d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaCurveSectionGeometricRelationship ,opencascade::handle<StepFEA_FeaCurveSectionGeometricRelationship> , Standard_Transient>>(m.attr("StepFEA_FeaCurveSectionGeometricRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaCurveSectionGeometricRelationship::*)( const opencascade::handle<StepElement_CurveElementSectionDefinition> & , const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) ) static_cast<void (StepFEA_FeaCurveSectionGeometricRelationship::*)( const opencascade::handle<StepElement_CurveElementSectionDefinition> & , const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) >(&StepFEA_FeaCurveSectionGeometricRelationship::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aSectionRef"),  py::arg("aItem"))
        .def("SectionRef",
             (opencascade::handle<StepElement_CurveElementSectionDefinition> (StepFEA_FeaCurveSectionGeometricRelationship::*)() const) static_cast<opencascade::handle<StepElement_CurveElementSectionDefinition> (StepFEA_FeaCurveSectionGeometricRelationship::*)() const>(&StepFEA_FeaCurveSectionGeometricRelationship::SectionRef),
             R"#(Returns field SectionRef)#" )
        .def("SetSectionRef",
             (void (StepFEA_FeaCurveSectionGeometricRelationship::*)( const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) ) static_cast<void (StepFEA_FeaCurveSectionGeometricRelationship::*)( const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) >(&StepFEA_FeaCurveSectionGeometricRelationship::SetSectionRef),
             R"#(Set field SectionRef)#"  , py::arg("SectionRef"))
        .def("Item",
             (opencascade::handle<StepElement_AnalysisItemWithinRepresentation> (StepFEA_FeaCurveSectionGeometricRelationship::*)() const) static_cast<opencascade::handle<StepElement_AnalysisItemWithinRepresentation> (StepFEA_FeaCurveSectionGeometricRelationship::*)() const>(&StepFEA_FeaCurveSectionGeometricRelationship::Item),
             R"#(Returns field Item)#" )
        .def("SetItem",
             (void (StepFEA_FeaCurveSectionGeometricRelationship::*)( const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) ) static_cast<void (StepFEA_FeaCurveSectionGeometricRelationship::*)( const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) >(&StepFEA_FeaCurveSectionGeometricRelationship::SetItem),
             R"#(Set field Item)#"  , py::arg("Item"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaCurveSectionGeometricRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaCurveSectionGeometricRelationship::*)() const>(&StepFEA_FeaCurveSectionGeometricRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaCurveSectionGeometricRelationship::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaCurveSectionGeometricRelationship::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaGroup ,opencascade::handle<StepFEA_FeaGroup> , StepBasic_Group>>(m.attr("StepFEA_FeaGroup"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaGroup::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaModel> & ) ) static_cast<void (StepFEA_FeaGroup::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaModel> & ) >(&StepFEA_FeaGroup::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aGroup_Name"),  py::arg("aGroup_Description"),  py::arg("aModelRef"))
        .def("ModelRef",
             (opencascade::handle<StepFEA_FeaModel> (StepFEA_FeaGroup::*)() const) static_cast<opencascade::handle<StepFEA_FeaModel> (StepFEA_FeaGroup::*)() const>(&StepFEA_FeaGroup::ModelRef),
             R"#(Returns field ModelRef)#" )
        .def("SetModelRef",
             (void (StepFEA_FeaGroup::*)( const opencascade::handle<StepFEA_FeaModel> & ) ) static_cast<void (StepFEA_FeaGroup::*)( const opencascade::handle<StepFEA_FeaModel> & ) >(&StepFEA_FeaGroup::SetModelRef),
             R"#(Set field ModelRef)#"  , py::arg("ModelRef"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaGroup::*)() const>(&StepFEA_FeaGroup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaGroup::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaGroup::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaMaterialPropertyRepresentation ,opencascade::handle<StepFEA_FeaMaterialPropertyRepresentation> , StepRepr_MaterialPropertyRepresentation>>(m.attr("StepFEA_FeaMaterialPropertyRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaMaterialPropertyRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaMaterialPropertyRepresentationItem ,opencascade::handle<StepFEA_FeaMaterialPropertyRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepFEA_FeaMaterialPropertyRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaMaterialPropertyRepresentationItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaModel ,opencascade::handle<StepFEA_FeaModel> , StepRepr_Representation>>(m.attr("StepFEA_FeaModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaModel::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TColStd_HArray1OfAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepFEA_FeaModel::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TColStd_HArray1OfAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & ) >(&StepFEA_FeaModel::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentation_Name"),  py::arg("aRepresentation_Items"),  py::arg("aRepresentation_ContextOfItems"),  py::arg("aCreatingSoftware"),  py::arg("aIntendedAnalysisCode"),  py::arg("aDescription"),  py::arg("aAnalysisType"))
        .def("CreatingSoftware",
             (opencascade::handle<TCollection_HAsciiString> (StepFEA_FeaModel::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepFEA_FeaModel::*)() const>(&StepFEA_FeaModel::CreatingSoftware),
             R"#(Returns field CreatingSoftware)#" )
        .def("SetCreatingSoftware",
             (void (StepFEA_FeaModel::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepFEA_FeaModel::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepFEA_FeaModel::SetCreatingSoftware),
             R"#(Set field CreatingSoftware)#"  , py::arg("CreatingSoftware"))
        .def("IntendedAnalysisCode",
             (opencascade::handle<TColStd_HArray1OfAsciiString> (StepFEA_FeaModel::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfAsciiString> (StepFEA_FeaModel::*)() const>(&StepFEA_FeaModel::IntendedAnalysisCode),
             R"#(Returns field IntendedAnalysisCode)#" )
        .def("SetIntendedAnalysisCode",
             (void (StepFEA_FeaModel::*)( const opencascade::handle<TColStd_HArray1OfAsciiString> & ) ) static_cast<void (StepFEA_FeaModel::*)( const opencascade::handle<TColStd_HArray1OfAsciiString> & ) >(&StepFEA_FeaModel::SetIntendedAnalysisCode),
             R"#(Set field IntendedAnalysisCode)#"  , py::arg("IntendedAnalysisCode"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepFEA_FeaModel::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepFEA_FeaModel::*)() const>(&StepFEA_FeaModel::Description),
             R"#(Returns field Description)#" )
        .def("SetDescription",
             (void (StepFEA_FeaModel::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepFEA_FeaModel::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepFEA_FeaModel::SetDescription),
             R"#(Set field Description)#"  , py::arg("Description"))
        .def("AnalysisType",
             (opencascade::handle<TCollection_HAsciiString> (StepFEA_FeaModel::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepFEA_FeaModel::*)() const>(&StepFEA_FeaModel::AnalysisType),
             R"#(Returns field AnalysisType)#" )
        .def("SetAnalysisType",
             (void (StepFEA_FeaModel::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepFEA_FeaModel::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepFEA_FeaModel::SetAnalysisType),
             R"#(Set field AnalysisType)#"  , py::arg("AnalysisType"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaModel::*)() const>(&StepFEA_FeaModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaModel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaModel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaModelDefinition ,opencascade::handle<StepFEA_FeaModelDefinition> , StepRepr_ShapeAspect>>(m.attr("StepFEA_FeaModelDefinition"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaModelDefinition::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaParametricPoint ,opencascade::handle<StepFEA_FeaParametricPoint> , StepGeom_Point>>(m.attr("StepFEA_FeaParametricPoint"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaParametricPoint::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepFEA_FeaParametricPoint::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepFEA_FeaParametricPoint::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aCoordinates"))
        .def("Coordinates",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_FeaParametricPoint::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_FeaParametricPoint::*)() const>(&StepFEA_FeaParametricPoint::Coordinates),
             R"#(Returns field Coordinates)#" )
        .def("SetCoordinates",
             (void (StepFEA_FeaParametricPoint::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepFEA_FeaParametricPoint::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepFEA_FeaParametricPoint::SetCoordinates),
             R"#(Set field Coordinates)#"  , py::arg("Coordinates"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaParametricPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaParametricPoint::*)() const>(&StepFEA_FeaParametricPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaParametricPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaParametricPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaRepresentationItem ,opencascade::handle<StepFEA_FeaRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepFEA_FeaRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaRepresentationItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaSurfaceSectionGeometricRelationship ,opencascade::handle<StepFEA_FeaSurfaceSectionGeometricRelationship> , Standard_Transient>>(m.attr("StepFEA_FeaSurfaceSectionGeometricRelationship"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaSurfaceSectionGeometricRelationship::*)( const opencascade::handle<StepElement_SurfaceSection> & , const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) ) static_cast<void (StepFEA_FeaSurfaceSectionGeometricRelationship::*)( const opencascade::handle<StepElement_SurfaceSection> & , const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) >(&StepFEA_FeaSurfaceSectionGeometricRelationship::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aSectionRef"),  py::arg("aItem"))
        .def("SectionRef",
             (opencascade::handle<StepElement_SurfaceSection> (StepFEA_FeaSurfaceSectionGeometricRelationship::*)() const) static_cast<opencascade::handle<StepElement_SurfaceSection> (StepFEA_FeaSurfaceSectionGeometricRelationship::*)() const>(&StepFEA_FeaSurfaceSectionGeometricRelationship::SectionRef),
             R"#(Returns field SectionRef)#" )
        .def("SetSectionRef",
             (void (StepFEA_FeaSurfaceSectionGeometricRelationship::*)( const opencascade::handle<StepElement_SurfaceSection> & ) ) static_cast<void (StepFEA_FeaSurfaceSectionGeometricRelationship::*)( const opencascade::handle<StepElement_SurfaceSection> & ) >(&StepFEA_FeaSurfaceSectionGeometricRelationship::SetSectionRef),
             R"#(Set field SectionRef)#"  , py::arg("SectionRef"))
        .def("Item",
             (opencascade::handle<StepElement_AnalysisItemWithinRepresentation> (StepFEA_FeaSurfaceSectionGeometricRelationship::*)() const) static_cast<opencascade::handle<StepElement_AnalysisItemWithinRepresentation> (StepFEA_FeaSurfaceSectionGeometricRelationship::*)() const>(&StepFEA_FeaSurfaceSectionGeometricRelationship::Item),
             R"#(Returns field Item)#" )
        .def("SetItem",
             (void (StepFEA_FeaSurfaceSectionGeometricRelationship::*)( const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) ) static_cast<void (StepFEA_FeaSurfaceSectionGeometricRelationship::*)( const opencascade::handle<StepElement_AnalysisItemWithinRepresentation> & ) >(&StepFEA_FeaSurfaceSectionGeometricRelationship::SetItem),
             R"#(Set field Item)#"  , py::arg("Item"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaSurfaceSectionGeometricRelationship::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaSurfaceSectionGeometricRelationship::*)() const>(&StepFEA_FeaSurfaceSectionGeometricRelationship::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaSurfaceSectionGeometricRelationship::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaSurfaceSectionGeometricRelationship::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FreedomAndCoefficient ,opencascade::handle<StepFEA_FreedomAndCoefficient> , Standard_Transient>>(m.attr("StepFEA_FreedomAndCoefficient"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FreedomAndCoefficient::*)( const StepFEA_DegreeOfFreedom & , const StepElement_MeasureOrUnspecifiedValue & ) ) static_cast<void (StepFEA_FreedomAndCoefficient::*)( const StepFEA_DegreeOfFreedom & , const StepElement_MeasureOrUnspecifiedValue & ) >(&StepFEA_FreedomAndCoefficient::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aFreedom"),  py::arg("aA"))
        .def("Freedom",
             (StepFEA_DegreeOfFreedom (StepFEA_FreedomAndCoefficient::*)() const) static_cast<StepFEA_DegreeOfFreedom (StepFEA_FreedomAndCoefficient::*)() const>(&StepFEA_FreedomAndCoefficient::Freedom),
             R"#(Returns field Freedom)#" )
        .def("SetFreedom",
             (void (StepFEA_FreedomAndCoefficient::*)( const StepFEA_DegreeOfFreedom & ) ) static_cast<void (StepFEA_FreedomAndCoefficient::*)( const StepFEA_DegreeOfFreedom & ) >(&StepFEA_FreedomAndCoefficient::SetFreedom),
             R"#(Set field Freedom)#"  , py::arg("Freedom"))
        .def("A",
             (StepElement_MeasureOrUnspecifiedValue (StepFEA_FreedomAndCoefficient::*)() const) static_cast<StepElement_MeasureOrUnspecifiedValue (StepFEA_FreedomAndCoefficient::*)() const>(&StepFEA_FreedomAndCoefficient::A),
             R"#(Returns field A)#" )
        .def("SetA",
             (void (StepFEA_FreedomAndCoefficient::*)( const StepElement_MeasureOrUnspecifiedValue & ) ) static_cast<void (StepFEA_FreedomAndCoefficient::*)( const StepElement_MeasureOrUnspecifiedValue & ) >(&StepFEA_FreedomAndCoefficient::SetA),
             R"#(Set field A)#"  , py::arg("A"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FreedomAndCoefficient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FreedomAndCoefficient::*)() const>(&StepFEA_FreedomAndCoefficient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FreedomAndCoefficient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FreedomAndCoefficient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FreedomsList ,opencascade::handle<StepFEA_FreedomsList> , Standard_Transient>>(m.attr("StepFEA_FreedomsList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FreedomsList::*)( const opencascade::handle<StepFEA_HArray1OfDegreeOfFreedom> & ) ) static_cast<void (StepFEA_FreedomsList::*)( const opencascade::handle<StepFEA_HArray1OfDegreeOfFreedom> & ) >(&StepFEA_FreedomsList::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aFreedoms"))
        .def("Freedoms",
             (opencascade::handle<StepFEA_HArray1OfDegreeOfFreedom> (StepFEA_FreedomsList::*)() const) static_cast<opencascade::handle<StepFEA_HArray1OfDegreeOfFreedom> (StepFEA_FreedomsList::*)() const>(&StepFEA_FreedomsList::Freedoms),
             R"#(Returns field Freedoms)#" )
        .def("SetFreedoms",
             (void (StepFEA_FreedomsList::*)( const opencascade::handle<StepFEA_HArray1OfDegreeOfFreedom> & ) ) static_cast<void (StepFEA_FreedomsList::*)( const opencascade::handle<StepFEA_HArray1OfDegreeOfFreedom> & ) >(&StepFEA_FreedomsList::SetFreedoms),
             R"#(Set field Freedoms)#"  , py::arg("Freedoms"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FreedomsList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FreedomsList::*)() const>(&StepFEA_FreedomsList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FreedomsList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FreedomsList::get_type_descriptor),
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
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_NodeDefinition::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeRepresentation ,opencascade::handle<StepFEA_NodeRepresentation> , StepRepr_Representation>>(m.attr("StepFEA_NodeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_NodeRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepFEA_FeaModel> & ) ) static_cast<void (StepFEA_NodeRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepFEA_FeaModel> & ) >(&StepFEA_NodeRepresentation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentation_Name"),  py::arg("aRepresentation_Items"),  py::arg("aRepresentation_ContextOfItems"),  py::arg("aModelRef"))
        .def("ModelRef",
             (opencascade::handle<StepFEA_FeaModel> (StepFEA_NodeRepresentation::*)() const) static_cast<opencascade::handle<StepFEA_FeaModel> (StepFEA_NodeRepresentation::*)() const>(&StepFEA_NodeRepresentation::ModelRef),
             R"#(Returns field ModelRef)#" )
        .def("SetModelRef",
             (void (StepFEA_NodeRepresentation::*)( const opencascade::handle<StepFEA_FeaModel> & ) ) static_cast<void (StepFEA_NodeRepresentation::*)( const opencascade::handle<StepFEA_FeaModel> & ) >(&StepFEA_NodeRepresentation::SetModelRef),
             R"#(Set field ModelRef)#"  , py::arg("ModelRef"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_NodeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_NodeRepresentation::*)() const>(&StepFEA_NodeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_NodeRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_NodeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeSet ,opencascade::handle<StepFEA_NodeSet> , StepGeom_GeometricRepresentationItem>>(m.attr("StepFEA_NodeSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_NodeSet::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) ) static_cast<void (StepFEA_NodeSet::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) >(&StepFEA_NodeSet::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aNodes"))
        .def("Nodes",
             (opencascade::handle<StepFEA_HArray1OfNodeRepresentation> (StepFEA_NodeSet::*)() const) static_cast<opencascade::handle<StepFEA_HArray1OfNodeRepresentation> (StepFEA_NodeSet::*)() const>(&StepFEA_NodeSet::Nodes),
             R"#(Returns field Nodes)#" )
        .def("SetNodes",
             (void (StepFEA_NodeSet::*)( const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) ) static_cast<void (StepFEA_NodeSet::*)( const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) >(&StepFEA_NodeSet::SetNodes),
             R"#(Set field Nodes)#"  , py::arg("Nodes"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_NodeSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_NodeSet::*)() const>(&StepFEA_NodeSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_NodeSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_NodeSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor22d , shared_ptr<StepFEA_SymmetricTensor22d> , StepData_SelectType>>(m.attr("StepFEA_SymmetricTensor22d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_SymmetricTensor22d::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_SymmetricTensor22d::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_SymmetricTensor22d::CaseNum),
             R"#(Recognizes a kind of SymmetricTensor22d select type 1 -> HArray1OfReal from TColStd 0 else)#"  , py::arg("ent"))
        .def("AnisotropicSymmetricTensor22d",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor22d::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor22d::*)() const>(&StepFEA_SymmetricTensor22d::AnisotropicSymmetricTensor22d),
             R"#(Returns Value as AnisotropicSymmetricTensor22d (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor23d , shared_ptr<StepFEA_SymmetricTensor23d> , StepData_SelectType>>(m.attr("StepFEA_SymmetricTensor23d"))
    // constructors
        .def(py::init<  >()  )
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
        .def("SetIsotropicSymmetricTensor23d",
             (void (StepFEA_SymmetricTensor23d::*)( const Standard_Real ) ) static_cast<void (StepFEA_SymmetricTensor23d::*)( const Standard_Real ) >(&StepFEA_SymmetricTensor23d::SetIsotropicSymmetricTensor23d),
             R"#(Set Value for IsotropicSymmetricTensor23d)#"  , py::arg("aVal"))
        .def("IsotropicSymmetricTensor23d",
             (Standard_Real (StepFEA_SymmetricTensor23d::*)() const) static_cast<Standard_Real (StepFEA_SymmetricTensor23d::*)() const>(&StepFEA_SymmetricTensor23d::IsotropicSymmetricTensor23d),
             R"#(Returns Value as IsotropicSymmetricTensor23d (or Null if another type))#" )
        .def("SetOrthotropicSymmetricTensor23d",
             (void (StepFEA_SymmetricTensor23d::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepFEA_SymmetricTensor23d::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepFEA_SymmetricTensor23d::SetOrthotropicSymmetricTensor23d),
             R"#(Set Value for OrthotropicSymmetricTensor23d)#"  , py::arg("aVal"))
        .def("OrthotropicSymmetricTensor23d",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor23d::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor23d::*)() const>(&StepFEA_SymmetricTensor23d::OrthotropicSymmetricTensor23d),
             R"#(Returns Value as OrthotropicSymmetricTensor23d (or Null if another type))#" )
        .def("SetAnisotropicSymmetricTensor23d",
             (void (StepFEA_SymmetricTensor23d::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (StepFEA_SymmetricTensor23d::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&StepFEA_SymmetricTensor23d::SetAnisotropicSymmetricTensor23d),
             R"#(Set Value for AnisotropicSymmetricTensor23d)#"  , py::arg("aVal"))
        .def("AnisotropicSymmetricTensor23d",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor23d::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor23d::*)() const>(&StepFEA_SymmetricTensor23d::AnisotropicSymmetricTensor23d),
             R"#(Returns Value as AnisotropicSymmetricTensor23d (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor23dMember ,opencascade::handle<StepFEA_SymmetricTensor23dMember> , StepData_SelectArrReal>>(m.attr("StepFEA_SymmetricTensor23dMember"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_SymmetricTensor23dMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor42d , shared_ptr<StepFEA_SymmetricTensor42d> , StepData_SelectType>>(m.attr("StepFEA_SymmetricTensor42d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepFEA_SymmetricTensor42d::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepFEA_SymmetricTensor42d::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepFEA_SymmetricTensor42d::CaseNum),
             R"#(Recognizes a kind of SymmetricTensor42d select type 1 -> HArray1OfReal from TColStd 0 else)#"  , py::arg("ent"))
        .def("AnisotropicSymmetricTensor42d",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor42d::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor42d::*)() const>(&StepFEA_SymmetricTensor42d::AnisotropicSymmetricTensor42d),
             R"#(Returns Value as AnisotropicSymmetricTensor42d (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor43d , shared_ptr<StepFEA_SymmetricTensor43d> , StepData_SelectType>>(m.attr("StepFEA_SymmetricTensor43d"))
    // constructors
        .def(py::init<  >()  )
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
        .def("AnisotropicSymmetricTensor43d",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const>(&StepFEA_SymmetricTensor43d::AnisotropicSymmetricTensor43d),
             R"#(Returns Value as AnisotropicSymmetricTensor43d (or Null if another type))#" )
        .def("FeaIsotropicSymmetricTensor43d",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const>(&StepFEA_SymmetricTensor43d::FeaIsotropicSymmetricTensor43d),
             R"#(Returns Value as FeaIsotropicSymmetricTensor43d (or Null if another type))#" )
        .def("FeaIsoOrthotropicSymmetricTensor43d",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const>(&StepFEA_SymmetricTensor43d::FeaIsoOrthotropicSymmetricTensor43d),
             R"#(Returns Value as FeaIsoOrthotropicSymmetricTensor43d (or Null if another type))#" )
        .def("FeaTransverseIsotropicSymmetricTensor43d",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const>(&StepFEA_SymmetricTensor43d::FeaTransverseIsotropicSymmetricTensor43d),
             R"#(Returns Value as FeaTransverseIsotropicSymmetricTensor43d (or Null if another type))#" )
        .def("FeaColumnNormalisedOrthotropicSymmetricTensor43d",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const>(&StepFEA_SymmetricTensor43d::FeaColumnNormalisedOrthotropicSymmetricTensor43d),
             R"#(Returns Value as FeaColumnNormalisedOrthotropicSymmetricTensor43d (or Null if another type))#" )
        .def("FeaColumnNormalisedMonoclinicSymmetricTensor43d",
             (opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (StepFEA_SymmetricTensor43d::*)() const>(&StepFEA_SymmetricTensor43d::FeaColumnNormalisedMonoclinicSymmetricTensor43d),
             R"#(Returns Value as FeaColumnNormalisedMonoclinicSymmetricTensor43d (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_SymmetricTensor43dMember ,opencascade::handle<StepFEA_SymmetricTensor43dMember> , StepData_SelectArrReal>>(m.attr("StepFEA_SymmetricTensor43dMember"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_SymmetricTensor43dMember::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_AlignedCurve3dElementCoordinateSystem ,opencascade::handle<StepFEA_AlignedCurve3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_AlignedCurve3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_AlignedCurve3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) ) static_cast<void (StepFEA_AlignedCurve3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) >(&StepFEA_AlignedCurve3dElementCoordinateSystem::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aCoordinateSystem"))
        .def("CoordinateSystem",
             (opencascade::handle<StepFEA_FeaAxis2Placement3d> (StepFEA_AlignedCurve3dElementCoordinateSystem::*)() const) static_cast<opencascade::handle<StepFEA_FeaAxis2Placement3d> (StepFEA_AlignedCurve3dElementCoordinateSystem::*)() const>(&StepFEA_AlignedCurve3dElementCoordinateSystem::CoordinateSystem),
             R"#(Returns field CoordinateSystem)#" )
        .def("SetCoordinateSystem",
             (void (StepFEA_AlignedCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) ) static_cast<void (StepFEA_AlignedCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) >(&StepFEA_AlignedCurve3dElementCoordinateSystem::SetCoordinateSystem),
             R"#(Set field CoordinateSystem)#"  , py::arg("CoordinateSystem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_AlignedCurve3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_AlignedCurve3dElementCoordinateSystem::*)() const>(&StepFEA_AlignedCurve3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_AlignedCurve3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_AlignedCurve3dElementCoordinateSystem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_AlignedSurface3dElementCoordinateSystem ,opencascade::handle<StepFEA_AlignedSurface3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_AlignedSurface3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_AlignedSurface3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) ) static_cast<void (StepFEA_AlignedSurface3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) >(&StepFEA_AlignedSurface3dElementCoordinateSystem::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aCoordinateSystem"))
        .def("CoordinateSystem",
             (opencascade::handle<StepFEA_FeaAxis2Placement3d> (StepFEA_AlignedSurface3dElementCoordinateSystem::*)() const) static_cast<opencascade::handle<StepFEA_FeaAxis2Placement3d> (StepFEA_AlignedSurface3dElementCoordinateSystem::*)() const>(&StepFEA_AlignedSurface3dElementCoordinateSystem::CoordinateSystem),
             R"#(Returns field CoordinateSystem)#" )
        .def("SetCoordinateSystem",
             (void (StepFEA_AlignedSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) ) static_cast<void (StepFEA_AlignedSurface3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) >(&StepFEA_AlignedSurface3dElementCoordinateSystem::SetCoordinateSystem),
             R"#(Set field CoordinateSystem)#"  , py::arg("CoordinateSystem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_AlignedSurface3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_AlignedSurface3dElementCoordinateSystem::*)() const>(&StepFEA_AlignedSurface3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_AlignedSurface3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_AlignedSurface3dElementCoordinateSystem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ArbitraryVolume3dElementCoordinateSystem ,opencascade::handle<StepFEA_ArbitraryVolume3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_ArbitraryVolume3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_ArbitraryVolume3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) ) static_cast<void (StepFEA_ArbitraryVolume3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) >(&StepFEA_ArbitraryVolume3dElementCoordinateSystem::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aCoordinateSystem"))
        .def("CoordinateSystem",
             (opencascade::handle<StepFEA_FeaAxis2Placement3d> (StepFEA_ArbitraryVolume3dElementCoordinateSystem::*)() const) static_cast<opencascade::handle<StepFEA_FeaAxis2Placement3d> (StepFEA_ArbitraryVolume3dElementCoordinateSystem::*)() const>(&StepFEA_ArbitraryVolume3dElementCoordinateSystem::CoordinateSystem),
             R"#(Returns field CoordinateSystem)#" )
        .def("SetCoordinateSystem",
             (void (StepFEA_ArbitraryVolume3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) ) static_cast<void (StepFEA_ArbitraryVolume3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_FeaAxis2Placement3d> & ) >(&StepFEA_ArbitraryVolume3dElementCoordinateSystem::SetCoordinateSystem),
             R"#(Set field CoordinateSystem)#"  , py::arg("CoordinateSystem"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ArbitraryVolume3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ArbitraryVolume3dElementCoordinateSystem::*)() const>(&StepFEA_ArbitraryVolume3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ArbitraryVolume3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_ArbitraryVolume3dElementCoordinateSystem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ConstantSurface3dElementCoordinateSystem ,opencascade::handle<StepFEA_ConstantSurface3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_ConstantSurface3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_ConstantSurface3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Real ) ) static_cast<void (StepFEA_ConstantSurface3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Real ) >(&StepFEA_ConstantSurface3dElementCoordinateSystem::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aAxis"),  py::arg("aAngle"))
        .def("Axis",
             (Standard_Integer (StepFEA_ConstantSurface3dElementCoordinateSystem::*)() const) static_cast<Standard_Integer (StepFEA_ConstantSurface3dElementCoordinateSystem::*)() const>(&StepFEA_ConstantSurface3dElementCoordinateSystem::Axis),
             R"#(Returns field Axis)#" )
        .def("SetAxis",
             (void (StepFEA_ConstantSurface3dElementCoordinateSystem::*)( const Standard_Integer ) ) static_cast<void (StepFEA_ConstantSurface3dElementCoordinateSystem::*)( const Standard_Integer ) >(&StepFEA_ConstantSurface3dElementCoordinateSystem::SetAxis),
             R"#(Set field Axis)#"  , py::arg("Axis"))
        .def("Angle",
             (Standard_Real (StepFEA_ConstantSurface3dElementCoordinateSystem::*)() const) static_cast<Standard_Real (StepFEA_ConstantSurface3dElementCoordinateSystem::*)() const>(&StepFEA_ConstantSurface3dElementCoordinateSystem::Angle),
             R"#(Returns field Angle)#" )
        .def("SetAngle",
             (void (StepFEA_ConstantSurface3dElementCoordinateSystem::*)( const Standard_Real ) ) static_cast<void (StepFEA_ConstantSurface3dElementCoordinateSystem::*)( const Standard_Real ) >(&StepFEA_ConstantSurface3dElementCoordinateSystem::SetAngle),
             R"#(Set field Angle)#"  , py::arg("Angle"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ConstantSurface3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ConstantSurface3dElementCoordinateSystem::*)() const>(&StepFEA_ConstantSurface3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ConstantSurface3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_ConstantSurface3dElementCoordinateSystem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_Curve3dElementRepresentation ,opencascade::handle<StepFEA_Curve3dElementRepresentation> , StepFEA_ElementRepresentation>>(m.attr("StepFEA_Curve3dElementRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_Curve3dElementRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & , const opencascade::handle<StepFEA_FeaModel3d> & , const opencascade::handle<StepElement_Curve3dElementDescriptor> & , const opencascade::handle<StepFEA_Curve3dElementProperty> & , const opencascade::handle<StepElement_ElementMaterial> & ) ) static_cast<void (StepFEA_Curve3dElementRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & , const opencascade::handle<StepFEA_FeaModel3d> & , const opencascade::handle<StepElement_Curve3dElementDescriptor> & , const opencascade::handle<StepFEA_Curve3dElementProperty> & , const opencascade::handle<StepElement_ElementMaterial> & ) >(&StepFEA_Curve3dElementRepresentation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentation_Name"),  py::arg("aRepresentation_Items"),  py::arg("aRepresentation_ContextOfItems"),  py::arg("aElementRepresentation_NodeList"),  py::arg("aModelRef"),  py::arg("aElementDescriptor"),  py::arg("aProperty"),  py::arg("aMaterial"))
        .def("ModelRef",
             (opencascade::handle<StepFEA_FeaModel3d> (StepFEA_Curve3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepFEA_FeaModel3d> (StepFEA_Curve3dElementRepresentation::*)() const>(&StepFEA_Curve3dElementRepresentation::ModelRef),
             R"#(Returns field ModelRef)#" )
        .def("SetModelRef",
             (void (StepFEA_Curve3dElementRepresentation::*)( const opencascade::handle<StepFEA_FeaModel3d> & ) ) static_cast<void (StepFEA_Curve3dElementRepresentation::*)( const opencascade::handle<StepFEA_FeaModel3d> & ) >(&StepFEA_Curve3dElementRepresentation::SetModelRef),
             R"#(Set field ModelRef)#"  , py::arg("ModelRef"))
        .def("ElementDescriptor",
             (opencascade::handle<StepElement_Curve3dElementDescriptor> (StepFEA_Curve3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepElement_Curve3dElementDescriptor> (StepFEA_Curve3dElementRepresentation::*)() const>(&StepFEA_Curve3dElementRepresentation::ElementDescriptor),
             R"#(Returns field ElementDescriptor)#" )
        .def("SetElementDescriptor",
             (void (StepFEA_Curve3dElementRepresentation::*)( const opencascade::handle<StepElement_Curve3dElementDescriptor> & ) ) static_cast<void (StepFEA_Curve3dElementRepresentation::*)( const opencascade::handle<StepElement_Curve3dElementDescriptor> & ) >(&StepFEA_Curve3dElementRepresentation::SetElementDescriptor),
             R"#(Set field ElementDescriptor)#"  , py::arg("ElementDescriptor"))
        .def("Property",
             (opencascade::handle<StepFEA_Curve3dElementProperty> (StepFEA_Curve3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepFEA_Curve3dElementProperty> (StepFEA_Curve3dElementRepresentation::*)() const>(&StepFEA_Curve3dElementRepresentation::Property),
             R"#(Returns field Property)#" )
        .def("SetProperty",
             (void (StepFEA_Curve3dElementRepresentation::*)( const opencascade::handle<StepFEA_Curve3dElementProperty> & ) ) static_cast<void (StepFEA_Curve3dElementRepresentation::*)( const opencascade::handle<StepFEA_Curve3dElementProperty> & ) >(&StepFEA_Curve3dElementRepresentation::SetProperty),
             R"#(Set field Property)#"  , py::arg("Property"))
        .def("Material",
             (opencascade::handle<StepElement_ElementMaterial> (StepFEA_Curve3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepElement_ElementMaterial> (StepFEA_Curve3dElementRepresentation::*)() const>(&StepFEA_Curve3dElementRepresentation::Material),
             R"#(Returns field Material)#" )
        .def("SetMaterial",
             (void (StepFEA_Curve3dElementRepresentation::*)( const opencascade::handle<StepElement_ElementMaterial> & ) ) static_cast<void (StepFEA_Curve3dElementRepresentation::*)( const opencascade::handle<StepElement_ElementMaterial> & ) >(&StepFEA_Curve3dElementRepresentation::SetMaterial),
             R"#(Set field Material)#"  , py::arg("Material"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_Curve3dElementRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_Curve3dElementRepresentation::*)() const>(&StepFEA_Curve3dElementRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_Curve3dElementRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_Curve3dElementRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementIntervalConstant ,opencascade::handle<StepFEA_CurveElementIntervalConstant> , StepFEA_CurveElementInterval>>(m.attr("StepFEA_CurveElementIntervalConstant"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_CurveElementIntervalConstant::*)( const opencascade::handle<StepFEA_CurveElementLocation> & , const opencascade::handle<StepBasic_EulerAngles> & , const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) ) static_cast<void (StepFEA_CurveElementIntervalConstant::*)( const opencascade::handle<StepFEA_CurveElementLocation> & , const opencascade::handle<StepBasic_EulerAngles> & , const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) >(&StepFEA_CurveElementIntervalConstant::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aCurveElementInterval_FinishPosition"),  py::arg("aCurveElementInterval_EuAngles"),  py::arg("aSection"))
        .def("Section",
             (opencascade::handle<StepElement_CurveElementSectionDefinition> (StepFEA_CurveElementIntervalConstant::*)() const) static_cast<opencascade::handle<StepElement_CurveElementSectionDefinition> (StepFEA_CurveElementIntervalConstant::*)() const>(&StepFEA_CurveElementIntervalConstant::Section),
             R"#(Returns field Section)#" )
        .def("SetSection",
             (void (StepFEA_CurveElementIntervalConstant::*)( const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) ) static_cast<void (StepFEA_CurveElementIntervalConstant::*)( const opencascade::handle<StepElement_CurveElementSectionDefinition> & ) >(&StepFEA_CurveElementIntervalConstant::SetSection),
             R"#(Set field Section)#"  , py::arg("Section"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementIntervalConstant::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementIntervalConstant::*)() const>(&StepFEA_CurveElementIntervalConstant::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementIntervalConstant::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_CurveElementIntervalConstant::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_CurveElementIntervalLinearlyVarying ,opencascade::handle<StepFEA_CurveElementIntervalLinearlyVarying> , StepFEA_CurveElementInterval>>(m.attr("StepFEA_CurveElementIntervalLinearlyVarying"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_CurveElementIntervalLinearlyVarying::*)( const opencascade::handle<StepFEA_CurveElementLocation> & , const opencascade::handle<StepBasic_EulerAngles> & , const opencascade::handle<StepElement_HArray1OfCurveElementSectionDefinition> & ) ) static_cast<void (StepFEA_CurveElementIntervalLinearlyVarying::*)( const opencascade::handle<StepFEA_CurveElementLocation> & , const opencascade::handle<StepBasic_EulerAngles> & , const opencascade::handle<StepElement_HArray1OfCurveElementSectionDefinition> & ) >(&StepFEA_CurveElementIntervalLinearlyVarying::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aCurveElementInterval_FinishPosition"),  py::arg("aCurveElementInterval_EuAngles"),  py::arg("aSections"))
        .def("Sections",
             (opencascade::handle<StepElement_HArray1OfCurveElementSectionDefinition> (StepFEA_CurveElementIntervalLinearlyVarying::*)() const) static_cast<opencascade::handle<StepElement_HArray1OfCurveElementSectionDefinition> (StepFEA_CurveElementIntervalLinearlyVarying::*)() const>(&StepFEA_CurveElementIntervalLinearlyVarying::Sections),
             R"#(Returns field Sections)#" )
        .def("SetSections",
             (void (StepFEA_CurveElementIntervalLinearlyVarying::*)( const opencascade::handle<StepElement_HArray1OfCurveElementSectionDefinition> & ) ) static_cast<void (StepFEA_CurveElementIntervalLinearlyVarying::*)( const opencascade::handle<StepElement_HArray1OfCurveElementSectionDefinition> & ) >(&StepFEA_CurveElementIntervalLinearlyVarying::SetSections),
             R"#(Set field Sections)#"  , py::arg("Sections"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_CurveElementIntervalLinearlyVarying::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_CurveElementIntervalLinearlyVarying::*)() const>(&StepFEA_CurveElementIntervalLinearlyVarying::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_CurveElementIntervalLinearlyVarying::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_CurveElementIntervalLinearlyVarying::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_DummyNode ,opencascade::handle<StepFEA_DummyNode> , StepFEA_NodeRepresentation>>(m.attr("StepFEA_DummyNode"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_DummyNode::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ElementGroup ,opencascade::handle<StepFEA_ElementGroup> , StepFEA_FeaGroup>>(m.attr("StepFEA_ElementGroup"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_ElementGroup::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaModel> & , const opencascade::handle<StepFEA_HArray1OfElementRepresentation> & ) ) static_cast<void (StepFEA_ElementGroup::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaModel> & , const opencascade::handle<StepFEA_HArray1OfElementRepresentation> & ) >(&StepFEA_ElementGroup::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aGroup_Name"),  py::arg("aGroup_Description"),  py::arg("aFeaGroup_ModelRef"),  py::arg("aElements"))
        .def("Elements",
             (opencascade::handle<StepFEA_HArray1OfElementRepresentation> (StepFEA_ElementGroup::*)() const) static_cast<opencascade::handle<StepFEA_HArray1OfElementRepresentation> (StepFEA_ElementGroup::*)() const>(&StepFEA_ElementGroup::Elements),
             R"#(Returns field Elements)#" )
        .def("SetElements",
             (void (StepFEA_ElementGroup::*)( const opencascade::handle<StepFEA_HArray1OfElementRepresentation> & ) ) static_cast<void (StepFEA_ElementGroup::*)( const opencascade::handle<StepFEA_HArray1OfElementRepresentation> & ) >(&StepFEA_ElementGroup::SetElements),
             R"#(Set field Elements)#"  , py::arg("Elements"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ElementGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ElementGroup::*)() const>(&StepFEA_ElementGroup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ElementGroup::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_ElementGroup::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaAreaDensity ,opencascade::handle<StepFEA_FeaAreaDensity> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaAreaDensity"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaAreaDensity::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Real ) ) static_cast<void (StepFEA_FeaAreaDensity::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Real ) >(&StepFEA_FeaAreaDensity::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFeaConstant"))
        .def("FeaConstant",
             (Standard_Real (StepFEA_FeaAreaDensity::*)() const) static_cast<Standard_Real (StepFEA_FeaAreaDensity::*)() const>(&StepFEA_FeaAreaDensity::FeaConstant),
             R"#(Returns field FeaConstant)#" )
        .def("SetFeaConstant",
             (void (StepFEA_FeaAreaDensity::*)( const Standard_Real ) ) static_cast<void (StepFEA_FeaAreaDensity::*)( const Standard_Real ) >(&StepFEA_FeaAreaDensity::SetFeaConstant),
             R"#(Set field FeaConstant)#"  , py::arg("FeaConstant"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaAreaDensity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaAreaDensity::*)() const>(&StepFEA_FeaAreaDensity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaAreaDensity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaAreaDensity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaLinearElasticity ,opencascade::handle<StepFEA_FeaLinearElasticity> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaLinearElasticity"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaLinearElasticity::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor43d & ) ) static_cast<void (StepFEA_FeaLinearElasticity::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor43d & ) >(&StepFEA_FeaLinearElasticity::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFeaConstants"))
        .def("FeaConstants",
             (StepFEA_SymmetricTensor43d (StepFEA_FeaLinearElasticity::*)() const) static_cast<StepFEA_SymmetricTensor43d (StepFEA_FeaLinearElasticity::*)() const>(&StepFEA_FeaLinearElasticity::FeaConstants),
             R"#(Returns field FeaConstants)#" )
        .def("SetFeaConstants",
             (void (StepFEA_FeaLinearElasticity::*)( const StepFEA_SymmetricTensor43d & ) ) static_cast<void (StepFEA_FeaLinearElasticity::*)( const StepFEA_SymmetricTensor43d & ) >(&StepFEA_FeaLinearElasticity::SetFeaConstants),
             R"#(Set field FeaConstants)#"  , py::arg("FeaConstants"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaLinearElasticity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaLinearElasticity::*)() const>(&StepFEA_FeaLinearElasticity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaLinearElasticity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaLinearElasticity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaMassDensity ,opencascade::handle<StepFEA_FeaMassDensity> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaMassDensity"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaMassDensity::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Real ) ) static_cast<void (StepFEA_FeaMassDensity::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Real ) >(&StepFEA_FeaMassDensity::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFeaConstant"))
        .def("FeaConstant",
             (Standard_Real (StepFEA_FeaMassDensity::*)() const) static_cast<Standard_Real (StepFEA_FeaMassDensity::*)() const>(&StepFEA_FeaMassDensity::FeaConstant),
             R"#(Returns field FeaConstant)#" )
        .def("SetFeaConstant",
             (void (StepFEA_FeaMassDensity::*)( const Standard_Real ) ) static_cast<void (StepFEA_FeaMassDensity::*)( const Standard_Real ) >(&StepFEA_FeaMassDensity::SetFeaConstant),
             R"#(Set field FeaConstant)#"  , py::arg("FeaConstant"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaMassDensity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaMassDensity::*)() const>(&StepFEA_FeaMassDensity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaMassDensity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaMassDensity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaModel3d ,opencascade::handle<StepFEA_FeaModel3d> , StepFEA_FeaModel>>(m.attr("StepFEA_FeaModel3d"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaModel3d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaMoistureAbsorption ,opencascade::handle<StepFEA_FeaMoistureAbsorption> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaMoistureAbsorption"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaMoistureAbsorption::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor23d & ) ) static_cast<void (StepFEA_FeaMoistureAbsorption::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor23d & ) >(&StepFEA_FeaMoistureAbsorption::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFeaConstants"))
        .def("FeaConstants",
             (StepFEA_SymmetricTensor23d (StepFEA_FeaMoistureAbsorption::*)() const) static_cast<StepFEA_SymmetricTensor23d (StepFEA_FeaMoistureAbsorption::*)() const>(&StepFEA_FeaMoistureAbsorption::FeaConstants),
             R"#(Returns field FeaConstants)#" )
        .def("SetFeaConstants",
             (void (StepFEA_FeaMoistureAbsorption::*)( const StepFEA_SymmetricTensor23d & ) ) static_cast<void (StepFEA_FeaMoistureAbsorption::*)( const StepFEA_SymmetricTensor23d & ) >(&StepFEA_FeaMoistureAbsorption::SetFeaConstants),
             R"#(Set field FeaConstants)#"  , py::arg("FeaConstants"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaMoistureAbsorption::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaMoistureAbsorption::*)() const>(&StepFEA_FeaMoistureAbsorption::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaMoistureAbsorption::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaMoistureAbsorption::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion ,opencascade::handle<StepFEA_FeaSecantCoefficientOfLinearThermalExpansion> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaSecantCoefficientOfLinearThermalExpansion"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor23d & , const Standard_Real ) ) static_cast<void (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor23d & , const Standard_Real ) >(&StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFeaConstants"),  py::arg("aReferenceTemperature"))
        .def("FeaConstants",
             (StepFEA_SymmetricTensor23d (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)() const) static_cast<StepFEA_SymmetricTensor23d (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)() const>(&StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::FeaConstants),
             R"#(Returns field FeaConstants)#" )
        .def("SetFeaConstants",
             (void (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)( const StepFEA_SymmetricTensor23d & ) ) static_cast<void (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)( const StepFEA_SymmetricTensor23d & ) >(&StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::SetFeaConstants),
             R"#(Set field FeaConstants)#"  , py::arg("FeaConstants"))
        .def("ReferenceTemperature",
             (Standard_Real (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)() const) static_cast<Standard_Real (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)() const>(&StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::ReferenceTemperature),
             R"#(Returns field ReferenceTemperature)#" )
        .def("SetReferenceTemperature",
             (void (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)( const Standard_Real ) ) static_cast<void (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)( const Standard_Real ) >(&StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::SetReferenceTemperature),
             R"#(Set field ReferenceTemperature)#"  , py::arg("ReferenceTemperature"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::*)() const>(&StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaSecantCoefficientOfLinearThermalExpansion::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaShellBendingStiffness ,opencascade::handle<StepFEA_FeaShellBendingStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaShellBendingStiffness"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaShellBendingStiffness::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor42d & ) ) static_cast<void (StepFEA_FeaShellBendingStiffness::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor42d & ) >(&StepFEA_FeaShellBendingStiffness::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFeaConstants"))
        .def("FeaConstants",
             (StepFEA_SymmetricTensor42d (StepFEA_FeaShellBendingStiffness::*)() const) static_cast<StepFEA_SymmetricTensor42d (StepFEA_FeaShellBendingStiffness::*)() const>(&StepFEA_FeaShellBendingStiffness::FeaConstants),
             R"#(Returns field FeaConstants)#" )
        .def("SetFeaConstants",
             (void (StepFEA_FeaShellBendingStiffness::*)( const StepFEA_SymmetricTensor42d & ) ) static_cast<void (StepFEA_FeaShellBendingStiffness::*)( const StepFEA_SymmetricTensor42d & ) >(&StepFEA_FeaShellBendingStiffness::SetFeaConstants),
             R"#(Set field FeaConstants)#"  , py::arg("FeaConstants"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaShellBendingStiffness::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaShellBendingStiffness::*)() const>(&StepFEA_FeaShellBendingStiffness::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaShellBendingStiffness::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaShellBendingStiffness::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaShellMembraneBendingCouplingStiffness ,opencascade::handle<StepFEA_FeaShellMembraneBendingCouplingStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaShellMembraneBendingCouplingStiffness"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaShellMembraneBendingCouplingStiffness::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor42d & ) ) static_cast<void (StepFEA_FeaShellMembraneBendingCouplingStiffness::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor42d & ) >(&StepFEA_FeaShellMembraneBendingCouplingStiffness::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFeaConstants"))
        .def("FeaConstants",
             (StepFEA_SymmetricTensor42d (StepFEA_FeaShellMembraneBendingCouplingStiffness::*)() const) static_cast<StepFEA_SymmetricTensor42d (StepFEA_FeaShellMembraneBendingCouplingStiffness::*)() const>(&StepFEA_FeaShellMembraneBendingCouplingStiffness::FeaConstants),
             R"#(Returns field FeaConstants)#" )
        .def("SetFeaConstants",
             (void (StepFEA_FeaShellMembraneBendingCouplingStiffness::*)( const StepFEA_SymmetricTensor42d & ) ) static_cast<void (StepFEA_FeaShellMembraneBendingCouplingStiffness::*)( const StepFEA_SymmetricTensor42d & ) >(&StepFEA_FeaShellMembraneBendingCouplingStiffness::SetFeaConstants),
             R"#(Set field FeaConstants)#"  , py::arg("FeaConstants"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaShellMembraneBendingCouplingStiffness::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaShellMembraneBendingCouplingStiffness::*)() const>(&StepFEA_FeaShellMembraneBendingCouplingStiffness::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaShellMembraneBendingCouplingStiffness::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaShellMembraneBendingCouplingStiffness::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaShellMembraneStiffness ,opencascade::handle<StepFEA_FeaShellMembraneStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaShellMembraneStiffness"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaShellMembraneStiffness::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor42d & ) ) static_cast<void (StepFEA_FeaShellMembraneStiffness::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor42d & ) >(&StepFEA_FeaShellMembraneStiffness::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFeaConstants"))
        .def("FeaConstants",
             (StepFEA_SymmetricTensor42d (StepFEA_FeaShellMembraneStiffness::*)() const) static_cast<StepFEA_SymmetricTensor42d (StepFEA_FeaShellMembraneStiffness::*)() const>(&StepFEA_FeaShellMembraneStiffness::FeaConstants),
             R"#(Returns field FeaConstants)#" )
        .def("SetFeaConstants",
             (void (StepFEA_FeaShellMembraneStiffness::*)( const StepFEA_SymmetricTensor42d & ) ) static_cast<void (StepFEA_FeaShellMembraneStiffness::*)( const StepFEA_SymmetricTensor42d & ) >(&StepFEA_FeaShellMembraneStiffness::SetFeaConstants),
             R"#(Set field FeaConstants)#"  , py::arg("FeaConstants"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaShellMembraneStiffness::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaShellMembraneStiffness::*)() const>(&StepFEA_FeaShellMembraneStiffness::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaShellMembraneStiffness::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaShellMembraneStiffness::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaShellShearStiffness ,opencascade::handle<StepFEA_FeaShellShearStiffness> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaShellShearStiffness"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaShellShearStiffness::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor22d & ) ) static_cast<void (StepFEA_FeaShellShearStiffness::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor22d & ) >(&StepFEA_FeaShellShearStiffness::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFeaConstants"))
        .def("FeaConstants",
             (StepFEA_SymmetricTensor22d (StepFEA_FeaShellShearStiffness::*)() const) static_cast<StepFEA_SymmetricTensor22d (StepFEA_FeaShellShearStiffness::*)() const>(&StepFEA_FeaShellShearStiffness::FeaConstants),
             R"#(Returns field FeaConstants)#" )
        .def("SetFeaConstants",
             (void (StepFEA_FeaShellShearStiffness::*)( const StepFEA_SymmetricTensor22d & ) ) static_cast<void (StepFEA_FeaShellShearStiffness::*)( const StepFEA_SymmetricTensor22d & ) >(&StepFEA_FeaShellShearStiffness::SetFeaConstants),
             R"#(Set field FeaConstants)#"  , py::arg("FeaConstants"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaShellShearStiffness::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaShellShearStiffness::*)() const>(&StepFEA_FeaShellShearStiffness::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaShellShearStiffness::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaShellShearStiffness::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion ,opencascade::handle<StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion> , StepFEA_FeaMaterialPropertyRepresentationItem>>(m.attr("StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor23d & ) ) static_cast<void (StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::*)( const opencascade::handle<TCollection_HAsciiString> & , const StepFEA_SymmetricTensor23d & ) >(&StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFeaConstants"))
        .def("FeaConstants",
             (StepFEA_SymmetricTensor23d (StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::*)() const) static_cast<StepFEA_SymmetricTensor23d (StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::*)() const>(&StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::FeaConstants),
             R"#(Returns field FeaConstants)#" )
        .def("SetFeaConstants",
             (void (StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::*)( const StepFEA_SymmetricTensor23d & ) ) static_cast<void (StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::*)( const StepFEA_SymmetricTensor23d & ) >(&StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::SetFeaConstants),
             R"#(Set field FeaConstants)#"  , py::arg("FeaConstants"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::*)() const>(&StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_GeometricNode ,opencascade::handle<StepFEA_GeometricNode> , StepFEA_NodeRepresentation>>(m.attr("StepFEA_GeometricNode"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_GeometricNode::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_Node ,opencascade::handle<StepFEA_Node> , StepFEA_NodeRepresentation>>(m.attr("StepFEA_Node"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_Node::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeGroup ,opencascade::handle<StepFEA_NodeGroup> , StepFEA_FeaGroup>>(m.attr("StepFEA_NodeGroup"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_NodeGroup::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaModel> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) ) static_cast<void (StepFEA_NodeGroup::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_FeaModel> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) >(&StepFEA_NodeGroup::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aGroup_Name"),  py::arg("aGroup_Description"),  py::arg("aFeaGroup_ModelRef"),  py::arg("aNodes"))
        .def("Nodes",
             (opencascade::handle<StepFEA_HArray1OfNodeRepresentation> (StepFEA_NodeGroup::*)() const) static_cast<opencascade::handle<StepFEA_HArray1OfNodeRepresentation> (StepFEA_NodeGroup::*)() const>(&StepFEA_NodeGroup::Nodes),
             R"#(Returns field Nodes)#" )
        .def("SetNodes",
             (void (StepFEA_NodeGroup::*)( const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) ) static_cast<void (StepFEA_NodeGroup::*)( const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & ) >(&StepFEA_NodeGroup::SetNodes),
             R"#(Set field Nodes)#"  , py::arg("Nodes"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_NodeGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_NodeGroup::*)() const>(&StepFEA_NodeGroup::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_NodeGroup::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_NodeGroup::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ParametricCurve3dElementCoordinateDirection ,opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_ParametricCurve3dElementCoordinateDirection"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_ParametricCurve3dElementCoordinateDirection::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepFEA_ParametricCurve3dElementCoordinateDirection::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepGeom_Direction> & ) >(&StepFEA_ParametricCurve3dElementCoordinateDirection::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aOrientation"))
        .def("Orientation",
             (opencascade::handle<StepGeom_Direction> (StepFEA_ParametricCurve3dElementCoordinateDirection::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepFEA_ParametricCurve3dElementCoordinateDirection::*)() const>(&StepFEA_ParametricCurve3dElementCoordinateDirection::Orientation),
             R"#(Returns field Orientation)#" )
        .def("SetOrientation",
             (void (StepFEA_ParametricCurve3dElementCoordinateDirection::*)( const opencascade::handle<StepGeom_Direction> & ) ) static_cast<void (StepFEA_ParametricCurve3dElementCoordinateDirection::*)( const opencascade::handle<StepGeom_Direction> & ) >(&StepFEA_ParametricCurve3dElementCoordinateDirection::SetOrientation),
             R"#(Set field Orientation)#"  , py::arg("Orientation"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ParametricCurve3dElementCoordinateDirection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ParametricCurve3dElementCoordinateDirection::*)() const>(&StepFEA_ParametricCurve3dElementCoordinateDirection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ParametricCurve3dElementCoordinateDirection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_ParametricCurve3dElementCoordinateDirection::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ParametricCurve3dElementCoordinateSystem ,opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_ParametricCurve3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_ParametricCurve3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> & ) ) static_cast<void (StepFEA_ParametricCurve3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> & ) >(&StepFEA_ParametricCurve3dElementCoordinateSystem::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aDirection"))
        .def("Direction",
             (opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> (StepFEA_ParametricCurve3dElementCoordinateSystem::*)() const) static_cast<opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> (StepFEA_ParametricCurve3dElementCoordinateSystem::*)() const>(&StepFEA_ParametricCurve3dElementCoordinateSystem::Direction),
             R"#(Returns field Direction)#" )
        .def("SetDirection",
             (void (StepFEA_ParametricCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> & ) ) static_cast<void (StepFEA_ParametricCurve3dElementCoordinateSystem::*)( const opencascade::handle<StepFEA_ParametricCurve3dElementCoordinateDirection> & ) >(&StepFEA_ParametricCurve3dElementCoordinateSystem::SetDirection),
             R"#(Set field Direction)#"  , py::arg("Direction"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ParametricCurve3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ParametricCurve3dElementCoordinateSystem::*)() const>(&StepFEA_ParametricCurve3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ParametricCurve3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_ParametricCurve3dElementCoordinateSystem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_ParametricSurface3dElementCoordinateSystem ,opencascade::handle<StepFEA_ParametricSurface3dElementCoordinateSystem> , StepFEA_FeaRepresentationItem>>(m.attr("StepFEA_ParametricSurface3dElementCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_ParametricSurface3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Real ) ) static_cast<void (StepFEA_ParametricSurface3dElementCoordinateSystem::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer , const Standard_Real ) >(&StepFEA_ParametricSurface3dElementCoordinateSystem::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aAxis"),  py::arg("aAngle"))
        .def("Axis",
             (Standard_Integer (StepFEA_ParametricSurface3dElementCoordinateSystem::*)() const) static_cast<Standard_Integer (StepFEA_ParametricSurface3dElementCoordinateSystem::*)() const>(&StepFEA_ParametricSurface3dElementCoordinateSystem::Axis),
             R"#(Returns field Axis)#" )
        .def("SetAxis",
             (void (StepFEA_ParametricSurface3dElementCoordinateSystem::*)( const Standard_Integer ) ) static_cast<void (StepFEA_ParametricSurface3dElementCoordinateSystem::*)( const Standard_Integer ) >(&StepFEA_ParametricSurface3dElementCoordinateSystem::SetAxis),
             R"#(Set field Axis)#"  , py::arg("Axis"))
        .def("Angle",
             (Standard_Real (StepFEA_ParametricSurface3dElementCoordinateSystem::*)() const) static_cast<Standard_Real (StepFEA_ParametricSurface3dElementCoordinateSystem::*)() const>(&StepFEA_ParametricSurface3dElementCoordinateSystem::Angle),
             R"#(Returns field Angle)#" )
        .def("SetAngle",
             (void (StepFEA_ParametricSurface3dElementCoordinateSystem::*)( const Standard_Real ) ) static_cast<void (StepFEA_ParametricSurface3dElementCoordinateSystem::*)( const Standard_Real ) >(&StepFEA_ParametricSurface3dElementCoordinateSystem::SetAngle),
             R"#(Set field Angle)#"  , py::arg("Angle"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_ParametricSurface3dElementCoordinateSystem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_ParametricSurface3dElementCoordinateSystem::*)() const>(&StepFEA_ParametricSurface3dElementCoordinateSystem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_ParametricSurface3dElementCoordinateSystem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_ParametricSurface3dElementCoordinateSystem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_Surface3dElementRepresentation ,opencascade::handle<StepFEA_Surface3dElementRepresentation> , StepFEA_ElementRepresentation>>(m.attr("StepFEA_Surface3dElementRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_Surface3dElementRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & , const opencascade::handle<StepFEA_FeaModel3d> & , const opencascade::handle<StepElement_Surface3dElementDescriptor> & , const opencascade::handle<StepElement_SurfaceElementProperty> & , const opencascade::handle<StepElement_ElementMaterial> & ) ) static_cast<void (StepFEA_Surface3dElementRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & , const opencascade::handle<StepFEA_FeaModel3d> & , const opencascade::handle<StepElement_Surface3dElementDescriptor> & , const opencascade::handle<StepElement_SurfaceElementProperty> & , const opencascade::handle<StepElement_ElementMaterial> & ) >(&StepFEA_Surface3dElementRepresentation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentation_Name"),  py::arg("aRepresentation_Items"),  py::arg("aRepresentation_ContextOfItems"),  py::arg("aElementRepresentation_NodeList"),  py::arg("aModelRef"),  py::arg("aElementDescriptor"),  py::arg("aProperty"),  py::arg("aMaterial"))
        .def("ModelRef",
             (opencascade::handle<StepFEA_FeaModel3d> (StepFEA_Surface3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepFEA_FeaModel3d> (StepFEA_Surface3dElementRepresentation::*)() const>(&StepFEA_Surface3dElementRepresentation::ModelRef),
             R"#(Returns field ModelRef)#" )
        .def("SetModelRef",
             (void (StepFEA_Surface3dElementRepresentation::*)( const opencascade::handle<StepFEA_FeaModel3d> & ) ) static_cast<void (StepFEA_Surface3dElementRepresentation::*)( const opencascade::handle<StepFEA_FeaModel3d> & ) >(&StepFEA_Surface3dElementRepresentation::SetModelRef),
             R"#(Set field ModelRef)#"  , py::arg("ModelRef"))
        .def("ElementDescriptor",
             (opencascade::handle<StepElement_Surface3dElementDescriptor> (StepFEA_Surface3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepElement_Surface3dElementDescriptor> (StepFEA_Surface3dElementRepresentation::*)() const>(&StepFEA_Surface3dElementRepresentation::ElementDescriptor),
             R"#(Returns field ElementDescriptor)#" )
        .def("SetElementDescriptor",
             (void (StepFEA_Surface3dElementRepresentation::*)( const opencascade::handle<StepElement_Surface3dElementDescriptor> & ) ) static_cast<void (StepFEA_Surface3dElementRepresentation::*)( const opencascade::handle<StepElement_Surface3dElementDescriptor> & ) >(&StepFEA_Surface3dElementRepresentation::SetElementDescriptor),
             R"#(Set field ElementDescriptor)#"  , py::arg("ElementDescriptor"))
        .def("Property",
             (opencascade::handle<StepElement_SurfaceElementProperty> (StepFEA_Surface3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepElement_SurfaceElementProperty> (StepFEA_Surface3dElementRepresentation::*)() const>(&StepFEA_Surface3dElementRepresentation::Property),
             R"#(Returns field Property)#" )
        .def("SetProperty",
             (void (StepFEA_Surface3dElementRepresentation::*)( const opencascade::handle<StepElement_SurfaceElementProperty> & ) ) static_cast<void (StepFEA_Surface3dElementRepresentation::*)( const opencascade::handle<StepElement_SurfaceElementProperty> & ) >(&StepFEA_Surface3dElementRepresentation::SetProperty),
             R"#(Set field Property)#"  , py::arg("Property"))
        .def("Material",
             (opencascade::handle<StepElement_ElementMaterial> (StepFEA_Surface3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepElement_ElementMaterial> (StepFEA_Surface3dElementRepresentation::*)() const>(&StepFEA_Surface3dElementRepresentation::Material),
             R"#(Returns field Material)#" )
        .def("SetMaterial",
             (void (StepFEA_Surface3dElementRepresentation::*)( const opencascade::handle<StepElement_ElementMaterial> & ) ) static_cast<void (StepFEA_Surface3dElementRepresentation::*)( const opencascade::handle<StepElement_ElementMaterial> & ) >(&StepFEA_Surface3dElementRepresentation::SetMaterial),
             R"#(Set field Material)#"  , py::arg("Material"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_Surface3dElementRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_Surface3dElementRepresentation::*)() const>(&StepFEA_Surface3dElementRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_Surface3dElementRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_Surface3dElementRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_Volume3dElementRepresentation ,opencascade::handle<StepFEA_Volume3dElementRepresentation> , StepFEA_ElementRepresentation>>(m.attr("StepFEA_Volume3dElementRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepFEA_Volume3dElementRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & , const opencascade::handle<StepFEA_FeaModel3d> & , const opencascade::handle<StepElement_Volume3dElementDescriptor> & , const opencascade::handle<StepElement_ElementMaterial> & ) ) static_cast<void (StepFEA_Volume3dElementRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & , const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & , const opencascade::handle<StepRepr_RepresentationContext> & , const opencascade::handle<StepFEA_HArray1OfNodeRepresentation> & , const opencascade::handle<StepFEA_FeaModel3d> & , const opencascade::handle<StepElement_Volume3dElementDescriptor> & , const opencascade::handle<StepElement_ElementMaterial> & ) >(&StepFEA_Volume3dElementRepresentation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentation_Name"),  py::arg("aRepresentation_Items"),  py::arg("aRepresentation_ContextOfItems"),  py::arg("aElementRepresentation_NodeList"),  py::arg("aModelRef"),  py::arg("aElementDescriptor"),  py::arg("aMaterial"))
        .def("ModelRef",
             (opencascade::handle<StepFEA_FeaModel3d> (StepFEA_Volume3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepFEA_FeaModel3d> (StepFEA_Volume3dElementRepresentation::*)() const>(&StepFEA_Volume3dElementRepresentation::ModelRef),
             R"#(Returns field ModelRef)#" )
        .def("SetModelRef",
             (void (StepFEA_Volume3dElementRepresentation::*)( const opencascade::handle<StepFEA_FeaModel3d> & ) ) static_cast<void (StepFEA_Volume3dElementRepresentation::*)( const opencascade::handle<StepFEA_FeaModel3d> & ) >(&StepFEA_Volume3dElementRepresentation::SetModelRef),
             R"#(Set field ModelRef)#"  , py::arg("ModelRef"))
        .def("ElementDescriptor",
             (opencascade::handle<StepElement_Volume3dElementDescriptor> (StepFEA_Volume3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepElement_Volume3dElementDescriptor> (StepFEA_Volume3dElementRepresentation::*)() const>(&StepFEA_Volume3dElementRepresentation::ElementDescriptor),
             R"#(Returns field ElementDescriptor)#" )
        .def("SetElementDescriptor",
             (void (StepFEA_Volume3dElementRepresentation::*)( const opencascade::handle<StepElement_Volume3dElementDescriptor> & ) ) static_cast<void (StepFEA_Volume3dElementRepresentation::*)( const opencascade::handle<StepElement_Volume3dElementDescriptor> & ) >(&StepFEA_Volume3dElementRepresentation::SetElementDescriptor),
             R"#(Set field ElementDescriptor)#"  , py::arg("ElementDescriptor"))
        .def("Material",
             (opencascade::handle<StepElement_ElementMaterial> (StepFEA_Volume3dElementRepresentation::*)() const) static_cast<opencascade::handle<StepElement_ElementMaterial> (StepFEA_Volume3dElementRepresentation::*)() const>(&StepFEA_Volume3dElementRepresentation::Material),
             R"#(Returns field Material)#" )
        .def("SetMaterial",
             (void (StepFEA_Volume3dElementRepresentation::*)( const opencascade::handle<StepElement_ElementMaterial> & ) ) static_cast<void (StepFEA_Volume3dElementRepresentation::*)( const opencascade::handle<StepElement_ElementMaterial> & ) >(&StepFEA_Volume3dElementRepresentation::SetMaterial),
             R"#(Set field Material)#"  , py::arg("Material"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepFEA_Volume3dElementRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepFEA_Volume3dElementRepresentation::*)() const>(&StepFEA_Volume3dElementRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepFEA_Volume3dElementRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_Volume3dElementRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeWithSolutionCoordinateSystem ,opencascade::handle<StepFEA_NodeWithSolutionCoordinateSystem> , StepFEA_Node>>(m.attr("StepFEA_NodeWithSolutionCoordinateSystem"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_NodeWithSolutionCoordinateSystem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepFEA_NodeWithVector ,opencascade::handle<StepFEA_NodeWithVector> , StepFEA_Node>>(m.attr("StepFEA_NodeWithVector"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepFEA_NodeWithVector::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepFEA_UnspecifiedValue.hxx
// ./opencascade/StepFEA_Array1OfCurveElementEndOffset.hxx
// ./opencascade/StepFEA_SequenceOfElementRepresentation.hxx
// ./opencascade/StepFEA_ElementGroup.hxx
// ./opencascade/StepFEA_DummyNode.hxx
// ./opencascade/StepFEA_ParametricCurve3dElementCoordinateDirection.hxx
// ./opencascade/StepFEA_CurveElementEndCoordinateSystem.hxx
// ./opencascade/StepFEA_ElementRepresentation.hxx
// ./opencascade/StepFEA_Array1OfCurveElementEndRelease.hxx
// ./opencascade/StepFEA_ElementVolume.hxx
// ./opencascade/StepFEA_CurveElementIntervalConstant.hxx
// ./opencascade/StepFEA_HSequenceOfElementRepresentation.hxx
// ./opencascade/StepFEA_DegreeOfFreedomMember.hxx
// ./opencascade/StepFEA_FeaCurveSectionGeometricRelationship.hxx
// ./opencascade/StepFEA_CurveElementIntervalLinearlyVarying.hxx
// ./opencascade/StepFEA_FeaAxis2Placement3d.hxx
// ./opencascade/StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/StepFEA_AlignedCurve3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_Array1OfElementRepresentation.hxx
// ./opencascade/StepFEA_NodeWithVector.hxx
// ./opencascade/StepFEA_ParametricSurface3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_FeaModel.hxx
// ./opencascade/StepFEA_CurveElementInterval.hxx
// ./opencascade/StepFEA_CurveElementEndRelease.hxx
// ./opencascade/StepFEA_HSequenceOfElementGeometricRelationship.hxx
// ./opencascade/StepFEA_FeaSurfaceSectionGeometricRelationship.hxx
// ./opencascade/StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_SymmetricTensor22d.hxx
// ./opencascade/StepFEA_FeaParametricPoint.hxx
// ./opencascade/StepFEA_CoordinateSystemType.hxx
// ./opencascade/StepFEA_SequenceOfElementGeometricRelationship.hxx
// ./opencascade/StepFEA_Curve3dElementRepresentation.hxx
// ./opencascade/StepFEA_ConstantSurface3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_NodeGroup.hxx
// ./opencascade/StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx
// ./opencascade/StepFEA_FeaRepresentationItem.hxx
// ./opencascade/StepFEA_SymmetricTensor23d.hxx
// ./opencascade/StepFEA_Volume3dElementRepresentation.hxx
// ./opencascade/StepFEA_SequenceOfCurve3dElementProperty.hxx
// ./opencascade/StepFEA_HSequenceOfNodeRepresentation.hxx
// ./opencascade/StepFEA_FeaShellShearStiffness.hxx
// ./opencascade/StepFEA_SymmetricTensor43d.hxx
// ./opencascade/StepFEA_Array1OfNodeRepresentation.hxx
// ./opencascade/StepFEA_NodeWithSolutionCoordinateSystem.hxx
// ./opencascade/StepFEA_FeaModel3d.hxx
// ./opencascade/StepFEA_SymmetricTensor23dMember.hxx
// ./opencascade/StepFEA_NodeRepresentation.hxx
// ./opencascade/StepFEA_FeaModelDefinition.hxx
// ./opencascade/StepFEA_FeaMaterialPropertyRepresentation.hxx
// ./opencascade/StepFEA_SequenceOfNodeRepresentation.hxx
// ./opencascade/StepFEA_Array1OfDegreeOfFreedom.hxx
// ./opencascade/StepFEA_ParametricCurve3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_SymmetricTensor42d.hxx
// ./opencascade/StepFEA_FeaLinearElasticity.hxx
// ./opencascade/StepFEA_FeaShellMembraneStiffness.hxx
// ./opencascade/StepFEA_EnumeratedDegreeOfFreedom.hxx
// ./opencascade/StepFEA_FreedomsList.hxx
// ./opencascade/StepFEA_Curve3dElementProperty.hxx
// ./opencascade/StepFEA_FeaAreaDensity.hxx
// ./opencascade/StepFEA_GeometricNode.hxx
// ./opencascade/StepFEA_ElementGeometricRelationship.hxx
// ./opencascade/StepFEA_DegreeOfFreedom.hxx
// ./opencascade/StepFEA_FeaShellBendingStiffness.hxx
// ./opencascade/StepFEA_HArray1OfCurveElementInterval.hxx
// ./opencascade/StepFEA_HArray1OfCurveElementEndOffset.hxx
// ./opencascade/StepFEA_ElementOrElementGroup.hxx
// ./opencascade/StepFEA_AlignedSurface3dElementCoordinateSystem.hxx
// ./opencascade/StepFEA_FreedomAndCoefficient.hxx
// ./opencascade/StepFEA_HArray1OfNodeRepresentation.hxx
// ./opencascade/StepFEA_Node.hxx
// ./opencascade/StepFEA_CurveEdge.hxx
// ./opencascade/StepFEA_NodeDefinition.hxx
// ./opencascade/StepFEA_FeaGroup.hxx
// ./opencascade/StepFEA_Array1OfCurveElementInterval.hxx
// ./opencascade/StepFEA_CurveElementLocation.hxx
// ./opencascade/StepFEA_CurveElementEndOffset.hxx
// ./opencascade/StepFEA_NodeSet.hxx
// ./opencascade/StepFEA_FeaSecantCoefficientOfLinearThermalExpansion.hxx
// ./opencascade/StepFEA_HArray1OfDegreeOfFreedom.hxx
// ./opencascade/StepFEA_HSequenceOfCurve3dElementProperty.hxx
// ./opencascade/StepFEA_FeaMoistureAbsorption.hxx
// ./opencascade/StepFEA_HArray1OfElementRepresentation.hxx
// ./opencascade/StepFEA_Surface3dElementRepresentation.hxx
// ./opencascade/StepFEA_FeaMassDensity.hxx
// ./opencascade/StepFEA_FeaMaterialPropertyRepresentationItem.hxx
// ./opencascade/StepFEA_SymmetricTensor43dMember.hxx
// ./opencascade/StepFEA_HArray1OfCurveElementEndRelease.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<StepFEA_CurveElementEndOffset> >(m,"StepFEA_Array1OfCurveElementEndOffset");
    register_template_NCollection_Sequence<opencascade::handle<StepFEA_ElementRepresentation> >(m,"StepFEA_SequenceOfElementRepresentation");
    register_template_NCollection_Array1<opencascade::handle<StepFEA_CurveElementEndRelease> >(m,"StepFEA_Array1OfCurveElementEndRelease");
    register_template_NCollection_Array1<opencascade::handle<StepFEA_ElementRepresentation> >(m,"StepFEA_Array1OfElementRepresentation");
    register_template_NCollection_Sequence<opencascade::handle<StepFEA_ElementGeometricRelationship> >(m,"StepFEA_SequenceOfElementGeometricRelationship");
    register_template_NCollection_Sequence<opencascade::handle<StepFEA_Curve3dElementProperty> >(m,"StepFEA_SequenceOfCurve3dElementProperty");
    register_template_NCollection_Array1<opencascade::handle<StepFEA_NodeRepresentation> >(m,"StepFEA_Array1OfNodeRepresentation");
    register_template_NCollection_Sequence<opencascade::handle<StepFEA_NodeRepresentation> >(m,"StepFEA_SequenceOfNodeRepresentation");
    register_template_NCollection_Array1<StepFEA_DegreeOfFreedom>(m,"StepFEA_Array1OfDegreeOfFreedom");
    register_template_NCollection_Array1<opencascade::handle<StepFEA_CurveElementInterval> >(m,"StepFEA_Array1OfCurveElementInterval");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
