
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NullObject.hxx>

// module includes
#include <Geom2dAPI_ExtremaCurveCurve.hxx>
#include <Geom2dAPI_InterCurveCurve.hxx>
#include <Geom2dAPI_Interpolate.hxx>
#include <Geom2dAPI_PointsToBSpline.hxx>
#include <Geom2dAPI_ProjectPointOnCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dAPI"));


//Python trampoline classes

// classes


    static_cast<py::class_<Geom2dAPI_PointsToBSpline ,std::unique_ptr<Geom2dAPI_PointsToBSpline>  >>(m.attr("Geom2dAPI_PointsToBSpline"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> &,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol2D")=static_cast<const Standard_Real>(1.0e-6) )
        .def(py::init<  const NCollection_Array1<Standard_Real> &,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("YValues"),  py::arg("X0"),  py::arg("DX"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol2D")=static_cast<const Standard_Real>(1.0e-6) )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> &,const Approx_ParametrizationType,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("ParType"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol2D")=static_cast<const Standard_Real>(1.0e-3) )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> &, const NCollection_Array1<Standard_Real> &,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("Parameters"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol2D")=static_cast<const Standard_Real>(1.0e-3) )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Points"),  py::arg("Weight1"),  py::arg("Weight2"),  py::arg("Weight3"),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol3D")=static_cast<const Standard_Real>(1.0e-3) )
        .def("Init",
             (void (Geom2dAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (Geom2dAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&Geom2dAPI_PointsToBSpline::Init),
             R"#(Approximate a BSpline Curve passing through an array of Point. The resulting BSpline will have the following properties: 1- his degree will be in the range [Degmin,Degmax] 2- his continuity will be at least <Continuity> 3- the distance from the point <Points> to the BSpline will be lower to Tol2D)#"  , py::arg("Points"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol2D")=static_cast<const Standard_Real>(1.0e-6))
        .def("Init",
             (void (Geom2dAPI_PointsToBSpline::*)(  const NCollection_Array1<Standard_Real> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (Geom2dAPI_PointsToBSpline::*)(  const NCollection_Array1<Standard_Real> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&Geom2dAPI_PointsToBSpline::Init),
             R"#(Approximate a BSpline Curve passing through an array of Point. Of coordinates :)#"  , py::arg("YValues"),  py::arg("X0"),  py::arg("DX"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol2D")=static_cast<const Standard_Real>(1.0e-6))
        .def("Init",
             (void (Geom2dAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const Approx_ParametrizationType ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (Geom2dAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const Approx_ParametrizationType ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&Geom2dAPI_PointsToBSpline::Init),
             R"#(Approximate a BSpline Curve passing through an array of Point. The resulting BSpline will have the following properties: 1- his degree will be in the range [Degmin,Degmax] 2- his continuity will be at least <Continuity> 3- the distance from the point <Points> to the BSpline will be lower to Tol2D)#"  , py::arg("Points"),  py::arg("ParType"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol2D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Init",
             (void (Geom2dAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt2d> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (Geom2dAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt2d> & ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Integer ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&Geom2dAPI_PointsToBSpline::Init),
             R"#(Approximate a BSpline Curve passing through an array of Point, which parameters are given by the array <Parameters>. The resulting BSpline will have the following properties: 1- his degree will be in the range [Degmin,Degmax] 2- his continuity will be at least <Continuity> 3- the distance from the point <Points> to the BSpline will be lower to Tol2D)#"  , py::arg("Points"),  py::arg("Parameters"),  py::arg("DegMin")=static_cast<const Standard_Integer>(3),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol2D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Init",
             (void (Geom2dAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) ) static_cast<void (Geom2dAPI_PointsToBSpline::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const GeomAbs_Shape ,  const Standard_Real  ) >(&Geom2dAPI_PointsToBSpline::Init),
             R"#(Approximate a BSpline Curve passing through an array of Point using variational smoothing algorithm, which tries to minimize additional criterium: Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion)#"  , py::arg("Points"),  py::arg("Weight1"),  py::arg("Weight2"),  py::arg("Weight3"),  py::arg("DegMax")=static_cast<const Standard_Integer>(8),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Tol2D")=static_cast<const Standard_Real>(1.0e-3))
        .def("Curve",
             (const opencascade::handle<Geom2d_BSplineCurve> & (Geom2dAPI_PointsToBSpline::*)() const) static_cast<const opencascade::handle<Geom2d_BSplineCurve> & (Geom2dAPI_PointsToBSpline::*)() const>(&Geom2dAPI_PointsToBSpline::Curve),
             R"#(Returns the approximate BSpline Curve)#" )
        .def("IsDone",
             (Standard_Boolean (Geom2dAPI_PointsToBSpline::*)() const) static_cast<Standard_Boolean (Geom2dAPI_PointsToBSpline::*)() const>(&Geom2dAPI_PointsToBSpline::IsDone),
             R"#(None)#" )
;


    static_cast<py::class_<Geom2dAPI_ProjectPointOnCurve ,std::unique_ptr<Geom2dAPI_ProjectPointOnCurve>  >>(m.attr("Geom2dAPI_ProjectPointOnCurve"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const opencascade::handle<Geom2d_Curve> & >()  , py::arg("P"),  py::arg("Curve") )
        .def(py::init< const gp_Pnt2d &,const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("Curve"),  py::arg("Umin"),  py::arg("Usup") )
        .def("Init",
             (void (Geom2dAPI_ProjectPointOnCurve::*)( const gp_Pnt2d & ,  const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (Geom2dAPI_ProjectPointOnCurve::*)( const gp_Pnt2d & ,  const opencascade::handle<Geom2d_Curve> &  ) >(&Geom2dAPI_ProjectPointOnCurve::Init),
             R"#(Initializes this algorithm with the given arguments, and computes the orthogonal projections of a point <P> on a curve <Curve>)#"  , py::arg("P"),  py::arg("Curve"))
        .def("Init",
             (void (Geom2dAPI_ProjectPointOnCurve::*)( const gp_Pnt2d & ,  const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom2dAPI_ProjectPointOnCurve::*)( const gp_Pnt2d & ,  const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&Geom2dAPI_ProjectPointOnCurve::Init),
             R"#(Initializes this algorithm with the given arguments, and computes the orthogonal projections of the point P onto the portion of the curve Curve limited by the two points of parameter Umin and Usup.)#"  , py::arg("P"),  py::arg("Curve"),  py::arg("Umin"),  py::arg("Usup"))
        .def("NbPoints",
             (Standard_Integer (Geom2dAPI_ProjectPointOnCurve::*)() const) static_cast<Standard_Integer (Geom2dAPI_ProjectPointOnCurve::*)() const>(&Geom2dAPI_ProjectPointOnCurve::NbPoints),
             R"#(return the number of of computed orthogonal projectionn points.)#" )
        .def("Point",
             (gp_Pnt2d (Geom2dAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const) static_cast<gp_Pnt2d (Geom2dAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const>(&Geom2dAPI_ProjectPointOnCurve::Point),
             R"#(Returns the orthogonal projection on the curve. Index is a number of a computed point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points.)#"  , py::arg("Index"))
        .def("Parameter",
             (Standard_Real (Geom2dAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom2dAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const>(&Geom2dAPI_ProjectPointOnCurve::Parameter),
             R"#(Returns the parameter on the curve of a point which is the orthogonal projection. Index is a number of a computed projected point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points.)#"  , py::arg("Index"))
        .def("Parameter",
             (void (Geom2dAPI_ProjectPointOnCurve::*)( const Standard_Integer ,  Standard_Real &  ) const) static_cast<void (Geom2dAPI_ProjectPointOnCurve::*)( const Standard_Integer ,  Standard_Real &  ) const>(&Geom2dAPI_ProjectPointOnCurve::Parameter),
             R"#(Returns the parameter on the curve of a point which is the orthogonal projection. Index is a number of a computed projected point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points)#"  , py::arg("Index"),  py::arg("U"))
        .def("Distance",
             (Standard_Real (Geom2dAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom2dAPI_ProjectPointOnCurve::*)( const Standard_Integer  ) const>(&Geom2dAPI_ProjectPointOnCurve::Distance),
             R"#(Computes the distance between the point and its computed orthogonal projection on the curve. Index is a number of computed projected point. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where NbPoints is the number of solution points.)#"  , py::arg("Index"))
        .def("NearestPoint",
             (gp_Pnt2d (Geom2dAPI_ProjectPointOnCurve::*)() const) static_cast<gp_Pnt2d (Geom2dAPI_ProjectPointOnCurve::*)() const>(&Geom2dAPI_ProjectPointOnCurve::NearestPoint),
             R"#(Returns the nearest orthogonal projection of the point on the curve. Exceptions StdFail_NotDone if this algorithm fails.)#" )
        .def("LowerDistanceParameter",
             (Standard_Real (Geom2dAPI_ProjectPointOnCurve::*)() const) static_cast<Standard_Real (Geom2dAPI_ProjectPointOnCurve::*)() const>(&Geom2dAPI_ProjectPointOnCurve::LowerDistanceParameter),
             R"#(Returns the parameter on the curve of the nearest orthogonal projection of the point. Exceptions StdFail_NotDone if this algorithm fails.)#" )
        .def("LowerDistance",
             (Standard_Real (Geom2dAPI_ProjectPointOnCurve::*)() const) static_cast<Standard_Real (Geom2dAPI_ProjectPointOnCurve::*)() const>(&Geom2dAPI_ProjectPointOnCurve::LowerDistance),
             R"#(Computes the distance between the point and its nearest orthogonal projection on the curve. Exceptions StdFail_NotDone if this algorithm fails.)#" )
        .def("Extrema",
             (const Extrema_ExtPC2d & (Geom2dAPI_ProjectPointOnCurve::*)() const) static_cast<const Extrema_ExtPC2d & (Geom2dAPI_ProjectPointOnCurve::*)() const>(&Geom2dAPI_ProjectPointOnCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
        .def("Extrema",
             (const Extrema_ExtPC2d & (Geom2dAPI_ProjectPointOnCurve::*)() const) static_cast<const Extrema_ExtPC2d & (Geom2dAPI_ProjectPointOnCurve::*)() const>(&Geom2dAPI_ProjectPointOnCurve::Extrema),
             R"#(return the algorithmic object from Extrema)#" )
;


    static_cast<py::class_<Geom2dAPI_InterCurveCurve ,std::unique_ptr<Geom2dAPI_InterCurveCurve>  >>(m.attr("Geom2dAPI_InterCurveCurve"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom2d_Curve> &,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-6) )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real >()  , py::arg("C1"),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-6) )
        .def("Init",
             (void (Geom2dAPI_InterCurveCurve::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real  ) ) static_cast<void (Geom2dAPI_InterCurveCurve::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real  ) >(&Geom2dAPI_InterCurveCurve::Init),
             R"#(Initializes an algorithm with the given arguments and computes the intersections between the curves C1. and C2.)#"  , py::arg("C1"),  py::arg("C2"),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-6))
        .def("Init",
             (void (Geom2dAPI_InterCurveCurve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real  ) ) static_cast<void (Geom2dAPI_InterCurveCurve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real  ) >(&Geom2dAPI_InterCurveCurve::Init),
             R"#(Initializes an algorithm with the given arguments and computes the self-intersections of the curve C1. Tolerance value Tol, defaulted to 1.0e-6, defines the precision of computing the intersection points. In case of a tangential intersection, Tol also defines the size of intersection segments (limited portions of the curves) where the distance between all points from two curves (or a curve in case of self-intersection) is less than Tol. Warning Use functions NbPoints and NbSegments to obtain the number of solutions. If the algorithm finds no intersections NbPoints and NbSegments return 0.)#"  , py::arg("C1"),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-6))
        .def("NbPoints",
             (Standard_Integer (Geom2dAPI_InterCurveCurve::*)() const) static_cast<Standard_Integer (Geom2dAPI_InterCurveCurve::*)() const>(&Geom2dAPI_InterCurveCurve::NbPoints),
             R"#(Returns the number of intersection-points in case of cross intersections. NbPoints returns 0 if no intersections were found.)#" )
        .def("Point",
             (gp_Pnt2d (Geom2dAPI_InterCurveCurve::*)( const Standard_Integer  ) const) static_cast<gp_Pnt2d (Geom2dAPI_InterCurveCurve::*)( const Standard_Integer  ) const>(&Geom2dAPI_InterCurveCurve::Point),
             R"#(Returns the intersection point of index Index. Intersection points are computed in case of cross intersections with a precision equal to the tolerance value assigned at the time of construction or in the function Init (this value is defaulted to 1.0e-6). Exceptions Standard_OutOfRange if index is not in the range [ 1,NbPoints ], where NbPoints is the number of computed intersection points)#"  , py::arg("Index"))
        .def("NbSegments",
             (Standard_Integer (Geom2dAPI_InterCurveCurve::*)() const) static_cast<Standard_Integer (Geom2dAPI_InterCurveCurve::*)() const>(&Geom2dAPI_InterCurveCurve::NbSegments),
             R"#(Returns the number of tangential intersections. NbSegments returns 0 if no intersections were found)#" )
        .def("Segment",
             (void (Geom2dAPI_InterCurveCurve::*)( const Standard_Integer ,  opencascade::handle<Geom2d_Curve> & ,  opencascade::handle<Geom2d_Curve> &  ) const) static_cast<void (Geom2dAPI_InterCurveCurve::*)( const Standard_Integer ,  opencascade::handle<Geom2d_Curve> & ,  opencascade::handle<Geom2d_Curve> &  ) const>(&Geom2dAPI_InterCurveCurve::Segment),
             R"#(Use this syntax only to get solutions of tangential intersection between two curves. Output values Curve1 and Curve2 are the intersection segments on the first curve and on the second curve accordingly. Parameter Index defines a number of computed solution. An intersection segment is a portion of an initial curve limited by two points. The distance from each point of this segment to the other curve is less or equal to the tolerance value assigned at the time of construction or in function Init (this value is defaulted to 1.0e-6). Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbSegments ], where NbSegments is the number of computed tangential intersections. Standard_NullObject if the algorithm is initialized for the computing of self-intersections on a curve.)#"  , py::arg("Index"),  py::arg("Curve1"),  py::arg("Curve2"))
        .def("Intersector",
             (const Geom2dInt_GInter & (Geom2dAPI_InterCurveCurve::*)() const) static_cast<const Geom2dInt_GInter & (Geom2dAPI_InterCurveCurve::*)() const>(&Geom2dAPI_InterCurveCurve::Intersector),
             R"#(return the algorithmic object from Intersection.)#" )
        .def("Intersector",
             (const Geom2dInt_GInter & (Geom2dAPI_InterCurveCurve::*)() const) static_cast<const Geom2dInt_GInter & (Geom2dAPI_InterCurveCurve::*)() const>(&Geom2dAPI_InterCurveCurve::Intersector),
             R"#(return the algorithmic object from Intersection.)#" )
;


    static_cast<py::class_<Geom2dAPI_Interpolate ,std::unique_ptr<Geom2dAPI_Interpolate>  >>(m.attr("Geom2dAPI_Interpolate"))
        .def(py::init< const opencascade::handle<TColgp_HArray1OfPnt2d> &,const Standard_Boolean,const Standard_Real >()  , py::arg("Points"),  py::arg("PeriodicFlag"),  py::arg("Tolerance") )
        .def(py::init< const opencascade::handle<TColgp_HArray1OfPnt2d> &,const opencascade::handle<TColStd_HArray1OfReal> &,const Standard_Boolean,const Standard_Real >()  , py::arg("Points"),  py::arg("Parameters"),  py::arg("PeriodicFlag"),  py::arg("Tolerance") )
        .def("Load",
             (void (Geom2dAPI_Interpolate::*)( const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Boolean  ) ) static_cast<void (Geom2dAPI_Interpolate::*)( const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Boolean  ) >(&Geom2dAPI_Interpolate::Load),
             R"#(Assigns this constrained BSpline curve to be tangential to vectors InitialTangent and FinalTangent at its first and last points respectively (i.e. the first and last points of the table of points through which the curve passes, as defined at the time of initialization). <Scale> - boolean flag defining whether tangent vectors are to be scaled according to derivatives of lagrange interpolation.)#"  , py::arg("InitialTangent"),  py::arg("FinalTangent"),  py::arg("Scale")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Load",
             (void (Geom2dAPI_Interpolate::*)(  const NCollection_Array1<gp_Vec2d> & ,  const opencascade::handle<TColStd_HArray1OfBoolean> & ,  const Standard_Boolean  ) ) static_cast<void (Geom2dAPI_Interpolate::*)(  const NCollection_Array1<gp_Vec2d> & ,  const opencascade::handle<TColStd_HArray1OfBoolean> & ,  const Standard_Boolean  ) >(&Geom2dAPI_Interpolate::Load),
             R"#(Assigns this constrained BSpline curve to be tangential to vectors defined in the table Tangents, which is parallel to the table of points through which the curve passes, as defined at the time of initialization. Vectors in the table Tangents are defined only if the flag given in the parallel table TangentFlags is true: only these vectors are set as tangency constraints. <Scale> - boolean flag defining whether tangent vectors are to be scaled according to derivatives of lagrange interpolation.)#"  , py::arg("Tangents"),  py::arg("TangentFlags"),  py::arg("Scale")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (Geom2dAPI_Interpolate::*)() ) static_cast<void (Geom2dAPI_Interpolate::*)() >(&Geom2dAPI_Interpolate::Perform),
             R"#(Computes the constrained BSpline curve. Use the function IsDone to verify that the computation is successful, and then the function Curve to obtain the result.)#" )
        .def("Curve",
             (const opencascade::handle<Geom2d_BSplineCurve> & (Geom2dAPI_Interpolate::*)() const) static_cast<const opencascade::handle<Geom2d_BSplineCurve> & (Geom2dAPI_Interpolate::*)() const>(&Geom2dAPI_Interpolate::Curve),
             R"#(Returns the computed BSpline curve. Raises StdFail_NotDone if the interpolation fails.)#" )
        .def("IsDone",
             (Standard_Boolean (Geom2dAPI_Interpolate::*)() const) static_cast<Standard_Boolean (Geom2dAPI_Interpolate::*)() const>(&Geom2dAPI_Interpolate::IsDone),
             R"#(Returns true if the constrained BSpline curve is successfully constructed. Note: in this case, the result is given by the function Curve.)#" )
;


    static_cast<py::class_<Geom2dAPI_ExtremaCurveCurve ,std::unique_ptr<Geom2dAPI_ExtremaCurveCurve>  >>(m.attr("Geom2dAPI_ExtremaCurveCurve"))
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C1"),  py::arg("C2"),  py::arg("U1min"),  py::arg("U1max"),  py::arg("U2min"),  py::arg("U2max") )
        .def("NbExtrema",
             (Standard_Integer (Geom2dAPI_ExtremaCurveCurve::*)() const) static_cast<Standard_Integer (Geom2dAPI_ExtremaCurveCurve::*)() const>(&Geom2dAPI_ExtremaCurveCurve::NbExtrema),
             R"#(Returns the number of extrema computed by this algorithm. Note: if this algorithm fails, NbExtrema returns 0.)#" )
        .def("Points",
             (void (Geom2dAPI_ExtremaCurveCurve::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const) static_cast<void (Geom2dAPI_ExtremaCurveCurve::*)( const Standard_Integer ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const>(&Geom2dAPI_ExtremaCurveCurve::Points),
             R"#(Returns the points P1 on the first curve and P2 on the second curve, which are the ends of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"),  py::arg("P1"),  py::arg("P2"))
        .def("Parameters",
             (void (Geom2dAPI_ExtremaCurveCurve::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Geom2dAPI_ExtremaCurveCurve::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&Geom2dAPI_ExtremaCurveCurve::Parameters),
             R"#(Returns the parameters U1 of the point on the first curve and U2 of the point on the second curve, which are the ends of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"),  py::arg("U1"),  py::arg("U2"))
        .def("Distance",
             (Standard_Real (Geom2dAPI_ExtremaCurveCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom2dAPI_ExtremaCurveCurve::*)( const Standard_Integer  ) const>(&Geom2dAPI_ExtremaCurveCurve::Distance),
             R"#(Computes the distance between the end points of the extremum of index Index computed by this algorithm. Exceptions Standard_OutOfRange if Index is not in the range [ 1,NbExtrema ], where NbExtrema is the number of extrema computed by this algorithm.)#"  , py::arg("Index"))
        .def("NearestPoints",
             (void (Geom2dAPI_ExtremaCurveCurve::*)( gp_Pnt2d & ,  gp_Pnt2d &  ) const) static_cast<void (Geom2dAPI_ExtremaCurveCurve::*)( gp_Pnt2d & ,  gp_Pnt2d &  ) const>(&Geom2dAPI_ExtremaCurveCurve::NearestPoints),
             R"#(Returns the points P1 on the first curve and P2 on the second curve, which are the ends of the shortest extremum computed by this algorithm. Exceptions StdFail_NotDone if this algorithm fails.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("LowerDistanceParameters",
             (void (Geom2dAPI_ExtremaCurveCurve::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (Geom2dAPI_ExtremaCurveCurve::*)( Standard_Real & ,  Standard_Real &  ) const>(&Geom2dAPI_ExtremaCurveCurve::LowerDistanceParameters),
             R"#(Returns the parameters U1 of the point on the first curve and U2 of the point on the second curve, which are the ends of the shortest extremum computed by this algorithm. Exceptions StdFail_NotDone if this algorithm fails.)#"  , py::arg("U1"),  py::arg("U2"))
        .def("LowerDistance",
             (Standard_Real (Geom2dAPI_ExtremaCurveCurve::*)() const) static_cast<Standard_Real (Geom2dAPI_ExtremaCurveCurve::*)() const>(&Geom2dAPI_ExtremaCurveCurve::LowerDistance),
             R"#(Computes the distance between the end points of the shortest extremum computed by this algorithm. Exceptions - StdFail_NotDone if this algorithm fails.)#" )
        .def("Extrema",
             (const Extrema_ExtCC2d & (Geom2dAPI_ExtremaCurveCurve::*)() const) static_cast<const Extrema_ExtCC2d & (Geom2dAPI_ExtremaCurveCurve::*)() const>(&Geom2dAPI_ExtremaCurveCurve::Extrema),
             R"#(None)#" )
        .def("Extrema",
             (const Extrema_ExtCC2d & (Geom2dAPI_ExtremaCurveCurve::*)() const) static_cast<const Extrema_ExtCC2d & (Geom2dAPI_ExtremaCurveCurve::*)() const>(&Geom2dAPI_ExtremaCurveCurve::Extrema),
             R"#(None)#" )
;

// functions
// ./opencascade/Geom2dAPI_PointsToBSpline.hxx
// ./opencascade/Geom2dAPI_Interpolate.hxx
// ./opencascade/Geom2dAPI_ProjectPointOnCurve.hxx
// ./opencascade/Geom2dAPI_ExtremaCurveCurve.hxx
// ./opencascade/Geom2dAPI_InterCurveCurve.hxx

// operators

// register typdefs
// ./opencascade/Geom2dAPI_PointsToBSpline.hxx
// ./opencascade/Geom2dAPI_Interpolate.hxx
// ./opencascade/Geom2dAPI_ProjectPointOnCurve.hxx
// ./opencascade/Geom2dAPI_ExtremaCurveCurve.hxx
// ./opencascade/Geom2dAPI_InterCurveCurve.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
