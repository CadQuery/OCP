
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pln.hxx>
#include <gp_Pnt.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Hypr.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <ProjLib_ProjectOnPlane.hxx>
#include <ProjLib_ProjectOnSurface.hxx>
#include <ProjLib_ComputeApprox.hxx>
#include <ProjLib_ComputeApproxOnPolarSurface.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <ProjLib_HProjectedCurve.hxx>
#include <ProjLib_CompProjectedCurve.hxx>
#include <ProjLib_HCompProjectedCurve.hxx>
#include <ProjLib_PrjResolve.hxx>
#include <ProjLib_PrjFunc.hxx>
#include <ProjLib_Projector.hxx>
#include <ProjLib_Plane.hxx>
#include <ProjLib_Cylinder.hxx>
#include <ProjLib_Cone.hxx>
#include <ProjLib_Sphere.hxx>
#include <ProjLib_Torus.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <math_Matrix.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomAdaptor_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>

// module includes
#include <ProjLib.hxx>
#include <ProjLib_CompProjectedCurve.hxx>
#include <ProjLib_ComputeApprox.hxx>
#include <ProjLib_ComputeApproxOnPolarSurface.hxx>
#include <ProjLib_Cone.hxx>
#include <ProjLib_Cylinder.hxx>
#include <ProjLib_HCompProjectedCurve.hxx>
#include <ProjLib_HProjectedCurve.hxx>
#include <ProjLib_HSequenceOfHSequenceOfPnt.hxx>
#include <ProjLib_Plane.hxx>
#include <ProjLib_PrjFunc.hxx>
#include <ProjLib_PrjResolve.hxx>
#include <ProjLib_ProjectedCurve.hxx>
#include <ProjLib_ProjectOnPlane.hxx>
#include <ProjLib_ProjectOnSurface.hxx>
#include <ProjLib_Projector.hxx>
#include <ProjLib_SequenceOfHSequenceOfPnt.hxx>
#include <ProjLib_Sphere.hxx>
#include <ProjLib_Torus.hxx>

// template related includes
// ./opencascade/ProjLib_SequenceOfHSequenceOfPnt.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ProjLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ProjLib"));


//Python trampoline classes

