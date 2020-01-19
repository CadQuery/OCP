
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_Curve.hxx>
#include <Bnd_Box.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Bnd_Box2d.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Lin.hxx>
#include <Bnd_Box.hxx>
#include <gp_Lin2d.hxx>
#include <Bnd_Box2d.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <BndLib_Add3dCurve.hxx>
#include <BndLib_Add2dCurve.hxx>
#include <BndLib_AddSurface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Bnd_Box.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>

// module includes
#include <BndLib.hxx>
#include <BndLib_Add2dCurve.hxx>
#include <BndLib_Add3dCurve.hxx>
#include <BndLib_AddSurface.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BndLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BndLib"));


//Python trampoline classes

// classes

    register_default_constructor<BndLib , shared_ptr<BndLib>>(m,"BndLib");

    static_cast<py::class_<BndLib , shared_ptr<BndLib>  >>(m.attr("BndLib"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const gp_Lin & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Lin & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(Bounding box for a surface trimmed or not Adds the segment of the line L limited by the two parameter values P1 and P2, to the bounding box B, and then enlarges B by the tolerance value Tol. Tol is the tolerance value to enlarge the minimun and maximum dimension P1 and P2 may represent infinite values. Exceptions Standard_Failure if P1 and P2 are either two negative infinite real numbers, or two positive infinite real numbers.)#"  , py::arg("L"),  py::arg("P1"),  py::arg("P2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib::Add),
                    R"#(None)#"  , py::arg("L"),  py::arg("P1"),  py::arg("P2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Circ & ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Circ & ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(None)#"  , py::arg("C"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Circ & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Circ & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(P2-P1 can be in [0,2*pi])#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Circ2d & ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const gp_Circ2d & ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib::Add),
                    R"#(None)#"  , py::arg("C"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Circ2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const gp_Circ2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib::Add),
                    R"#(Adds the circle C, or the arc of the circle C limited by the two parameter values P1 and P2, to the bounding box B, and then enlarges B by the tolerance value Tol. P2-P1 can be in [0,2*pi])#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Elips & ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Elips & ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(None)#"  , py::arg("C"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Elips & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Elips & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(P2-P1 can be in [0,2*pi])#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Elips2d & ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const gp_Elips2d & ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib::Add),
                    R"#(None)#"  , py::arg("C"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Elips2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const gp_Elips2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib::Add),
                    R"#(Adds the ellipse E, or the arc of the ellipse E limited by the two parameter values P1 and P2, to the bounding box B, and then enlarges B by the tolerance value Tol. P2-P1 can be in [0,2*pi])#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Parab & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Parab & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(None)#"  , py::arg("P"),  py::arg("P1"),  py::arg("P2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Parab2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const gp_Parab2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib::Add),
                    R"#(Adds the arc of the parabola P limited by the two parameter values P1 and P2, to the bounding box B, and then enlarges B by the tolerance value Tol. P1 and P2 may represent infinite values. Exceptions Standard_Failure if P1 and P2 are either two negative infinite real numbers, or two positive infinite real numbers.)#"  , py::arg("P"),  py::arg("P1"),  py::arg("P2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Hypr & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Hypr & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(None)#"  , py::arg("H"),  py::arg("P1"),  py::arg("P2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Hypr2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const gp_Hypr2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib::Add),
                    R"#(Adds the arc of the branch of hyperbola H limited by the two parameter values P1 and P2, to the bounding box B, and then enlarges B by the tolerance value Tol. P1 and P2 may represent infinite values. Exceptions Standard_Failure if P1 and P2 are either two negative infinite real numbers, or two positive infinite real numbers.)#"  , py::arg("H"),  py::arg("P1"),  py::arg("P2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Cylinder & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Cylinder & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(UMax -UMin can be in [0,2*pi])#"  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Cylinder & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Cylinder & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(Adds to the bounding box B, the patch of the cylinder S limited - in the v parametric direction, by the two parameter values VMin and VMax - and optionally in the u parametric direction, by the two parameter values UMin and UMax. B is then enlarged by the tolerance value Tol. VMin and VMax may represent infinite values. Exceptions Standard_Failure if VMin and VMax are either two negative infinite real numbers, or two positive infinite real numbers.)#"  , py::arg("S"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Cone & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Cone & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(UMax-UMin can be in [0,2*pi])#"  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Cone & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Cone & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(Adds to the bounding box B, the patch of the cone S limited - in the v parametric direction, by the two parameter values VMin and VMax - and optionally in the u parametric direction, by the two parameter values UMin and UMax, B is then enlarged by the tolerance value Tol. VMin and VMax may represent infinite values. Exceptions Standard_Failure if VMin and VMax are either two negative infinite real numbers, or two positive infinite real numbers.)#"  , py::arg("S"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Sphere & ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Sphere & ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(None)#"  , py::arg("S"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Sphere & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Sphere & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(Adds to the bounding box B the sphere S, or - the patch of the sphere S, limited in the u parametric direction, by the two parameter values UMin and UMax, and in the v parametric direction, by the two parameter values VMin and VMax. B is then enlarged by the tolerance value Tol. UMax-UMin can be in [0,2*pi] VMin,VMax can be [-pi/2,pi/2])#"  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Torus & ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Torus & ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(None)#"  , py::arg("P"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const gp_Torus & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const gp_Torus & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib::Add),
                    R"#(Adds to the bounding box B - the torus S, or - the patch of the torus S, limited in the u parametric direction, by the two parameter values UMin and UMax, and in the v parametric direction, by the two parameter values VMin and VMax. B is then enlarged by the tolerance value Tol. UMax-UMin can be in [0,2*pi], VMin,VMax can be [-pi/2,pi/2])#"  , py::arg("P"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Tol"),  py::arg("B"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<BndLib_Add2dCurve , shared_ptr<BndLib_Add2dCurve>>(m,"BndLib_Add2dCurve");

    static_cast<py::class_<BndLib_Add2dCurve , shared_ptr<BndLib_Add2dCurve>  >>(m.attr("BndLib_Add2dCurve"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib_Add2dCurve::Add),
                    R"#(Adds to the bounding box B the curve C B is then enlarged by the tolerance value Tol. Note: depending on the type of curve, one of the following representations of the curve C is used to include it in the bounding box B: - an exact representation if C is built from a line, a circle or a conic curve, - the poles of the curve if C is built from a Bezier curve or a BSpline curve, - if not, the points of an approximation of the curve C. Warning C is an adapted curve, that is, an object which is an interface between: - the services provided by a 2D curve from the package Geom2d - and those required of the curve by the computation algorithm. The adapted curve is created in the following way: Handle(Geom2d_Curve) mycurve = ... ; Geom2dAdaptor_Curve C(mycurve); The bounding box B is then enlarged by adding it: Bnd_Box2d B; // ... Standard_Real Tol = ... ; Add2dCurve::Add ( C, Tol, B ); Exceptions Standard_Failure if the curve is built from: - a Geom_Line, or - a Geom_Parabola, or - a Geom_Hyperbola, and P1 and P2 are either two negative infinite real numbers, or two positive infinite real numbers.)#"  , py::arg("C"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const Adaptor2d_Curve2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib_Add2dCurve::Add),
                    R"#(Adds to the bounding box Bthe arc of the curve C limited by the two parameter values P1 and P2. B is then enlarged by the tolerance value Tol. Note: depending on the type of curve, one of the following representations of the curve C is used to include it in the bounding box B: - an exact representation if C is built from a line, a circle or a conic curve, - the poles of the curve if C is built from a Bezier curve or a BSpline curve, - if not, the points of an approximation of the curve C. Warning C is an adapted curve, that is, an object which is an interface between: - the services provided by a 2D curve from the package Geom2d - and those required of the curve by the computation algorithm. The adapted curve is created in the following way: Handle(Geom2d_Curve) mycurve = ... ; Geom2dAdaptor_Curve C(mycurve); The bounding box B is then enlarged by adding it: Bnd_Box2d B; // ... Standard_Real Tol = ... ; Add2dCurve::Add ( C, Tol, B ); Exceptions Standard_Failure if the curve is built from: - a Geom_Line, or - a Geom_Parabola, or - a Geom_Hyperbola, and P1 and P2 are either two negative infinite real numbers, or two positive infinite real numbers.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib_Add2dCurve::Add),
                    R"#(Adds to the bounding box B the curve C B is then enlarged by the tolerance value Tol. Note: depending on the type of curve, one of the following representations of the curve C is used to include it in the bounding box B: - an exact representation if C is built from a line, a circle or a conic curve, - the poles of the curve if C is built from a Bezier curve or a BSpline curve, - if not, the points of an approximation of the curve C.)#"  , py::arg("C"),  py::arg("Tol"),  py::arg("Box"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib_Add2dCurve::Add),
                    R"#(Adds to the bounding box B the part of curve C B is then enlarged by the tolerance value Tol. U1, U2 - the parametric range to comute the bounding box; Note: depending on the type of curve, one of the following representations of the curve C is used to include it in the bounding box B: - an exact representation if C is built from a line, a circle or a conic curve, - the poles of the curve if C is built from a Bezier curve or a BSpline curve, - if not, the points of an approximation of the curve C.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("AddOptimal_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box2d &  ) >(&BndLib_Add2dCurve::AddOptimal),
                    R"#(Adds to the bounding box B the part of curve C B is then enlarged by the tolerance value Tol. U1, U2 - the parametric range to comute the bounding box; Note: depending on the type of curve, one of the following algorithms is used to include it in the bounding box B: - an exact analytical if C is built from a line, a circle or a conic curve, - numerical calculation of bounding box sizes, based on minimization algorithm, for other types of curve If Tol = < Precision::PConfusion(), Precision::PConfusion is used as tolerance for calculation)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"),  py::arg("B"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<BndLib_Add3dCurve , shared_ptr<BndLib_Add3dCurve>>(m,"BndLib_Add3dCurve");

    static_cast<py::class_<BndLib_Add3dCurve , shared_ptr<BndLib_Add3dCurve>  >>(m.attr("BndLib_Add3dCurve"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib_Add3dCurve::Add),
                    R"#(Adds to the bounding box B the curve C B is then enlarged by the tolerance value Tol. Note: depending on the type of curve, one of the following representations of the curve C is used to include it in the bounding box B: - an exact representation if C is built from a line, a circle or a conic curve, - the poles of the curve if C is built from a Bezier curve or a BSpline curve, if not, the points of an approximation of the curve C. Warning C is an adapted curve, that is, an object which is an interface between: - the services provided by a 3D curve from the package Geom - and those required of the curve by the computation algorithm. The adapted curve is created in the following way: Handle(Geom_Curve) mycurve = ... ; GeomAdaptor_Curve C(mycurve); The bounding box B is then enlarged by adding it: Bnd_Box B; // ... Standard_Real Tol = ... ; Add3dCurve::Add ( C, Tol, B ); Exceptions Standard_Failure if the curve is built from: - a Geom_Line, or - a Geom_Parabola, or - a Geom_Hyperbola, and P1 and P2 are either two negative infinite real numbers, or two positive infinite real numbers.)#"  , py::arg("C"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib_Add3dCurve::Add),
                    R"#(Adds to the bounding box B the curve C the arc of the curve C limited by the two parameter values P1 and P2. Note: depending on the type of curve, one of the following representations of the curve C is used to include it in the bounding box B: - an exact representation if C is built from a line, a circle or a conic curve, - the poles of the curve if C is built from a Bezier curve or a BSpline curve, if not, the points of an approximation of the curve C. Warning C is an adapted curve, that is, an object which is an interface between: - the services provided by a 3D curve from the package Geom - and those required of the curve by the computation algorithm. The adapted curve is created in the following way: Handle(Geom_Curve) mycurve = ... ; GeomAdaptor_Curve C(mycurve); The bounding box B is then enlarged by adding it: Bnd_Box B; // ... Standard_Real Tol = ... ; Add3dCurve::Add ( C, Tol, B ); Exceptions Standard_Failure if the curve is built from: - a Geom_Line, or - a Geom_Parabola, or - a Geom_Hyperbola, and P1 and P2 are either two negative infinite real numbers, or two positive infinite real numbers.)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("AddOptimal_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib_Add3dCurve::AddOptimal),
                    R"#(Adds to the bounding box B the curve C These methods use more precise algorithms for building bnd box then methods Add(...))#"  , py::arg("C"),  py::arg("Tol"),  py::arg("B"))
        .def_static("AddOptimal_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib_Add3dCurve::AddOptimal),
                    R"#(None)#"  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"),  py::arg("B"))
        .def_static("AddGenCurv_s",
                    (void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib_Add3dCurve::AddGenCurv),
                    R"#(Adds to the bounding box B the curve C using numerical minimization algorithms This method is used in AddOptimal for not analytical curves. if Tol < Precision::Confusion(), Precision:;Confusion is used as computation tolerance)#"  , py::arg("C"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("Tol"),  py::arg("B"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<BndLib_AddSurface , shared_ptr<BndLib_AddSurface>>(m,"BndLib_AddSurface");

    static_cast<py::class_<BndLib_AddSurface , shared_ptr<BndLib_AddSurface>  >>(m.attr("BndLib_AddSurface"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const Adaptor3d_Surface & ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const Adaptor3d_Surface & ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib_AddSurface::Add),
                    R"#(Adds to the bounding box B the surface S B is then enlarged by the tolerance value Tol. Note: depending on the type of curve, one of the following representations of the surface S is used to include it in the bounding box B: - an exact representation if S is built from a plane, a cylinder, a cone, a sphere or a torus, - the poles of the surface if S is built from a Bezier surface or a BSpline surface, - the points of an approximation of the surface S in cases other than offset surfaces; - in the case of an offset surface, the basis surface is first included according to the previous rules; then the bounding box is enlarged by the offset value. Warning Do not use these functions to add a non-finite surface to the bounding box B. If UMin, UMax, VMin or VMax is an infinite value B will become WholeSpace. S is an adapted surface, that is, an object which is an interface between: - the services provided by a surface from the package Geom - and those required of the surface by the computation algorithm. The adapted surface is created in the following way: Handle(Geom_Surface) mysurface = ... ; GeomAdaptor_Surface S(mysurface); The bounding box B is then enlarged by adding this surface: Bnd_Box B; // ... Standard_Real Tol = ... ; AddSurface::Add ( S, Tol, B );)#"  , py::arg("S"),  py::arg("Tol"),  py::arg("B"))
        .def_static("Add_s",
                    (void (*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib_AddSurface::Add),
                    R"#(Adds to the bounding box B the surface S the patch of the surface S limited in the u parametric direction by the two parameter values UMin, UMax, and in the v parametric direction by the two parameter values VMin, VMax. Note: depending on the type of curve, one of the following representations of the surface S is used to include it in the bounding box B: - an exact representation if S is built from a plane, a cylinder, a cone, a sphere or a torus, - the poles of the surface if S is built from a Bezier surface or a BSpline surface, - the points of an approximation of the surface S in cases other than offset surfaces; - in the case of an offset surface, the basis surface is first included according to the previous rules; then the bounding box is enlarged by the offset value. Warning Do not use these functions to add a non-finite surface to the bounding box B. If UMin, UMax, VMin or VMax is an infinite value B will become WholeSpace. S is an adapted surface, that is, an object which is an interface between: - the services provided by a surface from the package Geom - and those required of the surface by the computation algorithm. The adapted surface is created in the following way: Handle(Geom_Surface) mysurface = ... ; GeomAdaptor_Surface S(mysurface); The bounding box B is then enlarged by adding this surface: Bnd_Box B; // ... Standard_Real Tol = ... ; AddSurface::Add ( S, Tol, B );)#"  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Tol"),  py::arg("B"))
        .def_static("AddOptimal_s",
                    (void (*)( const Adaptor3d_Surface & ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const Adaptor3d_Surface & ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib_AddSurface::AddOptimal),
                    R"#(Adds the surface S to the bounding box B. This algorith builds precise bounding box)#"  , py::arg("S"),  py::arg("Tol"),  py::arg("B"))
        .def_static("AddOptimal_s",
                    (void (*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib_AddSurface::AddOptimal),
                    R"#(None)#"  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Tol"),  py::arg("B"))
        .def_static("AddGenSurf_s",
                    (void (*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) ) static_cast<void (*)( const Adaptor3d_Surface & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Bnd_Box &  ) >(&BndLib_AddSurface::AddGenSurf),
                    R"#(Adds to the bounding box B the surface S using numerical minimization algorithms This method is used in AddOptimal for not analytical surfaces and torus. if Tol < Precision::Confusion(), Precision::Confusion is used as computation tolerance)#"  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Tol"),  py::arg("B"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/BndLib_Add3dCurve.hxx
// ./opencascade/BndLib_Add2dCurve.hxx
// ./opencascade/BndLib.hxx
// ./opencascade/BndLib_AddSurface.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
