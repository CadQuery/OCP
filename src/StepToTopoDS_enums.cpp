
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <StepShape_PolyLoop.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_FaceBound.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <StepGeom_Surface.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <TopoDS_Shape.hxx>
#include <StepRepr_MappedItem.hxx>
#include <Transfer_TransientProcess.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepToTopoDS_Root.hxx>
#include <StepToTopoDS_TranslateShell.hxx>
#include <StepToTopoDS_TranslateFace.hxx>
#include <StepToTopoDS_TranslateEdgeLoop.hxx>
#include <StepToTopoDS_TranslateEdge.hxx>
#include <StepToTopoDS_TranslateVertex.hxx>
#include <StepToTopoDS_TranslatePolyLoop.hxx>
#include <StepToTopoDS_TranslateVertexLoop.hxx>
#include <StepToTopoDS_TranslateCompositeCurve.hxx>
#include <StepToTopoDS_TranslateCurveBoundedSurface.hxx>
#include <StepToTopoDS_Builder.hxx>
#include <StepToTopoDS_MakeTransformed.hxx>
#include <StepToTopoDS_GeometricTool.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_CartesianPointHasher.hxx>
#include <StepToTopoDS_PointPair.hxx>
#include <StepToTopoDS_PointPairHasher.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepGeom_CompositeCurve.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepGeom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_Vertex.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_Edge.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepGeom_Curve.hxx>
#include <StepShape_EdgeCurve.hxx>
#include <StepShape_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <StepGeom_Pcurve.hxx>
#include <Geom_Surface.hxx>
#include <StepToTopoDS_PointPair.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepToTopoDS_PointPairHasher.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_VertexLoop.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepShape_GeometricSet.hxx>
#include <StepShape_EdgeBasedWireframeModel.hxx>
#include <StepShape_FaceBasedSurfaceModel.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <StepGeom_SurfaceCurve.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepShape_Edge.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <Geom_Curve.hxx>

// module includes
#include <StepToTopoDS.hxx>
#include <StepToTopoDS_Builder.hxx>
#include <StepToTopoDS_BuilderError.hxx>
#include <StepToTopoDS_CartesianPointHasher.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfRI.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfRINames.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfTRI.hxx>
#include <StepToTopoDS_DataMapIteratorOfPointEdgeMap.hxx>
#include <StepToTopoDS_DataMapIteratorOfPointVertexMap.hxx>
#include <StepToTopoDS_DataMapOfRI.hxx>
#include <StepToTopoDS_DataMapOfRINames.hxx>
#include <StepToTopoDS_DataMapOfTRI.hxx>
#include <StepToTopoDS_GeometricTool.hxx>
#include <StepToTopoDS_GeometricToolError.hxx>
#include <StepToTopoDS_MakeTransformed.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepToTopoDS_PointEdgeMap.hxx>
#include <StepToTopoDS_PointPair.hxx>
#include <StepToTopoDS_PointPairHasher.hxx>
#include <StepToTopoDS_PointVertexMap.hxx>
#include <StepToTopoDS_Root.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_TranslateCompositeCurve.hxx>
#include <StepToTopoDS_TranslateCurveBoundedSurface.hxx>
#include <StepToTopoDS_TranslateEdge.hxx>
#include <StepToTopoDS_TranslateEdgeError.hxx>
#include <StepToTopoDS_TranslateEdgeLoop.hxx>
#include <StepToTopoDS_TranslateEdgeLoopError.hxx>
#include <StepToTopoDS_TranslateFace.hxx>
#include <StepToTopoDS_TranslateFaceError.hxx>
#include <StepToTopoDS_TranslatePolyLoop.hxx>
#include <StepToTopoDS_TranslatePolyLoopError.hxx>
#include <StepToTopoDS_TranslateShell.hxx>
#include <StepToTopoDS_TranslateShellError.hxx>
#include <StepToTopoDS_TranslateVertex.hxx>
#include <StepToTopoDS_TranslateVertexError.hxx>
#include <StepToTopoDS_TranslateVertexLoop.hxx>
#include <StepToTopoDS_TranslateVertexLoopError.hxx>

