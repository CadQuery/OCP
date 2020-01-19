
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_TopOpeBRepBuild(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopOpeBRepBuild"));


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

// classes


    static_cast<py::class_<TopOpeBRepBuild_AreaBuilder , shared_ptr<TopOpeBRepBuild_AreaBuilder>  >>(m.attr("TopOpeBRepBuild_AreaBuilder"))
        .def(py::init<  >()  )
        .def(py::init< TopOpeBRepBuild_LoopSet &,TopOpeBRepBuild_LoopClassifier &,const Standard_Boolean >()  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("InitAreaBuilder",
             (void (TopOpeBRepBuild_AreaBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_AreaBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_AreaBuilder::InitAreaBuilder),
             R"#(Sets a AreaBuilder to find the areas on the shapes described by <LS> using the classifier <LC>.)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
        .def("InitArea",
             (Standard_Integer (TopOpeBRepBuild_AreaBuilder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_AreaBuilder::*)() >(&TopOpeBRepBuild_AreaBuilder::InitArea),
             R"#(Initialize iteration on areas.)#" )
        .def("MoreArea",
             (Standard_Boolean (TopOpeBRepBuild_AreaBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_AreaBuilder::*)() const>(&TopOpeBRepBuild_AreaBuilder::MoreArea),
             R"#(None)#" )
        .def("NextArea",
             (void (TopOpeBRepBuild_AreaBuilder::*)() ) static_cast<void (TopOpeBRepBuild_AreaBuilder::*)() >(&TopOpeBRepBuild_AreaBuilder::NextArea),
             R"#(None)#" )
        .def("InitLoop",
             (Standard_Integer (TopOpeBRepBuild_AreaBuilder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_AreaBuilder::*)() >(&TopOpeBRepBuild_AreaBuilder::InitLoop),
             R"#(Initialize iteration on loops of current Area.)#" )
        .def("MoreLoop",
             (Standard_Boolean (TopOpeBRepBuild_AreaBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_AreaBuilder::*)() const>(&TopOpeBRepBuild_AreaBuilder::MoreLoop),
             R"#(None)#" )
        .def("NextLoop",
             (void (TopOpeBRepBuild_AreaBuilder::*)() ) static_cast<void (TopOpeBRepBuild_AreaBuilder::*)() >(&TopOpeBRepBuild_AreaBuilder::NextLoop),
             R"#(None)#" )
        .def("Loop",
             (const opencascade::handle<TopOpeBRepBuild_Loop> & (TopOpeBRepBuild_AreaBuilder::*)() const) static_cast<const opencascade::handle<TopOpeBRepBuild_Loop> & (TopOpeBRepBuild_AreaBuilder::*)() const>(&TopOpeBRepBuild_AreaBuilder::Loop),
             R"#(Returns the current Loop in the current area.)#" )
        .def("ADD_Loop_TO_LISTOFLoop",
             (void (TopOpeBRepBuild_AreaBuilder::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_AreaBuilder::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_AreaBuilder::ADD_Loop_TO_LISTOFLoop),
             R"#(None)#"  , py::arg("L"),  py::arg("LOL"),  py::arg("s")=static_cast<const Standard_Address>(NULL))
        .def("REM_Loop_FROM_LISTOFLoop",
             (void (TopOpeBRepBuild_AreaBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >::Iterator & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_AreaBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >::Iterator & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_AreaBuilder::REM_Loop_FROM_LISTOFLoop),
             R"#(None)#"  , py::arg("ITLOL"),  py::arg("LOL"),  py::arg("s")=static_cast<const Standard_Address>(NULL))
        .def("ADD_LISTOFLoop_TO_LISTOFLoop",
             (void (TopOpeBRepBuild_AreaBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address ,  const Standard_Address ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_AreaBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address ,  const Standard_Address ,  const Standard_Address  ) const>(&TopOpeBRepBuild_AreaBuilder::ADD_LISTOFLoop_TO_LISTOFLoop),
             R"#(None)#"  , py::arg("LOL1"),  py::arg("LOL2"),  py::arg("s")=static_cast<const Standard_Address>(NULL),  py::arg("s1")=static_cast<const Standard_Address>(NULL),  py::arg("s2")=static_cast<const Standard_Address>(NULL))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_BlockBuilder , shared_ptr<TopOpeBRepBuild_BlockBuilder>  >>(m.attr("TopOpeBRepBuild_BlockBuilder"))
        .def(py::init<  >()  )
        .def(py::init< TopOpeBRepBuild_ShapeSet & >()  , py::arg("SS") )
    // methods
        .def("MakeBlock",
             (void (TopOpeBRepBuild_BlockBuilder::*)( TopOpeBRepBuild_ShapeSet &  ) ) static_cast<void (TopOpeBRepBuild_BlockBuilder::*)( TopOpeBRepBuild_ShapeSet &  ) >(&TopOpeBRepBuild_BlockBuilder::MakeBlock),
             R"#(None)#"  , py::arg("SS"))
        .def("InitBlock",
             (void (TopOpeBRepBuild_BlockBuilder::*)() ) static_cast<void (TopOpeBRepBuild_BlockBuilder::*)() >(&TopOpeBRepBuild_BlockBuilder::InitBlock),
             R"#(None)#" )
        .def("MoreBlock",
             (Standard_Boolean (TopOpeBRepBuild_BlockBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_BlockBuilder::*)() const>(&TopOpeBRepBuild_BlockBuilder::MoreBlock),
             R"#(None)#" )
        .def("NextBlock",
             (void (TopOpeBRepBuild_BlockBuilder::*)() ) static_cast<void (TopOpeBRepBuild_BlockBuilder::*)() >(&TopOpeBRepBuild_BlockBuilder::NextBlock),
             R"#(None)#" )
        .def("BlockIterator",
             (TopOpeBRepBuild_BlockIterator (TopOpeBRepBuild_BlockBuilder::*)() const) static_cast<TopOpeBRepBuild_BlockIterator (TopOpeBRepBuild_BlockBuilder::*)() const>(&TopOpeBRepBuild_BlockBuilder::BlockIterator),
             R"#(None)#" )
        .def("Element",
             (const TopoDS_Shape & (TopOpeBRepBuild_BlockBuilder::*)( const TopOpeBRepBuild_BlockIterator &  ) const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_BlockBuilder::*)( const TopOpeBRepBuild_BlockIterator &  ) const>(&TopOpeBRepBuild_BlockBuilder::Element),
             R"#(Returns the current element of <BI>.)#"  , py::arg("BI"))
        .def("Element",
             (const TopoDS_Shape & (TopOpeBRepBuild_BlockBuilder::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_BlockBuilder::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_BlockBuilder::Element),
             R"#(None)#"  , py::arg("I"))
        .def("Element",
             (Standard_Integer (TopOpeBRepBuild_BlockBuilder::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_BlockBuilder::*)( const TopoDS_Shape &  ) const>(&TopOpeBRepBuild_BlockBuilder::Element),
             R"#(None)#"  , py::arg("S"))
        .def("ElementIsValid",
             (Standard_Boolean (TopOpeBRepBuild_BlockBuilder::*)( const TopOpeBRepBuild_BlockIterator &  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_BlockBuilder::*)( const TopOpeBRepBuild_BlockIterator &  ) const>(&TopOpeBRepBuild_BlockBuilder::ElementIsValid),
             R"#(None)#"  , py::arg("BI"))
        .def("ElementIsValid",
             (Standard_Boolean (TopOpeBRepBuild_BlockBuilder::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_BlockBuilder::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_BlockBuilder::ElementIsValid),
             R"#(None)#"  , py::arg("I"))
        .def("AddElement",
             (Standard_Integer (TopOpeBRepBuild_BlockBuilder::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Integer (TopOpeBRepBuild_BlockBuilder::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_BlockBuilder::AddElement),
             R"#(None)#"  , py::arg("S"))
        .def("SetValid",
             (void (TopOpeBRepBuild_BlockBuilder::*)( const TopOpeBRepBuild_BlockIterator & ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_BlockBuilder::*)( const TopOpeBRepBuild_BlockIterator & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_BlockBuilder::SetValid),
             R"#(None)#"  , py::arg("BI"),  py::arg("isvalid"))
        .def("SetValid",
             (void (TopOpeBRepBuild_BlockBuilder::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_BlockBuilder::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_BlockBuilder::SetValid),
             R"#(None)#"  , py::arg("I"),  py::arg("isvalid"))
        .def("CurrentBlockIsRegular",
             (Standard_Boolean (TopOpeBRepBuild_BlockBuilder::*)() ) static_cast<Standard_Boolean (TopOpeBRepBuild_BlockBuilder::*)() >(&TopOpeBRepBuild_BlockBuilder::CurrentBlockIsRegular),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_BlockIterator , shared_ptr<TopOpeBRepBuild_BlockIterator>  >>(m.attr("TopOpeBRepBuild_BlockIterator"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("Lower"),  py::arg("Upper") )
    // methods
        .def("Initialize",
             (void (TopOpeBRepBuild_BlockIterator::*)() ) static_cast<void (TopOpeBRepBuild_BlockIterator::*)() >(&TopOpeBRepBuild_BlockIterator::Initialize),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (TopOpeBRepBuild_BlockIterator::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_BlockIterator::*)() const>(&TopOpeBRepBuild_BlockIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRepBuild_BlockIterator::*)() ) static_cast<void (TopOpeBRepBuild_BlockIterator::*)() >(&TopOpeBRepBuild_BlockIterator::Next),
             R"#(None)#" )
        .def("Value",
             (Standard_Integer (TopOpeBRepBuild_BlockIterator::*)() const) static_cast<Standard_Integer (TopOpeBRepBuild_BlockIterator::*)() const>(&TopOpeBRepBuild_BlockIterator::Value),
             R"#(None)#" )
        .def("Extent",
             (Standard_Integer (TopOpeBRepBuild_BlockIterator::*)() const) static_cast<Standard_Integer (TopOpeBRepBuild_BlockIterator::*)() const>(&TopOpeBRepBuild_BlockIterator::Extent),
             R"#(None)#" )
        .def("Initialize",
             (void (TopOpeBRepBuild_BlockIterator::*)() ) static_cast<void (TopOpeBRepBuild_BlockIterator::*)() >(&TopOpeBRepBuild_BlockIterator::Initialize),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (TopOpeBRepBuild_BlockIterator::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_BlockIterator::*)() const>(&TopOpeBRepBuild_BlockIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRepBuild_BlockIterator::*)() ) static_cast<void (TopOpeBRepBuild_BlockIterator::*)() >(&TopOpeBRepBuild_BlockIterator::Next),
             R"#(None)#" )
        .def("Value",
             (Standard_Integer (TopOpeBRepBuild_BlockIterator::*)() const) static_cast<Standard_Integer (TopOpeBRepBuild_BlockIterator::*)() const>(&TopOpeBRepBuild_BlockIterator::Value),
             R"#(None)#" )
        .def("Extent",
             (Standard_Integer (TopOpeBRepBuild_BlockIterator::*)() const) static_cast<Standard_Integer (TopOpeBRepBuild_BlockIterator::*)() const>(&TopOpeBRepBuild_BlockIterator::Extent),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_Builder , shared_ptr<TopOpeBRepBuild_Builder>  >>(m.attr("TopOpeBRepBuild_Builder"))
        .def(py::init< const TopOpeBRepDS_BuildTool & >()  , py::arg("BT") )
    // methods
        .def("ChangeBuildTool",
             (TopOpeBRepDS_BuildTool & (TopOpeBRepBuild_Builder::*)() ) static_cast<TopOpeBRepDS_BuildTool & (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::ChangeBuildTool),
             R"#(None)#" )
        .def("BuildTool",
             (const TopOpeBRepDS_BuildTool & (TopOpeBRepBuild_Builder::*)() const) static_cast<const TopOpeBRepDS_BuildTool & (TopOpeBRepBuild_Builder::*)() const>(&TopOpeBRepBuild_Builder::BuildTool),
             R"#(None)#" )
        .def("Perform",
             (void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) >(&TopOpeBRepBuild_Builder::Perform),
             R"#(Stores the data structure <HDS>, Create shapes from the new geometries.)#"  , py::arg("HDS"))
        .def("Perform",
             (void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::Perform),
             R"#(Stores the data structure <HDS>, Create shapes from the new geometries, Evaluates if an operation performed on shapes S1,S2 is a particular case.)#"  , py::arg("HDS"),  py::arg("S1"),  py::arg("S2"))
        .def("DataStructure",
             (opencascade::handle<TopOpeBRepDS_HDataStructure> (TopOpeBRepBuild_Builder::*)() const) static_cast<opencascade::handle<TopOpeBRepDS_HDataStructure> (TopOpeBRepBuild_Builder::*)() const>(&TopOpeBRepBuild_Builder::DataStructure),
             R"#(returns the DS handled by this builder)#" )
        .def("Clear",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::Clear),
             R"#(Removes all splits and merges already performed. Does NOT clear the handled DS.)#" )
        .def("MergeEdges",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_Builder::MergeEdges),
             R"#(Merges the two edges <S1> and <S2> keeping the parts in each edge of states <TB1> and <TB2>. Booleans onA, onB, onAB indicate wheter parts of edges found as state ON respectively on first, second, and both shapes must be (or not) built.)#"  , py::arg("L1"),  py::arg("TB1"),  py::arg("L2"),  py::arg("TB2"),  py::arg("onA")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("onB")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("onAB")=static_cast<const Standard_Boolean>(Standard_False))
        .def("MergeFaces",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_Builder::MergeFaces),
             R"#(Merges the two faces <S1> and <S2> keeping the parts in each face of states <TB1> and <TB2>.)#"  , py::arg("S1"),  py::arg("TB1"),  py::arg("S2"),  py::arg("TB2"),  py::arg("onA")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("onB")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("onAB")=static_cast<const Standard_Boolean>(Standard_False))
        .def("MergeSolids",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TopoDS_Shape & ,  const TopAbs_State  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TopoDS_Shape & ,  const TopAbs_State  ) >(&TopOpeBRepBuild_Builder::MergeSolids),
             R"#(Merges the two solids <S1> and <S2> keeping the parts in each solid of states <TB1> and <TB2>.)#"  , py::arg("S1"),  py::arg("TB1"),  py::arg("S2"),  py::arg("TB2"))
        .def("MergeShapes",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TopoDS_Shape & ,  const TopAbs_State  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TopoDS_Shape & ,  const TopAbs_State  ) >(&TopOpeBRepBuild_Builder::MergeShapes),
             R"#(Merges the two shapes <S1> and <S2> keeping the parts of states <TB1>,<TB2> in <S1>,<S2>.)#"  , py::arg("S1"),  py::arg("TB1"),  py::arg("S2"),  py::arg("TB2"))
        .def("End",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::End),
             R"#(None)#" )
        .def("Classify",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)() const>(&TopOpeBRepBuild_Builder::Classify),
             R"#(None)#" )
        .def("ChangeClassify",
             (void (TopOpeBRepBuild_Builder::*)( const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const Standard_Boolean  ) >(&TopOpeBRepBuild_Builder::ChangeClassify),
             R"#(None)#"  , py::arg("B"))
        .def("MergeSolid",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) >(&TopOpeBRepBuild_Builder::MergeSolid),
             R"#(Merges the solid <S> keeping the parts of state <TB>.)#"  , py::arg("S"),  py::arg("TB"))
        .def("NewVertex",
             (const TopoDS_Shape & (TopOpeBRepBuild_Builder::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_Builder::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_Builder::NewVertex),
             R"#(Returns the vertex created on point <I>.)#"  , py::arg("I"))
        .def("NewEdges",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)( const Standard_Integer  ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_Builder::NewEdges),
             R"#(Returns the edges created on curve <I>.)#"  , py::arg("I"))
        .def("NewFaces",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)( const Standard_Integer  ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_Builder::NewFaces),
             R"#(Returns the faces created on surface <I>.)#"  , py::arg("I"))
        .def("IsSplit",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_Builder::IsSplit),
             R"#(Returns True if the shape <S> has been split.)#"  , py::arg("S"),  py::arg("TB"))
        .def("Splits",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_Builder::Splits),
             R"#(Returns the split parts <TB> of shape <S>.)#"  , py::arg("S"),  py::arg("TB"))
        .def("IsMerged",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_Builder::IsMerged),
             R"#(Returns True if the shape <S> has been merged.)#"  , py::arg("S"),  py::arg("TB"))
        .def("Merged",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_Builder::Merged),
             R"#(Returns the merged parts <TB> of shape <S>.)#"  , py::arg("S"),  py::arg("TB"))
        .def("InitSection",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::InitSection),
             R"#(None)#" )
        .def("SplitSectionEdges",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::SplitSectionEdges),
             R"#(create parts ON solid of section edges)#" )
        .def("SplitSectionEdge",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::SplitSectionEdge),
             R"#(create parts ON solid of section edges)#"  , py::arg("E"))
        .def("SectionCurves",
             (void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::SectionCurves),
             R"#(return the section edges built on new curves.)#"  , py::arg("L"))
        .def("SectionEdges",
             (void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::SectionEdges),
             R"#(return the parts of edges found ON the boundary of the two arguments S1,S2 of Perform())#"  , py::arg("L"))
        .def("FillSecEdgeAncestorMap",
             (void (TopOpeBRepBuild_Builder::*)( const Standard_Integer ,   const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const Standard_Integer ,   const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) const>(&TopOpeBRepBuild_Builder::FillSecEdgeAncestorMap),
             R"#(Fills anAncMap with pairs (edge,ancestor edge) for each split from the map aMapON for the shape object identified by ShapeRank)#"  , py::arg("aShapeRank"),  py::arg("aMapON"),  py::arg("anAncMap"))
        .def("Section",
             (void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::Section),
             R"#(return all section edges.)#"  , py::arg("L"))
        .def("Section",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)() ) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::Section),
             R"#(None)#" )
        .def("BuildVertices",
             (void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) >(&TopOpeBRepBuild_Builder::BuildVertices),
             R"#(update the DS by creating new geometries. create vertices on DS points.)#"  , py::arg("DS"))
        .def("BuildEdges",
             (void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) >(&TopOpeBRepBuild_Builder::BuildEdges),
             R"#(update the DS by creating new geometries. create shapes from the new geometries.)#"  , py::arg("DS"))
        .def("MSplit",
             (const TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State & (TopOpeBRepBuild_Builder::*)( const TopAbs_State  ) const) static_cast<const TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State & (TopOpeBRepBuild_Builder::*)( const TopAbs_State  ) const>(&TopOpeBRepBuild_Builder::MSplit),
             R"#(None)#"  , py::arg("s"))
        .def("ChangeMSplit",
             (TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State & (TopOpeBRepBuild_Builder::*)( const TopAbs_State  ) ) static_cast<TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State & (TopOpeBRepBuild_Builder::*)( const TopAbs_State  ) >(&TopOpeBRepBuild_Builder::ChangeMSplit),
             R"#(None)#"  , py::arg("s"))
        .def("MakeEdges",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_EdgeBuilder & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_EdgeBuilder & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::MakeEdges),
             R"#(None)#"  , py::arg("E"),  py::arg("B"),  py::arg("L"))
        .def("MakeFaces",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_FaceBuilder & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_FaceBuilder & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::MakeFaces),
             R"#(None)#"  , py::arg("F"),  py::arg("B"),  py::arg("L"))
        .def("MakeSolids",
             (void (TopOpeBRepBuild_Builder::*)( TopOpeBRepBuild_SolidBuilder & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( TopOpeBRepBuild_SolidBuilder & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::MakeSolids),
             R"#(None)#"  , py::arg("B"),  py::arg("L"))
        .def("MakeShells",
             (void (TopOpeBRepBuild_Builder::*)( TopOpeBRepBuild_SolidBuilder & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( TopOpeBRepBuild_SolidBuilder & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::MakeShells),
             R"#(None)#"  , py::arg("B"),  py::arg("L"))
        .def("ChangeSplit",
             (TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) ) static_cast<TopTools_ListOfShape & (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) >(&TopOpeBRepBuild_Builder::ChangeSplit),
             R"#(Returns a ref.on the list of shapes connected to <S> as <TB> split parts of <S>. Mark <S> as split in <TB> parts.)#"  , py::arg("S"),  py::arg("TB"))
        .def("Opec12",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)() const>(&TopOpeBRepBuild_Builder::Opec12),
             R"#(None)#" )
        .def("Opec21",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)() const>(&TopOpeBRepBuild_Builder::Opec21),
             R"#(None)#" )
        .def("Opecom",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)() const>(&TopOpeBRepBuild_Builder::Opecom),
             R"#(None)#" )
        .def("Opefus",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)() const>(&TopOpeBRepBuild_Builder::Opefus),
             R"#(None)#" )
        .def("ShapePosition",
             (TopAbs_State (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::ShapePosition),
             R"#(None)#"  , py::arg("S"),  py::arg("LS"))
        .def("KeepShape",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State  ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State  ) >(&TopOpeBRepBuild_Builder::KeepShape),
             R"#(None)#"  , py::arg("S"),  py::arg("LS"),  py::arg("T"))
        .def("FindSameDomain",
             (void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::FindSameDomain),
             R"#(None)#"  , py::arg("L1"),  py::arg("L2"))
        .def("FindSameDomainSameOrientation",
             (void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::FindSameDomainSameOrientation),
             R"#(None)#"  , py::arg("LSO"),  py::arg("LDO"))
        .def("MapShapes",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::MapShapes),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("ClearMaps",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::ClearMaps),
             R"#(None)#" )
        .def("FindSameRank",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const Standard_Integer ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const Standard_Integer ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::FindSameRank),
             R"#(None)#"  , py::arg("L1"),  py::arg("R"),  py::arg("L2"))
        .def("ShapeRank",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const>(&TopOpeBRepBuild_Builder::ShapeRank),
             R"#(None)#"  , py::arg("S"))
        .def("IsShapeOf",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Integer  ) const>(&TopOpeBRepBuild_Builder::IsShapeOf),
             R"#(None)#"  , py::arg("S"),  py::arg("I12"))
        .def("FindIsKPart",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::FindIsKPart),
             R"#(None)#" )
        .def("IsKPart",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)() const) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)() const>(&TopOpeBRepBuild_Builder::IsKPart),
             R"#(None)#" )
        .def("MergeKPart",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::MergeKPart),
             R"#(None)#" )
        .def("MergeKPart",
             (void (TopOpeBRepBuild_Builder::*)( const TopAbs_State ,  const TopAbs_State  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopAbs_State ,  const TopAbs_State  ) >(&TopOpeBRepBuild_Builder::MergeKPart),
             R"#(None)#"  , py::arg("TB1"),  py::arg("TB2"))
        .def("MergeKPartiskole",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::MergeKPartiskole),
             R"#(None)#" )
        .def("MergeKPartiskoletge",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::MergeKPartiskoletge),
             R"#(None)#" )
        .def("MergeKPartisdisj",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::MergeKPartisdisj),
             R"#(None)#" )
        .def("MergeKPartisfafa",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::MergeKPartisfafa),
             R"#(None)#" )
        .def("MergeKPartissoso",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::MergeKPartissoso),
             R"#(None)#" )
        .def("KPiskole",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::KPiskole),
             R"#(None)#" )
        .def("KPiskoletge",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::KPiskoletge),
             R"#(None)#" )
        .def("KPisdisj",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::KPisdisj),
             R"#(None)#" )
        .def("KPisfafa",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::KPisfafa),
             R"#(None)#" )
        .def("KPissoso",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::KPissoso),
             R"#(None)#" )
        .def("KPClearMaps",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::KPClearMaps),
             R"#(None)#" )
        .def("KPlhg",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::KPlhg),
             R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("L"))
        .def("KPlhg",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) const>(&TopOpeBRepBuild_Builder::KPlhg),
             R"#(None)#"  , py::arg("S"),  py::arg("T"))
        .def("KPlhsd",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::KPlhsd),
             R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("L"))
        .def("KPlhsd",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) const>(&TopOpeBRepBuild_Builder::KPlhsd),
             R"#(None)#"  , py::arg("S"),  py::arg("T"))
        .def("KPclasSS",
             (TopAbs_State (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopoDS_Shape &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::KPclasSS),
             R"#(None)#"  , py::arg("S1"),  py::arg("exceptLS1"),  py::arg("S2"))
        .def("KPclasSS",
             (TopAbs_State (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::KPclasSS),
             R"#(None)#"  , py::arg("S1"),  py::arg("exceptS1"),  py::arg("S2"))
        .def("KPclasSS",
             (TopAbs_State (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::KPclasSS),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("KPiskolesh",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::KPiskolesh),
             R"#(None)#"  , py::arg("S"),  py::arg("LS"),  py::arg("LF"))
        .def("KPiskoletgesh",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::KPiskoletgesh),
             R"#(None)#"  , py::arg("S"),  py::arg("LS"),  py::arg("LF"))
        .def("KPSameDomain",
             (void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::KPSameDomain),
             R"#(None)#"  , py::arg("L1"),  py::arg("L2"))
        .def("KPisdisjsh",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const>(&TopOpeBRepBuild_Builder::KPisdisjsh),
             R"#(None)#"  , py::arg("S"))
        .def("KPisfafash",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const>(&TopOpeBRepBuild_Builder::KPisfafash),
             R"#(None)#"  , py::arg("S"))
        .def("KPissososh",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const>(&TopOpeBRepBuild_Builder::KPissososh),
             R"#(None)#"  , py::arg("S"))
        .def("KPclassF",
             (TopAbs_State (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::KPclassF),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"))
        .def("KPclassFF",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  TopAbs_State & ,  TopAbs_State &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  TopAbs_State & ,  TopAbs_State &  ) >(&TopOpeBRepBuild_Builder::KPclassFF),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("T1"),  py::arg("T2"))
        .def("KPiskoleFF",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  TopAbs_State & ,  TopAbs_State &  ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  TopAbs_State & ,  TopAbs_State &  ) >(&TopOpeBRepBuild_Builder::KPiskoleFF),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("T1"),  py::arg("T2"))
        .def("KPmakeface",
             (TopoDS_Shape (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,  const TopAbs_State ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<TopoDS_Shape (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,  const TopAbs_State ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_Builder::KPmakeface),
             R"#(None)#"  , py::arg("F1"),  py::arg("LF2"),  py::arg("T1"),  py::arg("T2"),  py::arg("R1"),  py::arg("R2"))
        .def("SplitEvisoONperiodicF",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::SplitEvisoONperiodicF),
             R"#(None)#" )
        .def("GMergeSolids",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo &  ) >(&TopOpeBRepBuild_Builder::GMergeSolids),
             R"#(None)#"  , py::arg("LSO1"),  py::arg("LSO2"),  py::arg("G"))
        .def("GFillSolidsSFS",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder::GFillSolidsSFS),
             R"#(None)#"  , py::arg("LSO1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GFillSolidSFS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder::GFillSolidSFS),
             R"#(None)#"  , py::arg("SO1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GFillSurfaceTopologySFS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder::GFillSurfaceTopologySFS),
             R"#(None)#"  , py::arg("SO1"),  py::arg("G"),  py::arg("SFS"))
        .def("GFillSurfaceTopologySFS",
             (void (TopOpeBRepBuild_Builder::*)( const TopOpeBRepDS_SurfaceIterator & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopOpeBRepDS_SurfaceIterator & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) const>(&TopOpeBRepBuild_Builder::GFillSurfaceTopologySFS),
             R"#(None)#"  , py::arg("IT"),  py::arg("G"),  py::arg("SFS"))
        .def("GFillShellSFS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder::GFillShellSFS),
             R"#(None)#"  , py::arg("SH1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GFillFaceSFS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder::GFillFaceSFS),
             R"#(None)#"  , py::arg("F1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GSplitFaceSFS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder::GSplitFaceSFS),
             R"#(None)#"  , py::arg("F1"),  py::arg("LSclass"),  py::arg("G"),  py::arg("SFS"))
        .def("GMergeFaceSFS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder::GMergeFaceSFS),
             R"#(None)#"  , py::arg("F"),  py::arg("G"),  py::arg("SFS"))
        .def("GSplitFace",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,   const NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::GSplitFace),
             R"#(None)#"  , py::arg("F"),  py::arg("G"),  py::arg("LSclass"))
        .def("AddONPatchesSFS",
             (void (TopOpeBRepBuild_Builder::*)( const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder::AddONPatchesSFS),
             R"#(None)#"  , py::arg("G"),  py::arg("SFS"))
        .def("FillOnPatches",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> &  ) >(&TopOpeBRepBuild_Builder::FillOnPatches),
             R"#(None)#"  , py::arg("anEdgesON"),  py::arg("aBaseFace"),  py::arg("avoidMap"))
        .def("FindFacesTouchingEdge",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const Standard_Integer ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const Standard_Integer ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::FindFacesTouchingEdge),
             R"#(None)#"  , py::arg("aFace"),  py::arg("anEdge"),  py::arg("aShRank"),  py::arg("aFaces"))
        .def("GMergeFaces",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo &  ) >(&TopOpeBRepBuild_Builder::GMergeFaces),
             R"#(None)#"  , py::arg("LF1"),  py::arg("LF2"),  py::arg("G"))
        .def("GFillFacesWES",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder::GFillFacesWES),
             R"#(None)#"  , py::arg("LF1"),  py::arg("LF2"),  py::arg("G"),  py::arg("WES"))
        .def("GFillFacesWESK",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet & ,  const Standard_Integer  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet & ,  const Standard_Integer  ) >(&TopOpeBRepBuild_Builder::GFillFacesWESK),
             R"#(None)#"  , py::arg("LF1"),  py::arg("LF2"),  py::arg("G"),  py::arg("WES"),  py::arg("K"))
        .def("GFillFacesWESMakeFaces",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo &  ) >(&TopOpeBRepBuild_Builder::GFillFacesWESMakeFaces),
             R"#(None)#"  , py::arg("LF1"),  py::arg("LF2"),  py::arg("LSO"),  py::arg("G"))
        .def("GFillFaceWES",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder::GFillFaceWES),
             R"#(None)#"  , py::arg("F"),  py::arg("LF2"),  py::arg("G"),  py::arg("WES"))
        .def("GFillCurveTopologyWES",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder::GFillCurveTopologyWES),
             R"#(None)#"  , py::arg("F"),  py::arg("G"),  py::arg("WES"))
        .def("GFillCurveTopologyWES",
             (void (TopOpeBRepBuild_Builder::*)( const TopOpeBRepDS_CurveIterator & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopOpeBRepDS_CurveIterator & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) const>(&TopOpeBRepBuild_Builder::GFillCurveTopologyWES),
             R"#(None)#"  , py::arg("IT"),  py::arg("G"),  py::arg("WES"))
        .def("GFillONPartsWES",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,   const NCollection_List<TopoDS_Shape> & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,   const NCollection_List<TopoDS_Shape> & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder::GFillONPartsWES),
             R"#(None)#"  , py::arg("F"),  py::arg("G"),  py::arg("LSclass"),  py::arg("WES"))
        .def("GFillWireWES",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder::GFillWireWES),
             R"#(None)#"  , py::arg("W"),  py::arg("LF2"),  py::arg("G"),  py::arg("WES"))
        .def("GFillEdgeWES",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder::GFillEdgeWES),
             R"#(None)#"  , py::arg("E"),  py::arg("LF2"),  py::arg("G"),  py::arg("WES"))
        .def("GSplitEdgeWES",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder::GSplitEdgeWES),
             R"#(None)#"  , py::arg("E"),  py::arg("LF2"),  py::arg("G"),  py::arg("WES"))
        .def("GMergeEdgeWES",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder::GMergeEdgeWES),
             R"#(None)#"  , py::arg("E"),  py::arg("G"),  py::arg("WES"))
        .def("GSplitEdge",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,   const NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::GSplitEdge),
             R"#(None)#"  , py::arg("E"),  py::arg("G"),  py::arg("LSclass"))
        .def("GMergeEdges",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo &  ) >(&TopOpeBRepBuild_Builder::GMergeEdges),
             R"#(None)#"  , py::arg("LE1"),  py::arg("LE2"),  py::arg("G"))
        .def("GFillEdgesPVS",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_PaveSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_PaveSet &  ) >(&TopOpeBRepBuild_Builder::GFillEdgesPVS),
             R"#(None)#"  , py::arg("LE1"),  py::arg("LE2"),  py::arg("G"),  py::arg("PVS"))
        .def("GFillEdgePVS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_PaveSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_PaveSet &  ) >(&TopOpeBRepBuild_Builder::GFillEdgePVS),
             R"#(None)#"  , py::arg("E"),  py::arg("LE2"),  py::arg("G"),  py::arg("PVS"))
        .def("GFillPointTopologyPVS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_PaveSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_PaveSet &  ) >(&TopOpeBRepBuild_Builder::GFillPointTopologyPVS),
             R"#(None)#"  , py::arg("E"),  py::arg("G"),  py::arg("PVS"))
        .def("GFillPointTopologyPVS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepDS_PointIterator & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_PaveSet &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopOpeBRepDS_PointIterator & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_PaveSet &  ) const>(&TopOpeBRepBuild_Builder::GFillPointTopologyPVS),
             R"#(None)#"  , py::arg("E"),  py::arg("IT"),  py::arg("G"),  py::arg("PVS"))
        .def("GParamOnReference",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Vertex & ,  const TopoDS_Edge & ,  Standard_Real &  ) const>(&TopOpeBRepBuild_Builder::GParamOnReference),
             R"#(None)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"))
        .def("GKeepShape",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State  ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State  ) >(&TopOpeBRepBuild_Builder::GKeepShape),
             R"#(None)#"  , py::arg("S"),  py::arg("Lref"),  py::arg("T"))
        .def("GKeepShape1",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,  TopAbs_State &  ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,  TopAbs_State &  ) >(&TopOpeBRepBuild_Builder::GKeepShape1),
             R"#(return True if S is classified <T> / Lref shapes)#"  , py::arg("S"),  py::arg("Lref"),  py::arg("T"),  py::arg("pos"))
        .def("GKeepShapes",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,   const NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopAbs_State ,   const NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::GKeepShapes),
             R"#(add to Lou the shapes of Lin classified <T> / Lref shapes. Lou is not cleared. (S is a dummy trace argument))#"  , py::arg("S"),  py::arg("Lref"),  py::arg("T"),  py::arg("Lin"),  py::arg("Lou"))
        .def("GSFSMakeSolids",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_ShellFaceSet & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_ShellFaceSet & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::GSFSMakeSolids),
             R"#(None)#"  , py::arg("SOF"),  py::arg("SFS"),  py::arg("LOSO"))
        .def("GSOBUMakeSolids",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_SolidBuilder & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_SolidBuilder & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::GSOBUMakeSolids),
             R"#(None)#"  , py::arg("SOF"),  py::arg("SOBU"),  py::arg("LOSO"))
        .def("GWESMakeFaces",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_WireEdgeSet & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_WireEdgeSet & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::GWESMakeFaces),
             R"#(None)#"  , py::arg("FF"),  py::arg("WES"),  py::arg("LOF"))
        .def("GFABUMakeFaces",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_FaceBuilder & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_ShapeMapHasher> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_FaceBuilder & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Builder::GFABUMakeFaces),
             R"#(None)#"  , py::arg("FF"),  py::arg("FABU"),  py::arg("LOF"),  py::arg("MWisOld"))
        .def("RegularizeFaces",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::RegularizeFaces),
             R"#(None)#"  , py::arg("FF"),  py::arg("lnewFace"),  py::arg("LOF"))
        .def("RegularizeFace",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::RegularizeFace),
             R"#(None)#"  , py::arg("FF"),  py::arg("newFace"),  py::arg("LOF"))
        .def("RegularizeSolids",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::RegularizeSolids),
             R"#(None)#"  , py::arg("SS"),  py::arg("lnewSolid"),  py::arg("LOS"))
        .def("RegularizeSolid",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::RegularizeSolid),
             R"#(None)#"  , py::arg("SS"),  py::arg("newSolid"),  py::arg("LOS"))
        .def("GPVSMakeEdges",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_PaveSet & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_PaveSet & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::GPVSMakeEdges),
             R"#(None)#"  , py::arg("EF"),  py::arg("PVS"),  py::arg("LOE"))
        .def("GEDBUMakeEdges",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_EdgeBuilder & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_EdgeBuilder & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::GEDBUMakeEdges),
             R"#(None)#"  , py::arg("EF"),  py::arg("EDBU"),  py::arg("LOE"))
        .def("GToSplit",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_Builder::GToSplit),
             R"#(None)#"  , py::arg("S"),  py::arg("TB"))
        .def("GToMerge",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const>(&TopOpeBRepBuild_Builder::GToMerge),
             R"#(None)#"  , py::arg("S"))
        .def("GFindSamDom",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::GFindSamDom),
             R"#(None)#"  , py::arg("S"),  py::arg("L1"),  py::arg("L2"))
        .def("GFindSamDom",
             (void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::GFindSamDom),
             R"#(None)#"  , py::arg("L1"),  py::arg("L2"))
        .def("GFindSamDomSODO",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::GFindSamDomSODO),
             R"#(None)#"  , py::arg("S"),  py::arg("LSO"),  py::arg("LDO"))
        .def("GFindSamDomSODO",
             (void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::GFindSamDomSODO),
             R"#(None)#"  , py::arg("LSO"),  py::arg("LDO"))
        .def("GMapShapes",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::GMapShapes),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("GClearMaps",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::GClearMaps),
             R"#(None)#" )
        .def("GFindSameRank",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const Standard_Integer ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const Standard_Integer ,  NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::GFindSameRank),
             R"#(None)#"  , py::arg("L1"),  py::arg("R"),  py::arg("L2"))
        .def("GShapeRank",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const>(&TopOpeBRepBuild_Builder::GShapeRank),
             R"#(None)#"  , py::arg("S"))
        .def("GIsShapeOf",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Integer  ) const>(&TopOpeBRepBuild_Builder::GIsShapeOf),
             R"#(None)#"  , py::arg("S"),  py::arg("I12"))
        .def("GdumpLS",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> &  ) const>(&TopOpeBRepBuild_Builder::GdumpLS),
             R"#(None)#"  , py::arg("L"))
        .def("GdumpSHA",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_Builder::GdumpSHA),
             R"#(None)#"  , py::arg("S"),  py::arg("str")=static_cast<const Standard_Address>(NULL))
        .def("GdumpSHAORI",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_Builder::GdumpSHAORI),
             R"#(None)#"  , py::arg("S"),  py::arg("str")=static_cast<const Standard_Address>(NULL))
        .def("GdumpSHAORIGEO",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_Builder::GdumpSHAORIGEO),
             R"#(None)#"  , py::arg("S"),  py::arg("str")=static_cast<const Standard_Address>(NULL))
        .def("GdumpSHASTA",
             (void (TopOpeBRepBuild_Builder::*)( const Standard_Integer ,  const TopAbs_State ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const Standard_Integer ,  const TopAbs_State ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_Builder::GdumpSHASTA),
             R"#(None)#"  , py::arg("iS"),  py::arg("T"),  py::arg("a")=static_cast<const TCollection_AsciiString &>(""),  py::arg("b")=static_cast<const TCollection_AsciiString &>(""))
        .def("GdumpSHASTA",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_Builder::GdumpSHASTA),
             R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("a")=static_cast<const TCollection_AsciiString &>(""),  py::arg("b")=static_cast<const TCollection_AsciiString &>(""))
        .def("GdumpSHASTA",
             (void (TopOpeBRepBuild_Builder::*)( const Standard_Integer ,  const TopAbs_State ,  const TopOpeBRepBuild_ShapeSet & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const Standard_Integer ,  const TopAbs_State ,  const TopOpeBRepBuild_ShapeSet & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_Builder::GdumpSHASTA),
             R"#(None)#"  , py::arg("iS"),  py::arg("T"),  py::arg("SS"),  py::arg("a")=static_cast<const TCollection_AsciiString &>(""),  py::arg("b")=static_cast<const TCollection_AsciiString &>(""),  py::arg("c")=static_cast<const TCollection_AsciiString &>("\n"))
        .def("GdumpEDG",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_Builder::GdumpEDG),
             R"#(None)#"  , py::arg("S"),  py::arg("str")=static_cast<const Standard_Address>(NULL))
        .def("GdumpEDGVER",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_Builder::GdumpEDGVER),
             R"#(None)#"  , py::arg("E"),  py::arg("V"),  py::arg("str")=static_cast<const Standard_Address>(NULL))
        .def("GdumpSAMDOM",
             (void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)(  const NCollection_List<TopoDS_Shape> & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_Builder::GdumpSAMDOM),
             R"#(None)#"  , py::arg("L"),  py::arg("str")=static_cast<const Standard_Address>(NULL))
        .def("GdumpEXP",
             (void (TopOpeBRepBuild_Builder::*)( const TopOpeBRepTool_ShapeExplorer &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopOpeBRepTool_ShapeExplorer &  ) const>(&TopOpeBRepBuild_Builder::GdumpEXP),
             R"#(None)#"  , py::arg("E"))
        .def("GdumpSOBU",
             (void (TopOpeBRepBuild_Builder::*)( TopOpeBRepBuild_SolidBuilder &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( TopOpeBRepBuild_SolidBuilder &  ) const>(&TopOpeBRepBuild_Builder::GdumpSOBU),
             R"#(None)#"  , py::arg("SB"))
        .def("GdumpFABU",
             (void (TopOpeBRepBuild_Builder::*)( TopOpeBRepBuild_FaceBuilder &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( TopOpeBRepBuild_FaceBuilder &  ) const>(&TopOpeBRepBuild_Builder::GdumpFABU),
             R"#(None)#"  , py::arg("FB"))
        .def("GdumpEDBU",
             (void (TopOpeBRepBuild_Builder::*)( TopOpeBRepBuild_EdgeBuilder &  ) const) static_cast<void (TopOpeBRepBuild_Builder::*)( TopOpeBRepBuild_EdgeBuilder &  ) const>(&TopOpeBRepBuild_Builder::GdumpEDBU),
             R"#(None)#"  , py::arg("EB"))
        .def("GtraceSPS",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_Builder::GtraceSPS),
             R"#(None)#"  , py::arg("iS"))
        .def("GtraceSPS",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&TopOpeBRepBuild_Builder::GtraceSPS),
             R"#(None)#"  , py::arg("iS"),  py::arg("jS"))
        .def("GtraceSPS",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape &  ) const>(&TopOpeBRepBuild_Builder::GtraceSPS),
             R"#(None)#"  , py::arg("S"))
        .def("GtraceSPS",
             (Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  Standard_Integer &  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  Standard_Integer &  ) const>(&TopOpeBRepBuild_Builder::GtraceSPS),
             R"#(None)#"  , py::arg("S"),  py::arg("IS"))
        .def("GdumpSHASETreset",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::GdumpSHASETreset),
             R"#(None)#" )
        .def("GdumpSHASETindex",
             (Standard_Integer (TopOpeBRepBuild_Builder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::GdumpSHASETindex),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("KPiskoleanalyse",
             []( TopOpeBRepBuild_Builder &self , const TopAbs_State FT1,const TopAbs_State FT2,const TopAbs_State ST1,const TopAbs_State ST2 ){ Standard_Integer  I; Standard_Integer  I1; Standard_Integer  I2; self.KPiskoleanalyse(FT1,FT2,ST1,ST2,I,I1,I2); return std::make_tuple(I,I1,I2); },
             R"#(None)#"  , py::arg("FT1"),  py::arg("FT2"),  py::arg("ST1"),  py::arg("ST2"))
        .def("KPiskoletgeanalyse",
             []( TopOpeBRepBuild_Builder &self , const TopOpeBRepDS_Config Conf,const TopAbs_State ST1,const TopAbs_State ST2 ){ Standard_Integer  I; self.KPiskoletgeanalyse(Conf,ST1,ST2,I); return std::make_tuple(I); },
             R"#(None)#"  , py::arg("Conf"),  py::arg("ST1"),  py::arg("ST2"))
        .def("KPisdisjanalyse",
             []( TopOpeBRepBuild_Builder &self , const TopAbs_State ST1,const TopAbs_State ST2 ){ Standard_Integer  I; Standard_Integer  IC1; Standard_Integer  IC2; self.KPisdisjanalyse(ST1,ST2,I,IC1,IC2); return std::make_tuple(I,IC1,IC2); },
             R"#(None)#"  , py::arg("ST1"),  py::arg("ST2"))
    // static methods
        .def_static("TopType_s",
                    (TopAbs_ShapeEnum (*)( const TopoDS_Shape &  ) ) static_cast<TopAbs_ShapeEnum (*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::TopType),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Reverse_s",
                    (Standard_Boolean (*)( const TopAbs_State ,  const TopAbs_State  ) ) static_cast<Standard_Boolean (*)( const TopAbs_State ,  const TopAbs_State  ) >(&TopOpeBRepBuild_Builder::Reverse),
                    R"#(None)#"  , py::arg("T1"),  py::arg("T2"))
        .def_static("Orient_s",
                    (TopAbs_Orientation (*)( const TopAbs_Orientation ,  const Standard_Boolean  ) ) static_cast<TopAbs_Orientation (*)( const TopAbs_Orientation ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_Builder::Orient),
                    R"#(None)#"  , py::arg("O"),  py::arg("R"))
        .def_static("Contains_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::Contains),
                    R"#(None)#"  , py::arg("S"),  py::arg("L"))
        .def_static("KPls_s",
                    (Standard_Integer (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::KPls),
                    R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("L"))
        .def_static("KPls_s",
                    (Standard_Integer (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) ) static_cast<Standard_Integer (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_Builder::KPls),
                    R"#(None)#"  , py::arg("S"),  py::arg("T"))
        .def_static("KPContains_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::KPContains),
                    R"#(None)#"  , py::arg("S"),  py::arg("L"))
        .def_static("KPreturn_s",
                    (Standard_Integer (*)( const Standard_Integer  ) ) static_cast<Standard_Integer (*)( const Standard_Integer  ) >(&TopOpeBRepBuild_Builder::KPreturn),
                    R"#(None)#"  , py::arg("KP"))
        .def_static("GTakeCommonOfSame_s",
                    (Standard_Boolean (*)( const TopOpeBRepBuild_GTopo &  ) ) static_cast<Standard_Boolean (*)( const TopOpeBRepBuild_GTopo &  ) >(&TopOpeBRepBuild_Builder::GTakeCommonOfSame),
                    R"#(None)#"  , py::arg("G"))
        .def_static("GTakeCommonOfDiff_s",
                    (Standard_Boolean (*)( const TopOpeBRepBuild_GTopo &  ) ) static_cast<Standard_Boolean (*)( const TopOpeBRepBuild_GTopo &  ) >(&TopOpeBRepBuild_Builder::GTakeCommonOfDiff),
                    R"#(None)#"  , py::arg("G"))
        .def_static("GContains_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::GContains),
                    R"#(None)#"  , py::arg("S"),  py::arg("L"))
        .def_static("GCopyList_s",
                    (void (*)(  const NCollection_List<TopoDS_Shape> & ,  const Standard_Integer ,  const Standard_Integer ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & ,  const Standard_Integer ,  const Standard_Integer ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::GCopyList),
                    R"#(None)#"  , py::arg("Lin"),  py::arg("i1"),  py::arg("i2"),  py::arg("Lou"))
        .def_static("GCopyList_s",
                    (void (*)(  const NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder::GCopyList),
                    R"#(None)#"  , py::arg("Lin"),  py::arg("Lou"))
        .def_static("GdumpPNT_s",
                    (void (*)( const gp_Pnt &  ) ) static_cast<void (*)( const gp_Pnt &  ) >(&TopOpeBRepBuild_Builder::GdumpPNT),
                    R"#(None)#"  , py::arg("P"))
        .def_static("GdumpORIPARPNT_s",
                    (void (*)( const TopAbs_Orientation ,  const Standard_Real ,  const gp_Pnt &  ) ) static_cast<void (*)( const TopAbs_Orientation ,  const Standard_Real ,  const gp_Pnt &  ) >(&TopOpeBRepBuild_Builder::GdumpORIPARPNT),
                    R"#(None)#"  , py::arg("o"),  py::arg("p"),  py::arg("Pnt"))
        .def_static("PrintGeo_s",
                    (void (*)( const TopoDS_Shape &  ) ) static_cast<void (*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::PrintGeo),
                    R"#(None)#"  , py::arg("S"))
        .def_static("PrintSur_s",
                    (void (*)( const TopoDS_Face &  ) ) static_cast<void (*)( const TopoDS_Face &  ) >(&TopOpeBRepBuild_Builder::PrintSur),
                    R"#(None)#"  , py::arg("F"))
        .def_static("PrintCur_s",
                    (void (*)( const TopoDS_Edge &  ) ) static_cast<void (*)( const TopoDS_Edge &  ) >(&TopOpeBRepBuild_Builder::PrintCur),
                    R"#(None)#"  , py::arg("E"))
        .def_static("PrintPnt_s",
                    (void (*)( const TopoDS_Vertex &  ) ) static_cast<void (*)( const TopoDS_Vertex &  ) >(&TopOpeBRepBuild_Builder::PrintPnt),
                    R"#(None)#"  , py::arg("V"))
        .def_static("PrintOri_s",
                    (void (*)( const TopoDS_Shape &  ) ) static_cast<void (*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::PrintOri),
                    R"#(None)#"  , py::arg("S"))
        .def_static("StringState_s",
                    (TCollection_AsciiString (*)( const TopAbs_State  ) ) static_cast<TCollection_AsciiString (*)( const TopAbs_State  ) >(&TopOpeBRepBuild_Builder::StringState),
                    R"#(None)#"  , py::arg("S"))
        .def_static("GcheckNBOUNDS_s",
                    (Standard_Boolean (*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder::GcheckNBOUNDS),
                    R"#(None)#"  , py::arg("E"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_BuilderON , shared_ptr<TopOpeBRepBuild_BuilderON>  >>(m.attr("TopOpeBRepBuild_BuilderON"))
        .def(py::init<  >()  )
    // methods
        .def("GFillONCheckI",
             (Standard_Boolean (TopOpeBRepBuild_BuilderON::*)( const opencascade::handle<TopOpeBRepDS_Interference> &  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_BuilderON::*)( const opencascade::handle<TopOpeBRepDS_Interference> &  ) const>(&TopOpeBRepBuild_BuilderON::GFillONCheckI),
             R"#(None)#"  , py::arg("I"))
        .def("GFillONPartsWES1",
             (void (TopOpeBRepBuild_BuilderON::*)( const opencascade::handle<TopOpeBRepDS_Interference> &  ) ) static_cast<void (TopOpeBRepBuild_BuilderON::*)( const opencascade::handle<TopOpeBRepDS_Interference> &  ) >(&TopOpeBRepBuild_BuilderON::GFillONPartsWES1),
             R"#(None)#"  , py::arg("I"))
        .def("GFillONPartsWES2",
             (void (TopOpeBRepBuild_BuilderON::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ,  const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_BuilderON::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_BuilderON::GFillONPartsWES2),
             R"#(None)#"  , py::arg("I"),  py::arg("EspON"))
        .def("GFillONParts2dWES2",
             (void (TopOpeBRepBuild_BuilderON::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ,  const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_BuilderON::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_BuilderON::GFillONParts2dWES2),
             R"#(None)#"  , py::arg("I"),  py::arg("EspON"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_CorrectFace2d , shared_ptr<TopOpeBRepBuild_CorrectFace2d>  >>(m.attr("TopOpeBRepBuild_CorrectFace2d"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &, const NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> &,NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & >()  , py::arg("aFace"),  py::arg("anAvoidMap"),  py::arg("aMap") )
    // methods
        .def("Face",
             (const TopoDS_Face & (TopOpeBRepBuild_CorrectFace2d::*)() const) static_cast<const TopoDS_Face & (TopOpeBRepBuild_CorrectFace2d::*)() const>(&TopOpeBRepBuild_CorrectFace2d::Face),
             R"#(None)#" )
        .def("Perform",
             (void (TopOpeBRepBuild_CorrectFace2d::*)() ) static_cast<void (TopOpeBRepBuild_CorrectFace2d::*)() >(&TopOpeBRepBuild_CorrectFace2d::Perform),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (TopOpeBRepBuild_CorrectFace2d::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_CorrectFace2d::*)() const>(&TopOpeBRepBuild_CorrectFace2d::IsDone),
             R"#(None)#" )
        .def("ErrorStatus",
             (Standard_Integer (TopOpeBRepBuild_CorrectFace2d::*)() const) static_cast<Standard_Integer (TopOpeBRepBuild_CorrectFace2d::*)() const>(&TopOpeBRepBuild_CorrectFace2d::ErrorStatus),
             R"#(None)#" )
        .def("CorrectedFace",
             (const TopoDS_Face & (TopOpeBRepBuild_CorrectFace2d::*)() const) static_cast<const TopoDS_Face & (TopOpeBRepBuild_CorrectFace2d::*)() const>(&TopOpeBRepBuild_CorrectFace2d::CorrectedFace),
             R"#(None)#" )
        .def("SetMapOfTrans2dInfo",
             (void (TopOpeBRepBuild_CorrectFace2d::*)( NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (TopOpeBRepBuild_CorrectFace2d::*)( NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_CorrectFace2d::SetMapOfTrans2dInfo),
             R"#(None)#"  , py::arg("aMap"))
        .def("MapOfTrans2dInfo",
             (TopTools_IndexedDataMapOfShapeShape & (TopOpeBRepBuild_CorrectFace2d::*)() ) static_cast<TopTools_IndexedDataMapOfShapeShape & (TopOpeBRepBuild_CorrectFace2d::*)() >(&TopOpeBRepBuild_CorrectFace2d::MapOfTrans2dInfo),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetP2dFL_s",
                    (void (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  gp_Pnt2d & ,  gp_Pnt2d &  ) ) static_cast<void (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  gp_Pnt2d & ,  gp_Pnt2d &  ) >(&TopOpeBRepBuild_CorrectFace2d::GetP2dFL),
                    R"#(None)#"  , py::arg("aFace"),  py::arg("anEdge"),  py::arg("P2dF"),  py::arg("P2dL"))
        .def_static("CheckList_s",
                    (void (*)( const TopoDS_Face & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (*)( const TopoDS_Face & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_CorrectFace2d::CheckList),
                    R"#(None)#"  , py::arg("aFace"),  py::arg("aHeadList"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_FaceBuilder , shared_ptr<TopOpeBRepBuild_FaceBuilder>  >>(m.attr("TopOpeBRepBuild_FaceBuilder"))
        .def(py::init<  >()  )
        .def(py::init< TopOpeBRepBuild_WireEdgeSet &,const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("ES"),  py::arg("F"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("InitFaceBuilder",
             (void (TopOpeBRepBuild_FaceBuilder::*)( TopOpeBRepBuild_WireEdgeSet & ,  const TopoDS_Shape & ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_FaceBuilder::*)( TopOpeBRepBuild_WireEdgeSet & ,  const TopoDS_Shape & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_FaceBuilder::InitFaceBuilder),
             R"#(None)#"  , py::arg("ES"),  py::arg("F"),  py::arg("ForceClass"))
        .def("DetectUnclosedWire",
             (void (TopOpeBRepBuild_FaceBuilder::*)( NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (TopOpeBRepBuild_FaceBuilder::*)( NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_FaceBuilder::DetectUnclosedWire),
             R"#(Removes are non 3d-closed wires. Fills up maps <mapVVsameG> and <mapVon1Edge>, in order to correct 3d-closed but unclosed (topologic connexity) wires. modifies myBlockBuilder)#"  , py::arg("mapVVsameG"),  py::arg("mapVon1Edge"))
        .def("CorrectGclosedWire",
             (void (TopOpeBRepBuild_FaceBuilder::*)(  const NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ,   const NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (TopOpeBRepBuild_FaceBuilder::*)(  const NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ,   const NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_FaceBuilder::CorrectGclosedWire),
             R"#(Using the given maps, change the topology of the 3d-closed wires, in order to get closed wires.)#"  , py::arg("mapVVref"),  py::arg("mapVon1Edge"))
        .def("DetectPseudoInternalEdge",
             (void (TopOpeBRepBuild_FaceBuilder::*)( NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (TopOpeBRepBuild_FaceBuilder::*)( NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_FaceBuilder::DetectPseudoInternalEdge),
             R"#(Removes edges appearing twice (FORWARD,REVERSED) with a bounding vertex not connected to any other edge. mapE contains edges found. modifies myBlockBuilder.)#"  , py::arg("mapE"))
        .def("Face",
             (const TopoDS_Shape & (TopOpeBRepBuild_FaceBuilder::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_FaceBuilder::*)() const>(&TopOpeBRepBuild_FaceBuilder::Face),
             R"#(return myFace)#" )
        .def("InitFace",
             (Standard_Integer (TopOpeBRepBuild_FaceBuilder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_FaceBuilder::*)() >(&TopOpeBRepBuild_FaceBuilder::InitFace),
             R"#(None)#" )
        .def("MoreFace",
             (Standard_Boolean (TopOpeBRepBuild_FaceBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_FaceBuilder::*)() const>(&TopOpeBRepBuild_FaceBuilder::MoreFace),
             R"#(None)#" )
        .def("NextFace",
             (void (TopOpeBRepBuild_FaceBuilder::*)() ) static_cast<void (TopOpeBRepBuild_FaceBuilder::*)() >(&TopOpeBRepBuild_FaceBuilder::NextFace),
             R"#(None)#" )
        .def("InitWire",
             (Standard_Integer (TopOpeBRepBuild_FaceBuilder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_FaceBuilder::*)() >(&TopOpeBRepBuild_FaceBuilder::InitWire),
             R"#(None)#" )
        .def("MoreWire",
             (Standard_Boolean (TopOpeBRepBuild_FaceBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_FaceBuilder::*)() const>(&TopOpeBRepBuild_FaceBuilder::MoreWire),
             R"#(None)#" )
        .def("NextWire",
             (void (TopOpeBRepBuild_FaceBuilder::*)() ) static_cast<void (TopOpeBRepBuild_FaceBuilder::*)() >(&TopOpeBRepBuild_FaceBuilder::NextWire),
             R"#(None)#" )
        .def("IsOldWire",
             (Standard_Boolean (TopOpeBRepBuild_FaceBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_FaceBuilder::*)() const>(&TopOpeBRepBuild_FaceBuilder::IsOldWire),
             R"#(None)#" )
        .def("OldWire",
             (const TopoDS_Shape & (TopOpeBRepBuild_FaceBuilder::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_FaceBuilder::*)() const>(&TopOpeBRepBuild_FaceBuilder::OldWire),
             R"#(Returns current wire This wire may be : * an old wire OldWire(), which has not been reconstructed; * a new wire made of edges described by ...NewEdge() methods.)#" )
        .def("FindNextValidElement",
             (void (TopOpeBRepBuild_FaceBuilder::*)() ) static_cast<void (TopOpeBRepBuild_FaceBuilder::*)() >(&TopOpeBRepBuild_FaceBuilder::FindNextValidElement),
             R"#(Iterates on myBlockIterator until finding a valid element)#" )
        .def("InitEdge",
             (Standard_Integer (TopOpeBRepBuild_FaceBuilder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_FaceBuilder::*)() >(&TopOpeBRepBuild_FaceBuilder::InitEdge),
             R"#(None)#" )
        .def("MoreEdge",
             (Standard_Boolean (TopOpeBRepBuild_FaceBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_FaceBuilder::*)() const>(&TopOpeBRepBuild_FaceBuilder::MoreEdge),
             R"#(None)#" )
        .def("NextEdge",
             (void (TopOpeBRepBuild_FaceBuilder::*)() ) static_cast<void (TopOpeBRepBuild_FaceBuilder::*)() >(&TopOpeBRepBuild_FaceBuilder::NextEdge),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Shape & (TopOpeBRepBuild_FaceBuilder::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_FaceBuilder::*)() const>(&TopOpeBRepBuild_FaceBuilder::Edge),
             R"#(Returns current new edge of current new wire.)#" )
        .def("EdgeConnexity",
             (Standard_Integer (TopOpeBRepBuild_FaceBuilder::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_FaceBuilder::*)( const TopoDS_Shape &  ) const>(&TopOpeBRepBuild_FaceBuilder::EdgeConnexity),
             R"#(None)#"  , py::arg("E"))
        .def("AddEdgeWire",
             (Standard_Integer (TopOpeBRepBuild_FaceBuilder::*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_FaceBuilder::*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) const>(&TopOpeBRepBuild_FaceBuilder::AddEdgeWire),
             R"#(None)#"  , py::arg("E"),  py::arg("W"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_FuseFace , shared_ptr<TopOpeBRepBuild_FuseFace>  >>(m.attr("TopOpeBRepBuild_FuseFace"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_List<TopoDS_Shape> &, const NCollection_List<TopoDS_Shape> &,const Standard_Integer >()  , py::arg("LIF"),  py::arg("LRF"),  py::arg("CXM") )
    // methods
        .def("Init",
             (void (TopOpeBRepBuild_FuseFace::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const Standard_Integer  ) ) static_cast<void (TopOpeBRepBuild_FuseFace::*)(  const NCollection_List<TopoDS_Shape> & ,   const NCollection_List<TopoDS_Shape> & ,  const Standard_Integer  ) >(&TopOpeBRepBuild_FuseFace::Init),
             R"#(None)#"  , py::arg("LIF"),  py::arg("LRF"),  py::arg("CXM"))
        .def("PerformFace",
             (void (TopOpeBRepBuild_FuseFace::*)() ) static_cast<void (TopOpeBRepBuild_FuseFace::*)() >(&TopOpeBRepBuild_FuseFace::PerformFace),
             R"#(None)#" )
        .def("PerformEdge",
             (void (TopOpeBRepBuild_FuseFace::*)() ) static_cast<void (TopOpeBRepBuild_FuseFace::*)() >(&TopOpeBRepBuild_FuseFace::PerformEdge),
             R"#(None)#" )
        .def("ClearEdge",
             (void (TopOpeBRepBuild_FuseFace::*)() ) static_cast<void (TopOpeBRepBuild_FuseFace::*)() >(&TopOpeBRepBuild_FuseFace::ClearEdge),
             R"#(None)#" )
        .def("ClearVertex",
             (void (TopOpeBRepBuild_FuseFace::*)() ) static_cast<void (TopOpeBRepBuild_FuseFace::*)() >(&TopOpeBRepBuild_FuseFace::ClearVertex),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (TopOpeBRepBuild_FuseFace::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::IsDone),
             R"#(None)#" )
        .def("IsModified",
             (Standard_Boolean (TopOpeBRepBuild_FuseFace::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::IsModified),
             R"#(None)#" )
        .def("LFuseFace",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LFuseFace),
             R"#(None)#" )
        .def("LInternEdge",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LInternEdge),
             R"#(None)#" )
        .def("LExternEdge",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LExternEdge),
             R"#(None)#" )
        .def("LModifEdge",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LModifEdge),
             R"#(None)#" )
        .def("LInternVertex",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LInternVertex),
             R"#(None)#" )
        .def("LExternVertex",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LExternVertex),
             R"#(None)#" )
        .def("LModifVertex",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LModifVertex),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (TopOpeBRepBuild_FuseFace::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::IsDone),
             R"#(None)#" )
        .def("IsModified",
             (Standard_Boolean (TopOpeBRepBuild_FuseFace::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::IsModified),
             R"#(None)#" )
        .def("LFuseFace",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LFuseFace),
             R"#(None)#" )
        .def("LInternEdge",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LInternEdge),
             R"#(None)#" )
        .def("LExternEdge",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LExternEdge),
             R"#(None)#" )
        .def("LModifEdge",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LModifEdge),
             R"#(None)#" )
        .def("LInternVertex",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LInternVertex),
             R"#(None)#" )
        .def("LExternVertex",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LExternVertex),
             R"#(None)#" )
        .def("LModifVertex",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_FuseFace::*)() const>(&TopOpeBRepBuild_FuseFace::LModifVertex),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_GIter , shared_ptr<TopOpeBRepBuild_GIter>  >>(m.attr("TopOpeBRepBuild_GIter"))
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepBuild_GTopo & >()  , py::arg("G") )
    // methods
        .def("Init",
             (void (TopOpeBRepBuild_GIter::*)() ) static_cast<void (TopOpeBRepBuild_GIter::*)() >(&TopOpeBRepBuild_GIter::Init),
             R"#(None)#" )
        .def("Init",
             (void (TopOpeBRepBuild_GIter::*)( const TopOpeBRepBuild_GTopo &  ) ) static_cast<void (TopOpeBRepBuild_GIter::*)( const TopOpeBRepBuild_GTopo &  ) >(&TopOpeBRepBuild_GIter::Init),
             R"#(None)#"  , py::arg("G"))
        .def("More",
             (Standard_Boolean (TopOpeBRepBuild_GIter::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_GIter::*)() const>(&TopOpeBRepBuild_GIter::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRepBuild_GIter::*)() ) static_cast<void (TopOpeBRepBuild_GIter::*)() >(&TopOpeBRepBuild_GIter::Next),
             R"#(None)#" )
        .def("Current",
             (void (TopOpeBRepBuild_GIter::*)( TopAbs_State & ,  TopAbs_State &  ) const) static_cast<void (TopOpeBRepBuild_GIter::*)( TopAbs_State & ,  TopAbs_State &  ) const>(&TopOpeBRepBuild_GIter::Current),
             R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def("Dump",
             (void (TopOpeBRepBuild_GIter::*)( std::ostream &  ) const) static_cast<void (TopOpeBRepBuild_GIter::*)( std::ostream &  ) const>(&TopOpeBRepBuild_GIter::Dump),
             R"#(None)#"  , py::arg("OS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<TopOpeBRepBuild_GTool , shared_ptr<TopOpeBRepBuild_GTool>>(m,"TopOpeBRepBuild_GTool");

    static_cast<py::class_<TopOpeBRepBuild_GTool , shared_ptr<TopOpeBRepBuild_GTool>  >>(m.attr("TopOpeBRepBuild_GTool"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GFusUnsh_s",
                    (TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_GTool::GFusUnsh),
                    R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def_static("GFusSame_s",
                    (TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_GTool::GFusSame),
                    R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def_static("GFusDiff_s",
                    (TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_GTool::GFusDiff),
                    R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def_static("GCutUnsh_s",
                    (TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_GTool::GCutUnsh),
                    R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def_static("GCutSame_s",
                    (TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_GTool::GCutSame),
                    R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def_static("GCutDiff_s",
                    (TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_GTool::GCutDiff),
                    R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def_static("GComUnsh_s",
                    (TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_GTool::GComUnsh),
                    R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def_static("GComSame_s",
                    (TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_GTool::GComSame),
                    R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def_static("GComDiff_s",
                    (TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<TopOpeBRepBuild_GTopo (*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_GTool::GComDiff),
                    R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def_static("Dump_s",
                    (void (*)( std::ostream &  ) ) static_cast<void (*)( std::ostream &  ) >(&TopOpeBRepBuild_GTool::Dump),
                    R"#(None)#"  , py::arg("OS"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_GTopo , shared_ptr<TopOpeBRepBuild_GTopo>  >>(m.attr("TopOpeBRepBuild_GTopo"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const TopAbs_ShapeEnum,const TopAbs_ShapeEnum,const TopOpeBRepDS_Config,const TopOpeBRepDS_Config >()  , py::arg("II"),  py::arg("IN"),  py::arg("IO"),  py::arg("NI"),  py::arg("NN"),  py::arg("NO"),  py::arg("OI"),  py::arg("ON"),  py::arg("OO"),  py::arg("t1"),  py::arg("t2"),  py::arg("C1"),  py::arg("C2") )
    // methods
        .def("Reset",
             (void (TopOpeBRepBuild_GTopo::*)() ) static_cast<void (TopOpeBRepBuild_GTopo::*)() >(&TopOpeBRepBuild_GTopo::Reset),
             R"#(None)#" )
        .def("Set",
             (void (TopOpeBRepBuild_GTopo::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_GTopo::*)( const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_GTopo::Set),
             R"#(None)#"  , py::arg("II"),  py::arg("IN"),  py::arg("IO"),  py::arg("NI"),  py::arg("NN"),  py::arg("NO"),  py::arg("OI"),  py::arg("ON"),  py::arg("OO"))
        .def("Type",
             (void (TopOpeBRepBuild_GTopo::*)( TopAbs_ShapeEnum & ,  TopAbs_ShapeEnum &  ) const) static_cast<void (TopOpeBRepBuild_GTopo::*)( TopAbs_ShapeEnum & ,  TopAbs_ShapeEnum &  ) const>(&TopOpeBRepBuild_GTopo::Type),
             R"#(None)#"  , py::arg("t1"),  py::arg("t2"))
        .def("ChangeType",
             (void (TopOpeBRepBuild_GTopo::*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<void (TopOpeBRepBuild_GTopo::*)( const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&TopOpeBRepBuild_GTopo::ChangeType),
             R"#(None)#"  , py::arg("t1"),  py::arg("t2"))
        .def("Config1",
             (TopOpeBRepDS_Config (TopOpeBRepBuild_GTopo::*)() const) static_cast<TopOpeBRepDS_Config (TopOpeBRepBuild_GTopo::*)() const>(&TopOpeBRepBuild_GTopo::Config1),
             R"#(None)#" )
        .def("Config2",
             (TopOpeBRepDS_Config (TopOpeBRepBuild_GTopo::*)() const) static_cast<TopOpeBRepDS_Config (TopOpeBRepBuild_GTopo::*)() const>(&TopOpeBRepBuild_GTopo::Config2),
             R"#(None)#" )
        .def("ChangeConfig",
             (void (TopOpeBRepBuild_GTopo::*)( const TopOpeBRepDS_Config ,  const TopOpeBRepDS_Config  ) ) static_cast<void (TopOpeBRepBuild_GTopo::*)( const TopOpeBRepDS_Config ,  const TopOpeBRepDS_Config  ) >(&TopOpeBRepBuild_GTopo::ChangeConfig),
             R"#(None)#"  , py::arg("C1"),  py::arg("C2"))
        .def("Value",
             (Standard_Boolean (TopOpeBRepBuild_GTopo::*)( const TopAbs_State ,  const TopAbs_State  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_GTopo::*)( const TopAbs_State ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_GTopo::Value),
             R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def("Value",
             (Standard_Boolean (TopOpeBRepBuild_GTopo::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_GTopo::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&TopOpeBRepBuild_GTopo::Value),
             R"#(None)#"  , py::arg("I1"),  py::arg("I2"))
        .def("Value",
             (Standard_Boolean (TopOpeBRepBuild_GTopo::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_GTopo::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_GTopo::Value),
             R"#(None)#"  , py::arg("II"))
        .def("ChangeValue",
             (void (TopOpeBRepBuild_GTopo::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_GTopo::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_GTopo::ChangeValue),
             R"#(None)#"  , py::arg("i1"),  py::arg("i2"),  py::arg("b"))
        .def("ChangeValue",
             (void (TopOpeBRepBuild_GTopo::*)( const TopAbs_State ,  const TopAbs_State ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_GTopo::*)( const TopAbs_State ,  const TopAbs_State ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_GTopo::ChangeValue),
             R"#(None)#"  , py::arg("s1"),  py::arg("s2"),  py::arg("b"))
        .def("GIndex",
             (Standard_Integer (TopOpeBRepBuild_GTopo::*)( const TopAbs_State  ) const) static_cast<Standard_Integer (TopOpeBRepBuild_GTopo::*)( const TopAbs_State  ) const>(&TopOpeBRepBuild_GTopo::GIndex),
             R"#(None)#"  , py::arg("S"))
        .def("GState",
             (TopAbs_State (TopOpeBRepBuild_GTopo::*)( const Standard_Integer  ) const) static_cast<TopAbs_State (TopOpeBRepBuild_GTopo::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_GTopo::GState),
             R"#(None)#"  , py::arg("I"))
        .def("DumpVal",
             (void (TopOpeBRepBuild_GTopo::*)( std::ostream & ,  const TopAbs_State ,  const TopAbs_State  ) const) static_cast<void (TopOpeBRepBuild_GTopo::*)( std::ostream & ,  const TopAbs_State ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_GTopo::DumpVal),
             R"#(None)#"  , py::arg("OS"),  py::arg("s1"),  py::arg("s2"))
        .def("DumpType",
             (void (TopOpeBRepBuild_GTopo::*)( std::ostream &  ) const) static_cast<void (TopOpeBRepBuild_GTopo::*)( std::ostream &  ) const>(&TopOpeBRepBuild_GTopo::DumpType),
             R"#(None)#"  , py::arg("OS"))
        .def("Dump",
             (void (TopOpeBRepBuild_GTopo::*)( std::ostream & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_GTopo::*)( std::ostream & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_GTopo::Dump),
             R"#(None)#"  , py::arg("OS"),  py::arg("s")=static_cast<const Standard_Address>(NULL))
        .def("StatesON",
             (void (TopOpeBRepBuild_GTopo::*)( TopAbs_State & ,  TopAbs_State &  ) const) static_cast<void (TopOpeBRepBuild_GTopo::*)( TopAbs_State & ,  TopAbs_State &  ) const>(&TopOpeBRepBuild_GTopo::StatesON),
             R"#(None)#"  , py::arg("s1"),  py::arg("s2"))
        .def("IsToReverse1",
             (Standard_Boolean (TopOpeBRepBuild_GTopo::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_GTopo::*)() const>(&TopOpeBRepBuild_GTopo::IsToReverse1),
             R"#(None)#" )
        .def("IsToReverse2",
             (Standard_Boolean (TopOpeBRepBuild_GTopo::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_GTopo::*)() const>(&TopOpeBRepBuild_GTopo::IsToReverse2),
             R"#(None)#" )
        .def("SetReverse",
             (void (TopOpeBRepBuild_GTopo::*)( const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_GTopo::*)( const Standard_Boolean  ) >(&TopOpeBRepBuild_GTopo::SetReverse),
             R"#(None)#"  , py::arg("rev"))
        .def("Reverse",
             (Standard_Boolean (TopOpeBRepBuild_GTopo::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_GTopo::*)() const>(&TopOpeBRepBuild_GTopo::Reverse),
             R"#(None)#" )
        .def("CopyPermuted",
             (TopOpeBRepBuild_GTopo (TopOpeBRepBuild_GTopo::*)() const) static_cast<TopOpeBRepBuild_GTopo (TopOpeBRepBuild_GTopo::*)() const>(&TopOpeBRepBuild_GTopo::CopyPermuted),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Index",
             []( TopOpeBRepBuild_GTopo &self , const Standard_Integer II ){ Standard_Integer  i1; Standard_Integer  i2; self.Index(II,i1,i2); return std::make_tuple(i1,i2); },
             R"#(None)#"  , py::arg("II"))
    // static methods
        .def_static("DumpSSB_s",
                    (void (*)( std::ostream & ,  const TopAbs_State ,  const TopAbs_State ,  const Standard_Boolean  ) ) static_cast<void (*)( std::ostream & ,  const TopAbs_State ,  const TopAbs_State ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_GTopo::DumpSSB),
                    R"#(None)#"  , py::arg("OS"),  py::arg("s1"),  py::arg("s2"),  py::arg("b"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_HBuilder ,opencascade::handle<TopOpeBRepBuild_HBuilder>  , Standard_Transient >>(m.attr("TopOpeBRepBuild_HBuilder"))
        .def(py::init< const TopOpeBRepDS_BuildTool & >()  , py::arg("BT") )
    // methods
        .def("BuildTool",
             (const TopOpeBRepDS_BuildTool & (TopOpeBRepBuild_HBuilder::*)() const) static_cast<const TopOpeBRepDS_BuildTool & (TopOpeBRepBuild_HBuilder::*)() const>(&TopOpeBRepBuild_HBuilder::BuildTool),
             R"#(None)#" )
        .def("Perform",
             (void (TopOpeBRepBuild_HBuilder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) ) static_cast<void (TopOpeBRepBuild_HBuilder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) >(&TopOpeBRepBuild_HBuilder::Perform),
             R"#(Stores the data structure <HDS>, Create shapes from the new geometries described in <HDS>.)#"  , py::arg("HDS"))
        .def("Perform",
             (void (TopOpeBRepBuild_HBuilder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_HBuilder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_HBuilder::Perform),
             R"#(Same as previous + evaluates if an operation performed on shapes S1,S2 is a particular case.)#"  , py::arg("HDS"),  py::arg("S1"),  py::arg("S2"))
        .def("Clear",
             (void (TopOpeBRepBuild_HBuilder::*)() ) static_cast<void (TopOpeBRepBuild_HBuilder::*)() >(&TopOpeBRepBuild_HBuilder::Clear),
             R"#(Removes all split and merge already performed. Does NOT clear the handled DS.)#" )
        .def("DataStructure",
             (opencascade::handle<TopOpeBRepDS_HDataStructure> (TopOpeBRepBuild_HBuilder::*)() const) static_cast<opencascade::handle<TopOpeBRepDS_HDataStructure> (TopOpeBRepBuild_HBuilder::*)() const>(&TopOpeBRepBuild_HBuilder::DataStructure),
             R"#(returns the DS handled by this builder)#" )
        .def("ChangeBuildTool",
             (TopOpeBRepDS_BuildTool & (TopOpeBRepBuild_HBuilder::*)() ) static_cast<TopOpeBRepDS_BuildTool & (TopOpeBRepBuild_HBuilder::*)() >(&TopOpeBRepBuild_HBuilder::ChangeBuildTool),
             R"#(None)#" )
        .def("MergeShapes",
             (void (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TopoDS_Shape & ,  const TopAbs_State  ) ) static_cast<void (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TopoDS_Shape & ,  const TopAbs_State  ) >(&TopOpeBRepBuild_HBuilder::MergeShapes),
             R"#(Merges the two shapes <S1> and <S2> keeping the parts of states <TB1>,<TB2> in <S1>,<S2>.)#"  , py::arg("S1"),  py::arg("TB1"),  py::arg("S2"),  py::arg("TB2"))
        .def("MergeSolids",
             (void (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TopoDS_Shape & ,  const TopAbs_State  ) ) static_cast<void (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TopoDS_Shape & ,  const TopAbs_State  ) >(&TopOpeBRepBuild_HBuilder::MergeSolids),
             R"#(Merges the two solids <S1> and <S2> keeping the parts in each solid of states <TB1> and <TB2>.)#"  , py::arg("S1"),  py::arg("TB1"),  py::arg("S2"),  py::arg("TB2"))
        .def("MergeSolid",
             (void (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) ) static_cast<void (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) >(&TopOpeBRepBuild_HBuilder::MergeSolid),
             R"#(Merges the solid <S> keeping the parts of state <TB>.)#"  , py::arg("S"),  py::arg("TB"))
        .def("IsSplit",
             (Standard_Boolean (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_HBuilder::IsSplit),
             R"#(Returns True if the shape <S> has been split.)#"  , py::arg("S"),  py::arg("ToBuild"))
        .def("Splits",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_HBuilder::Splits),
             R"#(Returns the split parts <ToBuild> of shape <S>.)#"  , py::arg("S"),  py::arg("ToBuild"))
        .def("IsMerged",
             (Standard_Boolean (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const) static_cast<Standard_Boolean (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_HBuilder::IsMerged),
             R"#(Returns True if the shape <S> has been merged.)#"  , py::arg("S"),  py::arg("ToBuild"))
        .def("Merged",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const TopAbs_State  ) const>(&TopOpeBRepBuild_HBuilder::Merged),
             R"#(Returns the merged parts <ToBuild> of shape <S>.)#"  , py::arg("S"),  py::arg("ToBuild"))
        .def("NewVertex",
             (const TopoDS_Shape & (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_HBuilder::NewVertex),
             R"#(Returns the vertex created on point <I>.)#"  , py::arg("I"))
        .def("NewEdges",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_HBuilder::NewEdges),
             R"#(Returns the edges created on curve <I>.)#"  , py::arg("I"))
        .def("ChangeNewEdges",
             (TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) ) static_cast<TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) >(&TopOpeBRepBuild_HBuilder::ChangeNewEdges),
             R"#(Returns the edges created on curve <I>.)#"  , py::arg("I"))
        .def("NewFaces",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) const>(&TopOpeBRepBuild_HBuilder::NewFaces),
             R"#(Returns the faces created on surface <I>.)#"  , py::arg("I"))
        .def("Section",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)() ) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_HBuilder::*)() >(&TopOpeBRepBuild_HBuilder::Section),
             R"#(None)#" )
        .def("InitExtendedSectionDS",
             (void (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) ) static_cast<void (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) >(&TopOpeBRepBuild_HBuilder::InitExtendedSectionDS),
             R"#(None)#"  , py::arg("k")=static_cast<const Standard_Integer>(3))
        .def("InitSection",
             (void (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) ) static_cast<void (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer  ) >(&TopOpeBRepBuild_HBuilder::InitSection),
             R"#(None)#"  , py::arg("k")=static_cast<const Standard_Integer>(3))
        .def("MoreSection",
             (Standard_Boolean (TopOpeBRepBuild_HBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_HBuilder::*)() const>(&TopOpeBRepBuild_HBuilder::MoreSection),
             R"#(None)#" )
        .def("NextSection",
             (void (TopOpeBRepBuild_HBuilder::*)() ) static_cast<void (TopOpeBRepBuild_HBuilder::*)() >(&TopOpeBRepBuild_HBuilder::NextSection),
             R"#(None)#" )
        .def("CurrentSection",
             (const TopoDS_Shape & (TopOpeBRepBuild_HBuilder::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_HBuilder::*)() const>(&TopOpeBRepBuild_HBuilder::CurrentSection),
             R"#(None)#" )
        .def("GetDSEdgeFromSectEdge",
             (Standard_Integer (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const Standard_Integer  ) ) static_cast<Standard_Integer (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  const Standard_Integer  ) >(&TopOpeBRepBuild_HBuilder::GetDSEdgeFromSectEdge),
             R"#(None)#"  , py::arg("E"),  py::arg("rank"))
        .def("GetDSFaceFromDSEdge",
             (TColStd_ListOfInteger & (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<TColStd_ListOfInteger & (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer ,  const Standard_Integer  ) >(&TopOpeBRepBuild_HBuilder::GetDSFaceFromDSEdge),
             R"#(None)#"  , py::arg("indexEdg"),  py::arg("rank"))
        .def("GetDSCurveFromSectEdge",
             (Standard_Integer (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Integer (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_HBuilder::GetDSCurveFromSectEdge),
             R"#(None)#"  , py::arg("SectEdge"))
        .def("GetDSFaceFromDSCurve",
             (Standard_Integer (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Integer (TopOpeBRepBuild_HBuilder::*)( const Standard_Integer ,  const Standard_Integer  ) >(&TopOpeBRepBuild_HBuilder::GetDSFaceFromDSCurve),
             R"#(None)#"  , py::arg("indexCur"),  py::arg("rank"))
        .def("GetDSPointFromNewVertex",
             (Standard_Integer (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Integer (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_HBuilder::GetDSPointFromNewVertex),
             R"#(None)#"  , py::arg("NewVert"))
        .def("EdgeCurveAncestors",
             (Standard_Boolean (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  TopoDS_Shape & ,  TopoDS_Shape & ,  Standard_Integer &  ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  TopoDS_Shape & ,  TopoDS_Shape & ,  Standard_Integer &  ) >(&TopOpeBRepBuild_HBuilder::EdgeCurveAncestors),
             R"#(search for the couple of face F1,F2 (from arguments of supra Perform(S1,S2,HDS)) method which intersection gives section edge E built on an intersection curve. returns True if F1,F2 have been valued. returns False if E is not a section edge built on intersection curve IC.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("IC"))
        .def("EdgeSectionAncestors",
             (Standard_Boolean (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_HBuilder::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_HBuilder::EdgeSectionAncestors),
             R"#(search for the couple of face F1,F2 (from arguments of supra Perform(S1,S2,HDS)) method which intersection gives section edge E built on at least one edge . returns True if F1,F2 have been valued. returns False if E is not a section edge built on at least one edge of S1 and/or S2. LE1,LE2 are edges of S1,S2 which common part is edge E. LE1 or LE2 may be empty() but not both.)#"  , py::arg("E"),  py::arg("LF1"),  py::arg("LF2"),  py::arg("LE1"),  py::arg("LE2"))
        .def("IsKPart",
             (Standard_Integer (TopOpeBRepBuild_HBuilder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_HBuilder::*)() >(&TopOpeBRepBuild_HBuilder::IsKPart),
             R"#(Returns 0 is standard operation, != 0 if particular case)#" )
        .def("MergeKPart",
             (void (TopOpeBRepBuild_HBuilder::*)( const TopAbs_State ,  const TopAbs_State  ) ) static_cast<void (TopOpeBRepBuild_HBuilder::*)( const TopAbs_State ,  const TopAbs_State  ) >(&TopOpeBRepBuild_HBuilder::MergeKPart),
             R"#(None)#"  , py::arg("TB1"),  py::arg("TB2"))
        .def("ChangeBuilder",
             (TopOpeBRepBuild_Builder & (TopOpeBRepBuild_HBuilder::*)() ) static_cast<TopOpeBRepBuild_Builder & (TopOpeBRepBuild_HBuilder::*)() >(&TopOpeBRepBuild_HBuilder::ChangeBuilder),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepBuild_HBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepBuild_HBuilder::*)() const>(&TopOpeBRepBuild_HBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepBuild_HBuilder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepBuild_HBuilder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_Loop ,opencascade::handle<TopOpeBRepBuild_Loop>  , Standard_Transient >>(m.attr("TopOpeBRepBuild_Loop"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
        .def(py::init< const TopOpeBRepBuild_BlockIterator & >()  , py::arg("BI") )
    // methods
        .def("IsShape",
             (Standard_Boolean (TopOpeBRepBuild_Loop::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_Loop::*)() const>(&TopOpeBRepBuild_Loop::IsShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRepBuild_Loop::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_Loop::*)() const>(&TopOpeBRepBuild_Loop::Shape),
             R"#(None)#" )
        .def("BlockIterator",
             (const TopOpeBRepBuild_BlockIterator & (TopOpeBRepBuild_Loop::*)() const) static_cast<const TopOpeBRepBuild_BlockIterator & (TopOpeBRepBuild_Loop::*)() const>(&TopOpeBRepBuild_Loop::BlockIterator),
             R"#(None)#" )
        .def("Dump",
             (void (TopOpeBRepBuild_Loop::*)() const) static_cast<void (TopOpeBRepBuild_Loop::*)() const>(&TopOpeBRepBuild_Loop::Dump),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepBuild_Loop::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepBuild_Loop::*)() const>(&TopOpeBRepBuild_Loop::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepBuild_Loop::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepBuild_Loop::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_LoopClassifier , shared_ptr<TopOpeBRepBuild_LoopClassifier> ,Py_TopOpeBRepBuild_LoopClassifier >>(m.attr("TopOpeBRepBuild_LoopClassifier"))
    // methods
        .def("Compare",
             (TopAbs_State (TopOpeBRepBuild_LoopClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  const opencascade::handle<TopOpeBRepBuild_Loop> &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_LoopClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  const opencascade::handle<TopOpeBRepBuild_Loop> &  ) >(&TopOpeBRepBuild_LoopClassifier::Compare),
             R"#(Returns the state of loop <L1> compared with loop <L2>.)#"  , py::arg("L1"),  py::arg("L2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_LoopSet , shared_ptr<TopOpeBRepBuild_LoopSet>  >>(m.attr("TopOpeBRepBuild_LoopSet"))
        .def(py::init<  >()  )
    // methods
        .def("ChangeListOfLoop",
             (TopOpeBRepBuild_ListOfLoop & (TopOpeBRepBuild_LoopSet::*)() ) static_cast<TopOpeBRepBuild_ListOfLoop & (TopOpeBRepBuild_LoopSet::*)() >(&TopOpeBRepBuild_LoopSet::ChangeListOfLoop),
             R"#(None)#" )
        .def("InitLoop",
             (void (TopOpeBRepBuild_LoopSet::*)() ) static_cast<void (TopOpeBRepBuild_LoopSet::*)() >(&TopOpeBRepBuild_LoopSet::InitLoop),
             R"#(None)#" )
        .def("MoreLoop",
             (Standard_Boolean (TopOpeBRepBuild_LoopSet::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_LoopSet::*)() const>(&TopOpeBRepBuild_LoopSet::MoreLoop),
             R"#(None)#" )
        .def("NextLoop",
             (void (TopOpeBRepBuild_LoopSet::*)() ) static_cast<void (TopOpeBRepBuild_LoopSet::*)() >(&TopOpeBRepBuild_LoopSet::NextLoop),
             R"#(None)#" )
        .def("Loop",
             (opencascade::handle<TopOpeBRepBuild_Loop> (TopOpeBRepBuild_LoopSet::*)() const) static_cast<opencascade::handle<TopOpeBRepBuild_Loop> (TopOpeBRepBuild_LoopSet::*)() const>(&TopOpeBRepBuild_LoopSet::Loop),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_ShapeListOfShape , shared_ptr<TopOpeBRepBuild_ShapeListOfShape>  >>(m.attr("TopOpeBRepBuild_ShapeListOfShape"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
        .def(py::init< const TopoDS_Shape &, const NCollection_List<TopoDS_Shape> & >()  , py::arg("S"),  py::arg("L") )
    // methods
        .def("List",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_ShapeListOfShape::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_ShapeListOfShape::*)() const>(&TopOpeBRepBuild_ShapeListOfShape::List),
             R"#(None)#" )
        .def("ChangeList",
             (TopTools_ListOfShape & (TopOpeBRepBuild_ShapeListOfShape::*)() ) static_cast<TopTools_ListOfShape & (TopOpeBRepBuild_ShapeListOfShape::*)() >(&TopOpeBRepBuild_ShapeListOfShape::ChangeList),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRepBuild_ShapeListOfShape::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_ShapeListOfShape::*)() const>(&TopOpeBRepBuild_ShapeListOfShape::Shape),
             R"#(None)#" )
        .def("ChangeShape",
             (TopoDS_Shape & (TopOpeBRepBuild_ShapeListOfShape::*)() ) static_cast<TopoDS_Shape & (TopOpeBRepBuild_ShapeListOfShape::*)() >(&TopOpeBRepBuild_ShapeListOfShape::ChangeShape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_ShapeSet , shared_ptr<TopOpeBRepBuild_ShapeSet>  >>(m.attr("TopOpeBRepBuild_ShapeSet"))
        .def(py::init< const TopAbs_ShapeEnum,const Standard_Boolean >()  , py::arg("SubShapeType"),  py::arg("checkshape")=static_cast<const Standard_Boolean>(Standard_True) )
    // methods
        .def("AddShape",
             (void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShapeSet::AddShape),
             R"#(Adds <S> to the list of shapes. (wires or shells).)#"  , py::arg("S"))
        .def("AddStartElement",
             (void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShapeSet::AddStartElement),
             R"#((S is a face or edge) Add S to the list of starting shapes used for reconstructions. apply AddElement(S).)#"  , py::arg("S"))
        .def("AddElement",
             (void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShapeSet::AddElement),
             R"#(for each subshape SE of S of type mySubShapeType - Add subshapes of S to the map of subshapes (mySubShapeMap) - Add S to the list of shape incident to subshapes of S.)#"  , py::arg("S"))
        .def("StartElements",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_ShapeSet::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_ShapeSet::*)() const>(&TopOpeBRepBuild_ShapeSet::StartElements),
             R"#(return a reference on myStartShapes)#" )
        .def("InitShapes",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::InitShapes),
             R"#(None)#" )
        .def("MoreShapes",
             (Standard_Boolean (TopOpeBRepBuild_ShapeSet::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_ShapeSet::*)() const>(&TopOpeBRepBuild_ShapeSet::MoreShapes),
             R"#(None)#" )
        .def("NextShape",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::NextShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRepBuild_ShapeSet::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_ShapeSet::*)() const>(&TopOpeBRepBuild_ShapeSet::Shape),
             R"#(None)#" )
        .def("InitStartElements",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::InitStartElements),
             R"#(None)#" )
        .def("MoreStartElements",
             (Standard_Boolean (TopOpeBRepBuild_ShapeSet::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_ShapeSet::*)() const>(&TopOpeBRepBuild_ShapeSet::MoreStartElements),
             R"#(None)#" )
        .def("NextStartElement",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::NextStartElement),
             R"#(None)#" )
        .def("StartElement",
             (const TopoDS_Shape & (TopOpeBRepBuild_ShapeSet::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_ShapeSet::*)() const>(&TopOpeBRepBuild_ShapeSet::StartElement),
             R"#(None)#" )
        .def("InitNeighbours",
             (void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShapeSet::InitNeighbours),
             R"#(None)#"  , py::arg("S"))
        .def("MoreNeighbours",
             (Standard_Boolean (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<Standard_Boolean (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::MoreNeighbours),
             R"#(None)#" )
        .def("NextNeighbour",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::NextNeighbour),
             R"#(None)#" )
        .def("Neighbour",
             (const TopoDS_Shape & (TopOpeBRepBuild_ShapeSet::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_ShapeSet::*)() const>(&TopOpeBRepBuild_ShapeSet::Neighbour),
             R"#(None)#" )
        .def("ChangeStartShapes",
             (TopTools_ListOfShape & (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<TopTools_ListOfShape & (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::ChangeStartShapes),
             R"#(None)#" )
        .def("FindNeighbours",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::FindNeighbours),
             R"#(Build the list of neighbour shapes of myCurrentShape (neighbour shapes and myCurrentShapes are of type t) Initialize myIncidentShapesIter on neighbour shapes.)#" )
        .def("MakeNeighboursList",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShapeSet::MakeNeighboursList),
             R"#(None)#"  , py::arg("E"),  py::arg("V"))
        .def("MaxNumberSubShape",
             (Standard_Integer (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Integer (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShapeSet::MaxNumberSubShape),
             R"#(None)#"  , py::arg("Shape"))
        .def("CheckShape",
             (void (TopOpeBRepBuild_ShapeSet::*)( const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const Standard_Boolean  ) >(&TopOpeBRepBuild_ShapeSet::CheckShape),
             R"#(None)#"  , py::arg("checkshape"))
        .def("CheckShape",
             (Standard_Boolean (TopOpeBRepBuild_ShapeSet::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_ShapeSet::*)() const>(&TopOpeBRepBuild_ShapeSet::CheckShape),
             R"#(None)#" )
        .def("CheckShape",
             (Standard_Boolean (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_ShapeSet::CheckShape),
             R"#(None)#"  , py::arg("S"),  py::arg("checkgeom")=static_cast<const Standard_Boolean>(Standard_False))
        .def("DumpName",
             (void (TopOpeBRepBuild_ShapeSet::*)( std::ostream & ,  const TCollection_AsciiString &  ) const) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( std::ostream & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_ShapeSet::DumpName),
             R"#(None)#"  , py::arg("OS"),  py::arg("str"))
        .def("DumpCheck",
             (void (TopOpeBRepBuild_ShapeSet::*)( std::ostream & ,  const TCollection_AsciiString & ,  const TopoDS_Shape & ,  const Standard_Boolean  ) const) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( std::ostream & ,  const TCollection_AsciiString & ,  const TopoDS_Shape & ,  const Standard_Boolean  ) const>(&TopOpeBRepBuild_ShapeSet::DumpCheck),
             R"#(None)#"  , py::arg("OS"),  py::arg("str"),  py::arg("S"),  py::arg("chk"))
        .def("DumpSS",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::DumpSS),
             R"#(None)#" )
        .def("DumpBB",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::DumpBB),
             R"#(None)#" )
        .def("DEBName",
             (void (TopOpeBRepBuild_ShapeSet::*)( const TCollection_AsciiString &  ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const TCollection_AsciiString &  ) >(&TopOpeBRepBuild_ShapeSet::DEBName),
             R"#(None)#"  , py::arg("N"))
        .def("DEBName",
             (const TCollection_AsciiString & (TopOpeBRepBuild_ShapeSet::*)() const) static_cast<const TCollection_AsciiString & (TopOpeBRepBuild_ShapeSet::*)() const>(&TopOpeBRepBuild_ShapeSet::DEBName),
             R"#(None)#" )
        .def("DEBNumber",
             (void (TopOpeBRepBuild_ShapeSet::*)( const Standard_Integer  ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const Standard_Integer  ) >(&TopOpeBRepBuild_ShapeSet::DEBNumber),
             R"#(None)#"  , py::arg("I"))
        .def("DEBNumber",
             (Standard_Integer (TopOpeBRepBuild_ShapeSet::*)() const) static_cast<Standard_Integer (TopOpeBRepBuild_ShapeSet::*)() const>(&TopOpeBRepBuild_ShapeSet::DEBNumber),
             R"#(None)#" )
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_ShapeSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_ShapeSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_ShapeSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_ShapeSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_ShellToSolid , shared_ptr<TopOpeBRepBuild_ShellToSolid>  >>(m.attr("TopOpeBRepBuild_ShellToSolid"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (TopOpeBRepBuild_ShellToSolid::*)() ) static_cast<void (TopOpeBRepBuild_ShellToSolid::*)() >(&TopOpeBRepBuild_ShellToSolid::Init),
             R"#(None)#" )
        .def("AddShell",
             (void (TopOpeBRepBuild_ShellToSolid::*)( const TopoDS_Shell &  ) ) static_cast<void (TopOpeBRepBuild_ShellToSolid::*)( const TopoDS_Shell &  ) >(&TopOpeBRepBuild_ShellToSolid::AddShell),
             R"#(None)#"  , py::arg("Sh"))
        .def("MakeSolids",
             (void (TopOpeBRepBuild_ShellToSolid::*)( const TopoDS_Solid & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_ShellToSolid::*)( const TopoDS_Solid & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_ShellToSolid::MakeSolids),
             R"#(None)#"  , py::arg("So"),  py::arg("LSo"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_SolidBuilder , shared_ptr<TopOpeBRepBuild_SolidBuilder>  >>(m.attr("TopOpeBRepBuild_SolidBuilder"))
        .def(py::init<  >()  )
        .def(py::init< TopOpeBRepBuild_ShellFaceSet &,const Standard_Boolean >()  , py::arg("FS"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("InitSolidBuilder",
             (void (TopOpeBRepBuild_SolidBuilder::*)( TopOpeBRepBuild_ShellFaceSet & ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_SolidBuilder::*)( TopOpeBRepBuild_ShellFaceSet & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_SolidBuilder::InitSolidBuilder),
             R"#(None)#"  , py::arg("FS"),  py::arg("ForceClass"))
        .def("InitSolid",
             (Standard_Integer (TopOpeBRepBuild_SolidBuilder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_SolidBuilder::*)() >(&TopOpeBRepBuild_SolidBuilder::InitSolid),
             R"#(None)#" )
        .def("MoreSolid",
             (Standard_Boolean (TopOpeBRepBuild_SolidBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_SolidBuilder::*)() const>(&TopOpeBRepBuild_SolidBuilder::MoreSolid),
             R"#(None)#" )
        .def("NextSolid",
             (void (TopOpeBRepBuild_SolidBuilder::*)() ) static_cast<void (TopOpeBRepBuild_SolidBuilder::*)() >(&TopOpeBRepBuild_SolidBuilder::NextSolid),
             R"#(None)#" )
        .def("InitShell",
             (Standard_Integer (TopOpeBRepBuild_SolidBuilder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_SolidBuilder::*)() >(&TopOpeBRepBuild_SolidBuilder::InitShell),
             R"#(None)#" )
        .def("MoreShell",
             (Standard_Boolean (TopOpeBRepBuild_SolidBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_SolidBuilder::*)() const>(&TopOpeBRepBuild_SolidBuilder::MoreShell),
             R"#(None)#" )
        .def("NextShell",
             (void (TopOpeBRepBuild_SolidBuilder::*)() ) static_cast<void (TopOpeBRepBuild_SolidBuilder::*)() >(&TopOpeBRepBuild_SolidBuilder::NextShell),
             R"#(None)#" )
        .def("IsOldShell",
             (Standard_Boolean (TopOpeBRepBuild_SolidBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_SolidBuilder::*)() const>(&TopOpeBRepBuild_SolidBuilder::IsOldShell),
             R"#(None)#" )
        .def("OldShell",
             (const TopoDS_Shape & (TopOpeBRepBuild_SolidBuilder::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_SolidBuilder::*)() const>(&TopOpeBRepBuild_SolidBuilder::OldShell),
             R"#(Returns current shell This shell may be : * an old shell OldShell(), which has not been reconstructed; * a new shell made of faces described by ...NewFace() methods.)#" )
        .def("InitFace",
             (Standard_Integer (TopOpeBRepBuild_SolidBuilder::*)() ) static_cast<Standard_Integer (TopOpeBRepBuild_SolidBuilder::*)() >(&TopOpeBRepBuild_SolidBuilder::InitFace),
             R"#(None)#" )
        .def("MoreFace",
             (Standard_Boolean (TopOpeBRepBuild_SolidBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_SolidBuilder::*)() const>(&TopOpeBRepBuild_SolidBuilder::MoreFace),
             R"#(None)#" )
        .def("NextFace",
             (void (TopOpeBRepBuild_SolidBuilder::*)() ) static_cast<void (TopOpeBRepBuild_SolidBuilder::*)() >(&TopOpeBRepBuild_SolidBuilder::NextFace),
             R"#(None)#" )
        .def("Face",
             (const TopoDS_Shape & (TopOpeBRepBuild_SolidBuilder::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_SolidBuilder::*)() const>(&TopOpeBRepBuild_SolidBuilder::Face),
             R"#(Returns current new face of current new shell.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<TopOpeBRepBuild_Tools , shared_ptr<TopOpeBRepBuild_Tools>>(m,"TopOpeBRepBuild_Tools");

    static_cast<py::class_<TopOpeBRepBuild_Tools , shared_ptr<TopOpeBRepBuild_Tools>  >>(m.attr("TopOpeBRepBuild_Tools"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FindState_s",
                    (void (*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TopAbs_ShapeEnum ,   const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const TopAbs_State ,  const TopAbs_ShapeEnum ,   const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Tools::FindState),
                    R"#(None)#"  , py::arg("aVertex"),  py::arg("aState"),  py::arg("aShapeEnum"),  py::arg("aMapVertexEdges"),  py::arg("aMapProcessedVertices"),  py::arg("aMapVs"))
        .def_static("PropagateState_s",
                    (void (*)(  const NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher> & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  TopOpeBRepTool_ShapeClassifier & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher> & ,   const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)(  const NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher> & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  TopOpeBRepTool_ShapeClassifier & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher> & ,   const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Tools::PropagateState),
                    R"#(None)#"  , py::arg("aSplEdgesState"),  py::arg("anEdgesToRestMap"),  py::arg("aShapeEnum1"),  py::arg("aShapeEnum2"),  py::arg("aShapeClassifier"),  py::arg("aMapOfShapeWithState"),  py::arg("anUnkStateShapes"))
        .def_static("FindStateThroughVertex_s",
                    (TopAbs_State (*)( const TopoDS_Shape & ,  TopOpeBRepTool_ShapeClassifier & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher> & ,   const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<TopAbs_State (*)( const TopoDS_Shape & ,  TopOpeBRepTool_ShapeClassifier & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher> & ,   const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Tools::FindStateThroughVertex),
                    R"#(None)#"  , py::arg("aShape"),  py::arg("aShapeClassifier"),  py::arg("aMapOfShapeWithState"),  py::arg("anAvoidSubshMap"))
        .def_static("PropagateStateForWires_s",
                    (void (*)(  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)(  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Tools::PropagateStateForWires),
                    R"#(None)#"  , py::arg("aFacesToRestMap"),  py::arg("aMapOfShapeWithState"))
        .def_static("SpreadStateToChild_s",
                    (void (*)( const TopoDS_Shape & ,  const TopAbs_State ,  NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const TopAbs_State ,  NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Tools::SpreadStateToChild),
                    R"#(None)#"  , py::arg("aShape"),  py::arg("aState"),  py::arg("aMapOfShapeWithState"))
        .def_static("FindState1_s",
                    (void (*)( const TopoDS_Shape & ,  const TopAbs_State ,   const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const TopAbs_State ,   const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Tools::FindState1),
                    R"#(None)#"  , py::arg("anEdge"),  py::arg("aState"),  py::arg("aMapEdgesFaces"),  py::arg("aMapProcessedVertices"),  py::arg("aMapVs"))
        .def_static("FindState2_s",
                    (void (*)( const TopoDS_Shape & ,  const TopAbs_State ,   const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const TopAbs_State ,   const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Tools::FindState2),
                    R"#(None)#"  , py::arg("anEdge"),  py::arg("aState"),  py::arg("aMapEdgesFaces"),  py::arg("aMapProcessedEdges"),  py::arg("aMapVs"))
        .def_static("GetAdjacentFace_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,   const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  TopoDS_Shape &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,   const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  TopoDS_Shape &  ) >(&TopOpeBRepBuild_Tools::GetAdjacentFace),
                    R"#(None)#"  , py::arg("aFaceObj"),  py::arg("anEObj"),  py::arg("anEdgeFaceMap"),  py::arg("anAdjFaceObj"))
        .def_static("GetNormalToFaceOnEdge_s",
                    (void (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  gp_Vec &  ) ) static_cast<void (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  gp_Vec &  ) >(&TopOpeBRepBuild_Tools::GetNormalToFaceOnEdge),
                    R"#(None)#"  , py::arg("aFObj"),  py::arg("anEdgeObj"),  py::arg("aDirNormal"))
        .def_static("GetNormalInNearestPoint_s",
                    (void (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  gp_Vec &  ) ) static_cast<void (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  gp_Vec &  ) >(&TopOpeBRepBuild_Tools::GetNormalInNearestPoint),
                    R"#(This function used to compute normal in point which is located near the point with param UV (used for computation of normals where the normal in the point UV equal to zero).)#"  , py::arg("aFace"),  py::arg("anEdge"),  py::arg("aNormal"))
        .def_static("GetTangentToEdgeEdge_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Edge & ,  gp_Vec &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Edge & ,  gp_Vec &  ) >(&TopOpeBRepBuild_Tools::GetTangentToEdgeEdge),
                    R"#(None)#"  , py::arg("aFObj"),  py::arg("anEdgeObj"),  py::arg("aOriEObj"),  py::arg("aTangent"))
        .def_static("GetTangentToEdge_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  gp_Vec &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  gp_Vec &  ) >(&TopOpeBRepBuild_Tools::GetTangentToEdge),
                    R"#(None)#"  , py::arg("anEdgeObj"),  py::arg("aTangent"))
        .def_static("UpdatePCurves_s",
                    (void (*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (*)( const TopoDS_Wire & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) >(&TopOpeBRepBuild_Tools::UpdatePCurves),
                    R"#(Recompute PCurves of the all edges from the wire on the <toFace>)#"  , py::arg("aWire"),  py::arg("fromFace"),  py::arg("toFace"))
        .def_static("UpdateEdgeOnPeriodicalFace_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) >(&TopOpeBRepBuild_Tools::UpdateEdgeOnPeriodicalFace),
                    R"#(recompute PCurves of the closing (SIM , with 2 PCurves) edge on the NewFace)#"  , py::arg("aEdgeToUpdate"),  py::arg("OldFace"),  py::arg("NewFace"))
        .def_static("UpdateEdgeOnFace_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face &  ) >(&TopOpeBRepBuild_Tools::UpdateEdgeOnFace),
                    R"#(recompute PCurve of the edge on the NewFace)#"  , py::arg("aEdgeToUpdate"),  py::arg("OldFace"),  py::arg("NewFace"))
        .def_static("IsDegEdgesTheSame_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Tools::IsDegEdgesTheSame),
                    R"#(None)#"  , py::arg("anE1"),  py::arg("anE2"))
        .def_static("NormalizeFace_s",
                    (void (*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) >(&TopOpeBRepBuild_Tools::NormalizeFace),
                    R"#(test if <oldFace> does not contain INTERNAL or EXTERNAL edges and remove such edges in case of its presence. The result is stored in <corrFace>)#"  , py::arg("oldFace"),  py::arg("corrFace"))
        .def_static("CorrectFace2d_s",
                    (void (*)( const TopoDS_Shape & ,  TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Tools::CorrectFace2d),
                    R"#(test if UV representation of <oldFace> is good (i.e. face is closed in 2d). if face is not closed , this method will try to close such face and will return corrected edges in the <aMapOfCorrect2dEdges>. Parameter <aSourceShapes> used to fix the edge (or wires) which should be correct (Corrector used it as a start shapes). NOTE : Parameter corrFace doesn't mean anything. If you want to use this method , rebuild resulting face after by yourself using corrected edges.)#"  , py::arg("oldFace"),  py::arg("corrFace"),  py::arg("aSourceShapes"),  py::arg("aMapOfCorrect2dEdges"))
        .def_static("CorrectTolerances_s",
                    (void (*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&TopOpeBRepBuild_Tools::CorrectTolerances),
                    R"#(None)#"  , py::arg("aS"),  py::arg("aTolMax")=static_cast<const Standard_Real>(0.0001))
        .def_static("CorrectCurveOnSurface_s",
                    (void (*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&TopOpeBRepBuild_Tools::CorrectCurveOnSurface),
                    R"#(None)#"  , py::arg("aS"),  py::arg("aTolMax")=static_cast<const Standard_Real>(0.0001))
        .def_static("CorrectPointOnCurve_s",
                    (void (*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&TopOpeBRepBuild_Tools::CorrectPointOnCurve),
                    R"#(None)#"  , py::arg("aS"),  py::arg("aTolMax")=static_cast<const Standard_Real>(0.0001))
        .def_static("CheckFaceClosed2d_s",
                    (Standard_Boolean (*)( const TopoDS_Face &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face &  ) >(&TopOpeBRepBuild_Tools::CheckFaceClosed2d),
                    R"#(Checks if <theFace> has the properly closed in 2D boundary(ies))#"  , py::arg("theFace"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<TopOpeBRepBuild_Tools2d , shared_ptr<TopOpeBRepBuild_Tools2d>>(m,"TopOpeBRepBuild_Tools2d");

    static_cast<py::class_<TopOpeBRepBuild_Tools2d , shared_ptr<TopOpeBRepBuild_Tools2d>  >>(m.attr("TopOpeBRepBuild_Tools2d"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakeMapOfShapeVertexInfo_s",
                    (void (*)( const TopoDS_Wire & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepBuild_VertexInfo, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Wire & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepBuild_VertexInfo, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Tools2d::MakeMapOfShapeVertexInfo),
                    R"#(None)#"  , py::arg("aWire"),  py::arg("aMap"))
        .def_static("DumpMapOfShapeVertexInfo_s",
                    (void (*)(  const NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepBuild_VertexInfo, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)(  const NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepBuild_VertexInfo, TopTools_ShapeMapHasher> &  ) >(&TopOpeBRepBuild_Tools2d::DumpMapOfShapeVertexInfo),
                    R"#(None)#"  , py::arg("aMap"))
        .def_static("Path_s",
                    (void (*)( const TopoDS_Wire & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (*)( const TopoDS_Wire & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Tools2d::Path),
                    R"#(None)#"  , py::arg("aWire"),  py::arg("aResList"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_VertexInfo , shared_ptr<TopOpeBRepBuild_VertexInfo>  >>(m.attr("TopOpeBRepBuild_VertexInfo"))
        .def(py::init<  >()  )
    // methods
        .def("SetVertex",
             (void (TopOpeBRepBuild_VertexInfo::*)( const TopoDS_Vertex &  ) ) static_cast<void (TopOpeBRepBuild_VertexInfo::*)( const TopoDS_Vertex &  ) >(&TopOpeBRepBuild_VertexInfo::SetVertex),
             R"#(None)#"  , py::arg("aV"))
        .def("Vertex",
             (const TopoDS_Vertex & (TopOpeBRepBuild_VertexInfo::*)() const) static_cast<const TopoDS_Vertex & (TopOpeBRepBuild_VertexInfo::*)() const>(&TopOpeBRepBuild_VertexInfo::Vertex),
             R"#(None)#" )
        .def("SetSmart",
             (void (TopOpeBRepBuild_VertexInfo::*)( const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_VertexInfo::*)( const Standard_Boolean  ) >(&TopOpeBRepBuild_VertexInfo::SetSmart),
             R"#(None)#"  , py::arg("aFlag"))
        .def("Smart",
             (Standard_Boolean (TopOpeBRepBuild_VertexInfo::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_VertexInfo::*)() const>(&TopOpeBRepBuild_VertexInfo::Smart),
             R"#(None)#" )
        .def("NbCases",
             (Standard_Integer (TopOpeBRepBuild_VertexInfo::*)() const) static_cast<Standard_Integer (TopOpeBRepBuild_VertexInfo::*)() const>(&TopOpeBRepBuild_VertexInfo::NbCases),
             R"#(None)#" )
        .def("FoundOut",
             (Standard_Integer (TopOpeBRepBuild_VertexInfo::*)() const) static_cast<Standard_Integer (TopOpeBRepBuild_VertexInfo::*)() const>(&TopOpeBRepBuild_VertexInfo::FoundOut),
             R"#(None)#" )
        .def("AddIn",
             (void (TopOpeBRepBuild_VertexInfo::*)( const TopoDS_Edge &  ) ) static_cast<void (TopOpeBRepBuild_VertexInfo::*)( const TopoDS_Edge &  ) >(&TopOpeBRepBuild_VertexInfo::AddIn),
             R"#(None)#"  , py::arg("anE"))
        .def("AddOut",
             (void (TopOpeBRepBuild_VertexInfo::*)( const TopoDS_Edge &  ) ) static_cast<void (TopOpeBRepBuild_VertexInfo::*)( const TopoDS_Edge &  ) >(&TopOpeBRepBuild_VertexInfo::AddOut),
             R"#(None)#"  , py::arg("anE"))
        .def("SetCurrentIn",
             (void (TopOpeBRepBuild_VertexInfo::*)( const TopoDS_Edge &  ) ) static_cast<void (TopOpeBRepBuild_VertexInfo::*)( const TopoDS_Edge &  ) >(&TopOpeBRepBuild_VertexInfo::SetCurrentIn),
             R"#(None)#"  , py::arg("anE"))
        .def("EdgesIn",
             (const TopTools_IndexedMapOfOrientedShape & (TopOpeBRepBuild_VertexInfo::*)() const) static_cast<const TopTools_IndexedMapOfOrientedShape & (TopOpeBRepBuild_VertexInfo::*)() const>(&TopOpeBRepBuild_VertexInfo::EdgesIn),
             R"#(None)#" )
        .def("EdgesOut",
             (const TopTools_IndexedMapOfOrientedShape & (TopOpeBRepBuild_VertexInfo::*)() const) static_cast<const TopTools_IndexedMapOfOrientedShape & (TopOpeBRepBuild_VertexInfo::*)() const>(&TopOpeBRepBuild_VertexInfo::EdgesOut),
             R"#(None)#" )
        .def("ChangeEdgesOut",
             (TopTools_IndexedMapOfOrientedShape & (TopOpeBRepBuild_VertexInfo::*)() ) static_cast<TopTools_IndexedMapOfOrientedShape & (TopOpeBRepBuild_VertexInfo::*)() >(&TopOpeBRepBuild_VertexInfo::ChangeEdgesOut),
             R"#(None)#" )
        .def("Dump",
             (void (TopOpeBRepBuild_VertexInfo::*)() const) static_cast<void (TopOpeBRepBuild_VertexInfo::*)() const>(&TopOpeBRepBuild_VertexInfo::Dump),
             R"#(None)#" )
        .def("CurrentOut",
             (const TopoDS_Edge & (TopOpeBRepBuild_VertexInfo::*)() ) static_cast<const TopoDS_Edge & (TopOpeBRepBuild_VertexInfo::*)() >(&TopOpeBRepBuild_VertexInfo::CurrentOut),
             R"#(None)#" )
        .def("AppendPassed",
             (void (TopOpeBRepBuild_VertexInfo::*)( const TopoDS_Edge &  ) ) static_cast<void (TopOpeBRepBuild_VertexInfo::*)( const TopoDS_Edge &  ) >(&TopOpeBRepBuild_VertexInfo::AppendPassed),
             R"#(None)#"  , py::arg("anE"))
        .def("RemovePassed",
             (void (TopOpeBRepBuild_VertexInfo::*)() ) static_cast<void (TopOpeBRepBuild_VertexInfo::*)() >(&TopOpeBRepBuild_VertexInfo::RemovePassed),
             R"#(None)#" )
        .def("ListPassed",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_VertexInfo::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_VertexInfo::*)() const>(&TopOpeBRepBuild_VertexInfo::ListPassed),
             R"#(None)#" )
        .def("Prepare",
             (void (TopOpeBRepBuild_VertexInfo::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_VertexInfo::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_VertexInfo::Prepare),
             R"#(None)#"  , py::arg("aL"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_WireToFace , shared_ptr<TopOpeBRepBuild_WireToFace>  >>(m.attr("TopOpeBRepBuild_WireToFace"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (TopOpeBRepBuild_WireToFace::*)() ) static_cast<void (TopOpeBRepBuild_WireToFace::*)() >(&TopOpeBRepBuild_WireToFace::Init),
             R"#(None)#" )
        .def("AddWire",
             (void (TopOpeBRepBuild_WireToFace::*)( const TopoDS_Wire &  ) ) static_cast<void (TopOpeBRepBuild_WireToFace::*)( const TopoDS_Wire &  ) >(&TopOpeBRepBuild_WireToFace::AddWire),
             R"#(None)#"  , py::arg("W"))
        .def("MakeFaces",
             (void (TopOpeBRepBuild_WireToFace::*)( const TopoDS_Face & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_WireToFace::*)( const TopoDS_Face & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_WireToFace::MakeFaces),
             R"#(None)#"  , py::arg("F"),  py::arg("LF"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_Area1dBuilder , shared_ptr<TopOpeBRepBuild_Area1dBuilder>  , TopOpeBRepBuild_AreaBuilder >>(m.attr("TopOpeBRepBuild_Area1dBuilder"))
        .def(py::init<  >()  )
        .def(py::init< TopOpeBRepBuild_PaveSet &,TopOpeBRepBuild_PaveClassifier &,const Standard_Boolean >()  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("InitAreaBuilder",
             (void (TopOpeBRepBuild_Area1dBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_Area1dBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_Area1dBuilder::InitAreaBuilder),
             R"#(Sets a Area1dBuilder to find the areas of the shapes described by <LS> using the classifier <LC>.)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ADD_Loop_TO_LISTOFLoop",
             (void (TopOpeBRepBuild_Area1dBuilder::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_Area1dBuilder::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_Area1dBuilder::ADD_Loop_TO_LISTOFLoop),
             R"#(None)#"  , py::arg("L"),  py::arg("LOL"),  py::arg("s")=static_cast<const Standard_Address>(NULL))
        .def("REM_Loop_FROM_LISTOFLoop",
             (void (TopOpeBRepBuild_Area1dBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >::Iterator & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_Area1dBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >::Iterator & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address  ) const>(&TopOpeBRepBuild_Area1dBuilder::REM_Loop_FROM_LISTOFLoop),
             R"#(None)#"  , py::arg("ITLOL"),  py::arg("LOL"),  py::arg("s")=static_cast<const Standard_Address>(NULL))
        .def("ADD_LISTOFLoop_TO_LISTOFLoop",
             (void (TopOpeBRepBuild_Area1dBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address ,  const Standard_Address ,  const Standard_Address  ) const) static_cast<void (TopOpeBRepBuild_Area1dBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & ,  const Standard_Address ,  const Standard_Address ,  const Standard_Address  ) const>(&TopOpeBRepBuild_Area1dBuilder::ADD_LISTOFLoop_TO_LISTOFLoop),
             R"#(None)#"  , py::arg("LOL1"),  py::arg("LOL2"),  py::arg("s")=static_cast<const Standard_Address>(NULL),  py::arg("s1")=static_cast<const Standard_Address>(NULL),  py::arg("s2")=static_cast<const Standard_Address>(NULL))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("DumpList_s",
                    (void (*)(  const NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > &  ) ) static_cast<void (*)(  const NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > &  ) >(&TopOpeBRepBuild_Area1dBuilder::DumpList),
                    R"#(None)#"  , py::arg("L"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_Area2dBuilder , shared_ptr<TopOpeBRepBuild_Area2dBuilder>  , TopOpeBRepBuild_AreaBuilder >>(m.attr("TopOpeBRepBuild_Area2dBuilder"))
        .def(py::init<  >()  )
        .def(py::init< TopOpeBRepBuild_LoopSet &,TopOpeBRepBuild_LoopClassifier &,const Standard_Boolean >()  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("InitAreaBuilder",
             (void (TopOpeBRepBuild_Area2dBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_Area2dBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_Area2dBuilder::InitAreaBuilder),
             R"#(Sets a Area1dBuilder to find the areas of the shapes described by <LS> using the classifier <LC>.)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_Area3dBuilder , shared_ptr<TopOpeBRepBuild_Area3dBuilder>  , TopOpeBRepBuild_AreaBuilder >>(m.attr("TopOpeBRepBuild_Area3dBuilder"))
        .def(py::init<  >()  )
        .def(py::init< TopOpeBRepBuild_LoopSet &,TopOpeBRepBuild_LoopClassifier &,const Standard_Boolean >()  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("InitAreaBuilder",
             (void (TopOpeBRepBuild_Area3dBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_Area3dBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_Area3dBuilder::InitAreaBuilder),
             R"#(Sets a Area1dBuilder to find the areas of the shapes described by <LS> using the classifier <LC>.)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_Builder1 , shared_ptr<TopOpeBRepBuild_Builder1>  , TopOpeBRepBuild_Builder >>(m.attr("TopOpeBRepBuild_Builder1"))
        .def(py::init< const TopOpeBRepDS_BuildTool & >()  , py::arg("BT") )
    // methods
        .def("Clear",
             (void (TopOpeBRepBuild_Builder1::*)() ) static_cast<void (TopOpeBRepBuild_Builder1::*)() >(&TopOpeBRepBuild_Builder1::Clear),
             R"#(Removes all splits and merges already performed. Does NOT clear the handled DS (except ShapeWithStatesMaps).)#" )
        .def("Perform",
             (void (TopOpeBRepBuild_Builder1::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) >(&TopOpeBRepBuild_Builder1::Perform),
             R"#(None)#"  , py::arg("HDS"))
        .def("Perform",
             (void (TopOpeBRepBuild_Builder1::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder1::Perform),
             R"#(None)#"  , py::arg("HDS"),  py::arg("S1"),  py::arg("S2"))
        .def("MergeKPart",
             (void (TopOpeBRepBuild_Builder1::*)() ) static_cast<void (TopOpeBRepBuild_Builder1::*)() >(&TopOpeBRepBuild_Builder1::MergeKPart),
             R"#(None)#" )
        .def("MergeKPart",
             (void (TopOpeBRepBuild_Builder1::*)( const TopAbs_State ,  const TopAbs_State  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopAbs_State ,  const TopAbs_State  ) >(&TopOpeBRepBuild_Builder1::MergeKPart),
             R"#(None)#"  , py::arg("TB1"),  py::arg("TB2"))
        .def("GFillSolidSFS",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder1::GFillSolidSFS),
             R"#(None)#"  , py::arg("SO1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GFillShellSFS",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder1::GFillShellSFS),
             R"#(None)#"  , py::arg("SH1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GWESMakeFaces",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_WireEdgeSet & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,  TopOpeBRepBuild_WireEdgeSet & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder1::GWESMakeFaces),
             R"#(None)#"  , py::arg("FF"),  py::arg("WES"),  py::arg("LOF"))
        .def("GFillFaceNotSameDomSFS",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder1::GFillFaceNotSameDomSFS),
             R"#(None)#"  , py::arg("F1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GFillFaceNotSameDomWES",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder1::GFillFaceNotSameDomWES),
             R"#(None)#"  , py::arg("F1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("WES"))
        .def("GFillWireNotSameDomWES",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder1::GFillWireNotSameDomWES),
             R"#(None)#"  , py::arg("W1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("WES"))
        .def("GFillEdgeNotSameDomWES",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder1::GFillEdgeNotSameDomWES),
             R"#(None)#"  , py::arg("E1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("WES"))
        .def("GFillFaceSameDomSFS",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_ShellFaceSet &  ) >(&TopOpeBRepBuild_Builder1::GFillFaceSameDomSFS),
             R"#(None)#"  , py::arg("F1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GFillFaceSameDomWES",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder1::GFillFaceSameDomWES),
             R"#(None)#"  , py::arg("F1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("WES"))
        .def("GFillWireSameDomWES",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder1::GFillWireSameDomWES),
             R"#(None)#"  , py::arg("W1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("WES"))
        .def("GFillEdgeSameDomWES",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder1::GFillEdgeSameDomWES),
             R"#(None)#"  , py::arg("E1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("WES"))
        .def("PerformONParts",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const TopOpeBRepBuild_GTopo & ,  TopOpeBRepBuild_WireEdgeSet &  ) >(&TopOpeBRepBuild_Builder1::PerformONParts),
             R"#(None)#"  , py::arg("F"),  py::arg("SDfaces"),  py::arg("G"),  py::arg("WES"))
        .def("PerformPieceOn2D",
             (Standard_Integer (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<Standard_Integer (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder1::PerformPieceOn2D),
             R"#(None)#"  , py::arg("aPieceObj"),  py::arg("aFaceObj"),  py::arg("aEdgeObj"),  py::arg("aListOfPieces"),  py::arg("aListOfFaces"),  py::arg("aListOfPiecesOut2d"))
        .def("TwoPiecesON",
             (Standard_Integer (TopOpeBRepBuild_Builder1::*)(  const NCollection_Sequence<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<Standard_Integer (TopOpeBRepBuild_Builder1::*)(  const NCollection_Sequence<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) >(&TopOpeBRepBuild_Builder1::TwoPiecesON),
             R"#(None)#"  , py::arg("aSeq"),  py::arg("aListOfPieces"),  py::arg("aListOfFaces"),  py::arg("aListOfPiecesOut2d"))
        .def("CorrectResult2d",
             (Standard_Integer (TopOpeBRepBuild_Builder1::*)( TopoDS_Shape &  ) ) static_cast<Standard_Integer (TopOpeBRepBuild_Builder1::*)( TopoDS_Shape &  ) >(&TopOpeBRepBuild_Builder1::CorrectResult2d),
             R"#(None)#"  , py::arg("aResult"))
    // methods using call by reference i.s.o. return
        .def("PerformPieceIn2D",
             []( TopOpeBRepBuild_Builder1 &self , const TopoDS_Edge & aPieceToPerform,const TopoDS_Edge & aOriginalEdge,const TopoDS_Face & edgeFace,const TopoDS_Face & toFace,const TopOpeBRepBuild_GTopo & G ){ Standard_Boolean  keep; self.PerformPieceIn2D(aPieceToPerform,aOriginalEdge,edgeFace,toFace,G,keep); return std::make_tuple(keep); },
             R"#(None)#"  , py::arg("aPieceToPerform"),  py::arg("aOriginalEdge"),  py::arg("edgeFace"),  py::arg("toFace"),  py::arg("G"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_CompositeClassifier , shared_ptr<TopOpeBRepBuild_CompositeClassifier> ,Py_TopOpeBRepBuild_CompositeClassifier , TopOpeBRepBuild_LoopClassifier >>(m.attr("TopOpeBRepBuild_CompositeClassifier"))
    // methods
        .def("Compare",
             (TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  const opencascade::handle<TopOpeBRepBuild_Loop> &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  const opencascade::handle<TopOpeBRepBuild_Loop> &  ) >(&TopOpeBRepBuild_CompositeClassifier::Compare),
             R"#(None)#"  , py::arg("L1"),  py::arg("L2"))
        .def("CompareShapes",
             (TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_CompositeClassifier::CompareShapes),
             R"#(classify shape <B1> with shape <B2>)#"  , py::arg("B1"),  py::arg("B2"))
        .def("CompareElementToShape",
             (TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_CompositeClassifier::CompareElementToShape),
             R"#(classify element <E> with shape <B>)#"  , py::arg("E"),  py::arg("B"))
        .def("ResetShape",
             (void (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_CompositeClassifier::ResetShape),
             R"#(prepare classification involving shape <B> calls ResetElement on first element of <B>)#"  , py::arg("B"))
        .def("ResetElement",
             (void (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_CompositeClassifier::ResetElement),
             R"#(prepare classification involving element <E>.)#"  , py::arg("E"))
        .def("CompareElement",
             (Standard_Boolean (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_CompositeClassifier::CompareElement),
             R"#(Add element <E> in the set of elements used in classification. Returns FALSE if the element <E> has been already added to the set of elements, otherwise returns TRUE.)#"  , py::arg("E"))
        .def("State",
             (TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)() ) static_cast<TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)() >(&TopOpeBRepBuild_CompositeClassifier::State),
             R"#(Returns state of classification of 2D point, defined by ResetElement, with the current set of elements, defined by Compare.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_Pave ,opencascade::handle<TopOpeBRepBuild_Pave>  , TopOpeBRepBuild_Loop >>(m.attr("TopOpeBRepBuild_Pave"))
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Boolean >()  , py::arg("V"),  py::arg("P"),  py::arg("bound") )
    // methods
        .def("HasSameDomain",
             (void (TopOpeBRepBuild_Pave::*)( const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_Pave::*)( const Standard_Boolean  ) >(&TopOpeBRepBuild_Pave::HasSameDomain),
             R"#(None)#"  , py::arg("b"))
        .def("SameDomain",
             (void (TopOpeBRepBuild_Pave::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_Pave::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_Pave::SameDomain),
             R"#(None)#"  , py::arg("VSD"))
        .def("HasSameDomain",
             (Standard_Boolean (TopOpeBRepBuild_Pave::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_Pave::*)() const>(&TopOpeBRepBuild_Pave::HasSameDomain),
             R"#(None)#" )
        .def("SameDomain",
             (const TopoDS_Shape & (TopOpeBRepBuild_Pave::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_Pave::*)() const>(&TopOpeBRepBuild_Pave::SameDomain),
             R"#(None)#" )
        .def("Vertex",
             (const TopoDS_Shape & (TopOpeBRepBuild_Pave::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_Pave::*)() const>(&TopOpeBRepBuild_Pave::Vertex),
             R"#(None)#" )
        .def("ChangeVertex",
             (TopoDS_Shape & (TopOpeBRepBuild_Pave::*)() ) static_cast<TopoDS_Shape & (TopOpeBRepBuild_Pave::*)() >(&TopOpeBRepBuild_Pave::ChangeVertex),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (TopOpeBRepBuild_Pave::*)() const) static_cast<Standard_Real (TopOpeBRepBuild_Pave::*)() const>(&TopOpeBRepBuild_Pave::Parameter),
             R"#(None)#" )
        .def("Parameter",
             (void (TopOpeBRepBuild_Pave::*)( const Standard_Real  ) ) static_cast<void (TopOpeBRepBuild_Pave::*)( const Standard_Real  ) >(&TopOpeBRepBuild_Pave::Parameter),
             R"#(None)#"  , py::arg("Par"))
        .def("InterferenceType",
             (TopOpeBRepDS_Kind & (TopOpeBRepBuild_Pave::*)() ) static_cast<TopOpeBRepDS_Kind & (TopOpeBRepBuild_Pave::*)() >(&TopOpeBRepBuild_Pave::InterferenceType),
             R"#(None)#" )
        .def("IsShape",
             (Standard_Boolean (TopOpeBRepBuild_Pave::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_Pave::*)() const>(&TopOpeBRepBuild_Pave::IsShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRepBuild_Pave::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_Pave::*)() const>(&TopOpeBRepBuild_Pave::Shape),
             R"#(None)#" )
        .def("Dump",
             (void (TopOpeBRepBuild_Pave::*)() const) static_cast<void (TopOpeBRepBuild_Pave::*)() const>(&TopOpeBRepBuild_Pave::Dump),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepBuild_Pave::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepBuild_Pave::*)() const>(&TopOpeBRepBuild_Pave::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepBuild_Pave::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepBuild_Pave::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_PaveClassifier , shared_ptr<TopOpeBRepBuild_PaveClassifier>  , TopOpeBRepBuild_LoopClassifier >>(m.attr("TopOpeBRepBuild_PaveClassifier"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("E") )
    // methods
        .def("Compare",
             (TopAbs_State (TopOpeBRepBuild_PaveClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  const opencascade::handle<TopOpeBRepBuild_Loop> &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_PaveClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  const opencascade::handle<TopOpeBRepBuild_Loop> &  ) >(&TopOpeBRepBuild_PaveClassifier::Compare),
             R"#(Returns state of vertex <L1> compared with <L2>.)#"  , py::arg("L1"),  py::arg("L2"))
        .def("SetFirstParameter",
             (void (TopOpeBRepBuild_PaveClassifier::*)( const Standard_Real  ) ) static_cast<void (TopOpeBRepBuild_PaveClassifier::*)( const Standard_Real  ) >(&TopOpeBRepBuild_PaveClassifier::SetFirstParameter),
             R"#(None)#"  , py::arg("P"))
        .def("ClosedVertices",
             (void (TopOpeBRepBuild_PaveClassifier::*)( const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_PaveClassifier::*)( const Standard_Boolean  ) >(&TopOpeBRepBuild_PaveClassifier::ClosedVertices),
             R"#(None)#"  , py::arg("B"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("AdjustCase_s",
                    (Standard_Real (*)( const Standard_Real ,  const TopAbs_Orientation ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Integer &  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const TopAbs_Orientation ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Integer &  ) >(&TopOpeBRepBuild_PaveClassifier::AdjustCase),
                    R"#(None)#"  , py::arg("p1"),  py::arg("o"),  py::arg("first"),  py::arg("period"),  py::arg("tol"),  py::arg("cas"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_PaveSet , shared_ptr<TopOpeBRepBuild_PaveSet>  , TopOpeBRepBuild_LoopSet >>(m.attr("TopOpeBRepBuild_PaveSet"))
        .def(py::init< const TopoDS_Shape & >()  , py::arg("E") )
    // methods
        .def("RemovePV",
             (void (TopOpeBRepBuild_PaveSet::*)( const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_PaveSet::*)( const Standard_Boolean  ) >(&TopOpeBRepBuild_PaveSet::RemovePV),
             R"#(None)#"  , py::arg("B"))
        .def("Append",
             (void (TopOpeBRepBuild_PaveSet::*)( const opencascade::handle<TopOpeBRepBuild_Pave> &  ) ) static_cast<void (TopOpeBRepBuild_PaveSet::*)( const opencascade::handle<TopOpeBRepBuild_Pave> &  ) >(&TopOpeBRepBuild_PaveSet::Append),
             R"#(Add <PV> in the Pave set.)#"  , py::arg("PV"))
        .def("InitLoop",
             (void (TopOpeBRepBuild_PaveSet::*)() ) static_cast<void (TopOpeBRepBuild_PaveSet::*)() >(&TopOpeBRepBuild_PaveSet::InitLoop),
             R"#(None)#" )
        .def("MoreLoop",
             (Standard_Boolean (TopOpeBRepBuild_PaveSet::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_PaveSet::*)() const>(&TopOpeBRepBuild_PaveSet::MoreLoop),
             R"#(None)#" )
        .def("NextLoop",
             (void (TopOpeBRepBuild_PaveSet::*)() ) static_cast<void (TopOpeBRepBuild_PaveSet::*)() >(&TopOpeBRepBuild_PaveSet::NextLoop),
             R"#(None)#" )
        .def("Loop",
             (opencascade::handle<TopOpeBRepBuild_Loop> (TopOpeBRepBuild_PaveSet::*)() const) static_cast<opencascade::handle<TopOpeBRepBuild_Loop> (TopOpeBRepBuild_PaveSet::*)() const>(&TopOpeBRepBuild_PaveSet::Loop),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (TopOpeBRepBuild_PaveSet::*)() const) static_cast<const TopoDS_Edge & (TopOpeBRepBuild_PaveSet::*)() const>(&TopOpeBRepBuild_PaveSet::Edge),
             R"#(None)#" )
        .def("HasEqualParameters",
             (Standard_Boolean (TopOpeBRepBuild_PaveSet::*)() ) static_cast<Standard_Boolean (TopOpeBRepBuild_PaveSet::*)() >(&TopOpeBRepBuild_PaveSet::HasEqualParameters),
             R"#(None)#" )
        .def("EqualParameters",
             (Standard_Real (TopOpeBRepBuild_PaveSet::*)() const) static_cast<Standard_Real (TopOpeBRepBuild_PaveSet::*)() const>(&TopOpeBRepBuild_PaveSet::EqualParameters),
             R"#(None)#" )
        .def("ClosedVertices",
             (Standard_Boolean (TopOpeBRepBuild_PaveSet::*)() ) static_cast<Standard_Boolean (TopOpeBRepBuild_PaveSet::*)() >(&TopOpeBRepBuild_PaveSet::ClosedVertices),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SortPave_s",
                    (void (*)(  const NCollection_List<opencascade::handle<TopOpeBRepBuild_Pave> > & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Pave> > &  ) ) static_cast<void (*)(  const NCollection_List<opencascade::handle<TopOpeBRepBuild_Pave> > & ,  NCollection_List<opencascade::handle<TopOpeBRepBuild_Pave> > &  ) >(&TopOpeBRepBuild_PaveSet::SortPave),
                    R"#(None)#"  , py::arg("Lin"),  py::arg("Lout"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_ShellFaceSet , shared_ptr<TopOpeBRepBuild_ShellFaceSet>  , TopOpeBRepBuild_ShapeSet >>(m.attr("TopOpeBRepBuild_ShellFaceSet"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Address >()  , py::arg("S"),  py::arg("Addr")=static_cast<const Standard_Address>(NULL) )
    // methods
        .def("Solid",
             (const TopoDS_Solid & (TopOpeBRepBuild_ShellFaceSet::*)() const) static_cast<const TopoDS_Solid & (TopOpeBRepBuild_ShellFaceSet::*)() const>(&TopOpeBRepBuild_ShellFaceSet::Solid),
             R"#(None)#" )
        .def("AddShape",
             (void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShellFaceSet::AddShape),
             R"#(None)#"  , py::arg("S"))
        .def("AddStartElement",
             (void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShellFaceSet::AddStartElement),
             R"#(None)#"  , py::arg("S"))
        .def("AddElement",
             (void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShellFaceSet::AddElement),
             R"#(None)#"  , py::arg("S"))
        .def("DumpSS",
             (void (TopOpeBRepBuild_ShellFaceSet::*)() ) static_cast<void (TopOpeBRepBuild_ShellFaceSet::*)() >(&TopOpeBRepBuild_ShellFaceSet::DumpSS),
             R"#(None)#" )
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_ShellFaceSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_ShellFaceSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_ShellFaceSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_ShellFaceSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_WireEdgeSet , shared_ptr<TopOpeBRepBuild_WireEdgeSet>  , TopOpeBRepBuild_ShapeSet >>(m.attr("TopOpeBRepBuild_WireEdgeSet"))
        .def(py::init< const TopoDS_Shape &,const Standard_Address >()  , py::arg("F"),  py::arg("Addr")=static_cast<const Standard_Address>(NULL) )
    // methods
        .def("Face",
             (const TopoDS_Face & (TopOpeBRepBuild_WireEdgeSet::*)() const) static_cast<const TopoDS_Face & (TopOpeBRepBuild_WireEdgeSet::*)() const>(&TopOpeBRepBuild_WireEdgeSet::Face),
             R"#(value of field myFace)#" )
        .def("AddShape",
             (void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_WireEdgeSet::AddShape),
             R"#(None)#"  , py::arg("S"))
        .def("AddStartElement",
             (void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_WireEdgeSet::AddStartElement),
             R"#(None)#"  , py::arg("S"))
        .def("AddElement",
             (void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_WireEdgeSet::AddElement),
             R"#(None)#"  , py::arg("S"))
        .def("InitNeighbours",
             (void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_WireEdgeSet::InitNeighbours),
             R"#(None)#"  , py::arg("E"))
        .def("FindNeighbours",
             (void (TopOpeBRepBuild_WireEdgeSet::*)() ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)() >(&TopOpeBRepBuild_WireEdgeSet::FindNeighbours),
             R"#(Build the list of neighbour edges of edge myCurrentShape Initialize iterator of neighbour edges to edge myCurrentShape)#" )
        .def("MakeNeighboursList",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_WireEdgeSet::MakeNeighboursList),
             R"#(None)#"  , py::arg("E"),  py::arg("V"))
        .def("DumpSS",
             (void (TopOpeBRepBuild_WireEdgeSet::*)() ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)() >(&TopOpeBRepBuild_WireEdgeSet::DumpSS),
             R"#(None)#" )
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_WireEdgeSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_WireEdgeSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_WireEdgeSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)(  const NCollection_List<TopoDS_Shape> & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) const>(&TopOpeBRepBuild_WireEdgeSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
        .def_static("IsUVISO_s",
                    []( const TopoDS_Edge & E,const TopoDS_Face & F ){ Standard_Boolean  uiso; Standard_Boolean  viso; TopOpeBRepBuild_WireEdgeSet::IsUVISO(E,F,uiso,viso); return std::make_tuple(uiso,viso); },
                    R"#(None)#"  , py::arg("E"),  py::arg("F"))
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_EdgeBuilder , shared_ptr<TopOpeBRepBuild_EdgeBuilder>  , TopOpeBRepBuild_Area1dBuilder >>(m.attr("TopOpeBRepBuild_EdgeBuilder"))
        .def(py::init<  >()  )
        .def(py::init< TopOpeBRepBuild_PaveSet &,TopOpeBRepBuild_PaveClassifier &,const Standard_Boolean >()  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("InitEdgeBuilder",
             (void (TopOpeBRepBuild_EdgeBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_EdgeBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_EdgeBuilder::InitEdgeBuilder),
             R"#(None)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
        .def("InitEdge",
             (void (TopOpeBRepBuild_EdgeBuilder::*)() ) static_cast<void (TopOpeBRepBuild_EdgeBuilder::*)() >(&TopOpeBRepBuild_EdgeBuilder::InitEdge),
             R"#(None)#" )
        .def("MoreEdge",
             (Standard_Boolean (TopOpeBRepBuild_EdgeBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_EdgeBuilder::*)() const>(&TopOpeBRepBuild_EdgeBuilder::MoreEdge),
             R"#(None)#" )
        .def("NextEdge",
             (void (TopOpeBRepBuild_EdgeBuilder::*)() ) static_cast<void (TopOpeBRepBuild_EdgeBuilder::*)() >(&TopOpeBRepBuild_EdgeBuilder::NextEdge),
             R"#(None)#" )
        .def("InitVertex",
             (void (TopOpeBRepBuild_EdgeBuilder::*)() ) static_cast<void (TopOpeBRepBuild_EdgeBuilder::*)() >(&TopOpeBRepBuild_EdgeBuilder::InitVertex),
             R"#(None)#" )
        .def("MoreVertex",
             (Standard_Boolean (TopOpeBRepBuild_EdgeBuilder::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_EdgeBuilder::*)() const>(&TopOpeBRepBuild_EdgeBuilder::MoreVertex),
             R"#(None)#" )
        .def("NextVertex",
             (void (TopOpeBRepBuild_EdgeBuilder::*)() ) static_cast<void (TopOpeBRepBuild_EdgeBuilder::*)() >(&TopOpeBRepBuild_EdgeBuilder::NextVertex),
             R"#(None)#" )
        .def("Vertex",
             (const TopoDS_Shape & (TopOpeBRepBuild_EdgeBuilder::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_EdgeBuilder::*)() const>(&TopOpeBRepBuild_EdgeBuilder::Vertex),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (TopOpeBRepBuild_EdgeBuilder::*)() const) static_cast<Standard_Real (TopOpeBRepBuild_EdgeBuilder::*)() const>(&TopOpeBRepBuild_EdgeBuilder::Parameter),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_FaceAreaBuilder , shared_ptr<TopOpeBRepBuild_FaceAreaBuilder>  , TopOpeBRepBuild_Area2dBuilder >>(m.attr("TopOpeBRepBuild_FaceAreaBuilder"))
        .def(py::init<  >()  )
        .def(py::init< TopOpeBRepBuild_LoopSet &,TopOpeBRepBuild_LoopClassifier &,const Standard_Boolean >()  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("InitFaceAreaBuilder",
             (void (TopOpeBRepBuild_FaceAreaBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_FaceAreaBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_FaceAreaBuilder::InitFaceAreaBuilder),
             R"#(None)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_ShellFaceClassifier , shared_ptr<TopOpeBRepBuild_ShellFaceClassifier>  , TopOpeBRepBuild_CompositeClassifier >>(m.attr("TopOpeBRepBuild_ShellFaceClassifier"))
        .def(py::init< const TopOpeBRepBuild_BlockBuilder & >()  , py::arg("BB") )
    // methods
        .def("Clear",
             (void (TopOpeBRepBuild_ShellFaceClassifier::*)() ) static_cast<void (TopOpeBRepBuild_ShellFaceClassifier::*)() >(&TopOpeBRepBuild_ShellFaceClassifier::Clear),
             R"#(None)#" )
        .def("CompareShapes",
             (TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShellFaceClassifier::CompareShapes),
             R"#(classify shell <B1> with shell <B2>)#"  , py::arg("B1"),  py::arg("B2"))
        .def("CompareElementToShape",
             (TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShellFaceClassifier::CompareElementToShape),
             R"#(classify face <F> with shell <S>)#"  , py::arg("F"),  py::arg("S"))
        .def("ResetShape",
             (void (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShellFaceClassifier::ResetShape),
             R"#(prepare classification involving shell <S> calls ResetElement on first face of <S>)#"  , py::arg("S"))
        .def("ResetElement",
             (void (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShellFaceClassifier::ResetElement),
             R"#(prepare classification involving face <F> define 3D point (later used in Compare()) on first vertex of face <F>.)#"  , py::arg("F"))
        .def("CompareElement",
             (Standard_Boolean (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_ShellFaceClassifier::CompareElement),
             R"#(Add the face <F> in the set of faces used in 3D point classification. Returns FALSE if the face <F> has been already added to the set of faces, otherwise returns TRUE.)#"  , py::arg("F"))
        .def("State",
             (TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)() ) static_cast<TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)() >(&TopOpeBRepBuild_ShellFaceClassifier::State),
             R"#(Returns state of classification of 3D point, defined by ResetElement, with the current set of faces, defined by Compare.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_SolidAreaBuilder , shared_ptr<TopOpeBRepBuild_SolidAreaBuilder>  , TopOpeBRepBuild_Area3dBuilder >>(m.attr("TopOpeBRepBuild_SolidAreaBuilder"))
        .def(py::init<  >()  )
        .def(py::init< TopOpeBRepBuild_LoopSet &,TopOpeBRepBuild_LoopClassifier &,const Standard_Boolean >()  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("InitSolidAreaBuilder",
             (void (TopOpeBRepBuild_SolidAreaBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) ) static_cast<void (TopOpeBRepBuild_SolidAreaBuilder::*)( TopOpeBRepBuild_LoopSet & ,  TopOpeBRepBuild_LoopClassifier & ,  const Standard_Boolean  ) >(&TopOpeBRepBuild_SolidAreaBuilder::InitSolidAreaBuilder),
             R"#(None)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<TopOpeBRepBuild_WireEdgeClassifier , shared_ptr<TopOpeBRepBuild_WireEdgeClassifier>  , TopOpeBRepBuild_CompositeClassifier >>(m.attr("TopOpeBRepBuild_WireEdgeClassifier"))
        .def(py::init< const TopoDS_Shape &,const TopOpeBRepBuild_BlockBuilder & >()  , py::arg("F"),  py::arg("BB") )
    // methods
        .def("Compare",
             (TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  const opencascade::handle<TopOpeBRepBuild_Loop> &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & ,  const opencascade::handle<TopOpeBRepBuild_Loop> &  ) >(&TopOpeBRepBuild_WireEdgeClassifier::Compare),
             R"#(None)#"  , py::arg("L1"),  py::arg("L2"))
        .def("LoopToShape",
             (TopoDS_Shape (TopOpeBRepBuild_WireEdgeClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> &  ) ) static_cast<TopoDS_Shape (TopOpeBRepBuild_WireEdgeClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> &  ) >(&TopOpeBRepBuild_WireEdgeClassifier::LoopToShape),
             R"#(None)#"  , py::arg("L"))
        .def("CompareShapes",
             (TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_WireEdgeClassifier::CompareShapes),
             R"#(classify wire <B1> with wire <B2>)#"  , py::arg("B1"),  py::arg("B2"))
        .def("CompareElementToShape",
             (TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&TopOpeBRepBuild_WireEdgeClassifier::CompareElementToShape),
             R"#(classify edge <E> with wire <B>)#"  , py::arg("E"),  py::arg("B"))
        .def("ResetShape",
             (void (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_WireEdgeClassifier::ResetShape),
             R"#(prepare classification involving wire <B> calls ResetElement on first edge of <B>)#"  , py::arg("B"))
        .def("ResetElement",
             (void (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape &  ) ) static_cast<void (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_WireEdgeClassifier::ResetElement),
             R"#(prepare classification involving edge <E> define 2D point (later used in Compare()) on first vertex of edge <E>.)#"  , py::arg("E"))
        .def("CompareElement",
             (Standard_Boolean (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape &  ) >(&TopOpeBRepBuild_WireEdgeClassifier::CompareElement),
             R"#(Add the edge <E> in the set of edges used in 2D point classification.)#"  , py::arg("E"))
        .def("State",
             (TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)() ) static_cast<TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)() >(&TopOpeBRepBuild_WireEdgeClassifier::State),
             R"#(Returns state of classification of 2D point, defined by ResetElement, with the current set of edges, defined by Compare.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/TopOpeBRepBuild_WireEdgeClassifier.hxx
// ./opencascade/TopOpeBRepBuild_GTopo.hxx
// ./opencascade/TopOpeBRepBuild_ShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_PaveSet.hxx
// ./opencascade/TopOpeBRepBuild_Area2dBuilder.hxx
// ./opencascade/TopOpeBRepBuild_Tools.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_Builder.hxx
// ./opencascade/TopOpeBRepBuild_FuseFace.hxx
// ./opencascade/TopOpeBRepBuild_Pave.hxx
// ./opencascade/TopOpeBRepBuild_define.hxx
// ./opencascade/TopOpeBRepBuild_CompositeClassifier.hxx
// ./opencascade/TopOpeBRepBuild_ListOfListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_FaceBuilder.hxx
// ./opencascade/TopOpeBRepBuild_GIter.hxx
// ./opencascade/TopOpeBRepBuild_Area1dBuilder.hxx
// ./opencascade/TopOpeBRepBuild_Builder1.hxx
// ./opencascade/TopOpeBRepBuild_ListOfPave.hxx
// ./opencascade/TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo.hxx
// ./opencascade/TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_kpresu.hxx
// ./opencascade/TopOpeBRepBuild_SolidBuilder.hxx
// ./opencascade/TopOpeBRepBuild_LoopEnum.hxx
// ./opencascade/TopOpeBRepBuild_LoopClassifier.hxx
// ./opencascade/TopOpeBRepBuild_BlockBuilder.hxx
// ./opencascade/TopOpeBRepBuild_Area3dBuilder.hxx
// ./opencascade/TopOpeBRepBuild_ShellToSolid.hxx
// ./opencascade/TopOpeBRepBuild_SolidAreaBuilder.hxx
// ./opencascade/TopOpeBRepBuild_LoopSet.hxx
// ./opencascade/TopOpeBRepBuild_PaveClassifier.hxx
// ./opencascade/TopOpeBRepBuild_PWireEdgeSet.hxx
// ./opencascade/TopOpeBRepBuild_ListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_GTool.hxx
// ./opencascade/TopOpeBRepBuild_PBuilder.hxx
// ./opencascade/TopOpeBRepBuild_FaceAreaBuilder.hxx
// ./opencascade/TopOpeBRepBuild_EdgeBuilder.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfPave.hxx
// ./opencascade/TopOpeBRepBuild_BlockIterator.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_ListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_PGTopo.hxx
// ./opencascade/TopOpeBRepBuild_ShellFaceSet.hxx
// ./opencascade/TopOpeBRepBuild_AreaBuilder.hxx
// ./opencascade/TopOpeBRepBuild_ShapeSet.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_WireEdgeSet.hxx
// ./opencascade/TopOpeBRepBuild_CorrectFace2d.hxx
// ./opencascade/TopOpeBRepBuild_Tools2d.hxx
// ./opencascade/TopOpeBRepBuild_Loop.hxx
// ./opencascade/TopOpeBRepBuild_VertexInfo.hxx
// ./opencascade/TopOpeBRepBuild_HBuilder.hxx
// ./opencascade/TopOpeBRepBuild_WireToFace.hxx
// ./opencascade/TopOpeBRepBuild_BuilderON.hxx
// ./opencascade/TopOpeBRepBuild_ShellFaceClassifier.hxx

// operators

// register typdefs
    register_template_NCollection_List<TopOpeBRepBuild_ListOfLoop>(m,"TopOpeBRepBuild_ListOfListOfLoop");  
    register_template_NCollection_List<opencascade::handle<TopOpeBRepBuild_Pave> >(m,"TopOpeBRepBuild_ListOfPave");  
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepBuild_VertexInfo, TopTools_ShapeMapHasher>(m,"TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo");  
    register_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepBuild_ListOfShapeListOfShape, TopTools_ShapeMapHasher>(m,"TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape");  
    register_template_NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >(m,"TopOpeBRepBuild_ListOfLoop");  
    register_template_NCollection_List<TopOpeBRepBuild_ShapeListOfShape>(m,"TopOpeBRepBuild_ListOfShapeListOfShape");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
