
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
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_TypeMismatch.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Lin2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>

// module includes
#include <Adaptor2d_Curve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor2d_HLine2d.hxx>
#include <Adaptor2d_HOffsetCurve.hxx>
#include <Adaptor2d_Line2d.hxx>
#include <Adaptor2d_OffsetCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Adaptor2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Adaptor2d"));


//Python trampoline classes
    class Py_Adaptor2d_HCurve2d : public Adaptor2d_HCurve2d{
    public:
        using Adaptor2d_HCurve2d::Adaptor2d_HCurve2d;


        // public pure virtual
        const Adaptor2d_Curve2d & Curve2d() const  override { PYBIND11_OVERLOAD_PURE(const Adaptor2d_Curve2d &,Adaptor2d_HCurve2d,Curve2d,) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<Adaptor2d_Curve2d , shared_ptr<Adaptor2d_Curve2d>>(m,"Adaptor2d_Curve2d");

    static_cast<py::class_<Adaptor2d_Curve2d , shared_ptr<Adaptor2d_Curve2d> >>(m.attr("Adaptor2d_Curve2d"))
    // constructors
    // custom constructors
    // methods
        .def("FirstParameter",
             (Standard_Real (Adaptor2d_Curve2d::*)() const) static_cast<Standard_Real (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor2d_Curve2d::*)() const) static_cast<Standard_Real (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Adaptor2d_Curve2d::*)() const) static_cast<GeomAbs_Shape (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Adaptor2d_Curve2d::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Adaptor2d_Curve2d::*)( const GeomAbs_Shape ) const>(&Adaptor2d_Curve2d::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("Intervals",
             (void (Adaptor2d_Curve2d::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Adaptor2d_Curve2d::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Adaptor2d_Curve2d::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor2d_HCurve2d> (Adaptor2d_Curve2d::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (Adaptor2d_Curve2d::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Adaptor2d_Curve2d::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Adaptor2d_Curve2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Adaptor2d_Curve2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Adaptor2d_Curve2d::*)() const) static_cast<Standard_Real (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (Adaptor2d_Curve2d::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (Adaptor2d_Curve2d::*)( const Standard_Real ) const>(&Adaptor2d_Curve2d::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (Adaptor2d_Curve2d::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Adaptor2d_Curve2d::*)( const Standard_Real , gp_Pnt2d & ) const>(&Adaptor2d_Curve2d::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Adaptor2d_Curve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_Curve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Adaptor2d_Curve2d::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Adaptor2d_Curve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_Curve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Adaptor2d_Curve2d::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Adaptor2d_Curve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_Curve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Adaptor2d_Curve2d::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Adaptor2d_Curve2d::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Adaptor2d_Curve2d::*)( const Standard_Real , const Standard_Integer ) const>(&Adaptor2d_Curve2d::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Adaptor2d_Curve2d::*)( const Standard_Real ) const) static_cast<Standard_Real (Adaptor2d_Curve2d::*)( const Standard_Real ) const>(&Adaptor2d_Curve2d::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (Adaptor2d_Curve2d::*)() const) static_cast<GeomAbs_CurveType (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin2d (Adaptor2d_Curve2d::*)() const) static_cast<gp_Lin2d (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ2d (Adaptor2d_Curve2d::*)() const) static_cast<gp_Circ2d (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips2d (Adaptor2d_Curve2d::*)() const) static_cast<gp_Elips2d (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr2d (Adaptor2d_Curve2d::*)() const) static_cast<gp_Hypr2d (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab2d (Adaptor2d_Curve2d::*)() const) static_cast<gp_Parab2d (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Adaptor2d_Curve2d::*)() const) static_cast<Standard_Integer (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Adaptor2d_Curve2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Adaptor2d_Curve2d::*)() const) static_cast<Standard_Integer (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Adaptor2d_Curve2d::*)() const) static_cast<Standard_Integer (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::NbKnots),
             R"#(None)#" )
        .def("NbSamples",
             (Standard_Integer (Adaptor2d_Curve2d::*)() const) static_cast<Standard_Integer (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::NbSamples),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom2d_BezierCurve> (Adaptor2d_Curve2d::*)() const) static_cast<opencascade::handle<Geom2d_BezierCurve> (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (Adaptor2d_Curve2d::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Adaptor2d_Curve2d::*)() const>(&Adaptor2d_Curve2d::BSpline),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Adaptor2d_HCurve2d ,opencascade::handle<Adaptor2d_HCurve2d>,Py_Adaptor2d_HCurve2d , Standard_Transient>>(m.attr("Adaptor2d_HCurve2d"))
    // constructors
    // custom constructors
    // methods
        .def("Curve2d",
             (const Adaptor2d_Curve2d & (Adaptor2d_HCurve2d::*)() const) static_cast<const Adaptor2d_Curve2d & (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Curve2d),
             R"#(Returns a reference to the Curve2d inside the HCurve2d.)#" )
        .def("FirstParameter",
             (Standard_Real (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Real (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Real (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Adaptor2d_HCurve2d::*)() const) static_cast<GeomAbs_Shape (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Adaptor2d_HCurve2d::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Adaptor2d_HCurve2d::*)( const GeomAbs_Shape ) const>(&Adaptor2d_HCurve2d::NbIntervals),
             R"#(None)#"  , py::arg("S"))
        .def("Intervals",
             (void (Adaptor2d_HCurve2d::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Adaptor2d_HCurve2d::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Adaptor2d_HCurve2d::Intervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor2d_HCurve2d> (Adaptor2d_HCurve2d::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (Adaptor2d_HCurve2d::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Adaptor2d_HCurve2d::Trim),
             R"#(If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Real (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (Adaptor2d_HCurve2d::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (Adaptor2d_HCurve2d::*)( const Standard_Real ) const>(&Adaptor2d_HCurve2d::Value),
             R"#(None)#"  , py::arg("U"))
        .def("D0",
             (void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & ) const>(&Adaptor2d_HCurve2d::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Adaptor2d_HCurve2d::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Adaptor2d_HCurve2d::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Adaptor2d_HCurve2d::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Adaptor2d_HCurve2d::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Adaptor2d_HCurve2d::*)( const Standard_Real , const Standard_Integer ) const>(&Adaptor2d_HCurve2d::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Adaptor2d_HCurve2d::*)( const Standard_Real ) const) static_cast<Standard_Real (Adaptor2d_HCurve2d::*)( const Standard_Real ) const>(&Adaptor2d_HCurve2d::Resolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (Adaptor2d_HCurve2d::*)() const) static_cast<GeomAbs_CurveType (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::GetType),
             R"#(None)#" )
        .def("Line",
             (gp_Lin2d (Adaptor2d_HCurve2d::*)() const) static_cast<gp_Lin2d (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ2d (Adaptor2d_HCurve2d::*)() const) static_cast<gp_Circ2d (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips2d (Adaptor2d_HCurve2d::*)() const) static_cast<gp_Elips2d (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr2d (Adaptor2d_HCurve2d::*)() const) static_cast<gp_Hypr2d (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab2d (Adaptor2d_HCurve2d::*)() const) static_cast<gp_Parab2d (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Integer (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Integer (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Integer (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom2d_BezierCurve> (Adaptor2d_HCurve2d::*)() const) static_cast<opencascade::handle<Geom2d_BezierCurve> (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (Adaptor2d_HCurve2d::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::BSpline),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Adaptor2d_HCurve2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::DynamicType),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Real (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Real (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Adaptor2d_HCurve2d::*)() const) static_cast<GeomAbs_Shape (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Adaptor2d_HCurve2d::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Adaptor2d_HCurve2d::*)( const GeomAbs_Shape ) const>(&Adaptor2d_HCurve2d::NbIntervals),
             R"#(None)#"  , py::arg("S"))
        .def("Intervals",
             (void (Adaptor2d_HCurve2d::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Adaptor2d_HCurve2d::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Adaptor2d_HCurve2d::Intervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor2d_HCurve2d> (Adaptor2d_HCurve2d::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (Adaptor2d_HCurve2d::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Adaptor2d_HCurve2d::Trim),
             R"#(If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Real (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (Adaptor2d_HCurve2d::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (Adaptor2d_HCurve2d::*)( const Standard_Real ) const>(&Adaptor2d_HCurve2d::Value),
             R"#(None)#"  , py::arg("U"))
        .def("D0",
             (void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & ) const>(&Adaptor2d_HCurve2d::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Adaptor2d_HCurve2d::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Adaptor2d_HCurve2d::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_HCurve2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Adaptor2d_HCurve2d::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Adaptor2d_HCurve2d::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Adaptor2d_HCurve2d::*)( const Standard_Real , const Standard_Integer ) const>(&Adaptor2d_HCurve2d::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Adaptor2d_HCurve2d::*)( const Standard_Real ) const) static_cast<Standard_Real (Adaptor2d_HCurve2d::*)( const Standard_Real ) const>(&Adaptor2d_HCurve2d::Resolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (Adaptor2d_HCurve2d::*)() const) static_cast<GeomAbs_CurveType (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::GetType),
             R"#(None)#" )
        .def("Line",
             (gp_Lin2d (Adaptor2d_HCurve2d::*)() const) static_cast<gp_Lin2d (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ2d (Adaptor2d_HCurve2d::*)() const) static_cast<gp_Circ2d (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips2d (Adaptor2d_HCurve2d::*)() const) static_cast<gp_Elips2d (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr2d (Adaptor2d_HCurve2d::*)() const) static_cast<gp_Hypr2d (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab2d (Adaptor2d_HCurve2d::*)() const) static_cast<gp_Parab2d (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Integer (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Integer (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Adaptor2d_HCurve2d::*)() const) static_cast<Standard_Integer (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom2d_BezierCurve> (Adaptor2d_HCurve2d::*)() const) static_cast<opencascade::handle<Geom2d_BezierCurve> (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (Adaptor2d_HCurve2d::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Adaptor2d_HCurve2d::*)() const>(&Adaptor2d_HCurve2d::BSpline),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Adaptor2d_HCurve2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Adaptor2d_HCurve2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Adaptor2d_HLine2d ,opencascade::handle<Adaptor2d_HLine2d> , Adaptor2d_HCurve2d>>(m.attr("Adaptor2d_HLine2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor2d_Line2d & >()  , py::arg("C") )
    // custom constructors
    // methods
        .def("Set",
             (void (Adaptor2d_HLine2d::*)( const Adaptor2d_Line2d & ) ) static_cast<void (Adaptor2d_HLine2d::*)( const Adaptor2d_Line2d & ) >(&Adaptor2d_HLine2d::Set),
             R"#(Sets the field of the GenHCurve2d.)#"  , py::arg("C"))
        .def("Curve2d",
             (const Adaptor2d_Curve2d & (Adaptor2d_HLine2d::*)() const) static_cast<const Adaptor2d_Curve2d & (Adaptor2d_HLine2d::*)() const>(&Adaptor2d_HLine2d::Curve2d),
             R"#(Returns the curve used to create the GenHCurve2d. This is redefined from HCurve2d, cannot be inline.)#" )
        .def("ChangeCurve2d",
             (Adaptor2d_Line2d & (Adaptor2d_HLine2d::*)() ) static_cast<Adaptor2d_Line2d & (Adaptor2d_HLine2d::*)() >(&Adaptor2d_HLine2d::ChangeCurve2d),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Adaptor2d_HLine2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Adaptor2d_HLine2d::*)() const>(&Adaptor2d_HLine2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Adaptor2d_HLine2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Adaptor2d_HLine2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Adaptor2d_HOffsetCurve ,opencascade::handle<Adaptor2d_HOffsetCurve> , Adaptor2d_HCurve2d>>(m.attr("Adaptor2d_HOffsetCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Adaptor2d_OffsetCurve & >()  , py::arg("C") )
    // custom constructors
    // methods
        .def("Set",
             (void (Adaptor2d_HOffsetCurve::*)( const Adaptor2d_OffsetCurve & ) ) static_cast<void (Adaptor2d_HOffsetCurve::*)( const Adaptor2d_OffsetCurve & ) >(&Adaptor2d_HOffsetCurve::Set),
             R"#(Sets the field of the GenHCurve2d.)#"  , py::arg("C"))
        .def("Curve2d",
             (const Adaptor2d_Curve2d & (Adaptor2d_HOffsetCurve::*)() const) static_cast<const Adaptor2d_Curve2d & (Adaptor2d_HOffsetCurve::*)() const>(&Adaptor2d_HOffsetCurve::Curve2d),
             R"#(Returns the curve used to create the GenHCurve2d. This is redefined from HCurve2d, cannot be inline.)#" )
        .def("ChangeCurve2d",
             (Adaptor2d_OffsetCurve & (Adaptor2d_HOffsetCurve::*)() ) static_cast<Adaptor2d_OffsetCurve & (Adaptor2d_HOffsetCurve::*)() >(&Adaptor2d_HOffsetCurve::ChangeCurve2d),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Adaptor2d_HOffsetCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Adaptor2d_HOffsetCurve::*)() const>(&Adaptor2d_HOffsetCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Adaptor2d_HOffsetCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Adaptor2d_HOffsetCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Adaptor2d_Line2d , shared_ptr<Adaptor2d_Line2d> , Adaptor2d_Curve2d>>(m.attr("Adaptor2d_Line2d"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("D"),  py::arg("UFirst"),  py::arg("ULast") )
    // custom constructors
    // methods
        .def("Load",
             (void (Adaptor2d_Line2d::*)( const gp_Lin2d & ) ) static_cast<void (Adaptor2d_Line2d::*)( const gp_Lin2d & ) >(&Adaptor2d_Line2d::Load),
             R"#(None)#"  , py::arg("L"))
        .def("Load",
             (void (Adaptor2d_Line2d::*)( const gp_Lin2d & , const Standard_Real , const Standard_Real ) ) static_cast<void (Adaptor2d_Line2d::*)( const gp_Lin2d & , const Standard_Real , const Standard_Real ) >(&Adaptor2d_Line2d::Load),
             R"#(None)#"  , py::arg("L"),  py::arg("UFirst"),  py::arg("ULast"))
        .def("FirstParameter",
             (Standard_Real (Adaptor2d_Line2d::*)() const) static_cast<Standard_Real (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor2d_Line2d::*)() const) static_cast<Standard_Real (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Adaptor2d_Line2d::*)() const) static_cast<GeomAbs_Shape (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Adaptor2d_Line2d::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Adaptor2d_Line2d::*)( const GeomAbs_Shape ) const>(&Adaptor2d_Line2d::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("Intervals",
             (void (Adaptor2d_Line2d::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Adaptor2d_Line2d::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Adaptor2d_Line2d::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor2d_HCurve2d> (Adaptor2d_Line2d::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (Adaptor2d_Line2d::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Adaptor2d_Line2d::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Adaptor2d_Line2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Adaptor2d_Line2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Adaptor2d_Line2d::*)() const) static_cast<Standard_Real (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (Adaptor2d_Line2d::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (Adaptor2d_Line2d::*)( const Standard_Real ) const>(&Adaptor2d_Line2d::Value),
             R"#(None)#"  , py::arg("X"))
        .def("D0",
             (void (Adaptor2d_Line2d::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Adaptor2d_Line2d::*)( const Standard_Real , gp_Pnt2d & ) const>(&Adaptor2d_Line2d::D0),
             R"#(None)#"  , py::arg("X"),  py::arg("P"))
        .def("D1",
             (void (Adaptor2d_Line2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_Line2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Adaptor2d_Line2d::D1),
             R"#(None)#"  , py::arg("X"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Adaptor2d_Line2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_Line2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Adaptor2d_Line2d::D2),
             R"#(None)#"  , py::arg("X"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Adaptor2d_Line2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_Line2d::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Adaptor2d_Line2d::D3),
             R"#(None)#"  , py::arg("X"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Adaptor2d_Line2d::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Adaptor2d_Line2d::*)( const Standard_Real , const Standard_Integer ) const>(&Adaptor2d_Line2d::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Adaptor2d_Line2d::*)( const Standard_Real ) const) static_cast<Standard_Real (Adaptor2d_Line2d::*)( const Standard_Real ) const>(&Adaptor2d_Line2d::Resolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (Adaptor2d_Line2d::*)() const) static_cast<GeomAbs_CurveType (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::GetType),
             R"#(None)#" )
        .def("Line",
             (gp_Lin2d (Adaptor2d_Line2d::*)() const) static_cast<gp_Lin2d (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ2d (Adaptor2d_Line2d::*)() const) static_cast<gp_Circ2d (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips2d (Adaptor2d_Line2d::*)() const) static_cast<gp_Elips2d (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr2d (Adaptor2d_Line2d::*)() const) static_cast<gp_Hypr2d (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab2d (Adaptor2d_Line2d::*)() const) static_cast<gp_Parab2d (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Adaptor2d_Line2d::*)() const) static_cast<Standard_Integer (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Adaptor2d_Line2d::*)() const) static_cast<Standard_Boolean (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Adaptor2d_Line2d::*)() const) static_cast<Standard_Integer (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Adaptor2d_Line2d::*)() const) static_cast<Standard_Integer (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom2d_BezierCurve> (Adaptor2d_Line2d::*)() const) static_cast<opencascade::handle<Geom2d_BezierCurve> (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (Adaptor2d_Line2d::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Adaptor2d_Line2d::*)() const>(&Adaptor2d_Line2d::BSpline),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Adaptor2d_OffsetCurve , shared_ptr<Adaptor2d_OffsetCurve> , Adaptor2d_Curve2d>>(m.attr("Adaptor2d_OffsetCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const Standard_Real >()  , py::arg("C"),  py::arg("Offset") )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("Offset"),  py::arg("WFirst"),  py::arg("WLast") )
    // custom constructors
    // methods
        .def("Load",
             (void (Adaptor2d_OffsetCurve::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (Adaptor2d_OffsetCurve::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Adaptor2d_OffsetCurve::Load),
             R"#(Changes the curve. The Offset is reset to 0.)#"  , py::arg("S"))
        .def("Load",
             (void (Adaptor2d_OffsetCurve::*)( const Standard_Real ) ) static_cast<void (Adaptor2d_OffsetCurve::*)( const Standard_Real ) >(&Adaptor2d_OffsetCurve::Load),
             R"#(Changes the Offset on the current Curve.)#"  , py::arg("Offset"))
        .def("Load",
             (void (Adaptor2d_OffsetCurve::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Adaptor2d_OffsetCurve::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&Adaptor2d_OffsetCurve::Load),
             R"#(Changes the Offset Curve on the current Curve.)#"  , py::arg("Offset"),  py::arg("WFirst"),  py::arg("WLast"))
        .def("Curve",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (Adaptor2d_OffsetCurve::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Curve),
             R"#(None)#" )
        .def("Offset",
             (Standard_Real (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Real (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Offset),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Real (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Real (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Adaptor2d_OffsetCurve::*)() const) static_cast<GeomAbs_Shape (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Adaptor2d_OffsetCurve::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Adaptor2d_OffsetCurve::*)( const GeomAbs_Shape ) const>(&Adaptor2d_OffsetCurve::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <S>. And returns the number of intervals.)#"  , py::arg("S"))
        .def("Intervals",
             (void (Adaptor2d_OffsetCurve::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Adaptor2d_OffsetCurve::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Adaptor2d_OffsetCurve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor2d_HCurve2d> (Adaptor2d_OffsetCurve::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor2d_HCurve2d> (Adaptor2d_OffsetCurve::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Adaptor2d_OffsetCurve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Boolean (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Boolean (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Real (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt2d (Adaptor2d_OffsetCurve::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (Adaptor2d_OffsetCurve::*)( const Standard_Real ) const>(&Adaptor2d_OffsetCurve::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (Adaptor2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Adaptor2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & ) const>(&Adaptor2d_OffsetCurve::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Adaptor2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Adaptor2d_OffsetCurve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Adaptor2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Adaptor2d_OffsetCurve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Adaptor2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Adaptor2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Adaptor2d_OffsetCurve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Adaptor2d_OffsetCurve::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Adaptor2d_OffsetCurve::*)( const Standard_Real , const Standard_Integer ) const>(&Adaptor2d_OffsetCurve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (Adaptor2d_OffsetCurve::*)( const Standard_Real ) const) static_cast<Standard_Real (Adaptor2d_OffsetCurve::*)( const Standard_Real ) const>(&Adaptor2d_OffsetCurve::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (Adaptor2d_OffsetCurve::*)() const) static_cast<GeomAbs_CurveType (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin2d (Adaptor2d_OffsetCurve::*)() const) static_cast<gp_Lin2d (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ2d (Adaptor2d_OffsetCurve::*)() const) static_cast<gp_Circ2d (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips2d (Adaptor2d_OffsetCurve::*)() const) static_cast<gp_Elips2d (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr2d (Adaptor2d_OffsetCurve::*)() const) static_cast<gp_Hypr2d (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab2d (Adaptor2d_OffsetCurve::*)() const) static_cast<gp_Parab2d (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Integer (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Boolean (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Integer (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Integer (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom2d_BezierCurve> (Adaptor2d_OffsetCurve::*)() const) static_cast<opencascade::handle<Geom2d_BezierCurve> (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (Adaptor2d_OffsetCurve::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::BSpline),
             R"#(None)#" )
        .def("NbSamples",
             (Standard_Integer (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Integer (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::NbSamples),
             R"#(None)#" )
        .def("Curve",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (Adaptor2d_OffsetCurve::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Curve),
             R"#(None)#" )
        .def("Offset",
             (Standard_Real (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Real (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::Offset),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Real (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Adaptor2d_OffsetCurve::*)() const) static_cast<Standard_Real (Adaptor2d_OffsetCurve::*)() const>(&Adaptor2d_OffsetCurve::LastParameter),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Adaptor2d_Curve2d.hxx
// ./opencascade/Adaptor2d_OffsetCurve.hxx
// ./opencascade/Adaptor2d_HOffsetCurve.hxx
// ./opencascade/Adaptor2d_HLine2d.hxx
// ./opencascade/Adaptor2d_HCurve2d.hxx
// ./opencascade/Adaptor2d_Line2d.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
