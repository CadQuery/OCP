#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Poly_Polygon3D.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Circ2d.hxx>
#include <BRepMesh_DataStructureOfDelaun.hxx>
#include <BRepMesh_Delaun.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepMesh_DiscretRoot.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepMesh_DefaultRangeSplitter.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepMesh_DataStructureOfDelaun.hxx>
#include <BRepMesh_Delaun.hxx>
#include <BRepMesh_DataStructureOfDelaun.hxx>
#include <BRepMesh_Delaun.hxx>
#include <CSLib_Class2d.hxx>
#include <BRepMesh_DataStructureOfDelaun.hxx>
#include <BRepMesh_Delaun.hxx>

// module includes
#include <BRepMesh_ConeRangeSplitter.hxx>
#include <BRepMesh_ShapeTool.hxx>
#include <BRepMesh_PluginMacro.hxx>
#include <BRepMesh_Context.hxx>
#include <BRepMesh_DefaultRangeSplitter.hxx>
#include <BRepMesh_Edge.hxx>
#include <BRepMesh_UVParamRangeSplitter.hxx>
#include <BRepMesh_Deflection.hxx>
#include <BRepMesh_VertexTool.hxx>
#include <BRepMesh_IncrementalMesh.hxx>
#include <BRepMesh_CustomBaseMeshAlgo.hxx>
#include <BRepMesh_ModelPreProcessor.hxx>
#include <BRepMesh_DegreeOfFreedom.hxx>
#include <BRepMesh_Delaun.hxx>
#include <BRepMesh_ModelBuilder.hxx>
#include <BRepMesh_CurveTessellator.hxx>
#include <BRepMesh_DiscretRoot.hxx>
#include <BRepMesh_VertexInspector.hxx>
#include <BRepMesh_CylinderRangeSplitter.hxx>
#include <BRepMesh_CircleTool.hxx>
#include <BRepMesh_FastDiscret.hxx>
#include <BRepMesh_DelaunayBaseMeshAlgo.hxx>
#include <BRepMesh_PluginEntryType.hxx>
#include <BRepMesh_DataStructureOfDelaun.hxx>
#include <BRepMesh_GeomTool.hxx>
#include <BRepMesh_DiscretFactory.hxx>
#include <BRepMesh_ShapeVisitor.hxx>
#include <BRepMesh_PairOfIndex.hxx>
#include <BRepMesh_EdgeParameterProvider.hxx>
#include <BRepMesh_MeshAlgoFactory.hxx>
#include <BRepMesh_EdgeTessellationExtractor.hxx>
#include <BRepMesh_CustomDelaunayBaseMeshAlgo.hxx>
#include <BRepMesh_TorusRangeSplitter.hxx>
#include <BRepMesh_DelaunayDeflectionControlMeshAlgo.hxx>
#include <BRepMesh_FaceDiscret.hxx>
#include <BRepMesh_ModelHealer.hxx>
#include <BRepMesh_BoundaryParamsRangeSplitter.hxx>
#include <BRepMesh_SphereRangeSplitter.hxx>
#include <BRepMesh_NURBSRangeSplitter.hxx>
#include <BRepMesh_OrientedEdge.hxx>
#include <BRepMesh_BaseMeshAlgo.hxx>
#include <BRepMesh_Classifier.hxx>
#include <BRepMesh_ModelPostProcessor.hxx>
#include <BRepMesh_SelectorOfDataStructureOfDelaun.hxx>
#include <BRepMesh_FaceChecker.hxx>
#include <BRepMesh_FactoryError.hxx>
#include <BRepMesh_NodeInsertionMeshAlgo.hxx>
#include <BRepMesh_Triangle.hxx>
#include <BRepMesh_EdgeDiscret.hxx>
#include <BRepMesh_ConstrainedBaseMeshAlgo.hxx>
#include <BRepMesh_Vertex.hxx>
#include <BRepMesh_Circle.hxx>
#include <BRepMesh_CircleInspector.hxx>
#include <BRepMesh_MeshTool.hxx>
#include <BRepMesh_DelaunayNodeInsertionMeshAlgo.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepMesh_ConeRangeSplitter.hxx
// ./opencascade/BRepMesh_ShapeTool.hxx
// ./opencascade/BRepMesh_PluginMacro.hxx
// ./opencascade/BRepMesh_Context.hxx
// ./opencascade/BRepMesh_DefaultRangeSplitter.hxx
// ./opencascade/BRepMesh_Edge.hxx
// ./opencascade/BRepMesh_UVParamRangeSplitter.hxx
// ./opencascade/BRepMesh_Deflection.hxx
// ./opencascade/BRepMesh_VertexTool.hxx
// ./opencascade/BRepMesh_IncrementalMesh.hxx
// ./opencascade/BRepMesh_CustomBaseMeshAlgo.hxx
// ./opencascade/BRepMesh_ModelPreProcessor.hxx
// ./opencascade/BRepMesh_DegreeOfFreedom.hxx
// ./opencascade/BRepMesh_Delaun.hxx
// ./opencascade/BRepMesh_ModelBuilder.hxx
// ./opencascade/BRepMesh_CurveTessellator.hxx
// ./opencascade/BRepMesh_DiscretRoot.hxx
// ./opencascade/BRepMesh_VertexInspector.hxx
// ./opencascade/BRepMesh_CylinderRangeSplitter.hxx
// ./opencascade/BRepMesh_CircleTool.hxx
// ./opencascade/BRepMesh_FastDiscret.hxx
// ./opencascade/BRepMesh_DelaunayBaseMeshAlgo.hxx
// ./opencascade/BRepMesh_PluginEntryType.hxx
// ./opencascade/BRepMesh_DataStructureOfDelaun.hxx
// ./opencascade/BRepMesh_GeomTool.hxx
// ./opencascade/BRepMesh_DiscretFactory.hxx
// ./opencascade/BRepMesh_ShapeVisitor.hxx
// ./opencascade/BRepMesh_PairOfIndex.hxx
// ./opencascade/BRepMesh_EdgeParameterProvider.hxx

