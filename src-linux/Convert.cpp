
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_ConstructionError.hxx>
#include <gp_Torus.hxx>
#include <gp_Cone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Sphere.hxx>
#include <gp_Circ2d.hxx>

// module includes
#include <Convert_CircleToBSplineCurve.hxx>
#include <Convert_CompBezierCurves2dToBSplineCurve2d.hxx>
#include <Convert_CompBezierCurvesToBSplineCurve.hxx>
#include <Convert_CompPolynomialToPoles.hxx>
#include <Convert_ConeToBSplineSurface.hxx>
#include <Convert_ConicToBSplineCurve.hxx>
#include <Convert_CosAndSinEvalFunction.hxx>
#include <Convert_CylinderToBSplineSurface.hxx>
#include <Convert_ElementarySurfaceToBSplineSurface.hxx>
#include <Convert_EllipseToBSplineCurve.hxx>
#include <Convert_GridPolynomialToPoles.hxx>
#include <Convert_HyperbolaToBSplineCurve.hxx>
#include <Convert_ParabolaToBSplineCurve.hxx>
#include <Convert_ParameterisationType.hxx>
#include <Convert_PolynomialCosAndSin.hxx>
#include <Convert_SequenceOfArray1OfPoles.hxx>
#include <Convert_SequenceOfArray1OfPoles2d.hxx>
#include <Convert_SphereToBSplineSurface.hxx>
#include <Convert_TorusToBSplineSurface.hxx>

// template related includes
// ./opencascade/Convert_SequenceOfArray1OfPoles.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Convert(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Convert"));


//Python trampoline classes

