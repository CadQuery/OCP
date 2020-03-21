
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <StepShape_ToleranceValue.hxx>
#include <StepShape_LimitsAndFits.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FaceSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Point.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_PrecisionQualifier.hxx>
#include <StepShape_TypeQualifier.hxx>
#include <StepShape_ValueFormatTypeQualifier.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_Loop.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepShape_Loop.hxx>
#include <StepShape_Path.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_Edge.hxx>
#include <StepShape_Path.hxx>
#include <StepShape_Face.hxx>
#include <StepShape_FaceBound.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepShape_OpenShell.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Point.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_Vertex.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_CompoundRepresentationItem.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepGeom_Placement.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FaceSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_Unit.hxx>
#include <StepShape_BoxDomain.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepShape_OpenShell.hxx>
#include <StepShape_ClosedShell.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Point.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Pcurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepShape_SolidModel.hxx>
#include <StepShape_HalfSpaceSolid.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepShape_ShapeDimensionRepresentation.hxx>
#include <StepShape_Sphere.hxx>
#include <StepShape_Block.hxx>
#include <StepShape_RightAngularWedge.hxx>
#include <StepShape_Torus.hxx>
#include <StepShape_RightCircularCone.hxx>
#include <StepShape_RightCircularCylinder.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>

// module includes
#include <StepShape_AdvancedBrepShapeRepresentation.hxx>
#include <StepShape_AdvancedFace.hxx>
#include <StepShape_AngleRelator.hxx>
#include <StepShape_AngularLocation.hxx>
#include <StepShape_AngularSize.hxx>
#include <StepShape_Array1OfConnectedEdgeSet.hxx>
#include <StepShape_Array1OfConnectedFaceSet.hxx>
#include <StepShape_Array1OfEdge.hxx>
#include <StepShape_Array1OfFace.hxx>
#include <StepShape_Array1OfFaceBound.hxx>
#include <StepShape_Array1OfGeometricSetSelect.hxx>
#include <StepShape_Array1OfOrientedClosedShell.hxx>
#include <StepShape_Array1OfOrientedEdge.hxx>
#include <StepShape_Array1OfShapeDimensionRepresentationItem.hxx>
#include <StepShape_Array1OfShell.hxx>
#include <StepShape_Array1OfValueQualifier.hxx>
#include <StepShape_Block.hxx>
#include <StepShape_BooleanOperand.hxx>
#include <StepShape_BooleanOperator.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepShape_BoxDomain.hxx>
#include <StepShape_BoxedHalfSpace.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepShape_CompoundShapeRepresentation.hxx>
#include <StepShape_ConnectedEdgeSet.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepShape_ConnectedFaceShapeRepresentation.hxx>
#include <StepShape_ConnectedFaceSubSet.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepShape_CsgPrimitive.hxx>
#include <StepShape_CsgSelect.hxx>
#include <StepShape_CsgShapeRepresentation.hxx>
#include <StepShape_CsgSolid.hxx>
#include <StepShape_DefinitionalRepresentationAndShapeRepresentation.hxx>
#include <StepShape_DimensionalCharacteristic.hxx>
#include <StepShape_DimensionalCharacteristicRepresentation.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalLocationWithPath.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepShape_DimensionalSizeWithPath.hxx>
#include <StepShape_DirectedDimensionalLocation.hxx>
#include <StepShape_Edge.hxx>
#include <StepShape_EdgeBasedWireframeModel.hxx>
#include <StepShape_EdgeBasedWireframeShapeRepresentation.hxx>
#include <StepShape_EdgeCurve.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <StepShape_ExtrudedAreaSolid.hxx>
#include <StepShape_ExtrudedFaceSolid.hxx>
#include <StepShape_Face.hxx>
#include <StepShape_FaceBasedSurfaceModel.hxx>
#include <StepShape_FaceBound.hxx>
#include <StepShape_FaceOuterBound.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StepShape_FacetedBrepShapeRepresentation.hxx>
#include <StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx>
#include <StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx>
#include <StepShape_GeometricCurveSet.hxx>
#include <StepShape_GeometricSet.hxx>
#include <StepShape_GeometricSetSelect.hxx>
#include <StepShape_HalfSpaceSolid.hxx>
#include <StepShape_HArray1OfConnectedEdgeSet.hxx>
#include <StepShape_HArray1OfConnectedFaceSet.hxx>
#include <StepShape_HArray1OfEdge.hxx>
#include <StepShape_HArray1OfFace.hxx>
#include <StepShape_HArray1OfFaceBound.hxx>
#include <StepShape_HArray1OfGeometricSetSelect.hxx>
#include <StepShape_HArray1OfOrientedClosedShell.hxx>
#include <StepShape_HArray1OfOrientedEdge.hxx>
#include <StepShape_HArray1OfShapeDimensionRepresentationItem.hxx>
#include <StepShape_HArray1OfShell.hxx>
#include <StepShape_HArray1OfValueQualifier.hxx>
#include <StepShape_LimitsAndFits.hxx>
#include <StepShape_Loop.hxx>
#include <StepShape_LoopAndPath.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StepShape_ManifoldSurfaceShapeRepresentation.hxx>
#include <StepShape_MeasureQualification.hxx>
#include <StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem.hxx>
#include <StepShape_NonManifoldSurfaceShapeRepresentation.hxx>
#include <StepShape_OpenShell.hxx>
#include <StepShape_OrientedClosedShell.hxx>
#include <StepShape_OrientedEdge.hxx>
#include <StepShape_OrientedFace.hxx>
#include <StepShape_OrientedOpenShell.hxx>
#include <StepShape_OrientedPath.hxx>
#include <StepShape_Path.hxx>
#include <StepShape_PlusMinusTolerance.hxx>
#include <StepShape_PointRepresentation.hxx>
#include <StepShape_PolyLoop.hxx>
#include <StepShape_PrecisionQualifier.hxx>
#include <StepShape_QualifiedRepresentationItem.hxx>
#include <StepShape_ReversibleTopologyItem.hxx>
#include <StepShape_RevolvedAreaSolid.hxx>
#include <StepShape_RevolvedFaceSolid.hxx>
#include <StepShape_RightAngularWedge.hxx>
#include <StepShape_RightCircularCone.hxx>
#include <StepShape_RightCircularCylinder.hxx>
#include <StepShape_SeamEdge.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepShape_ShapeDimensionRepresentation.hxx>
#include <StepShape_ShapeDimensionRepresentationItem.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepShape_ShapeRepresentationWithParameters.hxx>
#include <StepShape_Shell.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepShape_SolidModel.hxx>
#include <StepShape_SolidReplica.hxx>
#include <StepShape_Sphere.hxx>
#include <StepShape_Subedge.hxx>
#include <StepShape_Subface.hxx>
#include <StepShape_SurfaceModel.hxx>
#include <StepShape_SweptAreaSolid.hxx>
#include <StepShape_SweptFaceSolid.hxx>
#include <StepShape_ToleranceMethodDefinition.hxx>
#include <StepShape_ToleranceValue.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepShape_Torus.hxx>
#include <StepShape_TransitionalShapeRepresentation.hxx>
#include <StepShape_TypeQualifier.hxx>
#include <StepShape_ValueFormatTypeQualifier.hxx>
#include <StepShape_ValueQualifier.hxx>
#include <StepShape_Vertex.hxx>
#include <StepShape_VertexLoop.hxx>
#include <StepShape_VertexPoint.hxx>

// template related includes
// ./opencascade/StepShape_Array1OfShell.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepShape_Array1OfShapeDimensionRepresentationItem.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepShape_Array1OfGeometricSetSelect.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepShape_Array1OfOrientedClosedShell.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepShape_Array1OfValueQualifier.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepShape_Array1OfFaceBound.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepShape_Array1OfOrientedEdge.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepShape_Array1OfFace.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepShape_Array1OfConnectedEdgeSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepShape_Array1OfConnectedFaceSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepShape_Array1OfEdge.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <StepRepr_RepresentationContext.hxx>

