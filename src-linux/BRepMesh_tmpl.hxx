#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <gp_Circ2d.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <CSLib_Class2d.hxx>
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
#include <TopoDS_Shape.hxx>
#include <BRepMesh_DiscretRoot.hxx>

// module includes
#include <BRepMesh_ModelPostProcessor.hxx>
#include <BRepMesh_DataStructureOfDelaun.hxx>
#include <BRepMesh_SelectorOfDataStructureOfDelaun.hxx>
#include <BRepMesh_PairOfIndex.hxx>
#include <BRepMesh_ModelPreProcessor.hxx>
#include <BRepMesh_Delaun.hxx>
#include <BRepMesh_Vertex.hxx>
#include <BRepMesh_ModelHealer.hxx>
#include <BRepMesh_MeshAlgoFactory.hxx>
#include <BRepMesh_Circle.hxx>
#include <BRepMesh_IncrementalMesh.hxx>
#include <BRepMesh_PluginMacro.hxx>
#include <BRepMesh_VertexInspector.hxx>
#include <BRepMesh_DegreeOfFreedom.hxx>
#include <BRepMesh_ShapeVisitor.hxx>
#include <BRepMesh_MeshTool.hxx>
#include <BRepMesh_CircleTool.hxx>
#include <BRepMesh_DiscretRoot.hxx>
#include <BRepMesh_FastDiscret.hxx>
#include <BRepMesh_Context.hxx>
#include <BRepMesh_DiscretFactory.hxx>
#include <BRepMesh_ModelBuilder.hxx>
#include <BRepMesh_Triangle.hxx>
#include <BRepMesh_CircleInspector.hxx>
#include <BRepMesh_GeomTool.hxx>
#include <BRepMesh_OrientedEdge.hxx>
#include <BRepMesh_FactoryError.hxx>
#include <BRepMesh_EdgeParameterProvider.hxx>
#include <BRepMesh_Classifier.hxx>
#include <BRepMesh_Edge.hxx>
#include <BRepMesh_FaceChecker.hxx>
#include <BRepMesh_FaceDiscret.hxx>
#include <BRepMesh_ShapeTool.hxx>
#include <BRepMesh_EdgeDiscret.hxx>
#include <BRepMesh_VertexTool.hxx>
#include <BRepMesh_Deflection.hxx>
#include <BRepMesh_EdgeTessellationExtractor.hxx>
#include <BRepMesh_CurveTessellator.hxx>
#include <BRepMesh_PluginEntryType.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BRepMesh_ModelPostProcessor.hxx
// ./opencascade/BRepMesh_DataStructureOfDelaun.hxx
// ./opencascade/BRepMesh_SelectorOfDataStructureOfDelaun.hxx
// ./opencascade/BRepMesh_PairOfIndex.hxx
// ./opencascade/BRepMesh_ModelPreProcessor.hxx
// ./opencascade/BRepMesh_Delaun.hxx
// ./opencascade/BRepMesh_Vertex.hxx
// ./opencascade/BRepMesh_ModelHealer.hxx
// ./opencascade/BRepMesh_MeshAlgoFactory.hxx
// ./opencascade/BRepMesh_Circle.hxx
// ./opencascade/BRepMesh_IncrementalMesh.hxx
// ./opencascade/BRepMesh_PluginMacro.hxx
// ./opencascade/BRepMesh_VertexInspector.hxx
// ./opencascade/BRepMesh_DegreeOfFreedom.hxx
// ./opencascade/BRepMesh_ShapeVisitor.hxx
// ./opencascade/BRepMesh_MeshTool.hxx
// ./opencascade/BRepMesh_CircleTool.hxx
// ./opencascade/BRepMesh_DiscretRoot.hxx
// ./opencascade/BRepMesh_FastDiscret.hxx
// ./opencascade/BRepMesh_Context.hxx
// ./opencascade/BRepMesh_DiscretFactory.hxx
// ./opencascade/BRepMesh_ModelBuilder.hxx
// ./opencascade/BRepMesh_Triangle.hxx
// ./opencascade/BRepMesh_CircleInspector.hxx
// ./opencascade/BRepMesh_GeomTool.hxx
// ./opencascade/BRepMesh_OrientedEdge.hxx
// ./opencascade/BRepMesh_FactoryError.hxx
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
             (void (BRepMesh_EdgeParameterProvider<ParametersCollection>::*)(  const opencascade::handle<IMeshData_Edge> & , const TopAbs_Orientation ,  const opencascade::handle<IMeshData_Face> & , const ParametersCollection & ) ) &BRepMesh_EdgeParameterProvider<ParametersCollection>::Init,
             R"#(Initialized provider by the given data.)#"  , py::arg("theEdge"),  py::arg("theOrientation"),  py::arg("theFace"),  py::arg("theParameters"))
        .def("Parameter",
             (Standard_Real (BRepMesh_EdgeParameterProvider<ParametersCollection>::*)( const Standard_Integer , const gp_Pnt & ) const) &BRepMesh_EdgeParameterProvider<ParametersCollection>::Parameter,
             R"#(Returns parameter according to SameParameter flag of the edge. If SameParameter is TRUE returns value from parameters w/o changes, elsewhere scales initial parameter and tries to determine resulting value using projection of the corresponded 3D point on PCurve.)#"  , py::arg("theIndex"),  py::arg("thePoint3d"))
        .def("GetPCurve",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (BRepMesh_EdgeParameterProvider<ParametersCollection>::*)() const) &BRepMesh_EdgeParameterProvider<ParametersCollection>::GetPCurve,
             R"#(Returns pcurve used to compute parameters.)#" )
    ;
};
// ./opencascade/BRepMesh_Classifier.hxx
// ./opencascade/BRepMesh_Edge.hxx
// ./opencascade/BRepMesh_FaceChecker.hxx
// ./opencascade/BRepMesh_FaceDiscret.hxx
// ./opencascade/BRepMesh_ShapeTool.hxx
// ./opencascade/BRepMesh_EdgeDiscret.hxx
// ./opencascade/BRepMesh_VertexTool.hxx
// ./opencascade/BRepMesh_Deflection.hxx
// ./opencascade/BRepMesh_EdgeTessellationExtractor.hxx
// ./opencascade/BRepMesh_CurveTessellator.hxx
// ./opencascade/BRepMesh_PluginEntryType.hxx

// user-defined post
