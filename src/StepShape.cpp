
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FaceSurface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepShape_PrecisionQualifier.hxx>
#include <StepShape_TypeQualifier.hxx>
#include <StepShape_ValueFormatTypeQualifier.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_Unit.hxx>
#include <StepShape_Sphere.hxx>
#include <StepShape_Block.hxx>
#include <StepShape_RightAngularWedge.hxx>
#include <StepShape_Torus.hxx>
#include <StepShape_RightCircularCone.hxx>
#include <StepShape_RightCircularCylinder.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_Loop.hxx>
#include <StepShape_Path.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepShape_Vertex.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Point.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ToleranceValue.hxx>
#include <StepShape_LimitsAndFits.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ClosedShell.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepShape_Edge.hxx>
#include <StepShape_Path.hxx>
#include <StepShape_Face.hxx>
#include <StepShape_FaceBound.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepShape_OpenShell.hxx>
#include <StepShape_OpenShell.hxx>
#include <StepShape_ClosedShell.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_SolidModel.hxx>
#include <StepShape_HalfSpaceSolid.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepShape_BoxDomain.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Surface.hxx>
#include <StepRepr_CompoundRepresentationItem.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepGeom_Placement.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_ShapeDimensionRepresentation.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Pcurve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_Loop.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Point.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_Direction.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <StepGeom_Point.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <StepGeom_Surface.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>

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
// ./opencascade/StepShape_Array1OfFaceBound.hxx
#include "NCollection.hxx"
// ./opencascade/StepShape_Array1OfGeometricSetSelect.hxx
#include "NCollection.hxx"
// ./opencascade/StepShape_Array1OfConnectedEdgeSet.hxx
#include "NCollection.hxx"
// ./opencascade/StepShape_Array1OfOrientedEdge.hxx
#include "NCollection.hxx"
// ./opencascade/StepShape_Array1OfConnectedFaceSet.hxx
#include "NCollection.hxx"
// ./opencascade/StepShape_Array1OfOrientedClosedShell.hxx
#include "NCollection.hxx"
// ./opencascade/StepShape_Array1OfShapeDimensionRepresentationItem.hxx
#include "NCollection.hxx"
// ./opencascade/StepShape_Array1OfEdge.hxx
#include "NCollection.hxx"
// ./opencascade/StepShape_Array1OfValueQualifier.hxx
#include "NCollection.hxx"
// ./opencascade/StepShape_Array1OfFace.hxx
#include "NCollection.hxx"
// ./opencascade/StepShape_Array1OfShell.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <StepRepr_RepresentationContext.hxx>

