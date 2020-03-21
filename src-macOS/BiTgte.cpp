
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>

// module includes
#include <BiTgte_Blend.hxx>
#include <BiTgte_ContactType.hxx>
#include <BiTgte_CurveOnEdge.hxx>
#include <BiTgte_CurveOnVertex.hxx>
#include <BiTgte_HCurveOnEdge.hxx>
#include <BiTgte_HCurveOnVertex.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BiTgte(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BiTgte"));


//Python trampoline classes

// classes


    static_cast<py::class_<BiTgte_Blend , shared_ptr<BiTgte_Blend> >>(m.attr("BiTgte_Blend"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BiTgte_CurveOnEdge , shared_ptr<BiTgte_CurveOnEdge> , Adaptor3d_Curve>>(m.attr("BiTgte_CurveOnEdge"))
    // constructors
    // custom constructors
    // methods
        .def("FirstParameter",
             (Standard_Real (BiTgte_CurveOnEdge::*)() const) static_cast<Standard_Real (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (BiTgte_CurveOnEdge::*)() const) static_cast<Standard_Real (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (BiTgte_CurveOnEdge::*)() const) static_cast<GeomAbs_Shape (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (BiTgte_CurveOnEdge::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (BiTgte_CurveOnEdge::*)( const GeomAbs_Shape ) const>(&BiTgte_CurveOnEdge::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BiTgte_CurveOnEdge::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (BiTgte_CurveOnEdge::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&BiTgte_CurveOnEdge::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (BiTgte_CurveOnEdge::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (BiTgte_CurveOnEdge::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&BiTgte_CurveOnEdge::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (BiTgte_CurveOnEdge::*)() const) static_cast<Standard_Boolean (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (BiTgte_CurveOnEdge::*)() const) static_cast<Standard_Boolean (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (BiTgte_CurveOnEdge::*)() const) static_cast<Standard_Real (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (BiTgte_CurveOnEdge::*)( const Standard_Real ) const) static_cast<gp_Pnt (BiTgte_CurveOnEdge::*)( const Standard_Real ) const>(&BiTgte_CurveOnEdge::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (BiTgte_CurveOnEdge::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (BiTgte_CurveOnEdge::*)( const Standard_Real , gp_Pnt & ) const>(&BiTgte_CurveOnEdge::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (BiTgte_CurveOnEdge::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (BiTgte_CurveOnEdge::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&BiTgte_CurveOnEdge::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (BiTgte_CurveOnEdge::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (BiTgte_CurveOnEdge::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&BiTgte_CurveOnEdge::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (BiTgte_CurveOnEdge::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (BiTgte_CurveOnEdge::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&BiTgte_CurveOnEdge::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (BiTgte_CurveOnEdge::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec (BiTgte_CurveOnEdge::*)( const Standard_Real , const Standard_Integer ) const>(&BiTgte_CurveOnEdge::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (BiTgte_CurveOnEdge::*)( const Standard_Real ) const) static_cast<Standard_Real (BiTgte_CurveOnEdge::*)( const Standard_Real ) const>(&BiTgte_CurveOnEdge::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (BiTgte_CurveOnEdge::*)() const) static_cast<GeomAbs_CurveType (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin (BiTgte_CurveOnEdge::*)() const) static_cast<gp_Lin (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (BiTgte_CurveOnEdge::*)() const) static_cast<gp_Circ (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (BiTgte_CurveOnEdge::*)() const) static_cast<gp_Elips (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (BiTgte_CurveOnEdge::*)() const) static_cast<gp_Hypr (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (BiTgte_CurveOnEdge::*)() const) static_cast<gp_Parab (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (BiTgte_CurveOnEdge::*)() const) static_cast<Standard_Integer (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (BiTgte_CurveOnEdge::*)() const) static_cast<Standard_Boolean (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (BiTgte_CurveOnEdge::*)() const) static_cast<Standard_Integer (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (BiTgte_CurveOnEdge::*)() const) static_cast<Standard_Integer (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (BiTgte_CurveOnEdge::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (BiTgte_CurveOnEdge::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (BiTgte_CurveOnEdge::*)() const>(&BiTgte_CurveOnEdge::BSpline),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BiTgte_CurveOnVertex , shared_ptr<BiTgte_CurveOnVertex> , Adaptor3d_Curve>>(m.attr("BiTgte_CurveOnVertex"))
    // constructors
    // custom constructors
    // methods
        .def("FirstParameter",
             (Standard_Real (BiTgte_CurveOnVertex::*)() const) static_cast<Standard_Real (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (BiTgte_CurveOnVertex::*)() const) static_cast<Standard_Real (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (BiTgte_CurveOnVertex::*)() const) static_cast<GeomAbs_Shape (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (BiTgte_CurveOnVertex::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (BiTgte_CurveOnVertex::*)( const GeomAbs_Shape ) const>(&BiTgte_CurveOnVertex::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (BiTgte_CurveOnVertex::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (BiTgte_CurveOnVertex::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&BiTgte_CurveOnVertex::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (BiTgte_CurveOnVertex::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (BiTgte_CurveOnVertex::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&BiTgte_CurveOnVertex::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (BiTgte_CurveOnVertex::*)() const) static_cast<Standard_Boolean (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (BiTgte_CurveOnVertex::*)() const) static_cast<Standard_Boolean (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (BiTgte_CurveOnVertex::*)() const) static_cast<Standard_Real (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (BiTgte_CurveOnVertex::*)( const Standard_Real ) const) static_cast<gp_Pnt (BiTgte_CurveOnVertex::*)( const Standard_Real ) const>(&BiTgte_CurveOnVertex::Value),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"))
        .def("D0",
             (void (BiTgte_CurveOnVertex::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (BiTgte_CurveOnVertex::*)( const Standard_Real , gp_Pnt & ) const>(&BiTgte_CurveOnVertex::D0),
             R"#(Computes the point of parameter U on the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (BiTgte_CurveOnVertex::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (BiTgte_CurveOnVertex::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&BiTgte_CurveOnVertex::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (BiTgte_CurveOnVertex::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (BiTgte_CurveOnVertex::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&BiTgte_CurveOnVertex::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (BiTgte_CurveOnVertex::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (BiTgte_CurveOnVertex::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&BiTgte_CurveOnVertex::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (BiTgte_CurveOnVertex::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec (BiTgte_CurveOnVertex::*)( const Standard_Real , const Standard_Integer ) const>(&BiTgte_CurveOnVertex::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (BiTgte_CurveOnVertex::*)( const Standard_Real ) const) static_cast<Standard_Real (BiTgte_CurveOnVertex::*)( const Standard_Real ) const>(&BiTgte_CurveOnVertex::Resolution),
             R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (BiTgte_CurveOnVertex::*)() const) static_cast<GeomAbs_CurveType (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::GetType),
             R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#" )
        .def("Line",
             (gp_Lin (BiTgte_CurveOnVertex::*)() const) static_cast<gp_Lin (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (BiTgte_CurveOnVertex::*)() const) static_cast<gp_Circ (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (BiTgte_CurveOnVertex::*)() const) static_cast<gp_Elips (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (BiTgte_CurveOnVertex::*)() const) static_cast<gp_Hypr (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (BiTgte_CurveOnVertex::*)() const) static_cast<gp_Parab (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (BiTgte_CurveOnVertex::*)() const) static_cast<Standard_Integer (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::Degree),
             R"#(None)#" )
        .def("IsRational",
             (Standard_Boolean (BiTgte_CurveOnVertex::*)() const) static_cast<Standard_Boolean (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::IsRational),
             R"#(None)#" )
        .def("NbPoles",
             (Standard_Integer (BiTgte_CurveOnVertex::*)() const) static_cast<Standard_Integer (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::NbPoles),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (BiTgte_CurveOnVertex::*)() const) static_cast<Standard_Integer (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::NbKnots),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (BiTgte_CurveOnVertex::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (BiTgte_CurveOnVertex::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (BiTgte_CurveOnVertex::*)() const>(&BiTgte_CurveOnVertex::BSpline),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BiTgte_HCurveOnEdge ,opencascade::handle<BiTgte_HCurveOnEdge> , Adaptor3d_HCurve>>(m.attr("BiTgte_HCurveOnEdge"))
    // constructors
    // custom constructors
    // methods
        .def("Curve",
             (const Adaptor3d_Curve & (BiTgte_HCurveOnEdge::*)() const) static_cast<const Adaptor3d_Curve & (BiTgte_HCurveOnEdge::*)() const>(&BiTgte_HCurveOnEdge::Curve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("GetCurve",
             (Adaptor3d_Curve & (BiTgte_HCurveOnEdge::*)() ) static_cast<Adaptor3d_Curve & (BiTgte_HCurveOnEdge::*)() >(&BiTgte_HCurveOnEdge::GetCurve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("ChangeCurve",
             (BiTgte_CurveOnEdge & (BiTgte_HCurveOnEdge::*)() ) static_cast<BiTgte_CurveOnEdge & (BiTgte_HCurveOnEdge::*)() >(&BiTgte_HCurveOnEdge::ChangeCurve),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BiTgte_HCurveOnEdge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BiTgte_HCurveOnEdge::*)() const>(&BiTgte_HCurveOnEdge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BiTgte_HCurveOnEdge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BiTgte_HCurveOnEdge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BiTgte_HCurveOnVertex ,opencascade::handle<BiTgte_HCurveOnVertex> , Adaptor3d_HCurve>>(m.attr("BiTgte_HCurveOnVertex"))
    // constructors
    // custom constructors
    // methods
        .def("Curve",
             (const Adaptor3d_Curve & (BiTgte_HCurveOnVertex::*)() const) static_cast<const Adaptor3d_Curve & (BiTgte_HCurveOnVertex::*)() const>(&BiTgte_HCurveOnVertex::Curve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("GetCurve",
             (Adaptor3d_Curve & (BiTgte_HCurveOnVertex::*)() ) static_cast<Adaptor3d_Curve & (BiTgte_HCurveOnVertex::*)() >(&BiTgte_HCurveOnVertex::GetCurve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("ChangeCurve",
             (BiTgte_CurveOnVertex & (BiTgte_HCurveOnVertex::*)() ) static_cast<BiTgte_CurveOnVertex & (BiTgte_HCurveOnVertex::*)() >(&BiTgte_HCurveOnVertex::ChangeCurve),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BiTgte_HCurveOnVertex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BiTgte_HCurveOnVertex::*)() const>(&BiTgte_HCurveOnVertex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BiTgte_HCurveOnVertex::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BiTgte_HCurveOnVertex::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BiTgte_CurveOnEdge.hxx
// ./opencascade/BiTgte_HCurveOnVertex.hxx
// ./opencascade/BiTgte_Blend.hxx
// ./opencascade/BiTgte_CurveOnVertex.hxx
// ./opencascade/BiTgte_ContactType.hxx
// ./opencascade/BiTgte_HCurveOnEdge.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
