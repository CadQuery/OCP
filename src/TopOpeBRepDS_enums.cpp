
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <Geom2d_Curve.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <Geom2d_Curve.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <Geom2d_Curve.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_SurfaceExplorer.hxx>
#include <TopOpeBRepDS_CurveExplorer.hxx>
#include <TopOpeBRepDS_PointExplorer.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_GapTool.hxx>
#include <TopOpeBRepDS_Association.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_InterferenceIterator.hxx>
#include <TopOpeBRepDS_TKI.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRepDS_CurvePointInterference.hxx>
#include <TopOpeBRepDS_SurfaceCurveInterference.hxx>
#include <TopOpeBRepDS_SolidSurfaceInterference.hxx>
#include <TopOpeBRepDS_ShapeShapeInterference.hxx>
#include <TopOpeBRepDS_EdgeVertexInterference.hxx>
#include <TopOpeBRepDS_FaceEdgeInterference.hxx>
#include <TopOpeBRepDS_Surface.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_GeometryData.hxx>
#include <TopOpeBRepDS_SurfaceData.hxx>
#include <TopOpeBRepDS_CurveData.hxx>
#include <TopOpeBRepDS_PointData.hxx>
#include <TopOpeBRepDS_ShapeData.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepDS_SurfaceExplorer.hxx>
#include <TopOpeBRepDS_CurveExplorer.hxx>
#include <TopOpeBRepDS_PointExplorer.hxx>
#include <TopOpeBRepDS_InterferenceTool.hxx>
#include <TopOpeBRepDS_BuildTool.hxx>
#include <TopOpeBRepDS_Dumper.hxx>
#include <TopOpeBRepDS_Marker.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_EdgeInterferenceTool.hxx>
#include <TopOpeBRepDS_Edge3dInterferenceTool.hxx>
#include <TopOpeBRepDS_FaceInterferenceTool.hxx>
#include <TopOpeBRepDS_Filter.hxx>
#include <TopOpeBRepDS_Reducer.hxx>
#include <TopOpeBRepDS_TOOL.hxx>
#include <TopOpeBRepDS_FIR.hxx>
#include <TopOpeBRepDS_EIR.hxx>
#include <TopOpeBRepDS_Check.hxx>
#include <TopOpeBRepDS_GapFiller.hxx>
#include <TopOpeBRepDS_GapTool.hxx>
#include <TopOpeBRepDS_Association.hxx>
#include <TopOpeBRepDS_ListOfShapeOn1State.hxx>
#include <TopOpeBRepDS_Explorer.hxx>
#include <TopOpeBRepDS_ShapeWithState.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <TopOpeBRepDS.hxx>
#include <TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference.hxx>
#include <TopOpeBRepDS_Association.hxx>
#include <TopOpeBRepDS_BuildTool.hxx>
#include <TopOpeBRepDS_Check.hxx>
#include <TopOpeBRepDS_CheckStatus.hxx>
#include <TopOpeBRepDS_Config.hxx>
#include <TopOpeBRepDS_connex.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_CurveData.hxx>
#include <TopOpeBRepDS_CurveExplorer.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <TopOpeBRepDS_CurvePointInterference.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceListOfInterference.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeListOfShapeOn1State.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeState.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfMapOfCurve.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfMapOfPoint.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfMapOfSurface.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfShapeSurface.hxx>
#include <TopOpeBRepDS_DataMapOfCheckStatus.hxx>
#include <TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx>
#include <TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx>
#include <TopOpeBRepDS_DataMapOfInterferenceShape.hxx>
#include <TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx>
#include <TopOpeBRepDS_DataMapOfShapeState.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_define.hxx>
#include <TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape.hxx>
#include <TopOpeBRepDS_DoubleMapOfIntegerShape.hxx>
#include <TopOpeBRepDS_DRAW.hxx>
#include <TopOpeBRepDS_Dumper.hxx>
#include <TopOpeBRepDS_Edge3dInterferenceTool.hxx>
#include <TopOpeBRepDS_EdgeInterferenceTool.hxx>
#include <TopOpeBRepDS_EdgeVertexInterference.hxx>
#include <TopOpeBRepDS_EIR.hxx>
#include <TopOpeBRepDS_Explorer.hxx>
#include <TopOpeBRepDS_EXPORT.hxx>
#include <TopOpeBRepDS_FaceEdgeInterference.hxx>
#include <TopOpeBRepDS_FaceInterferenceTool.hxx>
#include <TopOpeBRepDS_Filter.hxx>
#include <TopOpeBRepDS_FIR.hxx>
#include <TopOpeBRepDS_GapFiller.hxx>
#include <TopOpeBRepDS_GapTool.hxx>
#include <TopOpeBRepDS_GeometryData.hxx>
#include <TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_IndexedDataMapOfShapeWithState.hxx>
#include <TopOpeBRepDS_IndexedDataMapOfVertexPoint.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_InterferenceIterator.hxx>
#include <TopOpeBRepDS_InterferenceTool.hxx>
#include <TopOpeBRepDS_Kind.hxx>
#include <TopOpeBRepDS_ListIteratorOfListOfInterference.hxx>
#include <TopOpeBRepDS_ListOfInterference.hxx>
#include <TopOpeBRepDS_ListOfShapeOn1State.hxx>
#include <TopOpeBRepDS_MapOfCurve.hxx>
#include <TopOpeBRepDS_MapOfIntegerShapeData.hxx>
#include <TopOpeBRepDS_MapOfPoint.hxx>
#include <TopOpeBRepDS_MapOfShapeData.hxx>
#include <TopOpeBRepDS_MapOfSurface.hxx>
#include <TopOpeBRepDS_Marker.hxx>
#include <TopOpeBRepDS_PDataStructure.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_PointData.hxx>
#include <TopOpeBRepDS_PointExplorer.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepDS_ProcessInterferencesTool.hxx>
#include <TopOpeBRepDS_Reducer.hxx>
#include <TopOpeBRepDS_repvg.hxx>
#include <TopOpeBRepDS_samdom.hxx>
#include <TopOpeBRepDS_ShapeData.hxx>
#include <TopOpeBRepDS_ShapeShapeInterference.hxx>
#include <TopOpeBRepDS_ShapeSurface.hxx>
#include <TopOpeBRepDS_ShapeWithState.hxx>
#include <TopOpeBRepDS_SolidSurfaceInterference.hxx>
#include <TopOpeBRepDS_Surface.hxx>
#include <TopOpeBRepDS_SurfaceCurveInterference.hxx>
#include <TopOpeBRepDS_SurfaceData.hxx>
#include <TopOpeBRepDS_SurfaceExplorer.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <TopOpeBRepDS_TKI.hxx>
#include <TopOpeBRepDS_TOOL.hxx>
#include <TopOpeBRepDS_Transition.hxx>

