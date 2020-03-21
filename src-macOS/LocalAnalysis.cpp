
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <LocalAnalysis_SurfaceContinuity.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <LocalAnalysis_SurfaceContinuity.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <GeomLProp_SLProps.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <GeomLProp_CLProps.hxx>

// module includes
#include <LocalAnalysis.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <LocalAnalysis_StatusErrorType.hxx>
#include <LocalAnalysis_SurfaceContinuity.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LocalAnalysis(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("LocalAnalysis"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<LocalAnalysis , shared_ptr<LocalAnalysis>>(m,"LocalAnalysis");

    static_cast<py::class_<LocalAnalysis , shared_ptr<LocalAnalysis> >>(m.attr("LocalAnalysis"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocalAnalysis_CurveContinuity , shared_ptr<LocalAnalysis_CurveContinuity> >>(m.attr("LocalAnalysis_CurveContinuity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LocalAnalysis_SurfaceContinuity , shared_ptr<LocalAnalysis_SurfaceContinuity> >>(m.attr("LocalAnalysis_SurfaceContinuity"))
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
// ./opencascade/LocalAnalysis_StatusErrorType.hxx
// ./opencascade/LocalAnalysis.hxx
// ./opencascade/LocalAnalysis_SurfaceContinuity.hxx
// ./opencascade/LocalAnalysis_CurveContinuity.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