// template related includes
// ./opencascade/StepToTopoDS_DataMapOfTRI.hxx
#include "NCollection.hxx"
// ./opencascade/StepToTopoDS_DataMapOfTRI.hxx
#include "NCollection.hxx"
// ./opencascade/StepToTopoDS_DataMapOfRINames.hxx
#include "NCollection.hxx"
// ./opencascade/StepToTopoDS_DataMapOfRINames.hxx
#include "NCollection.hxx"
// ./opencascade/StepToTopoDS_DataMapOfRI.hxx
#include "NCollection.hxx"
// ./opencascade/StepToTopoDS_DataMapOfRI.hxx
#include "NCollection.hxx"
// ./opencascade/StepToTopoDS_PointVertexMap.hxx
#include "NCollection.hxx"
// ./opencascade/StepToTopoDS_PointVertexMap.hxx
#include "NCollection.hxx"
// ./opencascade/StepToTopoDS_PointEdgeMap.hxx
#include "NCollection.hxx"
// ./opencascade/StepToTopoDS_PointEdgeMap.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepToTopoDS_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepToTopoDS", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<StepToTopoDS_TranslateShellError>(m, "StepToTopoDS_TranslateShellError",R"#(None)#")
        .value("StepToTopoDS_TranslateShellDone",StepToTopoDS_TranslateShellError::StepToTopoDS_TranslateShellDone)
        .value("StepToTopoDS_TranslateShellOther",StepToTopoDS_TranslateShellError::StepToTopoDS_TranslateShellOther).export_values();
    py::enum_<StepToTopoDS_TranslateEdgeError>(m, "StepToTopoDS_TranslateEdgeError",R"#(None)#")
        .value("StepToTopoDS_TranslateEdgeDone",StepToTopoDS_TranslateEdgeError::StepToTopoDS_TranslateEdgeDone)
        .value("StepToTopoDS_TranslateEdgeOther",StepToTopoDS_TranslateEdgeError::StepToTopoDS_TranslateEdgeOther).export_values();
    py::enum_<StepToTopoDS_TranslateVertexError>(m, "StepToTopoDS_TranslateVertexError",R"#(None)#")
        .value("StepToTopoDS_TranslateVertexDone",StepToTopoDS_TranslateVertexError::StepToTopoDS_TranslateVertexDone)
        .value("StepToTopoDS_TranslateVertexOther",StepToTopoDS_TranslateVertexError::StepToTopoDS_TranslateVertexOther).export_values();
    py::enum_<StepToTopoDS_BuilderError>(m, "StepToTopoDS_BuilderError",R"#(None)#")
        .value("StepToTopoDS_BuilderDone",StepToTopoDS_BuilderError::StepToTopoDS_BuilderDone)
        .value("StepToTopoDS_BuilderOther",StepToTopoDS_BuilderError::StepToTopoDS_BuilderOther).export_values();
    py::enum_<StepToTopoDS_TranslatePolyLoopError>(m, "StepToTopoDS_TranslatePolyLoopError",R"#(None)#")
        .value("StepToTopoDS_TranslatePolyLoopDone",StepToTopoDS_TranslatePolyLoopError::StepToTopoDS_TranslatePolyLoopDone)
        .value("StepToTopoDS_TranslatePolyLoopOther",StepToTopoDS_TranslatePolyLoopError::StepToTopoDS_TranslatePolyLoopOther).export_values();
    py::enum_<StepToTopoDS_TranslateEdgeLoopError>(m, "StepToTopoDS_TranslateEdgeLoopError",R"#(None)#")
        .value("StepToTopoDS_TranslateEdgeLoopDone",StepToTopoDS_TranslateEdgeLoopError::StepToTopoDS_TranslateEdgeLoopDone)
        .value("StepToTopoDS_TranslateEdgeLoopOther",StepToTopoDS_TranslateEdgeLoopError::StepToTopoDS_TranslateEdgeLoopOther).export_values();
    py::enum_<StepToTopoDS_GeometricToolError>(m, "StepToTopoDS_GeometricToolError",R"#(None)#")
        .value("StepToTopoDS_GeometricToolDone",StepToTopoDS_GeometricToolError::StepToTopoDS_GeometricToolDone)
        .value("StepToTopoDS_GeometricToolIsDegenerated",StepToTopoDS_GeometricToolError::StepToTopoDS_GeometricToolIsDegenerated)
        .value("StepToTopoDS_GeometricToolHasNoPCurve",StepToTopoDS_GeometricToolError::StepToTopoDS_GeometricToolHasNoPCurve)
        .value("StepToTopoDS_GeometricToolWrong3dParameters",StepToTopoDS_GeometricToolError::StepToTopoDS_GeometricToolWrong3dParameters)
        .value("StepToTopoDS_GeometricToolNoProjectiOnCurve",StepToTopoDS_GeometricToolError::StepToTopoDS_GeometricToolNoProjectiOnCurve)
        .value("StepToTopoDS_GeometricToolOther",StepToTopoDS_GeometricToolError::StepToTopoDS_GeometricToolOther).export_values();
    py::enum_<StepToTopoDS_TranslateFaceError>(m, "StepToTopoDS_TranslateFaceError",R"#(None)#")
        .value("StepToTopoDS_TranslateFaceDone",StepToTopoDS_TranslateFaceError::StepToTopoDS_TranslateFaceDone)
        .value("StepToTopoDS_TranslateFaceOther",StepToTopoDS_TranslateFaceError::StepToTopoDS_TranslateFaceOther).export_values();
    py::enum_<StepToTopoDS_TranslateVertexLoopError>(m, "StepToTopoDS_TranslateVertexLoopError",R"#(None)#")
        .value("StepToTopoDS_TranslateVertexLoopDone",StepToTopoDS_TranslateVertexLoopError::StepToTopoDS_TranslateVertexLoopDone)
        .value("StepToTopoDS_TranslateVertexLoopOther",StepToTopoDS_TranslateVertexLoopError::StepToTopoDS_TranslateVertexLoopOther).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<opencascade::handle<StepShape_TopologicalRepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"StepToTopoDS_DataMapOfTRI");  
    preregister_template_NCollection_DataMap<TCollection_AsciiString, TopoDS_Shape, TCollection_AsciiString>(m,"StepToTopoDS_DataMapOfRINames");  
    preregister_template_NCollection_DataMap<opencascade::handle<StepRepr_RepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"StepToTopoDS_DataMapOfRI");  
    preregister_template_NCollection_DataMap<opencascade::handle<StepGeom_CartesianPoint>, TopoDS_Vertex, StepToTopoDS_CartesianPointHasher>(m,"StepToTopoDS_PointVertexMap");  
    preregister_template_NCollection_DataMap<StepToTopoDS_PointPair, TopoDS_Edge, StepToTopoDS_PointPairHasher>(m,"StepToTopoDS_PointEdgeMap");  