// template related includes
// ./opencascade/TopOpeBRepDS_DataMapOfShapeState.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfShapeState.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_MapOfIntegerShapeData.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_MapOfIntegerShapeData.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_MapOfShapeData.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_MapOfPoint.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_MapOfPoint.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_ShapeSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_MapOfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_MapOfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_ListOfInterference.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_ListOfInterference.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_IndexedDataMapOfShapeWithState.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_MapOfSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_MapOfSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DoubleMapOfIntegerShape.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DoubleMapOfIntegerShape.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceShape.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceShape.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_IndexedDataMapOfVertexPoint.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfCheckStatus.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfCheckStatus.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopOpeBRepDS_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopOpeBRepDS", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TopOpeBRepDS_Kind>(m, "TopOpeBRepDS_Kind",R"#(different types of objects in DataStructure)#")
        .value("TopOpeBRepDS_POINT",TopOpeBRepDS_Kind::TopOpeBRepDS_POINT)
        .value("TopOpeBRepDS_CURVE",TopOpeBRepDS_Kind::TopOpeBRepDS_CURVE)
        .value("TopOpeBRepDS_SURFACE",TopOpeBRepDS_Kind::TopOpeBRepDS_SURFACE)
        .value("TopOpeBRepDS_VERTEX",TopOpeBRepDS_Kind::TopOpeBRepDS_VERTEX)
        .value("TopOpeBRepDS_EDGE",TopOpeBRepDS_Kind::TopOpeBRepDS_EDGE)
        .value("TopOpeBRepDS_WIRE",TopOpeBRepDS_Kind::TopOpeBRepDS_WIRE)
        .value("TopOpeBRepDS_FACE",TopOpeBRepDS_Kind::TopOpeBRepDS_FACE)
        .value("TopOpeBRepDS_SHELL",TopOpeBRepDS_Kind::TopOpeBRepDS_SHELL)
        .value("TopOpeBRepDS_SOLID",TopOpeBRepDS_Kind::TopOpeBRepDS_SOLID)
        .value("TopOpeBRepDS_COMPSOLID",TopOpeBRepDS_Kind::TopOpeBRepDS_COMPSOLID)
        .value("TopOpeBRepDS_COMPOUND",TopOpeBRepDS_Kind::TopOpeBRepDS_COMPOUND)
        .value("TopOpeBRepDS_UNKNOWN",TopOpeBRepDS_Kind::TopOpeBRepDS_UNKNOWN).export_values();
    py::enum_<TopOpeBRepDS_CheckStatus>(m, "TopOpeBRepDS_CheckStatus",R"#(None)#")
        .value("TopOpeBRepDS_OK",TopOpeBRepDS_CheckStatus::TopOpeBRepDS_OK)
        .value("TopOpeBRepDS_NOK",TopOpeBRepDS_CheckStatus::TopOpeBRepDS_NOK).export_values();
    py::enum_<TopOpeBRepDS_Config>(m, "TopOpeBRepDS_Config",R"#(None)#")
        .value("TopOpeBRepDS_UNSHGEOMETRY",TopOpeBRepDS_Config::TopOpeBRepDS_UNSHGEOMETRY)
        .value("TopOpeBRepDS_SAMEORIENTED",TopOpeBRepDS_Config::TopOpeBRepDS_SAMEORIENTED)
        .value("TopOpeBRepDS_DIFFORIENTED",TopOpeBRepDS_Config::TopOpeBRepDS_DIFFORIENTED).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<TopOpeBRepDS_InterferenceIterator ,std::unique_ptr<TopOpeBRepDS_InterferenceIterator>  >(m,"TopOpeBRepDS_InterferenceIterator",R"#(Iterate on interferences of a list, matching conditions on interferences. Nota : inheritance of ListIteratorOfListOfInterference from TopOpeBRepDS has not been done because of the impossibility of naming the classical More, Next methods which are declared as static in TCollection_ListIteratorOfList ... . ListIteratorOfList has benn placed as a field of InterferenceIterator.)#");
    py::class_<TopOpeBRepDS_GeometryData ,std::unique_ptr<TopOpeBRepDS_GeometryData>  >(m,"TopOpeBRepDS_GeometryData",R"#(mother-class of SurfaceData, CurveData, PointData)#");
    py::class_<TopOpeBRepDS_SurfaceExplorer ,std::unique_ptr<TopOpeBRepDS_SurfaceExplorer>  >(m,"TopOpeBRepDS_SurfaceExplorer",R"#(None)#");
    py::class_<TopOpeBRepDS_BuildTool ,std::unique_ptr<TopOpeBRepDS_BuildTool>  >(m,"TopOpeBRepDS_BuildTool",R"#(Provides a Tool to build topologies. Used to instantiate the Builder algorithm.)#");
    py::class_<TopOpeBRepDS_TKI ,std::unique_ptr<TopOpeBRepDS_TKI>  >(m,"TopOpeBRepDS_TKI",R"#(None)#");
    py::class_<TopOpeBRepDS_ShapeData ,std::unique_ptr<TopOpeBRepDS_ShapeData>  >(m,"TopOpeBRepDS_ShapeData",R"#(None)#");
    py::class_<TopOpeBRepDS_Curve ,std::unique_ptr<TopOpeBRepDS_Curve>  >(m,"TopOpeBRepDS_Curve",R"#(A Geom curve and a tolerance.)#");
    py::class_<TopOpeBRepDS_Association ,opencascade::handle<TopOpeBRepDS_Association>  , Standard_Transient >(m,"TopOpeBRepDS_Association",R"#()#");
    py::class_<TopOpeBRepDS_Marker ,opencascade::handle<TopOpeBRepDS_Marker>  , Standard_Transient >(m,"TopOpeBRepDS_Marker",R"#()#");
    py::class_<TopOpeBRepDS_Interference ,opencascade::handle<TopOpeBRepDS_Interference>  , Standard_Transient >(m,"TopOpeBRepDS_Interference",R"#(An interference is the description of the attachment of a new geometry on a geometry. For example an intersection point on an Edge or on a Curve.An interference is the description of the attachment of a new geometry on a geometry. For example an intersection point on an Edge or on a Curve.An interference is the description of the attachment of a new geometry on a geometry. For example an intersection point on an Edge or on a Curve.)#");
    py::class_<TopOpeBRepDS_CurveData ,std::unique_ptr<TopOpeBRepDS_CurveData>  , TopOpeBRepDS_GeometryData >(m,"TopOpeBRepDS_CurveData",R"#(None)#");
    py::class_<TopOpeBRepDS_SurfaceData ,std::unique_ptr<TopOpeBRepDS_SurfaceData>  , TopOpeBRepDS_GeometryData >(m,"TopOpeBRepDS_SurfaceData",R"#(None)#");
    py::class_<TopOpeBRepDS_SurfaceCurveInterference ,opencascade::handle<TopOpeBRepDS_SurfaceCurveInterference>  , TopOpeBRepDS_Interference >(m,"TopOpeBRepDS_SurfaceCurveInterference",R"#(an interference with a 2d curvean interference with a 2d curvean interference with a 2d curve)#");
    py::class_<TopOpeBRepDS_FaceInterferenceTool ,std::unique_ptr<TopOpeBRepDS_FaceInterferenceTool>  >(m,"TopOpeBRepDS_FaceInterferenceTool",R"#(a tool computing complex transition on Face.)#");
    py::class_<TopOpeBRepDS_SolidSurfaceInterference ,opencascade::handle<TopOpeBRepDS_SolidSurfaceInterference>  , TopOpeBRepDS_Interference >(m,"TopOpeBRepDS_SolidSurfaceInterference",R"#(InterferenceInterferenceInterference)#");
    py::class_<TopOpeBRepDS_SurfaceIterator ,std::unique_ptr<TopOpeBRepDS_SurfaceIterator>  , TopOpeBRepDS_InterferenceIterator >(m,"TopOpeBRepDS_SurfaceIterator",R"#(None)#");
    py::class_<TopOpeBRepDS_Point ,std::unique_ptr<TopOpeBRepDS_Point>  >(m,"TopOpeBRepDS_Point",R"#(A Geom point and a tolerance.)#");
    py::class_<TopOpeBRepDS_Filter ,std::unique_ptr<TopOpeBRepDS_Filter>  >(m,"TopOpeBRepDS_Filter",R"#(None)#");
    py::class_<TopOpeBRepDS_EIR ,std::unique_ptr<TopOpeBRepDS_EIR>  >(m,"TopOpeBRepDS_EIR",R"#(EdgeInterferenceReducer)#");
    py::class_<TopOpeBRepDS_ShapeWithState ,std::unique_ptr<TopOpeBRepDS_ShapeWithState>  >(m,"TopOpeBRepDS_ShapeWithState",R"#(None)#");
    py::class_<TopOpeBRepDS_CurvePointInterference ,opencascade::handle<TopOpeBRepDS_CurvePointInterference>  , TopOpeBRepDS_Interference >(m,"TopOpeBRepDS_CurvePointInterference",R"#(An interference with a parameter.An interference with a parameter.An interference with a parameter.)#");
    py::class_<TopOpeBRepDS_PointData ,std::unique_ptr<TopOpeBRepDS_PointData>  , TopOpeBRepDS_GeometryData >(m,"TopOpeBRepDS_PointData",R"#(None)#");
    py::class_<TopOpeBRepDS ,std::unique_ptr<TopOpeBRepDS>  >(m,"TopOpeBRepDS",R"#(This package provides services used by the TopOpeBRepBuild package performing topological operations on the BRep data structure.)#");
    py::class_<TopOpeBRepDS_Surface ,std::unique_ptr<TopOpeBRepDS_Surface>  >(m,"TopOpeBRepDS_Surface",R"#(A Geom surface and a tolerance.)#");
    py::class_<TopOpeBRepDS_InterferenceTool ,std::unique_ptr<TopOpeBRepDS_InterferenceTool>  >(m,"TopOpeBRepDS_InterferenceTool",R"#(None)#");
    py::class_<TopOpeBRepDS_Transition ,std::unique_ptr<TopOpeBRepDS_Transition>  >(m,"TopOpeBRepDS_Transition",R"#(None)#");
    py::class_<TopOpeBRepDS_Dumper ,std::unique_ptr<TopOpeBRepDS_Dumper>  >(m,"TopOpeBRepDS_Dumper",R"#(None)#");
    py::class_<TopOpeBRepDS_PointExplorer ,std::unique_ptr<TopOpeBRepDS_PointExplorer>  >(m,"TopOpeBRepDS_PointExplorer",R"#(None)#");
    py::class_<TopOpeBRepDS_CurveIterator ,std::unique_ptr<TopOpeBRepDS_CurveIterator>  , TopOpeBRepDS_InterferenceIterator >(m,"TopOpeBRepDS_CurveIterator",R"#(None)#");
    py::class_<TopOpeBRepDS_GapTool ,opencascade::handle<TopOpeBRepDS_GapTool>  , Standard_Transient >(m,"TopOpeBRepDS_GapTool",R"#()#");
    py::class_<TopOpeBRepDS_PointIterator ,std::unique_ptr<TopOpeBRepDS_PointIterator>  , TopOpeBRepDS_InterferenceIterator >(m,"TopOpeBRepDS_PointIterator",R"#(None)#");
    py::class_<TopOpeBRepDS_ListOfShapeOn1State ,std::unique_ptr<TopOpeBRepDS_ListOfShapeOn1State>  >(m,"TopOpeBRepDS_ListOfShapeOn1State",R"#(represent a list of shape)#");
    py::class_<TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference ,std::unique_ptr<TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference>  >(m,"TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference",R"#()#");
    py::class_<TopOpeBRepDS_FIR ,std::unique_ptr<TopOpeBRepDS_FIR>  >(m,"TopOpeBRepDS_FIR",R"#(FaceInterferenceReducer)#");
    py::class_<TopOpeBRepDS_CurveExplorer ,std::unique_ptr<TopOpeBRepDS_CurveExplorer>  >(m,"TopOpeBRepDS_CurveExplorer",R"#(None)#");
    py::class_<TopOpeBRepDS_EdgeInterferenceTool ,std::unique_ptr<TopOpeBRepDS_EdgeInterferenceTool>  >(m,"TopOpeBRepDS_EdgeInterferenceTool",R"#(a tool computing complex transition on Edge.)#");
    py::class_<TopOpeBRepDS_Check ,opencascade::handle<TopOpeBRepDS_Check>  , Standard_Transient >(m,"TopOpeBRepDS_Check",R"#(a tool verifing integrity and structure of DSa tool verifing integrity and structure of DSa tool verifing integrity and structure of DS)#");
    py::class_<TopOpeBRepDS_HDataStructure ,opencascade::handle<TopOpeBRepDS_HDataStructure>  , Standard_Transient >(m,"TopOpeBRepDS_HDataStructure",R"#()#");
    py::class_<TopOpeBRepDS_Reducer ,std::unique_ptr<TopOpeBRepDS_Reducer>  >(m,"TopOpeBRepDS_Reducer",R"#(reduce interferences of a data structure (HDS) used in topological operations.)#");
    py::class_<TopOpeBRepDS_DataStructure ,std::unique_ptr<TopOpeBRepDS_DataStructure>  >(m,"TopOpeBRepDS_DataStructure",R"#(The DataStructure stores :)#");
    py::class_<TopOpeBRepDS_GapFiller ,std::unique_ptr<TopOpeBRepDS_GapFiller>  >(m,"TopOpeBRepDS_GapFiller",R"#(None)#");
    py::class_<TopOpeBRepDS_Edge3dInterferenceTool ,std::unique_ptr<TopOpeBRepDS_Edge3dInterferenceTool>  >(m,"TopOpeBRepDS_Edge3dInterferenceTool",R"#(a tool computing edge / face complex transition, Interferences of edge reference are given by I = (T on face, G = point or vertex, S = edge))#");
    py::class_<TopOpeBRepDS_TOOL ,std::unique_ptr<TopOpeBRepDS_TOOL>  >(m,"TopOpeBRepDS_TOOL",R"#(None)#");
    py::class_<TopOpeBRepDS_ShapeShapeInterference ,opencascade::handle<TopOpeBRepDS_ShapeShapeInterference>  , TopOpeBRepDS_Interference >(m,"TopOpeBRepDS_ShapeShapeInterference",R"#(InterferenceInterferenceInterference)#");
    py::class_<TopOpeBRepDS_Explorer ,std::unique_ptr<TopOpeBRepDS_Explorer>  >(m,"TopOpeBRepDS_Explorer",R"#(None)#");
    py::class_<TopOpeBRepDS_FaceEdgeInterference ,opencascade::handle<TopOpeBRepDS_FaceEdgeInterference>  , TopOpeBRepDS_ShapeShapeInterference >(m,"TopOpeBRepDS_FaceEdgeInterference",R"#(ShapeShapeInterferenceShapeShapeInterferenceShapeShapeInterference)#");
    py::class_<TopOpeBRepDS_EdgeVertexInterference ,opencascade::handle<TopOpeBRepDS_EdgeVertexInterference>  , TopOpeBRepDS_ShapeShapeInterference >(m,"TopOpeBRepDS_EdgeVertexInterference",R"#(An interference with a parameter (ShapeShapeInterference).An interference with a parameter (ShapeShapeInterference).An interference with a parameter (ShapeShapeInterference).)#");

