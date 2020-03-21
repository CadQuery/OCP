
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
#include <gp_Torus.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <IntAna_Quadric.hxx>
#include <gp_Cone.hxx>
#include <gp_Lin.hxx>
#include <IntAna_Quadric.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pln.hxx>

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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetCylinderQuadValues",
             (void (IntAna_Curve::*)( const gp_Cylinder & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (IntAna_Curve::*)( const gp_Cylinder & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&IntAna_Curve::SetCylinderQuadValues),
             R"#(Sets the parameters used to compute Points and Derivative on the curve.)#"  , py::arg("Cylinder"),  py::arg("Qxx"),  py::arg("Qyy"),  py::arg("Qzz"),  py::arg("Qxy"),  py::arg("Qxz"),  py::arg("Qyz"),  py::arg("Qx"),  py::arg("Qy"),  py::arg("Qz"),  py::arg("Q1"),  py::arg("Tol"),  py::arg("DomInf"),  py::arg("DomSup"),  py::arg("TwoZForATheta"),  py::arg("ZIsPositive"))
        .def("SetConeQuadValues",
             (void (IntAna_Curve::*)( const gp_Cone & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (IntAna_Curve::*)( const gp_Cone & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean ) >(&IntAna_Curve::SetConeQuadValues),
             R"#(Sets the parameters used to compute Points and Derivative on the curve.)#"  , py::arg("Cone"),  py::arg("Qxx"),  py::arg("Qyy"),  py::arg("Qzz"),  py::arg("Qxy"),  py::arg("Qxz"),  py::arg("Qyz"),  py::arg("Qx"),  py::arg("Qy"),  py::arg("Qz"),  py::arg("Q1"),  py::arg("Tol"),  py::arg("DomInf"),  py::arg("DomSup"),  py::arg("TwoZForATheta"),  py::arg("ZIsPositive"))
        .def("IsOpen",
             (Standard_Boolean (IntAna_Curve::*)() const) static_cast<Standard_Boolean (IntAna_Curve::*)() const>(&IntAna_Curve::IsOpen),
             R"#(Returns TRUE if the curve is not infinite at the last parameter or at the first parameter of the domain.)#" )
        .def("IsConstant",
             (Standard_Boolean (IntAna_Curve::*)() const) static_cast<Standard_Boolean (IntAna_Curve::*)() const>(&IntAna_Curve::IsConstant),
             R"#(Returns TRUE if the function is constant.)#" )
        .def("IsFirstOpen",
             (Standard_Boolean (IntAna_Curve::*)() const) static_cast<Standard_Boolean (IntAna_Curve::*)() const>(&IntAna_Curve::IsFirstOpen),
             R"#(Returns TRUE if the domain is open at the beginning.)#" )
        .def("IsLastOpen",
             (Standard_Boolean (IntAna_Curve::*)() const) static_cast<Standard_Boolean (IntAna_Curve::*)() const>(&IntAna_Curve::IsLastOpen),
             R"#(Returns TRUE if the domain is open at the end.)#" )
        .def("Value",
             (gp_Pnt (IntAna_Curve::*)( const Standard_Real ) ) static_cast<gp_Pnt (IntAna_Curve::*)( const Standard_Real ) >(&IntAna_Curve::Value),
             R"#(Returns the point at parameter Theta on the curve.)#"  , py::arg("Theta"))
        .def("D1u",
             (Standard_Boolean (IntAna_Curve::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) ) static_cast<Standard_Boolean (IntAna_Curve::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) >(&IntAna_Curve::D1u),
             R"#(Returns the point and the first derivative at parameter Theta on the curve.)#"  , py::arg("Theta"),  py::arg("P"),  py::arg("V"))
        .def("FindParameter",
             (void (IntAna_Curve::*)( const gp_Pnt & , NCollection_List<Standard_Real> & ) const) static_cast<void (IntAna_Curve::*)( const gp_Pnt & , NCollection_List<Standard_Real> & ) const>(&IntAna_Curve::FindParameter),
             R"#(Tries to find the parameter of the point P on the curve. If the method returns False, the "projection" is impossible. If the method returns True at least one parameter has been found. theParams is always sorted in ascending order.)#"  , py::arg("P"),  py::arg("theParams"))
        .def("SetIsFirstOpen",
             (void (IntAna_Curve::*)( const Standard_Boolean ) ) static_cast<void (IntAna_Curve::*)( const Standard_Boolean ) >(&IntAna_Curve::SetIsFirstOpen),
             R"#(If flag is True, the Curve is not defined at the first parameter of its domain.)#"  , py::arg("Flag"))
        .def("SetIsLastOpen",
             (void (IntAna_Curve::*)( const Standard_Boolean ) ) static_cast<void (IntAna_Curve::*)( const Standard_Boolean ) >(&IntAna_Curve::SetIsLastOpen),
             R"#(If flag is True, the Curve is not defined at the first parameter of its domain.)#"  , py::arg("Flag"))
        .def("SetDomain",
             (void (IntAna_Curve::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (IntAna_Curve::*)( const Standard_Real , const Standard_Real ) >(&IntAna_Curve::SetDomain),
             R"#(Trims this curve)#"  , py::arg("theFirst"),  py::arg("theLast"))
    // methods using call by reference i.s.o. return
        .def("Domain",
             []( IntAna_Curve &self   ){ Standard_Real  theFirst; Standard_Real  theLast; self.Domain(theFirst,theLast); return std::make_tuple(theFirst,theLast); },
             R"#(Returns the paramatric domain of the curve.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntAna_Int3Pln , shared_ptr<IntAna_Int3Pln> >>(m.attr("IntAna_Int3Pln"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pln &,const gp_Pln &,const gp_Pln & >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3") )
    // custom constructors
    // methods
        .def("Perform",
             (void (IntAna_Int3Pln::*)( const gp_Pln & , const gp_Pln & , const gp_Pln & ) ) static_cast<void (IntAna_Int3Pln::*)( const gp_Pln & , const gp_Pln & , const gp_Pln & ) >(&IntAna_Int3Pln::Perform),
             R"#(Determination of the intersection point between 3 planes.)#"  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"))
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
        .def(py::init<  >()  )
        .def(py::init< const gp_Lin &,const IntAna_Quadric & >()  , py::arg("L"),  py::arg("Q") )
        .def(py::init< const gp_Circ &,const IntAna_Quadric & >()  , py::arg("C"),  py::arg("Q") )
        .def(py::init< const gp_Elips &,const IntAna_Quadric & >()  , py::arg("E"),  py::arg("Q") )
        .def(py::init< const gp_Parab &,const IntAna_Quadric & >()  , py::arg("P"),  py::arg("Q") )
        .def(py::init< const gp_Hypr &,const IntAna_Quadric & >()  , py::arg("H"),  py::arg("Q") )
        .def(py::init< const gp_Lin &,const gp_Pln &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("P"),  py::arg("Tolang"),  py::arg("Tol")=static_cast<const Standard_Real>(0),  py::arg("Len")=static_cast<const Standard_Real>(0) )
        .def(py::init< const gp_Circ &,const gp_Pln &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("P"),  py::arg("Tolang"),  py::arg("Tol") )
        .def(py::init< const gp_Elips &,const gp_Pln &,const Standard_Real,const Standard_Real >()  , py::arg("E"),  py::arg("P"),  py::arg("Tolang"),  py::arg("Tol") )
        .def(py::init< const gp_Parab &,const gp_Pln &,const Standard_Real >()  , py::arg("Pb"),  py::arg("P"),  py::arg("Tolang") )
        .def(py::init< const gp_Hypr &,const gp_Pln &,const Standard_Real >()  , py::arg("H"),  py::arg("P"),  py::arg("Tolang") )
    // custom constructors
    // methods
        .def("Perform",
             (void (IntAna_IntConicQuad::*)( const gp_Lin & , const IntAna_Quadric & ) ) static_cast<void (IntAna_IntConicQuad::*)( const gp_Lin & , const IntAna_Quadric & ) >(&IntAna_IntConicQuad::Perform),
             R"#(Intersects a line and a quadric.)#"  , py::arg("L"),  py::arg("Q"))
        .def("Perform",
             (void (IntAna_IntConicQuad::*)( const gp_Circ & , const IntAna_Quadric & ) ) static_cast<void (IntAna_IntConicQuad::*)( const gp_Circ & , const IntAna_Quadric & ) >(&IntAna_IntConicQuad::Perform),
             R"#(Intersects a circle and a quadric.)#"  , py::arg("C"),  py::arg("Q"))
        .def("Perform",
             (void (IntAna_IntConicQuad::*)( const gp_Elips & , const IntAna_Quadric & ) ) static_cast<void (IntAna_IntConicQuad::*)( const gp_Elips & , const IntAna_Quadric & ) >(&IntAna_IntConicQuad::Perform),
             R"#(Intersects an ellipse and a quadric.)#"  , py::arg("E"),  py::arg("Q"))
        .def("Perform",
             (void (IntAna_IntConicQuad::*)( const gp_Parab & , const IntAna_Quadric & ) ) static_cast<void (IntAna_IntConicQuad::*)( const gp_Parab & , const IntAna_Quadric & ) >(&IntAna_IntConicQuad::Perform),
             R"#(Intersects a parabola and a quadric.)#"  , py::arg("P"),  py::arg("Q"))
        .def("Perform",
             (void (IntAna_IntConicQuad::*)( const gp_Hypr & , const IntAna_Quadric & ) ) static_cast<void (IntAna_IntConicQuad::*)( const gp_Hypr & , const IntAna_Quadric & ) >(&IntAna_IntConicQuad::Perform),
             R"#(Intersects an hyperbola and a quadric.)#"  , py::arg("H"),  py::arg("Q"))
        .def("Perform",
             (void (IntAna_IntConicQuad::*)( const gp_Lin & , const gp_Pln & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (IntAna_IntConicQuad::*)( const gp_Lin & , const gp_Pln & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&IntAna_IntConicQuad::Perform),
             R"#(Intersects a line and a plane. Tolang is used to determine if the angle between two vectors is null. Tol is used to check the distance between line and plane on the distance <Len> from the origin of the line.)#"  , py::arg("L"),  py::arg("P"),  py::arg("Tolang"),  py::arg("Tol")=static_cast<const Standard_Real>(0),  py::arg("Len")=static_cast<const Standard_Real>(0))
        .def("Perform",
             (void (IntAna_IntConicQuad::*)( const gp_Circ & , const gp_Pln & , const Standard_Real , const Standard_Real ) ) static_cast<void (IntAna_IntConicQuad::*)( const gp_Circ & , const gp_Pln & , const Standard_Real , const Standard_Real ) >(&IntAna_IntConicQuad::Perform),
             R"#(Intersects a circle and a plane. Tolang is used to determine if the angle between two vectors is null. Tol is used to determine if a distance is null.)#"  , py::arg("C"),  py::arg("P"),  py::arg("Tolang"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_IntConicQuad::*)( const gp_Elips & , const gp_Pln & , const Standard_Real , const Standard_Real ) ) static_cast<void (IntAna_IntConicQuad::*)( const gp_Elips & , const gp_Pln & , const Standard_Real , const Standard_Real ) >(&IntAna_IntConicQuad::Perform),
             R"#(Intersects an ellipse and a plane. Tolang is used to determine if the angle between two vectors is null. Tol is used to determine if a distance is null.)#"  , py::arg("E"),  py::arg("P"),  py::arg("Tolang"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_IntConicQuad::*)( const gp_Parab & , const gp_Pln & , const Standard_Real ) ) static_cast<void (IntAna_IntConicQuad::*)( const gp_Parab & , const gp_Pln & , const Standard_Real ) >(&IntAna_IntConicQuad::Perform),
             R"#(Intersects a parabola and a plane. Tolang is used to determine if the angle between two vectors is null.)#"  , py::arg("Pb"),  py::arg("P"),  py::arg("Tolang"))
        .def("Perform",
             (void (IntAna_IntConicQuad::*)( const gp_Hypr & , const gp_Pln & , const Standard_Real ) ) static_cast<void (IntAna_IntConicQuad::*)( const gp_Hypr & , const gp_Pln & , const Standard_Real ) >(&IntAna_IntConicQuad::Perform),
             R"#(Intersects an hyperbola and a plane. Tolang is used to determine if the angle between two vectors is null.)#"  , py::arg("H"),  py::arg("P"),  py::arg("Tolang"))
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
        .def(py::init<  >()  )
        .def(py::init< const gp_Lin &,const gp_Torus & >()  , py::arg("L"),  py::arg("T") )
    // custom constructors
    // methods
        .def("Perform",
             (void (IntAna_IntLinTorus::*)( const gp_Lin & , const gp_Torus & ) ) static_cast<void (IntAna_IntLinTorus::*)( const gp_Lin & , const gp_Torus & ) >(&IntAna_IntLinTorus::Perform),
             R"#(Intersects a line and a torus.)#"  , py::arg("L"),  py::arg("T"))
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
        .def(py::init<  >()  )
        .def(py::init< const gp_Cylinder &,const IntAna_Quadric &,const Standard_Real >()  , py::arg("C"),  py::arg("Q"),  py::arg("Tol") )
        .def(py::init< const gp_Cone &,const IntAna_Quadric &,const Standard_Real >()  , py::arg("C"),  py::arg("Q"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (IntAna_IntQuadQuad::*)( const gp_Cylinder & , const IntAna_Quadric & , const Standard_Real ) ) static_cast<void (IntAna_IntQuadQuad::*)( const gp_Cylinder & , const IntAna_Quadric & , const Standard_Real ) >(&IntAna_IntQuadQuad::Perform),
             R"#(Intersects a cylinder and a quadric . Tol est a definir plus precisemment.)#"  , py::arg("C"),  py::arg("Q"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_IntQuadQuad::*)( const gp_Cone & , const IntAna_Quadric & , const Standard_Real ) ) static_cast<void (IntAna_IntQuadQuad::*)( const gp_Cone & , const IntAna_Quadric & , const Standard_Real ) >(&IntAna_IntQuadQuad::Perform),
             R"#(Intersects a cone and a quadric. Tol est a definir plus precisemment.)#"  , py::arg("C"),  py::arg("Q"),  py::arg("Tol"))
        .def("IsDone",
             (Standard_Boolean (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::IsDone),
             R"#(Returns True if the computation was successful.)#" )
        .def("IdenticalElements",
             (Standard_Boolean (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Boolean (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::IdenticalElements),
             R"#(Returns TRUE if the cylinder, the cone or the sphere is identical to the quadric.)#" )
        .def("NbCurve",
             (Standard_Integer (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Integer (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::NbCurve),
             R"#(Returns the number of curves solution.)#" )
        .def("Curve",
             (const IntAna_Curve & (IntAna_IntQuadQuad::*)( const Standard_Integer ) const) static_cast<const IntAna_Curve & (IntAna_IntQuadQuad::*)( const Standard_Integer ) const>(&IntAna_IntQuadQuad::Curve),
             R"#(Returns the curve of range N.)#"  , py::arg("N"))
        .def("NbPnt",
             (Standard_Integer (IntAna_IntQuadQuad::*)() const) static_cast<Standard_Integer (IntAna_IntQuadQuad::*)() const>(&IntAna_IntQuadQuad::NbPnt),
             R"#(Returns the number of contact point.)#" )
        .def("Point",
             (const gp_Pnt & (IntAna_IntQuadQuad::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntAna_IntQuadQuad::*)( const Standard_Integer ) const>(&IntAna_IntQuadQuad::Point),
             R"#(Returns the point of range N.)#"  , py::arg("N"))
        .def("HasNextCurve",
             (Standard_Boolean (IntAna_IntQuadQuad::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IntAna_IntQuadQuad::*)( const Standard_Integer ) const>(&IntAna_IntQuadQuad::HasNextCurve),
             R"#(Returns True if the Curve I shares its last bound with another curve.)#"  , py::arg("I"))
        .def("NextCurve",
             (Standard_Integer (IntAna_IntQuadQuad::*)( const Standard_Integer , Standard_Boolean & ) const) static_cast<Standard_Integer (IntAna_IntQuadQuad::*)( const Standard_Integer , Standard_Boolean & ) const>(&IntAna_IntQuadQuad::NextCurve),
             R"#(If HasNextCurve(I) returns True, this function returns the Index J of the curve which has a common bound with the curve I. If theOpposite == True , then the last parameter of the curve I, and the last parameter of the curve J give the same point. Else the last parameter of the curve I and the first parameter of the curve J are the same point.)#"  , py::arg("I"),  py::arg("theOpposite"))
        .def("HasPreviousCurve",
             (Standard_Boolean (IntAna_IntQuadQuad::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IntAna_IntQuadQuad::*)( const Standard_Integer ) const>(&IntAna_IntQuadQuad::HasPreviousCurve),
             R"#(Returns True if the Curve I shares its first bound with another curve.)#"  , py::arg("I"))
        .def("PreviousCurve",
             (Standard_Integer (IntAna_IntQuadQuad::*)( const Standard_Integer , Standard_Boolean & ) const) static_cast<Standard_Integer (IntAna_IntQuadQuad::*)( const Standard_Integer , Standard_Boolean & ) const>(&IntAna_IntQuadQuad::PreviousCurve),
             R"#(if HasPreviousCurve(I) returns True, this function returns the Index J of the curve which has a common bound with the curve I. If theOpposite == True , then the first parameter of the curve I, and the first parameter of the curve J give the same point. Else the first parameter of the curve I and the last parameter of the curve J are the same point.)#"  , py::arg("I"),  py::arg("theOpposite"))
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
        .def("Parameters",
             []( IntAna_IntQuadQuad &self , const Standard_Integer N ){ Standard_Real  U1; Standard_Real  U2; self.Parameters(N,U1,U2); return std::make_tuple(U1,U2); },
             R"#(Returns the paramaters on the "explicit quadric" (i.e the cylinder or the cone, the first argument given to the constructor) of the point of range N.)#"  , py::arg("N"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntAna_QuadQuadGeo , shared_ptr<IntAna_QuadQuadGeo> >>(m.attr("IntAna_QuadQuadGeo"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pln &,const gp_Pln &,const Standard_Real,const Standard_Real >()  , py::arg("P1"),  py::arg("P2"),  py::arg("TolAng"),  py::arg("Tol") )
        .def(py::init< const gp_Pln &,const gp_Cylinder &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tolang"),  py::arg("Tol"),  py::arg("H")=static_cast<const Standard_Real>(0) )
        .def(py::init< const gp_Pln &,const gp_Sphere & >()  , py::arg("P"),  py::arg("S") )
        .def(py::init< const gp_Pln &,const gp_Cone &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("C"),  py::arg("Tolang"),  py::arg("Tol") )
        .def(py::init< const gp_Cylinder &,const gp_Cylinder &,const Standard_Real >()  , py::arg("Cyl1"),  py::arg("Cyl2"),  py::arg("Tol") )
        .def(py::init< const gp_Cylinder &,const gp_Sphere &,const Standard_Real >()  , py::arg("Cyl"),  py::arg("Sph"),  py::arg("Tol") )
        .def(py::init< const gp_Cylinder &,const gp_Cone &,const Standard_Real >()  , py::arg("Cyl"),  py::arg("Con"),  py::arg("Tol") )
        .def(py::init< const gp_Sphere &,const gp_Sphere &,const Standard_Real >()  , py::arg("Sph1"),  py::arg("Sph2"),  py::arg("Tol") )
        .def(py::init< const gp_Sphere &,const gp_Cone &,const Standard_Real >()  , py::arg("Sph"),  py::arg("Con"),  py::arg("Tol") )
        .def(py::init< const gp_Cone &,const gp_Cone &,const Standard_Real >()  , py::arg("Con1"),  py::arg("Con2"),  py::arg("Tol") )
        .def(py::init< const gp_Pln &,const gp_Torus &,const Standard_Real >()  , py::arg("Pln"),  py::arg("Tor"),  py::arg("Tol") )
        .def(py::init< const gp_Cylinder &,const gp_Torus &,const Standard_Real >()  , py::arg("Cyl"),  py::arg("Tor"),  py::arg("Tol") )
        .def(py::init< const gp_Cone &,const gp_Torus &,const Standard_Real >()  , py::arg("Con"),  py::arg("Tor"),  py::arg("Tol") )
        .def(py::init< const gp_Sphere &,const gp_Torus &,const Standard_Real >()  , py::arg("Sph"),  py::arg("Tor"),  py::arg("Tol") )
        .def(py::init< const gp_Torus &,const gp_Torus &,const Standard_Real >()  , py::arg("Tor1"),  py::arg("Tor2"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Pln & , const gp_Pln & , const Standard_Real , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Pln & , const gp_Pln & , const Standard_Real , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects two planes. TolAng is the angular tolerance used to determine if the planes are parallel. Tol is the tolerance used to determine if the planes are identical (only when they are parallel).)#"  , py::arg("P1"),  py::arg("P2"),  py::arg("TolAng"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Pln & , const gp_Cylinder & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Pln & , const gp_Cylinder & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects a plane and a cylinder. TolAng is the angular tolerance used to determine if the axis of the cylinder is parallel to the plane. Tol is the tolerance used to determine if the result is a circle or an ellipse. If the maximum distance between the ellipse solution and the circle centered at the ellipse center is less than Tol, the result will be the circle. H is the height of the cylinder <Cyl>. It is used to check whether the plane and cylinder are parallel.)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tolang"),  py::arg("Tol"),  py::arg("H")=static_cast<const Standard_Real>(0))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Pln & , const gp_Sphere & ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Pln & , const gp_Sphere & ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects a plane and a sphere.)#"  , py::arg("P"),  py::arg("S"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Pln & , const gp_Cone & , const Standard_Real , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Pln & , const gp_Cone & , const Standard_Real , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects a plane and a cone. TolAng is the angular tolerance used to determine if the axis of the cone is parallel or perpendicular to the plane, and if the generating line of the cone is parallel to the plane. Tol is the tolerance used to determine if the apex of the cone is in the plane.)#"  , py::arg("P"),  py::arg("C"),  py::arg("Tolang"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Cylinder & , const gp_Cylinder & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Cylinder & , const gp_Cylinder & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects two cylinders)#"  , py::arg("Cyl1"),  py::arg("Cyl2"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Cylinder & , const gp_Sphere & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Cylinder & , const gp_Sphere & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects a cylinder and a sphere.)#"  , py::arg("Cyl"),  py::arg("Sph"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Cylinder & , const gp_Cone & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Cylinder & , const gp_Cone & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects a cylinder and a cone.)#"  , py::arg("Cyl"),  py::arg("Con"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Sphere & , const gp_Sphere & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Sphere & , const gp_Sphere & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects a two spheres.)#"  , py::arg("Sph1"),  py::arg("Sph2"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Sphere & , const gp_Cone & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Sphere & , const gp_Cone & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects a sphere and a cone.)#"  , py::arg("Sph"),  py::arg("Con"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Cone & , const gp_Cone & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Cone & , const gp_Cone & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects two cones.)#"  , py::arg("Con1"),  py::arg("Con2"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Pln & , const gp_Torus & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Pln & , const gp_Torus & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects plane and torus.)#"  , py::arg("Pln"),  py::arg("Tor"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Cylinder & , const gp_Torus & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Cylinder & , const gp_Torus & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects cylinder and torus.)#"  , py::arg("Cyl"),  py::arg("Tor"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Cone & , const gp_Torus & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Cone & , const gp_Torus & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects cone and torus.)#"  , py::arg("Con"),  py::arg("Tor"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Sphere & , const gp_Torus & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Sphere & , const gp_Torus & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects sphere and torus.)#"  , py::arg("Sph"),  py::arg("Tor"),  py::arg("Tol"))
        .def("Perform",
             (void (IntAna_QuadQuadGeo::*)( const gp_Torus & , const gp_Torus & , const Standard_Real ) ) static_cast<void (IntAna_QuadQuadGeo::*)( const gp_Torus & , const gp_Torus & , const Standard_Real ) >(&IntAna_QuadQuadGeo::Perform),
             R"#(Intersects two toruses.)#"  , py::arg("Tor1"),  py::arg("Tor2"),  py::arg("Tol"))
        .def("IsDone",
             (Standard_Boolean (IntAna_QuadQuadGeo::*)() const) static_cast<Standard_Boolean (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::IsDone),
             R"#(Returns Standard_True if the computation was successful.)#" )
        .def("TypeInter",
             (IntAna_ResultType (IntAna_QuadQuadGeo::*)() const) static_cast<IntAna_ResultType (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::TypeInter),
             R"#(Returns the type of intersection.)#" )
        .def("NbSolutions",
             (Standard_Integer (IntAna_QuadQuadGeo::*)() const) static_cast<Standard_Integer (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::NbSolutions),
             R"#(Returns the number of interesections. The possible intersections are : - 1 point - 1 or 2 line(s) - 1 Point and 1 Line - 1 circle - 1 ellipse - 1 parabola - 1 or 2 hyperbola(s).)#" )
        .def("Point",
             (gp_Pnt (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const) static_cast<gp_Pnt (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const>(&IntAna_QuadQuadGeo::Point),
             R"#(Returns the point solution of range Num.)#"  , py::arg("Num"))
        .def("Line",
             (gp_Lin (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const) static_cast<gp_Lin (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const>(&IntAna_QuadQuadGeo::Line),
             R"#(Returns the line solution of range Num.)#"  , py::arg("Num"))
        .def("Circle",
             (gp_Circ (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const) static_cast<gp_Circ (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const>(&IntAna_QuadQuadGeo::Circle),
             R"#(Returns the circle solution of range Num.)#"  , py::arg("Num"))
        .def("Ellipse",
             (gp_Elips (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const) static_cast<gp_Elips (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const>(&IntAna_QuadQuadGeo::Ellipse),
             R"#(Returns the ellipse solution of range Num.)#"  , py::arg("Num"))
        .def("Parabola",
             (gp_Parab (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const) static_cast<gp_Parab (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const>(&IntAna_QuadQuadGeo::Parabola),
             R"#(Returns the parabola solution of range Num.)#"  , py::arg("Num"))
        .def("Hyperbola",
             (gp_Hypr (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const) static_cast<gp_Hypr (IntAna_QuadQuadGeo::*)( const Standard_Integer ) const>(&IntAna_QuadQuadGeo::Hyperbola),
             R"#(Returns the hyperbola solution of range Num.)#"  , py::arg("Num"))
        .def("HasCommonGen",
             (Standard_Boolean (IntAna_QuadQuadGeo::*)() const) static_cast<Standard_Boolean (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::HasCommonGen),
             R"#(None)#" )
        .def("PChar",
             (const gp_Pnt & (IntAna_QuadQuadGeo::*)() const) static_cast<const gp_Pnt & (IntAna_QuadQuadGeo::*)() const>(&IntAna_QuadQuadGeo::PChar),
             R"#(None)#" )
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
        .def("Coefficients",
             []( IntAna_Quadric &self   ){ Standard_Real  xCXX; Standard_Real  xCYY; Standard_Real  xCZZ; Standard_Real  xCXY; Standard_Real  xCXZ; Standard_Real  xCYZ; Standard_Real  xCX; Standard_Real  xCY; Standard_Real  xCZ; Standard_Real  xCCte; self.Coefficients(xCXX,xCYY,xCZZ,xCXY,xCXZ,xCYZ,xCX,xCY,xCZ,xCCte); return std::make_tuple(xCXX,xCYY,xCZZ,xCXY,xCXZ,xCYZ,xCX,xCY,xCZ,xCCte); },
             R"#(Returns the coefficients of the polynomial equation which define the quadric: xCXX x**2 + xCYY y**2 + xCZZ z**2 + 2 ( xCXY x y + xCXZ x z + xCYZ y z ) + 2 ( xCX x + xCY y + xCZ z ) + xCCte)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntAna_ListOfCurve.hxx
// ./opencascade/IntAna_QuadQuadGeo.hxx
// ./opencascade/IntAna_ListIteratorOfListOfCurve.hxx
// ./opencascade/IntAna_IntLinTorus.hxx
// ./opencascade/IntAna_ResultType.hxx
// ./opencascade/IntAna_Int3Pln.hxx
// ./opencascade/IntAna_IntQuadQuad.hxx
// ./opencascade/IntAna_Quadric.hxx
// ./opencascade/IntAna_Curve.hxx
// ./opencascade/IntAna_IntConicQuad.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<IntAna_Curve>(m,"IntAna_ListOfCurve");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