// classes forward declarations only
    py::class_<StepToTopoDS , shared_ptr<StepToTopoDS>  >(m,"StepToTopoDS",R"#(This package implements the mapping between AP214 Shape representation and CAS.CAD Shape Representation. The source schema is Part42 (which is included in AP214))#");
    py::class_<StepToTopoDS_CartesianPointHasher , shared_ptr<StepToTopoDS_CartesianPointHasher>  >(m,"StepToTopoDS_CartesianPointHasher",R"#(None)#");
    py::class_<StepToTopoDS_GeometricTool , shared_ptr<StepToTopoDS_GeometricTool>  >(m,"StepToTopoDS_GeometricTool",R"#(This class contains some algorithmic services specific to the mapping STEP to CAS.CADE)#");
    py::class_<StepToTopoDS_NMTool , shared_ptr<StepToTopoDS_NMTool>  >(m,"StepToTopoDS_NMTool",R"#(Provides data to process non-manifold topology when reading from STEP.)#");
    py::class_<StepToTopoDS_PointPair , shared_ptr<StepToTopoDS_PointPair>  >(m,"StepToTopoDS_PointPair",R"#(Stores a pair of Points from step)#");
    py::class_<StepToTopoDS_PointPairHasher , shared_ptr<StepToTopoDS_PointPairHasher>  >(m,"StepToTopoDS_PointPairHasher",R"#(None)#");
    py::class_<StepToTopoDS_Root , shared_ptr<StepToTopoDS_Root>  >(m,"StepToTopoDS_Root",R"#(This class implements the common services for all classes of StepToTopoDS which report error and sets and returns precision.)#");
    py::class_<StepToTopoDS_Tool , shared_ptr<StepToTopoDS_Tool>  >(m,"StepToTopoDS_Tool",R"#(This Tool Class provides Information to build a Cas.Cad BRep from a ProSTEP Shape model.)#");
    py::class_<StepToTopoDS_Builder , shared_ptr<StepToTopoDS_Builder>  , StepToTopoDS_Root >(m,"StepToTopoDS_Builder",R"#(None)#");
    py::class_<StepToTopoDS_MakeTransformed , shared_ptr<StepToTopoDS_MakeTransformed>  , StepToTopoDS_Root >(m,"StepToTopoDS_MakeTransformed",R"#(Produces instances by Transformation of a basic item)#");
    py::class_<StepToTopoDS_TranslateCompositeCurve , shared_ptr<StepToTopoDS_TranslateCompositeCurve>  , StepToTopoDS_Root >(m,"StepToTopoDS_TranslateCompositeCurve",R"#(Translate STEP entity composite_curve to TopoDS_Wire If surface is given, the curve is assumed to lie on that surface and in case if any segment of it is a curve_on_surface, the pcurve for that segment will be taken. Note: a segment of composite_curve may be itself composite_curve. Only one-level protection against cyclic references is implemented.)#");
    py::class_<StepToTopoDS_TranslateCurveBoundedSurface , shared_ptr<StepToTopoDS_TranslateCurveBoundedSurface>  , StepToTopoDS_Root >(m,"StepToTopoDS_TranslateCurveBoundedSurface",R"#(Translate curve_bounded_surface into TopoDS_Face)#");
    py::class_<StepToTopoDS_TranslateEdge , shared_ptr<StepToTopoDS_TranslateEdge>  , StepToTopoDS_Root >(m,"StepToTopoDS_TranslateEdge",R"#(None)#");
    py::class_<StepToTopoDS_TranslateEdgeLoop , shared_ptr<StepToTopoDS_TranslateEdgeLoop>  , StepToTopoDS_Root >(m,"StepToTopoDS_TranslateEdgeLoop",R"#(None)#");
    py::class_<StepToTopoDS_TranslateFace , shared_ptr<StepToTopoDS_TranslateFace>  , StepToTopoDS_Root >(m,"StepToTopoDS_TranslateFace",R"#(None)#");
    py::class_<StepToTopoDS_TranslatePolyLoop , shared_ptr<StepToTopoDS_TranslatePolyLoop>  , StepToTopoDS_Root >(m,"StepToTopoDS_TranslatePolyLoop",R"#(None)#");
    py::class_<StepToTopoDS_TranslateShell , shared_ptr<StepToTopoDS_TranslateShell>  , StepToTopoDS_Root >(m,"StepToTopoDS_TranslateShell",R"#(None)#");
    py::class_<StepToTopoDS_TranslateVertex , shared_ptr<StepToTopoDS_TranslateVertex>  , StepToTopoDS_Root >(m,"StepToTopoDS_TranslateVertex",R"#(None)#");
    py::class_<StepToTopoDS_TranslateVertexLoop , shared_ptr<StepToTopoDS_TranslateVertexLoop>  , StepToTopoDS_Root >(m,"StepToTopoDS_TranslateVertexLoop",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
