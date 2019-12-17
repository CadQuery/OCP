
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Sphere.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Cone.hxx>
#include <gp_Hypr2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Torus.hxx>
#include <gp_Cylinder.hxx>
#include <Standard_ConstructionError.hxx>

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
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Convert_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Convert", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Convert_ParameterisationType>(m, "Convert_ParameterisationType",R"#(Identifies a type of parameterization of a circle or ellipse represented as a BSpline curve. For a circle with a center C and a radius R (for example a Geom2d_Circle or a Geom_Circle), the natural parameterization is angular. It uses the angle Theta made by the vector CM with the 'X Axis' of the circle's local coordinate system as parameter for the current point M. The coordinates of the point M are as follows: X = R *cos ( Theta ) y = R * sin ( Theta ) Similarly, for an ellipse with a center C, a major radius R and a minor radius r, the circle Circ with center C and radius R (and located in the same plane as the ellipse) lends its natural angular parameterization to the ellipse. This is achieved by an affine transformation in the plane of the ellipse, in the ratio r / R, about the 'X Axis' of its local coordinate system. The coordinates of the current point M are as follows: X = R * cos ( Theta ) y = r * sin ( Theta ) The process of converting a circle or an ellipse into a rational or non-rational BSpline curve transforms the Theta angular parameter into a parameter t. This ensures the rational or polynomial parameterization of the resulting BSpline curve. Several types of parametric transformations are available. TgtThetaOver2 The most usual method is Convert_TgtThetaOver2 where the parameter t on the BSpline curve is obtained by means of transformation of the following type: t = tan ( Theta / 2 ) The result of this definition is: cos ( Theta ) = ( 1. - t**2 ) / ( 1. + t**2 ) sin ( Theta ) = 2. * t / ( 1. + t**2 ) which ensures the rational parameterization of the circle or the ellipse. However, this is not the most suitable parameterization method where the arc of the circle or ellipse has a large opening angle. In such cases, the curve will be represented by a BSpline with intermediate knots. Each span, i.e. each portion of curve between two different knot values, will use parameterization of this type. The number of spans is calculated using the following rule: ( 1.2 * Delta / Pi ) + 1 where Delta is equal to the opening angle (in radians) of the arc of the circle (Delta is equal to 2.* Pi in the case of a complete circle). The resulting BSpline curve is "exact", i.e. computing any point of parameter t on the BSpline curve gives an exact point on the circle or the ellipse. TgtThetaOver2_N Where N is equal to 1, 2, 3 or 4, this ensures the same type of parameterization as Convert_TgtThetaOver2 but sets the number of spans in the resulting BSpline curve to N rather than allowing the algorithm to make this calculation. However, the opening angle Delta (parametric angle, given in radians) of the arc of the circle (or of the ellipse) must comply with the following: - Delta <= 0.9999 * Pi for the Convert_TgtThetaOver2_1 method, or - Delta <= 1.9999 * Pi for the Convert_TgtThetaOver2_2 method. QuasiAngular The Convert_QuasiAngular method of parameterization uses a different type of rational parameterization. This method ensures that the parameter t along the resulting BSpline curve is very close to the natural parameterization angle Theta of the circle or ellipse (i.e. which uses the functions sin ( Theta ) and cos ( Theta ). The resulting BSpline curve is "exact", i.e. computing any point of parameter t on the BSpline curve gives an exact point on the circle or the ellipse. RationalC1 The Convert_RationalC1 method of parameterization uses a further type of rational parameterization. This method ensures that the equation relating to the resulting BSpline curve has a "C1" continuous denominator, which is not the case with the above methods. RationalC1 enhances the degree of continuity at the junction point of the different spans of the curve. The resulting BSpline curve is "exact", i.e. computing any point of parameter t on the BSpline curve gives an exact point on the circle or the ellipse. Polynomial The Convert_Polynomial method is used to produce polynomial (i.e. non-rational) parameterization of the resulting BSpline curve with 8 poles (i.e. a polynomial degree equal to 7). However, the result is an approximation of the circle or ellipse (i.e. computing the point of parameter t on the BSpline curve does not give an exact point on the circle or the ellipse).)#")
        .value("Convert_TgtThetaOver2",Convert_ParameterisationType::Convert_TgtThetaOver2)
        .value("Convert_TgtThetaOver2_1",Convert_ParameterisationType::Convert_TgtThetaOver2_1)
        .value("Convert_TgtThetaOver2_2",Convert_ParameterisationType::Convert_TgtThetaOver2_2)
        .value("Convert_TgtThetaOver2_3",Convert_ParameterisationType::Convert_TgtThetaOver2_3)
        .value("Convert_TgtThetaOver2_4",Convert_ParameterisationType::Convert_TgtThetaOver2_4)
        .value("Convert_QuasiAngular",Convert_ParameterisationType::Convert_QuasiAngular)
        .value("Convert_RationalC1",Convert_ParameterisationType::Convert_RationalC1)
        .value("Convert_Polynomial",Convert_ParameterisationType::Convert_Polynomial).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<Convert_ElementarySurfaceToBSplineSurface ,std::unique_ptr<Convert_ElementarySurfaceToBSplineSurface>  >(m,"Convert_ElementarySurfaceToBSplineSurface",R"#(Root class for algorithms which convert an elementary surface (cylinder, cone, sphere or torus) into a BSpline surface (CylinderToBSplineSurface, ConeToBSplineSurface, SphereToBSplineSurface, TorusToBSplineSurface). These algorithms all work on elementary surfaces from the gp package and compute all the data needed to construct a BSpline surface equivalent to the cylinder, cone, sphere or torus. This data consists of the following: - degrees in the u and v parametric directions, - periodic characteristics in the u and v parametric directions, - a poles table with associated weights, - a knots table (for the u and v parametric directions) with associated multiplicities. The abstract class ElementarySurfaceToBSplineSurface provides a framework for storing and consulting this computed data. This data may then be used to construct a Geom_BSplineSurface surface, for example. All those classes define algorithmes to convert an ElementarySurface into a B-spline surface. This abstract class implements the methods to get the geometric representation of the B-spline surface. The B-spline representation is computed at the creation time in the sub classes. The B-spline surface is defined with its degree in the parametric U and V directions, its control points (Poles), its weights, its knots and their multiplicity. KeyWords : Convert, ElementarySurface, BSplineSurface.)#");
    py::class_<Convert_ConicToBSplineCurve ,std::unique_ptr<Convert_ConicToBSplineCurve>  >(m,"Convert_ConicToBSplineCurve",R"#(Root class for algorithms which convert a conic curve into a BSpline curve (CircleToBSplineCurve, EllipseToBSplineCurve, HyperbolaToBSplineCurve, ParabolaToBSplineCurve). These algorithms all work on 2D curves from the gp package and compute all the data needed to construct a BSpline curve equivalent to the conic curve. This data consists of: - the degree of the curve, - the periodic characteristics of the curve, - a poles table with associated weights, - a knots table with associated multiplicities. The abstract class ConicToBSplineCurve provides a framework for storing and consulting this computed data. The data may then be used to construct a Geom2d_BSplineCurve curvSuper class of the following classes : This abstract class implements the methods to get the geometric representation of the B-spline curve equivalent to the conic. The B-spline is computed at the creation time in the sub classes. The B-spline curve is defined with its degree, its control points (Poles), its weights, its knots and their multiplicity. All the geometric entities used in this package are defined in 2D space. KeyWords : Convert, Conic, BSplineCurve, 2D.)#");
    py::class_<Convert_SphereToBSplineSurface ,std::unique_ptr<Convert_SphereToBSplineSurface>  , Convert_ElementarySurfaceToBSplineSurface >(m,"Convert_SphereToBSplineSurface",R"#(This algorithm converts a bounded Sphere into a rational B-spline surface. The sphere is a Sphere from package gp. The parametrization of the sphere is P (U, V) = Loc + Radius * Sin(V) * Zdir + Radius * Cos(V) * (Cos(U)*Xdir + Sin(U)*Ydir) where Loc is the center of the sphere Xdir, Ydir and Zdir are the normalized directions of the local cartesian coordinate system of the sphere. The parametrization range is U [0, 2PI] and V [-PI/2, PI/2]. KeyWords : Convert, Sphere, BSplineSurface.)#");
    py::class_<Convert_CompBezierCurves2dToBSplineCurve2d ,std::unique_ptr<Convert_CompBezierCurves2dToBSplineCurve2d>  >(m,"Convert_CompBezierCurves2dToBSplineCurve2d",R"#(Converts a list of connecting Bezier Curves 2d to a BSplineCurve 2d. if possible, the continuity of the BSpline will be increased to more than C0.)#");
    py::class_<Convert_HyperbolaToBSplineCurve ,std::unique_ptr<Convert_HyperbolaToBSplineCurve>  , Convert_ConicToBSplineCurve >(m,"Convert_HyperbolaToBSplineCurve",R"#(This algorithm converts a hyperbola into a rational B-spline curve. The hyperbola is an Hypr2d from package gp with the parametrization : P (U) = Loc + (MajorRadius * Cosh(U) * Xdir + MinorRadius * Sinh(U) * Ydir) where Loc is the location point of the hyperbola, Xdir and Ydir are the normalized directions of the local cartesian coordinate system of the hyperbola. KeyWords : Convert, Hyperbola, BSplineCurve, 2D .)#");
    py::class_<Convert_EllipseToBSplineCurve ,std::unique_ptr<Convert_EllipseToBSplineCurve>  , Convert_ConicToBSplineCurve >(m,"Convert_EllipseToBSplineCurve",R"#(This algorithm converts a ellipse into a rational B-spline curve. The ellipse is represented an Elips2d from package gp with the parametrization : P (U) = Loc + (MajorRadius * Cos(U) * Xdir + MinorRadius * Sin(U) * Ydir) where Loc is the center of the ellipse, Xdir and Ydir are the normalized directions of the local cartesian coordinate system of the ellipse. The parametrization range is U [0, 2PI]. KeyWords : Convert, Ellipse, BSplineCurve, 2D .)#");
    py::class_<Convert_ParabolaToBSplineCurve ,std::unique_ptr<Convert_ParabolaToBSplineCurve>  , Convert_ConicToBSplineCurve >(m,"Convert_ParabolaToBSplineCurve",R"#(This algorithm converts a parabola into a non rational B-spline curve. The parabola is a Parab2d from package gp with the parametrization P (U) = Loc + F * (U*U * Xdir + 2 * U * Ydir) where Loc is the apex of the parabola, Xdir is the normalized direction of the symmetry axis of the parabola, Ydir is the normalized direction of the directrix and F is the focal length. KeyWords : Convert, Parabola, BSplineCurve, 2D .)#");
    py::class_<Convert_CylinderToBSplineSurface ,std::unique_ptr<Convert_CylinderToBSplineSurface>  , Convert_ElementarySurfaceToBSplineSurface >(m,"Convert_CylinderToBSplineSurface",R"#(This algorithm converts a bounded cylinder into a rational B-spline surface. The cylinder is a Cylinder from package gp. The parametrization of the cylinder is : P (U, V) = Loc + V * Zdir + Radius * (Xdir*Cos(U) + Ydir*Sin(U)) where Loc is the location point of the cylinder, Xdir, Ydir and Zdir are the normalized directions of the local cartesian coordinate system of the cylinder (Zdir is the direction of the cylinder's axis). The U parametrization range is U [0, 2PI]. KeyWords : Convert, Cylinder, BSplineSurface.)#");
    py::class_<Convert_CircleToBSplineCurve ,std::unique_ptr<Convert_CircleToBSplineCurve>  , Convert_ConicToBSplineCurve >(m,"Convert_CircleToBSplineCurve",R"#(This algorithm converts a circle into a rational B-spline curve. The circle is a Circ2d from package gp and its parametrization is : P (U) = Loc + R * (Cos(U) * Xdir + Sin(U) * YDir) where Loc is the center of the circle Xdir and Ydir are the normalized directions of the local cartesian coordinate system of the circle. The parametrization range for the circle is U [0, 2Pi].)#");
    py::class_<Convert_GridPolynomialToPoles ,std::unique_ptr<Convert_GridPolynomialToPoles>  >(m,"Convert_GridPolynomialToPoles",R"#(Convert a grid of Polynomial Surfaces that are have continuity CM to an Bspline Surface that has continuity CM)#");
    py::class_<Convert_TorusToBSplineSurface ,std::unique_ptr<Convert_TorusToBSplineSurface>  , Convert_ElementarySurfaceToBSplineSurface >(m,"Convert_TorusToBSplineSurface",R"#(This algorithm converts a bounded Torus into a rational B-spline surface. The torus is a Torus from package gp. The parametrization of the torus is : P (U, V) = Loc + MinorRadius * Sin(V) * Zdir + (MajorRadius+MinorRadius*Cos(V)) * (Cos(U)*Xdir + Sin(U)*Ydir) where Loc is the center of the torus, Xdir, Ydir and Zdir are the normalized directions of the local cartesian coordinate system of the Torus. The parametrization range is U [0, 2PI], V [0, 2PI]. KeyWords : Convert, Torus, BSplineSurface.)#");
    py::class_<Convert_ConeToBSplineSurface ,std::unique_ptr<Convert_ConeToBSplineSurface>  , Convert_ElementarySurfaceToBSplineSurface >(m,"Convert_ConeToBSplineSurface",R"#(This algorithm converts a bounded Cone into a rational B-spline surface. The cone a Cone from package gp. Its parametrization is : P (U, V) = Loc + V * Zdir + (R + V*Tan(Ang)) * (Cos(U)*Xdir + Sin(U)*Ydir) where Loc is the location point of the cone, Xdir, Ydir and Zdir are the normalized directions of the local cartesian coordinate system of the cone (Zdir is the direction of the Cone's axis) , Ang is the cone semi-angle. The U parametrization range is [0, 2PI]. KeyWords : Convert, Cone, BSplineSurface.)#");
    py::class_<Convert_CompPolynomialToPoles ,std::unique_ptr<Convert_CompPolynomialToPoles>  >(m,"Convert_CompPolynomialToPoles",R"#(Convert a serie of Polynomial N-Dimensional Curves that are have continuity CM to an N-Dimensional Bspline Curve that has continuity CM. (to convert an function (curve) polynomial by span in a BSpline) This class uses the following arguments : NumCurves : the number of Polynomial Curves Continuity: the requested continuity for the n-dimensional Spline Dimension : the dimension of the Spline MaxDegree : maximum allowed degree for each composite polynomial segment. NumCoeffPerCurve : the number of coefficient per segments = degree - 1 Coefficients : the coefficients organized in the following way [1..<myNumPolynomials>][1..myMaxDegree +1][1..myDimension] that is : index [n,d,i] is at slot (n-1) * (myMaxDegree + 1) * myDimension + (d-1) * myDimension + i PolynomialIntervals : nth polynomial represents a polynomial between myPolynomialIntervals->Value(n,0) and myPolynomialIntervals->Value(n,1) TrueIntervals : the nth polynomial has to be mapped linearly to be defined on the following interval : myTrueIntervals->Value(n) and myTrueIntervals->Value(n+1) so that it represent adequatly the function with the required continuity)#");
    py::class_<Convert_CompBezierCurvesToBSplineCurve ,std::unique_ptr<Convert_CompBezierCurvesToBSplineCurve>  >(m,"Convert_CompBezierCurvesToBSplineCurve",R"#(An algorithm to convert a sequence of adjacent non-rational Bezier curves into a BSpline curve. A CompBezierCurvesToBSplineCurve object provides a framework for: - defining the sequence of adjacent non-rational Bezier curves to be converted into a BSpline curve, - implementing the computation algorithm, and - consulting the results. Warning Do not attempt to convert rational Bezier curves using this type of algorithm.)#");

