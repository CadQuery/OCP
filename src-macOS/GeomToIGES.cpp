
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IGESData_IGESEntity.hxx>
#include <Geom_Surface.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_ElementarySurface.hxx>
#include <Geom_Plane.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_SweptSurface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_OffsetSurface.hxx>
#include <IGESGeom_Point.hxx>
#include <Geom_Point.hxx>
#include <Geom_CartesianPoint.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Geom_Curve.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_Conic.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_Line.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_OffsetCurve.hxx>
#include <IGESGeom_Direction.hxx>
#include <Geom_Vector.hxx>
#include <Geom_VectorWithMagnitude.hxx>
#include <Geom_Direction.hxx>

// module includes
#include <GeomToIGES_GeomCurve.hxx>
#include <GeomToIGES_GeomEntity.hxx>
#include <GeomToIGES_GeomPoint.hxx>
#include <GeomToIGES_GeomSurface.hxx>
#include <GeomToIGES_GeomVector.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomToIGES(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomToIGES"));


//Python trampoline classes

// classes


    static_cast<py::class_<GeomToIGES_GeomEntity , shared_ptr<GeomToIGES_GeomEntity> >>(m.attr("GeomToIGES_GeomEntity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToIGES_GeomCurve , shared_ptr<GeomToIGES_GeomCurve> , GeomToIGES_GeomEntity>>(m.attr("GeomToIGES_GeomCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToIGES_GeomPoint , shared_ptr<GeomToIGES_GeomPoint> , GeomToIGES_GeomEntity>>(m.attr("GeomToIGES_GeomPoint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToIGES_GeomSurface , shared_ptr<GeomToIGES_GeomSurface> , GeomToIGES_GeomEntity>>(m.attr("GeomToIGES_GeomSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomToIGES_GeomVector , shared_ptr<GeomToIGES_GeomVector> , GeomToIGES_GeomEntity>>(m.attr("GeomToIGES_GeomVector"))
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
// ./opencascade/GeomToIGES_GeomSurface.hxx
// ./opencascade/GeomToIGES_GeomPoint.hxx
// ./opencascade/GeomToIGES_GeomEntity.hxx
// ./opencascade/GeomToIGES_GeomCurve.hxx
// ./opencascade/GeomToIGES_GeomVector.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
