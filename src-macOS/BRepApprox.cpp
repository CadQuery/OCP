
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <BRepApprox_ApproxLine.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <BRepApprox_ApproxLine.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <math_Matrix.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
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
#include <BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntSurf_PntOn2S.hxx>
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
#include <BRepApprox_ApproxLine.hxx>
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
#include <Standard_NoSuchObject.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>

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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ApproxLine ,opencascade::handle<BRepApprox_ApproxLine> , Standard_Transient>>(m.attr("BRepApprox_ApproxLine"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepApprox_ApproxLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepApprox_ApproxLine::*)() const>(&BRepApprox_ApproxLine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepApprox_ApproxLine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox , shared_ptr<BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox> , math_BFGS>>(m.attr("BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox"))
    // constructors
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox , shared_ptr<BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox> >>(m.attr("BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox , shared_ptr<BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox> , math_BFGS>>(m.attr("BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox"))
    // constructors
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_MyGradientOfTheComputeLineBezierOfApprox , shared_ptr<BRepApprox_MyGradientOfTheComputeLineBezierOfApprox> >>(m.attr("BRepApprox_MyGradientOfTheComputeLineBezierOfApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_MyGradientbisOfTheComputeLineOfApprox , shared_ptr<BRepApprox_MyGradientbisOfTheComputeLineOfApprox> >>(m.attr("BRepApprox_MyGradientbisOfTheComputeLineOfApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox , shared_ptr<BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox> , math_MultipleVarFunctionWithGradient>>(m.attr("BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox"))
    // constructors
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox , shared_ptr<BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox> , math_MultipleVarFunctionWithGradient>>(m.attr("BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox"))
    // constructors
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox , shared_ptr<BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox> >>(m.attr("BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox , shared_ptr<BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox> >>(m.attr("BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox , shared_ptr<BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox> >>(m.attr("BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox , shared_ptr<BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox> >>(m.attr("BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox"))
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheComputeLineBezierOfApprox , shared_ptr<BRepApprox_TheComputeLineBezierOfApprox> >>(m.attr("BRepApprox_TheComputeLineBezierOfApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheComputeLineOfApprox , shared_ptr<BRepApprox_TheComputeLineOfApprox> >>(m.attr("BRepApprox_TheComputeLineOfApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox , shared_ptr<BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox> , math_FunctionSetWithDerivatives>>(m.attr("BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox"))
    // constructors
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
        .def("Root",
             (Standard_Real (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<Standard_Real (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::Root),
             R"#(returns somme des fi*fi)#" )
        .def("Point",
             (gp_Pnt (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const) static_cast<gp_Pnt (BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::*)() const>(&BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox::Point),
             R"#(None)#" )
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox , shared_ptr<BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox> >>(m.attr("BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox"))
    // constructors
    // custom constructors
    // methods
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
    // custom constructors
    // methods
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
// ./opencascade/BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheMultiLineToolOfApprox.hxx
// ./opencascade/BRepApprox_ThePrmPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_TheImpPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_Approx.hxx
// ./opencascade/BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx
// ./opencascade/BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_ApproxLine.hxx
// ./opencascade/BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheMultiLineOfApprox.hxx
// ./opencascade/BRepApprox_TheComputeLineOfApprox.hxx
// ./opencascade/BRepApprox_TheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_SurfaceTool.hxx
// ./opencascade/BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox.hxx
// ./opencascade/BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
