
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Lin2d.hxx>
#include <BRepClass_Edge.hxx>
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


    static_cast<py::class_<BRepClass_Edge , shared_ptr<BRepClass_Edge> >>(m.attr("BRepClass_Edge"))
    // constructors
    // custom constructors
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
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass_FClass2dOfFClassifier , shared_ptr<BRepClass_FClass2dOfFClassifier> >>(m.attr("BRepClass_FClass2dOfFClassifier"))
    // constructors
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass_FClassifier , shared_ptr<BRepClass_FClassifier> >>(m.attr("BRepClass_FClassifier"))
    // constructors
    // custom constructors
    // methods
        .def("Rejected",
             (Standard_Boolean (BRepClass_FClassifier::*)() const) static_cast<Standard_Boolean (BRepClass_FClassifier::*)() const>(&BRepClass_FClassifier::Rejected),
             R"#(Returns True when the state was computed by a rejection. The state is OUT.)#" )
        .def("NoWires",
             (Standard_Boolean (BRepClass_FClassifier::*)() const) static_cast<Standard_Boolean (BRepClass_FClassifier::*)() const>(&BRepClass_FClassifier::NoWires),
             R"#(Returns True if the face contains no wire. The state is IN.)#" )
        .def("Position",
             (IntRes2d_Position (BRepClass_FClassifier::*)() const) static_cast<IntRes2d_Position (BRepClass_FClassifier::*)() const>(&BRepClass_FClassifier::Position),
             R"#(Returns the position of the point on the edge returned by Edge.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass_FaceExplorer , shared_ptr<BRepClass_FaceExplorer> >>(m.attr("BRepClass_FaceExplorer"))
    // constructors
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass_FacePassiveClassifier , shared_ptr<BRepClass_FacePassiveClassifier> >>(m.attr("BRepClass_FacePassiveClassifier"))
    // constructors
    // custom constructors
    // methods
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
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass_Intersector , shared_ptr<BRepClass_Intersector> , Geom2dInt_IntConicCurveOfGInter>>(m.attr("BRepClass_Intersector"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass_FaceClassifier , shared_ptr<BRepClass_FaceClassifier> , BRepClass_FClassifier>>(m.attr("BRepClass_FaceClassifier"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepClass_FaceExplorer.hxx
// ./opencascade/BRepClass_FClassifier.hxx
// ./opencascade/BRepClass_FClass2dOfFClassifier.hxx
// ./opencascade/BRepClass_FaceClassifier.hxx
// ./opencascade/BRepClass_Edge.hxx
// ./opencascade/BRepClass_FacePassiveClassifier.hxx
// ./opencascade/BRepClass_Intersector.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
