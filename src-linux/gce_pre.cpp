
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax1.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <gp_Ax2.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Ax1.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>

// module includes
#include <gce_ErrorType.hxx>
#include <gce_MakeCirc.hxx>
#include <gce_MakeCirc2d.hxx>
#include <gce_MakeCone.hxx>
#include <gce_MakeCylinder.hxx>
#include <gce_MakeDir.hxx>
#include <gce_MakeDir2d.hxx>
#include <gce_MakeElips.hxx>
#include <gce_MakeElips2d.hxx>
#include <gce_MakeHypr.hxx>
#include <gce_MakeHypr2d.hxx>
#include <gce_MakeLin.hxx>
#include <gce_MakeLin2d.hxx>
#include <gce_MakeMirror.hxx>
#include <gce_MakeMirror2d.hxx>
#include <gce_MakeParab.hxx>
#include <gce_MakeParab2d.hxx>
#include <gce_MakePln.hxx>
#include <gce_MakeRotation.hxx>
#include <gce_MakeRotation2d.hxx>
#include <gce_MakeScale.hxx>
#include <gce_MakeScale2d.hxx>
#include <gce_MakeTranslation.hxx>
#include <gce_MakeTranslation2d.hxx>
#include <gce_Root.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_gce_enums(py::module &main_module) {


