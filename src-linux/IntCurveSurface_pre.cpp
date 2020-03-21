
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <IntCurveSurface_TheInterferenceOfHInter.hxx>
#include <IntCurveSurface_TheCSFunctionOfHInter.hxx>
#include <IntCurveSurface_TheExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <IntAna_IntConicQuad.hxx>
#include <Bnd_Box.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>

// module includes
#include <IntCurveSurface_HInter.hxx>
#include <IntCurveSurface_Intersection.hxx>
#include <IntCurveSurface_IntersectionPoint.hxx>
#include <IntCurveSurface_IntersectionSegment.hxx>
#include <IntCurveSurface_SequenceOfPnt.hxx>
#include <IntCurveSurface_SequenceOfSeg.hxx>
#include <IntCurveSurface_TheCSFunctionOfHInter.hxx>
#include <IntCurveSurface_TheExactHInter.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <IntCurveSurface_TheInterferenceOfHInter.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <IntCurveSurface_TheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_TransitionOnCurve.hxx>

// template related includes
// ./opencascade/IntCurveSurface_SequenceOfSeg.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntCurveSurface_SequenceOfPnt.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntCurveSurface_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntCurveSurface", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<IntCurveSurface_TransitionOnCurve>(m, "IntCurveSurface_TransitionOnCurve",R"#(\ Uo ^ \ U1 ^ \ | n \ | n Surf ====\======|=== ====\======|=== \ . \ . \ . \ . U1 \ . Uo \ .)#")
        .value("IntCurveSurface_Tangent",IntCurveSurface_TransitionOnCurve::IntCurveSurface_Tangent)
        .value("IntCurveSurface_In",IntCurveSurface_TransitionOnCurve::IntCurveSurface_In)
        .value("IntCurveSurface_Out",IntCurveSurface_TransitionOnCurve::IntCurveSurface_Out).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<IntCurveSurface_IntersectionSegment>(m,"IntCurveSurface_SequenceOfSeg");
    preregister_template_NCollection_Sequence<IntCurveSurface_IntersectionPoint>(m,"IntCurveSurface_SequenceOfPnt");

// classes forward declarations only
    py::class_<IntCurveSurface_Intersection , shared_ptr_nodelete<IntCurveSurface_Intersection> >(m,"IntCurveSurface_Intersection",R"#(None)#");
    py::class_<IntCurveSurface_IntersectionPoint , shared_ptr<IntCurveSurface_IntersectionPoint> >(m,"IntCurveSurface_IntersectionPoint",R"#(Definition of an interserction point between a curve and a surface.)#");
    py::class_<IntCurveSurface_IntersectionSegment , shared_ptr<IntCurveSurface_IntersectionSegment> >(m,"IntCurveSurface_IntersectionSegment",R"#(A IntersectionSegment describes a segment of curve (w1,w2) where distance(C(w),Surface) is less than a given tolerances.)#");
    py::class_<IntCurveSurface_TheCSFunctionOfHInter , shared_ptr<IntCurveSurface_TheCSFunctionOfHInter> , math_FunctionSetWithDerivatives>(m,"IntCurveSurface_TheCSFunctionOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_TheExactHInter , shared_ptr<IntCurveSurface_TheExactHInter> >(m,"IntCurveSurface_TheExactHInter",R"#(None)#");
    py::class_<IntCurveSurface_TheHCurveTool , shared_ptr<IntCurveSurface_TheHCurveTool> >(m,"IntCurveSurface_TheHCurveTool",R"#(None)#");
    py::class_<IntCurveSurface_TheInterferenceOfHInter , shared_ptr<IntCurveSurface_TheInterferenceOfHInter> , Intf_Interference>(m,"IntCurveSurface_TheInterferenceOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_ThePolygonOfHInter , shared_ptr<IntCurveSurface_ThePolygonOfHInter> >(m,"IntCurveSurface_ThePolygonOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_ThePolygonToolOfHInter , shared_ptr<IntCurveSurface_ThePolygonToolOfHInter> >(m,"IntCurveSurface_ThePolygonToolOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_ThePolyhedronOfHInter , shared_ptr<IntCurveSurface_ThePolyhedronOfHInter> >(m,"IntCurveSurface_ThePolyhedronOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_ThePolyhedronToolOfHInter , shared_ptr<IntCurveSurface_ThePolyhedronToolOfHInter> >(m,"IntCurveSurface_ThePolyhedronToolOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_TheQuadCurvExactHInter , shared_ptr<IntCurveSurface_TheQuadCurvExactHInter> >(m,"IntCurveSurface_TheQuadCurvExactHInter",R"#(None)#");
    py::class_<IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter , shared_ptr<IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter> , math_FunctionWithDerivative>(m,"IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter",R"#(None)#");
    py::class_<IntCurveSurface_HInter , shared_ptr<IntCurveSurface_HInter> , IntCurveSurface_Intersection>(m,"IntCurveSurface_HInter",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
