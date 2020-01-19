
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <gp_Ax1.hxx>
#include <gp_Dir.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_HLine2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>

// module includes
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Adaptor3d_CurveOnSurfacePtr.hxx>
#include <Adaptor3d_CurvePtr.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <Adaptor3d_HIsoCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_InterFunc.hxx>
#include <Adaptor3d_IsoCurve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_SurfacePtr.hxx>
#include <Adaptor3d_TopolTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Adaptor3d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Adaptor3d"));


//Python trampoline classes
    class Py_Adaptor3d_HCurve : public Adaptor3d_HCurve{
    public:
        using Adaptor3d_HCurve::Adaptor3d_HCurve;
        
        // public pure virtual
        const Adaptor3d_Curve & Curve() const  override { PYBIND11_OVERLOAD_PURE(const Adaptor3d_Curve &,Adaptor3d_HCurve,Curve,) };
        Adaptor3d_Curve & GetCurve() override { PYBIND11_OVERLOAD_PURE(Adaptor3d_Curve &,Adaptor3d_HCurve,GetCurve,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Adaptor3d_HSurface : public Adaptor3d_HSurface{
    public:
        using Adaptor3d_HSurface::Adaptor3d_HSurface;
        
        // public pure virtual
        const Adaptor3d_Surface & Surface() const  override { PYBIND11_OVERLOAD_PURE(const Adaptor3d_Surface &,Adaptor3d_HSurface,Surface,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes

    register_default_constructor<Adaptor3d_Curve , shared_ptr<Adaptor3d_Curve>>(m,"Adaptor3d_Curve");

    static_cast<py::class_<Adaptor3d_Curve , shared_ptr<Adaptor3d_Curve>  >>(m.attr("Adaptor3d_Curve"))
    // methods
        .def("FirstParameter",
             (Standard_Real (Adaptor3d_Curve::*)() const) static_cast<Standard_Real (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor3d_Curve::*)() const) static_cast<Standard_Real (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Adaptor3d_Curve::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Adaptor3d_Curve::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_Curve::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_Curve::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Adaptor3d_Curve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_Curve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_Curve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_Curve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_Curve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_Curve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Adaptor3d_Curve::*)() const) static_cast<Standard_Boolean (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Adaptor3d_Curve::*)() const) static_cast<Standard_Boolean (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Adaptor3d_Curve::*)() const) static_cast<Standard_Real (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (Adaptor3d_Curve::*)( const Standard_Real  ) const) static_cast<gp_Pnt (Adaptor3d_Curve::*)( const Standard_Real  ) const>(&Adaptor3d_Curve::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (Adaptor3d_Curve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Adaptor3d_Curve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Adaptor3d_Curve::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Adaptor3d_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Adaptor3d_Curve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Adaptor3d_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_Curve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Adaptor3d_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_Curve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Adaptor3d_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Adaptor3d_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Adaptor3d_Curve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Adaptor3d_Curve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_Curve::*)( const Standard_Real  ) const>(&Adaptor3d_Curve::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (Adaptor3d_Curve::*)() const) static_cast<GeomAbs_CurveType (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin (Adaptor3d_Curve::*)() const) static_cast<gp_Lin (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (Adaptor3d_Curve::*)() const) static_cast<gp_Circ (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (Adaptor3d_Curve::*)() const) static_cast<gp_Elips (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (Adaptor3d_Curve::*)() const) static_cast<gp_Hypr (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (Adaptor3d_Curve::*)() const) static_cast<gp_Parab (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Adaptor3d_Curve::*)() const) static_cast<Standard_Integer (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Adaptor3d_Curve::*)() const) static_cast<Standard_Boolean (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Adaptor3d_Curve::*)() const) static_cast<Standard_Integer (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Adaptor3d_Curve::*)() const) static_cast<Standard_Integer (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (Adaptor3d_Curve::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (Adaptor3d_Curve::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::BSpline),
             R"#(None)#" )
        .def("OffsetCurve",
             (opencascade::handle<Geom_OffsetCurve> (Adaptor3d_Curve::*)() const) static_cast<opencascade::handle<Geom_OffsetCurve> (Adaptor3d_Curve::*)() const>(&Adaptor3d_Curve::OffsetCurve),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Adaptor3d_HCurve ,opencascade::handle<Adaptor3d_HCurve> ,Py_Adaptor3d_HCurve , Standard_Transient >>(m.attr("Adaptor3d_HCurve"))
    // methods
        .def("Curve",
             (const Adaptor3d_Curve & (Adaptor3d_HCurve::*)() const) static_cast<const Adaptor3d_Curve & (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Curve),
             R"#(Returns a pointer to the Curve inside the HCurve.)#" )
        .def("GetCurve",
             (Adaptor3d_Curve & (Adaptor3d_HCurve::*)() ) static_cast<Adaptor3d_Curve & (Adaptor3d_HCurve::*)() >(&Adaptor3d_HCurve::GetCurve),
             R"#(Returns a pointer to the Curve inside the HCurve.)#" )
        .def("FirstParameter",
             (Standard_Real (Adaptor3d_HCurve::*)() const) static_cast<Standard_Real (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor3d_HCurve::*)() const) static_cast<Standard_Real (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Adaptor3d_HCurve::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Adaptor3d_HCurve::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_HCurve::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_HCurve::NbIntervals),
             R"#(None)#"  , py::arg("S"))
        .def("Intervals",
             (void (Adaptor3d_HCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_HCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_HCurve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_HCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_HCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_HCurve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion.)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Adaptor3d_HCurve::*)() const) static_cast<Standard_Boolean (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Adaptor3d_HCurve::*)() const) static_cast<Standard_Boolean (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Adaptor3d_HCurve::*)() const) static_cast<Standard_Real (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (Adaptor3d_HCurve::*)( const Standard_Real  ) const) static_cast<gp_Pnt (Adaptor3d_HCurve::*)( const Standard_Real  ) const>(&Adaptor3d_HCurve::Value),
             R"#(None)#"  , py::arg("U"))
        .def("D0",
             (void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Adaptor3d_HCurve::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Adaptor3d_HCurve::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_HCurve::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_HCurve::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Adaptor3d_HCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Adaptor3d_HCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Adaptor3d_HCurve::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Adaptor3d_HCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_HCurve::*)( const Standard_Real  ) const>(&Adaptor3d_HCurve::Resolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (Adaptor3d_HCurve::*)() const) static_cast<GeomAbs_CurveType (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::GetType),
             R"#(None)#" )
        .def("Line",
             (gp_Lin (Adaptor3d_HCurve::*)() const) static_cast<gp_Lin (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (Adaptor3d_HCurve::*)() const) static_cast<gp_Circ (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (Adaptor3d_HCurve::*)() const) static_cast<gp_Elips (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (Adaptor3d_HCurve::*)() const) static_cast<gp_Hypr (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (Adaptor3d_HCurve::*)() const) static_cast<gp_Parab (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Adaptor3d_HCurve::*)() const) static_cast<Standard_Integer (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Adaptor3d_HCurve::*)() const) static_cast<Standard_Boolean (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Adaptor3d_HCurve::*)() const) static_cast<Standard_Integer (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Adaptor3d_HCurve::*)() const) static_cast<Standard_Integer (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (Adaptor3d_HCurve::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (Adaptor3d_HCurve::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::BSpline),
             R"#(None)#" )
        .def("OffsetCurve",
             (opencascade::handle<Geom_OffsetCurve> (Adaptor3d_HCurve::*)() const) static_cast<opencascade::handle<Geom_OffsetCurve> (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::OffsetCurve),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Adaptor3d_HCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::DynamicType),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (Adaptor3d_HCurve::*)() const) static_cast<Standard_Real (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor3d_HCurve::*)() const) static_cast<Standard_Real (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Adaptor3d_HCurve::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Adaptor3d_HCurve::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_HCurve::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_HCurve::NbIntervals),
             R"#(None)#"  , py::arg("S"))
        .def("Intervals",
             (void (Adaptor3d_HCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_HCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_HCurve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_HCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_HCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_HCurve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion.)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Adaptor3d_HCurve::*)() const) static_cast<Standard_Boolean (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Adaptor3d_HCurve::*)() const) static_cast<Standard_Boolean (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Adaptor3d_HCurve::*)() const) static_cast<Standard_Real (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (Adaptor3d_HCurve::*)( const Standard_Real  ) const) static_cast<gp_Pnt (Adaptor3d_HCurve::*)( const Standard_Real  ) const>(&Adaptor3d_HCurve::Value),
             R"#(None)#"  , py::arg("U"))
        .def("D0",
             (void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Adaptor3d_HCurve::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Adaptor3d_HCurve::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_HCurve::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_HCurve::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Adaptor3d_HCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Adaptor3d_HCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Adaptor3d_HCurve::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Adaptor3d_HCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_HCurve::*)( const Standard_Real  ) const>(&Adaptor3d_HCurve::Resolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (Adaptor3d_HCurve::*)() const) static_cast<GeomAbs_CurveType (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::GetType),
             R"#(None)#" )
        .def("Line",
             (gp_Lin (Adaptor3d_HCurve::*)() const) static_cast<gp_Lin (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (Adaptor3d_HCurve::*)() const) static_cast<gp_Circ (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (Adaptor3d_HCurve::*)() const) static_cast<gp_Elips (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (Adaptor3d_HCurve::*)() const) static_cast<gp_Hypr (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (Adaptor3d_HCurve::*)() const) static_cast<gp_Parab (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Adaptor3d_HCurve::*)() const) static_cast<Standard_Integer (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Adaptor3d_HCurve::*)() const) static_cast<Standard_Boolean (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Adaptor3d_HCurve::*)() const) static_cast<Standard_Integer (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Adaptor3d_HCurve::*)() const) static_cast<Standard_Integer (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (Adaptor3d_HCurve::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (Adaptor3d_HCurve::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::BSpline),
             R"#(None)#" )
        .def("OffsetCurve",
             (opencascade::handle<Geom_OffsetCurve> (Adaptor3d_HCurve::*)() const) static_cast<opencascade::handle<Geom_OffsetCurve> (Adaptor3d_HCurve::*)() const>(&Adaptor3d_HCurve::OffsetCurve),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Adaptor3d_HCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Adaptor3d_HCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Adaptor3d_HSurface ,opencascade::handle<Adaptor3d_HSurface> ,Py_Adaptor3d_HSurface , Standard_Transient >>(m.attr("Adaptor3d_HSurface"))
    // methods
        .def("Surface",
             (const Adaptor3d_Surface & (Adaptor3d_HSurface::*)() const) static_cast<const Adaptor3d_Surface & (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Surface),
             R"#(Returns a reference to the Surface inside the HSurface.)#" )
        .def("FirstUParameter",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::LastVParameter),
             R"#(None)#" )
        .def("UContinuity",
             (GeomAbs_Shape (Adaptor3d_HSurface::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::UContinuity),
             R"#(None)#" )
        .def("VContinuity",
             (GeomAbs_Shape (Adaptor3d_HSurface::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::VContinuity),
             R"#(None)#" )
        .def("NbUIntervals",
             (Standard_Integer (Adaptor3d_HSurface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_HSurface::NbUIntervals),
             R"#(None)#"  , py::arg("S"))
        .def("NbVIntervals",
             (Standard_Integer (Adaptor3d_HSurface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_HSurface::NbVIntervals),
             R"#(None)#"  , py::arg("S"))
        .def("UIntervals",
             (void (Adaptor3d_HSurface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_HSurface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_HSurface::UIntervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("VIntervals",
             (void (Adaptor3d_HSurface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_HSurface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_HSurface::VIntervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("UTrim",
             (opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_HSurface::UTrim),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("VTrim",
             (opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_HSurface::VTrim),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsUClosed",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsVClosed),
             R"#(None)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsUPeriodic),
             R"#(None)#" )
        .def("UPeriod",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::UPeriod),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsVPeriodic),
             R"#(None)#" )
        .def("VPeriod",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::VPeriod),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<gp_Pnt (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_HSurface::Value),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("D0",
             (void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Adaptor3d_HSurface::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_HSurface::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_HSurface::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_HSurface::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Adaptor3d_HSurface::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("UResolution",
             (Standard_Real (Adaptor3d_HSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_HSurface::*)( const Standard_Real  ) const>(&Adaptor3d_HSurface::UResolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("VResolution",
             (Standard_Real (Adaptor3d_HSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_HSurface::*)( const Standard_Real  ) const>(&Adaptor3d_HSurface::VResolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_SurfaceType (Adaptor3d_HSurface::*)() const) static_cast<GeomAbs_SurfaceType (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::GetType),
             R"#(None)#" )
        .def("Plane",
             (gp_Pln (Adaptor3d_HSurface::*)() const) static_cast<gp_Pln (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Plane),
             R"#(None)#" )
        .def("Cylinder",
             (gp_Cylinder (Adaptor3d_HSurface::*)() const) static_cast<gp_Cylinder (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (Adaptor3d_HSurface::*)() const) static_cast<gp_Cone (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Cone),
             R"#(None)#" )
        .def("Sphere",
             (gp_Sphere (Adaptor3d_HSurface::*)() const) static_cast<gp_Sphere (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Sphere),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (Adaptor3d_HSurface::*)() const) static_cast<gp_Torus (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Torus),
             R"#(None)#" )
        .def("UDegree",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::UDegree),
             R"#(None)#" )
        .def("NbUPoles",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::NbUPoles),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::VDegree),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::NbVPoles),
             R"#(None)#" )
        .def("NbUKnots",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::NbUKnots),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::NbVKnots),
             R"#(None)#" )
        .def("IsURational",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsURational),
             R"#(None)#" )
        .def("IsVRational",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsVRational),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierSurface> (Adaptor3d_HSurface::*)() const) static_cast<opencascade::handle<Geom_BezierSurface> (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineSurface> (Adaptor3d_HSurface::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::BSpline),
             R"#(None)#" )
        .def("AxeOfRevolution",
             (gp_Ax1 (Adaptor3d_HSurface::*)() const) static_cast<gp_Ax1 (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::AxeOfRevolution),
             R"#(None)#" )
        .def("Direction",
             (gp_Dir (Adaptor3d_HSurface::*)() const) static_cast<gp_Dir (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Direction),
             R"#(None)#" )
        .def("BasisCurve",
             (opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_HSurface::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::BasisCurve),
             R"#(None)#" )
        .def("BasisSurface",
             (opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)() const) static_cast<opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::BasisSurface),
             R"#(None)#" )
        .def("OffsetValue",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::OffsetValue),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Adaptor3d_HSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::DynamicType),
             R"#(None)#" )
        .def("FirstUParameter",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::LastVParameter),
             R"#(None)#" )
        .def("UContinuity",
             (GeomAbs_Shape (Adaptor3d_HSurface::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::UContinuity),
             R"#(None)#" )
        .def("VContinuity",
             (GeomAbs_Shape (Adaptor3d_HSurface::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::VContinuity),
             R"#(None)#" )
        .def("NbUIntervals",
             (Standard_Integer (Adaptor3d_HSurface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_HSurface::NbUIntervals),
             R"#(None)#"  , py::arg("S"))
        .def("NbVIntervals",
             (Standard_Integer (Adaptor3d_HSurface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_HSurface::NbVIntervals),
             R"#(None)#"  , py::arg("S"))
        .def("UIntervals",
             (void (Adaptor3d_HSurface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_HSurface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_HSurface::UIntervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("VIntervals",
             (void (Adaptor3d_HSurface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_HSurface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_HSurface::VIntervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("UTrim",
             (opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_HSurface::UTrim),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("VTrim",
             (opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_HSurface::VTrim),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsUClosed",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsVClosed),
             R"#(None)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsUPeriodic),
             R"#(None)#" )
        .def("UPeriod",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::UPeriod),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsVPeriodic),
             R"#(None)#" )
        .def("VPeriod",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::VPeriod),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<gp_Pnt (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_HSurface::Value),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("D0",
             (void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Adaptor3d_HSurface::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_HSurface::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_HSurface::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_HSurface::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Adaptor3d_HSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Adaptor3d_HSurface::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("UResolution",
             (Standard_Real (Adaptor3d_HSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_HSurface::*)( const Standard_Real  ) const>(&Adaptor3d_HSurface::UResolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("VResolution",
             (Standard_Real (Adaptor3d_HSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_HSurface::*)( const Standard_Real  ) const>(&Adaptor3d_HSurface::VResolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_SurfaceType (Adaptor3d_HSurface::*)() const) static_cast<GeomAbs_SurfaceType (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::GetType),
             R"#(None)#" )
        .def("Plane",
             (gp_Pln (Adaptor3d_HSurface::*)() const) static_cast<gp_Pln (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Plane),
             R"#(None)#" )
        .def("Cylinder",
             (gp_Cylinder (Adaptor3d_HSurface::*)() const) static_cast<gp_Cylinder (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (Adaptor3d_HSurface::*)() const) static_cast<gp_Cone (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Cone),
             R"#(None)#" )
        .def("Sphere",
             (gp_Sphere (Adaptor3d_HSurface::*)() const) static_cast<gp_Sphere (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Sphere),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (Adaptor3d_HSurface::*)() const) static_cast<gp_Torus (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Torus),
             R"#(None)#" )
        .def("UDegree",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::UDegree),
             R"#(None)#" )
        .def("NbUPoles",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::NbUPoles),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::VDegree),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::NbVPoles),
             R"#(None)#" )
        .def("NbUKnots",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::NbUKnots),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (Adaptor3d_HSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::NbVKnots),
             R"#(None)#" )
        .def("IsURational",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsURational),
             R"#(None)#" )
        .def("IsVRational",
             (Standard_Boolean (Adaptor3d_HSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::IsVRational),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierSurface> (Adaptor3d_HSurface::*)() const) static_cast<opencascade::handle<Geom_BezierSurface> (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineSurface> (Adaptor3d_HSurface::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::BSpline),
             R"#(None)#" )
        .def("AxeOfRevolution",
             (gp_Ax1 (Adaptor3d_HSurface::*)() const) static_cast<gp_Ax1 (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::AxeOfRevolution),
             R"#(None)#" )
        .def("Direction",
             (gp_Dir (Adaptor3d_HSurface::*)() const) static_cast<gp_Dir (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::Direction),
             R"#(None)#" )
        .def("BasisCurve",
             (opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_HSurface::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::BasisCurve),
             R"#(None)#" )
        .def("BasisSurface",
             (opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)() const) static_cast<opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::BasisSurface),
             R"#(None)#" )
        .def("OffsetValue",
             (Standard_Real (Adaptor3d_HSurface::*)() const) static_cast<Standard_Real (Adaptor3d_HSurface::*)() const>(&Adaptor3d_HSurface::OffsetValue),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Adaptor3d_HSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Adaptor3d_HSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<Adaptor3d_HSurfaceTool , shared_ptr<Adaptor3d_HSurfaceTool>>(m,"Adaptor3d_HSurfaceTool");

    static_cast<py::class_<Adaptor3d_HSurfaceTool , shared_ptr<Adaptor3d_HSurfaceTool>  >>(m.attr("Adaptor3d_HSurfaceTool"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstUParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::FirstUParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("FirstVParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::FirstVParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("LastUParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::LastUParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("LastVParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::LastVParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbUIntervals_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const GeomAbs_Shape  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const GeomAbs_Shape  ) >(&Adaptor3d_HSurfaceTool::NbUIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("Sh"))
        .def_static("NbVIntervals_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const GeomAbs_Shape  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const GeomAbs_Shape  ) >(&Adaptor3d_HSurfaceTool::NbVIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("Sh"))
        .def_static("UIntervals_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) >(&Adaptor3d_HSurfaceTool::UIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("Sh"))
        .def_static("VIntervals_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) >(&Adaptor3d_HSurfaceTool::VIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("Sh"))
        .def_static("UTrim_s",
                    (opencascade::handle<Adaptor3d_HSurface> (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<Adaptor3d_HSurface> (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Adaptor3d_HSurfaceTool::UTrim),
                    R"#(If <First> >= <Last>)#"  , py::arg("S"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def_static("VTrim_s",
                    (opencascade::handle<Adaptor3d_HSurface> (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<opencascade::handle<Adaptor3d_HSurface> (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Adaptor3d_HSurfaceTool::VTrim),
                    R"#(If <First> >= <Last>)#"  , py::arg("S"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def_static("IsUClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::IsUClosed),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsVClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::IsVClosed),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsUPeriodic_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::IsUPeriodic),
                    R"#(None)#"  , py::arg("S"))
        .def_static("UPeriod_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::UPeriod),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsVPeriodic_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::IsVPeriodic),
                    R"#(None)#"  , py::arg("S"))
        .def_static("VPeriod_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::VPeriod),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<gp_Pnt (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) >(&Adaptor3d_HSurfaceTool::Value),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"))
        .def_static("D0_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) >(&Adaptor3d_HSurfaceTool::D0),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&Adaptor3d_HSurfaceTool::D1),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1u"),  py::arg("D1v"))
        .def_static("D2_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&Adaptor3d_HSurfaceTool::D2),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def_static("D3_s",
                    (void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) >(&Adaptor3d_HSurfaceTool::D3),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def_static("DN_s",
                    (gp_Vec (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<gp_Vec (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&Adaptor3d_HSurfaceTool::DN),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("UResolution_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real  ) >(&Adaptor3d_HSurfaceTool::UResolution),
                    R"#(None)#"  , py::arg("S"),  py::arg("R3d"))
        .def_static("VResolution_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real  ) >(&Adaptor3d_HSurfaceTool::VResolution),
                    R"#(None)#"  , py::arg("S"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_SurfaceType (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<GeomAbs_SurfaceType (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::GetType),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Plane_s",
                    (gp_Pln (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<gp_Pln (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::Plane),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Cylinder_s",
                    (gp_Cylinder (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<gp_Cylinder (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::Cylinder),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Cone_s",
                    (gp_Cone (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<gp_Cone (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::Cone),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Torus_s",
                    (gp_Torus (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<gp_Torus (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::Torus),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Sphere_s",
                    (gp_Sphere (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<gp_Sphere (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::Sphere),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom_BezierSurface> (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<opencascade::handle<Geom_BezierSurface> (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::Bezier),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::BSpline),
                    R"#(None)#"  , py::arg("S"))
        .def_static("AxeOfRevolution_s",
                    (gp_Ax1 (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<gp_Ax1 (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::AxeOfRevolution),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Direction_s",
                    (gp_Dir (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<gp_Dir (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::Direction),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BasisCurve_s",
                    (opencascade::handle<Adaptor3d_HCurve> (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<opencascade::handle<Adaptor3d_HCurve> (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::BasisCurve),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BasisSurface_s",
                    (opencascade::handle<Adaptor3d_HSurface> (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<opencascade::handle<Adaptor3d_HSurface> (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::BasisSurface),
                    R"#(None)#"  , py::arg("S"))
        .def_static("OffsetValue_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::OffsetValue),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbSamplesU_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::NbSamplesU),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbSamplesV_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_HSurfaceTool::NbSamplesV),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbSamplesU_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) >(&Adaptor3d_HSurfaceTool::NbSamplesU),
                    R"#(None)#"  , py::arg("S"),  py::arg("u1"),  py::arg("u2"))
        .def_static("NbSamplesV_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor3d_HSurface> & ,  const Standard_Real ,  const Standard_Real  ) >(&Adaptor3d_HSurfaceTool::NbSamplesV),
                    R"#(None)#"  , py::arg("S"),  py::arg("v1"),  py::arg("v2"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Adaptor3d_HVertex ,opencascade::handle<Adaptor3d_HVertex>  , Standard_Transient >>(m.attr("Adaptor3d_HVertex"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const TopAbs_Orientation,const Standard_Real >()  , py::arg("P"),  py::arg("Ori"),  py::arg("Resolution") )
    // methods
        .def("Value",
             (gp_Pnt2d (Adaptor3d_HVertex::*)() ) static_cast<gp_Pnt2d (Adaptor3d_HVertex::*)() >(&Adaptor3d_HVertex::Value),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (Adaptor3d_HVertex::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Real (Adaptor3d_HVertex::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&Adaptor3d_HVertex::Parameter),
             R"#(None)#"  , py::arg("C"))
        .def("Resolution",
             (Standard_Real (Adaptor3d_HVertex::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<Standard_Real (Adaptor3d_HVertex::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&Adaptor3d_HVertex::Resolution),
             R"#(Parametric resolution (2d).)#"  , py::arg("C"))
        .def("Orientation",
             (TopAbs_Orientation (Adaptor3d_HVertex::*)() ) static_cast<TopAbs_Orientation (Adaptor3d_HVertex::*)() >(&Adaptor3d_HVertex::Orientation),
             R"#(None)#" )
        .def("IsSame",
             (Standard_Boolean (Adaptor3d_HVertex::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) ) static_cast<Standard_Boolean (Adaptor3d_HVertex::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) >(&Adaptor3d_HVertex::IsSame),
             R"#(None)#"  , py::arg("Other"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Adaptor3d_HVertex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Adaptor3d_HVertex::*)() const>(&Adaptor3d_HVertex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Adaptor3d_HVertex::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Adaptor3d_HVertex::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Adaptor3d_InterFunc , shared_ptr<Adaptor3d_InterFunc>  , math_FunctionWithDerivative >>(m.attr("Adaptor3d_InterFunc"))
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const Standard_Real,const Standard_Integer >()  , py::arg("C"),  py::arg("FixVal"),  py::arg("Fix") )
    // methods
        .def("Value",
             (Standard_Boolean (Adaptor3d_InterFunc::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Adaptor3d_InterFunc::*)( const Standard_Real ,  Standard_Real &  ) >(&Adaptor3d_InterFunc::Value),
             R"#(computes the value <F>of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Adaptor3d_InterFunc::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Adaptor3d_InterFunc::*)( const Standard_Real ,  Standard_Real &  ) >(&Adaptor3d_InterFunc::Derivative),
             R"#(computes the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Adaptor3d_InterFunc::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Adaptor3d_InterFunc::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Adaptor3d_InterFunc::Values),
             R"#(computes the value <F> and the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<Adaptor3d_Surface , shared_ptr<Adaptor3d_Surface>>(m,"Adaptor3d_Surface");

    static_cast<py::class_<Adaptor3d_Surface , shared_ptr<Adaptor3d_Surface>  >>(m.attr("Adaptor3d_Surface"))
    // methods
        .def("FirstUParameter",
             (Standard_Real (Adaptor3d_Surface::*)() const) static_cast<Standard_Real (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (Adaptor3d_Surface::*)() const) static_cast<Standard_Real (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (Adaptor3d_Surface::*)() const) static_cast<Standard_Real (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (Adaptor3d_Surface::*)() const) static_cast<Standard_Real (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::LastVParameter),
             R"#(None)#" )
        .def("UContinuity",
             (GeomAbs_Shape (Adaptor3d_Surface::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::UContinuity),
             R"#(None)#" )
        .def("VContinuity",
             (GeomAbs_Shape (Adaptor3d_Surface::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::VContinuity),
             R"#(None)#" )
        .def("NbUIntervals",
             (Standard_Integer (Adaptor3d_Surface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_Surface::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_Surface::NbUIntervals),
             R"#(Returns the number of U intervals for continuity <S>. May be one if UContinuity(me) >= <S>)#"  , py::arg("S"))
        .def("NbVIntervals",
             (Standard_Integer (Adaptor3d_Surface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_Surface::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_Surface::NbVIntervals),
             R"#(Returns the number of V intervals for continuity <S>. May be one if VContinuity(me) >= <S>)#"  , py::arg("S"))
        .def("UIntervals",
             (void (Adaptor3d_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_Surface::UIntervals),
             R"#(Returns the intervals with the requested continuity in the U direction.)#"  , py::arg("T"),  py::arg("S"))
        .def("VIntervals",
             (void (Adaptor3d_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_Surface::VIntervals),
             R"#(Returns the intervals with the requested continuity in the V direction.)#"  , py::arg("T"),  py::arg("S"))
        .def("UTrim",
             (opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_Surface::UTrim),
             R"#(Returns a surface trimmed in the U direction equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("VTrim",
             (opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_Surface::VTrim),
             R"#(Returns a surface trimmed in the V direction between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsUClosed",
             (Standard_Boolean (Adaptor3d_Surface::*)() const) static_cast<Standard_Boolean (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (Adaptor3d_Surface::*)() const) static_cast<Standard_Boolean (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::IsVClosed),
             R"#(None)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Adaptor3d_Surface::*)() const) static_cast<Standard_Boolean (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::IsUPeriodic),
             R"#(None)#" )
        .def("UPeriod",
             (Standard_Real (Adaptor3d_Surface::*)() const) static_cast<Standard_Real (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::UPeriod),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Adaptor3d_Surface::*)() const) static_cast<Standard_Boolean (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::IsVPeriodic),
             R"#(None)#" )
        .def("VPeriod",
             (Standard_Real (Adaptor3d_Surface::*)() const) static_cast<Standard_Real (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::VPeriod),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<gp_Pnt (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_Surface::Value),
             R"#(Computes the point of parameters U,V on the surface.)#"  , py::arg("U"),  py::arg("V"))
        .def("D0",
             (void (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Adaptor3d_Surface::D0),
             R"#(Computes the point of parameters U,V on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_Surface::D1),
             R"#(Computes the point and the first derivatives on the surface. Raised if the continuity of the current intervals is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_Surface::D2),
             R"#(Computes the point, the first and second derivatives on the surface. Raised if the continuity of the current intervals is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_Surface::D3),
             R"#(Computes the point, the first, second and third derivatives on the surface. Raised if the continuity of the current intervals is not C3.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Adaptor3d_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Adaptor3d_Surface::DN),
             R"#(Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V). Raised if the current U interval is not not CNu and the current V interval is not CNv. Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("UResolution",
             (Standard_Real (Adaptor3d_Surface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_Surface::*)( const Standard_Real  ) const>(&Adaptor3d_Surface::UResolution),
             R"#(Returns the parametric U resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("VResolution",
             (Standard_Real (Adaptor3d_Surface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_Surface::*)( const Standard_Real  ) const>(&Adaptor3d_Surface::VResolution),
             R"#(Returns the parametric V resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_SurfaceType (Adaptor3d_Surface::*)() const) static_cast<GeomAbs_SurfaceType (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::GetType),
             R"#(Returns the type of the surface : Plane, Cylinder, Cone, Sphere, Torus, BezierSurface, BSplineSurface, SurfaceOfRevolution, SurfaceOfExtrusion, OtherSurface)#" )
        .def("Plane",
             (gp_Pln (Adaptor3d_Surface::*)() const) static_cast<gp_Pln (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::Plane),
             R"#(None)#" )
        .def("Cylinder",
             (gp_Cylinder (Adaptor3d_Surface::*)() const) static_cast<gp_Cylinder (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (Adaptor3d_Surface::*)() const) static_cast<gp_Cone (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::Cone),
             R"#(None)#" )
        .def("Sphere",
             (gp_Sphere (Adaptor3d_Surface::*)() const) static_cast<gp_Sphere (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::Sphere),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (Adaptor3d_Surface::*)() const) static_cast<gp_Torus (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::Torus),
             R"#(None)#" )
        .def("UDegree",
             (Standard_Integer (Adaptor3d_Surface::*)() const) static_cast<Standard_Integer (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::UDegree),
             R"#(None)#" )
        .def("NbUPoles",
             (Standard_Integer (Adaptor3d_Surface::*)() const) static_cast<Standard_Integer (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::NbUPoles),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (Adaptor3d_Surface::*)() const) static_cast<Standard_Integer (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::VDegree),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (Adaptor3d_Surface::*)() const) static_cast<Standard_Integer (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::NbVPoles),
             R"#(None)#" )
        .def("NbUKnots",
             (Standard_Integer (Adaptor3d_Surface::*)() const) static_cast<Standard_Integer (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::NbUKnots),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (Adaptor3d_Surface::*)() const) static_cast<Standard_Integer (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::NbVKnots),
             R"#(None)#" )
        .def("IsURational",
             (Standard_Boolean (Adaptor3d_Surface::*)() const) static_cast<Standard_Boolean (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::IsURational),
             R"#(None)#" )
        .def("IsVRational",
             (Standard_Boolean (Adaptor3d_Surface::*)() const) static_cast<Standard_Boolean (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::IsVRational),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierSurface> (Adaptor3d_Surface::*)() const) static_cast<opencascade::handle<Geom_BezierSurface> (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineSurface> (Adaptor3d_Surface::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::BSpline),
             R"#(None)#" )
        .def("AxeOfRevolution",
             (gp_Ax1 (Adaptor3d_Surface::*)() const) static_cast<gp_Ax1 (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::AxeOfRevolution),
             R"#(None)#" )
        .def("Direction",
             (gp_Dir (Adaptor3d_Surface::*)() const) static_cast<gp_Dir (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::Direction),
             R"#(None)#" )
        .def("BasisCurve",
             (opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_Surface::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::BasisCurve),
             R"#(None)#" )
        .def("BasisSurface",
             (opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_Surface::*)() const) static_cast<opencascade::handle<Adaptor3d_HSurface> (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::BasisSurface),
             R"#(None)#" )
        .def("OffsetValue",
             (Standard_Real (Adaptor3d_Surface::*)() const) static_cast<Standard_Real (Adaptor3d_Surface::*)() const>(&Adaptor3d_Surface::OffsetValue),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Adaptor3d_TopolTool ,opencascade::handle<Adaptor3d_TopolTool>  , Standard_Transient >>(m.attr("Adaptor3d_TopolTool"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("Surface") )
    // methods
        .def("Initialize",
             (void (Adaptor3d_TopolTool::*)() ) static_cast<void (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::Initialize),
             R"#(None)#" )
        .def("Initialize",
             (void (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_TopolTool::Initialize),
             R"#(None)#"  , py::arg("S"))
        .def("Initialize",
             (void (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&Adaptor3d_TopolTool::Initialize),
             R"#(None)#"  , py::arg("Curve"))
        .def("Init",
             (void (Adaptor3d_TopolTool::*)() ) static_cast<void (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (Adaptor3d_TopolTool::*)() ) static_cast<Standard_Boolean (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::More),
             R"#(None)#" )
        .def("Value",
             (opencascade::handle<Adaptor2d_HCurve2d> (Adaptor3d_TopolTool::*)() ) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::Value),
             R"#(None)#" )
        .def("Next",
             (void (Adaptor3d_TopolTool::*)() ) static_cast<void (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::Next),
             R"#(None)#" )
        .def("InitVertexIterator",
             (void (Adaptor3d_TopolTool::*)() ) static_cast<void (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::InitVertexIterator),
             R"#(None)#" )
        .def("MoreVertex",
             (Standard_Boolean (Adaptor3d_TopolTool::*)() ) static_cast<Standard_Boolean (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::MoreVertex),
             R"#(None)#" )
        .def("Vertex",
             (opencascade::handle<Adaptor3d_HVertex> (Adaptor3d_TopolTool::*)() ) static_cast<opencascade::handle<Adaptor3d_HVertex> (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::Vertex),
             R"#(None)#" )
        .def("NextVertex",
             (void (Adaptor3d_TopolTool::*)() ) static_cast<void (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::NextVertex),
             R"#(None)#" )
        .def("Classify",
             (TopAbs_State (Adaptor3d_TopolTool::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<TopAbs_State (Adaptor3d_TopolTool::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) >(&Adaptor3d_TopolTool::Classify),
             R"#(None)#"  , py::arg("P"),  py::arg("Tol"),  py::arg("ReacdreOnPeriodic")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsThePointOn",
             (Standard_Boolean (Adaptor3d_TopolTool::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (Adaptor3d_TopolTool::*)( const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Boolean  ) >(&Adaptor3d_TopolTool::IsThePointOn),
             R"#(None)#"  , py::arg("P"),  py::arg("Tol"),  py::arg("ReacdreOnPeriodic")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Orientation",
             (TopAbs_Orientation (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<TopAbs_Orientation (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&Adaptor3d_TopolTool::Orientation),
             R"#(If the function returns the orientation of the arc. If the orientation is FORWARD or REVERSED, the arc is a "real" limit of the surface. If the orientation is INTERNAL or EXTERNAL, the arc is considered as an arc on the surface.)#"  , py::arg("C"))
        .def("Orientation",
             (TopAbs_Orientation (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) ) static_cast<TopAbs_Orientation (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) >(&Adaptor3d_TopolTool::Orientation),
             R"#(Returns the orientation of the vertex V. The vertex has been found with an exploration on a given arc. The orientation is the orientation of the vertex on this arc.)#"  , py::arg("V"))
        .def("Identical",
             (Standard_Boolean (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> & ,  const opencascade::handle<Adaptor3d_HVertex> &  ) ) static_cast<Standard_Boolean (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> & ,  const opencascade::handle<Adaptor3d_HVertex> &  ) >(&Adaptor3d_TopolTool::Identical),
             R"#(Returns True if the vertices V1 and V2 are identical. This method does not take the orientation of the vertices in account.)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Has3d",
             (Standard_Boolean (Adaptor3d_TopolTool::*)() const) static_cast<Standard_Boolean (Adaptor3d_TopolTool::*)() const>(&Adaptor3d_TopolTool::Has3d),
             R"#(answers if arcs and vertices may have 3d representations, so that we could use Tol3d and Pnt methods.)#" )
        .def("Tol3d",
             (Standard_Real (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) const) static_cast<Standard_Real (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) const>(&Adaptor3d_TopolTool::Tol3d),
             R"#(returns 3d tolerance of the arc C)#"  , py::arg("C"))
        .def("Tol3d",
             (Standard_Real (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) const) static_cast<Standard_Real (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) const>(&Adaptor3d_TopolTool::Tol3d),
             R"#(returns 3d tolerance of the vertex V)#"  , py::arg("V"))
        .def("Pnt",
             (gp_Pnt (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) const) static_cast<gp_Pnt (Adaptor3d_TopolTool::*)( const opencascade::handle<Adaptor3d_HVertex> &  ) const>(&Adaptor3d_TopolTool::Pnt),
             R"#(returns 3d point of the vertex V)#"  , py::arg("V"))
        .def("ComputeSamplePoints",
             (void (Adaptor3d_TopolTool::*)() ) static_cast<void (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::ComputeSamplePoints),
             R"#(None)#" )
        .def("NbSamplesU",
             (Standard_Integer (Adaptor3d_TopolTool::*)() ) static_cast<Standard_Integer (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::NbSamplesU),
             R"#(compute the sample-points for the intersections algorithms)#" )
        .def("NbSamplesV",
             (Standard_Integer (Adaptor3d_TopolTool::*)() ) static_cast<Standard_Integer (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::NbSamplesV),
             R"#(compute the sample-points for the intersections algorithms)#" )
        .def("NbSamples",
             (Standard_Integer (Adaptor3d_TopolTool::*)() ) static_cast<Standard_Integer (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::NbSamples),
             R"#(compute the sample-points for the intersections algorithms)#" )
        .def("UParameters",
             (void (Adaptor3d_TopolTool::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Adaptor3d_TopolTool::*)( NCollection_Array1<Standard_Real> &  ) const>(&Adaptor3d_TopolTool::UParameters),
             R"#(return the set of U parameters on the surface obtained by the method SamplePnts)#"  , py::arg("theArray"))
        .def("VParameters",
             (void (Adaptor3d_TopolTool::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Adaptor3d_TopolTool::*)( NCollection_Array1<Standard_Real> &  ) const>(&Adaptor3d_TopolTool::VParameters),
             R"#(return the set of V parameters on the surface obtained by the method SamplePnts)#"  , py::arg("theArray"))
        .def("SamplePoint",
             (void (Adaptor3d_TopolTool::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt &  ) ) static_cast<void (Adaptor3d_TopolTool::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt &  ) >(&Adaptor3d_TopolTool::SamplePoint),
             R"#(None)#"  , py::arg("Index"),  py::arg("P2d"),  py::arg("P3d"))
        .def("DomainIsInfinite",
             (Standard_Boolean (Adaptor3d_TopolTool::*)() ) static_cast<Standard_Boolean (Adaptor3d_TopolTool::*)() >(&Adaptor3d_TopolTool::DomainIsInfinite),
             R"#(None)#" )
        .def("Edge",
             (Standard_Address (Adaptor3d_TopolTool::*)() const) static_cast<Standard_Address (Adaptor3d_TopolTool::*)() const>(&Adaptor3d_TopolTool::Edge),
             R"#(None)#" )
        .def("SamplePnts",
             (void (Adaptor3d_TopolTool::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Adaptor3d_TopolTool::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&Adaptor3d_TopolTool::SamplePnts),
             R"#(compute the sample-points for the intersections algorithms by adaptive algorithm for BSpline surfaces. For other surfaces algorithm is the same as in method ComputeSamplePoints(), but only fill arrays of U and V sample parameters; theDefl is a requred deflection theNUmin, theNVmin are minimal nb points for U and V.)#"  , py::arg("theDefl"),  py::arg("theNUmin"),  py::arg("theNVmin"))
        .def("BSplSamplePnts",
             (void (Adaptor3d_TopolTool::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Adaptor3d_TopolTool::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&Adaptor3d_TopolTool::BSplSamplePnts),
             R"#(compute the sample-points for the intersections algorithms by adaptive algorithm for BSpline surfaces - is used in SamplePnts theDefl is a requred deflection theNUmin, theNVmin are minimal nb points for U and V.)#"  , py::arg("theDefl"),  py::arg("theNUmin"),  py::arg("theNVmin"))
        .def("IsUniformSampling",
             (Standard_Boolean (Adaptor3d_TopolTool::*)() const) static_cast<Standard_Boolean (Adaptor3d_TopolTool::*)() const>(&Adaptor3d_TopolTool::IsUniformSampling),
             R"#(Returns true if provide uniform sampling of points.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Adaptor3d_TopolTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Adaptor3d_TopolTool::*)() const>(&Adaptor3d_TopolTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Adaptor3d_TopolTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Adaptor3d_TopolTool::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Adaptor3d_CurveOnSurface , shared_ptr<Adaptor3d_CurveOnSurface>  , Adaptor3d_Curve >>(m.attr("Adaptor3d_CurveOnSurface"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("S") )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("C"),  py::arg("S") )
    // methods
        .def("Load",
             (void (Adaptor3d_CurveOnSurface::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (Adaptor3d_CurveOnSurface::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_CurveOnSurface::Load),
             R"#(Changes the surface.)#"  , py::arg("S"))
        .def("Load",
             (void (Adaptor3d_CurveOnSurface::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) ) static_cast<void (Adaptor3d_CurveOnSurface::*)( const opencascade::handle<Adaptor2d_HCurve2d> &  ) >(&Adaptor3d_CurveOnSurface::Load),
             R"#(Changes the 2d curve.)#"  , py::arg("C"))
        .def("Load",
             (void (Adaptor3d_CurveOnSurface::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (Adaptor3d_CurveOnSurface::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ,  const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_CurveOnSurface::Load),
             R"#(Load both curve and surface.)#"  , py::arg("C"),  py::arg("S"))
        .def("GetCurve",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (Adaptor3d_CurveOnSurface::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::GetCurve),
             R"#(None)#" )
        .def("GetSurface",
             (const opencascade::handle<Adaptor3d_HSurface> & (Adaptor3d_CurveOnSurface::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::GetSurface),
             R"#(None)#" )
        .def("ChangeCurve",
             (opencascade::handle<Adaptor2d_HCurve2d> & (Adaptor3d_CurveOnSurface::*)() ) static_cast<opencascade::handle<Adaptor2d_HCurve2d> & (Adaptor3d_CurveOnSurface::*)() >(&Adaptor3d_CurveOnSurface::ChangeCurve),
             R"#(None)#" )
        .def("ChangeSurface",
             (opencascade::handle<Adaptor3d_HSurface> & (Adaptor3d_CurveOnSurface::*)() ) static_cast<opencascade::handle<Adaptor3d_HSurface> & (Adaptor3d_CurveOnSurface::*)() >(&Adaptor3d_CurveOnSurface::ChangeSurface),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (Adaptor3d_CurveOnSurface::*)() const) static_cast<Standard_Real (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor3d_CurveOnSurface::*)() const) static_cast<Standard_Real (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Adaptor3d_CurveOnSurface::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Adaptor3d_CurveOnSurface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_CurveOnSurface::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_CurveOnSurface::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Adaptor3d_CurveOnSurface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_CurveOnSurface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_CurveOnSurface::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_CurveOnSurface::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Adaptor3d_CurveOnSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Adaptor3d_CurveOnSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Adaptor3d_CurveOnSurface::*)() const) static_cast<Standard_Real (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (Adaptor3d_CurveOnSurface::*)( const Standard_Real  ) const) static_cast<gp_Pnt (Adaptor3d_CurveOnSurface::*)( const Standard_Real  ) const>(&Adaptor3d_CurveOnSurface::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Adaptor3d_CurveOnSurface::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Adaptor3d_CurveOnSurface::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_CurveOnSurface::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_CurveOnSurface::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Adaptor3d_CurveOnSurface::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Adaptor3d_CurveOnSurface::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Adaptor3d_CurveOnSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_CurveOnSurface::*)( const Standard_Real  ) const>(&Adaptor3d_CurveOnSurface::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (Adaptor3d_CurveOnSurface::*)() const) static_cast<GeomAbs_CurveType (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin (Adaptor3d_CurveOnSurface::*)() const) static_cast<gp_Lin (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (Adaptor3d_CurveOnSurface::*)() const) static_cast<gp_Circ (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (Adaptor3d_CurveOnSurface::*)() const) static_cast<gp_Elips (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (Adaptor3d_CurveOnSurface::*)() const) static_cast<gp_Hypr (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (Adaptor3d_CurveOnSurface::*)() const) static_cast<gp_Parab (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Adaptor3d_CurveOnSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Adaptor3d_CurveOnSurface::*)() const) static_cast<Standard_Boolean (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Adaptor3d_CurveOnSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Adaptor3d_CurveOnSurface::*)() const) static_cast<Standard_Integer (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (Adaptor3d_CurveOnSurface::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (Adaptor3d_CurveOnSurface::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (Adaptor3d_CurveOnSurface::*)() const>(&Adaptor3d_CurveOnSurface::BSpline),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Adaptor3d_HCurveOnSurface ,opencascade::handle<Adaptor3d_HCurveOnSurface>  , Adaptor3d_HCurve >>(m.attr("Adaptor3d_HCurveOnSurface"))
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_CurveOnSurface & >()  , py::arg("C") )
    // methods
        .def("Set",
             (void (Adaptor3d_HCurveOnSurface::*)( const Adaptor3d_CurveOnSurface &  ) ) static_cast<void (Adaptor3d_HCurveOnSurface::*)( const Adaptor3d_CurveOnSurface &  ) >(&Adaptor3d_HCurveOnSurface::Set),
             R"#(Sets the field of the GenHCurve.)#"  , py::arg("C"))
        .def("Curve",
             (const Adaptor3d_Curve & (Adaptor3d_HCurveOnSurface::*)() const) static_cast<const Adaptor3d_Curve & (Adaptor3d_HCurveOnSurface::*)() const>(&Adaptor3d_HCurveOnSurface::Curve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("GetCurve",
             (Adaptor3d_Curve & (Adaptor3d_HCurveOnSurface::*)() ) static_cast<Adaptor3d_Curve & (Adaptor3d_HCurveOnSurface::*)() >(&Adaptor3d_HCurveOnSurface::GetCurve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("ChangeCurve",
             (Adaptor3d_CurveOnSurface & (Adaptor3d_HCurveOnSurface::*)() ) static_cast<Adaptor3d_CurveOnSurface & (Adaptor3d_HCurveOnSurface::*)() >(&Adaptor3d_HCurveOnSurface::ChangeCurve),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Adaptor3d_HCurveOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Adaptor3d_HCurveOnSurface::*)() const>(&Adaptor3d_HCurveOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Adaptor3d_HCurveOnSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Adaptor3d_HCurveOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Adaptor3d_HIsoCurve ,opencascade::handle<Adaptor3d_HIsoCurve>  , Adaptor3d_HCurve >>(m.attr("Adaptor3d_HIsoCurve"))
        .def(py::init<  >()  )
        .def(py::init< const Adaptor3d_IsoCurve & >()  , py::arg("C") )
    // methods
        .def("Set",
             (void (Adaptor3d_HIsoCurve::*)( const Adaptor3d_IsoCurve &  ) ) static_cast<void (Adaptor3d_HIsoCurve::*)( const Adaptor3d_IsoCurve &  ) >(&Adaptor3d_HIsoCurve::Set),
             R"#(Sets the field of the GenHCurve.)#"  , py::arg("C"))
        .def("Curve",
             (const Adaptor3d_Curve & (Adaptor3d_HIsoCurve::*)() const) static_cast<const Adaptor3d_Curve & (Adaptor3d_HIsoCurve::*)() const>(&Adaptor3d_HIsoCurve::Curve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("GetCurve",
             (Adaptor3d_Curve & (Adaptor3d_HIsoCurve::*)() ) static_cast<Adaptor3d_Curve & (Adaptor3d_HIsoCurve::*)() >(&Adaptor3d_HIsoCurve::GetCurve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("ChangeCurve",
             (Adaptor3d_IsoCurve & (Adaptor3d_HIsoCurve::*)() ) static_cast<Adaptor3d_IsoCurve & (Adaptor3d_HIsoCurve::*)() >(&Adaptor3d_HIsoCurve::ChangeCurve),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Adaptor3d_HIsoCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Adaptor3d_HIsoCurve::*)() const>(&Adaptor3d_HIsoCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Adaptor3d_HIsoCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Adaptor3d_HIsoCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Adaptor3d_IsoCurve , shared_ptr<Adaptor3d_IsoCurve>  , Adaptor3d_Curve >>(m.attr("Adaptor3d_IsoCurve"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("S") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const GeomAbs_IsoType,const Standard_Real >()  , py::arg("S"),  py::arg("Iso"),  py::arg("Param") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const GeomAbs_IsoType,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("Iso"),  py::arg("Param"),  py::arg("WFirst"),  py::arg("WLast") )
    // methods
        .def("Load",
             (void (Adaptor3d_IsoCurve::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) ) static_cast<void (Adaptor3d_IsoCurve::*)( const opencascade::handle<Adaptor3d_HSurface> &  ) >(&Adaptor3d_IsoCurve::Load),
             R"#(Changes the surface. The iso is reset to NoneIso.)#"  , py::arg("S"))
        .def("Load",
             (void (Adaptor3d_IsoCurve::*)( const GeomAbs_IsoType ,  const Standard_Real  ) ) static_cast<void (Adaptor3d_IsoCurve::*)( const GeomAbs_IsoType ,  const Standard_Real  ) >(&Adaptor3d_IsoCurve::Load),
             R"#(Changes the iso on the current surface.)#"  , py::arg("Iso"),  py::arg("Param"))
        .def("Load",
             (void (Adaptor3d_IsoCurve::*)( const GeomAbs_IsoType ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Adaptor3d_IsoCurve::*)( const GeomAbs_IsoType ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Adaptor3d_IsoCurve::Load),
             R"#(Changes the iso on the current surface.)#"  , py::arg("Iso"),  py::arg("Param"),  py::arg("WFirst"),  py::arg("WLast"))
        .def("Surface",
             (const opencascade::handle<Adaptor3d_HSurface> & (Adaptor3d_IsoCurve::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Surface),
             R"#(None)#" )
        .def("Iso",
             (GeomAbs_IsoType (Adaptor3d_IsoCurve::*)() const) static_cast<GeomAbs_IsoType (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Iso),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Real (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Parameter),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Real (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Real (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Adaptor3d_IsoCurve::*)() const) static_cast<GeomAbs_Shape (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Adaptor3d_IsoCurve::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (Adaptor3d_IsoCurve::*)( const GeomAbs_Shape  ) const>(&Adaptor3d_IsoCurve::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Adaptor3d_IsoCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (Adaptor3d_IsoCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&Adaptor3d_IsoCurve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_IsoCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (Adaptor3d_IsoCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Adaptor3d_IsoCurve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Boolean (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Boolean (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Real (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (Adaptor3d_IsoCurve::*)( const Standard_Real  ) const) static_cast<gp_Pnt (Adaptor3d_IsoCurve::*)( const Standard_Real  ) const>(&Adaptor3d_IsoCurve::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (Adaptor3d_IsoCurve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Adaptor3d_IsoCurve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Adaptor3d_IsoCurve::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Adaptor3d_IsoCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_IsoCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Adaptor3d_IsoCurve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Adaptor3d_IsoCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_IsoCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_IsoCurve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Adaptor3d_IsoCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Adaptor3d_IsoCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Adaptor3d_IsoCurve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Adaptor3d_IsoCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Adaptor3d_IsoCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Adaptor3d_IsoCurve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Adaptor3d_IsoCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Adaptor3d_IsoCurve::*)( const Standard_Real  ) const>(&Adaptor3d_IsoCurve::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (Adaptor3d_IsoCurve::*)() const) static_cast<GeomAbs_CurveType (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin (Adaptor3d_IsoCurve::*)() const) static_cast<gp_Lin (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (Adaptor3d_IsoCurve::*)() const) static_cast<gp_Circ (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (Adaptor3d_IsoCurve::*)() const) static_cast<gp_Elips (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (Adaptor3d_IsoCurve::*)() const) static_cast<gp_Hypr (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (Adaptor3d_IsoCurve::*)() const) static_cast<gp_Parab (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Integer (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Boolean (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Integer (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Integer (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (Adaptor3d_IsoCurve::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (Adaptor3d_IsoCurve::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::BSpline),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Adaptor3d_HSurface> & (Adaptor3d_IsoCurve::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Surface),
             R"#(None)#" )
        .def("Iso",
             (GeomAbs_IsoType (Adaptor3d_IsoCurve::*)() const) static_cast<GeomAbs_IsoType (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Iso),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Real (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::Parameter),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Real (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor3d_IsoCurve::*)() const) static_cast<Standard_Real (Adaptor3d_IsoCurve::*)() const>(&Adaptor3d_IsoCurve::LastParameter),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/Adaptor3d_HCurveOnSurface.hxx
// ./opencascade/Adaptor3d_HVertex.hxx
// ./opencascade/Adaptor3d_HSurfaceTool.hxx
// ./opencascade/Adaptor3d_HSurface.hxx
// ./opencascade/Adaptor3d_IsoCurve.hxx
// ./opencascade/Adaptor3d_Surface.hxx
// ./opencascade/Adaptor3d_SurfacePtr.hxx
// ./opencascade/Adaptor3d_CurveOnSurface.hxx
// ./opencascade/Adaptor3d_HIsoCurve.hxx
// ./opencascade/Adaptor3d_HCurve.hxx
// ./opencascade/Adaptor3d_InterFunc.hxx
// ./opencascade/Adaptor3d_CurvePtr.hxx
// ./opencascade/Adaptor3d_TopolTool.hxx
// ./opencascade/Adaptor3d_CurveOnSurfacePtr.hxx
// ./opencascade/Adaptor3d_Curve.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
