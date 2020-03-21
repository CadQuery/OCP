
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <IntAna2d_Conic.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_XY.hxx>
#include <gp_Ax2d.hxx>

// module includes
#include <IntAna2d_AnaIntersection.hxx>
#include <IntAna2d_Conic.hxx>
#include <IntAna2d_IntPoint.hxx>
#include <IntAna2d_Outils.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntAna2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntAna2d"));


//Python trampoline classes

// classes


    static_cast<py::class_<IntAna2d_AnaIntersection , shared_ptr<IntAna2d_AnaIntersection> >>(m.attr("IntAna2d_AnaIntersection"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntAna2d_AnaIntersection::*)() const) static_cast<Standard_Boolean (IntAna2d_AnaIntersection::*)() const>(&IntAna2d_AnaIntersection::IsDone),
             R"#(Returns TRUE if the computation was succesfull.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntAna2d_AnaIntersection::*)() const) static_cast<Standard_Boolean (IntAna2d_AnaIntersection::*)() const>(&IntAna2d_AnaIntersection::IsEmpty),
             R"#(Returns TRUE when there is no intersection, i-e - no intersection point - the elements are not identical. The element may be parallel in this case.)#" )
        .def("IdenticalElements",
             (Standard_Boolean (IntAna2d_AnaIntersection::*)() const) static_cast<Standard_Boolean (IntAna2d_AnaIntersection::*)() const>(&IntAna2d_AnaIntersection::IdenticalElements),
             R"#(For the intersection between an element of gp and a conic known by an implicit equation, the result will be TRUE if the element of gp verifies the implicit equation. For the intersection between two Lin2d or two Circ2d, the result will be TRUE if the elements are identical. The function returns FALSE in all the other cases.)#" )
        .def("ParallelElements",
             (Standard_Boolean (IntAna2d_AnaIntersection::*)() const) static_cast<Standard_Boolean (IntAna2d_AnaIntersection::*)() const>(&IntAna2d_AnaIntersection::ParallelElements),
             R"#(For the intersection between two Lin2d or two Circ2d, the function returns TRUE if the elements are parallel. The function returns FALSE in all the other cases.)#" )
        .def("NbPoints",
             (Standard_Integer (IntAna2d_AnaIntersection::*)() const) static_cast<Standard_Integer (IntAna2d_AnaIntersection::*)() const>(&IntAna2d_AnaIntersection::NbPoints),
             R"#(returns the number of IntPoint between the 2 curves.)#" )
        .def("Point",
             (const IntAna2d_IntPoint & (IntAna2d_AnaIntersection::*)( const Standard_Integer ) const) static_cast<const IntAna2d_IntPoint & (IntAna2d_AnaIntersection::*)( const Standard_Integer ) const>(&IntAna2d_AnaIntersection::Point),
             R"#(returns the intersection point of range N; If (N<=0) or (N>NbPoints), an exception is raised.)#"  , py::arg("N"))
        .def("IsDone",
             (Standard_Boolean (IntAna2d_AnaIntersection::*)() const) static_cast<Standard_Boolean (IntAna2d_AnaIntersection::*)() const>(&IntAna2d_AnaIntersection::IsDone),
             R"#(Returns TRUE if the computation was succesfull.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntAna2d_AnaIntersection::*)() const) static_cast<Standard_Boolean (IntAna2d_AnaIntersection::*)() const>(&IntAna2d_AnaIntersection::IsEmpty),
             R"#(Returns TRUE when there is no intersection, i-e - no intersection point - the elements are not identical. The element may be parallel in this case.)#" )
        .def("IdenticalElements",
             (Standard_Boolean (IntAna2d_AnaIntersection::*)() const) static_cast<Standard_Boolean (IntAna2d_AnaIntersection::*)() const>(&IntAna2d_AnaIntersection::IdenticalElements),
             R"#(For the intersection between an element of gp and a conic known by an implicit equation, the result will be TRUE if the element of gp verifies the implicit equation. For the intersection between two Lin2d or two Circ2d, the result will be TRUE if the elements are identical. The function returns FALSE in all the other cases.)#" )
        .def("ParallelElements",
             (Standard_Boolean (IntAna2d_AnaIntersection::*)() const) static_cast<Standard_Boolean (IntAna2d_AnaIntersection::*)() const>(&IntAna2d_AnaIntersection::ParallelElements),
             R"#(For the intersection between two Lin2d or two Circ2d, the function returns TRUE if the elements are parallel. The function returns FALSE in all the other cases.)#" )
        .def("NbPoints",
             (Standard_Integer (IntAna2d_AnaIntersection::*)() const) static_cast<Standard_Integer (IntAna2d_AnaIntersection::*)() const>(&IntAna2d_AnaIntersection::NbPoints),
             R"#(returns the number of IntPoint between the 2 curves.)#" )
        .def("Point",
             (const IntAna2d_IntPoint & (IntAna2d_AnaIntersection::*)( const Standard_Integer ) const) static_cast<const IntAna2d_IntPoint & (IntAna2d_AnaIntersection::*)( const Standard_Integer ) const>(&IntAna2d_AnaIntersection::Point),
             R"#(returns the intersection point of range N; If (N<=0) or (N>NbPoints), an exception is raised.)#"  , py::arg("N"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntAna2d_Conic , shared_ptr<IntAna2d_Conic> >>(m.attr("IntAna2d_Conic"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntAna2d_IntPoint , shared_ptr<IntAna2d_IntPoint> >>(m.attr("IntAna2d_IntPoint"))
    // constructors
    // custom constructors
    // methods
        .def("SetValue",
             (void (IntAna2d_IntPoint::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (IntAna2d_IntPoint::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&IntAna2d_IntPoint::SetValue),
             R"#(Set the values for a "non-implicit" point.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("U1"),  py::arg("U2"))
        .def("SetValue",
             (void (IntAna2d_IntPoint::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (IntAna2d_IntPoint::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&IntAna2d_IntPoint::SetValue),
             R"#(Set the values for an "implicit" point.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("U1"))
        .def("Value",
             (const gp_Pnt2d & (IntAna2d_IntPoint::*)() const) static_cast<const gp_Pnt2d & (IntAna2d_IntPoint::*)() const>(&IntAna2d_IntPoint::Value),
             R"#(Returns the geometric point.)#" )
        .def("SecondIsImplicit",
             (Standard_Boolean (IntAna2d_IntPoint::*)() const) static_cast<Standard_Boolean (IntAna2d_IntPoint::*)() const>(&IntAna2d_IntPoint::SecondIsImplicit),
             R"#(Returns True if the second curve is implicit.)#" )
        .def("ParamOnFirst",
             (Standard_Real (IntAna2d_IntPoint::*)() const) static_cast<Standard_Real (IntAna2d_IntPoint::*)() const>(&IntAna2d_IntPoint::ParamOnFirst),
             R"#(Returns the parameter on the first element.)#" )
        .def("ParamOnSecond",
             (Standard_Real (IntAna2d_IntPoint::*)() const) static_cast<Standard_Real (IntAna2d_IntPoint::*)() const>(&IntAna2d_IntPoint::ParamOnSecond),
             R"#(Returns the parameter on the second element. If the second element is an implicit curve, an exception is raised.)#" )
        .def("Value",
             (const gp_Pnt2d & (IntAna2d_IntPoint::*)() const) static_cast<const gp_Pnt2d & (IntAna2d_IntPoint::*)() const>(&IntAna2d_IntPoint::Value),
             R"#(Returns the geometric point.)#" )
        .def("ParamOnFirst",
             (Standard_Real (IntAna2d_IntPoint::*)() const) static_cast<Standard_Real (IntAna2d_IntPoint::*)() const>(&IntAna2d_IntPoint::ParamOnFirst),
             R"#(Returns the parameter on the first element.)#" )
        .def("ParamOnSecond",
             (Standard_Real (IntAna2d_IntPoint::*)() const) static_cast<Standard_Real (IntAna2d_IntPoint::*)() const>(&IntAna2d_IntPoint::ParamOnSecond),
             R"#(Returns the parameter on the second element. If the second element is an implicit curve, an exception is raised.)#" )
        .def("SecondIsImplicit",
             (Standard_Boolean (IntAna2d_IntPoint::*)() const) static_cast<Standard_Boolean (IntAna2d_IntPoint::*)() const>(&IntAna2d_IntPoint::SecondIsImplicit),
             R"#(Returns True if the second curve is implicit.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MyDirectPolynomialRoots , shared_ptr<MyDirectPolynomialRoots> >>(m.attr("MyDirectPolynomialRoots"))
    // constructors
    // custom constructors
    // methods
        .def("NbSolutions",
             (Standard_Integer (MyDirectPolynomialRoots::*)() const) static_cast<Standard_Integer (MyDirectPolynomialRoots::*)() const>(&MyDirectPolynomialRoots::NbSolutions),
             R"#(None)#" )
        .def("Value",
             (Standard_Real (MyDirectPolynomialRoots::*)( const Standard_Integer ) const) static_cast<Standard_Real (MyDirectPolynomialRoots::*)( const Standard_Integer ) const>(&MyDirectPolynomialRoots::Value),
             R"#(None)#"  , py::arg("i"))
        .def("IsDone",
             (Standard_Real (MyDirectPolynomialRoots::*)() const) static_cast<Standard_Real (MyDirectPolynomialRoots::*)() const>(&MyDirectPolynomialRoots::IsDone),
             R"#(None)#" )
        .def("InfiniteRoots",
             (Standard_Boolean (MyDirectPolynomialRoots::*)() const) static_cast<Standard_Boolean (MyDirectPolynomialRoots::*)() const>(&MyDirectPolynomialRoots::InfiniteRoots),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntAna2d_Outils.hxx
// ./opencascade/IntAna2d_AnaIntersection.hxx
// ./opencascade/IntAna2d_Conic.hxx
// ./opencascade/IntAna2d_IntPoint.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
