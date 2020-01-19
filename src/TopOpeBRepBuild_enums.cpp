
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_EdgeBuilder.hxx>
#include <TopOpeBRepBuild_FaceBuilder.hxx>
#include <TopOpeBRepBuild_SolidBuilder.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_PaveClassifier.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_BlockIterator.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_Builder.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_PaveClassifier.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom2d_Curve.hxx>
#include <Bnd_Box2d.hxx>
#include <TopoDS_Wire.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>

// module includes
#include <TopOpeBRepBuild_Area1dBuilder.hxx>
#include <TopOpeBRepBuild_Area2dBuilder.hxx>
#include <TopOpeBRepBuild_Area3dBuilder.hxx>
#include <TopOpeBRepBuild_AreaBuilder.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_BlockIterator.hxx>
#include <TopOpeBRepBuild_Builder.hxx>
#include <TopOpeBRepBuild_Builder1.hxx>
#include <TopOpeBRepBuild_BuilderON.hxx>
#include <TopOpeBRepBuild_CompositeClassifier.hxx>
#include <TopOpeBRepBuild_CorrectFace2d.hxx>
#include <TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape.hxx>
#include <TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx>
#include <TopOpeBRepBuild_define.hxx>
#include <TopOpeBRepBuild_EdgeBuilder.hxx>
#include <TopOpeBRepBuild_FaceAreaBuilder.hxx>
#include <TopOpeBRepBuild_FaceBuilder.hxx>
#include <TopOpeBRepBuild_FuseFace.hxx>
#include <TopOpeBRepBuild_GIter.hxx>
#include <TopOpeBRepBuild_GTool.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo.hxx>
#include <TopOpeBRepBuild_kpresu.hxx>
#include <TopOpeBRepBuild_ListIteratorOfListOfListOfLoop.hxx>
#include <TopOpeBRepBuild_ListIteratorOfListOfLoop.hxx>
#include <TopOpeBRepBuild_ListIteratorOfListOfPave.hxx>
#include <TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape.hxx>
#include <TopOpeBRepBuild_ListOfListOfLoop.hxx>
#include <TopOpeBRepBuild_ListOfLoop.hxx>
#include <TopOpeBRepBuild_ListOfPave.hxx>
#include <TopOpeBRepBuild_ListOfShapeListOfShape.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_LoopEnum.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_Pave.hxx>
#include <TopOpeBRepBuild_PaveClassifier.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_PBuilder.hxx>
#include <TopOpeBRepBuild_PGTopo.hxx>
#include <TopOpeBRepBuild_PWireEdgeSet.hxx>
#include <TopOpeBRepBuild_ShapeListOfShape.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_ShellFaceClassifier.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepBuild_ShellToSolid.hxx>
#include <TopOpeBRepBuild_SolidAreaBuilder.hxx>
#include <TopOpeBRepBuild_SolidBuilder.hxx>
#include <TopOpeBRepBuild_Tools.hxx>
#include <TopOpeBRepBuild_Tools2d.hxx>
#include <TopOpeBRepBuild_VertexInfo.hxx>
#include <TopOpeBRepBuild_WireEdgeClassifier.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_WireToFace.hxx>

// template related includes
// ./opencascade/TopOpeBRepBuild_ListOfListOfLoop.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfListOfLoop.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfPave.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfPave.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfLoop.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfLoop.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfShapeListOfShape.hxx
#include "NCollection.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfShapeListOfShape.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopOpeBRepBuild_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopOpeBRepBuild", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TopOpeBRepBuild_LoopEnum>(m, "TopOpeBRepBuild_LoopEnum",R"#(None)#")
        .value("TopOpeBRepBuild_ANYLOOP",TopOpeBRepBuild_LoopEnum::TopOpeBRepBuild_ANYLOOP)
        .value("TopOpeBRepBuild_BOUNDARY",TopOpeBRepBuild_LoopEnum::TopOpeBRepBuild_BOUNDARY)
        .value("TopOpeBRepBuild_BLOCK",TopOpeBRepBuild_LoopEnum::TopOpeBRepBuild_BLOCK).export_values();

