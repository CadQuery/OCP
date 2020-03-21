
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
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ResConstraintOfTheGradient.hxx>
#include <StdFail_NotDone.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyGradientOfCompute.hxx>
#include <AppDef_ParLeastSquareOfMyGradientOfCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientOfCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientOfCompute.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <FEmTool_ElementaryCriterion.hxx>
#include <FEmTool_Curve.hxx>
#include <Standard_NotImplemented.hxx>
#include <math_Matrix.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyGradientOfCompute.hxx>
#include <AppDef_ParLeastSquareOfMyGradientOfCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientOfCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientOfCompute.hxx>
#include <AppDef_Gradient_BFGSOfMyGradientOfCompute.hxx>
#include <Standard_NotImplemented.hxx>
#include <FEmTool_Curve.hxx>
#include <math_Matrix.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_MyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <AppDef_SmoothCriterion.hxx>
#include <StdFail_NotDone.hxx>
#include <math_Matrix.hxx>
#include <FEmTool_Curve.hxx>
#include <FEmTool_Assembly.hxx>
#include <PLib_Base.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_TheGradient.hxx>
#include <AppDef_ParLeastSquareOfTheGradient.hxx>
#include <AppDef_ResConstraintOfTheGradient.hxx>
#include <AppDef_ParFunctionOfTheGradient.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <AppDef_MyLineTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppDef_MultiLine.hxx>
#include <StdFail_NotDone.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ParLeastSquareOfTheGradient.hxx>
#include <AppDef_ResConstraintOfTheGradient.hxx>
#include <AppDef_ParFunctionOfTheGradient.hxx>
#include <AppDef_Gradient_BFGSOfTheGradient.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_TheResol.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ResConstraintOfMyGradientOfCompute.hxx>
#include <StdFail_NotDone.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#include <StdFail_NotDone.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ParLeastSquareOfMyGradientOfCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientOfCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientOfCompute.hxx>
#include <AppDef_Gradient_BFGSOfMyGradientOfCompute.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppParCurves_MultiCurve.hxx>

// module includes
#include <AppDef_Array1OfMultiPointConstraint.hxx>
#include <AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSplineCompute.hxx>
#include <AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_Compute.hxx>
#include <AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_Gradient_BFGSOfMyGradientOfCompute.hxx>
#include <AppDef_Gradient_BFGSOfTheGradient.hxx>
#include <AppDef_HArray1OfMultiPointConstraint.hxx>
#include <AppDef_LinearCriteria.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MultiPointConstraint.hxx>
#include <AppDef_MyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_MyGradientbisOfBSplineCompute.hxx>
#include <AppDef_MyGradientOfCompute.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientOfCompute.hxx>
#include <AppDef_ParFunctionOfTheGradient.hxx>
#include <AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParLeastSquareOfMyGradientOfCompute.hxx>
#include <AppDef_ParLeastSquareOfTheGradient.hxx>
#include <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientOfCompute.hxx>
#include <AppDef_ResConstraintOfTheGradient.hxx>
#include <AppDef_SmoothCriterion.hxx>
#include <AppDef_TheFunction.hxx>
#include <AppDef_TheGradient.hxx>
#include <AppDef_TheLeastSquares.hxx>
#include <AppDef_TheResol.hxx>
#include <AppDef_Variational.hxx>

// template related includes
// ./opencascade/AppDef_Array1OfMultiPointConstraint.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppDef(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AppDef"));


