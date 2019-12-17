
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <math_Matrix.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <IntPatch_Line.hxx>
#include <GeomInt_IntSS.hxx>
#include <GeomInt_LineConstructor.hxx>
#include <GeomInt_LineTool.hxx>
#include <GeomInt_WLApprox.hxx>
#include <GeomInt_ParameterAndOrientation.hxx>
#include <GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_ThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheImpPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_TheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_TheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <IntPatch_WLine.hxx>
#include <GeomInt_ThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheImpPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <IntPatch_WLine.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <IntPatch_Point.hxx>
#include <IntPatch_WLine.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntPatch_WLine.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <IntPatch_RLine.hxx>
#include <Bnd_Box2d.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_WLine.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <math_Matrix.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <IntPatch_WLine.hxx>

// module includes
#include <GeomInt.hxx>
#include <GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_IntSS.hxx>
#include <GeomInt_LineConstructor.hxx>
#include <GeomInt_LineTool.hxx>
#include <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParameterAndOrientation.hxx>
#include <GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_SequenceOfParameterAndOrientation.hxx>
#include <GeomInt_TheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_TheComputeLineOfWLApprox.hxx>
#include <GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheImpPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_VectorOfReal.hxx>
#include <GeomInt_WLApprox.hxx>

// template related includes
// ./opencascade/GeomInt_VectorOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/GeomInt_SequenceOfParameterAndOrientation.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomInt_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomInt", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox ,std::unique_ptr<GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox>  >(m,"GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheMultiLineToolOfWLApprox ,std::unique_ptr<GeomInt_TheMultiLineToolOfWLApprox>  >(m,"GeomInt_TheMultiLineToolOfWLApprox",R"#(None)#");
    py::class_<GeomInt_LineConstructor ,std::unique_ptr<GeomInt_LineConstructor>  >(m,"GeomInt_LineConstructor",R"#(Splits given Line.)#");
    py::class_<GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox ,std::unique_ptr<GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox>  , math_BFGS >(m,"GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox ,std::unique_ptr<GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox>  , math_BFGS >(m,"GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheMultiLineOfWLApprox ,std::unique_ptr<GeomInt_TheMultiLineOfWLApprox>  >(m,"GeomInt_TheMultiLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ParameterAndOrientation ,std::unique_ptr<GeomInt_ParameterAndOrientation>  >(m,"GeomInt_ParameterAndOrientation",R"#(None)#");
    py::class_<GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox ,std::unique_ptr<GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox>  >(m,"GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ThePrmPrmSvSurfacesOfWLApprox ,std::unique_ptr<GeomInt_ThePrmPrmSvSurfacesOfWLApprox>  >(m,"GeomInt_ThePrmPrmSvSurfacesOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox ,std::unique_ptr<GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox>  , math_FunctionSetWithDerivatives >(m,"GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox",R"#(None)#");
    py::class_<GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox ,std::unique_ptr<GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox>  >(m,"GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox ,std::unique_ptr<GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox>  >(m,"GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox ,std::unique_ptr<GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox>  >(m,"GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheComputeLineBezierOfWLApprox ,std::unique_ptr<GeomInt_TheComputeLineBezierOfWLApprox>  >(m,"GeomInt_TheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheImpPrmSvSurfacesOfWLApprox ,std::unique_ptr<GeomInt_TheImpPrmSvSurfacesOfWLApprox>  >(m,"GeomInt_TheImpPrmSvSurfacesOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox ,std::unique_ptr<GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox>  , math_FunctionSetWithDerivatives >(m,"GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox",R"#(None)#");
    py::class_<GeomInt ,std::unique_ptr<GeomInt>  >(m,"GeomInt",R"#(Provides intersections on between two surfaces of Geom. The result are curves from Geom.)#");
    py::class_<GeomInt_WLApprox ,std::unique_ptr<GeomInt_WLApprox>  >(m,"GeomInt_WLApprox",R"#(None)#");
    py::class_<GeomInt_LineTool ,std::unique_ptr<GeomInt_LineTool>  >(m,"GeomInt_LineTool",R"#(None)#");
    py::class_<GeomInt_IntSS ,std::unique_ptr<GeomInt_IntSS>  >(m,"GeomInt_IntSS",R"#(None)#");
    py::class_<GeomInt_TheComputeLineOfWLApprox ,std::unique_ptr<GeomInt_TheComputeLineOfWLApprox>  >(m,"GeomInt_TheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox ,std::unique_ptr<GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox>  , math_MultipleVarFunctionWithGradient >(m,"GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox ,std::unique_ptr<GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox>  , math_MultipleVarFunctionWithGradient >(m,"GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox ,std::unique_ptr<GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox>  >(m,"GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox ,std::unique_ptr<GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox>  , math_MultipleVarFunctionWithGradient >(m,"GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox ,std::unique_ptr<GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox>  , math_BFGS >(m,"GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_MyGradientbisOfTheComputeLineOfWLApprox ,std::unique_ptr<GeomInt_MyGradientbisOfTheComputeLineOfWLApprox>  >(m,"GeomInt_MyGradientbisOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox ,std::unique_ptr<GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox>  >(m,"GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox ,std::unique_ptr<GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox>  >(m,"GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox",R"#(None)#");

// pre-register typdefs
// ./opencascade/GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx
// ./opencascade/GeomInt_TheMultiLineToolOfWLApprox.hxx
// ./opencascade/GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_LineConstructor.hxx
// ./opencascade/GeomInt.hxx
// ./opencascade/GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_WLApprox.hxx
// ./opencascade/GeomInt_TheMultiLineOfWLApprox.hxx
// ./opencascade/GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx
// ./opencascade/GeomInt_ParameterAndOrientation.hxx
// ./opencascade/GeomInt_LineTool.hxx
// ./opencascade/GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_ThePrmPrmSvSurfacesOfWLApprox.hxx
// ./opencascade/GeomInt_IntSS.hxx
// ./opencascade/GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx
// ./opencascade/GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_TheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_VectorOfReal.hxx
    preregister_template_NCollection_Vector<Standard_Real>(m,"GeomInt_VectorOfReal");  
// ./opencascade/GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_TheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_SequenceOfParameterAndOrientation.hxx
    preregister_template_NCollection_Sequence<GeomInt_ParameterAndOrientation>(m,"GeomInt_SequenceOfParameterAndOrientation");  
// ./opencascade/GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_TheImpPrmSvSurfacesOfWLApprox.hxx

};

// user-defined post-inclusion per module

// user-defined post