template <typename ParametersCollection>
void preregister_template_BRepMesh_EdgeParameterProvider(py::object &m, const char *name){
    py::class_<BRepMesh_EdgeParameterProvider<ParametersCollection> , shared_ptr<BRepMesh_EdgeParameterProvider<ParametersCollection>> >(m,name,R"#(Auxiliary class provides correct parameters on curve regarding SameParameter flag.)#");
}

template <typename ParametersCollection>
void register_template_BRepMesh_EdgeParameterProvider(py::object &m, const char *name){
    static_cast<py::class_<BRepMesh_EdgeParameterProvider<ParametersCollection> , shared_ptr<BRepMesh_EdgeParameterProvider<ParametersCollection>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init<  const opencascade::handle<IMeshData_Edge> &,const TopAbs_Orientation, const opencascade::handle<IMeshData_Face> &,const ParametersCollection & >()  , py::arg("theEdge"),  py::arg("theOrientation"),  py::arg("theFace"),  py::arg("theParameters") )
        .def("Init",
             (void (BRepMesh_EdgeParameterProvider<ParametersCollection>::*)(  const opencascade::handle<IMeshData_Edge> & ,  const TopAbs_Orientation ,   const opencascade::handle<IMeshData_Face> & ,  const ParametersCollection &  ) ) &BRepMesh_EdgeParameterProvider<ParametersCollection>::Init,
             R"#(Initialized provider by the given data.)#"  , py::arg("theEdge"),  py::arg("theOrientation"),  py::arg("theFace"),  py::arg("theParameters"))
        .def("Parameter",
             (Standard_Real (BRepMesh_EdgeParameterProvider<ParametersCollection>::*)( const Standard_Integer ,  const gp_Pnt &  ) const) &BRepMesh_EdgeParameterProvider<ParametersCollection>::Parameter,
             R"#(Returns parameter according to SameParameter flag of the edge. If SameParameter is TRUE returns value from parameters w/o changes, elsewhere scales initial parameter and tries to determine resulting value using projection of the corresponded 3D point on PCurve.)#"  , py::arg("theIndex"),  py::arg("thePoint3d"))
        .def("GetPCurve",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (BRepMesh_EdgeParameterProvider<ParametersCollection>::*)() const) &BRepMesh_EdgeParameterProvider<ParametersCollection>::GetPCurve,
             R"#(Returns pcurve used to compute parameters.)#" )
    ;
};
// ./opencascade/BRepMesh_MeshAlgoFactory.hxx
// ./opencascade/BRepMesh_EdgeTessellationExtractor.hxx
// ./opencascade/BRepMesh_CustomDelaunayBaseMeshAlgo.hxx