// pre-register typdefs
// ./opencascade/TopOpeBRepDS_DataMapOfShapeState.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_DataMapOfShapeState");  
// ./opencascade/TopOpeBRepDS_MapOfIntegerShapeData.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_ShapeData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfIntegerShapeData");  
// ./opencascade/TopOpeBRepDS_SurfaceExplorer.hxx
// ./opencascade/TopOpeBRepDS_Transition.hxx
// ./opencascade/TopOpeBRepDS_BuildTool.hxx
// ./opencascade/TopOpeBRepDS_Check.hxx
// ./opencascade/TopOpeBRepDS_Kind.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfMapOfSurface.hxx
// ./opencascade/TopOpeBRepDS_TKI.hxx
// ./opencascade/TopOpeBRepDS_Dumper.hxx
// ./opencascade/TopOpeBRepDS_ShapeData.hxx
// ./opencascade/TopOpeBRepDS_TOOL.hxx
// ./opencascade/TopOpeBRepDS_Curve.hxx
// ./opencascade/TopOpeBRepDS_PointExplorer.hxx
// ./opencascade/TopOpeBRepDS_Association.hxx
// ./opencascade/TopOpeBRepDS_MapOfShapeData.hxx
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeData, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_MapOfShapeData");  
// ./opencascade/TopOpeBRepDS_HDataStructure.hxx
// ./opencascade/TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State");  
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_Marker.hxx
// ./opencascade/TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference.hxx
    preregister_template_NCollection_Array1<TopOpeBRepDS_DataMapOfIntegerListOfInterference>(m,"TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference");  
