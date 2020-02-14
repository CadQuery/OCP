
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_BSplineSurface.hxx>
#include <Geom_Surface.hxx>
#include <GeomConvert_BSplineCurveKnotSplitting.hxx>
#include <GeomConvert_BSplineSurfaceKnotSplitting.hxx>
#include <GeomConvert_BSplineCurveToBezierCurve.hxx>
#include <GeomConvert_CompCurveToBSplineCurve.hxx>
#include <GeomConvert_BSplineSurfaceToBezierSurface.hxx>
#include <GeomConvert_CompBezierSurfacesToBSplineSurface.hxx>
#include <GeomConvert_ApproxSurface.hxx>
#include <GeomConvert_ApproxCurve.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_ConstructionError.hxx>
#include <Geom_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Standard_OutOfRange.hxx>
#include <Geom_Surface.hxx>
#include <Adaptor3d_HSurface.hxx>

// module includes
#include <GeomConvert.hxx>
#include <GeomConvert_ApproxCurve.hxx>
#include <GeomConvert_ApproxSurface.hxx>
#include <GeomConvert_BSplineCurveKnotSplitting.hxx>
#include <GeomConvert_BSplineCurveToBezierCurve.hxx>
#include <GeomConvert_BSplineSurfaceKnotSplitting.hxx>
#include <GeomConvert_BSplineSurfaceToBezierSurface.hxx>
#include <GeomConvert_CompBezierSurfacesToBSplineSurface.hxx>
#include <GeomConvert_CompCurveToBSplineCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomConvert(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomConvert"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GeomConvert , shared_ptr<GeomConvert>>(m,"GeomConvert");

    static_cast<py::class_<GeomConvert , shared_ptr<GeomConvert>  >>(m.attr("GeomConvert"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SplitBSplineCurve_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) >(&GeomConvert::SplitBSplineCurve),
                    R"#(Convert a curve from Geom by an approximation method)#"  , py::arg("C"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("SameOrientation")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("SplitBSplineCurve_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&GeomConvert::SplitBSplineCurve),
                    R"#(This function computes the segment of B-spline curve between the parametric values FromU1, ToU2. If C is periodic the arc has the same orientation as C if SameOrientation = True. If C is not periodic SameOrientation is not used for the computation and C is oriented fromU1 toU2. If U1 and U2 and two parametric values we consider that U1 = U2 if Abs (U1 - U2) <= ParametricTolerance and ParametricTolerance must be greater or equal to Resolution from package gp.)#"  , py::arg("C"),  py::arg("FromU1"),  py::arg("ToU2"),  py::arg("ParametricTolerance"),  py::arg("SameOrientation")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("SplitBSplineSurface_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&GeomConvert::SplitBSplineSurface),
                    R"#(Computes the B-spline surface patche between the knots values FromUK1, ToUK2, FromVK1, ToVK2. If S is periodic in one direction the patche has the same orientation as S in this direction if the flag is true in this direction (SameUOrientation, SameVOrientation). If S is not periodic SameUOrientation and SameVOrientation are not used for the computation and S is oriented FromUK1 ToUK2 and FromVK1 ToVK2. Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2 FromUK1 or ToUK2 are out of the bounds [FirstUKnotIndex, LastUKnotIndex] FromVK1 or ToVK2 are out of the bounds [FirstVKnotIndex, LastVKnotIndex])#"  , py::arg("S"),  py::arg("FromUK1"),  py::arg("ToUK2"),  py::arg("FromVK1"),  py::arg("ToVK2"),  py::arg("SameUOrientation")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("SameVOrientation")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("SplitBSplineSurface_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&GeomConvert::SplitBSplineSurface),
                    R"#(This method splits a B-spline surface patche between the knots values FromK1, ToK2 in one direction. If USplit = True then the splitting direction is the U parametric direction else it is the V parametric direction. If S is periodic in the considered direction the patche has the same orientation as S in this direction if SameOrientation is True If S is not periodic in this direction SameOrientation is not used for the computation and S is oriented FromK1 ToK2. Raised if FromK1 = ToK2 or if FromK1 or ToK2 are out of the bounds [FirstUKnotIndex, LastUKnotIndex] in the considered parametric direction.)#"  , py::arg("S"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("USplit"),  py::arg("SameOrientation")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("SplitBSplineSurface_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&GeomConvert::SplitBSplineSurface),
                    R"#(This method computes the B-spline surface patche between the parametric values FromU1, ToU2, FromV1, ToV2. If S is periodic in one direction the patche has the same orientation as S in this direction if the flag is True in this direction (SameUOrientation, SameVOrientation). If S is not periodic SameUOrientation and SameVOrientation are not used for the computation and S is oriented FromU1 ToU2 and FromV1 ToV2. If U1 and U2 and two parametric values we consider that U1 = U2 if Abs (U1 - U2) <= ParametricTolerance and ParametricTolerance must be greater or equal to Resolution from package gp.)#"  , py::arg("S"),  py::arg("FromU1"),  py::arg("ToU2"),  py::arg("FromV1"),  py::arg("ToV2"),  py::arg("ParametricTolerance"),  py::arg("SameUOrientation")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("SameVOrientation")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("SplitBSplineSurface_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_BSplineSurface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Boolean  ) >(&GeomConvert::SplitBSplineSurface),
                    R"#(This method splits the B-spline surface S in one direction between the parametric values FromParam1, ToParam2. If USplit = True then the Splitting direction is the U parametric direction else it is the V parametric direction. If S is periodic in the considered direction the patche has the same orientation as S in this direction if SameOrientation is true. If S is not periodic in the considered direction SameOrientation is not used for the computation and S is oriented FromParam1 ToParam2. If U1 and U2 and two parametric values we consider that U1 = U2 if Abs (U1 - U2) <= ParametricTolerance and ParametricTolerance must be greater or equal to Resolution from package gp.)#"  , py::arg("S"),  py::arg("FromParam1"),  py::arg("ToParam2"),  py::arg("USplit"),  py::arg("ParametricTolerance"),  py::arg("SameOrientation")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("CurveToBSplineCurve_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Geom_Curve> & ,  const Convert_ParameterisationType  ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Geom_Curve> & ,  const Convert_ParameterisationType  ) >(&GeomConvert::CurveToBSplineCurve),
                    R"#(This function converts a non infinite curve from Geom into a B-spline curve. C must be an ellipse or a circle or a trimmed conic or a trimmed line or a Bezier curve or a trimmed Bezier curve or a BSpline curve or a trimmed BSpline curve or an OffsetCurve. The returned B-spline is not periodic except if C is a Circle or an Ellipse. If the Parameterisation is QuasiAngular than the returned curve is NOT periodic in case a periodic Geom_Circle or Geom_Ellipse. For TgtThetaOver2_1 and TgtThetaOver2_2 the method raises an exception in case of a periodic Geom_Circle or a Geom_Ellipse ParameterisationType applies only if the curve is a Circle or an ellipse : TgtThetaOver2, -- TgtThetaOver2_1, -- TgtThetaOver2_2, -- TgtThetaOver2_3, -- TgtThetaOver2_4,)#"  , py::arg("C"),  py::arg("Parameterisation")=static_cast<const Convert_ParameterisationType>(Convert_TgtThetaOver2))
        .def_static("SurfaceToBSplineSurface_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_Surface> &  ) >(&GeomConvert::SurfaceToBSplineSurface),
                    R"#(This algorithm converts a non infinite surface from Geom into a B-spline surface. S must be a trimmed plane or a trimmed cylinder or a trimmed cone or a trimmed sphere or a trimmed torus or a sphere or a torus or a Bezier surface of a trimmed Bezier surface or a trimmed swept surface with a corresponding basis curve which can be turned into a B-spline curve (see the method CurveToBSplineCurve). Raises DomainError if the type of the surface is not previously defined.)#"  , py::arg("S"))
        .def_static("C0BSplineToC1BSplineCurve_s",
                    (void (*)( opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (*)( opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomConvert::C0BSplineToC1BSplineCurve),
                    R"#(This Method reduces as far as it is possible the multiplicities of the knots of the BSpline BS.(keeping the geometry). It returns a new BSpline which could still be C0. tolerance is a geometrical tolerance. The Angular toleranceis in radians and mesures the angle of the tangents on the left and on the right to decide if the curve is G1 or not at a given point)#"  , py::arg("BS"),  py::arg("tolerance"),  py::arg("AngularTolerance")=static_cast<const Standard_Real>(1.0e-7))
        .def_static("C0BSplineToArrayOfC1BSplineCurve_s",
                    (void (*)( const opencascade::handle<Geom_BSplineCurve> & ,  opencascade::handle<TColGeom_HArray1OfBSplineCurve> & ,  const Standard_Real  ) ) static_cast<void (*)( const opencascade::handle<Geom_BSplineCurve> & ,  opencascade::handle<TColGeom_HArray1OfBSplineCurve> & ,  const Standard_Real  ) >(&GeomConvert::C0BSplineToArrayOfC1BSplineCurve),
                    R"#(This Method reduces as far as it is possible the multiplicities of the knots of the BSpline BS.(keeping the geometry). It returns an array of BSpline C1. tolerance is a geometrical tolerance.)#"  , py::arg("BS"),  py::arg("tabBS"),  py::arg("tolerance"))
        .def_static("C0BSplineToArrayOfC1BSplineCurve_s",
                    (void (*)( const opencascade::handle<Geom_BSplineCurve> & ,  opencascade::handle<TColGeom_HArray1OfBSplineCurve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (*)( const opencascade::handle<Geom_BSplineCurve> & ,  opencascade::handle<TColGeom_HArray1OfBSplineCurve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomConvert::C0BSplineToArrayOfC1BSplineCurve),
                    R"#(This Method reduces as far as it is possible the multiplicities of the knots of the BSpline BS.(keeping the geometry). It returns an array of BSpline C1. tolerance is a geometrical tolerance : it allows for the maximum deformation The Angular tolerance is in radians and mesures the angle of the tangents on the left and on the right to decide if the curve is C1 or not at a given point)#"  , py::arg("BS"),  py::arg("tabBS"),  py::arg("AngularTolerance"),  py::arg("tolerance"))
    // static methods using call by reference i.s.o. return
        .def_static("ConcatG1_s",
                    []( NCollection_Array1<opencascade::handle<Geom_BSplineCurve> > & ArrayOfCurves, const NCollection_Array1<Standard_Real> & ArrayOfToler,opencascade::handle<TColGeom_HArray1OfBSplineCurve> & ArrayOfConcatenated,const Standard_Real ClosedTolerance ){ Standard_Boolean  ClosedFlag; GeomConvert::ConcatG1(ArrayOfCurves,ArrayOfToler,ArrayOfConcatenated,ClosedFlag,ClosedTolerance); return std::make_tuple(ClosedFlag); },
                    R"#(This Method concatenates G1 the ArrayOfCurves as far as it is possible. ArrayOfCurves[0..N-1] ArrayOfToler contains the biggest tolerance of the two points shared by two consecutives curves. Its dimension: [0..N-2] ClosedFlag indicates if the ArrayOfCurves is closed. In this case ClosedTolerance contains the biggest tolerance of the two points which are at the closure. Otherwise its value is 0.0 ClosedFlag becomes False on the output if it is impossible to build closed curve.)#"  , py::arg("ArrayOfCurves"),  py::arg("ArrayOfToler"),  py::arg("ArrayOfConcatenated"),  py::arg("ClosedTolerance"))
        .def_static("ConcatC1_s",
                    []( NCollection_Array1<opencascade::handle<Geom_BSplineCurve> > & ArrayOfCurves, const NCollection_Array1<Standard_Real> & ArrayOfToler,opencascade::handle<TColStd_HArray1OfInteger> & ArrayOfIndices,opencascade::handle<TColGeom_HArray1OfBSplineCurve> & ArrayOfConcatenated,const Standard_Real ClosedTolerance ){ Standard_Boolean  ClosedFlag; GeomConvert::ConcatC1(ArrayOfCurves,ArrayOfToler,ArrayOfIndices,ArrayOfConcatenated,ClosedFlag,ClosedTolerance); return std::make_tuple(ClosedFlag); },
                    R"#(This Method concatenates C1 the ArrayOfCurves as far as it is possible. ArrayOfCurves[0..N-1] ArrayOfToler contains the biggest tolerance of the two points shared by two consecutives curves. Its dimension: [0..N-2] ClosedFlag indicates if the ArrayOfCurves is closed. In this case ClosedTolerance contains the biggest tolerance of the two points which are at the closure. Otherwise its value is 0.0 ClosedFlag becomes False on the output if it is impossible to build closed curve.)#"  , py::arg("ArrayOfCurves"),  py::arg("ArrayOfToler"),  py::arg("ArrayOfIndices"),  py::arg("ArrayOfConcatenated"),  py::arg("ClosedTolerance"))
        .def_static("ConcatC1_s",
                    []( NCollection_Array1<opencascade::handle<Geom_BSplineCurve> > & ArrayOfCurves, const NCollection_Array1<Standard_Real> & ArrayOfToler,opencascade::handle<TColStd_HArray1OfInteger> & ArrayOfIndices,opencascade::handle<TColGeom_HArray1OfBSplineCurve> & ArrayOfConcatenated,const Standard_Real ClosedTolerance,const Standard_Real AngularTolerance ){ Standard_Boolean  ClosedFlag; GeomConvert::ConcatC1(ArrayOfCurves,ArrayOfToler,ArrayOfIndices,ArrayOfConcatenated,ClosedFlag,ClosedTolerance,AngularTolerance); return std::make_tuple(ClosedFlag); },
                    R"#(This Method concatenates C1 the ArrayOfCurves as far as it is possible. ArrayOfCurves[0..N-1] ArrayOfToler contains the biggest tolerance of the two points shared by two consecutives curves. Its dimension: [0..N-2] ClosedFlag indicates if the ArrayOfCurves is closed. In this case ClosedTolerance contains the biggest tolerance of the two points which are at the closure. Otherwise its value is 0.0 ClosedFlag becomes False on the output if it is impossible to build closed curve.)#"  , py::arg("ArrayOfCurves"),  py::arg("ArrayOfToler"),  py::arg("ArrayOfIndices"),  py::arg("ArrayOfConcatenated"),  py::arg("ClosedTolerance"),  py::arg("AngularTolerance"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_ApproxCurve , shared_ptr<GeomConvert_ApproxCurve>  >>(m.attr("GeomConvert_ApproxCurve"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer >()  , py::arg("Curve"),  py::arg("Tol3d"),  py::arg("Order"),  py::arg("MaxSegments"),  py::arg("MaxDegree") )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Real,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer >()  , py::arg("Curve"),  py::arg("Tol3d"),  py::arg("Order"),  py::arg("MaxSegments"),  py::arg("MaxDegree") )
    // custom constructors
    // methods
        .def("Curve",
             (opencascade::handle<Geom_BSplineCurve> (GeomConvert_ApproxCurve::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (GeomConvert_ApproxCurve::*)() const>(&GeomConvert_ApproxCurve::Curve),
             R"#(Returns the BSpline curve resulting from the approximation algorithm.)#" )
        .def("IsDone",
             (Standard_Boolean (GeomConvert_ApproxCurve::*)() const) static_cast<Standard_Boolean (GeomConvert_ApproxCurve::*)() const>(&GeomConvert_ApproxCurve::IsDone),
             R"#(returns Standard_True if the approximation has been done within requiered tolerance)#" )
        .def("HasResult",
             (Standard_Boolean (GeomConvert_ApproxCurve::*)() const) static_cast<Standard_Boolean (GeomConvert_ApproxCurve::*)() const>(&GeomConvert_ApproxCurve::HasResult),
             R"#(Returns Standard_True if the approximation did come out with a result that is not NECESSARELY within the required tolerance)#" )
        .def("MaxError",
             (Standard_Real (GeomConvert_ApproxCurve::*)() const) static_cast<Standard_Real (GeomConvert_ApproxCurve::*)() const>(&GeomConvert_ApproxCurve::MaxError),
             R"#(Returns the greatest distance between a point on the source conic and the BSpline curve resulting from the approximation. (>0 when an approximation has been done, 0 if no approximation))#" )
        .def("Dump",
             (void (GeomConvert_ApproxCurve::*)( std::ostream &  ) const) static_cast<void (GeomConvert_ApproxCurve::*)( std::ostream &  ) const>(&GeomConvert_ApproxCurve::Dump),
             R"#(Print on the stream o information about the object)#"  , py::arg("o"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_ApproxSurface , shared_ptr<GeomConvert_ApproxSurface>  >>(m.attr("GeomConvert_ApproxSurface"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const GeomAbs_Shape,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("Surf"),  py::arg("Tol3d"),  py::arg("UContinuity"),  py::arg("VContinuity"),  py::arg("MaxDegU"),  py::arg("MaxDegV"),  py::arg("MaxSegments"),  py::arg("PrecisCode") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real,const GeomAbs_Shape,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("Surf"),  py::arg("Tol3d"),  py::arg("UContinuity"),  py::arg("VContinuity"),  py::arg("MaxDegU"),  py::arg("MaxDegV"),  py::arg("MaxSegments"),  py::arg("PrecisCode") )
    // custom constructors
    // methods
        .def("Surface",
             (opencascade::handle<Geom_BSplineSurface> (GeomConvert_ApproxSurface::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (GeomConvert_ApproxSurface::*)() const>(&GeomConvert_ApproxSurface::Surface),
             R"#(Returns the BSpline surface resulting from the approximation algorithm.)#" )
        .def("IsDone",
             (Standard_Boolean (GeomConvert_ApproxSurface::*)() const) static_cast<Standard_Boolean (GeomConvert_ApproxSurface::*)() const>(&GeomConvert_ApproxSurface::IsDone),
             R"#(Returns Standard_True if the approximation has be done)#" )
        .def("HasResult",
             (Standard_Boolean (GeomConvert_ApproxSurface::*)() const) static_cast<Standard_Boolean (GeomConvert_ApproxSurface::*)() const>(&GeomConvert_ApproxSurface::HasResult),
             R"#(Returns true if the approximation did come out with a result that is not NECESSARILY within the required tolerance or a result that is not recognized with the wished continuities.)#" )
        .def("MaxError",
             (Standard_Real (GeomConvert_ApproxSurface::*)() const) static_cast<Standard_Real (GeomConvert_ApproxSurface::*)() const>(&GeomConvert_ApproxSurface::MaxError),
             R"#(Returns the greatest distance between a point on the source conic surface and the BSpline surface resulting from the approximation (>0 when an approximation has been done, 0 if no approximation ))#" )
        .def("Dump",
             (void (GeomConvert_ApproxSurface::*)( std::ostream &  ) const) static_cast<void (GeomConvert_ApproxSurface::*)( std::ostream &  ) const>(&GeomConvert_ApproxSurface::Dump),
             R"#(Prints on the stream o informations on the current state of the object.)#"  , py::arg("o"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_BSplineCurveKnotSplitting , shared_ptr<GeomConvert_BSplineCurveKnotSplitting>  >>(m.attr("GeomConvert_BSplineCurveKnotSplitting"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_BSplineCurve> &,const Standard_Integer >()  , py::arg("BasisCurve"),  py::arg("ContinuityRange") )
    // custom constructors
    // methods
        .def("NbSplits",
             (Standard_Integer (GeomConvert_BSplineCurveKnotSplitting::*)() const) static_cast<Standard_Integer (GeomConvert_BSplineCurveKnotSplitting::*)() const>(&GeomConvert_BSplineCurveKnotSplitting::NbSplits),
             R"#(Returns the number of points at which the analyzed BSpline curve should be split, in order to obtain arcs with the continuity required by this framework. All these points correspond to knot values. Note that the first and last points of the curve, which bound the first and last arcs, are counted among these splitting points.)#" )
        .def("Splitting",
             (void (GeomConvert_BSplineCurveKnotSplitting::*)( NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (GeomConvert_BSplineCurveKnotSplitting::*)( NCollection_Array1<Standard_Integer> &  ) const>(&GeomConvert_BSplineCurveKnotSplitting::Splitting),
             R"#(Loads the SplitValues table with the split knots values computed in this framework. Each value in the table is an index in the knots table of the BSpline curve analyzed by this algorithm. The values in SplitValues are given in ascending order and comprise the indices of the knots which give the first and last points of the curve. Use two consecutive values from the table as arguments of the global function SplitBSplineCurve (provided by the package GeomConvert) to split the curve. Exceptions Standard_DimensionError if the array SplitValues was not created with the following bounds: - 1, and - the number of split points computed in this framework (as given by the function NbSplits).)#"  , py::arg("SplitValues"))
        .def("SplitValue",
             (Standard_Integer (GeomConvert_BSplineCurveKnotSplitting::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (GeomConvert_BSplineCurveKnotSplitting::*)( const Standard_Integer  ) const>(&GeomConvert_BSplineCurveKnotSplitting::SplitValue),
             R"#(Returns the split knot of index Index to the split knots table computed in this framework. The returned value is an index in the knots table of the BSpline curve analyzed by this algorithm. Notes: - If Index is equal to 1, the corresponding knot gives the first point of the curve. - If Index is equal to the number of split knots computed in this framework, the corresponding point is the last point of the curve. Exceptions Standard_RangeError if Index is less than 1 or greater than the number of split knots computed in this framework.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_BSplineCurveToBezierCurve , shared_ptr<GeomConvert_BSplineCurveToBezierCurve>  >>(m.attr("GeomConvert_BSplineCurveToBezierCurve"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_BSplineCurve> & >()  , py::arg("BasisCurve") )
        .def(py::init< const opencascade::handle<Geom_BSplineCurve> &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("BasisCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("ParametricTolerance") )
    // custom constructors
    // methods
        .def("Arc",
             (opencascade::handle<Geom_BezierCurve> (GeomConvert_BSplineCurveToBezierCurve::*)( const Standard_Integer  ) ) static_cast<opencascade::handle<Geom_BezierCurve> (GeomConvert_BSplineCurveToBezierCurve::*)( const Standard_Integer  ) >(&GeomConvert_BSplineCurveToBezierCurve::Arc),
             R"#(Constructs and returns the Bezier curve of index Index to the table of adjacent Bezier arcs computed by this algorithm. This Bezier curve has the same orientation as the BSpline curve analyzed in this framework. Exceptions Standard_OutOfRange if Index is less than 1 or greater than the number of adjacent Bezier arcs computed by this algorithm.)#"  , py::arg("Index"))
        .def("Arcs",
             (void (GeomConvert_BSplineCurveToBezierCurve::*)( NCollection_Array1<opencascade::handle<Geom_BezierCurve> > &  ) ) static_cast<void (GeomConvert_BSplineCurveToBezierCurve::*)( NCollection_Array1<opencascade::handle<Geom_BezierCurve> > &  ) >(&GeomConvert_BSplineCurveToBezierCurve::Arcs),
             R"#(Constructs all the Bezier curves whose data is computed by this algorithm and loads these curves into the Curves table. The Bezier curves have the same orientation as the BSpline curve analyzed in this framework. Exceptions Standard_DimensionError if the Curves array was not created with the following bounds: - 1 , and - the number of adjacent Bezier arcs computed by this algorithm (as given by the function NbArcs).)#"  , py::arg("Curves"))
        .def("Knots",
             (void (GeomConvert_BSplineCurveToBezierCurve::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (GeomConvert_BSplineCurveToBezierCurve::*)( NCollection_Array1<Standard_Real> &  ) const>(&GeomConvert_BSplineCurveToBezierCurve::Knots),
             R"#(This methode returns the bspline's knots associated to the converted arcs Raised if the length of Curves is not equal to NbArcs + 1.)#"  , py::arg("TKnots"))
        .def("NbArcs",
             (Standard_Integer (GeomConvert_BSplineCurveToBezierCurve::*)() const) static_cast<Standard_Integer (GeomConvert_BSplineCurveToBezierCurve::*)() const>(&GeomConvert_BSplineCurveToBezierCurve::NbArcs),
             R"#(Returns the number of BezierCurve arcs. If at the creation time you have decomposed the basis curve between the parametric values UFirst, ULast the number of BezierCurve arcs depends on the number of knots included inside the interval [UFirst, ULast]. If you have decomposed the whole basis B-spline curve the number of BezierCurve arcs NbArcs is equal to the number of knots less one.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_BSplineSurfaceKnotSplitting , shared_ptr<GeomConvert_BSplineSurfaceKnotSplitting>  >>(m.attr("GeomConvert_BSplineSurfaceKnotSplitting"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_BSplineSurface> &,const Standard_Integer,const Standard_Integer >()  , py::arg("BasisSurface"),  py::arg("UContinuityRange"),  py::arg("VContinuityRange") )
    // custom constructors
    // methods
        .def("NbUSplits",
             (Standard_Integer (GeomConvert_BSplineSurfaceKnotSplitting::*)() const) static_cast<Standard_Integer (GeomConvert_BSplineSurfaceKnotSplitting::*)() const>(&GeomConvert_BSplineSurfaceKnotSplitting::NbUSplits),
             R"#(Returns the number of u-isoparametric curves along which the analysed BSpline surface should be split in order to obtain patches with the continuity required by this framework. The parameters which define these curves are knot values in the corresponding parametric direction. Note that the four curves which bound the surface are counted among these splitting curves.)#" )
        .def("NbVSplits",
             (Standard_Integer (GeomConvert_BSplineSurfaceKnotSplitting::*)() const) static_cast<Standard_Integer (GeomConvert_BSplineSurfaceKnotSplitting::*)() const>(&GeomConvert_BSplineSurfaceKnotSplitting::NbVSplits),
             R"#(Returns the number of v-isoparametric curves along which the analysed BSpline surface should be split in order to obtain patches with the continuity required by this framework. The parameters which define these curves are knot values in the corresponding parametric direction. Note that the four curves which bound the surface are counted among these splitting curves.)#" )
        .def("Splitting",
             (void (GeomConvert_BSplineSurfaceKnotSplitting::*)( NCollection_Array1<Standard_Integer> & ,  NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (GeomConvert_BSplineSurfaceKnotSplitting::*)( NCollection_Array1<Standard_Integer> & ,  NCollection_Array1<Standard_Integer> &  ) const>(&GeomConvert_BSplineSurfaceKnotSplitting::Splitting),
             R"#(Loads the USplit and VSplit tables with the split knots values computed in this framework. Each value in these tables is an index in the knots table corresponding to the u or v parametric direction of the BSpline surface analysed by this algorithm. The USplit and VSplit values are given in ascending order and comprise the indices of the knots which give the first and last isoparametric curves of the surface in the corresponding parametric direction. Use two consecutive values from the USplit table and two consecutive values from the VSplit table as arguments of the global function SplitBSplineSurface (provided by the package GeomConvert) to split the surface. Exceptions Standard_DimensionError if: - the array USplit was not created with the following bounds: - 1 , and - the number of split knots in the u parametric direction computed in this framework (as given by the function NbUSplits); or - the array VSplit was not created with the following bounds: - 1 , and - the number of split knots in the v parametric direction computed in this framework (as given by the function NbVSplits).)#"  , py::arg("USplit"),  py::arg("VSplit"))
        .def("USplitValue",
             (Standard_Integer (GeomConvert_BSplineSurfaceKnotSplitting::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (GeomConvert_BSplineSurfaceKnotSplitting::*)( const Standard_Integer  ) const>(&GeomConvert_BSplineSurfaceKnotSplitting::USplitValue),
             R"#(Returns the split knot of index UIndex to the split knots table for the u parametric direction computed in this framework. The returned value is an index in the knots table relative to the u parametric direction of the BSpline surface analysed by this algorithm. Note: If UIndex is equal to 1, or to the number of split knots for the u parametric direction computed in this framework, the corresponding knot gives the parameter of one of the bounding curves of the surface. Exceptions Standard_RangeError if UIndex is less than 1 or greater than the number of split knots for the u parametric direction computed in this framework.)#"  , py::arg("UIndex"))
        .def("VSplitValue",
             (Standard_Integer (GeomConvert_BSplineSurfaceKnotSplitting::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (GeomConvert_BSplineSurfaceKnotSplitting::*)( const Standard_Integer  ) const>(&GeomConvert_BSplineSurfaceKnotSplitting::VSplitValue),
             R"#(Returns the split knot of index VIndex to the split knots table for the v parametric direction computed in this framework. The returned value is an index in the knots table relative to the v parametric direction of the BSpline surface analysed by this algorithm. Note: If UIndex is equal to 1, or to the number of split knots for the v parametric direction computed in this framework, the corresponding knot gives the parameter of one of the bounding curves of the surface. Exceptions Standard_RangeError if VIndex is less than 1 or greater than the number of split knots for the v parametric direction computed in this framework.)#"  , py::arg("VIndex"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_BSplineSurfaceToBezierSurface , shared_ptr<GeomConvert_BSplineSurfaceToBezierSurface>  >>(m.attr("GeomConvert_BSplineSurfaceToBezierSurface"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_BSplineSurface> & >()  , py::arg("BasisSurface") )
        .def(py::init< const opencascade::handle<Geom_BSplineSurface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("BasisSurface"),  py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2"),  py::arg("ParametricTolerance") )
    // custom constructors
    // methods
        .def("Patch",
             (opencascade::handle<Geom_BezierSurface> (GeomConvert_BSplineSurfaceToBezierSurface::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<opencascade::handle<Geom_BezierSurface> (GeomConvert_BSplineSurfaceToBezierSurface::*)( const Standard_Integer ,  const Standard_Integer  ) >(&GeomConvert_BSplineSurfaceToBezierSurface::Patch),
             R"#(Constructs and returns the Bezier surface of indices (UIndex, VIndex) to the patch grid computed on the BSpline surface analyzed by this algorithm. This Bezier surface has the same orientation as the BSpline surface analyzed in this framework. UIndex is an index common to a row in the patch grid. A row in the grid corresponds to a series of adjacent patches, all limited by the same two u-isoparametric curves of the surface. VIndex is an index common to a column in the patch grid. A column in the grid corresponds to a series of adjacent patches, all limited by the same two v-isoparametric curves of the surface. Exceptions Standard_OutOfRange if: - UIndex is less than 1 or greater than the number of rows in the patch grid computed on the BSpline surface analyzed by this algorithm (as returned by the function NbUPatches); or if - VIndex is less than 1 or greater than the number of columns in the patch grid computed on the BSpline surface analyzed by this algorithm (as returned by the function NbVPatches).)#"  , py::arg("UIndex"),  py::arg("VIndex"))
        .def("Patches",
             (void (GeomConvert_BSplineSurfaceToBezierSurface::*)( NCollection_Array2<opencascade::handle<Geom_BezierSurface> > &  ) ) static_cast<void (GeomConvert_BSplineSurfaceToBezierSurface::*)( NCollection_Array2<opencascade::handle<Geom_BezierSurface> > &  ) >(&GeomConvert_BSplineSurfaceToBezierSurface::Patches),
             R"#(Constructs all the Bezier surfaces whose data is computed by this algorithm, and loads them into the Surfaces table. These Bezier surfaces have the same orientation as the BSpline surface analyzed in this framework. The Surfaces array is organised in the same way as the patch grid computed on the BSpline surface analyzed by this algorithm. A row in the array corresponds to a series of adjacent patches, all limited by the same two u-isoparametric curves of the surface. A column in the array corresponds to a series of adjacent patches, all limited by the same two v-isoparametric curves of the surface. Exceptions Standard_DimensionError if the Surfaces array was not created with the following bounds: - 1, and the number of adjacent patch series in the u parametric direction of the patch grid computed on the BSpline surface, analyzed by this algorithm (as given by the function NbUPatches) as row bounds, - 1, and the number of adjacent patch series in the v parametric direction of the patch grid computed on the BSpline surface, analyzed by this algorithm (as given by the function NbVPatches) as column bounds.)#"  , py::arg("Surfaces"))
        .def("UKnots",
             (void (GeomConvert_BSplineSurfaceToBezierSurface::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (GeomConvert_BSplineSurfaceToBezierSurface::*)( NCollection_Array1<Standard_Real> &  ) const>(&GeomConvert_BSplineSurfaceToBezierSurface::UKnots),
             R"#(This methode returns the bspline's u-knots associated to the converted Patches Raised if the length of Curves is not equal to NbUPatches + 1.)#"  , py::arg("TKnots"))
        .def("VKnots",
             (void (GeomConvert_BSplineSurfaceToBezierSurface::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (GeomConvert_BSplineSurfaceToBezierSurface::*)( NCollection_Array1<Standard_Real> &  ) const>(&GeomConvert_BSplineSurfaceToBezierSurface::VKnots),
             R"#(This methode returns the bspline's v-knots associated to the converted Patches Raised if the length of Curves is not equal to NbVPatches + 1.)#"  , py::arg("TKnots"))
        .def("NbUPatches",
             (Standard_Integer (GeomConvert_BSplineSurfaceToBezierSurface::*)() const) static_cast<Standard_Integer (GeomConvert_BSplineSurfaceToBezierSurface::*)() const>(&GeomConvert_BSplineSurfaceToBezierSurface::NbUPatches),
             R"#(Returns the number of Bezier surfaces in the U direction. If at the creation time you have decomposed the basis Surface between the parametric values UFirst, ULast the number of Bezier surfaces in the U direction depends on the number of knots included inside the interval [UFirst, ULast]. If you have decomposed the whole basis B-spline surface the number of Bezier surfaces NbUPatches is equal to the number of UKnots less one.)#" )
        .def("NbVPatches",
             (Standard_Integer (GeomConvert_BSplineSurfaceToBezierSurface::*)() const) static_cast<Standard_Integer (GeomConvert_BSplineSurfaceToBezierSurface::*)() const>(&GeomConvert_BSplineSurfaceToBezierSurface::NbVPatches),
             R"#(Returns the number of Bezier surfaces in the V direction. If at the creation time you have decomposed the basis surface between the parametric values VFirst, VLast the number of Bezier surfaces in the V direction depends on the number of knots included inside the interval [VFirst, VLast]. If you have decomposed the whole basis B-spline surface the number of Bezier surfaces NbVPatches is equal to the number of VKnots less one.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_CompBezierSurfacesToBSplineSurface , shared_ptr<GeomConvert_CompBezierSurfacesToBSplineSurface>  >>(m.attr("GeomConvert_CompBezierSurfacesToBSplineSurface"))
    // constructors
        .def(py::init<  const NCollection_Array2<opencascade::handle<Geom_BezierSurface> > & >()  , py::arg("Beziers") )
        .def(py::init<  const NCollection_Array2<opencascade::handle<Geom_BezierSurface> > &,const Standard_Real,const Standard_Boolean >()  , py::arg("Beziers"),  py::arg("Tolerance"),  py::arg("RemoveKnots")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init<  const NCollection_Array2<opencascade::handle<Geom_BezierSurface> > &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &,const GeomAbs_Shape,const GeomAbs_Shape,const Standard_Real >()  , py::arg("Beziers"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UContinuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C0),  py::arg("VContinuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C0),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-4) )
    // custom constructors
    // methods
        .def("NbUKnots",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbUKnots),
             R"#(Returns the number of knots in the U direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbUPoles",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbUPoles),
             R"#(Returns number of poles in the U direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbVKnots",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbVKnots),
             R"#(Returns the number of knots in the V direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbVPoles",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbVPoles),
             R"#(Returns the number of poles in the V direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("Poles",
             (const opencascade::handle<TColgp_HArray2OfPnt> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColgp_HArray2OfPnt> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::Poles),
             R"#(Returns the table of poles of the BSpline surface whose data is computed in this framework.)#" )
        .def("UKnots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UKnots),
             R"#(Returns the knots table for the u parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("UDegree",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UDegree),
             R"#(Returns the degree for the u parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("VKnots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VKnots),
             R"#(Returns the knots table for the v parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("VDegree",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VDegree),
             R"#(Returns the degree for the v parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("UMultiplicities",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UMultiplicities),
             R"#(Returns the multiplicities table for the u parametric direction of the knots of the BSpline surface whose data is computed in this framework.)#" )
        .def("VMultiplicities",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VMultiplicities),
             R"#(-- Returns the multiplicities table for the v parametric direction of the knots of the BSpline surface whose data is computed in this framework.)#" )
        .def("IsDone",
             (Standard_Boolean (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Boolean (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::IsDone),
             R"#(Returns true if the conversion was successful. Unless an exception was raised at the time of construction, the conversion of the Bezier surface grid assigned to this algorithm is always carried out. IsDone returns false if the constraints defined at the time of construction cannot be respected. This occurs when there is an incompatibility between a required degree of continuity on the BSpline surface, and the maximum tolerance accepted for local deformations of the surface. In such a case the computed data does not satisfy all the initial constraints.)#" )
        .def("NbUKnots",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbUKnots),
             R"#(Returns the number of knots in the U direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbUPoles",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbUPoles),
             R"#(Returns number of poles in the U direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbVKnots",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbVKnots),
             R"#(Returns the number of knots in the V direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbVPoles",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::NbVPoles),
             R"#(Returns the number of poles in the V direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("Poles",
             (const opencascade::handle<TColgp_HArray2OfPnt> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColgp_HArray2OfPnt> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::Poles),
             R"#(Returns the table of poles of the BSpline surface whose data is computed in this framework.)#" )
        .def("UKnots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UKnots),
             R"#(Returns the knots table for the u parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("UDegree",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UDegree),
             R"#(Returns the degree for the u parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("VKnots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VKnots),
             R"#(Returns the knots table for the v parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("VDegree",
             (Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<Standard_Integer (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VDegree),
             R"#(Returns the degree for the v parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("UMultiplicities",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::UMultiplicities),
             R"#(Returns the multiplicities table for the u parametric direction of the knots of the BSpline surface whose data is computed in this framework.)#" )
        .def("VMultiplicities",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (GeomConvert_CompBezierSurfacesToBSplineSurface::*)() const>(&GeomConvert_CompBezierSurfacesToBSplineSurface::VMultiplicities),
             R"#(-- Returns the multiplicities table for the v parametric direction of the knots of the BSpline surface whose data is computed in this framework.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomConvert_CompCurveToBSplineCurve , shared_ptr<GeomConvert_CompCurveToBSplineCurve>  >>(m.attr("GeomConvert_CompCurveToBSplineCurve"))
    // constructors
        .def(py::init< const Convert_ParameterisationType >()  , py::arg("Parameterisation")=static_cast<const Convert_ParameterisationType>(Convert_TgtThetaOver2) )
        .def(py::init< const opencascade::handle<Geom_BoundedCurve> &,const Convert_ParameterisationType >()  , py::arg("BasisCurve"),  py::arg("Parameterisation")=static_cast<const Convert_ParameterisationType>(Convert_TgtThetaOver2) )
    // custom constructors
    // methods
        .def("Add",
             (Standard_Boolean (GeomConvert_CompCurveToBSplineCurve::*)( const opencascade::handle<Geom_BoundedCurve> & ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (GeomConvert_CompCurveToBSplineCurve::*)( const opencascade::handle<Geom_BoundedCurve> & ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Integer  ) >(&GeomConvert_CompCurveToBSplineCurve::Add),
             R"#(Append a curve in the BSpline Return False if the curve is not G0 with the BSplineCurve. Tolerance is used to check continuity and decrease Multiplicity at the common Knot until MinM if MinM = 0, the common Knot can be removed)#"  , py::arg("NewCurve"),  py::arg("Tolerance"),  py::arg("After")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithRatio")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("MinM")=static_cast<const Standard_Integer>(0))
        .def("BSplineCurve",
             (opencascade::handle<Geom_BSplineCurve> (GeomConvert_CompCurveToBSplineCurve::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (GeomConvert_CompCurveToBSplineCurve::*)() const>(&GeomConvert_CompCurveToBSplineCurve::BSplineCurve),
             R"#(None)#" )
        .def("Clear",
             (void (GeomConvert_CompCurveToBSplineCurve::*)() ) static_cast<void (GeomConvert_CompCurveToBSplineCurve::*)() >(&GeomConvert_CompCurveToBSplineCurve::Clear),
             R"#(Clear a result curve)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GeomConvert.hxx
// ./opencascade/GeomConvert_CompBezierSurfacesToBSplineSurface.hxx
// ./opencascade/GeomConvert_BSplineSurfaceKnotSplitting.hxx
// ./opencascade/GeomConvert_BSplineCurveKnotSplitting.hxx
// ./opencascade/GeomConvert_ApproxCurve.hxx
// ./opencascade/GeomConvert_BSplineSurfaceToBezierSurface.hxx
// ./opencascade/GeomConvert_BSplineCurveToBezierCurve.hxx
// ./opencascade/GeomConvert_CompCurveToBSplineCurve.hxx
// ./opencascade/GeomConvert_ApproxSurface.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
