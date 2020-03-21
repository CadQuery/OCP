
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Pln.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Sphere.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <gp_Lin.hxx>
#include <IntAna_Quadric.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pln.hxx>
#include <gp_Lin.hxx>
#include <gp_Torus.hxx>
#include <gp_Cylinder.hxx>
#include <IntAna_Quadric.hxx>
#include <gp_Cone.hxx>

// module includes
#include <IntAna_Curve.hxx>
#include <IntAna_Int3Pln.hxx>
#include <IntAna_IntConicQuad.hxx>
#include <IntAna_IntLinTorus.hxx>
#include <IntAna_IntQuadQuad.hxx>
#include <IntAna_ListIteratorOfListOfCurve.hxx>
#include <IntAna_ListOfCurve.hxx>
#include <IntAna_QuadQuadGeo.hxx>
#include <IntAna_Quadric.hxx>
#include <IntAna_ResultType.hxx>

// template related includes
// ./opencascade/IntAna_ListOfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntAna_ListOfCurve.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntAna(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntAna"));


//Python trampoline classes

// classes


    static_cast<py::class_<IntAna_Curve , shared_ptr<IntAna_Curve> >>(m.attr("IntAna_Curve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntAna_Int3Pln , shared_ptr<IntAna_Int3Pln> >>(m.attr("IntAna_Int3Pln"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntAna_Int3Pln::*)() const) static_cast<Standard_Boolean (IntAna_Int3Pln::*)() const>(&IntAna_Int3Pln::IsDone),
             R"#(Returns True if the computation was successful.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntAna_Int3Pln::*)() const) static_cast<Standard_Boolean (IntAna_Int3Pln::*)() const>(&IntAna_Int3Pln::IsEmpty),
             R"#(Returns TRUE if there is no intersection POINT. If 2 planes are identical or parallel, IsEmpty will return TRUE.)#" )
        .def("Value",
             (const gp_Pnt & (IntAna_Int3Pln::*)() const) static_cast<const gp_Pnt & (IntAna_Int3Pln::*)() const>(&IntAna_Int3Pln::Value),
             R"#(Returns the intersection point.)#" )
        .def("IsDone",
             (Standard_Boolean (IntAna_Int3Pln::*)() const) static_cast<Standard_Boolean (IntAna_Int3Pln::*)() const>(&IntAna_Int3Pln::IsDone),
             R"#(Returns True if the computation was successful.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntAna_Int3Pln::*)() const) static_cast<Standard_Boolean (IntAna_Int3Pln::*)() const>(&IntAna_Int3Pln::IsEmpty),
             R"#(Returns TRUE if there is no intersection POINT. If 2 planes are identical or parallel, IsEmpty will return TRUE.)#" )
        .def("Value",
             (const gp_Pnt & (IntAna_Int3Pln::*)() const) static_cast<const gp_Pnt & (IntAna_Int3Pln::*)() const>(&IntAna_Int3Pln::Value),
             R"#(Returns the intersection point.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntAna_IntConicQuad , shared_ptr<IntAna_IntConicQuad> >>(m.attr("IntAna_IntConicQuad"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntAna_IntConicQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntConicQuad::*)() const>(&IntAna_IntConicQuad::IsDone),
             R"#(Returns TRUE if the creation completed.)#" )
        .def("IsInQuadric",
             (Standard_Boolean (IntAna_IntConicQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntConicQuad::*)() const>(&IntAna_IntConicQuad::IsInQuadric),
             R"#(Returns TRUE if the conic is in the quadric.)#" )
        .def("IsParallel",
             (Standard_Boolean (IntAna_IntConicQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntConicQuad::*)() const>(&IntAna_IntConicQuad::IsParallel),
             R"#(Returns TRUE if the line is in a quadric which is parallel to the quadric.)#" )
        .def("NbPoints",
             (Standard_Integer (IntAna_IntConicQuad::*)() const) static_cast<Standard_Integer (IntAna_IntConicQuad::*)() const>(&IntAna_IntConicQuad::NbPoints),
             R"#(Returns the number of intersection point.)#" )
        .def("Point",
             (const gp_Pnt & (IntAna_IntConicQuad::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntAna_IntConicQuad::*)( const Standard_Integer ) const>(&IntAna_IntConicQuad::Point),
             R"#(Returns the point of range N.)#"  , py::arg("N"))
        .def("ParamOnConic",
             (Standard_Real (IntAna_IntConicQuad::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntAna_IntConicQuad::*)( const Standard_Integer ) const>(&IntAna_IntConicQuad::ParamOnConic),
             R"#(Returns the parameter on the line of the intersection point of range N.)#"  , py::arg("N"))
        .def("IsDone",
             (Standard_Boolean (IntAna_IntConicQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntConicQuad::*)() const>(&IntAna_IntConicQuad::IsDone),
             R"#(Returns TRUE if the creation completed.)#" )
        .def("IsInQuadric",
             (Standard_Boolean (IntAna_IntConicQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntConicQuad::*)() const>(&IntAna_IntConicQuad::IsInQuadric),
             R"#(Returns TRUE if the conic is in the quadric.)#" )
        .def("IsParallel",
             (Standard_Boolean (IntAna_IntConicQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntConicQuad::*)() const>(&IntAna_IntConicQuad::IsParallel),
             R"#(Returns TRUE if the line is in a quadric which is parallel to the quadric.)#" )
        .def("NbPoints",
             (Standard_Integer (IntAna_IntConicQuad::*)() const) static_cast<Standard_Integer (IntAna_IntConicQuad::*)() const>(&IntAna_IntConicQuad::NbPoints),
             R"#(Returns the number of intersection point.)#" )
        .def("Point",
             (const gp_Pnt & (IntAna_IntConicQuad::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntAna_IntConicQuad::*)( const Standard_Integer ) const>(&IntAna_IntConicQuad::Point),
             R"#(Returns the point of range N.)#"  , py::arg("i"))
        .def("ParamOnConic",
             (Standard_Real (IntAna_IntConicQuad::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntAna_IntConicQuad::*)( const Standard_Integer ) const>(&IntAna_IntConicQuad::ParamOnConic),
             R"#(Returns the parameter on the line of the intersection point of range N.)#"  , py::arg("i"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntAna_IntLinTorus , shared_ptr<IntAna_IntLinTorus> >>(m.attr("IntAna_IntLinTorus"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntAna_IntLinTorus::*)() const) static_cast<Standard_Boolean (IntAna_IntLinTorus::*)() const>(&IntAna_IntLinTorus::IsDone),
             R"#(Returns True if the computation was successful.)#" )
        .def("NbPoints",
             (Standard_Integer (IntAna_IntLinTorus::*)() const) static_cast<Standard_Integer (IntAna_IntLinTorus::*)() const>(&IntAna_IntLinTorus::NbPoints),
             R"#(Returns the number of intersection points.)#" )
        .def("Value",
             (const gp_Pnt & (IntAna_IntLinTorus::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntAna_IntLinTorus::*)( const Standard_Integer ) const>(&IntAna_IntLinTorus::Value),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("ParamOnLine",
             (Standard_Real (IntAna_IntLinTorus::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntAna_IntLinTorus::*)( const Standard_Integer ) const>(&IntAna_IntLinTorus::ParamOnLine),
             R"#(Returns the parameter on the line of the intersection point of range Index.)#"  , py::arg("Index"))
        .def("IsDone",
             (Standard_Boolean (IntAna_IntLinTorus::*)() const) static_cast<Standard_Boolean (IntAna_IntLinTorus::*)() const>(&IntAna_IntLinTorus::IsDone),
             R"#(Returns True if the computation was successful.)#" )
        .def("NbPoints",
             (Standard_Integer (IntAna_IntLinTorus::*)() const) static_cast<Standard_Integer (IntAna_IntLinTorus::*)() const>(&IntAna_IntLinTorus::NbPoints),
             R"#(Returns the number of intersection points.)#" )
        .def("Value",
             (const gp_Pnt & (IntAna_IntLinTorus::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntAna_IntLinTorus::*)( const Standard_Integer ) const>(&IntAna_IntLinTorus::Value),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("ParamOnLine",
             (Standard_Real (IntAna_IntLinTorus::*)( const Standard_Integer ) const) static_cast<Standard_Real (IntAna_IntLinTorus::*)( const Standard_Integer ) const>(&IntAna_IntLinTorus::ParamOnLine),
             R"#(Returns the parameter on the line of the intersection point of range Index.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("ParamOnTorus",
             []( IntAna_IntLinTorus &self , const Standard_Integer Index ){ Standard_Real  FI; Standard_Real  THETA; self.ParamOnTorus(Index,FI,THETA); return std::make_tuple(FI,THETA); },
             R"#(Returns the parameters on the torus of the intersection point of range Index.)#"  , py::arg("Index"))
        .def("ParamOnTorus",
             []( IntAna_IntLinTorus &self , const Standard_Integer Index ){ Standard_Real  FI; Standard_Real  THETA; self.ParamOnTorus(Index,FI,THETA); return std::make_tuple(FI,THETA); },
             R"#(Returns the parameters on the torus of the intersection point of range Index.)#"  , py::arg("Index"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntAna_IntQuadQuad , shared_ptr<IntAna_IntQuadQuad> >>(m.attr("IntAna_IntQuadQuad"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::IsDone),
             R"#(Returns True if the computation was successful.)#" )
        .def("IdenticalElements",
             (Standard_Boolean (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::IdenticalElements),
             R"#(Returns TRUE if the cylinder, the cone or the sphere is identical to the quadric.)#" )
        .def("NbCurve",
             (Standard_Integer (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Integer (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::NbCurve),
             R"#(Returns the number of curves solution.)#" )
        .def("NbPnt",
             (Standard_Integer (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Integer (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::NbPnt),
             R"#(Returns the number of contact point.)#" )
        .def("IsDone",
             (Standard_Boolean (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::IsDone),
             R"#(Returns True if the computation was successful.)#" )
        .def("IdenticalElements",
             (Standard_Boolean (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::IdenticalElements),
             R"#(Returns TRUE if the cylinder, the cone or the sphere is identical to the quadric.)#" )
        .def("NbCurve",
             (Standard_Integer (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Integer (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::NbCurve),
             R"#(Returns the number of curves solution.)#" )
        .def("NbPnt",
             (Standard_Integer (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Integer (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::NbPnt),
             R"#(Returns the number of contact point.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntAna_QuadQuadGeo , shared_ptr<IntAna_QuadQuadGeo> >>(m.attr("IntAna_QuadQuadGeo"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntAna_QuadQuadGeo::*)() const) static_cast<Standard_Boolean (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::IsDone),
             R"#(Returns Standard_True if the computation was successful.)#" )
        .def("TypeInter",
             (IntAna_ResultType (IntAna_QuadQuadGeo::*)() const) static_cast<IntAna_ResultType (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::TypeInter),
             R"#(Returns the type of intersection.)#" )
        .def("NbSolutions",
             (Standard_Integer (IntAna_QuadQuadGeo::*)() const) static_cast<Standard_Integer (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::NbSolutions),
             R"#(Returns the number of interesections. The possible intersections are : - 1 point - 1 or 2 line(s) - 1 Point and 1 Line - 1 circle - 1 ellipse - 1 parabola - 1 or 2 hyperbola(s).)#" )
        .def("IsDone",
             (Standard_Boolean (IntAna_QuadQuadGeo::*)() const) static_cast<Standard_Boolean (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::IsDone),
             R"#(Returns Standard_True if the computation was successful.)#" )
        .def("TypeInter",
             (IntAna_ResultType (IntAna_QuadQuadGeo::*)() const) static_cast<IntAna_ResultType (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::TypeInter),
             R"#(Returns the type of intersection.)#" )
        .def("NbSolutions",
             (Standard_Integer (IntAna_QuadQuadGeo::*)() const) static_cast<Standard_Integer (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::NbSolutions),
             R"#(Returns the number of interesections. The possible intersections are : - 1 point - 1 or 2 line(s) - 1 Point and 1 Line - 1 circle - 1 ellipse - 1 parabola - 1 or 2 hyperbola(s).)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntAna_Quadric , shared_ptr<IntAna_Quadric> >>(m.attr("IntAna_Quadric"))
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
// ./opencascade/IntAna_Curve.hxx
// ./opencascade/IntAna_Quadric.hxx
// ./opencascade/IntAna_Int3Pln.hxx
// ./opencascade/IntAna_QuadQuadGeo.hxx
// ./opencascade/IntAna_IntConicQuad.hxx
// ./opencascade/IntAna_ResultType.hxx
// ./opencascade/IntAna_ListIteratorOfListOfCurve.hxx
// ./opencascade/IntAna_IntLinTorus.hxx
// ./opencascade/IntAna_IntQuadQuad.hxx
// ./opencascade/IntAna_ListOfCurve.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<IntAna_Curve>(m,"IntAna_ListOfCurve");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
