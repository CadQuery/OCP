
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_Surface.hxx>
#include <Bnd_Box.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Lin.hxx>
#include <Bnd_Box.hxx>
#include <gp_Lin2d.hxx>
#include <Bnd_Box2d.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <BndLib_Add3dCurve.hxx>
#include <BndLib_Add2dCurve.hxx>
#include <BndLib_AddSurface.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Bnd_Box2d.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Bnd_Box.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>

// module includes
#include <BndLib.hxx>
#include <BndLib_Add2dCurve.hxx>
#include <BndLib_Add3dCurve.hxx>
#include <BndLib_AddSurface.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BndLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BndLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BndLib , shared_ptr<BndLib>>(m,"BndLib");

    static_cast<py::class_<BndLib , shared_ptr<BndLib> >>(m.attr("BndLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BndLib_Add2dCurve , shared_ptr<BndLib_Add2dCurve>>(m,"BndLib_Add2dCurve");

    static_cast<py::class_<BndLib_Add2dCurve , shared_ptr<BndLib_Add2dCurve> >>(m.attr("BndLib_Add2dCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BndLib_Add3dCurve , shared_ptr<BndLib_Add3dCurve>>(m,"BndLib_Add3dCurve");

    static_cast<py::class_<BndLib_Add3dCurve , shared_ptr<BndLib_Add3dCurve> >>(m.attr("BndLib_Add3dCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BndLib_AddSurface , shared_ptr<BndLib_AddSurface>>(m,"BndLib_AddSurface");

    static_cast<py::class_<BndLib_AddSurface , shared_ptr<BndLib_AddSurface> >>(m.attr("BndLib_AddSurface"))
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
// ./opencascade/BndLib_AddSurface.hxx
// ./opencascade/BndLib.hxx
// ./opencascade/BndLib_Add2dCurve.hxx
// ./opencascade/BndLib_Add3dCurve.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