// ./opencascade/TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_ListOfInterference, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_DataMapOfIntegerListOfInterference");  
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData.hxx
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx
    preregister_template_NCollection_DataMap<opencascade::handle<TopOpeBRepDS_Interference>, TopOpeBRepDS_ListOfInterference, TColStd_MapTransientHasher>(m,"TopOpeBRepDS_DataMapOfInterferenceListOfInterference");  
// ./opencascade/TopOpeBRepDS_repvg.hxx
// ./opencascade/TopOpeBRepDS_DRAW.hxx
// ./opencascade/TopOpeBRepDS_EXPORT.hxx
// ./opencascade/TopOpeBRepDS_CurveIterator.hxx
// ./opencascade/TopOpeBRepDS_Interference.hxx
// ./opencascade/TopOpeBRepDS_Explorer.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape.hxx
// ./opencascade/TopOpeBRepDS_CurveData.hxx
// ./opencascade/TopOpeBRepDS_GapTool.hxx
// ./opencascade/TopOpeBRepDS_SurfaceData.hxx
// ./opencascade/TopOpeBRepDS_Reducer.hxx
// ./opencascade/TopOpeBRepDS_MapOfPoint.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_PointData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfPoint");  
// ./opencascade/TopOpeBRepDS_ShapeSurface.hxx
// ./opencascade/TopOpeBRepDS_GeometryData.hxx
// ./opencascade/TopOpeBRepDS_SurfaceCurveInterference.hxx
// ./opencascade/TopOpeBRepDS_PointIterator.hxx
// ./opencascade/TopOpeBRepDS_FaceInterferenceTool.hxx
// ./opencascade/TopOpeBRepDS_connex.hxx
// ./opencascade/TopOpeBRepDS_EdgeVertexInterference.hxx
// ./opencascade/TopOpeBRepDS_SolidSurfaceInterference.hxx
// ./opencascade/TopOpeBRepDS_ListOfShapeOn1State.hxx
// ./opencascade/TopOpeBRepDS_SurfaceIterator.hxx
// ./opencascade/TopOpeBRepDS_ListIteratorOfListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape.hxx
// ./opencascade/TopOpeBRepDS_DataStructure.hxx
// ./opencascade/TopOpeBRepDS_MapOfCurve.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_CurveData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfCurve");  
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfShapeSurface.hxx
// ./opencascade/TopOpeBRepDS_define.hxx
// ./opencascade/TopOpeBRepDS_ListOfInterference.hxx
    preregister_template_NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >(m,"TopOpeBRepDS_ListOfInterference");  
