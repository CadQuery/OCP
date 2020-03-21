
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom2dConvert_BSplineCurveKnotSplitting.hxx>
#include <Geom2dConvert_BSplineCurveToBezierCurve.hxx>
#include <Geom2dConvert_CompCurveToBSplineCurve.hxx>
#include <Geom2dConvert_ApproxCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>

// module includes
#include <Geom2dConvert.hxx>
#include <Geom2dConvert_ApproxCurve.hxx>
#include <Geom2dConvert_BSplineCurveKnotSplitting.hxx>
#include <Geom2dConvert_BSplineCurveToBezierCurve.hxx>
#include <Geom2dConvert_CompCurveToBSplineCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dConvert(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dConvert"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<Geom2dConvert , shared_ptr<Geom2dConvert>>(m,"Geom2dConvert");

    static_cast<py::class_<Geom2dConvert , shared_ptr<Geom2dConvert> >>(m.attr("Geom2dConvert"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dConvert_ApproxCurve , shared_ptr<Geom2dConvert_ApproxCurve> >>(m.attr("Geom2dConvert_ApproxCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dConvert_BSplineCurveKnotSplitting , shared_ptr<Geom2dConvert_BSplineCurveKnotSplitting> >>(m.attr("Geom2dConvert_BSplineCurveKnotSplitting"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dConvert_BSplineCurveToBezierCurve , shared_ptr<Geom2dConvert_BSplineCurveToBezierCurve> >>(m.attr("Geom2dConvert_BSplineCurveToBezierCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dConvert_CompCurveToBSplineCurve , shared_ptr<Geom2dConvert_CompCurveToBSplineCurve> >>(m.attr("Geom2dConvert_CompCurveToBSplineCurve"))
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
// ./opencascade/Geom2dConvert.hxx
// ./opencascade/Geom2dConvert_ApproxCurve.hxx
// ./opencascade/Geom2dConvert_CompCurveToBSplineCurve.hxx
// ./opencascade/Geom2dConvert_BSplineCurveKnotSplitting.hxx
// ./opencascade/Geom2dConvert_BSplineCurveToBezierCurve.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
