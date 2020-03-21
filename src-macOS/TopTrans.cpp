
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <TopTrans_Array2OfOrientation.hxx>
#include <TopTrans_CurveTransition.hxx>
#include <TopTrans_SurfaceTransition.hxx>

// template related includes
// ./opencascade/TopTrans_Array2OfOrientation.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopTrans(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopTrans"));


//Python trampoline classes

// classes


    static_cast<py::class_<TopTrans_CurveTransition , shared_ptr<TopTrans_CurveTransition> >>(m.attr("TopTrans_CurveTransition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopTrans_SurfaceTransition , shared_ptr<TopTrans_SurfaceTransition> >>(m.attr("TopTrans_SurfaceTransition"))
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
// ./opencascade/TopTrans_Array2OfOrientation.hxx
// ./opencascade/TopTrans_SurfaceTransition.hxx
// ./opencascade/TopTrans_CurveTransition.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array2<TopAbs_Orientation>(m,"TopTrans_Array2OfOrientation");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
