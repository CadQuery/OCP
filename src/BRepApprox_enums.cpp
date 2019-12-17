
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <math_Matrix.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <BRepApprox_ApproxLine.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <BRepApprox_ApproxLine.hxx>
#include <BRepApprox_ApproxLine.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <BRepApprox_ApproxLine.hxx>
#include <BRepApprox_ThePrmPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheImpPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepAdaptor_Surface.hxx>

// module includes
#include <BRepApprox_Approx.hxx>
#include <BRepApprox_ApproxLine.hxx>
#include <BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <BRepApprox_TheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_TheComputeLineOfApprox.hxx>
#include <BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheImpPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ThePrmPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepApprox_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepApprox", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox ,std::unique_ptr<BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox>  , math_FunctionSetWithDerivatives >(m,"BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox",R"#(None)#");
    py::class_<BRepApprox_MyBSplGradientOfTheComputeLineOfApprox ,std::unique_ptr<BRepApprox_MyBSplGradientOfTheComputeLineOfApprox>  >(m,"BRepApprox_MyBSplGradientOfTheComputeLineOfApprox",R"#(None)#");
    py::class_<BRepApprox_TheComputeLineBezierOfApprox ,std::unique_ptr<BRepApprox_TheComputeLineBezierOfApprox>  >(m,"BRepApprox_TheComputeLineBezierOfApprox",R"#(None)#");
    py::class_<BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox ,std::unique_ptr<BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox>  >(m,"BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox",R"#(None)#");
    py::class_<BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox ,std::unique_ptr<BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox>  >(m,"BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox",R"#(None)#");
    py::class_<BRepApprox_MyGradientbisOfTheComputeLineOfApprox ,std::unique_ptr<BRepApprox_MyGradientbisOfTheComputeLineOfApprox>  >(m,"BRepApprox_MyGradientbisOfTheComputeLineOfApprox",R"#(None)#");
    py::class_<BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox ,std::unique_ptr<BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox>  , math_MultipleVarFunctionWithGradient >(m,"BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox",R"#(None)#");
    py::class_<BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox ,std::unique_ptr<BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox>  >(m,"BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox",R"#(None)#");
    py::class_<BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox ,std::unique_ptr<BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox>  , math_BFGS >(m,"BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox",R"#(None)#");
    py::class_<BRepApprox_TheMultiLineOfApprox ,std::unique_ptr<BRepApprox_TheMultiLineOfApprox>  >(m,"BRepApprox_TheMultiLineOfApprox",R"#(None)#");
    py::class_<BRepApprox_Approx ,std::unique_ptr<BRepApprox_Approx>  >(m,"BRepApprox_Approx",R"#(None)#");
    py::class_<BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox ,std::unique_ptr<BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox>  >(m,"BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox",R"#(None)#");
    py::class_<BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox ,std::unique_ptr<BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox>  >(m,"BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox",R"#(None)#");
    py::class_<BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox ,std::unique_ptr<BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox>  , math_MultipleVarFunctionWithGradient >(m,"BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox",R"#(None)#");
    py::class_<BRepApprox_TheMultiLineToolOfApprox ,std::unique_ptr<BRepApprox_TheMultiLineToolOfApprox>  >(m,"BRepApprox_TheMultiLineToolOfApprox",R"#(None)#");
    py::class_<BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox ,std::unique_ptr<BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox>  , math_FunctionSetWithDerivatives >(m,"BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox",R"#(None)#");
    py::class_<BRepApprox_MyGradientOfTheComputeLineBezierOfApprox ,std::unique_ptr<BRepApprox_MyGradientOfTheComputeLineBezierOfApprox>  >(m,"BRepApprox_MyGradientOfTheComputeLineBezierOfApprox",R"#(None)#");
    py::class_<BRepApprox_ThePrmPrmSvSurfacesOfApprox ,std::unique_ptr<BRepApprox_ThePrmPrmSvSurfacesOfApprox>  >(m,"BRepApprox_ThePrmPrmSvSurfacesOfApprox",R"#(None)#");
    py::class_<BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox ,std::unique_ptr<BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox>  , math_BFGS >(m,"BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox",R"#(None)#");
    py::class_<BRepApprox_SurfaceTool ,std::unique_ptr<BRepApprox_SurfaceTool>  >(m,"BRepApprox_SurfaceTool",R"#(None)#");
    py::class_<BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox ,std::unique_ptr<BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox>  , math_BFGS >(m,"BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox",R"#(None)#");
    py::class_<BRepApprox_TheImpPrmSvSurfacesOfApprox ,std::unique_ptr<BRepApprox_TheImpPrmSvSurfacesOfApprox>  >(m,"BRepApprox_TheImpPrmSvSurfacesOfApprox",R"#(None)#");
    py::class_<BRepApprox_ApproxLine ,opencascade::handle<BRepApprox_ApproxLine>  , Standard_Transient >(m,"BRepApprox_ApproxLine",R"#()#");
    py::class_<BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox ,std::unique_ptr<BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox>  , math_MultipleVarFunctionWithGradient >(m,"BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox",R"#(None)#");
    py::class_<BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox ,std::unique_ptr<BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox>  >(m,"BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox",R"#(None)#");
    py::class_<BRepApprox_TheComputeLineOfApprox ,std::unique_ptr<BRepApprox_TheComputeLineOfApprox>  >(m,"BRepApprox_TheComputeLineOfApprox",R"#(None)#");

// pre-register typdefs
// ./opencascade/BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_TheMultiLineToolOfApprox.hxx
// ./opencascade/BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheImpPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_ThePrmPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_TheMultiLineOfApprox.hxx
// ./opencascade/BRepApprox_ApproxLine.hxx
// ./opencascade/BRepApprox_Approx.hxx
// ./opencascade/BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_SurfaceTool.hxx

};

// user-defined post-inclusion per module

// user-defined post
