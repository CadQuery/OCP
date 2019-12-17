
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <TopoDS_Face.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <gp_Ax1.hxx>
#include <Adaptor3d_HCurve.hxx>

// module includes
#include <BRepAdaptor_Array1OfCurve.hxx>
#include <BRepAdaptor_CompCurve.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_Curve2d.hxx>
#include <BRepAdaptor_HArray1OfCurve.hxx>
#include <BRepAdaptor_HCompCurve.hxx>
#include <BRepAdaptor_HCurve.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepAdaptor_Surface.hxx>

// template related includes
// ./opencascade/BRepAdaptor_Array1OfCurve.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepAdaptor(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepAdaptor"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepAdaptor_HSurface ,opencascade::handle<BRepAdaptor_HSurface>  , Adaptor3d_HSurface >>(m.attr("BRepAdaptor_HSurface"))
        .def(py::init<  >()  )
        .def(py::init< const BRepAdaptor_Surface & >()  , py::arg("S") )
        .def("Set",
             (void (BRepAdaptor_HSurface::*)( const BRepAdaptor_Surface &  ) ) static_cast<void (BRepAdaptor_HSurface::*)( const BRepAdaptor_Surface &  ) >(&BRepAdaptor_HSurface::Set),
             R"#(Sets the field of the GenHSurface.)#"  , py::arg("S"))
        .def("Surface",
             (const Adaptor3d_Surface & (BRepAdaptor_HSurface::*)() const) static_cast<const Adaptor3d_Surface & (BRepAdaptor_HSurface::*)() const>(&BRepAdaptor_HSurface::Surface),
             R"#(Returns a reference to the Surface inside the HSurface. This is redefined from HSurface, cannot be inline.)#" )
        .def("ChangeSurface",
             (BRepAdaptor_Surface & (BRepAdaptor_HSurface::*)() ) static_cast<BRepAdaptor_Surface & (BRepAdaptor_HSurface::*)() >(&BRepAdaptor_HSurface::ChangeSurface),
             R"#(Returns the surface used to create the GenHSurface.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepAdaptor_HSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepAdaptor_HSurface::*)() const>(&BRepAdaptor_HSurface::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepAdaptor_HSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepAdaptor_HSurface::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepAdaptor_CompCurve ,std::unique_ptr<BRepAdaptor_CompCurve>  , Adaptor3d_Curve >>(m.attr("BRepAdaptor_CompCurve"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("W"),  py::arg("KnotByCurvilinearAbcissa")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Wire &,const Standard_Boolean,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("W"),  py::arg("KnotByCurvilinearAbcissa"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol") )
        .def("Initialize",
             (void (BRepAdaptor_CompCurve::*)( const TopoDS_Wire & ,  const Standard_Boolean  ) ) static_cast<void (BRepAdaptor_CompCurve::*)( const TopoDS_Wire & ,  const Standard_Boolean  ) >(&BRepAdaptor_CompCurve::Initialize),
             R"#(Sets the wire <W>.)#"  , py::arg("W"),  py::arg("KnotByCurvilinearAbcissa"))
        .def("Initialize",
             (void (BRepAdaptor_CompCurve::*)( const TopoDS_Wire & ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepAdaptor_CompCurve::*)( const TopoDS_Wire & ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&BRepAdaptor_CompCurve::Initialize),
             R"#(Sets wire <W> and trimmed parameter.)#"  , py::arg("W"),  py::arg("KnotByCurvilinearAbcissa"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("Wire",
             (const TopoDS_Wire & (BRepAdaptor_CompCurve::*)() const) static_cast<const TopoDS_Wire & (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::Wire),
             R"#(Returns the wire.)#" )
        .def("Edge",
             (void (BRepAdaptor_CompCurve::*)( const Standard_Real ,  TopoDS_Edge & ,  Standard_Real &  ) const) static_cast<void (BRepAdaptor_CompCurve::*)( const Standard_Real ,  TopoDS_Edge & ,  Standard_Real &  ) const>(&BRepAdaptor_CompCurve::Edge),
             R"#(returns an edge and one parameter on them corresponding to the parameter U.)#"  , py::arg("U"),  py::arg("E"),  py::arg("UonE"))
        .def("FirstParameter",
             (Standard_Real (BRepAdaptor_CompCurve::*)() const) static_cast<Standard_Real (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (BRepAdaptor_CompCurve::*)() const) static_cast<Standard_Real (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (BRepAdaptor_CompCurve::*)() const) static_cast<GeomAbs_Shape (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (BRepAdaptor_CompCurve::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BRepAdaptor_CompCurve::*)( const GeomAbs_Shape  ) const>(&BRepAdaptor_CompCurve::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BRepAdaptor_CompCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BRepAdaptor_CompCurve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BRepAdaptor_CompCurve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (BRepAdaptor_CompCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (BRepAdaptor_CompCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&BRepAdaptor_CompCurve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (BRepAdaptor_CompCurve::*)() const) static_cast<Standard_Boolean (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (BRepAdaptor_CompCurve::*)() const) static_cast<Standard_Boolean (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (BRepAdaptor_CompCurve::*)() const) static_cast<Standard_Real (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (BRepAdaptor_CompCurve::*)( const Standard_Real  ) const) static_cast<gp_Pnt (BRepAdaptor_CompCurve::*)( const Standard_Real  ) const>(&BRepAdaptor_CompCurve::Value),
             R"#(Computes the point of parameter U on the curve)#"  , py::arg("U"))
        .def("D0",
             (void (BRepAdaptor_CompCurve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (BRepAdaptor_CompCurve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&BRepAdaptor_CompCurve::D0),
             R"#(Computes the point of parameter U.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (BRepAdaptor_CompCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (BRepAdaptor_CompCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&BRepAdaptor_CompCurve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (BRepAdaptor_CompCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BRepAdaptor_CompCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&BRepAdaptor_CompCurve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (BRepAdaptor_CompCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BRepAdaptor_CompCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&BRepAdaptor_CompCurve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (BRepAdaptor_CompCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (BRepAdaptor_CompCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&BRepAdaptor_CompCurve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (BRepAdaptor_CompCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (BRepAdaptor_CompCurve::*)( const Standard_Real  ) const>(&BRepAdaptor_CompCurve::Resolution),
             R"#(returns the parametric resolution)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (BRepAdaptor_CompCurve::*)() const) static_cast<GeomAbs_CurveType (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::GetType),
             R"#(None)#" )
        .def("Line",
             (gp_Lin (BRepAdaptor_CompCurve::*)() const) static_cast<gp_Lin (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (BRepAdaptor_CompCurve::*)() const) static_cast<gp_Circ (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (BRepAdaptor_CompCurve::*)() const) static_cast<gp_Elips (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (BRepAdaptor_CompCurve::*)() const) static_cast<gp_Hypr (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (BRepAdaptor_CompCurve::*)() const) static_cast<gp_Parab (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (BRepAdaptor_CompCurve::*)() const) static_cast<Standard_Integer (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (BRepAdaptor_CompCurve::*)() const) static_cast<Standard_Boolean (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (BRepAdaptor_CompCurve::*)() const) static_cast<Standard_Integer (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (BRepAdaptor_CompCurve::*)() const) static_cast<Standard_Integer (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (BRepAdaptor_CompCurve::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (BRepAdaptor_CompCurve::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (BRepAdaptor_CompCurve::*)() const>(&BRepAdaptor_CompCurve::BSpline),
             R"#(None)#" )
;


    static_cast<py::class_<BRepAdaptor_Surface ,std::unique_ptr<BRepAdaptor_Surface>  , Adaptor3d_Surface >>(m.attr("BRepAdaptor_Surface"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,const Standard_Boolean >()  , py::arg("F"),  py::arg("R")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Initialize",
             (void (BRepAdaptor_Surface::*)( const TopoDS_Face & ,  const Standard_Boolean  ) ) static_cast<void (BRepAdaptor_Surface::*)( const TopoDS_Face & ,  const Standard_Boolean  ) >(&BRepAdaptor_Surface::Initialize),
             R"#(Sets the surface to the geometry of <F>.)#"  , py::arg("F"),  py::arg("Restriction")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Surface",
             (const GeomAdaptor_Surface & (BRepAdaptor_Surface::*)() const) static_cast<const GeomAdaptor_Surface & (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Surface),
             R"#(Returns the surface.)#" )
        .def("ChangeSurface",
             (GeomAdaptor_Surface & (BRepAdaptor_Surface::*)() ) static_cast<GeomAdaptor_Surface & (BRepAdaptor_Surface::*)() >(&BRepAdaptor_Surface::ChangeSurface),
             R"#(Returns the surface.)#" )
        .def("Trsf",
             (const gp_Trsf & (BRepAdaptor_Surface::*)() const) static_cast<const gp_Trsf & (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Trsf),
             R"#(Returns the surface coordinate system.)#" )
        .def("Face",
             (const TopoDS_Face & (BRepAdaptor_Surface::*)() const) static_cast<const TopoDS_Face & (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Face),
             R"#(Returns the face.)#" )
        .def("Tolerance",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Tolerance),
             R"#(Returns the face tolerance.)#" )
        .def("FirstUParameter",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::LastVParameter),
             R"#(None)#" )
        .def("UContinuity",
             (GeomAbs_Shape (BRepAdaptor_Surface::*)() const) static_cast<GeomAbs_Shape (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::UContinuity),
             R"#(None)#" )
        .def("VContinuity",
             (GeomAbs_Shape (BRepAdaptor_Surface::*)() const) static_cast<GeomAbs_Shape (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::VContinuity),
             R"#(None)#" )
        .def("NbUIntervals",
             (Standard_Integer (BRepAdaptor_Surface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)( const GeomAbs_Shape  ) const>(&BRepAdaptor_Surface::NbUIntervals),
             R"#(If necessary, breaks the surface in U intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("NbVIntervals",
             (Standard_Integer (BRepAdaptor_Surface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)( const GeomAbs_Shape  ) const>(&BRepAdaptor_Surface::NbVIntervals),
             R"#(If necessary, breaks the surface in V intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("UIntervals",
             (void (BRepAdaptor_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BRepAdaptor_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BRepAdaptor_Surface::UIntervals),
             R"#(Returns the intervals with the requested continuity in the U direction.)#"  , py::arg("T"),  py::arg("S"))
        .def("VIntervals",
             (void (BRepAdaptor_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BRepAdaptor_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BRepAdaptor_Surface::VIntervals),
             R"#(Returns the intervals with the requested continuity in the V direction.)#"  , py::arg("T"),  py::arg("S"))
        .def("UTrim",
             (opencascade::handle<Adaptor3d_HSurface> (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&BRepAdaptor_Surface::UTrim),
             R"#(Returns a surface trimmed in the U direction equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("VTrim",
             (opencascade::handle<Adaptor3d_HSurface> (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&BRepAdaptor_Surface::VTrim),
             R"#(Returns a surface trimmed in the V direction between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsUClosed",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsVClosed),
             R"#(None)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsUPeriodic),
             R"#(None)#" )
        .def("UPeriod",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::UPeriod),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsVPeriodic),
             R"#(None)#" )
        .def("VPeriod",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::VPeriod),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<gp_Pnt (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real  ) const>(&BRepAdaptor_Surface::Value),
             R"#(Computes the point of parameters U,V on the surface.)#"  , py::arg("U"),  py::arg("V"))
        .def("D0",
             (void (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&BRepAdaptor_Surface::D0),
             R"#(Computes the point of parameters U,V on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&BRepAdaptor_Surface::D1),
             R"#(Computes the point and the first derivatives on the surface. Raised if the continuity of the current intervals is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&BRepAdaptor_Surface::D2),
             R"#(Computes the point, the first and second derivatives on the surface. Raised if the continuity of the current intervals is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&BRepAdaptor_Surface::D3),
             R"#(Computes the point, the first, second and third derivatives on the surface. Raised if the continuity of the current intervals is not C3.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (BRepAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&BRepAdaptor_Surface::DN),
             R"#(Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V). Raised if the current U interval is not not CNu and the current V interval is not CNv. Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("UResolution",
             (Standard_Real (BRepAdaptor_Surface::*)( const Standard_Real  ) const) static_cast<Standard_Real (BRepAdaptor_Surface::*)( const Standard_Real  ) const>(&BRepAdaptor_Surface::UResolution),
             R"#(Returns the parametric U resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("VResolution",
             (Standard_Real (BRepAdaptor_Surface::*)( const Standard_Real  ) const) static_cast<Standard_Real (BRepAdaptor_Surface::*)( const Standard_Real  ) const>(&BRepAdaptor_Surface::VResolution),
             R"#(Returns the parametric V resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_SurfaceType (BRepAdaptor_Surface::*)() const) static_cast<GeomAbs_SurfaceType (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::GetType),
             R"#(Returns the type of the surface : Plane, Cylinder, Cone, Sphere, Torus, BezierSurface, BSplineSurface, SurfaceOfRevolution, SurfaceOfExtrusion, OtherSurface)#" )
        .def("Plane",
             (gp_Pln (BRepAdaptor_Surface::*)() const) static_cast<gp_Pln (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Plane),
             R"#(None)#" )
        .def("Cylinder",
             (gp_Cylinder (BRepAdaptor_Surface::*)() const) static_cast<gp_Cylinder (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (BRepAdaptor_Surface::*)() const) static_cast<gp_Cone (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Cone),
             R"#(None)#" )
        .def("Sphere",
             (gp_Sphere (BRepAdaptor_Surface::*)() const) static_cast<gp_Sphere (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Sphere),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (BRepAdaptor_Surface::*)() const) static_cast<gp_Torus (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Torus),
             R"#(None)#" )
        .def("UDegree",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::UDegree),
             R"#(None)#" )
        .def("NbUPoles",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::NbUPoles),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::VDegree),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::NbVPoles),
             R"#(None)#" )
        .def("NbUKnots",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::NbUKnots),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::NbVKnots),
             R"#(None)#" )
        .def("IsURational",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsURational),
             R"#(None)#" )
        .def("IsVRational",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsVRational),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierSurface> (BRepAdaptor_Surface::*)() const) static_cast<opencascade::handle<Geom_BezierSurface> (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineSurface> (BRepAdaptor_Surface::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::BSpline),
             R"#(Warning : this will make a copy of the BSpline Surface since it applies to it the myTsrf transformation Be Carefull when using this method)#" )
        .def("AxeOfRevolution",
             (gp_Ax1 (BRepAdaptor_Surface::*)() const) static_cast<gp_Ax1 (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::AxeOfRevolution),
             R"#(None)#" )
        .def("Direction",
             (gp_Dir (BRepAdaptor_Surface::*)() const) static_cast<gp_Dir (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::Direction),
             R"#(None)#" )
        .def("BasisCurve",
             (opencascade::handle<Adaptor3d_HCurve> (BRepAdaptor_Surface::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::BasisCurve),
             R"#(only for SurfaceOfExtrusion and SurfaceOfRevolution Warning: this will make a copy of the underlying curve since it applies to it the transformation myTrsf. Be carefull when using this method.)#" )
        .def("BasisSurface",
             (opencascade::handle<Adaptor3d_HSurface> (BRepAdaptor_Surface::*)() const) static_cast<opencascade::handle<Adaptor3d_HSurface> (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::BasisSurface),
             R"#(None)#" )
        .def("OffsetValue",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::OffsetValue),
             R"#(None)#" )
        .def("FirstUParameter",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::LastVParameter),
             R"#(None)#" )
        .def("UContinuity",
             (GeomAbs_Shape (BRepAdaptor_Surface::*)() const) static_cast<GeomAbs_Shape (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::UContinuity),
             R"#(None)#" )
        .def("VContinuity",
             (GeomAbs_Shape (BRepAdaptor_Surface::*)() const) static_cast<GeomAbs_Shape (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::VContinuity),
             R"#(None)#" )
        .def("NbUIntervals",
             (Standard_Integer (BRepAdaptor_Surface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)( const GeomAbs_Shape  ) const>(&BRepAdaptor_Surface::NbUIntervals),
             R"#(If necessary, breaks the surface in U intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("NbVIntervals",
             (Standard_Integer (BRepAdaptor_Surface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)( const GeomAbs_Shape  ) const>(&BRepAdaptor_Surface::NbVIntervals),
             R"#(If necessary, breaks the surface in V intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("IsUClosed",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsVClosed),
             R"#(None)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsUPeriodic),
             R"#(None)#" )
        .def("UPeriod",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::UPeriod),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsVPeriodic),
             R"#(None)#" )
        .def("VPeriod",
             (Standard_Real (BRepAdaptor_Surface::*)() const) static_cast<Standard_Real (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::VPeriod),
             R"#(None)#" )
        .def("UResolution",
             (Standard_Real (BRepAdaptor_Surface::*)( const Standard_Real  ) const) static_cast<Standard_Real (BRepAdaptor_Surface::*)( const Standard_Real  ) const>(&BRepAdaptor_Surface::UResolution),
             R"#(Returns the parametric U resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("VResolution",
             (Standard_Real (BRepAdaptor_Surface::*)( const Standard_Real  ) const) static_cast<Standard_Real (BRepAdaptor_Surface::*)( const Standard_Real  ) const>(&BRepAdaptor_Surface::VResolution),
             R"#(Returns the parametric V resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_SurfaceType (BRepAdaptor_Surface::*)() const) static_cast<GeomAbs_SurfaceType (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::GetType),
             R"#(Returns the type of the surface : Plane, Cylinder, Cone, Sphere, Torus, BezierSurface, BSplineSurface, SurfaceOfRevolution, SurfaceOfExtrusion, OtherSurface)#" )
        .def("UDegree",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::UDegree),
             R"#(None)#" )
        .def("NbUPoles",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::NbUPoles),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::VDegree),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::NbVPoles),
             R"#(None)#" )
        .def("NbUKnots",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::NbUKnots),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (BRepAdaptor_Surface::*)() const) static_cast<Standard_Integer (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::NbVKnots),
             R"#(None)#" )
        .def("IsURational",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsURational),
             R"#(None)#" )
        .def("IsVRational",
             (Standard_Boolean (BRepAdaptor_Surface::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Surface::*)() const>(&BRepAdaptor_Surface::IsVRational),
             R"#(None)#" )
;


    static_cast<py::class_<BRepAdaptor_HCompCurve ,opencascade::handle<BRepAdaptor_HCompCurve>  , Adaptor3d_HCurve >>(m.attr("BRepAdaptor_HCompCurve"))
        .def(py::init<  >()  )
        .def(py::init< const BRepAdaptor_CompCurve & >()  , py::arg("C") )
        .def("Set",
             (void (BRepAdaptor_HCompCurve::*)( const BRepAdaptor_CompCurve &  ) ) static_cast<void (BRepAdaptor_HCompCurve::*)( const BRepAdaptor_CompCurve &  ) >(&BRepAdaptor_HCompCurve::Set),
             R"#(Sets the field of the GenHCurve.)#"  , py::arg("C"))
        .def("Curve",
             (const Adaptor3d_Curve & (BRepAdaptor_HCompCurve::*)() const) static_cast<const Adaptor3d_Curve & (BRepAdaptor_HCompCurve::*)() const>(&BRepAdaptor_HCompCurve::Curve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("GetCurve",
             (Adaptor3d_Curve & (BRepAdaptor_HCompCurve::*)() ) static_cast<Adaptor3d_Curve & (BRepAdaptor_HCompCurve::*)() >(&BRepAdaptor_HCompCurve::GetCurve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("ChangeCurve",
             (BRepAdaptor_CompCurve & (BRepAdaptor_HCompCurve::*)() ) static_cast<BRepAdaptor_CompCurve & (BRepAdaptor_HCompCurve::*)() >(&BRepAdaptor_HCompCurve::ChangeCurve),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepAdaptor_HCompCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepAdaptor_HCompCurve::*)() const>(&BRepAdaptor_HCompCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepAdaptor_HCompCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepAdaptor_HCompCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepAdaptor_Curve2d ,std::unique_ptr<BRepAdaptor_Curve2d>  , Geom2dAdaptor_Curve >>(m.attr("BRepAdaptor_Curve2d"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Face & >()  , py::arg("E"),  py::arg("F") )
        .def("Initialize",
             (void (BRepAdaptor_Curve2d::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepAdaptor_Curve2d::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepAdaptor_Curve2d::Initialize),
             R"#(Initialize with the pcurve of <E> on <F>.)#"  , py::arg("E"),  py::arg("F"))
        .def("Edge",
             (const TopoDS_Edge & (BRepAdaptor_Curve2d::*)() const) static_cast<const TopoDS_Edge & (BRepAdaptor_Curve2d::*)() const>(&BRepAdaptor_Curve2d::Edge),
             R"#(Returns the Edge.)#" )
        .def("Face",
             (const TopoDS_Face & (BRepAdaptor_Curve2d::*)() const) static_cast<const TopoDS_Face & (BRepAdaptor_Curve2d::*)() const>(&BRepAdaptor_Curve2d::Face),
             R"#(Returns the Face.)#" )
;


    static_cast<py::class_<BRepAdaptor_Curve ,std::unique_ptr<BRepAdaptor_Curve>  , Adaptor3d_Curve >>(m.attr("BRepAdaptor_Curve"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge & >()  , py::arg("E") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Face & >()  , py::arg("E"),  py::arg("F") )
        .def("Initialize",
             (void (BRepAdaptor_Curve::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepAdaptor_Curve::*)( const TopoDS_Edge &  ) >(&BRepAdaptor_Curve::Initialize),
             R"#(Sets the Curve <me> to acces to the geometry of edge <E>.)#"  , py::arg("E"))
        .def("Initialize",
             (void (BRepAdaptor_Curve::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) ) static_cast<void (BRepAdaptor_Curve::*)( const TopoDS_Edge & ,  const TopoDS_Face &  ) >(&BRepAdaptor_Curve::Initialize),
             R"#(Sets the Curve <me> to acces to the geometry of edge <E>. The geometry will be computed using the parametric curve of <E> on the face <F>. An Error is raised if the edge does not have a pcurve on the face.)#"  , py::arg("E"),  py::arg("F"))
        .def("Trsf",
             (const gp_Trsf & (BRepAdaptor_Curve::*)() const) static_cast<const gp_Trsf & (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Trsf),
             R"#(Returns the coordinate system of the curve.)#" )
        .def("Is3DCurve",
             (Standard_Boolean (BRepAdaptor_Curve::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Is3DCurve),
             R"#(Returns True if the edge geometry is computed from a 3D curve.)#" )
        .def("IsCurveOnSurface",
             (Standard_Boolean (BRepAdaptor_Curve::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::IsCurveOnSurface),
             R"#(Returns True if the edge geometry is computed from a pcurve on a surface.)#" )
        .def("Curve",
             (const GeomAdaptor_Curve & (BRepAdaptor_Curve::*)() const) static_cast<const GeomAdaptor_Curve & (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Curve),
             R"#(Returns the Curve of the edge.)#" )
        .def("CurveOnSurface",
             (const Adaptor3d_CurveOnSurface & (BRepAdaptor_Curve::*)() const) static_cast<const Adaptor3d_CurveOnSurface & (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::CurveOnSurface),
             R"#(Returns the CurveOnSurface of the edge.)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepAdaptor_Curve::*)() const) static_cast<const TopoDS_Edge & (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Edge),
             R"#(Returns the edge.)#" )
        .def("Tolerance",
             (Standard_Real (BRepAdaptor_Curve::*)() const) static_cast<Standard_Real (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Tolerance),
             R"#(Returns the edge tolerance.)#" )
        .def("FirstParameter",
             (Standard_Real (BRepAdaptor_Curve::*)() const) static_cast<Standard_Real (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (BRepAdaptor_Curve::*)() const) static_cast<Standard_Real (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (BRepAdaptor_Curve::*)() const) static_cast<GeomAbs_Shape (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (BRepAdaptor_Curve::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (BRepAdaptor_Curve::*)( const GeomAbs_Shape  ) const>(&BRepAdaptor_Curve::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BRepAdaptor_Curve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (BRepAdaptor_Curve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&BRepAdaptor_Curve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (BRepAdaptor_Curve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (BRepAdaptor_Curve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&BRepAdaptor_Curve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (BRepAdaptor_Curve::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (BRepAdaptor_Curve::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (BRepAdaptor_Curve::*)() const) static_cast<Standard_Real (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (BRepAdaptor_Curve::*)( const Standard_Real  ) const) static_cast<gp_Pnt (BRepAdaptor_Curve::*)( const Standard_Real  ) const>(&BRepAdaptor_Curve::Value),
             R"#(Computes the point of parameter U on the curve)#"  , py::arg("U"))
        .def("D0",
             (void (BRepAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (BRepAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&BRepAdaptor_Curve::D0),
             R"#(Computes the point of parameter U.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (BRepAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (BRepAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&BRepAdaptor_Curve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (BRepAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BRepAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&BRepAdaptor_Curve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (BRepAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (BRepAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&BRepAdaptor_Curve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (BRepAdaptor_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (BRepAdaptor_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&BRepAdaptor_Curve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (BRepAdaptor_Curve::*)( const Standard_Real  ) const) static_cast<Standard_Real (BRepAdaptor_Curve::*)( const Standard_Real  ) const>(&BRepAdaptor_Curve::Resolution),
             R"#(returns the parametric resolution)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (BRepAdaptor_Curve::*)() const) static_cast<GeomAbs_CurveType (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::GetType),
             R"#(None)#" )
        .def("Line",
             (gp_Lin (BRepAdaptor_Curve::*)() const) static_cast<gp_Lin (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (BRepAdaptor_Curve::*)() const) static_cast<gp_Circ (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (BRepAdaptor_Curve::*)() const) static_cast<gp_Elips (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (BRepAdaptor_Curve::*)() const) static_cast<gp_Hypr (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (BRepAdaptor_Curve::*)() const) static_cast<gp_Parab (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (BRepAdaptor_Curve::*)() const) static_cast<Standard_Integer (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (BRepAdaptor_Curve::*)() const) static_cast<Standard_Boolean (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (BRepAdaptor_Curve::*)() const) static_cast<Standard_Integer (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (BRepAdaptor_Curve::*)() const) static_cast<Standard_Integer (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (BRepAdaptor_Curve::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::Bezier),
             R"#(Warning : This will make a copy of the Bezier Curve since it applies to it myTsrf . Be carefull when using this method)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (BRepAdaptor_Curve::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::BSpline),
             R"#(Warning : This will make a copy of the BSpline Curve since it applies to it myTsrf . Be carefull when using this method)#" )
        .def("OffsetCurve",
             (opencascade::handle<Geom_OffsetCurve> (BRepAdaptor_Curve::*)() const) static_cast<opencascade::handle<Geom_OffsetCurve> (BRepAdaptor_Curve::*)() const>(&BRepAdaptor_Curve::OffsetCurve),
             R"#(None)#" )
;


    static_cast<py::class_<BRepAdaptor_HArray1OfCurve ,std::unique_ptr<BRepAdaptor_HArray1OfCurve>  >>(m.attr("BRepAdaptor_HArray1OfCurve"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const BRepAdaptor_Curve & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<BRepAdaptor_Curve> & >()  , py::arg("theOther") )
        .def("Array1",
             (const BRepAdaptor_Array1OfCurve & (BRepAdaptor_HArray1OfCurve::*)() const) static_cast<const BRepAdaptor_Array1OfCurve & (BRepAdaptor_HArray1OfCurve::*)() const>(&BRepAdaptor_HArray1OfCurve::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (BRepAdaptor_Array1OfCurve & (BRepAdaptor_HArray1OfCurve::*)() ) static_cast<BRepAdaptor_Array1OfCurve & (BRepAdaptor_HArray1OfCurve::*)() >(&BRepAdaptor_HArray1OfCurve::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepAdaptor_HArray1OfCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepAdaptor_HArray1OfCurve::*)() const>(&BRepAdaptor_HArray1OfCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepAdaptor_HArray1OfCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepAdaptor_HArray1OfCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepAdaptor_HCurve ,opencascade::handle<BRepAdaptor_HCurve>  , Adaptor3d_HCurve >>(m.attr("BRepAdaptor_HCurve"))
        .def(py::init<  >()  )
        .def(py::init< const BRepAdaptor_Curve & >()  , py::arg("C") )
        .def("Set",
             (void (BRepAdaptor_HCurve::*)( const BRepAdaptor_Curve &  ) ) static_cast<void (BRepAdaptor_HCurve::*)( const BRepAdaptor_Curve &  ) >(&BRepAdaptor_HCurve::Set),
             R"#(Sets the field of the GenHCurve.)#"  , py::arg("C"))
        .def("Curve",
             (const Adaptor3d_Curve & (BRepAdaptor_HCurve::*)() const) static_cast<const Adaptor3d_Curve & (BRepAdaptor_HCurve::*)() const>(&BRepAdaptor_HCurve::Curve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("GetCurve",
             (Adaptor3d_Curve & (BRepAdaptor_HCurve::*)() ) static_cast<Adaptor3d_Curve & (BRepAdaptor_HCurve::*)() >(&BRepAdaptor_HCurve::GetCurve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("ChangeCurve",
             (BRepAdaptor_Curve & (BRepAdaptor_HCurve::*)() ) static_cast<BRepAdaptor_Curve & (BRepAdaptor_HCurve::*)() >(&BRepAdaptor_HCurve::ChangeCurve),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepAdaptor_HCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepAdaptor_HCurve::*)() const>(&BRepAdaptor_HCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepAdaptor_HCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepAdaptor_HCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<BRepAdaptor_HCurve2d ,opencascade::handle<BRepAdaptor_HCurve2d>  , Adaptor2d_HCurve2d >>(m.attr("BRepAdaptor_HCurve2d"))
        .def(py::init<  >()  )
        .def(py::init< const BRepAdaptor_Curve2d & >()  , py::arg("C") )
        .def("Set",
             (void (BRepAdaptor_HCurve2d::*)( const BRepAdaptor_Curve2d &  ) ) static_cast<void (BRepAdaptor_HCurve2d::*)( const BRepAdaptor_Curve2d &  ) >(&BRepAdaptor_HCurve2d::Set),
             R"#(Sets the field of the GenHCurve2d.)#"  , py::arg("C"))
        .def("Curve2d",
             (const Adaptor2d_Curve2d & (BRepAdaptor_HCurve2d::*)() const) static_cast<const Adaptor2d_Curve2d & (BRepAdaptor_HCurve2d::*)() const>(&BRepAdaptor_HCurve2d::Curve2d),
             R"#(Returns the curve used to create the GenHCurve2d. This is redefined from HCurve2d, cannot be inline.)#" )
        .def("ChangeCurve2d",
             (BRepAdaptor_Curve2d & (BRepAdaptor_HCurve2d::*)() ) static_cast<BRepAdaptor_Curve2d & (BRepAdaptor_HCurve2d::*)() >(&BRepAdaptor_HCurve2d::ChangeCurve2d),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepAdaptor_HCurve2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepAdaptor_HCurve2d::*)() const>(&BRepAdaptor_HCurve2d::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepAdaptor_HCurve2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepAdaptor_HCurve2d::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/BRepAdaptor_HSurface.hxx
// ./opencascade/BRepAdaptor_Curve.hxx
// ./opencascade/BRepAdaptor_CompCurve.hxx
// ./opencascade/BRepAdaptor_HCurve.hxx
// ./opencascade/BRepAdaptor_Surface.hxx
// ./opencascade/BRepAdaptor_HArray1OfCurve.hxx
// ./opencascade/BRepAdaptor_HCompCurve.hxx
// ./opencascade/BRepAdaptor_HCurve2d.hxx
// ./opencascade/BRepAdaptor_Curve2d.hxx
// ./opencascade/BRepAdaptor_Array1OfCurve.hxx

// operators

// register typdefs
// ./opencascade/BRepAdaptor_HSurface.hxx
// ./opencascade/BRepAdaptor_Curve.hxx
// ./opencascade/BRepAdaptor_CompCurve.hxx
// ./opencascade/BRepAdaptor_HCurve.hxx
// ./opencascade/BRepAdaptor_Surface.hxx
// ./opencascade/BRepAdaptor_HArray1OfCurve.hxx
// ./opencascade/BRepAdaptor_HCompCurve.hxx
// ./opencascade/BRepAdaptor_HCurve2d.hxx
// ./opencascade/BRepAdaptor_Curve2d.hxx
// ./opencascade/BRepAdaptor_Array1OfCurve.hxx
    register_template_NCollection_Array1<BRepAdaptor_Curve>(m,"BRepAdaptor_Array1OfCurve");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
