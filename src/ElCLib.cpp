
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

    register_default_constructor<ElCLib , shared_ptr<ElCLib>>(m,"ElCLib");

    static_cast<py::class_<ElCLib , shared_ptr<ElCLib>  >>(m.attr("ElCLib"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("InPeriod_s",
                    (Standard_Real (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&ElCLib::InPeriod),
                    R"#(Return a value in the range <UFirst, ULast> by adding or removing the period <ULast - UFirst> to <U>. ATTENTION!!! It is expected but not checked that (ULast > UFirst))#"  , py::arg("U"),  py::arg("UFirst"),  py::arg("ULast"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real ,  const gp_Lin &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const gp_Lin &  ) >(&ElCLib::Value),
                    R"#(For elementary curves (lines, circles and conics) from the gp package, computes the point of parameter U. The result is either: - a gp_Pnt point for a curve in 3D space, or - a gp_Pnt2d point for a curve in 2D space.)#"  , py::arg("U"),  py::arg("L"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real ,  const gp_Circ &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const gp_Circ &  ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real ,  const gp_Elips &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const gp_Elips &  ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real ,  const gp_Hypr &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const gp_Hypr &  ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real ,  const gp_Parab &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const gp_Parab &  ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const gp_Lin & ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Lin & ,  gp_Pnt & ,  gp_Vec &  ) >(&ElCLib::D1),
                    R"#(For elementary curves (lines, circles and conics) from the gp package, computes: - the point P of parameter U, and - the first derivative vector V1 at this point. The results P and V1 are either: - a gp_Pnt point and a gp_Vec vector, for a curve in 3D space, or - a gp_Pnt2d point and a gp_Vec2d vector, for a curve in 2D space.)#"  , py::arg("U"),  py::arg("L"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const gp_Circ & ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Circ & ,  gp_Pnt & ,  gp_Vec &  ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const gp_Elips & ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Elips & ,  gp_Pnt & ,  gp_Vec &  ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const gp_Hypr & ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Hypr & ,  gp_Pnt & ,  gp_Vec &  ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const gp_Parab & ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Parab & ,  gp_Pnt & ,  gp_Vec &  ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("P"),  py::arg("V1"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const gp_Circ & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Circ & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::D2),
                    R"#(For elementary curves (circles and conics) from the gp package, computes: - the point P of parameter U, and - the first and second derivative vectors V1 and V2 at this point. The results, P, V1 and V2, are either: - a gp_Pnt point and two gp_Vec vectors, for a curve in 3D space, or - a gp_Pnt2d point and two gp_Vec2d vectors, for a curve in 2D space.)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const gp_Elips & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Elips & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const gp_Hypr & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Hypr & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const gp_Parab & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Parab & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real ,  const gp_Circ & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Circ & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::D3),
                    R"#(For elementary curves (circles, ellipses and hyperbolae) from the gp package, computes: - the point P of parameter U, and - the first, second and third derivative vectors V1, V2 and V3 at this point. The results, P, V1, V2 and V3, are either: - a gp_Pnt point and three gp_Vec vectors, for a curve in 3D space, or - a gp_Pnt2d point and three gp_Vec2d vectors, for a curve in 2D space.)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real ,  const gp_Elips & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Elips & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real ,  const gp_Hypr & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Hypr & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real ,  const gp_Lin & ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const gp_Lin & ,  const Standard_Integer  ) >(&ElCLib::DN),
                    R"#(For elementary curves (lines, circles and conics) from the gp package, computes the vector corresponding to the Nth derivative at the point of parameter U. The result is either: - a gp_Vec vector for a curve in 3D space, or - a gp_Vec2d vector for a curve in 2D space. In the following functions N is the order of derivation and should be greater than 0)#"  , py::arg("U"),  py::arg("L"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real ,  const gp_Circ & ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const gp_Circ & ,  const Standard_Integer  ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real ,  const gp_Elips & ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const gp_Elips & ,  const Standard_Integer  ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real ,  const gp_Hypr & ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const gp_Hypr & ,  const Standard_Integer  ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real ,  const gp_Parab & ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const gp_Parab & ,  const Standard_Integer  ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("N"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Real ,  const gp_Lin2d &  ) ) static_cast<gp_Pnt2d (*)( const Standard_Real ,  const gp_Lin2d &  ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("L"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Real ,  const gp_Circ2d &  ) ) static_cast<gp_Pnt2d (*)( const Standard_Real ,  const gp_Circ2d &  ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Real ,  const gp_Elips2d &  ) ) static_cast<gp_Pnt2d (*)( const Standard_Real ,  const gp_Elips2d &  ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Real ,  const gp_Hypr2d &  ) ) static_cast<gp_Pnt2d (*)( const Standard_Real ,  const gp_Hypr2d &  ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const Standard_Real ,  const gp_Parab2d &  ) ) static_cast<gp_Pnt2d (*)( const Standard_Real ,  const gp_Parab2d &  ) >(&ElCLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const gp_Lin2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Lin2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("L"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const gp_Circ2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Circ2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const gp_Elips2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Elips2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const gp_Hypr2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Hypr2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const gp_Parab2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Parab2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&ElCLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("P"),  py::arg("V1"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const gp_Circ2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Circ2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const gp_Elips2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Elips2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const gp_Hypr2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Hypr2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const gp_Parab2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Parab2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real ,  const gp_Circ2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Circ2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real ,  const gp_Elips2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Elips2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real ,  const gp_Hypr2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Hypr2d & ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::D3),
                    R"#(In the following functions N is the order of derivation and should be greater than 0)#"  , py::arg("U"),  py::arg("H"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Real ,  const gp_Lin2d & ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Standard_Real ,  const gp_Lin2d & ,  const Standard_Integer  ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("L"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Real ,  const gp_Circ2d & ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Standard_Real ,  const gp_Circ2d & ,  const Standard_Integer  ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("C"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Real ,  const gp_Elips2d & ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Standard_Real ,  const gp_Elips2d & ,  const Standard_Integer  ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("E"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Real ,  const gp_Hypr2d & ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Standard_Real ,  const gp_Hypr2d & ,  const Standard_Integer  ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("H"),  py::arg("N"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const Standard_Real ,  const gp_Parab2d & ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Standard_Real ,  const gp_Parab2d & ,  const Standard_Integer  ) >(&ElCLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Prb"),  py::arg("N"))
        .def_static("LineValue_s",
                    (gp_Pnt (*)( const Standard_Real ,  const gp_Ax1 &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const gp_Ax1 &  ) >(&ElCLib::LineValue),
                    R"#(Curve evaluation The following basis functions compute the derivatives on elementary curves defined by their geometric characteristics. These functions can be called without constructing a conic from package gp. They are called by the previous functions. Example : A circle is defined by its position and its radius.)#"  , py::arg("U"),  py::arg("Pos"))
        .def_static("CircleValue_s",
                    (gp_Pnt (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real  ) >(&ElCLib::CircleValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Radius"))
        .def_static("EllipseValue_s",
                    (gp_Pnt (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real  ) >(&ElCLib::EllipseValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"))
        .def_static("HyperbolaValue_s",
                    (gp_Pnt (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real  ) >(&ElCLib::HyperbolaValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"))
        .def_static("ParabolaValue_s",
                    (gp_Pnt (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real  ) >(&ElCLib::ParabolaValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Focal"))
        .def_static("LineD1_s",
                    (void (*)( const Standard_Real ,  const gp_Ax1 & ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax1 & ,  gp_Pnt & ,  gp_Vec &  ) >(&ElCLib::LineD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("P"),  py::arg("V1"))
        .def_static("CircleD1_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) >(&ElCLib::CircleD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("V1"))
        .def_static("EllipseD1_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) >(&ElCLib::EllipseD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"))
        .def_static("HyperbolaD1_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) >(&ElCLib::HyperbolaD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"))
        .def_static("ParabolaD1_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) >(&ElCLib::ParabolaD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Focal"),  py::arg("P"),  py::arg("V1"))
        .def_static("CircleD2_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::CircleD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("EllipseD2_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::EllipseD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("HyperbolaD2_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::HyperbolaD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("ParabolaD2_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::ParabolaD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Focal"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("CircleD3_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::CircleD3),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("EllipseD3_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::EllipseD3),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("HyperbolaD3_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElCLib::HyperbolaD3),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("LineDN_s",
                    (gp_Vec (*)( const Standard_Real ,  const gp_Ax1 & ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const gp_Ax1 & ,  const Standard_Integer  ) >(&ElCLib::LineDN),
                    R"#(In the following functions N is the order of derivation and should be greater than 0)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("N"))
        .def_static("CircleDN_s",
                    (gp_Vec (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Integer  ) >(&ElCLib::CircleDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("N"))
        .def_static("EllipseDN_s",
                    (gp_Vec (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&ElCLib::EllipseDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("N"))
        .def_static("HyperbolaDN_s",
                    (gp_Vec (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&ElCLib::HyperbolaDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("N"))
        .def_static("ParabolaDN_s",
                    (gp_Vec (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const gp_Ax2 & ,  const Standard_Real ,  const Standard_Integer  ) >(&ElCLib::ParabolaDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Focal"),  py::arg("N"))
        .def_static("LineValue_s",
                    (gp_Pnt2d (*)( const Standard_Real ,  const gp_Ax2d &  ) ) static_cast<gp_Pnt2d (*)( const Standard_Real ,  const gp_Ax2d &  ) >(&ElCLib::LineValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"))
        .def_static("CircleValue_s",
                    (gp_Pnt2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real  ) ) static_cast<gp_Pnt2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real  ) >(&ElCLib::CircleValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Radius"))
        .def_static("EllipseValue_s",
                    (gp_Pnt2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Pnt2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real  ) >(&ElCLib::EllipseValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"))
        .def_static("HyperbolaValue_s",
                    (gp_Pnt2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Pnt2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real  ) >(&ElCLib::HyperbolaValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"))
        .def_static("ParabolaValue_s",
                    (gp_Pnt2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real  ) ) static_cast<gp_Pnt2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real  ) >(&ElCLib::ParabolaValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Focal"))
        .def_static("LineD1_s",
                    (void (*)( const Standard_Real ,  const gp_Ax2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax2d & ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&ElCLib::LineD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("P"),  py::arg("V1"))
        .def_static("CircleD1_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&ElCLib::CircleD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("V1"))
        .def_static("EllipseD1_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&ElCLib::EllipseD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"))
        .def_static("HyperbolaD1_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&ElCLib::HyperbolaD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"))
        .def_static("ParabolaD1_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) >(&ElCLib::ParabolaD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Focal"),  py::arg("P"),  py::arg("V1"))
        .def_static("CircleD2_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::CircleD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("EllipseD2_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::EllipseD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("HyperbolaD2_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::HyperbolaD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("ParabolaD2_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::ParabolaD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Focal"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("CircleD3_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::CircleD3),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("EllipseD3_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::EllipseD3),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("HyperbolaD3_s",
                    (void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) ) static_cast<void (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) >(&ElCLib::HyperbolaD3),
                    R"#(In the following functions N is the order of derivation and should be greater than 0)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("LineDN_s",
                    (gp_Vec2d (*)( const Standard_Real ,  const gp_Ax2d & ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Standard_Real ,  const gp_Ax2d & ,  const Standard_Integer  ) >(&ElCLib::LineDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("N"))
        .def_static("CircleDN_s",
                    (gp_Vec2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Integer  ) >(&ElCLib::CircleDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("N"))
        .def_static("EllipseDN_s",
                    (gp_Vec2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&ElCLib::EllipseDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("N"))
        .def_static("HyperbolaDN_s",
                    (gp_Vec2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&ElCLib::HyperbolaDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("N"))
        .def_static("ParabolaDN_s",
                    (gp_Vec2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<gp_Vec2d (*)( const Standard_Real ,  const gp_Ax22d & ,  const Standard_Real ,  const Standard_Integer  ) >(&ElCLib::ParabolaDN),
                    R"#(The following functions compute the parametric value corresponding to a given point on a elementary curve. The point should be on the curve.)#"  , py::arg("U"),  py::arg("Pos"),  py::arg("Focal"),  py::arg("N"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Lin & ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const gp_Lin & ,  const gp_Pnt &  ) >(&ElCLib::Parameter),
                    R"#(Computes the parameter value of the point P on the given curve. Note: In its local coordinate system, the parametric equation of the curve is given by the following: - for the line L: P(U) = Po + U*Vo where Po is the origin and Vo the unit vector of its positioning axis. - for the circle C: X(U) = Radius*Cos(U), Y(U) = Radius*Sin(U) - for the ellipse E: X(U) = MajorRadius*Cos(U). Y(U) = MinorRadius*Sin(U) - for the hyperbola H: X(U) = MajorRadius*Ch(U), Y(U) = MinorRadius*Sh(U) - for the parabola Prb: X(U) = U**2 / (2*p) Y(U) = U where p is the distance between the focus and the directrix. Warning The point P must be on the curve. These functions are not protected, however, and if point P is not on the curve, an exception may be raised.)#"  , py::arg("L"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Lin2d & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Real (*)( const gp_Lin2d & ,  const gp_Pnt2d &  ) >(&ElCLib::Parameter),
                    R"#(parametrization P (U) = L.Location() + U * L.Direction())#"  , py::arg("L"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Circ & ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const gp_Circ & ,  const gp_Pnt &  ) >(&ElCLib::Parameter),
                    R"#(None)#"  , py::arg("C"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Circ2d & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Real (*)( const gp_Circ2d & ,  const gp_Pnt2d &  ) >(&ElCLib::Parameter),
                    R"#(parametrization In the local coordinate system of the circle X (U) = Radius * Cos (U) Y (U) = Radius * Sin (U))#"  , py::arg("C"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Elips & ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const gp_Elips & ,  const gp_Pnt &  ) >(&ElCLib::Parameter),
                    R"#(None)#"  , py::arg("E"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Elips2d & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Real (*)( const gp_Elips2d & ,  const gp_Pnt2d &  ) >(&ElCLib::Parameter),
                    R"#(parametrization In the local coordinate system of the Ellipse X (U) = MajorRadius * Cos (U) Y (U) = MinorRadius * Sin (U))#"  , py::arg("E"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Hypr & ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const gp_Hypr & ,  const gp_Pnt &  ) >(&ElCLib::Parameter),
                    R"#(None)#"  , py::arg("H"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Hypr2d & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Real (*)( const gp_Hypr2d & ,  const gp_Pnt2d &  ) >(&ElCLib::Parameter),
                    R"#(parametrization In the local coordinate system of the Hyperbola X (U) = MajorRadius * Ch (U) Y (U) = MinorRadius * Sh (U))#"  , py::arg("H"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Parab & ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const gp_Parab & ,  const gp_Pnt &  ) >(&ElCLib::Parameter),
                    R"#(None)#"  , py::arg("Prb"),  py::arg("P"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const gp_Parab2d & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Real (*)( const gp_Parab2d & ,  const gp_Pnt2d &  ) >(&ElCLib::Parameter),
                    R"#(parametrization In the local coordinate system of the parabola Y**2 = (2*P) * X where P is the distance between the focus and the directrix.)#"  , py::arg("Prb"),  py::arg("P"))
        .def_static("LineParameter_s",
                    (Standard_Real (*)( const gp_Ax1 & ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const gp_Ax1 & ,  const gp_Pnt &  ) >(&ElCLib::LineParameter),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("P"))
        .def_static("LineParameter_s",
                    (Standard_Real (*)( const gp_Ax2d & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Real (*)( const gp_Ax2d & ,  const gp_Pnt2d &  ) >(&ElCLib::LineParameter),
                    R"#(parametrization P (U) = L.Location() + U * L.Direction())#"  , py::arg("Pos"),  py::arg("P"))
        .def_static("CircleParameter_s",
                    (Standard_Real (*)( const gp_Ax2 & ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const gp_Ax2 & ,  const gp_Pnt &  ) >(&ElCLib::CircleParameter),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("P"))
        .def_static("CircleParameter_s",
                    (Standard_Real (*)( const gp_Ax22d & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Real (*)( const gp_Ax22d & ,  const gp_Pnt2d &  ) >(&ElCLib::CircleParameter),
                    R"#(Pos is the Axis of the Circle parametrization In the local coordinate system of the circle X (U) = Radius * Cos (U) Y (U) = Radius * Sin (U))#"  , py::arg("Pos"),  py::arg("P"))
        .def_static("EllipseParameter_s",
                    (Standard_Real (*)( const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt &  ) >(&ElCLib::EllipseParameter),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"))
        .def_static("EllipseParameter_s",
                    (Standard_Real (*)( const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt2d &  ) ) static_cast<Standard_Real (*)( const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt2d &  ) >(&ElCLib::EllipseParameter),
                    R"#(Pos is the Axis of the Ellipse parametrization In the local coordinate system of the Ellipse X (U) = MajorRadius * Cos (U) Y (U) = MinorRadius * Sin (U))#"  , py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"))
        .def_static("HyperbolaParameter_s",
                    (Standard_Real (*)( const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const gp_Ax2 & ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt &  ) >(&ElCLib::HyperbolaParameter),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"))
        .def_static("HyperbolaParameter_s",
                    (Standard_Real (*)( const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt2d &  ) ) static_cast<Standard_Real (*)( const gp_Ax22d & ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt2d &  ) >(&ElCLib::HyperbolaParameter),
                    R"#(Pos is the Axis of the Hyperbola parametrization In the local coordinate system of the Hyperbola X (U) = MajorRadius * Ch (U) Y (U) = MinorRadius * Sh (U))#"  , py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"))
        .def_static("ParabolaParameter_s",
                    (Standard_Real (*)( const gp_Ax2 & ,  const gp_Pnt &  ) ) static_cast<Standard_Real (*)( const gp_Ax2 & ,  const gp_Pnt &  ) >(&ElCLib::ParabolaParameter),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("P"))
        .def_static("ParabolaParameter_s",
                    (Standard_Real (*)( const gp_Ax22d & ,  const gp_Pnt2d &  ) ) static_cast<Standard_Real (*)( const gp_Ax22d & ,  const gp_Pnt2d &  ) >(&ElCLib::ParabolaParameter),
                    R"#(Pos is the mirror axis of the parabola parametrization In the local coordinate system of the parabola Y**2 = (2*P) * X where P is the distance between the focus and the directrix. The following functions build a 3d curve from a 2d curve at a given position defined with an Ax2.)#"  , py::arg("Pos"),  py::arg("P"))
        .def_static("To3d_s",
                    (gp_Pnt (*)( const gp_Ax2 & ,  const gp_Pnt2d &  ) ) static_cast<gp_Pnt (*)( const gp_Ax2 & ,  const gp_Pnt2d &  ) >(&ElCLib::To3d),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("P"))
        .def_static("To3d_s",
                    (gp_Vec (*)( const gp_Ax2 & ,  const gp_Vec2d &  ) ) static_cast<gp_Vec (*)( const gp_Ax2 & ,  const gp_Vec2d &  ) >(&ElCLib::To3d),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("V"))
        .def_static("To3d_s",
                    (gp_Dir (*)( const gp_Ax2 & ,  const gp_Dir2d &  ) ) static_cast<gp_Dir (*)( const gp_Ax2 & ,  const gp_Dir2d &  ) >(&ElCLib::To3d),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("V"))
        .def_static("To3d_s",
                    (gp_Ax1 (*)( const gp_Ax2 & ,  const gp_Ax2d &  ) ) static_cast<gp_Ax1 (*)( const gp_Ax2 & ,  const gp_Ax2d &  ) >(&ElCLib::To3d),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("A"))
        .def_static("To3d_s",
                    (gp_Ax2 (*)( const gp_Ax2 & ,  const gp_Ax22d &  ) ) static_cast<gp_Ax2 (*)( const gp_Ax2 & ,  const gp_Ax22d &  ) >(&ElCLib::To3d),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("A"))
        .def_static("To3d_s",
                    (gp_Lin (*)( const gp_Ax2 & ,  const gp_Lin2d &  ) ) static_cast<gp_Lin (*)( const gp_Ax2 & ,  const gp_Lin2d &  ) >(&ElCLib::To3d),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("L"))
        .def_static("To3d_s",
                    (gp_Circ (*)( const gp_Ax2 & ,  const gp_Circ2d &  ) ) static_cast<gp_Circ (*)( const gp_Ax2 & ,  const gp_Circ2d &  ) >(&ElCLib::To3d),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("C"))
        .def_static("To3d_s",
                    (gp_Elips (*)( const gp_Ax2 & ,  const gp_Elips2d &  ) ) static_cast<gp_Elips (*)( const gp_Ax2 & ,  const gp_Elips2d &  ) >(&ElCLib::To3d),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("E"))
        .def_static("To3d_s",
                    (gp_Hypr (*)( const gp_Ax2 & ,  const gp_Hypr2d &  ) ) static_cast<gp_Hypr (*)( const gp_Ax2 & ,  const gp_Hypr2d &  ) >(&ElCLib::To3d),
                    R"#(None)#"  , py::arg("Pos"),  py::arg("H"))
        .def_static("To3d_s",
                    (gp_Parab (*)( const gp_Ax2 & ,  const gp_Parab2d &  ) ) static_cast<gp_Parab (*)( const gp_Ax2 & ,  const gp_Parab2d &  ) >(&ElCLib::To3d),
                    R"#(These functions build a 3D geometric entity from a 2D geometric entity. The "X Axis" and the "Y Axis" of the global coordinate system (i.e. 2D space) are lined up respectively with the "X Axis" and "Y Axis" of the 3D coordinate system, Pos.)#"  , py::arg("Pos"),  py::arg("Prb"))
    // static methods using call by reference i.s.o. return
        .def_static("AdjustPeriodic_s",
                    []( const Standard_Real UFirst,const Standard_Real ULast,const Standard_Real Precision ){ Standard_Real  U1; Standard_Real  U2; ElCLib::AdjustPeriodic(UFirst,ULast,Precision,U1,U2); return std::make_tuple(U1,U2); },
                    R"#(Adjust U1 and U2 in the parametric range UFirst Ulast of a periodic curve, where ULast - UFirst is its period. To do this, this function: - sets U1 in the range [ UFirst, ULast ] by adding/removing the period to/from the value U1, then - sets U2 in the range [ U1, U1 + period ] by adding/removing the period to/from the value U2. Precision is used to test the equalities.)#"  , py::arg("UFirst"),  py::arg("ULast"),  py::arg("Precision"))
    // operators
    // Additional methods
;

// functions
// ./opencascade/ElCLib.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