// ./opencascade/TopOpeBRepDS_Point.hxx
// ./opencascade/TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_IndexedDataMapOfShapeWithState.hxx
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_IndexedDataMapOfShapeWithState");  
// ./opencascade/TopOpeBRepDS_Filter.hxx
// ./opencascade/TopOpeBRepDS_MapOfSurface.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_SurfaceData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfSurface");  
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeState.hxx
// ./opencascade/TopOpeBRepDS_ShapeShapeInterference.hxx
// ./opencascade/TopOpeBRepDS_EIR.hxx
// ./opencascade/TopOpeBRepDS_FIR.hxx
// ./opencascade/TopOpeBRepDS_ShapeWithState.hxx
// ./opencascade/TopOpeBRepDS_GapFiller.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfMapOfCurve.hxx
// ./opencascade/TopOpeBRepDS_CurvePointInterference.hxx
// ./opencascade/TopOpeBRepDS_FaceEdgeInterference.hxx
// ./opencascade/TopOpeBRepDS_ProcessInterferencesTool.hxx
// ./opencascade/TopOpeBRepDS_DoubleMapOfIntegerShape.hxx
    preregister_template_NCollection_DoubleMap<Standard_Integer, TopoDS_Shape, TColStd_MapIntegerHasher, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_DoubleMapOfIntegerShape");  
