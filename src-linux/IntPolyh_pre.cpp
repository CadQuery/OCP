
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPolyh_Triangle.hxx>
#include <IntPolyh_MaillageAffinage.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPolyh_Triangle.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPolyh_StartPoint.hxx>
#include <IntPolyh_Triangle.hxx>

// module includes
#include <IntPolyh_Array.hxx>
#include <IntPolyh_ArrayOfEdges.hxx>
#include <IntPolyh_ArrayOfPointNormal.hxx>
#include <IntPolyh_ArrayOfPoints.hxx>
#include <IntPolyh_ArrayOfSectionLines.hxx>
#include <IntPolyh_ArrayOfTangentZones.hxx>
#include <IntPolyh_ArrayOfTriangles.hxx>
#include <IntPolyh_Couple.hxx>
#include <IntPolyh_CoupleMapHasher.hxx>
#include <IntPolyh_Edge.hxx>
#include <IntPolyh_Intersection.hxx>
#include <IntPolyh_ListOfCouples.hxx>
#include <IntPolyh_MaillageAffinage.hxx>
#include <IntPolyh_PMaillageAffinage.hxx>
#include <IntPolyh_Point.hxx>
#include <IntPolyh_SectionLine.hxx>
#include <IntPolyh_SeqOfStartPoints.hxx>
#include <IntPolyh_StartPoint.hxx>
#include <IntPolyh_Tools.hxx>
#include <IntPolyh_Triangle.hxx>

// template related includes
// ./opencascade/IntPolyh_ListOfCouples.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntPolyh_SeqOfStartPoints.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntPolyh_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntPolyh", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_List<IntPolyh_Couple>(m,"IntPolyh_ListOfCouples");
    preregister_template_NCollection_Sequence<IntPolyh_StartPoint>(m,"IntPolyh_SeqOfStartPoints");

// classes forward declarations only
    py::class_<IntPolyh_Couple , shared_ptr<IntPolyh_Couple> >(m,"IntPolyh_Couple",R"#(The class represents the couple of indices with additional characteristics such as analyzed flag and an angle. In IntPolyh_MaillageAffinage algorithm the class is used as a couple of interfering triangles with the intersection angle.)#");
    py::class_<IntPolyh_CoupleMapHasher , shared_ptr<IntPolyh_CoupleMapHasher> >(m,"IntPolyh_CoupleMapHasher",R"#(None)#");
    py::class_<IntPolyh_Edge , shared_ptr<IntPolyh_Edge> >(m,"IntPolyh_Edge",R"#(The class represents the edge built between the two IntPolyh points. It is linked to two IntPolyh triangles.)#");
    py::class_<IntPolyh_Intersection , shared_ptr<IntPolyh_Intersection> >(m,"IntPolyh_Intersection",R"#(API algorithm for intersection of two surfaces by intersection of their triangulations.)#");
    py::class_<IntPolyh_MaillageAffinage , shared_ptr<IntPolyh_MaillageAffinage> >(m,"IntPolyh_MaillageAffinage",R"#(Low-level algorithm to compute intersection of the surfaces by computing the intersection of their triangulations.)#");
    py::class_<IntPolyh_Point , shared_ptr<IntPolyh_Point> >(m,"IntPolyh_Point",R"#(The class represents the point on the surface with both 3D and 2D points.)#");
    py::class_<IntPolyh_PointNormal , shared_ptr<IntPolyh_PointNormal> >(m,"IntPolyh_PointNormal",R"#(Auxiliary structure to represent pair of point and normal vector in this point on the surface.)#");
    py::class_<IntPolyh_SectionLine , shared_ptr<IntPolyh_SectionLine> >(m,"IntPolyh_SectionLine",R"#(None)#");
    py::class_<IntPolyh_StartPoint , shared_ptr<IntPolyh_StartPoint> >(m,"IntPolyh_StartPoint",R"#(None)#");
    py::class_<IntPolyh_Tools , shared_ptr<IntPolyh_Tools> >(m,"IntPolyh_Tools",R"#(The class provides tools for surface sampling.)#");
    py::class_<IntPolyh_Triangle , shared_ptr<IntPolyh_Triangle> >(m,"IntPolyh_Triangle",R"#(The class represents the triangle built from three IntPolyh points and three IntPolyh edges.)#");

};

// user-defined post-inclusion per module

// user-defined post