// pre-register typdefs
// ./opencascade/Convert_SphereToBSplineSurface.hxx
// ./opencascade/Convert_CircleToBSplineCurve.hxx
// ./opencascade/Convert_CompBezierCurves2dToBSplineCurve2d.hxx
// ./opencascade/Convert_SequenceOfArray1OfPoles2d.hxx
// ./opencascade/Convert_CosAndSinEvalFunction.hxx
// ./opencascade/Convert_ConeToBSplineSurface.hxx
// ./opencascade/Convert_HyperbolaToBSplineCurve.hxx
// ./opencascade/Convert_ParameterisationType.hxx
// ./opencascade/Convert_PolynomialCosAndSin.hxx
// ./opencascade/Convert_ElementarySurfaceToBSplineSurface.hxx
// ./opencascade/Convert_GridPolynomialToPoles.hxx
// ./opencascade/Convert_ConicToBSplineCurve.hxx
// ./opencascade/Convert_EllipseToBSplineCurve.hxx
// ./opencascade/Convert_CompBezierCurvesToBSplineCurve.hxx
// ./opencascade/Convert_ParabolaToBSplineCurve.hxx
// ./opencascade/Convert_TorusToBSplineSurface.hxx
// ./opencascade/Convert_SequenceOfArray1OfPoles.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<TColgp_HArray1OfPnt> >(m,"Convert_SequenceOfArray1OfPoles");  
// ./opencascade/Convert_CylinderToBSplineSurface.hxx
// ./opencascade/Convert_CompPolynomialToPoles.hxx

};

// user-defined post-inclusion per module

// user-defined post
