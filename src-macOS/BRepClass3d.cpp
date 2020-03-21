
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopoDS_Shell.hxx>
#include <IntCurvesFace_Intersector.hxx>
#include <BRepClass3d_SolidExplorer.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <BRepClass3d_Intersector3d.hxx>
#include <BRepClass3d_SolidExplorer.hxx>
#include <BRepClass3d_SolidPassiveClassifier.hxx>
#include <BRepClass3d_SClassifier.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <gp_Lin.hxx>

// module includes
#include <BRepClass3d.hxx>
#include <BRepClass3d_BndBoxTree.hxx>
#include <BRepClass3d_DataMapIteratorOfMapOfInter.hxx>
#include <BRepClass3d_Intersector3d.hxx>
#include <BRepClass3d_MapOfInter.hxx>
#include <BRepClass3d_SClassifier.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <BRepClass3d_SolidExplorer.hxx>
#include <BRepClass3d_SolidPassiveClassifier.hxx>

// template related includes
// ./opencascade/BRepClass3d_MapOfInter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepClass3d_MapOfInter.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepClass3d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepClass3d"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepClass3d , shared_ptr<BRepClass3d>>(m,"BRepClass3d");

    static_cast<py::class_<BRepClass3d , shared_ptr<BRepClass3d> >>(m.attr("BRepClass3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass3d_Intersector3d , shared_ptr<BRepClass3d_Intersector3d> >>(m.attr("BRepClass3d_Intersector3d"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Boolean (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::IsDone),
             R"#(True is returned when the intersection have been computed.)#" )
        .def("HasAPoint",
             (Standard_Boolean (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Boolean (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::HasAPoint),
             R"#(True is returned if a point has been found.)#" )
        .def("UParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::UParameter),
             R"#(Returns the U parameter of the intersection point on the surface.)#" )
        .def("VParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::VParameter),
             R"#(Returns the V parameter of the intersection point on the surface.)#" )
        .def("WParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::WParameter),
             R"#(Returns the parameter of the intersection point on the line.)#" )
        .def("Pnt",
             (const gp_Pnt & (BRepClass3d_Intersector3d::*)() const) static_cast<const gp_Pnt & (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Pnt),
             R"#(Returns the geometric point of the intersection between the line and the surface.)#" )
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (BRepClass3d_Intersector3d::*)() const) static_cast<IntCurveSurface_TransitionOnCurve (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Transition),
             R"#(Returns the transition of the line on the surface.)#" )
        .def("State",
             (TopAbs_State (BRepClass3d_Intersector3d::*)() const) static_cast<TopAbs_State (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::State),
             R"#(Returns the state of the point on the face. The values can be either TopAbs_IN ( the point is in the face) or TopAbs_ON ( the point is on a boudary of the face).)#" )
        .def("Face",
             (const TopoDS_Face & (BRepClass3d_Intersector3d::*)() const) static_cast<const TopoDS_Face & (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Face),
             R"#(Returns the significant face used to determine the intersection.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Boolean (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::IsDone),
             R"#(True is returned when the intersection have been computed.)#" )
        .def("HasAPoint",
             (Standard_Boolean (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Boolean (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::HasAPoint),
             R"#(True is returned if a point has been found.)#" )
        .def("Pnt",
             (const gp_Pnt & (BRepClass3d_Intersector3d::*)() const) static_cast<const gp_Pnt & (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Pnt),
             R"#(Returns the geometric point of the intersection between the line and the surface.)#" )
        .def("UParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::UParameter),
             R"#(Returns the U parameter of the intersection point on the surface.)#" )
        .def("VParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::VParameter),
             R"#(Returns the V parameter of the intersection point on the surface.)#" )
        .def("WParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::WParameter),
             R"#(Returns the parameter of the intersection point on the line.)#" )
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (BRepClass3d_Intersector3d::*)() const) static_cast<IntCurveSurface_TransitionOnCurve (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Transition),
             R"#(Returns the transition of the line on the surface.)#" )
        .def("State",
             (TopAbs_State (BRepClass3d_Intersector3d::*)() const) static_cast<TopAbs_State (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::State),
             R"#(Returns the state of the point on the face. The values can be either TopAbs_IN ( the point is in the face) or TopAbs_ON ( the point is on a boudary of the face).)#" )
        .def("Face",
             (const TopoDS_Face & (BRepClass3d_Intersector3d::*)() const) static_cast<const TopoDS_Face & (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Face),
             R"#(Returns the significant face used to determine the intersection.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass3d_SClassifier , shared_ptr<BRepClass3d_SClassifier> >>(m.attr("BRepClass3d_SClassifier"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass3d_SolidExplorer , shared_ptr<BRepClass3d_SolidExplorer> >>(m.attr("BRepClass3d_SolidExplorer"))
    // constructors
    // custom constructors
    // methods
        .def("Reject",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Pnt & ) const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Pnt & ) const>(&BRepClass3d_SolidExplorer::Reject),
             R"#(Should return True if P outside of bounding vol. of the shape)#"  , py::arg("P"))
        .def("RejectShell",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Lin & ) const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Lin & ) const>(&BRepClass3d_SolidExplorer::RejectShell),
             R"#(Returns True if the Shell is rejected.)#"  , py::arg("L"))
        .def("RejectFace",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Lin & ) const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Lin & ) const>(&BRepClass3d_SolidExplorer::RejectFace),
             R"#(returns True if the face is rejected.)#"  , py::arg("L"))
        .def("DumpSegment",
             (void (BRepClass3d_SolidExplorer::*)( const gp_Pnt & , const gp_Lin & , const Standard_Real , const TopAbs_State ) const) static_cast<void (BRepClass3d_SolidExplorer::*)( const gp_Pnt & , const gp_Lin & , const Standard_Real , const TopAbs_State ) const>(&BRepClass3d_SolidExplorer::DumpSegment),
             R"#(None)#"  , py::arg("P"),  py::arg("L"),  py::arg("Par"),  py::arg("S"))
        .def("GetTree",
             (const BRepClass3d_BndBoxTree & (BRepClass3d_SolidExplorer::*)() ) static_cast<const BRepClass3d_BndBoxTree & (BRepClass3d_SolidExplorer::*)() >(&BRepClass3d_SolidExplorer::GetTree),
             R"#(Return UB-tree instance which is used for edge / vertex checks.)#" )
        .def("GetMapEV",
             (const TopTools_IndexedMapOfShape & (BRepClass3d_SolidExplorer::*)() ) static_cast<const TopTools_IndexedMapOfShape & (BRepClass3d_SolidExplorer::*)() >(&BRepClass3d_SolidExplorer::GetMapEV),
             R"#(Return edge/vertices map for current shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass3d_SolidPassiveClassifier , shared_ptr<BRepClass3d_SolidPassiveClassifier> >>(m.attr("BRepClass3d_SolidPassiveClassifier"))
    // constructors
    // custom constructors
    // methods
        .def("Parameter",
             (Standard_Real (BRepClass3d_SolidPassiveClassifier::*)() const) static_cast<Standard_Real (BRepClass3d_SolidPassiveClassifier::*)() const>(&BRepClass3d_SolidPassiveClassifier::Parameter),
             R"#(Returns the current value of the parameter.)#" )
        .def("HasIntersection",
             (Standard_Boolean (BRepClass3d_SolidPassiveClassifier::*)() const) static_cast<Standard_Boolean (BRepClass3d_SolidPassiveClassifier::*)() const>(&BRepClass3d_SolidPassiveClassifier::HasIntersection),
             R"#(Returns True if an intersection is computed.)#" )
        .def("Intersector",
             (BRepClass3d_Intersector3d & (BRepClass3d_SolidPassiveClassifier::*)() ) static_cast<BRepClass3d_Intersector3d & (BRepClass3d_SolidPassiveClassifier::*)() >(&BRepClass3d_SolidPassiveClassifier::Intersector),
             R"#(Returns the intersecting algorithm.)#" )
        .def("State",
             (TopAbs_State (BRepClass3d_SolidPassiveClassifier::*)() const) static_cast<TopAbs_State (BRepClass3d_SolidPassiveClassifier::*)() const>(&BRepClass3d_SolidPassiveClassifier::State),
             R"#(Returns the current state of the point.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass3d_SolidClassifier , shared_ptr<BRepClass3d_SolidClassifier> , BRepClass3d_SClassifier>>(m.attr("BRepClass3d_SolidClassifier"))
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
// ./opencascade/BRepClass3d_SolidExplorer.hxx
// ./opencascade/BRepClass3d_SolidPassiveClassifier.hxx
// ./opencascade/BRepClass3d_BndBoxTree.hxx
// ./opencascade/BRepClass3d_SClassifier.hxx
// ./opencascade/BRepClass3d_SolidClassifier.hxx
// ./opencascade/BRepClass3d_MapOfInter.hxx
// ./opencascade/BRepClass3d.hxx
// ./opencascade/BRepClass3d_Intersector3d.hxx
// ./opencascade/BRepClass3d_DataMapIteratorOfMapOfInter.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TopoDS_Shape, Standard_Address, TopTools_ShapeMapHasher>(m,"BRepClass3d_MapOfInter");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
