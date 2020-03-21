
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>
#include <StdFail_NotDone.hxx>
#include <GccInt_Bisec.hxx>
#include <Standard_ConstructionError.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_NegativeValue.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NegativeValue.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>

// module includes
#include <GccAna_Circ2d2TanOn.hxx>
#include <GccAna_Circ2d2TanRad.hxx>
#include <GccAna_Circ2d3Tan.hxx>
#include <GccAna_Circ2dBisec.hxx>
#include <GccAna_Circ2dTanCen.hxx>
#include <GccAna_Circ2dTanOnRad.hxx>
#include <GccAna_CircLin2dBisec.hxx>
#include <GccAna_CircPnt2dBisec.hxx>
#include <GccAna_Lin2d2Tan.hxx>
#include <GccAna_Lin2dBisec.hxx>
#include <GccAna_Lin2dTanObl.hxx>
#include <GccAna_Lin2dTanPar.hxx>
#include <GccAna_Lin2dTanPer.hxx>
#include <GccAna_LinPnt2dBisec.hxx>
#include <GccAna_NoSolution.hxx>
#include <GccAna_Pnt2dBisec.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GccAna_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GccAna", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GccAna_Circ2d2TanOn , shared_ptr<GccAna_Circ2d2TanOn> >(m,"GccAna_Circ2d2TanOn",R"#(Describes functions for building a 2D circle - tangential to 2 curves, or - tangential to a curve and passing through a point, or - passing through 2 points, and with its center on a curve. For these analytic algorithms, curves are circles or lines. A Circ2d2TanOn object provides a framework for: - defining the construction of 2D circles(s), - implementing the construction algorithm, and - consulting the result(s).)#");
    py::class_<GccAna_Circ2d2TanRad , shared_ptr<GccAna_Circ2d2TanRad> >(m,"GccAna_Circ2d2TanRad",R"#(This class implements the algorithms used to create 2d circles tangent to 2 points/lines/circles and with a given radius. For each construction methods arguments are: - Two Qualified elements for tangency constraints. (for example EnclosedCirc if we want the solution inside the argument EnclosedCirc). - Two Reals. One (Radius) for the radius and the other (Tolerance) for the tolerance. Tolerance is only used for the limit cases. For example : We want to create a circle inside a circle C1 and inside a circle C2 with a radius Radius and a tolerance Tolerance. If we do not use Tolerance it is impossible to find a solution in the following case : C2 is inside C1 and there is no intersection point between the two circles. With Tolerance it gives a solution if the lowest distance between C1 and C2 is lower than or equal Tolerance.)#");
    py::class_<GccAna_Circ2d3Tan , shared_ptr<GccAna_Circ2d3Tan> >(m,"GccAna_Circ2d3Tan",R"#(This class implements the algorithms used to create 2d circles tangent to 3 points/lines/circles. The arguments of all construction methods are : - The three qualified elements for the tangency constraints (QualifiedCirc, QualifiedLine, Points). - A real Tolerance. Tolerance is only used in the limit cases. For example : We want to create a circle tangent to an UnqualifiedCirc C1 and an UnqualifiedCirc C2 and an UnqualifiedCirc C3 with a tolerance Tolerance. If we do not use Tolerance it is impossible to find a solution in the following case : C2 is inside C1 and there is no intersection point between the two circles, and C3 is completly outside C1. With Tolerance we will find a solution if the lowest distance between C1 and C2 is lower than or equal Tolerance.)#");
    py::class_<GccAna_Circ2dBisec , shared_ptr<GccAna_Circ2dBisec> >(m,"GccAna_Circ2dBisec",R"#(This class describes functions for building bisecting curves between two 2D circles. A bisecting curve between two circles is a curve such that each of its points is at the same distance from the two circles. It can be an ellipse, hyperbola, circle or line, depending on the relative position of the two circles. The algorithm computes all the elementary curves which are solutions. There is no solution if the two circles are coincident. A Circ2dBisec object provides a framework for: - defining the construction of the bisecting curves, - implementing the construction algorithm, and consulting the result.)#");
    py::class_<GccAna_Circ2dTanCen , shared_ptr<GccAna_Circ2dTanCen> >(m,"GccAna_Circ2dTanCen",R"#(This class implements the algorithms used to create 2d circles tangent to an entity and centered on a point. The arguments of all construction methods are : - The qualified element for the tangency constrains (QualifiedCirc, Line, Point). - The center point Pcenter. - A real Tolerance. Tolerance is only used in the limits cases. For example : We want to create a circle tangent to an EnclosedCirc C1 with a tolerance Tolerance. If we did not used Tolerance it is impossible to find a solution in the the following case : Pcenter is outside C1. With Tolerance we will give a solution if the distance between C1 and Pcenter is lower than or equal Tolerance.)#");
    py::class_<GccAna_Circ2dTanOnRad , shared_ptr<GccAna_Circ2dTanOnRad> >(m,"GccAna_Circ2dTanOnRad",R"#(This class implements the algorithms used to create a 2d circle tangent to a 2d entity, centered on a curv and with a given radius. The arguments of all construction methods are : - The qualified element for the tangency constrains (QualifiedCirc, QualifiedLin, Points). - The Center element (circle, line). - A real Tolerance. Tolerance is only used in the limits cases. For example : We want to create a circle tangent to an OutsideCirc C1 centered on a line OnLine with a radius Radius and with a tolerance Tolerance. If we did not use Tolerance it is impossible to find a solution in the the following case : OnLine is outside C1. There is no intersection point between C1 and OnLine. The distance between the line and the circle is greater than Radius. With Tolerance we will give a solution if the distance between C1 and OnLine is lower than or equal Tolerance.)#");
    py::class_<GccAna_CircLin2dBisec , shared_ptr<GccAna_CircLin2dBisec> >(m,"GccAna_CircLin2dBisec",R"#(Describes functions for building bisecting curves between a 2D line and a 2D circle. A bisecting curve between a circle and a line is a curve such that each of its points is at the same distance from the circle and the line. It can be a parabola or a line, depending of the relative position of the line and the circle. The algorithm computes all the elementary curves which are solutions. A CircLin2dBisec object provides a framework for: - defining the construction of the bisecting curves, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GccAna_CircPnt2dBisec , shared_ptr<GccAna_CircPnt2dBisec> >(m,"GccAna_CircPnt2dBisec",R"#(Describes functions for building a bisecting curve between a 2D circle and a point. A bisecting curve between a circle and a point is such a curve that each of its points is at the same distance from the circle and the point. It can be an ellipse, hyperbola, circle or line, depending on the relative position of the point and the circle. The algorithm computes all the elementary curves which are solutions. A CircPnt2dBisec object provides a framework for: - defining the construction of the bisecting curves, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GccAna_Lin2d2Tan , shared_ptr<GccAna_Lin2d2Tan> >(m,"GccAna_Lin2d2Tan",R"#(This class implements the algorithms used to create 2d lines tangent to 2 other elements which can be circles or points. Describes functions for building a 2D line: - tangential to 2 circles, or - tangential to a circle and passing through a point, or - passing through 2 points. A Lin2d2Tan object provides a framework for: - defining the construction of 2D line(s), - implementing the construction algorithm, and consulting the result(s). Some constructors may check the type of the qualified argument and raise BadQualifier Error in case of incorrect couple (qualifier, curv). For example: "EnclosedCirc".)#");
    py::class_<GccAna_Lin2dBisec , shared_ptr<GccAna_Lin2dBisec> >(m,"GccAna_Lin2dBisec",R"#(Describes functions for building bisecting lines between two 2D lines. A bisecting line between two lines is such that each of its points is at the same distance from the two lines. If the two lines are secant, there are two orthogonal bisecting lines which share the angles made by the two straight lines in two equal parts. If D1 and D2 are the unit vectors of the two straight lines, those of the two bisecting lines are collinear with the following vectors: - D1 + D2 for the "internal" bisecting line, - D1 - D2 for the "external" bisecting line. If the two lines are parallel, the (unique) bisecting line is the straight line equidistant from the two straight lines. If the two straight lines are coincident, the algorithm returns the first straight line as the solution. A Lin2dTanObl object provides a framework for: - defining the construction of the bisecting lines, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GccAna_Lin2dTanObl , shared_ptr<GccAna_Lin2dTanObl> >(m,"GccAna_Lin2dTanObl",R"#(This class implements the algorithms used to create 2d line tangent to a circle or a point and making an angle with a line. The angle is in radians. The origin of the solution is the tangency point with the first argument. Its direction is making an angle Angle with the second argument.)#");
    py::class_<GccAna_Lin2dTanPar , shared_ptr<GccAna_Lin2dTanPar> >(m,"GccAna_Lin2dTanPar",R"#(This class implements the algorithms used to create 2d line tangent to a circle or a point and parallel to another line. The solution has the same orientation as the second argument. Describes functions for building a 2D line parallel to a line and: - tangential to a circle, or - passing through a point. A Lin2dTanPar object provides a framework for: - defining the construction of 2D line(s), - implementing the construction algorithm, and consulting the result(s).)#");
    py::class_<GccAna_Lin2dTanPer , shared_ptr<GccAna_Lin2dTanPer> >(m,"GccAna_Lin2dTanPer",R"#(This class implements the algorithms used to create 2d lines tangent to a circle or a point and perpendicular to a line or a circle. Describes functions for building a 2D line perpendicular to a line and: - tangential to a circle, or - passing through a point. A Lin2dTanPer object provides a framework for: - defining the construction of 2D line(s), - implementing the construction algorithm, and - consulting the result(s).)#");
    py::class_<GccAna_LinPnt2dBisec , shared_ptr<GccAna_LinPnt2dBisec> >(m,"GccAna_LinPnt2dBisec",R"#(Describes functions for building bisecting curves between a 2D line and a point. A bisecting curve between a line and a point is such a curve that each of its points is at the same distance from the circle and the point. It can be a parabola or a line, depending on the relative position of the line and the circle. There is always one unique solution. A LinPnt2dBisec object provides a framework for: - defining the construction of the bisecting curve, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GccAna_Pnt2dBisec , shared_ptr<GccAna_Pnt2dBisec> >(m,"GccAna_Pnt2dBisec",R"#(This class implements the algorithms used to create the bisecting line between two 2d points Describes functions for building a bisecting line between two 2D points. The bisecting line between two points is the bisector of the segment which joins the two points, if these are not coincident. The algorithm does not find a solution if the two points are coincident. A Pnt2dBisec object provides a framework for: - defining the construction of the bisecting line, - implementing the construction algorithm, and consulting the result.)#");

};

// user-defined post-inclusion per module

// user-defined post