//Python trampoline classes
    class Py_AppDef_SmoothCriterion : public AppDef_SmoothCriterion{
    public:
        using AppDef_SmoothCriterion::AppDef_SmoothCriterion;


        // public pure virtual
        void SetParameters(const opencascade::handle<TColStd_HArray1OfReal> & Parameters) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,SetParameters,Parameters) };
        void SetCurve(const opencascade::handle<FEmTool_Curve> & C) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,SetCurve,C) };
        void GetCurve(opencascade::handle<FEmTool_Curve> & C) const  override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,GetCurve,C) };
        void SetEstimation(const Standard_Real E1,const Standard_Real E2,const Standard_Real E3) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,SetEstimation,E1,E2,E3) };
        Standard_Real & EstLength() override { PYBIND11_OVERLOAD_PURE(Standard_Real &,AppDef_SmoothCriterion,EstLength,) };
        opencascade::handle<FEmTool_HAssemblyTable> AssemblyTable() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<FEmTool_HAssemblyTable>,AppDef_SmoothCriterion,AssemblyTable,) };
        opencascade::handle<TColStd_HArray2OfInteger> DependenceTable() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TColStd_HArray2OfInteger>,AppDef_SmoothCriterion,DependenceTable,) };
        Standard_Integer QualityValues(const Standard_Real J1min,const Standard_Real J2min,const Standard_Real J3min,Standard_Real & J1,Standard_Real & J2,Standard_Real & J3) override { PYBIND11_OVERLOAD_PURE(Standard_Integer,AppDef_SmoothCriterion,QualityValues,J1min,J2min,J3min,J1,J2,J3) };
        void Hessian(const Standard_Integer Element,const Standard_Integer Dimension1,const Standard_Integer Dimension2,math_Matrix & H) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,Hessian,Element,Dimension1,Dimension2,H) };
        void Gradient(const Standard_Integer Element,const Standard_Integer Dimension,math_Vector & G) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,Gradient,Element,Dimension,G) };
        void InputVector(const math_Vector & X,const opencascade::handle<FEmTool_HAssemblyTable> & AssTable) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,InputVector,X,AssTable) };
        void SetWeight(const Standard_Real QuadraticWeight,const Standard_Real QualityWeight,const Standard_Real percentJ1,const Standard_Real percentJ2,const Standard_Real percentJ3) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,SetWeight,QuadraticWeight,QualityWeight,percentJ1,percentJ2,percentJ3) };
        void SetWeight( const NCollection_Array1<Standard_Real> & Weight) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,SetWeight,Weight) };
        void GetEstimation(Standard_Real & E1,Standard_Real & E2,Standard_Real & E3) const  override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,GetEstimation,E1,E2,E3) };
        void ErrorValues(Standard_Real & MaxError,Standard_Real & QuadraticError,Standard_Real & AverageError) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,ErrorValues,MaxError,QuadraticError,AverageError) };
        void GetWeight(Standard_Real & QuadraticWeight,Standard_Real & QualityWeight) const  override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,GetWeight,QuadraticWeight,QualityWeight) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute , shared_ptr<AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute> , math_BFGS>>(m.attr("AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute"))
    // constructors
    // custom constructors
    // methods
        .def("IsSolutionReached",
             (Standard_Boolean (AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute::*)( math_MultipleVarFunctionWithGradient & ) const>(&AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute , shared_ptr<AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute> , math_MultipleVarFunctionWithGradient>>(m.attr("AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Integer (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & , Standard_Real & ) >(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & , math_Vector & ) >(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute , shared_ptr<AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute> >>(m.attr("AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_BSplineCompute , shared_ptr<AppDef_BSplineCompute> >>(m.attr("AppDef_BSplineCompute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_Compute , shared_ptr<AppDef_Compute> >>(m.attr("AppDef_Compute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_Gradient_BFGSOfMyGradientOfCompute , shared_ptr<AppDef_Gradient_BFGSOfMyGradientOfCompute> , math_BFGS>>(m.attr("AppDef_Gradient_BFGSOfMyGradientOfCompute"))
    // constructors
    // custom constructors
    // methods
        .def("IsSolutionReached",
             (Standard_Boolean (AppDef_Gradient_BFGSOfMyGradientOfCompute::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (AppDef_Gradient_BFGSOfMyGradientOfCompute::*)( math_MultipleVarFunctionWithGradient & ) const>(&AppDef_Gradient_BFGSOfMyGradientOfCompute::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute , shared_ptr<AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute> , math_BFGS>>(m.attr("AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute"))
    // constructors
    // custom constructors
    // methods
        .def("IsSolutionReached",
             (Standard_Boolean (AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute::*)( math_MultipleVarFunctionWithGradient & ) const>(&AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_Gradient_BFGSOfTheGradient , shared_ptr<AppDef_Gradient_BFGSOfTheGradient> , math_BFGS>>(m.attr("AppDef_Gradient_BFGSOfTheGradient"))
    // constructors
    // custom constructors
    // methods
        .def("IsSolutionReached",
             (Standard_Boolean (AppDef_Gradient_BFGSOfTheGradient::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (AppDef_Gradient_BFGSOfTheGradient::*)( math_MultipleVarFunctionWithGradient & ) const>(&AppDef_Gradient_BFGSOfTheGradient::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_HArray1OfMultiPointConstraint ,opencascade::handle<AppDef_HArray1OfMultiPointConstraint> , AppDef_Array1OfMultiPointConstraint, Standard_Transient>>(m.attr("AppDef_HArray1OfMultiPointConstraint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const AppDef_MultiPointConstraint & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<AppDef_MultiPointConstraint> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const AppDef_Array1OfMultiPointConstraint & (AppDef_HArray1OfMultiPointConstraint::*)() const) static_cast<const AppDef_Array1OfMultiPointConstraint & (AppDef_HArray1OfMultiPointConstraint::*)() const>(&AppDef_HArray1OfMultiPointConstraint::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (AppDef_Array1OfMultiPointConstraint & (AppDef_HArray1OfMultiPointConstraint::*)() ) static_cast<AppDef_Array1OfMultiPointConstraint & (AppDef_HArray1OfMultiPointConstraint::*)() >(&AppDef_HArray1OfMultiPointConstraint::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppDef_HArray1OfMultiPointConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppDef_HArray1OfMultiPointConstraint::*)() const>(&AppDef_HArray1OfMultiPointConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppDef_HArray1OfMultiPointConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AppDef_HArray1OfMultiPointConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_MultiLine , shared_ptr<AppDef_MultiLine> >>(m.attr("AppDef_MultiLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_MultiPointConstraint , shared_ptr<AppDef_MultiPointConstraint> , AppParCurves_MultiPoint>>(m.attr("AppDef_MultiPointConstraint"))
    // constructors
    // custom constructors
    // methods
        .def("Dump",
             (void (AppDef_MultiPointConstraint::*)( std::ostream & ) const) static_cast<void (AppDef_MultiPointConstraint::*)( std::ostream & ) const>(&AppDef_MultiPointConstraint::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_MyBSplGradientOfBSplineCompute , shared_ptr<AppDef_MyBSplGradientOfBSplineCompute> >>(m.attr("AppDef_MyBSplGradientOfBSplineCompute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_MyGradientOfCompute , shared_ptr<AppDef_MyGradientOfCompute> >>(m.attr("AppDef_MyGradientOfCompute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_MyGradientbisOfBSplineCompute , shared_ptr<AppDef_MyGradientbisOfBSplineCompute> >>(m.attr("AppDef_MyGradientbisOfBSplineCompute"))
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
    register_default_constructor<AppDef_MyLineTool , shared_ptr<AppDef_MyLineTool>>(m,"AppDef_MyLineTool");

    static_cast<py::class_<AppDef_MyLineTool , shared_ptr<AppDef_MyLineTool> >>(m.attr("AppDef_MyLineTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_ParFunctionOfMyGradientOfCompute , shared_ptr<AppDef_ParFunctionOfMyGradientOfCompute> , math_MultipleVarFunctionWithGradient>>(m.attr("AppDef_ParFunctionOfMyGradientOfCompute"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (AppDef_ParFunctionOfMyGradientOfCompute::*)() const) static_cast<Standard_Integer (AppDef_ParFunctionOfMyGradientOfCompute::*)() const>(&AppDef_ParFunctionOfMyGradientOfCompute::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & , Standard_Real & ) >(&AppDef_ParFunctionOfMyGradientOfCompute::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & , math_Vector & ) >(&AppDef_ParFunctionOfMyGradientOfCompute::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&AppDef_ParFunctionOfMyGradientOfCompute::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_ParFunctionOfMyGradientbisOfBSplineCompute , shared_ptr<AppDef_ParFunctionOfMyGradientbisOfBSplineCompute> , math_MultipleVarFunctionWithGradient>>(m.attr("AppDef_ParFunctionOfMyGradientbisOfBSplineCompute"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Integer (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & , Standard_Real & ) >(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & , math_Vector & ) >(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_ParFunctionOfTheGradient , shared_ptr<AppDef_ParFunctionOfTheGradient> , math_MultipleVarFunctionWithGradient>>(m.attr("AppDef_ParFunctionOfTheGradient"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (AppDef_ParFunctionOfTheGradient::*)() const) static_cast<Standard_Integer (AppDef_ParFunctionOfTheGradient::*)() const>(&AppDef_ParFunctionOfTheGradient::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & , Standard_Real & ) >(&AppDef_ParFunctionOfTheGradient::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & , math_Vector & ) >(&AppDef_ParFunctionOfTheGradient::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&AppDef_ParFunctionOfTheGradient::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_ParLeastSquareOfMyGradientOfCompute , shared_ptr<AppDef_ParLeastSquareOfMyGradientOfCompute> >>(m.attr("AppDef_ParLeastSquareOfMyGradientOfCompute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute , shared_ptr<AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute> >>(m.attr("AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_ParLeastSquareOfTheGradient , shared_ptr<AppDef_ParLeastSquareOfTheGradient> >>(m.attr("AppDef_ParLeastSquareOfTheGradient"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_ResConstraintOfMyGradientOfCompute , shared_ptr<AppDef_ResConstraintOfMyGradientOfCompute> >>(m.attr("AppDef_ResConstraintOfMyGradientOfCompute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_ResConstraintOfMyGradientbisOfBSplineCompute , shared_ptr<AppDef_ResConstraintOfMyGradientbisOfBSplineCompute> >>(m.attr("AppDef_ResConstraintOfMyGradientbisOfBSplineCompute"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_ResConstraintOfTheGradient , shared_ptr<AppDef_ResConstraintOfTheGradient> >>(m.attr("AppDef_ResConstraintOfTheGradient"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_SmoothCriterion ,opencascade::handle<AppDef_SmoothCriterion>,Py_AppDef_SmoothCriterion , Standard_Transient>>(m.attr("AppDef_SmoothCriterion"))
    // constructors
    // custom constructors
    // methods
        .def("SetParameters",
             (void (AppDef_SmoothCriterion::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (AppDef_SmoothCriterion::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&AppDef_SmoothCriterion::SetParameters),
             R"#(None)#"  , py::arg("Parameters"))
        .def("SetCurve",
             (void (AppDef_SmoothCriterion::*)( const opencascade::handle<FEmTool_Curve> & ) ) static_cast<void (AppDef_SmoothCriterion::*)( const opencascade::handle<FEmTool_Curve> & ) >(&AppDef_SmoothCriterion::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("GetCurve",
             (void (AppDef_SmoothCriterion::*)( opencascade::handle<FEmTool_Curve> & ) const) static_cast<void (AppDef_SmoothCriterion::*)( opencascade::handle<FEmTool_Curve> & ) const>(&AppDef_SmoothCriterion::GetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("SetEstimation",
             (void (AppDef_SmoothCriterion::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (AppDef_SmoothCriterion::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&AppDef_SmoothCriterion::SetEstimation),
             R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("E3"))
        .def("EstLength",
             (Standard_Real & (AppDef_SmoothCriterion::*)() ) static_cast<Standard_Real & (AppDef_SmoothCriterion::*)() >(&AppDef_SmoothCriterion::EstLength),
             R"#(None)#" )
        .def("AssemblyTable",
             (opencascade::handle<FEmTool_HAssemblyTable> (AppDef_SmoothCriterion::*)() const) static_cast<opencascade::handle<FEmTool_HAssemblyTable> (AppDef_SmoothCriterion::*)() const>(&AppDef_SmoothCriterion::AssemblyTable),
             R"#(None)#" )
        .def("DependenceTable",
             (opencascade::handle<TColStd_HArray2OfInteger> (AppDef_SmoothCriterion::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfInteger> (AppDef_SmoothCriterion::*)() const>(&AppDef_SmoothCriterion::DependenceTable),
             R"#(None)#" )
        .def("QualityValues",
             (Standard_Integer (AppDef_SmoothCriterion::*)( const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Integer (AppDef_SmoothCriterion::*)( const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & , Standard_Real & ) >(&AppDef_SmoothCriterion::QualityValues),
             R"#(None)#"  , py::arg("J1min"),  py::arg("J2min"),  py::arg("J3min"),  py::arg("J1"),  py::arg("J2"),  py::arg("J3"))
        .def("Hessian",
             (void (AppDef_SmoothCriterion::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , math_Matrix & ) ) static_cast<void (AppDef_SmoothCriterion::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , math_Matrix & ) >(&AppDef_SmoothCriterion::Hessian),
             R"#(None)#"  , py::arg("Element"),  py::arg("Dimension1"),  py::arg("Dimension2"),  py::arg("H"))
        .def("Gradient",
             (void (AppDef_SmoothCriterion::*)( const Standard_Integer , const Standard_Integer , math_Vector & ) ) static_cast<void (AppDef_SmoothCriterion::*)( const Standard_Integer , const Standard_Integer , math_Vector & ) >(&AppDef_SmoothCriterion::Gradient),
             R"#(None)#"  , py::arg("Element"),  py::arg("Dimension"),  py::arg("G"))
        .def("InputVector",
             (void (AppDef_SmoothCriterion::*)( const math_Vector & , const opencascade::handle<FEmTool_HAssemblyTable> & ) ) static_cast<void (AppDef_SmoothCriterion::*)( const math_Vector & , const opencascade::handle<FEmTool_HAssemblyTable> & ) >(&AppDef_SmoothCriterion::InputVector),
             R"#(Convert the assembly Vector in an Curve;)#"  , py::arg("X"),  py::arg("AssTable"))
        .def("SetWeight",
             (void (AppDef_SmoothCriterion::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (AppDef_SmoothCriterion::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&AppDef_SmoothCriterion::SetWeight),
             R"#(None)#"  , py::arg("QuadraticWeight"),  py::arg("QualityWeight"),  py::arg("percentJ1"),  py::arg("percentJ2"),  py::arg("percentJ3"))
        .def("SetWeight",
             (void (AppDef_SmoothCriterion::*)(  const NCollection_Array1<Standard_Real> & ) ) static_cast<void (AppDef_SmoothCriterion::*)(  const NCollection_Array1<Standard_Real> & ) >(&AppDef_SmoothCriterion::SetWeight),
             R"#(None)#"  , py::arg("Weight"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppDef_SmoothCriterion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppDef_SmoothCriterion::*)() const>(&AppDef_SmoothCriterion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetEstimation",
             []( AppDef_SmoothCriterion &self   ){ Standard_Real  E1; Standard_Real  E2; Standard_Real  E3; self.GetEstimation(E1,E2,E3); return std::make_tuple(E1,E2,E3); },
             R"#(None)#" )
        .def("ErrorValues",
             []( AppDef_SmoothCriterion &self   ){ Standard_Real  MaxError; Standard_Real  QuadraticError; Standard_Real  AverageError; self.ErrorValues(MaxError,QuadraticError,AverageError); return std::make_tuple(MaxError,QuadraticError,AverageError); },
             R"#(None)#" )
        .def("GetWeight",
             []( AppDef_SmoothCriterion &self   ){ Standard_Real  QuadraticWeight; Standard_Real  QualityWeight; self.GetWeight(QuadraticWeight,QualityWeight); return std::make_tuple(QuadraticWeight,QualityWeight); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppDef_SmoothCriterion::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_TheFunction , shared_ptr<AppDef_TheFunction> , math_MultipleVarFunctionWithGradient>>(m.attr("AppDef_TheFunction"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (AppDef_TheFunction::*)() const) static_cast<Standard_Integer (AppDef_TheFunction::*)() const>(&AppDef_TheFunction::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & , Standard_Real & ) >(&AppDef_TheFunction::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & , math_Vector & ) >(&AppDef_TheFunction::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&AppDef_TheFunction::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_TheGradient , shared_ptr<AppDef_TheGradient> >>(m.attr("AppDef_TheGradient"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_TheLeastSquares , shared_ptr<AppDef_TheLeastSquares> >>(m.attr("AppDef_TheLeastSquares"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_TheResol , shared_ptr<AppDef_TheResol> >>(m.attr("AppDef_TheResol"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_Variational , shared_ptr<AppDef_Variational> >>(m.attr("AppDef_Variational"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppDef_LinearCriteria ,opencascade::handle<AppDef_LinearCriteria> , AppDef_SmoothCriterion>>(m.attr("AppDef_LinearCriteria"))
    // constructors
    // custom constructors
    // methods
        .def("SetParameters",
             (void (AppDef_LinearCriteria::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (AppDef_LinearCriteria::*)( const opencascade::handle<TColStd_HArray1OfReal> & ) >(&AppDef_LinearCriteria::SetParameters),
             R"#(None)#"  , py::arg("Parameters"))
        .def("SetCurve",
             (void (AppDef_LinearCriteria::*)( const opencascade::handle<FEmTool_Curve> & ) ) static_cast<void (AppDef_LinearCriteria::*)( const opencascade::handle<FEmTool_Curve> & ) >(&AppDef_LinearCriteria::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("GetCurve",
             (void (AppDef_LinearCriteria::*)( opencascade::handle<FEmTool_Curve> & ) const) static_cast<void (AppDef_LinearCriteria::*)( opencascade::handle<FEmTool_Curve> & ) const>(&AppDef_LinearCriteria::GetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("SetEstimation",
             (void (AppDef_LinearCriteria::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (AppDef_LinearCriteria::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&AppDef_LinearCriteria::SetEstimation),
             R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("E3"))
        .def("EstLength",
             (Standard_Real & (AppDef_LinearCriteria::*)() ) static_cast<Standard_Real & (AppDef_LinearCriteria::*)() >(&AppDef_LinearCriteria::EstLength),
             R"#(None)#" )
        .def("AssemblyTable",
             (opencascade::handle<FEmTool_HAssemblyTable> (AppDef_LinearCriteria::*)() const) static_cast<opencascade::handle<FEmTool_HAssemblyTable> (AppDef_LinearCriteria::*)() const>(&AppDef_LinearCriteria::AssemblyTable),
             R"#(None)#" )
        .def("DependenceTable",
             (opencascade::handle<TColStd_HArray2OfInteger> (AppDef_LinearCriteria::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfInteger> (AppDef_LinearCriteria::*)() const>(&AppDef_LinearCriteria::DependenceTable),
             R"#(None)#" )
        .def("QualityValues",
             (Standard_Integer (AppDef_LinearCriteria::*)( const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Integer (AppDef_LinearCriteria::*)( const Standard_Real , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & , Standard_Real & ) >(&AppDef_LinearCriteria::QualityValues),
             R"#(None)#"  , py::arg("J1min"),  py::arg("J2min"),  py::arg("J3min"),  py::arg("J1"),  py::arg("J2"),  py::arg("J3"))
        .def("Hessian",
             (void (AppDef_LinearCriteria::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , math_Matrix & ) ) static_cast<void (AppDef_LinearCriteria::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , math_Matrix & ) >(&AppDef_LinearCriteria::Hessian),
             R"#(None)#"  , py::arg("Element"),  py::arg("Dimension1"),  py::arg("Dimension2"),  py::arg("H"))
        .def("Gradient",
             (void (AppDef_LinearCriteria::*)( const Standard_Integer , const Standard_Integer , math_Vector & ) ) static_cast<void (AppDef_LinearCriteria::*)( const Standard_Integer , const Standard_Integer , math_Vector & ) >(&AppDef_LinearCriteria::Gradient),
             R"#(None)#"  , py::arg("Element"),  py::arg("Dimension"),  py::arg("G"))
        .def("InputVector",
             (void (AppDef_LinearCriteria::*)( const math_Vector & , const opencascade::handle<FEmTool_HAssemblyTable> & ) ) static_cast<void (AppDef_LinearCriteria::*)( const math_Vector & , const opencascade::handle<FEmTool_HAssemblyTable> & ) >(&AppDef_LinearCriteria::InputVector),
             R"#(Convert the assembly Vector in an Curve;)#"  , py::arg("X"),  py::arg("AssTable"))
        .def("SetWeight",
             (void (AppDef_LinearCriteria::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (AppDef_LinearCriteria::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&AppDef_LinearCriteria::SetWeight),
             R"#(None)#"  , py::arg("QuadraticWeight"),  py::arg("QualityWeight"),  py::arg("percentJ1"),  py::arg("percentJ2"),  py::arg("percentJ3"))
        .def("SetWeight",
             (void (AppDef_LinearCriteria::*)(  const NCollection_Array1<Standard_Real> & ) ) static_cast<void (AppDef_LinearCriteria::*)(  const NCollection_Array1<Standard_Real> & ) >(&AppDef_LinearCriteria::SetWeight),
             R"#(None)#"  , py::arg("Weight"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppDef_LinearCriteria::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppDef_LinearCriteria::*)() const>(&AppDef_LinearCriteria::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetEstimation",
             []( AppDef_LinearCriteria &self   ){ Standard_Real  E1; Standard_Real  E2; Standard_Real  E3; self.GetEstimation(E1,E2,E3); return std::make_tuple(E1,E2,E3); },
             R"#(None)#" )
        .def("ErrorValues",
             []( AppDef_LinearCriteria &self   ){ Standard_Real  MaxError; Standard_Real  QuadraticError; Standard_Real  AverageError; self.ErrorValues(MaxError,QuadraticError,AverageError); return std::make_tuple(MaxError,QuadraticError,AverageError); },
             R"#(None)#" )
        .def("GetWeight",
             []( AppDef_LinearCriteria &self   ){ Standard_Real  QuadraticWeight; Standard_Real  QualityWeight; self.GetWeight(QuadraticWeight,QualityWeight); return std::make_tuple(QuadraticWeight,QualityWeight); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppDef_LinearCriteria::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/AppDef_ParLeastSquareOfTheGradient.hxx
// ./opencascade/AppDef_ParFunctionOfTheGradient.hxx
// ./opencascade/AppDef_MyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_Gradient_BFGSOfMyGradientOfCompute.hxx
// ./opencascade/AppDef_LinearCriteria.hxx
// ./opencascade/AppDef_Compute.hxx
// ./opencascade/AppDef_SmoothCriterion.hxx
// ./opencascade/AppDef_BSplineCompute.hxx
// ./opencascade/AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_MultiPointConstraint.hxx
// ./opencascade/AppDef_Variational.hxx
// ./opencascade/AppDef_TheResol.hxx
// ./opencascade/AppDef_TheLeastSquares.hxx
// ./opencascade/AppDef_Gradient_BFGSOfTheGradient.hxx
// ./opencascade/AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_ParLeastSquareOfMyGradientOfCompute.hxx
// ./opencascade/AppDef_HArray1OfMultiPointConstraint.hxx
// ./opencascade/AppDef_ResConstraintOfMyGradientOfCompute.hxx
// ./opencascade/AppDef_MultiLine.hxx
// ./opencascade/AppDef_MyLineTool.hxx
// ./opencascade/AppDef_TheGradient.hxx
// ./opencascade/AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_TheFunction.hxx
// ./opencascade/AppDef_ParFunctionOfMyGradientOfCompute.hxx
// ./opencascade/AppDef_MyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_MyGradientOfCompute.hxx
// ./opencascade/AppDef_Array1OfMultiPointConstraint.hxx
// ./opencascade/AppDef_ResConstraintOfTheGradient.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<AppDef_MultiPointConstraint>(m,"AppDef_Array1OfMultiPointConstraint");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
