
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Sphere.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <gp_Lin.hxx>
#include <gp_Torus.hxx>
#include <gp_Cylinder.hxx>
#include <IntAna_Quadric.hxx>
#include <gp_Cone.hxx>
#include <gp_Pln.hxx>
#include <gp_Lin.hxx>
#include <IntAna_Quadric.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <gp_Pln.hxx>
#include <gp_Pln.hxx>
#include <gp_Sphere.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Ax3.hxx>

// module includes
#include <IntAna_Curve.hxx>
#include <IntAna_Int3Pln.hxx>
#include <IntAna_IntConicQuad.hxx>
#include <IntAna_IntLinTorus.hxx>
#include <IntAna_IntQuadQuad.hxx>
#include <IntAna_ListIteratorOfListOfCurve.hxx>
#include <IntAna_ListOfCurve.hxx>
#include <IntAna_QuadQuadGeo.hxx>
#include <IntAna_Quadric.hxx>
#include <IntAna_ResultType.hxx>

// template related includes
// ./opencascade/IntAna_ListOfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/IntAna_ListOfCurve.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntAna_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntAna", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<IntAna_ResultType>(m, "IntAna_ResultType",R"#(None)#")
        .value("IntAna_Point",IntAna_ResultType::IntAna_Point)
        .value("IntAna_Line",IntAna_ResultType::IntAna_Line)
        .value("IntAna_Circle",IntAna_ResultType::IntAna_Circle)
        .value("IntAna_PointAndCircle",IntAna_ResultType::IntAna_PointAndCircle)
        .value("IntAna_Ellipse",IntAna_ResultType::IntAna_Ellipse)
        .value("IntAna_Parabola",IntAna_ResultType::IntAna_Parabola)
        .value("IntAna_Hyperbola",IntAna_ResultType::IntAna_Hyperbola)
        .value("IntAna_Empty",IntAna_ResultType::IntAna_Empty)
        .value("IntAna_Same",IntAna_ResultType::IntAna_Same)
        .value("IntAna_NoGeometricSolution",IntAna_ResultType::IntAna_NoGeometricSolution).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<IntAna_Curve ,std::unique_ptr<IntAna_Curve>  >(m,"IntAna_Curve",R"#(Definition of a parametric Curve which is the result of the intersection between two quadrics.)#");
    py::class_<IntAna_IntLinTorus ,std::unique_ptr<IntAna_IntLinTorus>  >(m,"IntAna_IntLinTorus",R"#(Intersection between a line and a torus.)#");
    py::class_<IntAna_Int3Pln ,std::unique_ptr<IntAna_Int3Pln>  >(m,"IntAna_Int3Pln",R"#(Intersection between 3 planes. The algorithm searches for an intersection point. If two of the planes are parallel or identical, IsEmpty returns TRUE.)#");
    py::class_<IntAna_Quadric ,std::unique_ptr<IntAna_Quadric>  >(m,"IntAna_Quadric",R"#(This class provides a description of Quadrics by their Coefficients in natural coordinate system.)#");
    py::class_<IntAna_QuadQuadGeo ,std::unique_ptr<IntAna_QuadQuadGeo>  >(m,"IntAna_QuadQuadGeo",R"#(Geometric intersections between two natural quadrics (Sphere , Cylinder , Cone , Pln from gp). The possible intersections are : - 1 point - 1 or 2 line(s) - 1 Point and 1 Line - 1 circle - 1 ellipse - 1 parabola - 1 or 2 hyperbola(s). - Empty : there is no intersection between the two quadrics. - Same : the quadrics are identical - NoGeometricSolution : there may be an intersection, but it is necessary to use an analytic algorithm to determine it. See class IntQuadQuad from IntAna.)#");
    py::class_<IntAna_IntConicQuad ,std::unique_ptr<IntAna_IntConicQuad>  >(m,"IntAna_IntConicQuad",R"#(This class provides the analytic intersection between a conic defined as an element of gp (Lin,Circ,Elips, Parab,Hypr) and a quadric as defined in the class Quadric from IntAna. The intersection between a conic and a plane is treated as a special case.)#");
    py::class_<IntAna_IntQuadQuad ,std::unique_ptr<IntAna_IntQuadQuad>  >(m,"IntAna_IntQuadQuad",R"#(This class provides the analytic intersection between a cylinder or a cone from gp and another quadric, as defined in the class Quadric from IntAna. This algorithm is used when the geometric intersection (class QuadQuadGeo from IntAna) returns no geometric solution. The result of the intersection may be - Curves as defined in the class Curve from IntAna - Points (Pnt from gp))#");

// pre-register typdefs
// ./opencascade/IntAna_ListIteratorOfListOfCurve.hxx
// ./opencascade/IntAna_Curve.hxx
// ./opencascade/IntAna_ListOfCurve.hxx
    preregister_template_NCollection_List<IntAna_Curve>(m,"IntAna_ListOfCurve");  
// ./opencascade/IntAna_QuadQuadGeo.hxx
// ./opencascade/IntAna_ResultType.hxx
// ./opencascade/IntAna_IntLinTorus.hxx
// ./opencascade/IntAna_IntQuadQuad.hxx
// ./opencascade/IntAna_Int3Pln.hxx
// ./opencascade/IntAna_IntConicQuad.hxx
// ./opencascade/IntAna_Quadric.hxx

};

// user-defined post-inclusion per module

// user-defined post
