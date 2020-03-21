
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <IntPatch_Line.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
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
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntPatch_WLine.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <IntPatch_WLine.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
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
#include <AppParCurves_MultiCurve.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <math_Matrix.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <IntPatch_Point.hxx>
#include <IntPatch_WLine.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <IntPatch_RLine.hxx>
#include <Bnd_Box2d.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_WLine.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <math_Matrix.hxx>
#include <IntPatch_WLine.hxx>
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
// ./opencascade\GeomInt_VectorOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\GeomInt_SequenceOfParameterAndOrientation.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomInt(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomInt"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<GeomInt , shared_ptr<GeomInt>>(m,"GeomInt");

    static_cast<py::class_<GeomInt , shared_ptr<GeomInt> >>(m.attr("GeomInt"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("AdjustPeriodic_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & , const Standard_Real ) >(&GeomInt::AdjustPeriodic),
                    R"#(Adjusts the parameter <thePar> to the range [theParMin, theParMax])#"  , py::arg("thePar"),  py::arg("theParMin"),  py::arg("theParMax"),  py::arg("thePeriod"),  py::arg("theNewPar"),  py::arg("theOffset"),  py::arg("theEps")=static_cast<const Standard_Real>(0.0))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox> , math_BFGS>>(m.attr("GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox"))
    // constructors
        .def(py::init< math_MultipleVarFunctionWithGradient &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("StartingPoint"),  py::arg("Tolerance3d"),  py::arg("Tolerance2d"),  py::arg("Eps"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
    // custom constructors
    // methods
        .def("IsSolutionReached",
             (Standard_Boolean (GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( math_MultipleVarFunctionWithGradient & ) const>(&GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox> , math_MultipleVarFunctionWithGradient>>(m.attr("GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("NbPol") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , Standard_Real & ) >(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , math_Vector & ) >(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Vector & (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (AppParCurves_MultiBSpCurve (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() ) static_cast<AppParCurves_MultiBSpCurve (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() >(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::CurveValue),
             R"#(returns the MultiBSpCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Real (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer ) >(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiBSpCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiBSpCurve.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::FunctionMatrix),
             R"#(returns the function matrix used to approximate the multiline.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the multiline.)#" )
        .def("Index",
             (const math_IntegerVector & (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_IntegerVector & (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::Index),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
        .def("SetFirstLambda",
             (void (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const Standard_Real ) ) static_cast<void (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const Standard_Real ) >(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::SetFirstLambda),
             R"#(None)#"  , py::arg("l1"))
        .def("SetLastLambda",
             (void (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const Standard_Real ) ) static_cast<void (GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const Standard_Real ) >(&GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox::SetLastLambda),
             R"#(None)#"  , py::arg("l2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox> >>(m.attr("GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & ) ) static_cast<void (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & ) >(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) >(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() ) static_cast<AppParCurves_MultiCurve (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() >(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() >(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("Distance",
             (const math_Matrix & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() ) static_cast<const math_Matrix & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() >(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("FirstLambda",
             (Standard_Real (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_IntegerVector & (GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
    // methods using call by reference i.s.o. return
        .def("ErrorGradient",
             []( GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox &self , math_Vector & Grad ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.ErrorGradient(Grad,F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"))
        .def("Error",
             []( GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox &self   ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.Error(F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox> , math_BFGS>>(m.attr("GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox"))
    // constructors
        .def(py::init< math_MultipleVarFunctionWithGradient &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("StartingPoint"),  py::arg("Tolerance3d"),  py::arg("Tolerance2d"),  py::arg("Eps"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
    // custom constructors
    // methods
        .def("IsSolutionReached",
             (Standard_Boolean (GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( math_MultipleVarFunctionWithGradient & ) const>(&GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox> , math_BFGS>>(m.attr("GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox"))
    // constructors
        .def(py::init< math_MultipleVarFunctionWithGradient &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("StartingPoint"),  py::arg("Tolerance3d"),  py::arg("Tolerance2d"),  py::arg("Eps"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
    // custom constructors
    // methods
        .def("IsSolutionReached",
             (Standard_Boolean (GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox::*)( math_MultipleVarFunctionWithGradient & ) const>(&GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_IntSS , shared_ptr<GeomInt_IntSS> >>(m.attr("GeomInt_IntSS"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("S1"),  py::arg("S2"),  py::arg("Tol"),  py::arg("Approx")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxS1")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ApproxS2")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Perform",
             (void (GeomInt_IntSS::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (GeomInt_IntSS::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&GeomInt_IntSS::Perform),
             R"#(general intersection of two surfaces)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("Tol"),  py::arg("Approx")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxS1")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ApproxS2")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (GeomInt_IntSS::*)( const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (GeomInt_IntSS::*)( const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&GeomInt_IntSS::Perform),
             R"#(intersection of adapted surfaces)#"  , py::arg("HS1"),  py::arg("HS2"),  py::arg("Tol"),  py::arg("Approx")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxS1")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ApproxS2")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (GeomInt_IntSS::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (GeomInt_IntSS::*)( const opencascade::handle<Geom_Surface> & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&GeomInt_IntSS::Perform),
             R"#(general intersection using a starting point)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("Tol"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Approx")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxS1")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ApproxS2")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (GeomInt_IntSS::*)( const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (GeomInt_IntSS::*)( const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&GeomInt_IntSS::Perform),
             R"#(intersection of adapted surfaces using a starting point)#"  , py::arg("HS1"),  py::arg("HS2"),  py::arg("Tol"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Approx")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxS1")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ApproxS2")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (GeomInt_IntSS::*)() const) static_cast<Standard_Boolean (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::IsDone),
             R"#(None)#" )
        .def("TolReached3d",
             (Standard_Real (GeomInt_IntSS::*)() const) static_cast<Standard_Real (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::TolReached3d),
             R"#(None)#" )
        .def("TolReached2d",
             (Standard_Real (GeomInt_IntSS::*)() const) static_cast<Standard_Real (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::TolReached2d),
             R"#(None)#" )
        .def("NbLines",
             (Standard_Integer (GeomInt_IntSS::*)() const) static_cast<Standard_Integer (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::NbLines),
             R"#(None)#" )
        .def("Line",
             (const opencascade::handle<Geom_Curve> & (GeomInt_IntSS::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (GeomInt_IntSS::*)( const Standard_Integer ) const>(&GeomInt_IntSS::Line),
             R"#(None)#"  , py::arg("Index"))
        .def("HasLineOnS1",
             (Standard_Boolean (GeomInt_IntSS::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (GeomInt_IntSS::*)( const Standard_Integer ) const>(&GeomInt_IntSS::HasLineOnS1),
             R"#(None)#"  , py::arg("Index"))
        .def("LineOnS1",
             (const opencascade::handle<Geom2d_Curve> & (GeomInt_IntSS::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (GeomInt_IntSS::*)( const Standard_Integer ) const>(&GeomInt_IntSS::LineOnS1),
             R"#(None)#"  , py::arg("Index"))
        .def("HasLineOnS2",
             (Standard_Boolean (GeomInt_IntSS::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (GeomInt_IntSS::*)( const Standard_Integer ) const>(&GeomInt_IntSS::HasLineOnS2),
             R"#(None)#"  , py::arg("Index"))
        .def("LineOnS2",
             (const opencascade::handle<Geom2d_Curve> & (GeomInt_IntSS::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (GeomInt_IntSS::*)( const Standard_Integer ) const>(&GeomInt_IntSS::LineOnS2),
             R"#(None)#"  , py::arg("Index"))
        .def("NbBoundaries",
             (Standard_Integer (GeomInt_IntSS::*)() const) static_cast<Standard_Integer (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::NbBoundaries),
             R"#(None)#" )
        .def("Boundary",
             (const opencascade::handle<Geom_Curve> & (GeomInt_IntSS::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Geom_Curve> & (GeomInt_IntSS::*)( const Standard_Integer ) const>(&GeomInt_IntSS::Boundary),
             R"#(None)#"  , py::arg("Index"))
        .def("NbPoints",
             (Standard_Integer (GeomInt_IntSS::*)() const) static_cast<Standard_Integer (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::NbPoints),
             R"#(None)#" )
        .def("Point",
             (gp_Pnt (GeomInt_IntSS::*)( const Standard_Integer ) const) static_cast<gp_Pnt (GeomInt_IntSS::*)( const Standard_Integer ) const>(&GeomInt_IntSS::Point),
             R"#(None)#"  , py::arg("Index"))
        .def("Pnt2d",
             (gp_Pnt2d (GeomInt_IntSS::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<gp_Pnt2d (GeomInt_IntSS::*)( const Standard_Integer , const Standard_Boolean ) const>(&GeomInt_IntSS::Pnt2d),
             R"#(None)#"  , py::arg("Index"),  py::arg("OnFirst"))
        .def("Perform",
             (void (GeomInt_IntSS::*)( const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (GeomInt_IntSS::*)( const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&GeomInt_IntSS::Perform),
             R"#(intersection of adapted surfaces)#"  , py::arg("HS1"),  py::arg("HS2"),  py::arg("Tol"),  py::arg("Approx"),  py::arg("ApproxS1"),  py::arg("ApproxS2"))
        .def("Perform",
             (void (GeomInt_IntSS::*)( const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (GeomInt_IntSS::*)( const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&GeomInt_IntSS::Perform),
             R"#(intersection of adapted surfaces using a starting point)#"  , py::arg("HS1"),  py::arg("HS2"),  py::arg("Tol"),  py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"),  py::arg("Approx"),  py::arg("ApproxS1"),  py::arg("ApproxS2"))
        .def("IsDone",
             (Standard_Boolean (GeomInt_IntSS::*)() const) static_cast<Standard_Boolean (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::IsDone),
             R"#(None)#" )
        .def("TolReached2d",
             (Standard_Real (GeomInt_IntSS::*)() const) static_cast<Standard_Real (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::TolReached2d),
             R"#(None)#" )
        .def("TolReached3d",
             (Standard_Real (GeomInt_IntSS::*)() const) static_cast<Standard_Real (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::TolReached3d),
             R"#(None)#" )
        .def("NbLines",
             (Standard_Integer (GeomInt_IntSS::*)() const) static_cast<Standard_Integer (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::NbLines),
             R"#(None)#" )
        .def("NbBoundaries",
             (Standard_Integer (GeomInt_IntSS::*)() const) static_cast<Standard_Integer (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::NbBoundaries),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (GeomInt_IntSS::*)() const) static_cast<Standard_Integer (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::NbPoints),
             R"#(None)#" )
        .def("Point",
             (gp_Pnt (GeomInt_IntSS::*)( const Standard_Integer ) const) static_cast<gp_Pnt (GeomInt_IntSS::*)( const Standard_Integer ) const>(&GeomInt_IntSS::Point),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("TrimILineOnSurfBoundaries_s",
                    (void (*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const Bnd_Box2d & , const Bnd_Box2d & , NCollection_Vector<Standard_Real> & ) ) static_cast<void (*)( const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const Bnd_Box2d & , const Bnd_Box2d & , NCollection_Vector<Standard_Real> & ) >(&GeomInt_IntSS::TrimILineOnSurfBoundaries),
                    R"#(puts into theArrayOfParameters the parameters of intersection points of given theC2d1 and theC2d2 curves with the boundaries of the source surface.)#"  , py::arg("theC2d1"),  py::arg("theC2d2"),  py::arg("theBound1"),  py::arg("theBound2"),  py::arg("theArrayOfParameters"))
        .def_static("MakeBSpline_s",
                    (opencascade::handle<Geom_Curve> (*)( const opencascade::handle<IntPatch_WLine> & , const Standard_Integer , const Standard_Integer ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const opencascade::handle<IntPatch_WLine> & , const Standard_Integer , const Standard_Integer ) >(&GeomInt_IntSS::MakeBSpline),
                    R"#(None)#"  , py::arg("WL"),  py::arg("ideb"),  py::arg("ifin"))
        .def_static("MakeBSpline2d_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<IntPatch_WLine> & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<IntPatch_WLine> & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&GeomInt_IntSS::MakeBSpline2d),
                    R"#(None)#"  , py::arg("theWLine"),  py::arg("ideb"),  py::arg("ifin"),  py::arg("onFirst"))
    // static methods using call by reference i.s.o. return
        .def_static("TreatRLine_s",
                    []( const opencascade::handle<IntPatch_RLine> & theRL,const opencascade::handle<GeomAdaptor_HSurface> & theHS1,const opencascade::handle<GeomAdaptor_HSurface> & theHS2,opencascade::handle<Geom_Curve> & theC3d,opencascade::handle<Geom2d_Curve> & theC2d1,opencascade::handle<Geom2d_Curve> & theC2d2 ){ Standard_Real  theTolReached; GeomInt_IntSS::TreatRLine(theRL,theHS1,theHS2,theC3d,theC2d1,theC2d2,theTolReached); return std::make_tuple(theTolReached); },
                    R"#(converts RLine to Geom(2d)_Curve.)#"  , py::arg("theRL"),  py::arg("theHS1"),  py::arg("theHS2"),  py::arg("theC3d"),  py::arg("theC2d1"),  py::arg("theC2d2"))
        .def_static("BuildPCurves_s",
                    []( const Standard_Real f,const Standard_Real l,const opencascade::handle<Geom_Surface> & S,const opencascade::handle<Geom_Curve> & C,opencascade::handle<Geom2d_Curve> & C2d ){ Standard_Real  Tol; GeomInt_IntSS::BuildPCurves(f,l,Tol,S,C,C2d); return std::make_tuple(Tol); },
                    R"#(creates 2D-curve on given surface from given 3D-curve)#"  , py::arg("f"),  py::arg("l"),  py::arg("S"),  py::arg("C"),  py::arg("C2d"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_LineConstructor , shared_ptr<GeomInt_LineConstructor> >>(m.attr("GeomInt_LineConstructor"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Load",
             (void (GeomInt_LineConstructor::*)( const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & ) ) static_cast<void (GeomInt_LineConstructor::*)( const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & ) >(&GeomInt_LineConstructor::Load),
             R"#(Initializes me by two surfaces and corresponding tools which represent boundaries of surfaces)#"  , py::arg("D1"),  py::arg("D2"),  py::arg("S1"),  py::arg("S2"))
        .def("Perform",
             (void (GeomInt_LineConstructor::*)( const opencascade::handle<IntPatch_Line> & ) ) static_cast<void (GeomInt_LineConstructor::*)( const opencascade::handle<IntPatch_Line> & ) >(&GeomInt_LineConstructor::Perform),
             R"#(Splits line)#"  , py::arg("L"))
        .def("IsDone",
             (Standard_Boolean (GeomInt_LineConstructor::*)() const) static_cast<Standard_Boolean (GeomInt_LineConstructor::*)() const>(&GeomInt_LineConstructor::IsDone),
             R"#(Returns True if splitting was successful)#" )
        .def("NbParts",
             (Standard_Integer (GeomInt_LineConstructor::*)() const) static_cast<Standard_Integer (GeomInt_LineConstructor::*)() const>(&GeomInt_LineConstructor::NbParts),
             R"#(Returns number of splits)#" )
        .def("Load",
             (void (GeomInt_LineConstructor::*)( const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & ) ) static_cast<void (GeomInt_LineConstructor::*)( const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<Adaptor3d_TopolTool> & , const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & ) >(&GeomInt_LineConstructor::Load),
             R"#(Initializes me by two surfaces and corresponding tools which represent boundaries of surfaces)#"  , py::arg("D1"),  py::arg("D2"),  py::arg("S1"),  py::arg("S2"))
        .def("IsDone",
             (Standard_Boolean (GeomInt_LineConstructor::*)() const) static_cast<Standard_Boolean (GeomInt_LineConstructor::*)() const>(&GeomInt_LineConstructor::IsDone),
             R"#(Returns True if splitting was successful)#" )
        .def("NbParts",
             (Standard_Integer (GeomInt_LineConstructor::*)() const) static_cast<Standard_Integer (GeomInt_LineConstructor::*)() const>(&GeomInt_LineConstructor::NbParts),
             R"#(Returns number of splits)#" )
    // methods using call by reference i.s.o. return
        .def("Part",
             []( GeomInt_LineConstructor &self , const Standard_Integer I ){ Standard_Real  WFirst; Standard_Real  WLast; self.Part(I,WFirst,WLast); return std::make_tuple(WFirst,WLast); },
             R"#(Return first and last parameters for given index of split)#"  , py::arg("I"))
        .def("Part",
             []( GeomInt_LineConstructor &self , const Standard_Integer I ){ Standard_Real  WFirst; Standard_Real  WLast; self.Part(I,WFirst,WLast); return std::make_tuple(WFirst,WLast); },
             R"#(Return first and last parameters for given index of split)#"  , py::arg("I"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<GeomInt_LineTool , shared_ptr<GeomInt_LineTool>>(m,"GeomInt_LineTool");

    static_cast<py::class_<GeomInt_LineTool , shared_ptr<GeomInt_LineTool> >>(m.attr("GeomInt_LineTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NbVertex_s",
                    (Standard_Integer (*)( const opencascade::handle<IntPatch_Line> & ) ) static_cast<Standard_Integer (*)( const opencascade::handle<IntPatch_Line> & ) >(&GeomInt_LineTool::NbVertex),
                    R"#(None)#"  , py::arg("L"))
        .def_static("Vertex_s",
                    (const IntPatch_Point & (*)( const opencascade::handle<IntPatch_Line> & , const Standard_Integer ) ) static_cast<const IntPatch_Point & (*)( const opencascade::handle<IntPatch_Line> & , const Standard_Integer ) >(&GeomInt_LineTool::Vertex),
                    R"#(None)#"  , py::arg("L"),  py::arg("I"))
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const opencascade::handle<IntPatch_Line> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<IntPatch_Line> & ) >(&GeomInt_LineTool::FirstParameter),
                    R"#(None)#"  , py::arg("L"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const opencascade::handle<IntPatch_Line> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<IntPatch_Line> & ) >(&GeomInt_LineTool::LastParameter),
                    R"#(None)#"  , py::arg("L"))
        .def_static("DecompositionOfWLine_s",
                    (Standard_Boolean (*)( const opencascade::handle<IntPatch_WLine> & , const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const GeomInt_LineConstructor & , NCollection_Sequence<opencascade::handle<IntPatch_Line> > & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IntPatch_WLine> & , const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const GeomInt_LineConstructor & , NCollection_Sequence<opencascade::handle<IntPatch_Line> > & ) >(&GeomInt_LineTool::DecompositionOfWLine),
                    R"#(None)#"  , py::arg("theWLine"),  py::arg("theSurface1"),  py::arg("theSurface2"),  py::arg("aTolSum"),  py::arg("theLConstructor"),  py::arg("theNewLines"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox> >>(m.attr("GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(1) )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations"),  py::arg("lambda1"),  py::arg("lambda2") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (AppParCurves_MultiBSpCurve (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<AppParCurves_MultiBSpCurve (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::Value),
             R"#(returns all the BSpline curves approximating the MultiLine SSP after minimization of the parameter.)#" )
        .def("Error",
             (Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)( const Standard_Integer ) const) static_cast<Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)( const Standard_Integer ) const>(&GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::Error),
             R"#(returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.)#"  , py::arg("Index"))
        .def("MaxError3d",
             (Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::MaxError3d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("MaxError2d",
             (Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::MaxError2d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("AverageError",
             (Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::AverageError),
             R"#(returns the average error between the old and the new approximation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox> >>(m.attr("GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (AppParCurves_MultiCurve (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<AppParCurves_MultiCurve (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::Value),
             R"#(returns all the Bezier curves approximating the MultiLine SSP after minimization of the parameter.)#" )
        .def("Error",
             (Standard_Real (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)( const Standard_Integer ) const) static_cast<Standard_Real (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)( const Standard_Integer ) const>(&GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::Error),
             R"#(returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.)#"  , py::arg("Index"))
        .def("MaxError3d",
             (Standard_Real (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::MaxError3d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("MaxError2d",
             (Standard_Real (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::MaxError2d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("AverageError",
             (Standard_Real (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox::AverageError),
             R"#(returns the average error between the old and the new approximation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_MyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_MyGradientbisOfTheComputeLineOfWLApprox> >>(m.attr("GeomInt_MyGradientbisOfTheComputeLineOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (AppParCurves_MultiCurve (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<AppParCurves_MultiCurve (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::Value),
             R"#(returns all the Bezier curves approximating the MultiLine SSP after minimization of the parameter.)#" )
        .def("Error",
             (Standard_Real (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)( const Standard_Integer ) const) static_cast<Standard_Real (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)( const Standard_Integer ) const>(&GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::Error),
             R"#(returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.)#"  , py::arg("Index"))
        .def("MaxError3d",
             (Standard_Real (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::MaxError3d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("MaxError2d",
             (Standard_Real (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::MaxError2d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("AverageError",
             (Standard_Real (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_MyGradientbisOfTheComputeLineOfWLApprox::AverageError),
             R"#(returns the average error between the old and the new approximation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox> , math_MultipleVarFunctionWithGradient>>(m.attr("GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , Standard_Real & ) >(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , math_Vector & ) >(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<const math_Vector & (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (const AppParCurves_MultiCurve & (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() ) static_cast<const AppParCurves_MultiCurve & (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() >(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::CurveValue),
             R"#(returns the MultiCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const Standard_Integer , const Standard_Integer ) const>(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox> , math_MultipleVarFunctionWithGradient>>(m.attr("GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , Standard_Real & ) >(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , math_Vector & ) >(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Vector & (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (const AppParCurves_MultiCurve & (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)() ) static_cast<const AppParCurves_MultiCurve & (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)() >(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::CurveValue),
             R"#(returns the MultiCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer ) const>(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox> >>(m.attr("GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & ) ) static_cast<void (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & ) >(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) >(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() ) static_cast<AppParCurves_MultiCurve (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() >(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() >(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("Distance",
             (const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() ) static_cast<const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() >(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("FirstLambda",
             (Standard_Real (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<const math_IntegerVector & (GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
    // methods using call by reference i.s.o. return
        .def("ErrorGradient",
             []( GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox &self , math_Vector & Grad ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.ErrorGradient(Grad,F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"))
        .def("Error",
             []( GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox &self   ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.Error(F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox> >>(m.attr("GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & ) ) static_cast<void (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & ) >(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) >(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() ) static_cast<AppParCurves_MultiCurve (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() >(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() >(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("Distance",
             (const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() ) static_cast<const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() >(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("FirstLambda",
             (Standard_Real (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_IntegerVector & (GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
    // methods using call by reference i.s.o. return
        .def("ErrorGradient",
             []( GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox &self , math_Vector & Grad ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.ErrorGradient(Grad,F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"))
        .def("Error",
             []( GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox &self   ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.Error(F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ParameterAndOrientation , shared_ptr<GeomInt_ParameterAndOrientation> >>(m.attr("GeomInt_ParameterAndOrientation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const TopAbs_Orientation,const TopAbs_Orientation >()  , py::arg("P"),  py::arg("Or1"),  py::arg("Or2") )
    // custom constructors
    // methods
        .def("SetOrientation1",
             (void (GeomInt_ParameterAndOrientation::*)( const TopAbs_Orientation ) ) static_cast<void (GeomInt_ParameterAndOrientation::*)( const TopAbs_Orientation ) >(&GeomInt_ParameterAndOrientation::SetOrientation1),
             R"#(None)#"  , py::arg("Or"))
        .def("SetOrientation2",
             (void (GeomInt_ParameterAndOrientation::*)( const TopAbs_Orientation ) ) static_cast<void (GeomInt_ParameterAndOrientation::*)( const TopAbs_Orientation ) >(&GeomInt_ParameterAndOrientation::SetOrientation2),
             R"#(None)#"  , py::arg("Or"))
        .def("Parameter",
             (Standard_Real (GeomInt_ParameterAndOrientation::*)() const) static_cast<Standard_Real (GeomInt_ParameterAndOrientation::*)() const>(&GeomInt_ParameterAndOrientation::Parameter),
             R"#(None)#" )
        .def("Orientation1",
             (TopAbs_Orientation (GeomInt_ParameterAndOrientation::*)() const) static_cast<TopAbs_Orientation (GeomInt_ParameterAndOrientation::*)() const>(&GeomInt_ParameterAndOrientation::Orientation1),
             R"#(None)#" )
        .def("Orientation2",
             (TopAbs_Orientation (GeomInt_ParameterAndOrientation::*)() const) static_cast<TopAbs_Orientation (GeomInt_ParameterAndOrientation::*)() const>(&GeomInt_ParameterAndOrientation::Orientation2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox> >>(m.attr("GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,AppParCurves_MultiCurve &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Matrix &,const math_Matrix &,const Standard_Real >()  , py::arg("SSP"),  py::arg("SCurv"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("Constraints"),  py::arg("Bern"),  py::arg("DerivativeBern"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("ConstraintMatrix",
             (const math_Matrix & (GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::ConstraintMatrix),
             R"#(None)#" )
        .def("Duale",
             (const math_Vector & (GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<const math_Vector & (GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::Duale),
             R"#(returns the duale variables of the system.)#" )
        .def("ConstraintDerivative",
             (const math_Matrix & (GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const GeomInt_TheMultiLineOfWLApprox & , const math_Vector & , const Standard_Integer , const math_Matrix & ) ) static_cast<const math_Matrix & (GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::*)( const GeomInt_TheMultiLineOfWLApprox & , const math_Vector & , const Standard_Integer , const math_Matrix & ) >(&GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::ConstraintDerivative),
             R"#(Returns the derivative of the constraint matrix.)#"  , py::arg("SSP"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("DA"))
        .def("InverseMatrix",
             (const math_Matrix & (GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox::InverseMatrix),
             R"#(returns the Inverse of Cont*Transposed(Cont), where Cont is the constraint matrix for the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox> >>(m.attr("GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,AppParCurves_MultiCurve &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Matrix &,const math_Matrix &,const Standard_Real >()  , py::arg("SSP"),  py::arg("SCurv"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("Constraints"),  py::arg("Bern"),  py::arg("DerivativeBern"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("ConstraintMatrix",
             (const math_Matrix & (GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::ConstraintMatrix),
             R"#(None)#" )
        .def("Duale",
             (const math_Vector & (GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Vector & (GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::Duale),
             R"#(returns the duale variables of the system.)#" )
        .def("ConstraintDerivative",
             (const math_Matrix & (GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const GeomInt_TheMultiLineOfWLApprox & , const math_Vector & , const Standard_Integer , const math_Matrix & ) ) static_cast<const math_Matrix & (GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::*)( const GeomInt_TheMultiLineOfWLApprox & , const math_Vector & , const Standard_Integer , const math_Matrix & ) >(&GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::ConstraintDerivative),
             R"#(Returns the derivative of the constraint matrix.)#"  , py::arg("SSP"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("DA"))
        .def("InverseMatrix",
             (const math_Matrix & (GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const) static_cast<const math_Matrix & (GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::*)() const>(&GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox::InverseMatrix),
             R"#(returns the Inverse of Cont*Transposed(Cont), where Cont is the constraint matrix for the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_TheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_TheComputeLineBezierOfWLApprox> >>(m.attr("GeomInt_TheComputeLineBezierOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("Line"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-3),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-6),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Line"),  py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Init",
             (void (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType , const Standard_Boolean ) ) static_cast<void (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType , const Standard_Boolean ) >(&GeomInt_TheComputeLineBezierOfWLApprox::Init),
             R"#(Initializes the fields of the algorithm.)#"  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (GeomInt_TheComputeLineBezierOfWLApprox::*)( const GeomInt_TheMultiLineOfWLApprox & ) ) static_cast<void (GeomInt_TheComputeLineBezierOfWLApprox::*)( const GeomInt_TheMultiLineOfWLApprox & ) >(&GeomInt_TheComputeLineBezierOfWLApprox::Perform),
             R"#(runs the algorithm after having initialized the fields.)#"  , py::arg("Line"))
        .def("SetDegrees",
             (void (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Integer , const Standard_Integer ) >(&GeomInt_TheComputeLineBezierOfWLApprox::SetDegrees),
             R"#(changes the degrees of the approximation.)#"  , py::arg("degreemin"),  py::arg("degreemax"))
        .def("SetTolerances",
             (void (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Real , const Standard_Real ) >(&GeomInt_TheComputeLineBezierOfWLApprox::SetTolerances),
             R"#(Changes the tolerances of the approximation.)#"  , py::arg("Tolerance3d"),  py::arg("Tolerance2d"))
        .def("SetConstraints",
             (void (GeomInt_TheComputeLineBezierOfWLApprox::*)( const AppParCurves_Constraint , const AppParCurves_Constraint ) ) static_cast<void (GeomInt_TheComputeLineBezierOfWLApprox::*)( const AppParCurves_Constraint , const AppParCurves_Constraint ) >(&GeomInt_TheComputeLineBezierOfWLApprox::SetConstraints),
             R"#(changes the first and the last constraint points.)#"  , py::arg("firstC"),  py::arg("lastC"))
        .def("IsAllApproximated",
             (Standard_Boolean (GeomInt_TheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_TheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_TheComputeLineBezierOfWLApprox::IsAllApproximated),
             R"#(returns False if at a moment of the approximation, the status NoApproximation has been sent by the user when more points were needed.)#" )
        .def("IsToleranceReached",
             (Standard_Boolean (GeomInt_TheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_TheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_TheComputeLineBezierOfWLApprox::IsToleranceReached),
             R"#(returns False if the status NoPointsAdded has been sent.)#" )
        .def("NbMultiCurves",
             (Standard_Integer (GeomInt_TheComputeLineBezierOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_TheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_TheComputeLineBezierOfWLApprox::NbMultiCurves),
             R"#(Returns the number of MultiCurve doing the approximation of the MultiLine.)#" )
        .def("Value",
             (const AppParCurves_MultiCurve & (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Integer ) const) static_cast<const AppParCurves_MultiCurve & (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Integer ) const>(&GeomInt_TheComputeLineBezierOfWLApprox::Value),
             R"#(returns the result of the approximation.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
        .def("ChangeValue",
             (AppParCurves_MultiCurve & (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Integer ) ) static_cast<AppParCurves_MultiCurve & (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Integer ) >(&GeomInt_TheComputeLineBezierOfWLApprox::ChangeValue),
             R"#(returns the result of the approximation.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
        .def("SplineValue",
             (const AppParCurves_MultiBSpCurve & (GeomInt_TheComputeLineBezierOfWLApprox::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (GeomInt_TheComputeLineBezierOfWLApprox::*)() >(&GeomInt_TheComputeLineBezierOfWLApprox::SplineValue),
             R"#(returns the result of the approximation.)#" )
        .def("Parametrization",
             (Approx_ParametrizationType (GeomInt_TheComputeLineBezierOfWLApprox::*)() const) static_cast<Approx_ParametrizationType (GeomInt_TheComputeLineBezierOfWLApprox::*)() const>(&GeomInt_TheComputeLineBezierOfWLApprox::Parametrization),
             R"#(returns the type of parametrization)#" )
        .def("Parameters",
             (const TColStd_Array1OfReal & (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Integer ) const) static_cast<const TColStd_Array1OfReal & (GeomInt_TheComputeLineBezierOfWLApprox::*)( const Standard_Integer ) const>(&GeomInt_TheComputeLineBezierOfWLApprox::Parameters),
             R"#(returns the new parameters of the approximation corresponding to the points of the multicurve <Index>.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
    // methods using call by reference i.s.o. return
        .def("Error",
             []( GeomInt_TheComputeLineBezierOfWLApprox &self , const Standard_Integer Index ){ Standard_Real  tol3d; Standard_Real  tol2d; self.Error(Index,tol3d,tol2d); return std::make_tuple(tol3d,tol2d); },
             R"#(returns the tolerances 2d and 3d of the <Index> MultiCurve.)#"  , py::arg("Index"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_TheComputeLineOfWLApprox , shared_ptr<GeomInt_TheComputeLineOfWLApprox> >>(m.attr("GeomInt_TheComputeLineOfWLApprox"))
    // constructors
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("Line"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-3),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-6),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const GeomInt_TheMultiLineOfWLApprox &,const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Line"),  py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Interpol",
             (void (GeomInt_TheComputeLineOfWLApprox::*)( const GeomInt_TheMultiLineOfWLApprox & ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)( const GeomInt_TheMultiLineOfWLApprox & ) >(&GeomInt_TheComputeLineOfWLApprox::Interpol),
             R"#(Constructs an interpolation of the MultiLine <Line> The result will be a C2 curve of degree 3.)#"  , py::arg("Line"))
        .def("Init",
             (void (GeomInt_TheComputeLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType , const Standard_Boolean ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType , const Standard_Boolean ) >(&GeomInt_TheComputeLineOfWLApprox::Init),
             R"#(Initializes the fields of the algorithm.)#"  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (GeomInt_TheComputeLineOfWLApprox::*)( const GeomInt_TheMultiLineOfWLApprox & ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)( const GeomInt_TheMultiLineOfWLApprox & ) >(&GeomInt_TheComputeLineOfWLApprox::Perform),
             R"#(runs the algorithm after having initialized the fields.)#"  , py::arg("Line"))
        .def("SetParameters",
             (void (GeomInt_TheComputeLineOfWLApprox::*)( const math_Vector & ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)( const math_Vector & ) >(&GeomInt_TheComputeLineOfWLApprox::SetParameters),
             R"#(The approximation will begin with the set of parameters <ThePar>.)#"  , py::arg("ThePar"))
        .def("SetKnots",
             (void (GeomInt_TheComputeLineOfWLApprox::*)(  const NCollection_Array1<Standard_Real> & ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)(  const NCollection_Array1<Standard_Real> & ) >(&GeomInt_TheComputeLineOfWLApprox::SetKnots),
             R"#(The approximation will be done with the set of knots <Knots>. The multiplicities will be set with the degree and the desired continuity.)#"  , py::arg("Knots"))
        .def("SetKnotsAndMultiplicities",
             (void (GeomInt_TheComputeLineOfWLApprox::*)(  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)(  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & ) >(&GeomInt_TheComputeLineOfWLApprox::SetKnotsAndMultiplicities),
             R"#(The approximation will be done with the set of knots <Knots> and the multiplicities <Mults>.)#"  , py::arg("Knots"),  py::arg("Mults"))
        .def("SetDegrees",
             (void (GeomInt_TheComputeLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer ) >(&GeomInt_TheComputeLineOfWLApprox::SetDegrees),
             R"#(changes the degrees of the approximation.)#"  , py::arg("degreemin"),  py::arg("degreemax"))
        .def("SetTolerances",
             (void (GeomInt_TheComputeLineOfWLApprox::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)( const Standard_Real , const Standard_Real ) >(&GeomInt_TheComputeLineOfWLApprox::SetTolerances),
             R"#(Changes the tolerances of the approximation.)#"  , py::arg("Tolerance3d"),  py::arg("Tolerance2d"))
        .def("SetContinuity",
             (void (GeomInt_TheComputeLineOfWLApprox::*)( const Standard_Integer ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)( const Standard_Integer ) >(&GeomInt_TheComputeLineOfWLApprox::SetContinuity),
             R"#(sets the continuity of the spline. if C = 2, the spline will be C2.)#"  , py::arg("C"))
        .def("SetConstraints",
             (void (GeomInt_TheComputeLineOfWLApprox::*)( const AppParCurves_Constraint , const AppParCurves_Constraint ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)( const AppParCurves_Constraint , const AppParCurves_Constraint ) >(&GeomInt_TheComputeLineOfWLApprox::SetConstraints),
             R"#(changes the first and the last constraint points.)#"  , py::arg("firstC"),  py::arg("lastC"))
        .def("SetPeriodic",
             (void (GeomInt_TheComputeLineOfWLApprox::*)( const Standard_Boolean ) ) static_cast<void (GeomInt_TheComputeLineOfWLApprox::*)( const Standard_Boolean ) >(&GeomInt_TheComputeLineOfWLApprox::SetPeriodic),
             R"#(Sets periodic flag. If thePeriodic = Standard_True, algorith tries to build periodic multicurve using corresponding C1 boundary condition for first and last multipoints. Multiline must be closed.)#"  , py::arg("thePeriodic"))
        .def("IsAllApproximated",
             (Standard_Boolean (GeomInt_TheComputeLineOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_TheComputeLineOfWLApprox::*)() const>(&GeomInt_TheComputeLineOfWLApprox::IsAllApproximated),
             R"#(returns False if at a moment of the approximation, the status NoApproximation has been sent by the user when more points were needed.)#" )
        .def("IsToleranceReached",
             (Standard_Boolean (GeomInt_TheComputeLineOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_TheComputeLineOfWLApprox::*)() const>(&GeomInt_TheComputeLineOfWLApprox::IsToleranceReached),
             R"#(returns False if the status NoPointsAdded has been sent.)#" )
        .def("Value",
             (const AppParCurves_MultiBSpCurve & (GeomInt_TheComputeLineOfWLApprox::*)() const) static_cast<const AppParCurves_MultiBSpCurve & (GeomInt_TheComputeLineOfWLApprox::*)() const>(&GeomInt_TheComputeLineOfWLApprox::Value),
             R"#(returns the result of the approximation.)#" )
        .def("ChangeValue",
             (AppParCurves_MultiBSpCurve & (GeomInt_TheComputeLineOfWLApprox::*)() ) static_cast<AppParCurves_MultiBSpCurve & (GeomInt_TheComputeLineOfWLApprox::*)() >(&GeomInt_TheComputeLineOfWLApprox::ChangeValue),
             R"#(returns the result of the approximation.)#" )
        .def("Parameters",
             (const TColStd_Array1OfReal & (GeomInt_TheComputeLineOfWLApprox::*)() const) static_cast<const TColStd_Array1OfReal & (GeomInt_TheComputeLineOfWLApprox::*)() const>(&GeomInt_TheComputeLineOfWLApprox::Parameters),
             R"#(returns the new parameters of the approximation corresponding to the points of the MultiBSpCurve.)#" )
    // methods using call by reference i.s.o. return
        .def("Error",
             []( GeomInt_TheComputeLineOfWLApprox &self   ){ Standard_Real  tol3d; Standard_Real  tol2d; self.Error(tol3d,tol2d); return std::make_tuple(tol3d,tol2d); },
             R"#(returns the tolerances 2d and 3d of the MultiBSpCurve.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox> , math_FunctionSetWithDerivatives>>(m.attr("GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("S1"),  py::arg("S2") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Vector & ) >(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Matrix & ) >(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Derivatives),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("ComputeParameters",
             (void (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)( const IntImp_ConstIsoparametric ,  const NCollection_Array1<Standard_Real> & , math_Vector & , math_Vector & , math_Vector & , math_Vector & ) ) static_cast<void (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)( const IntImp_ConstIsoparametric ,  const NCollection_Array1<Standard_Real> & , math_Vector & , math_Vector & , math_Vector & , math_Vector & ) >(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::ComputeParameters),
             R"#(None)#"  , py::arg("ChoixIso"),  py::arg("Param"),  py::arg("UVap"),  py::arg("BornInf"),  py::arg("BornSup"),  py::arg("Tolerance"))
        .def("Root",
             (Standard_Real (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Root),
             R"#(returns somme des fi*fi)#" )
        .def("Point",
             (gp_Pnt (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<gp_Pnt (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Point),
             R"#(None)#" )
        .def("IsTangent",
             (Standard_Boolean (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)( const math_Vector & , NCollection_Array1<Standard_Real> & , IntImp_ConstIsoparametric & ) ) static_cast<Standard_Boolean (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)( const math_Vector & , NCollection_Array1<Standard_Real> & , IntImp_ConstIsoparametric & ) >(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::IsTangent),
             R"#(None)#"  , py::arg("UVap"),  py::arg("Param"),  py::arg("BestChoix"))
        .def("Direction",
             (gp_Dir (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<gp_Dir (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Direction),
             R"#(None)#" )
        .def("DirectionOnS1",
             (gp_Dir2d (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<gp_Dir2d (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::DirectionOnS1),
             R"#(None)#" )
        .def("DirectionOnS2",
             (gp_Dir2d (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<gp_Dir2d (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::DirectionOnS2),
             R"#(None)#" )
        .def("AuxillarSurface1",
             (const opencascade::handle<Adaptor3d_HSurface> & (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::AuxillarSurface1),
             R"#(None)#" )
        .def("AuxillarSurface2",
             (const opencascade::handle<Adaptor3d_HSurface> & (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::AuxillarSurface2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_TheImpPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_TheImpPrmSvSurfacesOfWLApprox> >>(m.attr("GeomInt_TheImpPrmSvSurfacesOfWLApprox"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const IntSurf_Quadric & >()  , py::arg("Surf1"),  py::arg("Surf2") )
        .def(py::init< const IntSurf_Quadric &,const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("Surf1"),  py::arg("Surf2") )
    // custom constructors
    // methods
        .def("Compute",
             (Standard_Boolean (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<Standard_Boolean (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec2d & , gp_Vec2d & ) >(&GeomInt_TheImpPrmSvSurfacesOfWLApprox::Compute),
             R"#(returns True if Tg,Tguv1 Tguv2 can be computed.)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Pt"),  py::arg("Tg"),  py::arg("Tguv1"),  py::arg("Tguv2"))
        .def("Pnt",
             (void (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Pnt & ) ) static_cast<void (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Pnt & ) >(&GeomInt_TheImpPrmSvSurfacesOfWLApprox::Pnt),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("P"))
        .def("SeekPoint",
             (Standard_Boolean (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , IntSurf_PntOn2S & ) ) static_cast<Standard_Boolean (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , IntSurf_PntOn2S & ) >(&GeomInt_TheImpPrmSvSurfacesOfWLApprox::SeekPoint),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Point"))
        .def("Tangency",
             (Standard_Boolean (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec & ) ) static_cast<Standard_Boolean (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec & ) >(&GeomInt_TheImpPrmSvSurfacesOfWLApprox::Tangency),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
        .def("TangencyOnSurf1",
             (Standard_Boolean (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) ) static_cast<Standard_Boolean (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) >(&GeomInt_TheImpPrmSvSurfacesOfWLApprox::TangencyOnSurf1),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
        .def("TangencyOnSurf2",
             (Standard_Boolean (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) ) static_cast<Standard_Boolean (GeomInt_TheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) >(&GeomInt_TheImpPrmSvSurfacesOfWLApprox::TangencyOnSurf2),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox> >>(m.attr("GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox"))
    // constructors
        .def(py::init<  const NCollection_Array1<Standard_Real> &,const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("Param"),  py::arg("S1"),  py::arg("S2"),  py::arg("TolTangency") )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> &,const Standard_Real >()  , py::arg("S1"),  py::arg("S2"),  py::arg("TolTangency") )
    // custom constructors
    // methods
        .def("Perform",
             (IntImp_ConstIsoparametric (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)(  const NCollection_Array1<Standard_Real> & , math_FunctionSetRoot & ) ) static_cast<IntImp_ConstIsoparametric (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)(  const NCollection_Array1<Standard_Real> & , math_FunctionSetRoot & ) >(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Perform),
             R"#(returns the best constant isoparametric to find the next intersection's point +stores the solution point (the solution point is found with the close point to intersect the isoparametric with the other patch; the choice of the isoparametic is calculated))#"  , py::arg("Param"),  py::arg("Rsnld"))
        .def("Perform",
             (IntImp_ConstIsoparametric (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)(  const NCollection_Array1<Standard_Real> & , math_FunctionSetRoot & , const IntImp_ConstIsoparametric ) ) static_cast<IntImp_ConstIsoparametric (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)(  const NCollection_Array1<Standard_Real> & , math_FunctionSetRoot & , const IntImp_ConstIsoparametric ) >(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Perform),
             R"#(returns the best constant isoparametric to find the next intersection's point +stores the solution point (the solution point is found with the close point to intersect the isoparametric with the other patch; the choice of the isoparametic is given by ChoixIso))#"  , py::arg("Param"),  py::arg("Rsnld"),  py::arg("ChoixIso"))
        .def("IsDone",
             (Standard_Boolean (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::IsDone),
             R"#(Returns TRUE if the creation completed without failure.)#" )
        .def("IsEmpty",
             (Standard_Boolean (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::IsEmpty),
             R"#(Returns TRUE when there is no solution to the problem.)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<const IntSurf_PntOn2S & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Point),
             R"#(Returns the intersection point.)#" )
        .def("IsTangent",
             (Standard_Boolean (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::IsTangent),
             R"#(Returns True if the surfaces are tangent at the intersection point.)#" )
        .def("Direction",
             (const gp_Dir & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<const gp_Dir & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Direction),
             R"#(Returns the tangent at the intersection line.)#" )
        .def("DirectionOnS1",
             (const gp_Dir2d & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<const gp_Dir2d & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::DirectionOnS1),
             R"#(Returns the tangent at the intersection line in the parametric space of the first surface.)#" )
        .def("DirectionOnS2",
             (const gp_Dir2d & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<const gp_Dir2d & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::DirectionOnS2),
             R"#(Returns the tangent at the intersection line in the parametric space of the second surface.)#" )
        .def("Function",
             (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() ) static_cast<GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() >(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Function),
             R"#(return the math function which is used to compute the intersection)#" )
        .def("ChangePoint",
             (IntSurf_PntOn2S & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() ) static_cast<IntSurf_PntOn2S & (GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() >(&GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox::ChangePoint),
             R"#(return the intersection point which is enable for changing.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_TheMultiLineOfWLApprox , shared_ptr<GeomInt_TheMultiLineOfWLApprox> >>(m.attr("GeomInt_TheMultiLineOfWLApprox"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<IntPatch_WLine> &,const Standard_Address,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Integer,const Standard_Integer >()  , py::arg("line"),  py::arg("PtrSvSurfaces"),  py::arg("NbP3d"),  py::arg("NbP2d"),  py::arg("ApproxU1V1"),  py::arg("ApproxU2V2"),  py::arg("xo"),  py::arg("yo"),  py::arg("zo"),  py::arg("u1o"),  py::arg("v1o"),  py::arg("u2o"),  py::arg("v2o"),  py::arg("P2DOnFirst"),  py::arg("IndMin")=static_cast<const Standard_Integer>(0),  py::arg("IndMax")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const opencascade::handle<IntPatch_WLine> &,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Integer,const Standard_Integer >()  , py::arg("line"),  py::arg("NbP3d"),  py::arg("NbP2d"),  py::arg("ApproxU1V1"),  py::arg("ApproxU2V2"),  py::arg("xo"),  py::arg("yo"),  py::arg("zo"),  py::arg("u1o"),  py::arg("v1o"),  py::arg("u2o"),  py::arg("v2o"),  py::arg("P2DOnFirst"),  py::arg("IndMin")=static_cast<const Standard_Integer>(0),  py::arg("IndMax")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("FirstPoint",
             (Standard_Integer (GeomInt_TheMultiLineOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_TheMultiLineOfWLApprox::*)() const>(&GeomInt_TheMultiLineOfWLApprox::FirstPoint),
             R"#(None)#" )
        .def("LastPoint",
             (Standard_Integer (GeomInt_TheMultiLineOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_TheMultiLineOfWLApprox::*)() const>(&GeomInt_TheMultiLineOfWLApprox::LastPoint),
             R"#(None)#" )
        .def("NbP2d",
             (Standard_Integer (GeomInt_TheMultiLineOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_TheMultiLineOfWLApprox::*)() const>(&GeomInt_TheMultiLineOfWLApprox::NbP2d),
             R"#(Returns the number of 2d points of a TheLine.)#" )
        .def("NbP3d",
             (Standard_Integer (GeomInt_TheMultiLineOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_TheMultiLineOfWLApprox::*)() const>(&GeomInt_TheMultiLineOfWLApprox::NbP3d),
             R"#(Returns the number of 3d points of a TheLine.)#" )
        .def("WhatStatus",
             (Approx_Status (GeomInt_TheMultiLineOfWLApprox::*)() const) static_cast<Approx_Status (GeomInt_TheMultiLineOfWLApprox::*)() const>(&GeomInt_TheMultiLineOfWLApprox::WhatStatus),
             R"#(None)#" )
        .def("Value",
             (void (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt> & ) const) static_cast<void (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt> & ) const>(&GeomInt_TheMultiLineOfWLApprox::Value),
             R"#(Returns the 3d points of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("MPointIndex"),  py::arg("tabPt"))
        .def("Value",
             (void (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & ) const) static_cast<void (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & ) const>(&GeomInt_TheMultiLineOfWLApprox::Value),
             R"#(Returns the 2d points of the multipoint <MPointIndex> when only 2d points exist.)#"  , py::arg("MPointIndex"),  py::arg("tabPt2d"))
        .def("Value",
             (void (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & ) const) static_cast<void (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & ) const>(&GeomInt_TheMultiLineOfWLApprox::Value),
             R"#(returns the 3d and 2d points of the multipoint <MPointIndex>.)#"  , py::arg("MPointIndex"),  py::arg("tabPt"),  py::arg("tabPt2d"))
        .def("Tangency",
             (Standard_Boolean (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec> & ) const) static_cast<Standard_Boolean (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec> & ) const>(&GeomInt_TheMultiLineOfWLApprox::Tangency),
             R"#(Returns the 3d tangency points of the multipoint <MPointIndex> only when 3d points exist.)#"  , py::arg("MPointIndex"),  py::arg("tabV"))
        .def("Tangency",
             (Standard_Boolean (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) const) static_cast<Standard_Boolean (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) const>(&GeomInt_TheMultiLineOfWLApprox::Tangency),
             R"#(Returns the 2d tangency points of the multipoint <MPointIndex> only when 2d points exist.)#"  , py::arg("MPointIndex"),  py::arg("tabV2d"))
        .def("Tangency",
             (Standard_Boolean (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) const) static_cast<Standard_Boolean (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) const>(&GeomInt_TheMultiLineOfWLApprox::Tangency),
             R"#(Returns the 3d and 2d points of the multipoint <MPointIndex>.)#"  , py::arg("MPointIndex"),  py::arg("tabV"),  py::arg("tabV2d"))
        .def("MakeMLBetween",
             (GeomInt_TheMultiLineOfWLApprox (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const) static_cast<GeomInt_TheMultiLineOfWLApprox (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const>(&GeomInt_TheMultiLineOfWLApprox::MakeMLBetween),
             R"#(Tries to make a sub-line between <Low> and <High> points of this line by adding <NbPointsToInsert> new points)#"  , py::arg("Low"),  py::arg("High"),  py::arg("NbPointsToInsert"))
        .def("MakeMLOneMorePoint",
             (Standard_Boolean (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , GeomInt_TheMultiLineOfWLApprox & ) const) static_cast<Standard_Boolean (GeomInt_TheMultiLineOfWLApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , GeomInt_TheMultiLineOfWLApprox & ) const>(&GeomInt_TheMultiLineOfWLApprox::MakeMLOneMorePoint),
             R"#(Tries to make a sub-line between <Low> and <High> points of this line by adding one more point between (indbad-1)-th and indbad-th points)#"  , py::arg("Low"),  py::arg("High"),  py::arg("indbad"),  py::arg("OtherLine"))
        .def("Dump",
             (void (GeomInt_TheMultiLineOfWLApprox::*)() const) static_cast<void (GeomInt_TheMultiLineOfWLApprox::*)() const>(&GeomInt_TheMultiLineOfWLApprox::Dump),
             R"#(Dump of the current multi-line.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<GeomInt_TheMultiLineToolOfWLApprox , shared_ptr<GeomInt_TheMultiLineToolOfWLApprox>>(m,"GeomInt_TheMultiLineToolOfWLApprox");

    static_cast<py::class_<GeomInt_TheMultiLineToolOfWLApprox , shared_ptr<GeomInt_TheMultiLineToolOfWLApprox> >>(m.attr("GeomInt_TheMultiLineToolOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstPoint_s",
                    (Standard_Integer (*)( const GeomInt_TheMultiLineOfWLApprox & ) ) static_cast<Standard_Integer (*)( const GeomInt_TheMultiLineOfWLApprox & ) >(&GeomInt_TheMultiLineToolOfWLApprox::FirstPoint),
                    R"#(Returns the number of multipoints of the TheMultiLine.)#"  , py::arg("ML"))
        .def_static("LastPoint_s",
                    (Standard_Integer (*)( const GeomInt_TheMultiLineOfWLApprox & ) ) static_cast<Standard_Integer (*)( const GeomInt_TheMultiLineOfWLApprox & ) >(&GeomInt_TheMultiLineToolOfWLApprox::LastPoint),
                    R"#(Returns the number of multipoints of the TheMultiLine.)#"  , py::arg("ML"))
        .def_static("NbP2d_s",
                    (Standard_Integer (*)( const GeomInt_TheMultiLineOfWLApprox & ) ) static_cast<Standard_Integer (*)( const GeomInt_TheMultiLineOfWLApprox & ) >(&GeomInt_TheMultiLineToolOfWLApprox::NbP2d),
                    R"#(Returns the number of 2d points of a TheMultiLine.)#"  , py::arg("ML"))
        .def_static("NbP3d_s",
                    (Standard_Integer (*)( const GeomInt_TheMultiLineOfWLApprox & ) ) static_cast<Standard_Integer (*)( const GeomInt_TheMultiLineOfWLApprox & ) >(&GeomInt_TheMultiLineToolOfWLApprox::NbP3d),
                    R"#(Returns the number of 3d points of a TheMultiLine.)#"  , py::arg("ML"))
        .def_static("Value_s",
                    (void (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt> & ) ) static_cast<void (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt> & ) >(&GeomInt_TheMultiLineToolOfWLApprox::Value),
                    R"#(returns the 3d points of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabPt"))
        .def_static("Value_s",
                    (void (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt2d> & ) ) static_cast<void (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt2d> & ) >(&GeomInt_TheMultiLineToolOfWLApprox::Value),
                    R"#(returns the 2d points of the multipoint <MPointIndex> when only 2d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabPt2d"))
        .def_static("Value_s",
                    (void (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & ) ) static_cast<void (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & ) >(&GeomInt_TheMultiLineToolOfWLApprox::Value),
                    R"#(returns the 3d and 2d points of the multipoint <MPointIndex>.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabPt"),  py::arg("tabPt2d"))
        .def_static("Tangency_s",
                    (Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & ) ) static_cast<Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & ) >(&GeomInt_TheMultiLineToolOfWLApprox::Tangency),
                    R"#(returns the 3d points of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"))
        .def_static("Tangency_s",
                    (Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) >(&GeomInt_TheMultiLineToolOfWLApprox::Tangency),
                    R"#(returns the 2d tangency points of the multipoint <MPointIndex> only when 2d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV2d"))
        .def_static("Tangency_s",
                    (Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) >(&GeomInt_TheMultiLineToolOfWLApprox::Tangency),
                    R"#(returns the 3d and 2d points of the multipoint <MPointIndex>.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"),  py::arg("tabV2d"))
        .def_static("Curvature_s",
                    (Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & ) ) static_cast<Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & ) >(&GeomInt_TheMultiLineToolOfWLApprox::Curvature),
                    R"#(returns the 3d curvature of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"))
        .def_static("Curvature_s",
                    (Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) >(&GeomInt_TheMultiLineToolOfWLApprox::Curvature),
                    R"#(returns the 2d curvature points of the multipoint <MPointIndex> only when 2d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV2d"))
        .def_static("Curvature_s",
                    (Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) >(&GeomInt_TheMultiLineToolOfWLApprox::Curvature),
                    R"#(returns the 3d and 2d curvature of the multipoint <MPointIndex>.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"),  py::arg("tabV2d"))
        .def_static("MakeMLBetween_s",
                    (GeomInt_TheMultiLineOfWLApprox (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<GeomInt_TheMultiLineOfWLApprox (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&GeomInt_TheMultiLineToolOfWLApprox::MakeMLBetween),
                    R"#(Is called if WhatStatus returned "PointsAdded".)#"  , py::arg("ML"),  py::arg("I1"),  py::arg("I2"),  py::arg("NbPMin"))
        .def_static("MakeMLOneMorePoint_s",
                    (Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , const Standard_Integer , const Standard_Integer , GeomInt_TheMultiLineOfWLApprox & ) ) static_cast<Standard_Boolean (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , const Standard_Integer , const Standard_Integer , GeomInt_TheMultiLineOfWLApprox & ) >(&GeomInt_TheMultiLineToolOfWLApprox::MakeMLOneMorePoint),
                    R"#(Is called when the Bezier curve contains a loop)#"  , py::arg("ML"),  py::arg("I1"),  py::arg("I2"),  py::arg("indbad"),  py::arg("OtherLine"))
        .def_static("WhatStatus_s",
                    (Approx_Status (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , const Standard_Integer ) ) static_cast<Approx_Status (*)( const GeomInt_TheMultiLineOfWLApprox & , const Standard_Integer , const Standard_Integer ) >(&GeomInt_TheMultiLineToolOfWLApprox::WhatStatus),
                    R"#(None)#"  , py::arg("ML"),  py::arg("I1"),  py::arg("I2"))
        .def_static("Dump_s",
                    (void (*)( const GeomInt_TheMultiLineOfWLApprox & ) ) static_cast<void (*)( const GeomInt_TheMultiLineOfWLApprox & ) >(&GeomInt_TheMultiLineToolOfWLApprox::Dump),
                    R"#(Dump of the current multi-line.)#"  , py::arg("ML"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ThePrmPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_ThePrmPrmSvSurfacesOfWLApprox> >>(m.attr("GeomInt_ThePrmPrmSvSurfacesOfWLApprox"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const opencascade::handle<Adaptor3d_HSurface> & >()  , py::arg("Surf1"),  py::arg("Surf2") )
    // custom constructors
    // methods
        .def("Compute",
             (Standard_Boolean (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<Standard_Boolean (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec2d & , gp_Vec2d & ) >(&GeomInt_ThePrmPrmSvSurfacesOfWLApprox::Compute),
             R"#(returns True if Tg,Tguv1 Tguv2 can be computed.)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Pt"),  py::arg("Tg"),  py::arg("Tguv1"),  py::arg("Tguv2"))
        .def("Pnt",
             (void (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Pnt & ) ) static_cast<void (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Pnt & ) >(&GeomInt_ThePrmPrmSvSurfacesOfWLApprox::Pnt),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("P"))
        .def("SeekPoint",
             (Standard_Boolean (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , IntSurf_PntOn2S & ) ) static_cast<Standard_Boolean (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , IntSurf_PntOn2S & ) >(&GeomInt_ThePrmPrmSvSurfacesOfWLApprox::SeekPoint),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Point"))
        .def("Tangency",
             (Standard_Boolean (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec & ) ) static_cast<Standard_Boolean (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec & ) >(&GeomInt_ThePrmPrmSvSurfacesOfWLApprox::Tangency),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
        .def("TangencyOnSurf1",
             (Standard_Boolean (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) ) static_cast<Standard_Boolean (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) >(&GeomInt_ThePrmPrmSvSurfacesOfWLApprox::TangencyOnSurf1),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
        .def("TangencyOnSurf2",
             (Standard_Boolean (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) ) static_cast<Standard_Boolean (GeomInt_ThePrmPrmSvSurfacesOfWLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) >(&GeomInt_ThePrmPrmSvSurfacesOfWLApprox::TangencyOnSurf2),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox> , math_FunctionSetWithDerivatives>>(m.attr("GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HSurface> &,const IntSurf_Quadric & >()  , py::arg("PS"),  py::arg("IS") )
        .def(py::init< const IntSurf_Quadric & >()  , py::arg("IS") )
    // custom constructors
    // methods
        .def("Set",
             (void (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<void (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::Set),
             R"#(None)#"  , py::arg("PS"))
        .def("SetImplicitSurface",
             (void (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const IntSurf_Quadric & ) ) static_cast<void (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const IntSurf_Quadric & ) >(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::SetImplicitSurface),
             R"#(None)#"  , py::arg("IS"))
        .def("Set",
             (void (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real ) ) static_cast<void (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const Standard_Real ) >(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::Set),
             R"#(None)#"  , py::arg("Tolerance"))
        .def("NbVariables",
             (Standard_Integer (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Integer (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Vector & ) >(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Matrix & ) >(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::Derivatives),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Root",
             (Standard_Real (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::Root),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::Tolerance),
             R"#(Returns the value Tol so that if Abs(Func.Root())<Tol the function is considered null.)#" )
        .def("Point",
             (const gp_Pnt & (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const) static_cast<const gp_Pnt & (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::Point),
             R"#(None)#" )
        .def("IsTangent",
             (Standard_Boolean (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() ) static_cast<Standard_Boolean (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() >(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::IsTangent),
             R"#(None)#" )
        .def("Direction3d",
             (const gp_Vec & (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() ) static_cast<const gp_Vec & (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() >(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::Direction3d),
             R"#(None)#" )
        .def("Direction2d",
             (const gp_Dir2d & (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() ) static_cast<const gp_Dir2d & (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() >(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::Direction2d),
             R"#(None)#" )
        .def("PSurface",
             (const opencascade::handle<Adaptor3d_HSurface> & (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::PSurface),
             R"#(None)#" )
        .def("ISurface",
             (const IntSurf_Quadric & (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const) static_cast<const IntSurf_Quadric & (GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox::ISurface),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_WLApprox , shared_ptr<GeomInt_WLApprox> >>(m.attr("GeomInt_WLApprox"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (GeomInt_WLApprox::*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<IntPatch_WLine> & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer ) ) static_cast<void (GeomInt_WLApprox::*)( const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<IntPatch_WLine> & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer ) >(&GeomInt_WLApprox::Perform),
             R"#(None)#"  , py::arg("Surf1"),  py::arg("Surf2"),  py::arg("aLine"),  py::arg("ApproxXYZ")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxU1V1")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxU2V2")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("indicemin")=static_cast<const Standard_Integer>(0),  py::arg("indicemax")=static_cast<const Standard_Integer>(0))
        .def("Perform",
             (void (GeomInt_WLApprox::*)( const opencascade::handle<IntPatch_WLine> & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer ) ) static_cast<void (GeomInt_WLApprox::*)( const opencascade::handle<IntPatch_WLine> & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer ) >(&GeomInt_WLApprox::Perform),
             R"#(None)#"  , py::arg("aLine"),  py::arg("ApproxXYZ")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxU1V1")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxU2V2")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("indicemin")=static_cast<const Standard_Integer>(0),  py::arg("indicemax")=static_cast<const Standard_Integer>(0))
        .def("SetParameters",
             (void (GeomInt_WLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType ) ) static_cast<void (GeomInt_WLApprox::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType ) >(&GeomInt_WLApprox::SetParameters),
             R"#(None)#"  , py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("DegMin"),  py::arg("DegMax"),  py::arg("NbIterMax"),  py::arg("NbPntMax")=static_cast<const Standard_Integer>(30),  py::arg("ApproxWithTangency")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength))
        .def("TolReached3d",
             (Standard_Real (GeomInt_WLApprox::*)() const) static_cast<Standard_Real (GeomInt_WLApprox::*)() const>(&GeomInt_WLApprox::TolReached3d),
             R"#(None)#" )
        .def("TolReached2d",
             (Standard_Real (GeomInt_WLApprox::*)() const) static_cast<Standard_Real (GeomInt_WLApprox::*)() const>(&GeomInt_WLApprox::TolReached2d),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (GeomInt_WLApprox::*)() const) static_cast<Standard_Boolean (GeomInt_WLApprox::*)() const>(&GeomInt_WLApprox::IsDone),
             R"#(None)#" )
        .def("NbMultiCurves",
             (Standard_Integer (GeomInt_WLApprox::*)() const) static_cast<Standard_Integer (GeomInt_WLApprox::*)() const>(&GeomInt_WLApprox::NbMultiCurves),
             R"#(None)#" )
        .def("Value",
             (const AppParCurves_MultiBSpCurve & (GeomInt_WLApprox::*)( const Standard_Integer ) const) static_cast<const AppParCurves_MultiBSpCurve & (GeomInt_WLApprox::*)( const Standard_Integer ) const>(&GeomInt_WLApprox::Value),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade\GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade\GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade\GeomInt_TheComputeLineBezierOfWLApprox.hxx
// ./opencascade\GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade\GeomInt_TheMultiLineToolOfWLApprox.hxx
// ./opencascade\GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade\GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade\GeomInt_LineConstructor.hxx
// ./opencascade\GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade\GeomInt_TheComputeLineOfWLApprox.hxx
// ./opencascade\GeomInt_VectorOfReal.hxx
// ./opencascade\GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade\GeomInt_ThePrmPrmSvSurfacesOfWLApprox.hxx
// ./opencascade\GeomInt_TheImpPrmSvSurfacesOfWLApprox.hxx
// ./opencascade\GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade\GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade\GeomInt.hxx
// ./opencascade\GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade\GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade\GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx
// ./opencascade\GeomInt_ParameterAndOrientation.hxx
// ./opencascade\GeomInt_SequenceOfParameterAndOrientation.hxx
// ./opencascade\GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade\GeomInt_LineTool.hxx
// ./opencascade\GeomInt_IntSS.hxx
// ./opencascade\GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx
// ./opencascade\GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade\GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx
// ./opencascade\GeomInt_TheMultiLineOfWLApprox.hxx
// ./opencascade\GeomInt_WLApprox.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Vector<Standard_Real>(m,"GeomInt_VectorOfReal");
    register_template_NCollection_Sequence<GeomInt_ParameterAndOrientation>(m,"GeomInt_SequenceOfParameterAndOrientation");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
