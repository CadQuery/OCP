
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Dir.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt.hxx>
#include <IntTools_Context.hxx>
#include <gp_Pnt2d.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <IntTools_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <IntTools_Context.hxx>
#include <TopoDS_Solid.hxx>
#include <IntTools_Range.hxx>
#include <TopoDS_Shell.hxx>
#include <Message_Report.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Vec.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <IntTools_Context.hxx>
#include <BOPTools_Set.hxx>

// module includes
#include <BOPTools_AlgoTools.hxx>
#include <BOPTools_AlgoTools2D.hxx>
#include <BOPTools_AlgoTools3D.hxx>
#include <BOPTools_BoxSelector.hxx>
#include <BOPTools_BoxTree.hxx>
#include <BOPTools_ConnexityBlock.hxx>
#include <BOPTools_CoupleOfShape.hxx>
#include <BOPTools_IndexedDataMapOfSetShape.hxx>
#include <BOPTools_ListOfConnexityBlock.hxx>
#include <BOPTools_ListOfCoupleOfShape.hxx>
#include <BOPTools_MapOfSet.hxx>
#include <BOPTools_Parallel.hxx>
#include <BOPTools_Set.hxx>
#include <BOPTools_SetMapHasher.hxx>

// template related includes
// ./opencascade/BOPTools_MapOfSet.hxx
#include "NCollection.hxx"
// ./opencascade/BOPTools_BoxTree.hxx
#include "BOPTools.hxx"
// ./opencascade/BOPTools_BoxTree.hxx
#include "BOPTools.hxx"
// ./opencascade/BOPTools_BoxTree.hxx
#include "BOPTools.hxx"
// ./opencascade/BOPTools_IndexedDataMapOfSetShape.hxx
#include "NCollection.hxx"
// ./opencascade/BOPTools_ListOfCoupleOfShape.hxx
#include "NCollection.hxx"
// ./opencascade/BOPTools_ListOfConnexityBlock.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BOPTools(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BOPTools"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BOPTools_AlgoTools , shared_ptr<BOPTools_AlgoTools>>(m,"BOPTools_AlgoTools");

    static_cast<py::class_<BOPTools_AlgoTools , shared_ptr<BOPTools_AlgoTools>  >>(m.attr("BOPTools_AlgoTools"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ComputeVV_s",
                    (Standard_Integer (*)( const TopoDS_Vertex & ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<Standard_Integer (*)( const TopoDS_Vertex & ,  const gp_Pnt & ,  const Standard_Real  ) >(&BOPTools_AlgoTools::ComputeVV),
                    R"#(Intersects the vertex <theV1> with the point <theP> with tolerance <theTolP>. Returns the error status: - 0 - no error, meaning that the vertex intersects the point; - 1 - the distance between vertex and point is grater than the sum of tolerances.)#"  , py::arg("theV"),  py::arg("theP"),  py::arg("theTolP"))
        .def_static("ComputeVV_s",
                    (Standard_Integer (*)( const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const Standard_Real  ) ) static_cast<Standard_Integer (*)( const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const Standard_Real  ) >(&BOPTools_AlgoTools::ComputeVV),
                    R"#(Intersects the given vertices with given fuzzy value. Returns the error status: - 0 - no error, meaning that the vertices interferes with given tolerance; - 1 - the distance between vertices is grater than the sum of their tolerances.)#"  , py::arg("theV1"),  py::arg("theV2"),  py::arg("theFuzz")=static_cast<const Standard_Real>(Precision :: Confusion ( )))
        .def_static("MakeVertex_s",
                    (void (*)(  const NCollection_List<TopoDS_Shape> & ,  TopoDS_Vertex &  ) ) static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & ,  TopoDS_Vertex &  ) >(&BOPTools_AlgoTools::MakeVertex),
                    R"#(Makes the vertex in the middle of given vertices with the tolerance covering all tolerance spheres of vertices.)#"  , py::arg("theLV"),  py::arg("theV"))
        .def_static("MakeNewVertex_s",
                    (void (*)( const gp_Pnt & ,  const Standard_Real ,  TopoDS_Vertex &  ) ) static_cast<void (*)( const gp_Pnt & ,  const Standard_Real ,  TopoDS_Vertex &  ) >(&BOPTools_AlgoTools::MakeNewVertex),
                    R"#(Make a vertex using 3D-point <aP1> and 3D-tolerance value <aTol>)#"  , py::arg("aP1"),  py::arg("aTol"),  py::arg("aNewVertex"))
        .def_static("MakeNewVertex_s",
                    (void (*)( const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  TopoDS_Vertex &  ) ) static_cast<void (*)( const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  TopoDS_Vertex &  ) >(&BOPTools_AlgoTools::MakeNewVertex),
                    R"#(Make a vertex using couple of vertices <aV1, aV2>)#"  , py::arg("aV1"),  py::arg("aV2"),  py::arg("aNewVertex"))
        .def_static("MakeNewVertex_s",
                    (void (*)( const TopoDS_Edge & ,  const Standard_Real ,  const TopoDS_Edge & ,  const Standard_Real ,  TopoDS_Vertex &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const Standard_Real ,  const TopoDS_Edge & ,  const Standard_Real ,  TopoDS_Vertex &  ) >(&BOPTools_AlgoTools::MakeNewVertex),
                    R"#(Make a vertex in place of intersection between two edges <aE1, aE2> with parameters <aP1, aP2>)#"  , py::arg("aE1"),  py::arg("aP1"),  py::arg("aE2"),  py::arg("aP2"),  py::arg("aNewVertex"))
        .def_static("MakeNewVertex_s",
                    (void (*)( const TopoDS_Edge & ,  const Standard_Real ,  const TopoDS_Face & ,  TopoDS_Vertex &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const Standard_Real ,  const TopoDS_Face & ,  TopoDS_Vertex &  ) >(&BOPTools_AlgoTools::MakeNewVertex),
                    R"#(Make a vertex in place of intersection between the edge <aE1> with parameter <aP1> and the face <aF2>)#"  , py::arg("aE1"),  py::arg("aP1"),  py::arg("aF2"),  py::arg("aNewVertex"))
        .def_static("UpdateVertex_s",
                    (void (*)( const IntTools_Curve & ,  const Standard_Real ,  const TopoDS_Vertex &  ) ) static_cast<void (*)( const IntTools_Curve & ,  const Standard_Real ,  const TopoDS_Vertex &  ) >(&BOPTools_AlgoTools::UpdateVertex),
                    R"#(Update the tolerance value for vertex <aV> taking into account the fact that <aV> lays on the curve <aIC>)#"  , py::arg("aIC"),  py::arg("aT"),  py::arg("aV"))
        .def_static("UpdateVertex_s",
                    (void (*)( const TopoDS_Edge & ,  const Standard_Real ,  const TopoDS_Vertex &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const Standard_Real ,  const TopoDS_Vertex &  ) >(&BOPTools_AlgoTools::UpdateVertex),
                    R"#(Update the tolerance value for vertex <aV> taking into account the fact that <aV> lays on the edge <aE>)#"  , py::arg("aE"),  py::arg("aT"),  py::arg("aV"))
        .def_static("UpdateVertex_s",
                    (void (*)( const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) ) static_cast<void (*)( const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) >(&BOPTools_AlgoTools::UpdateVertex),
                    R"#(Update the tolerance value for vertex <aVN> taking into account the fact that <aVN> should cover tolerance zone of <aVF>)#"  , py::arg("aVF"),  py::arg("aVN"))
        .def_static("MakeEdge_s",
                    (void (*)( const IntTools_Curve & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real ,  TopoDS_Edge &  ) ) static_cast<void (*)( const IntTools_Curve & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real ,  TopoDS_Edge &  ) >(&BOPTools_AlgoTools::MakeEdge),
                    R"#(Makes the edge based on the given curve with given bounding vertices.)#"  , py::arg("theCurve"),  py::arg("theV1"),  py::arg("theT1"),  py::arg("theV2"),  py::arg("theT2"),  py::arg("theTolR3D"),  py::arg("theE"))
        .def_static("CopyEdge_s",
                    (TopoDS_Edge (*)( const TopoDS_Edge &  ) ) static_cast<TopoDS_Edge (*)( const TopoDS_Edge &  ) >(&BOPTools_AlgoTools::CopyEdge),
                    R"#(Makes a copy of <theEdge> with vertices.)#"  , py::arg("theEdge"))
        .def_static("MakeSplitEdge_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const TopoDS_Vertex & ,  const Standard_Real ,  TopoDS_Edge &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const TopoDS_Vertex & ,  const Standard_Real ,  TopoDS_Edge &  ) >(&BOPTools_AlgoTools::MakeSplitEdge),
                    R"#(Make the edge from base edge <aE1> and two vertices <aV1,aV2> at parameters <aP1,aP2>)#"  , py::arg("aE1"),  py::arg("aV1"),  py::arg("aP1"),  py::arg("aV2"),  py::arg("aP2"),  py::arg("aNewEdge"))
        .def_static("MakeSectEdge_s",
                    (void (*)( const IntTools_Curve & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const TopoDS_Vertex & ,  const Standard_Real ,  TopoDS_Edge &  ) ) static_cast<void (*)( const IntTools_Curve & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const TopoDS_Vertex & ,  const Standard_Real ,  TopoDS_Edge &  ) >(&BOPTools_AlgoTools::MakeSectEdge),
                    R"#(Make the edge from 3D-Curve <aIC> and two vertices <aV1,aV2> at parameters <aP1,aP2>)#"  , py::arg("aIC"),  py::arg("aV1"),  py::arg("aP1"),  py::arg("aV2"),  py::arg("aP2"),  py::arg("aNewEdge"))
        .def_static("ComputeState_s",
                    (TopAbs_State (*)( const gp_Pnt & ,  const TopoDS_Solid & ,  const Standard_Real ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<TopAbs_State (*)( const gp_Pnt & ,  const TopoDS_Solid & ,  const Standard_Real ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::ComputeState),
                    R"#(Computes the 3-D state of the point thePoint toward solid theSolid. theTol - value of precision of computation theContext- cahed geometrical tools Returns 3-D state.)#"  , py::arg("thePoint"),  py::arg("theSolid"),  py::arg("theTol"),  py::arg("theContext"))
        .def_static("ComputeState_s",
                    (TopAbs_State (*)( const TopoDS_Vertex & ,  const TopoDS_Solid & ,  const Standard_Real ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<TopAbs_State (*)( const TopoDS_Vertex & ,  const TopoDS_Solid & ,  const Standard_Real ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::ComputeState),
                    R"#(Computes the 3-D state of the vertex theVertex toward solid theSolid. theTol - value of precision of computation theContext- cahed geometrical tools Returns 3-D state.)#"  , py::arg("theVertex"),  py::arg("theSolid"),  py::arg("theTol"),  py::arg("theContext"))
        .def_static("ComputeState_s",
                    (TopAbs_State (*)( const TopoDS_Edge & ,  const TopoDS_Solid & ,  const Standard_Real ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<TopAbs_State (*)( const TopoDS_Edge & ,  const TopoDS_Solid & ,  const Standard_Real ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::ComputeState),
                    R"#(Computes the 3-D state of the edge theEdge toward solid theSolid. theTol - value of precision of computation theContext- cahed geometrical tools Returns 3-D state.)#"  , py::arg("theEdge"),  py::arg("theSolid"),  py::arg("theTol"),  py::arg("theContext"))
        .def_static("ComputeState_s",
                    (TopAbs_State (*)( const TopoDS_Face & ,  const TopoDS_Solid & ,  const Standard_Real ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<TopAbs_State (*)( const TopoDS_Face & ,  const TopoDS_Solid & ,  const Standard_Real ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::ComputeState),
                    R"#(Computes the 3-D state of the face theFace toward solid theSolid. theTol - value of precision of computation theBounds - set of edges of <theSolid> to avoid theContext- cahed geometrical tools Returns 3-D state.)#"  , py::arg("theFace"),  py::arg("theSolid"),  py::arg("theTol"),  py::arg("theBounds"),  py::arg("theContext"))
        .def_static("ComputeStateByOnePoint_s",
                    (TopAbs_State (*)( const TopoDS_Shape & ,  const TopoDS_Solid & ,  const Standard_Real ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<TopAbs_State (*)( const TopoDS_Shape & ,  const TopoDS_Solid & ,  const Standard_Real ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::ComputeStateByOnePoint),
                    R"#(Computes the 3-D state of the shape theShape toward solid theSolid. theTol - value of precision of computation theContext- cahed geometrical tools Returns 3-D state.)#"  , py::arg("theShape"),  py::arg("theSolid"),  py::arg("theTol"),  py::arg("theContext"))
        .def_static("GetFaceOff_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  NCollection_List<BOPTools_CoupleOfShape> & ,  TopoDS_Face & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  NCollection_List<BOPTools_CoupleOfShape> & ,  TopoDS_Face & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::GetFaceOff),
                    R"#(For the face theFace and its edge theEdge finds the face suitable to produce shell. theLCEF - set of faces to search. All faces from theLCEF must share edge theEdge)#"  , py::arg("theEdge"),  py::arg("theFace"),  py::arg("theLCEF"),  py::arg("theFaceOff"),  py::arg("theContext"))
        .def_static("IsInternalFace_s",
                    (Standard_Integer (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::IsInternalFace),
                    R"#(Returns True if the face theFace is inside of the couple of faces theFace1, theFace2. The faces theFace, theFace1, theFace2 must share the edge theEdge Return values: * 0 state is not IN * 1 state is IN * 2 state can not be found by the method of angles)#"  , py::arg("theFace"),  py::arg("theEdge"),  py::arg("theFace1"),  py::arg("theFace2"),  py::arg("theContext"))
        .def_static("IsInternalFace_s",
                    (Standard_Integer (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  NCollection_List<TopoDS_Shape> & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  NCollection_List<TopoDS_Shape> & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::IsInternalFace),
                    R"#(Returns True if the face theFace is inside of the appropriate couple of faces (from the set theLF) . The faces of the set theLF and theFace must share the edge theEdge * 0 state is not IN * 1 state is IN * 2 state can not be found by the method of angles)#"  , py::arg("theFace"),  py::arg("theEdge"),  py::arg("theLF"),  py::arg("theContext"))
        .def_static("IsInternalFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Solid & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  const Standard_Real ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Solid & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ,  const Standard_Real ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::IsInternalFace),
                    R"#(Returns True if the face theFace is inside the solid theSolid. theMEF - Map Edge/Faces for theSolid theTol - value of precision of computation theContext- cahed geometrical tools)#"  , py::arg("theFace"),  py::arg("theSolid"),  py::arg("theMEF"),  py::arg("theTol"),  py::arg("theContext"))
        .def_static("MakePCurve_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const IntTools_Curve & ,  const Standard_Boolean ,  const Standard_Boolean ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const TopoDS_Face & ,  const IntTools_Curve & ,  const Standard_Boolean ,  const Standard_Boolean ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::MakePCurve),
                    R"#(Makes 2d curve of the edge <theE> on the faces <theF1> and <theF2>. <theContext> - storage for caching the geometrical tools)#"  , py::arg("theE"),  py::arg("theF1"),  py::arg("theF2"),  py::arg("theCurve"),  py::arg("thePC1"),  py::arg("thePC2"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("IsHole_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BOPTools_AlgoTools::IsHole),
                    R"#(Checks if the wire is a hole for the face.)#"  , py::arg("theW"),  py::arg("theF"))
        .def_static("IsSplitToReverse_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const opencascade::handle<IntTools_Context> & ,  Standard_Integer *  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const opencascade::handle<IntTools_Context> & ,  Standard_Integer *  ) >(&BOPTools_AlgoTools::IsSplitToReverse),
                    R"#(Checks if the direction of the split shape is opposite to the direction of the original shape. The method is an overload for (Edge,Edge) and (Face,Face) corresponding methods and checks only these types of shapes. For faces the method checks if normal directions are opposite. For edges the method checks if tangent vectors are opposite.)#"  , py::arg("theSplit"),  py::arg("theShape"),  py::arg("theContext"),  py::arg("theError")=static_cast<Standard_Integer *>(NULL))
        .def_static("IsSplitToReverseWithWarn_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const opencascade::handle<IntTools_Context> & ,  const opencascade::handle<Message_Report> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const TopoDS_Shape & ,  const opencascade::handle<IntTools_Context> & ,  const opencascade::handle<Message_Report> &  ) >(&BOPTools_AlgoTools::IsSplitToReverseWithWarn),
                    R"#(Add-on for the *IsSplitToReverse()* to check for its errors and in case of any add the *BOPAlgo_AlertUnableToOrientTheShape* warning to the report.)#"  , py::arg("theSplit"),  py::arg("theShape"),  py::arg("theContext"),  py::arg("theReport")=static_cast<const opencascade::handle<Message_Report> &>(NULL))
        .def_static("IsSplitToReverse_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> & ,  Standard_Integer *  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> & ,  Standard_Integer *  ) >(&BOPTools_AlgoTools::IsSplitToReverse),
                    R"#(Checks if the normal direction of the split face is opposite to the normal direction of the original face. The normal directions for both faces are taken in the same point - point inside the split face is projected onto the original face. Returns TRUE if the normals do not coincide, meaning the necessity to revert the orientation of the split face to match the direction of the original face.)#"  , py::arg("theSplit"),  py::arg("theShape"),  py::arg("theContext"),  py::arg("theError")=static_cast<Standard_Integer *>(NULL))
        .def_static("IsSplitToReverse_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const opencascade::handle<IntTools_Context> & ,  Standard_Integer *  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const opencascade::handle<IntTools_Context> & ,  Standard_Integer *  ) >(&BOPTools_AlgoTools::IsSplitToReverse),
                    R"#(Checks if the tangent vector of the split edge is opposite to the tangent vector of the original edge. The tangent vectors for both edges are computed in the same point - point inside the split edge is projected onto the original edge. Returns TRUE if the tangent vectors do not coincide, meaning the necessity to revert the orientation of the split edge to match the direction of the original edge.)#"  , py::arg("theSplit"),  py::arg("theShape"),  py::arg("theContext"),  py::arg("theError")=static_cast<Standard_Integer *>(NULL))
        .def_static("Sense_s",
                    (Standard_Integer (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::Sense),
                    R"#(Checks if the normals direction of the given faces computed near the shared edge coincide. Returns the status of operation: * 0 - in case of error (shared edge not found or directions are not collinear) * 1 - normal directions coincide; * -1 - normal directions are opposite.)#"  , py::arg("theF1"),  py::arg("theF2"),  py::arg("theContext"))
        .def_static("MakeConnexityBlock_s",
                    (void (*)( NCollection_List<TopoDS_Shape> & ,  NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_List<TopoDS_Shape> & ,  const opencascade::handle<NCollection_BaseAllocator> &  ) ) static_cast<void (*)( NCollection_List<TopoDS_Shape> & ,  NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  NCollection_List<TopoDS_Shape> & ,  const opencascade::handle<NCollection_BaseAllocator> &  ) >(&BOPTools_AlgoTools::MakeConnexityBlock),
                    R"#(For the list of faces theLS build block theLSCB in terms of connexity by edges theMapAvoid - set of edges to avoid for the treatment)#"  , py::arg("theLS"),  py::arg("theMapAvoid"),  py::arg("theLSCB"),  py::arg("theAllocator"))
        .def_static("MakeConnexityBlocks_s",
                    (void (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  NCollection_List<TopoDS_Shape> &  ) >(&BOPTools_AlgoTools::MakeConnexityBlocks),
                    R"#(For the compound <theS> builds the blocks (compounds) of elements of type <theElementType> connected through the shapes of the type <theConnectionType>. The blocks are stored into the list <theLCB>.)#"  , py::arg("theS"),  py::arg("theConnectionType"),  py::arg("theElementType"),  py::arg("theLCB"))
        .def_static("MakeConnexityBlocks_s",
                    (void (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  NCollection_List<TopTools_ListOfShape> & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> &  ) ) static_cast<void (*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  NCollection_List<TopTools_ListOfShape> & ,  NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> &  ) >(&BOPTools_AlgoTools::MakeConnexityBlocks),
                    R"#(For the compound <theS> builds the blocks (compounds) of elements of type <theElementType> connected through the shapes of the type <theConnectionType>. The blocks are stored into the list of lists <theLCB>. Returns also the connection map <theConnectionMap>, filled during operation.)#"  , py::arg("theS"),  py::arg("theConnectionType"),  py::arg("theElementType"),  py::arg("theLCB"),  py::arg("theConnectionMap"))
        .def_static("MakeConnexityBlocks_s",
                    (void (*)(  const NCollection_List<TopoDS_Shape> & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  NCollection_List<BOPTools_ConnexityBlock> &  ) ) static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum ,  NCollection_List<BOPTools_ConnexityBlock> &  ) >(&BOPTools_AlgoTools::MakeConnexityBlocks),
                    R"#(Makes connexity blocks of elements of the given type with the given type of the connecting elements. The blocks are checked on regularity (multi-connectivity) and stored to the list of blocks <theLCB>.)#"  , py::arg("theLS"),  py::arg("theConnectionType"),  py::arg("theElementType"),  py::arg("theLCB"))
        .def_static("OrientEdgesOnWire_s",
                    (void (*)( TopoDS_Shape &  ) ) static_cast<void (*)( TopoDS_Shape &  ) >(&BOPTools_AlgoTools::OrientEdgesOnWire),
                    R"#(Correctly orients edges on the wire)#"  , py::arg("theWire"))
        .def_static("OrientFacesOnShell_s",
                    (void (*)( TopoDS_Shape &  ) ) static_cast<void (*)( TopoDS_Shape &  ) >(&BOPTools_AlgoTools::OrientFacesOnShell),
                    R"#(Correctly orients faces on the shell)#"  , py::arg("theShell"))
        .def_static("CorrectTolerances_s",
                    (void (*)( const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (*)( const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&BOPTools_AlgoTools::CorrectTolerances),
                    R"#(Provides valid values of tolerances for the shape <theS> <theTolMax> is max value of the tolerance that can be accepted for correction. If real value of the tolerance will be greater than <aTolMax>, the correction does not perform.)#"  , py::arg("theS"),  py::arg("theMapToAvoid"),  py::arg("theTolMax")=static_cast<const Standard_Real>(0.0001),  py::arg("theRunParallel")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("CorrectCurveOnSurface_s",
                    (void (*)( const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (*)( const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&BOPTools_AlgoTools::CorrectCurveOnSurface),
                    R"#(Provides valid values of tolerances for the shape <theS> in terms of BRepCheck_InvalidCurveOnSurface.)#"  , py::arg("theS"),  py::arg("theMapToAvoid"),  py::arg("theTolMax")=static_cast<const Standard_Real>(0.0001),  py::arg("theRunParallel")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("CorrectPointOnCurve_s",
                    (void (*)( const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (*)( const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&BOPTools_AlgoTools::CorrectPointOnCurve),
                    R"#(Provides valid values of tolerances for the shape <theS> in terms of BRepCheck_InvalidPointOnCurve.)#"  , py::arg("theS"),  py::arg("theMapToAvoid"),  py::arg("theTolMax")=static_cast<const Standard_Real>(0.0001),  py::arg("theRunParallel")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("CorrectShapeTolerances_s",
                    (void (*)( const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const Standard_Boolean  ) ) static_cast<void (*)( const TopoDS_Shape & ,   const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const Standard_Boolean  ) >(&BOPTools_AlgoTools::CorrectShapeTolerances),
                    R"#(Corrects tolerance values of the sub-shapes of the shape <theS> if needed.)#"  , py::arg("theS"),  py::arg("theMapToAvoid"),  py::arg("theRunParallel")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("AreFacesSameDomain_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> & ,  const Standard_Real  ) >(&BOPTools_AlgoTools::AreFacesSameDomain),
                    R"#(Checks if the given faces are same-domain, i.e. coincide.)#"  , py::arg("theF1"),  py::arg("theF2"),  py::arg("theContext"),  py::arg("theFuzz")=static_cast<const Standard_Real>(Precision :: Confusion ( )))
        .def_static("GetEdgeOff_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  TopoDS_Edge &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  TopoDS_Edge &  ) >(&BOPTools_AlgoTools::GetEdgeOff),
                    R"#(Returns True if the face theFace contains the edge theEdge but with opposite orientation. If the method returns True theEdgeOff is the edge founded)#"  , py::arg("theEdge"),  py::arg("theFace"),  py::arg("theEdgeOff"))
        .def_static("GetEdgeOnFace_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  TopoDS_Edge &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  TopoDS_Edge &  ) >(&BOPTools_AlgoTools::GetEdgeOnFace),
                    R"#(For the face theFace gets the edge theEdgeOnF that is the same as theEdge Returns True if such edge exists Returns False if there is no such edge)#"  , py::arg("theEdge"),  py::arg("theFace"),  py::arg("theEdgeOnF"))
        .def_static("CorrectRange_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const IntTools_Range & ,  IntTools_Range &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const IntTools_Range & ,  IntTools_Range &  ) >(&BOPTools_AlgoTools::CorrectRange),
                    R"#(Correct shrunk range <aSR> taking into account 3D-curve resolution and corresponding tolerance values of <aE1>, <aE2>)#"  , py::arg("aE1"),  py::arg("aE2"),  py::arg("aSR"),  py::arg("aNewSR"))
        .def_static("CorrectRange_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const IntTools_Range & ,  IntTools_Range &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const IntTools_Range & ,  IntTools_Range &  ) >(&BOPTools_AlgoTools::CorrectRange),
                    R"#(Correct shrunk range <aSR> taking into account 3D-curve resolution and corresponding tolerance values of <aE>, <aF>)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aSR"),  py::arg("aNewSR"))
        .def_static("IsMicroEdge_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const opencascade::handle<IntTools_Context> & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const opencascade::handle<IntTools_Context> & ,  const Standard_Boolean  ) >(&BOPTools_AlgoTools::IsMicroEdge),
                    R"#(Checks if it is possible to compute shrunk range for the edge <aE> Flag <theCheckSplittable> defines whether to take into account the possibility to split the edge or not.)#"  , py::arg("theEdge"),  py::arg("theContext"),  py::arg("theCheckSplittable")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("IsInvertedSolid_s",
                    (Standard_Boolean (*)( const TopoDS_Solid &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Solid &  ) >(&BOPTools_AlgoTools::IsInvertedSolid),
                    R"#(Returns true if the solid <theSolid> is inverted)#"  , py::arg("theSolid"))
        .def_static("ComputeTolerance_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  Standard_Real & ,  Standard_Real &  ) >(&BOPTools_AlgoTools::ComputeTolerance),
                    R"#(Computes the necessary value of the tolerance for the edge)#"  , py::arg("theFace"),  py::arg("theEdge"),  py::arg("theMaxDist"),  py::arg("theMaxPar"))
        .def_static("MakeContainer_s",
                    (void (*)( const TopAbs_ShapeEnum ,  TopoDS_Shape &  ) ) static_cast<void (*)( const TopAbs_ShapeEnum ,  TopoDS_Shape &  ) >(&BOPTools_AlgoTools::MakeContainer),
                    R"#(Makes empty container of requested type)#"  , py::arg("theType"),  py::arg("theShape"))
        .def_static("PointOnEdge_s",
                    (void (*)( const TopoDS_Edge & ,  const Standard_Real ,  gp_Pnt &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const Standard_Real ,  gp_Pnt &  ) >(&BOPTools_AlgoTools::PointOnEdge),
                    R"#(Compute a 3D-point on the edge <aEdge> at parameter <aPrm>)#"  , py::arg("aEdge"),  py::arg("aPrm"),  py::arg("aP"))
        .def_static("IsBlockInOnFace_s",
                    (Standard_Boolean (*)( const IntTools_Range & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Boolean (*)( const IntTools_Range & ,  const TopoDS_Face & ,  const TopoDS_Edge & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools::IsBlockInOnFace),
                    R"#(Returns TRUE if PaveBlock <aPB> lays on the face <aF>, i.e the <PB> is IN or ON in 2D of <aF>)#"  , py::arg("aShR"),  py::arg("aF"),  py::arg("aE"),  py::arg("aContext"))
        .def_static("Dimension_s",
                    (Standard_Integer (*)( const TopoDS_Shape &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Shape &  ) >(&BOPTools_AlgoTools::Dimension),
                    R"#(Retutns dimension of the shape <theS>.)#"  , py::arg("theS"))
        .def_static("IsOpenShell_s",
                    (Standard_Boolean (*)( const TopoDS_Shell &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shell &  ) >(&BOPTools_AlgoTools::IsOpenShell),
                    R"#(Returns true if the shell <theShell> is open)#"  , py::arg("theShell"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPTools_AlgoTools2D , shared_ptr<BOPTools_AlgoTools2D>>(m,"BOPTools_AlgoTools2D");

    static_cast<py::class_<BOPTools_AlgoTools2D , shared_ptr<BOPTools_AlgoTools2D>  >>(m.attr("BOPTools_AlgoTools2D"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("BuildPCurveForEdgeOnFace_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools2D::BuildPCurveForEdgeOnFace),
                    R"#(Compute P-Curve for the edge <aE> on the face <aF>. Raises exception Standard_ConstructionError if projection algorithm fails. <theContext> - storage for caching the geometrical tools)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("EdgeTangent_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const Standard_Real ,  gp_Vec &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const Standard_Real ,  gp_Vec &  ) >(&BOPTools_AlgoTools2D::EdgeTangent),
                    R"#(Compute tangent for the edge <aE> [in 3D] at parameter <aT>)#"  , py::arg("anE"),  py::arg("aT"),  py::arg("Tau"))
        .def_static("HasCurveOnSurface_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&BOPTools_AlgoTools2D::HasCurveOnSurface),
                    R"#(Returns TRUE if the edge <aE> has P-Curve <aC> on surface <aF> . [aFirst, aLast] - range of the P-Curve [aToler] - reached tolerance If the P-Curve does not exist, aC.IsNull()=TRUE.)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aC"),  py::arg("aFirst"),  py::arg("aLast"),  py::arg("aToler"))
        .def_static("HasCurveOnSurface_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BOPTools_AlgoTools2D::HasCurveOnSurface),
                    R"#(Returns TRUE if the edge <aE> has P-Curve <aC> on surface <aF> . If the P-Curve does not exist, aC.IsNull()=TRUE.)#"  , py::arg("aE"),  py::arg("aF"))
        .def_static("AdjustPCurveOnFace_s",
                    (void (*)( const TopoDS_Face & ,  const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (*)( const TopoDS_Face & ,  const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools2D::AdjustPCurveOnFace),
                    R"#(Adjust P-Curve <theC2D> (3D-curve <theC3D>) on surface of the face <theF>. <theContext> - storage for caching the geometrical tools)#"  , py::arg("theF"),  py::arg("theC3D"),  py::arg("theC2D"),  py::arg("theC2DA"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("AdjustPCurveOnFace_s",
                    (void (*)( const TopoDS_Face & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Geom2d_Curve> & ,  opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (*)( const TopoDS_Face & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Geom2d_Curve> & ,  opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools2D::AdjustPCurveOnFace),
                    R"#(Adjust P-Curve <aC2D> (3D-curve <C3D>) on surface <aF> . [aT1, aT2] - range to adjust <theContext> - storage for caching the geometrical tools)#"  , py::arg("theF"),  py::arg("theFirst"),  py::arg("theLast"),  py::arg("theC2D"),  py::arg("theC2DA"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("AdjustPCurveOnSurf_s",
                    (void (*)( const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Geom2d_Curve> & ,  opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (*)( const BRepAdaptor_Surface & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Geom2d_Curve> & ,  opencascade::handle<Geom2d_Curve> &  ) >(&BOPTools_AlgoTools2D::AdjustPCurveOnSurf),
                    R"#(Adjust P-Curve <aC2D> (3D-curve <C3D>) on surface <aF> . [aT1, aT2] - range to adjust)#"  , py::arg("aF"),  py::arg("aT1"),  py::arg("aT2"),  py::arg("aC2D"),  py::arg("aC2DA"))
        .def_static("IntermediatePoint_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_Real  ) >(&BOPTools_AlgoTools2D::IntermediatePoint),
                    R"#(Compute intermediate value in between [aFirst, aLast] .)#"  , py::arg("aFirst"),  py::arg("aLast"))
        .def_static("IntermediatePoint_s",
                    (Standard_Real (*)( const TopoDS_Edge &  ) ) static_cast<Standard_Real (*)( const TopoDS_Edge &  ) >(&BOPTools_AlgoTools2D::IntermediatePoint),
                    R"#(Compute intermediate value of parameter for the edge <anE>.)#"  , py::arg("anE"))
        .def_static("AttachExistingPCurve_s",
                    (Standard_Integer (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  const TopoDS_Face & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools2D::AttachExistingPCurve),
                    R"#(Attach P-Curve from the edge <aEold> on surface <aF> to the edge <aEnew> Returns 0 in case of success)#"  , py::arg("aEold"),  py::arg("aEnew"),  py::arg("aF"),  py::arg("aCtx"))
    // static methods using call by reference i.s.o. return
        .def_static("PointOnSurface_s",
                    []( const TopoDS_Edge & aE,const TopoDS_Face & aF,const Standard_Real aT,const opencascade::handle<IntTools_Context> & theContext ){ Standard_Real  U; Standard_Real  V; BOPTools_AlgoTools2D::PointOnSurface(aE,aF,aT,U,V,theContext); return std::make_tuple(U,V); },
                    R"#(Compute surface parameters <U,V> of the face <aF> for the point from the edge <aE> at parameter <aT>. If <aE> has't pcurve on surface, algorithm tries to get it by projection and can raise exception Standard_ConstructionError if projection algorithm fails. <theContext> - storage for caching the geometrical tools)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aT"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("CurveOnSurface_s",
                    []( const TopoDS_Edge & aE,const TopoDS_Face & aF,opencascade::handle<Geom2d_Curve> & aC,const opencascade::handle<IntTools_Context> & theContext ){ Standard_Real  aToler; BOPTools_AlgoTools2D::CurveOnSurface(aE,aF,aC,aToler,theContext); return std::make_tuple(aToler); },
                    R"#(Get P-Curve <aC> for the edge <aE> on surface <aF> . If the P-Curve does not exist, build it using Make2D(). [aToler] - reached tolerance Raises exception Standard_ConstructionError if algorithm Make2D() fails. <theContext> - storage for caching the geometrical tools)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aC"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("CurveOnSurface_s",
                    []( const TopoDS_Edge & aE,const TopoDS_Face & aF,opencascade::handle<Geom2d_Curve> & aC,const opencascade::handle<IntTools_Context> & theContext ){ Standard_Real  aFirst; Standard_Real  aLast; Standard_Real  aToler; BOPTools_AlgoTools2D::CurveOnSurface(aE,aF,aC,aFirst,aLast,aToler,theContext); return std::make_tuple(aFirst,aLast,aToler); },
                    R"#(Get P-Curve <aC> for the edge <aE> on surface <aF> . If the P-Curve does not exist, build it using Make2D(). [aFirst, aLast] - range of the P-Curve [aToler] - reached tolerance Raises exception Standard_ConstructionError if algorithm Make2D() fails. <theContext> - storage for caching the geometrical tools)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aC"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("Make2D_s",
                    []( const TopoDS_Edge & aE,const TopoDS_Face & aF,opencascade::handle<Geom2d_Curve> & aC,const opencascade::handle<IntTools_Context> & theContext ){ Standard_Real  aFirst; Standard_Real  aLast; Standard_Real  aToler; BOPTools_AlgoTools2D::Make2D(aE,aF,aC,aFirst,aLast,aToler,theContext); return std::make_tuple(aFirst,aLast,aToler); },
                    R"#(Make P-Curve <aC> for the edge <aE> on surface <aF> . [aFirst, aLast] - range of the P-Curve [aToler] - reached tolerance Raises exception Standard_ConstructionError if algorithm fails. <theContext> - storage for caching the geometrical tools)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aC"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("MakePCurveOnFace_s",
                    []( const TopoDS_Face & aF,const opencascade::handle<Geom_Curve> & C3D,opencascade::handle<Geom2d_Curve> & aC,const opencascade::handle<IntTools_Context> & theContext ){ Standard_Real  aToler; BOPTools_AlgoTools2D::MakePCurveOnFace(aF,C3D,aC,aToler,theContext); return std::make_tuple(aToler); },
                    R"#(Make P-Curve <aC> for the 3D-curve <C3D> on surface <aF> . [aToler] - reached tolerance Raises exception Standard_ConstructionError if projection algorithm fails. <theContext> - storage for caching the geometrical tools)#"  , py::arg("aF"),  py::arg("C3D"),  py::arg("aC"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("MakePCurveOnFace_s",
                    []( const TopoDS_Face & aF,const opencascade::handle<Geom_Curve> & C3D,const Standard_Real aT1,const Standard_Real aT2,opencascade::handle<Geom2d_Curve> & aC,const opencascade::handle<IntTools_Context> & theContext ){ Standard_Real  aToler; BOPTools_AlgoTools2D::MakePCurveOnFace(aF,C3D,aT1,aT2,aC,aToler,theContext); return std::make_tuple(aToler); },
                    R"#(Make P-Curve <aC> for the 3D-curve <C3D> on surface <aF> . [aT1, aT2] - range to build [aToler] - reached tolerance Raises exception Standard_ConstructionError if projection algorithm fails. <theContext> - storage for caching the geometrical tools)#"  , py::arg("aF"),  py::arg("C3D"),  py::arg("aT1"),  py::arg("aT2"),  py::arg("aC"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("IsEdgeIsoline_s",
                    []( const TopoDS_Edge & theE,const TopoDS_Face & theF ){ Standard_Boolean  isTheUIso; Standard_Boolean  isTheVIso; BOPTools_AlgoTools2D::IsEdgeIsoline(theE,theF,isTheUIso,isTheVIso); return std::make_tuple(isTheUIso,isTheVIso); },
                    R"#(Checks if CurveOnSurface of theE on theF matches with isoline of theF surface. Sets corresponding values for isTheUIso and isTheVIso variables. ATTENTION!!! This method is based on comparation between direction of surface (which theF is based on) iso-lines and the direction of the edge p-curve (on theF) in middle-point of the p-curve. This method should be used carefully (e.g. BRep_Tool::IsClosed(...) together) in order to avoid false classification some p-curves as isoline (e.g. circle on a plane).)#"  , py::arg("theE"),  py::arg("theF"))
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPTools_AlgoTools3D , shared_ptr<BOPTools_AlgoTools3D>>(m,"BOPTools_AlgoTools3D");

    static_cast<py::class_<BOPTools_AlgoTools3D , shared_ptr<BOPTools_AlgoTools3D>  >>(m.attr("BOPTools_AlgoTools3D"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("DoSplitSEAMOnFace_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BOPTools_AlgoTools3D::DoSplitSEAMOnFace),
                    R"#(Make the edge <aSp> seam edge for the face <aF>)#"  , py::arg("aSp"),  py::arg("aF"))
        .def_static("GetNormalToFaceOnEdge_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  gp_Dir & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  gp_Dir & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools3D::GetNormalToFaceOnEdge),
                    R"#(Computes normal to the face <aF> for the point on the edge <aE> at parameter <aT>. <theContext> - storage for caching the geometrical tools)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aT"),  py::arg("aD"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("GetNormalToFaceOnEdge_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  gp_Dir & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  gp_Dir & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools3D::GetNormalToFaceOnEdge),
                    R"#(Computes normal to the face <aF> for the point on the edge <aE> at arbitrary intermediate parameter. <theContext> - storage for caching the geometrical tools)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aD"),  py::arg("theContext")=static_cast<const opencascade::handle<IntTools_Context> &>(Handle ( IntTools_Context ) ( )))
        .def_static("SenseFlag_s",
                    (Standard_Integer (*)( const gp_Dir & ,  const gp_Dir &  ) ) static_cast<Standard_Integer (*)( const gp_Dir & ,  const gp_Dir &  ) >(&BOPTools_AlgoTools3D::SenseFlag),
                    R"#(Returns 1 if scalar product aNF1* aNF2>0. Returns 0 if directions aNF1 aNF2 coincide Returns -1 if scalar product aNF1* aNF2<0.)#"  , py::arg("aNF1"),  py::arg("aNF2"))
        .def_static("GetNormalToSurface_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Dir &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Dir &  ) >(&BOPTools_AlgoTools3D::GetNormalToSurface),
                    R"#(Compute normal <aD> to surface <aS> in point (U,V) Returns TRUE if directions aD1U, aD1V coincide)#"  , py::arg("aS"),  py::arg("U"),  py::arg("V"),  py::arg("aD"))
        .def_static("GetApproxNormalToFaceOnEdge_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  gp_Pnt & ,  gp_Dir & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  gp_Pnt & ,  gp_Dir & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools3D::GetApproxNormalToFaceOnEdge),
                    R"#(Computes normal to the face <aF> for the 3D-point that belongs to the edge <aE> at parameter <aT>. Output: aPx - the 3D-point where the normal computed aD - the normal; Warning: The normal is computed not exactly in the point on the edge, but in point that is near to the edge towards to the face material (so, we'll have approx. normal); The point is computed using PointNearEdge function, with the shifting value BOPTools_AlgoTools3D::MinStepIn2d(), from the edge, but if this value is too big, the point will be computed using Hatcher (PointInFace function). Returns TRUE in case of success.)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aT"),  py::arg("aPx"),  py::arg("aD"),  py::arg("theContext"))
        .def_static("GetApproxNormalToFaceOnEdge_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  gp_Pnt & ,  gp_Dir & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  gp_Pnt & ,  gp_Dir & ,  const Standard_Real  ) >(&BOPTools_AlgoTools3D::GetApproxNormalToFaceOnEdge),
                    R"#(Computes normal to the face <aF> for the 3D-point that belongs to the edge <aE> at parameter <aT>. Output: aPx - the 3D-point where the normal computed aD - the normal; Warning: The normal is computed not exactly in the point on the edge, but in point that is near to the edge towards to the face material (so, we'll have approx. normal); The point is computed using PointNearEdge function with the shifting value <aDt2D> from the edge; No checks on this value will be done. Returns TRUE in case of success.)#"  , py::arg("theE"),  py::arg("theF"),  py::arg("aT"),  py::arg("aP"),  py::arg("aDNF"),  py::arg("aDt2D"))
        .def_static("GetApproxNormalToFaceOnEdge_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Dir & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Dir & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools3D::GetApproxNormalToFaceOnEdge),
                    R"#(Computes normal to the face <aF> for the 3D-point that belongs to the edge <aE> at parameter <aT>. Output: aPx - the 3D-point where the normal computed aD - the normal; Warning: The normal is computed not exactly in the point on the edge, but in point that is near to the edge towards to the face material (so, we'll have approx. normal); The point is computed using PointNearEdge function with the shifting value <aDt2D> from the edge, but if this value is too big the point will be computed using Hatcher (PointInFace function). Returns TRUE in case of success.)#"  , py::arg("theE"),  py::arg("theF"),  py::arg("aT"),  py::arg("aDt2D"),  py::arg("aP"),  py::arg("aDNF"),  py::arg("theContext"))
        .def_static("PointNearEdge_s",
                    (Standard_Integer (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Pnt & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Pnt & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools3D::PointNearEdge),
                    R"#(Compute the point <aPx>, (<aP2D>) that is near to the edge <aE> at parameter <aT> towards to the material of the face <aF>. The value of shifting in 2D is <aDt2D> If the value of shifting is too big the point will be computed using Hatcher (PointInFace function). Returns error status: 0 - in case of success; 1 - <aE> does not have 2d curve on the face <aF>; 2 - the computed point is out of the face.)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aT"),  py::arg("aDt2D"),  py::arg("aP2D"),  py::arg("aPx"),  py::arg("theContext"))
        .def_static("PointNearEdge_s",
                    (Standard_Integer (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Pnt &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Pnt &  ) >(&BOPTools_AlgoTools3D::PointNearEdge),
                    R"#(Compute the point <aPx>, (<aP2D>) that is near to the edge <aE> at parameter <aT> towards to the material of the face <aF>. The value of shifting in 2D is <aDt2D>. No checks on this value will be done. Returns error status: 0 - in case of success; 1 - <aE> does not have 2d curve on the face <aF>.)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aT"),  py::arg("aDt2D"),  py::arg("aP2D"),  py::arg("aPx"))
        .def_static("PointNearEdge_s",
                    (Standard_Integer (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Pnt & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Pnt & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools3D::PointNearEdge),
                    R"#(Computes the point <aPx>, (<aP2D>) that is near to the edge <aE> at parameter <aT> towards to the material of the face <aF>. The value of shifting in 2D is dt2D=BOPTools_AlgoTools3D::MinStepIn2d() If the value of shifting is too big the point will be computed using Hatcher (PointInFace function). Returns error status: 0 - in case of success; 1 - <aE> does not have 2d curve on the face <aF>; 2 - the computed point is out of the face.)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aT"),  py::arg("aP2D"),  py::arg("aPx"),  py::arg("theContext"))
        .def_static("PointNearEdge_s",
                    (Standard_Integer (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  gp_Pnt2d & ,  gp_Pnt & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  gp_Pnt2d & ,  gp_Pnt & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools3D::PointNearEdge),
                    R"#(Compute the point <aPx>, (<aP2D>) that is near to the edge <aE> at arbitrary parameter towards to the material of the face <aF>. The value of shifting in 2D is dt2D=BOPTools_AlgoTools3D::MinStepIn2d(). If the value of shifting is too big the point will be computed using Hatcher (PointInFace function). Returns error status: 0 - in case of success; 1 - <aE> does not have 2d curve on the face <aF>; 2 - the computed point is out of the face.)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aP2D"),  py::arg("aPx"),  py::arg("theContext"))
        .def_static("MinStepIn2d_s",
                    (Standard_Real (*)() ) static_cast<Standard_Real (*)() >(&BOPTools_AlgoTools3D::MinStepIn2d),
                    R"#(Returns simple step value that is used in 2D-computations = 1.e-5)#" )
        .def_static("IsEmptyShape_s",
                    (Standard_Boolean (*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape &  ) >(&BOPTools_AlgoTools3D::IsEmptyShape),
                    R"#(Returns TRUE if the shape <aS> does not contain geometry information (e.g. empty compound))#"  , py::arg("aS"))
        .def_static("OrientEdgeOnFace_s",
                    (void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  TopoDS_Edge &  ) ) static_cast<void (*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  TopoDS_Edge &  ) >(&BOPTools_AlgoTools3D::OrientEdgeOnFace),
                    R"#(Get the edge <aER> from the face <aF> that is the same as the edge <aE>)#"  , py::arg("aE"),  py::arg("aF"),  py::arg("aER"))
        .def_static("PointInFace_s",
                    (Standard_Integer (*)( const TopoDS_Face & ,  gp_Pnt & ,  gp_Pnt2d & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Face & ,  gp_Pnt & ,  gp_Pnt2d & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools3D::PointInFace),
                    R"#(Computes arbitrary point <theP> inside the face <theF>. <theP2D> - 2D representation of <theP> on the surface of <theF> Returns 0 in case of success.)#"  , py::arg("theF"),  py::arg("theP"),  py::arg("theP2D"),  py::arg("theContext"))
        .def_static("PointInFace_s",
                    (Standard_Integer (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Pnt2d & ,  const opencascade::handle<IntTools_Context> &  ) ) static_cast<Standard_Integer (*)( const TopoDS_Face & ,  const TopoDS_Edge & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Pnt2d & ,  const opencascade::handle<IntTools_Context> &  ) >(&BOPTools_AlgoTools3D::PointInFace),
                    R"#(Computes a point <theP> inside the face <theF> using starting point taken by the parameter <theT> from the 2d curve of the edge <theE> on the face <theF> in the direction perpendicular to the tangent vector of the 2d curve of the edge. The point will be distanced on <theDt2D> from the 2d curve. <theP2D> - 2D representation of <theP> on the surface of <theF> Returns 0 in case of success.)#"  , py::arg("theF"),  py::arg("theE"),  py::arg("theT"),  py::arg("theDt2D"),  py::arg("theP"),  py::arg("theP2D"),  py::arg("theContext"))
        .def_static("PointInFace_s",
                    (Standard_Integer (*)( const TopoDS_Face & ,  const opencascade::handle<Geom2d_Curve> & ,  gp_Pnt & ,  gp_Pnt2d & ,  const opencascade::handle<IntTools_Context> & ,  const Standard_Real  ) ) static_cast<Standard_Integer (*)( const TopoDS_Face & ,  const opencascade::handle<Geom2d_Curve> & ,  gp_Pnt & ,  gp_Pnt2d & ,  const opencascade::handle<IntTools_Context> & ,  const Standard_Real  ) >(&BOPTools_AlgoTools3D::PointInFace),
                    R"#(Computes a point <theP> inside the face <theF> using the line <theL> so that 2D point <theP2D>, 2D representation of <theP> on the surface of <theF>, lies on that line. Returns 0 in case of success.)#"  , py::arg("theF"),  py::arg("theL"),  py::arg("theP"),  py::arg("theP2D"),  py::arg("theContext"),  py::arg("theDt2D")=static_cast<const Standard_Real>(0.0))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPTools_ConnexityBlock , shared_ptr<BOPTools_ConnexityBlock>  >>(m.attr("BOPTools_ConnexityBlock"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // custom constructors
    // methods
        .def("Shapes",
             (const TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() const) static_cast<const TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() const>(&BOPTools_ConnexityBlock::Shapes),
             R"#(None)#" )
        .def("ChangeShapes",
             (TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() ) static_cast<TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() >(&BOPTools_ConnexityBlock::ChangeShapes),
             R"#(None)#" )
        .def("SetRegular",
             (void (BOPTools_ConnexityBlock::*)( const Standard_Boolean  ) ) static_cast<void (BOPTools_ConnexityBlock::*)( const Standard_Boolean  ) >(&BOPTools_ConnexityBlock::SetRegular),
             R"#(None)#"  , py::arg("theFlag"))
        .def("IsRegular",
             (Standard_Boolean (BOPTools_ConnexityBlock::*)() const) static_cast<Standard_Boolean (BOPTools_ConnexityBlock::*)() const>(&BOPTools_ConnexityBlock::IsRegular),
             R"#(None)#" )
        .def("Loops",
             (const TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() const) static_cast<const TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() const>(&BOPTools_ConnexityBlock::Loops),
             R"#(None)#" )
        .def("ChangeLoops",
             (TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() ) static_cast<TopTools_ListOfShape & (BOPTools_ConnexityBlock::*)() >(&BOPTools_ConnexityBlock::ChangeLoops),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPTools_CoupleOfShape , shared_ptr<BOPTools_CoupleOfShape>  >>(m.attr("BOPTools_CoupleOfShape"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetShape1",
             (void (BOPTools_CoupleOfShape::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPTools_CoupleOfShape::*)( const TopoDS_Shape &  ) >(&BOPTools_CoupleOfShape::SetShape1),
             R"#(None)#"  , py::arg("theShape"))
        .def("Shape1",
             (const TopoDS_Shape & (BOPTools_CoupleOfShape::*)() const) static_cast<const TopoDS_Shape & (BOPTools_CoupleOfShape::*)() const>(&BOPTools_CoupleOfShape::Shape1),
             R"#(None)#" )
        .def("SetShape2",
             (void (BOPTools_CoupleOfShape::*)( const TopoDS_Shape &  ) ) static_cast<void (BOPTools_CoupleOfShape::*)( const TopoDS_Shape &  ) >(&BOPTools_CoupleOfShape::SetShape2),
             R"#(None)#"  , py::arg("theShape"))
        .def("Shape2",
             (const TopoDS_Shape & (BOPTools_CoupleOfShape::*)() const) static_cast<const TopoDS_Shape & (BOPTools_CoupleOfShape::*)() const>(&BOPTools_CoupleOfShape::Shape2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPTools_Parallel , shared_ptr<BOPTools_Parallel>>(m,"BOPTools_Parallel");

    static_cast<py::class_<BOPTools_Parallel , shared_ptr<BOPTools_Parallel>  >>(m.attr("BOPTools_Parallel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BOPTools_Set , shared_ptr<BOPTools_Set>  >>(m.attr("BOPTools_Set"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
    // custom constructors
    // methods
        .def("Assign",
             (BOPTools_Set & (BOPTools_Set::*)( const BOPTools_Set &  ) ) static_cast<BOPTools_Set & (BOPTools_Set::*)( const BOPTools_Set &  ) >(&BOPTools_Set::Assign),
             R"#(None)#"  , py::arg("Other"))
        .def("Shape",
             (const TopoDS_Shape & (BOPTools_Set::*)() const) static_cast<const TopoDS_Shape & (BOPTools_Set::*)() const>(&BOPTools_Set::Shape),
             R"#(None)#" )
        .def("Add",
             (void (BOPTools_Set::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) ) static_cast<void (BOPTools_Set::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum  ) >(&BOPTools_Set::Add),
             R"#(None)#"  , py::arg("theS"),  py::arg("theType"))
        .def("NbShapes",
             (Standard_Integer (BOPTools_Set::*)() const) static_cast<Standard_Integer (BOPTools_Set::*)() const>(&BOPTools_Set::NbShapes),
             R"#(None)#" )
        .def("IsEqual",
             (Standard_Boolean (BOPTools_Set::*)( const BOPTools_Set &  ) const) static_cast<Standard_Boolean (BOPTools_Set::*)( const BOPTools_Set &  ) const>(&BOPTools_Set::IsEqual),
             R"#(None)#"  , py::arg("aOther"))
        .def("HashCode",
             (Standard_Integer (BOPTools_Set::*)( Standard_Integer  ) const) static_cast<Standard_Integer (BOPTools_Set::*)( Standard_Integer  ) const>(&BOPTools_Set::HashCode),
             R"#(Computes a hash code for this set, in the range [1, theUpperBound])#"  , py::arg("theUpperBound"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BOPTools_SetMapHasher , shared_ptr<BOPTools_SetMapHasher>>(m,"BOPTools_SetMapHasher");

    static_cast<py::class_<BOPTools_SetMapHasher , shared_ptr<BOPTools_SetMapHasher>  >>(m.attr("BOPTools_SetMapHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const BOPTools_Set & ,  Standard_Integer  ) ) static_cast<Standard_Integer (*)( const BOPTools_Set & ,  Standard_Integer  ) >(&BOPTools_SetMapHasher::HashCode),
                    R"#(Computes a hash code for the given set, in the range [1, theUpperBound])#"  , py::arg("theSet"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const BOPTools_Set & ,  const BOPTools_Set &  ) ) static_cast<Standard_Boolean (*)( const BOPTools_Set & ,  const BOPTools_Set &  ) >(&BOPTools_SetMapHasher::IsEqual),
                    R"#(None)#"  , py::arg("aSet1"),  py::arg("aSet2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BOPTools_AlgoTools3D.hxx
// ./opencascade/BOPTools_AlgoTools.hxx
// ./opencascade/BOPTools_MapOfSet.hxx
// ./opencascade/BOPTools_BoxTree.hxx
// ./opencascade/BOPTools_AlgoTools2D.hxx
// ./opencascade/BOPTools_SetMapHasher.hxx
// ./opencascade/BOPTools_ConnexityBlock.hxx
// ./opencascade/BOPTools_IndexedDataMapOfSetShape.hxx
// ./opencascade/BOPTools_Set.hxx
// ./opencascade/BOPTools_Parallel.hxx
// ./opencascade/BOPTools_CoupleOfShape.hxx
// ./opencascade/BOPTools_ListOfCoupleOfShape.hxx
// ./opencascade/BOPTools_ListOfConnexityBlock.hxx
// ./opencascade/BOPTools_BoxSelector.hxx

// operators

// register typdefs
    register_template_NCollection_Map<BOPTools_Set, BOPTools_SetMapHasher>(m,"BOPTools_MapOfSet");  
    register_template_BOPTools_BoxSelector<2>(m,"BOPTools_Box2dTreeSelector");  
    register_template_BOPTools_BoxSet<Standard_Real, 3, Standard_Integer>(m,"BOPTools_BoxTree");  
    register_template_BOPTools_BoxSelector<3>(m,"BOPTools_BoxTreeSelector");  
    register_template_NCollection_IndexedDataMap<BOPTools_Set, TopoDS_Shape, BOPTools_SetMapHasher>(m,"BOPTools_IndexedDataMapOfSetShape");  
    register_template_NCollection_List<BOPTools_CoupleOfShape>(m,"BOPTools_ListOfCoupleOfShape");  
    register_template_NCollection_List<BOPTools_ConnexityBlock>(m,"BOPTools_ListOfConnexityBlock");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