template <typename BaseAlgo>
void preregister_template_BRepMesh_CustomDelaunayBaseMeshAlgo(py::object &m, const char *name){
    py::class_<BRepMesh_CustomDelaunayBaseMeshAlgo<BaseAlgo> , shared_ptr<BRepMesh_CustomDelaunayBaseMeshAlgo<BaseAlgo>> >(m,name,R"#(Class provides base fuctionality to build face triangulation using custom triangulation algorithm with possibility to modify final mesh. Performs generation of mesh using raw data from model.)#");
}

template <typename BaseAlgo>
void register_template_BRepMesh_CustomDelaunayBaseMeshAlgo(py::object &m, const char *name){
    static_cast<py::class_<BRepMesh_CustomDelaunayBaseMeshAlgo<BaseAlgo> , shared_ptr<BRepMesh_CustomDelaunayBaseMeshAlgo<BaseAlgo>> >>(m.attr(name))
        .def(py::init<  >()  )
    ;
};
// ./opencascade/BRepMesh_TorusRangeSplitter.hxx
// ./opencascade/BRepMesh_DelaunayDeflectionControlMeshAlgo.hxx

template <typename RangeSplitter,typename BaseAlgo>
void preregister_template_BRepMesh_DelaunayDeflectionControlMeshAlgo(py::object &m, const char *name){
    py::class_<BRepMesh_DelaunayDeflectionControlMeshAlgo<RangeSplitter,BaseAlgo> , shared_ptr<BRepMesh_DelaunayDeflectionControlMeshAlgo<RangeSplitter,BaseAlgo>> >(m,name,R"#(Extends node insertion Delaunay meshing algo in order to control deflection of generated trianges. Splits triangles failing the check.)#");
}

template <typename RangeSplitter,typename BaseAlgo>
void register_template_BRepMesh_DelaunayDeflectionControlMeshAlgo(py::object &m, const char *name){
    static_cast<py::class_<BRepMesh_DelaunayDeflectionControlMeshAlgo<RangeSplitter,BaseAlgo> , shared_ptr<BRepMesh_DelaunayDeflectionControlMeshAlgo<RangeSplitter,BaseAlgo>> >>(m.attr(name))
        .def(py::init<  >()  )
    ;
};
// ./opencascade/BRepMesh_FaceDiscret.hxx
// ./opencascade/BRepMesh_ModelHealer.hxx
// ./opencascade/BRepMesh_BoundaryParamsRangeSplitter.hxx
// ./opencascade/BRepMesh_SphereRangeSplitter.hxx
// ./opencascade/BRepMesh_NURBSRangeSplitter.hxx
// ./opencascade/BRepMesh_OrientedEdge.hxx
// ./opencascade/BRepMesh_BaseMeshAlgo.hxx
// ./opencascade/BRepMesh_Classifier.hxx
// ./opencascade/BRepMesh_ModelPostProcessor.hxx
// ./opencascade/BRepMesh_SelectorOfDataStructureOfDelaun.hxx
// ./opencascade/BRepMesh_FaceChecker.hxx
// ./opencascade/BRepMesh_FactoryError.hxx
// ./opencascade/BRepMesh_NodeInsertionMeshAlgo.hxx

