
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Pln.hxx>
#include <gp_Lin.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Ax1.hxx>
#include <GProp_PrincipalProps.hxx>
#include <GProp_UndefinedAxis.hxx>
#include <gp_Pnt.hxx>
#include <gp_Mat.hxx>
#include <GProp_GProps.hxx>
#include <GProp_PGProps.hxx>
#include <GProp_CelGProps.hxx>
#include <GProp_SelGProps.hxx>
#include <GProp_VelGProps.hxx>
#include <GProp_PrincipalProps.hxx>
#include <GProp_PEquation.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>

// module includes
#include <GProp.hxx>
#include <GProp_CelGProps.hxx>
#include <GProp_EquaType.hxx>
#include <GProp_GProps.hxx>
#include <GProp_PEquation.hxx>
#include <GProp_PGProps.hxx>
#include <GProp_PrincipalProps.hxx>
#include <GProp_SelGProps.hxx>
#include <GProp_UndefinedAxis.hxx>
#include <GProp_ValueType.hxx>
#include <GProp_VelGProps.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GProp"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GProp , shared_ptr<GProp>>(m,"GProp");

    static_cast<py::class_<GProp , shared_ptr<GProp> >>(m.attr("GProp"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_GProps , shared_ptr<GProp_GProps> >>(m.attr("GProp_GProps"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_PEquation , shared_ptr<GProp_PEquation> >>(m.attr("GProp_PEquation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_PrincipalProps , shared_ptr<GProp_PrincipalProps> >>(m.attr("GProp_PrincipalProps"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_CelGProps , shared_ptr<GProp_CelGProps> , GProp_GProps>>(m.attr("GProp_CelGProps"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_PGProps , shared_ptr<GProp_PGProps> , GProp_GProps>>(m.attr("GProp_PGProps"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_SelGProps , shared_ptr<GProp_SelGProps> , GProp_GProps>>(m.attr("GProp_SelGProps"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GProp_VelGProps , shared_ptr<GProp_VelGProps> , GProp_GProps>>(m.attr("GProp_VelGProps"))
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
// ./opencascade/GProp_CelGProps.hxx
// ./opencascade/GProp_ValueType.hxx
// ./opencascade/GProp_PEquation.hxx
// ./opencascade/GProp_SelGProps.hxx
// ./opencascade/GProp_PGProps.hxx
// ./opencascade/GProp_EquaType.hxx
// ./opencascade/GProp_GProps.hxx
// ./opencascade/GProp_UndefinedAxis.hxx
// ./opencascade/GProp_PrincipalProps.hxx
// ./opencascade/GProp.hxx
// ./opencascade/GProp_VelGProps.hxx

// Additional functions

// operators

// register typdefs


// exceptions
register_occ_exception<GProp_UndefinedAxis>(m, "GProp_UndefinedAxis");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
