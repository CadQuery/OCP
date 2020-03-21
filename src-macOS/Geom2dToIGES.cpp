
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESGeom_Direction.hxx>
#include <Geom2d_Vector.hxx>
#include <Geom2d_VectorWithMagnitude.hxx>
#include <Geom2d_Direction.hxx>
#include <IGESGeom_Point.hxx>
#include <Geom2d_Point.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Geom2d_Curve.hxx>
#include <IGESData_IGESModel.hxx>

// module includes
#include <Geom2dToIGES_Geom2dCurve.hxx>
#include <Geom2dToIGES_Geom2dEntity.hxx>
#include <Geom2dToIGES_Geom2dPoint.hxx>
#include <Geom2dToIGES_Geom2dVector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dToIGES(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dToIGES"));


//Python trampoline classes

// classes


    static_cast<py::class_<Geom2dToIGES_Geom2dEntity , shared_ptr<Geom2dToIGES_Geom2dEntity> >>(m.attr("Geom2dToIGES_Geom2dEntity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dToIGES_Geom2dCurve , shared_ptr<Geom2dToIGES_Geom2dCurve> , Geom2dToIGES_Geom2dEntity>>(m.attr("Geom2dToIGES_Geom2dCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dToIGES_Geom2dPoint , shared_ptr<Geom2dToIGES_Geom2dPoint> , Geom2dToIGES_Geom2dEntity>>(m.attr("Geom2dToIGES_Geom2dPoint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dToIGES_Geom2dVector , shared_ptr<Geom2dToIGES_Geom2dVector> , Geom2dToIGES_Geom2dEntity>>(m.attr("Geom2dToIGES_Geom2dVector"))
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
// ./opencascade/Geom2dToIGES_Geom2dVector.hxx
// ./opencascade/Geom2dToIGES_Geom2dPoint.hxx
// ./opencascade/Geom2dToIGES_Geom2dCurve.hxx
// ./opencascade/Geom2dToIGES_Geom2dEntity.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