//Python trampoline classes
    class Py_TopOpeBRepBuild_LoopClassifier : public TopOpeBRepBuild_LoopClassifier{
    public:
        using TopOpeBRepBuild_LoopClassifier::TopOpeBRepBuild_LoopClassifier;
        
        // public pure virtual
        TopAbs_State Compare(const opencascade::handle<TopOpeBRepBuild_Loop> & L1,const opencascade::handle<TopOpeBRepBuild_Loop> & L2) override { PYBIND11_OVERLOAD_PURE(TopAbs_State,TopOpeBRepBuild_LoopClassifier,Compare,L1,L2) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_TopOpeBRepBuild_CompositeClassifier : public TopOpeBRepBuild_CompositeClassifier{
    public:
        using TopOpeBRepBuild_CompositeClassifier::TopOpeBRepBuild_CompositeClassifier;
        
        // public pure virtual
        TopAbs_State CompareShapes(const TopoDS_Shape & B1,const TopoDS_Shape & B2) override { PYBIND11_OVERLOAD_PURE(TopAbs_State,TopOpeBRepBuild_CompositeClassifier,CompareShapes,B1,B2) };
        TopAbs_State CompareElementToShape(const TopoDS_Shape & E,const TopoDS_Shape & B) override { PYBIND11_OVERLOAD_PURE(TopAbs_State,TopOpeBRepBuild_CompositeClassifier,CompareElementToShape,E,B) };
        void ResetShape(const TopoDS_Shape & B) override { PYBIND11_OVERLOAD_PURE(void,TopOpeBRepBuild_CompositeClassifier,ResetShape,B) };
        void ResetElement(const TopoDS_Shape & E) override { PYBIND11_OVERLOAD_PURE(void,TopOpeBRepBuild_CompositeClassifier,ResetElement,E) };
        Standard_Boolean CompareElement(const TopoDS_Shape & E) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,TopOpeBRepBuild_CompositeClassifier,CompareElement,E) };
        TopAbs_State State() override { PYBIND11_OVERLOAD_PURE(TopAbs_State,TopOpeBRepBuild_CompositeClassifier,State,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_NCollection_List<TopOpeBRepBuild_ListOfLoop>(m,"TopOpeBRepBuild_ListOfListOfLoop");  
    preregister_template_NCollection_List<opencascade::handle<TopOpeBRepBuild_Pave> >(m,"TopOpeBRepBuild_ListOfPave");  
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepBuild_VertexInfo, TopTools_ShapeMapHasher>(m,"TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo");  
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepBuild_ListOfShapeListOfShape, TopTools_ShapeMapHasher>(m,"TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape");  
    preregister_template_NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >(m,"TopOpeBRepBuild_ListOfLoop");  
    preregister_template_NCollection_List<TopOpeBRepBuild_ShapeListOfShape>(m,"TopOpeBRepBuild_ListOfShapeListOfShape");  

// classes forward declarations only
    py::class_<TopOpeBRepBuild_AreaBuilder , shared_ptr<TopOpeBRepBuild_AreaBuilder>  >(m,"TopOpeBRepBuild_AreaBuilder",R"#(The AreaBuilder algorithm is used to reconstruct complex topological objects as Faces or Solids. * Loop is the composite topological object of the boundary. Wire for a Face. Shell for a Solid. * LoopSet is a tool describing the object to build. It gives an iteration on Loops. For each Loop it tells if it is on the boundary or if it is an interference. * LoopClassifier is an algorithm used to test if a Loop is inside another Loop. The result of the reconstruction is an iteration on the reconstructed areas. An area is described by a set of Loops. A AreaBuilder is built with : - a LoopSet describing the object to reconstruct. - a LoopClassifier providing the classification algorithm.)#");
    py::class_<TopOpeBRepBuild_BlockBuilder , shared_ptr<TopOpeBRepBuild_BlockBuilder>  >(m,"TopOpeBRepBuild_BlockBuilder",R"#(None)#");
    py::class_<TopOpeBRepBuild_BlockIterator , shared_ptr<TopOpeBRepBuild_BlockIterator>  >(m,"TopOpeBRepBuild_BlockIterator",R"#(Iterator on the elements of a block.)#");
    py::class_<TopOpeBRepBuild_Builder , shared_ptr<TopOpeBRepBuild_Builder>  >(m,"TopOpeBRepBuild_Builder",R"#(The Builder algorithm constructs topological objects from an existing topology and new geometries attached to the topology. It is used to construct the result of a topological operation; the existing topologies are the parts involved in the topological operation and the new geometries are the intersection lines and points.)#");
    py::class_<TopOpeBRepBuild_BuilderON , shared_ptr<TopOpeBRepBuild_BuilderON>  >(m,"TopOpeBRepBuild_BuilderON",R"#(None)#");
    py::class_<TopOpeBRepBuild_CorrectFace2d , shared_ptr<TopOpeBRepBuild_CorrectFace2d>  >(m,"TopOpeBRepBuild_CorrectFace2d",R"#(None)#");
    py::class_<TopOpeBRepBuild_FaceBuilder , shared_ptr<TopOpeBRepBuild_FaceBuilder>  >(m,"TopOpeBRepBuild_FaceBuilder",R"#(None)#");
    py::class_<TopOpeBRepBuild_FuseFace , shared_ptr<TopOpeBRepBuild_FuseFace>  >(m,"TopOpeBRepBuild_FuseFace",R"#(None)#");
    py::class_<TopOpeBRepBuild_GIter , shared_ptr<TopOpeBRepBuild_GIter>  >(m,"TopOpeBRepBuild_GIter",R"#(None)#");
    py::class_<TopOpeBRepBuild_GTool , shared_ptr<TopOpeBRepBuild_GTool>  >(m,"TopOpeBRepBuild_GTool",R"#(None)#");
    py::class_<TopOpeBRepBuild_GTopo , shared_ptr<TopOpeBRepBuild_GTopo>  >(m,"TopOpeBRepBuild_GTopo",R"#(None)#");
    py::class_<TopOpeBRepBuild_HBuilder ,opencascade::handle<TopOpeBRepBuild_HBuilder>  , Standard_Transient >(m,"TopOpeBRepBuild_HBuilder",R"#(The HBuilder algorithm constructs topological objects from an existing topology and new geometries attached to the topology. It is used to construct the result of a topological operation; the existing topologies are the parts involved in the topological operation and the new geometries are the intersection lines and points.The HBuilder algorithm constructs topological objects from an existing topology and new geometries attached to the topology. It is used to construct the result of a topological operation; the existing topologies are the parts involved in the topological operation and the new geometries are the intersection lines and points.The HBuilder algorithm constructs topological objects from an existing topology and new geometries attached to the topology. It is used to construct the result of a topological operation; the existing topologies are the parts involved in the topological operation and the new geometries are the intersection lines and points.)#");
    py::class_<TopOpeBRepBuild_Loop ,opencascade::handle<TopOpeBRepBuild_Loop>  , Standard_Transient >(m,"TopOpeBRepBuild_Loop",R"#(a Loop is an existing shape (Shell,Wire) or a set of shapes (Faces,Edges) which are connex. a set of connex shape is represented by a BlockIteratora Loop is an existing shape (Shell,Wire) or a set of shapes (Faces,Edges) which are connex. a set of connex shape is represented by a BlockIteratora Loop is an existing shape (Shell,Wire) or a set of shapes (Faces,Edges) which are connex. a set of connex shape is represented by a BlockIterator)#");
    py::class_<TopOpeBRepBuild_LoopClassifier , shared_ptr<TopOpeBRepBuild_LoopClassifier> ,Py_TopOpeBRepBuild_LoopClassifier >(m,"TopOpeBRepBuild_LoopClassifier",R"#(classify loops in order to build Areas)#");
    py::class_<TopOpeBRepBuild_LoopSet , shared_ptr<TopOpeBRepBuild_LoopSet>  >(m,"TopOpeBRepBuild_LoopSet",R"#(None)#");
    py::class_<TopOpeBRepBuild_ShapeListOfShape , shared_ptr<TopOpeBRepBuild_ShapeListOfShape>  >(m,"TopOpeBRepBuild_ShapeListOfShape",R"#(represent shape + a list of shape)#");
    py::class_<TopOpeBRepBuild_ShapeSet , shared_ptr<TopOpeBRepBuild_ShapeSet>  >(m,"TopOpeBRepBuild_ShapeSet",R"#(Auxiliary class providing an exploration of a set of shapes to build faces or solids. To build faces : shapes are wires, elements are edges. To build solids : shapes are shells, elements are faces. The ShapeSet stores a list of shapes, a list of elements to start reconstructions, and a map to search neighbours. The map stores the connection between elements through subshapes of type <SubShapeType> given in constructor. <SubShapeType> is : - TopAbs_VERTEX to connect edges - TopAbs_EDGE to connect faces)#");
    py::class_<TopOpeBRepBuild_ShellToSolid , shared_ptr<TopOpeBRepBuild_ShellToSolid>  >(m,"TopOpeBRepBuild_ShellToSolid",R"#(This class builds solids from a set of shells SSh and a solid F.)#");
    py::class_<TopOpeBRepBuild_SolidBuilder , shared_ptr<TopOpeBRepBuild_SolidBuilder>  >(m,"TopOpeBRepBuild_SolidBuilder",R"#(None)#");
    py::class_<TopOpeBRepBuild_Tools , shared_ptr<TopOpeBRepBuild_Tools>  >(m,"TopOpeBRepBuild_Tools",R"#(Auxiliary methods used in TopOpeBRepBuild_Builder1 class)#");
    py::class_<TopOpeBRepBuild_Tools2d , shared_ptr<TopOpeBRepBuild_Tools2d>  >(m,"TopOpeBRepBuild_Tools2d",R"#(None)#");
    py::class_<TopOpeBRepBuild_VertexInfo , shared_ptr<TopOpeBRepBuild_VertexInfo>  >(m,"TopOpeBRepBuild_VertexInfo",R"#(None)#");
    py::class_<TopOpeBRepBuild_WireToFace , shared_ptr<TopOpeBRepBuild_WireToFace>  >(m,"TopOpeBRepBuild_WireToFace",R"#(This class builds faces from a set of wires SW and a face F. The face must have and underlying surface, say S. All of the edges of all of the wires must have a 2d representation on surface S (except if S is planar))#");
    py::class_<TopOpeBRepBuild_Area1dBuilder , shared_ptr<TopOpeBRepBuild_Area1dBuilder>  , TopOpeBRepBuild_AreaBuilder >(m,"TopOpeBRepBuild_Area1dBuilder",R"#(None)#");
    py::class_<TopOpeBRepBuild_Area2dBuilder , shared_ptr<TopOpeBRepBuild_Area2dBuilder>  , TopOpeBRepBuild_AreaBuilder >(m,"TopOpeBRepBuild_Area2dBuilder",R"#(The Area2dBuilder algorithm is used to construct Faces from a LoopSet, where the Loop is the composite topological object of the boundary, here wire or block of edges. The LoopSet gives an iteration on Loops. For each Loop it indicates if it is on the boundary (wire) or if it results from an interference (block of edges). The result of the Area2dBuilder is an iteration on areas. An area is described by a set of Loops.)#");
    py::class_<TopOpeBRepBuild_Area3dBuilder , shared_ptr<TopOpeBRepBuild_Area3dBuilder>  , TopOpeBRepBuild_AreaBuilder >(m,"TopOpeBRepBuild_Area3dBuilder",R"#(The Area3dBuilder algorithm is used to construct Solids from a LoopSet, where the Loop is the composite topological object of the boundary, here wire or block of edges. The LoopSet gives an iteration on Loops. For each Loop it indicates if it is on the boundary (wire) or if it results from an interference (block of edges). The result of the Area3dBuilder is an iteration on areas. An area is described by a set of Loops.)#");
    py::class_<TopOpeBRepBuild_Builder1 , shared_ptr<TopOpeBRepBuild_Builder1>  , TopOpeBRepBuild_Builder >(m,"TopOpeBRepBuild_Builder1",R"#(extension of the class TopOpeBRepBuild_Builder dedicated to avoid bugs in "Rebuilding Result" algorithm for the case of SOLID/SOLID Boolean Operations)#");
    py::class_<TopOpeBRepBuild_CompositeClassifier , shared_ptr<TopOpeBRepBuild_CompositeClassifier> ,Py_TopOpeBRepBuild_CompositeClassifier , TopOpeBRepBuild_LoopClassifier >(m,"TopOpeBRepBuild_CompositeClassifier",R"#(classify composite Loops, i.e, loops that can be either a Shape, or a block of Elements.)#");
    py::class_<TopOpeBRepBuild_Pave ,opencascade::handle<TopOpeBRepBuild_Pave>  , TopOpeBRepBuild_Loop >(m,"TopOpeBRepBuild_Pave",R"#()#");
    py::class_<TopOpeBRepBuild_PaveClassifier , shared_ptr<TopOpeBRepBuild_PaveClassifier>  , TopOpeBRepBuild_LoopClassifier >(m,"TopOpeBRepBuild_PaveClassifier",R"#(This class compares vertices on an edge.)#");
    py::class_<TopOpeBRepBuild_PaveSet , shared_ptr<TopOpeBRepBuild_PaveSet>  , TopOpeBRepBuild_LoopSet >(m,"TopOpeBRepBuild_PaveSet",R"#(class providing an exploration of a set of vertices to build edges. It is similar to LoopSet from TopOpeBRepBuild where Loop is Pave.)#");
    py::class_<TopOpeBRepBuild_ShellFaceSet , shared_ptr<TopOpeBRepBuild_ShellFaceSet>  , TopOpeBRepBuild_ShapeSet >(m,"TopOpeBRepBuild_ShellFaceSet",R"#(a bound is a shell, a boundelement is a face. The ShapeSet stores : - a list of shell (bounds), - a list of face (boundelements) to start reconstructions, - a map of edge giving the list of face incident to an edge.)#");
    py::class_<TopOpeBRepBuild_WireEdgeSet , shared_ptr<TopOpeBRepBuild_WireEdgeSet>  , TopOpeBRepBuild_ShapeSet >(m,"TopOpeBRepBuild_WireEdgeSet",R"#(a bound is a wire, a boundelement is an edge. The ShapeSet stores : - a list of wire (bounds), - a list of edge (boundelements) to start reconstructions, - a map of vertex giving the list of edge incident to a vertex.)#");
    py::class_<TopOpeBRepBuild_EdgeBuilder , shared_ptr<TopOpeBRepBuild_EdgeBuilder>  , TopOpeBRepBuild_Area1dBuilder >(m,"TopOpeBRepBuild_EdgeBuilder",R"#(None)#");
    py::class_<TopOpeBRepBuild_FaceAreaBuilder , shared_ptr<TopOpeBRepBuild_FaceAreaBuilder>  , TopOpeBRepBuild_Area2dBuilder >(m,"TopOpeBRepBuild_FaceAreaBuilder",R"#(The FaceAreaBuilder algorithm is used to construct Faces from a LoopSet, where the Loop is the composite topological object of the boundary, here wire or block of edges. The LoopSet gives an iteration on Loops. For each Loop it indicates if it is on the boundary (wire) or if it results from an interference (block of edges). The result of the FaceAreaBuilder is an iteration on areas. An area is described by a set of Loops.)#");
    py::class_<TopOpeBRepBuild_ShellFaceClassifier , shared_ptr<TopOpeBRepBuild_ShellFaceClassifier>  , TopOpeBRepBuild_CompositeClassifier >(m,"TopOpeBRepBuild_ShellFaceClassifier",R"#(Classify faces and shells. shapes are Shells, Elements are Faces.)#");
    py::class_<TopOpeBRepBuild_SolidAreaBuilder , shared_ptr<TopOpeBRepBuild_SolidAreaBuilder>  , TopOpeBRepBuild_Area3dBuilder >(m,"TopOpeBRepBuild_SolidAreaBuilder",R"#(The SolidAreaBuilder algorithm is used to construct Solids from a LoopSet, where the Loop is the composite topological object of the boundary, here wire or block of edges. The LoopSet gives an iteration on Loops. For each Loop it indicates if it is on the boundary (wire) or if it results from an interference (block of edges). The result of the SolidAreaBuilder is an iteration on areas. An area is described by a set of Loops.)#");
    py::class_<TopOpeBRepBuild_WireEdgeClassifier , shared_ptr<TopOpeBRepBuild_WireEdgeClassifier>  , TopOpeBRepBuild_CompositeClassifier >(m,"TopOpeBRepBuild_WireEdgeClassifier",R"#(Classify edges and wires. shapes are Wires, Element are Edge.)#");

};

// user-defined post-inclusion per module

// user-defined post
