
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Shape.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shell.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Solid.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <TopoDSToStep_Root.hxx>
#include <TopoDSToStep_MakeManifoldSolidBrep.hxx>
#include <TopoDSToStep_MakeBrepWithVoids.hxx>
#include <TopoDSToStep_MakeFacetedBrep.hxx>
#include <TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx>
#include <TopoDSToStep_MakeShellBasedSurfaceModel.hxx>
#include <TopoDSToStep_MakeGeometricCurveSet.hxx>
#include <TopoDSToStep_Builder.hxx>
#include <TopoDSToStep_WireframeBuilder.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <TopoDSToStep_FacetedTool.hxx>
#include <TopoDSToStep_MakeStepFace.hxx>
#include <TopoDSToStep_MakeStepWire.hxx>
#include <TopoDSToStep_MakeStepEdge.hxx>
#include <TopoDSToStep_MakeStepVertex.hxx>
#include <StepShape_GeometricCurveSet.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Solid.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Solid.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shell.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Solid.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>

// module includes
#include <TopoDSToStep.hxx>
#include <TopoDSToStep_Builder.hxx>
#include <TopoDSToStep_BuilderError.hxx>
#include <TopoDSToStep_FacetedError.hxx>
#include <TopoDSToStep_FacetedTool.hxx>
#include <TopoDSToStep_MakeBrepWithVoids.hxx>
#include <TopoDSToStep_MakeEdgeError.hxx>
#include <TopoDSToStep_MakeFaceError.hxx>
#include <TopoDSToStep_MakeFacetedBrep.hxx>
#include <TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx>
#include <TopoDSToStep_MakeGeometricCurveSet.hxx>
#include <TopoDSToStep_MakeManifoldSolidBrep.hxx>
#include <TopoDSToStep_MakeShellBasedSurfaceModel.hxx>
#include <TopoDSToStep_MakeStepEdge.hxx>
#include <TopoDSToStep_MakeStepFace.hxx>
#include <TopoDSToStep_MakeStepVertex.hxx>
#include <TopoDSToStep_MakeStepWire.hxx>
#include <TopoDSToStep_MakeVertexError.hxx>
#include <TopoDSToStep_MakeWireError.hxx>
#include <TopoDSToStep_Root.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <TopoDSToStep_WireframeBuilder.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopoDSToStep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopoDSToStep", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TopoDSToStep_FacetedError>(m, "TopoDSToStep_FacetedError",R"#(None)#")
        .value("TopoDSToStep_FacetedDone",TopoDSToStep_FacetedError::TopoDSToStep_FacetedDone)
        .value("TopoDSToStep_SurfaceNotPlane",TopoDSToStep_FacetedError::TopoDSToStep_SurfaceNotPlane)
        .value("TopoDSToStep_PCurveNotLinear",TopoDSToStep_FacetedError::TopoDSToStep_PCurveNotLinear).export_values();
    py::enum_<TopoDSToStep_MakeWireError>(m, "TopoDSToStep_MakeWireError",R"#(None)#")
        .value("TopoDSToStep_WireDone",TopoDSToStep_MakeWireError::TopoDSToStep_WireDone)
        .value("TopoDSToStep_NonManifoldWire",TopoDSToStep_MakeWireError::TopoDSToStep_NonManifoldWire)
        .value("TopoDSToStep_WireOther",TopoDSToStep_MakeWireError::TopoDSToStep_WireOther).export_values();
    py::enum_<TopoDSToStep_BuilderError>(m, "TopoDSToStep_BuilderError",R"#(None)#")
        .value("TopoDSToStep_BuilderDone",TopoDSToStep_BuilderError::TopoDSToStep_BuilderDone)
        .value("TopoDSToStep_NoFaceMapped",TopoDSToStep_BuilderError::TopoDSToStep_NoFaceMapped)
        .value("TopoDSToStep_BuilderOther",TopoDSToStep_BuilderError::TopoDSToStep_BuilderOther).export_values();
    py::enum_<TopoDSToStep_MakeFaceError>(m, "TopoDSToStep_MakeFaceError",R"#(None)#")
        .value("TopoDSToStep_FaceDone",TopoDSToStep_MakeFaceError::TopoDSToStep_FaceDone)
        .value("TopoDSToStep_InfiniteFace",TopoDSToStep_MakeFaceError::TopoDSToStep_InfiniteFace)
        .value("TopoDSToStep_NonManifoldFace",TopoDSToStep_MakeFaceError::TopoDSToStep_NonManifoldFace)
        .value("TopoDSToStep_NoWireMapped",TopoDSToStep_MakeFaceError::TopoDSToStep_NoWireMapped)
        .value("TopoDSToStep_FaceOther",TopoDSToStep_MakeFaceError::TopoDSToStep_FaceOther).export_values();
    py::enum_<TopoDSToStep_MakeVertexError>(m, "TopoDSToStep_MakeVertexError",R"#(None)#")
        .value("TopoDSToStep_VertexDone",TopoDSToStep_MakeVertexError::TopoDSToStep_VertexDone)
        .value("TopoDSToStep_VertexOther",TopoDSToStep_MakeVertexError::TopoDSToStep_VertexOther).export_values();
    py::enum_<TopoDSToStep_MakeEdgeError>(m, "TopoDSToStep_MakeEdgeError",R"#(None)#")
        .value("TopoDSToStep_EdgeDone",TopoDSToStep_MakeEdgeError::TopoDSToStep_EdgeDone)
        .value("TopoDSToStep_NonManifoldEdge",TopoDSToStep_MakeEdgeError::TopoDSToStep_NonManifoldEdge)
        .value("TopoDSToStep_EdgeOther",TopoDSToStep_MakeEdgeError::TopoDSToStep_EdgeOther).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<TopoDSToStep , shared_ptr<TopoDSToStep> >(m,"TopoDSToStep",R"#(This package implements the mapping between CAS.CAD Shape representation and AP214 Shape Representation. The target schema is pms_c4 (a subset of AP214))#");
    py::class_<TopoDSToStep_FacetedTool , shared_ptr<TopoDSToStep_FacetedTool> >(m,"TopoDSToStep_FacetedTool",R"#(This Tool Class provides Information about Faceted Shapes to be mapped to STEP.)#");
    py::class_<TopoDSToStep_Root , shared_ptr<TopoDSToStep_Root> >(m,"TopoDSToStep_Root",R"#(This class implements the common services for all classes of TopoDSToStep which report error.)#");
    py::class_<TopoDSToStep_Tool , shared_ptr<TopoDSToStep_Tool> >(m,"TopoDSToStep_Tool",R"#(This Tool Class provides Information to build a ProSTEP Shape model from a Cas.Cad BRep.)#");
    py::class_<TopoDSToStep_Builder , shared_ptr<TopoDSToStep_Builder> , TopoDSToStep_Root>(m,"TopoDSToStep_Builder",R"#(This builder Class provides services to build a ProSTEP Shape model from a Cas.Cad BRep.)#");
    py::class_<TopoDSToStep_MakeBrepWithVoids , shared_ptr<TopoDSToStep_MakeBrepWithVoids> , TopoDSToStep_Root>(m,"TopoDSToStep_MakeBrepWithVoids",R"#(This class implements the mapping between classes Solid from TopoDS and BrepWithVoids from StepShape. All the topology and geometry comprised into the shell or the solid are taken into account and translated.)#");
    py::class_<TopoDSToStep_MakeFacetedBrep , shared_ptr<TopoDSToStep_MakeFacetedBrep> , TopoDSToStep_Root>(m,"TopoDSToStep_MakeFacetedBrep",R"#(This class implements the mapping between classes Shell or Solid from TopoDS and FacetedBrep from StepShape. All the topology and geometry comprised into the shell or the solid are taken into account and translated.)#");
    py::class_<TopoDSToStep_MakeFacetedBrepAndBrepWithVoids , shared_ptr<TopoDSToStep_MakeFacetedBrepAndBrepWithVoids> , TopoDSToStep_Root>(m,"TopoDSToStep_MakeFacetedBrepAndBrepWithVoids",R"#(This class implements the mapping between classes Solid from TopoDS and FacetedBrepAndBrepWithVoids from StepShape. All the topology and geometry comprised into the shell or the solid are taken into account and translated.)#");
    py::class_<TopoDSToStep_MakeGeometricCurveSet , shared_ptr<TopoDSToStep_MakeGeometricCurveSet> , TopoDSToStep_Root>(m,"TopoDSToStep_MakeGeometricCurveSet",R"#(This class implements the mapping between a Shape from TopoDS and a GeometricCurveSet from StepShape in order to create a GeometricallyBoundedWireframeRepresentation.)#");
    py::class_<TopoDSToStep_MakeManifoldSolidBrep , shared_ptr<TopoDSToStep_MakeManifoldSolidBrep> , TopoDSToStep_Root>(m,"TopoDSToStep_MakeManifoldSolidBrep",R"#(This class implements the mapping between classes Shell or Solid from TopoDS and ManifoldSolidBrep from StepShape. All the topology and geometry comprised into the shell or the solid are taken into account and translated.)#");
    py::class_<TopoDSToStep_MakeShellBasedSurfaceModel , shared_ptr<TopoDSToStep_MakeShellBasedSurfaceModel> , TopoDSToStep_Root>(m,"TopoDSToStep_MakeShellBasedSurfaceModel",R"#(This class implements the mapping between classes Face, Shell or Solid from TopoDS and ShellBasedSurfaceModel from StepShape. All the topology and geometry comprised into the shape are taken into account and translated.)#");
    py::class_<TopoDSToStep_MakeStepEdge , shared_ptr<TopoDSToStep_MakeStepEdge> , TopoDSToStep_Root>(m,"TopoDSToStep_MakeStepEdge",R"#(This class implements the mapping between classes Edge from TopoDS and TopologicalRepresentationItem from StepShape.)#");
    py::class_<TopoDSToStep_MakeStepFace , shared_ptr<TopoDSToStep_MakeStepFace> , TopoDSToStep_Root>(m,"TopoDSToStep_MakeStepFace",R"#(This class implements the mapping between classes Face from TopoDS and TopologicalRepresentationItem from StepShape.)#");
    py::class_<TopoDSToStep_MakeStepVertex , shared_ptr<TopoDSToStep_MakeStepVertex> , TopoDSToStep_Root>(m,"TopoDSToStep_MakeStepVertex",R"#(This class implements the mapping between classes Vertex from TopoDS and TopologicalRepresentationItem from StepShape.)#");
    py::class_<TopoDSToStep_MakeStepWire , shared_ptr<TopoDSToStep_MakeStepWire> , TopoDSToStep_Root>(m,"TopoDSToStep_MakeStepWire",R"#(This class implements the mapping between classes Wire from TopoDS and TopologicalRepresentationItem from StepShape.)#");
    py::class_<TopoDSToStep_WireframeBuilder , shared_ptr<TopoDSToStep_WireframeBuilder> , TopoDSToStep_Root>(m,"TopoDSToStep_WireframeBuilder",R"#(This builder Class provides services to build a ProSTEP Wireframemodel from a Cas.Cad BRep.)#");

};

// user-defined post-inclusion per module

// user-defined post