// ./opencascade/TopOpeBRepDS_CheckStatus.hxx
// ./opencascade/TopOpeBRepDS_PointData.hxx
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceShape.hxx
    preregister_template_NCollection_DataMap<opencascade::handle<TopOpeBRepDS_Interference>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"TopOpeBRepDS_DataMapOfInterferenceShape");  
// ./opencascade/TopOpeBRepDS_IndexedDataMapOfVertexPoint.hxx
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_Point, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_IndexedDataMapOfVertexPoint");  
// ./opencascade/TopOpeBRepDS_CurveExplorer.hxx
// ./opencascade/TopOpeBRepDS_samdom.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfMapOfPoint.hxx
// ./opencascade/TopOpeBRepDS_PDataStructure.hxx
// ./opencascade/TopOpeBRepDS.hxx
// ./opencascade/TopOpeBRepDS_Edge3dInterferenceTool.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeListOfShapeOn1State.hxx
// ./opencascade/TopOpeBRepDS_Surface.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus.hxx
// ./opencascade/TopOpeBRepDS_Config.hxx
// ./opencascade/TopOpeBRepDS_InterferenceIterator.hxx
// ./opencascade/TopOpeBRepDS_DataMapOfCheckStatus.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_CheckStatus, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_DataMapOfCheckStatus");  
// ./opencascade/TopOpeBRepDS_EdgeInterferenceTool.hxx
// ./opencascade/TopOpeBRepDS_InterferenceTool.hxx

};

// user-defined post-inclusion per module

// user-defined post
