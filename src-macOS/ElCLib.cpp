
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <ElCLib.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ElCLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ElCLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<ElCLib , shared_ptr<ElCLib>>(m,"ElCLib");

    static_cast<py::class_<ElCLib , shared_ptr<ElCLib> >>(m.attr("ElCLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real , const gp_Lin & ) ) static_cast<gp_Pnt (*)( const Standard_Real , const gp_Lin & ) >(&ElCLib::Value),
                    R"#(For elementary curves (lines, circles and conics) from the gp package, computes the point of parameter U. The result is either: - a gp_Pnt point for a curve in 3D space, or - a gp_Pnt2d point for a curve in 2D space.)#"  , py::arg("U"),  py::arg("L"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real , const gp_Circ & ) ) static_cast<gp_Pnt (*)( const Standard_Real , const gp_Circ & ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real , const gp_Elips & ) ) static_cast<gp_Pnt (*)( const Standard_Real , const gp_Elips & ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real , const gp_Hypr & ) ) static_cast<gp_Pnt (*)( const Standard_Real , const gp_Hypr & ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real , const gp_Parab & ) ) static_cast<gp_Pnt (*)( const Standard_Real , const gp_Parab & ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const gp_Lin & , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Lin & , gp_Pnt & , gp_Vec & ) >(&ElCLib::D1),
                    R"#(For elementary curves (lines, circles and conics) from the gp package, computes: - the point P of parameter U, and - the first derivative vector V1 at this point. The results P and V1 are either: - a gp_Pnt point and a gp_Vec vector, for a curve in 3D space, or - a gp_Pnt2d point and a gp_Vec2d vector, for a curve in 2D space.)#"  , py::arg("U"),  py::arg("L"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const gp_Circ & , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Circ & , gp_Pnt & , gp_Vec & ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const gp_Elips & , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Elips & , gp_Pnt & , gp_Vec & ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const gp_Hypr & , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Hypr & , gp_Pnt & , gp_Vec & ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const gp_Parab & , gp_Pnt & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Parab & , gp_Pnt & , gp_Vec & ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("P"),  py::arg("V1"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const gp_Circ & , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Circ & , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&ElCLib::D2),
                    R"#(For elementary curves (circles and conics) from the gp package, computes: - the point P of parameter U, and - the first and second derivative vectors V1 and V2 at this point. The results, P, V1 and V2, are either: - a gp_Pnt point and two gp_Vec vectors, for a curve in 3D space, or - a gp_Pnt2d point and two gp_Vec2d vectors, for a curve in 2D space.)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const gp_Elips & , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Elips & , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const gp_Hypr & , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Hypr & , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const gp_Parab & , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Parab & , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const gp_Circ & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Circ & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElCLib::D3),
                    R"#(For elementary curves (circles, ellipses and hyperbolae) from the gp package, computes: - the point P of parameter U, and - the first, second and third derivative vectors V1, V2 and V3 at this point. The results, P, V1, V2 and V3, are either: - a gp_Pnt point and three gp_Vec vectors, for a curve in 3D space, or - a gp_Pnt2d point and three gp_Vec2d vectors, for a curve in 2D space.)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const gp_Elips & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Elips & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElCLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const gp_Hypr & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const gp_Hypr & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElCLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real , const gp_Lin & , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Real , const gp_Lin & , const Standard_Integer ) >(&ElCLib::DN),
                    R"#(For elementary curves (lines, circles and conics) from the gp package, computes the vector corresponding to the Nth derivative at the point of parameter U. The result is either: - a gp_Vec vector for a curve in 3D space, or - a gp_Vec2d vector for a curve in 2D space. In the following functions N is the order of derivation and should be greater than 0)#"  , py::arg("U"),  py::arg("L"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real , const gp_Circ & , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Real , const gp_Circ & , const Standard_Integer ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real , const gp_Elips & , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Real , const gp_Elips & , const Standard_Integer ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real , const gp_Hypr & , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Real , const gp_Hypr & , const Standard_Integer ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real , const gp_Parab & , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Real , const gp_Parab & , const Standard_Integer ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("N"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Real , const gp_Lin2d & ) ) static_cast<gp_Pnt2d (*)( const Standard_Real , const gp_Lin2d & ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("L"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Real , const gp_Circ2d & ) ) static_cast<gp_Pnt2d (*)( const Standard_Real , const gp_Circ2d & ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Real , const gp_Elips2d & ) ) static_cast<gp_Pnt2d (*)( const Standard_Real , const gp_Elips2d & ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Real , const gp_Hypr2d & ) ) static_cast<gp_Pnt2d (*)( const Standard_Real , const gp_Hypr2d & ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Real , const gp_Parab2d & ) ) static_cast<gp_Pnt2d (*)( const Standard_Real , const gp_Parab2d & ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const gp_Lin2d & , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Lin2d & , gp_Pnt2d & , gp_Vec2d & ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("L"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const gp_Circ2d & , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Circ2d & , gp_Pnt2d & , gp_Vec2d & ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const gp_Elips2d & , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Elips2d & , gp_Pnt2d & , gp_Vec2d & ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const gp_Hypr2d & , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Hypr2d & , gp_Pnt2d & , gp_Vec2d & ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const gp_Parab2d & , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Parab2d & , gp_Pnt2d & , gp_Vec2d & ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("P"),  py::arg("V1"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const gp_Circ2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Circ2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const gp_Elips2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Elips2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const gp_Hypr2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Hypr2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const gp_Parab2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Parab2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const gp_Circ2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Circ2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) >(&ElCLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const gp_Elips2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Elips2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) >(&ElCLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const gp_Hypr2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const Standard_Real , const gp_Hypr2d & , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) >(&ElCLib::D3),
                    R"#(In the following functions N is the order of derivation and should be greater than 0)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Real , const gp_Lin2d & , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const Standard_Real , const gp_Lin2d & , const Standard_Integer ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("L"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Real , const gp_Circ2d & , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const Standard_Real , const gp_Circ2d & , const Standard_Integer ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Real , const gp_Elips2d & , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const Standard_Real , const gp_Elips2d & , const Standard_Integer ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Real , const gp_Hypr2d & , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const Standard_Real , const gp_Hypr2d & , const Standard_Integer ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Real , const gp_Parab2d & , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const Standard_Real , const gp_Parab2d & , const Standard_Integer ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("N"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Lin & , const gp_Pnt & ) ) static_cast<Standard_Real (*)( const gp_Lin & , const gp_Pnt & ) >(&ElCLib::Parameter),
                    R"#(Computes the parameter value of the point P on the given curve. Note: In its local coordinate system, the parametric equation of the curve is given by the following: - for the line L: P(U) = Po + U*Vo where Po is the origin and Vo the unit vector of its positioning axis. - for the circle C: X(U) = Radius*Cos(U), Y(U) = Radius*Sin(U) - for the ellipse E: X(U) = MajorRadius*Cos(U). Y(U) = MinorRadius*Sin(U) - for the hyperbola H: X(U) = MajorRadius*Ch(U), Y(U) = MinorRadius*Sh(U) - for the parabola Prb: X(U) = U**2 / (2*p) Y(U) = U where p is the distance between the focus and the directrix. Warning The point P must be on the curve. These functions are not protected, however, and if point P is not on the curve, an exception may be raised.)#"  , py::arg("L"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Lin2d & , const gp_Pnt2d & ) ) static_cast<Standard_Real (*)( const gp_Lin2d & , const gp_Pnt2d & ) >(&ElCLib::Parameter),
                    R"#(parametrization P (U) = L.Location() + U * L.Direction())#"  , py::arg("L"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Circ & , const gp_Pnt & ) ) static_cast<Standard_Real (*)( const gp_Circ & , const gp_Pnt & ) >(&ElCLib::Parameter),
                    R"#(None)#"  , py::arg("C"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Circ2d & , const gp_Pnt2d & ) ) static_cast<Standard_Real (*)( const gp_Circ2d & , const gp_Pnt2d & ) >(&ElCLib::Parameter),
                    R"#(parametrization In the local coordinate system of the circle X (U) = Radius * Cos (U) Y (U) = Radius * Sin (U))#"  , py::arg("C"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Elips & , const gp_Pnt & ) ) static_cast<Standard_Real (*)( const gp_Elips & , const gp_Pnt & ) >(&ElCLib::Parameter),
                    R"#(None)#"  , py::arg("E"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Elips2d & , const gp_Pnt2d & ) ) static_cast<Standard_Real (*)( const gp_Elips2d & , const gp_Pnt2d & ) >(&ElCLib::Parameter),
                    R"#(parametrization In the local coordinate system of the Ellipse X (U) = MajorRadius * Cos (U) Y (U) = MinorRadius * Sin (U))#"  , py::arg("E"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Hypr & , const gp_Pnt & ) ) static_cast<Standard_Real (*)( const gp_Hypr & , const gp_Pnt & ) >(&ElCLib::Parameter),
                    R"#(None)#"  , py::arg("H"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Hypr2d & , const gp_Pnt2d & ) ) static_cast<Standard_Real (*)( const gp_Hypr2d & , const gp_Pnt2d & ) >(&ElCLib::Parameter),
                    R"#(parametrization In the local coordinate system of the Hyperbola X (U) = MajorRadius * Ch (U) Y (U) = MinorRadius * Sh (U))#"  , py::arg("H"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Parab & , const gp_Pnt & ) ) static_cast<Standard_Real (*)( const gp_Parab & , const gp_Pnt & ) >(&ElCLib::Parameter),
                    R"#(None)#"  , py::arg("Prb"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Parab2d & , const gp_Pnt2d & ) ) static_cast<Standard_Real (*)( const gp_Parab2d & , const gp_Pnt2d & ) >(&ElCLib::Parameter),
                    R"#(parametrization In the local coordinate system of the parabola Y**2 = (2*P) * X where P is the distance between the focus and the directrix.)#"  , py::arg("Prb"),  py::arg("P"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ElCLib.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
