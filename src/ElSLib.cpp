
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

    static_cast<py::class_<ElSLib , shared_ptr<ElSLib>  >>(m.attr("ElSLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Pln &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Pln &  ) >(&ElSLib::Value),
                    R"#(For elementary surfaces from the gp package (planes, cones, cylinders, spheres and tori), computes the point of parameters (U, V).)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pl"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone &  ) >(&ElSLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder &  ) >(&ElSLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere &  ) >(&ElSLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus &  ) >(&ElSLib::Value),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Pln & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Pln & ,  const Standard_Integer ,  const Standard_Integer  ) >(&ElSLib::DN),
                    R"#(For elementary surfaces from the gp package (planes, cones, cylinders, spheres and tori), computes the derivative vector of order Nu and Nv in the u and v parametric directions respectively, at the point of parameters (U, V).)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pl"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone & ,  const Standard_Integer ,  const Standard_Integer  ) >(&ElSLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder & ,  const Standard_Integer ,  const Standard_Integer  ) >(&ElSLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere & ,  const Standard_Integer ,  const Standard_Integer  ) >(&ElSLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("DN_s",
                    (gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus & ,  const Standard_Integer ,  const Standard_Integer  ) >(&ElSLib::DN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("D0_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Pln & ,  gp_Pnt &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Pln & ,  gp_Pnt &  ) >(&ElSLib::D0),
                    R"#(For elementary surfaces from the gp package (planes, cones, cylinders, spheres and tori), computes the point P of parameters (U, V).inline)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pl"),  py::arg("P"))
        .def_static("D0_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone & ,  gp_Pnt &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone & ,  gp_Pnt &  ) >(&ElSLib::D0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"))
        .def_static("D0_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder & ,  gp_Pnt &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder & ,  gp_Pnt &  ) >(&ElSLib::D0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"))
        .def_static("D0_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere & ,  gp_Pnt &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere & ,  gp_Pnt &  ) >(&ElSLib::D0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"),  py::arg("P"))
        .def_static("D0_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus & ,  gp_Pnt &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus & ,  gp_Pnt &  ) >(&ElSLib::D0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Pln & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Pln & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D1),
                    R"#(For elementary surfaces from the gp package (planes, cones, cylinders, spheres and tori), computes: - the point P of parameters (U, V), and - the first derivative vectors Vu and Vv at this point in the u and v parametric directions respectively.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pl"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D1_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D2),
                    R"#(For elementary surfaces from the gp package (cones, cylinders, spheres and tori), computes: - the point P of parameters (U, V), and - the first derivative vectors Vu and Vv at this point in the u and v parametric directions respectively, and - the second derivative vectors Vuu, Vvv and Vuv at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("D2_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cone & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D3),
                    R"#(For elementary surfaces from the gp package (cones, cylinders, spheres and tori), computes: - the point P of parameters (U,V), and - the first derivative vectors Vu and Vv at this point in the u and v parametric directions respectively, and - the second derivative vectors Vuu, Vvv and Vuv at this point, and - the third derivative vectors Vuuu, Vvvv, Vuuv and Vuvv at this point.)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Cylinder & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("C"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Sphere & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D3),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("S"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("D3_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Torus & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::D3),
                    R"#(Surface evaluation The following functions compute the point and the derivatives on elementary surfaces defined with their geometric characterisitics. You don't need to create the surface to use these functions. These functions are called by the previous ones. Example : A cylinder is defined with its position and its radius.)#"  , py::arg("U"),  py::arg("V"),  py::arg("T"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("PlaneValue_s",
                    (gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 &  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 &  ) >(&ElSLib::PlaneValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"))
        .def_static("CylinderValue_s",
                    (gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real  ) >(&ElSLib::CylinderValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"))
        .def_static("ConeValue_s",
                    (gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) >(&ElSLib::ConeValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("SAngle"))
        .def_static("SphereValue_s",
                    (gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real  ) >(&ElSLib::SphereValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"))
        .def_static("TorusValue_s",
                    (gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Pnt (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) >(&ElSLib::TorusValue),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"))
        .def_static("PlaneDN_s",
                    (gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Integer ,  const Standard_Integer  ) >(&ElSLib::PlaneDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("CylinderDN_s",
                    (gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&ElSLib::CylinderDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("ConeDN_s",
                    (gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&ElSLib::ConeDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("SAngle"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("SphereDN_s",
                    (gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&ElSLib::SphereDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("TorusDN_s",
                    (gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&ElSLib::TorusDN),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("PlaneD0_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  gp_Pnt &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  gp_Pnt &  ) >(&ElSLib::PlaneD0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("P"))
        .def_static("ConeD0_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) >(&ElSLib::ConeD0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("SAngle"),  py::arg("P"))
        .def_static("CylinderD0_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt &  ) >(&ElSLib::CylinderD0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"))
        .def_static("SphereD0_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt &  ) >(&ElSLib::SphereD0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"))
        .def_static("TorusD0_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) >(&ElSLib::TorusD0),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"))
        .def_static("PlaneD1_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::PlaneD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("ConeD1_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::ConeD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("SAngle"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("CylinderD1_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::CylinderD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("SphereD1_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::SphereD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("TorusD1_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::TorusD1),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"))
        .def_static("ConeD2_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::ConeD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("SAngle"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("CylinderD2_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::CylinderD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("SphereD2_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::SphereD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("TorusD2_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::TorusD2),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"))
        .def_static("ConeD3_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::ConeD3),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("SAngle"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("CylinderD3_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::CylinderD3),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("SphereD3_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::SphereD3),
                    R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("Radius"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("TorusD3_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&ElSLib::TorusD3),
                    R"#(The following functions compute the parametric values corresponding to a given point on a elementary surface. The point should be on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"),  py::arg("Vu"),  py::arg("Vv"),  py::arg("Vuu"),  py::arg("Vvv"),  py::arg("Vuv"),  py::arg("Vuuu"),  py::arg("Vvvv"),  py::arg("Vuuv"),  py::arg("Vuvv"))
        .def_static("PlaneUIso_s",
                    (gp_Lin (*)( const gp_Ax3 & ,  const Standard_Real  ) ) static_cast<gp_Lin (*)( const gp_Ax3 & ,  const Standard_Real  ) >(&ElSLib::PlaneUIso),
                    R"#(compute the U Isoparametric gp_Lin of the plane.)#"  , py::arg("Pos"),  py::arg("U"))
        .def_static("CylinderUIso_s",
                    (gp_Lin (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Lin (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) >(&ElSLib::CylinderUIso),
                    R"#(compute the U Isoparametric gp_Lin of the cylinder.)#"  , py::arg("Pos"),  py::arg("Radius"),  py::arg("U"))
        .def_static("ConeUIso_s",
                    (gp_Lin (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Lin (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&ElSLib::ConeUIso),
                    R"#(compute the U Isoparametric gp_Lin of the cone.)#"  , py::arg("Pos"),  py::arg("Radius"),  py::arg("SAngle"),  py::arg("U"))
        .def_static("SphereUIso_s",
                    (gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) >(&ElSLib::SphereUIso),
                    R"#(compute the U Isoparametric gp_Circ of the sphere, (the meridian is not trimmed).)#"  , py::arg("Pos"),  py::arg("Radius"),  py::arg("U"))
        .def_static("TorusUIso_s",
                    (gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&ElSLib::TorusUIso),
                    R"#(compute the U Isoparametric gp_Circ of the torus.)#"  , py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("U"))
        .def_static("PlaneVIso_s",
                    (gp_Lin (*)( const gp_Ax3 & ,  const Standard_Real  ) ) static_cast<gp_Lin (*)( const gp_Ax3 & ,  const Standard_Real  ) >(&ElSLib::PlaneVIso),
                    R"#(compute the V Isoparametric gp_Lin of the plane.)#"  , py::arg("Pos"),  py::arg("V"))
        .def_static("CylinderVIso_s",
                    (gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) >(&ElSLib::CylinderVIso),
                    R"#(compute the V Isoparametric gp_Circ of the cylinder.)#"  , py::arg("Pos"),  py::arg("Radius"),  py::arg("V"))
        .def_static("ConeVIso_s",
                    (gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&ElSLib::ConeVIso),
                    R"#(compute the V Isoparametric gp_Circ of the cone.)#"  , py::arg("Pos"),  py::arg("Radius"),  py::arg("SAngle"),  py::arg("V"))
        .def_static("SphereVIso_s",
                    (gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real  ) >(&ElSLib::SphereVIso),
                    R"#(compute the V Isoparametric gp_Circ of the sphere, (the meridian is not trimmed).)#"  , py::arg("Pos"),  py::arg("Radius"),  py::arg("V"))
        .def_static("TorusVIso_s",
                    (gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Circ (*)( const gp_Ax3 & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&ElSLib::TorusVIso),
                    R"#(compute the V Isoparametric gp_Circ of the torus.)#"  , py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("V"))
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
        .def_static("PlaneParameters_s",
                    []( const gp_Ax3 & Pos,const gp_Pnt & P ){ Standard_Real  U; Standard_Real  V; ElSLib::PlaneParameters(Pos,P,U,V); return std::make_tuple(U,V); },
                    R"#(parametrization P (U, V) = Pl.Location() + U * Pl.XDirection() + V * Pl.YDirection())#"  , py::arg("Pos"),  py::arg("P"))
        .def_static("CylinderParameters_s",
                    []( const gp_Ax3 & Pos,const Standard_Real Radius,const gp_Pnt & P ){ Standard_Real  U; Standard_Real  V; ElSLib::CylinderParameters(Pos,Radius,P,U,V); return std::make_tuple(U,V); },
                    R"#(parametrization P (U, V) = Location + V * ZDirection + Radius * (Cos(U) * XDirection + Sin (U) * YDirection))#"  , py::arg("Pos"),  py::arg("Radius"),  py::arg("P"))
        .def_static("ConeParameters_s",
                    []( const gp_Ax3 & Pos,const Standard_Real Radius,const Standard_Real SAngle,const gp_Pnt & P ){ Standard_Real  U; Standard_Real  V; ElSLib::ConeParameters(Pos,Radius,SAngle,P,U,V); return std::make_tuple(U,V); },
                    R"#(parametrization P (U, V) = Location + V * ZDirection + (Radius + V * Tan (SemiAngle)) * (Cos(U) * XDirection + Sin(U) * YDirection))#"  , py::arg("Pos"),  py::arg("Radius"),  py::arg("SAngle"),  py::arg("P"))
        .def_static("SphereParameters_s",
                    []( const gp_Ax3 & Pos,const Standard_Real Radius,const gp_Pnt & P ){ Standard_Real  U; Standard_Real  V; ElSLib::SphereParameters(Pos,Radius,P,U,V); return std::make_tuple(U,V); },
                    R"#(parametrization P (U, V) = Location + Radius * Cos (V) * (Cos (U) * XDirection + Sin (U) * YDirection) + Radius * Sin (V) * ZDirection)#"  , py::arg("Pos"),  py::arg("Radius"),  py::arg("P"))
        .def_static("TorusParameters_s",
                    []( const gp_Ax3 & Pos,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const gp_Pnt & P ){ Standard_Real  U; Standard_Real  V; ElSLib::TorusParameters(Pos,MajorRadius,MinorRadius,P,U,V); return std::make_tuple(U,V); },
                    R"#(parametrization P (U, V) = Location + (MajorRadius + MinorRadius * Cos(U)) * (Cos(V) * XDirection - Sin(V) * YDirection) + MinorRadius * Sin(U) * ZDirection)#"  , py::arg("Pos"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("P"))
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ElSLib.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
