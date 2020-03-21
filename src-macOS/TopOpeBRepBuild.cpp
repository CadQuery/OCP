
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Wire.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_BlockIterator.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_PaveClassifier.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom2d_Curve.hxx>
#include <Bnd_Box2d.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_PaveClassifier.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
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
#include <Standard_NoMoreObject.hxx>
#include <TopOpeBRepBuild_Builder.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_PaveSet.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopoDS_Shape.hxx>

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
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfListOfLoop.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfLoop.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfLoop.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfPave.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepBuild_ListOfPave.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"


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


    static_cast<py::class_<TopOpeBRepBuild_AreaBuilder , shared_ptr<TopOpeBRepBuild_AreaBuilder> >>(m.attr("TopOpeBRepBuild_AreaBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("InitAreaBuilder",
             (void (TopOpeBRepBuild_AreaBuilder::*)( TopOpeBRepBuild_LoopSet & , TopOpeBRepBuild_LoopClassifier & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepBuild_AreaBuilder::*)( TopOpeBRepBuild_LoopSet & , TopOpeBRepBuild_LoopClassifier & , const Standard_Boolean ) >(&TopOpeBRepBuild_AreaBuilder::InitAreaBuilder),
             R"#(Sets a AreaBuilder to find the areas on the shapes described by <LS> using the classifier <LC>.)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ADD_Loop_TO_LISTOFLoop",
             (void (TopOpeBRepBuild_AreaBuilder::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address ) const) static_cast<void (TopOpeBRepBuild_AreaBuilder::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address ) const>(&TopOpeBRepBuild_AreaBuilder::ADD_Loop_TO_LISTOFLoop),
             R"#(None)#"  , py::arg("L"),  py::arg("LOL"),  py::arg("s")=static_cast<const Standard_Address>(NULL))
        .def("REM_Loop_FROM_LISTOFLoop",
             (void (TopOpeBRepBuild_AreaBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >::Iterator & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address ) const) static_cast<void (TopOpeBRepBuild_AreaBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >::Iterator & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address ) const>(&TopOpeBRepBuild_AreaBuilder::REM_Loop_FROM_LISTOFLoop),
             R"#(None)#"  , py::arg("ITLOL"),  py::arg("LOL"),  py::arg("s")=static_cast<const Standard_Address>(NULL))
        .def("ADD_LISTOFLoop_TO_LISTOFLoop",
             (void (TopOpeBRepBuild_AreaBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address , const Standard_Address , const Standard_Address ) const) static_cast<void (TopOpeBRepBuild_AreaBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address , const Standard_Address , const Standard_Address ) const>(&TopOpeBRepBuild_AreaBuilder::ADD_LISTOFLoop_TO_LISTOFLoop),
             R"#(None)#"  , py::arg("LOL1"),  py::arg("LOL2"),  py::arg("s")=static_cast<const Standard_Address>(NULL),  py::arg("s1")=static_cast<const Standard_Address>(NULL),  py::arg("s2")=static_cast<const Standard_Address>(NULL))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_BlockBuilder , shared_ptr<TopOpeBRepBuild_BlockBuilder> >>(m.attr("TopOpeBRepBuild_BlockBuilder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_BlockIterator , shared_ptr<TopOpeBRepBuild_BlockIterator> >>(m.attr("TopOpeBRepBuild_BlockIterator"))
    // constructors
    // custom constructors
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
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_Builder , shared_ptr<TopOpeBRepBuild_Builder> >>(m.attr("TopOpeBRepBuild_Builder"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) >(&TopOpeBRepBuild_Builder::Perform),
             R"#(Stores the data structure <HDS>, Create shapes from the new geometries.)#"  , py::arg("HDS"))
        .def("Perform",
             (void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepBuild_Builder::Perform),
             R"#(Stores the data structure <HDS>, Create shapes from the new geometries, Evaluates if an operation performed on shapes S1,S2 is a particular case.)#"  , py::arg("HDS"),  py::arg("S1"),  py::arg("S2"))
        .def("Clear",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::Clear),
             R"#(Removes all splits and merges already performed. Does NOT clear the handled DS.)#" )
        .def("SplitSectionEdge",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_Builder::SplitSectionEdge),
             R"#(create parts ON solid of section edges)#"  , py::arg("E"))
        .def("MergeKPart",
             (void (TopOpeBRepBuild_Builder::*)() ) static_cast<void (TopOpeBRepBuild_Builder::*)() >(&TopOpeBRepBuild_Builder::MergeKPart),
             R"#(None)#" )
        .def("MergeKPart",
             (void (TopOpeBRepBuild_Builder::*)( const TopAbs_State , const TopAbs_State ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopAbs_State , const TopAbs_State ) >(&TopOpeBRepBuild_Builder::MergeKPart),
             R"#(None)#"  , py::arg("TB1"),  py::arg("TB2"))
        .def("GFillSolidSFS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const TopOpeBRepBuild_GTopo & , TopOpeBRepBuild_ShellFaceSet & ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const TopOpeBRepBuild_GTopo & , TopOpeBRepBuild_ShellFaceSet & ) >(&TopOpeBRepBuild_Builder::GFillSolidSFS),
             R"#(None)#"  , py::arg("SO1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GFillShellSFS",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const TopOpeBRepBuild_GTopo & , TopOpeBRepBuild_ShellFaceSet & ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const TopOpeBRepBuild_GTopo & , TopOpeBRepBuild_ShellFaceSet & ) >(&TopOpeBRepBuild_Builder::GFillShellSFS),
             R"#(None)#"  , py::arg("SH1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GWESMakeFaces",
             (void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & , TopOpeBRepBuild_WireEdgeSet & , NCollection_List<TopoDS_Shape> & ) ) static_cast<void (TopOpeBRepBuild_Builder::*)( const TopoDS_Shape & , TopOpeBRepBuild_WireEdgeSet & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepBuild_Builder::GWESMakeFaces),
             R"#(None)#"  , py::arg("FF"),  py::arg("WES"),  py::arg("LOF"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_BuilderON , shared_ptr<TopOpeBRepBuild_BuilderON> >>(m.attr("TopOpeBRepBuild_BuilderON"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_CorrectFace2d , shared_ptr<TopOpeBRepBuild_CorrectFace2d> >>(m.attr("TopOpeBRepBuild_CorrectFace2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_FaceBuilder , shared_ptr<TopOpeBRepBuild_FaceBuilder> >>(m.attr("TopOpeBRepBuild_FaceBuilder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_FuseFace , shared_ptr<TopOpeBRepBuild_FuseFace> >>(m.attr("TopOpeBRepBuild_FuseFace"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_List<TopoDS_Shape> &, const NCollection_List<TopoDS_Shape> &,const Standard_Integer >()  , py::arg("LIF"),  py::arg("LRF"),  py::arg("CXM") )
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_GIter , shared_ptr<TopOpeBRepBuild_GIter> >>(m.attr("TopOpeBRepBuild_GIter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRepBuild_GTool , shared_ptr<TopOpeBRepBuild_GTool>>(m,"TopOpeBRepBuild_GTool");

    static_cast<py::class_<TopOpeBRepBuild_GTool , shared_ptr<TopOpeBRepBuild_GTool> >>(m.attr("TopOpeBRepBuild_GTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_GTopo , shared_ptr<TopOpeBRepBuild_GTopo> >>(m.attr("TopOpeBRepBuild_GTopo"))
    // constructors
    // custom constructors
    // methods
        .def("Dump",
             (void (TopOpeBRepBuild_GTopo::*)( std::ostream & , const Standard_Address ) const) static_cast<void (TopOpeBRepBuild_GTopo::*)( std::ostream & , const Standard_Address ) const>(&TopOpeBRepBuild_GTopo::Dump),
             R"#(None)#"  , py::arg("OS"),  py::arg("s")=static_cast<const Standard_Address>(NULL))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_HBuilder ,opencascade::handle<TopOpeBRepBuild_HBuilder> , Standard_Transient>>(m.attr("TopOpeBRepBuild_HBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepBuild_HBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepBuild_HBuilder::*)() const>(&TopOpeBRepBuild_HBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepBuild_HBuilder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_Loop ,opencascade::handle<TopOpeBRepBuild_Loop> , Standard_Transient>>(m.attr("TopOpeBRepBuild_Loop"))
    // constructors
    // custom constructors
    // methods
        .def("IsShape",
             (Standard_Boolean (TopOpeBRepBuild_Loop::*)() const) static_cast<Standard_Boolean (TopOpeBRepBuild_Loop::*)() const>(&TopOpeBRepBuild_Loop::IsShape),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRepBuild_Loop::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepBuild_Loop::*)() const>(&TopOpeBRepBuild_Loop::Shape),
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_LoopClassifier , shared_ptr<TopOpeBRepBuild_LoopClassifier>,Py_TopOpeBRepBuild_LoopClassifier >>(m.attr("TopOpeBRepBuild_LoopClassifier"))
    // constructors
    // custom constructors
    // methods
        .def("Compare",
             (TopAbs_State (TopOpeBRepBuild_LoopClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , const opencascade::handle<TopOpeBRepBuild_Loop> & ) ) static_cast<TopAbs_State (TopOpeBRepBuild_LoopClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , const opencascade::handle<TopOpeBRepBuild_Loop> & ) >(&TopOpeBRepBuild_LoopClassifier::Compare),
             R"#(Returns the state of loop <L1> compared with loop <L2>.)#"  , py::arg("L1"),  py::arg("L2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_LoopSet , shared_ptr<TopOpeBRepBuild_LoopSet> >>(m.attr("TopOpeBRepBuild_LoopSet"))
    // constructors
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_ShapeListOfShape , shared_ptr<TopOpeBRepBuild_ShapeListOfShape> >>(m.attr("TopOpeBRepBuild_ShapeListOfShape"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_ShapeSet , shared_ptr<TopOpeBRepBuild_ShapeSet> >>(m.attr("TopOpeBRepBuild_ShapeSet"))
    // constructors
    // custom constructors
    // methods
        .def("AddShape",
             (void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShapeSet::AddShape),
             R"#(Adds <S> to the list of shapes. (wires or shells).)#"  , py::arg("S"))
        .def("AddStartElement",
             (void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShapeSet::AddStartElement),
             R"#((S is a face or edge) Add S to the list of starting shapes used for reconstructions. apply AddElement(S).)#"  , py::arg("S"))
        .def("AddElement",
             (void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShapeSet::AddElement),
             R"#(for each subshape SE of S of type mySubShapeType - Add subshapes of S to the map of subshapes (mySubShapeMap) - Add S to the list of shape incident to subshapes of S.)#"  , py::arg("S"))
        .def("InitNeighbours",
             (void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShapeSet::InitNeighbours),
             R"#(None)#"  , py::arg("S"))
        .def("FindNeighbours",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::FindNeighbours),
             R"#(Build the list of neighbour shapes of myCurrentShape (neighbour shapes and myCurrentShapes are of type t) Initialize myIncidentShapesIter on neighbour shapes.)#" )
        .def("MakeNeighboursList",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShapeSet::MakeNeighboursList),
             R"#(None)#"  , py::arg("E"),  py::arg("V"))
        .def("DumpSS",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::DumpSS),
             R"#(None)#" )
        .def("DumpBB",
             (void (TopOpeBRepBuild_ShapeSet::*)() ) static_cast<void (TopOpeBRepBuild_ShapeSet::*)() >(&TopOpeBRepBuild_ShapeSet::DumpBB),
             R"#(None)#" )
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_ShapeSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_ShapeSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_ShapeSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShapeSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_ShapeSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_ShellToSolid , shared_ptr<TopOpeBRepBuild_ShellToSolid> >>(m.attr("TopOpeBRepBuild_ShellToSolid"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_SolidBuilder , shared_ptr<TopOpeBRepBuild_SolidBuilder> >>(m.attr("TopOpeBRepBuild_SolidBuilder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRepBuild_Tools , shared_ptr<TopOpeBRepBuild_Tools>>(m,"TopOpeBRepBuild_Tools");

    static_cast<py::class_<TopOpeBRepBuild_Tools , shared_ptr<TopOpeBRepBuild_Tools> >>(m.attr("TopOpeBRepBuild_Tools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRepBuild_Tools2d , shared_ptr<TopOpeBRepBuild_Tools2d>>(m,"TopOpeBRepBuild_Tools2d");

    static_cast<py::class_<TopOpeBRepBuild_Tools2d , shared_ptr<TopOpeBRepBuild_Tools2d> >>(m.attr("TopOpeBRepBuild_Tools2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_VertexInfo , shared_ptr<TopOpeBRepBuild_VertexInfo> >>(m.attr("TopOpeBRepBuild_VertexInfo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_WireToFace , shared_ptr<TopOpeBRepBuild_WireToFace> >>(m.attr("TopOpeBRepBuild_WireToFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_Area1dBuilder , shared_ptr<TopOpeBRepBuild_Area1dBuilder> , TopOpeBRepBuild_AreaBuilder>>(m.attr("TopOpeBRepBuild_Area1dBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("InitAreaBuilder",
             (void (TopOpeBRepBuild_Area1dBuilder::*)( TopOpeBRepBuild_LoopSet & , TopOpeBRepBuild_LoopClassifier & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepBuild_Area1dBuilder::*)( TopOpeBRepBuild_LoopSet & , TopOpeBRepBuild_LoopClassifier & , const Standard_Boolean ) >(&TopOpeBRepBuild_Area1dBuilder::InitAreaBuilder),
             R"#(Sets a Area1dBuilder to find the areas of the shapes described by <LS> using the classifier <LC>.)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ADD_Loop_TO_LISTOFLoop",
             (void (TopOpeBRepBuild_Area1dBuilder::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address ) const) static_cast<void (TopOpeBRepBuild_Area1dBuilder::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address ) const>(&TopOpeBRepBuild_Area1dBuilder::ADD_Loop_TO_LISTOFLoop),
             R"#(None)#"  , py::arg("L"),  py::arg("LOL"),  py::arg("s")=static_cast<const Standard_Address>(NULL))
        .def("REM_Loop_FROM_LISTOFLoop",
             (void (TopOpeBRepBuild_Area1dBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >::Iterator & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address ) const) static_cast<void (TopOpeBRepBuild_Area1dBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >::Iterator & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address ) const>(&TopOpeBRepBuild_Area1dBuilder::REM_Loop_FROM_LISTOFLoop),
             R"#(None)#"  , py::arg("ITLOL"),  py::arg("LOL"),  py::arg("s")=static_cast<const Standard_Address>(NULL))
        .def("ADD_LISTOFLoop_TO_LISTOFLoop",
             (void (TopOpeBRepBuild_Area1dBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address , const Standard_Address , const Standard_Address ) const) static_cast<void (TopOpeBRepBuild_Area1dBuilder::*)( NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> > & , const Standard_Address , const Standard_Address , const Standard_Address ) const>(&TopOpeBRepBuild_Area1dBuilder::ADD_LISTOFLoop_TO_LISTOFLoop),
             R"#(None)#"  , py::arg("LOL1"),  py::arg("LOL2"),  py::arg("s")=static_cast<const Standard_Address>(NULL),  py::arg("s1")=static_cast<const Standard_Address>(NULL),  py::arg("s2")=static_cast<const Standard_Address>(NULL))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_Area2dBuilder , shared_ptr<TopOpeBRepBuild_Area2dBuilder> , TopOpeBRepBuild_AreaBuilder>>(m.attr("TopOpeBRepBuild_Area2dBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("InitAreaBuilder",
             (void (TopOpeBRepBuild_Area2dBuilder::*)( TopOpeBRepBuild_LoopSet & , TopOpeBRepBuild_LoopClassifier & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepBuild_Area2dBuilder::*)( TopOpeBRepBuild_LoopSet & , TopOpeBRepBuild_LoopClassifier & , const Standard_Boolean ) >(&TopOpeBRepBuild_Area2dBuilder::InitAreaBuilder),
             R"#(Sets a Area1dBuilder to find the areas of the shapes described by <LS> using the classifier <LC>.)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_Area3dBuilder , shared_ptr<TopOpeBRepBuild_Area3dBuilder> , TopOpeBRepBuild_AreaBuilder>>(m.attr("TopOpeBRepBuild_Area3dBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("InitAreaBuilder",
             (void (TopOpeBRepBuild_Area3dBuilder::*)( TopOpeBRepBuild_LoopSet & , TopOpeBRepBuild_LoopClassifier & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepBuild_Area3dBuilder::*)( TopOpeBRepBuild_LoopSet & , TopOpeBRepBuild_LoopClassifier & , const Standard_Boolean ) >(&TopOpeBRepBuild_Area3dBuilder::InitAreaBuilder),
             R"#(Sets a Area1dBuilder to find the areas of the shapes described by <LS> using the classifier <LC>.)#"  , py::arg("LS"),  py::arg("LC"),  py::arg("ForceClass")=static_cast<const Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_Builder1 , shared_ptr<TopOpeBRepBuild_Builder1> , TopOpeBRepBuild_Builder>>(m.attr("TopOpeBRepBuild_Builder1"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (TopOpeBRepBuild_Builder1::*)() ) static_cast<void (TopOpeBRepBuild_Builder1::*)() >(&TopOpeBRepBuild_Builder1::Clear),
             R"#(Removes all splits and merges already performed. Does NOT clear the handled DS (except ShapeWithStatesMaps).)#" )
        .def("Perform",
             (void (TopOpeBRepBuild_Builder1::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) >(&TopOpeBRepBuild_Builder1::Perform),
             R"#(None)#"  , py::arg("HDS"))
        .def("Perform",
             (void (TopOpeBRepBuild_Builder1::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepBuild_Builder1::Perform),
             R"#(None)#"  , py::arg("HDS"),  py::arg("S1"),  py::arg("S2"))
        .def("MergeKPart",
             (void (TopOpeBRepBuild_Builder1::*)() ) static_cast<void (TopOpeBRepBuild_Builder1::*)() >(&TopOpeBRepBuild_Builder1::MergeKPart),
             R"#(None)#" )
        .def("MergeKPart",
             (void (TopOpeBRepBuild_Builder1::*)( const TopAbs_State , const TopAbs_State ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopAbs_State , const TopAbs_State ) >(&TopOpeBRepBuild_Builder1::MergeKPart),
             R"#(None)#"  , py::arg("TB1"),  py::arg("TB2"))
        .def("GFillSolidSFS",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const TopOpeBRepBuild_GTopo & , TopOpeBRepBuild_ShellFaceSet & ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const TopOpeBRepBuild_GTopo & , TopOpeBRepBuild_ShellFaceSet & ) >(&TopOpeBRepBuild_Builder1::GFillSolidSFS),
             R"#(None)#"  , py::arg("SO1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GFillShellSFS",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const TopOpeBRepBuild_GTopo & , TopOpeBRepBuild_ShellFaceSet & ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const TopOpeBRepBuild_GTopo & , TopOpeBRepBuild_ShellFaceSet & ) >(&TopOpeBRepBuild_Builder1::GFillShellSFS),
             R"#(None)#"  , py::arg("SH1"),  py::arg("LSO2"),  py::arg("G"),  py::arg("SFS"))
        .def("GWESMakeFaces",
             (void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & , TopOpeBRepBuild_WireEdgeSet & , NCollection_List<TopoDS_Shape> & ) ) static_cast<void (TopOpeBRepBuild_Builder1::*)( const TopoDS_Shape & , TopOpeBRepBuild_WireEdgeSet & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepBuild_Builder1::GWESMakeFaces),
             R"#(None)#"  , py::arg("FF"),  py::arg("WES"),  py::arg("LOF"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_CompositeClassifier , shared_ptr<TopOpeBRepBuild_CompositeClassifier>,Py_TopOpeBRepBuild_CompositeClassifier , TopOpeBRepBuild_LoopClassifier>>(m.attr("TopOpeBRepBuild_CompositeClassifier"))
    // constructors
    // custom constructors
    // methods
        .def("Compare",
             (TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , const opencascade::handle<TopOpeBRepBuild_Loop> & ) ) static_cast<TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , const opencascade::handle<TopOpeBRepBuild_Loop> & ) >(&TopOpeBRepBuild_CompositeClassifier::Compare),
             R"#(None)#"  , py::arg("L1"),  py::arg("L2"))
        .def("CompareShapes",
             (TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepBuild_CompositeClassifier::CompareShapes),
             R"#(classify shape <B1> with shape <B2>)#"  , py::arg("B1"),  py::arg("B2"))
        .def("CompareElementToShape",
             (TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepBuild_CompositeClassifier::CompareElementToShape),
             R"#(classify element <E> with shape <B>)#"  , py::arg("E"),  py::arg("B"))
        .def("ResetShape",
             (void (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_CompositeClassifier::ResetShape),
             R"#(prepare classification involving shape <B> calls ResetElement on first element of <B>)#"  , py::arg("B"))
        .def("ResetElement",
             (void (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_CompositeClassifier::ResetElement),
             R"#(prepare classification involving element <E>.)#"  , py::arg("E"))
        .def("CompareElement",
             (Standard_Boolean (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_CompositeClassifier::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_CompositeClassifier::CompareElement),
             R"#(Add element <E> in the set of elements used in classification. Returns FALSE if the element <E> has been already added to the set of elements, otherwise returns TRUE.)#"  , py::arg("E"))
        .def("State",
             (TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)() ) static_cast<TopAbs_State (TopOpeBRepBuild_CompositeClassifier::*)() >(&TopOpeBRepBuild_CompositeClassifier::State),
             R"#(Returns state of classification of 2D point, defined by ResetElement, with the current set of elements, defined by Compare.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_Pave ,opencascade::handle<TopOpeBRepBuild_Pave> , TopOpeBRepBuild_Loop>>(m.attr("TopOpeBRepBuild_Pave"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_PaveClassifier , shared_ptr<TopOpeBRepBuild_PaveClassifier> , TopOpeBRepBuild_LoopClassifier>>(m.attr("TopOpeBRepBuild_PaveClassifier"))
    // constructors
    // custom constructors
    // methods
        .def("Compare",
             (TopAbs_State (TopOpeBRepBuild_PaveClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , const opencascade::handle<TopOpeBRepBuild_Loop> & ) ) static_cast<TopAbs_State (TopOpeBRepBuild_PaveClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , const opencascade::handle<TopOpeBRepBuild_Loop> & ) >(&TopOpeBRepBuild_PaveClassifier::Compare),
             R"#(Returns state of vertex <L1> compared with <L2>.)#"  , py::arg("L1"),  py::arg("L2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_PaveSet , shared_ptr<TopOpeBRepBuild_PaveSet> , TopOpeBRepBuild_LoopSet>>(m.attr("TopOpeBRepBuild_PaveSet"))
    // constructors
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_ShellFaceSet , shared_ptr<TopOpeBRepBuild_ShellFaceSet> , TopOpeBRepBuild_ShapeSet>>(m.attr("TopOpeBRepBuild_ShellFaceSet"))
    // constructors
    // custom constructors
    // methods
        .def("AddShape",
             (void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShellFaceSet::AddShape),
             R"#(None)#"  , py::arg("S"))
        .def("AddStartElement",
             (void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShellFaceSet::AddStartElement),
             R"#(None)#"  , py::arg("S"))
        .def("AddElement",
             (void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShellFaceSet::AddElement),
             R"#(None)#"  , py::arg("S"))
        .def("DumpSS",
             (void (TopOpeBRepBuild_ShellFaceSet::*)() ) static_cast<void (TopOpeBRepBuild_ShellFaceSet::*)() >(&TopOpeBRepBuild_ShellFaceSet::DumpSS),
             R"#(None)#" )
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_ShellFaceSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_ShellFaceSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_ShellFaceSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_ShellFaceSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_ShellFaceSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_WireEdgeSet , shared_ptr<TopOpeBRepBuild_WireEdgeSet> , TopOpeBRepBuild_ShapeSet>>(m.attr("TopOpeBRepBuild_WireEdgeSet"))
    // constructors
    // custom constructors
    // methods
        .def("AddShape",
             (void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_WireEdgeSet::AddShape),
             R"#(None)#"  , py::arg("S"))
        .def("AddStartElement",
             (void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_WireEdgeSet::AddStartElement),
             R"#(None)#"  , py::arg("S"))
        .def("AddElement",
             (void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_WireEdgeSet::AddElement),
             R"#(None)#"  , py::arg("S"))
        .def("InitNeighbours",
             (void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_WireEdgeSet::InitNeighbours),
             R"#(None)#"  , py::arg("E"))
        .def("FindNeighbours",
             (void (TopOpeBRepBuild_WireEdgeSet::*)() ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)() >(&TopOpeBRepBuild_WireEdgeSet::FindNeighbours),
             R"#(Build the list of neighbour edges of edge myCurrentShape Initialize iterator of neighbour edges to edge myCurrentShape)#" )
        .def("MakeNeighboursList",
             (const TopTools_ListOfShape & (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepBuild_WireEdgeSet::MakeNeighboursList),
             R"#(None)#"  , py::arg("E"),  py::arg("V"))
        .def("DumpSS",
             (void (TopOpeBRepBuild_WireEdgeSet::*)() ) static_cast<void (TopOpeBRepBuild_WireEdgeSet::*)() >(&TopOpeBRepBuild_WireEdgeSet::DumpSS),
             R"#(None)#" )
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_WireEdgeSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SName",
             (TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_WireEdgeSet::SName),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)( const TopoDS_Shape & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_WireEdgeSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
        .def("SNameori",
             (TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepBuild_WireEdgeSet::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRepBuild_WireEdgeSet::SNameori),
             R"#(None)#"  , py::arg("S"),  py::arg("sb")=static_cast<const TCollection_AsciiString &>(""),  py::arg("sa")=static_cast<const TCollection_AsciiString &>(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_EdgeBuilder , shared_ptr<TopOpeBRepBuild_EdgeBuilder> , TopOpeBRepBuild_Area1dBuilder>>(m.attr("TopOpeBRepBuild_EdgeBuilder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_FaceAreaBuilder , shared_ptr<TopOpeBRepBuild_FaceAreaBuilder> , TopOpeBRepBuild_Area2dBuilder>>(m.attr("TopOpeBRepBuild_FaceAreaBuilder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_ShellFaceClassifier , shared_ptr<TopOpeBRepBuild_ShellFaceClassifier> , TopOpeBRepBuild_CompositeClassifier>>(m.attr("TopOpeBRepBuild_ShellFaceClassifier"))
    // constructors
    // custom constructors
    // methods
        .def("CompareShapes",
             (TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShellFaceClassifier::CompareShapes),
             R"#(classify shell <B1> with shell <B2>)#"  , py::arg("B1"),  py::arg("B2"))
        .def("CompareElementToShape",
             (TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShellFaceClassifier::CompareElementToShape),
             R"#(classify face <F> with shell <S>)#"  , py::arg("F"),  py::arg("S"))
        .def("ResetShape",
             (void (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShellFaceClassifier::ResetShape),
             R"#(prepare classification involving shell <S> calls ResetElement on first face of <S>)#"  , py::arg("S"))
        .def("ResetElement",
             (void (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShellFaceClassifier::ResetElement),
             R"#(prepare classification involving face <F> define 3D point (later used in Compare()) on first vertex of face <F>.)#"  , py::arg("F"))
        .def("CompareElement",
             (Standard_Boolean (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_ShellFaceClassifier::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_ShellFaceClassifier::CompareElement),
             R"#(Add the face <F> in the set of faces used in 3D point classification. Returns FALSE if the face <F> has been already added to the set of faces, otherwise returns TRUE.)#"  , py::arg("F"))
        .def("State",
             (TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)() ) static_cast<TopAbs_State (TopOpeBRepBuild_ShellFaceClassifier::*)() >(&TopOpeBRepBuild_ShellFaceClassifier::State),
             R"#(Returns state of classification of 3D point, defined by ResetElement, with the current set of faces, defined by Compare.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_SolidAreaBuilder , shared_ptr<TopOpeBRepBuild_SolidAreaBuilder> , TopOpeBRepBuild_Area3dBuilder>>(m.attr("TopOpeBRepBuild_SolidAreaBuilder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepBuild_WireEdgeClassifier , shared_ptr<TopOpeBRepBuild_WireEdgeClassifier> , TopOpeBRepBuild_CompositeClassifier>>(m.attr("TopOpeBRepBuild_WireEdgeClassifier"))
    // constructors
    // custom constructors
    // methods
        .def("Compare",
             (TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , const opencascade::handle<TopOpeBRepBuild_Loop> & ) ) static_cast<TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const opencascade::handle<TopOpeBRepBuild_Loop> & , const opencascade::handle<TopOpeBRepBuild_Loop> & ) >(&TopOpeBRepBuild_WireEdgeClassifier::Compare),
             R"#(None)#"  , py::arg("L1"),  py::arg("L2"))
        .def("CompareShapes",
             (TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepBuild_WireEdgeClassifier::CompareShapes),
             R"#(classify wire <B1> with wire <B2>)#"  , py::arg("B1"),  py::arg("B2"))
        .def("CompareElementToShape",
             (TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepBuild_WireEdgeClassifier::CompareElementToShape),
             R"#(classify edge <E> with wire <B>)#"  , py::arg("E"),  py::arg("B"))
        .def("ResetShape",
             (void (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_WireEdgeClassifier::ResetShape),
             R"#(prepare classification involving wire <B> calls ResetElement on first edge of <B>)#"  , py::arg("B"))
        .def("ResetElement",
             (void (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_WireEdgeClassifier::ResetElement),
             R"#(prepare classification involving edge <E> define 2D point (later used in Compare()) on first vertex of edge <E>.)#"  , py::arg("E"))
        .def("CompareElement",
             (Standard_Boolean (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TopOpeBRepBuild_WireEdgeClassifier::*)( const TopoDS_Shape & ) >(&TopOpeBRepBuild_WireEdgeClassifier::CompareElement),
             R"#(Add the edge <E> in the set of edges used in 2D point classification.)#"  , py::arg("E"))
        .def("State",
             (TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)() ) static_cast<TopAbs_State (TopOpeBRepBuild_WireEdgeClassifier::*)() >(&TopOpeBRepBuild_WireEdgeClassifier::State),
             R"#(Returns state of classification of 2D point, defined by ResetElement, with the current set of edges, defined by Compare.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TopOpeBRepBuild_Tools2d.hxx
// ./opencascade/TopOpeBRepBuild_PGTopo.hxx
// ./opencascade/TopOpeBRepBuild_ShellToSolid.hxx
// ./opencascade/TopOpeBRepBuild_ShapeSet.hxx
// ./opencascade/TopOpeBRepBuild_BuilderON.hxx
// ./opencascade/TopOpeBRepBuild_GIter.hxx
// ./opencascade/TopOpeBRepBuild_BlockBuilder.hxx
// ./opencascade/TopOpeBRepBuild_VertexInfo.hxx
// ./opencascade/TopOpeBRepBuild_Tools.hxx
// ./opencascade/TopOpeBRepBuild_PaveSet.hxx
// ./opencascade/TopOpeBRepBuild_EdgeBuilder.hxx
// ./opencascade/TopOpeBRepBuild_ListOfListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_Area2dBuilder.hxx
// ./opencascade/TopOpeBRepBuild_SolidAreaBuilder.hxx
// ./opencascade/TopOpeBRepBuild_HBuilder.hxx
// ./opencascade/TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo.hxx
// ./opencascade/TopOpeBRepBuild_define.hxx
// ./opencascade/TopOpeBRepBuild_WireEdgeSet.hxx
// ./opencascade/TopOpeBRepBuild_FuseFace.hxx
// ./opencascade/TopOpeBRepBuild_WireEdgeClassifier.hxx
// ./opencascade/TopOpeBRepBuild_AreaBuilder.hxx
// ./opencascade/TopOpeBRepBuild_GTopo.hxx
// ./opencascade/TopOpeBRepBuild_Loop.hxx
// ./opencascade/TopOpeBRepBuild_CorrectFace2d.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_FaceBuilder.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfPave.hxx
// ./opencascade/TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_ShellFaceSet.hxx
// ./opencascade/TopOpeBRepBuild_GTool.hxx
// ./opencascade/TopOpeBRepBuild_Area1dBuilder.hxx
// ./opencascade/TopOpeBRepBuild_WireToFace.hxx
// ./opencascade/TopOpeBRepBuild_FaceAreaBuilder.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_kpresu.hxx
// ./opencascade/TopOpeBRepBuild_ListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_Builder.hxx
// ./opencascade/TopOpeBRepBuild_BlockIterator.hxx
// ./opencascade/TopOpeBRepBuild_LoopEnum.hxx
// ./opencascade/TopOpeBRepBuild_LoopSet.hxx
// ./opencascade/TopOpeBRepBuild_PBuilder.hxx
// ./opencascade/TopOpeBRepBuild_ListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_Pave.hxx
// ./opencascade/TopOpeBRepBuild_PaveClassifier.hxx
// ./opencascade/TopOpeBRepBuild_ShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_ListIteratorOfListOfLoop.hxx
// ./opencascade/TopOpeBRepBuild_PWireEdgeSet.hxx
// ./opencascade/TopOpeBRepBuild_ListOfPave.hxx
// ./opencascade/TopOpeBRepBuild_Area3dBuilder.hxx
// ./opencascade/TopOpeBRepBuild_LoopClassifier.hxx
// ./opencascade/TopOpeBRepBuild_ShellFaceClassifier.hxx
// ./opencascade/TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape.hxx
// ./opencascade/TopOpeBRepBuild_SolidBuilder.hxx
// ./opencascade/TopOpeBRepBuild_Builder1.hxx
// ./opencascade/TopOpeBRepBuild_CompositeClassifier.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<TopOpeBRepBuild_ListOfLoop>(m,"TopOpeBRepBuild_ListOfListOfLoop");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepBuild_VertexInfo, TopTools_ShapeMapHasher>(m,"TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo");
    register_template_NCollection_List<TopOpeBRepBuild_ShapeListOfShape>(m,"TopOpeBRepBuild_ListOfShapeListOfShape");
    register_template_NCollection_List<opencascade::handle<TopOpeBRepBuild_Loop> >(m,"TopOpeBRepBuild_ListOfLoop");
    register_template_NCollection_List<opencascade::handle<TopOpeBRepBuild_Pave> >(m,"TopOpeBRepBuild_ListOfPave");
    register_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepBuild_ListOfShapeListOfShape, TopTools_ShapeMapHasher>(m,"TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
