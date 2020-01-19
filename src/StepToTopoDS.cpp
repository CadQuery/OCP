
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_StepToTopoDS(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepToTopoDS"));


//Python trampoline classes

// classes

    register_default_constructor<StepToTopoDS , shared_ptr<StepToTopoDS>>(m,"StepToTopoDS");

    static_cast<py::class_<StepToTopoDS , shared_ptr<StepToTopoDS>  >>(m.attr("StepToTopoDS"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("DecodeBuilderError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_BuilderError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_BuilderError  ) >(&StepToTopoDS::DecodeBuilderError),
                    R"#(None)#"  , py::arg("Error"))
        .def_static("DecodeShellError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslateShellError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslateShellError  ) >(&StepToTopoDS::DecodeShellError),
                    R"#(None)#"  , py::arg("Error"))
        .def_static("DecodeFaceError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslateFaceError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslateFaceError  ) >(&StepToTopoDS::DecodeFaceError),
                    R"#(None)#"  , py::arg("Error"))
        .def_static("DecodeEdgeError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslateEdgeError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslateEdgeError  ) >(&StepToTopoDS::DecodeEdgeError),
                    R"#(None)#"  , py::arg("Error"))
        .def_static("DecodeVertexError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslateVertexError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslateVertexError  ) >(&StepToTopoDS::DecodeVertexError),
                    R"#(None)#"  , py::arg("Error"))
        .def_static("DecodeVertexLoopError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslateVertexLoopError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslateVertexLoopError  ) >(&StepToTopoDS::DecodeVertexLoopError),
                    R"#(None)#"  , py::arg("Error"))
        .def_static("DecodePolyLoopError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslatePolyLoopError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const StepToTopoDS_TranslatePolyLoopError  ) >(&StepToTopoDS::DecodePolyLoopError),
                    R"#(None)#"  , py::arg("Error"))
        .def_static("DecodeGeometricToolError_s",
                    (Standard_CString (*)( const StepToTopoDS_GeometricToolError  ) ) static_cast<Standard_CString (*)( const StepToTopoDS_GeometricToolError  ) >(&StepToTopoDS::DecodeGeometricToolError),
                    R"#(None)#"  , py::arg("Error"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<StepToTopoDS_CartesianPointHasher , shared_ptr<StepToTopoDS_CartesianPointHasher>>(m,"StepToTopoDS_CartesianPointHasher");

    static_cast<py::class_<StepToTopoDS_CartesianPointHasher , shared_ptr<StepToTopoDS_CartesianPointHasher>  >>(m.attr("StepToTopoDS_CartesianPointHasher"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const opencascade::handle<StepGeom_CartesianPoint> & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<StepGeom_CartesianPoint> & ,  const Standard_Integer  ) >(&StepToTopoDS_CartesianPointHasher::HashCode),
                    R"#(Returns a HasCode value for the CartesianPoint)#"  , py::arg("K"),  py::arg("Upper"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const opencascade::handle<StepGeom_CartesianPoint> & ,  const opencascade::handle<StepGeom_CartesianPoint> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<StepGeom_CartesianPoint> & ,  const opencascade::handle<StepGeom_CartesianPoint> &  ) >(&StepToTopoDS_CartesianPointHasher::IsEqual),
                    R"#(Returns True when the two CartesianPoint are the same)#"  , py::arg("K1"),  py::arg("K2"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<StepToTopoDS_GeometricTool , shared_ptr<StepToTopoDS_GeometricTool>>(m,"StepToTopoDS_GeometricTool");

    static_cast<py::class_<StepToTopoDS_GeometricTool , shared_ptr<StepToTopoDS_GeometricTool>  >>(m.attr("StepToTopoDS_GeometricTool"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("PCurve_s",
                    (Standard_Integer (*)( const opencascade::handle<StepGeom_SurfaceCurve> & ,  const opencascade::handle<StepGeom_Surface> & ,  opencascade::handle<StepGeom_Pcurve> & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<StepGeom_SurfaceCurve> & ,  const opencascade::handle<StepGeom_Surface> & ,  opencascade::handle<StepGeom_Pcurve> & ,  const Standard_Integer  ) >(&StepToTopoDS_GeometricTool::PCurve),
                    R"#(None)#"  , py::arg("SC"),  py::arg("S"),  py::arg("PC"),  py::arg("last")=static_cast<const Standard_Integer>(0))
        .def_static("IsSeamCurve_s",
                    (Standard_Boolean (*)( const opencascade::handle<StepGeom_SurfaceCurve> & ,  const opencascade::handle<StepGeom_Surface> & ,  const opencascade::handle<StepShape_Edge> & ,  const opencascade::handle<StepShape_EdgeLoop> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<StepGeom_SurfaceCurve> & ,  const opencascade::handle<StepGeom_Surface> & ,  const opencascade::handle<StepShape_Edge> & ,  const opencascade::handle<StepShape_EdgeLoop> &  ) >(&StepToTopoDS_GeometricTool::IsSeamCurve),
                    R"#(None)#"  , py::arg("SC"),  py::arg("S"),  py::arg("E"),  py::arg("EL"))
        .def_static("IsLikeSeam_s",
                    (Standard_Boolean (*)( const opencascade::handle<StepGeom_SurfaceCurve> & ,  const opencascade::handle<StepGeom_Surface> & ,  const opencascade::handle<StepShape_Edge> & ,  const opencascade::handle<StepShape_EdgeLoop> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<StepGeom_SurfaceCurve> & ,  const opencascade::handle<StepGeom_Surface> & ,  const opencascade::handle<StepShape_Edge> & ,  const opencascade::handle<StepShape_EdgeLoop> &  ) >(&StepToTopoDS_GeometricTool::IsLikeSeam),
                    R"#(None)#"  , py::arg("SC"),  py::arg("S"),  py::arg("E"),  py::arg("EL"))
        .def_static("UpdateParam3d_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  Standard_Real & ,  Standard_Real & ,  const Standard_Real  ) >(&StepToTopoDS_GeometricTool::UpdateParam3d),
                    R"#(None)#"  , py::arg("C"),  py::arg("w1"),  py::arg("w2"),  py::arg("preci"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_NMTool , shared_ptr<StepToTopoDS_NMTool>  >>(m.attr("StepToTopoDS_NMTool"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_DataMap<opencascade::handle<StepRepr_RepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher> &, const NCollection_DataMap<TCollection_AsciiString, TopoDS_Shape, TCollection_AsciiString> & >()  , py::arg("MapOfRI"),  py::arg("MapOfRINames") )
    // methods
        .def("Init",
             (void (StepToTopoDS_NMTool::*)(  const NCollection_DataMap<opencascade::handle<StepRepr_RepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher> & ,   const NCollection_DataMap<TCollection_AsciiString, TopoDS_Shape, TCollection_AsciiString> &  ) ) static_cast<void (StepToTopoDS_NMTool::*)(  const NCollection_DataMap<opencascade::handle<StepRepr_RepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher> & ,   const NCollection_DataMap<TCollection_AsciiString, TopoDS_Shape, TCollection_AsciiString> &  ) >(&StepToTopoDS_NMTool::Init),
             R"#(None)#"  , py::arg("MapOfRI"),  py::arg("MapOfRINames"))
        .def("SetActive",
             (void (StepToTopoDS_NMTool::*)( const Standard_Boolean  ) ) static_cast<void (StepToTopoDS_NMTool::*)( const Standard_Boolean  ) >(&StepToTopoDS_NMTool::SetActive),
             R"#(None)#"  , py::arg("isActive"))
        .def("IsActive",
             (Standard_Boolean (StepToTopoDS_NMTool::*)() ) static_cast<Standard_Boolean (StepToTopoDS_NMTool::*)() >(&StepToTopoDS_NMTool::IsActive),
             R"#(None)#" )
        .def("CleanUp",
             (void (StepToTopoDS_NMTool::*)() ) static_cast<void (StepToTopoDS_NMTool::*)() >(&StepToTopoDS_NMTool::CleanUp),
             R"#(None)#" )
        .def("IsBound",
             (Standard_Boolean (StepToTopoDS_NMTool::*)( const opencascade::handle<StepRepr_RepresentationItem> &  ) ) static_cast<Standard_Boolean (StepToTopoDS_NMTool::*)( const opencascade::handle<StepRepr_RepresentationItem> &  ) >(&StepToTopoDS_NMTool::IsBound),
             R"#(None)#"  , py::arg("RI"))
        .def("IsBound",
             (Standard_Boolean (StepToTopoDS_NMTool::*)( const TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (StepToTopoDS_NMTool::*)( const TCollection_AsciiString &  ) >(&StepToTopoDS_NMTool::IsBound),
             R"#(None)#"  , py::arg("RIName"))
        .def("Bind",
             (void (StepToTopoDS_NMTool::*)( const opencascade::handle<StepRepr_RepresentationItem> & ,  const TopoDS_Shape &  ) ) static_cast<void (StepToTopoDS_NMTool::*)( const opencascade::handle<StepRepr_RepresentationItem> & ,  const TopoDS_Shape &  ) >(&StepToTopoDS_NMTool::Bind),
             R"#(None)#"  , py::arg("RI"),  py::arg("S"))
        .def("Bind",
             (void (StepToTopoDS_NMTool::*)( const TCollection_AsciiString & ,  const TopoDS_Shape &  ) ) static_cast<void (StepToTopoDS_NMTool::*)( const TCollection_AsciiString & ,  const TopoDS_Shape &  ) >(&StepToTopoDS_NMTool::Bind),
             R"#(None)#"  , py::arg("RIName"),  py::arg("S"))
        .def("Find",
             (const TopoDS_Shape & (StepToTopoDS_NMTool::*)( const opencascade::handle<StepRepr_RepresentationItem> &  ) ) static_cast<const TopoDS_Shape & (StepToTopoDS_NMTool::*)( const opencascade::handle<StepRepr_RepresentationItem> &  ) >(&StepToTopoDS_NMTool::Find),
             R"#(None)#"  , py::arg("RI"))
        .def("Find",
             (const TopoDS_Shape & (StepToTopoDS_NMTool::*)( const TCollection_AsciiString &  ) ) static_cast<const TopoDS_Shape & (StepToTopoDS_NMTool::*)( const TCollection_AsciiString &  ) >(&StepToTopoDS_NMTool::Find),
             R"#(None)#"  , py::arg("RIName"))
        .def("RegisterNMEdge",
             (void (StepToTopoDS_NMTool::*)( const TopoDS_Shape &  ) ) static_cast<void (StepToTopoDS_NMTool::*)( const TopoDS_Shape &  ) >(&StepToTopoDS_NMTool::RegisterNMEdge),
             R"#(None)#"  , py::arg("Edge"))
        .def("IsSuspectedAsClosing",
             (Standard_Boolean (StepToTopoDS_NMTool::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (StepToTopoDS_NMTool::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&StepToTopoDS_NMTool::IsSuspectedAsClosing),
             R"#(None)#"  , py::arg("BaseShell"),  py::arg("SuspectedShell"))
        .def("IsPureNMShell",
             (Standard_Boolean (StepToTopoDS_NMTool::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (StepToTopoDS_NMTool::*)( const TopoDS_Shape &  ) >(&StepToTopoDS_NMTool::IsPureNMShell),
             R"#(None)#"  , py::arg("Shell"))
        .def("SetIDEASCase",
             (void (StepToTopoDS_NMTool::*)( const Standard_Boolean  ) ) static_cast<void (StepToTopoDS_NMTool::*)( const Standard_Boolean  ) >(&StepToTopoDS_NMTool::SetIDEASCase),
             R"#(None)#"  , py::arg("IDEASCase"))
        .def("IsIDEASCase",
             (Standard_Boolean (StepToTopoDS_NMTool::*)() ) static_cast<Standard_Boolean (StepToTopoDS_NMTool::*)() >(&StepToTopoDS_NMTool::IsIDEASCase),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_PointPair , shared_ptr<StepToTopoDS_PointPair>  >>(m.attr("StepToTopoDS_PointPair"))
        .def(py::init< const opencascade::handle<StepGeom_CartesianPoint> &,const opencascade::handle<StepGeom_CartesianPoint> & >()  , py::arg("P1"),  py::arg("P2") )
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<StepToTopoDS_PointPairHasher , shared_ptr<StepToTopoDS_PointPairHasher>>(m,"StepToTopoDS_PointPairHasher");

    static_cast<py::class_<StepToTopoDS_PointPairHasher , shared_ptr<StepToTopoDS_PointPairHasher>  >>(m.attr("StepToTopoDS_PointPairHasher"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const StepToTopoDS_PointPair & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const StepToTopoDS_PointPair & ,  const Standard_Integer  ) >(&StepToTopoDS_PointPairHasher::HashCode),
                    R"#(Returns a HasCode value for the PointPair)#"  , py::arg("K"),  py::arg("Upper"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const StepToTopoDS_PointPair & ,  const StepToTopoDS_PointPair &  ) ) static_cast<Standard_Boolean (*)( const StepToTopoDS_PointPair & ,  const StepToTopoDS_PointPair &  ) >(&StepToTopoDS_PointPairHasher::IsEqual),
                    R"#(Returns True when the two PointPair are the same)#"  , py::arg("K1"),  py::arg("K2"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_Root , shared_ptr<StepToTopoDS_Root>  >>(m.attr("StepToTopoDS_Root"))
    // methods
        .def("IsDone",
             (Standard_Boolean (StepToTopoDS_Root::*)() const) static_cast<Standard_Boolean (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::IsDone),
             R"#(None)#" )
        .def("Precision",
             (Standard_Real (StepToTopoDS_Root::*)() const) static_cast<Standard_Real (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::Precision),
             R"#(Returns the value of "MyPrecision")#" )
        .def("SetPrecision",
             (void (StepToTopoDS_Root::*)( const Standard_Real  ) ) static_cast<void (StepToTopoDS_Root::*)( const Standard_Real  ) >(&StepToTopoDS_Root::SetPrecision),
             R"#(Sets the value of "MyPrecision")#"  , py::arg("preci"))
        .def("MaxTol",
             (Standard_Real (StepToTopoDS_Root::*)() const) static_cast<Standard_Real (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::MaxTol),
             R"#(Returns the value of "MaxTol")#" )
        .def("SetMaxTol",
             (void (StepToTopoDS_Root::*)( const Standard_Real  ) ) static_cast<void (StepToTopoDS_Root::*)( const Standard_Real  ) >(&StepToTopoDS_Root::SetMaxTol),
             R"#(Sets the value of MaxTol)#"  , py::arg("maxpreci"))
        .def("IsDone",
             (Standard_Boolean (StepToTopoDS_Root::*)() const) static_cast<Standard_Boolean (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::IsDone),
             R"#(None)#" )
        .def("Precision",
             (Standard_Real (StepToTopoDS_Root::*)() const) static_cast<Standard_Real (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::Precision),
             R"#(Returns the value of "MyPrecision")#" )
        .def("SetPrecision",
             (void (StepToTopoDS_Root::*)( const Standard_Real  ) ) static_cast<void (StepToTopoDS_Root::*)( const Standard_Real  ) >(&StepToTopoDS_Root::SetPrecision),
             R"#(Sets the value of "MyPrecision")#"  , py::arg("preci"))
        .def("MaxTol",
             (Standard_Real (StepToTopoDS_Root::*)() const) static_cast<Standard_Real (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::MaxTol),
             R"#(Returns the value of "MaxTol")#" )
        .def("SetMaxTol",
             (void (StepToTopoDS_Root::*)( const Standard_Real  ) ) static_cast<void (StepToTopoDS_Root::*)( const Standard_Real  ) >(&StepToTopoDS_Root::SetMaxTol),
             R"#(Sets the value of MaxTol)#"  , py::arg("maxpreci"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_Tool , shared_ptr<StepToTopoDS_Tool>  >>(m.attr("StepToTopoDS_Tool"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_DataMap<opencascade::handle<StepShape_TopologicalRepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher> &,const opencascade::handle<Transfer_TransientProcess> & >()  , py::arg("Map"),  py::arg("TP") )
    // methods
        .def("Init",
             (void (StepToTopoDS_Tool::*)(  const NCollection_DataMap<opencascade::handle<StepShape_TopologicalRepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (StepToTopoDS_Tool::*)(  const NCollection_DataMap<opencascade::handle<StepShape_TopologicalRepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&StepToTopoDS_Tool::Init),
             R"#(None)#"  , py::arg("Map"),  py::arg("TP"))
        .def("IsBound",
             (Standard_Boolean (StepToTopoDS_Tool::*)( const opencascade::handle<StepShape_TopologicalRepresentationItem> &  ) ) static_cast<Standard_Boolean (StepToTopoDS_Tool::*)( const opencascade::handle<StepShape_TopologicalRepresentationItem> &  ) >(&StepToTopoDS_Tool::IsBound),
             R"#(None)#"  , py::arg("TRI"))
        .def("Bind",
             (void (StepToTopoDS_Tool::*)( const opencascade::handle<StepShape_TopologicalRepresentationItem> & ,  const TopoDS_Shape &  ) ) static_cast<void (StepToTopoDS_Tool::*)( const opencascade::handle<StepShape_TopologicalRepresentationItem> & ,  const TopoDS_Shape &  ) >(&StepToTopoDS_Tool::Bind),
             R"#(None)#"  , py::arg("TRI"),  py::arg("S"))
        .def("Find",
             (const TopoDS_Shape & (StepToTopoDS_Tool::*)( const opencascade::handle<StepShape_TopologicalRepresentationItem> &  ) ) static_cast<const TopoDS_Shape & (StepToTopoDS_Tool::*)( const opencascade::handle<StepShape_TopologicalRepresentationItem> &  ) >(&StepToTopoDS_Tool::Find),
             R"#(None)#"  , py::arg("TRI"))
        .def("ClearEdgeMap",
             (void (StepToTopoDS_Tool::*)() ) static_cast<void (StepToTopoDS_Tool::*)() >(&StepToTopoDS_Tool::ClearEdgeMap),
             R"#(None)#" )
        .def("IsEdgeBound",
             (Standard_Boolean (StepToTopoDS_Tool::*)( const StepToTopoDS_PointPair &  ) ) static_cast<Standard_Boolean (StepToTopoDS_Tool::*)( const StepToTopoDS_PointPair &  ) >(&StepToTopoDS_Tool::IsEdgeBound),
             R"#(None)#"  , py::arg("PP"))
        .def("BindEdge",
             (void (StepToTopoDS_Tool::*)( const StepToTopoDS_PointPair & ,  const TopoDS_Edge &  ) ) static_cast<void (StepToTopoDS_Tool::*)( const StepToTopoDS_PointPair & ,  const TopoDS_Edge &  ) >(&StepToTopoDS_Tool::BindEdge),
             R"#(None)#"  , py::arg("PP"),  py::arg("E"))
        .def("FindEdge",
             (const TopoDS_Edge & (StepToTopoDS_Tool::*)( const StepToTopoDS_PointPair &  ) ) static_cast<const TopoDS_Edge & (StepToTopoDS_Tool::*)( const StepToTopoDS_PointPair &  ) >(&StepToTopoDS_Tool::FindEdge),
             R"#(None)#"  , py::arg("PP"))
        .def("ClearVertexMap",
             (void (StepToTopoDS_Tool::*)() ) static_cast<void (StepToTopoDS_Tool::*)() >(&StepToTopoDS_Tool::ClearVertexMap),
             R"#(None)#" )
        .def("IsVertexBound",
             (Standard_Boolean (StepToTopoDS_Tool::*)( const opencascade::handle<StepGeom_CartesianPoint> &  ) ) static_cast<Standard_Boolean (StepToTopoDS_Tool::*)( const opencascade::handle<StepGeom_CartesianPoint> &  ) >(&StepToTopoDS_Tool::IsVertexBound),
             R"#(None)#"  , py::arg("PG"))
        .def("BindVertex",
             (void (StepToTopoDS_Tool::*)( const opencascade::handle<StepGeom_CartesianPoint> & ,  const TopoDS_Vertex &  ) ) static_cast<void (StepToTopoDS_Tool::*)( const opencascade::handle<StepGeom_CartesianPoint> & ,  const TopoDS_Vertex &  ) >(&StepToTopoDS_Tool::BindVertex),
             R"#(None)#"  , py::arg("P"),  py::arg("V"))
        .def("FindVertex",
             (const TopoDS_Vertex & (StepToTopoDS_Tool::*)( const opencascade::handle<StepGeom_CartesianPoint> &  ) ) static_cast<const TopoDS_Vertex & (StepToTopoDS_Tool::*)( const opencascade::handle<StepGeom_CartesianPoint> &  ) >(&StepToTopoDS_Tool::FindVertex),
             R"#(None)#"  , py::arg("P"))
        .def("ComputePCurve",
             (void (StepToTopoDS_Tool::*)( const Standard_Boolean  ) ) static_cast<void (StepToTopoDS_Tool::*)( const Standard_Boolean  ) >(&StepToTopoDS_Tool::ComputePCurve),
             R"#(None)#"  , py::arg("B"))
        .def("ComputePCurve",
             (Standard_Boolean (StepToTopoDS_Tool::*)() const) static_cast<Standard_Boolean (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::ComputePCurve),
             R"#(None)#" )
        .def("TransientProcess",
             (opencascade::handle<Transfer_TransientProcess> (StepToTopoDS_Tool::*)() const) static_cast<opencascade::handle<Transfer_TransientProcess> (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::TransientProcess),
             R"#(None)#" )
        .def("AddContinuity",
             (void (StepToTopoDS_Tool::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (StepToTopoDS_Tool::*)( const opencascade::handle<Geom_Surface> &  ) >(&StepToTopoDS_Tool::AddContinuity),
             R"#(None)#"  , py::arg("GeomSurf"))
        .def("AddContinuity",
             (void (StepToTopoDS_Tool::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (StepToTopoDS_Tool::*)( const opencascade::handle<Geom_Curve> &  ) >(&StepToTopoDS_Tool::AddContinuity),
             R"#(None)#"  , py::arg("GeomCurve"))
        .def("AddContinuity",
             (void (StepToTopoDS_Tool::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (StepToTopoDS_Tool::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&StepToTopoDS_Tool::AddContinuity),
             R"#(None)#"  , py::arg("GeomCur2d"))
        .def("C0Surf",
             (Standard_Integer (StepToTopoDS_Tool::*)() const) static_cast<Standard_Integer (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::C0Surf),
             R"#(None)#" )
        .def("C1Surf",
             (Standard_Integer (StepToTopoDS_Tool::*)() const) static_cast<Standard_Integer (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::C1Surf),
             R"#(None)#" )
        .def("C2Surf",
             (Standard_Integer (StepToTopoDS_Tool::*)() const) static_cast<Standard_Integer (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::C2Surf),
             R"#(None)#" )
        .def("C0Cur2",
             (Standard_Integer (StepToTopoDS_Tool::*)() const) static_cast<Standard_Integer (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::C0Cur2),
             R"#(None)#" )
        .def("C1Cur2",
             (Standard_Integer (StepToTopoDS_Tool::*)() const) static_cast<Standard_Integer (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::C1Cur2),
             R"#(None)#" )
        .def("C2Cur2",
             (Standard_Integer (StepToTopoDS_Tool::*)() const) static_cast<Standard_Integer (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::C2Cur2),
             R"#(None)#" )
        .def("C0Cur3",
             (Standard_Integer (StepToTopoDS_Tool::*)() const) static_cast<Standard_Integer (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::C0Cur3),
             R"#(None)#" )
        .def("C1Cur3",
             (Standard_Integer (StepToTopoDS_Tool::*)() const) static_cast<Standard_Integer (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::C1Cur3),
             R"#(None)#" )
        .def("C2Cur3",
             (Standard_Integer (StepToTopoDS_Tool::*)() const) static_cast<Standard_Integer (StepToTopoDS_Tool::*)() const>(&StepToTopoDS_Tool::C2Cur3),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_Builder , shared_ptr<StepToTopoDS_Builder>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_Builder"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepShape_ManifoldSolidBrep> &,const opencascade::handle<Transfer_TransientProcess> & >()  , py::arg("S"),  py::arg("TP") )
        .def(py::init< const opencascade::handle<StepShape_BrepWithVoids> &,const opencascade::handle<Transfer_TransientProcess> & >()  , py::arg("S"),  py::arg("TP") )
        .def(py::init< const opencascade::handle<StepShape_FacetedBrep> &,const opencascade::handle<Transfer_TransientProcess> & >()  , py::arg("S"),  py::arg("TP") )
        .def(py::init< const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> &,const opencascade::handle<Transfer_TransientProcess> & >()  , py::arg("S"),  py::arg("TP") )
        .def(py::init< const opencascade::handle<StepShape_ShellBasedSurfaceModel> &,const opencascade::handle<Transfer_TransientProcess> &,StepToTopoDS_NMTool & >()  , py::arg("S"),  py::arg("TP"),  py::arg("NMTool") )
    // methods
        .def("Init",
             (void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_ManifoldSolidBrep> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_ManifoldSolidBrep> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&StepToTopoDS_Builder::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("TP"))
        .def("Init",
             (void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_BrepWithVoids> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_BrepWithVoids> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&StepToTopoDS_Builder::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("TP"))
        .def("Init",
             (void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_FacetedBrep> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_FacetedBrep> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&StepToTopoDS_Builder::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("TP"))
        .def("Init",
             (void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&StepToTopoDS_Builder::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("TP"))
        .def("Init",
             (void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_ShellBasedSurfaceModel> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  StepToTopoDS_NMTool &  ) ) static_cast<void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_ShellBasedSurfaceModel> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  StepToTopoDS_NMTool &  ) >(&StepToTopoDS_Builder::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("TP"),  py::arg("NMTool"))
        .def("Init",
             (void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_EdgeBasedWireframeModel> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_EdgeBasedWireframeModel> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&StepToTopoDS_Builder::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("TP"))
        .def("Init",
             (void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_FaceBasedSurfaceModel> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_FaceBasedSurfaceModel> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&StepToTopoDS_Builder::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("TP"))
        .def("Init",
             (void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_GeometricSet> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<Transfer_ActorOfTransientProcess> & ,  const Standard_Boolean  ) ) static_cast<void (StepToTopoDS_Builder::*)( const opencascade::handle<StepShape_GeometricSet> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<Transfer_ActorOfTransientProcess> & ,  const Standard_Boolean  ) >(&StepToTopoDS_Builder::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("TP"),  py::arg("RA")=static_cast<const opencascade::handle<Transfer_ActorOfTransientProcess> &>(NULL),  py::arg("isManifold")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Value",
             (const TopoDS_Shape & (StepToTopoDS_Builder::*)() const) static_cast<const TopoDS_Shape & (StepToTopoDS_Builder::*)() const>(&StepToTopoDS_Builder::Value),
             R"#(None)#" )
        .def("Error",
             (StepToTopoDS_BuilderError (StepToTopoDS_Builder::*)() const) static_cast<StepToTopoDS_BuilderError (StepToTopoDS_Builder::*)() const>(&StepToTopoDS_Builder::Error),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_MakeTransformed , shared_ptr<StepToTopoDS_MakeTransformed>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_MakeTransformed"))
        .def(py::init<  >()  )
    // methods
        .def("Compute",
             (Standard_Boolean (StepToTopoDS_MakeTransformed::*)( const opencascade::handle<StepGeom_Axis2Placement3d> & ,  const opencascade::handle<StepGeom_Axis2Placement3d> &  ) ) static_cast<Standard_Boolean (StepToTopoDS_MakeTransformed::*)( const opencascade::handle<StepGeom_Axis2Placement3d> & ,  const opencascade::handle<StepGeom_Axis2Placement3d> &  ) >(&StepToTopoDS_MakeTransformed::Compute),
             R"#(Computes a transformation to pass from an Origin placement to a Target placement. Returns True when done If not done, the transformation will by Identity)#"  , py::arg("Origin"),  py::arg("Target"))
        .def("Compute",
             (Standard_Boolean (StepToTopoDS_MakeTransformed::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator3d> &  ) ) static_cast<Standard_Boolean (StepToTopoDS_MakeTransformed::*)( const opencascade::handle<StepGeom_CartesianTransformationOperator3d> &  ) >(&StepToTopoDS_MakeTransformed::Compute),
             R"#(Computes a transformation defined by an operator 3D)#"  , py::arg("Operator"))
        .def("Transformation",
             (const gp_Trsf & (StepToTopoDS_MakeTransformed::*)() const) static_cast<const gp_Trsf & (StepToTopoDS_MakeTransformed::*)() const>(&StepToTopoDS_MakeTransformed::Transformation),
             R"#(Returns the computed transformation (Identity if not yet or if failed))#" )
        .def("Transform",
             (Standard_Boolean (StepToTopoDS_MakeTransformed::*)( TopoDS_Shape &  ) const) static_cast<Standard_Boolean (StepToTopoDS_MakeTransformed::*)( TopoDS_Shape &  ) const>(&StepToTopoDS_MakeTransformed::Transform),
             R"#(Applies the computed transformation to a shape Returns False if the transformation is Identity)#"  , py::arg("shape"))
        .def("TranslateMappedItem",
             (TopoDS_Shape (StepToTopoDS_MakeTransformed::*)( const opencascade::handle<StepRepr_MappedItem> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<TopoDS_Shape (StepToTopoDS_MakeTransformed::*)( const opencascade::handle<StepRepr_MappedItem> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&StepToTopoDS_MakeTransformed::TranslateMappedItem),
             R"#(Translates a MappedItem. More precisely A MappedItem has a MappingSource and a MappingTarget MappingSource has a MappedRepresentation and a MappingOrigin MappedRepresentation is the basic item to be instanced MappingOrigin is the starting placement MappingTarget is the final placement)#"  , py::arg("mapit"),  py::arg("TP"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_TranslateCompositeCurve , shared_ptr<StepToTopoDS_TranslateCompositeCurve>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_TranslateCompositeCurve"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepGeom_CompositeCurve> &,const opencascade::handle<Transfer_TransientProcess> & >()  , py::arg("CC"),  py::arg("TP") )
        .def(py::init< const opencascade::handle<StepGeom_CompositeCurve> &,const opencascade::handle<Transfer_TransientProcess> &,const opencascade::handle<StepGeom_Surface> &,const opencascade::handle<Geom_Surface> & >()  , py::arg("CC"),  py::arg("TP"),  py::arg("S"),  py::arg("Surf") )
    // methods
        .def("Init",
             (Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)( const opencascade::handle<StepGeom_CompositeCurve> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)( const opencascade::handle<StepGeom_CompositeCurve> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&StepToTopoDS_TranslateCompositeCurve::Init),
             R"#(Translates standalone composite_curve)#"  , py::arg("CC"),  py::arg("TP"))
        .def("Init",
             (Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)( const opencascade::handle<StepGeom_CompositeCurve> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<StepGeom_Surface> & ,  const opencascade::handle<Geom_Surface> &  ) ) static_cast<Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)( const opencascade::handle<StepGeom_CompositeCurve> & ,  const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<StepGeom_Surface> & ,  const opencascade::handle<Geom_Surface> &  ) >(&StepToTopoDS_TranslateCompositeCurve::Init),
             R"#(Translates composite_curve lying on surface)#"  , py::arg("CC"),  py::arg("TP"),  py::arg("S"),  py::arg("Surf"))
        .def("Value",
             (const TopoDS_Wire & (StepToTopoDS_TranslateCompositeCurve::*)() const) static_cast<const TopoDS_Wire & (StepToTopoDS_TranslateCompositeCurve::*)() const>(&StepToTopoDS_TranslateCompositeCurve::Value),
             R"#(Returns result of last translation or null wire if failed.)#" )
        .def("IsInfiniteSegment",
             (Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)() const) static_cast<Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)() const>(&StepToTopoDS_TranslateCompositeCurve::IsInfiniteSegment),
             R"#(Returns True if composite_curve contains a segment with infinite parameters.)#" )
        .def("IsInfiniteSegment",
             (Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)() const) static_cast<Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)() const>(&StepToTopoDS_TranslateCompositeCurve::IsInfiniteSegment),
             R"#(Returns True if composite_curve contains a segment with infinite parameters.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_TranslateCurveBoundedSurface , shared_ptr<StepToTopoDS_TranslateCurveBoundedSurface>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_TranslateCurveBoundedSurface"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepGeom_CurveBoundedSurface> &,const opencascade::handle<Transfer_TransientProcess> & >()  , py::arg("CBS"),  py::arg("TP") )
    // methods
        .def("Init",
             (Standard_Boolean (StepToTopoDS_TranslateCurveBoundedSurface::*)( const opencascade::handle<StepGeom_CurveBoundedSurface> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<Standard_Boolean (StepToTopoDS_TranslateCurveBoundedSurface::*)( const opencascade::handle<StepGeom_CurveBoundedSurface> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&StepToTopoDS_TranslateCurveBoundedSurface::Init),
             R"#(Translate surface)#"  , py::arg("CBS"),  py::arg("TP"))
        .def("Value",
             (const TopoDS_Face & (StepToTopoDS_TranslateCurveBoundedSurface::*)() const) static_cast<const TopoDS_Face & (StepToTopoDS_TranslateCurveBoundedSurface::*)() const>(&StepToTopoDS_TranslateCurveBoundedSurface::Value),
             R"#(Returns result of last translation or null wire if failed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_TranslateEdge , shared_ptr<StepToTopoDS_TranslateEdge>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_TranslateEdge"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepShape_Edge> &,StepToTopoDS_Tool &,StepToTopoDS_NMTool & >()  , py::arg("E"),  py::arg("T"),  py::arg("NMTool") )
    // methods
        .def("Init",
             (void (StepToTopoDS_TranslateEdge::*)( const opencascade::handle<StepShape_Edge> & ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) ) static_cast<void (StepToTopoDS_TranslateEdge::*)( const opencascade::handle<StepShape_Edge> & ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) >(&StepToTopoDS_TranslateEdge::Init),
             R"#(None)#"  , py::arg("E"),  py::arg("T"),  py::arg("NMTool"))
        .def("MakeFromCurve3D",
             (void (StepToTopoDS_TranslateEdge::*)( const opencascade::handle<StepGeom_Curve> & ,  const opencascade::handle<StepShape_EdgeCurve> & ,  const opencascade::handle<StepShape_Vertex> & ,  const Standard_Real ,  TopoDS_Edge & ,  TopoDS_Vertex & ,  TopoDS_Vertex & ,  StepToTopoDS_Tool &  ) ) static_cast<void (StepToTopoDS_TranslateEdge::*)( const opencascade::handle<StepGeom_Curve> & ,  const opencascade::handle<StepShape_EdgeCurve> & ,  const opencascade::handle<StepShape_Vertex> & ,  const Standard_Real ,  TopoDS_Edge & ,  TopoDS_Vertex & ,  TopoDS_Vertex & ,  StepToTopoDS_Tool &  ) >(&StepToTopoDS_TranslateEdge::MakeFromCurve3D),
             R"#(Warning! C3D is assumed to be a Curve 3D ... other cases to checked before calling this)#"  , py::arg("C3D"),  py::arg("EC"),  py::arg("Vend"),  py::arg("preci"),  py::arg("E"),  py::arg("V1"),  py::arg("V2"),  py::arg("T"))
        .def("MakePCurve",
             (opencascade::handle<Geom2d_Curve> (StepToTopoDS_TranslateEdge::*)( const opencascade::handle<StepGeom_Pcurve> & ,  const opencascade::handle<Geom_Surface> &  ) const) static_cast<opencascade::handle<Geom2d_Curve> (StepToTopoDS_TranslateEdge::*)( const opencascade::handle<StepGeom_Pcurve> & ,  const opencascade::handle<Geom_Surface> &  ) const>(&StepToTopoDS_TranslateEdge::MakePCurve),
             R"#(None)#"  , py::arg("PCU"),  py::arg("ConvSurf"))
        .def("Value",
             (const TopoDS_Shape & (StepToTopoDS_TranslateEdge::*)() const) static_cast<const TopoDS_Shape & (StepToTopoDS_TranslateEdge::*)() const>(&StepToTopoDS_TranslateEdge::Value),
             R"#(None)#" )
        .def("Error",
             (StepToTopoDS_TranslateEdgeError (StepToTopoDS_TranslateEdge::*)() const) static_cast<StepToTopoDS_TranslateEdgeError (StepToTopoDS_TranslateEdge::*)() const>(&StepToTopoDS_TranslateEdge::Error),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_TranslateEdgeLoop , shared_ptr<StepToTopoDS_TranslateEdgeLoop>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_TranslateEdgeLoop"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepShape_FaceBound> &,const TopoDS_Face &,const opencascade::handle<Geom_Surface> &,const opencascade::handle<StepGeom_Surface> &,const Standard_Boolean,StepToTopoDS_Tool &,StepToTopoDS_NMTool & >()  , py::arg("FB"),  py::arg("F"),  py::arg("S"),  py::arg("SS"),  py::arg("ss"),  py::arg("T"),  py::arg("NMTool") )
    // methods
        .def("Init",
             (void (StepToTopoDS_TranslateEdgeLoop::*)( const opencascade::handle<StepShape_FaceBound> & ,  const TopoDS_Face & ,  const opencascade::handle<Geom_Surface> & ,  const opencascade::handle<StepGeom_Surface> & ,  const Standard_Boolean ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) ) static_cast<void (StepToTopoDS_TranslateEdgeLoop::*)( const opencascade::handle<StepShape_FaceBound> & ,  const TopoDS_Face & ,  const opencascade::handle<Geom_Surface> & ,  const opencascade::handle<StepGeom_Surface> & ,  const Standard_Boolean ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) >(&StepToTopoDS_TranslateEdgeLoop::Init),
             R"#(None)#"  , py::arg("FB"),  py::arg("F"),  py::arg("S"),  py::arg("SS"),  py::arg("ss"),  py::arg("T"),  py::arg("NMTool"))
        .def("Value",
             (const TopoDS_Shape & (StepToTopoDS_TranslateEdgeLoop::*)() const) static_cast<const TopoDS_Shape & (StepToTopoDS_TranslateEdgeLoop::*)() const>(&StepToTopoDS_TranslateEdgeLoop::Value),
             R"#(None)#" )
        .def("Error",
             (StepToTopoDS_TranslateEdgeLoopError (StepToTopoDS_TranslateEdgeLoop::*)() const) static_cast<StepToTopoDS_TranslateEdgeLoopError (StepToTopoDS_TranslateEdgeLoop::*)() const>(&StepToTopoDS_TranslateEdgeLoop::Error),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_TranslateFace , shared_ptr<StepToTopoDS_TranslateFace>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_TranslateFace"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepShape_FaceSurface> &,StepToTopoDS_Tool &,StepToTopoDS_NMTool & >()  , py::arg("FS"),  py::arg("T"),  py::arg("NMTool") )
    // methods
        .def("Init",
             (void (StepToTopoDS_TranslateFace::*)( const opencascade::handle<StepShape_FaceSurface> & ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) ) static_cast<void (StepToTopoDS_TranslateFace::*)( const opencascade::handle<StepShape_FaceSurface> & ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) >(&StepToTopoDS_TranslateFace::Init),
             R"#(None)#"  , py::arg("FS"),  py::arg("T"),  py::arg("NMTool"))
        .def("Value",
             (const TopoDS_Shape & (StepToTopoDS_TranslateFace::*)() const) static_cast<const TopoDS_Shape & (StepToTopoDS_TranslateFace::*)() const>(&StepToTopoDS_TranslateFace::Value),
             R"#(None)#" )
        .def("Error",
             (StepToTopoDS_TranslateFaceError (StepToTopoDS_TranslateFace::*)() const) static_cast<StepToTopoDS_TranslateFaceError (StepToTopoDS_TranslateFace::*)() const>(&StepToTopoDS_TranslateFace::Error),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_TranslatePolyLoop , shared_ptr<StepToTopoDS_TranslatePolyLoop>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_TranslatePolyLoop"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepShape_PolyLoop> &,StepToTopoDS_Tool &,const opencascade::handle<Geom_Surface> &,const TopoDS_Face & >()  , py::arg("PL"),  py::arg("T"),  py::arg("S"),  py::arg("F") )
    // methods
        .def("Init",
             (void (StepToTopoDS_TranslatePolyLoop::*)( const opencascade::handle<StepShape_PolyLoop> & ,  StepToTopoDS_Tool & ,  const opencascade::handle<Geom_Surface> & ,  const TopoDS_Face &  ) ) static_cast<void (StepToTopoDS_TranslatePolyLoop::*)( const opencascade::handle<StepShape_PolyLoop> & ,  StepToTopoDS_Tool & ,  const opencascade::handle<Geom_Surface> & ,  const TopoDS_Face &  ) >(&StepToTopoDS_TranslatePolyLoop::Init),
             R"#(None)#"  , py::arg("PL"),  py::arg("T"),  py::arg("S"),  py::arg("F"))
        .def("Value",
             (const TopoDS_Shape & (StepToTopoDS_TranslatePolyLoop::*)() const) static_cast<const TopoDS_Shape & (StepToTopoDS_TranslatePolyLoop::*)() const>(&StepToTopoDS_TranslatePolyLoop::Value),
             R"#(None)#" )
        .def("Error",
             (StepToTopoDS_TranslatePolyLoopError (StepToTopoDS_TranslatePolyLoop::*)() const) static_cast<StepToTopoDS_TranslatePolyLoopError (StepToTopoDS_TranslatePolyLoop::*)() const>(&StepToTopoDS_TranslatePolyLoop::Error),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_TranslateShell , shared_ptr<StepToTopoDS_TranslateShell>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_TranslateShell"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepShape_ConnectedFaceSet> &,StepToTopoDS_Tool &,StepToTopoDS_NMTool & >()  , py::arg("CFS"),  py::arg("T"),  py::arg("NMTool") )
    // methods
        .def("Init",
             (void (StepToTopoDS_TranslateShell::*)( const opencascade::handle<StepShape_ConnectedFaceSet> & ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) ) static_cast<void (StepToTopoDS_TranslateShell::*)( const opencascade::handle<StepShape_ConnectedFaceSet> & ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) >(&StepToTopoDS_TranslateShell::Init),
             R"#(None)#"  , py::arg("CFS"),  py::arg("T"),  py::arg("NMTool"))
        .def("Value",
             (const TopoDS_Shape & (StepToTopoDS_TranslateShell::*)() const) static_cast<const TopoDS_Shape & (StepToTopoDS_TranslateShell::*)() const>(&StepToTopoDS_TranslateShell::Value),
             R"#(None)#" )
        .def("Error",
             (StepToTopoDS_TranslateShellError (StepToTopoDS_TranslateShell::*)() const) static_cast<StepToTopoDS_TranslateShellError (StepToTopoDS_TranslateShell::*)() const>(&StepToTopoDS_TranslateShell::Error),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_TranslateVertex , shared_ptr<StepToTopoDS_TranslateVertex>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_TranslateVertex"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepShape_Vertex> &,StepToTopoDS_Tool &,StepToTopoDS_NMTool & >()  , py::arg("V"),  py::arg("T"),  py::arg("NMTool") )
    // methods
        .def("Init",
             (void (StepToTopoDS_TranslateVertex::*)( const opencascade::handle<StepShape_Vertex> & ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) ) static_cast<void (StepToTopoDS_TranslateVertex::*)( const opencascade::handle<StepShape_Vertex> & ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) >(&StepToTopoDS_TranslateVertex::Init),
             R"#(None)#"  , py::arg("V"),  py::arg("T"),  py::arg("NMTool"))
        .def("Value",
             (const TopoDS_Shape & (StepToTopoDS_TranslateVertex::*)() const) static_cast<const TopoDS_Shape & (StepToTopoDS_TranslateVertex::*)() const>(&StepToTopoDS_TranslateVertex::Value),
             R"#(None)#" )
        .def("Error",
             (StepToTopoDS_TranslateVertexError (StepToTopoDS_TranslateVertex::*)() const) static_cast<StepToTopoDS_TranslateVertexError (StepToTopoDS_TranslateVertex::*)() const>(&StepToTopoDS_TranslateVertex::Error),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<StepToTopoDS_TranslateVertexLoop , shared_ptr<StepToTopoDS_TranslateVertexLoop>  , StepToTopoDS_Root >>(m.attr("StepToTopoDS_TranslateVertexLoop"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<StepShape_VertexLoop> &,StepToTopoDS_Tool &,StepToTopoDS_NMTool & >()  , py::arg("VL"),  py::arg("T"),  py::arg("NMTool") )
    // methods
        .def("Init",
             (void (StepToTopoDS_TranslateVertexLoop::*)( const opencascade::handle<StepShape_VertexLoop> & ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) ) static_cast<void (StepToTopoDS_TranslateVertexLoop::*)( const opencascade::handle<StepShape_VertexLoop> & ,  StepToTopoDS_Tool & ,  StepToTopoDS_NMTool &  ) >(&StepToTopoDS_TranslateVertexLoop::Init),
             R"#(None)#"  , py::arg("VL"),  py::arg("T"),  py::arg("NMTool"))
        .def("Value",
             (const TopoDS_Shape & (StepToTopoDS_TranslateVertexLoop::*)() const) static_cast<const TopoDS_Shape & (StepToTopoDS_TranslateVertexLoop::*)() const>(&StepToTopoDS_TranslateVertexLoop::Value),
             R"#(None)#" )
        .def("Error",
             (StepToTopoDS_TranslateVertexLoopError (StepToTopoDS_TranslateVertexLoop::*)() const) static_cast<StepToTopoDS_TranslateVertexLoopError (StepToTopoDS_TranslateVertexLoop::*)() const>(&StepToTopoDS_TranslateVertexLoop::Error),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/StepToTopoDS_TranslateShellError.hxx
// ./opencascade/StepToTopoDS_TranslatePolyLoop.hxx
// ./opencascade/StepToTopoDS_TranslateEdgeLoop.hxx
// ./opencascade/StepToTopoDS_TranslateEdgeError.hxx
// ./opencascade/StepToTopoDS_DataMapOfTRI.hxx
// ./opencascade/StepToTopoDS_DataMapOfRINames.hxx
// ./opencascade/StepToTopoDS_TranslateVertexError.hxx
// ./opencascade/StepToTopoDS_BuilderError.hxx
// ./opencascade/StepToTopoDS_MakeTransformed.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfPointVertexMap.hxx
// ./opencascade/StepToTopoDS.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfDataMapOfRINames.hxx
// ./opencascade/StepToTopoDS_Root.hxx
// ./opencascade/StepToTopoDS_TranslateCompositeCurve.hxx
// ./opencascade/StepToTopoDS_NMTool.hxx
// ./opencascade/StepToTopoDS_TranslatePolyLoopError.hxx
// ./opencascade/StepToTopoDS_CartesianPointHasher.hxx
// ./opencascade/StepToTopoDS_TranslateCurveBoundedSurface.hxx
// ./opencascade/StepToTopoDS_TranslateEdgeLoopError.hxx
// ./opencascade/StepToTopoDS_GeometricToolError.hxx
// ./opencascade/StepToTopoDS_TranslateVertex.hxx
// ./opencascade/StepToTopoDS_DataMapOfRI.hxx
// ./opencascade/StepToTopoDS_TranslateFaceError.hxx
// ./opencascade/StepToTopoDS_TranslateEdge.hxx
// ./opencascade/StepToTopoDS_TranslateVertexLoopError.hxx
// ./opencascade/StepToTopoDS_PointPairHasher.hxx
// ./opencascade/StepToTopoDS_PointVertexMap.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfDataMapOfTRI.hxx
// ./opencascade/StepToTopoDS_TranslateFace.hxx
// ./opencascade/StepToTopoDS_TranslateShell.hxx
// ./opencascade/StepToTopoDS_PointPair.hxx
// ./opencascade/StepToTopoDS_TranslateVertexLoop.hxx
// ./opencascade/StepToTopoDS_Tool.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfDataMapOfRI.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfPointEdgeMap.hxx
// ./opencascade/StepToTopoDS_Builder.hxx
// ./opencascade/StepToTopoDS_PointEdgeMap.hxx
// ./opencascade/StepToTopoDS_GeometricTool.hxx

// operators

// register typdefs
    register_template_NCollection_DataMap<opencascade::handle<StepShape_TopologicalRepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"StepToTopoDS_DataMapOfTRI");  
    register_template_NCollection_DataMap<TCollection_AsciiString, TopoDS_Shape, TCollection_AsciiString>(m,"StepToTopoDS_DataMapOfRINames");  
    register_template_NCollection_DataMap<opencascade::handle<StepRepr_RepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"StepToTopoDS_DataMapOfRI");  
    register_template_NCollection_DataMap<opencascade::handle<StepGeom_CartesianPoint>, TopoDS_Vertex, StepToTopoDS_CartesianPointHasher>(m,"StepToTopoDS_PointVertexMap");  
    register_template_NCollection_DataMap<StepToTopoDS_PointPair, TopoDS_Edge, StepToTopoDS_PointPairHasher>(m,"StepToTopoDS_PointEdgeMap");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
