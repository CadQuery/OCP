
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepIntCurveSurface_Inter.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