// Module definiiton
void register_StepShape(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepShape"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepShape_Block ,opencascade::handle<StepShape_Block>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_Block"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_Block::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Axis2Placement3d> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (StepShape_Block::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Axis2Placement3d> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&StepShape_Block::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aX"),  py::arg("aY"),  py::arg("aZ"))
        .def("SetPosition",
             (void (StepShape_Block::*)( const opencascade::handle<StepGeom_Axis2Placement3d> &  ) ) static_cast<void (StepShape_Block::*)( const opencascade::handle<StepGeom_Axis2Placement3d> &  ) >(&StepShape_Block::SetPosition),
             R"#(None)#"  , py::arg("aPosition"))
        .def("Position",
             (opencascade::handle<StepGeom_Axis2Placement3d> (StepShape_Block::*)() const) static_cast<opencascade::handle<StepGeom_Axis2Placement3d> (StepShape_Block::*)() const>(&StepShape_Block::Position),
             R"#(None)#" )
        .def("SetX",
             (void (StepShape_Block::*)( const Standard_Real  ) ) static_cast<void (StepShape_Block::*)( const Standard_Real  ) >(&StepShape_Block::SetX),
             R"#(None)#"  , py::arg("aX"))
        .def("X",
             (Standard_Real (StepShape_Block::*)() const) static_cast<Standard_Real (StepShape_Block::*)() const>(&StepShape_Block::X),
             R"#(None)#" )
        .def("SetY",
             (void (StepShape_Block::*)( const Standard_Real  ) ) static_cast<void (StepShape_Block::*)( const Standard_Real  ) >(&StepShape_Block::SetY),
             R"#(None)#"  , py::arg("aY"))
        .def("Y",
             (Standard_Real (StepShape_Block::*)() const) static_cast<Standard_Real (StepShape_Block::*)() const>(&StepShape_Block::Y),
             R"#(None)#" )
        .def("SetZ",
             (void (StepShape_Block::*)( const Standard_Real  ) ) static_cast<void (StepShape_Block::*)( const Standard_Real  ) >(&StepShape_Block::SetZ),
             R"#(None)#"  , py::arg("aZ"))
        .def("Z",
             (Standard_Real (StepShape_Block::*)() const) static_cast<Standard_Real (StepShape_Block::*)() const>(&StepShape_Block::Z),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Block::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Block::*)() const>(&StepShape_Block::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Block::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_Block::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_BooleanOperand , shared_ptr<StepShape_BooleanOperand>  >>(m.attr("StepShape_BooleanOperand"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetTypeOfContent",
             (void (StepShape_BooleanOperand::*)( const Standard_Integer  ) ) static_cast<void (StepShape_BooleanOperand::*)( const Standard_Integer  ) >(&StepShape_BooleanOperand::SetTypeOfContent),
             R"#(None)#"  , py::arg("aTypeOfContent"))
        .def("TypeOfContent",
             (Standard_Integer (StepShape_BooleanOperand::*)() const) static_cast<Standard_Integer (StepShape_BooleanOperand::*)() const>(&StepShape_BooleanOperand::TypeOfContent),
             R"#(None)#" )
        .def("SolidModel",
             (opencascade::handle<StepShape_SolidModel> (StepShape_BooleanOperand::*)() const) static_cast<opencascade::handle<StepShape_SolidModel> (StepShape_BooleanOperand::*)() const>(&StepShape_BooleanOperand::SolidModel),
             R"#(returns Value as a SolidModel (Null if another type))#" )
        .def("SetSolidModel",
             (void (StepShape_BooleanOperand::*)( const opencascade::handle<StepShape_SolidModel> &  ) ) static_cast<void (StepShape_BooleanOperand::*)( const opencascade::handle<StepShape_SolidModel> &  ) >(&StepShape_BooleanOperand::SetSolidModel),
             R"#(None)#"  , py::arg("aSolidModel"))
        .def("HalfSpaceSolid",
             (opencascade::handle<StepShape_HalfSpaceSolid> (StepShape_BooleanOperand::*)() const) static_cast<opencascade::handle<StepShape_HalfSpaceSolid> (StepShape_BooleanOperand::*)() const>(&StepShape_BooleanOperand::HalfSpaceSolid),
             R"#(returns Value as a HalfSpaceSolid (Null if another type))#" )
        .def("SetHalfSpaceSolid",
             (void (StepShape_BooleanOperand::*)( const opencascade::handle<StepShape_HalfSpaceSolid> &  ) ) static_cast<void (StepShape_BooleanOperand::*)( const opencascade::handle<StepShape_HalfSpaceSolid> &  ) >(&StepShape_BooleanOperand::SetHalfSpaceSolid),
             R"#(None)#"  , py::arg("aHalfSpaceSolid"))
        .def("CsgPrimitive",
             (StepShape_CsgPrimitive (StepShape_BooleanOperand::*)() const) static_cast<StepShape_CsgPrimitive (StepShape_BooleanOperand::*)() const>(&StepShape_BooleanOperand::CsgPrimitive),
             R"#(returns Value as a CsgPrimitive (Null if another type) CsgPrimitive is another Select Type)#" )
        .def("SetCsgPrimitive",
             (void (StepShape_BooleanOperand::*)( const StepShape_CsgPrimitive &  ) ) static_cast<void (StepShape_BooleanOperand::*)( const StepShape_CsgPrimitive &  ) >(&StepShape_BooleanOperand::SetCsgPrimitive),
             R"#(None)#"  , py::arg("aCsgPrimitive"))
        .def("BooleanResult",
             (opencascade::handle<StepShape_BooleanResult> (StepShape_BooleanOperand::*)() const) static_cast<opencascade::handle<StepShape_BooleanResult> (StepShape_BooleanOperand::*)() const>(&StepShape_BooleanOperand::BooleanResult),
             R"#(returns Value as a BooleanResult (Null if another type))#" )
        .def("SetBooleanResult",
             (void (StepShape_BooleanOperand::*)( const opencascade::handle<StepShape_BooleanResult> &  ) ) static_cast<void (StepShape_BooleanOperand::*)( const opencascade::handle<StepShape_BooleanResult> &  ) >(&StepShape_BooleanOperand::SetBooleanResult),
             R"#(None)#"  , py::arg("aBooleanResult"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_BooleanResult ,opencascade::handle<StepShape_BooleanResult>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_BooleanResult"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_BooleanResult::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const StepShape_BooleanOperator ,  const StepShape_BooleanOperand & ,  const StepShape_BooleanOperand &  ) ) static_cast<void (StepShape_BooleanResult::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const StepShape_BooleanOperator ,  const StepShape_BooleanOperand & ,  const StepShape_BooleanOperand &  ) >(&StepShape_BooleanResult::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aOperator"),  py::arg("aFirstOperand"),  py::arg("aSecondOperand"))
        .def("SetOperator",
             (void (StepShape_BooleanResult::*)( const StepShape_BooleanOperator  ) ) static_cast<void (StepShape_BooleanResult::*)( const StepShape_BooleanOperator  ) >(&StepShape_BooleanResult::SetOperator),
             R"#(None)#"  , py::arg("aOperator"))
        .def("Operator",
             (StepShape_BooleanOperator (StepShape_BooleanResult::*)() const) static_cast<StepShape_BooleanOperator (StepShape_BooleanResult::*)() const>(&StepShape_BooleanResult::Operator),
             R"#(None)#" )
        .def("SetFirstOperand",
             (void (StepShape_BooleanResult::*)( const StepShape_BooleanOperand &  ) ) static_cast<void (StepShape_BooleanResult::*)( const StepShape_BooleanOperand &  ) >(&StepShape_BooleanResult::SetFirstOperand),
             R"#(None)#"  , py::arg("aFirstOperand"))
        .def("FirstOperand",
             (StepShape_BooleanOperand (StepShape_BooleanResult::*)() const) static_cast<StepShape_BooleanOperand (StepShape_BooleanResult::*)() const>(&StepShape_BooleanResult::FirstOperand),
             R"#(None)#" )
        .def("SetSecondOperand",
             (void (StepShape_BooleanResult::*)( const StepShape_BooleanOperand &  ) ) static_cast<void (StepShape_BooleanResult::*)( const StepShape_BooleanOperand &  ) >(&StepShape_BooleanResult::SetSecondOperand),
             R"#(None)#"  , py::arg("aSecondOperand"))
        .def("SecondOperand",
             (StepShape_BooleanOperand (StepShape_BooleanResult::*)() const) static_cast<StepShape_BooleanOperand (StepShape_BooleanResult::*)() const>(&StepShape_BooleanResult::SecondOperand),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_BooleanResult::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_BooleanResult::*)() const>(&StepShape_BooleanResult::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_BooleanResult::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_BooleanResult::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_BoxDomain ,opencascade::handle<StepShape_BoxDomain>  , Standard_Transient >>(m.attr("StepShape_BoxDomain"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_BoxDomain::*)( const opencascade::handle<StepGeom_CartesianPoint> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (StepShape_BoxDomain::*)( const opencascade::handle<StepGeom_CartesianPoint> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&StepShape_BoxDomain::Init),
             R"#(None)#"  , py::arg("aCorner"),  py::arg("aXlength"),  py::arg("aYlength"),  py::arg("aZlength"))
        .def("SetCorner",
             (void (StepShape_BoxDomain::*)( const opencascade::handle<StepGeom_CartesianPoint> &  ) ) static_cast<void (StepShape_BoxDomain::*)( const opencascade::handle<StepGeom_CartesianPoint> &  ) >(&StepShape_BoxDomain::SetCorner),
             R"#(None)#"  , py::arg("aCorner"))
        .def("Corner",
             (opencascade::handle<StepGeom_CartesianPoint> (StepShape_BoxDomain::*)() const) static_cast<opencascade::handle<StepGeom_CartesianPoint> (StepShape_BoxDomain::*)() const>(&StepShape_BoxDomain::Corner),
             R"#(None)#" )
        .def("SetXlength",
             (void (StepShape_BoxDomain::*)( const Standard_Real  ) ) static_cast<void (StepShape_BoxDomain::*)( const Standard_Real  ) >(&StepShape_BoxDomain::SetXlength),
             R"#(None)#"  , py::arg("aXlength"))
        .def("Xlength",
             (Standard_Real (StepShape_BoxDomain::*)() const) static_cast<Standard_Real (StepShape_BoxDomain::*)() const>(&StepShape_BoxDomain::Xlength),
             R"#(None)#" )
        .def("SetYlength",
             (void (StepShape_BoxDomain::*)( const Standard_Real  ) ) static_cast<void (StepShape_BoxDomain::*)( const Standard_Real  ) >(&StepShape_BoxDomain::SetYlength),
             R"#(None)#"  , py::arg("aYlength"))
        .def("Ylength",
             (Standard_Real (StepShape_BoxDomain::*)() const) static_cast<Standard_Real (StepShape_BoxDomain::*)() const>(&StepShape_BoxDomain::Ylength),
             R"#(None)#" )
        .def("SetZlength",
             (void (StepShape_BoxDomain::*)( const Standard_Real  ) ) static_cast<void (StepShape_BoxDomain::*)( const Standard_Real  ) >(&StepShape_BoxDomain::SetZlength),
             R"#(None)#"  , py::arg("aZlength"))
        .def("Zlength",
             (Standard_Real (StepShape_BoxDomain::*)() const) static_cast<Standard_Real (StepShape_BoxDomain::*)() const>(&StepShape_BoxDomain::Zlength),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_BoxDomain::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_BoxDomain::*)() const>(&StepShape_BoxDomain::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_BoxDomain::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_BoxDomain::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ConnectedFaceShapeRepresentation ,opencascade::handle<StepShape_ConnectedFaceShapeRepresentation>  , StepRepr_Representation >>(m.attr("StepShape_ConnectedFaceShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ConnectedFaceShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ContextDependentShapeRepresentation ,opencascade::handle<StepShape_ContextDependentShapeRepresentation>  , Standard_Transient >>(m.attr("StepShape_ContextDependentShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ContextDependentShapeRepresentation::*)( const opencascade::handle<StepRepr_ShapeRepresentationRelationship> & ,  const opencascade::handle<StepRepr_ProductDefinitionShape> &  ) ) static_cast<void (StepShape_ContextDependentShapeRepresentation::*)( const opencascade::handle<StepRepr_ShapeRepresentationRelationship> & ,  const opencascade::handle<StepRepr_ProductDefinitionShape> &  ) >(&StepShape_ContextDependentShapeRepresentation::Init),
             R"#(None)#"  , py::arg("aRepRel"),  py::arg("aProRel"))
        .def("RepresentationRelation",
             (opencascade::handle<StepRepr_ShapeRepresentationRelationship> (StepShape_ContextDependentShapeRepresentation::*)() const) static_cast<opencascade::handle<StepRepr_ShapeRepresentationRelationship> (StepShape_ContextDependentShapeRepresentation::*)() const>(&StepShape_ContextDependentShapeRepresentation::RepresentationRelation),
             R"#(None)#" )
        .def("SetRepresentationRelation",
             (void (StepShape_ContextDependentShapeRepresentation::*)( const opencascade::handle<StepRepr_ShapeRepresentationRelationship> &  ) ) static_cast<void (StepShape_ContextDependentShapeRepresentation::*)( const opencascade::handle<StepRepr_ShapeRepresentationRelationship> &  ) >(&StepShape_ContextDependentShapeRepresentation::SetRepresentationRelation),
             R"#(None)#"  , py::arg("aRepRel"))
        .def("RepresentedProductRelation",
             (opencascade::handle<StepRepr_ProductDefinitionShape> (StepShape_ContextDependentShapeRepresentation::*)() const) static_cast<opencascade::handle<StepRepr_ProductDefinitionShape> (StepShape_ContextDependentShapeRepresentation::*)() const>(&StepShape_ContextDependentShapeRepresentation::RepresentedProductRelation),
             R"#(None)#" )
        .def("SetRepresentedProductRelation",
             (void (StepShape_ContextDependentShapeRepresentation::*)( const opencascade::handle<StepRepr_ProductDefinitionShape> &  ) ) static_cast<void (StepShape_ContextDependentShapeRepresentation::*)( const opencascade::handle<StepRepr_ProductDefinitionShape> &  ) >(&StepShape_ContextDependentShapeRepresentation::SetRepresentedProductRelation),
             R"#(None)#"  , py::arg("aProRel"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ContextDependentShapeRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ContextDependentShapeRepresentation::*)() const>(&StepShape_ContextDependentShapeRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ContextDependentShapeRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ContextDependentShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_CsgPrimitive , shared_ptr<StepShape_CsgPrimitive>  , StepData_SelectType >>(m.attr("StepShape_CsgPrimitive"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_CsgPrimitive::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepShape_CsgPrimitive::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepShape_CsgPrimitive::CaseNum),
             R"#(Recognizes a CsgPrimitive Kind Entity that is : 1 -> Sphere 2 -> Block 3 -> RightAngularWedge 4 -> Torus 5 -> RightCircularCone 6 -> RightCircularCylinder 0 else)#"  , py::arg("ent"))
        .def("Sphere",
             (opencascade::handle<StepShape_Sphere> (StepShape_CsgPrimitive::*)() const) static_cast<opencascade::handle<StepShape_Sphere> (StepShape_CsgPrimitive::*)() const>(&StepShape_CsgPrimitive::Sphere),
             R"#(returns Value as a Sphere (Null if another type))#" )
        .def("Block",
             (opencascade::handle<StepShape_Block> (StepShape_CsgPrimitive::*)() const) static_cast<opencascade::handle<StepShape_Block> (StepShape_CsgPrimitive::*)() const>(&StepShape_CsgPrimitive::Block),
             R"#(returns Value as a Block (Null if another type))#" )
        .def("RightAngularWedge",
             (opencascade::handle<StepShape_RightAngularWedge> (StepShape_CsgPrimitive::*)() const) static_cast<opencascade::handle<StepShape_RightAngularWedge> (StepShape_CsgPrimitive::*)() const>(&StepShape_CsgPrimitive::RightAngularWedge),
             R"#(returns Value as a RightAngularWedge (Null if another type))#" )
        .def("Torus",
             (opencascade::handle<StepShape_Torus> (StepShape_CsgPrimitive::*)() const) static_cast<opencascade::handle<StepShape_Torus> (StepShape_CsgPrimitive::*)() const>(&StepShape_CsgPrimitive::Torus),
             R"#(returns Value as a Torus (Null if another type))#" )
        .def("RightCircularCone",
             (opencascade::handle<StepShape_RightCircularCone> (StepShape_CsgPrimitive::*)() const) static_cast<opencascade::handle<StepShape_RightCircularCone> (StepShape_CsgPrimitive::*)() const>(&StepShape_CsgPrimitive::RightCircularCone),
             R"#(returns Value as a RightCircularCone (Null if another type))#" )
        .def("RightCircularCylinder",
             (opencascade::handle<StepShape_RightCircularCylinder> (StepShape_CsgPrimitive::*)() const) static_cast<opencascade::handle<StepShape_RightCircularCylinder> (StepShape_CsgPrimitive::*)() const>(&StepShape_CsgPrimitive::RightCircularCylinder),
             R"#(returns Value as a RightCircularCylinder (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_CsgSelect , shared_ptr<StepShape_CsgSelect>  >>(m.attr("StepShape_CsgSelect"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetTypeOfContent",
             (void (StepShape_CsgSelect::*)( const Standard_Integer  ) ) static_cast<void (StepShape_CsgSelect::*)( const Standard_Integer  ) >(&StepShape_CsgSelect::SetTypeOfContent),
             R"#(None)#"  , py::arg("aTypeOfContent"))
        .def("TypeOfContent",
             (Standard_Integer (StepShape_CsgSelect::*)() const) static_cast<Standard_Integer (StepShape_CsgSelect::*)() const>(&StepShape_CsgSelect::TypeOfContent),
             R"#(None)#" )
        .def("BooleanResult",
             (opencascade::handle<StepShape_BooleanResult> (StepShape_CsgSelect::*)() const) static_cast<opencascade::handle<StepShape_BooleanResult> (StepShape_CsgSelect::*)() const>(&StepShape_CsgSelect::BooleanResult),
             R"#(returns Value as a BooleanResult (Null if another type))#" )
        .def("SetBooleanResult",
             (void (StepShape_CsgSelect::*)( const opencascade::handle<StepShape_BooleanResult> &  ) ) static_cast<void (StepShape_CsgSelect::*)( const opencascade::handle<StepShape_BooleanResult> &  ) >(&StepShape_CsgSelect::SetBooleanResult),
             R"#(None)#"  , py::arg("aBooleanResult"))
        .def("CsgPrimitive",
             (StepShape_CsgPrimitive (StepShape_CsgSelect::*)() const) static_cast<StepShape_CsgPrimitive (StepShape_CsgSelect::*)() const>(&StepShape_CsgSelect::CsgPrimitive),
             R"#(returns Value as a CsgPrimitive (Null if another type))#" )
        .def("SetCsgPrimitive",
             (void (StepShape_CsgSelect::*)( const StepShape_CsgPrimitive &  ) ) static_cast<void (StepShape_CsgSelect::*)( const StepShape_CsgPrimitive &  ) >(&StepShape_CsgSelect::SetCsgPrimitive),
             R"#(None)#"  , py::arg("aCsgPrimitive"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DefinitionalRepresentationAndShapeRepresentation ,opencascade::handle<StepShape_DefinitionalRepresentationAndShapeRepresentation>  , StepRepr_DefinitionalRepresentation >>(m.attr("StepShape_DefinitionalRepresentationAndShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_DefinitionalRepresentationAndShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalCharacteristic , shared_ptr<StepShape_DimensionalCharacteristic>  , StepData_SelectType >>(m.attr("StepShape_DimensionalCharacteristic"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_DimensionalCharacteristic::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepShape_DimensionalCharacteristic::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepShape_DimensionalCharacteristic::CaseNum),
             R"#(Recognizes a kind of DimensionalCharacteristic select type 1 -> DimensionalLocation from StepShape 2 -> DimensionalSize from StepShape 0 else)#"  , py::arg("ent"))
        .def("DimensionalLocation",
             (opencascade::handle<StepShape_DimensionalLocation> (StepShape_DimensionalCharacteristic::*)() const) static_cast<opencascade::handle<StepShape_DimensionalLocation> (StepShape_DimensionalCharacteristic::*)() const>(&StepShape_DimensionalCharacteristic::DimensionalLocation),
             R"#(Returns Value as DimensionalLocation (or Null if another type))#" )
        .def("DimensionalSize",
             (opencascade::handle<StepShape_DimensionalSize> (StepShape_DimensionalCharacteristic::*)() const) static_cast<opencascade::handle<StepShape_DimensionalSize> (StepShape_DimensionalCharacteristic::*)() const>(&StepShape_DimensionalCharacteristic::DimensionalSize),
             R"#(Returns Value as DimensionalSize (or Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalCharacteristicRepresentation ,opencascade::handle<StepShape_DimensionalCharacteristicRepresentation>  , Standard_Transient >>(m.attr("StepShape_DimensionalCharacteristicRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_DimensionalCharacteristicRepresentation::*)( const StepShape_DimensionalCharacteristic & ,  const opencascade::handle<StepShape_ShapeDimensionRepresentation> &  ) ) static_cast<void (StepShape_DimensionalCharacteristicRepresentation::*)( const StepShape_DimensionalCharacteristic & ,  const opencascade::handle<StepShape_ShapeDimensionRepresentation> &  ) >(&StepShape_DimensionalCharacteristicRepresentation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDimension"),  py::arg("aRepresentation"))
        .def("Dimension",
             (StepShape_DimensionalCharacteristic (StepShape_DimensionalCharacteristicRepresentation::*)() const) static_cast<StepShape_DimensionalCharacteristic (StepShape_DimensionalCharacteristicRepresentation::*)() const>(&StepShape_DimensionalCharacteristicRepresentation::Dimension),
             R"#(Returns field Dimension)#" )
        .def("SetDimension",
             (void (StepShape_DimensionalCharacteristicRepresentation::*)( const StepShape_DimensionalCharacteristic &  ) ) static_cast<void (StepShape_DimensionalCharacteristicRepresentation::*)( const StepShape_DimensionalCharacteristic &  ) >(&StepShape_DimensionalCharacteristicRepresentation::SetDimension),
             R"#(Set field Dimension)#"  , py::arg("Dimension"))
        .def("Representation",
             (opencascade::handle<StepShape_ShapeDimensionRepresentation> (StepShape_DimensionalCharacteristicRepresentation::*)() const) static_cast<opencascade::handle<StepShape_ShapeDimensionRepresentation> (StepShape_DimensionalCharacteristicRepresentation::*)() const>(&StepShape_DimensionalCharacteristicRepresentation::Representation),
             R"#(Returns field Representation)#" )
        .def("SetRepresentation",
             (void (StepShape_DimensionalCharacteristicRepresentation::*)( const opencascade::handle<StepShape_ShapeDimensionRepresentation> &  ) ) static_cast<void (StepShape_DimensionalCharacteristicRepresentation::*)( const opencascade::handle<StepShape_ShapeDimensionRepresentation> &  ) >(&StepShape_DimensionalCharacteristicRepresentation::SetRepresentation),
             R"#(Set field Representation)#"  , py::arg("Representation"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DimensionalCharacteristicRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DimensionalCharacteristicRepresentation::*)() const>(&StepShape_DimensionalCharacteristicRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DimensionalCharacteristicRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_DimensionalCharacteristicRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalLocation ,opencascade::handle<StepShape_DimensionalLocation>  , StepRepr_ShapeAspectRelationship >>(m.attr("StepShape_DimensionalLocation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_DimensionalLocation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalSize ,opencascade::handle<StepShape_DimensionalSize>  , Standard_Transient >>(m.attr("StepShape_DimensionalSize"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_DimensionalSize::*)( const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_DimensionalSize::*)( const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_DimensionalSize::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aAppliesTo"),  py::arg("aName"))
        .def("AppliesTo",
             (opencascade::handle<StepRepr_ShapeAspect> (StepShape_DimensionalSize::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepShape_DimensionalSize::*)() const>(&StepShape_DimensionalSize::AppliesTo),
             R"#(Returns field AppliesTo)#" )
        .def("SetAppliesTo",
             (void (StepShape_DimensionalSize::*)( const opencascade::handle<StepRepr_ShapeAspect> &  ) ) static_cast<void (StepShape_DimensionalSize::*)( const opencascade::handle<StepRepr_ShapeAspect> &  ) >(&StepShape_DimensionalSize::SetAppliesTo),
             R"#(Set field AppliesTo)#"  , py::arg("AppliesTo"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepShape_DimensionalSize::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepShape_DimensionalSize::*)() const>(&StepShape_DimensionalSize::Name),
             R"#(Returns field Name)#" )
        .def("SetName",
             (void (StepShape_DimensionalSize::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_DimensionalSize::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_DimensionalSize::SetName),
             R"#(Set field Name)#"  , py::arg("Name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DimensionalSize::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DimensionalSize::*)() const>(&StepShape_DimensionalSize::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DimensionalSize::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_DimensionalSize::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_EdgeBasedWireframeModel ,opencascade::handle<StepShape_EdgeBasedWireframeModel>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_EdgeBasedWireframeModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_EdgeBasedWireframeModel::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfConnectedEdgeSet> &  ) ) static_cast<void (StepShape_EdgeBasedWireframeModel::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfConnectedEdgeSet> &  ) >(&StepShape_EdgeBasedWireframeModel::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aEbwmBoundary"))
        .def("EbwmBoundary",
             (opencascade::handle<StepShape_HArray1OfConnectedEdgeSet> (StepShape_EdgeBasedWireframeModel::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfConnectedEdgeSet> (StepShape_EdgeBasedWireframeModel::*)() const>(&StepShape_EdgeBasedWireframeModel::EbwmBoundary),
             R"#(Returns field EbwmBoundary)#" )
        .def("SetEbwmBoundary",
             (void (StepShape_EdgeBasedWireframeModel::*)( const opencascade::handle<StepShape_HArray1OfConnectedEdgeSet> &  ) ) static_cast<void (StepShape_EdgeBasedWireframeModel::*)( const opencascade::handle<StepShape_HArray1OfConnectedEdgeSet> &  ) >(&StepShape_EdgeBasedWireframeModel::SetEbwmBoundary),
             R"#(Set field EbwmBoundary)#"  , py::arg("EbwmBoundary"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_EdgeBasedWireframeModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_EdgeBasedWireframeModel::*)() const>(&StepShape_EdgeBasedWireframeModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_EdgeBasedWireframeModel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_EdgeBasedWireframeModel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FaceBasedSurfaceModel ,opencascade::handle<StepShape_FaceBasedSurfaceModel>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_FaceBasedSurfaceModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_FaceBasedSurfaceModel::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfConnectedFaceSet> &  ) ) static_cast<void (StepShape_FaceBasedSurfaceModel::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfConnectedFaceSet> &  ) >(&StepShape_FaceBasedSurfaceModel::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFbsmFaces"))
        .def("FbsmFaces",
             (opencascade::handle<StepShape_HArray1OfConnectedFaceSet> (StepShape_FaceBasedSurfaceModel::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfConnectedFaceSet> (StepShape_FaceBasedSurfaceModel::*)() const>(&StepShape_FaceBasedSurfaceModel::FbsmFaces),
             R"#(Returns field FbsmFaces)#" )
        .def("SetFbsmFaces",
             (void (StepShape_FaceBasedSurfaceModel::*)( const opencascade::handle<StepShape_HArray1OfConnectedFaceSet> &  ) ) static_cast<void (StepShape_FaceBasedSurfaceModel::*)( const opencascade::handle<StepShape_HArray1OfConnectedFaceSet> &  ) >(&StepShape_FaceBasedSurfaceModel::SetFbsmFaces),
             R"#(Set field FbsmFaces)#"  , py::arg("FbsmFaces"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FaceBasedSurfaceModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FaceBasedSurfaceModel::*)() const>(&StepShape_FaceBasedSurfaceModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FaceBasedSurfaceModel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_FaceBasedSurfaceModel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_GeometricSet ,opencascade::handle<StepShape_GeometricSet>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_GeometricSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_GeometricSet::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfGeometricSetSelect> &  ) ) static_cast<void (StepShape_GeometricSet::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfGeometricSetSelect> &  ) >(&StepShape_GeometricSet::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aElements"))
        .def("SetElements",
             (void (StepShape_GeometricSet::*)( const opencascade::handle<StepShape_HArray1OfGeometricSetSelect> &  ) ) static_cast<void (StepShape_GeometricSet::*)( const opencascade::handle<StepShape_HArray1OfGeometricSetSelect> &  ) >(&StepShape_GeometricSet::SetElements),
             R"#(None)#"  , py::arg("aElements"))
        .def("Elements",
             (opencascade::handle<StepShape_HArray1OfGeometricSetSelect> (StepShape_GeometricSet::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfGeometricSetSelect> (StepShape_GeometricSet::*)() const>(&StepShape_GeometricSet::Elements),
             R"#(None)#" )
        .def("ElementsValue",
             (StepShape_GeometricSetSelect (StepShape_GeometricSet::*)( const Standard_Integer  ) const) static_cast<StepShape_GeometricSetSelect (StepShape_GeometricSet::*)( const Standard_Integer  ) const>(&StepShape_GeometricSet::ElementsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbElements",
             (Standard_Integer (StepShape_GeometricSet::*)() const) static_cast<Standard_Integer (StepShape_GeometricSet::*)() const>(&StepShape_GeometricSet::NbElements),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_GeometricSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_GeometricSet::*)() const>(&StepShape_GeometricSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_GeometricSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_GeometricSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_GeometricSetSelect , shared_ptr<StepShape_GeometricSetSelect>  , StepData_SelectType >>(m.attr("StepShape_GeometricSetSelect"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_GeometricSetSelect::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepShape_GeometricSetSelect::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepShape_GeometricSetSelect::CaseNum),
             R"#(Recognizes a GeometricSetSelect Kind Entity that is : 1 -> Point 2 -> Curve 3 -> Surface 0 else)#"  , py::arg("ent"))
        .def("Point",
             (opencascade::handle<StepGeom_Point> (StepShape_GeometricSetSelect::*)() const) static_cast<opencascade::handle<StepGeom_Point> (StepShape_GeometricSetSelect::*)() const>(&StepShape_GeometricSetSelect::Point),
             R"#(returns Value as a Point (Null if another type))#" )
        .def("Curve",
             (opencascade::handle<StepGeom_Curve> (StepShape_GeometricSetSelect::*)() const) static_cast<opencascade::handle<StepGeom_Curve> (StepShape_GeometricSetSelect::*)() const>(&StepShape_GeometricSetSelect::Curve),
             R"#(returns Value as a Curve (Null if another type))#" )
        .def("Surface",
             (opencascade::handle<StepGeom_Surface> (StepShape_GeometricSetSelect::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepShape_GeometricSetSelect::*)() const>(&StepShape_GeometricSetSelect::Surface),
             R"#(returns Value as a Surface (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_HArray1OfConnectedEdgeSet ,opencascade::handle<StepShape_HArray1OfConnectedEdgeSet>  , StepShape_Array1OfConnectedEdgeSet , Standard_Transient >>(m.attr("StepShape_HArray1OfConnectedEdgeSet"))
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


    static_cast<py::class_<StepShape_HArray1OfConnectedFaceSet ,opencascade::handle<StepShape_HArray1OfConnectedFaceSet>  , StepShape_Array1OfConnectedFaceSet , Standard_Transient >>(m.attr("StepShape_HArray1OfConnectedFaceSet"))
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


    static_cast<py::class_<StepShape_HArray1OfEdge ,opencascade::handle<StepShape_HArray1OfEdge>  , StepShape_Array1OfEdge , Standard_Transient >>(m.attr("StepShape_HArray1OfEdge"))
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


    static_cast<py::class_<StepShape_HArray1OfFace ,opencascade::handle<StepShape_HArray1OfFace>  , StepShape_Array1OfFace , Standard_Transient >>(m.attr("StepShape_HArray1OfFace"))
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


    static_cast<py::class_<StepShape_HArray1OfFaceBound ,opencascade::handle<StepShape_HArray1OfFaceBound>  , StepShape_Array1OfFaceBound , Standard_Transient >>(m.attr("StepShape_HArray1OfFaceBound"))
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


    static_cast<py::class_<StepShape_HArray1OfGeometricSetSelect ,opencascade::handle<StepShape_HArray1OfGeometricSetSelect>  , StepShape_Array1OfGeometricSetSelect , Standard_Transient >>(m.attr("StepShape_HArray1OfGeometricSetSelect"))
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


    static_cast<py::class_<StepShape_HArray1OfOrientedClosedShell ,opencascade::handle<StepShape_HArray1OfOrientedClosedShell>  , StepShape_Array1OfOrientedClosedShell , Standard_Transient >>(m.attr("StepShape_HArray1OfOrientedClosedShell"))
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


    static_cast<py::class_<StepShape_HArray1OfOrientedEdge ,opencascade::handle<StepShape_HArray1OfOrientedEdge>  , StepShape_Array1OfOrientedEdge , Standard_Transient >>(m.attr("StepShape_HArray1OfOrientedEdge"))
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


    static_cast<py::class_<StepShape_HArray1OfShapeDimensionRepresentationItem ,opencascade::handle<StepShape_HArray1OfShapeDimensionRepresentationItem>  , StepShape_Array1OfShapeDimensionRepresentationItem , Standard_Transient >>(m.attr("StepShape_HArray1OfShapeDimensionRepresentationItem"))
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


    static_cast<py::class_<StepShape_HArray1OfShell ,opencascade::handle<StepShape_HArray1OfShell>  , StepShape_Array1OfShell , Standard_Transient >>(m.attr("StepShape_HArray1OfShell"))
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


    static_cast<py::class_<StepShape_HArray1OfValueQualifier ,opencascade::handle<StepShape_HArray1OfValueQualifier>  , StepShape_Array1OfValueQualifier , Standard_Transient >>(m.attr("StepShape_HArray1OfValueQualifier"))
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


    static_cast<py::class_<StepShape_HalfSpaceSolid ,opencascade::handle<StepShape_HalfSpaceSolid>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_HalfSpaceSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_HalfSpaceSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Surface> & ,  const Standard_Boolean  ) ) static_cast<void (StepShape_HalfSpaceSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Surface> & ,  const Standard_Boolean  ) >(&StepShape_HalfSpaceSolid::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBaseSurface"),  py::arg("aAgreementFlag"))
        .def("SetBaseSurface",
             (void (StepShape_HalfSpaceSolid::*)( const opencascade::handle<StepGeom_Surface> &  ) ) static_cast<void (StepShape_HalfSpaceSolid::*)( const opencascade::handle<StepGeom_Surface> &  ) >(&StepShape_HalfSpaceSolid::SetBaseSurface),
             R"#(None)#"  , py::arg("aBaseSurface"))
        .def("BaseSurface",
             (opencascade::handle<StepGeom_Surface> (StepShape_HalfSpaceSolid::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepShape_HalfSpaceSolid::*)() const>(&StepShape_HalfSpaceSolid::BaseSurface),
             R"#(None)#" )
        .def("SetAgreementFlag",
             (void (StepShape_HalfSpaceSolid::*)( const Standard_Boolean  ) ) static_cast<void (StepShape_HalfSpaceSolid::*)( const Standard_Boolean  ) >(&StepShape_HalfSpaceSolid::SetAgreementFlag),
             R"#(None)#"  , py::arg("aAgreementFlag"))
        .def("AgreementFlag",
             (Standard_Boolean (StepShape_HalfSpaceSolid::*)() const) static_cast<Standard_Boolean (StepShape_HalfSpaceSolid::*)() const>(&StepShape_HalfSpaceSolid::AgreementFlag),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_HalfSpaceSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_HalfSpaceSolid::*)() const>(&StepShape_HalfSpaceSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_HalfSpaceSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_HalfSpaceSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_LimitsAndFits ,opencascade::handle<StepShape_LimitsAndFits>  , Standard_Transient >>(m.attr("StepShape_LimitsAndFits"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_LimitsAndFits::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_LimitsAndFits::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_LimitsAndFits::Init),
             R"#(None)#"  , py::arg("form_variance"),  py::arg("zone_variance"),  py::arg("grade"),  py::arg("source"))
        .def("FormVariance",
             (opencascade::handle<TCollection_HAsciiString> (StepShape_LimitsAndFits::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepShape_LimitsAndFits::*)() const>(&StepShape_LimitsAndFits::FormVariance),
             R"#(None)#" )
        .def("SetFormVariance",
             (void (StepShape_LimitsAndFits::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_LimitsAndFits::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_LimitsAndFits::SetFormVariance),
             R"#(None)#"  , py::arg("form_variance"))
        .def("ZoneVariance",
             (opencascade::handle<TCollection_HAsciiString> (StepShape_LimitsAndFits::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepShape_LimitsAndFits::*)() const>(&StepShape_LimitsAndFits::ZoneVariance),
             R"#(None)#" )
        .def("SetZoneVariance",
             (void (StepShape_LimitsAndFits::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_LimitsAndFits::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_LimitsAndFits::SetZoneVariance),
             R"#(None)#"  , py::arg("zone_variance"))
        .def("Grade",
             (opencascade::handle<TCollection_HAsciiString> (StepShape_LimitsAndFits::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepShape_LimitsAndFits::*)() const>(&StepShape_LimitsAndFits::Grade),
             R"#(None)#" )
        .def("SetGrade",
             (void (StepShape_LimitsAndFits::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_LimitsAndFits::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_LimitsAndFits::SetGrade),
             R"#(None)#"  , py::arg("grade"))
        .def("Source",
             (opencascade::handle<TCollection_HAsciiString> (StepShape_LimitsAndFits::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepShape_LimitsAndFits::*)() const>(&StepShape_LimitsAndFits::Source),
             R"#(None)#" )
        .def("SetSource",
             (void (StepShape_LimitsAndFits::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_LimitsAndFits::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_LimitsAndFits::SetSource),
             R"#(None)#"  , py::arg("source"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_LimitsAndFits::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_LimitsAndFits::*)() const>(&StepShape_LimitsAndFits::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_LimitsAndFits::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_LimitsAndFits::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_MeasureQualification ,opencascade::handle<StepShape_MeasureQualification>  , Standard_Transient >>(m.attr("StepShape_MeasureQualification"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_MeasureQualification::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> & ,  const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) ) static_cast<void (StepShape_MeasureQualification::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureWithUnit> & ,  const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) >(&StepShape_MeasureQualification::Init),
             R"#(None)#"  , py::arg("name"),  py::arg("description"),  py::arg("qualified_measure"),  py::arg("qualifiers"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepShape_MeasureQualification::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepShape_MeasureQualification::*)() const>(&StepShape_MeasureQualification::Name),
             R"#(None)#" )
        .def("SetName",
             (void (StepShape_MeasureQualification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_MeasureQualification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_MeasureQualification::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("Description",
             (opencascade::handle<TCollection_HAsciiString> (StepShape_MeasureQualification::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepShape_MeasureQualification::*)() const>(&StepShape_MeasureQualification::Description),
             R"#(None)#" )
        .def("SetDescription",
             (void (StepShape_MeasureQualification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_MeasureQualification::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_MeasureQualification::SetDescription),
             R"#(None)#"  , py::arg("description"))
        .def("QualifiedMeasure",
             (opencascade::handle<StepBasic_MeasureWithUnit> (StepShape_MeasureQualification::*)() const) static_cast<opencascade::handle<StepBasic_MeasureWithUnit> (StepShape_MeasureQualification::*)() const>(&StepShape_MeasureQualification::QualifiedMeasure),
             R"#(None)#" )
        .def("SetQualifiedMeasure",
             (void (StepShape_MeasureQualification::*)( const opencascade::handle<StepBasic_MeasureWithUnit> &  ) ) static_cast<void (StepShape_MeasureQualification::*)( const opencascade::handle<StepBasic_MeasureWithUnit> &  ) >(&StepShape_MeasureQualification::SetQualifiedMeasure),
             R"#(None)#"  , py::arg("qualified_measure"))
        .def("Qualifiers",
             (opencascade::handle<StepShape_HArray1OfValueQualifier> (StepShape_MeasureQualification::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfValueQualifier> (StepShape_MeasureQualification::*)() const>(&StepShape_MeasureQualification::Qualifiers),
             R"#(None)#" )
        .def("NbQualifiers",
             (Standard_Integer (StepShape_MeasureQualification::*)() const) static_cast<Standard_Integer (StepShape_MeasureQualification::*)() const>(&StepShape_MeasureQualification::NbQualifiers),
             R"#(None)#" )
        .def("SetQualifiers",
             (void (StepShape_MeasureQualification::*)( const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) ) static_cast<void (StepShape_MeasureQualification::*)( const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) >(&StepShape_MeasureQualification::SetQualifiers),
             R"#(None)#"  , py::arg("qualifiers"))
        .def("QualifiersValue",
             (StepShape_ValueQualifier (StepShape_MeasureQualification::*)( const Standard_Integer  ) const) static_cast<StepShape_ValueQualifier (StepShape_MeasureQualification::*)( const Standard_Integer  ) const>(&StepShape_MeasureQualification::QualifiersValue),
             R"#(None)#"  , py::arg("num"))
        .def("SetQualifiersValue",
             (void (StepShape_MeasureQualification::*)( const Standard_Integer ,  const StepShape_ValueQualifier &  ) ) static_cast<void (StepShape_MeasureQualification::*)( const Standard_Integer ,  const StepShape_ValueQualifier &  ) >(&StepShape_MeasureQualification::SetQualifiersValue),
             R"#(None)#"  , py::arg("num"),  py::arg("aqualifier"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_MeasureQualification::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_MeasureQualification::*)() const>(&StepShape_MeasureQualification::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_MeasureQualification::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_MeasureQualification::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem ,opencascade::handle<StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem>  , StepRepr_RepresentationItem >>(m.attr("StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureValueMember> & ,  const StepBasic_Unit & ,  const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) ) static_cast<void (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepBasic_MeasureValueMember> & ,  const StepBasic_Unit & ,  const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) >(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aValueComponent"),  py::arg("aUnitComponent"),  py::arg("qualifiers"))
        .def("SetMeasure",
             (void (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)( const opencascade::handle<StepBasic_MeasureWithUnit> &  ) ) static_cast<void (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)( const opencascade::handle<StepBasic_MeasureWithUnit> &  ) >(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::SetMeasure),
             R"#(None)#"  , py::arg("Measure"))
        .def("Measure",
             (opencascade::handle<StepBasic_MeasureWithUnit> (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)() const) static_cast<opencascade::handle<StepBasic_MeasureWithUnit> (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)() const>(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::Measure),
             R"#(None)#" )
        .def("Qualifiers",
             (opencascade::handle<StepShape_HArray1OfValueQualifier> (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfValueQualifier> (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)() const>(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::Qualifiers),
             R"#(None)#" )
        .def("NbQualifiers",
             (Standard_Integer (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)() const) static_cast<Standard_Integer (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)() const>(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::NbQualifiers),
             R"#(None)#" )
        .def("SetQualifiers",
             (void (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)( const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) ) static_cast<void (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)( const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) >(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::SetQualifiers),
             R"#(None)#"  , py::arg("qualifiers"))
        .def("QualifiersValue",
             (StepShape_ValueQualifier (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)( const Standard_Integer  ) const) static_cast<StepShape_ValueQualifier (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)( const Standard_Integer  ) const>(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::QualifiersValue),
             R"#(None)#"  , py::arg("num"))
        .def("SetQualifiersValue",
             (void (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)( const Standard_Integer ,  const StepShape_ValueQualifier &  ) ) static_cast<void (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)( const Standard_Integer ,  const StepShape_ValueQualifier &  ) >(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::SetQualifiersValue),
             R"#(None)#"  , py::arg("num"),  py::arg("aqualifier"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::*)() const>(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_PlusMinusTolerance ,opencascade::handle<StepShape_PlusMinusTolerance>  , Standard_Transient >>(m.attr("StepShape_PlusMinusTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_PlusMinusTolerance::*)( const StepShape_ToleranceMethodDefinition & ,  const StepShape_DimensionalCharacteristic &  ) ) static_cast<void (StepShape_PlusMinusTolerance::*)( const StepShape_ToleranceMethodDefinition & ,  const StepShape_DimensionalCharacteristic &  ) >(&StepShape_PlusMinusTolerance::Init),
             R"#(None)#"  , py::arg("range"),  py::arg("toleranced_dimension"))
        .def("Range",
             (StepShape_ToleranceMethodDefinition (StepShape_PlusMinusTolerance::*)() const) static_cast<StepShape_ToleranceMethodDefinition (StepShape_PlusMinusTolerance::*)() const>(&StepShape_PlusMinusTolerance::Range),
             R"#(None)#" )
        .def("SetRange",
             (void (StepShape_PlusMinusTolerance::*)( const StepShape_ToleranceMethodDefinition &  ) ) static_cast<void (StepShape_PlusMinusTolerance::*)( const StepShape_ToleranceMethodDefinition &  ) >(&StepShape_PlusMinusTolerance::SetRange),
             R"#(None)#"  , py::arg("range"))
        .def("TolerancedDimension",
             (StepShape_DimensionalCharacteristic (StepShape_PlusMinusTolerance::*)() const) static_cast<StepShape_DimensionalCharacteristic (StepShape_PlusMinusTolerance::*)() const>(&StepShape_PlusMinusTolerance::TolerancedDimension),
             R"#(None)#" )
        .def("SetTolerancedDimension",
             (void (StepShape_PlusMinusTolerance::*)( const StepShape_DimensionalCharacteristic &  ) ) static_cast<void (StepShape_PlusMinusTolerance::*)( const StepShape_DimensionalCharacteristic &  ) >(&StepShape_PlusMinusTolerance::SetTolerancedDimension),
             R"#(None)#"  , py::arg("toleranced_dimension"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_PlusMinusTolerance::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_PlusMinusTolerance::*)() const>(&StepShape_PlusMinusTolerance::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_PlusMinusTolerance::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_PlusMinusTolerance::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_PrecisionQualifier ,opencascade::handle<StepShape_PrecisionQualifier>  , Standard_Transient >>(m.attr("StepShape_PrecisionQualifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_PrecisionQualifier::*)( const Standard_Integer  ) ) static_cast<void (StepShape_PrecisionQualifier::*)( const Standard_Integer  ) >(&StepShape_PrecisionQualifier::Init),
             R"#(None)#"  , py::arg("precision_value"))
        .def("PrecisionValue",
             (Standard_Integer (StepShape_PrecisionQualifier::*)() const) static_cast<Standard_Integer (StepShape_PrecisionQualifier::*)() const>(&StepShape_PrecisionQualifier::PrecisionValue),
             R"#(None)#" )
        .def("SetPrecisionValue",
             (void (StepShape_PrecisionQualifier::*)( const Standard_Integer  ) ) static_cast<void (StepShape_PrecisionQualifier::*)( const Standard_Integer  ) >(&StepShape_PrecisionQualifier::SetPrecisionValue),
             R"#(None)#"  , py::arg("precision_value"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_PrecisionQualifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_PrecisionQualifier::*)() const>(&StepShape_PrecisionQualifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_PrecisionQualifier::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_PrecisionQualifier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_QualifiedRepresentationItem ,opencascade::handle<StepShape_QualifiedRepresentationItem>  , StepRepr_RepresentationItem >>(m.attr("StepShape_QualifiedRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_QualifiedRepresentationItem::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) ) static_cast<void (StepShape_QualifiedRepresentationItem::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) >(&StepShape_QualifiedRepresentationItem::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("qualifiers"))
        .def("Qualifiers",
             (opencascade::handle<StepShape_HArray1OfValueQualifier> (StepShape_QualifiedRepresentationItem::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfValueQualifier> (StepShape_QualifiedRepresentationItem::*)() const>(&StepShape_QualifiedRepresentationItem::Qualifiers),
             R"#(None)#" )
        .def("NbQualifiers",
             (Standard_Integer (StepShape_QualifiedRepresentationItem::*)() const) static_cast<Standard_Integer (StepShape_QualifiedRepresentationItem::*)() const>(&StepShape_QualifiedRepresentationItem::NbQualifiers),
             R"#(None)#" )
        .def("SetQualifiers",
             (void (StepShape_QualifiedRepresentationItem::*)( const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) ) static_cast<void (StepShape_QualifiedRepresentationItem::*)( const opencascade::handle<StepShape_HArray1OfValueQualifier> &  ) >(&StepShape_QualifiedRepresentationItem::SetQualifiers),
             R"#(None)#"  , py::arg("qualifiers"))
        .def("QualifiersValue",
             (StepShape_ValueQualifier (StepShape_QualifiedRepresentationItem::*)( const Standard_Integer  ) const) static_cast<StepShape_ValueQualifier (StepShape_QualifiedRepresentationItem::*)( const Standard_Integer  ) const>(&StepShape_QualifiedRepresentationItem::QualifiersValue),
             R"#(None)#"  , py::arg("num"))
        .def("SetQualifiersValue",
             (void (StepShape_QualifiedRepresentationItem::*)( const Standard_Integer ,  const StepShape_ValueQualifier &  ) ) static_cast<void (StepShape_QualifiedRepresentationItem::*)( const Standard_Integer ,  const StepShape_ValueQualifier &  ) >(&StepShape_QualifiedRepresentationItem::SetQualifiersValue),
             R"#(None)#"  , py::arg("num"),  py::arg("aqualifier"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_QualifiedRepresentationItem::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_QualifiedRepresentationItem::*)() const>(&StepShape_QualifiedRepresentationItem::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_QualifiedRepresentationItem::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_QualifiedRepresentationItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ReversibleTopologyItem , shared_ptr<StepShape_ReversibleTopologyItem>  , StepData_SelectType >>(m.attr("StepShape_ReversibleTopologyItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_ReversibleTopologyItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepShape_ReversibleTopologyItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepShape_ReversibleTopologyItem::CaseNum),
             R"#(Recognizes a ReversibleTopologyItem Kind Entity that is : 1 -> Edge 2 -> Path 3 -> Face 4 -> FaceBound 5 -> ClosedShell 6 -> OpenShell 0 else)#"  , py::arg("ent"))
        .def("Edge",
             (opencascade::handle<StepShape_Edge> (StepShape_ReversibleTopologyItem::*)() const) static_cast<opencascade::handle<StepShape_Edge> (StepShape_ReversibleTopologyItem::*)() const>(&StepShape_ReversibleTopologyItem::Edge),
             R"#(returns Value as a Edge (Null if another type))#" )
        .def("Path",
             (opencascade::handle<StepShape_Path> (StepShape_ReversibleTopologyItem::*)() const) static_cast<opencascade::handle<StepShape_Path> (StepShape_ReversibleTopologyItem::*)() const>(&StepShape_ReversibleTopologyItem::Path),
             R"#(returns Value as a Path (Null if another type))#" )
        .def("Face",
             (opencascade::handle<StepShape_Face> (StepShape_ReversibleTopologyItem::*)() const) static_cast<opencascade::handle<StepShape_Face> (StepShape_ReversibleTopologyItem::*)() const>(&StepShape_ReversibleTopologyItem::Face),
             R"#(returns Value as a Face (Null if another type))#" )
        .def("FaceBound",
             (opencascade::handle<StepShape_FaceBound> (StepShape_ReversibleTopologyItem::*)() const) static_cast<opencascade::handle<StepShape_FaceBound> (StepShape_ReversibleTopologyItem::*)() const>(&StepShape_ReversibleTopologyItem::FaceBound),
             R"#(returns Value as a FaceBound (Null if another type))#" )
        .def("ClosedShell",
             (opencascade::handle<StepShape_ClosedShell> (StepShape_ReversibleTopologyItem::*)() const) static_cast<opencascade::handle<StepShape_ClosedShell> (StepShape_ReversibleTopologyItem::*)() const>(&StepShape_ReversibleTopologyItem::ClosedShell),
             R"#(returns Value as a ClosedShell (Null if another type))#" )
        .def("OpenShell",
             (opencascade::handle<StepShape_OpenShell> (StepShape_ReversibleTopologyItem::*)() const) static_cast<opencascade::handle<StepShape_OpenShell> (StepShape_ReversibleTopologyItem::*)() const>(&StepShape_ReversibleTopologyItem::OpenShell),
             R"#(returns Value as a OpenShell (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_RightAngularWedge ,opencascade::handle<StepShape_RightAngularWedge>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_RightAngularWedge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_RightAngularWedge::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Axis2Placement3d> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (StepShape_RightAngularWedge::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Axis2Placement3d> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&StepShape_RightAngularWedge::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aX"),  py::arg("aY"),  py::arg("aZ"),  py::arg("aLtx"))
        .def("SetPosition",
             (void (StepShape_RightAngularWedge::*)( const opencascade::handle<StepGeom_Axis2Placement3d> &  ) ) static_cast<void (StepShape_RightAngularWedge::*)( const opencascade::handle<StepGeom_Axis2Placement3d> &  ) >(&StepShape_RightAngularWedge::SetPosition),
             R"#(None)#"  , py::arg("aPosition"))
        .def("Position",
             (opencascade::handle<StepGeom_Axis2Placement3d> (StepShape_RightAngularWedge::*)() const) static_cast<opencascade::handle<StepGeom_Axis2Placement3d> (StepShape_RightAngularWedge::*)() const>(&StepShape_RightAngularWedge::Position),
             R"#(None)#" )
        .def("SetX",
             (void (StepShape_RightAngularWedge::*)( const Standard_Real  ) ) static_cast<void (StepShape_RightAngularWedge::*)( const Standard_Real  ) >(&StepShape_RightAngularWedge::SetX),
             R"#(None)#"  , py::arg("aX"))
        .def("X",
             (Standard_Real (StepShape_RightAngularWedge::*)() const) static_cast<Standard_Real (StepShape_RightAngularWedge::*)() const>(&StepShape_RightAngularWedge::X),
             R"#(None)#" )
        .def("SetY",
             (void (StepShape_RightAngularWedge::*)( const Standard_Real  ) ) static_cast<void (StepShape_RightAngularWedge::*)( const Standard_Real  ) >(&StepShape_RightAngularWedge::SetY),
             R"#(None)#"  , py::arg("aY"))
        .def("Y",
             (Standard_Real (StepShape_RightAngularWedge::*)() const) static_cast<Standard_Real (StepShape_RightAngularWedge::*)() const>(&StepShape_RightAngularWedge::Y),
             R"#(None)#" )
        .def("SetZ",
             (void (StepShape_RightAngularWedge::*)( const Standard_Real  ) ) static_cast<void (StepShape_RightAngularWedge::*)( const Standard_Real  ) >(&StepShape_RightAngularWedge::SetZ),
             R"#(None)#"  , py::arg("aZ"))
        .def("Z",
             (Standard_Real (StepShape_RightAngularWedge::*)() const) static_cast<Standard_Real (StepShape_RightAngularWedge::*)() const>(&StepShape_RightAngularWedge::Z),
             R"#(None)#" )
        .def("SetLtx",
             (void (StepShape_RightAngularWedge::*)( const Standard_Real  ) ) static_cast<void (StepShape_RightAngularWedge::*)( const Standard_Real  ) >(&StepShape_RightAngularWedge::SetLtx),
             R"#(None)#"  , py::arg("aLtx"))
        .def("Ltx",
             (Standard_Real (StepShape_RightAngularWedge::*)() const) static_cast<Standard_Real (StepShape_RightAngularWedge::*)() const>(&StepShape_RightAngularWedge::Ltx),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_RightAngularWedge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_RightAngularWedge::*)() const>(&StepShape_RightAngularWedge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_RightAngularWedge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_RightAngularWedge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_RightCircularCone ,opencascade::handle<StepShape_RightCircularCone>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_RightCircularCone"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_RightCircularCone::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Axis1Placement> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (StepShape_RightCircularCone::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Axis1Placement> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&StepShape_RightCircularCone::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aHeight"),  py::arg("aRadius"),  py::arg("aSemiAngle"))
        .def("SetPosition",
             (void (StepShape_RightCircularCone::*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) ) static_cast<void (StepShape_RightCircularCone::*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) >(&StepShape_RightCircularCone::SetPosition),
             R"#(None)#"  , py::arg("aPosition"))
        .def("Position",
             (opencascade::handle<StepGeom_Axis1Placement> (StepShape_RightCircularCone::*)() const) static_cast<opencascade::handle<StepGeom_Axis1Placement> (StepShape_RightCircularCone::*)() const>(&StepShape_RightCircularCone::Position),
             R"#(None)#" )
        .def("SetHeight",
             (void (StepShape_RightCircularCone::*)( const Standard_Real  ) ) static_cast<void (StepShape_RightCircularCone::*)( const Standard_Real  ) >(&StepShape_RightCircularCone::SetHeight),
             R"#(None)#"  , py::arg("aHeight"))
        .def("Height",
             (Standard_Real (StepShape_RightCircularCone::*)() const) static_cast<Standard_Real (StepShape_RightCircularCone::*)() const>(&StepShape_RightCircularCone::Height),
             R"#(None)#" )
        .def("SetRadius",
             (void (StepShape_RightCircularCone::*)( const Standard_Real  ) ) static_cast<void (StepShape_RightCircularCone::*)( const Standard_Real  ) >(&StepShape_RightCircularCone::SetRadius),
             R"#(None)#"  , py::arg("aRadius"))
        .def("Radius",
             (Standard_Real (StepShape_RightCircularCone::*)() const) static_cast<Standard_Real (StepShape_RightCircularCone::*)() const>(&StepShape_RightCircularCone::Radius),
             R"#(None)#" )
        .def("SetSemiAngle",
             (void (StepShape_RightCircularCone::*)( const Standard_Real  ) ) static_cast<void (StepShape_RightCircularCone::*)( const Standard_Real  ) >(&StepShape_RightCircularCone::SetSemiAngle),
             R"#(None)#"  , py::arg("aSemiAngle"))
        .def("SemiAngle",
             (Standard_Real (StepShape_RightCircularCone::*)() const) static_cast<Standard_Real (StepShape_RightCircularCone::*)() const>(&StepShape_RightCircularCone::SemiAngle),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_RightCircularCone::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_RightCircularCone::*)() const>(&StepShape_RightCircularCone::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_RightCircularCone::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_RightCircularCone::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_RightCircularCylinder ,opencascade::handle<StepShape_RightCircularCylinder>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_RightCircularCylinder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_RightCircularCylinder::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Axis1Placement> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (StepShape_RightCircularCylinder::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Axis1Placement> & ,  const Standard_Real ,  const Standard_Real  ) >(&StepShape_RightCircularCylinder::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aHeight"),  py::arg("aRadius"))
        .def("SetPosition",
             (void (StepShape_RightCircularCylinder::*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) ) static_cast<void (StepShape_RightCircularCylinder::*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) >(&StepShape_RightCircularCylinder::SetPosition),
             R"#(None)#"  , py::arg("aPosition"))
        .def("Position",
             (opencascade::handle<StepGeom_Axis1Placement> (StepShape_RightCircularCylinder::*)() const) static_cast<opencascade::handle<StepGeom_Axis1Placement> (StepShape_RightCircularCylinder::*)() const>(&StepShape_RightCircularCylinder::Position),
             R"#(None)#" )
        .def("SetHeight",
             (void (StepShape_RightCircularCylinder::*)( const Standard_Real  ) ) static_cast<void (StepShape_RightCircularCylinder::*)( const Standard_Real  ) >(&StepShape_RightCircularCylinder::SetHeight),
             R"#(None)#"  , py::arg("aHeight"))
        .def("Height",
             (Standard_Real (StepShape_RightCircularCylinder::*)() const) static_cast<Standard_Real (StepShape_RightCircularCylinder::*)() const>(&StepShape_RightCircularCylinder::Height),
             R"#(None)#" )
        .def("SetRadius",
             (void (StepShape_RightCircularCylinder::*)( const Standard_Real  ) ) static_cast<void (StepShape_RightCircularCylinder::*)( const Standard_Real  ) >(&StepShape_RightCircularCylinder::SetRadius),
             R"#(None)#"  , py::arg("aRadius"))
        .def("Radius",
             (Standard_Real (StepShape_RightCircularCylinder::*)() const) static_cast<Standard_Real (StepShape_RightCircularCylinder::*)() const>(&StepShape_RightCircularCylinder::Radius),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_RightCircularCylinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_RightCircularCylinder::*)() const>(&StepShape_RightCircularCylinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_RightCircularCylinder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_RightCircularCylinder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShapeDefinitionRepresentation ,opencascade::handle<StepShape_ShapeDefinitionRepresentation>  , StepRepr_PropertyDefinitionRepresentation >>(m.attr("StepShape_ShapeDefinitionRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ShapeDefinitionRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShapeDimensionRepresentationItem , shared_ptr<StepShape_ShapeDimensionRepresentationItem>  , StepData_SelectType >>(m.attr("StepShape_ShapeDimensionRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_ShapeDimensionRepresentationItem::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepShape_ShapeDimensionRepresentationItem::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepShape_ShapeDimensionRepresentationItem::CaseNum),
             R"#(Recognizes a ShapeDimensionRepresentationItem Kind Entity that is : 1 -> CompoundRepresentationItem 2 -> DescriptiveRepresentationItem 3 -> MeasureRepresentationItem 4 -> Placement 0 else)#"  , py::arg("ent"))
        .def("CompoundRepresentationItem",
             (opencascade::handle<StepRepr_CompoundRepresentationItem> (StepShape_ShapeDimensionRepresentationItem::*)() const) static_cast<opencascade::handle<StepRepr_CompoundRepresentationItem> (StepShape_ShapeDimensionRepresentationItem::*)() const>(&StepShape_ShapeDimensionRepresentationItem::CompoundRepresentationItem),
             R"#(returns Value as a CompoundRepresentationItem (Null if another type))#" )
        .def("DescriptiveRepresentationItem",
             (opencascade::handle<StepRepr_DescriptiveRepresentationItem> (StepShape_ShapeDimensionRepresentationItem::*)() const) static_cast<opencascade::handle<StepRepr_DescriptiveRepresentationItem> (StepShape_ShapeDimensionRepresentationItem::*)() const>(&StepShape_ShapeDimensionRepresentationItem::DescriptiveRepresentationItem),
             R"#(returns Value as a DescriptiveRepresentationItem (Null if another type))#" )
        .def("MeasureRepresentationItem",
             (opencascade::handle<StepRepr_MeasureRepresentationItem> (StepShape_ShapeDimensionRepresentationItem::*)() const) static_cast<opencascade::handle<StepRepr_MeasureRepresentationItem> (StepShape_ShapeDimensionRepresentationItem::*)() const>(&StepShape_ShapeDimensionRepresentationItem::MeasureRepresentationItem),
             R"#(returns Value as a MeasureRepresentationItem (Null if another type))#" )
        .def("Placement",
             (opencascade::handle<StepGeom_Placement> (StepShape_ShapeDimensionRepresentationItem::*)() const) static_cast<opencascade::handle<StepGeom_Placement> (StepShape_ShapeDimensionRepresentationItem::*)() const>(&StepShape_ShapeDimensionRepresentationItem::Placement),
             R"#(returns Value as a Placement (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShapeRepresentation ,opencascade::handle<StepShape_ShapeRepresentation>  , StepRepr_Representation >>(m.attr("StepShape_ShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Shell , shared_ptr<StepShape_Shell>  , StepData_SelectType >>(m.attr("StepShape_Shell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_Shell::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepShape_Shell::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepShape_Shell::CaseNum),
             R"#(Recognizes a Shell Kind Entity that is : 1 -> OpenShell 2 -> ClosedShell 0 else)#"  , py::arg("ent"))
        .def("OpenShell",
             (opencascade::handle<StepShape_OpenShell> (StepShape_Shell::*)() const) static_cast<opencascade::handle<StepShape_OpenShell> (StepShape_Shell::*)() const>(&StepShape_Shell::OpenShell),
             R"#(returns Value as a OpenShell (Null if another type))#" )
        .def("ClosedShell",
             (opencascade::handle<StepShape_ClosedShell> (StepShape_Shell::*)() const) static_cast<opencascade::handle<StepShape_ClosedShell> (StepShape_Shell::*)() const>(&StepShape_Shell::ClosedShell),
             R"#(returns Value as a ClosedShell (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShellBasedSurfaceModel ,opencascade::handle<StepShape_ShellBasedSurfaceModel>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_ShellBasedSurfaceModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ShellBasedSurfaceModel::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfShell> &  ) ) static_cast<void (StepShape_ShellBasedSurfaceModel::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfShell> &  ) >(&StepShape_ShellBasedSurfaceModel::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSbsmBoundary"))
        .def("SetSbsmBoundary",
             (void (StepShape_ShellBasedSurfaceModel::*)( const opencascade::handle<StepShape_HArray1OfShell> &  ) ) static_cast<void (StepShape_ShellBasedSurfaceModel::*)( const opencascade::handle<StepShape_HArray1OfShell> &  ) >(&StepShape_ShellBasedSurfaceModel::SetSbsmBoundary),
             R"#(None)#"  , py::arg("aSbsmBoundary"))
        .def("SbsmBoundary",
             (opencascade::handle<StepShape_HArray1OfShell> (StepShape_ShellBasedSurfaceModel::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfShell> (StepShape_ShellBasedSurfaceModel::*)() const>(&StepShape_ShellBasedSurfaceModel::SbsmBoundary),
             R"#(None)#" )
        .def("SbsmBoundaryValue",
             (StepShape_Shell (StepShape_ShellBasedSurfaceModel::*)( const Standard_Integer  ) const) static_cast<StepShape_Shell (StepShape_ShellBasedSurfaceModel::*)( const Standard_Integer  ) const>(&StepShape_ShellBasedSurfaceModel::SbsmBoundaryValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbSbsmBoundary",
             (Standard_Integer (StepShape_ShellBasedSurfaceModel::*)() const) static_cast<Standard_Integer (StepShape_ShellBasedSurfaceModel::*)() const>(&StepShape_ShellBasedSurfaceModel::NbSbsmBoundary),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ShellBasedSurfaceModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ShellBasedSurfaceModel::*)() const>(&StepShape_ShellBasedSurfaceModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ShellBasedSurfaceModel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ShellBasedSurfaceModel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SolidModel ,opencascade::handle<StepShape_SolidModel>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_SolidModel"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_SolidModel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Sphere ,opencascade::handle<StepShape_Sphere>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_Sphere"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_Sphere::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Real ,  const opencascade::handle<StepGeom_Point> &  ) ) static_cast<void (StepShape_Sphere::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Real ,  const opencascade::handle<StepGeom_Point> &  ) >(&StepShape_Sphere::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aRadius"),  py::arg("aCentre"))
        .def("SetRadius",
             (void (StepShape_Sphere::*)( const Standard_Real  ) ) static_cast<void (StepShape_Sphere::*)( const Standard_Real  ) >(&StepShape_Sphere::SetRadius),
             R"#(None)#"  , py::arg("aRadius"))
        .def("Radius",
             (Standard_Real (StepShape_Sphere::*)() const) static_cast<Standard_Real (StepShape_Sphere::*)() const>(&StepShape_Sphere::Radius),
             R"#(None)#" )
        .def("SetCentre",
             (void (StepShape_Sphere::*)( const opencascade::handle<StepGeom_Point> &  ) ) static_cast<void (StepShape_Sphere::*)( const opencascade::handle<StepGeom_Point> &  ) >(&StepShape_Sphere::SetCentre),
             R"#(None)#"  , py::arg("aCentre"))
        .def("Centre",
             (opencascade::handle<StepGeom_Point> (StepShape_Sphere::*)() const) static_cast<opencascade::handle<StepGeom_Point> (StepShape_Sphere::*)() const>(&StepShape_Sphere::Centre),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Sphere::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Sphere::*)() const>(&StepShape_Sphere::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Sphere::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_Sphere::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SurfaceModel , shared_ptr<StepShape_SurfaceModel>  , StepData_SelectType >>(m.attr("StepShape_SurfaceModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_SurfaceModel::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepShape_SurfaceModel::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepShape_SurfaceModel::CaseNum),
             R"#(Recognizes a SurfaceModel Kind Entity that is : 1 -> ShellBasedSurfaceModel 2 -> FaceBasedSurfaceModel 0 else)#"  , py::arg("ent"))
        .def("ShellBasedSurfaceModel",
             (opencascade::handle<StepShape_ShellBasedSurfaceModel> (StepShape_SurfaceModel::*)() const) static_cast<opencascade::handle<StepShape_ShellBasedSurfaceModel> (StepShape_SurfaceModel::*)() const>(&StepShape_SurfaceModel::ShellBasedSurfaceModel),
             R"#(returns Value as a ShellBasedSurfaceModel (Null if another type))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ToleranceMethodDefinition , shared_ptr<StepShape_ToleranceMethodDefinition>  , StepData_SelectType >>(m.attr("StepShape_ToleranceMethodDefinition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_ToleranceMethodDefinition::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepShape_ToleranceMethodDefinition::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepShape_ToleranceMethodDefinition::CaseNum),
             R"#(Recognizes a kind of ValueQualifier Select Type : 1 -> ToleranceValue from StepShape 2 -> LimitsAndFits from StepShape)#"  , py::arg("ent"))
        .def("ToleranceValue",
             (opencascade::handle<StepShape_ToleranceValue> (StepShape_ToleranceMethodDefinition::*)() const) static_cast<opencascade::handle<StepShape_ToleranceValue> (StepShape_ToleranceMethodDefinition::*)() const>(&StepShape_ToleranceMethodDefinition::ToleranceValue),
             R"#(Returns Value as ToleranceValue)#" )
        .def("LimitsAndFits",
             (opencascade::handle<StepShape_LimitsAndFits> (StepShape_ToleranceMethodDefinition::*)() const) static_cast<opencascade::handle<StepShape_LimitsAndFits> (StepShape_ToleranceMethodDefinition::*)() const>(&StepShape_ToleranceMethodDefinition::LimitsAndFits),
             R"#(Returns Value as LimitsAndFits)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ToleranceValue ,opencascade::handle<StepShape_ToleranceValue>  , Standard_Transient >>(m.attr("StepShape_ToleranceValue"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ToleranceValue::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (StepShape_ToleranceValue::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> &  ) >(&StepShape_ToleranceValue::Init),
             R"#(None)#"  , py::arg("lower_bound"),  py::arg("upper_bound"))
        .def("LowerBound",
             (opencascade::handle<Standard_Transient> (StepShape_ToleranceValue::*)() const) static_cast<opencascade::handle<Standard_Transient> (StepShape_ToleranceValue::*)() const>(&StepShape_ToleranceValue::LowerBound),
             R"#(None)#" )
        .def("SetLowerBound",
             (void (StepShape_ToleranceValue::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (StepShape_ToleranceValue::*)( const opencascade::handle<Standard_Transient> &  ) >(&StepShape_ToleranceValue::SetLowerBound),
             R"#(None)#"  , py::arg("lower_bound"))
        .def("UpperBound",
             (opencascade::handle<Standard_Transient> (StepShape_ToleranceValue::*)() const) static_cast<opencascade::handle<Standard_Transient> (StepShape_ToleranceValue::*)() const>(&StepShape_ToleranceValue::UpperBound),
             R"#(None)#" )
        .def("SetUpperBound",
             (void (StepShape_ToleranceValue::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (StepShape_ToleranceValue::*)( const opencascade::handle<Standard_Transient> &  ) >(&StepShape_ToleranceValue::SetUpperBound),
             R"#(None)#"  , py::arg("upper_bound"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ToleranceValue::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ToleranceValue::*)() const>(&StepShape_ToleranceValue::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ToleranceValue::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ToleranceValue::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_TopologicalRepresentationItem ,opencascade::handle<StepShape_TopologicalRepresentationItem>  , StepRepr_RepresentationItem >>(m.attr("StepShape_TopologicalRepresentationItem"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_TopologicalRepresentationItem::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Torus ,opencascade::handle<StepShape_Torus>  , StepGeom_GeometricRepresentationItem >>(m.attr("StepShape_Torus"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_Torus::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Axis1Placement> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (StepShape_Torus::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Axis1Placement> & ,  const Standard_Real ,  const Standard_Real  ) >(&StepShape_Torus::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPosition"),  py::arg("aMajorRadius"),  py::arg("aMinorRadius"))
        .def("SetPosition",
             (void (StepShape_Torus::*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) ) static_cast<void (StepShape_Torus::*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) >(&StepShape_Torus::SetPosition),
             R"#(None)#"  , py::arg("aPosition"))
        .def("Position",
             (opencascade::handle<StepGeom_Axis1Placement> (StepShape_Torus::*)() const) static_cast<opencascade::handle<StepGeom_Axis1Placement> (StepShape_Torus::*)() const>(&StepShape_Torus::Position),
             R"#(None)#" )
        .def("SetMajorRadius",
             (void (StepShape_Torus::*)( const Standard_Real  ) ) static_cast<void (StepShape_Torus::*)( const Standard_Real  ) >(&StepShape_Torus::SetMajorRadius),
             R"#(None)#"  , py::arg("aMajorRadius"))
        .def("MajorRadius",
             (Standard_Real (StepShape_Torus::*)() const) static_cast<Standard_Real (StepShape_Torus::*)() const>(&StepShape_Torus::MajorRadius),
             R"#(None)#" )
        .def("SetMinorRadius",
             (void (StepShape_Torus::*)( const Standard_Real  ) ) static_cast<void (StepShape_Torus::*)( const Standard_Real  ) >(&StepShape_Torus::SetMinorRadius),
             R"#(None)#"  , py::arg("aMinorRadius"))
        .def("MinorRadius",
             (Standard_Real (StepShape_Torus::*)() const) static_cast<Standard_Real (StepShape_Torus::*)() const>(&StepShape_Torus::MinorRadius),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Torus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Torus::*)() const>(&StepShape_Torus::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Torus::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_Torus::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_TypeQualifier ,opencascade::handle<StepShape_TypeQualifier>  , Standard_Transient >>(m.attr("StepShape_TypeQualifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_TypeQualifier::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_TypeQualifier::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_TypeQualifier::Init),
             R"#(None)#"  , py::arg("name"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (StepShape_TypeQualifier::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (StepShape_TypeQualifier::*)() const>(&StepShape_TypeQualifier::Name),
             R"#(None)#" )
        .def("SetName",
             (void (StepShape_TypeQualifier::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_TypeQualifier::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_TypeQualifier::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_TypeQualifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_TypeQualifier::*)() const>(&StepShape_TypeQualifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_TypeQualifier::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_TypeQualifier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ValueFormatTypeQualifier ,opencascade::handle<StepShape_ValueFormatTypeQualifier>  , Standard_Transient >>(m.attr("StepShape_ValueFormatTypeQualifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ValueFormatTypeQualifier::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_ValueFormatTypeQualifier::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_ValueFormatTypeQualifier::Init),
             R"#(Init all field own and inherited)#"  , py::arg("theFormatType"))
        .def("FormatType",
             (opencascade::handle<TCollection_HAsciiString> (StepShape_ValueFormatTypeQualifier::*)() ) static_cast<opencascade::handle<TCollection_HAsciiString> (StepShape_ValueFormatTypeQualifier::*)() >(&StepShape_ValueFormatTypeQualifier::FormatType),
             R"#(Returns field FormatType)#" )
        .def("SetFormatType",
             (void (StepShape_ValueFormatTypeQualifier::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (StepShape_ValueFormatTypeQualifier::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&StepShape_ValueFormatTypeQualifier::SetFormatType),
             R"#(Set field FormatType)#"  , py::arg("theFormatType"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ValueFormatTypeQualifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ValueFormatTypeQualifier::*)() const>(&StepShape_ValueFormatTypeQualifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ValueFormatTypeQualifier::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ValueFormatTypeQualifier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ValueQualifier , shared_ptr<StepShape_ValueQualifier>  , StepData_SelectType >>(m.attr("StepShape_ValueQualifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("CaseNum",
             (Standard_Integer (StepShape_ValueQualifier::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (StepShape_ValueQualifier::*)( const opencascade::handle<Standard_Transient> &  ) const>(&StepShape_ValueQualifier::CaseNum),
             R"#(Recognizes a kind of ValueQualifier Select Type : 1 -> PrecisionQualifier from StepShape 2 -> TypeQualifier from StepShape 3 -> UnceraintyQualifier .. not yet implemented 4 -> ValueFormatTypeQualifier)#"  , py::arg("ent"))
        .def("PrecisionQualifier",
             (opencascade::handle<StepShape_PrecisionQualifier> (StepShape_ValueQualifier::*)() const) static_cast<opencascade::handle<StepShape_PrecisionQualifier> (StepShape_ValueQualifier::*)() const>(&StepShape_ValueQualifier::PrecisionQualifier),
             R"#(Returns Value as PrecisionQualifier)#" )
        .def("TypeQualifier",
             (opencascade::handle<StepShape_TypeQualifier> (StepShape_ValueQualifier::*)() const) static_cast<opencascade::handle<StepShape_TypeQualifier> (StepShape_ValueQualifier::*)() const>(&StepShape_ValueQualifier::TypeQualifier),
             R"#(Returns Value as TypeQualifier)#" )
        .def("ValueFormatTypeQualifier",
             (opencascade::handle<StepShape_ValueFormatTypeQualifier> (StepShape_ValueQualifier::*)() const) static_cast<opencascade::handle<StepShape_ValueFormatTypeQualifier> (StepShape_ValueQualifier::*)() const>(&StepShape_ValueQualifier::ValueFormatTypeQualifier),
             R"#(Returns Value as ValueFormatTypeQualifier)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_AdvancedBrepShapeRepresentation ,opencascade::handle<StepShape_AdvancedBrepShapeRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_AdvancedBrepShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_AdvancedBrepShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_AngularLocation ,opencascade::handle<StepShape_AngularLocation>  , StepShape_DimensionalLocation >>(m.attr("StepShape_AngularLocation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_AngularLocation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<StepRepr_ShapeAspect> & ,  const StepShape_AngleRelator  ) ) static_cast<void (StepShape_AngularLocation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<StepRepr_ShapeAspect> & ,  const StepShape_AngleRelator  ) >(&StepShape_AngularLocation::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aShapeAspectRelationship_Name"),  py::arg("hasShapeAspectRelationship_Description"),  py::arg("aShapeAspectRelationship_Description"),  py::arg("aShapeAspectRelationship_RelatingShapeAspect"),  py::arg("aShapeAspectRelationship_RelatedShapeAspect"),  py::arg("aAngleSelection"))
        .def("AngleSelection",
             (StepShape_AngleRelator (StepShape_AngularLocation::*)() const) static_cast<StepShape_AngleRelator (StepShape_AngularLocation::*)() const>(&StepShape_AngularLocation::AngleSelection),
             R"#(Returns field AngleSelection)#" )
        .def("SetAngleSelection",
             (void (StepShape_AngularLocation::*)( const StepShape_AngleRelator  ) ) static_cast<void (StepShape_AngularLocation::*)( const StepShape_AngleRelator  ) >(&StepShape_AngularLocation::SetAngleSelection),
             R"#(Set field AngleSelection)#"  , py::arg("AngleSelection"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_AngularLocation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_AngularLocation::*)() const>(&StepShape_AngularLocation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_AngularLocation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_AngularLocation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_AngularSize ,opencascade::handle<StepShape_AngularSize>  , StepShape_DimensionalSize >>(m.attr("StepShape_AngularSize"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_AngularSize::*)( const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const StepShape_AngleRelator  ) ) static_cast<void (StepShape_AngularSize::*)( const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const StepShape_AngleRelator  ) >(&StepShape_AngularSize::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDimensionalSize_AppliesTo"),  py::arg("aDimensionalSize_Name"),  py::arg("aAngleSelection"))
        .def("AngleSelection",
             (StepShape_AngleRelator (StepShape_AngularSize::*)() const) static_cast<StepShape_AngleRelator (StepShape_AngularSize::*)() const>(&StepShape_AngularSize::AngleSelection),
             R"#(Returns field AngleSelection)#" )
        .def("SetAngleSelection",
             (void (StepShape_AngularSize::*)( const StepShape_AngleRelator  ) ) static_cast<void (StepShape_AngularSize::*)( const StepShape_AngleRelator  ) >(&StepShape_AngularSize::SetAngleSelection),
             R"#(Set field AngleSelection)#"  , py::arg("AngleSelection"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_AngularSize::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_AngularSize::*)() const>(&StepShape_AngularSize::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_AngularSize::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_AngularSize::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_BoxedHalfSpace ,opencascade::handle<StepShape_BoxedHalfSpace>  , StepShape_HalfSpaceSolid >>(m.attr("StepShape_BoxedHalfSpace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_BoxedHalfSpace::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Surface> & ,  const Standard_Boolean ,  const opencascade::handle<StepShape_BoxDomain> &  ) ) static_cast<void (StepShape_BoxedHalfSpace::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Surface> & ,  const Standard_Boolean ,  const opencascade::handle<StepShape_BoxDomain> &  ) >(&StepShape_BoxedHalfSpace::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBaseSurface"),  py::arg("aAgreementFlag"),  py::arg("aEnclosure"))
        .def("SetEnclosure",
             (void (StepShape_BoxedHalfSpace::*)( const opencascade::handle<StepShape_BoxDomain> &  ) ) static_cast<void (StepShape_BoxedHalfSpace::*)( const opencascade::handle<StepShape_BoxDomain> &  ) >(&StepShape_BoxedHalfSpace::SetEnclosure),
             R"#(None)#"  , py::arg("aEnclosure"))
        .def("Enclosure",
             (opencascade::handle<StepShape_BoxDomain> (StepShape_BoxedHalfSpace::*)() const) static_cast<opencascade::handle<StepShape_BoxDomain> (StepShape_BoxedHalfSpace::*)() const>(&StepShape_BoxedHalfSpace::Enclosure),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_BoxedHalfSpace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_BoxedHalfSpace::*)() const>(&StepShape_BoxedHalfSpace::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_BoxedHalfSpace::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_BoxedHalfSpace::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_CompoundShapeRepresentation ,opencascade::handle<StepShape_CompoundShapeRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_CompoundShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_CompoundShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ConnectedEdgeSet ,opencascade::handle<StepShape_ConnectedEdgeSet>  , StepShape_TopologicalRepresentationItem >>(m.attr("StepShape_ConnectedEdgeSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ConnectedEdgeSet::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfEdge> &  ) ) static_cast<void (StepShape_ConnectedEdgeSet::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfEdge> &  ) >(&StepShape_ConnectedEdgeSet::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aCesEdges"))
        .def("CesEdges",
             (opencascade::handle<StepShape_HArray1OfEdge> (StepShape_ConnectedEdgeSet::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfEdge> (StepShape_ConnectedEdgeSet::*)() const>(&StepShape_ConnectedEdgeSet::CesEdges),
             R"#(Returns field CesEdges)#" )
        .def("SetCesEdges",
             (void (StepShape_ConnectedEdgeSet::*)( const opencascade::handle<StepShape_HArray1OfEdge> &  ) ) static_cast<void (StepShape_ConnectedEdgeSet::*)( const opencascade::handle<StepShape_HArray1OfEdge> &  ) >(&StepShape_ConnectedEdgeSet::SetCesEdges),
             R"#(Set field CesEdges)#"  , py::arg("CesEdges"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ConnectedEdgeSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ConnectedEdgeSet::*)() const>(&StepShape_ConnectedEdgeSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ConnectedEdgeSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ConnectedEdgeSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ConnectedFaceSet ,opencascade::handle<StepShape_ConnectedFaceSet>  , StepShape_TopologicalRepresentationItem >>(m.attr("StepShape_ConnectedFaceSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ConnectedFaceSet::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfFace> &  ) ) static_cast<void (StepShape_ConnectedFaceSet::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfFace> &  ) >(&StepShape_ConnectedFaceSet::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aCfsFaces"))
        .def("SetCfsFaces",
             (void (StepShape_ConnectedFaceSet::*)( const opencascade::handle<StepShape_HArray1OfFace> &  ) ) static_cast<void (StepShape_ConnectedFaceSet::*)( const opencascade::handle<StepShape_HArray1OfFace> &  ) >(&StepShape_ConnectedFaceSet::SetCfsFaces),
             R"#(None)#"  , py::arg("aCfsFaces"))
        .def("CfsFaces",
             (opencascade::handle<StepShape_HArray1OfFace> (StepShape_ConnectedFaceSet::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfFace> (StepShape_ConnectedFaceSet::*)() const>(&StepShape_ConnectedFaceSet::CfsFaces),
             R"#(None)#" )
        .def("CfsFacesValue",
             (opencascade::handle<StepShape_Face> (StepShape_ConnectedFaceSet::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_Face> (StepShape_ConnectedFaceSet::*)( const Standard_Integer  ) const>(&StepShape_ConnectedFaceSet::CfsFacesValue),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ConnectedFaceSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_CsgShapeRepresentation ,opencascade::handle<StepShape_CsgShapeRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_CsgShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_CsgShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_CsgSolid ,opencascade::handle<StepShape_CsgSolid>  , StepShape_SolidModel >>(m.attr("StepShape_CsgSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_CsgSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const StepShape_CsgSelect &  ) ) static_cast<void (StepShape_CsgSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const StepShape_CsgSelect &  ) >(&StepShape_CsgSolid::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aTreeRootExpression"))
        .def("SetTreeRootExpression",
             (void (StepShape_CsgSolid::*)( const StepShape_CsgSelect &  ) ) static_cast<void (StepShape_CsgSolid::*)( const StepShape_CsgSelect &  ) >(&StepShape_CsgSolid::SetTreeRootExpression),
             R"#(None)#"  , py::arg("aTreeRootExpression"))
        .def("TreeRootExpression",
             (StepShape_CsgSelect (StepShape_CsgSolid::*)() const) static_cast<StepShape_CsgSelect (StepShape_CsgSolid::*)() const>(&StepShape_CsgSolid::TreeRootExpression),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_CsgSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_CsgSolid::*)() const>(&StepShape_CsgSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_CsgSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_CsgSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalLocationWithPath ,opencascade::handle<StepShape_DimensionalLocationWithPath>  , StepShape_DimensionalLocation >>(m.attr("StepShape_DimensionalLocationWithPath"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_DimensionalLocationWithPath::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<StepRepr_ShapeAspect> &  ) ) static_cast<void (StepShape_DimensionalLocationWithPath::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<StepRepr_ShapeAspect> &  ) >(&StepShape_DimensionalLocationWithPath::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aShapeAspectRelationship_Name"),  py::arg("hasShapeAspectRelationship_Description"),  py::arg("aShapeAspectRelationship_Description"),  py::arg("aShapeAspectRelationship_RelatingShapeAspect"),  py::arg("aShapeAspectRelationship_RelatedShapeAspect"),  py::arg("aPath"))
        .def("Path",
             (opencascade::handle<StepRepr_ShapeAspect> (StepShape_DimensionalLocationWithPath::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepShape_DimensionalLocationWithPath::*)() const>(&StepShape_DimensionalLocationWithPath::Path),
             R"#(Returns field Path)#" )
        .def("SetPath",
             (void (StepShape_DimensionalLocationWithPath::*)( const opencascade::handle<StepRepr_ShapeAspect> &  ) ) static_cast<void (StepShape_DimensionalLocationWithPath::*)( const opencascade::handle<StepRepr_ShapeAspect> &  ) >(&StepShape_DimensionalLocationWithPath::SetPath),
             R"#(Set field Path)#"  , py::arg("Path"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DimensionalLocationWithPath::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DimensionalLocationWithPath::*)() const>(&StepShape_DimensionalLocationWithPath::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DimensionalLocationWithPath::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_DimensionalLocationWithPath::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DimensionalSizeWithPath ,opencascade::handle<StepShape_DimensionalSizeWithPath>  , StepShape_DimensionalSize >>(m.attr("StepShape_DimensionalSizeWithPath"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_DimensionalSizeWithPath::*)( const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_ShapeAspect> &  ) ) static_cast<void (StepShape_DimensionalSizeWithPath::*)( const opencascade::handle<StepRepr_ShapeAspect> & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_ShapeAspect> &  ) >(&StepShape_DimensionalSizeWithPath::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aDimensionalSize_AppliesTo"),  py::arg("aDimensionalSize_Name"),  py::arg("aPath"))
        .def("Path",
             (opencascade::handle<StepRepr_ShapeAspect> (StepShape_DimensionalSizeWithPath::*)() const) static_cast<opencascade::handle<StepRepr_ShapeAspect> (StepShape_DimensionalSizeWithPath::*)() const>(&StepShape_DimensionalSizeWithPath::Path),
             R"#(Returns field Path)#" )
        .def("SetPath",
             (void (StepShape_DimensionalSizeWithPath::*)( const opencascade::handle<StepRepr_ShapeAspect> &  ) ) static_cast<void (StepShape_DimensionalSizeWithPath::*)( const opencascade::handle<StepRepr_ShapeAspect> &  ) >(&StepShape_DimensionalSizeWithPath::SetPath),
             R"#(Set field Path)#"  , py::arg("Path"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_DimensionalSizeWithPath::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_DimensionalSizeWithPath::*)() const>(&StepShape_DimensionalSizeWithPath::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_DimensionalSizeWithPath::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_DimensionalSizeWithPath::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_DirectedDimensionalLocation ,opencascade::handle<StepShape_DirectedDimensionalLocation>  , StepShape_DimensionalLocation >>(m.attr("StepShape_DirectedDimensionalLocation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_DirectedDimensionalLocation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Edge ,opencascade::handle<StepShape_Edge>  , StepShape_TopologicalRepresentationItem >>(m.attr("StepShape_Edge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_Edge::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Vertex> & ,  const opencascade::handle<StepShape_Vertex> &  ) ) static_cast<void (StepShape_Edge::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Vertex> & ,  const opencascade::handle<StepShape_Vertex> &  ) >(&StepShape_Edge::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aEdgeStart"),  py::arg("aEdgeEnd"))
        .def("SetEdgeStart",
             (void (StepShape_Edge::*)( const opencascade::handle<StepShape_Vertex> &  ) ) static_cast<void (StepShape_Edge::*)( const opencascade::handle<StepShape_Vertex> &  ) >(&StepShape_Edge::SetEdgeStart),
             R"#(None)#"  , py::arg("aEdgeStart"))
        .def("EdgeStart",
             (opencascade::handle<StepShape_Vertex> (StepShape_Edge::*)() const) static_cast<opencascade::handle<StepShape_Vertex> (StepShape_Edge::*)() const>(&StepShape_Edge::EdgeStart),
             R"#(None)#" )
        .def("SetEdgeEnd",
             (void (StepShape_Edge::*)( const opencascade::handle<StepShape_Vertex> &  ) ) static_cast<void (StepShape_Edge::*)( const opencascade::handle<StepShape_Vertex> &  ) >(&StepShape_Edge::SetEdgeEnd),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_Edge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_EdgeBasedWireframeShapeRepresentation ,opencascade::handle<StepShape_EdgeBasedWireframeShapeRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_EdgeBasedWireframeShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_EdgeBasedWireframeShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Face ,opencascade::handle<StepShape_Face>  , StepShape_TopologicalRepresentationItem >>(m.attr("StepShape_Face"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_Face::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfFaceBound> &  ) ) static_cast<void (StepShape_Face::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfFaceBound> &  ) >(&StepShape_Face::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBounds"))
        .def("SetBounds",
             (void (StepShape_Face::*)( const opencascade::handle<StepShape_HArray1OfFaceBound> &  ) ) static_cast<void (StepShape_Face::*)( const opencascade::handle<StepShape_HArray1OfFaceBound> &  ) >(&StepShape_Face::SetBounds),
             R"#(None)#"  , py::arg("aBounds"))
        .def("Bounds",
             (opencascade::handle<StepShape_HArray1OfFaceBound> (StepShape_Face::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfFaceBound> (StepShape_Face::*)() const>(&StepShape_Face::Bounds),
             R"#(None)#" )
        .def("BoundsValue",
             (opencascade::handle<StepShape_FaceBound> (StepShape_Face::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_FaceBound> (StepShape_Face::*)( const Standard_Integer  ) const>(&StepShape_Face::BoundsValue),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_Face::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FaceBound ,opencascade::handle<StepShape_FaceBound>  , StepShape_TopologicalRepresentationItem >>(m.attr("StepShape_FaceBound"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_FaceBound::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Loop> & ,  const Standard_Boolean  ) ) static_cast<void (StepShape_FaceBound::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Loop> & ,  const Standard_Boolean  ) >(&StepShape_FaceBound::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBound"),  py::arg("aOrientation"))
        .def("SetBound",
             (void (StepShape_FaceBound::*)( const opencascade::handle<StepShape_Loop> &  ) ) static_cast<void (StepShape_FaceBound::*)( const opencascade::handle<StepShape_Loop> &  ) >(&StepShape_FaceBound::SetBound),
             R"#(None)#"  , py::arg("aBound"))
        .def("Bound",
             (opencascade::handle<StepShape_Loop> (StepShape_FaceBound::*)() const) static_cast<opencascade::handle<StepShape_Loop> (StepShape_FaceBound::*)() const>(&StepShape_FaceBound::Bound),
             R"#(None)#" )
        .def("SetOrientation",
             (void (StepShape_FaceBound::*)( const Standard_Boolean  ) ) static_cast<void (StepShape_FaceBound::*)( const Standard_Boolean  ) >(&StepShape_FaceBound::SetOrientation),
             R"#(None)#"  , py::arg("aOrientation"))
        .def("Orientation",
             (Standard_Boolean (StepShape_FaceBound::*)() const) static_cast<Standard_Boolean (StepShape_FaceBound::*)() const>(&StepShape_FaceBound::Orientation),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FaceBound::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FaceBound::*)() const>(&StepShape_FaceBound::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FaceBound::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_FaceBound::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FacetedBrepShapeRepresentation ,opencascade::handle<StepShape_FacetedBrepShapeRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_FacetedBrepShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_FacetedBrepShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_GeometricCurveSet ,opencascade::handle<StepShape_GeometricCurveSet>  , StepShape_GeometricSet >>(m.attr("StepShape_GeometricCurveSet"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_GeometricCurveSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_GeometricallyBoundedSurfaceShapeRepresentation ,opencascade::handle<StepShape_GeometricallyBoundedSurfaceShapeRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_GeometricallyBoundedSurfaceShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_GeometricallyBoundedSurfaceShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_GeometricallyBoundedWireframeShapeRepresentation ,opencascade::handle<StepShape_GeometricallyBoundedWireframeShapeRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_GeometricallyBoundedWireframeShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_GeometricallyBoundedWireframeShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Loop ,opencascade::handle<StepShape_Loop>  , StepShape_TopologicalRepresentationItem >>(m.attr("StepShape_Loop"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_Loop::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_LoopAndPath ,opencascade::handle<StepShape_LoopAndPath>  , StepShape_TopologicalRepresentationItem >>(m.attr("StepShape_LoopAndPath"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_LoopAndPath::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Loop> & ,  const opencascade::handle<StepShape_Path> &  ) ) static_cast<void (StepShape_LoopAndPath::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Loop> & ,  const opencascade::handle<StepShape_Path> &  ) >(&StepShape_LoopAndPath::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aLoop"),  py::arg("aPath"))
        .def("Init",
             (void (StepShape_LoopAndPath::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) ) static_cast<void (StepShape_LoopAndPath::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) >(&StepShape_LoopAndPath::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aEdgeList"))
        .def("SetLoop",
             (void (StepShape_LoopAndPath::*)( const opencascade::handle<StepShape_Loop> &  ) ) static_cast<void (StepShape_LoopAndPath::*)( const opencascade::handle<StepShape_Loop> &  ) >(&StepShape_LoopAndPath::SetLoop),
             R"#(None)#"  , py::arg("aLoop"))
        .def("Loop",
             (opencascade::handle<StepShape_Loop> (StepShape_LoopAndPath::*)() const) static_cast<opencascade::handle<StepShape_Loop> (StepShape_LoopAndPath::*)() const>(&StepShape_LoopAndPath::Loop),
             R"#(None)#" )
        .def("SetPath",
             (void (StepShape_LoopAndPath::*)( const opencascade::handle<StepShape_Path> &  ) ) static_cast<void (StepShape_LoopAndPath::*)( const opencascade::handle<StepShape_Path> &  ) >(&StepShape_LoopAndPath::SetPath),
             R"#(None)#"  , py::arg("aPath"))
        .def("Path",
             (opencascade::handle<StepShape_Path> (StepShape_LoopAndPath::*)() const) static_cast<opencascade::handle<StepShape_Path> (StepShape_LoopAndPath::*)() const>(&StepShape_LoopAndPath::Path),
             R"#(None)#" )
        .def("SetEdgeList",
             (void (StepShape_LoopAndPath::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) ) static_cast<void (StepShape_LoopAndPath::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) >(&StepShape_LoopAndPath::SetEdgeList),
             R"#(None)#"  , py::arg("aEdgeList"))
        .def("EdgeList",
             (opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_LoopAndPath::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_LoopAndPath::*)() const>(&StepShape_LoopAndPath::EdgeList),
             R"#(None)#" )
        .def("EdgeListValue",
             (opencascade::handle<StepShape_OrientedEdge> (StepShape_LoopAndPath::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_OrientedEdge> (StepShape_LoopAndPath::*)( const Standard_Integer  ) const>(&StepShape_LoopAndPath::EdgeListValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbEdgeList",
             (Standard_Integer (StepShape_LoopAndPath::*)() const) static_cast<Standard_Integer (StepShape_LoopAndPath::*)() const>(&StepShape_LoopAndPath::NbEdgeList),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_LoopAndPath::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_LoopAndPath::*)() const>(&StepShape_LoopAndPath::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_LoopAndPath::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_LoopAndPath::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ManifoldSolidBrep ,opencascade::handle<StepShape_ManifoldSolidBrep>  , StepShape_SolidModel >>(m.attr("StepShape_ManifoldSolidBrep"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ManifoldSolidBrep::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ClosedShell> &  ) ) static_cast<void (StepShape_ManifoldSolidBrep::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ClosedShell> &  ) >(&StepShape_ManifoldSolidBrep::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aOuter"))
        .def("Init",
             (void (StepShape_ManifoldSolidBrep::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ConnectedFaceSet> &  ) ) static_cast<void (StepShape_ManifoldSolidBrep::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ConnectedFaceSet> &  ) >(&StepShape_ManifoldSolidBrep::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aOuter"))
        .def("SetOuter",
             (void (StepShape_ManifoldSolidBrep::*)( const opencascade::handle<StepShape_ConnectedFaceSet> &  ) ) static_cast<void (StepShape_ManifoldSolidBrep::*)( const opencascade::handle<StepShape_ConnectedFaceSet> &  ) >(&StepShape_ManifoldSolidBrep::SetOuter),
             R"#(None)#"  , py::arg("aOuter"))
        .def("Outer",
             (opencascade::handle<StepShape_ConnectedFaceSet> (StepShape_ManifoldSolidBrep::*)() const) static_cast<opencascade::handle<StepShape_ConnectedFaceSet> (StepShape_ManifoldSolidBrep::*)() const>(&StepShape_ManifoldSolidBrep::Outer),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ManifoldSolidBrep::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ManifoldSolidBrep::*)() const>(&StepShape_ManifoldSolidBrep::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ManifoldSolidBrep::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ManifoldSolidBrep::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ManifoldSurfaceShapeRepresentation ,opencascade::handle<StepShape_ManifoldSurfaceShapeRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_ManifoldSurfaceShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ManifoldSurfaceShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_NonManifoldSurfaceShapeRepresentation ,opencascade::handle<StepShape_NonManifoldSurfaceShapeRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_NonManifoldSurfaceShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_NonManifoldSurfaceShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Path ,opencascade::handle<StepShape_Path>  , StepShape_TopologicalRepresentationItem >>(m.attr("StepShape_Path"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_Path::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) ) static_cast<void (StepShape_Path::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) >(&StepShape_Path::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aEdgeList"))
        .def("SetEdgeList",
             (void (StepShape_Path::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) ) static_cast<void (StepShape_Path::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) >(&StepShape_Path::SetEdgeList),
             R"#(None)#"  , py::arg("aEdgeList"))
        .def("EdgeList",
             (opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_Path::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_Path::*)() const>(&StepShape_Path::EdgeList),
             R"#(None)#" )
        .def("EdgeListValue",
             (opencascade::handle<StepShape_OrientedEdge> (StepShape_Path::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_OrientedEdge> (StepShape_Path::*)( const Standard_Integer  ) const>(&StepShape_Path::EdgeListValue),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_Path::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_PointRepresentation ,opencascade::handle<StepShape_PointRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_PointRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_PointRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShapeDimensionRepresentation ,opencascade::handle<StepShape_ShapeDimensionRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_ShapeDimensionRepresentation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ShapeDimensionRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & ,  const opencascade::handle<StepRepr_RepresentationContext> &  ) ) static_cast<void (StepShape_ShapeDimensionRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepRepr_HArray1OfRepresentationItem> & ,  const opencascade::handle<StepRepr_RepresentationContext> &  ) >(&StepShape_ShapeDimensionRepresentation::Init),
             R"#(Initialize all fields AP214)#"  , py::arg("theName"),  py::arg("theItems"),  py::arg("theContextOfItems"))
        .def("Init",
             (void (StepShape_ShapeDimensionRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfShapeDimensionRepresentationItem> & ,  const opencascade::handle<StepRepr_RepresentationContext> &  ) ) static_cast<void (StepShape_ShapeDimensionRepresentation::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfShapeDimensionRepresentationItem> & ,  const opencascade::handle<StepRepr_RepresentationContext> &  ) >(&StepShape_ShapeDimensionRepresentation::Init),
             R"#(Initialize all fields AP242)#"  , py::arg("theName"),  py::arg("theItems"),  py::arg("theContextOfItems"))
        .def("SetItemsAP242",
             (void (StepShape_ShapeDimensionRepresentation::*)( const opencascade::handle<StepShape_HArray1OfShapeDimensionRepresentationItem> &  ) ) static_cast<void (StepShape_ShapeDimensionRepresentation::*)( const opencascade::handle<StepShape_HArray1OfShapeDimensionRepresentationItem> &  ) >(&StepShape_ShapeDimensionRepresentation::SetItemsAP242),
             R"#(None)#"  , py::arg("theItems"))
        .def("ItemsAP242",
             (opencascade::handle<StepShape_HArray1OfShapeDimensionRepresentationItem> (StepShape_ShapeDimensionRepresentation::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfShapeDimensionRepresentationItem> (StepShape_ShapeDimensionRepresentation::*)() const>(&StepShape_ShapeDimensionRepresentation::ItemsAP242),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ShapeDimensionRepresentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ShapeDimensionRepresentation::*)() const>(&StepShape_ShapeDimensionRepresentation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ShapeDimensionRepresentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ShapeDimensionRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ShapeRepresentationWithParameters ,opencascade::handle<StepShape_ShapeRepresentationWithParameters>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_ShapeRepresentationWithParameters"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ShapeRepresentationWithParameters::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SolidReplica ,opencascade::handle<StepShape_SolidReplica>  , StepShape_SolidModel >>(m.attr("StepShape_SolidReplica"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_SolidReplica::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_SolidModel> & ,  const opencascade::handle<StepGeom_CartesianTransformationOperator3d> &  ) ) static_cast<void (StepShape_SolidReplica::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_SolidModel> & ,  const opencascade::handle<StepGeom_CartesianTransformationOperator3d> &  ) >(&StepShape_SolidReplica::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aParentSolid"),  py::arg("aTransformation"))
        .def("SetParentSolid",
             (void (StepShape_SolidReplica::*)( const opencascade::handle<StepShape_SolidModel> &  ) ) static_cast<void (StepShape_SolidReplica::*)( const opencascade::handle<StepShape_SolidModel> &  ) >(&StepShape_SolidReplica::SetParentSolid),
             R"#(None)#"  , py::arg("aParentSolid"))
        .def("ParentSolid",
             (opencascade::handle<StepShape_SolidModel> (StepShape_SolidReplica::*)() const) static_cast<opencascade::handle<StepShape_SolidModel> (StepShape_SolidReplica::*)() const>(&StepShape_SolidReplica::ParentSolid),
             R"#(None)#" )
        .def("SetTransformation",
             (void (StepShape_SolidReplica::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator3d> &  ) ) static_cast<void (StepShape_SolidReplica::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator3d> &  ) >(&StepShape_SolidReplica::SetTransformation),
             R"#(None)#"  , py::arg("aTransformation"))
        .def("Transformation",
             (opencascade::handle<StepGeom_CartesianTransformationOperator3d> (StepShape_SolidReplica::*)() const) static_cast<opencascade::handle<StepGeom_CartesianTransformationOperator3d> (StepShape_SolidReplica::*)() const>(&StepShape_SolidReplica::Transformation),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_SolidReplica::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_SolidReplica::*)() const>(&StepShape_SolidReplica::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_SolidReplica::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_SolidReplica::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SweptAreaSolid ,opencascade::handle<StepShape_SweptAreaSolid>  , StepShape_SolidModel >>(m.attr("StepShape_SweptAreaSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_SweptAreaSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_CurveBoundedSurface> &  ) ) static_cast<void (StepShape_SweptAreaSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_CurveBoundedSurface> &  ) >(&StepShape_SweptAreaSolid::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSweptArea"))
        .def("SetSweptArea",
             (void (StepShape_SweptAreaSolid::*)( const opencascade::handle<StepGeom_CurveBoundedSurface> &  ) ) static_cast<void (StepShape_SweptAreaSolid::*)( const opencascade::handle<StepGeom_CurveBoundedSurface> &  ) >(&StepShape_SweptAreaSolid::SetSweptArea),
             R"#(None)#"  , py::arg("aSweptArea"))
        .def("SweptArea",
             (opencascade::handle<StepGeom_CurveBoundedSurface> (StepShape_SweptAreaSolid::*)() const) static_cast<opencascade::handle<StepGeom_CurveBoundedSurface> (StepShape_SweptAreaSolid::*)() const>(&StepShape_SweptAreaSolid::SweptArea),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_SweptAreaSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_SweptAreaSolid::*)() const>(&StepShape_SweptAreaSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_SweptAreaSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_SweptAreaSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SweptFaceSolid ,opencascade::handle<StepShape_SweptFaceSolid>  , StepShape_SolidModel >>(m.attr("StepShape_SweptFaceSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_SweptFaceSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_FaceSurface> &  ) ) static_cast<void (StepShape_SweptFaceSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_FaceSurface> &  ) >(&StepShape_SweptFaceSolid::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSweptArea"))
        .def("SetSweptFace",
             (void (StepShape_SweptFaceSolid::*)( const opencascade::handle<StepShape_FaceSurface> &  ) ) static_cast<void (StepShape_SweptFaceSolid::*)( const opencascade::handle<StepShape_FaceSurface> &  ) >(&StepShape_SweptFaceSolid::SetSweptFace),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_SweptFaceSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_TransitionalShapeRepresentation ,opencascade::handle<StepShape_TransitionalShapeRepresentation>  , StepShape_ShapeRepresentation >>(m.attr("StepShape_TransitionalShapeRepresentation"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_TransitionalShapeRepresentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Vertex ,opencascade::handle<StepShape_Vertex>  , StepShape_TopologicalRepresentationItem >>(m.attr("StepShape_Vertex"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_Vertex::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_BrepWithVoids ,opencascade::handle<StepShape_BrepWithVoids>  , StepShape_ManifoldSolidBrep >>(m.attr("StepShape_BrepWithVoids"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_BrepWithVoids::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ClosedShell> & ,  const opencascade::handle<StepShape_HArray1OfOrientedClosedShell> &  ) ) static_cast<void (StepShape_BrepWithVoids::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ClosedShell> & ,  const opencascade::handle<StepShape_HArray1OfOrientedClosedShell> &  ) >(&StepShape_BrepWithVoids::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aOuter"),  py::arg("aVoids"))
        .def("SetVoids",
             (void (StepShape_BrepWithVoids::*)( const opencascade::handle<StepShape_HArray1OfOrientedClosedShell> &  ) ) static_cast<void (StepShape_BrepWithVoids::*)( const opencascade::handle<StepShape_HArray1OfOrientedClosedShell> &  ) >(&StepShape_BrepWithVoids::SetVoids),
             R"#(None)#"  , py::arg("aVoids"))
        .def("Voids",
             (opencascade::handle<StepShape_HArray1OfOrientedClosedShell> (StepShape_BrepWithVoids::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfOrientedClosedShell> (StepShape_BrepWithVoids::*)() const>(&StepShape_BrepWithVoids::Voids),
             R"#(None)#" )
        .def("VoidsValue",
             (opencascade::handle<StepShape_OrientedClosedShell> (StepShape_BrepWithVoids::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_OrientedClosedShell> (StepShape_BrepWithVoids::*)( const Standard_Integer  ) const>(&StepShape_BrepWithVoids::VoidsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbVoids",
             (Standard_Integer (StepShape_BrepWithVoids::*)() const) static_cast<Standard_Integer (StepShape_BrepWithVoids::*)() const>(&StepShape_BrepWithVoids::NbVoids),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_BrepWithVoids::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_BrepWithVoids::*)() const>(&StepShape_BrepWithVoids::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_BrepWithVoids::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_BrepWithVoids::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ClosedShell ,opencascade::handle<StepShape_ClosedShell>  , StepShape_ConnectedFaceSet >>(m.attr("StepShape_ClosedShell"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ClosedShell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ConnectedFaceSubSet ,opencascade::handle<StepShape_ConnectedFaceSubSet>  , StepShape_ConnectedFaceSet >>(m.attr("StepShape_ConnectedFaceSubSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ConnectedFaceSubSet::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfFace> & ,  const opencascade::handle<StepShape_ConnectedFaceSet> &  ) ) static_cast<void (StepShape_ConnectedFaceSubSet::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfFace> & ,  const opencascade::handle<StepShape_ConnectedFaceSet> &  ) >(&StepShape_ConnectedFaceSubSet::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aConnectedFaceSet_CfsFaces"),  py::arg("aParentFaceSet"))
        .def("ParentFaceSet",
             (opencascade::handle<StepShape_ConnectedFaceSet> (StepShape_ConnectedFaceSubSet::*)() const) static_cast<opencascade::handle<StepShape_ConnectedFaceSet> (StepShape_ConnectedFaceSubSet::*)() const>(&StepShape_ConnectedFaceSubSet::ParentFaceSet),
             R"#(Returns field ParentFaceSet)#" )
        .def("SetParentFaceSet",
             (void (StepShape_ConnectedFaceSubSet::*)( const opencascade::handle<StepShape_ConnectedFaceSet> &  ) ) static_cast<void (StepShape_ConnectedFaceSubSet::*)( const opencascade::handle<StepShape_ConnectedFaceSet> &  ) >(&StepShape_ConnectedFaceSubSet::SetParentFaceSet),
             R"#(Set field ParentFaceSet)#"  , py::arg("ParentFaceSet"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ConnectedFaceSubSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ConnectedFaceSubSet::*)() const>(&StepShape_ConnectedFaceSubSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ConnectedFaceSubSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ConnectedFaceSubSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_EdgeCurve ,opencascade::handle<StepShape_EdgeCurve>  , StepShape_Edge >>(m.attr("StepShape_EdgeCurve"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_EdgeCurve::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Vertex> & ,  const opencascade::handle<StepShape_Vertex> & ,  const opencascade::handle<StepGeom_Curve> & ,  const Standard_Boolean  ) ) static_cast<void (StepShape_EdgeCurve::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Vertex> & ,  const opencascade::handle<StepShape_Vertex> & ,  const opencascade::handle<StepGeom_Curve> & ,  const Standard_Boolean  ) >(&StepShape_EdgeCurve::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aEdgeStart"),  py::arg("aEdgeEnd"),  py::arg("aEdgeGeometry"),  py::arg("aSameSense"))
        .def("SetEdgeGeometry",
             (void (StepShape_EdgeCurve::*)( const opencascade::handle<StepGeom_Curve> &  ) ) static_cast<void (StepShape_EdgeCurve::*)( const opencascade::handle<StepGeom_Curve> &  ) >(&StepShape_EdgeCurve::SetEdgeGeometry),
             R"#(None)#"  , py::arg("aEdgeGeometry"))
        .def("EdgeGeometry",
             (opencascade::handle<StepGeom_Curve> (StepShape_EdgeCurve::*)() const) static_cast<opencascade::handle<StepGeom_Curve> (StepShape_EdgeCurve::*)() const>(&StepShape_EdgeCurve::EdgeGeometry),
             R"#(None)#" )
        .def("SetSameSense",
             (void (StepShape_EdgeCurve::*)( const Standard_Boolean  ) ) static_cast<void (StepShape_EdgeCurve::*)( const Standard_Boolean  ) >(&StepShape_EdgeCurve::SetSameSense),
             R"#(None)#"  , py::arg("aSameSense"))
        .def("SameSense",
             (Standard_Boolean (StepShape_EdgeCurve::*)() const) static_cast<Standard_Boolean (StepShape_EdgeCurve::*)() const>(&StepShape_EdgeCurve::SameSense),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_EdgeCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_EdgeCurve::*)() const>(&StepShape_EdgeCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_EdgeCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_EdgeCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_EdgeLoop ,opencascade::handle<StepShape_EdgeLoop>  , StepShape_Loop >>(m.attr("StepShape_EdgeLoop"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_EdgeLoop::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) ) static_cast<void (StepShape_EdgeLoop::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) >(&StepShape_EdgeLoop::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aEdgeList"))
        .def("SetEdgeList",
             (void (StepShape_EdgeLoop::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) ) static_cast<void (StepShape_EdgeLoop::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) >(&StepShape_EdgeLoop::SetEdgeList),
             R"#(None)#"  , py::arg("aEdgeList"))
        .def("EdgeList",
             (opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_EdgeLoop::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_EdgeLoop::*)() const>(&StepShape_EdgeLoop::EdgeList),
             R"#(None)#" )
        .def("EdgeListValue",
             (opencascade::handle<StepShape_OrientedEdge> (StepShape_EdgeLoop::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_OrientedEdge> (StepShape_EdgeLoop::*)( const Standard_Integer  ) const>(&StepShape_EdgeLoop::EdgeListValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbEdgeList",
             (Standard_Integer (StepShape_EdgeLoop::*)() const) static_cast<Standard_Integer (StepShape_EdgeLoop::*)() const>(&StepShape_EdgeLoop::NbEdgeList),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_EdgeLoop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_EdgeLoop::*)() const>(&StepShape_EdgeLoop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_EdgeLoop::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_EdgeLoop::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ExtrudedAreaSolid ,opencascade::handle<StepShape_ExtrudedAreaSolid>  , StepShape_SweptAreaSolid >>(m.attr("StepShape_ExtrudedAreaSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ExtrudedAreaSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_CurveBoundedSurface> & ,  const opencascade::handle<StepGeom_Direction> & ,  const Standard_Real  ) ) static_cast<void (StepShape_ExtrudedAreaSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_CurveBoundedSurface> & ,  const opencascade::handle<StepGeom_Direction> & ,  const Standard_Real  ) >(&StepShape_ExtrudedAreaSolid::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSweptArea"),  py::arg("aExtrudedDirection"),  py::arg("aDepth"))
        .def("SetExtrudedDirection",
             (void (StepShape_ExtrudedAreaSolid::*)( const opencascade::handle<StepGeom_Direction> &  ) ) static_cast<void (StepShape_ExtrudedAreaSolid::*)( const opencascade::handle<StepGeom_Direction> &  ) >(&StepShape_ExtrudedAreaSolid::SetExtrudedDirection),
             R"#(None)#"  , py::arg("aExtrudedDirection"))
        .def("ExtrudedDirection",
             (opencascade::handle<StepGeom_Direction> (StepShape_ExtrudedAreaSolid::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepShape_ExtrudedAreaSolid::*)() const>(&StepShape_ExtrudedAreaSolid::ExtrudedDirection),
             R"#(None)#" )
        .def("SetDepth",
             (void (StepShape_ExtrudedAreaSolid::*)( const Standard_Real  ) ) static_cast<void (StepShape_ExtrudedAreaSolid::*)( const Standard_Real  ) >(&StepShape_ExtrudedAreaSolid::SetDepth),
             R"#(None)#"  , py::arg("aDepth"))
        .def("Depth",
             (Standard_Real (StepShape_ExtrudedAreaSolid::*)() const) static_cast<Standard_Real (StepShape_ExtrudedAreaSolid::*)() const>(&StepShape_ExtrudedAreaSolid::Depth),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ExtrudedAreaSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ExtrudedAreaSolid::*)() const>(&StepShape_ExtrudedAreaSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ExtrudedAreaSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ExtrudedAreaSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_ExtrudedFaceSolid ,opencascade::handle<StepShape_ExtrudedFaceSolid>  , StepShape_SweptFaceSolid >>(m.attr("StepShape_ExtrudedFaceSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_ExtrudedFaceSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_FaceSurface> & ,  const opencascade::handle<StepGeom_Direction> & ,  const Standard_Real  ) ) static_cast<void (StepShape_ExtrudedFaceSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_FaceSurface> & ,  const opencascade::handle<StepGeom_Direction> & ,  const Standard_Real  ) >(&StepShape_ExtrudedFaceSolid::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSweptArea"),  py::arg("aExtrudedDirection"),  py::arg("aDepth"))
        .def("SetExtrudedDirection",
             (void (StepShape_ExtrudedFaceSolid::*)( const opencascade::handle<StepGeom_Direction> &  ) ) static_cast<void (StepShape_ExtrudedFaceSolid::*)( const opencascade::handle<StepGeom_Direction> &  ) >(&StepShape_ExtrudedFaceSolid::SetExtrudedDirection),
             R"#(None)#"  , py::arg("aExtrudedDirection"))
        .def("ExtrudedDirection",
             (opencascade::handle<StepGeom_Direction> (StepShape_ExtrudedFaceSolid::*)() const) static_cast<opencascade::handle<StepGeom_Direction> (StepShape_ExtrudedFaceSolid::*)() const>(&StepShape_ExtrudedFaceSolid::ExtrudedDirection),
             R"#(None)#" )
        .def("SetDepth",
             (void (StepShape_ExtrudedFaceSolid::*)( const Standard_Real  ) ) static_cast<void (StepShape_ExtrudedFaceSolid::*)( const Standard_Real  ) >(&StepShape_ExtrudedFaceSolid::SetDepth),
             R"#(None)#"  , py::arg("aDepth"))
        .def("Depth",
             (Standard_Real (StepShape_ExtrudedFaceSolid::*)() const) static_cast<Standard_Real (StepShape_ExtrudedFaceSolid::*)() const>(&StepShape_ExtrudedFaceSolid::Depth),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_ExtrudedFaceSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_ExtrudedFaceSolid::*)() const>(&StepShape_ExtrudedFaceSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_ExtrudedFaceSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_ExtrudedFaceSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FaceOuterBound ,opencascade::handle<StepShape_FaceOuterBound>  , StepShape_FaceBound >>(m.attr("StepShape_FaceOuterBound"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_FaceOuterBound::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FaceSurface ,opencascade::handle<StepShape_FaceSurface>  , StepShape_Face >>(m.attr("StepShape_FaceSurface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_FaceSurface::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfFaceBound> & ,  const opencascade::handle<StepGeom_Surface> & ,  const Standard_Boolean  ) ) static_cast<void (StepShape_FaceSurface::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfFaceBound> & ,  const opencascade::handle<StepGeom_Surface> & ,  const Standard_Boolean  ) >(&StepShape_FaceSurface::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aBounds"),  py::arg("aFaceGeometry"),  py::arg("aSameSense"))
        .def("SetFaceGeometry",
             (void (StepShape_FaceSurface::*)( const opencascade::handle<StepGeom_Surface> &  ) ) static_cast<void (StepShape_FaceSurface::*)( const opencascade::handle<StepGeom_Surface> &  ) >(&StepShape_FaceSurface::SetFaceGeometry),
             R"#(None)#"  , py::arg("aFaceGeometry"))
        .def("FaceGeometry",
             (opencascade::handle<StepGeom_Surface> (StepShape_FaceSurface::*)() const) static_cast<opencascade::handle<StepGeom_Surface> (StepShape_FaceSurface::*)() const>(&StepShape_FaceSurface::FaceGeometry),
             R"#(None)#" )
        .def("SetSameSense",
             (void (StepShape_FaceSurface::*)( const Standard_Boolean  ) ) static_cast<void (StepShape_FaceSurface::*)( const Standard_Boolean  ) >(&StepShape_FaceSurface::SetSameSense),
             R"#(None)#"  , py::arg("aSameSense"))
        .def("SameSense",
             (Standard_Boolean (StepShape_FaceSurface::*)() const) static_cast<Standard_Boolean (StepShape_FaceSurface::*)() const>(&StepShape_FaceSurface::SameSense),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FaceSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FaceSurface::*)() const>(&StepShape_FaceSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FaceSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_FaceSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FacetedBrep ,opencascade::handle<StepShape_FacetedBrep>  , StepShape_ManifoldSolidBrep >>(m.attr("StepShape_FacetedBrep"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_FacetedBrep::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_FacetedBrepAndBrepWithVoids ,opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids>  , StepShape_ManifoldSolidBrep >>(m.attr("StepShape_FacetedBrepAndBrepWithVoids"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_FacetedBrepAndBrepWithVoids::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ClosedShell> & ,  const opencascade::handle<StepShape_FacetedBrep> & ,  const opencascade::handle<StepShape_BrepWithVoids> &  ) ) static_cast<void (StepShape_FacetedBrepAndBrepWithVoids::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ClosedShell> & ,  const opencascade::handle<StepShape_FacetedBrep> & ,  const opencascade::handle<StepShape_BrepWithVoids> &  ) >(&StepShape_FacetedBrepAndBrepWithVoids::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aOuter"),  py::arg("aFacetedBrep"),  py::arg("aBrepWithVoids"))
        .def("Init",
             (void (StepShape_FacetedBrepAndBrepWithVoids::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ClosedShell> & ,  const opencascade::handle<StepShape_HArray1OfOrientedClosedShell> &  ) ) static_cast<void (StepShape_FacetedBrepAndBrepWithVoids::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ClosedShell> & ,  const opencascade::handle<StepShape_HArray1OfOrientedClosedShell> &  ) >(&StepShape_FacetedBrepAndBrepWithVoids::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aOuter"),  py::arg("aVoids"))
        .def("SetFacetedBrep",
             (void (StepShape_FacetedBrepAndBrepWithVoids::*)( const opencascade::handle<StepShape_FacetedBrep> &  ) ) static_cast<void (StepShape_FacetedBrepAndBrepWithVoids::*)( const opencascade::handle<StepShape_FacetedBrep> &  ) >(&StepShape_FacetedBrepAndBrepWithVoids::SetFacetedBrep),
             R"#(None)#"  , py::arg("aFacetedBrep"))
        .def("FacetedBrep",
             (opencascade::handle<StepShape_FacetedBrep> (StepShape_FacetedBrepAndBrepWithVoids::*)() const) static_cast<opencascade::handle<StepShape_FacetedBrep> (StepShape_FacetedBrepAndBrepWithVoids::*)() const>(&StepShape_FacetedBrepAndBrepWithVoids::FacetedBrep),
             R"#(None)#" )
        .def("SetBrepWithVoids",
             (void (StepShape_FacetedBrepAndBrepWithVoids::*)( const opencascade::handle<StepShape_BrepWithVoids> &  ) ) static_cast<void (StepShape_FacetedBrepAndBrepWithVoids::*)( const opencascade::handle<StepShape_BrepWithVoids> &  ) >(&StepShape_FacetedBrepAndBrepWithVoids::SetBrepWithVoids),
             R"#(None)#"  , py::arg("aBrepWithVoids"))
        .def("BrepWithVoids",
             (opencascade::handle<StepShape_BrepWithVoids> (StepShape_FacetedBrepAndBrepWithVoids::*)() const) static_cast<opencascade::handle<StepShape_BrepWithVoids> (StepShape_FacetedBrepAndBrepWithVoids::*)() const>(&StepShape_FacetedBrepAndBrepWithVoids::BrepWithVoids),
             R"#(None)#" )
        .def("SetVoids",
             (void (StepShape_FacetedBrepAndBrepWithVoids::*)( const opencascade::handle<StepShape_HArray1OfOrientedClosedShell> &  ) ) static_cast<void (StepShape_FacetedBrepAndBrepWithVoids::*)( const opencascade::handle<StepShape_HArray1OfOrientedClosedShell> &  ) >(&StepShape_FacetedBrepAndBrepWithVoids::SetVoids),
             R"#(None)#"  , py::arg("aVoids"))
        .def("Voids",
             (opencascade::handle<StepShape_HArray1OfOrientedClosedShell> (StepShape_FacetedBrepAndBrepWithVoids::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfOrientedClosedShell> (StepShape_FacetedBrepAndBrepWithVoids::*)() const>(&StepShape_FacetedBrepAndBrepWithVoids::Voids),
             R"#(None)#" )
        .def("VoidsValue",
             (opencascade::handle<StepShape_OrientedClosedShell> (StepShape_FacetedBrepAndBrepWithVoids::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_OrientedClosedShell> (StepShape_FacetedBrepAndBrepWithVoids::*)( const Standard_Integer  ) const>(&StepShape_FacetedBrepAndBrepWithVoids::VoidsValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbVoids",
             (Standard_Integer (StepShape_FacetedBrepAndBrepWithVoids::*)() const) static_cast<Standard_Integer (StepShape_FacetedBrepAndBrepWithVoids::*)() const>(&StepShape_FacetedBrepAndBrepWithVoids::NbVoids),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_FacetedBrepAndBrepWithVoids::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_FacetedBrepAndBrepWithVoids::*)() const>(&StepShape_FacetedBrepAndBrepWithVoids::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_FacetedBrepAndBrepWithVoids::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_FacetedBrepAndBrepWithVoids::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OpenShell ,opencascade::handle<StepShape_OpenShell>  , StepShape_ConnectedFaceSet >>(m.attr("StepShape_OpenShell"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_OpenShell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OrientedEdge ,opencascade::handle<StepShape_OrientedEdge>  , StepShape_Edge >>(m.attr("StepShape_OrientedEdge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_OrientedEdge::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Edge> & ,  const Standard_Boolean  ) ) static_cast<void (StepShape_OrientedEdge::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Edge> & ,  const Standard_Boolean  ) >(&StepShape_OrientedEdge::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aEdgeElement"),  py::arg("aOrientation"))
        .def("SetEdgeElement",
             (void (StepShape_OrientedEdge::*)( const opencascade::handle<StepShape_Edge> &  ) ) static_cast<void (StepShape_OrientedEdge::*)( const opencascade::handle<StepShape_Edge> &  ) >(&StepShape_OrientedEdge::SetEdgeElement),
             R"#(None)#"  , py::arg("aEdgeElement"))
        .def("EdgeElement",
             (opencascade::handle<StepShape_Edge> (StepShape_OrientedEdge::*)() const) static_cast<opencascade::handle<StepShape_Edge> (StepShape_OrientedEdge::*)() const>(&StepShape_OrientedEdge::EdgeElement),
             R"#(None)#" )
        .def("SetOrientation",
             (void (StepShape_OrientedEdge::*)( const Standard_Boolean  ) ) static_cast<void (StepShape_OrientedEdge::*)( const Standard_Boolean  ) >(&StepShape_OrientedEdge::SetOrientation),
             R"#(None)#"  , py::arg("aOrientation"))
        .def("Orientation",
             (Standard_Boolean (StepShape_OrientedEdge::*)() const) static_cast<Standard_Boolean (StepShape_OrientedEdge::*)() const>(&StepShape_OrientedEdge::Orientation),
             R"#(None)#" )
        .def("SetEdgeStart",
             (void (StepShape_OrientedEdge::*)( const opencascade::handle<StepShape_Vertex> &  ) ) static_cast<void (StepShape_OrientedEdge::*)( const opencascade::handle<StepShape_Vertex> &  ) >(&StepShape_OrientedEdge::SetEdgeStart),
             R"#(None)#"  , py::arg("aEdgeStart"))
        .def("EdgeStart",
             (opencascade::handle<StepShape_Vertex> (StepShape_OrientedEdge::*)() const) static_cast<opencascade::handle<StepShape_Vertex> (StepShape_OrientedEdge::*)() const>(&StepShape_OrientedEdge::EdgeStart),
             R"#(None)#" )
        .def("SetEdgeEnd",
             (void (StepShape_OrientedEdge::*)( const opencascade::handle<StepShape_Vertex> &  ) ) static_cast<void (StepShape_OrientedEdge::*)( const opencascade::handle<StepShape_Vertex> &  ) >(&StepShape_OrientedEdge::SetEdgeEnd),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_OrientedEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OrientedFace ,opencascade::handle<StepShape_OrientedFace>  , StepShape_Face >>(m.attr("StepShape_OrientedFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_OrientedFace::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Face> & ,  const Standard_Boolean  ) ) static_cast<void (StepShape_OrientedFace::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Face> & ,  const Standard_Boolean  ) >(&StepShape_OrientedFace::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aFaceElement"),  py::arg("aOrientation"))
        .def("SetFaceElement",
             (void (StepShape_OrientedFace::*)( const opencascade::handle<StepShape_Face> &  ) ) static_cast<void (StepShape_OrientedFace::*)( const opencascade::handle<StepShape_Face> &  ) >(&StepShape_OrientedFace::SetFaceElement),
             R"#(None)#"  , py::arg("aFaceElement"))
        .def("FaceElement",
             (opencascade::handle<StepShape_Face> (StepShape_OrientedFace::*)() const) static_cast<opencascade::handle<StepShape_Face> (StepShape_OrientedFace::*)() const>(&StepShape_OrientedFace::FaceElement),
             R"#(None)#" )
        .def("SetOrientation",
             (void (StepShape_OrientedFace::*)( const Standard_Boolean  ) ) static_cast<void (StepShape_OrientedFace::*)( const Standard_Boolean  ) >(&StepShape_OrientedFace::SetOrientation),
             R"#(None)#"  , py::arg("aOrientation"))
        .def("Orientation",
             (Standard_Boolean (StepShape_OrientedFace::*)() const) static_cast<Standard_Boolean (StepShape_OrientedFace::*)() const>(&StepShape_OrientedFace::Orientation),
             R"#(None)#" )
        .def("SetBounds",
             (void (StepShape_OrientedFace::*)( const opencascade::handle<StepShape_HArray1OfFaceBound> &  ) ) static_cast<void (StepShape_OrientedFace::*)( const opencascade::handle<StepShape_HArray1OfFaceBound> &  ) >(&StepShape_OrientedFace::SetBounds),
             R"#(None)#"  , py::arg("aBounds"))
        .def("Bounds",
             (opencascade::handle<StepShape_HArray1OfFaceBound> (StepShape_OrientedFace::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfFaceBound> (StepShape_OrientedFace::*)() const>(&StepShape_OrientedFace::Bounds),
             R"#(None)#" )
        .def("BoundsValue",
             (opencascade::handle<StepShape_FaceBound> (StepShape_OrientedFace::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_FaceBound> (StepShape_OrientedFace::*)( const Standard_Integer  ) const>(&StepShape_OrientedFace::BoundsValue),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_OrientedFace::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OrientedPath ,opencascade::handle<StepShape_OrientedPath>  , StepShape_Path >>(m.attr("StepShape_OrientedPath"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_OrientedPath::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_EdgeLoop> & ,  const Standard_Boolean  ) ) static_cast<void (StepShape_OrientedPath::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_EdgeLoop> & ,  const Standard_Boolean  ) >(&StepShape_OrientedPath::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPathElement"),  py::arg("aOrientation"))
        .def("SetPathElement",
             (void (StepShape_OrientedPath::*)( const opencascade::handle<StepShape_EdgeLoop> &  ) ) static_cast<void (StepShape_OrientedPath::*)( const opencascade::handle<StepShape_EdgeLoop> &  ) >(&StepShape_OrientedPath::SetPathElement),
             R"#(None)#"  , py::arg("aPathElement"))
        .def("PathElement",
             (opencascade::handle<StepShape_EdgeLoop> (StepShape_OrientedPath::*)() const) static_cast<opencascade::handle<StepShape_EdgeLoop> (StepShape_OrientedPath::*)() const>(&StepShape_OrientedPath::PathElement),
             R"#(None)#" )
        .def("SetOrientation",
             (void (StepShape_OrientedPath::*)( const Standard_Boolean  ) ) static_cast<void (StepShape_OrientedPath::*)( const Standard_Boolean  ) >(&StepShape_OrientedPath::SetOrientation),
             R"#(None)#"  , py::arg("aOrientation"))
        .def("Orientation",
             (Standard_Boolean (StepShape_OrientedPath::*)() const) static_cast<Standard_Boolean (StepShape_OrientedPath::*)() const>(&StepShape_OrientedPath::Orientation),
             R"#(None)#" )
        .def("SetEdgeList",
             (void (StepShape_OrientedPath::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) ) static_cast<void (StepShape_OrientedPath::*)( const opencascade::handle<StepShape_HArray1OfOrientedEdge> &  ) >(&StepShape_OrientedPath::SetEdgeList),
             R"#(None)#"  , py::arg("aEdgeList"))
        .def("EdgeList",
             (opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_OrientedPath::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfOrientedEdge> (StepShape_OrientedPath::*)() const>(&StepShape_OrientedPath::EdgeList),
             R"#(None)#" )
        .def("EdgeListValue",
             (opencascade::handle<StepShape_OrientedEdge> (StepShape_OrientedPath::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_OrientedEdge> (StepShape_OrientedPath::*)( const Standard_Integer  ) const>(&StepShape_OrientedPath::EdgeListValue),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_OrientedPath::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_PolyLoop ,opencascade::handle<StepShape_PolyLoop>  , StepShape_Loop >>(m.attr("StepShape_PolyLoop"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_PolyLoop::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_HArray1OfCartesianPoint> &  ) ) static_cast<void (StepShape_PolyLoop::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_HArray1OfCartesianPoint> &  ) >(&StepShape_PolyLoop::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aPolygon"))
        .def("SetPolygon",
             (void (StepShape_PolyLoop::*)( const opencascade::handle<StepGeom_HArray1OfCartesianPoint> &  ) ) static_cast<void (StepShape_PolyLoop::*)( const opencascade::handle<StepGeom_HArray1OfCartesianPoint> &  ) >(&StepShape_PolyLoop::SetPolygon),
             R"#(None)#"  , py::arg("aPolygon"))
        .def("Polygon",
             (opencascade::handle<StepGeom_HArray1OfCartesianPoint> (StepShape_PolyLoop::*)() const) static_cast<opencascade::handle<StepGeom_HArray1OfCartesianPoint> (StepShape_PolyLoop::*)() const>(&StepShape_PolyLoop::Polygon),
             R"#(None)#" )
        .def("PolygonValue",
             (opencascade::handle<StepGeom_CartesianPoint> (StepShape_PolyLoop::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepGeom_CartesianPoint> (StepShape_PolyLoop::*)( const Standard_Integer  ) const>(&StepShape_PolyLoop::PolygonValue),
             R"#(None)#"  , py::arg("num"))
        .def("NbPolygon",
             (Standard_Integer (StepShape_PolyLoop::*)() const) static_cast<Standard_Integer (StepShape_PolyLoop::*)() const>(&StepShape_PolyLoop::NbPolygon),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_PolyLoop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_PolyLoop::*)() const>(&StepShape_PolyLoop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_PolyLoop::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_PolyLoop::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_RevolvedAreaSolid ,opencascade::handle<StepShape_RevolvedAreaSolid>  , StepShape_SweptAreaSolid >>(m.attr("StepShape_RevolvedAreaSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_RevolvedAreaSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_CurveBoundedSurface> & ,  const opencascade::handle<StepGeom_Axis1Placement> & ,  const Standard_Real  ) ) static_cast<void (StepShape_RevolvedAreaSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_CurveBoundedSurface> & ,  const opencascade::handle<StepGeom_Axis1Placement> & ,  const Standard_Real  ) >(&StepShape_RevolvedAreaSolid::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSweptArea"),  py::arg("aAxis"),  py::arg("aAngle"))
        .def("SetAxis",
             (void (StepShape_RevolvedAreaSolid::*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) ) static_cast<void (StepShape_RevolvedAreaSolid::*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) >(&StepShape_RevolvedAreaSolid::SetAxis),
             R"#(None)#"  , py::arg("aAxis"))
        .def("Axis",
             (opencascade::handle<StepGeom_Axis1Placement> (StepShape_RevolvedAreaSolid::*)() const) static_cast<opencascade::handle<StepGeom_Axis1Placement> (StepShape_RevolvedAreaSolid::*)() const>(&StepShape_RevolvedAreaSolid::Axis),
             R"#(None)#" )
        .def("SetAngle",
             (void (StepShape_RevolvedAreaSolid::*)( const Standard_Real  ) ) static_cast<void (StepShape_RevolvedAreaSolid::*)( const Standard_Real  ) >(&StepShape_RevolvedAreaSolid::SetAngle),
             R"#(None)#"  , py::arg("aAngle"))
        .def("Angle",
             (Standard_Real (StepShape_RevolvedAreaSolid::*)() const) static_cast<Standard_Real (StepShape_RevolvedAreaSolid::*)() const>(&StepShape_RevolvedAreaSolid::Angle),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_RevolvedAreaSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_RevolvedAreaSolid::*)() const>(&StepShape_RevolvedAreaSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_RevolvedAreaSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_RevolvedAreaSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_RevolvedFaceSolid ,opencascade::handle<StepShape_RevolvedFaceSolid>  , StepShape_SweptFaceSolid >>(m.attr("StepShape_RevolvedFaceSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_RevolvedFaceSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_FaceSurface> &  ) ) static_cast<void (StepShape_RevolvedFaceSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_FaceSurface> &  ) >(&StepShape_RevolvedFaceSolid::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSweptArea"))
        .def("Init",
             (void (StepShape_RevolvedFaceSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_FaceSurface> & ,  const opencascade::handle<StepGeom_Axis1Placement> & ,  const Standard_Real  ) ) static_cast<void (StepShape_RevolvedFaceSolid::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_FaceSurface> & ,  const opencascade::handle<StepGeom_Axis1Placement> & ,  const Standard_Real  ) >(&StepShape_RevolvedFaceSolid::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aSweptArea"),  py::arg("aAxis"),  py::arg("aAngle"))
        .def("SetAxis",
             (void (StepShape_RevolvedFaceSolid::*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) ) static_cast<void (StepShape_RevolvedFaceSolid::*)( const opencascade::handle<StepGeom_Axis1Placement> &  ) >(&StepShape_RevolvedFaceSolid::SetAxis),
             R"#(None)#"  , py::arg("aAxis"))
        .def("Axis",
             (opencascade::handle<StepGeom_Axis1Placement> (StepShape_RevolvedFaceSolid::*)() const) static_cast<opencascade::handle<StepGeom_Axis1Placement> (StepShape_RevolvedFaceSolid::*)() const>(&StepShape_RevolvedFaceSolid::Axis),
             R"#(None)#" )
        .def("SetAngle",
             (void (StepShape_RevolvedFaceSolid::*)( const Standard_Real  ) ) static_cast<void (StepShape_RevolvedFaceSolid::*)( const Standard_Real  ) >(&StepShape_RevolvedFaceSolid::SetAngle),
             R"#(None)#"  , py::arg("aAngle"))
        .def("Angle",
             (Standard_Real (StepShape_RevolvedFaceSolid::*)() const) static_cast<Standard_Real (StepShape_RevolvedFaceSolid::*)() const>(&StepShape_RevolvedFaceSolid::Angle),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_RevolvedFaceSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_RevolvedFaceSolid::*)() const>(&StepShape_RevolvedFaceSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_RevolvedFaceSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_RevolvedFaceSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Subedge ,opencascade::handle<StepShape_Subedge>  , StepShape_Edge >>(m.attr("StepShape_Subedge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_Subedge::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Vertex> & ,  const opencascade::handle<StepShape_Vertex> & ,  const opencascade::handle<StepShape_Edge> &  ) ) static_cast<void (StepShape_Subedge::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Vertex> & ,  const opencascade::handle<StepShape_Vertex> & ,  const opencascade::handle<StepShape_Edge> &  ) >(&StepShape_Subedge::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aEdge_EdgeStart"),  py::arg("aEdge_EdgeEnd"),  py::arg("aParentEdge"))
        .def("ParentEdge",
             (opencascade::handle<StepShape_Edge> (StepShape_Subedge::*)() const) static_cast<opencascade::handle<StepShape_Edge> (StepShape_Subedge::*)() const>(&StepShape_Subedge::ParentEdge),
             R"#(Returns field ParentEdge)#" )
        .def("SetParentEdge",
             (void (StepShape_Subedge::*)( const opencascade::handle<StepShape_Edge> &  ) ) static_cast<void (StepShape_Subedge::*)( const opencascade::handle<StepShape_Edge> &  ) >(&StepShape_Subedge::SetParentEdge),
             R"#(Set field ParentEdge)#"  , py::arg("ParentEdge"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Subedge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Subedge::*)() const>(&StepShape_Subedge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Subedge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_Subedge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_Subface ,opencascade::handle<StepShape_Subface>  , StepShape_Face >>(m.attr("StepShape_Subface"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_Subface::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfFaceBound> & ,  const opencascade::handle<StepShape_Face> &  ) ) static_cast<void (StepShape_Subface::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_HArray1OfFaceBound> & ,  const opencascade::handle<StepShape_Face> &  ) >(&StepShape_Subface::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aFace_Bounds"),  py::arg("aParentFace"))
        .def("ParentFace",
             (opencascade::handle<StepShape_Face> (StepShape_Subface::*)() const) static_cast<opencascade::handle<StepShape_Face> (StepShape_Subface::*)() const>(&StepShape_Subface::ParentFace),
             R"#(Returns field ParentFace)#" )
        .def("SetParentFace",
             (void (StepShape_Subface::*)( const opencascade::handle<StepShape_Face> &  ) ) static_cast<void (StepShape_Subface::*)( const opencascade::handle<StepShape_Face> &  ) >(&StepShape_Subface::SetParentFace),
             R"#(Set field ParentFace)#"  , py::arg("ParentFace"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_Subface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_Subface::*)() const>(&StepShape_Subface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_Subface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_Subface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_VertexLoop ,opencascade::handle<StepShape_VertexLoop>  , StepShape_Loop >>(m.attr("StepShape_VertexLoop"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_VertexLoop::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Vertex> &  ) ) static_cast<void (StepShape_VertexLoop::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Vertex> &  ) >(&StepShape_VertexLoop::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aLoopVertex"))
        .def("SetLoopVertex",
             (void (StepShape_VertexLoop::*)( const opencascade::handle<StepShape_Vertex> &  ) ) static_cast<void (StepShape_VertexLoop::*)( const opencascade::handle<StepShape_Vertex> &  ) >(&StepShape_VertexLoop::SetLoopVertex),
             R"#(None)#"  , py::arg("aLoopVertex"))
        .def("LoopVertex",
             (opencascade::handle<StepShape_Vertex> (StepShape_VertexLoop::*)() const) static_cast<opencascade::handle<StepShape_Vertex> (StepShape_VertexLoop::*)() const>(&StepShape_VertexLoop::LoopVertex),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_VertexLoop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_VertexLoop::*)() const>(&StepShape_VertexLoop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_VertexLoop::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_VertexLoop::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_VertexPoint ,opencascade::handle<StepShape_VertexPoint>  , StepShape_Vertex >>(m.attr("StepShape_VertexPoint"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_VertexPoint::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Point> &  ) ) static_cast<void (StepShape_VertexPoint::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepGeom_Point> &  ) >(&StepShape_VertexPoint::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aVertexGeometry"))
        .def("SetVertexGeometry",
             (void (StepShape_VertexPoint::*)( const opencascade::handle<StepGeom_Point> &  ) ) static_cast<void (StepShape_VertexPoint::*)( const opencascade::handle<StepGeom_Point> &  ) >(&StepShape_VertexPoint::SetVertexGeometry),
             R"#(None)#"  , py::arg("aVertexGeometry"))
        .def("VertexGeometry",
             (opencascade::handle<StepGeom_Point> (StepShape_VertexPoint::*)() const) static_cast<opencascade::handle<StepGeom_Point> (StepShape_VertexPoint::*)() const>(&StepShape_VertexPoint::VertexGeometry),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_VertexPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_VertexPoint::*)() const>(&StepShape_VertexPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_VertexPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_VertexPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_AdvancedFace ,opencascade::handle<StepShape_AdvancedFace>  , StepShape_FaceSurface >>(m.attr("StepShape_AdvancedFace"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_AdvancedFace::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OrientedClosedShell ,opencascade::handle<StepShape_OrientedClosedShell>  , StepShape_ClosedShell >>(m.attr("StepShape_OrientedClosedShell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_OrientedClosedShell::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ClosedShell> & ,  const Standard_Boolean  ) ) static_cast<void (StepShape_OrientedClosedShell::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_ClosedShell> & ,  const Standard_Boolean  ) >(&StepShape_OrientedClosedShell::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aClosedShellElement"),  py::arg("aOrientation"))
        .def("SetClosedShellElement",
             (void (StepShape_OrientedClosedShell::*)( const opencascade::handle<StepShape_ClosedShell> &  ) ) static_cast<void (StepShape_OrientedClosedShell::*)( const opencascade::handle<StepShape_ClosedShell> &  ) >(&StepShape_OrientedClosedShell::SetClosedShellElement),
             R"#(None)#"  , py::arg("aClosedShellElement"))
        .def("ClosedShellElement",
             (opencascade::handle<StepShape_ClosedShell> (StepShape_OrientedClosedShell::*)() const) static_cast<opencascade::handle<StepShape_ClosedShell> (StepShape_OrientedClosedShell::*)() const>(&StepShape_OrientedClosedShell::ClosedShellElement),
             R"#(None)#" )
        .def("SetOrientation",
             (void (StepShape_OrientedClosedShell::*)( const Standard_Boolean  ) ) static_cast<void (StepShape_OrientedClosedShell::*)( const Standard_Boolean  ) >(&StepShape_OrientedClosedShell::SetOrientation),
             R"#(None)#"  , py::arg("aOrientation"))
        .def("Orientation",
             (Standard_Boolean (StepShape_OrientedClosedShell::*)() const) static_cast<Standard_Boolean (StepShape_OrientedClosedShell::*)() const>(&StepShape_OrientedClosedShell::Orientation),
             R"#(None)#" )
        .def("SetCfsFaces",
             (void (StepShape_OrientedClosedShell::*)( const opencascade::handle<StepShape_HArray1OfFace> &  ) ) static_cast<void (StepShape_OrientedClosedShell::*)( const opencascade::handle<StepShape_HArray1OfFace> &  ) >(&StepShape_OrientedClosedShell::SetCfsFaces),
             R"#(None)#"  , py::arg("aCfsFaces"))
        .def("CfsFaces",
             (opencascade::handle<StepShape_HArray1OfFace> (StepShape_OrientedClosedShell::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfFace> (StepShape_OrientedClosedShell::*)() const>(&StepShape_OrientedClosedShell::CfsFaces),
             R"#(None)#" )
        .def("CfsFacesValue",
             (opencascade::handle<StepShape_Face> (StepShape_OrientedClosedShell::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_Face> (StepShape_OrientedClosedShell::*)( const Standard_Integer  ) const>(&StepShape_OrientedClosedShell::CfsFacesValue),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_OrientedClosedShell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_OrientedOpenShell ,opencascade::handle<StepShape_OrientedOpenShell>  , StepShape_OpenShell >>(m.attr("StepShape_OrientedOpenShell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_OrientedOpenShell::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_OpenShell> & ,  const Standard_Boolean  ) ) static_cast<void (StepShape_OrientedOpenShell::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_OpenShell> & ,  const Standard_Boolean  ) >(&StepShape_OrientedOpenShell::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aOpenShellElement"),  py::arg("aOrientation"))
        .def("SetOpenShellElement",
             (void (StepShape_OrientedOpenShell::*)( const opencascade::handle<StepShape_OpenShell> &  ) ) static_cast<void (StepShape_OrientedOpenShell::*)( const opencascade::handle<StepShape_OpenShell> &  ) >(&StepShape_OrientedOpenShell::SetOpenShellElement),
             R"#(None)#"  , py::arg("aOpenShellElement"))
        .def("OpenShellElement",
             (opencascade::handle<StepShape_OpenShell> (StepShape_OrientedOpenShell::*)() const) static_cast<opencascade::handle<StepShape_OpenShell> (StepShape_OrientedOpenShell::*)() const>(&StepShape_OrientedOpenShell::OpenShellElement),
             R"#(None)#" )
        .def("SetOrientation",
             (void (StepShape_OrientedOpenShell::*)( const Standard_Boolean  ) ) static_cast<void (StepShape_OrientedOpenShell::*)( const Standard_Boolean  ) >(&StepShape_OrientedOpenShell::SetOrientation),
             R"#(None)#"  , py::arg("aOrientation"))
        .def("Orientation",
             (Standard_Boolean (StepShape_OrientedOpenShell::*)() const) static_cast<Standard_Boolean (StepShape_OrientedOpenShell::*)() const>(&StepShape_OrientedOpenShell::Orientation),
             R"#(None)#" )
        .def("SetCfsFaces",
             (void (StepShape_OrientedOpenShell::*)( const opencascade::handle<StepShape_HArray1OfFace> &  ) ) static_cast<void (StepShape_OrientedOpenShell::*)( const opencascade::handle<StepShape_HArray1OfFace> &  ) >(&StepShape_OrientedOpenShell::SetCfsFaces),
             R"#(None)#"  , py::arg("aCfsFaces"))
        .def("CfsFaces",
             (opencascade::handle<StepShape_HArray1OfFace> (StepShape_OrientedOpenShell::*)() const) static_cast<opencascade::handle<StepShape_HArray1OfFace> (StepShape_OrientedOpenShell::*)() const>(&StepShape_OrientedOpenShell::CfsFaces),
             R"#(None)#" )
        .def("CfsFacesValue",
             (opencascade::handle<StepShape_Face> (StepShape_OrientedOpenShell::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<StepShape_Face> (StepShape_OrientedOpenShell::*)( const Standard_Integer  ) const>(&StepShape_OrientedOpenShell::CfsFacesValue),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_OrientedOpenShell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepShape_SeamEdge ,opencascade::handle<StepShape_SeamEdge>  , StepShape_OrientedEdge >>(m.attr("StepShape_SeamEdge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (StepShape_SeamEdge::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Edge> & ,  const Standard_Boolean ,  const opencascade::handle<StepGeom_Pcurve> &  ) ) static_cast<void (StepShape_SeamEdge::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<StepShape_Edge> & ,  const Standard_Boolean ,  const opencascade::handle<StepGeom_Pcurve> &  ) >(&StepShape_SeamEdge::Init),
             R"#(Initialize all fields (own and inherited))#"  , py::arg("aRepresentationItem_Name"),  py::arg("aOrientedEdge_EdgeElement"),  py::arg("aOrientedEdge_Orientation"),  py::arg("aPcurveReference"))
        .def("PcurveReference",
             (opencascade::handle<StepGeom_Pcurve> (StepShape_SeamEdge::*)() const) static_cast<opencascade::handle<StepGeom_Pcurve> (StepShape_SeamEdge::*)() const>(&StepShape_SeamEdge::PcurveReference),
             R"#(Returns field PcurveReference)#" )
        .def("SetPcurveReference",
             (void (StepShape_SeamEdge::*)( const opencascade::handle<StepGeom_Pcurve> &  ) ) static_cast<void (StepShape_SeamEdge::*)( const opencascade::handle<StepGeom_Pcurve> &  ) >(&StepShape_SeamEdge::SetPcurveReference),
             R"#(Set field PcurveReference)#"  , py::arg("PcurveReference"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StepShape_SeamEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StepShape_SeamEdge::*)() const>(&StepShape_SeamEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StepShape_SeamEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StepShape_SeamEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepShape_HArray1OfFace.hxx
// ./opencascade/StepShape_RightCircularCylinder.hxx
// ./opencascade/StepShape_NonManifoldSurfaceShapeRepresentation.hxx
// ./opencascade/StepShape_Array1OfFaceBound.hxx
// ./opencascade/StepShape_CsgShapeRepresentation.hxx
// ./opencascade/StepShape_ClosedShell.hxx
// ./opencascade/StepShape_MeasureQualification.hxx
// ./opencascade/StepShape_DimensionalCharacteristic.hxx
// ./opencascade/StepShape_FaceOuterBound.hxx
// ./opencascade/StepShape_HArray1OfShapeDimensionRepresentationItem.hxx
// ./opencascade/StepShape_HArray1OfShell.hxx
// ./opencascade/StepShape_FaceBasedSurfaceModel.hxx
// ./opencascade/StepShape_SweptAreaSolid.hxx
// ./opencascade/StepShape_OrientedEdge.hxx
// ./opencascade/StepShape_ConnectedFaceSet.hxx
// ./opencascade/StepShape_SweptFaceSolid.hxx
// ./opencascade/StepShape_GeometricSet.hxx
// ./opencascade/StepShape_OrientedOpenShell.hxx
// ./opencascade/StepShape_HArray1OfOrientedEdge.hxx
// ./opencascade/StepShape_HArray1OfValueQualifier.hxx
// ./opencascade/StepShape_Array1OfGeometricSetSelect.hxx
// ./opencascade/StepShape_EdgeLoop.hxx
// ./opencascade/StepShape_DimensionalLocation.hxx
// ./opencascade/StepShape_Block.hxx
// ./opencascade/StepShape_ShapeDefinitionRepresentation.hxx
// ./opencascade/StepShape_ShapeRepresentation.hxx
// ./opencascade/StepShape_RevolvedFaceSolid.hxx
// ./opencascade/StepShape_ValueQualifier.hxx
// ./opencascade/StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx
// ./opencascade/StepShape_RightAngularWedge.hxx
// ./opencascade/StepShape_EdgeBasedWireframeModel.hxx
// ./opencascade/StepShape_BooleanOperator.hxx
// ./opencascade/StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem.hxx
// ./opencascade/StepShape_Vertex.hxx
// ./opencascade/StepShape_EdgeBasedWireframeShapeRepresentation.hxx
// ./opencascade/StepShape_AngleRelator.hxx
// ./opencascade/StepShape_CompoundShapeRepresentation.hxx
// ./opencascade/StepShape_DefinitionalRepresentationAndShapeRepresentation.hxx
// ./opencascade/StepShape_Array1OfConnectedEdgeSet.hxx
// ./opencascade/StepShape_ShapeDimensionRepresentation.hxx
// ./opencascade/StepShape_AdvancedBrepShapeRepresentation.hxx
// ./opencascade/StepShape_CsgPrimitive.hxx
// ./opencascade/StepShape_OrientedClosedShell.hxx
// ./opencascade/StepShape_PlusMinusTolerance.hxx
// ./opencascade/StepShape_FaceSurface.hxx
// ./opencascade/StepShape_LoopAndPath.hxx
// ./opencascade/StepShape_HArray1OfOrientedClosedShell.hxx
// ./opencascade/StepShape_ConnectedEdgeSet.hxx
// ./opencascade/StepShape_TransitionalShapeRepresentation.hxx
// ./opencascade/StepShape_ManifoldSurfaceShapeRepresentation.hxx
// ./opencascade/StepShape_SurfaceModel.hxx
// ./opencascade/StepShape_VertexLoop.hxx
// ./opencascade/StepShape_VertexPoint.hxx
// ./opencascade/StepShape_BooleanResult.hxx
// ./opencascade/StepShape_ToleranceMethodDefinition.hxx
// ./opencascade/StepShape_ManifoldSolidBrep.hxx
// ./opencascade/StepShape_HArray1OfConnectedEdgeSet.hxx
// ./opencascade/StepShape_BrepWithVoids.hxx
// ./opencascade/StepShape_AngularLocation.hxx
// ./opencascade/StepShape_SolidModel.hxx
// ./opencascade/StepShape_DimensionalSize.hxx
// ./opencascade/StepShape_OrientedFace.hxx
// ./opencascade/StepShape_HArray1OfFaceBound.hxx
// ./opencascade/StepShape_Array1OfOrientedEdge.hxx
// ./opencascade/StepShape_HArray1OfConnectedFaceSet.hxx
// ./opencascade/StepShape_DimensionalLocationWithPath.hxx
// ./opencascade/StepShape_ShapeRepresentationWithParameters.hxx
// ./opencascade/StepShape_CsgSelect.hxx
// ./opencascade/StepShape_HArray1OfGeometricSetSelect.hxx
// ./opencascade/StepShape_Loop.hxx
// ./opencascade/StepShape_ReversibleTopologyItem.hxx
// ./opencascade/StepShape_ConnectedFaceShapeRepresentation.hxx
// ./opencascade/StepShape_HArray1OfEdge.hxx
// ./opencascade/StepShape_PointRepresentation.hxx
// ./opencascade/StepShape_Shell.hxx
// ./opencascade/StepShape_TypeQualifier.hxx
// ./opencascade/StepShape_Face.hxx
// ./opencascade/StepShape_EdgeCurve.hxx
// ./opencascade/StepShape_ToleranceValue.hxx
// ./opencascade/StepShape_Edge.hxx
// ./opencascade/StepShape_CsgSolid.hxx
// ./opencascade/StepShape_ExtrudedFaceSolid.hxx
// ./opencascade/StepShape_AdvancedFace.hxx
// ./opencascade/StepShape_DimensionalSizeWithPath.hxx
// ./opencascade/StepShape_BooleanOperand.hxx
// ./opencascade/StepShape_BoxedHalfSpace.hxx
// ./opencascade/StepShape_Array1OfConnectedFaceSet.hxx
// ./opencascade/StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx
// ./opencascade/StepShape_ShapeDimensionRepresentationItem.hxx
// ./opencascade/StepShape_AngularSize.hxx
// ./opencascade/StepShape_Array1OfOrientedClosedShell.hxx
// ./opencascade/StepShape_Array1OfShapeDimensionRepresentationItem.hxx
// ./opencascade/StepShape_ConnectedFaceSubSet.hxx
// ./opencascade/StepShape_DimensionalCharacteristicRepresentation.hxx
// ./opencascade/StepShape_FacetedBrep.hxx
// ./opencascade/StepShape_GeometricCurveSet.hxx
// ./opencascade/StepShape_RightCircularCone.hxx
// ./opencascade/StepShape_Torus.hxx
// ./opencascade/StepShape_Path.hxx
// ./opencascade/StepShape_SeamEdge.hxx
// ./opencascade/StepShape_Subface.hxx
// ./opencascade/StepShape_OpenShell.hxx
// ./opencascade/StepShape_FaceBound.hxx
// ./opencascade/StepShape_OrientedPath.hxx
// ./opencascade/StepShape_Array1OfEdge.hxx
// ./opencascade/StepShape_BoxDomain.hxx
// ./opencascade/StepShape_ValueFormatTypeQualifier.hxx
// ./opencascade/StepShape_Sphere.hxx
// ./opencascade/StepShape_ExtrudedAreaSolid.hxx
// ./opencascade/StepShape_GeometricSetSelect.hxx
// ./opencascade/StepShape_RevolvedAreaSolid.hxx
// ./opencascade/StepShape_FacetedBrepShapeRepresentation.hxx
// ./opencascade/StepShape_DirectedDimensionalLocation.hxx
// ./opencascade/StepShape_HalfSpaceSolid.hxx
// ./opencascade/StepShape_Subedge.hxx
// ./opencascade/StepShape_Array1OfValueQualifier.hxx
// ./opencascade/StepShape_TopologicalRepresentationItem.hxx
// ./opencascade/StepShape_QualifiedRepresentationItem.hxx
// ./opencascade/StepShape_Array1OfFace.hxx
// ./opencascade/StepShape_PolyLoop.hxx
// ./opencascade/StepShape_ShellBasedSurfaceModel.hxx
// ./opencascade/StepShape_Array1OfShell.hxx
// ./opencascade/StepShape_SolidReplica.hxx
// ./opencascade/StepShape_FacetedBrepAndBrepWithVoids.hxx
// ./opencascade/StepShape_PrecisionQualifier.hxx
// ./opencascade/StepShape_LimitsAndFits.hxx
// ./opencascade/StepShape_ContextDependentShapeRepresentation.hxx

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<StepShape_FaceBound> >(m,"StepShape_Array1OfFaceBound");  
    register_template_NCollection_Array1<StepShape_GeometricSetSelect>(m,"StepShape_Array1OfGeometricSetSelect");  
    register_template_NCollection_Array1<opencascade::handle<StepShape_ConnectedEdgeSet> >(m,"StepShape_Array1OfConnectedEdgeSet");  
    register_template_NCollection_Array1<opencascade::handle<StepShape_OrientedEdge> >(m,"StepShape_Array1OfOrientedEdge");  
    register_template_NCollection_Array1<opencascade::handle<StepShape_ConnectedFaceSet> >(m,"StepShape_Array1OfConnectedFaceSet");  
    register_template_NCollection_Array1<opencascade::handle<StepShape_OrientedClosedShell> >(m,"StepShape_Array1OfOrientedClosedShell");  
    register_template_NCollection_Array1<StepShape_ShapeDimensionRepresentationItem>(m,"StepShape_Array1OfShapeDimensionRepresentationItem");  
    register_template_NCollection_Array1<opencascade::handle<StepShape_Edge> >(m,"StepShape_Array1OfEdge");  
    register_template_NCollection_Array1<StepShape_ValueQualifier>(m,"StepShape_Array1OfValueQualifier");  
    register_template_NCollection_Array1<opencascade::handle<StepShape_Face> >(m,"StepShape_Array1OfFace");  
    register_template_NCollection_Array1<StepShape_Shell>(m,"StepShape_Array1OfShell");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
