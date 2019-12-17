
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Circ2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_XY.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <IntAna2d_Conic.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>

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


    static_cast<py::class_<IntAna2d_Conic ,std::unique_ptr<IntAna2d_Conic>  >>(m.attr("IntAna2d_Conic"))
        .def(py::init< const gp_Circ2d & >()  , py::arg("C") )
        .def(py::init< const gp_Lin2d & >()  , py::arg("C") )
        .def(py::init< const gp_Parab2d & >()  , py::arg("C") )
        .def(py::init< const gp_Hypr2d & >()  , py::arg("C") )
        .def(py::init< const gp_Elips2d & >()  , py::arg("C") )
        .def("Value",
             (Standard_Real (IntAna2d_Conic::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Real (IntAna2d_Conic::*)( const Standard_Real ,  const Standard_Real  ) const>(&IntAna2d_Conic::Value),
             R"#(value of the function F at the point X,Y.)#"  , py::arg("X"),  py::arg("Y"))
        .def("Grad",
             (gp_XY (IntAna2d_Conic::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<gp_XY (IntAna2d_Conic::*)( const Standard_Real ,  const Standard_Real  ) const>(&IntAna2d_Conic::Grad),
             R"#(returns the value of the gradient of F at the point X,Y.)#"  , py::arg("X"),  py::arg("Y"))
        .def("ValAndGrad",
             (void (IntAna2d_Conic::*)( const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  gp_XY &  ) const) static_cast<void (IntAna2d_Conic::*)( const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  gp_XY &  ) const>(&IntAna2d_Conic::ValAndGrad),
             R"#(Returns the value of the function and its gradient at the point X,Y.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Val"),  py::arg("Grd"))
        .def("Coefficients",
             (void (IntAna2d_Conic::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (IntAna2d_Conic::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&IntAna2d_Conic::Coefficients),
             R"#(returns the coefficients of the polynomial equation wich defines the conic: A.X**2 + B.Y**2 + 2.C.X*Y + 2.D.X + 2.E.Y + F = 0.)#"  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"),  py::arg("E"),  py::arg("F"))
        .def("NewCoefficients",
             (void (IntAna2d_Conic::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  const gp_Ax2d &  ) const) static_cast<void (IntAna2d_Conic::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  const gp_Ax2d &  ) const>(&IntAna2d_Conic::NewCoefficients),
             R"#(Returns the coefficients of the polynomial equation ( written in the natural coordinates system ) A x x + B y y + 2 C x y + 2 D x + 2 E y + F in the local coordinates system defined by Axis)#"  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"),  py::arg("E"),  py::arg("F"),  py::arg("Axis"))
;


    static_cast<py::class_<IntAna2d_AnaIntersection ,std::unique_ptr<IntAna2d_AnaIntersection>  >>(m.attr("IntAna2d_AnaIntersection"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Lin2d &,const gp_Lin2d & >()  , py::arg("L1"),  py::arg("L2") )
        .def(py::init< const gp_Circ2d &,const gp_Circ2d & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const gp_Lin2d &,const gp_Circ2d & >()  , py::arg("L"),  py::arg("C") )
        .def(py::init< const gp_Lin2d &,const IntAna2d_Conic & >()  , py::arg("L"),  py::arg("C") )
        .def(py::init< const gp_Circ2d &,const IntAna2d_Conic & >()  , py::arg("C"),  py::arg("Co") )
        .def(py::init< const gp_Elips2d &,const IntAna2d_Conic & >()  , py::arg("E"),  py::arg("C") )
        .def(py::init< const gp_Parab2d &,const IntAna2d_Conic & >()  , py::arg("P"),  py::arg("C") )
        .def(py::init< const gp_Hypr2d &,const IntAna2d_Conic & >()  , py::arg("H"),  py::arg("C") )
        .def("Perform",
             (void (IntAna2d_AnaIntersection::*)( const gp_Lin2d & ,  const gp_Lin2d &  ) ) static_cast<void (IntAna2d_AnaIntersection::*)( const gp_Lin2d & ,  const gp_Lin2d &  ) >(&IntAna2d_AnaIntersection::Perform),
             R"#(Intersection between two lines.)#"  , py::arg("L1"),  py::arg("L2"))
        .def("Perform",
             (void (IntAna2d_AnaIntersection::*)( const gp_Circ2d & ,  const gp_Circ2d &  ) ) static_cast<void (IntAna2d_AnaIntersection::*)( const gp_Circ2d & ,  const gp_Circ2d &  ) >(&IntAna2d_AnaIntersection::Perform),
             R"#(Intersection between two circles.)#"  , py::arg("C1"),  py::arg("C2"))
        .def("Perform",
             (void (IntAna2d_AnaIntersection::*)( const gp_Lin2d & ,  const gp_Circ2d &  ) ) static_cast<void (IntAna2d_AnaIntersection::*)( const gp_Lin2d & ,  const gp_Circ2d &  ) >(&IntAna2d_AnaIntersection::Perform),
             R"#(Intersection between a line and a circle.)#"  , py::arg("L"),  py::arg("C"))
        .def("Perform",
             (void (IntAna2d_AnaIntersection::*)( const gp_Lin2d & ,  const IntAna2d_Conic &  ) ) static_cast<void (IntAna2d_AnaIntersection::*)( const gp_Lin2d & ,  const IntAna2d_Conic &  ) >(&IntAna2d_AnaIntersection::Perform),
             R"#(Intersection between a line and a conic.)#"  , py::arg("L"),  py::arg("C"))
        .def("Perform",
             (void (IntAna2d_AnaIntersection::*)( const gp_Circ2d & ,  const IntAna2d_Conic &  ) ) static_cast<void (IntAna2d_AnaIntersection::*)( const gp_Circ2d & ,  const IntAna2d_Conic &  ) >(&IntAna2d_AnaIntersection::Perform),
             R"#(Intersection between a circle and another conic.)#"  , py::arg("C"),  py::arg("Co"))
        .def("Perform",
             (void (IntAna2d_AnaIntersection::*)( const gp_Elips2d & ,  const IntAna2d_Conic &  ) ) static_cast<void (IntAna2d_AnaIntersection::*)( const gp_Elips2d & ,  const IntAna2d_Conic &  ) >(&IntAna2d_AnaIntersection::Perform),
             R"#(Intersection between an ellipse and another conic.)#"  , py::arg("E"),  py::arg("C"))
        .def("Perform",
             (void (IntAna2d_AnaIntersection::*)( const gp_Parab2d & ,  const IntAna2d_Conic &  ) ) static_cast<void (IntAna2d_AnaIntersection::*)( const gp_Parab2d & ,  const IntAna2d_Conic &  ) >(&IntAna2d_AnaIntersection::Perform),
             R"#(Intersection between a parabola and another conic.)#"  , py::arg("P"),  py::arg("C"))
        .def("Perform",
             (void (IntAna2d_AnaIntersection::*)( const gp_Hypr2d & ,  const IntAna2d_Conic &  ) ) static_cast<void (IntAna2d_AnaIntersection::*)( const gp_Hypr2d & ,  const IntAna2d_Conic &  ) >(&IntAna2d_AnaIntersection::Perform),
             R"#(Intersection between an hyperbola and another conic.)#"  , py::arg("H"),  py::arg("C"))
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
             (const IntAna2d_IntPoint & (IntAna2d_AnaIntersection::*)( const Standard_Integer  ) const) static_cast<const IntAna2d_IntPoint & (IntAna2d_AnaIntersection::*)( const Standard_Integer  ) const>(&IntAna2d_AnaIntersection::Point),
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
             (const IntAna2d_IntPoint & (IntAna2d_AnaIntersection::*)( const Standard_Integer  ) const) static_cast<const IntAna2d_IntPoint & (IntAna2d_AnaIntersection::*)( const Standard_Integer  ) const>(&IntAna2d_AnaIntersection::Point),
             R"#(returns the intersection point of range N; If (N<=0) or (N>NbPoints), an exception is raised.)#"  , py::arg("N"))
;


    static_cast<py::class_<IntAna2d_IntPoint ,std::unique_ptr<IntAna2d_IntPoint>  >>(m.attr("IntAna2d_IntPoint"))
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("X"),  py::arg("Y"),  py::arg("U1"),  py::arg("U2") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("X"),  py::arg("Y"),  py::arg("U1") )
        .def(py::init<  >()  )
        .def("SetValue",
             (void (IntAna2d_IntPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntAna2d_IntPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntAna2d_IntPoint::SetValue),
             R"#(Set the values for a "non-implicit" point.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("U1"),  py::arg("U2"))
        .def("SetValue",
             (void (IntAna2d_IntPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (IntAna2d_IntPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&IntAna2d_IntPoint::SetValue),
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
;

// functions
// ./opencascade/IntAna2d_Conic.hxx
// ./opencascade/IntAna2d_AnaIntersection.hxx
// ./opencascade/IntAna2d_Outils.hxx
    m.def("Points_Confondus", 
          (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ))  static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  )>(&Points_Confondus),
          R"#(None)#"  , py::arg("xa"),  py::arg("ya"),  py::arg("xb"),  py::arg("yb"));
    m.def("Traitement_Points_Confondus", 
          (void (*)( Standard_Integer & ,  IntAna2d_IntPoint *  ))  static_cast<void (*)( Standard_Integer & ,  IntAna2d_IntPoint *  )>(&Traitement_Points_Confondus),
          R"#(None)#"  , py::arg("nb_pts"),  py::arg("pts"));
    m.def("Coord_Ancien_Repere", 
          (void (*)( Standard_Real & ,  Standard_Real & ,  const gp_Ax2d  ))  static_cast<void (*)( Standard_Real & ,  Standard_Real & ,  const gp_Ax2d  )>(&Coord_Ancien_Repere),
          R"#(None)#"  , py::arg("Ancien_X"),  py::arg("Ancien_Y"),  py::arg("Axe_Nouveau_Repere"));
// ./opencascade/IntAna2d_IntPoint.hxx

// operators

// register typdefs
// ./opencascade/IntAna2d_Conic.hxx
// ./opencascade/IntAna2d_AnaIntersection.hxx
// ./opencascade/IntAna2d_Outils.hxx
// ./opencascade/IntAna2d_IntPoint.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
