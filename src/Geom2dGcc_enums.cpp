
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NegativeValue.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <math_Matrix.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d3Tan.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2dGcc_CurveTool.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Circ2d3Tan.hxx>
#include <Geom2dGcc_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanCen.hxx>
#include <Geom2dGcc_Lin2d2Tan.hxx>
#include <Geom2dGcc_Lin2dTanObl.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Geom2dGcc_Circ2dTanCenGeo.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <Geom2dGcc_Circ2d3TanIter.hxx>
#include <Geom2dGcc_FunctionTanCuCuCu.hxx>
#include <Geom2dGcc_Circ2d2TanOnIter.hxx>
#include <Geom2dGcc_FunctionTanCuCuOnCu.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dGcc_FunctionTanObl.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dGcc_FunctionTanCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuPnt.hxx>
#include <Geom2dGcc_FunctionTanCirCu.hxx>
#include <math_Matrix.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dAdaptor_Curve.hxx>

// module includes
#include <Geom2dGcc.hxx>
#include <Geom2dGcc_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Geom2dGcc_Circ2d2TanOnIter.hxx>
#include <Geom2dGcc_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Geom2dGcc_Circ2d3Tan.hxx>
#include <Geom2dGcc_Circ2d3TanIter.hxx>
#include <Geom2dGcc_Circ2dTanCen.hxx>
#include <Geom2dGcc_Circ2dTanCenGeo.hxx>
#include <Geom2dGcc_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <Geom2dGcc_CurveTool.hxx>
#include <Geom2dGcc_FunctionTanCirCu.hxx>
#include <Geom2dGcc_FunctionTanCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuCuOnCu.hxx>
#include <Geom2dGcc_FunctionTanCuPnt.hxx>
#include <Geom2dGcc_FunctionTanObl.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_Lin2d2Tan.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dGcc_Lin2dTanObl.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Type1.hxx>
#include <Geom2dGcc_Type2.hxx>
#include <Geom2dGcc_Type3.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dGcc_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Geom2dGcc", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Geom2dGcc_Type2>(m, "Geom2dGcc_Type2",R"#(None)#")
        .value("Geom2dGcc_CuCuOnCu",Geom2dGcc_Type2::Geom2dGcc_CuCuOnCu)
        .value("Geom2dGcc_CiCuOnCu",Geom2dGcc_Type2::Geom2dGcc_CiCuOnCu)
        .value("Geom2dGcc_LiCuOnCu",Geom2dGcc_Type2::Geom2dGcc_LiCuOnCu)
        .value("Geom2dGcc_CuPtOnCu",Geom2dGcc_Type2::Geom2dGcc_CuPtOnCu)
        .value("Geom2dGcc_CuCuOnLi",Geom2dGcc_Type2::Geom2dGcc_CuCuOnLi)
        .value("Geom2dGcc_CiCuOnLi",Geom2dGcc_Type2::Geom2dGcc_CiCuOnLi)
        .value("Geom2dGcc_LiCuOnLi",Geom2dGcc_Type2::Geom2dGcc_LiCuOnLi)
        .value("Geom2dGcc_CuPtOnLi",Geom2dGcc_Type2::Geom2dGcc_CuPtOnLi)
        .value("Geom2dGcc_CuCuOnCi",Geom2dGcc_Type2::Geom2dGcc_CuCuOnCi)
        .value("Geom2dGcc_CiCuOnCi",Geom2dGcc_Type2::Geom2dGcc_CiCuOnCi)
        .value("Geom2dGcc_LiCuOnCi",Geom2dGcc_Type2::Geom2dGcc_LiCuOnCi)
        .value("Geom2dGcc_CuPtOnCi",Geom2dGcc_Type2::Geom2dGcc_CuPtOnCi).export_values();
    py::enum_<Geom2dGcc_Type3>(m, "Geom2dGcc_Type3",R"#(None)#")
        .value("Geom2dGcc_CuCu",Geom2dGcc_Type3::Geom2dGcc_CuCu)
        .value("Geom2dGcc_CiCu",Geom2dGcc_Type3::Geom2dGcc_CiCu).export_values();
    py::enum_<Geom2dGcc_Type1>(m, "Geom2dGcc_Type1",R"#(None)#")
        .value("Geom2dGcc_CuCuCu",Geom2dGcc_Type1::Geom2dGcc_CuCuCu)
        .value("Geom2dGcc_CiCuCu",Geom2dGcc_Type1::Geom2dGcc_CiCuCu)
        .value("Geom2dGcc_CiCiCu",Geom2dGcc_Type1::Geom2dGcc_CiCiCu)
        .value("Geom2dGcc_CiLiCu",Geom2dGcc_Type1::Geom2dGcc_CiLiCu)
        .value("Geom2dGcc_LiLiCu",Geom2dGcc_Type1::Geom2dGcc_LiLiCu)
        .value("Geom2dGcc_LiCuCu",Geom2dGcc_Type1::Geom2dGcc_LiCuCu).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<Geom2dGcc_Circ2d2TanOnIter ,std::unique_ptr<Geom2dGcc_Circ2d2TanOnIter>  >(m,"Geom2dGcc_Circ2d2TanOnIter",R"#(This class implements the algorithms used to create 2d circles TANgent to 2 entities and having the center ON a curv. The order of the tangency argument is always QualifiedCirc, QualifiedLin, QualifiedCurv, Pnt2d. the arguments are : - The two tangency arguments. - The center line. - The parameter for each tangency argument which is a curve. - The tolerance.)#");
    py::class_<Geom2dGcc_Circ2d2TanRad ,std::unique_ptr<Geom2dGcc_Circ2d2TanRad>  >(m,"Geom2dGcc_Circ2d2TanRad",R"#(This class implements the algorithms used to create 2d circles tangent to one curve and a point/line/circle/curv and with a given radius. For each construction methods arguments are: - Two Qualified elements for tangency constrains. (for example EnclosedCirc if we want the solution inside the argument EnclosedCirc). - Two Reals. One (Radius) for the radius and the other (Tolerance) for the tolerance. Tolerance is only used for the limit cases. For example : We want to create a circle inside a circle C1 and inside a curve Cu2 with a radius Radius and a tolerance Tolerance. If we did not used Tolerance it is impossible to find a solution in the the following case : Cu2 is inside C1 and there is no intersection point between the two elements. with Tolerance we will give a solution if the lowest distance between C1 and Cu2 is lower than or equal Tolerance.)#");
    py::class_<Geom2dGcc_QualifiedCurve ,std::unique_ptr<Geom2dGcc_QualifiedCurve>  >(m,"Geom2dGcc_QualifiedCurve",R"#(Describes functions for building a qualified 2D curve. A qualified 2D curve is a curve with a qualifier which specifies whether the solution of a construction algorithm using the qualified curve (as an argument): - encloses the curve, or - is enclosed by the curve, or - is built so that both the curve and it are external to one another, or - is undefined (all solutions apply).)#");
    py::class_<Geom2dGcc_FunctionTanCuCuCu ,std::unique_ptr<Geom2dGcc_FunctionTanCuCuCu>  , math_FunctionSetWithDerivatives >(m,"Geom2dGcc_FunctionTanCuCuCu",R"#(This abstract class describes a set on N Functions of M independant variables.)#");
    py::class_<Geom2dGcc_Circ2d2TanRadGeo ,std::unique_ptr<Geom2dGcc_Circ2d2TanRadGeo>  >(m,"Geom2dGcc_Circ2d2TanRadGeo",R"#(This class implements the algorithms used to create 2d circles tangent to one curve and a point/line/circle/curv and with a given radius. For each construction methods arguments are: - Two Qualified elements for tangency constrains. (for example EnclosedCirc if we want the solution inside the argument EnclosedCirc). - Two Reals. One (Radius) for the radius and the other (Tolerance) for the tolerance. Tolerance is only used for the limit cases. For example : We want to create a circle inside a circle C1 and inside a curve Cu2 with a radius Radius and a tolerance Tolerance. If we did not used Tolerance it is impossible to find a solution in the following case : Cu2 is inside C1 and there is no intersection point between the two elements. With Tolerance we will get a solution if the lowest distance between C1 and Cu2 is lower than or equal Tolerance.)#");
    py::class_<Geom2dGcc_Lin2d2Tan ,std::unique_ptr<Geom2dGcc_Lin2d2Tan>  >(m,"Geom2dGcc_Lin2d2Tan",R"#(This class implements the algorithms used to create 2d lines tangent to 2 other elements which can be circles, curves or points. More than one argument must be a curve. Describes functions for building a 2D line: - tangential to 2 curves, or - tangential to a curve and passing through a point. A Lin2d2Tan object provides a framework for: - defining the construction of 2D line(s), - implementing the construction algorithm, and - consulting the result(s).)#");
    py::class_<Geom2dGcc_QCurve ,std::unique_ptr<Geom2dGcc_QCurve>  >(m,"Geom2dGcc_QCurve",R"#(Creates a qualified 2d line.)#");
    py::class_<Geom2dGcc_Circ2d3TanIter ,std::unique_ptr<Geom2dGcc_Circ2d3TanIter>  >(m,"Geom2dGcc_Circ2d3TanIter",R"#(This class implements the algorithms used to create 2d circles tangent to 3 points/lines/circles/ curves with one curve or more. The arguments of all construction methods are : - The three qualifiied elements for the tangency constrains (QualifiedCirc, QualifiedLine, Qualifiedcurv, Points). - A parameter for each QualifiedCurv.)#");
    py::class_<Geom2dGcc_Lin2dTanOblIter ,std::unique_ptr<Geom2dGcc_Lin2dTanOblIter>  >(m,"Geom2dGcc_Lin2dTanOblIter",R"#(This class implements the algorithms used to create 2d line tangent to a curve QualifiedCurv and doing an angle Angle with a line TheLin. The angle must be in Radian.)#");
    py::class_<Geom2dGcc_Circ2d3Tan ,std::unique_ptr<Geom2dGcc_Circ2d3Tan>  >(m,"Geom2dGcc_Circ2d3Tan",R"#(This class implements the algorithms used to create 2d circles tangent to 3 points/lines/circles/ curves with one curve or more. The arguments of all construction methods are : - The three qualifiied elements for the tangency constrains (QualifiedCirc, QualifiedLine, Qualifiedcurv, Points). - A parameter for each QualifiedCurv. Describes functions for building a 2D circle: - tangential to 3 curves, or - tangential to 2 curves and passing through a point, or - tangential to a curve and passing through 2 points, or - passing through 3 points. A Circ2d3Tan object provides a framework for: - defining the construction of 2D circles(s), - implementing the construction algorithm, and - consulting the result(s).)#");
    py::class_<Geom2dGcc ,std::unique_ptr<Geom2dGcc>  >(m,"Geom2dGcc",R"#(The Geom2dGcc package describes qualified 2D curves used in the construction of constrained geometric objects by an algorithm provided by the Geom2dGcc package. A qualified 2D curve is a curve with a qualifier which specifies whether the solution of a construction algorithm using the qualified curve (as an argument): - encloses the curve, or - is enclosed by the curve, or - is built so that both the curve and this solution are external to one another, or - is undefined (all solutions apply). These package methods provide simpler functions to construct a qualified curve. Note: the interior of a curve is defined as the left-hand side of the curve in relation to its orientation.)#");
    py::class_<Geom2dGcc_FunctionTanCirCu ,std::unique_ptr<Geom2dGcc_FunctionTanCirCu>  , math_FunctionWithDerivative >(m,"Geom2dGcc_FunctionTanCirCu",R"#(This abstract class describes a Function of 1 Variable used to find a line tangent to a curve and a circle.)#");
    py::class_<Geom2dGcc_Lin2d2TanIter ,std::unique_ptr<Geom2dGcc_Lin2d2TanIter>  >(m,"Geom2dGcc_Lin2d2TanIter",R"#(This class implements the algorithms used to create 2d lines tangent to 2 other elements which can be circles, curves or points. More than one argument must be a curve.)#");
    py::class_<Geom2dGcc_FunctionTanObl ,std::unique_ptr<Geom2dGcc_FunctionTanObl>  , math_FunctionWithDerivative >(m,"Geom2dGcc_FunctionTanObl",R"#(This class describe a function of a single variable.)#");
    py::class_<Geom2dGcc_FunctionTanCuCu ,std::unique_ptr<Geom2dGcc_FunctionTanCuCu>  , math_FunctionSetWithDerivatives >(m,"Geom2dGcc_FunctionTanCuCu",R"#(This abstract class describes a Function of 1 Variable used to find a line tangent to two curves.)#");
    py::class_<Geom2dGcc_Circ2dTanCenGeo ,std::unique_ptr<Geom2dGcc_Circ2dTanCenGeo>  >(m,"Geom2dGcc_Circ2dTanCenGeo",R"#(This class implements the algorithms used to create 2d circles tangent to a curve and centered on a point. The arguments of all construction methods are : - The qualified element for the tangency constrains (QualifiedCurv). -The center point Pcenter. - A real Tolerance. Tolerance is only used in the limits cases. For example : We want to create a circle tangent to an EnclosedCurv C1 with a tolerance Tolerance. If we did not use Tolerance it is impossible to find a solution in the following case : Pcenter is outside C1. With Tolerance we will give a solution if the distance between C1 and Pcenter is lower than or equal Tolerance/2.)#");
    py::class_<Geom2dGcc_Circ2d2TanOnGeo ,std::unique_ptr<Geom2dGcc_Circ2d2TanOnGeo>  >(m,"Geom2dGcc_Circ2d2TanOnGeo",R"#(This class implements the algorithms used to create 2d circles TANgent to 2 entities and having the center ON a curve. The order of the tangency argument is always QualifiedCirc, QualifiedLin, QualifiedCurv, Pnt2d. the arguments are : - The two tangency arguments (lines, circles or points). - The center line (a curve). - The parameter for each tangency argument which is a curve. - The tolerance.)#");
    py::class_<Geom2dGcc_Circ2dTanCen ,std::unique_ptr<Geom2dGcc_Circ2dTanCen>  >(m,"Geom2dGcc_Circ2dTanCen",R"#(This class implements the algorithms used to create 2d circles tangent to a curve and centered on a point. The arguments of all construction methods are : - The qualified element for the tangency constrains (QualifiedCurv). -The center point Pcenter. - A real Tolerance. Tolerance is only used in the limits cases. For example : We want to create a circle tangent to an EnclosedCurv C1 with a tolerance Tolerance. If we did not used Tolerance it is impossible to find a solution in the the following case : Pcenter is outside C1. With Tolerance we will give a solution if the distance between C1 and Pcenter is lower than or equal Tolerance/2.)#");
    py::class_<Geom2dGcc_Lin2dTanObl ,std::unique_ptr<Geom2dGcc_Lin2dTanObl>  >(m,"Geom2dGcc_Lin2dTanObl",R"#(This class implements the algorithms used to create 2d line tangent to a curve QualifiedCurv and doing an angle Angle with a line TheLin. The angle must be in Radian. Describes functions for building a 2D line making a given angle with a line and tangential to a curve. A Lin2dTanObl object provides a framework for: - defining the construction of 2D line(s), - implementing the construction algorithm, and - consulting the result(s).)#");
    py::class_<Geom2dGcc_Circ2dTanOnRadGeo ,std::unique_ptr<Geom2dGcc_Circ2dTanOnRadGeo>  >(m,"Geom2dGcc_Circ2dTanOnRadGeo",R"#(This class implements the algorithms used to create a 2d circle tangent to a 2d entity, centered on a 2d entity and with a given radius. More than one argument must be a curve. The arguments of all construction methods are : - The qualified element for the tangency constrains (QualifiedCirc, QualifiedLin, QualifiedCurvPoints). - The Center element (circle, line, curve). - A real Tolerance. Tolerance is only used in the limits cases. For example : We want to create a circle tangent to an OutsideCurv Cu1 centered on a line OnLine with a radius Radius and with a tolerance Tolerance. If we did not use Tolerance it is impossible to find a solution in the following case : OnLine is outside Cu1. There is no intersection point between Cu1 and OnLine. The distance between the line and the circle is greater than Radius. With Tolerance we will give a solution if the distance between Cu1 and OnLine is lower than or equal Tolerance.)#");
    py::class_<Geom2dGcc_Circ2dTanOnRad ,std::unique_ptr<Geom2dGcc_Circ2dTanOnRad>  >(m,"Geom2dGcc_Circ2dTanOnRad",R"#(This class implements the algorithms used to create a 2d circle tangent to a 2d entity, centered on a 2d entity and with a given radius. More than one argument must be a curve. The arguments of all construction methods are : - The qualified element for the tangency constrains (QualifiedCirc, QualifiedLin, QualifiedCurvPoints). - The Center element (circle, line, curve). - A real Tolerance. Tolerance is only used in the limits cases. For example : We want to create a circle tangent to an OutsideCurv Cu1 centered on a line OnLine with a radius Radius and with a tolerance Tolerance. If we did not used Tolerance it is impossible to find a solution in the the following case : OnLine is outside Cu1. There is no intersection point between Cu1 and OnLine. The distance between the line and the circle is greater than Radius. With Tolerance we will give a solution if the distance between Cu1 and OnLine is lower than or equal Tolerance.)#");
    py::class_<Geom2dGcc_CurveTool ,std::unique_ptr<Geom2dGcc_CurveTool>  >(m,"Geom2dGcc_CurveTool",R"#(None)#");
    py::class_<Geom2dGcc_FunctionTanCuPnt ,std::unique_ptr<Geom2dGcc_FunctionTanCuPnt>  , math_FunctionWithDerivative >(m,"Geom2dGcc_FunctionTanCuPnt",R"#(This abstract class describes a Function of 1 Variable used to find a line tangent to a curve and passing through a point.)#");
    py::class_<Geom2dGcc_FunctionTanCuCuOnCu ,std::unique_ptr<Geom2dGcc_FunctionTanCuCuOnCu>  , math_FunctionSetWithDerivatives >(m,"Geom2dGcc_FunctionTanCuCuOnCu",R"#(This abstract class describes a set on N Functions of M independant variables.)#");
    py::class_<Geom2dGcc_Circ2d2TanOn ,std::unique_ptr<Geom2dGcc_Circ2d2TanOn>  >(m,"Geom2dGcc_Circ2d2TanOn",R"#(This class implements the algorithms used to create 2d circles TANgent to 2 entities and having the center ON a curve. The order of the tangency argument is always QualifiedCirc, QualifiedLin, QualifiedCurv, Pnt2d. the arguments are : - The two tangency arguments. - The center line. - The parameter for each tangency argument which is a curve. - The tolerance.)#");

