
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

// module includes
#include <ElSLib.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ElSLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ElSLib"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<ElSLib , shared_ptr<ElSLib>>(m,"ElSLib");

    static_cast<py::class_<ElSLib , shared_ptr<ElSLib> >>(m.attr("ElSLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real , const Standard_Real , const gp_Pln & ) ) static_cast<gp_Pnt (*)( const Standard_Real , const Standard_Real , const gp_Pln & ) >(&ElSLib::Value),
                    R"#(For elementary surfaces from the gp package (planes, cones, cylinders, spheres and tori), computes the point of parameters (U, V).)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pl"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real , const Standard_Real , const gp_Cone & ) ) static_cast<gp_Pnt (*)( const Standard_Real , const Standard_Real , const gp_Cone & ) >(&ElSLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & ) ) static_cast<gp_Pnt (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & ) >(&ElSLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real , const Standard_Real , const gp_Sphere & ) ) static_cast<gp_Pnt (*)( const Standard_Real , const Standard_Real , const gp_Sphere & ) >(&ElSLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real , const Standard_Real , const gp_Torus & ) ) static_cast<gp_Pnt (*)( const Standard_Real , const Standard_Real , const gp_Torus & ) >(&ElSLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real , const Standard_Real , const gp_Pln & , const Standard_Integer , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Real , const Standard_Real , const gp_Pln & , const Standard_Integer , const Standard_Integer ) >(&ElSLib::DN),
                    R"#(For elementary surfaces from the gp package (planes, cones, cylinders, spheres and tori), computes the derivative vector of order Nu and Nv in the u and v parametric directions respectively, at the point of parameters (U, V).)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pl"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real , const Standard_Real , const gp_Cone & , const Standard_Integer , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Real , const Standard_Real , const gp_Cone & , const Standard_Integer , const Standard_Integer ) >(&ElSLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & , const Standard_Integer , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & , const Standard_Integer , const Standard_Integer ) >(&ElSLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real , const Standard_Real , const gp_Sphere & , const Standard_Integer , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Real , const Standard_Real , const gp_Sphere & , const Standard_Integer , const Standard_Integer ) >(&ElSLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real , const Standard_Real , const gp_Torus & , const Standard_Integer , const Standard_Integer ) ) static_cast<gp_Vec (*)( const Standard_Real , const Standard_Real , const gp_Torus & , const Standard_Integer , const Standard_Integer ) >(&ElSLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("D0_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Pln & , gp_Pnt & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Pln & , gp_Pnt & ) >(&ElSLib::D0),
                    R"#(For elementary surfaces from the gp package (planes, cones, cylinders, spheres and tori), computes the point P of parameters (U, V).inline)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pl"),  py::arg("P"))
        .def_static("D0_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Cone & , gp_Pnt & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Cone & , gp_Pnt & ) >(&ElSLib::D0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"))
        .def_static("D0_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & , gp_Pnt & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & , gp_Pnt & ) >(&ElSLib::D0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"))
        .def_static("D0_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Sphere & , gp_Pnt & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Sphere & , gp_Pnt & ) >(&ElSLib::D0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"),  py::arg("P"))
        .def_static("D0_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Torus & , gp_Pnt & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Torus & , gp_Pnt & ) >(&ElSLib::D0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Pln & , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Pln & , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&ElSLib::D1),
                    R"#(For elementary surfaces from the gp package (planes, cones, cylinders, spheres and tori), computes: - the point P of parameters (U, V), and - the first derivative vectors Vu and Vv at this point in the u and v parametric directions respectively.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pl"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Cone & , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Cone & , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&ElSLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&ElSLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Sphere & , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Sphere & , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&ElSLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Torus & , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Torus & , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&ElSLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Cone & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Cone & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElSLib::D2),
                    R"#(For elementary surfaces from the gp package (cones, cylinders, spheres and tori), computes: - the point P of parameters (U, V), and - the first derivative vectors Vu and Vv at this point in the u and v parametric directions respectively, and - the second derivative vectors Vuu, Vvv and Vuv at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElSLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Sphere & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Sphere & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElSLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Torus & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Torus & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElSLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Cone & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Cone & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElSLib::D3),
                    R"#(For elementary surfaces from the gp package (cones, cylinders, spheres and tori), computes: - the point P of parameters (U,V), and - the first derivative vectors Vu and Vv at this point in the u and v parametric directions respectively, and - the second derivative vectors Vuu, Vvv and Vuv at this point, and - the third derivative vectors Vuuu, Vvvv, Vuuv and Vuvv at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Cylinder & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElSLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Sphere & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Sphere & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElSLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real , const Standard_Real , const gp_Torus & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const gp_Torus & , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&ElSLib::D3),
                    R"#(Surface evaluation The following functions compute the point and the derivatives on elementary surfaces defined with their geometric characterisitics. You don't need to create the surface to use these functions. These functions are called by the previous ones. Example : A cylinder is defined with its position and its radius.)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
    // static methods using call by reference i.s.o. return
        .def_static("Parameters_s",
                    []( const gp_Pln & Pl,const gp_Pnt & P ){ Standard_Real  U; Standard_Real  V; ElSLib::Parameters(Pl,P,U,V); return std::make_tuple(U,V); },
                    R"#(parametrization P (U, V) = Pl.Location() + U * Pl.XDirection() + V * Pl.YDirection())#"  , py::arg("Pl"),  py::arg("P"))
        .def_static("Parameters_s",
                    []( const gp_Cylinder & C,const gp_Pnt & P ){ Standard_Real  U; Standard_Real  V; ElSLib::Parameters(C,P,U,V); return std::make_tuple(U,V); },
                    R"#(parametrization P (U, V) = Location + V * ZDirection + Radius * (Cos(U) * XDirection + Sin (U) * YDirection))#"  , py::arg("C"),  py::arg("P"))
        .def_static("Parameters_s",
                    []( const gp_Cone & C,const gp_Pnt & P ){ Standard_Real  U; Standard_Real  V; ElSLib::Parameters(C,P,U,V); return std::make_tuple(U,V); },
                    R"#(parametrization P (U, V) = Location + V * ZDirection + (Radius + V * Tan (SemiAngle)) * (Cos(U) * XDirection + Sin(U) * YDirection))#"  , py::arg("C"),  py::arg("P"))
        .def_static("Parameters_s",
                    []( const gp_Sphere & S,const gp_Pnt & P ){ Standard_Real  U; Standard_Real  V; ElSLib::Parameters(S,P,U,V); return std::make_tuple(U,V); },
                    R"#(parametrization P (U, V) = Location + Radius * Cos (V) * (Cos (U) * XDirection + Sin (U) * YDirection) + Radius * Sin (V) * ZDirection)#"  , py::arg("S"),  py::arg("P"))
        .def_static("Parameters_s",
                    []( const gp_Torus & T,const gp_Pnt & P ){ Standard_Real  U; Standard_Real  V; ElSLib::Parameters(T,P,U,V); return std::make_tuple(U,V); },
                    R"#(parametrization P (U, V) = Location + (MajorRadius + MinorRadius * Cos(U)) * (Cos(V) * XDirection - Sin(V) * YDirection) + MinorRadius * Sin(U) * ZDirection)#"  , py::arg("T"),  py::arg("P"))
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ElSLib.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
