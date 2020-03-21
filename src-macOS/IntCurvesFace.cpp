
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Lin.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <gp_Lin.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_HInter.hxx>
#include <Bnd_Box.hxx>

// module includes
#include <IntCurvesFace_Intersector.hxx>
#include <IntCurvesFace_ShapeIntersector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntCurvesFace(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntCurvesFace"));


//Python trampoline classes

// classes


    static_cast<py::class_<IntCurvesFace_Intersector , shared_ptr<IntCurvesFace_Intersector> >>(m.attr("IntCurvesFace_Intersector"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntCurvesFace_Intersector::*)() const) static_cast<Standard_Boolean (IntCurvesFace_Intersector::*)() const>(&IntCurvesFace_Intersector::IsDone),
             R"#(True is returned when the intersection have been computed.)#" )
        .def("NbPnt",
             (Standard_Integer (IntCurvesFace_Intersector::*)() const) static_cast<Standard_Integer (IntCurvesFace_Intersector::*)() const>(&IntCurvesFace_Intersector::NbPnt),
             R"#(None)#" )
        .def("UParameter",
             (Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::UParameter),
             R"#(Returns the U parameter of the ith intersection point on the surface.)#"  , py::arg("I"))
        .def("VParameter",
             (Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::VParameter),
             R"#(Returns the V parameter of the ith intersection point on the surface.)#"  , py::arg("I"))
        .def("WParameter",
             (Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::WParameter),
             R"#(Returns the parameter of the ith intersection point on the line.)#"  , py::arg("I"))
        .def("Pnt",
             (const gp_Pnt & (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::Pnt),
             R"#(Returns the geometric point of the ith intersection between the line and the surface.)#"  , py::arg("I"))
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<IntCurveSurface_TransitionOnCurve (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::Transition),
             R"#(Returns the ith transition of the line on the surface.)#"  , py::arg("I"))
        .def("State",
             (TopAbs_State (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<TopAbs_State (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::State),
             R"#(Returns the ith state of the point on the face. The values can be either TopAbs_IN ( the point is in the face) or TopAbs_ON ( the point is on a boudary of the face).)#"  , py::arg("I"))
        .def("IsParallel",
             (Standard_Boolean (IntCurvesFace_Intersector::*)() const) static_cast<Standard_Boolean (IntCurvesFace_Intersector::*)() const>(&IntCurvesFace_Intersector::IsParallel),
             R"#(Returns true if curve is parallel or belongs face surface This case is recognized only for some pairs of analytical curves and surfaces (plane - line, ...))#" )
        .def("Face",
             (const TopoDS_Face & (IntCurvesFace_Intersector::*)() const) static_cast<const TopoDS_Face & (IntCurvesFace_Intersector::*)() const>(&IntCurvesFace_Intersector::Face),
             R"#(Returns the significant face used to determine the intersection.)#" )
        .def("IsDone",
             (Standard_Boolean (IntCurvesFace_Intersector::*)() const) static_cast<Standard_Boolean (IntCurvesFace_Intersector::*)() const>(&IntCurvesFace_Intersector::IsDone),
             R"#(True is returned when the intersection have been computed.)#" )
        .def("NbPnt",
             (Standard_Integer (IntCurvesFace_Intersector::*)() const) static_cast<Standard_Integer (IntCurvesFace_Intersector::*)() const>(&IntCurvesFace_Intersector::NbPnt),
             R"#(None)#" )
        .def("Pnt",
             (const gp_Pnt & (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::Pnt),
             R"#(Returns the geometric point of the ith intersection between the line and the surface.)#"  , py::arg("i"))
        .def("UParameter",
             (Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::UParameter),
             R"#(Returns the U parameter of the ith intersection point on the surface.)#"  , py::arg("i"))
        .def("VParameter",
             (Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::VParameter),
             R"#(Returns the V parameter of the ith intersection point on the surface.)#"  , py::arg("i"))
        .def("WParameter",
             (Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::WParameter),
             R"#(Returns the parameter of the ith intersection point on the line.)#"  , py::arg("i"))
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<IntCurveSurface_TransitionOnCurve (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::Transition),
             R"#(Returns the ith transition of the line on the surface.)#"  , py::arg("i"))
        .def("State",
             (TopAbs_State (IntCurvesFace_Intersector::*)( const Standard_Integer ) const) static_cast<TopAbs_State (IntCurvesFace_Intersector::*)( const Standard_Integer ) const>(&IntCurvesFace_Intersector::State),
             R"#(Returns the ith state of the point on the face. The values can be either TopAbs_IN ( the point is in the face) or TopAbs_ON ( the point is on a boudary of the face).)#"  , py::arg("i"))
        .def("IsParallel",
             (Standard_Boolean (IntCurvesFace_Intersector::*)() const) static_cast<Standard_Boolean (IntCurvesFace_Intersector::*)() const>(&IntCurvesFace_Intersector::IsParallel),
             R"#(Returns true if curve is parallel or belongs face surface This case is recognized only for some pairs of analytical curves and surfaces (plane - line, ...))#" )
        .def("Face",
             (const TopoDS_Face & (IntCurvesFace_Intersector::*)() const) static_cast<const TopoDS_Face & (IntCurvesFace_Intersector::*)() const>(&IntCurvesFace_Intersector::Face),
             R"#(Returns the significant face used to determine the intersection.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntCurvesFace_ShapeIntersector , shared_ptr<IntCurvesFace_ShapeIntersector> >>(m.attr("IntCurvesFace_ShapeIntersector"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntCurvesFace_ShapeIntersector::*)() const) static_cast<Standard_Boolean (IntCurvesFace_ShapeIntersector::*)() const>(&IntCurvesFace_ShapeIntersector::IsDone),
             R"#(True is returned when the intersection have been computed.)#" )
        .def("NbPnt",
             (Standard_Integer (IntCurvesFace_ShapeIntersector::*)() const) static_cast<Standard_Integer (IntCurvesFace_ShapeIntersector::*)() const>(&IntCurvesFace_ShapeIntersector::NbPnt),
             R"#(None)#" )
        .def("UParameter",
             (Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::UParameter),
             R"#(Returns the U parameter of the ith intersection point on the surface.)#"  , py::arg("I"))
        .def("VParameter",
             (Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::VParameter),
             R"#(Returns the V parameter of the ith intersection point on the surface.)#"  , py::arg("I"))
        .def("WParameter",
             (Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::WParameter),
             R"#(Returns the parameter of the ith intersection point on the line.)#"  , py::arg("I"))
        .def("Pnt",
             (const gp_Pnt & (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::Pnt),
             R"#(Returns the geometric point of the ith intersection between the line and the surface.)#"  , py::arg("I"))
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<IntCurveSurface_TransitionOnCurve (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::Transition),
             R"#(Returns the ith transition of the line on the surface.)#"  , py::arg("I"))
        .def("State",
             (TopAbs_State (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<TopAbs_State (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::State),
             R"#(Returns the ith state of the point on the face. The values can be either TopAbs_IN ( the point is in the face) or TopAbs_ON ( the point is on a boudary of the face).)#"  , py::arg("I"))
        .def("Face",
             (const TopoDS_Face & (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::Face),
             R"#(Returns the significant face used to determine the intersection.)#"  , py::arg("I"))
        .def("NbPnt",
             (Standard_Integer (IntCurvesFace_ShapeIntersector::*)() const) static_cast<Standard_Integer (IntCurvesFace_ShapeIntersector::*)() const>(&IntCurvesFace_ShapeIntersector::NbPnt),
             R"#(None)#" )
        .def("UParameter",
             (Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::UParameter),
             R"#(Returns the U parameter of the ith intersection point on the surface.)#"  , py::arg("i"))
        .def("VParameter",
             (Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::VParameter),
             R"#(Returns the V parameter of the ith intersection point on the surface.)#"  , py::arg("i"))
        .def("WParameter",
             (Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::WParameter),
             R"#(Returns the parameter of the ith intersection point on the line.)#"  , py::arg("i"))
        .def("Pnt",
             (const gp_Pnt & (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::Pnt),
             R"#(Returns the geometric point of the ith intersection between the line and the surface.)#"  , py::arg("i"))
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<IntCurveSurface_TransitionOnCurve (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::Transition),
             R"#(Returns the ith transition of the line on the surface.)#"  , py::arg("i"))
        .def("State",
             (TopAbs_State (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<TopAbs_State (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::State),
             R"#(Returns the ith state of the point on the face. The values can be either TopAbs_IN ( the point is in the face) or TopAbs_ON ( the point is on a boudary of the face).)#"  , py::arg("i"))
        .def("Face",
             (const TopoDS_Face & (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (IntCurvesFace_ShapeIntersector::*)( const Standard_Integer ) const>(&IntCurvesFace_ShapeIntersector::Face),
             R"#(Returns the significant face used to determine the intersection.)#"  , py::arg("i"))
        .def("IsDone",
             (Standard_Boolean (IntCurvesFace_ShapeIntersector::*)() const) static_cast<Standard_Boolean (IntCurvesFace_ShapeIntersector::*)() const>(&IntCurvesFace_ShapeIntersector::IsDone),
             R"#(True is returned when the intersection have been computed.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntCurvesFace_ShapeIntersector.hxx
// ./opencascade/IntCurvesFace_Intersector.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
