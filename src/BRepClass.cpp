
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepClass_Edge.hxx>
#include <gp_Lin2d.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_Edge.hxx>

// module includes
#include <BRepClass_Edge.hxx>
#include <BRepClass_FaceClassifier.hxx>
#include <BRepClass_FaceExplorer.hxx>
#include <BRepClass_FacePassiveClassifier.hxx>
#include <BRepClass_FClass2dOfFClassifier.hxx>
#include <BRepClass_FClassifier.hxx>
#include <BRepClass_Intersector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepClass(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepClass"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepClass_Edge , shared_ptr<BRepClass_Edge>  >>(m.attr("BRepClass_Edge"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Face & >()  , py::arg("E"),  py::arg("F") )
    // methods
        .def("Edge",
             (TopoDS_Edge & (BRepClass_Edge::*)() ) static_cast<TopoDS_Edge & (BRepClass_Edge::*)() >(&BRepClass_Edge::Edge),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepClass_Edge::*)() const) static_cast<const TopoDS_Edge & (BRepClass_Edge::*)() const>(&BRepClass_Edge::Edge),
             R"#(None)#" )
        .def("Face",
             (TopoDS_Face & (BRepClass_Edge::*)() ) static_cast<TopoDS_Face & (BRepClass_Edge::*)() >(&BRepClass_Edge::Face),
             R"#(None)#" )
        .def("Face",
             (const TopoDS_Face & (BRepClass_Edge::*)() const) static_cast<const TopoDS_Face & (BRepClass_Edge::*)() const>(&BRepClass_Edge::Face),
             R"#(None)#" )
        .def("Edge",
             (TopoDS_Edge & (BRepClass_Edge::*)() ) static_cast<TopoDS_Edge & (BRepClass_Edge::*)() >(&BRepClass_Edge::Edge),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepClass_Edge::*)() const) static_cast<const TopoDS_Edge & (BRepClass_Edge::*)() const>(&BRepClass_Edge::Edge),
             R"#(None)#" )
        .def("Face",
             (TopoDS_Face & (BRepClass_Edge::*)() ) static_cast<TopoDS_Face & (BRepClass_Edge::*)() >(&BRepClass_Edge::Face),
             R"#(None)#" )
        .def("Face",
             (const TopoDS_Face & (BRepClass_Edge::*)() const) static_cast<const TopoDS_Face & (BRepClass_Edge::*)() const>(&BRepClass_Edge::Face),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BRepClass_FClass2dOfFClassifier , shared_ptr<BRepClass_FClass2dOfFClassifier>  >>(m.attr("BRepClass_FClass2dOfFClassifier"))
        .def(py::init<  >()  )
    // methods
        .def("Reset",
             (void (BRepClass_FClass2dOfFClassifier::*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepClass_FClass2dOfFClassifier::*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepClass_FClass2dOfFClassifier::Reset),
             R"#(Starts a classification process. The point to classify is the origin of the line <L>. <P> is the original length of the segment on <L> used to compute intersections. <Tol> is the tolerance attached to the line segment in intersections.)#"  , py::arg("L"),  py::arg("P"),  py::arg("Tol"))
        .def("Compare",
             (void (BRepClass_FClass2dOfFClassifier::*)( const BRepClass_Edge & ,  const TopAbs_Orientation  ) ) static_cast<void (BRepClass_FClass2dOfFClassifier::*)( const BRepClass_Edge & ,  const TopAbs_Orientation  ) >(&BRepClass_FClass2dOfFClassifier::Compare),
             R"#(Updates the classification process with the edge <E> from the boundary.)#"  , py::arg("E"),  py::arg("Or"))
        .def("Parameter",
             (Standard_Real (BRepClass_FClass2dOfFClassifier::*)() const) static_cast<Standard_Real (BRepClass_FClass2dOfFClassifier::*)() const>(&BRepClass_FClass2dOfFClassifier::Parameter),
             R"#(Returns the current value of the parameter.)#" )
        .def("Intersector",
             (BRepClass_Intersector & (BRepClass_FClass2dOfFClassifier::*)() ) static_cast<BRepClass_Intersector & (BRepClass_FClass2dOfFClassifier::*)() >(&BRepClass_FClass2dOfFClassifier::Intersector),
             R"#(Returns the intersecting algorithm.)#" )
        .def("ClosestIntersection",
             (Standard_Integer (BRepClass_FClass2dOfFClassifier::*)() const) static_cast<Standard_Integer (BRepClass_FClass2dOfFClassifier::*)() const>(&BRepClass_FClass2dOfFClassifier::ClosestIntersection),
             R"#(Returns 0 if the last compared edge had no relevant intersection. Else returns the index of this intersection in the last intersection algorithm.)#" )
        .def("State",
             (TopAbs_State (BRepClass_FClass2dOfFClassifier::*)() const) static_cast<TopAbs_State (BRepClass_FClass2dOfFClassifier::*)() const>(&BRepClass_FClass2dOfFClassifier::State),
             R"#(Returns the current state of the point.)#" )
        .def("IsHeadOrEnd",
             (Standard_Boolean (BRepClass_FClass2dOfFClassifier::*)() const) static_cast<Standard_Boolean (BRepClass_FClass2dOfFClassifier::*)() const>(&BRepClass_FClass2dOfFClassifier::IsHeadOrEnd),
             R"#(Returns the Standard_True if the closest intersection point represents head or end of the edge. Returns Standard_False otherwise.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BRepClass_FClassifier , shared_ptr<BRepClass_FClassifier>  >>(m.attr("BRepClass_FClassifier"))
        .def(py::init<  >()  )
        .def(py::init< BRepClass_FaceExplorer &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("F"),  py::arg("P"),  py::arg("Tol") )
    // methods
        .def("Perform",
             (void (BRepClass_FClassifier::*)( BRepClass_FaceExplorer & ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (BRepClass_FClassifier::*)( BRepClass_FaceExplorer & ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&BRepClass_FClassifier::Perform),
             R"#(Classify the Point P with Tolerance <T> on the face described by <F>.)#"  , py::arg("F"),  py::arg("P"),  py::arg("Tol"))
        .def("State",
             (TopAbs_State (BRepClass_FClassifier::*)() const) static_cast<TopAbs_State (BRepClass_FClassifier::*)() const>(&BRepClass_FClassifier::State),
             R"#(Returns the result of the classification.)#" )
        .def("Rejected",
             (Standard_Boolean (BRepClass_FClassifier::*)() const) static_cast<Standard_Boolean (BRepClass_FClassifier::*)() const>(&BRepClass_FClassifier::Rejected),
             R"#(Returns True when the state was computed by a rejection. The state is OUT.)#" )
        .def("NoWires",
             (Standard_Boolean (BRepClass_FClassifier::*)() const) static_cast<Standard_Boolean (BRepClass_FClassifier::*)() const>(&BRepClass_FClassifier::NoWires),
             R"#(Returns True if the face contains no wire. The state is IN.)#" )
        .def("Edge",
             (const BRepClass_Edge & (BRepClass_FClassifier::*)() const) static_cast<const BRepClass_Edge & (BRepClass_FClassifier::*)() const>(&BRepClass_FClassifier::Edge),
             R"#(Returns the Edge used to determine the classification. When the State is ON this is the Edge containing the point.)#" )
        .def("EdgeParameter",
             (Standard_Real (BRepClass_FClassifier::*)() const) static_cast<Standard_Real (BRepClass_FClassifier::*)() const>(&BRepClass_FClassifier::EdgeParameter),
             R"#(Returns the parameter on Edge() used to determine the classification.)#" )
        .def("Position",
             (IntRes2d_Position (BRepClass_FClassifier::*)() const) static_cast<IntRes2d_Position (BRepClass_FClassifier::*)() const>(&BRepClass_FClassifier::Position),
             R"#(Returns the position of the point on the edge returned by Edge.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BRepClass_FaceExplorer , shared_ptr<BRepClass_FaceExplorer>  >>(m.attr("BRepClass_FaceExplorer"))
        .def(py::init< const TopoDS_Face & >()  , py::arg("F") )
    // methods
        .def("CheckPoint",
             (Standard_Boolean (BRepClass_FaceExplorer::*)( gp_Pnt2d &  ) ) static_cast<Standard_Boolean (BRepClass_FaceExplorer::*)( gp_Pnt2d &  ) >(&BRepClass_FaceExplorer::CheckPoint),
             R"#(Checks the point and change its coords if it is located too far from the bounding box of the face. New Coordinates of the point will be on the line between the point and the center of the bounding box. Returns True if point was not changed.)#"  , py::arg("thePoint"))
        .def("Reject",
             (Standard_Boolean (BRepClass_FaceExplorer::*)( const gp_Pnt2d &  ) const) static_cast<Standard_Boolean (BRepClass_FaceExplorer::*)( const gp_Pnt2d &  ) const>(&BRepClass_FaceExplorer::Reject),
             R"#(Should return True if the point is outside a bounding volume of the face.)#"  , py::arg("P"))
        .def("Segment",
             (Standard_Boolean (BRepClass_FaceExplorer::*)( const gp_Pnt2d & ,  gp_Lin2d & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepClass_FaceExplorer::*)( const gp_Pnt2d & ,  gp_Lin2d & ,  Standard_Real &  ) >(&BRepClass_FaceExplorer::Segment),
             R"#(Returns in <L>, <Par> a segment having at least one intersection with the face boundary to compute intersections.)#"  , py::arg("P"),  py::arg("L"),  py::arg("Par"))
        .def("OtherSegment",
             (Standard_Boolean (BRepClass_FaceExplorer::*)( const gp_Pnt2d & ,  gp_Lin2d & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (BRepClass_FaceExplorer::*)( const gp_Pnt2d & ,  gp_Lin2d & ,  Standard_Real &  ) >(&BRepClass_FaceExplorer::OtherSegment),
             R"#(Returns in <L>, <Par> a segment having at least one intersection with the face boundary to compute intersections. Each call gives another segment.)#"  , py::arg("P"),  py::arg("L"),  py::arg("Par"))
        .def("InitWires",
             (void (BRepClass_FaceExplorer::*)() ) static_cast<void (BRepClass_FaceExplorer::*)() >(&BRepClass_FaceExplorer::InitWires),
             R"#(Starts an exploration of the wires.)#" )
        .def("MoreWires",
             (Standard_Boolean (BRepClass_FaceExplorer::*)() const) static_cast<Standard_Boolean (BRepClass_FaceExplorer::*)() const>(&BRepClass_FaceExplorer::MoreWires),
             R"#(Returns True if there is a current wire.)#" )
        .def("NextWire",
             (void (BRepClass_FaceExplorer::*)() ) static_cast<void (BRepClass_FaceExplorer::*)() >(&BRepClass_FaceExplorer::NextWire),
             R"#(Sets the explorer to the next wire.)#" )
        .def("RejectWire",
             (Standard_Boolean (BRepClass_FaceExplorer::*)( const gp_Lin2d & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (BRepClass_FaceExplorer::*)( const gp_Lin2d & ,  const Standard_Real  ) const>(&BRepClass_FaceExplorer::RejectWire),
             R"#(Returns True if the wire bounding volume does not intersect the segment.)#"  , py::arg("L"),  py::arg("Par"))
        .def("InitEdges",
             (void (BRepClass_FaceExplorer::*)() ) static_cast<void (BRepClass_FaceExplorer::*)() >(&BRepClass_FaceExplorer::InitEdges),
             R"#(Starts an exploration of the edges of the current wire.)#" )
        .def("MoreEdges",
             (Standard_Boolean (BRepClass_FaceExplorer::*)() const) static_cast<Standard_Boolean (BRepClass_FaceExplorer::*)() const>(&BRepClass_FaceExplorer::MoreEdges),
             R"#(Returns True if there is a current edge.)#" )
        .def("NextEdge",
             (void (BRepClass_FaceExplorer::*)() ) static_cast<void (BRepClass_FaceExplorer::*)() >(&BRepClass_FaceExplorer::NextEdge),
             R"#(Sets the explorer to the next edge.)#" )
        .def("RejectEdge",
             (Standard_Boolean (BRepClass_FaceExplorer::*)( const gp_Lin2d & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (BRepClass_FaceExplorer::*)( const gp_Lin2d & ,  const Standard_Real  ) const>(&BRepClass_FaceExplorer::RejectEdge),
             R"#(Returns True if the edge bounding volume does not intersect the segment.)#"  , py::arg("L"),  py::arg("Par"))
        .def("CurrentEdge",
             (void (BRepClass_FaceExplorer::*)( BRepClass_Edge & ,  TopAbs_Orientation &  ) const) static_cast<void (BRepClass_FaceExplorer::*)( BRepClass_Edge & ,  TopAbs_Orientation &  ) const>(&BRepClass_FaceExplorer::CurrentEdge),
             R"#(Current edge in current wire and its orientation.)#"  , py::arg("E"),  py::arg("Or"))
        .def("MoreWires",
             (Standard_Boolean (BRepClass_FaceExplorer::*)() const) static_cast<Standard_Boolean (BRepClass_FaceExplorer::*)() const>(&BRepClass_FaceExplorer::MoreWires),
             R"#(Returns True if there is a current wire.)#" )
        .def("NextWire",
             (void (BRepClass_FaceExplorer::*)() ) static_cast<void (BRepClass_FaceExplorer::*)() >(&BRepClass_FaceExplorer::NextWire),
             R"#(Sets the explorer to the next wire.)#" )
        .def("MoreEdges",
             (Standard_Boolean (BRepClass_FaceExplorer::*)() const) static_cast<Standard_Boolean (BRepClass_FaceExplorer::*)() const>(&BRepClass_FaceExplorer::MoreEdges),
             R"#(Returns True if there is a current edge.)#" )
        .def("NextEdge",
             (void (BRepClass_FaceExplorer::*)() ) static_cast<void (BRepClass_FaceExplorer::*)() >(&BRepClass_FaceExplorer::NextEdge),
             R"#(Sets the explorer to the next edge.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BRepClass_FacePassiveClassifier , shared_ptr<BRepClass_FacePassiveClassifier>  >>(m.attr("BRepClass_FacePassiveClassifier"))
        .def(py::init<  >()  )
    // methods
        .def("Reset",
             (void (BRepClass_FacePassiveClassifier::*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepClass_FacePassiveClassifier::*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepClass_FacePassiveClassifier::Reset),
             R"#(Starts a classification process. The point to classify is the origin of the line <L>. <P> is the original length of the segment on <L> used to compute intersections. <Tol> is the tolerance attached to the line segment in intersections.)#"  , py::arg("L"),  py::arg("P"),  py::arg("Tol"))
        .def("Compare",
             (void (BRepClass_FacePassiveClassifier::*)( const BRepClass_Edge & ,  const TopAbs_Orientation  ) ) static_cast<void (BRepClass_FacePassiveClassifier::*)( const BRepClass_Edge & ,  const TopAbs_Orientation  ) >(&BRepClass_FacePassiveClassifier::Compare),
             R"#(Updates the classification process with the edge <E> from the boundary.)#"  , py::arg("E"),  py::arg("Or"))
        .def("Parameter",
             (Standard_Real (BRepClass_FacePassiveClassifier::*)() const) static_cast<Standard_Real (BRepClass_FacePassiveClassifier::*)() const>(&BRepClass_FacePassiveClassifier::Parameter),
             R"#(Returns the current value of the parameter.)#" )
        .def("Intersector",
             (BRepClass_Intersector & (BRepClass_FacePassiveClassifier::*)() ) static_cast<BRepClass_Intersector & (BRepClass_FacePassiveClassifier::*)() >(&BRepClass_FacePassiveClassifier::Intersector),
             R"#(Returns the intersecting algorithm.)#" )
        .def("ClosestIntersection",
             (Standard_Integer (BRepClass_FacePassiveClassifier::*)() const) static_cast<Standard_Integer (BRepClass_FacePassiveClassifier::*)() const>(&BRepClass_FacePassiveClassifier::ClosestIntersection),
             R"#(Returns 0 if the last compared edge had no relevant intersection. Else returns the index of this intersection in the last intersection algorithm.)#" )
        .def("State",
             (TopAbs_State (BRepClass_FacePassiveClassifier::*)() const) static_cast<TopAbs_State (BRepClass_FacePassiveClassifier::*)() const>(&BRepClass_FacePassiveClassifier::State),
             R"#(Returns the current state of the point.)#" )
        .def("IsHeadOrEnd",
             (Standard_Boolean (BRepClass_FacePassiveClassifier::*)() const) static_cast<Standard_Boolean (BRepClass_FacePassiveClassifier::*)() const>(&BRepClass_FacePassiveClassifier::IsHeadOrEnd),
             R"#(Returns the Standard_True if the closest intersection point represents head or end of the edge. Returns Standard_False otherwise.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BRepClass_Intersector , shared_ptr<BRepClass_Intersector>  , Geom2dInt_IntConicCurveOfGInter >>(m.attr("BRepClass_Intersector"))
        .def(py::init<  >()  )
    // methods
        .def("Perform",
             (void (BRepClass_Intersector::*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real ,  const BRepClass_Edge &  ) ) static_cast<void (BRepClass_Intersector::*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real ,  const BRepClass_Edge &  ) >(&BRepClass_Intersector::Perform),
             R"#(Intersect the line segment and the edge.)#"  , py::arg("L"),  py::arg("P"),  py::arg("Tol"),  py::arg("E"))
    // methods using call by reference i.s.o. return
        .def("LocalGeometry",
             []( BRepClass_Intersector &self , const BRepClass_Edge & E,const Standard_Real U,gp_Dir2d & T,gp_Dir2d & N ){ Standard_Real  C; self.LocalGeometry(E,U,T,N,C); return std::make_tuple(C); },
             R"#(Returns in <T>, <N> and <C> the tangent, normal and curvature of the edge <E> at parameter value <U>.)#"  , py::arg("E"),  py::arg("U"),  py::arg("T"),  py::arg("N"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BRepClass_FaceClassifier , shared_ptr<BRepClass_FaceClassifier>  , BRepClass_FClassifier >>(m.attr("BRepClass_FaceClassifier"))
        .def(py::init<  >()  )
        .def(py::init< BRepClass_FaceExplorer &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("F"),  py::arg("P"),  py::arg("Tol") )
        .def(py::init< const TopoDS_Face &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("F"),  py::arg("P"),  py::arg("Tol") )
        .def(py::init< const TopoDS_Face &,const gp_Pnt &,const Standard_Real >()  , py::arg("F"),  py::arg("P"),  py::arg("Tol") )
    // methods
        .def("Perform",
             (void (BRepClass_FaceClassifier::*)( const TopoDS_Face & ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (BRepClass_FaceClassifier::*)( const TopoDS_Face & ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&BRepClass_FaceClassifier::Perform),
             R"#(Classify the Point P with Tolerance <T> on the face described by <F>.)#"  , py::arg("F"),  py::arg("P"),  py::arg("Tol"))
        .def("Perform",
             (void (BRepClass_FaceClassifier::*)( const TopoDS_Face & ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (BRepClass_FaceClassifier::*)( const TopoDS_Face & ,  const gp_Pnt & ,  const Standard_Real  ) >(&BRepClass_FaceClassifier::Perform),
             R"#(Classify the Point P with Tolerance <T> on the face described by <F>.)#"  , py::arg("F"),  py::arg("P"),  py::arg("Tol"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/BRepClass_FClass2dOfFClassifier.hxx
// ./opencascade/BRepClass_FaceExplorer.hxx
// ./opencascade/BRepClass_FaceClassifier.hxx
// ./opencascade/BRepClass_FacePassiveClassifier.hxx
// ./opencascade/BRepClass_Intersector.hxx
// ./opencascade/BRepClass_Edge.hxx
// ./opencascade/BRepClass_FClassifier.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
