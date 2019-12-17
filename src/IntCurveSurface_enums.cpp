
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <gp_Pnt.hxx>
#include <gp_XYZ.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <gp_Pnt.hxx>
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
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>

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
#include "NCollection.hxx"
// ./opencascade/IntCurveSurface_SequenceOfPnt.hxx
#include "NCollection.hxx"


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

// classes forward declarations only
    py::class_<IntCurveSurface_Intersection ,std::unique_ptr<IntCurveSurface_Intersection, py::nodelete>  >(m,"IntCurveSurface_Intersection",R"#(None)#");
    py::class_<IntCurveSurface_TheExactHInter ,std::unique_ptr<IntCurveSurface_TheExactHInter>  >(m,"IntCurveSurface_TheExactHInter",R"#(None)#");
    py::class_<IntCurveSurface_TheInterferenceOfHInter ,std::unique_ptr<IntCurveSurface_TheInterferenceOfHInter>  , Intf_Interference >(m,"IntCurveSurface_TheInterferenceOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_ThePolyhedronOfHInter ,std::unique_ptr<IntCurveSurface_ThePolyhedronOfHInter>  >(m,"IntCurveSurface_ThePolyhedronOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_IntersectionSegment ,std::unique_ptr<IntCurveSurface_IntersectionSegment>  >(m,"IntCurveSurface_IntersectionSegment",R"#(A IntersectionSegment describes a segment of curve (w1,w2) where distance(C(w),Surface) is less than a given tolerances.)#");
    py::class_<IntCurveSurface_HInter ,std::unique_ptr<IntCurveSurface_HInter>  , IntCurveSurface_Intersection >(m,"IntCurveSurface_HInter",R"#(None)#");
    py::class_<IntCurveSurface_IntersectionPoint ,std::unique_ptr<IntCurveSurface_IntersectionPoint>  >(m,"IntCurveSurface_IntersectionPoint",R"#(Definition of an interserction point between a curve and a surface.)#");
    py::class_<IntCurveSurface_ThePolygonOfHInter ,std::unique_ptr<IntCurveSurface_ThePolygonOfHInter>  >(m,"IntCurveSurface_ThePolygonOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_ThePolygonToolOfHInter ,std::unique_ptr<IntCurveSurface_ThePolygonToolOfHInter>  >(m,"IntCurveSurface_ThePolygonToolOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter ,std::unique_ptr<IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter>  , math_FunctionWithDerivative >(m,"IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter",R"#(None)#");
    py::class_<IntCurveSurface_TheQuadCurvExactHInter ,std::unique_ptr<IntCurveSurface_TheQuadCurvExactHInter>  >(m,"IntCurveSurface_TheQuadCurvExactHInter",R"#(None)#");
    py::class_<IntCurveSurface_TheHCurveTool ,std::unique_ptr<IntCurveSurface_TheHCurveTool>  >(m,"IntCurveSurface_TheHCurveTool",R"#(None)#");
    py::class_<IntCurveSurface_TheCSFunctionOfHInter ,std::unique_ptr<IntCurveSurface_TheCSFunctionOfHInter>  , math_FunctionSetWithDerivatives >(m,"IntCurveSurface_TheCSFunctionOfHInter",R"#(None)#");
    py::class_<IntCurveSurface_ThePolyhedronToolOfHInter ,std::unique_ptr<IntCurveSurface_ThePolyhedronToolOfHInter>  >(m,"IntCurveSurface_ThePolyhedronToolOfHInter",R"#(None)#");

// pre-register typdefs
// ./opencascade/IntCurveSurface_SequenceOfSeg.hxx
    preregister_template_NCollection_Sequence<IntCurveSurface_IntersectionSegment>(m,"IntCurveSurface_SequenceOfSeg");  
// ./opencascade/IntCurveSurface_TheExactHInter.hxx
// ./opencascade/IntCurveSurface_ThePolygonToolOfHInter.hxx
// ./opencascade/IntCurveSurface_TheInterferenceOfHInter.hxx
// ./opencascade/IntCurveSurface_TheHCurveTool.hxx
// ./opencascade/IntCurveSurface_ThePolyhedronOfHInter.hxx
// ./opencascade/IntCurveSurface_Intersection.hxx
// ./opencascade/IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx
// ./opencascade/IntCurveSurface_TransitionOnCurve.hxx
// ./opencascade/IntCurveSurface_IntersectionSegment.hxx
// ./opencascade/IntCurveSurface_SequenceOfPnt.hxx
    preregister_template_NCollection_Sequence<IntCurveSurface_IntersectionPoint>(m,"IntCurveSurface_SequenceOfPnt");  
// ./opencascade/IntCurveSurface_ThePolyhedronToolOfHInter.hxx
// ./opencascade/IntCurveSurface_HInter.hxx
// ./opencascade/IntCurveSurface_TheQuadCurvExactHInter.hxx
// ./opencascade/IntCurveSurface_IntersectionPoint.hxx
// ./opencascade/IntCurveSurface_TheCSFunctionOfHInter.hxx
// ./opencascade/IntCurveSurface_ThePolygonOfHInter.hxx

};

// user-defined post-inclusion per module

// user-defined post
