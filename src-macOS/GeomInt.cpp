
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox> , math_BFGS>>(m.attr("GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox"))
    // constructors
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox> >>(m.attr("GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox> , math_BFGS>>(m.attr("GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox"))
    // constructors
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
             (void (GeomInt_IntSS::*)( const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (GeomInt_IntSS::*)( const opencascade::handle<GeomAdaptor_HSurface> & , const opencascade::handle<GeomAdaptor_HSurface> & , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&GeomInt_IntSS::Perform),
             R"#(intersection of adapted surfaces)#"  , py::arg("HS1"),  py::arg("HS2"),  py::arg("Tol"),  py::arg("Approx")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("ApproxS1")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("ApproxS2")=static_cast<const Standard_Boolean>(Standard_False))
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
        .def("NbBoundaries",
             (Standard_Integer (GeomInt_IntSS::*)() const) static_cast<Standard_Integer (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::NbBoundaries),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (GeomInt_IntSS::*)() const) static_cast<Standard_Integer (GeomInt_IntSS::*)() const>(&GeomInt_IntSS::NbPoints),
             R"#(None)#" )
        .def("Point",
             (gp_Pnt (GeomInt_IntSS::*)( const Standard_Integer ) const) static_cast<gp_Pnt (GeomInt_IntSS::*)( const Standard_Integer ) const>(&GeomInt_IntSS::Point),
             R"#(None)#"  , py::arg("Index"))
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
    // static methods using call by reference i.s.o. return
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox> >>(m.attr("GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox> >>(m.attr("GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_MyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_MyGradientbisOfTheComputeLineOfWLApprox> >>(m.attr("GeomInt_MyGradientbisOfTheComputeLineOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox> , math_MultipleVarFunctionWithGradient>>(m.attr("GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox"))
    // constructors
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox> , math_MultipleVarFunctionWithGradient>>(m.attr("GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox"))
    // constructors
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox> >>(m.attr("GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox> >>(m.attr("GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ParameterAndOrientation , shared_ptr<GeomInt_ParameterAndOrientation> >>(m.attr("GeomInt_ParameterAndOrientation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox> >>(m.attr("GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox , shared_ptr<GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox> >>(m.attr("GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_TheComputeLineBezierOfWLApprox , shared_ptr<GeomInt_TheComputeLineBezierOfWLApprox> >>(m.attr("GeomInt_TheComputeLineBezierOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_TheComputeLineOfWLApprox , shared_ptr<GeomInt_TheComputeLineOfWLApprox> >>(m.attr("GeomInt_TheComputeLineOfWLApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox , shared_ptr<GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox> , math_FunctionSetWithDerivatives>>(m.attr("GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox"))
    // constructors
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
        .def("Root",
             (Standard_Real (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<Standard_Real (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Root),
             R"#(returns somme des fi*fi)#" )
        .def("Point",
             (gp_Pnt (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const) static_cast<gp_Pnt (GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::*)() const>(&GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox::Point),
             R"#(None)#" )
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
    // custom constructors
    // methods
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
    // custom constructors
    // methods
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_ParameterAndOrientation.hxx
// ./opencascade/GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_VectorOfReal.hxx
// ./opencascade/GeomInt_TheImpPrmSvSurfacesOfWLApprox.hxx
// ./opencascade/GeomInt_TheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_IntSS.hxx
// ./opencascade/GeomInt_TheMultiLineToolOfWLApprox.hxx
// ./opencascade/GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx
// ./opencascade/GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx
// ./opencascade/GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_WLApprox.hxx
// ./opencascade/GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_TheMultiLineOfWLApprox.hxx
// ./opencascade/GeomInt_ThePrmPrmSvSurfacesOfWLApprox.hxx
// ./opencascade/GeomInt.hxx
// ./opencascade/GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_LineTool.hxx
// ./opencascade/GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx
// ./opencascade/GeomInt_TheComputeLineBezierOfWLApprox.hxx
// ./opencascade/GeomInt_SequenceOfParameterAndOrientation.hxx
// ./opencascade/GeomInt_LineConstructor.hxx
// ./opencascade/GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx

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
