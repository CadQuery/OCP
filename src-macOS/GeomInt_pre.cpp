
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <IntPatch_WLine.hxx>
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
#include <GeomAdaptor_HSurface.hxx>
#include <IntPatch_RLine.hxx>
#include <Bnd_Box2d.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_WLine.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
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
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <IntPatch_WLine.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntPatch_WLine.hxx>
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
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <IntPatch_Point.hxx>
#include <IntPatch_WLine.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
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
#include <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <IntPatch_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <math_Matrix.hxx>

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
#include "NCollection_tmpl.hxx"
// ./opencascade/GeomInt_SequenceOfParameterAndOrientation.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomInt_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomInt", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Vector<Standard_Real>(m,"GeomInt_VectorOfReal");
    preregister_template_NCollection_Sequence<GeomInt_ParameterAndOrientation>(m,"GeomInt_SequenceOfParameterAndOrientation");

// classes forward declarations only
    py::class_<GeomInt , shared_ptr<GeomInt> >(m,"GeomInt",R"#(Provides intersections on between two surfaces of Geom. The result are curves from Geom.)#");
    py::class_<GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox> , math_BFGS>(m,"GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox> , math_MultipleVarFunctionWithGradient>(m,"GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox> >(m,"GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox> , math_BFGS>(m,"GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox> , math_BFGS>(m,"GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_IntSS , shared_ptr<GeomInt_IntSS> >(m,"GeomInt_IntSS",R"#(None)#");
    py::class_<GeomInt_LineConstructor , shared_ptr<GeomInt_LineConstructor> >(m,"GeomInt_LineConstructor",R"#(Splits given Line.)#");
    py::class_<GeomInt_LineTool , shared_ptr<GeomInt_LineTool> >(m,"GeomInt_LineTool",R"#(None)#");
    py::class_<GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox> >(m,"GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox> >(m,"GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_MyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_MyGradientbisOfTheComputeLineOfWLApprox> >(m,"GeomInt_MyGradientbisOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox> , math_MultipleVarFunctionWithGradient>(m,"GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox> , math_MultipleVarFunctionWithGradient>(m,"GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox> >(m,"GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox> >(m,"GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ParameterAndOrientation , shared_ptr<GeomInt_ParameterAndOrientation> >(m,"GeomInt_ParameterAndOrientation",R"#(None)#");
    py::class_<GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox> >(m,"GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox> >(m,"GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_TheComputeLineBezierOfWLApprox> >(m,"GeomInt_TheComputeLineBezierOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheComputeLineOfWLApprox , shared_ptr<GeomInt_TheComputeLineOfWLApprox> >(m,"GeomInt_TheComputeLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox> , math_FunctionSetWithDerivatives>(m,"GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheImpPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_TheImpPrmSvSurfacesOfWLApprox> >(m,"GeomInt_TheImpPrmSvSurfacesOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox> >(m,"GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheMultiLineOfWLApprox , shared_ptr<GeomInt_TheMultiLineOfWLApprox> >(m,"GeomInt_TheMultiLineOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheMultiLineToolOfWLApprox , shared_ptr<GeomInt_TheMultiLineToolOfWLApprox> >(m,"GeomInt_TheMultiLineToolOfWLApprox",R"#(None)#");
    py::class_<GeomInt_ThePrmPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_ThePrmPrmSvSurfacesOfWLApprox> >(m,"GeomInt_ThePrmPrmSvSurfacesOfWLApprox",R"#(None)#");
    py::class_<GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox> , math_FunctionSetWithDerivatives>(m,"GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox",R"#(None)#");
    py::class_<GeomInt_WLApprox , shared_ptr<GeomInt_WLApprox> >(m,"GeomInt_WLApprox",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
