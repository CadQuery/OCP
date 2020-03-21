
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom_Transformation.hxx>
#include <gp_Vec.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Circ.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab.hxx>
#include <gp_Pnt.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <gp_Ax1.hxx>
#include <gp_Cylinder.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Ax1.hxx>
#include <gp_Lin.hxx>
#include <gp_Dir.hxx>
#include <gp_Pln.hxx>
#include <gp_Ax2.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cone.hxx>
#include <gp_Lin.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Lin.hxx>
#include <gp_Ax1.hxx>
#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ.hxx>
#include <Geom_Transformation.hxx>
#include <gp_Pnt.hxx>
#include <gp_Circ.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pln.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pnt.hxx>

// module includes
#include <GC_MakeArcOfCircle.hxx>
#include <GC_MakeArcOfEllipse.hxx>
#include <GC_MakeArcOfHyperbola.hxx>
#include <GC_MakeArcOfParabola.hxx>
#include <GC_MakeCircle.hxx>
#include <GC_MakeConicalSurface.hxx>
#include <GC_MakeCylindricalSurface.hxx>
#include <GC_MakeEllipse.hxx>
#include <GC_MakeHyperbola.hxx>
#include <GC_MakeLine.hxx>
#include <GC_MakeMirror.hxx>
#include <GC_MakePlane.hxx>
#include <GC_MakeRotation.hxx>
#include <GC_MakeScale.hxx>
#include <GC_MakeSegment.hxx>
#include <GC_MakeTranslation.hxx>
#include <GC_MakeTrimmedCone.hxx>
#include <GC_MakeTrimmedCylinder.hxx>
#include <GC_Root.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GC_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GC", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GC_MakeMirror , shared_ptr<GC_MakeMirror> >(m,"GC_MakeMirror",R"#(This class implements elementary construction algorithms for a symmetrical transformation in 3D space about a point, axis or plane. The result is a Geom_Transformation transformation. A MakeMirror object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GC_MakeRotation , shared_ptr<GC_MakeRotation> >(m,"GC_MakeRotation",R"#(This class implements elementary construction algorithms for a rotation in 3D space. The result is a Geom_Transformation transformation. A MakeRotation object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GC_MakeScale , shared_ptr<GC_MakeScale> >(m,"GC_MakeScale",R"#(This class implements an elementary construction algorithm for a scaling transformation in 3D space. The result is a Geom_Transformation transformation (a scaling transformation with the center point <Point> and the scaling value <Scale>). A MakeScale object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GC_MakeTranslation , shared_ptr<GC_MakeTranslation> >(m,"GC_MakeTranslation",R"#(This class implements elementary construction algorithms for a translation in 3D space. The result is a Geom_Transformation transformation. A MakeTranslation object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GC_Root , shared_ptr<GC_Root> >(m,"GC_Root",R"#(This class implements the common services for all classes of gce which report error.)#");
    py::class_<GC_MakeArcOfCircle , shared_ptr<GC_MakeArcOfCircle> , GC_Root>(m,"GC_MakeArcOfCircle",R"#(Implements construction algorithms for an arc of circle in 3D space. The result is a Geom_TrimmedCurve curve. A MakeArcOfCircle object provides a framework for: - defining the construction of the arc of circle, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed arc of circle.)#");
    py::class_<GC_MakeArcOfEllipse , shared_ptr<GC_MakeArcOfEllipse> , GC_Root>(m,"GC_MakeArcOfEllipse",R"#(Implements construction algorithms for an arc of ellipse in 3D space. The result is a Geom_TrimmedCurve curve. A MakeArcOfEllipse object provides a framework for: - defining the construction of the arc of ellipse, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed arc of ellipse.)#");
    py::class_<GC_MakeArcOfHyperbola , shared_ptr<GC_MakeArcOfHyperbola> , GC_Root>(m,"GC_MakeArcOfHyperbola",R"#(Implements construction algorithms for an arc of hyperbola in 3D space. The result is a Geom_TrimmedCurve curve. A MakeArcOfHyperbola object provides a framework for: - defining the construction of the arc of hyperbola, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed arc of hyperbola.)#");
    py::class_<GC_MakeArcOfParabola , shared_ptr<GC_MakeArcOfParabola> , GC_Root>(m,"GC_MakeArcOfParabola",R"#(Implements construction algorithms for an arc of parabola in 3D space. The result is a Geom_TrimmedCurve curve. A MakeArcOfParabola object provides a framework for: - defining the construction of the arc of parabola, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed arc of parabola.)#");
    py::class_<GC_MakeCircle , shared_ptr<GC_MakeCircle> , GC_Root>(m,"GC_MakeCircle",R"#(This class implements the following algorithms used to create Cirlec from Geom.)#");
    py::class_<GC_MakeConicalSurface , shared_ptr<GC_MakeConicalSurface> , GC_Root>(m,"GC_MakeConicalSurface",R"#(This class implements the following algorithms used to create a ConicalSurface from Geom. * Create a ConicalSurface parallel to another and passing through a point. * Create a ConicalSurface parallel to another at a distance <Dist>. * Create a ConicalSurface by 4 points. * Create a ConicalSurface by its axis and 2 points. * Create a ConicalSurface by 2 points and 2 radius. The local coordinate system of the ConicalSurface is defined with an axis placement (see class ElementarySurface).)#");
    py::class_<GC_MakeCylindricalSurface , shared_ptr<GC_MakeCylindricalSurface> , GC_Root>(m,"GC_MakeCylindricalSurface",R"#(This class implements the following algorithms used to create a CylindricalSurface from Geom. * Create a CylindricalSurface parallel to another and passing through a point. * Create a CylindricalSurface parallel to another at a distance <Dist>. * Create a CylindricalSurface passing through 3 points. * Create a CylindricalSurface by its axis and radius. * Create a cylindricalSurface by its circular base. The local coordinate system of the CylindricalSurface is defined with an axis placement (see class ElementarySurface).)#");
    py::class_<GC_MakeEllipse , shared_ptr<GC_MakeEllipse> , GC_Root>(m,"GC_MakeEllipse",R"#(This class implements construction algorithms for an ellipse in 3D space. The result is a Geom_Ellipse ellipse. A MakeEllipse object provides a framework for: - defining the construction of the ellipse, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed ellipse.)#");
    py::class_<GC_MakeHyperbola , shared_ptr<GC_MakeHyperbola> , GC_Root>(m,"GC_MakeHyperbola",R"#(This class implements construction algorithms for a hyperbola in 3D space. The result is a Geom_Hyperbola hyperbola. A MakeHyperbola object provides a framework for: - defining the construction of the hyperbola, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed hyperbola. To define the main branch of an hyperbola. The parameterization range is ]-infinite,+infinite[ It is possible to get the other branch and the two conjugate branches of the main branch.)#");
    py::class_<GC_MakeLine , shared_ptr<GC_MakeLine> , GC_Root>(m,"GC_MakeLine",R"#(This class implements the following algorithms used to create a Line from Geom. * Create a Line parallel to another and passing through a point. * Create a Line passing through 2 points. A MakeLine object provides a framework for: - defining the construction of the line, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed line.)#");
    py::class_<GC_MakePlane , shared_ptr<GC_MakePlane> , GC_Root>(m,"GC_MakePlane",R"#(This class implements the following algorithms used to create a Plane from gp. * Create a Plane parallel to another and passing through a point. * Create a Plane passing through 3 points. * Create a Plane by its normal A MakePlane object provides a framework for: - defining the construction of the plane, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed plane.)#");
    py::class_<GC_MakeSegment , shared_ptr<GC_MakeSegment> , GC_Root>(m,"GC_MakeSegment",R"#(Implements construction algorithms for a line segment in 3D space. Makes a segment of Line from the 2 points <P1> and <P2>. The result is a Geom_TrimmedCurve curve. A MakeSegment object provides a framework for: - defining the construction of the line segment, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed line segment.)#");
    py::class_<GC_MakeTrimmedCone , shared_ptr<GC_MakeTrimmedCone> , GC_Root>(m,"GC_MakeTrimmedCone",R"#(Implements construction algorithms for a trimmed cone limited by two planes orthogonal to its axis. The result is a Geom_RectangularTrimmedSurface surface. A MakeTrimmedCone provides a framework for: - defining the construction of the trimmed cone, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed trimmed cone.)#");
    py::class_<GC_MakeTrimmedCylinder , shared_ptr<GC_MakeTrimmedCylinder> , GC_Root>(m,"GC_MakeTrimmedCylinder",R"#(Implements construction algorithms for a trimmed cylinder limited by two planes orthogonal to its axis. The result is a Geom_RectangularTrimmedSurface surface. A MakeTrimmedCylinder provides a framework for: - defining the construction of the trimmed cylinder, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed trimmed cylinder.)#");

};

// user-defined post-inclusion per module

// user-defined post