// classes


    static_cast<py::class_<Convert_CompBezierCurves2dToBSplineCurve2d , shared_ptr<Convert_CompBezierCurves2dToBSplineCurve2d> >>(m.attr("Convert_CompBezierCurves2dToBSplineCurve2d"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("AngularTolerance")=static_cast<const Standard_Real>(1.0e-4) )
    // custom constructors
    // methods
        .def("AddCurve",
             (void (Convert_CompBezierCurves2dToBSplineCurve2d::*)(  const NCollection_Array1<gp_Pnt2d> & ) ) static_cast<void (Convert_CompBezierCurves2dToBSplineCurve2d::*)(  const NCollection_Array1<gp_Pnt2d> & ) >(&Convert_CompBezierCurves2dToBSplineCurve2d::AddCurve),
             R"#(Adds the Bezier curve defined by the table of poles Poles, to the sequence (still contained in this framework) of adjacent Bezier curves to be converted into a BSpline curve. Only polynomial (i.e. non-rational) Bezier curves are converted using this framework. If this is not the first call to the function (i.e. if this framework still contains data in its sequence of Bezier curves), the degree of continuity of the BSpline curve will be increased at the time of computation at the first point of the added Bezier curve (i.e. the first point of the Poles table). This will be the case if the tangent vector of the curve at this point is parallel to the tangent vector at the end point of the preceding Bezier curve in the sequence of Bezier curves still contained in this framework. An angular tolerance given at the time of construction of this framework, will be used to check the parallelism of the two tangent vectors. This checking procedure, and all the relative computations will be performed by the function Perform. When the sequence of adjacent Bezier curves is complete, use the following functions: - Perform to compute the data needed to build the BSpline curve, - and the available consultation functions to access the computed data. This data may be used to construct the BSpline curve. Warning The sequence of Bezier curves treated by this framework is automatically initialized with the first Bezier curve when the function is first called. During subsequent use of this function, ensure that the first point of the added Bezier curve (i.e. the first point of the Poles table) is coincident with the last point of the sequence (i.e. the last point of the preceding Bezier curve in the sequence) of Bezier curves still contained in this framework. An error may occur at the time of computation if this condition is not satisfied. Particular care must be taken with respect to the above, as this condition is not checked either when defining the sequence of Bezier curves or at the time of computation.)#"  , py::arg("Poles"))
        .def("Perform",
             (void (Convert_CompBezierCurves2dToBSplineCurve2d::*)() ) static_cast<void (Convert_CompBezierCurves2dToBSplineCurve2d::*)() >(&Convert_CompBezierCurves2dToBSplineCurve2d::Perform),
             R"#(Computes all the data needed to build a BSpline curve equivalent to the sequence of adjacent Bezier curves still contained in this framework. A knot is inserted on the computed BSpline curve at the junction point of two consecutive Bezier curves. The degree of continuity of the BSpline curve will be increased at the junction point of two consecutive Bezier curves if their tangent vectors at this point are parallel. An angular tolerance given at the time of construction of this framework is used to check the parallelism of the two tangent vectors. Use the available consultation functions to access the computed data. This data may then be used to construct the BSpline curve. Warning Ensure that the curves in the sequence of Bezier curves contained in this framework are adjacent. An error may occur at the time of computation if this condition is not satisfied. Particular care must be taken with respect to the above as this condition is not checked, either when defining the Bezier curve sequence or at the time of computation.)#" )
        .def("Degree",
             (Standard_Integer (Convert_CompBezierCurves2dToBSplineCurve2d::*)() const) static_cast<Standard_Integer (Convert_CompBezierCurves2dToBSplineCurve2d::*)() const>(&Convert_CompBezierCurves2dToBSplineCurve2d::Degree),
             R"#(Returns the degree of the BSpline curve whose data is computed in this framework. Warning Take particular care not to use this function before the computation is performed (Perform function), as this condition is not checked and an error may therefore occur.)#" )
        .def("NbPoles",
             (Standard_Integer (Convert_CompBezierCurves2dToBSplineCurve2d::*)() const) static_cast<Standard_Integer (Convert_CompBezierCurves2dToBSplineCurve2d::*)() const>(&Convert_CompBezierCurves2dToBSplineCurve2d::NbPoles),
             R"#(Returns the number of poles of the BSpline curve whose data is computed in this framework. Warning Take particular care not to use this function before the computation is performed (Perform function), as this condition is not checked and an error may therefore occur.)#" )
        .def("Poles",
             (void (Convert_CompBezierCurves2dToBSplineCurve2d::*)( NCollection_Array1<gp_Pnt2d> & ) const) static_cast<void (Convert_CompBezierCurves2dToBSplineCurve2d::*)( NCollection_Array1<gp_Pnt2d> & ) const>(&Convert_CompBezierCurves2dToBSplineCurve2d::Poles),
             R"#(Loads the Poles table with the poles of the BSpline curve whose data is computed in this framework. Warning - Do not use this function before the computation is performed (Perform function). - The length of the Poles array must be equal to the number of poles of the BSpline curve whose data is computed in this framework. Particular care must be taken with respect to the above, as these conditions are not checked, and an error may occur.)#"  , py::arg("Poles"))
        .def("NbKnots",
             (Standard_Integer (Convert_CompBezierCurves2dToBSplineCurve2d::*)() const) static_cast<Standard_Integer (Convert_CompBezierCurves2dToBSplineCurve2d::*)() const>(&Convert_CompBezierCurves2dToBSplineCurve2d::NbKnots),
             R"#(Returns the number of knots of the BSpline curve whose data is computed in this framework. Warning Take particular care not to use this function before the computation is performed (Perform function), as this condition is not checked and an error may therefore occur.)#" )
        .def("KnotsAndMults",
             (void (Convert_CompBezierCurves2dToBSplineCurve2d::*)( NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) const) static_cast<void (Convert_CompBezierCurves2dToBSplineCurve2d::*)( NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) const>(&Convert_CompBezierCurves2dToBSplineCurve2d::KnotsAndMults),
             R"#(Loads the Knots table with the knots and the Mults table with the corresponding multiplicities of the BSpline curve whose data is computed in this framework. Warning - Do not use this function before the computation is performed (Perform function). - The length of the Knots and Mults arrays must be equal to the number of knots in the BSpline curve whose data is computed in this framework. Particular care must be taken with respect to the above as these conditions are not checked, and an error may occur.)#"  , py::arg("Knots"),  py::arg("Mults"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_CompBezierCurvesToBSplineCurve , shared_ptr<Convert_CompBezierCurvesToBSplineCurve> >>(m.attr("Convert_CompBezierCurvesToBSplineCurve"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("AngularTolerance")=static_cast<const Standard_Real>(1.0e-4) )
    // custom constructors
    // methods
        .def("AddCurve",
             (void (Convert_CompBezierCurvesToBSplineCurve::*)(  const NCollection_Array1<gp_Pnt> & ) ) static_cast<void (Convert_CompBezierCurvesToBSplineCurve::*)(  const NCollection_Array1<gp_Pnt> & ) >(&Convert_CompBezierCurvesToBSplineCurve::AddCurve),
             R"#(Adds the Bezier curve defined by the table of poles Poles, to the sequence (still contained in this framework) of adjacent Bezier curves to be converted into a BSpline curve. Only polynomial (i.e. non-rational) Bezier curves are converted using this framework. If this is not the first call to the function (i.e. if this framework still contains data in its Bezier curve sequence), the degree of continuity of the BSpline curve will be increased at the time of computation at the first point of the added Bezier curve (i.e. the first point of the Poles table). This will be the case if the tangent vector of the curve at this point is parallel to the tangent vector at the end point of the preceding Bezier curve in the Bezier curve sequence still contained in this framework. An angular tolerance given at the time of construction of this framework will be used to check the parallelism of the two tangent vectors. This checking procedure and all related computations will be performed by the Perform function. When the adjacent Bezier curve sequence is complete, use the following functions: - Perform to compute the data needed to build the BSpline curve, - and the available consultation functions to access the computed data. This data may be used to construct the BSpline curve. Warning The Bezier curve sequence treated by this framework is automatically initialized with the first Bezier curve when the function is first called. During subsequent use of this function, ensure that the first point of the added Bezier curve (i.e. the first point of the Poles table) is coincident with the last point of the Bezier curve sequence (i.e. the last point of the preceding Bezier curve in the sequence) still contained in this framework. An error may occur at the time of computation if this condition is not satisfied. Particular care must be taken with respect to the above, as this condition is not checked either when defining the Bezier curve sequence or at the time of computation.)#"  , py::arg("Poles"))
        .def("Perform",
             (void (Convert_CompBezierCurvesToBSplineCurve::*)() ) static_cast<void (Convert_CompBezierCurvesToBSplineCurve::*)() >(&Convert_CompBezierCurvesToBSplineCurve::Perform),
             R"#(Computes all the data needed to build a BSpline curve equivalent to the adjacent Bezier curve sequence still contained in this framework. A knot is inserted on the computed BSpline curve at the junction point of two consecutive Bezier curves. The degree of continuity of the BSpline curve will be increased at the junction point of two consecutive Bezier curves if their tangent vectors at this point are parallel. An angular tolerance given at the time of construction of this framework is used to check the parallelism of the two tangent vectors. Use the available consultation functions to access the computed data. This data may then be used to construct the BSpline curve. Warning Make sure that the curves in the Bezier curve sequence contained in this framework are adjacent. An error may occur at the time of computation if this condition is not satisfied. Particular care must be taken with respect to the above as this condition is not checked, either when defining the Bezier curve sequence or at the time of computation.)#" )
        .def("Degree",
             (Standard_Integer (Convert_CompBezierCurvesToBSplineCurve::*)() const) static_cast<Standard_Integer (Convert_CompBezierCurvesToBSplineCurve::*)() const>(&Convert_CompBezierCurvesToBSplineCurve::Degree),
             R"#(Returns the degree of the BSpline curve whose data is computed in this framework. Warning Take particular care not to use this function before the computation is performed (Perform function), as this condition is not checked and an error may therefore occur.)#" )
        .def("NbPoles",
             (Standard_Integer (Convert_CompBezierCurvesToBSplineCurve::*)() const) static_cast<Standard_Integer (Convert_CompBezierCurvesToBSplineCurve::*)() const>(&Convert_CompBezierCurvesToBSplineCurve::NbPoles),
             R"#(Returns the number of poles of the BSpline curve whose data is computed in this framework. Warning Take particular care not to use this function before the computation is performed (Perform function), as this condition is not checked and an error may therefore occur.)#" )
        .def("Poles",
             (void (Convert_CompBezierCurvesToBSplineCurve::*)( NCollection_Array1<gp_Pnt> & ) const) static_cast<void (Convert_CompBezierCurvesToBSplineCurve::*)( NCollection_Array1<gp_Pnt> & ) const>(&Convert_CompBezierCurvesToBSplineCurve::Poles),
             R"#(Loads the Poles table with the poles of the BSpline curve whose data is computed in this framework. Warning - Do not use this function before the computation is performed (Perform function). - The length of the Poles array must be equal to the number of poles of the BSpline curve whose data is computed in this framework. Particular care must be taken with respect to the above, as these conditions are not checked, and an error may occur.)#"  , py::arg("Poles"))
        .def("NbKnots",
             (Standard_Integer (Convert_CompBezierCurvesToBSplineCurve::*)() const) static_cast<Standard_Integer (Convert_CompBezierCurvesToBSplineCurve::*)() const>(&Convert_CompBezierCurvesToBSplineCurve::NbKnots),
             R"#(Returns the number of knots of the BSpline curve whose data is computed in this framework. Warning Take particular care not to use this function before the computation is performed (Perform function), as this condition is not checked and an error may therefore occur.)#" )
        .def("KnotsAndMults",
             (void (Convert_CompBezierCurvesToBSplineCurve::*)( NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) const) static_cast<void (Convert_CompBezierCurvesToBSplineCurve::*)( NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Integer> & ) const>(&Convert_CompBezierCurvesToBSplineCurve::KnotsAndMults),
             R"#(- loads the Knots table with the knots, - and loads the Mults table with the corresponding multiplicities of the BSpline curve whose data is computed in this framework. Warning - Do not use this function before the computation is performed (Perform function). - The length of the Knots and Mults arrays must be equal to the number of knots in the BSpline curve whose data is computed in this framework. Particular care must be taken with respect to the above as these conditions are not checked, and an error may occur.)#"  , py::arg("Knots"),  py::arg("Mults"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_CompPolynomialToPoles , shared_ptr<Convert_CompPolynomialToPoles> >>(m.attr("Convert_CompPolynomialToPoles"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfInteger> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> & >()  , py::arg("NumCurves"),  py::arg("Continuity"),  py::arg("Dimension"),  py::arg("MaxDegree"),  py::arg("NumCoeffPerCurve"),  py::arg("Coefficients"),  py::arg("PolynomialIntervals"),  py::arg("TrueIntervals") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer, const NCollection_Array1<Standard_Integer> &, const NCollection_Array1<Standard_Integer> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array2<Standard_Real> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("NumCurves"),  py::arg("Dimension"),  py::arg("MaxDegree"),  py::arg("Continuity"),  py::arg("NumCoeffPerCurve"),  py::arg("Coefficients"),  py::arg("PolynomialIntervals"),  py::arg("TrueIntervals") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("Dimension"),  py::arg("MaxDegree"),  py::arg("Degree"),  py::arg("Coefficients"),  py::arg("PolynomialIntervals"),  py::arg("TrueIntervals") )
    // custom constructors
    // methods
        .def("NbPoles",
             (Standard_Integer (Convert_CompPolynomialToPoles::*)() const) static_cast<Standard_Integer (Convert_CompPolynomialToPoles::*)() const>(&Convert_CompPolynomialToPoles::NbPoles),
             R"#(number of poles of the n-dimensional BSpline)#" )
        .def("Poles",
             (void (Convert_CompPolynomialToPoles::*)( opencascade::handle<TColStd_HArray2OfReal> & ) const) static_cast<void (Convert_CompPolynomialToPoles::*)( opencascade::handle<TColStd_HArray2OfReal> & ) const>(&Convert_CompPolynomialToPoles::Poles),
             R"#(returns the poles of the n-dimensional BSpline in the following format : [1..NumPoles][1..Dimension])#"  , py::arg("Poles"))
        .def("Degree",
             (Standard_Integer (Convert_CompPolynomialToPoles::*)() const) static_cast<Standard_Integer (Convert_CompPolynomialToPoles::*)() const>(&Convert_CompPolynomialToPoles::Degree),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (Convert_CompPolynomialToPoles::*)() const) static_cast<Standard_Integer (Convert_CompPolynomialToPoles::*)() const>(&Convert_CompPolynomialToPoles::NbKnots),
             R"#(Degree of the n-dimensional Bspline)#" )
        .def("Knots",
             (void (Convert_CompPolynomialToPoles::*)( opencascade::handle<TColStd_HArray1OfReal> & ) const) static_cast<void (Convert_CompPolynomialToPoles::*)( opencascade::handle<TColStd_HArray1OfReal> & ) const>(&Convert_CompPolynomialToPoles::Knots),
             R"#(Knots of the n-dimensional Bspline)#"  , py::arg("K"))
        .def("Multiplicities",
             (void (Convert_CompPolynomialToPoles::*)( opencascade::handle<TColStd_HArray1OfInteger> & ) const) static_cast<void (Convert_CompPolynomialToPoles::*)( opencascade::handle<TColStd_HArray1OfInteger> & ) const>(&Convert_CompPolynomialToPoles::Multiplicities),
             R"#(Multiplicities of the knots in the BSpline)#"  , py::arg("M"))
        .def("IsDone",
             (Standard_Boolean (Convert_CompPolynomialToPoles::*)() const) static_cast<Standard_Boolean (Convert_CompPolynomialToPoles::*)() const>(&Convert_CompPolynomialToPoles::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_ConicToBSplineCurve , shared_ptr<Convert_ConicToBSplineCurve> >>(m.attr("Convert_ConicToBSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Degree",
             (Standard_Integer (Convert_ConicToBSplineCurve::*)() const) static_cast<Standard_Integer (Convert_ConicToBSplineCurve::*)() const>(&Convert_ConicToBSplineCurve::Degree),
             R"#(Returns the degree of the BSpline curve whose data is computed in this framework.)#" )
        .def("NbPoles",
             (Standard_Integer (Convert_ConicToBSplineCurve::*)() const) static_cast<Standard_Integer (Convert_ConicToBSplineCurve::*)() const>(&Convert_ConicToBSplineCurve::NbPoles),
             R"#(Returns the number of poles of the BSpline curve whose data is computed in this framework.)#" )
        .def("NbKnots",
             (Standard_Integer (Convert_ConicToBSplineCurve::*)() const) static_cast<Standard_Integer (Convert_ConicToBSplineCurve::*)() const>(&Convert_ConicToBSplineCurve::NbKnots),
             R"#(Returns the number of knots of the BSpline curve whose data is computed in this framework.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Convert_ConicToBSplineCurve::*)() const) static_cast<Standard_Boolean (Convert_ConicToBSplineCurve::*)() const>(&Convert_ConicToBSplineCurve::IsPeriodic),
             R"#(Returns true if the BSpline curve whose data is computed in this framework is periodic.)#" )
        .def("Pole",
             (gp_Pnt2d (Convert_ConicToBSplineCurve::*)( const Standard_Integer ) const) static_cast<gp_Pnt2d (Convert_ConicToBSplineCurve::*)( const Standard_Integer ) const>(&Convert_ConicToBSplineCurve::Pole),
             R"#(Returns the pole of index Index to the poles table of the BSpline curve whose data is computed in this framework. Exceptions Standard_OutOfRange if Index is outside the bounds of the poles table of the BSpline curve whose data is computed in this framework.)#"  , py::arg("Index"))
        .def("Weight",
             (Standard_Real (Convert_ConicToBSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (Convert_ConicToBSplineCurve::*)( const Standard_Integer ) const>(&Convert_ConicToBSplineCurve::Weight),
             R"#(Returns the weight of the pole of index Index to the poles table of the BSpline curve whose data is computed in this framework. Exceptions Standard_OutOfRange if Index is outside the bounds of the poles table of the BSpline curve whose data is computed in this framework.)#"  , py::arg("Index"))
        .def("Knot",
             (Standard_Real (Convert_ConicToBSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Real (Convert_ConicToBSplineCurve::*)( const Standard_Integer ) const>(&Convert_ConicToBSplineCurve::Knot),
             R"#(Returns the knot of index Index to the knots table of the BSpline curve whose data is computed in this framework. Exceptions Standard_OutOfRange if Index is outside the bounds of the knots table of the BSpline curve whose data is computed in this framework.)#"  , py::arg("Index"))
        .def("Multiplicity",
             (Standard_Integer (Convert_ConicToBSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Convert_ConicToBSplineCurve::*)( const Standard_Integer ) const>(&Convert_ConicToBSplineCurve::Multiplicity),
             R"#(Returns the multiplicity of the knot of index Index to the knots table of the BSpline curve whose data is computed in this framework. Exceptions Standard_OutOfRange if Index is outside the bounds of the knots table of the BSpline curve whose data is computed in this framework.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("BuildCosAndSin",
             []( Convert_ConicToBSplineCurve &self , const Convert_ParameterisationType Parametrisation,opencascade::handle<TColStd_HArray1OfReal> & CosNumerator,opencascade::handle<TColStd_HArray1OfReal> & SinNumerator,opencascade::handle<TColStd_HArray1OfReal> & Denominator,opencascade::handle<TColStd_HArray1OfReal> & Knots,opencascade::handle<TColStd_HArray1OfInteger> & Mults ){ Standard_Integer  Degree; self.BuildCosAndSin(Parametrisation,CosNumerator,SinNumerator,Denominator,Degree,Knots,Mults); return std::make_tuple(Degree); },
             R"#(None)#"  , py::arg("Parametrisation"),  py::arg("CosNumerator"),  py::arg("SinNumerator"),  py::arg("Denominator"),  py::arg("Knots"),  py::arg("Mults"))
        .def("BuildCosAndSin",
             []( Convert_ConicToBSplineCurve &self , const Convert_ParameterisationType Parametrisation,const Standard_Real UFirst,const Standard_Real ULast,opencascade::handle<TColStd_HArray1OfReal> & CosNumerator,opencascade::handle<TColStd_HArray1OfReal> & SinNumerator,opencascade::handle<TColStd_HArray1OfReal> & Denominator,opencascade::handle<TColStd_HArray1OfReal> & Knots,opencascade::handle<TColStd_HArray1OfInteger> & Mults ){ Standard_Integer  Degree; self.BuildCosAndSin(Parametrisation,UFirst,ULast,CosNumerator,SinNumerator,Denominator,Degree,Knots,Mults); return std::make_tuple(Degree); },
             R"#(None)#"  , py::arg("Parametrisation"),  py::arg("UFirst"),  py::arg("ULast"),  py::arg("CosNumerator"),  py::arg("SinNumerator"),  py::arg("Denominator"),  py::arg("Knots"),  py::arg("Mults"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_ElementarySurfaceToBSplineSurface , shared_ptr<Convert_ElementarySurfaceToBSplineSurface> >>(m.attr("Convert_ElementarySurfaceToBSplineSurface"))
    // constructors
    // custom constructors
    // methods
        .def("UDegree",
             (Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const) static_cast<Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const>(&Convert_ElementarySurfaceToBSplineSurface::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const) static_cast<Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const>(&Convert_ElementarySurfaceToBSplineSurface::VDegree),
             R"#(Returns the degree for the u or v parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbUPoles",
             (Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const) static_cast<Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const>(&Convert_ElementarySurfaceToBSplineSurface::NbUPoles),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const) static_cast<Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const>(&Convert_ElementarySurfaceToBSplineSurface::NbVPoles),
             R"#(Returns the number of poles for the u or v parametric direction of the BSpline surface whose data is computed in this framework.)#" )
        .def("NbUKnots",
             (Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const) static_cast<Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const>(&Convert_ElementarySurfaceToBSplineSurface::NbUKnots),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const) static_cast<Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)() const>(&Convert_ElementarySurfaceToBSplineSurface::NbVKnots),
             R"#(Returns the number of knots for the u or v parametric direction of the BSpline surface whose data is computed in this framework .)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Convert_ElementarySurfaceToBSplineSurface::*)() const) static_cast<Standard_Boolean (Convert_ElementarySurfaceToBSplineSurface::*)() const>(&Convert_ElementarySurfaceToBSplineSurface::IsUPeriodic),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Convert_ElementarySurfaceToBSplineSurface::*)() const) static_cast<Standard_Boolean (Convert_ElementarySurfaceToBSplineSurface::*)() const>(&Convert_ElementarySurfaceToBSplineSurface::IsVPeriodic),
             R"#(Returns true if the BSpline surface whose data is computed in this framework is periodic in the u or v parametric direction.)#" )
        .def("Pole",
             (gp_Pnt (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<gp_Pnt (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&Convert_ElementarySurfaceToBSplineSurface::Pole),
             R"#(Returns the pole of index (UIndex,VIndex) to the poles table of the BSpline surface whose data is computed in this framework. Exceptions Standard_OutOfRange if, for the BSpline surface whose data is computed in this framework: - UIndex is outside the bounds of the poles table in the u parametric direction, or - VIndex is outside the bounds of the poles table in the v parametric direction.)#"  , py::arg("UIndex"),  py::arg("VIndex"))
        .def("Weight",
             (Standard_Real (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer , const Standard_Integer ) const>(&Convert_ElementarySurfaceToBSplineSurface::Weight),
             R"#(Returns the weight of the pole of index (UIndex,VIndex) to the poles table of the BSpline surface whose data is computed in this framework. Exceptions Standard_OutOfRange if, for the BSpline surface whose data is computed in this framework: - UIndex is outside the bounds of the poles table in the u parametric direction, or - VIndex is outside the bounds of the poles table in the v parametric direction.)#"  , py::arg("UIndex"),  py::arg("VIndex"))
        .def("UKnot",
             (Standard_Real (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Real (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer ) const>(&Convert_ElementarySurfaceToBSplineSurface::UKnot),
             R"#(Returns the U-knot of range UIndex. Raised if UIndex < 1 or UIndex > NbUKnots.)#"  , py::arg("UIndex"))
        .def("VKnot",
             (Standard_Real (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Real (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer ) const>(&Convert_ElementarySurfaceToBSplineSurface::VKnot),
             R"#(Returns the V-knot of range VIndex. Raised if VIndex < 1 or VIndex > NbVKnots.)#"  , py::arg("UIndex"))
        .def("UMultiplicity",
             (Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer ) const>(&Convert_ElementarySurfaceToBSplineSurface::UMultiplicity),
             R"#(Returns the multiplicity of the U-knot of range UIndex. Raised if UIndex < 1 or UIndex > NbUKnots.)#"  , py::arg("UIndex"))
        .def("VMultiplicity",
             (Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Convert_ElementarySurfaceToBSplineSurface::*)( const Standard_Integer ) const>(&Convert_ElementarySurfaceToBSplineSurface::VMultiplicity),
             R"#(Returns the multiplicity of the V-knot of range VIndex. Raised if VIndex < 1 or VIndex > NbVKnots.)#"  , py::arg("VIndex"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_GridPolynomialToPoles , shared_ptr<Convert_GridPolynomialToPoles> >>(m.attr("Convert_GridPolynomialToPoles"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfInteger> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> & >()  , py::arg("MaxUDegree"),  py::arg("MaxVDegree"),  py::arg("NumCoeff"),  py::arg("Coefficients"),  py::arg("PolynomialUIntervals"),  py::arg("PolynomialVIntervals") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray2OfInteger> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> & >()  , py::arg("NbUSurfaces"),  py::arg("NBVSurfaces"),  py::arg("UContinuity"),  py::arg("VContinuity"),  py::arg("MaxUDegree"),  py::arg("MaxVDegree"),  py::arg("NumCoeffPerSurface"),  py::arg("Coefficients"),  py::arg("PolynomialUIntervals"),  py::arg("PolynomialVIntervals"),  py::arg("TrueUIntervals"),  py::arg("TrueVIntervals") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Convert_GridPolynomialToPoles::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const opencascade::handle<TColStd_HArray2OfInteger> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (Convert_GridPolynomialToPoles::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const opencascade::handle<TColStd_HArray2OfInteger> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&Convert_GridPolynomialToPoles::Perform),
             R"#(None)#"  , py::arg("UContinuity"),  py::arg("VContinuity"),  py::arg("MaxUDegree"),  py::arg("MaxVDegree"),  py::arg("NumCoeffPerSurface"),  py::arg("Coefficients"),  py::arg("PolynomialUIntervals"),  py::arg("PolynomialVIntervals"),  py::arg("TrueUIntervals"),  py::arg("TrueVIntervals"))
        .def("NbUPoles",
             (Standard_Integer (Convert_GridPolynomialToPoles::*)() const) static_cast<Standard_Integer (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::NbUPoles),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (Convert_GridPolynomialToPoles::*)() const) static_cast<Standard_Integer (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::NbVPoles),
             R"#(None)#" )
        .def("Poles",
             (const opencascade::handle<TColgp_HArray2OfPnt> & (Convert_GridPolynomialToPoles::*)() const) static_cast<const opencascade::handle<TColgp_HArray2OfPnt> & (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::Poles),
             R"#(returns the poles of the BSpline Surface)#" )
        .def("UDegree",
             (Standard_Integer (Convert_GridPolynomialToPoles::*)() const) static_cast<Standard_Integer (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (Convert_GridPolynomialToPoles::*)() const) static_cast<Standard_Integer (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::VDegree),
             R"#(None)#" )
        .def("NbUKnots",
             (Standard_Integer (Convert_GridPolynomialToPoles::*)() const) static_cast<Standard_Integer (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::NbUKnots),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (Convert_GridPolynomialToPoles::*)() const) static_cast<Standard_Integer (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::NbVKnots),
             R"#(None)#" )
        .def("UKnots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (Convert_GridPolynomialToPoles::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::UKnots),
             R"#(Knots in the U direction)#" )
        .def("VKnots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (Convert_GridPolynomialToPoles::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::VKnots),
             R"#(Knots in the V direction)#" )
        .def("UMultiplicities",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (Convert_GridPolynomialToPoles::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::UMultiplicities),
             R"#(Multiplicities of the knots in the U direction)#" )
        .def("VMultiplicities",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (Convert_GridPolynomialToPoles::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::VMultiplicities),
             R"#(Multiplicities of the knots in the V direction)#" )
        .def("IsDone",
             (Standard_Boolean (Convert_GridPolynomialToPoles::*)() const) static_cast<Standard_Boolean (Convert_GridPolynomialToPoles::*)() const>(&Convert_GridPolynomialToPoles::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_CircleToBSplineCurve , shared_ptr<Convert_CircleToBSplineCurve> , Convert_ConicToBSplineCurve>>(m.attr("Convert_CircleToBSplineCurve"))
    // constructors
        .def(py::init< const gp_Circ2d &,const Convert_ParameterisationType >()  , py::arg("C"),  py::arg("Parameterisation")=static_cast<const Convert_ParameterisationType>(Convert_TgtThetaOver2) )
        .def(py::init< const gp_Circ2d &,const Standard_Real,const Standard_Real,const Convert_ParameterisationType >()  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Parameterisation")=static_cast<const Convert_ParameterisationType>(Convert_TgtThetaOver2) )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_ConeToBSplineSurface , shared_ptr<Convert_ConeToBSplineSurface> , Convert_ElementarySurfaceToBSplineSurface>>(m.attr("Convert_ConeToBSplineSurface"))
    // constructors
        .def(py::init< const gp_Cone &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Cone &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("V1"),  py::arg("V2") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_CylinderToBSplineSurface , shared_ptr<Convert_CylinderToBSplineSurface> , Convert_ElementarySurfaceToBSplineSurface>>(m.attr("Convert_CylinderToBSplineSurface"))
    // constructors
        .def(py::init< const gp_Cylinder &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Cyl"),  py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Cylinder &,const Standard_Real,const Standard_Real >()  , py::arg("Cyl"),  py::arg("V1"),  py::arg("V2") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_EllipseToBSplineCurve , shared_ptr<Convert_EllipseToBSplineCurve> , Convert_ConicToBSplineCurve>>(m.attr("Convert_EllipseToBSplineCurve"))
    // constructors
        .def(py::init< const gp_Elips2d &,const Convert_ParameterisationType >()  , py::arg("E"),  py::arg("Parameterisation")=static_cast<const Convert_ParameterisationType>(Convert_TgtThetaOver2) )
        .def(py::init< const gp_Elips2d &,const Standard_Real,const Standard_Real,const Convert_ParameterisationType >()  , py::arg("E"),  py::arg("U1"),  py::arg("U2"),  py::arg("Parameterisation")=static_cast<const Convert_ParameterisationType>(Convert_TgtThetaOver2) )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_HyperbolaToBSplineCurve , shared_ptr<Convert_HyperbolaToBSplineCurve> , Convert_ConicToBSplineCurve>>(m.attr("Convert_HyperbolaToBSplineCurve"))
    // constructors
        .def(py::init< const gp_Hypr2d &,const Standard_Real,const Standard_Real >()  , py::arg("H"),  py::arg("U1"),  py::arg("U2") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_ParabolaToBSplineCurve , shared_ptr<Convert_ParabolaToBSplineCurve> , Convert_ConicToBSplineCurve>>(m.attr("Convert_ParabolaToBSplineCurve"))
    // constructors
        .def(py::init< const gp_Parab2d &,const Standard_Real,const Standard_Real >()  , py::arg("Prb"),  py::arg("U1"),  py::arg("U2") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_SphereToBSplineSurface , shared_ptr<Convert_SphereToBSplineSurface> , Convert_ElementarySurfaceToBSplineSurface>>(m.attr("Convert_SphereToBSplineSurface"))
    // constructors
        .def(py::init< const gp_Sphere &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Sph"),  py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Sphere &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Sph"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("UTrim")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Sphere & >()  , py::arg("Sph") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_TorusToBSplineSurface , shared_ptr<Convert_TorusToBSplineSurface> , Convert_ElementarySurfaceToBSplineSurface>>(m.attr("Convert_TorusToBSplineSurface"))
    // constructors
        .def(py::init< const gp_Torus &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("T"),  py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Torus &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("T"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("UTrim")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Torus & >()  , py::arg("T") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Convert_CompPolynomialToPoles.hxx
// ./opencascade/Convert_TorusToBSplineSurface.hxx
// ./opencascade/Convert_ConeToBSplineSurface.hxx
// ./opencascade/Convert_GridPolynomialToPoles.hxx
// ./opencascade/Convert_ParameterisationType.hxx
// ./opencascade/Convert_HyperbolaToBSplineCurve.hxx
// ./opencascade/Convert_CompBezierCurvesToBSplineCurve.hxx
// ./opencascade/Convert_CompBezierCurves2dToBSplineCurve2d.hxx
// ./opencascade/Convert_CylinderToBSplineSurface.hxx
// ./opencascade/Convert_SequenceOfArray1OfPoles2d.hxx
// ./opencascade/Convert_PolynomialCosAndSin.hxx
    m.def("BuildPolynomialCosAndSin",
          (void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , opencascade::handle<TColStd_HArray1OfReal> & , opencascade::handle<TColStd_HArray1OfReal> & , opencascade::handle<TColStd_HArray1OfReal> & ))  static_cast<void (*)( const Standard_Real , const Standard_Real , const Standard_Integer , opencascade::handle<TColStd_HArray1OfReal> & , opencascade::handle<TColStd_HArray1OfReal> & , opencascade::handle<TColStd_HArray1OfReal> & )>(&BuildPolynomialCosAndSin),
          R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""));
// ./opencascade/Convert_ConicToBSplineCurve.hxx
// ./opencascade/Convert_ParabolaToBSplineCurve.hxx
// ./opencascade/Convert_EllipseToBSplineCurve.hxx
// ./opencascade/Convert_SphereToBSplineSurface.hxx
// ./opencascade/Convert_CosAndSinEvalFunction.hxx
// ./opencascade/Convert_ElementarySurfaceToBSplineSurface.hxx
// ./opencascade/Convert_SequenceOfArray1OfPoles.hxx
// ./opencascade/Convert_CircleToBSplineCurve.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<TColgp_HArray1OfPnt> >(m,"Convert_SequenceOfArray1OfPoles");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
