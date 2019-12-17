
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <BRepAlgo_EdgeConnector.hxx>
#include <BRepAlgo_BooleanOperations.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepAlgo_BooleanOperation.hxx>
#include <BRepAlgo_Fuse.hxx>
#include <BRepAlgo_Cut.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgo_Section.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_Tool.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_BooleanOperations.hxx>
#include <BRepAlgo_DSAccess.hxx>
#include <BRepAlgo_EdgeConnector.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <Adaptor3d_Curve.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>

// module includes
#include <BRepAlgo.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_BooleanOperation.hxx>
#include <BRepAlgo_BooleanOperations.hxx>
#include <BRepAlgo_CheckStatus.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgo_Cut.hxx>
#include <BRepAlgo_DataMapIteratorOfDataMapOfShapeBoolean.hxx>
#include <BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference.hxx>
#include <BRepAlgo_DataMapOfShapeBoolean.hxx>
#include <BRepAlgo_DataMapOfShapeInterference.hxx>
#include <BRepAlgo_DSAccess.hxx>
#include <BRepAlgo_EdgeConnector.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_Fuse.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <BRepAlgo_Section.hxx>
#include <BRepAlgo_SequenceOfSequenceOfInteger.hxx>
#include <BRepAlgo_Tool.hxx>

// template related includes
// ./opencascade/BRepAlgo_SequenceOfSequenceOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/BRepAlgo_DataMapOfShapeBoolean.hxx
#include "NCollection.hxx"
// ./opencascade/BRepAlgo_DataMapOfShapeBoolean.hxx
#include "NCollection.hxx"
// ./opencascade/BRepAlgo_DataMapOfShapeInterference.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepAlgo(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepAlgo"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepAlgo_BooleanOperations ,std::unique_ptr<BRepAlgo_BooleanOperations>  >>(m.attr("BRepAlgo_BooleanOperations"))
        .def(py::init<  >()  )
        .def("Shapes2d",
             (void (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_BooleanOperations::Shapes2d),
             R"#(S1 is a Shell with ALL faces supported by the SAME S2 is an Edge INCLUDED in that surface with pcurve. this avoids a time-consuming 3D operation, compared to Shapes.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Shapes",
             (void (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_BooleanOperations::Shapes),
             R"#(Defines the arguments.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("SetApproxParameters",
             (void (BRepAlgo_BooleanOperations::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepAlgo_BooleanOperations::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real  ) >(&BRepAlgo_BooleanOperations::SetApproxParameters),
             R"#(Sets different parameters for the curve approximations : NbPntMax : Maximum number of points to be approximated at the same time in one curve. Tol3D, Tol2D : Tolerances to be reached by the approximation. RelativeTol : The given tolerances are relative.)#"  , py::arg("NbPntMax"),  py::arg("Tol3D"),  py::arg("Tol2D"))
        .def("Define",
             (void (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) ) static_cast<void (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  opencascade::handle<TopOpeBRepDS_HDataStructure> &  ) >(&BRepAlgo_BooleanOperations::Define),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("HDS"))
        .def("Common",
             (const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)() ) static_cast<const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)() >(&BRepAlgo_BooleanOperations::Common),
             R"#(returns the common part of the shapes.)#" )
        .def("Fus",
             (const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)() ) static_cast<const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)() >(&BRepAlgo_BooleanOperations::Fus),
             R"#(returns the fuse part of the shapes.)#" )
        .def("Cut",
             (const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)() ) static_cast<const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)() >(&BRepAlgo_BooleanOperations::Cut),
             R"#(returns the cut part of the shapes.)#" )
        .def("Section",
             (const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)() ) static_cast<const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)() >(&BRepAlgo_BooleanOperations::Section),
             R"#(returns the intersection of the shapes.)#" )
        .def("Shape",
             (const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)() ) static_cast<const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)() >(&BRepAlgo_BooleanOperations::Shape),
             R"#(returns the result of the boolean operation.)#" )
        .def("ShapeFrom",
             (const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_Shape & (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape &  ) >(&BRepAlgo_BooleanOperations::ShapeFrom),
             R"#(Returns the shape(s) resulting of the boolean operation issued from the shape <S>.)#"  , py::arg("S"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape &  ) >(&BRepAlgo_BooleanOperations::Modified),
             R"#(Returns the list of the descendant shapes of the shape <S>.)#"  , py::arg("S"))
        .def("IsDeleted",
             (Standard_Boolean (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepAlgo_BooleanOperations::*)( const TopoDS_Shape &  ) >(&BRepAlgo_BooleanOperations::IsDeleted),
             R"#(Returns the fact that the shape <S> has been deleted or not by the boolean operation.)#"  , py::arg("S"))
        .def("DataStructure",
             (const opencascade::handle<TopOpeBRepDS_HDataStructure> & (BRepAlgo_BooleanOperations::*)() const) static_cast<const opencascade::handle<TopOpeBRepDS_HDataStructure> & (BRepAlgo_BooleanOperations::*)() const>(&BRepAlgo_BooleanOperations::DataStructure),
             R"#(None)#" )
        .def("ChangeDataStructure",
             (opencascade::handle<TopOpeBRepDS_HDataStructure> & (BRepAlgo_BooleanOperations::*)() ) static_cast<opencascade::handle<TopOpeBRepDS_HDataStructure> & (BRepAlgo_BooleanOperations::*)() >(&BRepAlgo_BooleanOperations::ChangeDataStructure),
             R"#(None)#" )
        .def("Builder",
             (const opencascade::handle<TopOpeBRepBuild_HBuilder> & (BRepAlgo_BooleanOperations::*)() const) static_cast<const opencascade::handle<TopOpeBRepBuild_HBuilder> & (BRepAlgo_BooleanOperations::*)() const>(&BRepAlgo_BooleanOperations::Builder),
             R"#(None)#" )
        .def("ChangeBuilder",
             (opencascade::handle<TopOpeBRepBuild_HBuilder> & (BRepAlgo_BooleanOperations::*)() ) static_cast<opencascade::handle<TopOpeBRepBuild_HBuilder> & (BRepAlgo_BooleanOperations::*)() >(&BRepAlgo_BooleanOperations::ChangeBuilder),
             R"#(None)#" )
        .def("DataStructureAccess",
             (BRepAlgo_DSAccess & (BRepAlgo_BooleanOperations::*)() ) static_cast<BRepAlgo_DSAccess & (BRepAlgo_BooleanOperations::*)() >(&BRepAlgo_BooleanOperations::DataStructureAccess),
             R"#(returns the member myDSA. It is useful to then access the method GetSectionEdgeSet (wich is a member of DSAccess))#" )
;


    static_cast<py::class_<BRepAlgo_FaceRestrictor ,std::unique_ptr<BRepAlgo_FaceRestrictor>  >>(m.attr("BRepAlgo_FaceRestrictor"))
        .def(py::init<  >()  )
        .def("Init",
             (void (BRepAlgo_FaceRestrictor::*)( const TopoDS_Face & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (BRepAlgo_FaceRestrictor::*)( const TopoDS_Face & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepAlgo_FaceRestrictor::Init),
             R"#(the surface of <F> will be the the surface of each new faces built. <Proj> is used to update pcurves on edges if necessary. See Add().)#"  , py::arg("F"),  py::arg("Proj")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ControlOrientation")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Add",
             (void (BRepAlgo_FaceRestrictor::*)( TopoDS_Wire &  ) ) static_cast<void (BRepAlgo_FaceRestrictor::*)( TopoDS_Wire &  ) >(&BRepAlgo_FaceRestrictor::Add),
             R"#(Add the wire <W> to the set of wires.)#"  , py::arg("W"))
        .def("Clear",
             (void (BRepAlgo_FaceRestrictor::*)() ) static_cast<void (BRepAlgo_FaceRestrictor::*)() >(&BRepAlgo_FaceRestrictor::Clear),
             R"#(Removes all the Wires)#" )
        .def("Perform",
             (void (BRepAlgo_FaceRestrictor::*)() ) static_cast<void (BRepAlgo_FaceRestrictor::*)() >(&BRepAlgo_FaceRestrictor::Perform),
             R"#(Evaluate all the faces limited by the set of Wires.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepAlgo_FaceRestrictor::*)() const) static_cast<Standard_Boolean (BRepAlgo_FaceRestrictor::*)() const>(&BRepAlgo_FaceRestrictor::IsDone),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (BRepAlgo_FaceRestrictor::*)() const) static_cast<Standard_Boolean (BRepAlgo_FaceRestrictor::*)() const>(&BRepAlgo_FaceRestrictor::More),
             R"#(None)#" )
        .def("Next",
             (void (BRepAlgo_FaceRestrictor::*)() ) static_cast<void (BRepAlgo_FaceRestrictor::*)() >(&BRepAlgo_FaceRestrictor::Next),
             R"#(None)#" )
        .def("Current",
             (TopoDS_Face (BRepAlgo_FaceRestrictor::*)() const) static_cast<TopoDS_Face (BRepAlgo_FaceRestrictor::*)() const>(&BRepAlgo_FaceRestrictor::Current),
             R"#(None)#" )
;


    static_cast<py::class_<BRepAlgo_NormalProjection ,std::unique_ptr<BRepAlgo_NormalProjection>  >>(m.attr("BRepAlgo_NormalProjection"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
        .def("Init",
             (void (BRepAlgo_NormalProjection::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const TopoDS_Shape &  ) >(&BRepAlgo_NormalProjection::Init),
             R"#(None)#"  , py::arg("S"))
        .def("Add",
             (void (BRepAlgo_NormalProjection::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const TopoDS_Shape &  ) >(&BRepAlgo_NormalProjection::Add),
             R"#(Add an edge or a wire to the list of shape to project)#"  , py::arg("ToProj"))
        .def("SetParams",
             (void (BRepAlgo_NormalProjection::*)( const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) >(&BRepAlgo_NormalProjection::SetParams),
             R"#(Set the parameters used for computation Tol3d is the requiered tolerance between the 3d projected curve and its 2d representation InternalContinuity is the order of constraints used for approximation. MaxDeg and MaxSeg are the maximum degree and the maximum number of segment for BSpline resulting of an approximation.)#"  , py::arg("Tol3D"),  py::arg("Tol2D"),  py::arg("InternalContinuity"),  py::arg("MaxDegree"),  py::arg("MaxSeg"))
        .def("SetDefaultParams",
             (void (BRepAlgo_NormalProjection::*)() ) static_cast<void (BRepAlgo_NormalProjection::*)() >(&BRepAlgo_NormalProjection::SetDefaultParams),
             R"#(Set the parameters used for computation in their default values)#" )
        .def("SetMaxDistance",
             (void (BRepAlgo_NormalProjection::*)( const Standard_Real  ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const Standard_Real  ) >(&BRepAlgo_NormalProjection::SetMaxDistance),
             R"#(Sets the maximum distance between target shape and shape to project. If this condition is not satisfied then corresponding part of solution is discarded. if MaxDist < 0 then this method does not affect the algorithm)#"  , py::arg("MaxDist"))
        .def("Compute3d",
             (void (BRepAlgo_NormalProjection::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const Standard_Boolean  ) >(&BRepAlgo_NormalProjection::Compute3d),
             R"#(if With3d = Standard_False the 3dcurve is not computed the initial 3dcurve is kept to build the resulting edges.)#"  , py::arg("With3d")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetLimit",
             (void (BRepAlgo_NormalProjection::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgo_NormalProjection::*)( const Standard_Boolean  ) >(&BRepAlgo_NormalProjection::SetLimit),
             R"#(Manage limitation of projected edges.)#"  , py::arg("FaceBoundaries")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Build",
             (void (BRepAlgo_NormalProjection::*)() ) static_cast<void (BRepAlgo_NormalProjection::*)() >(&BRepAlgo_NormalProjection::Build),
             R"#(Builds the result as a compound.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepAlgo_NormalProjection::*)() const) static_cast<Standard_Boolean (BRepAlgo_NormalProjection::*)() const>(&BRepAlgo_NormalProjection::IsDone),
             R"#(None)#" )
        .def("Projection",
             (const TopoDS_Shape & (BRepAlgo_NormalProjection::*)() const) static_cast<const TopoDS_Shape & (BRepAlgo_NormalProjection::*)() const>(&BRepAlgo_NormalProjection::Projection),
             R"#(returns the result)#" )
        .def("Ancestor",
             (const TopoDS_Shape & (BRepAlgo_NormalProjection::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Shape & (BRepAlgo_NormalProjection::*)( const TopoDS_Edge &  ) const>(&BRepAlgo_NormalProjection::Ancestor),
             R"#(For a resulting edge, returns the corresponding initial edge.)#"  , py::arg("E"))
        .def("Couple",
             (const TopoDS_Shape & (BRepAlgo_NormalProjection::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Shape & (BRepAlgo_NormalProjection::*)( const TopoDS_Edge &  ) const>(&BRepAlgo_NormalProjection::Couple),
             R"#(For a projected edge, returns the corresponding initial face.)#"  , py::arg("E"))
        .def("Generated",
             (const TopTools_ListOfShape & (BRepAlgo_NormalProjection::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgo_NormalProjection::*)( const TopoDS_Shape &  ) >(&BRepAlgo_NormalProjection::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("IsElementary",
             (Standard_Boolean (BRepAlgo_NormalProjection::*)( const Adaptor3d_Curve &  ) const) static_cast<Standard_Boolean (BRepAlgo_NormalProjection::*)( const Adaptor3d_Curve &  ) const>(&BRepAlgo_NormalProjection::IsElementary),
             R"#(None)#"  , py::arg("C"))
        .def("BuildWire",
             (Standard_Boolean (BRepAlgo_NormalProjection::*)( NCollection_List<TopoDS_Shape> &  ) const) static_cast<Standard_Boolean (BRepAlgo_NormalProjection::*)( NCollection_List<TopoDS_Shape> &  ) const>(&BRepAlgo_NormalProjection::BuildWire),
             R"#(build the result as a list of wire if possible in -- a first returns a wire only if there is only a wire.)#"  , py::arg("Liste"))
;


    static_cast<py::class_<BRepAlgo_Loop ,std::unique_ptr<BRepAlgo_Loop>  >>(m.attr("BRepAlgo_Loop"))
        .def(py::init<  >()  )
        .def("Init",
             (void (BRepAlgo_Loop::*)( const TopoDS_Face &  ) ) static_cast<void (BRepAlgo_Loop::*)( const TopoDS_Face &  ) >(&BRepAlgo_Loop::Init),
             R"#(Init with <F> the set of edges must have pcurves on <F>.)#"  , py::arg("F"))
        .def("AddEdge",
             (void (BRepAlgo_Loop::*)( TopoDS_Edge & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgo_Loop::*)( TopoDS_Edge & ,   const NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgo_Loop::AddEdge),
             R"#(Add E with <LV>. <E> will be copied and trim by vertices in <LV>.)#"  , py::arg("E"),  py::arg("LV"))
        .def("AddConstEdge",
             (void (BRepAlgo_Loop::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepAlgo_Loop::*)( const TopoDS_Edge &  ) >(&BRepAlgo_Loop::AddConstEdge),
             R"#(Add <E> as const edge, E can be in the result.)#"  , py::arg("E"))
        .def("AddConstEdges",
             (void (BRepAlgo_Loop::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgo_Loop::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgo_Loop::AddConstEdges),
             R"#(Add <LE> as a set of const edges.)#"  , py::arg("LE"))
        .def("Perform",
             (void (BRepAlgo_Loop::*)() ) static_cast<void (BRepAlgo_Loop::*)() >(&BRepAlgo_Loop::Perform),
             R"#(Make loops.)#" )
        .def("CutEdge",
             (void (BRepAlgo_Loop::*)( const TopoDS_Edge & ,   const NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (BRepAlgo_Loop::*)( const TopoDS_Edge & ,   const NCollection_List<TopoDS_Shape> & ,  NCollection_List<TopoDS_Shape> &  ) const>(&BRepAlgo_Loop::CutEdge),
             R"#(Cut the edge <E> in several edges <NE> on the vertices<VonE>.)#"  , py::arg("E"),  py::arg("VonE"),  py::arg("NE"))
        .def("NewWires",
             (const TopTools_ListOfShape & (BRepAlgo_Loop::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgo_Loop::*)() const>(&BRepAlgo_Loop::NewWires),
             R"#(Returns the list of wires performed. can be an empty list.)#" )
        .def("WiresToFaces",
             (void (BRepAlgo_Loop::*)() ) static_cast<void (BRepAlgo_Loop::*)() >(&BRepAlgo_Loop::WiresToFaces),
             R"#(Build faces from the wires result.)#" )
        .def("NewFaces",
             (const TopTools_ListOfShape & (BRepAlgo_Loop::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgo_Loop::*)() const>(&BRepAlgo_Loop::NewFaces),
             R"#(Returns the list of faces. Warning: The method <WiresToFaces> as to be called before. can be an empty list.)#" )
        .def("NewEdges",
             (const TopTools_ListOfShape & (BRepAlgo_Loop::*)( const TopoDS_Edge &  ) const) static_cast<const TopTools_ListOfShape & (BRepAlgo_Loop::*)( const TopoDS_Edge &  ) const>(&BRepAlgo_Loop::NewEdges),
             R"#(Returns the list of new edges built from an edge <E> it can be an empty list.)#"  , py::arg("E"))
        .def("GetVerticesForSubstitute",
             (void (BRepAlgo_Loop::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) const) static_cast<void (BRepAlgo_Loop::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) const>(&BRepAlgo_Loop::GetVerticesForSubstitute),
             R"#(Returns the datamap of vertices with their substitutes.)#"  , py::arg("VerVerMap"))
        .def("VerticesForSubstitute",
             (void (BRepAlgo_Loop::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (BRepAlgo_Loop::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&BRepAlgo_Loop::VerticesForSubstitute),
             R"#(None)#"  , py::arg("VerVerMap"))
;


    static_cast<py::class_<BRepAlgo_BooleanOperation ,std::unique_ptr<BRepAlgo_BooleanOperation>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepAlgo_BooleanOperation"))
        .def("PerformDS",
             (void (BRepAlgo_BooleanOperation::*)() ) static_cast<void (BRepAlgo_BooleanOperation::*)() >(&BRepAlgo_BooleanOperation::PerformDS),
             R"#(None)#" )
        .def("Perform",
             (void (BRepAlgo_BooleanOperation::*)( const TopAbs_State ,  const TopAbs_State  ) ) static_cast<void (BRepAlgo_BooleanOperation::*)( const TopAbs_State ,  const TopAbs_State  ) >(&BRepAlgo_BooleanOperation::Perform),
             R"#(None)#"  , py::arg("St1"),  py::arg("St2"))
        .def("Builder",
             (opencascade::handle<TopOpeBRepBuild_HBuilder> (BRepAlgo_BooleanOperation::*)() const) static_cast<opencascade::handle<TopOpeBRepBuild_HBuilder> (BRepAlgo_BooleanOperation::*)() const>(&BRepAlgo_BooleanOperation::Builder),
             R"#(None)#" )
        .def("Shape1",
             (const TopoDS_Shape & (BRepAlgo_BooleanOperation::*)() const) static_cast<const TopoDS_Shape & (BRepAlgo_BooleanOperation::*)() const>(&BRepAlgo_BooleanOperation::Shape1),
             R"#(Returns the first shape involved in this Boolean operation.)#" )
        .def("Shape2",
             (const TopoDS_Shape & (BRepAlgo_BooleanOperation::*)() const) static_cast<const TopoDS_Shape & (BRepAlgo_BooleanOperation::*)() const>(&BRepAlgo_BooleanOperation::Shape2),
             R"#(Returns the second shape involved in this Boolean operation.)#" )
        .def("Modified",
             (const TopTools_ListOfShape & (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape &  ) >(&BRepAlgo_BooleanOperation::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("IsDeleted",
             (Standard_Boolean (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepAlgo_BooleanOperation::*)( const TopoDS_Shape &  ) >(&BRepAlgo_BooleanOperation::IsDeleted),
             R"#(None)#"  , py::arg("S"))
;


    static_cast<py::class_<BRepAlgo_Image ,std::unique_ptr<BRepAlgo_Image>  >>(m.attr("BRepAlgo_Image"))
        .def(py::init<  >()  )
        .def("SetRoot",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape &  ) >(&BRepAlgo_Image::SetRoot),
             R"#(None)#"  , py::arg("S"))
        .def("Bind",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_Image::Bind),
             R"#(Links <NewS> as image of <OldS>.)#"  , py::arg("OldS"),  py::arg("NewS"))
        .def("Bind",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgo_Image::Bind),
             R"#(Links <NewS> as image of <OldS>.)#"  , py::arg("OldS"),  py::arg("NewS"))
        .def("Add",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_Image::Add),
             R"#(Add <NewS> to the image of <OldS>.)#"  , py::arg("OldS"),  py::arg("NewS"))
        .def("Add",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgo_Image::Add),
             R"#(Add <NewS> to the image of <OldS>.)#"  , py::arg("OldS"),  py::arg("NewS"))
        .def("Clear",
             (void (BRepAlgo_Image::*)() ) static_cast<void (BRepAlgo_Image::*)() >(&BRepAlgo_Image::Clear),
             R"#(None)#" )
        .def("Remove",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape &  ) >(&BRepAlgo_Image::Remove),
             R"#(Remove <S> to set of images.)#"  , py::arg("S"))
        .def("Roots",
             (const TopTools_ListOfShape & (BRepAlgo_Image::*)() const) static_cast<const TopTools_ListOfShape & (BRepAlgo_Image::*)() const>(&BRepAlgo_Image::Roots),
             R"#(None)#" )
        .def("IsImage",
             (Standard_Boolean (BRepAlgo_Image::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepAlgo_Image::*)( const TopoDS_Shape &  ) const>(&BRepAlgo_Image::IsImage),
             R"#(None)#"  , py::arg("S"))
        .def("ImageFrom",
             (const TopoDS_Shape & (BRepAlgo_Image::*)( const TopoDS_Shape &  ) const) static_cast<const TopoDS_Shape & (BRepAlgo_Image::*)( const TopoDS_Shape &  ) const>(&BRepAlgo_Image::ImageFrom),
             R"#(Returns the generator of <S>)#"  , py::arg("S"))
        .def("Root",
             (const TopoDS_Shape & (BRepAlgo_Image::*)( const TopoDS_Shape &  ) const) static_cast<const TopoDS_Shape & (BRepAlgo_Image::*)( const TopoDS_Shape &  ) const>(&BRepAlgo_Image::Root),
             R"#(Returns the upper generator of <S>)#"  , py::arg("S"))
        .def("HasImage",
             (Standard_Boolean (BRepAlgo_Image::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepAlgo_Image::*)( const TopoDS_Shape &  ) const>(&BRepAlgo_Image::HasImage),
             R"#(None)#"  , py::arg("S"))
        .def("Image",
             (const TopTools_ListOfShape & (BRepAlgo_Image::*)( const TopoDS_Shape &  ) const) static_cast<const TopTools_ListOfShape & (BRepAlgo_Image::*)( const TopoDS_Shape &  ) const>(&BRepAlgo_Image::Image),
             R"#(Returns the Image of <S>. Returns <S> in the list if HasImage(S) is false.)#"  , py::arg("S"))
        .def("LastImage",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> &  ) const>(&BRepAlgo_Image::LastImage),
             R"#(Stores in <L> the images of images of...images of <S>. <L> contains only <S> if HasImage(S) is false.)#"  , py::arg("S"),  py::arg("L"))
        .def("Compact",
             (void (BRepAlgo_Image::*)() ) static_cast<void (BRepAlgo_Image::*)() >(&BRepAlgo_Image::Compact),
             R"#(Keeps only the link between roots and lastimage.)#" )
        .def("Filter",
             (void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) ) static_cast<void (BRepAlgo_Image::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) >(&BRepAlgo_Image::Filter),
             R"#(Deletes in the images the shape of type <ShapeType> which are not in <S>. Warning: Compact() must be call before.)#"  , py::arg("S"),  py::arg("ShapeType"))
;


    static_cast<py::class_<BRepAlgo_DSAccess ,std::unique_ptr<BRepAlgo_DSAccess>  >>(m.attr("BRepAlgo_DSAccess"))
        .def(py::init<  >()  )
        .def("Init",
             (void (BRepAlgo_DSAccess::*)() ) static_cast<void (BRepAlgo_DSAccess::*)() >(&BRepAlgo_DSAccess::Init),
             R"#(Clears the internal data structure, including the)#" )
        .def("Load",
             (void (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::Load),
             R"#(Loads the shape in DS.)#"  , py::arg("S"))
        .def("Load",
             (void (BRepAlgo_DSAccess::*)( TopoDS_Shape & ,  TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_DSAccess::*)( TopoDS_Shape & ,  TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::Load),
             R"#(Loads two shapes in the DS without intersecting them.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Intersect",
             (void (BRepAlgo_DSAccess::*)() ) static_cast<void (BRepAlgo_DSAccess::*)() >(&BRepAlgo_DSAccess::Intersect),
             R"#(Intersects two shapes at input and loads the DS with their intersection. Clears the TopOpeBRepBuild_HBuilder if necessary)#" )
        .def("Intersect",
             (void (BRepAlgo_DSAccess::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_DSAccess::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::Intersect),
             R"#(Intersects the faces contained in two given shapes and loads them in the DS. Clears the TopOpeBRepBuild_HBuilder if necessary)#"  , py::arg("S1"),  py::arg("S2"))
        .def("SameDomain",
             (void (BRepAlgo_DSAccess::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_DSAccess::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::SameDomain),
             R"#(This method does the same thing as the previous, but faster. There is no intersection face/face 3D. The faces have the same support(surface). No test of tangency (that is why it is faster). Intersects in 2d the faces tangent F1 anf F2.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("GetSectionEdgeSet",
             (const TopTools_ListOfShape & (BRepAlgo_DSAccess::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgo_DSAccess::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::GetSectionEdgeSet),
             R"#(returns compounds of Edge connected with section, which contains sections between faces contained in S1 and S2. returns an empty list of Shape if S1 or S2 do not contain face. calls GetSectionEdgeSet() if it has not already been done)#"  , py::arg("S1"),  py::arg("S2"))
        .def("GetSectionEdgeSet",
             (const TopTools_ListOfShape & (BRepAlgo_DSAccess::*)() ) static_cast<const TopTools_ListOfShape & (BRepAlgo_DSAccess::*)() >(&BRepAlgo_DSAccess::GetSectionEdgeSet),
             R"#(returns all compounds of edges connected with section contained in the DS)#" )
        .def("IsWire",
             (Standard_Boolean (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::IsWire),
             R"#(NYI)#"  , py::arg("Compound"))
        .def("Wire",
             (const TopoDS_Shape & (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_Shape & (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::Wire),
             R"#(NYI)#"  , py::arg("Compound"))
        .def("SectionVertex",
             (const TopTools_ListOfShape & (BRepAlgo_DSAccess::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgo_DSAccess::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::SectionVertex),
             R"#(NYI returns the vertex of section, which contains the section between face S1 and edge S2 (returns an empty Shape if S1 is not a face or if S2 is not an edge))#"  , py::arg("S1"),  py::arg("S2"))
        .def("SuppressEdgeSet",
             (void (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::SuppressEdgeSet),
             R"#(Invalidates a complete line of section. All Edges connected by Vertex or a Wire. Can be a group of connected Edges, which do not form a standard Wire.)#"  , py::arg("Compound"))
        .def("ChangeEdgeSet",
             (void (BRepAlgo_DSAccess::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_DSAccess::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::ChangeEdgeSet),
             R"#(Modifies a line of section. <New> -- should be a Group of Edges connected by Vertex. -- Can be a Wire. Can be a group of connected Edges that do not form a standard Wire. <New> should be sub-groupn of <Old>)#"  , py::arg("Old"),  py::arg("New"))
        .def("SuppressSectionVertex",
             (void (BRepAlgo_DSAccess::*)( const TopoDS_Vertex &  ) ) static_cast<void (BRepAlgo_DSAccess::*)( const TopoDS_Vertex &  ) >(&BRepAlgo_DSAccess::SuppressSectionVertex),
             R"#(NYI Make invalid a Vertex of section. The Vertex shoud be reconstructed from a point.)#"  , py::arg("V"))
        .def("Merge",
             (const TopoDS_Shape & (BRepAlgo_DSAccess::*)( const TopAbs_State ,  const TopAbs_State  ) ) static_cast<const TopoDS_Shape & (BRepAlgo_DSAccess::*)( const TopAbs_State ,  const TopAbs_State  ) >(&BRepAlgo_DSAccess::Merge),
             R"#(None)#"  , py::arg("state1"),  py::arg("state2"))
        .def("Merge",
             (const TopoDS_Shape & (BRepAlgo_DSAccess::*)( const TopAbs_State  ) ) static_cast<const TopoDS_Shape & (BRepAlgo_DSAccess::*)( const TopAbs_State  ) >(&BRepAlgo_DSAccess::Merge),
             R"#(None)#"  , py::arg("state1"))
        .def("Propagate",
             (const TopoDS_Shape & (BRepAlgo_DSAccess::*)( const TopAbs_State ,  const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<const TopoDS_Shape & (BRepAlgo_DSAccess::*)( const TopAbs_State ,  const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::Propagate),
             R"#(NYI Propagation of a state starting from the shape FromShape = edge or vertex of section, face or Coumpound de section. LoadShape is either S1, or S2 (see the method Load). Propagation from FromShape, on the states <what> of LoadShape. Return a Wire in 2d, a Shell in 3d. Specifications are incomplete, to be redefined for the typologies correpsonding to <FromShape> and the result : exemple : FromShape resultat vertex wire (or edge) edge of section face (or shell) compound of section shell ... ...)#"  , py::arg("what"),  py::arg("FromShape"),  py::arg("LoadShape"))
        .def("PropagateFromSection",
             (const TopoDS_Shape & (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) ) static_cast<const TopoDS_Shape & (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::PropagateFromSection),
             R"#(SectionShape est soit un Vertex de section(NYI), soit une Edge de section. Propagation des shapes de section en partant de SectionShape. return un Compound de section.)#"  , py::arg("SectionShape"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepAlgo_DSAccess::*)( const TopoDS_Shape &  ) >(&BRepAlgo_DSAccess::Modified),
             R"#(Returns the list of the descendant shapes of the shape <S>.)#"  , py::arg("S"))
        .def("Check",
             (BRepAlgo_CheckStatus (BRepAlgo_DSAccess::*)() ) static_cast<BRepAlgo_CheckStatus (BRepAlgo_DSAccess::*)() >(&BRepAlgo_DSAccess::Check),
             R"#(NYI coherence of the internal Data Structure.)#" )
        .def("DS",
             (const opencascade::handle<TopOpeBRepDS_HDataStructure> & (BRepAlgo_DSAccess::*)() const) static_cast<const opencascade::handle<TopOpeBRepDS_HDataStructure> & (BRepAlgo_DSAccess::*)() const>(&BRepAlgo_DSAccess::DS),
             R"#(None)#" )
        .def("ChangeDS",
             (opencascade::handle<TopOpeBRepDS_HDataStructure> & (BRepAlgo_DSAccess::*)() ) static_cast<opencascade::handle<TopOpeBRepDS_HDataStructure> & (BRepAlgo_DSAccess::*)() >(&BRepAlgo_DSAccess::ChangeDS),
             R"#(None)#" )
        .def("Builder",
             (const opencascade::handle<TopOpeBRepBuild_HBuilder> & (BRepAlgo_DSAccess::*)() const) static_cast<const opencascade::handle<TopOpeBRepBuild_HBuilder> & (BRepAlgo_DSAccess::*)() const>(&BRepAlgo_DSAccess::Builder),
             R"#(None)#" )
        .def("ChangeBuilder",
             (opencascade::handle<TopOpeBRepBuild_HBuilder> & (BRepAlgo_DSAccess::*)() ) static_cast<opencascade::handle<TopOpeBRepBuild_HBuilder> & (BRepAlgo_DSAccess::*)() >(&BRepAlgo_DSAccess::ChangeBuilder),
             R"#(None)#" )
;


    static_cast<py::class_<BRepAlgo_Cut ,std::unique_ptr<BRepAlgo_Cut>  , BRepAlgo_BooleanOperation >>(m.attr("BRepAlgo_Cut"))
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("S1"),  py::arg("S2") )
;


    static_cast<py::class_<BRepAlgo_Section ,std::unique_ptr<BRepAlgo_Section>  , BRepAlgo_BooleanOperation >>(m.attr("BRepAlgo_Section"))
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("Sh1"),  py::arg("Sh2"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Shape &,const gp_Pln &,const Standard_Boolean >()  , py::arg("Sh"),  py::arg("Pl"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<Geom_Surface> &,const Standard_Boolean >()  , py::arg("Sh"),  py::arg("Sf"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("Sf"),  py::arg("Sh"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const opencascade::handle<Geom_Surface> &,const Standard_Boolean >()  , py::arg("Sf1"),  py::arg("Sf2"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Init1",
             (void (BRepAlgo_Section::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_Section::*)( const TopoDS_Shape &  ) >(&BRepAlgo_Section::Init1),
             R"#(Initializes the first part)#"  , py::arg("S1"))
        .def("Init1",
             (void (BRepAlgo_Section::*)( const gp_Pln &  ) ) static_cast<void (BRepAlgo_Section::*)( const gp_Pln &  ) >(&BRepAlgo_Section::Init1),
             R"#(Initializes the first part)#"  , py::arg("Pl"))
        .def("Init1",
             (void (BRepAlgo_Section::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (BRepAlgo_Section::*)( const opencascade::handle<Geom_Surface> &  ) >(&BRepAlgo_Section::Init1),
             R"#(Initializes the first part)#"  , py::arg("Sf"))
        .def("Init2",
             (void (BRepAlgo_Section::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_Section::*)( const TopoDS_Shape &  ) >(&BRepAlgo_Section::Init2),
             R"#(initialize second part)#"  , py::arg("S2"))
        .def("Init2",
             (void (BRepAlgo_Section::*)( const gp_Pln &  ) ) static_cast<void (BRepAlgo_Section::*)( const gp_Pln &  ) >(&BRepAlgo_Section::Init2),
             R"#(Initializes the second part)#"  , py::arg("Pl"))
        .def("Init2",
             (void (BRepAlgo_Section::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (BRepAlgo_Section::*)( const opencascade::handle<Geom_Surface> &  ) >(&BRepAlgo_Section::Init2),
             R"#(This and the above algorithms reinitialize the first and the second parts on which this algorithm is going to perform the intersection computation. This is done with either: the surface Sf, the plane Pl or the shape Sh. You use the function Build to construct the result.)#"  , py::arg("Sf"))
        .def("Approximation",
             (void (BRepAlgo_Section::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgo_Section::*)( const Standard_Boolean  ) >(&BRepAlgo_Section::Approximation),
             R"#(Defines an option for computation of further intersections. This computation will be performed by the function Build in this framework. By default, the underlying 3D geometry attached to each elementary edge of the result of a computed intersection is: - analytic where possible, provided the corresponding geometry corresponds to a type of analytic curve defined in the Geom package; for example the intersection of a cylindrical shape with a plane gives an ellipse or a circle; - or elsewhere, given as a succession of points grouped together in a BSpline curve of degree 1. If Approx equals true, when further computations are performed in this framework with the function Build, these edges will have an attached 3D geometry which is a BSpline approximation of the computed set of points. Note that as a result, approximations will be computed on edges built only on new intersection lines.)#"  , py::arg("B"))
        .def("ComputePCurveOn1",
             (void (BRepAlgo_Section::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgo_Section::*)( const Standard_Boolean  ) >(&BRepAlgo_Section::ComputePCurveOn1),
             R"#(Indicates if the Pcurve must be (or not) performed on first part.)#"  , py::arg("B"))
        .def("ComputePCurveOn2",
             (void (BRepAlgo_Section::*)( const Standard_Boolean  ) ) static_cast<void (BRepAlgo_Section::*)( const Standard_Boolean  ) >(&BRepAlgo_Section::ComputePCurveOn2),
             R"#(Define options for the computation of further intersections which will be performed by the function Build in this framework. By default, no parametric 2D curve (pcurve) is defined for the elementary edges of the result. If ComputePCurve1 equals true, further computations performed in this framework with the function Build will attach an additional pcurve in the parametric space of the first shape to the constructed edges. If ComputePCurve2 equals true, the additional pcurve will be attached to the constructed edges in the parametric space of the second shape. These two functions may be used together. Note that as a result, pcurves will only be added onto edges built on new intersection lines.)#"  , py::arg("B"))
        .def("Build",
             (void (BRepAlgo_Section::*)() ) static_cast<void (BRepAlgo_Section::*)() >(&BRepAlgo_Section::Build),
             R"#(Performs the computation of the section lines between the two parts defined at the time of construction of this framework or reinitialized with the Init1 and Init2 functions. The constructed shape will be returned by the function Shape. This is a compound object composed of edges. These intersection edges may be built: - on new intersection lines, or - on coincident portions of edges in the two intersected shapes. These intersection edges are independent: they are not chained or grouped into wires. If no intersection edge exists, the result is an empty compound object. The shapes involved in the construction of the section lines can be retrieved with the function Shape1 or Shape2. Note that other objects than TopoDS_Shape shapes given as arguments at the construction time of this framework, or to the Init1 or Init2 function, are converted into faces or shells before performing the computation of the intersection. Parametric 2D curves on intersection edges No parametric 2D curve (pcurve) is defined for the elementary edges of the result. To attach parametric curves like this to the constructed edges you have to use: - the function ComputePCurveOn1 to ask for the additional computation of a pcurve in the parametric space of the first shape, - the function ComputePCurveOn2 to ask for the additional computation of a pcurve in the parametric space of the second shape. This must be done before calling this function. Note that as a result, pcurves are added on edges built on new intersection lines only. Approximation of intersection edges The underlying 3D geometry attached to each elementary edge of the result is: - analytic where possible provided the corresponding geometry corresponds to a type of analytic curve defined in the Geom package; for example, the intersection of a cylindrical shape with a plane gives an ellipse or a circle; or - elsewhere, given as a succession of points grouped together in a BSpline curve of degree 1. If, on computed elementary intersection edges whose underlying geometry is not analytic, you prefer to have an attached 3D geometry which is a BSpline approximation of the computed set of points, you have to use the function Approximation to ask for this computation option before calling this function. You may also have combined these computation options: look at the example given above to illustrate the use of the constructors.)#" )
        .def("HasAncestorFaceOn1",
             (Standard_Boolean (BRepAlgo_Section::*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepAlgo_Section::*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) const>(&BRepAlgo_Section::HasAncestorFaceOn1),
             R"#(Identifies the ancestor faces of the new intersection edge E resulting from the last computation performed in this framework, that is, the faces of the two original shapes on which the edge E lies: - HasAncestorFaceOn1 gives the ancestor face in the first shape, and These functions return: - true if an ancestor face F is found, or - false if not. An ancestor face is identifiable for the edge E if the three following conditions are satisfied: - the first part on which this algorithm performed its last computation is a shape, that is, it was not given as a surface or a plane at the time of construction of this algorithm or at a later time by the Init1 function, - E is one of the elementary edges built by the last computation of this section algorithm, - the edge E is built on an intersection curve. In other words, E is a new edge built on the intersection curve, not on edges belonging to the intersecting shapes. To use these functions properly, you have to test the returned Boolean value before using the ancestor face: F is significant only if the returned Boolean value equals true.)#"  , py::arg("E"),  py::arg("F"))
        .def("HasAncestorFaceOn2",
             (Standard_Boolean (BRepAlgo_Section::*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepAlgo_Section::*)( const TopoDS_Shape & ,  TopoDS_Shape &  ) const>(&BRepAlgo_Section::HasAncestorFaceOn2),
             R"#(Identifies the ancestor faces of the new intersection edge E resulting from the last computation performed in this framework, that is, the faces of the two original shapes on which the edge E lies: - HasAncestorFaceOn2 gives the ancestor face in the second shape. These functions return: - true if an ancestor face F is found, or - false if not. An ancestor face is identifiable for the edge E if the three following conditions are satisfied: - the first part on which this algorithm performed its last computation is a shape, that is, it was not given as a surface or a plane at the time of construction of this algorithm or at a later time by the Init1 function, - E is one of the elementary edges built by the last computation of this section algorithm, - the edge E is built on an intersection curve. In other words, E is a new edge built on the intersection curve, not on edges belonging to the intersecting shapes. To use these functions properly, you have to test the returned Boolean value before using the ancestor face: F is significant only if the returned Boolean value equals true.)#"  , py::arg("E"),  py::arg("F"))
;


    static_cast<py::class_<BRepAlgo_Common ,std::unique_ptr<BRepAlgo_Common>  , BRepAlgo_BooleanOperation >>(m.attr("BRepAlgo_Common"))
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("S1"),  py::arg("S2") )
;


    static_cast<py::class_<BRepAlgo_Fuse ,std::unique_ptr<BRepAlgo_Fuse>  , BRepAlgo_BooleanOperation >>(m.attr("BRepAlgo_Fuse"))
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("S1"),  py::arg("S2") )
;

    register_default_constructor<BRepAlgo ,std::unique_ptr<BRepAlgo>>(m,"BRepAlgo");

    static_cast<py::class_<BRepAlgo ,std::unique_ptr<BRepAlgo>  >>(m.attr("BRepAlgo"))
        .def_static("ConcatenateWire_s",
                    (TopoDS_Wire (*)( const TopoDS_Wire & ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<TopoDS_Wire (*)( const TopoDS_Wire & ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&BRepAlgo::ConcatenateWire),
                    R"#(this method makes a wire whose edges are C1 from a Wire whose edges could be G1. It removes a vertex between G1 edges. Option can be G1 or C1.)#"  , py::arg("Wire"),  py::arg("Option"),  py::arg("AngularTolerance")=static_cast<const Standard_Real>(1.0e-4))
        .def_static("ConcatenateWireC0_s",
                    (TopoDS_Edge (*)( const TopoDS_Wire &  ) ) static_cast<TopoDS_Edge (*)( const TopoDS_Wire &  ) >(&BRepAlgo::ConcatenateWireC0),
                    R"#(this method makes an edge from a wire. Junction points between edges of wire may be sharp, resulting curve of the resulting edge may be C0.)#"  , py::arg("Wire"))
        .def_static("IsValid_s",
                    (Standard_Boolean (*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape &  ) >(&BRepAlgo::IsValid),
                    R"#(Checks if the shape is "correct". If not, returns <Standard_False>, else returns <Standard_True>.)#"  , py::arg("S"))
        .def_static("IsValid_s",
                    (Standard_Boolean (*)(  const NCollection_List<TopoDS_Shape> & ,  const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (*)(  const NCollection_List<TopoDS_Shape> & ,  const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepAlgo::IsValid),
                    R"#(Checks if the Generated and Modified Faces from the shapes <arguments> in the shape <result> are "correct". The args may be empty, then all faces will be checked. If <Closed> is True, only closed shape are valid. If <GeomCtrl> is False the geometry of new vertices and edges are not verified and the auto-intersection of new wires are not searched.)#"  , py::arg("theArgs"),  py::arg("theResult"),  py::arg("closedSolid")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("GeomCtrl")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("IsTopologicallyValid_s",
                    (Standard_Boolean (*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape &  ) >(&BRepAlgo::IsTopologicallyValid),
                    R"#(Checks if the shape is "correct". If not, returns <Standard_False>, else returns <Standard_True>. This method differs from the previous one in the fact that no geometric contols (intersection of wires, pcurve validity) are performed.)#"  , py::arg("S"))
;


    static_cast<py::class_<BRepAlgo_EdgeConnector ,opencascade::handle<BRepAlgo_EdgeConnector>  , Standard_Transient >>(m.attr("BRepAlgo_EdgeConnector"))
        .def(py::init<  >()  )
        .def("Add",
             (void (BRepAlgo_EdgeConnector::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepAlgo_EdgeConnector::*)( const TopoDS_Edge &  ) >(&BRepAlgo_EdgeConnector::Add),
             R"#(None)#"  , py::arg("e"))
        .def("Add",
             (void (BRepAlgo_EdgeConnector::*)( NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgo_EdgeConnector::*)( NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgo_EdgeConnector::Add),
             R"#(None)#"  , py::arg("LOEdge"))
        .def("AddStart",
             (void (BRepAlgo_EdgeConnector::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_EdgeConnector::*)( const TopoDS_Shape &  ) >(&BRepAlgo_EdgeConnector::AddStart),
             R"#(None)#"  , py::arg("e"))
        .def("AddStart",
             (void (BRepAlgo_EdgeConnector::*)( NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgo_EdgeConnector::*)( NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgo_EdgeConnector::AddStart),
             R"#(None)#"  , py::arg("LOEdge"))
        .def("ClearStartElement",
             (void (BRepAlgo_EdgeConnector::*)() ) static_cast<void (BRepAlgo_EdgeConnector::*)() >(&BRepAlgo_EdgeConnector::ClearStartElement),
             R"#(None)#" )
        .def("MakeBlock",
             (TopTools_ListOfShape & (BRepAlgo_EdgeConnector::*)() ) static_cast<TopTools_ListOfShape & (BRepAlgo_EdgeConnector::*)() >(&BRepAlgo_EdgeConnector::MakeBlock),
             R"#(returns a list of wire non standard)#" )
        .def("Done",
             (void (BRepAlgo_EdgeConnector::*)() ) static_cast<void (BRepAlgo_EdgeConnector::*)() >(&BRepAlgo_EdgeConnector::Done),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (BRepAlgo_EdgeConnector::*)() const) static_cast<Standard_Boolean (BRepAlgo_EdgeConnector::*)() const>(&BRepAlgo_EdgeConnector::IsDone),
             R"#(NYI returns true if proceeded to MakeBlock())#" )
        .def("IsWire",
             (Standard_Boolean (BRepAlgo_EdgeConnector::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepAlgo_EdgeConnector::*)( const TopoDS_Shape &  ) >(&BRepAlgo_EdgeConnector::IsWire),
             R"#(NYI returns true if W is a Wire standard. W must belong to the list returned by MakeBlock.)#"  , py::arg("W"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepAlgo_EdgeConnector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepAlgo_EdgeConnector::*)() const>(&BRepAlgo_EdgeConnector::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepAlgo_EdgeConnector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepAlgo_EdgeConnector::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<BRepAlgo_Tool ,std::unique_ptr<BRepAlgo_Tool>>(m,"BRepAlgo_Tool");

    static_cast<py::class_<BRepAlgo_Tool ,std::unique_ptr<BRepAlgo_Tool>  >>(m.attr("BRepAlgo_Tool"))
        .def_static("Deboucle3D_s",
                    (TopoDS_Shape (*)( const TopoDS_Shape & ,   const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) ) static_cast<TopoDS_Shape (*)( const TopoDS_Shape & ,   const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> &  ) >(&BRepAlgo_Tool::Deboucle3D),
                    R"#(Remove the non valid part of an offsetshape 1 - Remove all the free boundary and the faces connex to such edges. 2 - Remove all the shapes not valid in the result (according to the side of offseting) in this verion only the first point is implemented.)#"  , py::arg("S"),  py::arg("Boundary"))
;


    static_cast<py::class_<BRepAlgo_AsDes ,opencascade::handle<BRepAlgo_AsDes>  , Standard_Transient >>(m.attr("BRepAlgo_AsDes"))
        .def(py::init<  >()  )
        .def("Clear",
             (void (BRepAlgo_AsDes::*)() ) static_cast<void (BRepAlgo_AsDes::*)() >(&BRepAlgo_AsDes::Clear),
             R"#(None)#" )
        .def("Add",
             (void (BRepAlgo_AsDes::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_AsDes::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_AsDes::Add),
             R"#(Stores <SS> as a futur subshape of <S>.)#"  , py::arg("S"),  py::arg("SS"))
        .def("Add",
             (void (BRepAlgo_AsDes::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepAlgo_AsDes::*)( const TopoDS_Shape & ,   const NCollection_List<TopoDS_Shape> &  ) >(&BRepAlgo_AsDes::Add),
             R"#(Stores <SS> as futurs SubShapes of <S>.)#"  , py::arg("S"),  py::arg("SS"))
        .def("HasAscendant",
             (Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) const>(&BRepAlgo_AsDes::HasAscendant),
             R"#(None)#"  , py::arg("S"))
        .def("HasDescendant",
             (Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) const>(&BRepAlgo_AsDes::HasDescendant),
             R"#(None)#"  , py::arg("S"))
        .def("Ascendant",
             (const TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) const) static_cast<const TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) const>(&BRepAlgo_AsDes::Ascendant),
             R"#(Returns the Shape containing <S>.)#"  , py::arg("S"))
        .def("Descendant",
             (const TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) const) static_cast<const TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) const>(&BRepAlgo_AsDes::Descendant),
             R"#(Returns futur subhapes of <S>.)#"  , py::arg("S"))
        .def("ChangeDescendant",
             (TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) ) static_cast<TopTools_ListOfShape & (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) >(&BRepAlgo_AsDes::ChangeDescendant),
             R"#(Returns futur subhapes of <S>.)#"  , py::arg("S"))
        .def("Replace",
             (void (BRepAlgo_AsDes::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_AsDes::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepAlgo_AsDes::Replace),
             R"#(Replace <OldS> by <NewS>. <OldS> disapear from <me>.)#"  , py::arg("OldS"),  py::arg("NewS"))
        .def("Remove",
             (void (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepAlgo_AsDes::*)( const TopoDS_Shape &  ) >(&BRepAlgo_AsDes::Remove),
             R"#(Remove <S> from me.)#"  , py::arg("S"))
        .def("HasCommonDescendant",
             (Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> &  ) const) static_cast<Standard_Boolean (BRepAlgo_AsDes::*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  NCollection_List<TopoDS_Shape> &  ) const>(&BRepAlgo_AsDes::HasCommonDescendant),
             R"#(Returns True if (S1> and <S2> has common Descendants. Stores in <LC> the Commons Descendants.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("LC"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepAlgo_AsDes::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepAlgo_AsDes::*)() const>(&BRepAlgo_AsDes::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepAlgo_AsDes::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepAlgo_AsDes::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/BRepAlgo_BooleanOperations.hxx
// ./opencascade/BRepAlgo_DSAccess.hxx
// ./opencascade/BRepAlgo_DataMapIteratorOfDataMapOfShapeBoolean.hxx
// ./opencascade/BRepAlgo_SequenceOfSequenceOfInteger.hxx
// ./opencascade/BRepAlgo_FaceRestrictor.hxx
// ./opencascade/BRepAlgo.hxx
// ./opencascade/BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference.hxx
// ./opencascade/BRepAlgo_Cut.hxx
// ./opencascade/BRepAlgo_NormalProjection.hxx
// ./opencascade/BRepAlgo_Tool.hxx
// ./opencascade/BRepAlgo_Section.hxx
// ./opencascade/BRepAlgo_Loop.hxx
// ./opencascade/BRepAlgo_EdgeConnector.hxx
// ./opencascade/BRepAlgo_DataMapOfShapeBoolean.hxx
// ./opencascade/BRepAlgo_Common.hxx
// ./opencascade/BRepAlgo_DataMapOfShapeInterference.hxx
// ./opencascade/BRepAlgo_CheckStatus.hxx
// ./opencascade/BRepAlgo_BooleanOperation.hxx
// ./opencascade/BRepAlgo_AsDes.hxx
// ./opencascade/BRepAlgo_Image.hxx
// ./opencascade/BRepAlgo_Fuse.hxx

// operators

// register typdefs
// ./opencascade/BRepAlgo_BooleanOperations.hxx
// ./opencascade/BRepAlgo_DSAccess.hxx
// ./opencascade/BRepAlgo_DataMapIteratorOfDataMapOfShapeBoolean.hxx
// ./opencascade/BRepAlgo_SequenceOfSequenceOfInteger.hxx
    register_template_NCollection_Sequence<TColStd_SequenceOfInteger>(m,"BRepAlgo_SequenceOfSequenceOfInteger");  
// ./opencascade/BRepAlgo_FaceRestrictor.hxx
// ./opencascade/BRepAlgo.hxx
// ./opencascade/BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference.hxx
// ./opencascade/BRepAlgo_Cut.hxx
// ./opencascade/BRepAlgo_NormalProjection.hxx
// ./opencascade/BRepAlgo_Tool.hxx
// ./opencascade/BRepAlgo_Section.hxx
// ./opencascade/BRepAlgo_Loop.hxx
// ./opencascade/BRepAlgo_EdgeConnector.hxx
// ./opencascade/BRepAlgo_DataMapOfShapeBoolean.hxx
    register_template_NCollection_DataMap<TopoDS_Shape, Standard_Boolean, TopTools_ShapeMapHasher>(m,"BRepAlgo_DataMapOfShapeBoolean");  
// ./opencascade/BRepAlgo_Common.hxx
// ./opencascade/BRepAlgo_DataMapOfShapeInterference.hxx
// ./opencascade/BRepAlgo_CheckStatus.hxx
// ./opencascade/BRepAlgo_BooleanOperation.hxx
// ./opencascade/BRepAlgo_AsDes.hxx
// ./opencascade/BRepAlgo_Image.hxx
// ./opencascade/BRepAlgo_Fuse.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