// pre-register typdefs
// ./opencascade/Geom2dGcc_Circ2d2TanOnIter.hxx
// ./opencascade/Geom2dGcc_Lin2d2TanIter.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanRad.hxx
// ./opencascade/Geom2dGcc_Circ2dTanOnRadGeo.hxx
// ./opencascade/Geom2dGcc_QualifiedCurve.hxx
// ./opencascade/Geom2dGcc_FunctionTanObl.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCuCu.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuPnt.hxx
// ./opencascade/Geom2dGcc_Type2.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanRadGeo.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCu.hxx
// ./opencascade/Geom2dGcc_Lin2d2Tan.hxx
// ./opencascade/Geom2dGcc_Circ2dTanOnRad.hxx
// ./opencascade/Geom2dGcc_QCurve.hxx
// ./opencascade/Geom2dGcc_Type3.hxx
// ./opencascade/Geom2dGcc_Circ2dTanCenGeo.hxx
// ./opencascade/Geom2dGcc_Circ2d3TanIter.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanOn.hxx
// ./opencascade/Geom2dGcc_IsParallel.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanOnGeo.hxx
// ./opencascade/Geom2dGcc_Type1.hxx
// ./opencascade/Geom2dGcc_Lin2dTanOblIter.hxx
// ./opencascade/Geom2dGcc_CurveTool.hxx
// ./opencascade/Geom2dGcc_Circ2d3Tan.hxx
// ./opencascade/Geom2dGcc_Circ2dTanCen.hxx
// ./opencascade/Geom2dGcc.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCuOnCu.hxx
// ./opencascade/Geom2dGcc_FunctionTanCirCu.hxx
// ./opencascade/Geom2dGcc_Lin2dTanObl.hxx

};

// user-defined post-inclusion per module

// user-defined post
