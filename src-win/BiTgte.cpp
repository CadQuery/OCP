
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
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
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("S"),  py::arg("Radius"),  py::arg("Tol"),  py::arg("NUBS") )
    // custom constructors
    // methods
        .def("Init",
             (void (BiTgte_Blend::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (BiTgte_Blend::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&BiTgte_Blend::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("Radius"),  py::arg("Tol"),  py::arg("NUBS"))
        .def("Clear",
             (void (BiTgte_Blend::*)() ) static_cast<void (BiTgte_Blend::*)() >(&BiTgte_Blend::Clear),
             R"#(Clear all the Fields.)#" )
        .def("SetFaces",
             (void (BiTgte_Blend::*)( const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<void (BiTgte_Blend::*)( const TopoDS_Face & , const TopoDS_Face & ) >(&BiTgte_Blend::SetFaces),
             R"#(Set two faces of <myShape> on which the Sphere must roll.)#"  , py::arg("F1"),  py::arg("F2"))
        .def("SetEdge",
             (void (BiTgte_Blend::*)( const TopoDS_Edge & ) ) static_cast<void (BiTgte_Blend::*)( const TopoDS_Edge & ) >(&BiTgte_Blend::SetEdge),
             R"#(Set an edge of <myShape> to be rounded.)#"  , py::arg("Edge"))
        .def("SetStoppingFace",
             (void (BiTgte_Blend::*)( const TopoDS_Face & ) ) static_cast<void (BiTgte_Blend::*)( const TopoDS_Face & ) >(&BiTgte_Blend::SetStoppingFace),
             R"#(Set a face on which the fillet must stop.)#"  , py::arg("Face"))
        .def("Perform",
             (void (BiTgte_Blend::*)( const Standard_Boolean ) ) static_cast<void (BiTgte_Blend::*)( const Standard_Boolean ) >(&BiTgte_Blend::Perform),
             R"#(Compute the generated surfaces. If <BuildShape> is true, compute the resulting Shape. If false, only the blending surfaces are computed.)#"  , py::arg("BuildShape")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsDone",
             (Standard_Boolean (BiTgte_Blend::*)() const) static_cast<Standard_Boolean (BiTgte_Blend::*)() const>(&BiTgte_Blend::IsDone),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (BiTgte_Blend::*)() const) static_cast<const TopoDS_Shape & (BiTgte_Blend::*)() const>(&BiTgte_Blend::Shape),
             R"#(returns the result)#" )
        .def("NbSurfaces",
             (Standard_Integer (BiTgte_Blend::*)() const) static_cast<Standard_Integer (BiTgte_Blend::*)() const>(&BiTgte_Blend::NbSurfaces),
             R"#(returns the Number of generated surfaces.)#" )
        .def("Surface",
             (opencascade::handle<Geom_Surface> (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom_Surface> (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::Surface),
             R"#(returns the surface of range Index)#"  , py::arg("Index"))
        .def("Face",
             (const TopoDS_Face & (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::Face),
             R"#(returns the surface of range Index)#"  , py::arg("Index"))
        .def("CenterLines",
             (void (BiTgte_Blend::*)( NCollection_List<TopoDS_Shape> & ) const) static_cast<void (BiTgte_Blend::*)( NCollection_List<TopoDS_Shape> & ) const>(&BiTgte_Blend::CenterLines),
             R"#(set in <LC> all the center lines)#"  , py::arg("LC"))
        .def("Surface",
             (opencascade::handle<Geom_Surface> (BiTgte_Blend::*)( const TopoDS_Shape & ) const) static_cast<opencascade::handle<Geom_Surface> (BiTgte_Blend::*)( const TopoDS_Shape & ) const>(&BiTgte_Blend::Surface),
             R"#(returns the surface generated by the centerline. <CenterLine> may be - an edge : generate a pipe. - a vertex : generate a sphere. Warning: returns a Null Handle if <CenterLine> generates no surface.)#"  , py::arg("CenterLine"))
        .def("Face",
             (const TopoDS_Face & (BiTgte_Blend::*)( const TopoDS_Shape & ) const) static_cast<const TopoDS_Face & (BiTgte_Blend::*)( const TopoDS_Shape & ) const>(&BiTgte_Blend::Face),
             R"#(returns the face generated by the centerline. <CenterLine> may be - an edge : generate a pipe. - a vertex : generate a sphere. Warning: returns a Null Shape if <CenterLine> generates no surface.)#"  , py::arg("CenterLine"))
        .def("ContactType",
             (BiTgte_ContactType (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<BiTgte_ContactType (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::ContactType),
             R"#(returns the type of contact)#"  , py::arg("Index"))
        .def("SupportShape1",
             (const TopoDS_Shape & (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::SupportShape1),
             R"#(gives the first support shape relative to SurfaceFillet(Index);)#"  , py::arg("Index"))
        .def("SupportShape2",
             (const TopoDS_Shape & (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::SupportShape2),
             R"#(gives the second support shape relative to SurfaceFillet(Index);)#"  , py::arg("Index"))
        .def("CurveOnShape1",
             (opencascade::handle<Geom_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::CurveOnShape1),
             R"#(gives the 3d curve of SurfaceFillet(Index) on SupportShape1(Index))#"  , py::arg("Index"))
        .def("CurveOnShape2",
             (opencascade::handle<Geom_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::CurveOnShape2),
             R"#(gives the 3d curve of SurfaceFillet(Index) on SupportShape2(Index))#"  , py::arg("Index"))
        .def("PCurveOnFace1",
             (opencascade::handle<Geom2d_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom2d_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::PCurveOnFace1),
             R"#(gives the PCurve associated to CurvOnShape1(Index) on the support face Warning: returns a Null Handle if SupportShape1 is not a Face)#"  , py::arg("Index"))
        .def("PCurve1OnFillet",
             (opencascade::handle<Geom2d_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom2d_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::PCurve1OnFillet),
             R"#(gives the PCurve associated to CurveOnShape1(Index) on the Fillet)#"  , py::arg("Index"))
        .def("PCurveOnFace2",
             (opencascade::handle<Geom2d_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom2d_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::PCurveOnFace2),
             R"#(gives the PCurve associated to CurveOnShape2(Index) on the support face Warning: returns a Null Handle if SupportShape2 is not a Face)#"  , py::arg("Index"))
        .def("PCurve2OnFillet",
             (opencascade::handle<Geom2d_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom2d_Curve> (BiTgte_Blend::*)( const Standard_Integer ) const>(&BiTgte_Blend::PCurve2OnFillet),
             R"#(gives the PCurve associated to CurveOnShape2(Index) on the fillet)#"  , py::arg("Index"))
        .def("NbBranches",
             (Standard_Integer (BiTgte_Blend::*)() ) static_cast<Standard_Integer (BiTgte_Blend::*)() >(&BiTgte_Blend::NbBranches),
             R"#(None)#" )
        .def("ComputeCenters",
             (void (BiTgte_Blend::*)() ) static_cast<void (BiTgte_Blend::*)() >(&BiTgte_Blend::ComputeCenters),
             R"#(Computes the center lines)#" )
    // methods using call by reference i.s.o. return
        .def("IndicesOfBranche",
             []( BiTgte_Blend &self , const Standard_Integer Index ){ Standard_Integer  From; Standard_Integer  To; self.IndicesOfBranche(Index,From,To); return std::make_tuple(From,To); },
             R"#(Set in <From>,<To> the indices of the faces of the branche <Index>.)#"  , py::arg("Index"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BiTgte_CurveOnEdge , shared_ptr<BiTgte_CurveOnEdge> , Adaptor3d_Curve>>(m.attr("BiTgte_CurveOnEdge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("EonF"),  py::arg("Edge") )
    // custom constructors
    // methods
        .def("Init",
             (void (BiTgte_CurveOnEdge::*)( const TopoDS_Edge & , const TopoDS_Edge & ) ) static_cast<void (BiTgte_CurveOnEdge::*)( const TopoDS_Edge & , const TopoDS_Edge & ) >(&BiTgte_CurveOnEdge::Init),
             R"#(None)#"  , py::arg("EonF"),  py::arg("Edge"))
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
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Vertex & >()  , py::arg("EonF"),  py::arg("V") )
    // custom constructors
    // methods
        .def("Init",
             (void (BiTgte_CurveOnVertex::*)( const TopoDS_Edge & , const TopoDS_Vertex & ) ) static_cast<void (BiTgte_CurveOnVertex::*)( const TopoDS_Edge & , const TopoDS_Vertex & ) >(&BiTgte_CurveOnVertex::Init),
             R"#(None)#"  , py::arg("EonF"),  py::arg("V"))
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
        .def(py::init<  >()  )
        .def(py::init< const BiTgte_CurveOnEdge & >()  , py::arg("C") )
    // custom constructors
    // methods
        .def("Set",
             (void (BiTgte_HCurveOnEdge::*)( const BiTgte_CurveOnEdge & ) ) static_cast<void (BiTgte_HCurveOnEdge::*)( const BiTgte_CurveOnEdge & ) >(&BiTgte_HCurveOnEdge::Set),
             R"#(Sets the field of the GenHCurve.)#"  , py::arg("C"))
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
        .def(py::init<  >()  )
        .def(py::init< const BiTgte_CurveOnVertex & >()  , py::arg("C") )
    // custom constructors
    // methods
        .def("Set",
             (void (BiTgte_HCurveOnVertex::*)( const BiTgte_CurveOnVertex & ) ) static_cast<void (BiTgte_HCurveOnVertex::*)( const BiTgte_CurveOnVertex & ) >(&BiTgte_HCurveOnVertex::Set),
             R"#(Sets the field of the GenHCurve.)#"  , py::arg("C"))
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
// ./opencascade\BiTgte_CurveOnVertex.hxx
// ./opencascade\BiTgte_ContactType.hxx
// ./opencascade\BiTgte_CurveOnEdge.hxx
// ./opencascade\BiTgte_HCurveOnVertex.hxx
// ./opencascade\BiTgte_Blend.hxx
// ./opencascade\BiTgte_HCurveOnEdge.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