// classes

    register_default_constructor<ProjLib , shared_ptr<ProjLib>>(m,"ProjLib");

    static_cast<py::class_<ProjLib , shared_ptr<ProjLib>  >>(m.attr("ProjLib"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Project_s",
                    (gp_Pnt2d (*)( const gp_Pln & ,  const gp_Pnt &  ) ) static_cast<gp_Pnt2d (*)( const gp_Pln & ,  const gp_Pnt &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Pl"),  py::arg("P"))
        .def_static("Project_s",
                    (gp_Lin2d (*)( const gp_Pln & ,  const gp_Lin &  ) ) static_cast<gp_Lin2d (*)( const gp_Pln & ,  const gp_Lin &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Pl"),  py::arg("L"))
        .def_static("Project_s",
                    (gp_Circ2d (*)( const gp_Pln & ,  const gp_Circ &  ) ) static_cast<gp_Circ2d (*)( const gp_Pln & ,  const gp_Circ &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Pl"),  py::arg("C"))
        .def_static("Project_s",
                    (gp_Elips2d (*)( const gp_Pln & ,  const gp_Elips &  ) ) static_cast<gp_Elips2d (*)( const gp_Pln & ,  const gp_Elips &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Pl"),  py::arg("E"))
        .def_static("Project_s",
                    (gp_Parab2d (*)( const gp_Pln & ,  const gp_Parab &  ) ) static_cast<gp_Parab2d (*)( const gp_Pln & ,  const gp_Parab &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Pl"),  py::arg("P"))
        .def_static("Project_s",
                    (gp_Hypr2d (*)( const gp_Pln & ,  const gp_Hypr &  ) ) static_cast<gp_Hypr2d (*)( const gp_Pln & ,  const gp_Hypr &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Pl"),  py::arg("H"))
        .def_static("Project_s",
                    (gp_Pnt2d (*)( const gp_Cylinder & ,  const gp_Pnt &  ) ) static_cast<gp_Pnt2d (*)( const gp_Cylinder & ,  const gp_Pnt &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Cy"),  py::arg("P"))
        .def_static("Project_s",
                    (gp_Lin2d (*)( const gp_Cylinder & ,  const gp_Lin &  ) ) static_cast<gp_Lin2d (*)( const gp_Cylinder & ,  const gp_Lin &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Cy"),  py::arg("L"))
        .def_static("Project_s",
                    (gp_Lin2d (*)( const gp_Cylinder & ,  const gp_Circ &  ) ) static_cast<gp_Lin2d (*)( const gp_Cylinder & ,  const gp_Circ &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Cy"),  py::arg("Ci"))
        .def_static("Project_s",
                    (gp_Pnt2d (*)( const gp_Cone & ,  const gp_Pnt &  ) ) static_cast<gp_Pnt2d (*)( const gp_Cone & ,  const gp_Pnt &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Co"),  py::arg("P"))
        .def_static("Project_s",
                    (gp_Lin2d (*)( const gp_Cone & ,  const gp_Lin &  ) ) static_cast<gp_Lin2d (*)( const gp_Cone & ,  const gp_Lin &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Co"),  py::arg("L"))
        .def_static("Project_s",
                    (gp_Lin2d (*)( const gp_Cone & ,  const gp_Circ &  ) ) static_cast<gp_Lin2d (*)( const gp_Cone & ,  const gp_Circ &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Co"),  py::arg("Ci"))
        .def_static("Project_s",
                    (gp_Pnt2d (*)( const gp_Sphere & ,  const gp_Pnt &  ) ) static_cast<gp_Pnt2d (*)( const gp_Sphere & ,  const gp_Pnt &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Sp"),  py::arg("P"))
        .def_static("Project_s",
                    (gp_Lin2d (*)( const gp_Sphere & ,  const gp_Circ &  ) ) static_cast<gp_Lin2d (*)( const gp_Sphere & ,  const gp_Circ &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("Sp"),  py::arg("Ci"))
        .def_static("Project_s",
                    (gp_Pnt2d (*)( const gp_Torus & ,  const gp_Pnt &  ) ) static_cast<gp_Pnt2d (*)( const gp_Torus & ,  const gp_Pnt &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("To"),  py::arg("P"))
        .def_static("Project_s",
                    (gp_Lin2d (*)( const gp_Torus & ,  const gp_Circ &  ) ) static_cast<gp_Lin2d (*)( const gp_Torus & ,  const gp_Circ &  ) >(&ProjLib::Project),
                    R"#(None)#"  , py::arg("To"),  py::arg("Ci"))
        .def_static("MakePCurveOfType_s",
                    (void (*)( const ProjLib_ProjectedCurve & ,  opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (*)( const ProjLib_ProjectedCurve & ,  opencascade::handle<Geom2d_Curve> &  ) >(&ProjLib::MakePCurveOfType),
                    R"#(Make empty P-Curve <aC> of relevant to <PC> type)#"  , py::arg("PC"),  py::arg("aC"))
        .def_static("IsAnaSurf_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&ProjLib::IsAnaSurf),
                    R"#(Returns "true" if surface is analytical, that is it can be Plane, Cylinder, Cone, Sphere, Torus. For all other types of surface method returns "false".)#"  , py::arg("theAS"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_CompProjectedCurve , shared_ptr<ProjLib_CompProjectedCurve>  , Adaptor2d_Curve2d >>(m.attr("ProjLib_CompProjectedCurve"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("C"),  py::arg("TolU"),  py::arg("TolV") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("C"),  py::arg("TolU"),  py::arg("TolV"),  py::arg("MaxDist") )
    // methods
        .def("Init",
             (void (ProjLib_CompProjectedCurve::*)() ) static_cast<void (ProjLib_CompProjectedCurve::*)() >(&ProjLib_CompProjectedCurve::Init),
             R"#(computes a set of projected point and determine the continuous parts of the projected curves. The points corresponding to a projection on the bounds of the surface are included in this set of points.)#" )
        .def("Load",
             (void (ProjLib_CompProjectedCurve::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (ProjLib_CompProjectedCurve::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&ProjLib_CompProjectedCurve::Load),
             R"#(Changes the surface.)#"  , py::arg("S"))
        .def("Load",
             (void (ProjLib_CompProjectedCurve::*)( const opencascade::handle<Adaptor3d_HCurve> &  ) ) static_cast<void (ProjLib_CompProjectedCurve::*)( const opencascade::handle<Adaptor3d_HCurve> &  ) >(&ProjLib_CompProjectedCurve::Load),
             R"#(Changes the curve.)#"  , py::arg("C"))
        .def("GetSurface",
             (const opencascade::handle<Adaptor3d_HSurface> & (ProjLib_CompProjectedCurve::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (ProjLib_CompProjectedCurve::*)() const>(&ProjLib_CompProjectedCurve::GetSurface),
             R"#(None)#" )
        .def("GetCurve",
             (const opencascade::handle<Adaptor3d_HCurve> & (ProjLib_CompProjectedCurve::*)() const) static_cast<const opencascade::handle<Adaptor3d_HCurve> & (ProjLib_CompProjectedCurve::*)() const>(&ProjLib_CompProjectedCurve::GetCurve),
             R"#(None)#" )
        .def("NbCurves",
             (Standard_Integer (ProjLib_CompProjectedCurve::*)() const) static_cast<Standard_Integer (ProjLib_CompProjectedCurve::*)() const>(&ProjLib_CompProjectedCurve::NbCurves),
             R"#(returns the number of continuous part of the projected curve)#" )
        .def("IsSinglePnt",
             (Standard_Boolean (ProjLib_CompProjectedCurve::*)( const Standard_Integer ,  gp_Pnt2d &  ) const) static_cast<Standard_Boolean (ProjLib_CompProjectedCurve::*)( const Standard_Integer ,  gp_Pnt2d &  ) const>(&ProjLib_CompProjectedCurve::IsSinglePnt),
             R"#(returns True if part of projection with number Index is a single point and writes its coordinates in P)#"  , py::arg("Index"),  py::arg("P"))
        .def("IsUIso",
             (Standard_Boolean (ProjLib_CompProjectedCurve::*)( const Standard_Integer ,  Standard_Real &  ) const) static_cast<Standard_Boolean (ProjLib_CompProjectedCurve::*)( const Standard_Integer ,  Standard_Real &  ) const>(&ProjLib_CompProjectedCurve::IsUIso),
             R"#(returns True if part of projection with number Index is an u-isoparametric curve of input surface)#"  , py::arg("Index"),  py::arg("U"))
        .def("IsVIso",
             (Standard_Boolean (ProjLib_CompProjectedCurve::*)( const Standard_Integer ,  Standard_Real &  ) const) static_cast<Standard_Boolean (ProjLib_CompProjectedCurve::*)( const Standard_Integer ,  Standard_Real &  ) const>(&ProjLib_CompProjectedCurve::IsVIso),
             R"#(returns True if part of projection with number Index is an v-isoparametric curve of input surface)#"  , py::arg("Index"),  py::arg("V"))
        .def("Value",
             (gp_Pnt2d (ProjLib_CompProjectedCurve::*)( const Standard_Real  ) const) static_cast<gp_Pnt2d (ProjLib_CompProjectedCurve::*)( const Standard_Real  ) const>(&ProjLib_CompProjectedCurve::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (ProjLib_CompProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (ProjLib_CompProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&ProjLib_CompProjectedCurve::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (ProjLib_CompProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (ProjLib_CompProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&ProjLib_CompProjectedCurve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (ProjLib_CompProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (ProjLib_CompProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&ProjLib_CompProjectedCurve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("DN",
             (gp_Vec2d (ProjLib_CompProjectedCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (ProjLib_CompProjectedCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&ProjLib_CompProjectedCurve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if N < 1. Raised if N > 2.)#"  , py::arg("U"),  py::arg("N"))
        .def("FirstParameter",
             (Standard_Real (ProjLib_CompProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_CompProjectedCurve::*)() const>(&ProjLib_CompProjectedCurve::FirstParameter),
             R"#(Returns the first parameter of the curve C which has a projection on S.)#" )
        .def("LastParameter",
             (Standard_Real (ProjLib_CompProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_CompProjectedCurve::*)() const>(&ProjLib_CompProjectedCurve::LastParameter),
             R"#(Returns the last parameter of the curve C which has a projection on S.)#" )
        .def("NbIntervals",
             (Standard_Integer (ProjLib_CompProjectedCurve::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (ProjLib_CompProjectedCurve::*)( const GeomAbs_Shape  ) const>(&ProjLib_CompProjectedCurve::NbIntervals),
             R"#(Returns the number of intervals which define an S continuous part of the projected curve)#"  , py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor2d_HCurve2d> (ProjLib_CompProjectedCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (ProjLib_CompProjectedCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&ProjLib_CompProjectedCurve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 2d points confusion. If <First> >= <Last>)#"  , py::arg("FirstParam"),  py::arg("LastParam"),  py::arg("Tol"))
        .def("Intervals",
             (void (ProjLib_CompProjectedCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (ProjLib_CompProjectedCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&ProjLib_CompProjectedCurve::Intervals),
             R"#(Returns the parameters corresponding to S discontinuities.)#"  , py::arg("T"),  py::arg("S"))
        .def("MaxDistance",
             (Standard_Real (ProjLib_CompProjectedCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ProjLib_CompProjectedCurve::*)( const Standard_Integer  ) const>(&ProjLib_CompProjectedCurve::MaxDistance),
             R"#(returns the maximum distance between curve to project and surface)#"  , py::arg("Index"))
        .def("GetSequence",
             (const opencascade::handle<ProjLib_HSequenceOfHSequenceOfPnt> & (ProjLib_CompProjectedCurve::*)() const) static_cast<const opencascade::handle<ProjLib_HSequenceOfHSequenceOfPnt> & (ProjLib_CompProjectedCurve::*)() const>(&ProjLib_CompProjectedCurve::GetSequence),
             R"#(None)#" )
        .def("GetType",
             (GeomAbs_CurveType (ProjLib_CompProjectedCurve::*)() const) static_cast<GeomAbs_CurveType (ProjLib_CompProjectedCurve::*)() const>(&ProjLib_CompProjectedCurve::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
    // methods using call by reference i.s.o. return
        .def("GetTolerance",
             []( ProjLib_CompProjectedCurve &self   ){ Standard_Real  TolU; Standard_Real  TolV; self.GetTolerance(TolU,TolV); return std::make_tuple(TolU,TolV); },
             R"#(None)#" )
        .def("Bounds",
             []( ProjLib_CompProjectedCurve &self , const Standard_Integer Index ){ Standard_Real  Udeb; Standard_Real  Ufin; self.Bounds(Index,Udeb,Ufin); return std::make_tuple(Udeb,Ufin); },
             R"#(returns the bounds of the continuous part corresponding to Index)#"  , py::arg("Index"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_ComputeApprox , shared_ptr<ProjLib_ComputeApprox>  >>(m.attr("ProjLib_ComputeApprox"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("C"),  py::arg("S"),  py::arg("Tol") )
    // methods
        .def("Perform",
             (void (ProjLib_ComputeApprox::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (ProjLib_ComputeApprox::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const opencascade::handle<Adaptor3d_HSurface> &  ) >(&ProjLib_ComputeApprox::Perform),
             R"#(Performs projecting. In case of approximation current values of parameters are used: default values or set by corresponding methods Set...)#"  , py::arg("C"),  py::arg("S"))
        .def("SetTolerance",
             (void (ProjLib_ComputeApprox::*)( const Standard_Real  ) ) static_cast<void (ProjLib_ComputeApprox::*)( const Standard_Real  ) >(&ProjLib_ComputeApprox::SetTolerance),
             R"#(Set tolerance of approximation. Default value is Precision::Confusion().)#"  , py::arg("theTolerance"))
        .def("SetDegree",
             (void (ProjLib_ComputeApprox::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (ProjLib_ComputeApprox::*)( const Standard_Integer ,  const Standard_Integer  ) >(&ProjLib_ComputeApprox::SetDegree),
             R"#(Set min and max possible degree of result BSpline curve2d, which is got by approximation. If theDegMin/Max < 0, algorithm uses values that are chosen depending of types curve 3d and surface.)#"  , py::arg("theDegMin"),  py::arg("theDegMax"))
        .def("SetMaxSegments",
             (void (ProjLib_ComputeApprox::*)( const Standard_Integer  ) ) static_cast<void (ProjLib_ComputeApprox::*)( const Standard_Integer  ) >(&ProjLib_ComputeApprox::SetMaxSegments),
             R"#(Set the parameter, which defines maximal value of parametric intervals the projected curve can be cut for approximation. If theMaxSegments < 0, algorithm uses default value = 1000.)#"  , py::arg("theMaxSegments"))
        .def("SetBndPnt",
             (void (ProjLib_ComputeApprox::*)( const AppParCurves_Constraint  ) ) static_cast<void (ProjLib_ComputeApprox::*)( const AppParCurves_Constraint  ) >(&ProjLib_ComputeApprox::SetBndPnt),
             R"#(Set the parameter, which defines type of boundary condition between segments during approximation. It can be AppParCurves_PassPoint or AppParCurves_TangencyPoint. Default value is AppParCurves_TangencyPoint;)#"  , py::arg("theBndPnt"))
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ComputeApprox::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ComputeApprox::*)() const>(&ProjLib_ComputeApprox::BSpline),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom2d_BezierCurve> (ProjLib_ComputeApprox::*)() const) static_cast<opencascade::handle<Geom2d_BezierCurve> (ProjLib_ComputeApprox::*)() const>(&ProjLib_ComputeApprox::Bezier),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (ProjLib_ComputeApprox::*)() const) static_cast<Standard_Real (ProjLib_ComputeApprox::*)() const>(&ProjLib_ComputeApprox::Tolerance),
             R"#(returns the reached Tolerance.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_ComputeApproxOnPolarSurface , shared_ptr<ProjLib_ComputeApproxOnPolarSurface>  >>(m.attr("ProjLib_ComputeApproxOnPolarSurface"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("C"),  py::arg("S"),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-4) )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("InitCurve2d"),  py::arg("C"),  py::arg("S"),  py::arg("Tol") )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HCurve> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("InitCurve2d"),  py::arg("InitCurve2dBis"),  py::arg("C"),  py::arg("S"),  py::arg("Tol") )
    // methods
        .def("SetDegree",
             (void (ProjLib_ComputeApproxOnPolarSurface::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (ProjLib_ComputeApproxOnPolarSurface::*)( const Standard_Integer ,  const Standard_Integer  ) >(&ProjLib_ComputeApproxOnPolarSurface::SetDegree),
             R"#(Set min and max possible degree of result BSpline curve2d, which is got by approximation. If theDegMin/Max < 0, algorithm uses values min = 2, max = 8.)#"  , py::arg("theDegMin"),  py::arg("theDegMax"))
        .def("SetMaxSegments",
             (void (ProjLib_ComputeApproxOnPolarSurface::*)( const Standard_Integer  ) ) static_cast<void (ProjLib_ComputeApproxOnPolarSurface::*)( const Standard_Integer  ) >(&ProjLib_ComputeApproxOnPolarSurface::SetMaxSegments),
             R"#(Set the parameter, which defines maximal value of parametric intervals the projected curve can be cut for approximation. If theMaxSegments < 0, algorithm uses default value = 1000.)#"  , py::arg("theMaxSegments"))
        .def("SetBndPnt",
             (void (ProjLib_ComputeApproxOnPolarSurface::*)( const AppParCurves_Constraint  ) ) static_cast<void (ProjLib_ComputeApproxOnPolarSurface::*)( const AppParCurves_Constraint  ) >(&ProjLib_ComputeApproxOnPolarSurface::SetBndPnt),
             R"#(Set the parameter, which defines type of boundary condition between segments during approximation. It can be AppParCurves_PassPoint or AppParCurves_TangencyPoint. Default value is AppParCurves_TangencyPoint.)#"  , py::arg("theBndPnt"))
        .def("SetMaxDist",
             (void (ProjLib_ComputeApproxOnPolarSurface::*)( const Standard_Real  ) ) static_cast<void (ProjLib_ComputeApproxOnPolarSurface::*)( const Standard_Real  ) >(&ProjLib_ComputeApproxOnPolarSurface::SetMaxDist),
             R"#(Set the parameter, which defines maximal possible distance between projected curve and surface. It is used only for projecting on not analytical surfaces. If theMaxDist < 0, algoritm uses default value 100.*Tolerance. If real distance between curve and surface more then theMaxDist, algorithm stops working.)#"  , py::arg("theMaxDist"))
        .def("SetTolerance",
             (void (ProjLib_ComputeApproxOnPolarSurface::*)( const Standard_Real  ) ) static_cast<void (ProjLib_ComputeApproxOnPolarSurface::*)( const Standard_Real  ) >(&ProjLib_ComputeApproxOnPolarSurface::SetTolerance),
             R"#(Set the tolerance used to project the curve on the surface. Default value is Precision::Approximation().)#"  , py::arg("theTolerance"))
        .def("Perform",
             (void (ProjLib_ComputeApproxOnPolarSurface::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (ProjLib_ComputeApproxOnPolarSurface::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const opencascade::handle<Adaptor3d_HSurface> &  ) >(&ProjLib_ComputeApproxOnPolarSurface::Perform),
             R"#(Method, which performs projecting, using default values of parameters or they must be set by corresponding methods before using.)#"  , py::arg("C"),  py::arg("S"))
        .def("Perform",
             (opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ComputeApproxOnPolarSurface::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const opencascade::handle<Adaptor3d_HCurve> & ,  const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ComputeApproxOnPolarSurface::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const opencascade::handle<Adaptor3d_HCurve> & ,  const opencascade::handle<Adaptor3d_HSurface> &  ) >(&ProjLib_ComputeApproxOnPolarSurface::Perform),
             R"#(Method, which performs projecting, using default values of parameters or they must be set by corresponding methods before using. Parameter InitCurve2d is any rough estimation of 2d result curve.)#"  , py::arg("InitCurve2d"),  py::arg("C"),  py::arg("S"))
        .def("BuildInitialCurve2d",
             (opencascade::handle<Adaptor2d_HCurve2d> (ProjLib_ComputeApproxOnPolarSurface::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (ProjLib_ComputeApproxOnPolarSurface::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const opencascade::handle<Adaptor3d_HSurface> &  ) >(&ProjLib_ComputeApproxOnPolarSurface::BuildInitialCurve2d),
             R"#(Builds initial 2d curve as BSpline with degree = 1 using Extrema algoritm. Method is used in method Perform(...).)#"  , py::arg("Curve"),  py::arg("S"))
        .def("ProjectUsingInitialCurve2d",
             (opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ComputeApproxOnPolarSurface::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ComputeApproxOnPolarSurface::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&ProjLib_ComputeApproxOnPolarSurface::ProjectUsingInitialCurve2d),
             R"#(Method, which performs projecting. Method is used in method Perform(...).)#"  , py::arg("Curve"),  py::arg("S"),  py::arg("InitCurve2d"))
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ComputeApproxOnPolarSurface::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ComputeApproxOnPolarSurface::*)() const>(&ProjLib_ComputeApproxOnPolarSurface::BSpline),
             R"#(Returns result curve 2d.)#" )
        .def("Curve2d",
             (opencascade::handle<Geom2d_Curve> (ProjLib_ComputeApproxOnPolarSurface::*)() const) static_cast<opencascade::handle<Geom2d_Curve> (ProjLib_ComputeApproxOnPolarSurface::*)() const>(&ProjLib_ComputeApproxOnPolarSurface::Curve2d),
             R"#(Returns second 2d curve.)#" )
        .def("IsDone",
             (Standard_Boolean (ProjLib_ComputeApproxOnPolarSurface::*)() const) static_cast<Standard_Boolean (ProjLib_ComputeApproxOnPolarSurface::*)() const>(&ProjLib_ComputeApproxOnPolarSurface::IsDone),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (ProjLib_ComputeApproxOnPolarSurface::*)() const) static_cast<Standard_Real (ProjLib_ComputeApproxOnPolarSurface::*)() const>(&ProjLib_ComputeApproxOnPolarSurface::Tolerance),
             R"#(returns the reached Tolerance.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_HCompProjectedCurve ,opencascade::handle<ProjLib_HCompProjectedCurve>  , Adaptor2d_HCurve2d >>(m.attr("ProjLib_HCompProjectedCurve"))
        .def(py::init<  >()  )
        .def(py::init< const ProjLib_CompProjectedCurve & >()  , py::arg("C") )
    // methods
        .def("Set",
             (void (ProjLib_HCompProjectedCurve::*)( const ProjLib_CompProjectedCurve &  ) ) static_cast<void (ProjLib_HCompProjectedCurve::*)( const ProjLib_CompProjectedCurve &  ) >(&ProjLib_HCompProjectedCurve::Set),
             R"#(Sets the field of the GenHCurve2d.)#"  , py::arg("C"))
        .def("Curve2d",
             (const Adaptor2d_Curve2d & (ProjLib_HCompProjectedCurve::*)() const) static_cast<const Adaptor2d_Curve2d & (ProjLib_HCompProjectedCurve::*)() const>(&ProjLib_HCompProjectedCurve::Curve2d),
             R"#(Returns the curve used to create the GenHCurve2d. This is redefined from HCurve2d, cannot be inline.)#" )
        .def("ChangeCurve2d",
             (ProjLib_CompProjectedCurve & (ProjLib_HCompProjectedCurve::*)() ) static_cast<ProjLib_CompProjectedCurve & (ProjLib_HCompProjectedCurve::*)() >(&ProjLib_HCompProjectedCurve::ChangeCurve2d),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ProjLib_HCompProjectedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ProjLib_HCompProjectedCurve::*)() const>(&ProjLib_HCompProjectedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ProjLib_HCompProjectedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ProjLib_HCompProjectedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_HProjectedCurve ,opencascade::handle<ProjLib_HProjectedCurve>  , Adaptor2d_HCurve2d >>(m.attr("ProjLib_HProjectedCurve"))
        .def(py::init<  >()  )
        .def(py::init< const ProjLib_ProjectedCurve & >()  , py::arg("C") )
    // methods
        .def("Set",
             (void (ProjLib_HProjectedCurve::*)( const ProjLib_ProjectedCurve &  ) ) static_cast<void (ProjLib_HProjectedCurve::*)( const ProjLib_ProjectedCurve &  ) >(&ProjLib_HProjectedCurve::Set),
             R"#(Sets the field of the GenHCurve2d.)#"  , py::arg("C"))
        .def("Curve2d",
             (const Adaptor2d_Curve2d & (ProjLib_HProjectedCurve::*)() const) static_cast<const Adaptor2d_Curve2d & (ProjLib_HProjectedCurve::*)() const>(&ProjLib_HProjectedCurve::Curve2d),
             R"#(Returns the curve used to create the GenHCurve2d. This is redefined from HCurve2d, cannot be inline.)#" )
        .def("ChangeCurve2d",
             (ProjLib_ProjectedCurve & (ProjLib_HProjectedCurve::*)() ) static_cast<ProjLib_ProjectedCurve & (ProjLib_HProjectedCurve::*)() >(&ProjLib_HProjectedCurve::ChangeCurve2d),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ProjLib_HProjectedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ProjLib_HProjectedCurve::*)() const>(&ProjLib_HProjectedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ProjLib_HProjectedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ProjLib_HProjectedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_HSequenceOfHSequenceOfPnt ,opencascade::handle<ProjLib_HSequenceOfHSequenceOfPnt>  , ProjLib_SequenceOfHSequenceOfPnt , Standard_Transient >>(m.attr("ProjLib_HSequenceOfHSequenceOfPnt"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt> > & >()  , py::arg("theOther") )
    // methods
        .def("Sequence",
             (const ProjLib_SequenceOfHSequenceOfPnt & (ProjLib_HSequenceOfHSequenceOfPnt::*)() const) static_cast<const ProjLib_SequenceOfHSequenceOfPnt & (ProjLib_HSequenceOfHSequenceOfPnt::*)() const>(&ProjLib_HSequenceOfHSequenceOfPnt::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (ProjLib_HSequenceOfHSequenceOfPnt::*)(  const opencascade::handle<TColgp_HSequenceOfPnt> &  ) ) static_cast<void (ProjLib_HSequenceOfHSequenceOfPnt::*)(  const opencascade::handle<TColgp_HSequenceOfPnt> &  ) >(&ProjLib_HSequenceOfHSequenceOfPnt::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (ProjLib_HSequenceOfHSequenceOfPnt::*)( NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt> > &  ) ) static_cast<void (ProjLib_HSequenceOfHSequenceOfPnt::*)( NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt> > &  ) >(&ProjLib_HSequenceOfHSequenceOfPnt::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (ProjLib_SequenceOfHSequenceOfPnt & (ProjLib_HSequenceOfHSequenceOfPnt::*)() ) static_cast<ProjLib_SequenceOfHSequenceOfPnt & (ProjLib_HSequenceOfHSequenceOfPnt::*)() >(&ProjLib_HSequenceOfHSequenceOfPnt::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ProjLib_HSequenceOfHSequenceOfPnt::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ProjLib_HSequenceOfHSequenceOfPnt::*)() const>(&ProjLib_HSequenceOfHSequenceOfPnt::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ProjLib_HSequenceOfHSequenceOfPnt::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ProjLib_HSequenceOfHSequenceOfPnt::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_PrjFunc , shared_ptr<ProjLib_PrjFunc>  , math_FunctionSetWithDerivatives >>(m.attr("ProjLib_PrjFunc"))
    // methods
        .def("NbVariables",
             (Standard_Integer (ProjLib_PrjFunc::*)() const) static_cast<Standard_Integer (ProjLib_PrjFunc::*)() const>(&ProjLib_PrjFunc::NbVariables),
             R"#(returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (ProjLib_PrjFunc::*)() const) static_cast<Standard_Integer (ProjLib_PrjFunc::*)() const>(&ProjLib_PrjFunc::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & ,  math_Vector &  ) >(&ProjLib_PrjFunc::Value),
             R"#(computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & ,  math_Matrix &  ) >(&ProjLib_PrjFunc::Derivatives),
             R"#(returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) ) static_cast<Standard_Boolean (ProjLib_PrjFunc::*)( const math_Vector & ,  math_Vector & ,  math_Matrix &  ) >(&ProjLib_PrjFunc::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Solution",
             (gp_Pnt2d (ProjLib_PrjFunc::*)() const) static_cast<gp_Pnt2d (ProjLib_PrjFunc::*)() const>(&ProjLib_PrjFunc::Solution),
             R"#(returns point on surface)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_PrjResolve , shared_ptr<ProjLib_PrjResolve>  >>(m.attr("ProjLib_PrjResolve"))
        .def(py::init< const Adaptor3d_Curve &,const Adaptor3d_Surface &,const Standard_Integer >()  , py::arg("C"),  py::arg("S"),  py::arg("Fix") )
    // methods
        .def("Perform",
             (void (ProjLib_PrjResolve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt2d & ,  const gp_Pnt2d & ,  const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (ProjLib_PrjResolve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt2d & ,  const gp_Pnt2d & ,  const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) >(&ProjLib_PrjResolve::Perform),
             R"#(Calculates the ort from C(t) to S with a close point. The close point is defined by the parameter values U0 and V0. The function F(u,v)=distance(S(u,v),C(t)) has an extremum when gradient(F)=0. The algorithm searchs a zero near the close point.)#"  , py::arg("t"),  py::arg("U"),  py::arg("V"),  py::arg("Tol"),  py::arg("Inf"),  py::arg("Sup"),  py::arg("FTol")=static_cast<const Standard_Real>(- 1),  py::arg("StrictInside")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (ProjLib_PrjResolve::*)() const) static_cast<Standard_Boolean (ProjLib_PrjResolve::*)() const>(&ProjLib_PrjResolve::IsDone),
             R"#(Returns True if the distance is found.)#" )
        .def("Solution",
             (gp_Pnt2d (ProjLib_PrjResolve::*)() const) static_cast<gp_Pnt2d (ProjLib_PrjResolve::*)() const>(&ProjLib_PrjResolve::Solution),
             R"#(Returns the point of the extremum distance.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_ProjectOnPlane , shared_ptr<ProjLib_ProjectOnPlane>  , Adaptor3d_Curve >>(m.attr("ProjLib_ProjectOnPlane"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax3 & >()  , py::arg("Pl") )
        .def(py::init< const gp_Ax3 &,const gp_Dir & >()  , py::arg("Pl"),  py::arg("D") )
    // methods
        .def("Load",
             (void (ProjLib_ProjectOnPlane::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (ProjLib_ProjectOnPlane::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&ProjLib_ProjectOnPlane::Load),
             R"#(Sets the Curve and perform the projection. if <KeepParametrization> is true, the parametrization of the Projected Curve <PC> will be the same as the parametrization of the initial curve <C>. It meens: proj(C(u)) = PC(u) for each u. Otherwize, the parametrization may change.)#"  , py::arg("C"),  py::arg("Tolerance"),  py::arg("KeepParametrization")=static_cast<const Standard_Boolean>(Standard_True))
        .def("GetPlane",
             (const gp_Ax3 & (ProjLib_ProjectOnPlane::*)() const) static_cast<const gp_Ax3 & (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::GetPlane),
             R"#(None)#" )
        .def("GetDirection",
             (const gp_Dir & (ProjLib_ProjectOnPlane::*)() const) static_cast<const gp_Dir & (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::GetDirection),
             R"#(None)#" )
        .def("GetCurve",
             (const opencascade::handle<Adaptor3d_HCurve> & (ProjLib_ProjectOnPlane::*)() const) static_cast<const opencascade::handle<Adaptor3d_HCurve> & (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::GetCurve),
             R"#(None)#" )
        .def("GetResult",
             (const opencascade::handle<GeomAdaptor_HCurve> & (ProjLib_ProjectOnPlane::*)() const) static_cast<const opencascade::handle<GeomAdaptor_HCurve> & (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::GetResult),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Real (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Real (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (ProjLib_ProjectOnPlane::*)() const) static_cast<GeomAbs_Shape (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (ProjLib_ProjectOnPlane::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (ProjLib_ProjectOnPlane::*)( const GeomAbs_Shape  ) const>(&ProjLib_ProjectOnPlane::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("Intervals",
             (void (ProjLib_ProjectOnPlane::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (ProjLib_ProjectOnPlane::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&ProjLib_ProjectOnPlane::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&ProjLib_ProjectOnPlane::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Real (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (ProjLib_ProjectOnPlane::*)( const Standard_Real  ) const) static_cast<gp_Pnt (ProjLib_ProjectOnPlane::*)( const Standard_Real  ) const>(&ProjLib_ProjectOnPlane::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  gp_Pnt &  ) const>(&ProjLib_ProjectOnPlane::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&ProjLib_ProjectOnPlane::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&ProjLib_ProjectOnPlane::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&ProjLib_ProjectOnPlane::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (ProjLib_ProjectOnPlane::*)( const Standard_Real ,  const Standard_Integer  ) const>(&ProjLib_ProjectOnPlane::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (ProjLib_ProjectOnPlane::*)( const Standard_Real  ) const) static_cast<Standard_Real (ProjLib_ProjectOnPlane::*)( const Standard_Real  ) const>(&ProjLib_ProjectOnPlane::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (ProjLib_ProjectOnPlane::*)() const) static_cast<GeomAbs_CurveType (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin (ProjLib_ProjectOnPlane::*)() const) static_cast<gp_Lin (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (ProjLib_ProjectOnPlane::*)() const) static_cast<gp_Circ (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (ProjLib_ProjectOnPlane::*)() const) static_cast<gp_Elips (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (ProjLib_ProjectOnPlane::*)() const) static_cast<gp_Hypr (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (ProjLib_ProjectOnPlane::*)() const) static_cast<gp_Parab (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Integer (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Integer (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (ProjLib_ProjectOnPlane::*)() const) static_cast<Standard_Integer (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (ProjLib_ProjectOnPlane::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::Bezier),
             R"#(Warning ! this will NOT make a copy of the Bezier Curve : If you want to modify the Curve please make a copy yourself Also it will NOT trim the surface to myFirst/Last.)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (ProjLib_ProjectOnPlane::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (ProjLib_ProjectOnPlane::*)() const>(&ProjLib_ProjectOnPlane::BSpline),
             R"#(Warning ! this will NOT make a copy of the BSpline Curve : If you want to modify the Curve please make a copy yourself Also it will NOT trim the surface to myFirst/Last.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_ProjectOnSurface , shared_ptr<ProjLib_ProjectOnSurface>  >>(m.attr("ProjLib_ProjectOnSurface"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("S") )
    // methods
        .def("Load",
             (void (ProjLib_ProjectOnSurface::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const Standard_Real  ) ) static_cast<void (ProjLib_ProjectOnSurface::*)( const opencascade::handle<Adaptor3d_HCurve> & ,  const Standard_Real  ) >(&ProjLib_ProjectOnSurface::Load),
             R"#(Compute the projection of the curve <C> on the Surface.)#"  , py::arg("C"),  py::arg("Tolerance"))
        .def("IsDone",
             (Standard_Boolean (ProjLib_ProjectOnSurface::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectOnSurface::*)() const>(&ProjLib_ProjectOnSurface::IsDone),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (ProjLib_ProjectOnSurface::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (ProjLib_ProjectOnSurface::*)() const>(&ProjLib_ProjectOnSurface::BSpline),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_ProjectedCurve , shared_ptr<ProjLib_ProjectedCurve>  , Adaptor2d_Curve2d >>(m.attr("ProjLib_ProjectedCurve"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("S") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("S"),  py::arg("C") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Real >()  , py::arg("S"),  py::arg("C"),  py::arg("Tol") )
    // methods
        .def("Load",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Real  ) ) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Real  ) >(&ProjLib_ProjectedCurve::Load),
             R"#(Changes the tolerance used to project the curve on the surface)#"  , py::arg("Tolerance"))
        .def("Load",
             (void (ProjLib_ProjectedCurve::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (ProjLib_ProjectedCurve::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&ProjLib_ProjectedCurve::Load),
             R"#(Changes the Surface.)#"  , py::arg("S"))
        .def("Perform",
             (void (ProjLib_ProjectedCurve::*)( const opencascade::handle<Adaptor3d_HCurve> &  ) ) static_cast<void (ProjLib_ProjectedCurve::*)( const opencascade::handle<Adaptor3d_HCurve> &  ) >(&ProjLib_ProjectedCurve::Perform),
             R"#(Performs projecting for given curve. If projecting uses approximation, approximation parameters can be set before by corresponding methods SetDegree(...), SetMaxSegmets(...), SetBndPnt(...), SetMaxDist(...))#"  , py::arg("C"))
        .def("SetDegree",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Integer ,  const Standard_Integer  ) >(&ProjLib_ProjectedCurve::SetDegree),
             R"#(Set min and max possible degree of result BSpline curve2d, which is got by approximation. If theDegMin/Max < 0, algorithm uses values that are chosen depending of types curve 3d and surface.)#"  , py::arg("theDegMin"),  py::arg("theDegMax"))
        .def("SetMaxSegments",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Integer  ) ) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Integer  ) >(&ProjLib_ProjectedCurve::SetMaxSegments),
             R"#(Set the parameter, which defines maximal value of parametric intervals the projected curve can be cut for approximation. If theMaxSegments < 0, algorithm uses default value = 1000.)#"  , py::arg("theMaxSegments"))
        .def("SetBndPnt",
             (void (ProjLib_ProjectedCurve::*)( const AppParCurves_Constraint  ) ) static_cast<void (ProjLib_ProjectedCurve::*)( const AppParCurves_Constraint  ) >(&ProjLib_ProjectedCurve::SetBndPnt),
             R"#(Set the parameter, which defines type of boundary condition between segments during approximation. It can be AppParCurves_PassPoint or AppParCurves_TangencyPoint. Default value is AppParCurves_TangencyPoint;)#"  , py::arg("theBndPnt"))
        .def("SetMaxDist",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Real  ) ) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Real  ) >(&ProjLib_ProjectedCurve::SetMaxDist),
             R"#(Set the parameter, which degines maximal possible distance between projected curve and surface. It uses only for projecting on not analytical surfaces. If theMaxDist < 0, algoritm uses default value 100.*Tolerance. If real distance between curve and surface more then theMaxDist, algorithm stops working.)#"  , py::arg("theMaxDist"))
        .def("GetSurface",
             (const opencascade::handle<Adaptor3d_HSurface> & (ProjLib_ProjectedCurve::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::GetSurface),
             R"#(None)#" )
        .def("GetCurve",
             (const opencascade::handle<Adaptor3d_HCurve> & (ProjLib_ProjectedCurve::*)() const) static_cast<const opencascade::handle<Adaptor3d_HCurve> & (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::GetCurve),
             R"#(None)#" )
        .def("GetTolerance",
             (Standard_Real (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::GetTolerance),
             R"#(returns the tolerance reached if an approximation is Done.)#" )
        .def("FirstParameter",
             (Standard_Real (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (ProjLib_ProjectedCurve::*)() const) static_cast<GeomAbs_Shape (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (ProjLib_ProjectedCurve::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (ProjLib_ProjectedCurve::*)( const GeomAbs_Shape  ) const>(&ProjLib_ProjectedCurve::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("Intervals",
             (void (ProjLib_ProjectedCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (ProjLib_ProjectedCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&ProjLib_ProjectedCurve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor2d_HCurve2d> (ProjLib_ProjectedCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (ProjLib_ProjectedCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&ProjLib_ProjectedCurve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Real (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (ProjLib_ProjectedCurve::*)( const Standard_Real  ) const) static_cast<gp_Pnt2d (ProjLib_ProjectedCurve::*)( const Standard_Real  ) const>(&ProjLib_ProjectedCurve::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&ProjLib_ProjectedCurve::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&ProjLib_ProjectedCurve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&ProjLib_ProjectedCurve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (ProjLib_ProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (ProjLib_ProjectedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&ProjLib_ProjectedCurve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (ProjLib_ProjectedCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (ProjLib_ProjectedCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&ProjLib_ProjectedCurve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (ProjLib_ProjectedCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (ProjLib_ProjectedCurve::*)( const Standard_Real  ) const>(&ProjLib_ProjectedCurve::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (ProjLib_ProjectedCurve::*)() const) static_cast<GeomAbs_CurveType (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin2d (ProjLib_ProjectedCurve::*)() const) static_cast<gp_Lin2d (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ2d (ProjLib_ProjectedCurve::*)() const) static_cast<gp_Circ2d (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips2d (ProjLib_ProjectedCurve::*)() const) static_cast<gp_Elips2d (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr2d (ProjLib_ProjectedCurve::*)() const) static_cast<gp_Hypr2d (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab2d (ProjLib_ProjectedCurve::*)() const) static_cast<gp_Parab2d (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Integer (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Boolean (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Integer (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (ProjLib_ProjectedCurve::*)() const) static_cast<Standard_Integer (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom2d_BezierCurve> (ProjLib_ProjectedCurve::*)() const) static_cast<opencascade::handle<Geom2d_BezierCurve> (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::Bezier),
             R"#(Warning ! This will NOT make a copy of the -- Bezier Curve - If you want to modify -- the Curve please make a copy yourself -- Also it will NOT trim the surface to -- myFirst/Last.)#" )
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ProjectedCurve::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (ProjLib_ProjectedCurve::*)() const>(&ProjLib_ProjectedCurve::BSpline),
             R"#(Warning ! This will NOT make a copy of the BSpline Curve - If you want to modify the Curve please make a copy yourself Also it will NOT trim the surface to myFirst/Last.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_Projector , shared_ptr<ProjLib_Projector>  >>(m.attr("ProjLib_Projector"))
        .def(py::init<  >()  )
    // methods
        .def("IsDone",
             (Standard_Boolean (ProjLib_Projector::*)() const) static_cast<Standard_Boolean (ProjLib_Projector::*)() const>(&ProjLib_Projector::IsDone),
             R"#(None)#" )
        .def("Done",
             (void (ProjLib_Projector::*)() ) static_cast<void (ProjLib_Projector::*)() >(&ProjLib_Projector::Done),
             R"#(Set isDone = Standard_True;)#" )
        .def("GetType",
             (GeomAbs_CurveType (ProjLib_Projector::*)() const) static_cast<GeomAbs_CurveType (ProjLib_Projector::*)() const>(&ProjLib_Projector::GetType),
             R"#(None)#" )
        .def("SetBSpline",
             (void (ProjLib_Projector::*)( const opencascade::handle<Geom2d_BSplineCurve> &  ) ) static_cast<void (ProjLib_Projector::*)( const opencascade::handle<Geom2d_BSplineCurve> &  ) >(&ProjLib_Projector::SetBSpline),
             R"#(None)#"  , py::arg("C"))
        .def("SetBezier",
             (void (ProjLib_Projector::*)( const opencascade::handle<Geom2d_BezierCurve> &  ) ) static_cast<void (ProjLib_Projector::*)( const opencascade::handle<Geom2d_BezierCurve> &  ) >(&ProjLib_Projector::SetBezier),
             R"#(None)#"  , py::arg("C"))
        .def("SetType",
             (void (ProjLib_Projector::*)( const GeomAbs_CurveType  ) ) static_cast<void (ProjLib_Projector::*)( const GeomAbs_CurveType  ) >(&ProjLib_Projector::SetType),
             R"#(None)#"  , py::arg("Type"))
        .def("IsPeriodic",
             (Standard_Boolean (ProjLib_Projector::*)() const) static_cast<Standard_Boolean (ProjLib_Projector::*)() const>(&ProjLib_Projector::IsPeriodic),
             R"#(None)#" )
        .def("SetPeriodic",
             (void (ProjLib_Projector::*)() ) static_cast<void (ProjLib_Projector::*)() >(&ProjLib_Projector::SetPeriodic),
             R"#(None)#" )
        .def("Line",
             (const gp_Lin2d & (ProjLib_Projector::*)() const) static_cast<const gp_Lin2d & (ProjLib_Projector::*)() const>(&ProjLib_Projector::Line),
             R"#(None)#" )
        .def("Circle",
             (const gp_Circ2d & (ProjLib_Projector::*)() const) static_cast<const gp_Circ2d & (ProjLib_Projector::*)() const>(&ProjLib_Projector::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (const gp_Elips2d & (ProjLib_Projector::*)() const) static_cast<const gp_Elips2d & (ProjLib_Projector::*)() const>(&ProjLib_Projector::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (const gp_Hypr2d & (ProjLib_Projector::*)() const) static_cast<const gp_Hypr2d & (ProjLib_Projector::*)() const>(&ProjLib_Projector::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (const gp_Parab2d & (ProjLib_Projector::*)() const) static_cast<const gp_Parab2d & (ProjLib_Projector::*)() const>(&ProjLib_Projector::Parabola),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom2d_BezierCurve> (ProjLib_Projector::*)() const) static_cast<opencascade::handle<Geom2d_BezierCurve> (ProjLib_Projector::*)() const>(&ProjLib_Projector::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (ProjLib_Projector::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (ProjLib_Projector::*)() const>(&ProjLib_Projector::BSpline),
             R"#(None)#" )
        .def("Project",
             (void (ProjLib_Projector::*)( const gp_Lin &  ) ) static_cast<void (ProjLib_Projector::*)( const gp_Lin &  ) >(&ProjLib_Projector::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Projector::*)( const gp_Circ &  ) ) static_cast<void (ProjLib_Projector::*)( const gp_Circ &  ) >(&ProjLib_Projector::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Projector::*)( const gp_Elips &  ) ) static_cast<void (ProjLib_Projector::*)( const gp_Elips &  ) >(&ProjLib_Projector::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Projector::*)( const gp_Parab &  ) ) static_cast<void (ProjLib_Projector::*)( const gp_Parab &  ) >(&ProjLib_Projector::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Projector::*)( const gp_Hypr &  ) ) static_cast<void (ProjLib_Projector::*)( const gp_Hypr &  ) >(&ProjLib_Projector::Project),
             R"#(None)#"  , py::arg("H"))
        .def("UFrame",
             (void (ProjLib_Projector::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ProjLib_Projector::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&ProjLib_Projector::UFrame),
             R"#(Translates the 2d curve to set the part of the curve [CFirst, CLast] in the range [ UFirst, UFirst + Period [)#"  , py::arg("CFirst"),  py::arg("CLast"),  py::arg("UFirst"),  py::arg("Period"))
        .def("VFrame",
             (void (ProjLib_Projector::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ProjLib_Projector::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&ProjLib_Projector::VFrame),
             R"#(Translates the 2d curve to set the part of the curve [CFirst, CLast] in the range [ VFirst, VFirst + Period [)#"  , py::arg("CFirst"),  py::arg("CLast"),  py::arg("VFirst"),  py::arg("Period"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_Cone , shared_ptr<ProjLib_Cone>  , ProjLib_Projector >>(m.attr("ProjLib_Cone"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Cone & >()  , py::arg("Co") )
        .def(py::init< const gp_Cone &,const gp_Lin & >()  , py::arg("Co"),  py::arg("L") )
        .def(py::init< const gp_Cone &,const gp_Circ & >()  , py::arg("Co"),  py::arg("C") )
    // methods
        .def("Init",
             (void (ProjLib_Cone::*)( const gp_Cone &  ) ) static_cast<void (ProjLib_Cone::*)( const gp_Cone &  ) >(&ProjLib_Cone::Init),
             R"#(None)#"  , py::arg("Co"))
        .def("Project",
             (void (ProjLib_Cone::*)( const gp_Lin &  ) ) static_cast<void (ProjLib_Cone::*)( const gp_Lin &  ) >(&ProjLib_Cone::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Cone::*)( const gp_Circ &  ) ) static_cast<void (ProjLib_Cone::*)( const gp_Circ &  ) >(&ProjLib_Cone::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Cone::*)( const gp_Elips &  ) ) static_cast<void (ProjLib_Cone::*)( const gp_Elips &  ) >(&ProjLib_Cone::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Cone::*)( const gp_Parab &  ) ) static_cast<void (ProjLib_Cone::*)( const gp_Parab &  ) >(&ProjLib_Cone::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Cone::*)( const gp_Hypr &  ) ) static_cast<void (ProjLib_Cone::*)( const gp_Hypr &  ) >(&ProjLib_Cone::Project),
             R"#(None)#"  , py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_Cylinder , shared_ptr<ProjLib_Cylinder>  , ProjLib_Projector >>(m.attr("ProjLib_Cylinder"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Cylinder & >()  , py::arg("Cyl") )
        .def(py::init< const gp_Cylinder &,const gp_Lin & >()  , py::arg("Cyl"),  py::arg("L") )
        .def(py::init< const gp_Cylinder &,const gp_Circ & >()  , py::arg("Cyl"),  py::arg("C") )
        .def(py::init< const gp_Cylinder &,const gp_Elips & >()  , py::arg("Cyl"),  py::arg("E") )
    // methods
        .def("Init",
             (void (ProjLib_Cylinder::*)( const gp_Cylinder &  ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Cylinder &  ) >(&ProjLib_Cylinder::Init),
             R"#(None)#"  , py::arg("Cyl"))
        .def("Project",
             (void (ProjLib_Cylinder::*)( const gp_Lin &  ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Lin &  ) >(&ProjLib_Cylinder::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Cylinder::*)( const gp_Circ &  ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Circ &  ) >(&ProjLib_Cylinder::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Cylinder::*)( const gp_Elips &  ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Elips &  ) >(&ProjLib_Cylinder::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Cylinder::*)( const gp_Parab &  ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Parab &  ) >(&ProjLib_Cylinder::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Cylinder::*)( const gp_Hypr &  ) ) static_cast<void (ProjLib_Cylinder::*)( const gp_Hypr &  ) >(&ProjLib_Cylinder::Project),
             R"#(None)#"  , py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_Plane , shared_ptr<ProjLib_Plane>  , ProjLib_Projector >>(m.attr("ProjLib_Plane"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pln & >()  , py::arg("Pl") )
        .def(py::init< const gp_Pln &,const gp_Lin & >()  , py::arg("Pl"),  py::arg("L") )
        .def(py::init< const gp_Pln &,const gp_Circ & >()  , py::arg("Pl"),  py::arg("C") )
        .def(py::init< const gp_Pln &,const gp_Elips & >()  , py::arg("Pl"),  py::arg("E") )
        .def(py::init< const gp_Pln &,const gp_Parab & >()  , py::arg("Pl"),  py::arg("P") )
        .def(py::init< const gp_Pln &,const gp_Hypr & >()  , py::arg("Pl"),  py::arg("H") )
    // methods
        .def("Init",
             (void (ProjLib_Plane::*)( const gp_Pln &  ) ) static_cast<void (ProjLib_Plane::*)( const gp_Pln &  ) >(&ProjLib_Plane::Init),
             R"#(None)#"  , py::arg("Pl"))
        .def("Project",
             (void (ProjLib_Plane::*)( const gp_Lin &  ) ) static_cast<void (ProjLib_Plane::*)( const gp_Lin &  ) >(&ProjLib_Plane::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Plane::*)( const gp_Circ &  ) ) static_cast<void (ProjLib_Plane::*)( const gp_Circ &  ) >(&ProjLib_Plane::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Plane::*)( const gp_Elips &  ) ) static_cast<void (ProjLib_Plane::*)( const gp_Elips &  ) >(&ProjLib_Plane::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Plane::*)( const gp_Parab &  ) ) static_cast<void (ProjLib_Plane::*)( const gp_Parab &  ) >(&ProjLib_Plane::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Plane::*)( const gp_Hypr &  ) ) static_cast<void (ProjLib_Plane::*)( const gp_Hypr &  ) >(&ProjLib_Plane::Project),
             R"#(None)#"  , py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_Sphere , shared_ptr<ProjLib_Sphere>  , ProjLib_Projector >>(m.attr("ProjLib_Sphere"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Sphere & >()  , py::arg("Sp") )
        .def(py::init< const gp_Sphere &,const gp_Circ & >()  , py::arg("Sp"),  py::arg("C") )
    // methods
        .def("Init",
             (void (ProjLib_Sphere::*)( const gp_Sphere &  ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Sphere &  ) >(&ProjLib_Sphere::Init),
             R"#(None)#"  , py::arg("Sp"))
        .def("Project",
             (void (ProjLib_Sphere::*)( const gp_Lin &  ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Lin &  ) >(&ProjLib_Sphere::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Sphere::*)( const gp_Circ &  ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Circ &  ) >(&ProjLib_Sphere::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Sphere::*)( const gp_Elips &  ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Elips &  ) >(&ProjLib_Sphere::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Sphere::*)( const gp_Parab &  ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Parab &  ) >(&ProjLib_Sphere::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Sphere::*)( const gp_Hypr &  ) ) static_cast<void (ProjLib_Sphere::*)( const gp_Hypr &  ) >(&ProjLib_Sphere::Project),
             R"#(None)#"  , py::arg("H"))
        .def("SetInBounds",
             (void (ProjLib_Sphere::*)( const Standard_Real  ) ) static_cast<void (ProjLib_Sphere::*)( const Standard_Real  ) >(&ProjLib_Sphere::SetInBounds),
             R"#(Set the point of parameter U on C in the natural restrictions of the sphere.)#"  , py::arg("U"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ProjLib_Torus , shared_ptr<ProjLib_Torus>  , ProjLib_Projector >>(m.attr("ProjLib_Torus"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Torus & >()  , py::arg("To") )
        .def(py::init< const gp_Torus &,const gp_Circ & >()  , py::arg("To"),  py::arg("C") )
    // methods
        .def("Init",
             (void (ProjLib_Torus::*)( const gp_Torus &  ) ) static_cast<void (ProjLib_Torus::*)( const gp_Torus &  ) >(&ProjLib_Torus::Init),
             R"#(None)#"  , py::arg("To"))
        .def("Project",
             (void (ProjLib_Torus::*)( const gp_Lin &  ) ) static_cast<void (ProjLib_Torus::*)( const gp_Lin &  ) >(&ProjLib_Torus::Project),
             R"#(None)#"  , py::arg("L"))
        .def("Project",
             (void (ProjLib_Torus::*)( const gp_Circ &  ) ) static_cast<void (ProjLib_Torus::*)( const gp_Circ &  ) >(&ProjLib_Torus::Project),
             R"#(None)#"  , py::arg("C"))
        .def("Project",
             (void (ProjLib_Torus::*)( const gp_Elips &  ) ) static_cast<void (ProjLib_Torus::*)( const gp_Elips &  ) >(&ProjLib_Torus::Project),
             R"#(None)#"  , py::arg("E"))
        .def("Project",
             (void (ProjLib_Torus::*)( const gp_Parab &  ) ) static_cast<void (ProjLib_Torus::*)( const gp_Parab &  ) >(&ProjLib_Torus::Project),
             R"#(None)#"  , py::arg("P"))
        .def("Project",
             (void (ProjLib_Torus::*)( const gp_Hypr &  ) ) static_cast<void (ProjLib_Torus::*)( const gp_Hypr &  ) >(&ProjLib_Torus::Project),
             R"#(None)#"  , py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/ProjLib_Sphere.hxx
// ./opencascade/ProjLib_HCompProjectedCurve.hxx
// ./opencascade/ProjLib_SequenceOfHSequenceOfPnt.hxx
// ./opencascade/ProjLib.hxx
// ./opencascade/ProjLib_Torus.hxx
// ./opencascade/ProjLib_PrjFunc.hxx
// ./opencascade/ProjLib_ProjectOnSurface.hxx
// ./opencascade/ProjLib_ProjectOnPlane.hxx
// ./opencascade/ProjLib_HSequenceOfHSequenceOfPnt.hxx
// ./opencascade/ProjLib_Projector.hxx
// ./opencascade/ProjLib_CompProjectedCurve.hxx
// ./opencascade/ProjLib_Plane.hxx
// ./opencascade/ProjLib_PrjResolve.hxx
// ./opencascade/ProjLib_Cylinder.hxx
// ./opencascade/ProjLib_ComputeApproxOnPolarSurface.hxx
// ./opencascade/ProjLib_HProjectedCurve.hxx
// ./opencascade/ProjLib_Cone.hxx
// ./opencascade/ProjLib_ComputeApprox.hxx
// ./opencascade/ProjLib_ProjectedCurve.hxx

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<TColgp_HSequenceOfPnt> >(m,"ProjLib_SequenceOfHSequenceOfPnt");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