template <typename RangeSplitter,typename BaseAlgo>
void preregister_template_BRepMesh_NodeInsertionMeshAlgo(py::object &m, const char *name){
    py::class_<BRepMesh_NodeInsertionMeshAlgo<RangeSplitter,BaseAlgo> , shared_ptr<BRepMesh_NodeInsertionMeshAlgo<RangeSplitter,BaseAlgo>> >(m,name,R"#(Extends base meshing algo in order to enable possibility of addition of free vertices into the mesh.)#");
}

template <typename RangeSplitter,typename BaseAlgo>
void register_template_BRepMesh_NodeInsertionMeshAlgo(py::object &m, const char *name){
    static_cast<py::class_<BRepMesh_NodeInsertionMeshAlgo<RangeSplitter,BaseAlgo> , shared_ptr<BRepMesh_NodeInsertionMeshAlgo<RangeSplitter,BaseAlgo>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Perform",
             (void (BRepMesh_NodeInsertionMeshAlgo<RangeSplitter,BaseAlgo>::*)(  const opencascade::handle<IMeshData_Face> & ,  const int &  ) ) &BRepMesh_NodeInsertionMeshAlgo<RangeSplitter,BaseAlgo>::Perform,
             R"#(Performs processing of the given face.)#"  , py::arg("theDFace"),  py::arg("theParameters"))
    ;
};
// ./opencascade/BRepMesh_Triangle.hxx
// ./opencascade/BRepMesh_EdgeDiscret.hxx
// ./opencascade/BRepMesh_ConstrainedBaseMeshAlgo.hxx
// ./opencascade/BRepMesh_Vertex.hxx
// ./opencascade/BRepMesh_Circle.hxx
// ./opencascade/BRepMesh_CircleInspector.hxx
// ./opencascade/BRepMesh_MeshTool.hxx
// ./opencascade/BRepMesh_DelaunayNodeInsertionMeshAlgo.hxx

template <typename RangeSplitter,typename BaseAlgo>
void preregister_template_BRepMesh_DelaunayNodeInsertionMeshAlgo(py::object &m, const char *name){
    py::class_<BRepMesh_DelaunayNodeInsertionMeshAlgo<RangeSplitter,BaseAlgo> , shared_ptr<BRepMesh_DelaunayNodeInsertionMeshAlgo<RangeSplitter,BaseAlgo>> >(m,name,R"#(Extends base Delaunay meshing algo in order to enable possibility of addition of free vertices and internal nodes into the mesh.)#");
}

template <typename RangeSplitter,typename BaseAlgo>
void register_template_BRepMesh_DelaunayNodeInsertionMeshAlgo(py::object &m, const char *name){
    static_cast<py::class_<BRepMesh_DelaunayNodeInsertionMeshAlgo<RangeSplitter,BaseAlgo> , shared_ptr<BRepMesh_DelaunayNodeInsertionMeshAlgo<RangeSplitter,BaseAlgo>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("IsPreProcessSurfaceNodes",
             (Standard_Boolean (BRepMesh_DelaunayNodeInsertionMeshAlgo<RangeSplitter,BaseAlgo>::*)() const) &BRepMesh_DelaunayNodeInsertionMeshAlgo<RangeSplitter,BaseAlgo>::IsPreProcessSurfaceNodes,
             R"#(Returns PreProcessSurfaceNodes flag.)#" )
        .def("SetPreProcessSurfaceNodes",
             (void (BRepMesh_DelaunayNodeInsertionMeshAlgo<RangeSplitter,BaseAlgo>::*)( const Standard_Boolean  ) ) &BRepMesh_DelaunayNodeInsertionMeshAlgo<RangeSplitter,BaseAlgo>::SetPreProcessSurfaceNodes,
             R"#(Sets PreProcessSurfaceNodes flag. If TRUE, registers surface nodes before generation of base mesh. If FALSE, inserts surface nodes after generation of base mesh.)#"  , py::arg("isPreProcessSurfaceNodes"))
    ;
};

// user-defined post
