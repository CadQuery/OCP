
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <TopTrans_Array2OfOrientation.hxx>
#include <TopTrans_CurveTransition.hxx>
#include <TopTrans_SurfaceTransition.hxx>

// template related includes
// ./opencascade/TopTrans_Array2OfOrientation.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopTrans_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TopTrans", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array2<TopAbs_Orientation>(m,"TopTrans_Array2OfOrientation");  

// classes forward declarations only
    py::class_<TopTrans_CurveTransition , shared_ptr<TopTrans_CurveTransition>  >(m,"TopTrans_CurveTransition",R"#(This algorithm is used to compute the transition of a Curve intersecting a curvilinear boundary.)#");
    py::class_<TopTrans_SurfaceTransition , shared_ptr<TopTrans_SurfaceTransition>  >(m,"TopTrans_SurfaceTransition",R"#(This algorithm is used to compute the transition of a 3D surface intersecting a topological surfacic boundary on a 3D curve ( intersection curve ). The boundary is described by a set of faces each face is described by - its support surface, - an orientation defining its matter side. The geometric elements are described locally at the intersection point by a second order development. A surface is described by the normal vector, the principal directions and the principal curvatures. A curve is described by the tangent, the normal and the curvature. The algorithm keeps track of the two faces elements closest to the part of the curve "before" and "after" the intersection, these two elements are updated for each new face. The position of the curve can be computed when at least one surface element has been given, this position is "In","Out" or "On" for the part of the curve "Before" or "After" the intersection.)#");

};

// user-defined post-inclusion per module

// user-defined post
