
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <Geom2dAPI_ExtremaCurveCurve.hxx>
#include <Geom2dAPI_InterCurveCurve.hxx>
#include <Geom2dAPI_Interpolate.hxx>
#include <Geom2dAPI_PointsToBSpline.hxx>
#include <Geom2dAPI_ProjectPointOnCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dAPI"));


//Python trampoline classes

// classes


    static_cast<py::class_<Geom2dAPI_ExtremaCurveCurve , shared_ptr<Geom2dAPI_ExtremaCurveCurve> >>(m.attr("Geom2dAPI_ExtremaCurveCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Extrema",
             (const Extrema_ExtCC2d & (Geom2dAPI_ExtremaCurveCurve::*)() const) static_cast<const Extrema_ExtCC2d & (Geom2dAPI_ExtremaCurveCurve::*)() const>(&Geom2dAPI_ExtremaCurveCurve::Extrema),
             R"#(None)#" )
        .def("Extrema",
             (const Extrema_ExtCC2d & (Geom2dAPI_ExtremaCurveCurve::*)() const) static_cast<const Extrema_ExtCC2d & (Geom2dAPI_ExtremaCurveCurve::*)() const>(&Geom2dAPI_ExtremaCurveCurve::Extrema),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dAPI_InterCurveCurve , shared_ptr<Geom2dAPI_InterCurveCurve> >>(m.attr("Geom2dAPI_InterCurveCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Intersector",
             (const Geom2dInt_GInter & (Geom2dAPI_InterCurveCurve::*)() const) static_cast<const Geom2dInt_GInter & (Geom2dAPI_InterCurveCurve::*)() const>(&Geom2dAPI_InterCurveCurve::Intersector),
             R"#(return the algorithmic object from Intersection.)#" )
        .def("Intersector",
             (const Geom2dInt_GInter & (Geom2dAPI_InterCurveCurve::*)() const) static_cast<const Geom2dInt_GInter & (Geom2dAPI_InterCurveCurve::*)() const>(&Geom2dAPI_InterCurveCurve::Intersector),
             R"#(return the algorithmic object from Intersection.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dAPI_Interpolate , shared_ptr<Geom2dAPI_Interpolate> >>(m.attr("Geom2dAPI_Interpolate"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dAPI_PointsToBSpline , shared_ptr<Geom2dAPI_PointsToBSpline> >>(m.attr("Geom2dAPI_PointsToBSpline"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dAPI_ProjectPointOnCurve , shared_ptr<Geom2dAPI_ProjectPointOnCurve> >>(m.attr("Geom2dAPI_ProjectPointOnCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Extrema",
             (const Extrema_ExtPC2d & (Geom2dAPI_ProjectPointOnCurve::*)() const) static_cast<const Extrema_ExtPC2d & (Geom2dAPI_ProjectPointOnCurve::*)() const>(&Geom2dAPI_ProjectPointOnCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtPC2d & (Geom2dAPI_ProjectPointOnCurve::*)() const) static_cast<const Extrema_ExtPC2d & (Geom2dAPI_ProjectPointOnCurve::*)() const>(&Geom2dAPI_ProjectPointOnCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Geom2dAPI_PointsToBSpline.hxx
// ./opencascade/Geom2dAPI_ExtremaCurveCurve.hxx
// ./opencascade/Geom2dAPI_InterCurveCurve.hxx
// ./opencascade/Geom2dAPI_ProjectPointOnCurve.hxx
// ./opencascade/Geom2dAPI_Interpolate.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
