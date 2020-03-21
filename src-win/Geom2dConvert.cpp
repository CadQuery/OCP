
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
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <Geom2dConvert_BSplineCurveKnotSplitting.hxx>
#include <Geom2dConvert_BSplineCurveToBezierCurve.hxx>
#include <Geom2dConvert_CompCurveToBSplineCurve.hxx>
#include <Geom2dConvert_ApproxCurve.hxx>

// module includes
#include <Geom2dConvert.hxx>
#include <Geom2dConvert_ApproxCurve.hxx>
#include <Geom2dConvert_BSplineCurveKnotSplitting.hxx>
#include <Geom2dConvert_BSplineCurveToBezierCurve.hxx>
#include <Geom2dConvert_CompCurveToBSplineCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dConvert(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dConvert"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<Geom2dConvert , shared_ptr<Geom2dConvert>>(m,"Geom2dConvert");

    static_cast<py::class_<Geom2dConvert , shared_ptr<Geom2dConvert> >>(m.attr("Geom2dConvert"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SplitBSplineCurve_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom2d_BSplineCurve> & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom2d_BSplineCurve> & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&Geom2dConvert::SplitBSplineCurve),
                    R"#(-- Convert a curve to BSpline by Approximation)#"  , py::arg("C"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("SameOrientation")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("SplitBSplineCurve_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom2d_BSplineCurve> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom2d_BSplineCurve> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&Geom2dConvert::SplitBSplineCurve),
                    R"#(This function computes the segment of B-spline curve between the parametric values FromU1, ToU2. If C is periodic the arc has the same orientation as C if SameOrientation = True. If C is not periodic SameOrientation is not used for the computation and C is oriented fromU1 toU2. If U1 and U2 and two parametric values we consider that U1 = U2 if Abs (U1 - U2) <= ParametricTolerance and ParametricTolerance must be greater or equal to Resolution from package gp.)#"  , py::arg("C"),  py::arg("FromU1"),  py::arg("ToU2"),  py::arg("ParametricTolerance"),  py::arg("SameOrientation")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("CurveToBSplineCurve_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom2d_Curve> & , const Convert_ParameterisationType ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom2d_Curve> & , const Convert_ParameterisationType ) >(&Geom2dConvert::CurveToBSplineCurve),
                    R"#(This function converts a non infinite curve from Geom into a B-spline curve. C must be an ellipse or a circle or a trimmed conic or a trimmed line or a Bezier curve or a trimmed Bezier curve or a BSpline curve or a trimmed BSpline curve or an Offset curve or a trimmed Offset curve. The returned B-spline is not periodic except if C is a Circle or an Ellipse. ParameterisationType applies only if the curve is a Circle or an ellipse : TgtThetaOver2, TgtThetaOver2_1, TgtThetaOver2_2, TgtThetaOver2_3, TgtThetaOver2_4, Purpose: this is the classical rational parameterisation 2 1 - t cos(theta) = ------ 2 1 + t)#"  , py::arg("C"),  py::arg("Parameterisation")=static_cast<const Convert_ParameterisationType>(Convert_TgtThetaOver2))
        .def_static("C0BSplineToC1BSplineCurve_s",
                    (void (*)( opencascade::handle<Geom2d_BSplineCurve> & , const Standard_Real ) ) static_cast<void (*)( opencascade::handle<Geom2d_BSplineCurve> & , const Standard_Real ) >(&Geom2dConvert::C0BSplineToC1BSplineCurve),
                    R"#(This Method reduces as far as it is possible the multiplicities of the knots of the BSpline BS.(keeping the geometry). It returns a new BSpline which could still be C0. tolerance is a geometrical tolerance)#"  , py::arg("BS"),  py::arg("Tolerance"))
        .def_static("C0BSplineToArrayOfC1BSplineCurve_s",
                    (void (*)( const opencascade::handle<Geom2d_BSplineCurve> & , opencascade::handle<TColGeom2d_HArray1OfBSplineCurve> & , const Standard_Real ) ) static_cast<void (*)( const opencascade::handle<Geom2d_BSplineCurve> & , opencascade::handle<TColGeom2d_HArray1OfBSplineCurve> & , const Standard_Real ) >(&Geom2dConvert::C0BSplineToArrayOfC1BSplineCurve),
                    R"#(This Method reduces as far as it is possible the multiplicities of the knots of the BSpline BS.(keeping the geometry). It returns an array of BSpline C1. Tolerance is a geometrical tolerance)#"  , py::arg("BS"),  py::arg("tabBS"),  py::arg("Tolerance"))
        .def_static("C0BSplineToArrayOfC1BSplineCurve_s",
                    (void (*)( const opencascade::handle<Geom2d_BSplineCurve> & , opencascade::handle<TColGeom2d_HArray1OfBSplineCurve> & , const Standard_Real , const Standard_Real ) ) static_cast<void (*)( const opencascade::handle<Geom2d_BSplineCurve> & , opencascade::handle<TColGeom2d_HArray1OfBSplineCurve> & , const Standard_Real , const Standard_Real ) >(&Geom2dConvert::C0BSplineToArrayOfC1BSplineCurve),
                    R"#(This Method reduces as far as it is possible the multiplicities of the knots of the BSpline BS.(keeping the geometry). It returns an array of BSpline C1. tolerance is a geometrical tolerance)#"  , py::arg("BS"),  py::arg("tabBS"),  py::arg("AngularTolerance"),  py::arg("Tolerance"))
    // static methods using call by reference i.s.o. return
        .def_static("ConcatG1_s",
                    []( NCollection_Array1<opencascade::handle<Geom2d_BSplineCurve> > & ArrayOfCurves, const NCollection_Array1<Standard_Real> & ArrayOfToler,opencascade::handle<TColGeom2d_HArray1OfBSplineCurve> & ArrayOfConcatenated,const Standard_Real ClosedTolerance ){ Standard_Boolean  ClosedFlag; Geom2dConvert::ConcatG1(ArrayOfCurves,ArrayOfToler,ArrayOfConcatenated,ClosedFlag,ClosedTolerance); return std::make_tuple(ClosedFlag); },
                    R"#(This Method concatenates G1 the ArrayOfCurves as far as it is possible. ArrayOfCurves[0..N-1] ArrayOfToler contains the biggest tolerance of the two points shared by two consecutives curves. Its dimension: [0..N-2] ClosedFlag indicates if the ArrayOfCurves is closed. In this case ClosedTolerance contains the biggest tolerance of the two points which are at the closure. Otherwise its value is 0.0 ClosedFlag becomes False on the output if it is impossible to build closed curve.)#"  , py::arg("ArrayOfCurves"),  py::arg("ArrayOfToler"),  py::arg("ArrayOfConcatenated"),  py::arg("ClosedTolerance"))
        .def_static("ConcatC1_s",
                    []( NCollection_Array1<opencascade::handle<Geom2d_BSplineCurve> > & ArrayOfCurves, const NCollection_Array1<Standard_Real> & ArrayOfToler,opencascade::handle<TColStd_HArray1OfInteger> & ArrayOfIndices,opencascade::handle<TColGeom2d_HArray1OfBSplineCurve> & ArrayOfConcatenated,const Standard_Real ClosedTolerance ){ Standard_Boolean  ClosedFlag; Geom2dConvert::ConcatC1(ArrayOfCurves,ArrayOfToler,ArrayOfIndices,ArrayOfConcatenated,ClosedFlag,ClosedTolerance); return std::make_tuple(ClosedFlag); },
                    R"#(This Method concatenates C1 the ArrayOfCurves as far as it is possible. ArrayOfCurves[0..N-1] ArrayOfToler contains the biggest tolerance of the two points shared by two consecutives curves. Its dimension: [0..N-2] ClosedFlag indicates if the ArrayOfCurves is closed. In this case ClosedTolerance contains the biggest tolerance of the two points which are at the closure. Otherwise its value is 0.0 ClosedFlag becomes False on the output if it is impossible to build closed curve.)#"  , py::arg("ArrayOfCurves"),  py::arg("ArrayOfToler"),  py::arg("ArrayOfIndices"),  py::arg("ArrayOfConcatenated"),  py::arg("ClosedTolerance"))
        .def_static("ConcatC1_s",
                    []( NCollection_Array1<opencascade::handle<Geom2d_BSplineCurve> > & ArrayOfCurves, const NCollection_Array1<Standard_Real> & ArrayOfToler,opencascade::handle<TColStd_HArray1OfInteger> & ArrayOfIndices,opencascade::handle<TColGeom2d_HArray1OfBSplineCurve> & ArrayOfConcatenated,const Standard_Real ClosedTolerance,const Standard_Real AngularTolerance ){ Standard_Boolean  ClosedFlag; Geom2dConvert::ConcatC1(ArrayOfCurves,ArrayOfToler,ArrayOfIndices,ArrayOfConcatenated,ClosedFlag,ClosedTolerance,AngularTolerance); return std::make_tuple(ClosedFlag); },
                    R"#(This Method concatenates C1 the ArrayOfCurves as far as it is possible. ArrayOfCurves[0..N-1] ArrayOfToler contains the biggest tolerance of the two points shared by two consecutives curves. Its dimension: [0..N-2] ClosedFlag indicates if the ArrayOfCurves is closed. In this case ClosedTolerance contains the biggest tolerance of the two points which are at the closure. Otherwise its value is 0.0 ClosedFlag becomes False on the output if it is impossible to build closed curve.)#"  , py::arg("ArrayOfCurves"),  py::arg("ArrayOfToler"),  py::arg("ArrayOfIndices"),  py::arg("ArrayOfConcatenated"),  py::arg("ClosedTolerance"),  py::arg("AngularTolerance"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dConvert_ApproxCurve , shared_ptr<Geom2dConvert_ApproxCurve> >>(m.attr("Geom2dConvert_ApproxCurve"))
    // constructors
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer >()  , py::arg("Curve"),  py::arg("Tol2d"),  py::arg("Order"),  py::arg("MaxSegments"),  py::arg("MaxDegree") )
        .def(py::init< const opencascade::handle<Adaptor2d_HCurve2d> &,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer >()  , py::arg("Curve"),  py::arg("Tol2d"),  py::arg("Order"),  py::arg("MaxSegments"),  py::arg("MaxDegree") )
    // custom constructors
    // methods
        .def("Curve",
             (opencascade::handle<Geom2d_BSplineCurve> (Geom2dConvert_ApproxCurve::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Geom2dConvert_ApproxCurve::*)() const>(&Geom2dConvert_ApproxCurve::Curve),
             R"#(Returns the 2D BSpline curve resulting from the approximation algorithm.)#" )
        .def("IsDone",
             (Standard_Boolean (Geom2dConvert_ApproxCurve::*)() const) static_cast<Standard_Boolean (Geom2dConvert_ApproxCurve::*)() const>(&Geom2dConvert_ApproxCurve::IsDone),
             R"#(returns Standard_True if the approximation has been done with within requiered tolerance)#" )
        .def("HasResult",
             (Standard_Boolean (Geom2dConvert_ApproxCurve::*)() const) static_cast<Standard_Boolean (Geom2dConvert_ApproxCurve::*)() const>(&Geom2dConvert_ApproxCurve::HasResult),
             R"#(returns Standard_True if the approximation did come out with a result that is not NECESSARELY within the required tolerance)#" )
        .def("MaxError",
             (Standard_Real (Geom2dConvert_ApproxCurve::*)() const) static_cast<Standard_Real (Geom2dConvert_ApproxCurve::*)() const>(&Geom2dConvert_ApproxCurve::MaxError),
             R"#(Returns the greatest distance between a point on the source conic and the BSpline curve resulting from the approximation. (>0 when an approximation has been done, 0 if no approximation))#" )
        .def("Dump",
             (void (Geom2dConvert_ApproxCurve::*)( std::ostream & ) const) static_cast<void (Geom2dConvert_ApproxCurve::*)( std::ostream & ) const>(&Geom2dConvert_ApproxCurve::Dump),
             R"#(Print on the stream o information about the object)#"  , py::arg("o"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dConvert_BSplineCurveKnotSplitting , shared_ptr<Geom2dConvert_BSplineCurveKnotSplitting> >>(m.attr("Geom2dConvert_BSplineCurveKnotSplitting"))
    // constructors
        .def(py::init< const opencascade::handle<Geom2d_BSplineCurve> &,const Standard_Integer >()  , py::arg("BasisCurve"),  py::arg("ContinuityRange") )
    // custom constructors
    // methods
        .def("NbSplits",
             (Standard_Integer (Geom2dConvert_BSplineCurveKnotSplitting::*)() const) static_cast<Standard_Integer (Geom2dConvert_BSplineCurveKnotSplitting::*)() const>(&Geom2dConvert_BSplineCurveKnotSplitting::NbSplits),
             R"#(Returns the number of points at which the analysed BSpline curve should be split, in order to obtain arcs with the continuity required by this framework. All these points correspond to knot values. Note that the first and last points of the curve, which bound the first and last arcs, are counted among these splitting points.)#" )
        .def("Splitting",
             (void (Geom2dConvert_BSplineCurveKnotSplitting::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (Geom2dConvert_BSplineCurveKnotSplitting::*)( NCollection_Array1<Standard_Integer> & ) const>(&Geom2dConvert_BSplineCurveKnotSplitting::Splitting),
             R"#(Loads the SplitValues table with the split knots values computed in this framework. Each value in the table is an index in the knots table of the BSpline curve analysed by this algorithm. The values in SplitValues are given in ascending order and comprise the indices of the knots which give the first and last points of the curve. Use two consecutive values from the table as arguments of the global function SplitBSplineCurve (provided by the package Geom2dConvert) to split the curve. Exceptions Standard_DimensionError if the array SplitValues was not created with the following bounds: - 1, and - the number of split points computed in this framework (as given by the function NbSplits).)#"  , py::arg("SplitValues"))
        .def("SplitValue",
             (Standard_Integer (Geom2dConvert_BSplineCurveKnotSplitting::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Geom2dConvert_BSplineCurveKnotSplitting::*)( const Standard_Integer ) const>(&Geom2dConvert_BSplineCurveKnotSplitting::SplitValue),
             R"#(Returns the split knot of index Index to the split knots table computed in this framework. The returned value is an index in the knots table of the BSpline curve analysed by this algorithm. Notes: - If Index is equal to 1, the corresponding knot gives the first point of the curve. - If Index is equal to the number of split knots computed in this framework, the corresponding point is the last point of the curve. Exceptions Standard_RangeError if Index is less than 1 or greater than the number of split knots computed in this framework.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dConvert_BSplineCurveToBezierCurve , shared_ptr<Geom2dConvert_BSplineCurveToBezierCurve> >>(m.attr("Geom2dConvert_BSplineCurveToBezierCurve"))
    // constructors
        .def(py::init< const opencascade::handle<Geom2d_BSplineCurve> & >()  , py::arg("BasisCurve") )
        .def(py::init< const opencascade::handle<Geom2d_BSplineCurve> &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("BasisCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("ParametricTolerance") )
    // custom constructors
    // methods
        .def("Arc",
             (opencascade::handle<Geom2d_BezierCurve> (Geom2dConvert_BSplineCurveToBezierCurve::*)( const Standard_Integer ) ) static_cast<opencascade::handle<Geom2d_BezierCurve> (Geom2dConvert_BSplineCurveToBezierCurve::*)( const Standard_Integer ) >(&Geom2dConvert_BSplineCurveToBezierCurve::Arc),
             R"#(Constructs and returns the Bezier curve of index Index to the table of adjacent Bezier arcs computed by this algorithm. This Bezier curve has the same orientation as the BSpline curve analyzed in this framework. Exceptions Standard_OutOfRange if Index is less than 1 or greater than the number of adjacent Bezier arcs computed by this algorithm.)#"  , py::arg("Index"))
        .def("Arcs",
             (void (Geom2dConvert_BSplineCurveToBezierCurve::*)( NCollection_Array1<opencascade::handle<Geom2d_BezierCurve> > & ) ) static_cast<void (Geom2dConvert_BSplineCurveToBezierCurve::*)( NCollection_Array1<opencascade::handle<Geom2d_BezierCurve> > & ) >(&Geom2dConvert_BSplineCurveToBezierCurve::Arcs),
             R"#(Constructs all the Bezier curves whose data is computed by this algorithm and loads these curves into the Curves table. The Bezier curves have the same orientation as the BSpline curve analyzed in this framework. Exceptions Standard_DimensionError if the Curves array was not created with the following bounds: - 1 , and - the number of adjacent Bezier arcs computed by this algorithm (as given by the function NbArcs).)#"  , py::arg("Curves"))
        .def("Knots",
             (void (Geom2dConvert_BSplineCurveToBezierCurve::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (Geom2dConvert_BSplineCurveToBezierCurve::*)( NCollection_Array1<Standard_Real> & ) const>(&Geom2dConvert_BSplineCurveToBezierCurve::Knots),
             R"#(This methode returns the bspline's knots associated to the converted arcs Raises DimensionError if the length of Curves is not equal to NbArcs + 1)#"  , py::arg("TKnots"))
        .def("NbArcs",
             (Standard_Integer (Geom2dConvert_BSplineCurveToBezierCurve::*)() const) static_cast<Standard_Integer (Geom2dConvert_BSplineCurveToBezierCurve::*)() const>(&Geom2dConvert_BSplineCurveToBezierCurve::NbArcs),
             R"#(Returns the number of BezierCurve arcs. If at the creation time you have decomposed the basis curve between the parametric values UFirst, ULast the number of BezierCurve arcs depends on the number of knots included inside the interval [UFirst, ULast]. If you have decomposed the whole basis B-spline curve the number of BezierCurve arcs NbArcs is equal to the number of knots less one.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dConvert_CompCurveToBSplineCurve , shared_ptr<Geom2dConvert_CompCurveToBSplineCurve> >>(m.attr("Geom2dConvert_CompCurveToBSplineCurve"))
    // constructors
        .def(py::init< const Convert_ParameterisationType >()  , py::arg("Parameterisation")=static_cast<const Convert_ParameterisationType>(Convert_TgtThetaOver2) )
        .def(py::init< const opencascade::handle<Geom2d_BoundedCurve> &,const Convert_ParameterisationType >()  , py::arg("BasisCurve"),  py::arg("Parameterisation")=static_cast<const Convert_ParameterisationType>(Convert_TgtThetaOver2) )
    // custom constructors
    // methods
        .def("Add",
             (Standard_Boolean (Geom2dConvert_CompCurveToBSplineCurve::*)( const opencascade::handle<Geom2d_BoundedCurve> & , const Standard_Real , const Standard_Boolean ) ) static_cast<Standard_Boolean (Geom2dConvert_CompCurveToBSplineCurve::*)( const opencascade::handle<Geom2d_BoundedCurve> & , const Standard_Real , const Standard_Boolean ) >(&Geom2dConvert_CompCurveToBSplineCurve::Add),
             R"#(Append a curve in the BSpline Return False if the curve is not G0 with the BSplineCurve. Tolerance is used to check continuity and decrease Multiplicty at the common Knot After is usefull if BasisCurve is a closed curve .)#"  , py::arg("NewCurve"),  py::arg("Tolerance"),  py::arg("After")=static_cast<const Standard_Boolean>(Standard_False))
        .def("BSplineCurve",
             (opencascade::handle<Geom2d_BSplineCurve> (Geom2dConvert_CompCurveToBSplineCurve::*)() const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (Geom2dConvert_CompCurveToBSplineCurve::*)() const>(&Geom2dConvert_CompCurveToBSplineCurve::BSplineCurve),
             R"#(None)#" )
        .def("Clear",
             (void (Geom2dConvert_CompCurveToBSplineCurve::*)() ) static_cast<void (Geom2dConvert_CompCurveToBSplineCurve::*)() >(&Geom2dConvert_CompCurveToBSplineCurve::Clear),
             R"#(Clear result curve)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\Geom2dConvert_BSplineCurveKnotSplitting.hxx
// ./opencascade\Geom2dConvert_ApproxCurve.hxx
// ./opencascade\Geom2dConvert_BSplineCurveToBezierCurve.hxx
// ./opencascade\Geom2dConvert_CompCurveToBSplineCurve.hxx
// ./opencascade\Geom2dConvert.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
