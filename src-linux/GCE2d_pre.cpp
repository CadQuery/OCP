
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom2d_Transformation.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Lin2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Dir2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom2d_Transformation.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Pnt2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Hypr2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab2d.hxx>

// module includes
#include <GCE2d_MakeArcOfCircle.hxx>
#include <GCE2d_MakeArcOfEllipse.hxx>
#include <GCE2d_MakeArcOfHyperbola.hxx>
#include <GCE2d_MakeArcOfParabola.hxx>
#include <GCE2d_MakeCircle.hxx>
#include <GCE2d_MakeEllipse.hxx>
#include <GCE2d_MakeHyperbola.hxx>
#include <GCE2d_MakeLine.hxx>
#include <GCE2d_MakeMirror.hxx>
#include <GCE2d_MakeParabola.hxx>
#include <GCE2d_MakeRotation.hxx>
#include <GCE2d_MakeScale.hxx>
#include <GCE2d_MakeSegment.hxx>
#include <GCE2d_MakeTranslation.hxx>
#include <GCE2d_Root.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GCE2d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GCE2d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<GCE2d_MakeMirror , shared_ptr<GCE2d_MakeMirror> >(m,"GCE2d_MakeMirror",R"#(This class implements elementary construction algorithms for a symmetrical transformation in 2D space about a point or axis. The result is a Geom2d_Transformation transformation. A MakeMirror object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GCE2d_MakeRotation , shared_ptr<GCE2d_MakeRotation> >(m,"GCE2d_MakeRotation",R"#(This class implements an elementary construction algorithm for a rotation in 2D space. The result is a Geom2d_Transformation transformation. A MakeRotation object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GCE2d_MakeScale , shared_ptr<GCE2d_MakeScale> >(m,"GCE2d_MakeScale",R"#(This class implements an elementary construction algorithm for a scaling transformation in 2D space. The result is a Geom2d_Transformation transformation. A MakeScale object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GCE2d_MakeTranslation , shared_ptr<GCE2d_MakeTranslation> >(m,"GCE2d_MakeTranslation",R"#(This class implements elementary construction algorithms for a translation in 2D space. The result is a Geom2d_Transformation transformation. A MakeTranslation object provides a framework for: - defining the construction of the transformation, - implementing the construction algorithm, and - consulting the result.)#");
    py::class_<GCE2d_Root , shared_ptr<GCE2d_Root> >(m,"GCE2d_Root",R"#(This class implements the common services for all classes of gce which report error.)#");
    py::class_<GCE2d_MakeArcOfCircle , shared_ptr<GCE2d_MakeArcOfCircle> , GCE2d_Root>(m,"GCE2d_MakeArcOfCircle",R"#(Implements construction algorithms for an arc of circle in the plane. The result is a Geom2d_TrimmedCurve curve. A MakeArcOfCircle object provides a framework for: - defining the construction of the arc of circle, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed arc of circle.)#");
    py::class_<GCE2d_MakeArcOfEllipse , shared_ptr<GCE2d_MakeArcOfEllipse> , GCE2d_Root>(m,"GCE2d_MakeArcOfEllipse",R"#(Implements construction algorithms for an arc of ellipse in the plane. The result is a Geom2d_TrimmedCurve curve. A MakeArcOfEllipse object provides a framework for: - defining the construction of the arc of ellipse, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed arc of ellipse.)#");
    py::class_<GCE2d_MakeArcOfHyperbola , shared_ptr<GCE2d_MakeArcOfHyperbola> , GCE2d_Root>(m,"GCE2d_MakeArcOfHyperbola",R"#(Implements construction algorithms for an arc of hyperbola in the plane. The result is a Geom2d_TrimmedCurve curve. A MakeArcOfHyperbola object provides a framework for: - defining the construction of the arc of hyperbola, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed arc of hyperbola.)#");
    py::class_<GCE2d_MakeArcOfParabola , shared_ptr<GCE2d_MakeArcOfParabola> , GCE2d_Root>(m,"GCE2d_MakeArcOfParabola",R"#(Implements construction algorithms for an arc of parabola in the plane. The result is a Geom2d_TrimmedCurve curve. A MakeArcOfParabola object provides a framework for: - defining the construction of the arc of parabola, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed arc of parabola.)#");
    py::class_<GCE2d_MakeCircle , shared_ptr<GCE2d_MakeCircle> , GCE2d_Root>(m,"GCE2d_MakeCircle",R"#(This class implements the following algorithms used to create Circle from Geom2d.)#");
    py::class_<GCE2d_MakeEllipse , shared_ptr<GCE2d_MakeEllipse> , GCE2d_Root>(m,"GCE2d_MakeEllipse",R"#(This class implements the following algorithms used to create Ellipse from Geom2d. * Create an Ellipse from two apex and the center. Defines an ellipse in 2D space. The parametrization range is [0,2*PI]. The ellipse is a closed and periodic curve. The center of the ellipse is the "Location" point of its axis placement "XAxis". The "XAxis" of the ellipse defines the origin of the parametrization, it is the major axis of the ellipse. The YAxis is the minor axis of the ellipse.)#");
    py::class_<GCE2d_MakeHyperbola , shared_ptr<GCE2d_MakeHyperbola> , GCE2d_Root>(m,"GCE2d_MakeHyperbola",R"#(This class implements the following algorithms used to create Hyperbola from Geom2d. * Create an Hyperbola from two apex and the center. Defines the main branch of an hyperbola. The parameterization range is ]-infinite,+infinite[ It is possible to get the other branch and the two conjugate branches of the main branch.)#");
    py::class_<GCE2d_MakeLine , shared_ptr<GCE2d_MakeLine> , GCE2d_Root>(m,"GCE2d_MakeLine",R"#(This class implements the following algorithms used to create a Line from Geom2d. * Create a Line parallel to another and passing through a point. * Create a Line passing through 2 points.)#");
    py::class_<GCE2d_MakeParabola , shared_ptr<GCE2d_MakeParabola> , GCE2d_Root>(m,"GCE2d_MakeParabola",R"#(This class implements the following algorithms used to create Parabola from Geom2d. * Create an Parabola from two apex and the center. Defines the parabola in the parameterization range : ]-infinite,+infinite[ The vertex of the parabola is the "Location" point of the local coordinate system "XAxis" of the parabola. The "XAxis" of the parabola is its axis of symmetry. The "Xaxis" is oriented from the vertex of the parabola to the Focus of the parabola. The equation of the parabola in the local coordinate system is Y**2 = (2*P) * X P is the distance between the focus and the directrix of the parabola called Parameter). The focal length F = P/2 is the distance between the vertex and the focus of the parabola.)#");
    py::class_<GCE2d_MakeSegment , shared_ptr<GCE2d_MakeSegment> , GCE2d_Root>(m,"GCE2d_MakeSegment",R"#(Implements construction algorithms for a line segment in the plane. The result is a Geom2d_TrimmedCurve curve. A MakeSegment object provides a framework for: - defining the construction of the line segment, - implementing the construction algorithm, and - consulting the results. In particular, the Value function returns the constructed line segment.)#");

};

// user-defined post-inclusion per module

// user-defined post
