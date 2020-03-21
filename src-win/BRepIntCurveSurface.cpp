
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <GeomAdaptor_HCurve.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <gp_Lin.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <BRepIntCurveSurface_Inter.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepIntCurveSurface(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepIntCurveSurface"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepIntCurveSurface_Inter , shared_ptr<BRepIntCurveSurface_Inter> >>(m.attr("BRepIntCurveSurface_Inter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepIntCurveSurface_Inter::*)( const TopoDS_Shape & , const GeomAdaptor_Curve & , const Standard_Real ) ) static_cast<void (BRepIntCurveSurface_Inter::*)( const TopoDS_Shape & , const GeomAdaptor_Curve & , const Standard_Real ) >(&BRepIntCurveSurface_Inter::Init),
             R"#(Load the Shape, the curve and initialize the tolerance used for the classification.)#"  , py::arg("theShape"),  py::arg("theCurve"),  py::arg("theTol"))
        .def("Init",
             (void (BRepIntCurveSurface_Inter::*)( const TopoDS_Shape & , const gp_Lin & , const Standard_Real ) ) static_cast<void (BRepIntCurveSurface_Inter::*)( const TopoDS_Shape & , const gp_Lin & , const Standard_Real ) >(&BRepIntCurveSurface_Inter::Init),
             R"#(Load the Shape, the curve and initialize the tolerance used for the classification.)#"  , py::arg("theShape"),  py::arg("theLine"),  py::arg("theTol"))
        .def("Load",
             (void (BRepIntCurveSurface_Inter::*)( const TopoDS_Shape & , const Standard_Real ) ) static_cast<void (BRepIntCurveSurface_Inter::*)( const TopoDS_Shape & , const Standard_Real ) >(&BRepIntCurveSurface_Inter::Load),
             R"#(Load the Shape, and initialize the tolerance used for the classification.)#"  , py::arg("theShape"),  py::arg("theTol"))
        .def("Init",
             (void (BRepIntCurveSurface_Inter::*)( const GeomAdaptor_Curve & ) ) static_cast<void (BRepIntCurveSurface_Inter::*)( const GeomAdaptor_Curve & ) >(&BRepIntCurveSurface_Inter::Init),
             R"#(Method to find intersections of specified curve with loaded shape.)#"  , py::arg("theCurve"))
        .def("More",
             (Standard_Boolean (BRepIntCurveSurface_Inter::*)() const) static_cast<Standard_Boolean (BRepIntCurveSurface_Inter::*)() const>(&BRepIntCurveSurface_Inter::More),
             R"#(returns True if there is a current face.)#" )
        .def("Next",
             (void (BRepIntCurveSurface_Inter::*)() ) static_cast<void (BRepIntCurveSurface_Inter::*)() >(&BRepIntCurveSurface_Inter::Next),
             R"#(Sets the next intersection point to check.)#" )
        .def("Point",
             (IntCurveSurface_IntersectionPoint (BRepIntCurveSurface_Inter::*)() const) static_cast<IntCurveSurface_IntersectionPoint (BRepIntCurveSurface_Inter::*)() const>(&BRepIntCurveSurface_Inter::Point),
             R"#(returns the current Intersection point.)#" )
        .def("Pnt",
             (const gp_Pnt & (BRepIntCurveSurface_Inter::*)() const) static_cast<const gp_Pnt & (BRepIntCurveSurface_Inter::*)() const>(&BRepIntCurveSurface_Inter::Pnt),
             R"#(returns the current geometric Point)#" )
        .def("U",
             (Standard_Real (BRepIntCurveSurface_Inter::*)() const) static_cast<Standard_Real (BRepIntCurveSurface_Inter::*)() const>(&BRepIntCurveSurface_Inter::U),
             R"#(returns the U parameter of the current point on the current face.)#" )
        .def("V",
             (Standard_Real (BRepIntCurveSurface_Inter::*)() const) static_cast<Standard_Real (BRepIntCurveSurface_Inter::*)() const>(&BRepIntCurveSurface_Inter::V),
             R"#(returns the V parameter of the current point on the current face.)#" )
        .def("W",
             (Standard_Real (BRepIntCurveSurface_Inter::*)() const) static_cast<Standard_Real (BRepIntCurveSurface_Inter::*)() const>(&BRepIntCurveSurface_Inter::W),
             R"#(returns the parameter of the current point on the curve.)#" )
        .def("State",
             (TopAbs_State (BRepIntCurveSurface_Inter::*)() const) static_cast<TopAbs_State (BRepIntCurveSurface_Inter::*)() const>(&BRepIntCurveSurface_Inter::State),
             R"#(returns the current state (IN or ON))#" )
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (BRepIntCurveSurface_Inter::*)() const) static_cast<IntCurveSurface_TransitionOnCurve (BRepIntCurveSurface_Inter::*)() const>(&BRepIntCurveSurface_Inter::Transition),
             R"#(returns the transition of the line on the surface (IN or OUT or UNKNOWN))#" )
        .def("Face",
             (const TopoDS_Face & (BRepIntCurveSurface_Inter::*)() const) static_cast<const TopoDS_Face & (BRepIntCurveSurface_Inter::*)() const>(&BRepIntCurveSurface_Inter::Face),
             R"#(returns the current face.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\BRepIntCurveSurface_Inter.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
