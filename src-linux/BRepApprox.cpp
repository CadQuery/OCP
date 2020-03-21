
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
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
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
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
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <BRepApprox_ApproxLine.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepAdaptor_Surface.hxx>
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
#include <BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <BRepApprox_ApproxLine.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <math_Matrix.hxx>
#include <BRepApprox_ApproxLine.hxx>

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
void register_BRepApprox(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepApprox"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepApprox_Approx , shared_ptr<BRepApprox_Approx> >>(m.attr("BRepApprox_Approx"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepApprox_Approx::*)( const BRepAdaptor_Surface & , const BRepAdaptor_Surface & , const opencascade::handle<BRepApprox_ApproxLine> & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepApprox_Approx::*)( const BRepAdaptor_Surface & , const BRepAdaptor_Surface & , const opencascade::handle<BRepApprox_ApproxLine> & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer ) >(&BRepApprox_Approx::Perform),
             R"#(None)#"  , py::arg("Surf1"),  py::arg("Surf2"),  py::arg("aLine"),  py::arg("ApproxXYZ")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxU1V1")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxU2V2")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("indicemin")=static_cast<const Standard_Integer>(0),  py::arg("indicemax")=static_cast<const Standard_Integer>(0))
        .def("Perform",
             (void (BRepApprox_Approx::*)( const opencascade::handle<BRepApprox_ApproxLine> & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepApprox_Approx::*)( const opencascade::handle<BRepApprox_ApproxLine> & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer ) >(&BRepApprox_Approx::Perform),
             R"#(None)#"  , py::arg("aLine"),  py::arg("ApproxXYZ")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxU1V1")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxU2V2")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("indicemin")=static_cast<const Standard_Integer>(0),  py::arg("indicemax")=static_cast<const Standard_Integer>(0))
        .def("SetParameters",
             (void (BRepApprox_Approx::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType ) ) static_cast<void (BRepApprox_Approx::*)( const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType ) >(&BRepApprox_Approx::SetParameters),
             R"#(None)#"  , py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("DegMin"),  py::arg("DegMax"),  py::arg("NbIterMax"),  py::arg("NbPntMax")=static_cast<const Standard_Integer>(30),  py::arg("ApproxWithTangency")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength))
        .def("TolReached3d",
             (Standard_Real (BRepApprox_Approx::*)() const) static_cast<Standard_Real (BRepApprox_Approx::*)() const>(&BRepApprox_Approx::TolReached3d),
             R"#(None)#" )
        .def("TolReached2d",
             (Standard_Real (BRepApprox_Approx::*)() const) static_cast<Standard_Real (BRepApprox_Approx::*)() const>(&BRepApprox_Approx::TolReached2d),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (BRepApprox_Approx::*)() const) static_cast<Standard_Boolean (BRepApprox_Approx::*)() const>(&BRepApprox_Approx::IsDone),
             R"#(None)#" )
        .def("NbMultiCurves",
             (Standard_Integer (BRepApprox_Approx::*)() const) static_cast<Standard_Integer (BRepApprox_Approx::*)() const>(&BRepApprox_Approx::NbMultiCurves),
             R"#(None)#" )
        .def("Value",
             (const AppParCurves_MultiBSpCurve & (BRepApprox_Approx::*)( const Standard_Integer ) const) static_cast<const AppParCurves_MultiBSpCurve & (BRepApprox_Approx::*)( const Standard_Integer ) const>(&BRepApprox_Approx::Value),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ApproxLine ,opencascade::handle<BRepApprox_ApproxLine> , Standard_Transient>>(m.attr("BRepApprox_ApproxLine"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_BSplineCurve> &,const opencascade::handle<Geom2d_BSplineCurve> &,const opencascade::handle<Geom2d_BSplineCurve> & >()  , py::arg("CurveXYZ"),  py::arg("CurveUV1"),  py::arg("CurveUV2") )
        .def(py::init< const opencascade::handle<IntSurf_LineOn2S> &,const Standard_Boolean >()  , py::arg("lin"),  py::arg("theTang")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("NbPnts",
             (Standard_Integer (BRepApprox_ApproxLine::*)() const) static_cast<Standard_Integer (BRepApprox_ApproxLine::*)() const>(&BRepApprox_ApproxLine::NbPnts),
             R"#(None)#" )
        .def("Point",
             (IntSurf_PntOn2S (BRepApprox_ApproxLine::*)( const Standard_Integer ) ) static_cast<IntSurf_PntOn2S (BRepApprox_ApproxLine::*)( const Standard_Integer ) >(&BRepApprox_ApproxLine::Point),
             R"#(None)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepApprox_ApproxLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepApprox_ApproxLine::*)() const>(&BRepApprox_ApproxLine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepApprox_ApproxLine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepApprox_ApproxLine::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox , shared_ptr<BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox> , math_BFGS>>(m.attr("BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox"))
    // constructors
        .def(py::init< math_MultipleVarFunctionWithGradient &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("StartingPoint"),  py::arg("Tolerance3d"),  py::arg("Tolerance2d"),  py::arg("Eps"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
    // custom constructors
    // methods
        .def("IsSolutionReached",
             (Standard_Boolean (BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox::*)( math_MultipleVarFunctionWithGradient & ) const>(&BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox , shared_ptr<BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox> , math_MultipleVarFunctionWithGradient>>(m.attr("BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("NbPol") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , Standard_Real & ) >(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , math_Vector & ) >(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<const math_Vector & (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (AppParCurves_MultiBSpCurve (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() ) static_cast<AppParCurves_MultiBSpCurve (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() >(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::CurveValue),
             R"#(returns the MultiBSpCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Real (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const Standard_Integer , const Standard_Integer ) >(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiBSpCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiBSpCurve.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::FunctionMatrix),
             R"#(returns the function matrix used to approximate the multiline.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the multiline.)#" )
        .def("Index",
             (const math_IntegerVector & (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<const math_IntegerVector & (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::Index),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
        .def("SetFirstLambda",
             (void (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const Standard_Real ) ) static_cast<void (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const Standard_Real ) >(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::SetFirstLambda),
             R"#(None)#"  , py::arg("l1"))
        .def("SetLastLambda",
             (void (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const Standard_Real ) ) static_cast<void (BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::*)( const Standard_Real ) >(&BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox::SetLastLambda),
             R"#(None)#"  , py::arg("l2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox , shared_ptr<BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox> >>(m.attr("BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & ) ) static_cast<void (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & ) >(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) >(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() ) static_cast<AppParCurves_MultiCurve (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() >(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() >(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("Distance",
             (const math_Matrix & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() ) static_cast<const math_Matrix & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() >(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("FirstLambda",
             (Standard_Real (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<const math_IntegerVector & (BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
    // methods using call by reference i.s.o. return
        .def("ErrorGradient",
             []( BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox &self , math_Vector & Grad ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.ErrorGradient(Grad,F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"))
        .def("Error",
             []( BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox &self   ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.Error(F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox , shared_ptr<BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox> , math_BFGS>>(m.attr("BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox"))
    // constructors
        .def(py::init< math_MultipleVarFunctionWithGradient &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("StartingPoint"),  py::arg("Tolerance3d"),  py::arg("Tolerance2d"),  py::arg("Eps"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
    // custom constructors
    // methods
        .def("IsSolutionReached",
             (Standard_Boolean (BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox::*)( math_MultipleVarFunctionWithGradient & ) const>(&BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox , shared_ptr<BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox> , math_BFGS>>(m.attr("BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox"))
    // constructors
        .def(py::init< math_MultipleVarFunctionWithGradient &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("StartingPoint"),  py::arg("Tolerance3d"),  py::arg("Tolerance2d"),  py::arg("Eps"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
    // custom constructors
    // methods
        .def("IsSolutionReached",
             (Standard_Boolean (BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox::*)( math_MultipleVarFunctionWithGradient & ) const>(&BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_MyBSplGradientOfTheComputeLineOfApprox , shared_ptr<BRepApprox_MyBSplGradientOfTheComputeLineOfApprox> >>(m.attr("BRepApprox_MyBSplGradientOfTheComputeLineOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(1) )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations"),  py::arg("lambda1"),  py::arg("lambda2") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (AppParCurves_MultiBSpCurve (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<AppParCurves_MultiBSpCurve (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::Value),
             R"#(returns all the BSpline curves approximating the MultiLine SSP after minimization of the parameter.)#" )
        .def("Error",
             (Standard_Real (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)( const Standard_Integer ) const>(&BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::Error),
             R"#(returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.)#"  , py::arg("Index"))
        .def("MaxError3d",
             (Standard_Real (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::MaxError3d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("MaxError2d",
             (Standard_Real (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::MaxError2d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("AverageError",
             (Standard_Real (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::*)() const>(&BRepApprox_MyBSplGradientOfTheComputeLineOfApprox::AverageError),
             R"#(returns the average error between the old and the new approximation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_MyGradientOfTheComputeLineBezierOfApprox , shared_ptr<BRepApprox_MyGradientOfTheComputeLineBezierOfApprox> >>(m.attr("BRepApprox_MyGradientOfTheComputeLineBezierOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (AppParCurves_MultiCurve (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<AppParCurves_MultiCurve (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::Value),
             R"#(returns all the Bezier curves approximating the MultiLine SSP after minimization of the parameter.)#" )
        .def("Error",
             (Standard_Real (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)( const Standard_Integer ) const>(&BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::Error),
             R"#(returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.)#"  , py::arg("Index"))
        .def("MaxError3d",
             (Standard_Real (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::MaxError3d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("MaxError2d",
             (Standard_Real (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::MaxError2d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("AverageError",
             (Standard_Real (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_MyGradientOfTheComputeLineBezierOfApprox::AverageError),
             R"#(returns the average error between the old and the new approximation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_MyGradientbisOfTheComputeLineOfApprox , shared_ptr<BRepApprox_MyGradientbisOfTheComputeLineOfApprox> >>(m.attr("BRepApprox_MyGradientbisOfTheComputeLineOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_MyGradientbisOfTheComputeLineOfApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (AppParCurves_MultiCurve (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<AppParCurves_MultiCurve (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_MyGradientbisOfTheComputeLineOfApprox::Value),
             R"#(returns all the Bezier curves approximating the MultiLine SSP after minimization of the parameter.)#" )
        .def("Error",
             (Standard_Real (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)( const Standard_Integer ) const) static_cast<Standard_Real (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)( const Standard_Integer ) const>(&BRepApprox_MyGradientbisOfTheComputeLineOfApprox::Error),
             R"#(returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.)#"  , py::arg("Index"))
        .def("MaxError3d",
             (Standard_Real (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_MyGradientbisOfTheComputeLineOfApprox::MaxError3d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("MaxError2d",
             (Standard_Real (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_MyGradientbisOfTheComputeLineOfApprox::MaxError2d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("AverageError",
             (Standard_Real (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_MyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_MyGradientbisOfTheComputeLineOfApprox::AverageError),
             R"#(returns the average error between the old and the new approximation.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox , shared_ptr<BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox> , math_MultipleVarFunctionWithGradient>>(m.attr("BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , Standard_Real & ) >(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , math_Vector & ) >(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<const math_Vector & (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (const AppParCurves_MultiCurve & (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)() ) static_cast<const AppParCurves_MultiCurve & (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)() >(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::CurveValue),
             R"#(returns the MultiCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const Standard_Integer , const Standard_Integer ) const>(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox , shared_ptr<BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox> , math_MultipleVarFunctionWithGradient>>(m.attr("BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , Standard_Real & ) >(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , math_Vector & ) >(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<const math_Vector & (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (const AppParCurves_MultiCurve & (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)() ) static_cast<const AppParCurves_MultiCurve & (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)() >(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::CurveValue),
             R"#(returns the MultiCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const Standard_Integer , const Standard_Integer ) const>(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const) static_cast<AppParCurves_Constraint (BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & , const Standard_Integer ) const>(&BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox , shared_ptr<BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox> >>(m.attr("BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & ) ) static_cast<void (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & ) >(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) >(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() ) static_cast<AppParCurves_MultiCurve (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() >(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() >(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("Distance",
             (const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() ) static_cast<const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() >(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("FirstLambda",
             (Standard_Real (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<const math_IntegerVector & (BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
    // methods using call by reference i.s.o. return
        .def("ErrorGradient",
             []( BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox &self , math_Vector & Grad ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.ErrorGradient(Grad,F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"))
        .def("Error",
             []( BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox &self   ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.Error(F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox , shared_ptr<BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox> >>(m.attr("BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & ) ) static_cast<void (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & ) >(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , const Standard_Real , const Standard_Real ) >(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)( const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real ) >(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() ) static_cast<AppParCurves_MultiCurve (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() >(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() >(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("Distance",
             (const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() ) static_cast<const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() >(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("FirstLambda",
             (Standard_Real (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<const math_IntegerVector & (BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
    // methods using call by reference i.s.o. return
        .def("ErrorGradient",
             []( BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox &self , math_Vector & Grad ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.ErrorGradient(Grad,F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"))
        .def("Error",
             []( BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox &self   ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.Error(F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox , shared_ptr<BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox> >>(m.attr("BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,AppParCurves_MultiCurve &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Matrix &,const math_Matrix &,const Standard_Real >()  , py::arg("SSP"),  py::arg("SCurv"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("Constraints"),  py::arg("Bern"),  py::arg("DerivativeBern"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("ConstraintMatrix",
             (const math_Matrix & (BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::ConstraintMatrix),
             R"#(None)#" )
        .def("Duale",
             (const math_Vector & (BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<const math_Vector & (BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::Duale),
             R"#(returns the duale variables of the system.)#" )
        .def("ConstraintDerivative",
             (const math_Matrix & (BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::*)( const BRepApprox_TheMultiLineOfApprox & , const math_Vector & , const Standard_Integer , const math_Matrix & ) ) static_cast<const math_Matrix & (BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::*)( const BRepApprox_TheMultiLineOfApprox & , const math_Vector & , const Standard_Integer , const math_Matrix & ) >(&BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::ConstraintDerivative),
             R"#(Returns the derivative of the constraint matrix.)#"  , py::arg("SSP"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("DA"))
        .def("InverseMatrix",
             (const math_Matrix & (BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::*)() const>(&BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox::InverseMatrix),
             R"#(returns the Inverse of Cont*Transposed(Cont), where Cont is the constraint matrix for the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox , shared_ptr<BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox> >>(m.attr("BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,AppParCurves_MultiCurve &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Matrix &,const math_Matrix &,const Standard_Real >()  , py::arg("SSP"),  py::arg("SCurv"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("Constraints"),  py::arg("Bern"),  py::arg("DerivativeBern"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-10) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("ConstraintMatrix",
             (const math_Matrix & (BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::ConstraintMatrix),
             R"#(None)#" )
        .def("Duale",
             (const math_Vector & (BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<const math_Vector & (BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::Duale),
             R"#(returns the duale variables of the system.)#" )
        .def("ConstraintDerivative",
             (const math_Matrix & (BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::*)( const BRepApprox_TheMultiLineOfApprox & , const math_Vector & , const Standard_Integer , const math_Matrix & ) ) static_cast<const math_Matrix & (BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::*)( const BRepApprox_TheMultiLineOfApprox & , const math_Vector & , const Standard_Integer , const math_Matrix & ) >(&BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::ConstraintDerivative),
             R"#(Returns the derivative of the constraint matrix.)#"  , py::arg("SSP"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("DA"))
        .def("InverseMatrix",
             (const math_Matrix & (BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::*)() const) static_cast<const math_Matrix & (BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::*)() const>(&BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox::InverseMatrix),
             R"#(returns the Inverse of Cont*Transposed(Cont), where Cont is the constraint matrix for the algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepApprox_SurfaceTool , shared_ptr<BRepApprox_SurfaceTool>>(m,"BRepApprox_SurfaceTool");

    static_cast<py::class_<BRepApprox_SurfaceTool , shared_ptr<BRepApprox_SurfaceTool> >>(m.attr("BRepApprox_SurfaceTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstUParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::FirstUParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("FirstVParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::FirstVParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("LastUParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::LastUParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("LastVParameter_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::LastVParameter),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbUIntervals_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & , const GeomAbs_Shape ) >(&BRepApprox_SurfaceTool::NbUIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("Sh"))
        .def_static("NbVIntervals_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & , const GeomAbs_Shape ) >(&BRepApprox_SurfaceTool::NbVIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("Sh"))
        .def_static("UIntervals_s",
                    (void (*)( const BRepAdaptor_Surface & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const BRepAdaptor_Surface & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&BRepApprox_SurfaceTool::UIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("Sh"))
        .def_static("VIntervals_s",
                    (void (*)( const BRepAdaptor_Surface & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const BRepAdaptor_Surface & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&BRepApprox_SurfaceTool::VIntervals),
                    R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("Sh"))
        .def_static("UTrim_s",
                    (opencascade::handle<Adaptor3d_HSurface> (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<Adaptor3d_HSurface> (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepApprox_SurfaceTool::UTrim),
                    R"#(If <First> >= <Last>)#"  , py::arg("S"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def_static("VTrim_s",
                    (opencascade::handle<Adaptor3d_HSurface> (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<Adaptor3d_HSurface> (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepApprox_SurfaceTool::VTrim),
                    R"#(If <First> >= <Last>)#"  , py::arg("S"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def_static("IsUClosed_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::IsUClosed),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsVClosed_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::IsVClosed),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsUPeriodic_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::IsUPeriodic),
                    R"#(None)#"  , py::arg("S"))
        .def_static("UPeriod_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::UPeriod),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsVPeriodic_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::IsVPeriodic),
                    R"#(None)#"  , py::arg("S"))
        .def_static("VPeriod_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::VPeriod),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Value_s",
                    (gp_Pnt (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real ) ) static_cast<gp_Pnt (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real ) >(&BRepApprox_SurfaceTool::Value),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"))
        .def_static("D0_s",
                    (void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & ) ) static_cast<void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & ) >(&BRepApprox_SurfaceTool::D0),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) >(&BRepApprox_SurfaceTool::D1),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1u"),  py::arg("D1v"))
        .def_static("D2_s",
                    (void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&BRepApprox_SurfaceTool::D2),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def_static("D3_s",
                    (void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) ) static_cast<void (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & , gp_Vec & ) >(&BRepApprox_SurfaceTool::D3),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def_static("DN_s",
                    (gp_Vec (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) ) static_cast<gp_Vec (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Integer ) >(&BRepApprox_SurfaceTool::DN),
                    R"#(None)#"  , py::arg("S"),  py::arg("u"),  py::arg("v"),  py::arg("Nu"),  py::arg("Nv"))
        .def_static("UResolution_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & , const Standard_Real ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & , const Standard_Real ) >(&BRepApprox_SurfaceTool::UResolution),
                    R"#(None)#"  , py::arg("S"),  py::arg("R3d"))
        .def_static("VResolution_s",
                    (Standard_Real (*)( const BRepAdaptor_Surface & , const Standard_Real ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Surface & , const Standard_Real ) >(&BRepApprox_SurfaceTool::VResolution),
                    R"#(None)#"  , py::arg("S"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_SurfaceType (*)( const BRepAdaptor_Surface & ) ) static_cast<GeomAbs_SurfaceType (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::GetType),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Plane_s",
                    (gp_Pln (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Pln (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::Plane),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Cylinder_s",
                    (gp_Cylinder (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Cylinder (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::Cylinder),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Cone_s",
                    (gp_Cone (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Cone (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::Cone),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Torus_s",
                    (gp_Torus (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Torus (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::Torus),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Sphere_s",
                    (gp_Sphere (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Sphere (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::Sphere),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom_BezierSurface> (*)( const BRepAdaptor_Surface & ) ) static_cast<opencascade::handle<Geom_BezierSurface> (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::Bezier),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const BRepAdaptor_Surface & ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::BSpline),
                    R"#(None)#"  , py::arg("S"))
        .def_static("AxeOfRevolution_s",
                    (gp_Ax1 (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Ax1 (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::AxeOfRevolution),
                    R"#(None)#"  , py::arg("S"))
        .def_static("Direction_s",
                    (gp_Dir (*)( const BRepAdaptor_Surface & ) ) static_cast<gp_Dir (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::Direction),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BasisCurve_s",
                    (opencascade::handle<Adaptor3d_HCurve> (*)( const BRepAdaptor_Surface & ) ) static_cast<opencascade::handle<Adaptor3d_HCurve> (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::BasisCurve),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbSamplesU_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::NbSamplesU),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbSamplesV_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & ) >(&BRepApprox_SurfaceTool::NbSamplesV),
                    R"#(None)#"  , py::arg("S"))
        .def_static("NbSamplesU_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real ) >(&BRepApprox_SurfaceTool::NbSamplesU),
                    R"#(None)#"  , py::arg("S"),  py::arg("u1"),  py::arg("u2"))
        .def_static("NbSamplesV_s",
                    (Standard_Integer (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Integer (*)( const BRepAdaptor_Surface & , const Standard_Real , const Standard_Real ) >(&BRepApprox_SurfaceTool::NbSamplesV),
                    R"#(None)#"  , py::arg("S"),  py::arg("v1"),  py::arg("v2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheComputeLineBezierOfApprox , shared_ptr<BRepApprox_TheComputeLineBezierOfApprox> >>(m.attr("BRepApprox_TheComputeLineBezierOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("Line"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-3),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-6),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Line"),  py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType , const Standard_Boolean ) ) static_cast<void (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType , const Standard_Boolean ) >(&BRepApprox_TheComputeLineBezierOfApprox::Init),
             R"#(Initializes the fields of the algorithm.)#"  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (BRepApprox_TheComputeLineBezierOfApprox::*)( const BRepApprox_TheMultiLineOfApprox & ) ) static_cast<void (BRepApprox_TheComputeLineBezierOfApprox::*)( const BRepApprox_TheMultiLineOfApprox & ) >(&BRepApprox_TheComputeLineBezierOfApprox::Perform),
             R"#(runs the algorithm after having initialized the fields.)#"  , py::arg("Line"))
        .def("SetDegrees",
             (void (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Integer , const Standard_Integer ) >(&BRepApprox_TheComputeLineBezierOfApprox::SetDegrees),
             R"#(changes the degrees of the approximation.)#"  , py::arg("degreemin"),  py::arg("degreemax"))
        .def("SetTolerances",
             (void (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Real , const Standard_Real ) >(&BRepApprox_TheComputeLineBezierOfApprox::SetTolerances),
             R"#(Changes the tolerances of the approximation.)#"  , py::arg("Tolerance3d"),  py::arg("Tolerance2d"))
        .def("SetConstraints",
             (void (BRepApprox_TheComputeLineBezierOfApprox::*)( const AppParCurves_Constraint , const AppParCurves_Constraint ) ) static_cast<void (BRepApprox_TheComputeLineBezierOfApprox::*)( const AppParCurves_Constraint , const AppParCurves_Constraint ) >(&BRepApprox_TheComputeLineBezierOfApprox::SetConstraints),
             R"#(changes the first and the last constraint points.)#"  , py::arg("firstC"),  py::arg("lastC"))
        .def("IsAllApproximated",
             (Standard_Boolean (BRepApprox_TheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_TheComputeLineBezierOfApprox::*)() const>(&BRepApprox_TheComputeLineBezierOfApprox::IsAllApproximated),
             R"#(returns False if at a moment of the approximation, the status NoApproximation has been sent by the user when more points were needed.)#" )
        .def("IsToleranceReached",
             (Standard_Boolean (BRepApprox_TheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_TheComputeLineBezierOfApprox::*)() const>(&BRepApprox_TheComputeLineBezierOfApprox::IsToleranceReached),
             R"#(returns False if the status NoPointsAdded has been sent.)#" )
        .def("NbMultiCurves",
             (Standard_Integer (BRepApprox_TheComputeLineBezierOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_TheComputeLineBezierOfApprox::*)() const>(&BRepApprox_TheComputeLineBezierOfApprox::NbMultiCurves),
             R"#(Returns the number of MultiCurve doing the approximation of the MultiLine.)#" )
        .def("Value",
             (const AppParCurves_MultiCurve & (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Integer ) const) static_cast<const AppParCurves_MultiCurve & (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Integer ) const>(&BRepApprox_TheComputeLineBezierOfApprox::Value),
             R"#(returns the result of the approximation.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
        .def("ChangeValue",
             (AppParCurves_MultiCurve & (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Integer ) ) static_cast<AppParCurves_MultiCurve & (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Integer ) >(&BRepApprox_TheComputeLineBezierOfApprox::ChangeValue),
             R"#(returns the result of the approximation.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
        .def("SplineValue",
             (const AppParCurves_MultiBSpCurve & (BRepApprox_TheComputeLineBezierOfApprox::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (BRepApprox_TheComputeLineBezierOfApprox::*)() >(&BRepApprox_TheComputeLineBezierOfApprox::SplineValue),
             R"#(returns the result of the approximation.)#" )
        .def("Parametrization",
             (Approx_ParametrizationType (BRepApprox_TheComputeLineBezierOfApprox::*)() const) static_cast<Approx_ParametrizationType (BRepApprox_TheComputeLineBezierOfApprox::*)() const>(&BRepApprox_TheComputeLineBezierOfApprox::Parametrization),
             R"#(returns the type of parametrization)#" )
        .def("Parameters",
             (const TColStd_Array1OfReal & (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Integer ) const) static_cast<const TColStd_Array1OfReal & (BRepApprox_TheComputeLineBezierOfApprox::*)( const Standard_Integer ) const>(&BRepApprox_TheComputeLineBezierOfApprox::Parameters),
             R"#(returns the new parameters of the approximation corresponding to the points of the multicurve <Index>.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
    // methods using call by reference i.s.o. return
        .def("Error",
             []( BRepApprox_TheComputeLineBezierOfApprox &self , const Standard_Integer Index ){ Standard_Real  tol3d; Standard_Real  tol2d; self.Error(Index,tol3d,tol2d); return std::make_tuple(tol3d,tol2d); },
             R"#(returns the tolerances 2d and 3d of the <Index> MultiCurve.)#"  , py::arg("Index"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheComputeLineOfApprox , shared_ptr<BRepApprox_TheComputeLineOfApprox> >>(m.attr("BRepApprox_TheComputeLineOfApprox"))
    // constructors
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("Line"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-3),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-6),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const BRepApprox_TheMultiLineOfApprox &,const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Line"),  py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Interpol",
             (void (BRepApprox_TheComputeLineOfApprox::*)( const BRepApprox_TheMultiLineOfApprox & ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)( const BRepApprox_TheMultiLineOfApprox & ) >(&BRepApprox_TheComputeLineOfApprox::Interpol),
             R"#(Constructs an interpolation of the MultiLine <Line> The result will be a C2 curve of degree 3.)#"  , py::arg("Line"))
        .def("Init",
             (void (BRepApprox_TheComputeLineOfApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType , const Standard_Boolean ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Boolean , const Approx_ParametrizationType , const Standard_Boolean ) >(&BRepApprox_TheComputeLineOfApprox::Init),
             R"#(Initializes the fields of the algorithm.)#"  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (BRepApprox_TheComputeLineOfApprox::*)( const BRepApprox_TheMultiLineOfApprox & ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)( const BRepApprox_TheMultiLineOfApprox & ) >(&BRepApprox_TheComputeLineOfApprox::Perform),
             R"#(runs the algorithm after having initialized the fields.)#"  , py::arg("Line"))
        .def("SetParameters",
             (void (BRepApprox_TheComputeLineOfApprox::*)( const math_Vector & ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)( const math_Vector & ) >(&BRepApprox_TheComputeLineOfApprox::SetParameters),
             R"#(The approximation will begin with the set of parameters <ThePar>.)#"  , py::arg("ThePar"))
        .def("SetKnots",
             (void (BRepApprox_TheComputeLineOfApprox::*)(  const NCollection_Array1<Standard_Real> & ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)(  const NCollection_Array1<Standard_Real> & ) >(&BRepApprox_TheComputeLineOfApprox::SetKnots),
             R"#(The approximation will be done with the set of knots <Knots>. The multiplicities will be set with the degree and the desired continuity.)#"  , py::arg("Knots"))
        .def("SetKnotsAndMultiplicities",
             (void (BRepApprox_TheComputeLineOfApprox::*)(  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)(  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & ) >(&BRepApprox_TheComputeLineOfApprox::SetKnotsAndMultiplicities),
             R"#(The approximation will be done with the set of knots <Knots> and the multiplicities <Mults>.)#"  , py::arg("Knots"),  py::arg("Mults"))
        .def("SetDegrees",
             (void (BRepApprox_TheComputeLineOfApprox::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)( const Standard_Integer , const Standard_Integer ) >(&BRepApprox_TheComputeLineOfApprox::SetDegrees),
             R"#(changes the degrees of the approximation.)#"  , py::arg("degreemin"),  py::arg("degreemax"))
        .def("SetTolerances",
             (void (BRepApprox_TheComputeLineOfApprox::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)( const Standard_Real , const Standard_Real ) >(&BRepApprox_TheComputeLineOfApprox::SetTolerances),
             R"#(Changes the tolerances of the approximation.)#"  , py::arg("Tolerance3d"),  py::arg("Tolerance2d"))
        .def("SetContinuity",
             (void (BRepApprox_TheComputeLineOfApprox::*)( const Standard_Integer ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)( const Standard_Integer ) >(&BRepApprox_TheComputeLineOfApprox::SetContinuity),
             R"#(sets the continuity of the spline. if C = 2, the spline will be C2.)#"  , py::arg("C"))
        .def("SetConstraints",
             (void (BRepApprox_TheComputeLineOfApprox::*)( const AppParCurves_Constraint , const AppParCurves_Constraint ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)( const AppParCurves_Constraint , const AppParCurves_Constraint ) >(&BRepApprox_TheComputeLineOfApprox::SetConstraints),
             R"#(changes the first and the last constraint points.)#"  , py::arg("firstC"),  py::arg("lastC"))
        .def("SetPeriodic",
             (void (BRepApprox_TheComputeLineOfApprox::*)( const Standard_Boolean ) ) static_cast<void (BRepApprox_TheComputeLineOfApprox::*)( const Standard_Boolean ) >(&BRepApprox_TheComputeLineOfApprox::SetPeriodic),
             R"#(Sets periodic flag. If thePeriodic = Standard_True, algorith tries to build periodic multicurve using corresponding C1 boundary condition for first and last multipoints. Multiline must be closed.)#"  , py::arg("thePeriodic"))
        .def("IsAllApproximated",
             (Standard_Boolean (BRepApprox_TheComputeLineOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_TheComputeLineOfApprox::*)() const>(&BRepApprox_TheComputeLineOfApprox::IsAllApproximated),
             R"#(returns False if at a moment of the approximation, the status NoApproximation has been sent by the user when more points were needed.)#" )
        .def("IsToleranceReached",
             (Standard_Boolean (BRepApprox_TheComputeLineOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_TheComputeLineOfApprox::*)() const>(&BRepApprox_TheComputeLineOfApprox::IsToleranceReached),
             R"#(returns False if the status NoPointsAdded has been sent.)#" )
        .def("Value",
             (const AppParCurves_MultiBSpCurve & (BRepApprox_TheComputeLineOfApprox::*)() const) static_cast<const AppParCurves_MultiBSpCurve & (BRepApprox_TheComputeLineOfApprox::*)() const>(&BRepApprox_TheComputeLineOfApprox::Value),
             R"#(returns the result of the approximation.)#" )
        .def("ChangeValue",
             (AppParCurves_MultiBSpCurve & (BRepApprox_TheComputeLineOfApprox::*)() ) static_cast<AppParCurves_MultiBSpCurve & (BRepApprox_TheComputeLineOfApprox::*)() >(&BRepApprox_TheComputeLineOfApprox::ChangeValue),
             R"#(returns the result of the approximation.)#" )
        .def("Parameters",
             (const TColStd_Array1OfReal & (BRepApprox_TheComputeLineOfApprox::*)() const) static_cast<const TColStd_Array1OfReal & (BRepApprox_TheComputeLineOfApprox::*)() const>(&BRepApprox_TheComputeLineOfApprox::Parameters),
             R"#(returns the new parameters of the approximation corresponding to the points of the MultiBSpCurve.)#" )
    // methods using call by reference i.s.o. return
        .def("Error",
             []( BRepApprox_TheComputeLineOfApprox &self   ){ Standard_Real  tol3d; Standard_Real  tol2d; self.Error(tol3d,tol2d); return std::make_tuple(tol3d,tol2d); },
             R"#(returns the tolerances 2d and 3d of the MultiBSpCurve.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox , shared_ptr<BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox> , math_FunctionSetWithDerivatives>>(m.attr("BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox"))
    // constructors
        .def(py::init< const BRepAdaptor_Surface &,const BRepAdaptor_Surface & >()  , py::arg("S1"),  py::arg("S2") )
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Vector & ) >(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Matrix & ) >(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::Derivatives),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("ComputeParameters",
             (void (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)( const IntImp_ConstIsoparametric ,  const NCollection_Array1<Standard_Real> & , math_Vector & , math_Vector & , math_Vector & , math_Vector & ) ) static_cast<void (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)( const IntImp_ConstIsoparametric ,  const NCollection_Array1<Standard_Real> & , math_Vector & , math_Vector & , math_Vector & , math_Vector & ) >(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::ComputeParameters),
             R"#(None)#"  , py::arg("ChoixIso"),  py::arg("Param"),  py::arg("UVap"),  py::arg("BornInf"),  py::arg("BornSup"),  py::arg("Tolerance"))
        .def("Root",
             (Standard_Real (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::Root),
             R"#(returns somme des fi*fi)#" )
        .def("Point",
             (gp_Pnt (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<gp_Pnt (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::Point),
             R"#(None)#" )
        .def("IsTangent",
             (Standard_Boolean (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)( const math_Vector & , NCollection_Array1<Standard_Real> & , IntImp_ConstIsoparametric & ) ) static_cast<Standard_Boolean (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)( const math_Vector & , NCollection_Array1<Standard_Real> & , IntImp_ConstIsoparametric & ) >(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::IsTangent),
             R"#(None)#"  , py::arg("UVap"),  py::arg("Param"),  py::arg("BestChoix"))
        .def("Direction",
             (gp_Dir (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<gp_Dir (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::Direction),
             R"#(None)#" )
        .def("DirectionOnS1",
             (gp_Dir2d (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<gp_Dir2d (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::DirectionOnS1),
             R"#(None)#" )
        .def("DirectionOnS2",
             (gp_Dir2d (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<gp_Dir2d (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::DirectionOnS2),
             R"#(None)#" )
        .def("AuxillarSurface1",
             (const BRepAdaptor_Surface & (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<const BRepAdaptor_Surface & (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::AuxillarSurface1),
             R"#(None)#" )
        .def("AuxillarSurface2",
             (const BRepAdaptor_Surface & (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<const BRepAdaptor_Surface & (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::AuxillarSurface2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheImpPrmSvSurfacesOfApprox , shared_ptr<BRepApprox_TheImpPrmSvSurfacesOfApprox> >>(m.attr("BRepApprox_TheImpPrmSvSurfacesOfApprox"))
    // constructors
        .def(py::init< const BRepAdaptor_Surface &,const IntSurf_Quadric & >()  , py::arg("Surf1"),  py::arg("Surf2") )
        .def(py::init< const IntSurf_Quadric &,const BRepAdaptor_Surface & >()  , py::arg("Surf1"),  py::arg("Surf2") )
    // custom constructors
    // methods
        .def("Compute",
             (Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec2d & , gp_Vec2d & ) >(&BRepApprox_TheImpPrmSvSurfacesOfApprox::Compute),
             R"#(returns True if Tg,Tguv1 Tguv2 can be computed.)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Pt"),  py::arg("Tg"),  py::arg("Tguv1"),  py::arg("Tguv2"))
        .def("Pnt",
             (void (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Pnt & ) ) static_cast<void (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Pnt & ) >(&BRepApprox_TheImpPrmSvSurfacesOfApprox::Pnt),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("P"))
        .def("SeekPoint",
             (Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , IntSurf_PntOn2S & ) ) static_cast<Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , IntSurf_PntOn2S & ) >(&BRepApprox_TheImpPrmSvSurfacesOfApprox::SeekPoint),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Point"))
        .def("Tangency",
             (Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec & ) ) static_cast<Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec & ) >(&BRepApprox_TheImpPrmSvSurfacesOfApprox::Tangency),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
        .def("TangencyOnSurf1",
             (Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) ) static_cast<Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) >(&BRepApprox_TheImpPrmSvSurfacesOfApprox::TangencyOnSurf1),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
        .def("TangencyOnSurf2",
             (Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) ) static_cast<Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) >(&BRepApprox_TheImpPrmSvSurfacesOfApprox::TangencyOnSurf2),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
        .def("FillInitialVectorOfSolution",
             (Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , math_Vector & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepApprox_TheImpPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , math_Vector & , Standard_Real & , Standard_Real & ) >(&BRepApprox_TheImpPrmSvSurfacesOfApprox::FillInitialVectorOfSolution),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("binfu"),  py::arg("bsupu"),  py::arg("binfv"),  py::arg("bsupv"),  py::arg("X"),  py::arg("TranslationU"),  py::arg("TranslationV"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox , shared_ptr<BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox> >>(m.attr("BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox"))
    // constructors
        .def(py::init<  const NCollection_Array1<Standard_Real> &,const BRepAdaptor_Surface &,const BRepAdaptor_Surface &,const Standard_Real >()  , py::arg("Param"),  py::arg("S1"),  py::arg("S2"),  py::arg("TolTangency") )
        .def(py::init< const BRepAdaptor_Surface &,const BRepAdaptor_Surface &,const Standard_Real >()  , py::arg("S1"),  py::arg("S2"),  py::arg("TolTangency") )
    // custom constructors
    // methods
        .def("Perform",
             (IntImp_ConstIsoparametric (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)(  const NCollection_Array1<Standard_Real> & , math_FunctionSetRoot & ) ) static_cast<IntImp_ConstIsoparametric (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)(  const NCollection_Array1<Standard_Real> & , math_FunctionSetRoot & ) >(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::Perform),
             R"#(returns the best constant isoparametric to find the next intersection's point +stores the solution point (the solution point is found with the close point to intersect the isoparametric with the other patch; the choice of the isoparametic is calculated))#"  , py::arg("Param"),  py::arg("Rsnld"))
        .def("Perform",
             (IntImp_ConstIsoparametric (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)(  const NCollection_Array1<Standard_Real> & , math_FunctionSetRoot & , const IntImp_ConstIsoparametric ) ) static_cast<IntImp_ConstIsoparametric (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)(  const NCollection_Array1<Standard_Real> & , math_FunctionSetRoot & , const IntImp_ConstIsoparametric ) >(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::Perform),
             R"#(returns the best constant isoparametric to find the next intersection's point +stores the solution point (the solution point is found with the close point to intersect the isoparametric with the other patch; the choice of the isoparametic is given by ChoixIso))#"  , py::arg("Param"),  py::arg("Rsnld"),  py::arg("ChoixIso"))
        .def("IsDone",
             (Standard_Boolean (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::IsDone),
             R"#(Returns TRUE if the creation completed without failure.)#" )
        .def("IsEmpty",
             (Standard_Boolean (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::IsEmpty),
             R"#(Returns TRUE when there is no solution to the problem.)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<const IntSurf_PntOn2S & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::Point),
             R"#(Returns the intersection point.)#" )
        .def("IsTangent",
             (Standard_Boolean (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Boolean (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::IsTangent),
             R"#(Returns True if the surfaces are tangent at the intersection point.)#" )
        .def("Direction",
             (const gp_Dir & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<const gp_Dir & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::Direction),
             R"#(Returns the tangent at the intersection line.)#" )
        .def("DirectionOnS1",
             (const gp_Dir2d & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<const gp_Dir2d & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::DirectionOnS1),
             R"#(Returns the tangent at the intersection line in the parametric space of the first surface.)#" )
        .def("DirectionOnS2",
             (const gp_Dir2d & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<const gp_Dir2d & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::DirectionOnS2),
             R"#(Returns the tangent at the intersection line in the parametric space of the second surface.)#" )
        .def("Function",
             (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() ) static_cast<BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() >(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::Function),
             R"#(return the math function which is used to compute the intersection)#" )
        .def("ChangePoint",
             (IntSurf_PntOn2S & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() ) static_cast<IntSurf_PntOn2S & (BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() >(&BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox::ChangePoint),
             R"#(return the intersection point which is enable for changing.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheMultiLineOfApprox , shared_ptr<BRepApprox_TheMultiLineOfApprox> >>(m.attr("BRepApprox_TheMultiLineOfApprox"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BRepApprox_ApproxLine> &,const Standard_Address,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Integer,const Standard_Integer >()  , py::arg("line"),  py::arg("PtrSvSurfaces"),  py::arg("NbP3d"),  py::arg("NbP2d"),  py::arg("ApproxU1V1"),  py::arg("ApproxU2V2"),  py::arg("xo"),  py::arg("yo"),  py::arg("zo"),  py::arg("u1o"),  py::arg("v1o"),  py::arg("u2o"),  py::arg("v2o"),  py::arg("P2DOnFirst"),  py::arg("IndMin")=static_cast<const Standard_Integer>(0),  py::arg("IndMax")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const opencascade::handle<BRepApprox_ApproxLine> &,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Integer,const Standard_Integer >()  , py::arg("line"),  py::arg("NbP3d"),  py::arg("NbP2d"),  py::arg("ApproxU1V1"),  py::arg("ApproxU2V2"),  py::arg("xo"),  py::arg("yo"),  py::arg("zo"),  py::arg("u1o"),  py::arg("v1o"),  py::arg("u2o"),  py::arg("v2o"),  py::arg("P2DOnFirst"),  py::arg("IndMin")=static_cast<const Standard_Integer>(0),  py::arg("IndMax")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("FirstPoint",
             (Standard_Integer (BRepApprox_TheMultiLineOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_TheMultiLineOfApprox::*)() const>(&BRepApprox_TheMultiLineOfApprox::FirstPoint),
             R"#(None)#" )
        .def("LastPoint",
             (Standard_Integer (BRepApprox_TheMultiLineOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_TheMultiLineOfApprox::*)() const>(&BRepApprox_TheMultiLineOfApprox::LastPoint),
             R"#(None)#" )
        .def("NbP2d",
             (Standard_Integer (BRepApprox_TheMultiLineOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_TheMultiLineOfApprox::*)() const>(&BRepApprox_TheMultiLineOfApprox::NbP2d),
             R"#(Returns the number of 2d points of a TheLine.)#" )
        .def("NbP3d",
             (Standard_Integer (BRepApprox_TheMultiLineOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_TheMultiLineOfApprox::*)() const>(&BRepApprox_TheMultiLineOfApprox::NbP3d),
             R"#(Returns the number of 3d points of a TheLine.)#" )
        .def("WhatStatus",
             (Approx_Status (BRepApprox_TheMultiLineOfApprox::*)() const) static_cast<Approx_Status (BRepApprox_TheMultiLineOfApprox::*)() const>(&BRepApprox_TheMultiLineOfApprox::WhatStatus),
             R"#(None)#" )
        .def("Value",
             (void (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt> & ) const) static_cast<void (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt> & ) const>(&BRepApprox_TheMultiLineOfApprox::Value),
             R"#(Returns the 3d points of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("MPointIndex"),  py::arg("tabPt"))
        .def("Value",
             (void (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & ) const) static_cast<void (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt2d> & ) const>(&BRepApprox_TheMultiLineOfApprox::Value),
             R"#(Returns the 2d points of the multipoint <MPointIndex> when only 2d points exist.)#"  , py::arg("MPointIndex"),  py::arg("tabPt2d"))
        .def("Value",
             (void (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & ) const) static_cast<void (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & ) const>(&BRepApprox_TheMultiLineOfApprox::Value),
             R"#(Returns the 3d and 2d points of the multipoint <MPointIndex>.)#"  , py::arg("MPointIndex"),  py::arg("tabPt"),  py::arg("tabPt2d"))
        .def("Tangency",
             (Standard_Boolean (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec> & ) const) static_cast<Standard_Boolean (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec> & ) const>(&BRepApprox_TheMultiLineOfApprox::Tangency),
             R"#(Returns the 3d tangency points of the multipoint <MPointIndex> only when 3d points exist.)#"  , py::arg("MPointIndex"),  py::arg("tabV"))
        .def("Tangency",
             (Standard_Boolean (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) const) static_cast<Standard_Boolean (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) const>(&BRepApprox_TheMultiLineOfApprox::Tangency),
             R"#(Returns the 2d tangency points of the multipoint <MPointIndex> only when 2d points exist.)#"  , py::arg("MPointIndex"),  py::arg("tabV2d"))
        .def("Tangency",
             (Standard_Boolean (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) const) static_cast<Standard_Boolean (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) const>(&BRepApprox_TheMultiLineOfApprox::Tangency),
             R"#(Returns the 3d and 2d points of the multipoint <MPointIndex>.)#"  , py::arg("MPointIndex"),  py::arg("tabV"),  py::arg("tabV2d"))
        .def("MakeMLBetween",
             (BRepApprox_TheMultiLineOfApprox (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const) static_cast<BRepApprox_TheMultiLineOfApprox (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const>(&BRepApprox_TheMultiLineOfApprox::MakeMLBetween),
             R"#(Tries to make a sub-line between <Low> and <High> points of this line by adding <NbPointsToInsert> new points)#"  , py::arg("Low"),  py::arg("High"),  py::arg("NbPointsToInsert"))
        .def("MakeMLOneMorePoint",
             (Standard_Boolean (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , BRepApprox_TheMultiLineOfApprox & ) const) static_cast<Standard_Boolean (BRepApprox_TheMultiLineOfApprox::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , BRepApprox_TheMultiLineOfApprox & ) const>(&BRepApprox_TheMultiLineOfApprox::MakeMLOneMorePoint),
             R"#(Tries to make a sub-line between <Low> and <High> points of this line by adding one more point between (indbad-1)-th and indbad-th points)#"  , py::arg("Low"),  py::arg("High"),  py::arg("indbad"),  py::arg("OtherLine"))
        .def("Dump",
             (void (BRepApprox_TheMultiLineOfApprox::*)() const) static_cast<void (BRepApprox_TheMultiLineOfApprox::*)() const>(&BRepApprox_TheMultiLineOfApprox::Dump),
             R"#(Dump of the current multi-line.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepApprox_TheMultiLineToolOfApprox , shared_ptr<BRepApprox_TheMultiLineToolOfApprox>>(m,"BRepApprox_TheMultiLineToolOfApprox");

    static_cast<py::class_<BRepApprox_TheMultiLineToolOfApprox , shared_ptr<BRepApprox_TheMultiLineToolOfApprox> >>(m.attr("BRepApprox_TheMultiLineToolOfApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstPoint_s",
                    (Standard_Integer (*)( const BRepApprox_TheMultiLineOfApprox & ) ) static_cast<Standard_Integer (*)( const BRepApprox_TheMultiLineOfApprox & ) >(&BRepApprox_TheMultiLineToolOfApprox::FirstPoint),
                    R"#(Returns the number of multipoints of the TheMultiLine.)#"  , py::arg("ML"))
        .def_static("LastPoint_s",
                    (Standard_Integer (*)( const BRepApprox_TheMultiLineOfApprox & ) ) static_cast<Standard_Integer (*)( const BRepApprox_TheMultiLineOfApprox & ) >(&BRepApprox_TheMultiLineToolOfApprox::LastPoint),
                    R"#(Returns the number of multipoints of the TheMultiLine.)#"  , py::arg("ML"))
        .def_static("NbP2d_s",
                    (Standard_Integer (*)( const BRepApprox_TheMultiLineOfApprox & ) ) static_cast<Standard_Integer (*)( const BRepApprox_TheMultiLineOfApprox & ) >(&BRepApprox_TheMultiLineToolOfApprox::NbP2d),
                    R"#(Returns the number of 2d points of a TheMultiLine.)#"  , py::arg("ML"))
        .def_static("NbP3d_s",
                    (Standard_Integer (*)( const BRepApprox_TheMultiLineOfApprox & ) ) static_cast<Standard_Integer (*)( const BRepApprox_TheMultiLineOfApprox & ) >(&BRepApprox_TheMultiLineToolOfApprox::NbP3d),
                    R"#(Returns the number of 3d points of a TheMultiLine.)#"  , py::arg("ML"))
        .def_static("Value_s",
                    (void (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt> & ) ) static_cast<void (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt> & ) >(&BRepApprox_TheMultiLineToolOfApprox::Value),
                    R"#(returns the 3d points of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabPt"))
        .def_static("Value_s",
                    (void (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt2d> & ) ) static_cast<void (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt2d> & ) >(&BRepApprox_TheMultiLineToolOfApprox::Value),
                    R"#(returns the 2d points of the multipoint <MPointIndex> when only 2d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabPt2d"))
        .def_static("Value_s",
                    (void (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & ) ) static_cast<void (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Pnt> & , NCollection_Array1<gp_Pnt2d> & ) >(&BRepApprox_TheMultiLineToolOfApprox::Value),
                    R"#(returns the 3d and 2d points of the multipoint <MPointIndex>.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabPt"),  py::arg("tabPt2d"))
        .def_static("Tangency_s",
                    (Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & ) ) static_cast<Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & ) >(&BRepApprox_TheMultiLineToolOfApprox::Tangency),
                    R"#(returns the 3d points of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"))
        .def_static("Tangency_s",
                    (Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) >(&BRepApprox_TheMultiLineToolOfApprox::Tangency),
                    R"#(returns the 2d tangency points of the multipoint <MPointIndex> only when 2d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV2d"))
        .def_static("Tangency_s",
                    (Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) >(&BRepApprox_TheMultiLineToolOfApprox::Tangency),
                    R"#(returns the 3d and 2d points of the multipoint <MPointIndex>.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"),  py::arg("tabV2d"))
        .def_static("Curvature_s",
                    (Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & ) ) static_cast<Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & ) >(&BRepApprox_TheMultiLineToolOfApprox::Curvature),
                    R"#(returns the 3d curvature of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"))
        .def_static("Curvature_s",
                    (Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec2d> & ) >(&BRepApprox_TheMultiLineToolOfApprox::Curvature),
                    R"#(returns the 2d curvature points of the multipoint <MPointIndex> only when 2d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV2d"))
        .def_static("Curvature_s",
                    (Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) ) static_cast<Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , NCollection_Array1<gp_Vec> & , NCollection_Array1<gp_Vec2d> & ) >(&BRepApprox_TheMultiLineToolOfApprox::Curvature),
                    R"#(returns the 3d and 2d curvature of the multipoint <MPointIndex>.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"),  py::arg("tabV2d"))
        .def_static("MakeMLBetween_s",
                    (BRepApprox_TheMultiLineOfApprox (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<BRepApprox_TheMultiLineOfApprox (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&BRepApprox_TheMultiLineToolOfApprox::MakeMLBetween),
                    R"#(Is called if WhatStatus returned "PointsAdded".)#"  , py::arg("ML"),  py::arg("I1"),  py::arg("I2"),  py::arg("NbPMin"))
        .def_static("MakeMLOneMorePoint_s",
                    (Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , const Standard_Integer , const Standard_Integer , BRepApprox_TheMultiLineOfApprox & ) ) static_cast<Standard_Boolean (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , const Standard_Integer , const Standard_Integer , BRepApprox_TheMultiLineOfApprox & ) >(&BRepApprox_TheMultiLineToolOfApprox::MakeMLOneMorePoint),
                    R"#(Is called when the Bezier curve contains a loop)#"  , py::arg("ML"),  py::arg("I1"),  py::arg("I2"),  py::arg("indbad"),  py::arg("OtherLine"))
        .def_static("WhatStatus_s",
                    (Approx_Status (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , const Standard_Integer ) ) static_cast<Approx_Status (*)( const BRepApprox_TheMultiLineOfApprox & , const Standard_Integer , const Standard_Integer ) >(&BRepApprox_TheMultiLineToolOfApprox::WhatStatus),
                    R"#(None)#"  , py::arg("ML"),  py::arg("I1"),  py::arg("I2"))
        .def_static("Dump_s",
                    (void (*)( const BRepApprox_TheMultiLineOfApprox & ) ) static_cast<void (*)( const BRepApprox_TheMultiLineOfApprox & ) >(&BRepApprox_TheMultiLineToolOfApprox::Dump),
                    R"#(Dump of the current multi-line.)#"  , py::arg("ML"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ThePrmPrmSvSurfacesOfApprox , shared_ptr<BRepApprox_ThePrmPrmSvSurfacesOfApprox> >>(m.attr("BRepApprox_ThePrmPrmSvSurfacesOfApprox"))
    // constructors
        .def(py::init< const BRepAdaptor_Surface &,const BRepAdaptor_Surface & >()  , py::arg("Surf1"),  py::arg("Surf2") )
    // custom constructors
    // methods
        .def("Compute",
             (Standard_Boolean (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<Standard_Boolean (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & , gp_Pnt & , gp_Vec & , gp_Vec2d & , gp_Vec2d & ) >(&BRepApprox_ThePrmPrmSvSurfacesOfApprox::Compute),
             R"#(returns True if Tg,Tguv1 Tguv2 can be computed.)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Pt"),  py::arg("Tg"),  py::arg("Tguv1"),  py::arg("Tguv2"))
        .def("Pnt",
             (void (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Pnt & ) ) static_cast<void (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Pnt & ) >(&BRepApprox_ThePrmPrmSvSurfacesOfApprox::Pnt),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("P"))
        .def("SeekPoint",
             (Standard_Boolean (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , IntSurf_PntOn2S & ) ) static_cast<Standard_Boolean (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , IntSurf_PntOn2S & ) >(&BRepApprox_ThePrmPrmSvSurfacesOfApprox::SeekPoint),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Point"))
        .def("Tangency",
             (Standard_Boolean (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec & ) ) static_cast<Standard_Boolean (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec & ) >(&BRepApprox_ThePrmPrmSvSurfacesOfApprox::Tangency),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
        .def("TangencyOnSurf1",
             (Standard_Boolean (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) ) static_cast<Standard_Boolean (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) >(&BRepApprox_ThePrmPrmSvSurfacesOfApprox::TangencyOnSurf1),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
        .def("TangencyOnSurf2",
             (Standard_Boolean (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) ) static_cast<Standard_Boolean (BRepApprox_ThePrmPrmSvSurfacesOfApprox::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec2d & ) >(&BRepApprox_ThePrmPrmSvSurfacesOfApprox::TangencyOnSurf2),
             R"#(None)#"  , py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("Tg"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox , shared_ptr<BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox> , math_FunctionSetWithDerivatives>>(m.attr("BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const BRepAdaptor_Surface &,const IntSurf_Quadric & >()  , py::arg("PS"),  py::arg("IS") )
        .def(py::init< const IntSurf_Quadric & >()  , py::arg("IS") )
    // custom constructors
    // methods
        .def("Set",
             (void (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const BRepAdaptor_Surface & ) ) static_cast<void (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const BRepAdaptor_Surface & ) >(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::Set),
             R"#(None)#"  , py::arg("PS"))
        .def("SetImplicitSurface",
             (void (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const IntSurf_Quadric & ) ) static_cast<void (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const IntSurf_Quadric & ) >(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::SetImplicitSurface),
             R"#(None)#"  , py::arg("IS"))
        .def("Set",
             (void (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const Standard_Real ) ) static_cast<void (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const Standard_Real ) >(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::Set),
             R"#(None)#"  , py::arg("Tolerance"))
        .def("NbVariables",
             (Standard_Integer (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Integer (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Vector & ) >(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Matrix & ) >(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::Derivatives),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Root",
             (Standard_Real (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::Root),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::Tolerance),
             R"#(Returns the value Tol so that if Abs(Func.Root())<Tol the function is considered null.)#" )
        .def("Point",
             (const gp_Pnt & (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const) static_cast<const gp_Pnt & (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::Point),
             R"#(None)#" )
        .def("IsTangent",
             (Standard_Boolean (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() ) static_cast<Standard_Boolean (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() >(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::IsTangent),
             R"#(None)#" )
        .def("Direction3d",
             (const gp_Vec & (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() ) static_cast<const gp_Vec & (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() >(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::Direction3d),
             R"#(None)#" )
        .def("Direction2d",
             (const gp_Dir2d & (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() ) static_cast<const gp_Dir2d & (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() >(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::Direction2d),
             R"#(None)#" )
        .def("PSurface",
             (const BRepAdaptor_Surface & (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const) static_cast<const BRepAdaptor_Surface & (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::PSurface),
             R"#(None)#" )
        .def("ISurface",
             (const IntSurf_Quadric & (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const) static_cast<const IntSurf_Quadric & (BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox::ISurface),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_Approx.hxx
// ./opencascade/BRepApprox_ThePrmPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_ApproxLine.hxx
// ./opencascade/BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_SurfaceTool.hxx
// ./opencascade/BRepApprox_TheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_TheImpPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_TheMultiLineToolOfApprox.hxx
// ./opencascade/BRepApprox_TheMultiLineOfApprox.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