py::module m = main_module.def_submodule("gce", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<gce_ErrorType>(m, "gce_ErrorType",R"#(Indicates the outcome of a construction, i.e. whether it is successful or not, as explained below. gce_Done: Construction was successful. gce_ConfusedPoints: Two points are coincident. gce_NegativeRadius: Radius value is negative. gce_ColinearPoints: Three points are collinear. gce_IntersectionError: Intersection cannot be computed. gce_NullAxis: Axis is undefined. gce_NullAngle: Angle value is invalid (usually null). gce_NullRadius: Radius is null. gce_InvertAxis: Axis value is invalid. gce_BadAngle: Angle value is invalid. gce_InvertRadius: Radius value is incorrect (usually with respect to another radius). gce_NullFocusLength: Focal distance is null. gce_NullVector: Vector is null. gce_BadEquation: Coefficients are incorrect (applies to the equation of a geometric object).)#")
        .value("gce_Done",gce_ErrorType::gce_Done)
        .value("gce_ConfusedPoints",gce_ErrorType::gce_ConfusedPoints)
        .value("gce_NegativeRadius",gce_ErrorType::gce_NegativeRadius)
        .value("gce_ColinearPoints",gce_ErrorType::gce_ColinearPoints)
        .value("gce_IntersectionError",gce_ErrorType::gce_IntersectionError)
        .value("gce_NullAxis",gce_ErrorType::gce_NullAxis)
        .value("gce_NullAngle",gce_ErrorType::gce_NullAngle)
        .value("gce_NullRadius",gce_ErrorType::gce_NullRadius)
        .value("gce_InvertAxis",gce_ErrorType::gce_InvertAxis)
        .value("gce_BadAngle",gce_ErrorType::gce_BadAngle)
        .value("gce_InvertRadius",gce_ErrorType::gce_InvertRadius)
        .value("gce_NullFocusLength",gce_ErrorType::gce_NullFocusLength)
        .value("gce_NullVector",gce_ErrorType::gce_NullVector)
        .value("gce_BadEquation",gce_ErrorType::gce_BadEquation).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<gce_MakeMirror , shared_ptr<gce_MakeMirror> >(m,"gce_MakeMirror",R"#(This class mplements elementary construction algorithms for a symmetrical transformation in 3D space about a point, axis or plane. The result is a gp_Trsf transformation. A MakeMirror object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<gce_MakeMirror2d , shared_ptr<gce_MakeMirror2d> >(m,"gce_MakeMirror2d",R"#(This class implements elementary construction algorithms for a symmetrical transformation in 2D space about a point or axis. The result is a gp_Trsf2d transformation. A MakeMirror2d object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and consulting the result.)#");
    py::class_<gce_MakeRotation , shared_ptr<gce_MakeRotation> >(m,"gce_MakeRotation",R"#(This class implements elementary construction algorithms for a rotation in 3D space. The result is a gp_Trsf transformation. A MakeRotation object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<gce_MakeRotation2d , shared_ptr<gce_MakeRotation2d> >(m,"gce_MakeRotation2d",R"#(Implements an elementary construction algorithm for a rotation in 2D space. The result is a gp_Trsf2d transformation. A MakeRotation2d object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<gce_MakeScale , shared_ptr<gce_MakeScale> >(m,"gce_MakeScale",R"#(Implements an elementary construction algorithm for a scaling transformation in 3D space. The result is a gp_Trsf transformation. A MakeScale object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<gce_MakeScale2d , shared_ptr<gce_MakeScale2d> >(m,"gce_MakeScale2d",R"#(This class implements an elementary construction algorithm for a scaling transformation in 2D space. The result is a gp_Trsf2d transformation. A MakeScale2d object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<gce_MakeTranslation , shared_ptr<gce_MakeTranslation> >(m,"gce_MakeTranslation",R"#(This class implements elementary construction algorithms for a translation in 3D space. The result is a gp_Trsf transformation. A MakeTranslation object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<gce_MakeTranslation2d , shared_ptr<gce_MakeTranslation2d> >(m,"gce_MakeTranslation2d",R"#(This class implements elementary construction algorithms for a translation in 2D space. The result is a gp_Trsf2d transformation. A MakeTranslation2d object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<gce_Root , shared_ptr<gce_Root> >(m,"gce_Root",R"#(This class implements the common services for all classes of gce which report error.)#");
    py::class_<gce_MakeCirc , shared_ptr<gce_MakeCirc> , gce_Root>(m,"gce_MakeCirc",R"#(This class implements the following algorithms used to create Circ from gp.)#");
    py::class_<gce_MakeCirc2d , shared_ptr<gce_MakeCirc2d> , gce_Root>(m,"gce_MakeCirc2d",R"#(This class implements the following algorithms used to create Circ2d from gp.)#");
    py::class_<gce_MakeCone , shared_ptr<gce_MakeCone> , gce_Root>(m,"gce_MakeCone",R"#(This class implements the following algorithms used to create a Cone from gp. * Create a Cone coaxial to another and passing through a point. * Create a Cone coaxial to another at a distance <Dist>. * Create a Cone by 4 points. * Create a Cone by its axis and 2 points. * Create a Cone by 2 points and 2 radius. * Create a Cone by an Ax2 an angle and the radius of its reference section.)#");
    py::class_<gce_MakeCylinder , shared_ptr<gce_MakeCylinder> , gce_Root>(m,"gce_MakeCylinder",R"#(This class implements the following algorithms used to create a Cylinder from gp. * Create a Cylinder coaxial to another and passing through a point. * Create a Cylinder coaxial to another at a distance <Dist>. * Create a Cylinder with 3 points. * Create a Cylinder by its axis and radius. * Create a cylinder by its circular base.)#");
    py::class_<gce_MakeDir , shared_ptr<gce_MakeDir> , gce_Root>(m,"gce_MakeDir",R"#(This class implements the following algorithms used to create a Dir from gp. * Create a Dir parallel to another and passing through a point. * Create a Dir passing through 2 points. * Create a Dir from its axis (Ax1 from gp). * Create a Dir from a point and a direction.)#");
    py::class_<gce_MakeDir2d , shared_ptr<gce_MakeDir2d> , gce_Root>(m,"gce_MakeDir2d",R"#(This class implements the following algorithms used to create a Dir2d from gp. * Create a Dir2d with 2 points. * Create a Dir2d with a Vec2d. * Create a Dir2d with a XY from gp. * Create a Dir2d with a 2 Reals (Coordinates).)#");
    py::class_<gce_MakeElips , shared_ptr<gce_MakeElips> , gce_Root>(m,"gce_MakeElips",R"#(This class implements the following algorithms used to create an ellipse from gp.)#");
    py::class_<gce_MakeElips2d , shared_ptr<gce_MakeElips2d> , gce_Root>(m,"gce_MakeElips2d",R"#(This class implements the following algorithms used to create Elips2d from gp.)#");
    py::class_<gce_MakeHypr , shared_ptr<gce_MakeHypr> , gce_Root>(m,"gce_MakeHypr",R"#(This class implements the following algorithms used to create Hyperbola from gp. * Create an Hyperbola from its center, and two points: one on its axis of symmetry giving the major radius, the other giving the value of the small radius. The three points give the plane of the hyperbola. * Create an hyperbola from its axisplacement and its MajorRadius and its MinorRadius.)#");
    py::class_<gce_MakeHypr2d , shared_ptr<gce_MakeHypr2d> , gce_Root>(m,"gce_MakeHypr2d",R"#(This class implements the following algorithms used to create a 2d Hyperbola from gp. * Create a 2d Hyperbola from its center and two points: one on its axis of symmetry giving the major radius, the other giving the value of the small radius. * Create a 2d Hyperbola from its major axis and its major radius and its minor radius.)#");
    py::class_<gce_MakeLin , shared_ptr<gce_MakeLin> , gce_Root>(m,"gce_MakeLin",R"#(This class implements the following algorithms used to create a Lin from gp. * Create a Lin parallel to another and passing through a point. * Create a Lin passing through 2 points. * Create a lin from its axis (Ax1 from gp). * Create a lin from a point and a direction.)#");
    py::class_<gce_MakeLin2d , shared_ptr<gce_MakeLin2d> , gce_Root>(m,"gce_MakeLin2d",R"#(This class implements the following algorithms used to create Lin2d from gp.)#");
    py::class_<gce_MakeParab , shared_ptr<gce_MakeParab> , gce_Root>(m,"gce_MakeParab",R"#(This class implements the following algorithms used to create Parab from gp. Defines the parabola in the parameterization range : ]-infinite, +infinite[ The vertex of the parabola is the "Location" point of the local coordinate system (axis placement) of the parabola.)#");
    py::class_<gce_MakeParab2d , shared_ptr<gce_MakeParab2d> , gce_Root>(m,"gce_MakeParab2d",R"#(This class implements the following algorithms used to create Parab2d from gp. Defines an infinite parabola. An axis placement one axis defines the local cartesian coordinate system ("XAxis") of the parabola. The vertex of the parabola is the "Location" point of the local coordinate system of the parabola. The "XAxis" of the parabola is its axis of symmetry. The "XAxis" is oriented from the vertex of the parabola to the Focus of the parabola. The "YAxis" is parallel to the directrix of the parabola and its "Location" point is the vertex of the parabola. The equation of the parabola in the local coordinate system is Y**2 = (2*P) * X P is the distance between the focus and the directrix of the parabola called Parameter). The focal length F = P/2 is the distance between the vertex and the focus of the parabola.)#");
    py::class_<gce_MakePln , shared_ptr<gce_MakePln> , gce_Root>(m,"gce_MakePln",R"#(This class implements the following algorithms used to create a Plane from gp. * Create a Pln parallel to another and passing through a point. * Create a Pln passing through 3 points. * Create a Pln by its normal. Defines a non-persistent plane. The plane is located in 3D space with an axis placement two axis. It is the local coordinate system of the plane.)#");

};

// user-defined post-inclusion per module

// user-defined post
