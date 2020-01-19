
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <GeomAPI_ProjectPointOnCurve.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>
#include <GeomAPI_ExtremaCurveCurve.hxx>
#include <GeomAPI_ExtremaCurveSurface.hxx>
#include <GeomAPI_ExtremaSurfaceSurface.hxx>
#include <GeomAPI_PointsToBSpline.hxx>
#include <GeomAPI_PointsToBSplineSurface.hxx>
#include <GeomAPI_Interpolate.hxx>
#include <GeomAPI_IntSS.hxx>
#include <GeomAPI_IntCS.hxx>
#include <Geom_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_BSplineSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <GeomAPI.hxx>
#include <GeomAPI_ExtremaCurveCurve.hxx>
#include <GeomAPI_ExtremaCurveSurface.hxx>
#include <GeomAPI_ExtremaSurfaceSurface.hxx>
#include <GeomAPI_IntCS.hxx>
#include <GeomAPI_Interpolate.hxx>
#include <GeomAPI_IntSS.hxx>
#include <GeomAPI_PointsToBSpline.hxx>
#include <GeomAPI_PointsToBSplineSurface.hxx>
#include <GeomAPI_ProjectPointOnCurve.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomAPI"));


//Python trampoline classes

// classes

    register_default_constructor<GeomAPI , shared_ptr<GeomAPI>>(m,"GeomAPI");

    static_cast<py::class_<GeomAPI , shared_ptr<GeomAPI>  >>(m.attr("GeomAPI"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("To2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pln &  ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pln &  ) >(&GeomAPI::To2d),
                    R"#(This function builds (in the parametric space of the plane P) a 2D curve equivalent to the 3D curve C. The 3D curve C is considered to be located in the plane P. Warning The 3D curve C must be of one of the following types: - a line - a circle - an ellipse - a hyperbola - a parabola - a Bezier curve - a BSpline curve Exceptions Standard_NoSuchObject if C is not a defined type curve.)#"  , py::arg("C"),  py::arg("P"))
        .def_static("To3d_s",
                    (opencascade::handle<Geom_Curve> (*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pln &  ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pln &  ) >(&GeomAPI::To3d),
                    R"#(Builds a 3D curve equivalent to the 2D curve C described in the parametric space defined by the local coordinate system of plane P. The resulting 3D curve is of the same nature as that of the curve C.)#"  , py::arg("C"),  py::arg("P"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomAPI_ExtremaCurveCurve , shared_ptr<GeomAPI_ExtremaCurveCurve>  >>(m.attr("GeomAPI_ExtremaCurveCurve"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const opencascade::handle<Geom_Curve> & >()  , py::arg("C1"),  py::arg("C2") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("U1min"),  py::arg("U1max"),  py::arg("U2min"),  py::arg("U2max") )
    // methods
        .def("Init",
             (void (GeomAPI_ExtremaCurveCurve::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (GeomAPI_ExtremaCurveCurve::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Curve> &  ) >(&GeomAPI_ExtremaCurveCurve::Init),
             R"#(Initializes this algorithm with the given arguments and computes the extrema between the curves C1 and C2)#"  , py::arg("C1"),  py::arg("C2"))
        .def("Init",
             (void (GeomAPI_ExtremaCurveCurve::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomAPI_ExtremaCurveCurve::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomAPI_ExtremaCurveCurve::Init),
             R"#(Initializes this algorithm with the given arguments and computes the extrema between : - the portion of the curve C1 limited by the two points of parameter (U1min,U1max), and - the portion of the curve C2 limited by the two points of parameter (U2min,U2max). Warning Use the function NbExtrema to obtain the number of solutions. If this algorithm fails, NbExtrema returns 0.)#"  , py::arg("C1"),  py::arg("C2"),  py::arg("U1min"),  py::arg("U1max"),  py::arg("U2min"),  py::arg("U2max"))
        .def("NbExtrema",
             (Standard_Integer (GeomAPI_ExtremaCurveCurve::*)() const) static_cast<Standard_Integer (GeomAPI_ExtremaCurveCurve::*)() const>(&GeomAPI_ExtremaCurveCurve::NbExtrema),
             R"#(Returns the number of extrema computed by this algorithm. Note: if this algorithm fails, NbExtrema returns 0.)#" )
        .def("Points",
             (void (GeomAPI_ExtremaCurveCurve::*)( const Standard_Integer ,  gp_Pnt & ,  gp_Pnt &  ) const) static_cast<void (GeomAPI_ExtremaCurveCurve::*)( const Standard_Integer ,  gp_Pnt & ,  gp_Pnt &  ) const>(&GeomAPI_ExtremaCurveCurve::Points),
             R"#(Returns the points P1 on the first curve and P2 on the second curve, which are the ends of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"),  py::arg("P1"),  py::arg("P2"))
        .def("Distance",
             (Standard_Real (GeomAPI_ExtremaCurveCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (GeomAPI_ExtremaCurveCurve::*)( const Standard_Integer  ) const>(&GeomAPI_ExtremaCurveCurve::Distance),
             R"#(Computes the distance between the end points of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"))
        .def("NearestPoints",
             (void (GeomAPI_ExtremaCurveCurve::*)( gp_Pnt & ,  gp_Pnt &  ) const) static_cast<void (GeomAPI_ExtremaCurveCurve::*)( gp_Pnt & ,  gp_Pnt &  ) const>(&GeomAPI_ExtremaCurveCurve::NearestPoints),
             R"#(Returns the points P1 on the first curve and P2 on the second curve, which are the ends of the shortest extremum computed by this algorithm. Exceptions StdFail_NotDone if this algorithm fails.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("LowerDistance",
             (Standard_Real (GeomAPI_ExtremaCurveCurve::*)() const) static_cast<Standard_Real (GeomAPI_ExtremaCurveCurve::*)() const>(&GeomAPI_ExtremaCurveCurve::LowerDistance),
             R"#(Computes the distance between the end points of the shortest extremum computed by this algorithm. Exceptions StdFail_NotDone if this algorithm fails.)#" )
        .def("Extrema",
             (const Extrema_ExtCC & (GeomAPI_ExtremaCurveCurve::*)() const) static_cast<const Extrema_ExtCC & (GeomAPI_ExtremaCurveCurve::*)() const>(&GeomAPI_ExtremaCurveCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
        .def("TotalNearestPoints",
             (Standard_Boolean (GeomAPI_ExtremaCurveCurve::*)( gp_Pnt & ,  gp_Pnt &  ) ) static_cast<Standard_Boolean (GeomAPI_ExtremaCurveCurve::*)( gp_Pnt & ,  gp_Pnt &  ) >(&GeomAPI_ExtremaCurveCurve::TotalNearestPoints),
             R"#(set in <P1> and <P2> the couple solution points such a the distance [P1,P2] is the minimum. taking in account extremity points of curves.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("TotalLowerDistanceParameters",
             (Standard_Boolean (GeomAPI_ExtremaCurveCurve::*)( Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (GeomAPI_ExtremaCurveCurve::*)( Standard_Real & ,  Standard_Real &  ) >(&GeomAPI_ExtremaCurveCurve::TotalLowerDistanceParameters),
             R"#(set in <U1> and <U2> the parameters of the couple solution points which represents the total nearest solution.)#"  , py::arg("U1"),  py::arg("U2"))
        .def("TotalLowerDistance",
             (Standard_Real (GeomAPI_ExtremaCurveCurve::*)() ) static_cast<Standard_Real (GeomAPI_ExtremaCurveCurve::*)() >(&GeomAPI_ExtremaCurveCurve::TotalLowerDistance),
             R"#(return the distance of the total nearest couple solution point. if <myExtCC> is not done)#" )
        .def("Extrema",
             (const Extrema_ExtCC & (GeomAPI_ExtremaCurveCurve::*)() const) static_cast<const Extrema_ExtCC & (GeomAPI_ExtremaCurveCurve::*)() const>(&GeomAPI_ExtremaCurveCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
        .def("Parameters",
             []( GeomAPI_ExtremaCurveCurve &self , const Standard_Integer Index ){ Standard_Real  U1; Standard_Real  U2; self.Parameters(Index,U1,U2); return std::make_tuple(U1,U2); },
             R"#(Returns the parameters U1 of the point on the first curve and U2 of the point on the second curve, which are the ends of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"))
        .def("LowerDistanceParameters",
             []( GeomAPI_ExtremaCurveCurve &self   ){ Standard_Real  U1; Standard_Real  U2; self.LowerDistanceParameters(U1,U2); return std::make_tuple(U1,U2); },
             R"#(Returns the parameters U1 of the point on the first curve and U2 of the point on the second curve, which are the ends of the shortest extremum computed by this algorithm. Exceptions StdFail_NotDone if this algorithm fails.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomAPI_ExtremaCurveSurface , shared_ptr<GeomAPI_ExtremaCurveSurface>  >>(m.attr("GeomAPI_ExtremaCurveSurface"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const opencascade::handle<Geom_Surface> & >()  , py::arg("Curve"),  py::arg("Surface") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Curve"),  py::arg("Surface"),  py::arg("Wmin"),  py::arg("Wmax"),  py::arg("Umin"),  py::arg("Umax"),  py::arg("Vmin"),  py::arg("Vmax") )
    // methods
        .def("Init",
             (void (GeomAPI_ExtremaCurveSurface::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (GeomAPI_ExtremaCurveSurface::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Surface> &  ) >(&GeomAPI_ExtremaCurveSurface::Init),
             R"#(Computes the extrema distances between the curve <C> and the surface <S>.)#"  , py::arg("Curve"),  py::arg("Surface"))
        .def("Init",
             (void (GeomAPI_ExtremaCurveSurface::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomAPI_ExtremaCurveSurface::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomAPI_ExtremaCurveSurface::Init),
             R"#(Computes the extrema distances between the curve <C> and the surface <S>. The solution point are computed in the domain [Wmin,Wmax] of the curve and in the domain [Umin,Umax] [Vmin,Vmax] of the surface. Warning Use the function NbExtrema to obtain the number of solutions. If this algorithm fails, NbExtrema returns 0.)#"  , py::arg("Curve"),  py::arg("Surface"),  py::arg("Wmin"),  py::arg("Wmax"),  py::arg("Umin"),  py::arg("Umax"),  py::arg("Vmin"),  py::arg("Vmax"))
        .def("NbExtrema",
             (Standard_Integer (GeomAPI_ExtremaCurveSurface::*)() const) static_cast<Standard_Integer (GeomAPI_ExtremaCurveSurface::*)() const>(&GeomAPI_ExtremaCurveSurface::NbExtrema),
             R"#(Returns the number of extrema computed by this algorithm. Note: if this algorithm fails, NbExtrema returns 0.)#" )
        .def("Points",
             (void (GeomAPI_ExtremaCurveSurface::*)( const Standard_Integer ,  gp_Pnt & ,  gp_Pnt &  ) const) static_cast<void (GeomAPI_ExtremaCurveSurface::*)( const Standard_Integer ,  gp_Pnt & ,  gp_Pnt &  ) const>(&GeomAPI_ExtremaCurveSurface::Points),
             R"#(Returns the points P1 on the curve and P2 on the surface, which are the ends of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"),  py::arg("P1"),  py::arg("P2"))
        .def("Distance",
             (Standard_Real (GeomAPI_ExtremaCurveSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Real (GeomAPI_ExtremaCurveSurface::*)( const Standard_Integer  ) const>(&GeomAPI_ExtremaCurveSurface::Distance),
             R"#(Computes the distance between the end points of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"))
        .def("NearestPoints",
             (void (GeomAPI_ExtremaCurveSurface::*)( gp_Pnt & ,  gp_Pnt &  ) const) static_cast<void (GeomAPI_ExtremaCurveSurface::*)( gp_Pnt & ,  gp_Pnt &  ) const>(&GeomAPI_ExtremaCurveSurface::NearestPoints),
             R"#(Returns the points PC on the curve and PS on the surface, which are the ends of the shortest extremum computed by this algorithm. Exceptions - StdFail_NotDone if this algorithm fails.)#"  , py::arg("PC"),  py::arg("PS"))
        .def("LowerDistance",
             (Standard_Real (GeomAPI_ExtremaCurveSurface::*)() const) static_cast<Standard_Real (GeomAPI_ExtremaCurveSurface::*)() const>(&GeomAPI_ExtremaCurveSurface::LowerDistance),
             R"#(Computes the distance between the end points of the shortest extremum computed by this algorithm. Exceptions - StdFail_NotDone if this algorithm fails.)#" )
        .def("Extrema",
             (const Extrema_ExtCS & (GeomAPI_ExtremaCurveSurface::*)() const) static_cast<const Extrema_ExtCS & (GeomAPI_ExtremaCurveSurface::*)() const>(&GeomAPI_ExtremaCurveSurface::Extrema),
             R"#(Returns the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtCS & (GeomAPI_ExtremaCurveSurface::*)() const) static_cast<const Extrema_ExtCS & (GeomAPI_ExtremaCurveSurface::*)() const>(&GeomAPI_ExtremaCurveSurface::Extrema),
             R"#(Returns the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
        .def("Parameters",
             []( GeomAPI_ExtremaCurveSurface &self , const Standard_Integer Index ){ Standard_Real  W; Standard_Real  U; Standard_Real  V; self.Parameters(Index,W,U,V); return std::make_tuple(W,U,V); },
             R"#(Returns the parameters W of the point on the curve, and (U,V) of the point on the surface, which are the ends of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"))
        .def("LowerDistanceParameters",
             []( GeomAPI_ExtremaCurveSurface &self   ){ Standard_Real  W; Standard_Real  U; Standard_Real  V; self.LowerDistanceParameters(W,U,V); return std::make_tuple(W,U,V); },
             R"#(Returns the parameters W of the point on the curve and (U,V) of the point on the surface, which are the ends of the shortest extremum computed by this algorithm. Exceptions - StdFail_NotDone if this algorithm fails.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomAPI_ExtremaSurfaceSurface , shared_ptr<GeomAPI_ExtremaSurfaceSurface>  >>(m.attr("GeomAPI_ExtremaSurfaceSurface"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const opencascade::handle<Geom_Surface> & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S1"),  py::arg("S2"),  py::arg("U1min"),  py::arg("U1max"),  py::arg("V1min"),  py::arg("V1max"),  py::arg("U2min"),  py::arg("U2max"),  py::arg("V2min"),  py::arg("V2max") )
    // methods
        .def("Init",
             (void (GeomAPI_ExtremaSurfaceSurface::*)( const opencascade::handle<Geom_Surface> & ,  const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (GeomAPI_ExtremaSurfaceSurface::*)( const opencascade::handle<Geom_Surface> & ,  const opencascade::handle<Geom_Surface> &  ) >(&GeomAPI_ExtremaSurfaceSurface::Init),
             R"#(Initializes this algorithm with the given arguments and computes the extrema distances between the surfaces <S1> and <S2>)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Init",
             (void (GeomAPI_ExtremaSurfaceSurface::*)( const opencascade::handle<Geom_Surface> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomAPI_ExtremaSurfaceSurface::*)( const opencascade::handle<Geom_Surface> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomAPI_ExtremaSurfaceSurface::Init),
             R"#(Initializes this algorithm with the given arguments and computes the extrema distances between - the portion of the surface S1 limited by the two values of parameter (U1min,U1max) in the u parametric direction, and by the two values of parameter (V1min,V1max) in the v parametric direction, and - the portion of the surface S2 limited by the two values of parameter (U2min,U2max) in the u parametric direction, and by the two values of parameter (V2min,V2max) in the v parametric direction.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("U1min"),  py::arg("U1max"),  py::arg("V1min"),  py::arg("V1max"),  py::arg("U2min"),  py::arg("U2max"),  py::arg("V2min"),  py::arg("V2max"))
        .def("NbExtrema",
             (Standard_Integer (GeomAPI_ExtremaSurfaceSurface::*)() const) static_cast<Standard_Integer (GeomAPI_ExtremaSurfaceSurface::*)() const>(&GeomAPI_ExtremaSurfaceSurface::NbExtrema),
             R"#(Returns the number of extrema computed by this algorithm. Note: if this algorithm fails, NbExtrema returns 0.)#" )
        .def("Points",
             (void (GeomAPI_ExtremaSurfaceSurface::*)( const Standard_Integer ,  gp_Pnt & ,  gp_Pnt &  ) const) static_cast<void (GeomAPI_ExtremaSurfaceSurface::*)( const Standard_Integer ,  gp_Pnt & ,  gp_Pnt &  ) const>(&GeomAPI_ExtremaSurfaceSurface::Points),
             R"#(Returns the points P1 on the first surface and P2 on the second surface, which are the ends of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"),  py::arg("P1"),  py::arg("P2"))
        .def("Distance",
             (Standard_Real (GeomAPI_ExtremaSurfaceSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Real (GeomAPI_ExtremaSurfaceSurface::*)( const Standard_Integer  ) const>(&GeomAPI_ExtremaSurfaceSurface::Distance),
             R"#(Computes the distance between the end points of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"))
        .def("NearestPoints",
             (void (GeomAPI_ExtremaSurfaceSurface::*)( gp_Pnt & ,  gp_Pnt &  ) const) static_cast<void (GeomAPI_ExtremaSurfaceSurface::*)( gp_Pnt & ,  gp_Pnt &  ) const>(&GeomAPI_ExtremaSurfaceSurface::NearestPoints),
             R"#(Returns the points P1 on the first surface and P2 on the second surface, which are the ends of the shortest extremum computed by this algorithm. Exceptions StdFail_NotDone if this algorithm fails.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("LowerDistance",
             (Standard_Real (GeomAPI_ExtremaSurfaceSurface::*)() const) static_cast<Standard_Real (GeomAPI_ExtremaSurfaceSurface::*)() const>(&GeomAPI_ExtremaSurfaceSurface::LowerDistance),
             R"#(Computes the distance between the end points of the shortest extremum computed by this algorithm. Exceptions StdFail_NotDone if this algorithm fails.)#" )
        .def("Extrema",
             (const Extrema_ExtSS & (GeomAPI_ExtremaSurfaceSurface::*)() const) static_cast<const Extrema_ExtSS & (GeomAPI_ExtremaSurfaceSurface::*)() const>(&GeomAPI_ExtremaSurfaceSurface::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtSS & (GeomAPI_ExtremaSurfaceSurface::*)() const) static_cast<const Extrema_ExtSS & (GeomAPI_ExtremaSurfaceSurface::*)() const>(&GeomAPI_ExtremaSurfaceSurface::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
        .def("Parameters",
             []( GeomAPI_ExtremaSurfaceSurface &self , const Standard_Integer Index ){ Standard_Real  U1; Standard_Real  V1; Standard_Real  U2; Standard_Real  V2; self.Parameters(Index,U1,V1,U2,V2); return std::make_tuple(U1,V1,U2,V2); },
             R"#(Returns the parameters (U1,V1) of the point on the first surface, and (U2,V2) of the point on the second surface, which are the ends of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"))
        .def("LowerDistanceParameters",
             []( GeomAPI_ExtremaSurfaceSurface &self   ){ Standard_Real  U1; Standard_Real  V1; Standard_Real  U2; Standard_Real  V2; self.LowerDistanceParameters(U1,V1,U2,V2); return std::make_tuple(U1,V1,U2,V2); },
             R"#(Returns the parameters (U1,V1) of the point on the first surface and (U2,V2) of the point on the second surface, which are the ends of the shortest extremum computed by this algorithm. Exceptions - StdFail_NotDone if this algorithm fails.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomAPI_IntCS , shared_ptr<GeomAPI_IntCS>  >>(m.attr("GeomAPI_IntCS"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const opencascade::handle<Geom_Surface> & >()  , py::arg("C"),  py::arg("S") )
    // methods
        .def("Perform",
             (void (GeomAPI_IntCS::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (GeomAPI_IntCS::*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Surface> &  ) >(&GeomAPI_IntCS::Perform),
             R"#(This function Initializes an algorithm with the curve C and the surface S and computes the intersections between C and S. Warning Use function IsDone to verify that the intersections are computed successfully.)#"  , py::arg("C"),  py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (GeomAPI_IntCS::*)() const) static_cast<Standard_Boolean (GeomAPI_IntCS::*)() const>(&GeomAPI_IntCS::IsDone),
             R"#(Returns true if the intersections are successfully computed.)#" )
        .def("NbPoints",
             (Standard_Integer (GeomAPI_IntCS::*)() const) static_cast<Standard_Integer (GeomAPI_IntCS::*)() const>(&GeomAPI_IntCS::NbPoints),
             R"#(Returns the number of Intersection Points if IsDone returns True. else NotDone is raised.)#" )
        .def("Point",
             (const gp_Pnt & (GeomAPI_IntCS::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt & (GeomAPI_IntCS::*)( const Standard_Integer  ) const>(&GeomAPI_IntCS::Point),
             R"#(Returns the Intersection Point of range <Index>in case of cross intersection. Raises NotDone if the computation has failed or if the computation has not been done raises OutOfRange if Index is not in the range <1..NbPoints>)#"  , py::arg("Index"))
        .def("NbSegments",
             (Standard_Integer (GeomAPI_IntCS::*)() const) static_cast<Standard_Integer (GeomAPI_IntCS::*)() const>(&GeomAPI_IntCS::NbSegments),
             R"#(Returns the number of computed intersection segments in case of tangential intersection. Exceptions StdFail_NotDone if the intersection algorithm fails or is not initialized.)#" )
        .def("Segment",
             (opencascade::handle<Geom_Curve> (GeomAPI_IntCS::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_Curve> (GeomAPI_IntCS::*)( const Standard_Integer  ) const>(&GeomAPI_IntCS::Segment),
             R"#(Returns the computed intersection segment of index Index in case of tangential intersection. Intersection segment is a portion of the initial curve tangent to surface. Exceptions StdFail_NotDone if intersection algorithm fails or is not initialized. Standard_OutOfRange if Index is not in the range [ 1,NbSegments ], where NbSegments is the number of computed intersection segments.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("Parameters",
             []( GeomAPI_IntCS &self , const Standard_Integer Index ){ Standard_Real  U; Standard_Real  V; Standard_Real  W; self.Parameters(Index,U,V,W); return std::make_tuple(U,V,W); },
             R"#(Returns parameter W on the curve and (parameters U,V) on the surface of the computed intersection point of index Index in case of cross intersection. Exceptions StdFail_NotDone if intersection algorithm fails or is not initialized. Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of computed intersection points.)#"  , py::arg("Index"))
        .def("Parameters",
             []( GeomAPI_IntCS &self , const Standard_Integer Index ){ Standard_Real  U1; Standard_Real  V1; Standard_Real  U2; Standard_Real  V2; self.Parameters(Index,U1,V1,U2,V2); return std::make_tuple(U1,V1,U2,V2); },
             R"#(Returns the parameters of the first (U1,V1) and the last (U2,V2) points of curve's segment on the surface in case of tangential intersection. Index is the number of computed intersection segments. Exceptions StdFail_NotDone if intersection algorithm fails or is not initialized. Standard_OutOfRange if Index is not in the range [ 1,NbSegments ], where NbSegments is the number of computed intersection segments.)#"  , py::arg("Index"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomAPI_IntSS , shared_ptr<GeomAPI_IntSS>  >>(m.attr("GeomAPI_IntSS"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const opencascade::handle<Geom_Surface> &,const Standard_Real >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Tol") )
    // methods
        .def("Perform",
             (void (GeomAPI_IntSS::*)( const opencascade::handle<Geom_Surface> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real  ) ) static_cast<void (GeomAPI_IntSS::*)( const opencascade::handle<Geom_Surface> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real  ) >(&GeomAPI_IntSS::Perform),
             R"#(Initializes an algorithm with the given arguments and computes the intersection curves between the two surfaces S1 and S2. Parameter Tol defines the precision of curves computation. For most cases the value 1.0e-7 is recommended to use. Warning Use function IsDone to verify that the intersections are successfully computed.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("Tol"))
        .def("IsDone",
             (Standard_Boolean (GeomAPI_IntSS::*)() const) static_cast<Standard_Boolean (GeomAPI_IntSS::*)() const>(&GeomAPI_IntSS::IsDone),
             R"#(Returns True if the intersection was successful.)#" )
        .def("NbLines",
             (Standard_Integer (GeomAPI_IntSS::*)() const) static_cast<Standard_Integer (GeomAPI_IntSS::*)() const>(&GeomAPI_IntSS::NbLines),
             R"#(Returns the number of computed intersection curves. Exceptions StdFail_NotDone if the computation fails.)#" )
        .def("Line",
             (const opencascade::handle<Geom_Curve> & (GeomAPI_IntSS::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<Geom_Curve> & (GeomAPI_IntSS::*)( const Standard_Integer  ) const>(&GeomAPI_IntSS::Line),
             R"#(Returns the computed intersection curve of index Index. Exceptions StdFail_NotDone if the computation fails. Standard_OutOfRange if Index is out of range [1, NbLines] where NbLines is the number of computed intersection curves.)#"  , py::arg("Index"))
        .def("Perform",
             (void (GeomAPI_IntSS::*)( const opencascade::handle<Geom_Surface> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real  ) ) static_cast<void (GeomAPI_IntSS::*)( const opencascade::handle<Geom_Surface> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real  ) >(&GeomAPI_IntSS::Perform),
             R"#(Initializes an algorithm with the given arguments and computes the intersection curves between the two surfaces S1 and S2. Parameter Tol defines the precision of curves computation. For most cases the value 1.0e-7 is recommended to use. Warning Use function IsDone to verify that the intersections are successfully computed.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("Tol"))
        .def("IsDone",
             (Standard_Boolean (GeomAPI_IntSS::*)() const) static_cast<Standard_Boolean (GeomAPI_IntSS::*)() const>(&GeomAPI_IntSS::IsDone),
             R"#(Returns True if the intersection was successful.)#" )
        .def("NbLines",
             (Standard_Integer (GeomAPI_IntSS::*)() const) static_cast<Standard_Integer (GeomAPI_IntSS::*)() const>(&GeomAPI_IntSS::NbLines),
             R"#(Returns the number of computed intersection curves. Exceptions StdFail_NotDone if the computation fails.)#" )
        .def("Line",
             (const opencascade::handle<Geom_Curve> & (GeomAPI_IntSS::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<Geom_Curve> & (GeomAPI_IntSS::*)( const Standard_Integer  ) const>(&GeomAPI_IntSS::Line),
             R"#(Returns the computed intersection curve of index Index. Exceptions StdFail_NotDone if the computation fails. Standard_OutOfRange if Index is out of range [1, NbLines] where NbLines is the number of computed intersection curves.)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomAPI_Interpolate , shared_ptr<GeomAPI_Interpolate>  >>(m.attr("GeomAPI_Interpolate"))
        .def(py::init< const opencascade::handle<TColgp_HArray1OfPnt> &,const Standard_Boolean,const Standard_Real >()  , py::arg("Points"),  py::arg("PeriodicFlag"),  py::arg("Tolerance") )
        .def(py::init< const opencascade::handle<TColgp_HArray1OfPnt> &,const opencascade::handle<TColStd_HArray1OfReal> &,const Standard_Boolean,const Standard_Real >()  , py::arg("Points"),  py::arg("Parameters"),  py::arg("PeriodicFlag"),  py::arg("Tolerance") )
    // methods
        .def("Load",
             (void (GeomAPI_Interpolate::*)( const gp_Vec & ,  const gp_Vec & ,  const Standard_Boolean  ) ) static_cast<void (GeomAPI_Interpolate::*)( const gp_Vec & ,  const gp_Vec & ,  const Standard_Boolean  ) >(&GeomAPI_Interpolate::Load),
             R"#(Assigns this constrained BSpline curve to be tangential to vectors InitialTangent and FinalTangent at its first and last points respectively (i.e. the first and last points of the table of points through which the curve passes, as defined at the time of initialization).)#"  , py::arg("InitialTangent"),  py::arg("FinalTangent"),  py::arg("Scale")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Load",
             (void (GeomAPI_Interpolate::*)(  const NCollection_Array1<gp_Vec> & ,  const opencascade::handle<TColStd_HArray1OfBoolean> & ,  const Standard_Boolean  ) ) static_cast<void (GeomAPI_Interpolate::*)(  const NCollection_Array1<gp_Vec> & ,  const opencascade::handle<TColStd_HArray1OfBoolean> & ,  const Standard_Boolean  ) >(&GeomAPI_Interpolate::Load),
             R"#(Assigns this constrained BSpline curve to be tangential to vectors defined in the table Tangents, which is parallel to the table of points through which the curve passes, as defined at the time of initialization. Vectors in the table Tangents are defined only if the flag given in the parallel table TangentFlags is true: only these vectors are set as tangency constraints.)#"  , py::arg("Tangents"),  py::arg("TangentFlags"),  py::arg("Scale")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (GeomAPI_Interpolate::*)() ) static_cast<void (GeomAPI_Interpolate::*)() >(&GeomAPI_Interpolate::Perform),
             R"#(Computes the constrained BSpline curve. Use the function IsDone to verify that the computation is successful, and then the function Curve to obtain the result.)#" )
        .def("Curve",
             (const opencascade::handle<Geom_BSplineCurve> & (GeomAPI_Interpolate::*)() const) static_cast<const opencascade::handle<Geom_BSplineCurve> & (GeomAPI_Interpolate::*)() const>(&GeomAPI_Interpolate::Curve),
             R"#(Returns the computed BSpline curve. Raises StdFail_NotDone if the interpolation fails.)#" )
        .def("IsDone",
             (Standard_Boolean (GeomAPI_Interpolate::*)() const) static_cast<Standard_Boolean (GeomAPI_Interpolate::*)() const>(&GeomAPI_Interpolate::IsDone),
             R"#(Returns true if the constrained BSpline curve is successfully constructed. Note: in this case, the result is given by the function Curve.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomAPI_PointsToBSpline , shared_ptr<GeomAPI_PointsToBSpline>  >>(m.attr("GeomAPI_PointsToBSpline"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3) )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &,const Approx_ParametrizationType,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("ParType"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3) )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<Standard_Real> &,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("Parameters"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3) )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("Weight1"),  py::arg("Weight2"),  py::arg("Weight3"),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3) )
    // methods
        .def("Init",
             (void (GeomAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt> & ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (GeomAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt> & ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&GeomAPI_PointsToBSpline::Init),
             R"#(Approximate a BSpline Curve passing through an array of Point. The resulting BSpline will have the following properties: 1- his degree will be in the range [Degmin,Degmax] 2- his continuity will be at least <Continuity> 3- the distance from the point <Points> to the BSpline will be lower to Tol3D)#"  , py::arg("Points"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Init",
             (void (GeomAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt> & ,  const Approx_ParametrizationType ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (GeomAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt> & ,  const Approx_ParametrizationType ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&GeomAPI_PointsToBSpline::Init),
             R"#(Approximate a BSpline Curve passing through an array of Point. The resulting BSpline will have the following properties: 1- his degree will be in the range [Degmin,Degmax] 2- his continuity will be at least <Continuity> 3- the distance from the point <Points> to the BSpline will be lower to Tol3D)#"  , py::arg("Points"),  py::arg("ParType"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Init",
             (void (GeomAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (GeomAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&GeomAPI_PointsToBSpline::Init),
             R"#(Approximate a BSpline Curve passing through an array of Point, which parameters are given by the array <Parameters>. The resulting BSpline will have the following properties: 1- his degree will be in the range [Degmin,Degmax] 2- his continuity will be at least <Continuity> 3- the distance from the point <Points> to the BSpline will be lower to Tol3D)#"  , py::arg("Points"),  py::arg("Parameters"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Init",
             (void (GeomAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (GeomAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&GeomAPI_PointsToBSpline::Init),
             R"#(Approximate a BSpline Curve passing through an array of Point using variational smoothing algorithm, which tries to minimize additional criterium: Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion)#"  , py::arg("Points"),  py::arg("Weight1"),  py::arg("Weight2"),  py::arg("Weight3"),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Curve",
             (const opencascade::handle<Geom_BSplineCurve> & (GeomAPI_PointsToBSpline::*)() const) static_cast<const opencascade::handle<Geom_BSplineCurve> & (GeomAPI_PointsToBSpline::*)() const>(&GeomAPI_PointsToBSpline::Curve),
             R"#(Returns the computed BSpline curve. Raises StdFail_NotDone if the curve is not built.)#" )
        .def("IsDone",
             (Standard_Boolean (GeomAPI_PointsToBSpline::*)() const) static_cast<Standard_Boolean (GeomAPI_PointsToBSpline::*)() const>(&GeomAPI_PointsToBSpline::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomAPI_PointsToBSplineSurface , shared_ptr<GeomAPI_PointsToBSplineSurface>  >>(m.attr("GeomAPI_PointsToBSplineSurface"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Array2<gp_Pnt> &,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3) )
        .def(py::init<  const NCollection_Array2<gp_Pnt> &,const Approx_ParametrizationType,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("ParType"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3) )
        .def(py::init<  const NCollection_Array2<gp_Pnt> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("Weight1"),  py::arg("Weight2"),  py::arg("Weight3"),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3) )
        .def(py::init<  const NCollection_Array2<Standard_Real> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("ZPoints"),  py::arg("X0"),  py::arg("dX"),  py::arg("Y0"),  py::arg("dY"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3) )
    // methods
        .def("Init",
             (void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<gp_Pnt> & ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<gp_Pnt> & ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&GeomAPI_PointsToBSplineSurface::Init),
             R"#(Approximates a BSpline Surface passing through an array of Point. The resulting BSpline will have the following properties: 1- his degree will be in the range [Degmin,Degmax] 2- his continuity will be at least <Continuity> 3- the distance from the point <Points> to the BSpline will be lower to Tol3D)#"  , py::arg("Points"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Interpolate",
             (void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<gp_Pnt> &  ) ) static_cast<void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<gp_Pnt> &  ) >(&GeomAPI_PointsToBSplineSurface::Interpolate),
             R"#(Interpolates a BSpline Surface passing through an array of Point. The resulting BSpline will have the following properties: 1- his degree will be 3. 2- his continuity will be C2.)#"  , py::arg("Points"))
        .def("Interpolate",
             (void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<gp_Pnt> & ,  const Approx_ParametrizationType  ) ) static_cast<void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<gp_Pnt> & ,  const Approx_ParametrizationType  ) >(&GeomAPI_PointsToBSplineSurface::Interpolate),
             R"#(Interpolates a BSpline Surface passing through an array of Point. The resulting BSpline will have the following properties: 1- his degree will be 3. 2- his continuity will be C2.)#"  , py::arg("Points"),  py::arg("ParType"))
        .def("Init",
             (void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<Standard_Real> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<Standard_Real> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&GeomAPI_PointsToBSplineSurface::Init),
             R"#(Approximates a BSpline Surface passing through an array of Points.)#"  , py::arg("ZPoints"),  py::arg("X0"),  py::arg("dX"),  py::arg("Y0"),  py::arg("dY"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Interpolate",
             (void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<Standard_Real> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<Standard_Real> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomAPI_PointsToBSplineSurface::Interpolate),
             R"#(Interpolates a BSpline Surface passing through an array of Points.)#"  , py::arg("ZPoints"),  py::arg("X0"),  py::arg("dX"),  py::arg("Y0"),  py::arg("dY"))
        .def("Init",
             (void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<gp_Pnt> & ,  const Approx_ParametrizationType ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<gp_Pnt> & ,  const Approx_ParametrizationType ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&GeomAPI_PointsToBSplineSurface::Init),
             R"#(Approximates a BSpline Surface passing through an array of Point. The resulting BSpline will have the following properties: 1- his degree will be in the range [Degmin,Degmax] 2- his continuity will be at least <Continuity> 3- the distance from the point <Points> to the BSpline will be lower to Tol3D)#"  , py::arg("Points"),  py::arg("ParType"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Init",
             (void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<gp_Pnt> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (GeomAPI_PointsToBSplineSurface::*)(  const NCollection_Array2<gp_Pnt> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&GeomAPI_PointsToBSplineSurface::Init),
             R"#(Approximates a BSpline Surface passing through an array of point using variational smoothing algorithm, which tries to minimize additional criterium: Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion)#"  , py::arg("Points"),  py::arg("Weight1"),  py::arg("Weight2"),  py::arg("Weight3"),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Surface",
             (const opencascade::handle<Geom_BSplineSurface> & (GeomAPI_PointsToBSplineSurface::*)() const) static_cast<const opencascade::handle<Geom_BSplineSurface> & (GeomAPI_PointsToBSplineSurface::*)() const>(&GeomAPI_PointsToBSplineSurface::Surface),
             R"#(Returns the approximate BSpline Surface)#" )
        .def("IsDone",
             (Standard_Boolean (GeomAPI_PointsToBSplineSurface::*)() const) static_cast<Standard_Boolean (GeomAPI_PointsToBSplineSurface::*)() const>(&GeomAPI_PointsToBSplineSurface::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomAPI_ProjectPointOnCurve , shared_ptr<GeomAPI_ProjectPointOnCurve>  >>(m.attr("GeomAPI_ProjectPointOnCurve"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const opencascade::handle<Geom_Curve> & >()  , py::arg("P"),  py::arg("Curve") )
        .def(py::init< const gp_Pnt &,const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("Curve"),  py::arg("Umin"),  py::arg("Usup") )
    // methods
        .def("Init",
             (void (GeomAPI_ProjectPointOnCurve::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (GeomAPI_ProjectPointOnCurve::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Curve> &  ) >(&GeomAPI_ProjectPointOnCurve::Init),
             R"#(Init the projection of a point <P> on a curve <Curve>)#"  , py::arg("P"),  py::arg("Curve"))
        .def("Init",
             (void (GeomAPI_ProjectPointOnCurve::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomAPI_ProjectPointOnCurve::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomAPI_ProjectPointOnCurve::Init),
             R"#(Init the projection of a point <P> on a curve <Curve> limited by the two points of parameter Umin and Usup.)#"  , py::arg("P"),  py::arg("Curve"),  py::arg("Umin"),  py::arg("Usup"))
        .def("Init",
             (void (GeomAPI_ProjectPointOnCurve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomAPI_ProjectPointOnCurve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomAPI_ProjectPointOnCurve::Init),
             R"#(Init the projection of a point <P> on a curve <Curve> limited by the two points of parameter Umin and Usup.)#"  , py::arg("Curve"),  py::arg("Umin"),  py::arg("Usup"))
        .def("Perform",
             (void (GeomAPI_ProjectPointOnCurve::*)( const gp_Pnt &  ) ) static_cast<void (GeomAPI_ProjectPointOnCurve::*)( const gp_Pnt &  ) >(&GeomAPI_ProjectPointOnCurve::Perform),
             R"#(Performs the projection of a point on the current curve.)#"  , py::arg("P"))
        .def("NbPoints",
             (Standard_Integer (GeomAPI_ProjectPointOnCurve::*)() const) static_cast<Standard_Integer (GeomAPI_ProjectPointOnCurve::*)() const>(&GeomAPI_ProjectPointOnCurve::NbPoints),
             R"#(Returns the number of computed orthogonal projection points. Note: if this algorithm fails, NbPoints returns 0.)#" )
        .def("Point",
             (gp_Pnt (GeomAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (GeomAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const>(&GeomAPI_ProjectPointOnCurve::Point),
             R"#(Returns the orthogonal projection on the curve. Index is a number of a computed point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points.)#"  , py::arg("Index"))
        .def("Parameter",
             (Standard_Real (GeomAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (GeomAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const>(&GeomAPI_ProjectPointOnCurve::Parameter),
             R"#(Returns the parameter on the curve of the point, which is the orthogonal projection. Index is a number of a computed point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points.)#"  , py::arg("Index"))
        .def("Distance",
             (Standard_Real (GeomAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (GeomAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const>(&GeomAPI_ProjectPointOnCurve::Distance),
             R"#(Computes the distance between the point and its orthogonal projection on the curve. Index is a number of a computed point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points.)#"  , py::arg("Index"))
        .def("NearestPoint",
             (gp_Pnt (GeomAPI_ProjectPointOnCurve::*)() const) static_cast<gp_Pnt (GeomAPI_ProjectPointOnCurve::*)() const>(&GeomAPI_ProjectPointOnCurve::NearestPoint),
             R"#(Returns the nearest orthogonal projection of the point on the curve. Exceptions: StdFail_NotDone if this algorithm fails.)#" )
        .def("LowerDistanceParameter",
             (Standard_Real (GeomAPI_ProjectPointOnCurve::*)() const) static_cast<Standard_Real (GeomAPI_ProjectPointOnCurve::*)() const>(&GeomAPI_ProjectPointOnCurve::LowerDistanceParameter),
             R"#(Returns the parameter on the curve of the nearest orthogonal projection of the point. Exceptions: StdFail_NotDone if this algorithm fails.)#" )
        .def("LowerDistance",
             (Standard_Real (GeomAPI_ProjectPointOnCurve::*)() const) static_cast<Standard_Real (GeomAPI_ProjectPointOnCurve::*)() const>(&GeomAPI_ProjectPointOnCurve::LowerDistance),
             R"#(Computes the distance between the point and its nearest orthogonal projection on the curve. Exceptions: StdFail_NotDone if this algorithm fails.)#" )
        .def("Extrema",
             (const Extrema_ExtPC & (GeomAPI_ProjectPointOnCurve::*)() const) static_cast<const Extrema_ExtPC & (GeomAPI_ProjectPointOnCurve::*)() const>(&GeomAPI_ProjectPointOnCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtPC & (GeomAPI_ProjectPointOnCurve::*)() const) static_cast<const Extrema_ExtPC & (GeomAPI_ProjectPointOnCurve::*)() const>(&GeomAPI_ProjectPointOnCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
        .def("Parameter",
             []( GeomAPI_ProjectPointOnCurve &self , const Standard_Integer Index ){ Standard_Real  U; self.Parameter(Index,U); return std::make_tuple(U); },
             R"#(Returns the parameter on the curve of the point, which is the orthogonal projection. Index is a number of a computed point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points.-)#"  , py::arg("Index"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<GeomAPI_ProjectPointOnSurf , shared_ptr<GeomAPI_ProjectPointOnSurf>  >>(m.attr("GeomAPI_ProjectPointOnSurf"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const opencascade::handle<Geom_Surface> &,const Extrema_ExtAlgo >()  , py::arg("P"),  py::arg("Surface"),  py::arg("Algo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
        .def(py::init< const gp_Pnt &,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Extrema_ExtAlgo >()  , py::arg("P"),  py::arg("Surface"),  py::arg("Tolerance"),  py::arg("Algo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
        .def(py::init< const gp_Pnt &,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Extrema_ExtAlgo >()  , py::arg("P"),  py::arg("Surface"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("Tolerance"),  py::arg("Algo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
        .def(py::init< const gp_Pnt &,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Extrema_ExtAlgo >()  , py::arg("P"),  py::arg("Surface"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("Algo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad) )
    // methods
        .def("Init",
             (void (GeomAPI_ProjectPointOnSurf::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Extrema_ExtAlgo  ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Extrema_ExtAlgo  ) >(&GeomAPI_ProjectPointOnSurf::Init),
             R"#(None)#"  , py::arg("P"),  py::arg("Surface"),  py::arg("Tolerance"),  py::arg("Algo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad))
        .def("Init",
             (void (GeomAPI_ProjectPointOnSurf::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Surface> & ,  const Extrema_ExtAlgo  ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Surface> & ,  const Extrema_ExtAlgo  ) >(&GeomAPI_ProjectPointOnSurf::Init),
             R"#(Init the projection of a point <P> on a surface <Surface>. The solution are computed in the domain [Umin,Usup] [Vmin,Vsup] of the surface.)#"  , py::arg("P"),  py::arg("Surface"),  py::arg("Algo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad))
        .def("Init",
             (void (GeomAPI_ProjectPointOnSurf::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Extrema_ExtAlgo  ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Extrema_ExtAlgo  ) >(&GeomAPI_ProjectPointOnSurf::Init),
             R"#(None)#"  , py::arg("P"),  py::arg("Surface"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("Tolerance"),  py::arg("Algo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad))
        .def("Init",
             (void (GeomAPI_ProjectPointOnSurf::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Extrema_ExtAlgo  ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const gp_Pnt & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Extrema_ExtAlgo  ) >(&GeomAPI_ProjectPointOnSurf::Init),
             R"#(Init the projection for many points on a surface <Surface>. The solutions will be computed in the domain [Umin,Usup] [Vmin,Vsup] of the surface.)#"  , py::arg("P"),  py::arg("Surface"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("Algo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad))
        .def("Init",
             (void (GeomAPI_ProjectPointOnSurf::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Extrema_ExtAlgo  ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Extrema_ExtAlgo  ) >(&GeomAPI_ProjectPointOnSurf::Init),
             R"#(None)#"  , py::arg("Surface"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("Tolerance"),  py::arg("Algo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad))
        .def("Init",
             (void (GeomAPI_ProjectPointOnSurf::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Extrema_ExtAlgo  ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Extrema_ExtAlgo  ) >(&GeomAPI_ProjectPointOnSurf::Init),
             R"#(None)#"  , py::arg("Surface"),  py::arg("Umin"),  py::arg("Usup"),  py::arg("Vmin"),  py::arg("Vsup"),  py::arg("Algo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad))
        .def("SetExtremaAlgo",
             (void (GeomAPI_ProjectPointOnSurf::*)( const Extrema_ExtAlgo  ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const Extrema_ExtAlgo  ) >(&GeomAPI_ProjectPointOnSurf::SetExtremaAlgo),
             R"#(Sets the Extrema search algorithm - Grad or Tree. By default the Extrema is initialized with Grad algorithm.)#"  , py::arg("theAlgo"))
        .def("SetExtremaFlag",
             (void (GeomAPI_ProjectPointOnSurf::*)( const Extrema_ExtFlag  ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const Extrema_ExtFlag  ) >(&GeomAPI_ProjectPointOnSurf::SetExtremaFlag),
             R"#(Sets the Extrema search flag - MIN or MAX or MINMAX. By default the Extrema is set to search the MinMax solutions.)#"  , py::arg("theExtFlag"))
        .def("Perform",
             (void (GeomAPI_ProjectPointOnSurf::*)( const gp_Pnt &  ) ) static_cast<void (GeomAPI_ProjectPointOnSurf::*)( const gp_Pnt &  ) >(&GeomAPI_ProjectPointOnSurf::Perform),
             R"#(Performs the projection of a point on the current surface.)#"  , py::arg("P"))
        .def("IsDone",
             (Standard_Boolean (GeomAPI_ProjectPointOnSurf::*)() const) static_cast<Standard_Boolean (GeomAPI_ProjectPointOnSurf::*)() const>(&GeomAPI_ProjectPointOnSurf::IsDone),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (GeomAPI_ProjectPointOnSurf::*)() const) static_cast<Standard_Integer (GeomAPI_ProjectPointOnSurf::*)() const>(&GeomAPI_ProjectPointOnSurf::NbPoints),
             R"#(Returns the number of computed orthogonal projection points. Note: if projection fails, NbPoints returns 0.)#" )
        .def("Point",
             (gp_Pnt (GeomAPI_ProjectPointOnSurf::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (GeomAPI_ProjectPointOnSurf::*)( const Standard_Integer  ) const>(&GeomAPI_ProjectPointOnSurf::Point),
             R"#(Returns the orthogonal projection on the surface. Index is a number of a computed point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points.)#"  , py::arg("Index"))
        .def("Distance",
             (Standard_Real (GeomAPI_ProjectPointOnSurf::*)( const Standard_Integer  ) const) static_cast<Standard_Real (GeomAPI_ProjectPointOnSurf::*)( const Standard_Integer  ) const>(&GeomAPI_ProjectPointOnSurf::Distance),
             R"#(Computes the distance between the point and its orthogonal projection on the surface. Index is a number of a computed point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points.)#"  , py::arg("Index"))
        .def("NearestPoint",
             (gp_Pnt (GeomAPI_ProjectPointOnSurf::*)() const) static_cast<gp_Pnt (GeomAPI_ProjectPointOnSurf::*)() const>(&GeomAPI_ProjectPointOnSurf::NearestPoint),
             R"#(Returns the nearest orthogonal projection of the point on the surface. Exceptions StdFail_NotDone if projection fails.)#" )
        .def("LowerDistance",
             (Standard_Real (GeomAPI_ProjectPointOnSurf::*)() const) static_cast<Standard_Real (GeomAPI_ProjectPointOnSurf::*)() const>(&GeomAPI_ProjectPointOnSurf::LowerDistance),
             R"#(Computes the distance between the point and its nearest orthogonal projection on the surface. Exceptions StdFail_NotDone if projection fails.)#" )
        .def("Extrema",
             (const Extrema_ExtPS & (GeomAPI_ProjectPointOnSurf::*)() const) static_cast<const Extrema_ExtPS & (GeomAPI_ProjectPointOnSurf::*)() const>(&GeomAPI_ProjectPointOnSurf::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtPS & (GeomAPI_ProjectPointOnSurf::*)() const) static_cast<const Extrema_ExtPS & (GeomAPI_ProjectPointOnSurf::*)() const>(&GeomAPI_ProjectPointOnSurf::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
    // methods using call by reference i.s.o. return
        .def("Parameters",
             []( GeomAPI_ProjectPointOnSurf &self , const Standard_Integer Index ){ Standard_Real  U; Standard_Real  V; self.Parameters(Index,U,V); return std::make_tuple(U,V); },
             R"#(Returns the parameters (U,V) on the surface of the orthogonal projection. Index is a number of a computed point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points.)#"  , py::arg("Index"))
        .def("LowerDistanceParameters",
             []( GeomAPI_ProjectPointOnSurf &self   ){ Standard_Real  U; Standard_Real  V; self.LowerDistanceParameters(U,V); return std::make_tuple(U,V); },
             R"#(Returns the parameters (U,V) on the surface of the nearest computed orthogonal projection of the point. Exceptions StdFail_NotDone if projection fails.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/GeomAPI_ExtremaCurveSurface.hxx
// ./opencascade/GeomAPI_ProjectPointOnSurf.hxx
// ./opencascade/GeomAPI.hxx
// ./opencascade/GeomAPI_PointsToBSpline.hxx
// ./opencascade/GeomAPI_PointsToBSplineSurface.hxx
// ./opencascade/GeomAPI_ProjectPointOnCurve.hxx
// ./opencascade/GeomAPI_ExtremaSurfaceSurface.hxx
// ./opencascade/GeomAPI_IntCS.hxx
// ./opencascade/GeomAPI_Interpolate.hxx
// ./opencascade/GeomAPI_ExtremaCurveCurve.hxx
// ./opencascade/GeomAPI_IntSS.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