// Module definiiton
void register_StepShape(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepShape"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepShape_Block ,opencascade::handle<StepShape_Block> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_Block"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Block::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Block::*)() const>(&StepShape_Block::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Block::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_BooleanOperand , shared_ptr<StepShape_BooleanOperand> >>(m.attr("StepShape_BooleanOperand"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_BooleanResult ,opencascade::handle<StepShape_BooleanResult> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_BooleanResult"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_BooleanResult::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_BooleanResult::*)() const>(&StepShape_BooleanResult::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_BooleanResult::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_BoxDomain ,opencascade::handle<StepShape_BoxDomain> , Standard_Transient>>(m.attr("StepShape_BoxDomain"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_BoxDomain::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_BoxDomain::*)() const>(&StepShape_BoxDomain::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_BoxDomain::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ConnectedFaceShapeRepresentation ,opencascade::handle<StepShape_ConnectedFaceShapeRepresentation> , StepRepr_Representation>>(m.attr("StepShape_ConnectedFaceShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ConnectedFaceShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ConnectedFaceShapeRepresentation::*)() const>(&StepShape_ConnectedFaceShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ConnectedFaceShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ContextDependentShapeRepresentation ,opencascade::handle<StepShape_ContextDependentShapeRepresentation> , Standard_Transient>>(m.attr("StepShape_ContextDependentShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ContextDependentShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ContextDependentShapeRepresentation::*)() const>(&StepShape_ContextDependentShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ContextDependentShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_CsgPrimitive , shared_ptr<StepShape_CsgPrimitive> , StepData_SelectType>>(m.attr("StepShape_CsgPrimitive"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_CsgPrimitive::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepShape_CsgPrimitive::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepShape_CsgPrimitive::CaseNum),
             R"#(Recognizes a CsgPrimitive Kind Entity that is : 1 -> Sphere 2 -> Block 3 -> RightAngularWedge 4 -> Torus 5 -> RightCircularCone 6 -> RightCircularCylinder 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_CsgSelect , shared_ptr<StepShape_CsgSelect> >>(m.attr("StepShape_CsgSelect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DefinitionalRepresentationAndShapeRepresentation ,opencascade::handle<StepShape_DefinitionalRepresentationAndShapeRepresentation> , StepRepr_DefinitionalRepresentation>>(m.attr("StepShape_DefinitionalRepresentationAndShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DefinitionalRepresentationAndShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DefinitionalRepresentationAndShapeRepresentation::*)() const>(&StepShape_DefinitionalRepresentationAndShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DefinitionalRepresentationAndShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalCharacteristic , shared_ptr<StepShape_DimensionalCharacteristic> , StepData_SelectType>>(m.attr("StepShape_DimensionalCharacteristic"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_DimensionalCharacteristic::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepShape_DimensionalCharacteristic::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepShape_DimensionalCharacteristic::CaseNum),
             R"#(Recognizes a kind of DimensionalCharacteristic select type 1 -> DimensionalLocation from StepShape 2 -> DimensionalSize from StepShape 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalCharacteristicRepresentation ,opencascade::handle<StepShape_DimensionalCharacteristicRepresentation> , Standard_Transient>>(m.attr("StepShape_DimensionalCharacteristicRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DimensionalCharacteristicRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DimensionalCharacteristicRepresentation::*)() const>(&StepShape_DimensionalCharacteristicRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DimensionalCharacteristicRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalLocation ,opencascade::handle<StepShape_DimensionalLocation> , StepRepr_ShapeAspectRelationship>>(m.attr("StepShape_DimensionalLocation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DimensionalLocation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DimensionalLocation::*)() const>(&StepShape_DimensionalLocation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DimensionalLocation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalSize ,opencascade::handle<StepShape_DimensionalSize> , Standard_Transient>>(m.attr("StepShape_DimensionalSize"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DimensionalSize::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DimensionalSize::*)() const>(&StepShape_DimensionalSize::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DimensionalSize::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_EdgeBasedWireframeModel ,opencascade::handle<StepShape_EdgeBasedWireframeModel> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_EdgeBasedWireframeModel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_EdgeBasedWireframeModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_EdgeBasedWireframeModel::*)() const>(&StepShape_EdgeBasedWireframeModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_EdgeBasedWireframeModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FaceBasedSurfaceModel ,opencascade::handle<StepShape_FaceBasedSurfaceModel> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_FaceBasedSurfaceModel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FaceBasedSurfaceModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FaceBasedSurfaceModel::*)() const>(&StepShape_FaceBasedSurfaceModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FaceBasedSurfaceModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_GeometricSet ,opencascade::handle<StepShape_GeometricSet> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_GeometricSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_GeometricSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_GeometricSet::*)() const>(&StepShape_GeometricSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_GeometricSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_GeometricSetSelect , shared_ptr<StepShape_GeometricSetSelect> , StepData_SelectType>>(m.attr("StepShape_GeometricSetSelect"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_GeometricSetSelect::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepShape_GeometricSetSelect::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepShape_GeometricSetSelect::CaseNum),
             R"#(Recognizes a GeometricSetSelect Kind Entity that is : 1 -> Point 2 -> Curve 3 -> Surface 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfConnectedEdgeSet ,opencascade::handle<StepShape_HArray1OfConnectedEdgeSet> , StepShape_Array1OfConnectedEdgeSet, Standard_Transient>>(m.attr("StepShape_HArray1OfConnectedEdgeSet"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepShape_ConnectedEdgeSet> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepShape_ConnectedEdgeSet> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfConnectedEdgeSet & (StepShape_HArray1OfConnectedEdgeSet::*)() const) static_cast<const StepShape_Array1OfConnectedEdgeSet & (StepShape_HArray1OfConnectedEdgeSet::*)() const>(&StepShape_HArray1OfConnectedEdgeSet::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfConnectedEdgeSet & (StepShape_HArray1OfConnectedEdgeSet::*)() ) static_cast<StepShape_Array1OfConnectedEdgeSet & (StepShape_HArray1OfConnectedEdgeSet::*)() >(&StepShape_HArray1OfConnectedEdgeSet::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfConnectedEdgeSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfConnectedEdgeSet::*)() const>(&StepShape_HArray1OfConnectedEdgeSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfConnectedEdgeSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfConnectedEdgeSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfConnectedFaceSet ,opencascade::handle<StepShape_HArray1OfConnectedFaceSet> , StepShape_Array1OfConnectedFaceSet, Standard_Transient>>(m.attr("StepShape_HArray1OfConnectedFaceSet"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepShape_ConnectedFaceSet> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepShape_ConnectedFaceSet> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfConnectedFaceSet & (StepShape_HArray1OfConnectedFaceSet::*)() const) static_cast<const StepShape_Array1OfConnectedFaceSet & (StepShape_HArray1OfConnectedFaceSet::*)() const>(&StepShape_HArray1OfConnectedFaceSet::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfConnectedFaceSet & (StepShape_HArray1OfConnectedFaceSet::*)() ) static_cast<StepShape_Array1OfConnectedFaceSet & (StepShape_HArray1OfConnectedFaceSet::*)() >(&StepShape_HArray1OfConnectedFaceSet::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfConnectedFaceSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfConnectedFaceSet::*)() const>(&StepShape_HArray1OfConnectedFaceSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfConnectedFaceSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfConnectedFaceSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfEdge ,opencascade::handle<StepShape_HArray1OfEdge> , StepShape_Array1OfEdge, Standard_Transient>>(m.attr("StepShape_HArray1OfEdge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepShape_Edge> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepShape_Edge> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfEdge & (StepShape_HArray1OfEdge::*)() const) static_cast<const StepShape_Array1OfEdge & (StepShape_HArray1OfEdge::*)() const>(&StepShape_HArray1OfEdge::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfEdge & (StepShape_HArray1OfEdge::*)() ) static_cast<StepShape_Array1OfEdge & (StepShape_HArray1OfEdge::*)() >(&StepShape_HArray1OfEdge::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfEdge::*)() const>(&StepShape_HArray1OfEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfFace ,opencascade::handle<StepShape_HArray1OfFace> , StepShape_Array1OfFace, Standard_Transient>>(m.attr("StepShape_HArray1OfFace"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepShape_Face> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepShape_Face> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfFace & (StepShape_HArray1OfFace::*)() const) static_cast<const StepShape_Array1OfFace & (StepShape_HArray1OfFace::*)() const>(&StepShape_HArray1OfFace::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfFace & (StepShape_HArray1OfFace::*)() ) static_cast<StepShape_Array1OfFace & (StepShape_HArray1OfFace::*)() >(&StepShape_HArray1OfFace::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfFace::*)() const>(&StepShape_HArray1OfFace::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfFace::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfFace::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfFaceBound ,opencascade::handle<StepShape_HArray1OfFaceBound> , StepShape_Array1OfFaceBound, Standard_Transient>>(m.attr("StepShape_HArray1OfFaceBound"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepShape_FaceBound> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepShape_FaceBound> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfFaceBound & (StepShape_HArray1OfFaceBound::*)() const) static_cast<const StepShape_Array1OfFaceBound & (StepShape_HArray1OfFaceBound::*)() const>(&StepShape_HArray1OfFaceBound::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfFaceBound & (StepShape_HArray1OfFaceBound::*)() ) static_cast<StepShape_Array1OfFaceBound & (StepShape_HArray1OfFaceBound::*)() >(&StepShape_HArray1OfFaceBound::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfFaceBound::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfFaceBound::*)() const>(&StepShape_HArray1OfFaceBound::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfFaceBound::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfFaceBound::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfGeometricSetSelect ,opencascade::handle<StepShape_HArray1OfGeometricSetSelect> , StepShape_Array1OfGeometricSetSelect, Standard_Transient>>(m.attr("StepShape_HArray1OfGeometricSetSelect"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepShape_GeometricSetSelect & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepShape_GeometricSetSelect> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfGeometricSetSelect & (StepShape_HArray1OfGeometricSetSelect::*)() const) static_cast<const StepShape_Array1OfGeometricSetSelect & (StepShape_HArray1OfGeometricSetSelect::*)() const>(&StepShape_HArray1OfGeometricSetSelect::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfGeometricSetSelect & (StepShape_HArray1OfGeometricSetSelect::*)() ) static_cast<StepShape_Array1OfGeometricSetSelect & (StepShape_HArray1OfGeometricSetSelect::*)() >(&StepShape_HArray1OfGeometricSetSelect::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfGeometricSetSelect::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfGeometricSetSelect::*)() const>(&StepShape_HArray1OfGeometricSetSelect::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfGeometricSetSelect::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfGeometricSetSelect::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfOrientedClosedShell ,opencascade::handle<StepShape_HArray1OfOrientedClosedShell> , StepShape_Array1OfOrientedClosedShell, Standard_Transient>>(m.attr("StepShape_HArray1OfOrientedClosedShell"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepShape_OrientedClosedShell> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepShape_OrientedClosedShell> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfOrientedClosedShell & (StepShape_HArray1OfOrientedClosedShell::*)() const) static_cast<const StepShape_Array1OfOrientedClosedShell & (StepShape_HArray1OfOrientedClosedShell::*)() const>(&StepShape_HArray1OfOrientedClosedShell::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfOrientedClosedShell & (StepShape_HArray1OfOrientedClosedShell::*)() ) static_cast<StepShape_Array1OfOrientedClosedShell & (StepShape_HArray1OfOrientedClosedShell::*)() >(&StepShape_HArray1OfOrientedClosedShell::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfOrientedClosedShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfOrientedClosedShell::*)() const>(&StepShape_HArray1OfOrientedClosedShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfOrientedClosedShell::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfOrientedClosedShell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfOrientedEdge ,opencascade::handle<StepShape_HArray1OfOrientedEdge> , StepShape_Array1OfOrientedEdge, Standard_Transient>>(m.attr("StepShape_HArray1OfOrientedEdge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<StepShape_OrientedEdge> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<StepShape_OrientedEdge> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfOrientedEdge & (StepShape_HArray1OfOrientedEdge::*)() const) static_cast<const StepShape_Array1OfOrientedEdge & (StepShape_HArray1OfOrientedEdge::*)() const>(&StepShape_HArray1OfOrientedEdge::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfOrientedEdge & (StepShape_HArray1OfOrientedEdge::*)() ) static_cast<StepShape_Array1OfOrientedEdge & (StepShape_HArray1OfOrientedEdge::*)() >(&StepShape_HArray1OfOrientedEdge::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfOrientedEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfOrientedEdge::*)() const>(&StepShape_HArray1OfOrientedEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfOrientedEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfOrientedEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfShapeDimensionRepresentationItem ,opencascade::handle<StepShape_HArray1OfShapeDimensionRepresentationItem> , StepShape_Array1OfShapeDimensionRepresentationItem, Standard_Transient>>(m.attr("StepShape_HArray1OfShapeDimensionRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepShape_ShapeDimensionRepresentationItem & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepShape_ShapeDimensionRepresentationItem> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfShapeDimensionRepresentationItem & (StepShape_HArray1OfShapeDimensionRepresentationItem::*)() const) static_cast<const StepShape_Array1OfShapeDimensionRepresentationItem & (StepShape_HArray1OfShapeDimensionRepresentationItem::*)() const>(&StepShape_HArray1OfShapeDimensionRepresentationItem::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfShapeDimensionRepresentationItem & (StepShape_HArray1OfShapeDimensionRepresentationItem::*)() ) static_cast<StepShape_Array1OfShapeDimensionRepresentationItem & (StepShape_HArray1OfShapeDimensionRepresentationItem::*)() >(&StepShape_HArray1OfShapeDimensionRepresentationItem::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfShapeDimensionRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfShapeDimensionRepresentationItem::*)() const>(&StepShape_HArray1OfShapeDimensionRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfShapeDimensionRepresentationItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfShapeDimensionRepresentationItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfShell ,opencascade::handle<StepShape_HArray1OfShell> , StepShape_Array1OfShell, Standard_Transient>>(m.attr("StepShape_HArray1OfShell"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepShape_Shell & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepShape_Shell> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfShell & (StepShape_HArray1OfShell::*)() const) static_cast<const StepShape_Array1OfShell & (StepShape_HArray1OfShell::*)() const>(&StepShape_HArray1OfShell::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfShell & (StepShape_HArray1OfShell::*)() ) static_cast<StepShape_Array1OfShell & (StepShape_HArray1OfShell::*)() >(&StepShape_HArray1OfShell::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfShell::*)() const>(&StepShape_HArray1OfShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfShell::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfShell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfValueQualifier ,opencascade::handle<StepShape_HArray1OfValueQualifier> , StepShape_Array1OfValueQualifier, Standard_Transient>>(m.attr("StepShape_HArray1OfValueQualifier"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StepShape_ValueQualifier & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<StepShape_ValueQualifier> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const StepShape_Array1OfValueQualifier & (StepShape_HArray1OfValueQualifier::*)() const) static_cast<const StepShape_Array1OfValueQualifier & (StepShape_HArray1OfValueQualifier::*)() const>(&StepShape_HArray1OfValueQualifier::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (StepShape_Array1OfValueQualifier & (StepShape_HArray1OfValueQualifier::*)() ) static_cast<StepShape_Array1OfValueQualifier & (StepShape_HArray1OfValueQualifier::*)() >(&StepShape_HArray1OfValueQualifier::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfValueQualifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HArray1OfValueQualifier::*)() const>(&StepShape_HArray1OfValueQualifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HArray1OfValueQualifier::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HArray1OfValueQualifier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HalfSpaceSolid ,opencascade::handle<StepShape_HalfSpaceSolid> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_HalfSpaceSolid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HalfSpaceSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HalfSpaceSolid::*)() const>(&StepShape_HalfSpaceSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HalfSpaceSolid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_LimitsAndFits ,opencascade::handle<StepShape_LimitsAndFits> , Standard_Transient>>(m.attr("StepShape_LimitsAndFits"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_LimitsAndFits::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_LimitsAndFits::*)() const>(&StepShape_LimitsAndFits::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_LimitsAndFits::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_MeasureQualification ,opencascade::handle<StepShape_MeasureQualification> , Standard_Transient>>(m.attr("StepShape_MeasureQualification"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_MeasureQualification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_MeasureQualification::*)() const>(&StepShape_MeasureQualification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_MeasureQualification::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem ,opencascade::handle<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)() const>(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_PlusMinusTolerance ,opencascade::handle<StepShape_PlusMinusTolerance> , Standard_Transient>>(m.attr("StepShape_PlusMinusTolerance"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_PlusMinusTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_PlusMinusTolerance::*)() const>(&StepShape_PlusMinusTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_PlusMinusTolerance::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_PrecisionQualifier ,opencascade::handle<StepShape_PrecisionQualifier> , Standard_Transient>>(m.attr("StepShape_PrecisionQualifier"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_PrecisionQualifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_PrecisionQualifier::*)() const>(&StepShape_PrecisionQualifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_PrecisionQualifier::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_QualifiedRepresentationItem ,opencascade::handle<StepShape_QualifiedRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepShape_QualifiedRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_QualifiedRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_QualifiedRepresentationItem::*)() const>(&StepShape_QualifiedRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_QualifiedRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ReversibleTopologyItem , shared_ptr<StepShape_ReversibleTopologyItem> , StepData_SelectType>>(m.attr("StepShape_ReversibleTopologyItem"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_ReversibleTopologyItem::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepShape_ReversibleTopologyItem::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepShape_ReversibleTopologyItem::CaseNum),
             R"#(Recognizes a ReversibleTopologyItem Kind Entity that is : 1 -> Edge 2 -> Path 3 -> Face 4 -> FaceBound 5 -> ClosedShell 6 -> OpenShell 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_RightAngularWedge ,opencascade::handle<StepShape_RightAngularWedge> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_RightAngularWedge"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_RightAngularWedge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_RightAngularWedge::*)() const>(&StepShape_RightAngularWedge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_RightAngularWedge::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_RightCircularCone ,opencascade::handle<StepShape_RightCircularCone> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_RightCircularCone"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_RightCircularCone::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_RightCircularCone::*)() const>(&StepShape_RightCircularCone::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_RightCircularCone::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_RightCircularCylinder ,opencascade::handle<StepShape_RightCircularCylinder> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_RightCircularCylinder"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_RightCircularCylinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_RightCircularCylinder::*)() const>(&StepShape_RightCircularCylinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_RightCircularCylinder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShapeDefinitionRepresentation ,opencascade::handle<StepShape_ShapeDefinitionRepresentation> , StepRepr_PropertyDefinitionRepresentation>>(m.attr("StepShape_ShapeDefinitionRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ShapeDefinitionRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ShapeDefinitionRepresentation::*)() const>(&StepShape_ShapeDefinitionRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ShapeDefinitionRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShapeDimensionRepresentationItem , shared_ptr<StepShape_ShapeDimensionRepresentationItem> , StepData_SelectType>>(m.attr("StepShape_ShapeDimensionRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_ShapeDimensionRepresentationItem::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepShape_ShapeDimensionRepresentationItem::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepShape_ShapeDimensionRepresentationItem::CaseNum),
             R"#(Recognizes a ShapeDimensionRepresentationItem Kind Entity that is : 1 -> CompoundRepresentationItem 2 -> DescriptiveRepresentationItem 3 -> MeasureRepresentationItem 4 -> Placement 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShapeRepresentation ,opencascade::handle<StepShape_ShapeRepresentation> , StepRepr_Representation>>(m.attr("StepShape_ShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ShapeRepresentation::*)() const>(&StepShape_ShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Shell , shared_ptr<StepShape_Shell> , StepData_SelectType>>(m.attr("StepShape_Shell"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_Shell::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepShape_Shell::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepShape_Shell::CaseNum),
             R"#(Recognizes a Shell Kind Entity that is : 1 -> OpenShell 2 -> ClosedShell 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShellBasedSurfaceModel ,opencascade::handle<StepShape_ShellBasedSurfaceModel> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_ShellBasedSurfaceModel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ShellBasedSurfaceModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ShellBasedSurfaceModel::*)() const>(&StepShape_ShellBasedSurfaceModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ShellBasedSurfaceModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SolidModel ,opencascade::handle<StepShape_SolidModel> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_SolidModel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_SolidModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_SolidModel::*)() const>(&StepShape_SolidModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_SolidModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Sphere ,opencascade::handle<StepShape_Sphere> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_Sphere"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Sphere::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Sphere::*)() const>(&StepShape_Sphere::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Sphere::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SurfaceModel , shared_ptr<StepShape_SurfaceModel> , StepData_SelectType>>(m.attr("StepShape_SurfaceModel"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_SurfaceModel::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepShape_SurfaceModel::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepShape_SurfaceModel::CaseNum),
             R"#(Recognizes a SurfaceModel Kind Entity that is : 1 -> ShellBasedSurfaceModel 2 -> FaceBasedSurfaceModel 0 else)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ToleranceMethodDefinition , shared_ptr<StepShape_ToleranceMethodDefinition> , StepData_SelectType>>(m.attr("StepShape_ToleranceMethodDefinition"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_ToleranceMethodDefinition::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepShape_ToleranceMethodDefinition::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepShape_ToleranceMethodDefinition::CaseNum),
             R"#(Recognizes a kind of ValueQualifier Select Type : 1 -> ToleranceValue from StepShape 2 -> LimitsAndFits from StepShape)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ToleranceValue ,opencascade::handle<StepShape_ToleranceValue> , Standard_Transient>>(m.attr("StepShape_ToleranceValue"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ToleranceValue::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ToleranceValue::*)() const>(&StepShape_ToleranceValue::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ToleranceValue::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_TopologicalRepresentationItem ,opencascade::handle<StepShape_TopologicalRepresentationItem> , StepRepr_RepresentationItem>>(m.attr("StepShape_TopologicalRepresentationItem"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_TopologicalRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_TopologicalRepresentationItem::*)() const>(&StepShape_TopologicalRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_TopologicalRepresentationItem::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Torus ,opencascade::handle<StepShape_Torus> , StepGeom_GeometricRepresentationItem>>(m.attr("StepShape_Torus"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Torus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Torus::*)() const>(&StepShape_Torus::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Torus::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_TypeQualifier ,opencascade::handle<StepShape_TypeQualifier> , Standard_Transient>>(m.attr("StepShape_TypeQualifier"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_TypeQualifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_TypeQualifier::*)() const>(&StepShape_TypeQualifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_TypeQualifier::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ValueFormatTypeQualifier ,opencascade::handle<StepShape_ValueFormatTypeQualifier> , Standard_Transient>>(m.attr("StepShape_ValueFormatTypeQualifier"))
    // constructors
    // custom constructors
    // methods
        .def("FormatType",
             (opencascade::handle<TCollection_HAsciiString> (StepShape_ValueFormatTypeQualifier::*)() ) static_cast<opencascade::handle<TCollection_HAsciiString> (StepShape_ValueFormatTypeQualifier::*)() >(&StepShape_ValueFormatTypeQualifier::FormatType),
             R"#(Returns field FormatType)#" )
        .def("SetFormatType",
             (void (StepShape_ValueFormatTypeQualifier::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (StepShape_ValueFormatTypeQualifier::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&StepShape_ValueFormatTypeQualifier::SetFormatType),
             R"#(Set field FormatType)#"  , py::arg("theFormatType"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ValueFormatTypeQualifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ValueFormatTypeQualifier::*)() const>(&StepShape_ValueFormatTypeQualifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ValueFormatTypeQualifier::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ValueQualifier , shared_ptr<StepShape_ValueQualifier> , StepData_SelectType>>(m.attr("StepShape_ValueQualifier"))
    // constructors
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_ValueQualifier::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (StepShape_ValueQualifier::*)( const opencascade::handle<Standard_Transient> & ) const>(&StepShape_ValueQualifier::CaseNum),
             R"#(Recognizes a kind of ValueQualifier Select Type : 1 -> PrecisionQualifier from StepShape 2 -> TypeQualifier from StepShape 3 -> UnceraintyQualifier .. not yet implemented 4 -> ValueFormatTypeQualifier)#"  , py::arg("ent"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_AdvancedBrepShapeRepresentation ,opencascade::handle<StepShape_AdvancedBrepShapeRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_AdvancedBrepShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_AdvancedBrepShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_AdvancedBrepShapeRepresentation::*)() const>(&StepShape_AdvancedBrepShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_AdvancedBrepShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_AngularLocation ,opencascade::handle<StepShape_AngularLocation> , StepShape_DimensionalLocation>>(m.attr("StepShape_AngularLocation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_AngularLocation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_AngularLocation::*)() const>(&StepShape_AngularLocation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_AngularLocation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_AngularSize ,opencascade::handle<StepShape_AngularSize> , StepShape_DimensionalSize>>(m.attr("StepShape_AngularSize"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_AngularSize::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_AngularSize::*)() const>(&StepShape_AngularSize::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_AngularSize::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_BoxedHalfSpace ,opencascade::handle<StepShape_BoxedHalfSpace> , StepShape_HalfSpaceSolid>>(m.attr("StepShape_BoxedHalfSpace"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_BoxedHalfSpace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_BoxedHalfSpace::*)() const>(&StepShape_BoxedHalfSpace::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_BoxedHalfSpace::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_CompoundShapeRepresentation ,opencascade::handle<StepShape_CompoundShapeRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_CompoundShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_CompoundShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_CompoundShapeRepresentation::*)() const>(&StepShape_CompoundShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_CompoundShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ConnectedEdgeSet ,opencascade::handle<StepShape_ConnectedEdgeSet> , StepShape_TopologicalRepresentationItem>>(m.attr("StepShape_ConnectedEdgeSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ConnectedEdgeSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ConnectedEdgeSet::*)() const>(&StepShape_ConnectedEdgeSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ConnectedEdgeSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ConnectedFaceSet ,opencascade::handle<StepShape_ConnectedFaceSet> , StepShape_TopologicalRepresentationItem>>(m.attr("StepShape_ConnectedFaceSet"))
    // constructors
    // custom constructors
    // methods
        .def("SetCfsFaces",
             (void (StepShape_ConnectedFaceSet::*)( const opencascade::handle<StepShape_HArray1OfFace> & ) ) static_cast<void (StepShape_ConnectedFaceSet::*)( const opencascade::handle<StepShape_HArray1OfFace> & ) >(&StepShape_ConnectedFaceSet::SetCfsFaces),
             R"#(None)#"  , py::arg("aCfsFaces"))
        .def("CfsFaces",
             (opencascade::handle<StepShape_HArray1OfFace> (StepShape_ConnectedFaceSet::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfFace> (StepShape_ConnectedFaceSet::*)() const>(&StepShape_ConnectedFaceSet::CfsFaces),
             R"#(None)#" )
        .def("CfsFacesValue",
             (opencascade::handle<StepShape_Face> (StepShape_ConnectedFaceSet::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepShape_Face> (StepShape_ConnectedFaceSet::*)( const Standard_Integer ) const>(&StepShape_ConnectedFaceSet::CfsFacesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbCfsFaces",
             (Standard_Integer (StepShape_ConnectedFaceSet::*)() const) static_cast<Standard_Integer (StepShape_ConnectedFaceSet::*)() const>(&StepShape_ConnectedFaceSet::NbCfsFaces),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ConnectedFaceSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ConnectedFaceSet::*)() const>(&StepShape_ConnectedFaceSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ConnectedFaceSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_CsgShapeRepresentation ,opencascade::handle<StepShape_CsgShapeRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_CsgShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_CsgShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_CsgShapeRepresentation::*)() const>(&StepShape_CsgShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_CsgShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_CsgSolid ,opencascade::handle<StepShape_CsgSolid> , StepShape_SolidModel>>(m.attr("StepShape_CsgSolid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_CsgSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_CsgSolid::*)() const>(&StepShape_CsgSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_CsgSolid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalLocationWithPath ,opencascade::handle<StepShape_DimensionalLocationWithPath> , StepShape_DimensionalLocation>>(m.attr("StepShape_DimensionalLocationWithPath"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DimensionalLocationWithPath::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DimensionalLocationWithPath::*)() const>(&StepShape_DimensionalLocationWithPath::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DimensionalLocationWithPath::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalSizeWithPath ,opencascade::handle<StepShape_DimensionalSizeWithPath> , StepShape_DimensionalSize>>(m.attr("StepShape_DimensionalSizeWithPath"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DimensionalSizeWithPath::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DimensionalSizeWithPath::*)() const>(&StepShape_DimensionalSizeWithPath::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DimensionalSizeWithPath::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DirectedDimensionalLocation ,opencascade::handle<StepShape_DirectedDimensionalLocation> , StepShape_DimensionalLocation>>(m.attr("StepShape_DirectedDimensionalLocation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DirectedDimensionalLocation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DirectedDimensionalLocation::*)() const>(&StepShape_DirectedDimensionalLocation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DirectedDimensionalLocation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Edge ,opencascade::handle<StepShape_Edge> , StepShape_TopologicalRepresentationItem>>(m.attr("StepShape_Edge"))
    // constructors
    // custom constructors
    // methods
        .def("SetEdgeStart",
             (void (StepShape_Edge::*)( const opencascade::handle<StepShape_Vertex> & ) ) static_cast<void (StepShape_Edge::*)( const opencascade::handle<StepShape_Vertex> & ) >(&StepShape_Edge::SetEdgeStart),
             R"#(None)#"  , py::arg("aEdgeStart"))
        .def("EdgeStart",
             (opencascade::handle<StepShape_Vertex> (StepShape_Edge::*)() const) static_cast<opencascade::handle<StepShape_Vertex> (StepShape_Edge::*)() const>(&StepShape_Edge::EdgeStart),
             R"#(None)#" )
        .def("SetEdgeEnd",
             (void (StepShape_Edge::*)( const opencascade::handle<StepShape_Vertex> & ) ) static_cast<void (StepShape_Edge::*)( const opencascade::handle<StepShape_Vertex> & ) >(&StepShape_Edge::SetEdgeEnd),
             R"#(None)#"  , py::arg("aEdgeEnd"))
        .def("EdgeEnd",
             (opencascade::handle<StepShape_Vertex> (StepShape_Edge::*)() const) static_cast<opencascade::handle<StepShape_Vertex> (StepShape_Edge::*)() const>(&StepShape_Edge::EdgeEnd),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Edge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Edge::*)() const>(&StepShape_Edge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Edge::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_EdgeBasedWireframeShapeRepresentation ,opencascade::handle<StepShape_EdgeBasedWireframeShapeRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_EdgeBasedWireframeShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_EdgeBasedWireframeShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_EdgeBasedWireframeShapeRepresentation::*)() const>(&StepShape_EdgeBasedWireframeShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_EdgeBasedWireframeShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Face ,opencascade::handle<StepShape_Face> , StepShape_TopologicalRepresentationItem>>(m.attr("StepShape_Face"))
    // constructors
    // custom constructors
    // methods
        .def("SetBounds",
             (void (StepShape_Face::*)( const opencascade::handle<StepShape_HArray1OfFaceBound> & ) ) static_cast<void (StepShape_Face::*)( const opencascade::handle<StepShape_HArray1OfFaceBound> & ) >(&StepShape_Face::SetBounds),
             R"#(None)#"  , py::arg("aBounds"))
        .def("Bounds",
             (opencascade::handle<StepShape_HArray1OfFaceBound> (StepShape_Face::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfFaceBound> (StepShape_Face::*)() const>(&StepShape_Face::Bounds),
             R"#(None)#" )
        .def("BoundsValue",
             (opencascade::handle<StepShape_FaceBound> (StepShape_Face::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepShape_FaceBound> (StepShape_Face::*)( const Standard_Integer ) const>(&StepShape_Face::BoundsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbBounds",
             (Standard_Integer (StepShape_Face::*)() const) static_cast<Standard_Integer (StepShape_Face::*)() const>(&StepShape_Face::NbBounds),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Face::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Face::*)() const>(&StepShape_Face::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Face::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FaceBound ,opencascade::handle<StepShape_FaceBound> , StepShape_TopologicalRepresentationItem>>(m.attr("StepShape_FaceBound"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FaceBound::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FaceBound::*)() const>(&StepShape_FaceBound::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FaceBound::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FacetedBrepShapeRepresentation ,opencascade::handle<StepShape_FacetedBrepShapeRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_FacetedBrepShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FacetedBrepShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FacetedBrepShapeRepresentation::*)() const>(&StepShape_FacetedBrepShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FacetedBrepShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_GeometricCurveSet ,opencascade::handle<StepShape_GeometricCurveSet> , StepShape_GeometricSet>>(m.attr("StepShape_GeometricCurveSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_GeometricCurveSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_GeometricCurveSet::*)() const>(&StepShape_GeometricCurveSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_GeometricCurveSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_GeometricallyBoundedSurfaceShapeRepresentation ,opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_GeometricallyBoundedSurfaceShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_GeometricallyBoundedSurfaceShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_GeometricallyBoundedSurfaceShapeRepresentation::*)() const>(&StepShape_GeometricallyBoundedSurfaceShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_GeometricallyBoundedSurfaceShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_GeometricallyBoundedWireframeShapeRepresentation ,opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_GeometricallyBoundedWireframeShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_GeometricallyBoundedWireframeShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_GeometricallyBoundedWireframeShapeRepresentation::*)() const>(&StepShape_GeometricallyBoundedWireframeShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_GeometricallyBoundedWireframeShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Loop ,opencascade::handle<StepShape_Loop> , StepShape_TopologicalRepresentationItem>>(m.attr("StepShape_Loop"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Loop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Loop::*)() const>(&StepShape_Loop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Loop::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_LoopAndPath ,opencascade::handle<StepShape_LoopAndPath> , StepShape_TopologicalRepresentationItem>>(m.attr("StepShape_LoopAndPath"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_LoopAndPath::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_LoopAndPath::*)() const>(&StepShape_LoopAndPath::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_LoopAndPath::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ManifoldSolidBrep ,opencascade::handle<StepShape_ManifoldSolidBrep> , StepShape_SolidModel>>(m.attr("StepShape_ManifoldSolidBrep"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ManifoldSolidBrep::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ManifoldSolidBrep::*)() const>(&StepShape_ManifoldSolidBrep::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ManifoldSolidBrep::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ManifoldSurfaceShapeRepresentation ,opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_ManifoldSurfaceShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ManifoldSurfaceShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ManifoldSurfaceShapeRepresentation::*)() const>(&StepShape_ManifoldSurfaceShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ManifoldSurfaceShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_NonManifoldSurfaceShapeRepresentation ,opencascade::handle<StepShape_NonManifoldSurfaceShapeRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_NonManifoldSurfaceShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_NonManifoldSurfaceShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_NonManifoldSurfaceShapeRepresentation::*)() const>(&StepShape_NonManifoldSurfaceShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_NonManifoldSurfaceShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Path ,opencascade::handle<StepShape_Path> , StepShape_TopologicalRepresentationItem>>(m.attr("StepShape_Path"))
    // constructors
    // custom constructors
    // methods
        .def("SetEdgeList",
             (void (StepShape_Path::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> & ) ) static_cast<void (StepShape_Path::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> & ) >(&StepShape_Path::SetEdgeList),
             R"#(None)#"  , py::arg("aEdgeList"))
        .def("EdgeList",
             (opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_Path::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_Path::*)() const>(&StepShape_Path::EdgeList),
             R"#(None)#" )
        .def("EdgeListValue",
             (opencascade::handle<StepShape_OrientedEdge> (StepShape_Path::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepShape_OrientedEdge> (StepShape_Path::*)( const Standard_Integer ) const>(&StepShape_Path::EdgeListValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbEdgeList",
             (Standard_Integer (StepShape_Path::*)() const) static_cast<Standard_Integer (StepShape_Path::*)() const>(&StepShape_Path::NbEdgeList),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Path::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Path::*)() const>(&StepShape_Path::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Path::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_PointRepresentation ,opencascade::handle<StepShape_PointRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_PointRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_PointRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_PointRepresentation::*)() const>(&StepShape_PointRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_PointRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShapeDimensionRepresentation ,opencascade::handle<StepShape_ShapeDimensionRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_ShapeDimensionRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ShapeDimensionRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ShapeDimensionRepresentation::*)() const>(&StepShape_ShapeDimensionRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ShapeDimensionRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShapeRepresentationWithParameters ,opencascade::handle<StepShape_ShapeRepresentationWithParameters> , StepShape_ShapeRepresentation>>(m.attr("StepShape_ShapeRepresentationWithParameters"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ShapeRepresentationWithParameters::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ShapeRepresentationWithParameters::*)() const>(&StepShape_ShapeRepresentationWithParameters::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ShapeRepresentationWithParameters::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SolidReplica ,opencascade::handle<StepShape_SolidReplica> , StepShape_SolidModel>>(m.attr("StepShape_SolidReplica"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_SolidReplica::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_SolidReplica::*)() const>(&StepShape_SolidReplica::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_SolidReplica::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SweptAreaSolid ,opencascade::handle<StepShape_SweptAreaSolid> , StepShape_SolidModel>>(m.attr("StepShape_SweptAreaSolid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_SweptAreaSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_SweptAreaSolid::*)() const>(&StepShape_SweptAreaSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_SweptAreaSolid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SweptFaceSolid ,opencascade::handle<StepShape_SweptFaceSolid> , StepShape_SolidModel>>(m.attr("StepShape_SweptFaceSolid"))
    // constructors
    // custom constructors
    // methods
        .def("SetSweptFace",
             (void (StepShape_SweptFaceSolid::*)( const opencascade::handle<StepShape_FaceSurface> & ) ) static_cast<void (StepShape_SweptFaceSolid::*)( const opencascade::handle<StepShape_FaceSurface> & ) >(&StepShape_SweptFaceSolid::SetSweptFace),
             R"#(None)#"  , py::arg("aSweptArea"))
        .def("SweptFace",
             (opencascade::handle<StepShape_FaceSurface> (StepShape_SweptFaceSolid::*)() const) static_cast<opencascade::handle<StepShape_FaceSurface> (StepShape_SweptFaceSolid::*)() const>(&StepShape_SweptFaceSolid::SweptFace),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_SweptFaceSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_SweptFaceSolid::*)() const>(&StepShape_SweptFaceSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_SweptFaceSolid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_TransitionalShapeRepresentation ,opencascade::handle<StepShape_TransitionalShapeRepresentation> , StepShape_ShapeRepresentation>>(m.attr("StepShape_TransitionalShapeRepresentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_TransitionalShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_TransitionalShapeRepresentation::*)() const>(&StepShape_TransitionalShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_TransitionalShapeRepresentation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Vertex ,opencascade::handle<StepShape_Vertex> , StepShape_TopologicalRepresentationItem>>(m.attr("StepShape_Vertex"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Vertex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Vertex::*)() const>(&StepShape_Vertex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Vertex::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_BrepWithVoids ,opencascade::handle<StepShape_BrepWithVoids> , StepShape_ManifoldSolidBrep>>(m.attr("StepShape_BrepWithVoids"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_BrepWithVoids::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_BrepWithVoids::*)() const>(&StepShape_BrepWithVoids::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_BrepWithVoids::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ClosedShell ,opencascade::handle<StepShape_ClosedShell> , StepShape_ConnectedFaceSet>>(m.attr("StepShape_ClosedShell"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ClosedShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ClosedShell::*)() const>(&StepShape_ClosedShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ClosedShell::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ConnectedFaceSubSet ,opencascade::handle<StepShape_ConnectedFaceSubSet> , StepShape_ConnectedFaceSet>>(m.attr("StepShape_ConnectedFaceSubSet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ConnectedFaceSubSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ConnectedFaceSubSet::*)() const>(&StepShape_ConnectedFaceSubSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ConnectedFaceSubSet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_EdgeCurve ,opencascade::handle<StepShape_EdgeCurve> , StepShape_Edge>>(m.attr("StepShape_EdgeCurve"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_EdgeCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_EdgeCurve::*)() const>(&StepShape_EdgeCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_EdgeCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_EdgeLoop ,opencascade::handle<StepShape_EdgeLoop> , StepShape_Loop>>(m.attr("StepShape_EdgeLoop"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_EdgeLoop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_EdgeLoop::*)() const>(&StepShape_EdgeLoop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_EdgeLoop::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ExtrudedAreaSolid ,opencascade::handle<StepShape_ExtrudedAreaSolid> , StepShape_SweptAreaSolid>>(m.attr("StepShape_ExtrudedAreaSolid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ExtrudedAreaSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ExtrudedAreaSolid::*)() const>(&StepShape_ExtrudedAreaSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ExtrudedAreaSolid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ExtrudedFaceSolid ,opencascade::handle<StepShape_ExtrudedFaceSolid> , StepShape_SweptFaceSolid>>(m.attr("StepShape_ExtrudedFaceSolid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ExtrudedFaceSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ExtrudedFaceSolid::*)() const>(&StepShape_ExtrudedFaceSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ExtrudedFaceSolid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FaceOuterBound ,opencascade::handle<StepShape_FaceOuterBound> , StepShape_FaceBound>>(m.attr("StepShape_FaceOuterBound"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FaceOuterBound::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FaceOuterBound::*)() const>(&StepShape_FaceOuterBound::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FaceOuterBound::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FaceSurface ,opencascade::handle<StepShape_FaceSurface> , StepShape_Face>>(m.attr("StepShape_FaceSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FaceSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FaceSurface::*)() const>(&StepShape_FaceSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FaceSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FacetedBrep ,opencascade::handle<StepShape_FacetedBrep> , StepShape_ManifoldSolidBrep>>(m.attr("StepShape_FacetedBrep"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FacetedBrep::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FacetedBrep::*)() const>(&StepShape_FacetedBrep::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FacetedBrep::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FacetedBrepAndBrepWithVoids ,opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> , StepShape_ManifoldSolidBrep>>(m.attr("StepShape_FacetedBrepAndBrepWithVoids"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FacetedBrepAndBrepWithVoids::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FacetedBrepAndBrepWithVoids::*)() const>(&StepShape_FacetedBrepAndBrepWithVoids::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FacetedBrepAndBrepWithVoids::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OpenShell ,opencascade::handle<StepShape_OpenShell> , StepShape_ConnectedFaceSet>>(m.attr("StepShape_OpenShell"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_OpenShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_OpenShell::*)() const>(&StepShape_OpenShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_OpenShell::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OrientedEdge ,opencascade::handle<StepShape_OrientedEdge> , StepShape_Edge>>(m.attr("StepShape_OrientedEdge"))
    // constructors
    // custom constructors
    // methods
        .def("SetEdgeStart",
             (void (StepShape_OrientedEdge::*)( const opencascade::handle<StepShape_Vertex> & ) ) static_cast<void (StepShape_OrientedEdge::*)( const opencascade::handle<StepShape_Vertex> & ) >(&StepShape_OrientedEdge::SetEdgeStart),
             R"#(None)#"  , py::arg("aEdgeStart"))
        .def("EdgeStart",
             (opencascade::handle<StepShape_Vertex> (StepShape_OrientedEdge::*)() const) static_cast<opencascade::handle<StepShape_Vertex> (StepShape_OrientedEdge::*)() const>(&StepShape_OrientedEdge::EdgeStart),
             R"#(None)#" )
        .def("SetEdgeEnd",
             (void (StepShape_OrientedEdge::*)( const opencascade::handle<StepShape_Vertex> & ) ) static_cast<void (StepShape_OrientedEdge::*)( const opencascade::handle<StepShape_Vertex> & ) >(&StepShape_OrientedEdge::SetEdgeEnd),
             R"#(None)#"  , py::arg("aEdgeEnd"))
        .def("EdgeEnd",
             (opencascade::handle<StepShape_Vertex> (StepShape_OrientedEdge::*)() const) static_cast<opencascade::handle<StepShape_Vertex> (StepShape_OrientedEdge::*)() const>(&StepShape_OrientedEdge::EdgeEnd),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_OrientedEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_OrientedEdge::*)() const>(&StepShape_OrientedEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_OrientedEdge::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OrientedFace ,opencascade::handle<StepShape_OrientedFace> , StepShape_Face>>(m.attr("StepShape_OrientedFace"))
    // constructors
    // custom constructors
    // methods
        .def("SetBounds",
             (void (StepShape_OrientedFace::*)( const opencascade::handle<StepShape_HArray1OfFaceBound> & ) ) static_cast<void (StepShape_OrientedFace::*)( const opencascade::handle<StepShape_HArray1OfFaceBound> & ) >(&StepShape_OrientedFace::SetBounds),
             R"#(None)#"  , py::arg("aBounds"))
        .def("Bounds",
             (opencascade::handle<StepShape_HArray1OfFaceBound> (StepShape_OrientedFace::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfFaceBound> (StepShape_OrientedFace::*)() const>(&StepShape_OrientedFace::Bounds),
             R"#(None)#" )
        .def("BoundsValue",
             (opencascade::handle<StepShape_FaceBound> (StepShape_OrientedFace::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepShape_FaceBound> (StepShape_OrientedFace::*)( const Standard_Integer ) const>(&StepShape_OrientedFace::BoundsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbBounds",
             (Standard_Integer (StepShape_OrientedFace::*)() const) static_cast<Standard_Integer (StepShape_OrientedFace::*)() const>(&StepShape_OrientedFace::NbBounds),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_OrientedFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_OrientedFace::*)() const>(&StepShape_OrientedFace::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_OrientedFace::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OrientedPath ,opencascade::handle<StepShape_OrientedPath> , StepShape_Path>>(m.attr("StepShape_OrientedPath"))
    // constructors
    // custom constructors
    // methods
        .def("SetEdgeList",
             (void (StepShape_OrientedPath::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> & ) ) static_cast<void (StepShape_OrientedPath::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> & ) >(&StepShape_OrientedPath::SetEdgeList),
             R"#(None)#"  , py::arg("aEdgeList"))
        .def("EdgeList",
             (opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_OrientedPath::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_OrientedPath::*)() const>(&StepShape_OrientedPath::EdgeList),
             R"#(None)#" )
        .def("EdgeListValue",
             (opencascade::handle<StepShape_OrientedEdge> (StepShape_OrientedPath::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepShape_OrientedEdge> (StepShape_OrientedPath::*)( const Standard_Integer ) const>(&StepShape_OrientedPath::EdgeListValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbEdgeList",
             (Standard_Integer (StepShape_OrientedPath::*)() const) static_cast<Standard_Integer (StepShape_OrientedPath::*)() const>(&StepShape_OrientedPath::NbEdgeList),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_OrientedPath::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_OrientedPath::*)() const>(&StepShape_OrientedPath::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_OrientedPath::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_PolyLoop ,opencascade::handle<StepShape_PolyLoop> , StepShape_Loop>>(m.attr("StepShape_PolyLoop"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_PolyLoop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_PolyLoop::*)() const>(&StepShape_PolyLoop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_PolyLoop::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_RevolvedAreaSolid ,opencascade::handle<StepShape_RevolvedAreaSolid> , StepShape_SweptAreaSolid>>(m.attr("StepShape_RevolvedAreaSolid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_RevolvedAreaSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_RevolvedAreaSolid::*)() const>(&StepShape_RevolvedAreaSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_RevolvedAreaSolid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_RevolvedFaceSolid ,opencascade::handle<StepShape_RevolvedFaceSolid> , StepShape_SweptFaceSolid>>(m.attr("StepShape_RevolvedFaceSolid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_RevolvedFaceSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_RevolvedFaceSolid::*)() const>(&StepShape_RevolvedFaceSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_RevolvedFaceSolid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Subedge ,opencascade::handle<StepShape_Subedge> , StepShape_Edge>>(m.attr("StepShape_Subedge"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Subedge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Subedge::*)() const>(&StepShape_Subedge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Subedge::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Subface ,opencascade::handle<StepShape_Subface> , StepShape_Face>>(m.attr("StepShape_Subface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Subface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Subface::*)() const>(&StepShape_Subface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Subface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_VertexLoop ,opencascade::handle<StepShape_VertexLoop> , StepShape_Loop>>(m.attr("StepShape_VertexLoop"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_VertexLoop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_VertexLoop::*)() const>(&StepShape_VertexLoop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_VertexLoop::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_VertexPoint ,opencascade::handle<StepShape_VertexPoint> , StepShape_Vertex>>(m.attr("StepShape_VertexPoint"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_VertexPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_VertexPoint::*)() const>(&StepShape_VertexPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_VertexPoint::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_AdvancedFace ,opencascade::handle<StepShape_AdvancedFace> , StepShape_FaceSurface>>(m.attr("StepShape_AdvancedFace"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_AdvancedFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_AdvancedFace::*)() const>(&StepShape_AdvancedFace::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_AdvancedFace::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OrientedClosedShell ,opencascade::handle<StepShape_OrientedClosedShell> , StepShape_ClosedShell>>(m.attr("StepShape_OrientedClosedShell"))
    // constructors
    // custom constructors
    // methods
        .def("SetCfsFaces",
             (void (StepShape_OrientedClosedShell::*)( const opencascade::handle<StepShape_HArray1OfFace> & ) ) static_cast<void (StepShape_OrientedClosedShell::*)( const opencascade::handle<StepShape_HArray1OfFace> & ) >(&StepShape_OrientedClosedShell::SetCfsFaces),
             R"#(None)#"  , py::arg("aCfsFaces"))
        .def("CfsFaces",
             (opencascade::handle<StepShape_HArray1OfFace> (StepShape_OrientedClosedShell::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfFace> (StepShape_OrientedClosedShell::*)() const>(&StepShape_OrientedClosedShell::CfsFaces),
             R"#(None)#" )
        .def("CfsFacesValue",
             (opencascade::handle<StepShape_Face> (StepShape_OrientedClosedShell::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepShape_Face> (StepShape_OrientedClosedShell::*)( const Standard_Integer ) const>(&StepShape_OrientedClosedShell::CfsFacesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbCfsFaces",
             (Standard_Integer (StepShape_OrientedClosedShell::*)() const) static_cast<Standard_Integer (StepShape_OrientedClosedShell::*)() const>(&StepShape_OrientedClosedShell::NbCfsFaces),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_OrientedClosedShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_OrientedClosedShell::*)() const>(&StepShape_OrientedClosedShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_OrientedClosedShell::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OrientedOpenShell ,opencascade::handle<StepShape_OrientedOpenShell> , StepShape_OpenShell>>(m.attr("StepShape_OrientedOpenShell"))
    // constructors
    // custom constructors
    // methods
        .def("SetCfsFaces",
             (void (StepShape_OrientedOpenShell::*)( const opencascade::handle<StepShape_HArray1OfFace> & ) ) static_cast<void (StepShape_OrientedOpenShell::*)( const opencascade::handle<StepShape_HArray1OfFace> & ) >(&StepShape_OrientedOpenShell::SetCfsFaces),
             R"#(None)#"  , py::arg("aCfsFaces"))
        .def("CfsFaces",
             (opencascade::handle<StepShape_HArray1OfFace> (StepShape_OrientedOpenShell::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfFace> (StepShape_OrientedOpenShell::*)() const>(&StepShape_OrientedOpenShell::CfsFaces),
             R"#(None)#" )
        .def("CfsFacesValue",
             (opencascade::handle<StepShape_Face> (StepShape_OrientedOpenShell::*)( const Standard_Integer ) const) static_cast<opencascade::handle<StepShape_Face> (StepShape_OrientedOpenShell::*)( const Standard_Integer ) const>(&StepShape_OrientedOpenShell::CfsFacesValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbCfsFaces",
             (Standard_Integer (StepShape_OrientedOpenShell::*)() const) static_cast<Standard_Integer (StepShape_OrientedOpenShell::*)() const>(&StepShape_OrientedOpenShell::NbCfsFaces),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_OrientedOpenShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_OrientedOpenShell::*)() const>(&StepShape_OrientedOpenShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_OrientedOpenShell::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SeamEdge ,opencascade::handle<StepShape_SeamEdge> , StepShape_OrientedEdge>>(m.attr("StepShape_SeamEdge"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_SeamEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_SeamEdge::*)() const>(&StepShape_SeamEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_SeamEdge::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepShape_ExtrudedAreaSolid.hxx
// ./opencascade/StepShape_PlusMinusTolerance.hxx
// ./opencascade/StepShape_ToleranceMethodDefinition.hxx
// ./opencascade/StepShape_HArray1OfValueQualifier.hxx
// ./opencascade/StepShape_OrientedPath.hxx
// ./opencascade/StepShape_DimensionalSizeWithPath.hxx
// ./opencascade/StepShape_ExtrudedFaceSolid.hxx
// ./opencascade/StepShape_Vertex.hxx
// ./opencascade/StepShape_ShapeRepresentationWithParameters.hxx
// ./opencascade/StepShape_OrientedFace.hxx
// ./opencascade/StepShape_NonManifoldSurfaceShapeRepresentation.hxx
// ./opencascade/StepShape_Path.hxx
// ./opencascade/StepShape_GeometricSetSelect.hxx
// ./opencascade/StepShape_EdgeLoop.hxx
// ./opencascade/StepShape_TopologicalRepresentationItem.hxx
// ./opencascade/StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx
// ./opencascade/StepShape_FaceBasedSurfaceModel.hxx
// ./opencascade/StepShape_Edge.hxx
// ./opencascade/StepShape_Block.hxx
// ./opencascade/StepShape_HArray1OfOrientedClosedShell.hxx
// ./opencascade/StepShape_ValueQualifier.hxx
// ./opencascade/StepShape_ShellBasedSurfaceModel.hxx
// ./opencascade/StepShape_FacetedBrepAndBrepWithVoids.hxx
// ./opencascade/StepShape_Array1OfShell.hxx
// ./opencascade/StepShape_ShapeDimensionRepresentation.hxx
// ./opencascade/StepShape_FaceBound.hxx
// ./opencascade/StepShape_RevolvedFaceSolid.hxx
// ./opencascade/StepShape_AdvancedFace.hxx
// ./opencascade/StepShape_DimensionalLocationWithPath.hxx
// ./opencascade/StepShape_ShapeDefinitionRepresentation.hxx
// ./opencascade/StepShape_TransitionalShapeRepresentation.hxx
// ./opencascade/StepShape_Array1OfShapeDimensionRepresentationItem.hxx
// ./opencascade/StepShape_HArray1OfShapeDimensionRepresentationItem.hxx
// ./opencascade/StepShape_SolidModel.hxx
// ./opencascade/StepShape_AngleRelator.hxx
// ./opencascade/StepShape_ManifoldSolidBrep.hxx
// ./opencascade/StepShape_ManifoldSurfaceShapeRepresentation.hxx
// ./opencascade/StepShape_LoopAndPath.hxx
// ./opencascade/StepShape_OrientedClosedShell.hxx
// ./opencascade/StepShape_DimensionalSize.hxx
// ./opencascade/StepShape_BrepWithVoids.hxx
// ./opencascade/StepShape_BooleanResult.hxx
// ./opencascade/StepShape_SolidReplica.hxx
// ./opencascade/StepShape_GeometricSet.hxx
// ./opencascade/StepShape_HalfSpaceSolid.hxx
// ./opencascade/StepShape_AdvancedBrepShapeRepresentation.hxx
// ./opencascade/StepShape_HArray1OfConnectedFaceSet.hxx
// ./opencascade/StepShape_ConnectedFaceSubSet.hxx
// ./opencascade/StepShape_SweptAreaSolid.hxx
// ./opencascade/StepShape_HArray1OfConnectedEdgeSet.hxx
// ./opencascade/StepShape_EdgeCurve.hxx
// ./opencascade/StepShape_ConnectedEdgeSet.hxx
// ./opencascade/StepShape_PrecisionQualifier.hxx
// ./opencascade/StepShape_DimensionalLocation.hxx
// ./opencascade/StepShape_QualifiedRepresentationItem.hxx
// ./opencascade/StepShape_ShapeRepresentation.hxx
// ./opencascade/StepShape_AngularSize.hxx
// ./opencascade/StepShape_HArray1OfFaceBound.hxx
// ./opencascade/StepShape_Subface.hxx
// ./opencascade/StepShape_Subedge.hxx
// ./opencascade/StepShape_EdgeBasedWireframeShapeRepresentation.hxx
// ./opencascade/StepShape_ReversibleTopologyItem.hxx
// ./opencascade/StepShape_HArray1OfGeometricSetSelect.hxx
// ./opencascade/StepShape_EdgeBasedWireframeModel.hxx
// ./opencascade/StepShape_GeometricCurveSet.hxx
// ./opencascade/StepShape_PolyLoop.hxx
// ./opencascade/StepShape_Array1OfGeometricSetSelect.hxx
// ./opencascade/StepShape_LimitsAndFits.hxx
// ./opencascade/StepShape_CsgShapeRepresentation.hxx
// ./opencascade/StepShape_Array1OfOrientedClosedShell.hxx
// ./opencascade/StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx
// ./opencascade/StepShape_Array1OfValueQualifier.hxx
// ./opencascade/StepShape_RightCircularCylinder.hxx
// ./opencascade/StepShape_TypeQualifier.hxx
// ./opencascade/StepShape_Face.hxx
// ./opencascade/StepShape_OrientedEdge.hxx
// ./opencascade/StepShape_HArray1OfShell.hxx
// ./opencascade/StepShape_BoxDomain.hxx
// ./opencascade/StepShape_Loop.hxx
// ./opencascade/StepShape_VertexPoint.hxx
// ./opencascade/StepShape_VertexLoop.hxx
// ./opencascade/StepShape_PointRepresentation.hxx
// ./opencascade/StepShape_ShapeDimensionRepresentationItem.hxx
// ./opencascade/StepShape_Torus.hxx
// ./opencascade/StepShape_CsgSolid.hxx
// ./opencascade/StepShape_RevolvedAreaSolid.hxx
// ./opencascade/StepShape_ToleranceValue.hxx
// ./opencascade/StepShape_FacetedBrep.hxx
// ./opencascade/StepShape_RightAngularWedge.hxx
// ./opencascade/StepShape_SweptFaceSolid.hxx
// ./opencascade/StepShape_HArray1OfOrientedEdge.hxx
// ./opencascade/StepShape_Array1OfFaceBound.hxx
// ./opencascade/StepShape_OpenShell.hxx
// ./opencascade/StepShape_CsgSelect.hxx
// ./opencascade/StepShape_ConnectedFaceShapeRepresentation.hxx
// ./opencascade/StepShape_FaceSurface.hxx
// ./opencascade/StepShape_RightCircularCone.hxx
// ./opencascade/StepShape_Array1OfOrientedEdge.hxx
// ./opencascade/StepShape_ClosedShell.hxx
// ./opencascade/StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem.hxx
// ./opencascade/StepShape_ValueFormatTypeQualifier.hxx
// ./opencascade/StepShape_BoxedHalfSpace.hxx
// ./opencascade/StepShape_DirectedDimensionalLocation.hxx
// ./opencascade/StepShape_MeasureQualification.hxx
// ./opencascade/StepShape_DefinitionalRepresentationAndShapeRepresentation.hxx
// ./opencascade/StepShape_FacetedBrepShapeRepresentation.hxx
// ./opencascade/StepShape_CompoundShapeRepresentation.hxx
// ./opencascade/StepShape_AngularLocation.hxx
// ./opencascade/StepShape_HArray1OfFace.hxx
// ./opencascade/StepShape_Shell.hxx
// ./opencascade/StepShape_OrientedOpenShell.hxx
// ./opencascade/StepShape_HArray1OfEdge.hxx
// ./opencascade/StepShape_Sphere.hxx
// ./opencascade/StepShape_Array1OfFace.hxx
// ./opencascade/StepShape_Array1OfConnectedEdgeSet.hxx
// ./opencascade/StepShape_SeamEdge.hxx
// ./opencascade/StepShape_DimensionalCharacteristic.hxx
// ./opencascade/StepShape_BooleanOperand.hxx
// ./opencascade/StepShape_Array1OfConnectedFaceSet.hxx
// ./opencascade/StepShape_DimensionalCharacteristicRepresentation.hxx
// ./opencascade/StepShape_CsgPrimitive.hxx
// ./opencascade/StepShape_ContextDependentShapeRepresentation.hxx
// ./opencascade/StepShape_Array1OfEdge.hxx
// ./opencascade/StepShape_ConnectedFaceSet.hxx
// ./opencascade/StepShape_BooleanOperator.hxx
// ./opencascade/StepShape_SurfaceModel.hxx
// ./opencascade/StepShape_FaceOuterBound.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<StepShape_Shell>(m,"StepShape_Array1OfShell");
    register_template_NCollection_Array1<StepShape_ShapeDimensionRepresentationItem>(m,"StepShape_Array1OfShapeDimensionRepresentationItem");
    register_template_NCollection_Array1<StepShape_GeometricSetSelect>(m,"StepShape_Array1OfGeometricSetSelect");
    register_template_NCollection_Array1<opencascade::handle<StepShape_OrientedClosedShell> >(m,"StepShape_Array1OfOrientedClosedShell");
    register_template_NCollection_Array1<StepShape_ValueQualifier>(m,"StepShape_Array1OfValueQualifier");
    register_template_NCollection_Array1<opencascade::handle<StepShape_FaceBound> >(m,"StepShape_Array1OfFaceBound");
    register_template_NCollection_Array1<opencascade::handle<StepShape_OrientedEdge> >(m,"StepShape_Array1OfOrientedEdge");
    register_template_NCollection_Array1<opencascade::handle<StepShape_Face> >(m,"StepShape_Array1OfFace");
    register_template_NCollection_Array1<opencascade::handle<StepShape_ConnectedEdgeSet> >(m,"StepShape_Array1OfConnectedEdgeSet");
    register_template_NCollection_Array1<opencascade::handle<StepShape_ConnectedFaceSet> >(m,"StepShape_Array1OfConnectedFaceSet");
    register_template_NCollection_Array1<opencascade::handle<StepShape_Edge> >(m,"StepShape_Array1OfEdge");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
