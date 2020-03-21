
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESGeom_CopiousData.hxx>
#include <gp_Ax3.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax1.hxx>
#include <IGESGeom_TransformationMatrix.hxx>
#include <IGESGeom_SplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <IGESGeom_SplineSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <IGESConvGeom_GeomBuilder.hxx>

// module includes
#include <IGESConvGeom.hxx>
#include <IGESConvGeom_GeomBuilder.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESConvGeom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESConvGeom"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESConvGeom , shared_ptr<IGESConvGeom>>(m,"IGESConvGeom");

    static_cast<py::class_<IGESConvGeom , shared_ptr<IGESConvGeom> >>(m.attr("IGESConvGeom"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESConvGeom_GeomBuilder , shared_ptr<IGESConvGeom_GeomBuilder> >>(m.attr("IGESConvGeom_GeomBuilder"))
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
// ./opencascade/IGESConvGeom_GeomBuilder.hxx
// ./opencascade/IGESConvGeom.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
