
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyGradientOfCompute.hxx>
#include <AppDef_ParLeastSquareOfMyGradientOfCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientOfCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientOfCompute.hxx>
#include <AppDef_Gradient_BFGSOfMyGradientOfCompute.hxx>
#include <FEmTool_ElementaryCriterion.hxx>
#include <FEmTool_Curve.hxx>
#include <Standard_NotImplemented.hxx>
#include <math_Matrix.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ResConstraintOfTheGradient.hxx>
#include <StdFail_NotDone.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ParLeastSquareOfTheGradient.hxx>
#include <AppDef_ResConstraintOfTheGradient.hxx>
#include <AppDef_ParFunctionOfTheGradient.hxx>
#include <AppDef_Gradient_BFGSOfTheGradient.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ResConstraintOfMyGradientOfCompute.hxx>
#include <AppDef_MultiLine.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_TheResol.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppParCurves_MultiCurve.hxx>
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
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#include <StdFail_NotDone.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_TheGradient.hxx>
#include <AppDef_ParLeastSquareOfTheGradient.hxx>
#include <AppDef_ResConstraintOfTheGradient.hxx>
#include <AppDef_ParFunctionOfTheGradient.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <Standard_NotImplemented.hxx>
#include <FEmTool_Curve.hxx>
#include <math_Matrix.hxx>
#include <AppDef_SmoothCriterion.hxx>
#include <StdFail_NotDone.hxx>
#include <math_Matrix.hxx>
#include <FEmTool_Curve.hxx>
#include <FEmTool_Assembly.hxx>
#include <PLib_Base.hxx>
#include <StdFail_NotDone.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_ParLeastSquareOfMyGradientOfCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientOfCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientOfCompute.hxx>
#include <AppDef_Gradient_BFGSOfMyGradientOfCompute.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyGradientOfCompute.hxx>
#include <AppDef_ParLeastSquareOfMyGradientOfCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientOfCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientOfCompute.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <StdFail_NotDone.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>
#include <AppDef_MyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx>
#include <AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NoSuchObject.hxx>
#include <AppDef_MultiLine.hxx>
#include <AppDef_MyLineTool.hxx>

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
#include "NCollection.hxx"


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
        void GetEstimation(Standard_Real & E1,Standard_Real & E2,Standard_Real & E3) const  override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,GetEstimation,E1,E2,E3) };
        opencascade::handle<FEmTool_HAssemblyTable> AssemblyTable() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<FEmTool_HAssemblyTable>,AppDef_SmoothCriterion,AssemblyTable,) };
        opencascade::handle<TColStd_HArray2OfInteger> DependenceTable() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TColStd_HArray2OfInteger>,AppDef_SmoothCriterion,DependenceTable,) };
        Standard_Integer QualityValues(const Standard_Real J1min,const Standard_Real J2min,const Standard_Real J3min,Standard_Real & J1,Standard_Real & J2,Standard_Real & J3) override { PYBIND11_OVERLOAD_PURE(Standard_Integer,AppDef_SmoothCriterion,QualityValues,J1min,J2min,J3min,J1,J2,J3) };
        void ErrorValues(Standard_Real & MaxError,Standard_Real & QuadraticError,Standard_Real & AverageError) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,ErrorValues,MaxError,QuadraticError,AverageError) };
        void Hessian(const Standard_Integer Element,const Standard_Integer Dimension1,const Standard_Integer Dimension2,math_Matrix & H) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,Hessian,Element,Dimension1,Dimension2,H) };
        void Gradient(const Standard_Integer Element,const Standard_Integer Dimension,math_Vector & G) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,Gradient,Element,Dimension,G) };
        void InputVector(const math_Vector & X,const opencascade::handle<FEmTool_HAssemblyTable> & AssTable) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,InputVector,X,AssTable) };
        void SetWeight(const Standard_Real QuadraticWeight,const Standard_Real QualityWeight,const Standard_Real percentJ1,const Standard_Real percentJ2,const Standard_Real percentJ3) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,SetWeight,QuadraticWeight,QualityWeight,percentJ1,percentJ2,percentJ3) };
        void GetWeight(Standard_Real & QuadraticWeight,Standard_Real & QualityWeight) const  override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,GetWeight,QuadraticWeight,QualityWeight) };
        void SetWeight( const NCollection_Array1<Standard_Real> & Weight) override { PYBIND11_OVERLOAD_PURE(void,AppDef_SmoothCriterion,SetWeight,Weight) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<AppDef_HArray1OfMultiPointConstraint ,std::unique_ptr<AppDef_HArray1OfMultiPointConstraint>  >>(m.attr("AppDef_HArray1OfMultiPointConstraint"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const AppDef_MultiPointConstraint & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<AppDef_MultiPointConstraint> & >()  , py::arg("theOther") )
        .def("Array1",
             (const AppDef_Array1OfMultiPointConstraint & (AppDef_HArray1OfMultiPointConstraint::*)() const) static_cast<const AppDef_Array1OfMultiPointConstraint & (AppDef_HArray1OfMultiPointConstraint::*)() const>(&AppDef_HArray1OfMultiPointConstraint::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (AppDef_Array1OfMultiPointConstraint & (AppDef_HArray1OfMultiPointConstraint::*)() ) static_cast<AppDef_Array1OfMultiPointConstraint & (AppDef_HArray1OfMultiPointConstraint::*)() >(&AppDef_HArray1OfMultiPointConstraint::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppDef_HArray1OfMultiPointConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppDef_HArray1OfMultiPointConstraint::*)() const>(&AppDef_HArray1OfMultiPointConstraint::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppDef_HArray1OfMultiPointConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AppDef_HArray1OfMultiPointConstraint::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<AppDef_Compute ,std::unique_ptr<AppDef_Compute>  >>(m.attr("AppDef_Compute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("Line"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-3),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-6),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const AppDef_MultiLine &,const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Line"),  py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("Init",
             (void (AppDef_Compute::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Boolean ,  const Approx_ParametrizationType ,  const Standard_Boolean  ) ) static_cast<void (AppDef_Compute::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Boolean ,  const Approx_ParametrizationType ,  const Standard_Boolean  ) >(&AppDef_Compute::Init),
             R"#(Initializes the fields of the algorithm.)#"  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (AppDef_Compute::*)( const AppDef_MultiLine &  ) ) static_cast<void (AppDef_Compute::*)( const AppDef_MultiLine &  ) >(&AppDef_Compute::Perform),
             R"#(runs the algorithm after having initialized the fields.)#"  , py::arg("Line"))
        .def("SetDegrees",
             (void (AppDef_Compute::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (AppDef_Compute::*)( const Standard_Integer ,  const Standard_Integer  ) >(&AppDef_Compute::SetDegrees),
             R"#(changes the degrees of the approximation.)#"  , py::arg("degreemin"),  py::arg("degreemax"))
        .def("SetTolerances",
             (void (AppDef_Compute::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_Compute::*)( const Standard_Real ,  const Standard_Real  ) >(&AppDef_Compute::SetTolerances),
             R"#(Changes the tolerances of the approximation.)#"  , py::arg("Tolerance3d"),  py::arg("Tolerance2d"))
        .def("SetConstraints",
             (void (AppDef_Compute::*)( const AppParCurves_Constraint ,  const AppParCurves_Constraint  ) ) static_cast<void (AppDef_Compute::*)( const AppParCurves_Constraint ,  const AppParCurves_Constraint  ) >(&AppDef_Compute::SetConstraints),
             R"#(changes the first and the last constraint points.)#"  , py::arg("firstC"),  py::arg("lastC"))
        .def("IsAllApproximated",
             (Standard_Boolean (AppDef_Compute::*)() const) static_cast<Standard_Boolean (AppDef_Compute::*)() const>(&AppDef_Compute::IsAllApproximated),
             R"#(returns False if at a moment of the approximation, the status NoApproximation has been sent by the user when more points were needed.)#" )
        .def("IsToleranceReached",
             (Standard_Boolean (AppDef_Compute::*)() const) static_cast<Standard_Boolean (AppDef_Compute::*)() const>(&AppDef_Compute::IsToleranceReached),
             R"#(returns False if the status NoPointsAdded has been sent.)#" )
        .def("Error",
             (void (AppDef_Compute::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (AppDef_Compute::*)( const Standard_Integer ,  Standard_Real & ,  Standard_Real &  ) const>(&AppDef_Compute::Error),
             R"#(returns the tolerances 2d and 3d of the <Index> MultiCurve.)#"  , py::arg("Index"),  py::arg("tol3d"),  py::arg("tol2d"))
        .def("NbMultiCurves",
             (Standard_Integer (AppDef_Compute::*)() const) static_cast<Standard_Integer (AppDef_Compute::*)() const>(&AppDef_Compute::NbMultiCurves),
             R"#(Returns the number of MultiCurve doing the approximation of the MultiLine.)#" )
        .def("Value",
             (const AppParCurves_MultiCurve & (AppDef_Compute::*)( const Standard_Integer  ) const) static_cast<const AppParCurves_MultiCurve & (AppDef_Compute::*)( const Standard_Integer  ) const>(&AppDef_Compute::Value),
             R"#(returns the result of the approximation.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
        .def("ChangeValue",
             (AppParCurves_MultiCurve & (AppDef_Compute::*)( const Standard_Integer  ) ) static_cast<AppParCurves_MultiCurve & (AppDef_Compute::*)( const Standard_Integer  ) >(&AppDef_Compute::ChangeValue),
             R"#(returns the result of the approximation.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
        .def("SplineValue",
             (const AppParCurves_MultiBSpCurve & (AppDef_Compute::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (AppDef_Compute::*)() >(&AppDef_Compute::SplineValue),
             R"#(returns the result of the approximation.)#" )
        .def("Parametrization",
             (Approx_ParametrizationType (AppDef_Compute::*)() const) static_cast<Approx_ParametrizationType (AppDef_Compute::*)() const>(&AppDef_Compute::Parametrization),
             R"#(returns the type of parametrization)#" )
        .def("Parameters",
             (const TColStd_Array1OfReal & (AppDef_Compute::*)( const Standard_Integer  ) const) static_cast<const TColStd_Array1OfReal & (AppDef_Compute::*)( const Standard_Integer  ) const>(&AppDef_Compute::Parameters),
             R"#(returns the new parameters of the approximation corresponding to the points of the multicurve <Index>.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
;


    static_cast<py::class_<AppDef_ResConstraintOfTheGradient ,std::unique_ptr<AppDef_ResConstraintOfTheGradient>  >>(m.attr("AppDef_ResConstraintOfTheGradient"))
        .def(py::init< const AppDef_MultiLine &,AppParCurves_MultiCurve &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Matrix &,const math_Matrix &,const Standard_Real >()  , py::arg("SSP"),  py::arg("SCurv"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("Constraints"),  py::arg("Bern"),  py::arg("DerivativeBern"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-10) )
        .def("IsDone",
             (Standard_Boolean (AppDef_ResConstraintOfTheGradient::*)() const) static_cast<Standard_Boolean (AppDef_ResConstraintOfTheGradient::*)() const>(&AppDef_ResConstraintOfTheGradient::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("ConstraintMatrix",
             (const math_Matrix & (AppDef_ResConstraintOfTheGradient::*)() const) static_cast<const math_Matrix & (AppDef_ResConstraintOfTheGradient::*)() const>(&AppDef_ResConstraintOfTheGradient::ConstraintMatrix),
             R"#(None)#" )
        .def("Duale",
             (const math_Vector & (AppDef_ResConstraintOfTheGradient::*)() const) static_cast<const math_Vector & (AppDef_ResConstraintOfTheGradient::*)() const>(&AppDef_ResConstraintOfTheGradient::Duale),
             R"#(returns the duale variables of the system.)#" )
        .def("ConstraintDerivative",
             (const math_Matrix & (AppDef_ResConstraintOfTheGradient::*)( const AppDef_MultiLine & ,  const math_Vector & ,  const Standard_Integer ,  const math_Matrix &  ) ) static_cast<const math_Matrix & (AppDef_ResConstraintOfTheGradient::*)( const AppDef_MultiLine & ,  const math_Vector & ,  const Standard_Integer ,  const math_Matrix &  ) >(&AppDef_ResConstraintOfTheGradient::ConstraintDerivative),
             R"#(Returns the derivative of the constraint matrix.)#"  , py::arg("SSP"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("DA"))
        .def("InverseMatrix",
             (const math_Matrix & (AppDef_ResConstraintOfTheGradient::*)() const) static_cast<const math_Matrix & (AppDef_ResConstraintOfTheGradient::*)() const>(&AppDef_ResConstraintOfTheGradient::InverseMatrix),
             R"#(returns the Inverse of Cont*Transposed(Cont), where Cont is the constraint matrix for the algorithm.)#" )
;


    static_cast<py::class_<AppDef_ResConstraintOfMyGradientbisOfBSplineCompute ,std::unique_ptr<AppDef_ResConstraintOfMyGradientbisOfBSplineCompute>  >>(m.attr("AppDef_ResConstraintOfMyGradientbisOfBSplineCompute"))
        .def(py::init< const AppDef_MultiLine &,AppParCurves_MultiCurve &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Matrix &,const math_Matrix &,const Standard_Real >()  , py::arg("SSP"),  py::arg("SCurv"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("Constraints"),  py::arg("Bern"),  py::arg("DerivativeBern"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-10) )
        .def("IsDone",
             (Standard_Boolean (AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Boolean (AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("ConstraintMatrix",
             (const math_Matrix & (AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::ConstraintMatrix),
             R"#(None)#" )
        .def("Duale",
             (const math_Vector & (AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::*)() const) static_cast<const math_Vector & (AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::Duale),
             R"#(returns the duale variables of the system.)#" )
        .def("ConstraintDerivative",
             (const math_Matrix & (AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::*)( const AppDef_MultiLine & ,  const math_Vector & ,  const Standard_Integer ,  const math_Matrix &  ) ) static_cast<const math_Matrix & (AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::*)( const AppDef_MultiLine & ,  const math_Vector & ,  const Standard_Integer ,  const math_Matrix &  ) >(&AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::ConstraintDerivative),
             R"#(Returns the derivative of the constraint matrix.)#"  , py::arg("SSP"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("DA"))
        .def("InverseMatrix",
             (const math_Matrix & (AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ResConstraintOfMyGradientbisOfBSplineCompute::InverseMatrix),
             R"#(returns the Inverse of Cont*Transposed(Cont), where Cont is the constraint matrix for the algorithm.)#" )
;


    static_cast<py::class_<AppDef_TheGradient ,std::unique_ptr<AppDef_TheGradient>  >>(m.attr("AppDef_TheGradient"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
        .def("IsDone",
             (Standard_Boolean (AppDef_TheGradient::*)() const) static_cast<Standard_Boolean (AppDef_TheGradient::*)() const>(&AppDef_TheGradient::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (AppParCurves_MultiCurve (AppDef_TheGradient::*)() const) static_cast<AppParCurves_MultiCurve (AppDef_TheGradient::*)() const>(&AppDef_TheGradient::Value),
             R"#(returns all the Bezier curves approximating the MultiLine SSP after minimization of the parameter.)#" )
        .def("Error",
             (Standard_Real (AppDef_TheGradient::*)( const Standard_Integer  ) const) static_cast<Standard_Real (AppDef_TheGradient::*)( const Standard_Integer  ) const>(&AppDef_TheGradient::Error),
             R"#(returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.)#"  , py::arg("Index"))
        .def("MaxError3d",
             (Standard_Real (AppDef_TheGradient::*)() const) static_cast<Standard_Real (AppDef_TheGradient::*)() const>(&AppDef_TheGradient::MaxError3d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("MaxError2d",
             (Standard_Real (AppDef_TheGradient::*)() const) static_cast<Standard_Real (AppDef_TheGradient::*)() const>(&AppDef_TheGradient::MaxError2d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("AverageError",
             (Standard_Real (AppDef_TheGradient::*)() const) static_cast<Standard_Real (AppDef_TheGradient::*)() const>(&AppDef_TheGradient::AverageError),
             R"#(returns the average error between the old and the new approximation.)#" )
;

    register_default_constructor<AppDef_MyLineTool ,std::unique_ptr<AppDef_MyLineTool>>(m,"AppDef_MyLineTool");

    static_cast<py::class_<AppDef_MyLineTool ,std::unique_ptr<AppDef_MyLineTool>  >>(m.attr("AppDef_MyLineTool"))
        .def_static("FirstPoint_s",
                    (Standard_Integer (*)( const AppDef_MultiLine &  ) ) static_cast<Standard_Integer (*)( const AppDef_MultiLine &  ) >(&AppDef_MyLineTool::FirstPoint),
                    R"#(Returns the first index of multipoints of the MultiLine.)#"  , py::arg("ML"))
        .def_static("LastPoint_s",
                    (Standard_Integer (*)( const AppDef_MultiLine &  ) ) static_cast<Standard_Integer (*)( const AppDef_MultiLine &  ) >(&AppDef_MyLineTool::LastPoint),
                    R"#(Returns the last index of multipoints of the MultiLine.)#"  , py::arg("ML"))
        .def_static("NbP2d_s",
                    (Standard_Integer (*)( const AppDef_MultiLine &  ) ) static_cast<Standard_Integer (*)( const AppDef_MultiLine &  ) >(&AppDef_MyLineTool::NbP2d),
                    R"#(Returns the number of 2d points of a MultiLine.)#"  , py::arg("ML"))
        .def_static("NbP3d_s",
                    (Standard_Integer (*)( const AppDef_MultiLine &  ) ) static_cast<Standard_Integer (*)( const AppDef_MultiLine &  ) >(&AppDef_MyLineTool::NbP3d),
                    R"#(Returns the number of 3d points of a MultiLine.)#"  , py::arg("ML"))
        .def_static("Value_s",
                    (void (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Pnt> &  ) ) static_cast<void (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Pnt> &  ) >(&AppDef_MyLineTool::Value),
                    R"#(returns the 3d points of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabPt"))
        .def_static("Value_s",
                    (void (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Pnt2d> &  ) ) static_cast<void (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Pnt2d> &  ) >(&AppDef_MyLineTool::Value),
                    R"#(returns the 2d points of the multipoint <MPointIndex> when only 2d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabPt2d"))
        .def_static("Value_s",
                    (void (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> &  ) ) static_cast<void (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<gp_Pnt2d> &  ) >(&AppDef_MyLineTool::Value),
                    R"#(returns the 3d and 2d points of the multipoint <MPointIndex>.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabPt"),  py::arg("tabPt2d"))
        .def_static("Tangency_s",
                    (Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec> &  ) ) static_cast<Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec> &  ) >(&AppDef_MyLineTool::Tangency),
                    R"#(returns the 3d points of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"))
        .def_static("Tangency_s",
                    (Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec2d> &  ) ) static_cast<Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec2d> &  ) >(&AppDef_MyLineTool::Tangency),
                    R"#(returns the 2d tangency points of the multipoint <MPointIndex> only when 2d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV2d"))
        .def_static("Tangency_s",
                    (Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec2d> &  ) ) static_cast<Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec2d> &  ) >(&AppDef_MyLineTool::Tangency),
                    R"#(returns the 3d and 2d points of the multipoint <MPointIndex>.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"),  py::arg("tabV2d"))
        .def_static("Curvature_s",
                    (Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec> &  ) ) static_cast<Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec> &  ) >(&AppDef_MyLineTool::Curvature),
                    R"#(returns the 3d curvatures of the multipoint <MPointIndex> when only 3d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"))
        .def_static("Curvature_s",
                    (Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec2d> &  ) ) static_cast<Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec2d> &  ) >(&AppDef_MyLineTool::Curvature),
                    R"#(returns the 2d curvatures of the multipoint <MPointIndex> only when 2d points exist.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV2d"))
        .def_static("Curvature_s",
                    (Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec2d> &  ) ) static_cast<Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  NCollection_Array1<gp_Vec> & ,  NCollection_Array1<gp_Vec2d> &  ) >(&AppDef_MyLineTool::Curvature),
                    R"#(returns the 3d and 2d curvatures of the multipoint <MPointIndex>.)#"  , py::arg("ML"),  py::arg("MPointIndex"),  py::arg("tabV"),  py::arg("tabV2d"))
        .def_static("WhatStatus_s",
                    (Approx_Status (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Approx_Status (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  const Standard_Integer  ) >(&AppDef_MyLineTool::WhatStatus),
                    R"#(returns NoPointsAdded)#"  , py::arg("ML"),  py::arg("I1"),  py::arg("I2"))
        .def_static("MakeMLBetween_s",
                    (AppDef_MultiLine (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<AppDef_MultiLine (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&AppDef_MyLineTool::MakeMLBetween),
                    R"#(Is never called in the algorithms. Nothing is done.)#"  , py::arg("ML"),  py::arg("I1"),  py::arg("I2"),  py::arg("NbPMin"))
        .def_static("MakeMLOneMorePoint_s",
                    (Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  AppDef_MultiLine &  ) ) static_cast<Standard_Boolean (*)( const AppDef_MultiLine & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  AppDef_MultiLine &  ) >(&AppDef_MyLineTool::MakeMLOneMorePoint),
                    R"#(Is never called in the algorithms. Nothing is done.)#"  , py::arg("ML"),  py::arg("I1"),  py::arg("I2"),  py::arg("indbad"),  py::arg("OtherLine"))
;


    static_cast<py::class_<AppDef_TheFunction ,std::unique_ptr<AppDef_TheFunction>  , math_MultipleVarFunctionWithGradient >>(m.attr("AppDef_TheFunction"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg") )
        .def("NbVariables",
             (Standard_Integer (AppDef_TheFunction::*)() const) static_cast<Standard_Integer (AppDef_TheFunction::*)() const>(&AppDef_TheFunction::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & ,  Standard_Real &  ) >(&AppDef_TheFunction::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & ,  math_Vector &  ) >(&AppDef_TheFunction::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) ) static_cast<Standard_Boolean (AppDef_TheFunction::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) >(&AppDef_TheFunction::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (AppDef_TheFunction::*)() const) static_cast<const math_Vector & (AppDef_TheFunction::*)() const>(&AppDef_TheFunction::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (const AppParCurves_MultiCurve & (AppDef_TheFunction::*)() ) static_cast<const AppParCurves_MultiCurve & (AppDef_TheFunction::*)() >(&AppDef_TheFunction::CurveValue),
             R"#(returns the MultiCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (AppDef_TheFunction::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AppDef_TheFunction::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AppDef_TheFunction::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (AppDef_TheFunction::*)() const) static_cast<Standard_Real (AppDef_TheFunction::*)() const>(&AppDef_TheFunction::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (AppDef_TheFunction::*)() const) static_cast<Standard_Real (AppDef_TheFunction::*)() const>(&AppDef_TheFunction::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (AppDef_TheFunction::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const) static_cast<AppParCurves_Constraint (AppDef_TheFunction::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const>(&AppDef_TheFunction::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (AppDef_TheFunction::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const) static_cast<AppParCurves_Constraint (AppDef_TheFunction::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const>(&AppDef_TheFunction::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
;


    static_cast<py::class_<AppDef_BSplineCompute ,std::unique_ptr<AppDef_BSplineCompute>  >>(m.attr("AppDef_BSplineCompute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("Line"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-3),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-6),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const AppDef_MultiLine &,const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Line"),  py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Parameters"),  py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Boolean,const Approx_ParametrizationType,const Standard_Boolean >()  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False) )
        .def("Interpol",
             (void (AppDef_BSplineCompute::*)( const AppDef_MultiLine &  ) ) static_cast<void (AppDef_BSplineCompute::*)( const AppDef_MultiLine &  ) >(&AppDef_BSplineCompute::Interpol),
             R"#(Constructs an interpolation of the MultiLine <Line> The result will be a C2 curve of degree 3.)#"  , py::arg("Line"))
        .def("Init",
             (void (AppDef_BSplineCompute::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Boolean ,  const Approx_ParametrizationType ,  const Standard_Boolean  ) ) static_cast<void (AppDef_BSplineCompute::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Boolean ,  const Approx_ParametrizationType ,  const Standard_Boolean  ) >(&AppDef_BSplineCompute::Init),
             R"#(Initializes the fields of the algorithm.)#"  , py::arg("degreemin")=static_cast<const Standard_Integer>(4),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-03),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("parametrization")=static_cast<const Approx_ParametrizationType>(Approx_ChordLength),  py::arg("Squares")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (AppDef_BSplineCompute::*)( const AppDef_MultiLine &  ) ) static_cast<void (AppDef_BSplineCompute::*)( const AppDef_MultiLine &  ) >(&AppDef_BSplineCompute::Perform),
             R"#(runs the algorithm after having initialized the fields.)#"  , py::arg("Line"))
        .def("SetParameters",
             (void (AppDef_BSplineCompute::*)( const math_Vector &  ) ) static_cast<void (AppDef_BSplineCompute::*)( const math_Vector &  ) >(&AppDef_BSplineCompute::SetParameters),
             R"#(The approximation will begin with the set of parameters <ThePar>.)#"  , py::arg("ThePar"))
        .def("SetKnots",
             (void (AppDef_BSplineCompute::*)(  const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (AppDef_BSplineCompute::*)(  const NCollection_Array1<Standard_Real> &  ) >(&AppDef_BSplineCompute::SetKnots),
             R"#(The approximation will be done with the set of knots <Knots>. The multiplicities will be set with the degree and the desired continuity.)#"  , py::arg("Knots"))
        .def("SetKnotsAndMultiplicities",
             (void (AppDef_BSplineCompute::*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Integer> &  ) ) static_cast<void (AppDef_BSplineCompute::*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Integer> &  ) >(&AppDef_BSplineCompute::SetKnotsAndMultiplicities),
             R"#(The approximation will be done with the set of knots <Knots> and the multiplicities <Mults>.)#"  , py::arg("Knots"),  py::arg("Mults"))
        .def("SetDegrees",
             (void (AppDef_BSplineCompute::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (AppDef_BSplineCompute::*)( const Standard_Integer ,  const Standard_Integer  ) >(&AppDef_BSplineCompute::SetDegrees),
             R"#(changes the degrees of the approximation.)#"  , py::arg("degreemin"),  py::arg("degreemax"))
        .def("SetTolerances",
             (void (AppDef_BSplineCompute::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_BSplineCompute::*)( const Standard_Real ,  const Standard_Real  ) >(&AppDef_BSplineCompute::SetTolerances),
             R"#(Changes the tolerances of the approximation.)#"  , py::arg("Tolerance3d"),  py::arg("Tolerance2d"))
        .def("SetContinuity",
             (void (AppDef_BSplineCompute::*)( const Standard_Integer  ) ) static_cast<void (AppDef_BSplineCompute::*)( const Standard_Integer  ) >(&AppDef_BSplineCompute::SetContinuity),
             R"#(sets the continuity of the spline. if C = 2, the spline will be C2.)#"  , py::arg("C"))
        .def("SetConstraints",
             (void (AppDef_BSplineCompute::*)( const AppParCurves_Constraint ,  const AppParCurves_Constraint  ) ) static_cast<void (AppDef_BSplineCompute::*)( const AppParCurves_Constraint ,  const AppParCurves_Constraint  ) >(&AppDef_BSplineCompute::SetConstraints),
             R"#(changes the first and the last constraint points.)#"  , py::arg("firstC"),  py::arg("lastC"))
        .def("IsAllApproximated",
             (Standard_Boolean (AppDef_BSplineCompute::*)() const) static_cast<Standard_Boolean (AppDef_BSplineCompute::*)() const>(&AppDef_BSplineCompute::IsAllApproximated),
             R"#(returns False if at a moment of the approximation, the status NoApproximation has been sent by the user when more points were needed.)#" )
        .def("IsToleranceReached",
             (Standard_Boolean (AppDef_BSplineCompute::*)() const) static_cast<Standard_Boolean (AppDef_BSplineCompute::*)() const>(&AppDef_BSplineCompute::IsToleranceReached),
             R"#(returns False if the status NoPointsAdded has been sent.)#" )
        .def("Error",
             (void (AppDef_BSplineCompute::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (AppDef_BSplineCompute::*)( Standard_Real & ,  Standard_Real &  ) const>(&AppDef_BSplineCompute::Error),
             R"#(returns the tolerances 2d and 3d of the MultiBSpCurve.)#"  , py::arg("tol3d"),  py::arg("tol2d"))
        .def("Value",
             (const AppParCurves_MultiBSpCurve & (AppDef_BSplineCompute::*)() const) static_cast<const AppParCurves_MultiBSpCurve & (AppDef_BSplineCompute::*)() const>(&AppDef_BSplineCompute::Value),
             R"#(returns the result of the approximation.)#" )
        .def("ChangeValue",
             (AppParCurves_MultiBSpCurve & (AppDef_BSplineCompute::*)() ) static_cast<AppParCurves_MultiBSpCurve & (AppDef_BSplineCompute::*)() >(&AppDef_BSplineCompute::ChangeValue),
             R"#(returns the result of the approximation.)#" )
        .def("Parameters",
             (const TColStd_Array1OfReal & (AppDef_BSplineCompute::*)() const) static_cast<const TColStd_Array1OfReal & (AppDef_BSplineCompute::*)() const>(&AppDef_BSplineCompute::Parameters),
             R"#(returns the new parameters of the approximation corresponding to the points of the MultiBSpCurve.)#" )
;


    static_cast<py::class_<AppDef_MyGradientbisOfBSplineCompute ,std::unique_ptr<AppDef_MyGradientbisOfBSplineCompute>  >>(m.attr("AppDef_MyGradientbisOfBSplineCompute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
        .def("IsDone",
             (Standard_Boolean (AppDef_MyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Boolean (AppDef_MyGradientbisOfBSplineCompute::*)() const>(&AppDef_MyGradientbisOfBSplineCompute::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (AppParCurves_MultiCurve (AppDef_MyGradientbisOfBSplineCompute::*)() const) static_cast<AppParCurves_MultiCurve (AppDef_MyGradientbisOfBSplineCompute::*)() const>(&AppDef_MyGradientbisOfBSplineCompute::Value),
             R"#(returns all the Bezier curves approximating the MultiLine SSP after minimization of the parameter.)#" )
        .def("Error",
             (Standard_Real (AppDef_MyGradientbisOfBSplineCompute::*)( const Standard_Integer  ) const) static_cast<Standard_Real (AppDef_MyGradientbisOfBSplineCompute::*)( const Standard_Integer  ) const>(&AppDef_MyGradientbisOfBSplineCompute::Error),
             R"#(returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.)#"  , py::arg("Index"))
        .def("MaxError3d",
             (Standard_Real (AppDef_MyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_MyGradientbisOfBSplineCompute::*)() const>(&AppDef_MyGradientbisOfBSplineCompute::MaxError3d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("MaxError2d",
             (Standard_Real (AppDef_MyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_MyGradientbisOfBSplineCompute::*)() const>(&AppDef_MyGradientbisOfBSplineCompute::MaxError2d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("AverageError",
             (Standard_Real (AppDef_MyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_MyGradientbisOfBSplineCompute::*)() const>(&AppDef_MyGradientbisOfBSplineCompute::AverageError),
             R"#(returns the average error between the old and the new approximation.)#" )
;


    static_cast<py::class_<AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute ,std::unique_ptr<AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute>  >>(m.attr("AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def("Perform",
             (void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( const math_Vector &  ) ) static_cast<void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( const math_Vector &  ) >(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Boolean (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() ) static_cast<AppParCurves_MultiCurve (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() >(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() >(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("ErrorGradient",
             (void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( math_Vector & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( math_Vector & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::ErrorGradient),
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"),  py::arg("F"),  py::arg("MaxE3d"),  py::arg("MaxE2d"))
        .def("Distance",
             (const math_Matrix & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() ) static_cast<const math_Matrix & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() >(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("Error",
             (void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Error),
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#"  , py::arg("F"),  py::arg("MaxE3d"),  py::arg("MaxE2d"))
        .def("FirstLambda",
             (Standard_Real (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<const math_IntegerVector & (AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
;


    static_cast<py::class_<AppDef_Variational ,std::unique_ptr<AppDef_Variational>  >>(m.attr("AppDef_Variational"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const Standard_Integer,const Standard_Integer,const GeomAbs_Shape,const Standard_Boolean,const Standard_Boolean,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("MaxDegree")=static_cast<const Standard_Integer>(14),  py::arg("MaxSegment")=static_cast<const Standard_Integer>(100),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("WithMinMax")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCutting")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0),  py::arg("NbIterations")=static_cast<const Standard_Integer>(2) )
        .def("Approximate",
             (void (AppDef_Variational::*)() ) static_cast<void (AppDef_Variational::*)() >(&AppDef_Variational::Approximate),
             R"#(Makes the approximation with the current fields.)#" )
        .def("IsCreated",
             (Standard_Boolean (AppDef_Variational::*)() const) static_cast<Standard_Boolean (AppDef_Variational::*)() const>(&AppDef_Variational::IsCreated),
             R"#(returns True if the creation is done and correspond to the current fields.)#" )
        .def("IsDone",
             (Standard_Boolean (AppDef_Variational::*)() const) static_cast<Standard_Boolean (AppDef_Variational::*)() const>(&AppDef_Variational::IsDone),
             R"#(returns True if the approximation is ok and correspond to the current fields.)#" )
        .def("IsOverConstrained",
             (Standard_Boolean (AppDef_Variational::*)() const) static_cast<Standard_Boolean (AppDef_Variational::*)() const>(&AppDef_Variational::IsOverConstrained),
             R"#(returns True if the problem is overconstrained in this case, approximation cannot be done.)#" )
        .def("Value",
             (AppParCurves_MultiBSpCurve (AppDef_Variational::*)() const) static_cast<AppParCurves_MultiBSpCurve (AppDef_Variational::*)() const>(&AppDef_Variational::Value),
             R"#(returns all the BSpline curves approximating the MultiLine from AppDef SSP after minimization of the parameter.)#" )
        .def("MaxError",
             (Standard_Real (AppDef_Variational::*)() const) static_cast<Standard_Real (AppDef_Variational::*)() const>(&AppDef_Variational::MaxError),
             R"#(returns the maximum of the distances between the points of the multiline and the approximation curves.)#" )
        .def("MaxErrorIndex",
             (Standard_Integer (AppDef_Variational::*)() const) static_cast<Standard_Integer (AppDef_Variational::*)() const>(&AppDef_Variational::MaxErrorIndex),
             R"#(returns the index of the MultiPoint of ErrorMax)#" )
        .def("QuadraticError",
             (Standard_Real (AppDef_Variational::*)() const) static_cast<Standard_Real (AppDef_Variational::*)() const>(&AppDef_Variational::QuadraticError),
             R"#(returns the quadratic average of the distances between the points of the multiline and the approximation curves.)#" )
        .def("Distance",
             (void (AppDef_Variational::*)( math_Matrix &  ) ) static_cast<void (AppDef_Variational::*)( math_Matrix &  ) >(&AppDef_Variational::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#"  , py::arg("mat"))
        .def("AverageError",
             (Standard_Real (AppDef_Variational::*)() const) static_cast<Standard_Real (AppDef_Variational::*)() const>(&AppDef_Variational::AverageError),
             R"#(returns the average error between the MultiLine from AppDef and the approximation.)#" )
        .def("Parameters",
             (const opencascade::handle<TColStd_HArray1OfReal> & (AppDef_Variational::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (AppDef_Variational::*)() const>(&AppDef_Variational::Parameters),
             R"#(returns the parameters uses to the approximations)#" )
        .def("Knots",
             (const opencascade::handle<TColStd_HArray1OfReal> & (AppDef_Variational::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (AppDef_Variational::*)() const>(&AppDef_Variational::Knots),
             R"#(returns the knots uses to the approximations)#" )
        .def("Criterium",
             (void (AppDef_Variational::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (AppDef_Variational::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&AppDef_Variational::Criterium),
             R"#(returns the values of the quality criterium.)#"  , py::arg("VFirstOrder"),  py::arg("VSecondOrder"),  py::arg("VThirdOrder"))
        .def("CriteriumWeight",
             (void (AppDef_Variational::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (AppDef_Variational::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&AppDef_Variational::CriteriumWeight),
             R"#(returns the Weights (as percent) associed to the criterium used in the optimization.)#"  , py::arg("Percent1"),  py::arg("Percent2"),  py::arg("Percent3"))
        .def("MaxDegree",
             (Standard_Integer (AppDef_Variational::*)() const) static_cast<Standard_Integer (AppDef_Variational::*)() const>(&AppDef_Variational::MaxDegree),
             R"#(returns the Maximum Degree used in the approximation)#" )
        .def("MaxSegment",
             (Standard_Integer (AppDef_Variational::*)() const) static_cast<Standard_Integer (AppDef_Variational::*)() const>(&AppDef_Variational::MaxSegment),
             R"#(returns the Maximum of segment used in the approximation)#" )
        .def("Continuity",
             (GeomAbs_Shape (AppDef_Variational::*)() const) static_cast<GeomAbs_Shape (AppDef_Variational::*)() const>(&AppDef_Variational::Continuity),
             R"#(returns the Continuity used in the approximation)#" )
        .def("WithMinMax",
             (Standard_Boolean (AppDef_Variational::*)() const) static_cast<Standard_Boolean (AppDef_Variational::*)() const>(&AppDef_Variational::WithMinMax),
             R"#(returns if the approximation search to minimize the maximum Error or not.)#" )
        .def("WithCutting",
             (Standard_Boolean (AppDef_Variational::*)() const) static_cast<Standard_Boolean (AppDef_Variational::*)() const>(&AppDef_Variational::WithCutting),
             R"#(returns if the approximation can insert new Knots or not.)#" )
        .def("Tolerance",
             (Standard_Real (AppDef_Variational::*)() const) static_cast<Standard_Real (AppDef_Variational::*)() const>(&AppDef_Variational::Tolerance),
             R"#(returns the tolerance used in the approximation.)#" )
        .def("NbIterations",
             (Standard_Integer (AppDef_Variational::*)() const) static_cast<Standard_Integer (AppDef_Variational::*)() const>(&AppDef_Variational::NbIterations),
             R"#(returns the number of iterations used in the approximation.)#" )
        .def("Dump",
             (void (AppDef_Variational::*)( std::ostream &  ) const) static_cast<void (AppDef_Variational::*)( std::ostream &  ) const>(&AppDef_Variational::Dump),
             R"#(Prints on the stream o information on the current state of the object. MaxError,MaxErrorIndex,AverageError,QuadraticError,Criterium Distances,Degre,Nombre de poles, parametres, noeuds)#"  , py::arg("o"))
        .def("SetConstraints",
             (Standard_Boolean (AppDef_Variational::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &  ) ) static_cast<Standard_Boolean (AppDef_Variational::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &  ) >(&AppDef_Variational::SetConstraints),
             R"#(Define the constraints to approximate If this value is incompatible with the others fields this method modify nothing and returns false)#"  , py::arg("aConstrainst"))
        .def("SetParameters",
             (void (AppDef_Variational::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<void (AppDef_Variational::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) >(&AppDef_Variational::SetParameters),
             R"#(Defines the parameters used by the approximations.)#"  , py::arg("param"))
        .def("SetKnots",
             (Standard_Boolean (AppDef_Variational::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<Standard_Boolean (AppDef_Variational::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) >(&AppDef_Variational::SetKnots),
             R"#(Defines the knots used by the approximations If this value is incompatible with the others fields this method modify nothing and returns false)#"  , py::arg("knots"))
        .def("SetMaxDegree",
             (Standard_Boolean (AppDef_Variational::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (AppDef_Variational::*)( const Standard_Integer  ) >(&AppDef_Variational::SetMaxDegree),
             R"#(Define the Maximum Degree used in the approximation If this value is incompatible with the others fields this method modify nothing and returns false)#"  , py::arg("Degree"))
        .def("SetMaxSegment",
             (Standard_Boolean (AppDef_Variational::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (AppDef_Variational::*)( const Standard_Integer  ) >(&AppDef_Variational::SetMaxSegment),
             R"#(Define the maximum number of segments used in the approximation If this value is incompatible with the others fields this method modify nothing and returns false)#"  , py::arg("NbSegment"))
        .def("SetContinuity",
             (Standard_Boolean (AppDef_Variational::*)( const GeomAbs_Shape  ) ) static_cast<Standard_Boolean (AppDef_Variational::*)( const GeomAbs_Shape  ) >(&AppDef_Variational::SetContinuity),
             R"#(Define the Continuity used in the approximation If this value is incompatible with the others fields this method modify nothing and returns false)#"  , py::arg("C"))
        .def("SetWithMinMax",
             (void (AppDef_Variational::*)( const Standard_Boolean  ) ) static_cast<void (AppDef_Variational::*)( const Standard_Boolean  ) >(&AppDef_Variational::SetWithMinMax),
             R"#(Define if the approximation search to minimize the maximum Error or not.)#"  , py::arg("MinMax"))
        .def("SetWithCutting",
             (Standard_Boolean (AppDef_Variational::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (AppDef_Variational::*)( const Standard_Boolean  ) >(&AppDef_Variational::SetWithCutting),
             R"#(Define if the approximation can insert new Knots or not. If this value is incompatible with the others fields this method modify nothing and returns false)#"  , py::arg("Cutting"))
        .def("SetCriteriumWeight",
             (void (AppDef_Variational::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_Variational::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_Variational::SetCriteriumWeight),
             R"#(define the Weights (as percent) associed to the criterium used in the optimization.)#"  , py::arg("Percent1"),  py::arg("Percent2"),  py::arg("Percent3"))
        .def("SetCriteriumWeight",
             (void (AppDef_Variational::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (AppDef_Variational::*)( const Standard_Integer ,  const Standard_Real  ) >(&AppDef_Variational::SetCriteriumWeight),
             R"#(define the Weight (as percent) associed to the criterium Order used in the optimization : Others weights are updated. if Percent < 0 if Order < 1 or Order > 3)#"  , py::arg("Order"),  py::arg("Percent"))
        .def("SetTolerance",
             (void (AppDef_Variational::*)( const Standard_Real  ) ) static_cast<void (AppDef_Variational::*)( const Standard_Real  ) >(&AppDef_Variational::SetTolerance),
             R"#(define the tolerance used in the approximation.)#"  , py::arg("Tol"))
        .def("SetNbIterations",
             (void (AppDef_Variational::*)( const Standard_Integer  ) ) static_cast<void (AppDef_Variational::*)( const Standard_Integer  ) >(&AppDef_Variational::SetNbIterations),
             R"#(define the number of iterations used in the approximation. if Iter < 1)#"  , py::arg("Iter"))
;


    static_cast<py::class_<AppDef_MyGradientOfCompute ,std::unique_ptr<AppDef_MyGradientOfCompute>  >>(m.attr("AppDef_MyGradientOfCompute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
        .def("IsDone",
             (Standard_Boolean (AppDef_MyGradientOfCompute::*)() const) static_cast<Standard_Boolean (AppDef_MyGradientOfCompute::*)() const>(&AppDef_MyGradientOfCompute::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (AppParCurves_MultiCurve (AppDef_MyGradientOfCompute::*)() const) static_cast<AppParCurves_MultiCurve (AppDef_MyGradientOfCompute::*)() const>(&AppDef_MyGradientOfCompute::Value),
             R"#(returns all the Bezier curves approximating the MultiLine SSP after minimization of the parameter.)#" )
        .def("Error",
             (Standard_Real (AppDef_MyGradientOfCompute::*)( const Standard_Integer  ) const) static_cast<Standard_Real (AppDef_MyGradientOfCompute::*)( const Standard_Integer  ) const>(&AppDef_MyGradientOfCompute::Error),
             R"#(returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.)#"  , py::arg("Index"))
        .def("MaxError3d",
             (Standard_Real (AppDef_MyGradientOfCompute::*)() const) static_cast<Standard_Real (AppDef_MyGradientOfCompute::*)() const>(&AppDef_MyGradientOfCompute::MaxError3d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("MaxError2d",
             (Standard_Real (AppDef_MyGradientOfCompute::*)() const) static_cast<Standard_Real (AppDef_MyGradientOfCompute::*)() const>(&AppDef_MyGradientOfCompute::MaxError2d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("AverageError",
             (Standard_Real (AppDef_MyGradientOfCompute::*)() const) static_cast<Standard_Real (AppDef_MyGradientOfCompute::*)() const>(&AppDef_MyGradientOfCompute::AverageError),
             R"#(returns the average error between the old and the new approximation.)#" )
;


    static_cast<py::class_<AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute ,std::unique_ptr<AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute>  , math_BFGS >>(m.attr("AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute"))
        .def(py::init< math_MultipleVarFunctionWithGradient &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("StartingPoint"),  py::arg("Tolerance3d"),  py::arg("Tolerance2d"),  py::arg("Eps"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
        .def("IsSolutionReached",
             (Standard_Boolean (AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute::*)( math_MultipleVarFunctionWithGradient &  ) const) static_cast<Standard_Boolean (AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute::*)( math_MultipleVarFunctionWithGradient &  ) const>(&AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
;


    static_cast<py::class_<AppDef_TheLeastSquares ,std::unique_ptr<AppDef_TheLeastSquares>  >>(m.attr("AppDef_TheLeastSquares"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def("Perform",
             (void (AppDef_TheLeastSquares::*)( const math_Vector &  ) ) static_cast<void (AppDef_TheLeastSquares::*)( const math_Vector &  ) >(&AppDef_TheLeastSquares::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (AppDef_TheLeastSquares::*)( const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_TheLeastSquares::*)( const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_TheLeastSquares::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (AppDef_TheLeastSquares::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_TheLeastSquares::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_TheLeastSquares::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (AppDef_TheLeastSquares::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_TheLeastSquares::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_TheLeastSquares::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (AppDef_TheLeastSquares::*)() const) static_cast<Standard_Boolean (AppDef_TheLeastSquares::*)() const>(&AppDef_TheLeastSquares::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (AppDef_TheLeastSquares::*)() ) static_cast<AppParCurves_MultiCurve (AppDef_TheLeastSquares::*)() >(&AppDef_TheLeastSquares::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (AppDef_TheLeastSquares::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (AppDef_TheLeastSquares::*)() >(&AppDef_TheLeastSquares::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (AppDef_TheLeastSquares::*)() const) static_cast<const math_Matrix & (AppDef_TheLeastSquares::*)() const>(&AppDef_TheLeastSquares::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (AppDef_TheLeastSquares::*)() const) static_cast<const math_Matrix & (AppDef_TheLeastSquares::*)() const>(&AppDef_TheLeastSquares::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("ErrorGradient",
             (void (AppDef_TheLeastSquares::*)( math_Vector & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_TheLeastSquares::*)( math_Vector & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_TheLeastSquares::ErrorGradient),
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"),  py::arg("F"),  py::arg("MaxE3d"),  py::arg("MaxE2d"))
        .def("Distance",
             (const math_Matrix & (AppDef_TheLeastSquares::*)() ) static_cast<const math_Matrix & (AppDef_TheLeastSquares::*)() >(&AppDef_TheLeastSquares::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("Error",
             (void (AppDef_TheLeastSquares::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_TheLeastSquares::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_TheLeastSquares::Error),
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#"  , py::arg("F"),  py::arg("MaxE3d"),  py::arg("MaxE2d"))
        .def("FirstLambda",
             (Standard_Real (AppDef_TheLeastSquares::*)() const) static_cast<Standard_Real (AppDef_TheLeastSquares::*)() const>(&AppDef_TheLeastSquares::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (AppDef_TheLeastSquares::*)() const) static_cast<Standard_Real (AppDef_TheLeastSquares::*)() const>(&AppDef_TheLeastSquares::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (AppDef_TheLeastSquares::*)() const) static_cast<const math_Matrix & (AppDef_TheLeastSquares::*)() const>(&AppDef_TheLeastSquares::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (AppDef_TheLeastSquares::*)() const) static_cast<const math_Matrix & (AppDef_TheLeastSquares::*)() const>(&AppDef_TheLeastSquares::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (AppDef_TheLeastSquares::*)() const) static_cast<const math_IntegerVector & (AppDef_TheLeastSquares::*)() const>(&AppDef_TheLeastSquares::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
;


    static_cast<py::class_<AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute ,std::unique_ptr<AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute>  , math_BFGS >>(m.attr("AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute"))
        .def(py::init< math_MultipleVarFunctionWithGradient &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("StartingPoint"),  py::arg("Tolerance3d"),  py::arg("Tolerance2d"),  py::arg("Eps"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
        .def("IsSolutionReached",
             (Standard_Boolean (AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute::*)( math_MultipleVarFunctionWithGradient &  ) const) static_cast<Standard_Boolean (AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute::*)( math_MultipleVarFunctionWithGradient &  ) const>(&AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
;


    static_cast<py::class_<AppDef_ParLeastSquareOfMyGradientOfCompute ,std::unique_ptr<AppDef_ParLeastSquareOfMyGradientOfCompute>  >>(m.attr("AppDef_ParLeastSquareOfMyGradientOfCompute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def("Perform",
             (void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( const math_Vector &  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( const math_Vector &  ) >(&AppDef_ParLeastSquareOfMyGradientOfCompute::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_ParLeastSquareOfMyGradientOfCompute::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_ParLeastSquareOfMyGradientOfCompute::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_ParLeastSquareOfMyGradientOfCompute::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const) static_cast<Standard_Boolean (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientOfCompute::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() ) static_cast<AppParCurves_MultiCurve (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() >(&AppDef_ParLeastSquareOfMyGradientOfCompute::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() >(&AppDef_ParLeastSquareOfMyGradientOfCompute::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientOfCompute::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientOfCompute::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("ErrorGradient",
             (void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( math_Vector & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( math_Vector & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_ParLeastSquareOfMyGradientOfCompute::ErrorGradient),
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"),  py::arg("F"),  py::arg("MaxE3d"),  py::arg("MaxE2d"))
        .def("Distance",
             (const math_Matrix & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() ) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() >(&AppDef_ParLeastSquareOfMyGradientOfCompute::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("Error",
             (void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientOfCompute::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_ParLeastSquareOfMyGradientOfCompute::Error),
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#"  , py::arg("F"),  py::arg("MaxE3d"),  py::arg("MaxE2d"))
        .def("FirstLambda",
             (Standard_Real (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const) static_cast<Standard_Real (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientOfCompute::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const) static_cast<Standard_Real (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientOfCompute::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientOfCompute::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientOfCompute::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const) static_cast<const math_IntegerVector & (AppDef_ParLeastSquareOfMyGradientOfCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientOfCompute::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
;


    static_cast<py::class_<AppDef_TheResol ,std::unique_ptr<AppDef_TheResol>  >>(m.attr("AppDef_TheResol"))
        .def(py::init< const AppDef_MultiLine &,AppParCurves_MultiCurve &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Matrix &,const math_Matrix &,const Standard_Real >()  , py::arg("SSP"),  py::arg("SCurv"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("Constraints"),  py::arg("Bern"),  py::arg("DerivativeBern"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-10) )
        .def("IsDone",
             (Standard_Boolean (AppDef_TheResol::*)() const) static_cast<Standard_Boolean (AppDef_TheResol::*)() const>(&AppDef_TheResol::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("ConstraintMatrix",
             (const math_Matrix & (AppDef_TheResol::*)() const) static_cast<const math_Matrix & (AppDef_TheResol::*)() const>(&AppDef_TheResol::ConstraintMatrix),
             R"#(None)#" )
        .def("Duale",
             (const math_Vector & (AppDef_TheResol::*)() const) static_cast<const math_Vector & (AppDef_TheResol::*)() const>(&AppDef_TheResol::Duale),
             R"#(returns the duale variables of the system.)#" )
        .def("ConstraintDerivative",
             (const math_Matrix & (AppDef_TheResol::*)( const AppDef_MultiLine & ,  const math_Vector & ,  const Standard_Integer ,  const math_Matrix &  ) ) static_cast<const math_Matrix & (AppDef_TheResol::*)( const AppDef_MultiLine & ,  const math_Vector & ,  const Standard_Integer ,  const math_Matrix &  ) >(&AppDef_TheResol::ConstraintDerivative),
             R"#(Returns the derivative of the constraint matrix.)#"  , py::arg("SSP"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("DA"))
        .def("InverseMatrix",
             (const math_Matrix & (AppDef_TheResol::*)() const) static_cast<const math_Matrix & (AppDef_TheResol::*)() const>(&AppDef_TheResol::InverseMatrix),
             R"#(returns the Inverse of Cont*Transposed(Cont), where Cont is the constraint matrix for the algorithm.)#" )
;


    static_cast<py::class_<AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute ,std::unique_ptr<AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute>  >>(m.attr("AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def("Perform",
             (void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( const math_Vector &  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( const math_Vector &  ) >(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Boolean (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() ) static_cast<AppParCurves_MultiCurve (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() >(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() >(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("ErrorGradient",
             (void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( math_Vector & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( math_Vector & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::ErrorGradient),
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"),  py::arg("F"),  py::arg("MaxE3d"),  py::arg("MaxE2d"))
        .def("Distance",
             (const math_Matrix & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() ) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() >(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("Error",
             (void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::Error),
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#"  , py::arg("F"),  py::arg("MaxE3d"),  py::arg("MaxE2d"))
        .def("FirstLambda",
             (Standard_Real (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const) static_cast<const math_IntegerVector & (AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
;


    static_cast<py::class_<AppDef_ParFunctionOfMyGradientOfCompute ,std::unique_ptr<AppDef_ParFunctionOfMyGradientOfCompute>  , math_MultipleVarFunctionWithGradient >>(m.attr("AppDef_ParFunctionOfMyGradientOfCompute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg") )
        .def("NbVariables",
             (Standard_Integer (AppDef_ParFunctionOfMyGradientOfCompute::*)() const) static_cast<Standard_Integer (AppDef_ParFunctionOfMyGradientOfCompute::*)() const>(&AppDef_ParFunctionOfMyGradientOfCompute::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & ,  Standard_Real &  ) >(&AppDef_ParFunctionOfMyGradientOfCompute::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & ,  math_Vector &  ) >(&AppDef_ParFunctionOfMyGradientOfCompute::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientOfCompute::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) >(&AppDef_ParFunctionOfMyGradientOfCompute::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (AppDef_ParFunctionOfMyGradientOfCompute::*)() const) static_cast<const math_Vector & (AppDef_ParFunctionOfMyGradientOfCompute::*)() const>(&AppDef_ParFunctionOfMyGradientOfCompute::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (const AppParCurves_MultiCurve & (AppDef_ParFunctionOfMyGradientOfCompute::*)() ) static_cast<const AppParCurves_MultiCurve & (AppDef_ParFunctionOfMyGradientOfCompute::*)() >(&AppDef_ParFunctionOfMyGradientOfCompute::CurveValue),
             R"#(returns the MultiCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (AppDef_ParFunctionOfMyGradientOfCompute::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AppDef_ParFunctionOfMyGradientOfCompute::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AppDef_ParFunctionOfMyGradientOfCompute::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (AppDef_ParFunctionOfMyGradientOfCompute::*)() const) static_cast<Standard_Real (AppDef_ParFunctionOfMyGradientOfCompute::*)() const>(&AppDef_ParFunctionOfMyGradientOfCompute::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (AppDef_ParFunctionOfMyGradientOfCompute::*)() const) static_cast<Standard_Real (AppDef_ParFunctionOfMyGradientOfCompute::*)() const>(&AppDef_ParFunctionOfMyGradientOfCompute::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (AppDef_ParFunctionOfMyGradientOfCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const) static_cast<AppParCurves_Constraint (AppDef_ParFunctionOfMyGradientOfCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const>(&AppDef_ParFunctionOfMyGradientOfCompute::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (AppDef_ParFunctionOfMyGradientOfCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const) static_cast<AppParCurves_Constraint (AppDef_ParFunctionOfMyGradientOfCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const>(&AppDef_ParFunctionOfMyGradientOfCompute::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
;


    static_cast<py::class_<AppDef_ResConstraintOfMyGradientOfCompute ,std::unique_ptr<AppDef_ResConstraintOfMyGradientOfCompute>  >>(m.attr("AppDef_ResConstraintOfMyGradientOfCompute"))
        .def(py::init< const AppDef_MultiLine &,AppParCurves_MultiCurve &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Matrix &,const math_Matrix &,const Standard_Real >()  , py::arg("SSP"),  py::arg("SCurv"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("Constraints"),  py::arg("Bern"),  py::arg("DerivativeBern"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-10) )
        .def("IsDone",
             (Standard_Boolean (AppDef_ResConstraintOfMyGradientOfCompute::*)() const) static_cast<Standard_Boolean (AppDef_ResConstraintOfMyGradientOfCompute::*)() const>(&AppDef_ResConstraintOfMyGradientOfCompute::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("ConstraintMatrix",
             (const math_Matrix & (AppDef_ResConstraintOfMyGradientOfCompute::*)() const) static_cast<const math_Matrix & (AppDef_ResConstraintOfMyGradientOfCompute::*)() const>(&AppDef_ResConstraintOfMyGradientOfCompute::ConstraintMatrix),
             R"#(None)#" )
        .def("Duale",
             (const math_Vector & (AppDef_ResConstraintOfMyGradientOfCompute::*)() const) static_cast<const math_Vector & (AppDef_ResConstraintOfMyGradientOfCompute::*)() const>(&AppDef_ResConstraintOfMyGradientOfCompute::Duale),
             R"#(returns the duale variables of the system.)#" )
        .def("ConstraintDerivative",
             (const math_Matrix & (AppDef_ResConstraintOfMyGradientOfCompute::*)( const AppDef_MultiLine & ,  const math_Vector & ,  const Standard_Integer ,  const math_Matrix &  ) ) static_cast<const math_Matrix & (AppDef_ResConstraintOfMyGradientOfCompute::*)( const AppDef_MultiLine & ,  const math_Vector & ,  const Standard_Integer ,  const math_Matrix &  ) >(&AppDef_ResConstraintOfMyGradientOfCompute::ConstraintDerivative),
             R"#(Returns the derivative of the constraint matrix.)#"  , py::arg("SSP"),  py::arg("Parameters"),  py::arg("Deg"),  py::arg("DA"))
        .def("InverseMatrix",
             (const math_Matrix & (AppDef_ResConstraintOfMyGradientOfCompute::*)() const) static_cast<const math_Matrix & (AppDef_ResConstraintOfMyGradientOfCompute::*)() const>(&AppDef_ResConstraintOfMyGradientOfCompute::InverseMatrix),
             R"#(returns the Inverse of Cont*Transposed(Cont), where Cont is the constraint matrix for the algorithm.)#" )
;


    static_cast<py::class_<AppDef_Gradient_BFGSOfTheGradient ,std::unique_ptr<AppDef_Gradient_BFGSOfTheGradient>  , math_BFGS >>(m.attr("AppDef_Gradient_BFGSOfTheGradient"))
        .def(py::init< math_MultipleVarFunctionWithGradient &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("StartingPoint"),  py::arg("Tolerance3d"),  py::arg("Tolerance2d"),  py::arg("Eps"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
        .def("IsSolutionReached",
             (Standard_Boolean (AppDef_Gradient_BFGSOfTheGradient::*)( math_MultipleVarFunctionWithGradient &  ) const) static_cast<Standard_Boolean (AppDef_Gradient_BFGSOfTheGradient::*)( math_MultipleVarFunctionWithGradient &  ) const>(&AppDef_Gradient_BFGSOfTheGradient::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
;


    static_cast<py::class_<AppDef_MultiPointConstraint ,std::unique_ptr<AppDef_MultiPointConstraint>  , AppParCurves_MultiPoint >>(m.attr("AppDef_MultiPointConstraint"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("NbPoints"),  py::arg("NbPoints2d") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> & >()  , py::arg("tabP") )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> & >()  , py::arg("tabP") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<gp_Pnt2d> & >()  , py::arg("tabP"),  py::arg("tabP2d") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<gp_Pnt2d> &, const NCollection_Array1<gp_Vec> &, const NCollection_Array1<gp_Vec2d> &, const NCollection_Array1<gp_Vec> &, const NCollection_Array1<gp_Vec2d> & >()  , py::arg("tabP"),  py::arg("tabP2d"),  py::arg("tabVec"),  py::arg("tabVec2d"),  py::arg("tabCur"),  py::arg("tabCur2d") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<gp_Pnt2d> &, const NCollection_Array1<gp_Vec> &, const NCollection_Array1<gp_Vec2d> & >()  , py::arg("tabP"),  py::arg("tabP2d"),  py::arg("tabVec"),  py::arg("tabVec2d") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<gp_Vec> &, const NCollection_Array1<gp_Vec> & >()  , py::arg("tabP"),  py::arg("tabVec"),  py::arg("tabCur") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<gp_Vec> & >()  , py::arg("tabP"),  py::arg("tabVec") )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> &, const NCollection_Array1<gp_Vec2d> & >()  , py::arg("tabP2d"),  py::arg("tabVec2d") )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> &, const NCollection_Array1<gp_Vec2d> &, const NCollection_Array1<gp_Vec2d> & >()  , py::arg("tabP2d"),  py::arg("tabVec2d"),  py::arg("tabCur2d") )
        .def("SetTang",
             (void (AppDef_MultiPointConstraint::*)( const Standard_Integer ,  const gp_Vec &  ) ) static_cast<void (AppDef_MultiPointConstraint::*)( const Standard_Integer ,  const gp_Vec &  ) >(&AppDef_MultiPointConstraint::SetTang),
             R"#(sets the value of the tangency of the point of range Index. An exception is raised if Index <0 or if Index > number of 3d points. An exception is raised if Tang has an incorrect number of dimensions.)#"  , py::arg("Index"),  py::arg("Tang"))
        .def("Tang",
             (gp_Vec (AppDef_MultiPointConstraint::*)( const Standard_Integer  ) const) static_cast<gp_Vec (AppDef_MultiPointConstraint::*)( const Standard_Integer  ) const>(&AppDef_MultiPointConstraint::Tang),
             R"#(returns the tangency value of the point of range Index. An exception is raised if Index < 0 or if Index > number of 3d points.)#"  , py::arg("Index"))
        .def("SetTang2d",
             (void (AppDef_MultiPointConstraint::*)( const Standard_Integer ,  const gp_Vec2d &  ) ) static_cast<void (AppDef_MultiPointConstraint::*)( const Standard_Integer ,  const gp_Vec2d &  ) >(&AppDef_MultiPointConstraint::SetTang2d),
             R"#(sets the value of the tangency of the point of range Index. An exception is raised if Index <number of 3d points or if Index > total number of Points An exception is raised if Tang has an incorrect number of dimensions.)#"  , py::arg("Index"),  py::arg("Tang2d"))
        .def("Tang2d",
             (gp_Vec2d (AppDef_MultiPointConstraint::*)( const Standard_Integer  ) const) static_cast<gp_Vec2d (AppDef_MultiPointConstraint::*)( const Standard_Integer  ) const>(&AppDef_MultiPointConstraint::Tang2d),
             R"#(returns the tangency value of the point of range Index. An exception is raised if Index < number of 3d points or if Index > total number of points.)#"  , py::arg("Index"))
        .def("SetCurv",
             (void (AppDef_MultiPointConstraint::*)( const Standard_Integer ,  const gp_Vec &  ) ) static_cast<void (AppDef_MultiPointConstraint::*)( const Standard_Integer ,  const gp_Vec &  ) >(&AppDef_MultiPointConstraint::SetCurv),
             R"#(Vec sets the value of the normal vector at the point of index Index. The norm of the normal vector at the point of position Index is set to the normal curvature. An exception is raised if Index <0 or if Index > number of 3d points. An exception is raised if Curv has an incorrect number of dimensions.)#"  , py::arg("Index"),  py::arg("Curv"))
        .def("Curv",
             (gp_Vec (AppDef_MultiPointConstraint::*)( const Standard_Integer  ) const) static_cast<gp_Vec (AppDef_MultiPointConstraint::*)( const Standard_Integer  ) const>(&AppDef_MultiPointConstraint::Curv),
             R"#(returns the normal vector at the point of range Index. An exception is raised if Index < 0 or if Index > number of 3d points.)#"  , py::arg("Index"))
        .def("SetCurv2d",
             (void (AppDef_MultiPointConstraint::*)( const Standard_Integer ,  const gp_Vec2d &  ) ) static_cast<void (AppDef_MultiPointConstraint::*)( const Standard_Integer ,  const gp_Vec2d &  ) >(&AppDef_MultiPointConstraint::SetCurv2d),
             R"#(Vec sets the value of the normal vector at the point of index Index. The norm of the normal vector at the point of position Index is set to the normal curvature. An exception is raised if Index <0 or if Index > number of 3d points. An exception is raised if Curv has an incorrect number of dimensions.)#"  , py::arg("Index"),  py::arg("Curv2d"))
        .def("Curv2d",
             (gp_Vec2d (AppDef_MultiPointConstraint::*)( const Standard_Integer  ) const) static_cast<gp_Vec2d (AppDef_MultiPointConstraint::*)( const Standard_Integer  ) const>(&AppDef_MultiPointConstraint::Curv2d),
             R"#(returns the normal vector at the point of range Index. An exception is raised if Index < 0 or if Index > number of 3d points.)#"  , py::arg("Index"))
        .def("IsTangencyPoint",
             (Standard_Boolean (AppDef_MultiPointConstraint::*)() const) static_cast<Standard_Boolean (AppDef_MultiPointConstraint::*)() const>(&AppDef_MultiPointConstraint::IsTangencyPoint),
             R"#(returns True if the MultiPoint has a tangency value.)#" )
        .def("IsCurvaturePoint",
             (Standard_Boolean (AppDef_MultiPointConstraint::*)() const) static_cast<Standard_Boolean (AppDef_MultiPointConstraint::*)() const>(&AppDef_MultiPointConstraint::IsCurvaturePoint),
             R"#(returns True if the MultiPoint has a curvature value.)#" )
        .def("Dump",
             (void (AppDef_MultiPointConstraint::*)( std::ostream &  ) const) static_cast<void (AppDef_MultiPointConstraint::*)( std::ostream &  ) const>(&AppDef_MultiPointConstraint::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
;


    static_cast<py::class_<AppDef_Gradient_BFGSOfMyGradientOfCompute ,std::unique_ptr<AppDef_Gradient_BFGSOfMyGradientOfCompute>  , math_BFGS >>(m.attr("AppDef_Gradient_BFGSOfMyGradientOfCompute"))
        .def(py::init< math_MultipleVarFunctionWithGradient &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("StartingPoint"),  py::arg("Tolerance3d"),  py::arg("Tolerance2d"),  py::arg("Eps"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200) )
        .def("IsSolutionReached",
             (Standard_Boolean (AppDef_Gradient_BFGSOfMyGradientOfCompute::*)( math_MultipleVarFunctionWithGradient &  ) const) static_cast<Standard_Boolean (AppDef_Gradient_BFGSOfMyGradientOfCompute::*)( math_MultipleVarFunctionWithGradient &  ) const>(&AppDef_Gradient_BFGSOfMyGradientOfCompute::IsSolutionReached),
             R"#(None)#"  , py::arg("F"))
;


    static_cast<py::class_<AppDef_MultiLine ,std::unique_ptr<AppDef_MultiLine>  >>(m.attr("AppDef_MultiLine"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer >()  , py::arg("NbMult") )
        .def(py::init<  const NCollection_Array1<AppDef_MultiPointConstraint> & >()  , py::arg("tabMultiP") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> & >()  , py::arg("tabP3d") )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> & >()  , py::arg("tabP2d") )
        .def("NbMultiPoints",
             (Standard_Integer (AppDef_MultiLine::*)() const) static_cast<Standard_Integer (AppDef_MultiLine::*)() const>(&AppDef_MultiLine::NbMultiPoints),
             R"#(returns the number of MultiPointConstraints of the MultiLine.)#" )
        .def("NbPoints",
             (Standard_Integer (AppDef_MultiLine::*)() const) static_cast<Standard_Integer (AppDef_MultiLine::*)() const>(&AppDef_MultiLine::NbPoints),
             R"#(returns the number of Points from MultiPoints composing the MultiLine.)#" )
        .def("SetValue",
             (void (AppDef_MultiLine::*)( const Standard_Integer ,  const AppDef_MultiPointConstraint &  ) ) static_cast<void (AppDef_MultiLine::*)( const Standard_Integer ,  const AppDef_MultiPointConstraint &  ) >(&AppDef_MultiLine::SetValue),
             R"#(It sets the MultiPointConstraint of range Index to the value MPoint. An exception is raised if Index < 0 or Index> MPoint. An exception is raised if the dimensions of the MultiPoints are different.)#"  , py::arg("Index"),  py::arg("MPoint"))
        .def("Value",
             (AppDef_MultiPointConstraint (AppDef_MultiLine::*)( const Standard_Integer  ) const) static_cast<AppDef_MultiPointConstraint (AppDef_MultiLine::*)( const Standard_Integer  ) const>(&AppDef_MultiLine::Value),
             R"#(returns the MultiPointConstraint of range Index An exception is raised if Index<0 or Index>MPoint.)#"  , py::arg("Index"))
        .def("Dump",
             (void (AppDef_MultiLine::*)( std::ostream &  ) const) static_cast<void (AppDef_MultiLine::*)( std::ostream &  ) const>(&AppDef_MultiLine::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
;


    static_cast<py::class_<AppDef_ParFunctionOfTheGradient ,std::unique_ptr<AppDef_ParFunctionOfTheGradient>  , math_MultipleVarFunctionWithGradient >>(m.attr("AppDef_ParFunctionOfTheGradient"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg") )
        .def("NbVariables",
             (Standard_Integer (AppDef_ParFunctionOfTheGradient::*)() const) static_cast<Standard_Integer (AppDef_ParFunctionOfTheGradient::*)() const>(&AppDef_ParFunctionOfTheGradient::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & ,  Standard_Real &  ) >(&AppDef_ParFunctionOfTheGradient::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & ,  math_Vector &  ) >(&AppDef_ParFunctionOfTheGradient::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfTheGradient::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) >(&AppDef_ParFunctionOfTheGradient::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (AppDef_ParFunctionOfTheGradient::*)() const) static_cast<const math_Vector & (AppDef_ParFunctionOfTheGradient::*)() const>(&AppDef_ParFunctionOfTheGradient::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (const AppParCurves_MultiCurve & (AppDef_ParFunctionOfTheGradient::*)() ) static_cast<const AppParCurves_MultiCurve & (AppDef_ParFunctionOfTheGradient::*)() >(&AppDef_ParFunctionOfTheGradient::CurveValue),
             R"#(returns the MultiCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (AppDef_ParFunctionOfTheGradient::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AppDef_ParFunctionOfTheGradient::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AppDef_ParFunctionOfTheGradient::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (AppDef_ParFunctionOfTheGradient::*)() const) static_cast<Standard_Real (AppDef_ParFunctionOfTheGradient::*)() const>(&AppDef_ParFunctionOfTheGradient::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (AppDef_ParFunctionOfTheGradient::*)() const) static_cast<Standard_Real (AppDef_ParFunctionOfTheGradient::*)() const>(&AppDef_ParFunctionOfTheGradient::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (AppDef_ParFunctionOfTheGradient::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const) static_cast<AppParCurves_Constraint (AppDef_ParFunctionOfTheGradient::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const>(&AppDef_ParFunctionOfTheGradient::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (AppDef_ParFunctionOfTheGradient::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const) static_cast<AppParCurves_Constraint (AppDef_ParFunctionOfTheGradient::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const>(&AppDef_ParFunctionOfTheGradient::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
;


    static_cast<py::class_<AppDef_ParFunctionOfMyGradientbisOfBSplineCompute ,std::unique_ptr<AppDef_ParFunctionOfMyGradientbisOfBSplineCompute>  , math_MultipleVarFunctionWithGradient >>(m.attr("AppDef_ParFunctionOfMyGradientbisOfBSplineCompute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Deg") )
        .def("NbVariables",
             (Standard_Integer (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Integer (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  Standard_Real &  ) >(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  math_Vector &  ) >(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) ) static_cast<Standard_Boolean (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) >(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() const) static_cast<const math_Vector & (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (const AppParCurves_MultiCurve & (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() ) static_cast<const AppParCurves_MultiCurve & (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() >(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::CurveValue),
             R"#(returns the MultiCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)() const>(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiCurve.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const) static_cast<AppParCurves_Constraint (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const>(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const) static_cast<AppParCurves_Constraint (AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const>(&AppDef_ParFunctionOfMyGradientbisOfBSplineCompute::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
;


    static_cast<py::class_<AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute ,std::unique_ptr<AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute>  , math_MultipleVarFunctionWithGradient >>(m.attr("AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,const math_Vector &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("NbPol") )
        .def("NbVariables",
             (Standard_Integer (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Integer (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::NbVariables),
             R"#(returns the number of variables of the function. It corresponds to the number of MultiPoints.)#" )
        .def("Value",
             (Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  Standard_Real &  ) >(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::Value),
             R"#(this method computes the new approximation of the MultiLine SSP and calculates F = sum (||Pui - Bi*Pi||2) for each point of the MultiLine.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  math_Vector &  ) ) static_cast<Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  math_Vector &  ) >(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::Gradient),
             R"#(returns the gradient G of the sum above for the parameters Xi.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) ) static_cast<Standard_Boolean (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const math_Vector & ,  Standard_Real & ,  math_Vector &  ) >(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::Values),
             R"#(returns the value F=sum(||Pui - Bi*Pi||)2. returns the value G = grad(F) for the parameters Xi.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("NewParameters",
             (const math_Vector & (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<const math_Vector & (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::NewParameters),
             R"#(returns the new parameters of the MultiLine.)#" )
        .def("CurveValue",
             (AppParCurves_MultiBSpCurve (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() ) static_cast<AppParCurves_MultiBSpCurve (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() >(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::CurveValue),
             R"#(returns the MultiBSpCurve approximating the set after computing the value F or Grad(F).)#" )
        .def("Error",
             (Standard_Real (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Real (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const Standard_Integer ,  const Standard_Integer  ) >(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::Error),
             R"#(returns the distance between the MultiPoint of range IPoint and the curve CurveIndex.)#"  , py::arg("IPoint"),  py::arg("CurveIndex"))
        .def("MaxError3d",
             (Standard_Real (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::MaxError3d),
             R"#(returns the maximum distance between the points and the MultiBSpCurve.)#" )
        .def("MaxError2d",
             (Standard_Real (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::MaxError2d),
             R"#(returns the maximum distance between the points and the MultiBSpCurve.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::FunctionMatrix),
             R"#(returns the function matrix used to approximate the multiline.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<const math_Matrix & (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the multiline.)#" )
        .def("Index",
             (const math_IntegerVector & (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const) static_cast<const math_IntegerVector & (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)() const>(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::Index),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
        .def("FirstConstraint",
             (AppParCurves_Constraint (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const) static_cast<AppParCurves_Constraint (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const>(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::FirstConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("FirstPoint"))
        .def("LastConstraint",
             (AppParCurves_Constraint (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const) static_cast<AppParCurves_Constraint (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> & ,  const Standard_Integer  ) const>(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::LastConstraint),
             R"#(None)#"  , py::arg("TheConstraints"),  py::arg("LastPoint"))
        .def("SetFirstLambda",
             (void (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const Standard_Real  ) ) static_cast<void (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const Standard_Real  ) >(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::SetFirstLambda),
             R"#(None)#"  , py::arg("l1"))
        .def("SetLastLambda",
             (void (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const Standard_Real  ) ) static_cast<void (AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::*)( const Standard_Real  ) >(&AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute::SetLastLambda),
             R"#(None)#"  , py::arg("l2"))
;


    static_cast<py::class_<AppDef_ParLeastSquareOfTheGradient ,std::unique_ptr<AppDef_ParLeastSquareOfTheGradient>  >>(m.attr("AppDef_ParLeastSquareOfTheGradient"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const math_Vector &,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Parameters"),  py::arg("NbPol") )
        .def(py::init< const AppDef_MultiLine &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer >()  , py::arg("SSP"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("NbPol") )
        .def("Perform",
             (void (AppDef_ParLeastSquareOfTheGradient::*)( const math_Vector &  ) ) static_cast<void (AppDef_ParLeastSquareOfTheGradient::*)( const math_Vector &  ) >(&AppDef_ParLeastSquareOfTheGradient::Perform),
             R"#(Is used after having initialized the fields. The case "CurvaturePoint" is not treated in this method.)#"  , py::arg("Parameters"))
        .def("Perform",
             (void (AppDef_ParLeastSquareOfTheGradient::*)( const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_ParLeastSquareOfTheGradient::*)( const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_ParLeastSquareOfTheGradient::Perform),
             R"#(Is used after having initialized the fields.)#"  , py::arg("Parameters"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (AppDef_ParLeastSquareOfTheGradient::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_ParLeastSquareOfTheGradient::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_ParLeastSquareOfTheGradient::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("l1"),  py::arg("l2"))
        .def("Perform",
             (void (AppDef_ParLeastSquareOfTheGradient::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_ParLeastSquareOfTheGradient::*)( const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const math_Vector & ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_ParLeastSquareOfTheGradient::Perform),
             R"#(Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.)#"  , py::arg("Parameters"),  py::arg("V1t"),  py::arg("V2t"),  py::arg("V1c"),  py::arg("V2c"),  py::arg("l1"),  py::arg("l2"))
        .def("IsDone",
             (Standard_Boolean (AppDef_ParLeastSquareOfTheGradient::*)() const) static_cast<Standard_Boolean (AppDef_ParLeastSquareOfTheGradient::*)() const>(&AppDef_ParLeastSquareOfTheGradient::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("BezierValue",
             (AppParCurves_MultiCurve (AppDef_ParLeastSquareOfTheGradient::*)() ) static_cast<AppParCurves_MultiCurve (AppDef_ParLeastSquareOfTheGradient::*)() >(&AppDef_ParLeastSquareOfTheGradient::BezierValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("BSplineValue",
             (const AppParCurves_MultiBSpCurve & (AppDef_ParLeastSquareOfTheGradient::*)() ) static_cast<const AppParCurves_MultiBSpCurve & (AppDef_ParLeastSquareOfTheGradient::*)() >(&AppDef_ParLeastSquareOfTheGradient::BSplineValue),
             R"#(returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.)#" )
        .def("FunctionMatrix",
             (const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const>(&AppDef_ParLeastSquareOfTheGradient::FunctionMatrix),
             R"#(returns the function matrix used to approximate the set.)#" )
        .def("DerivativeFunctionMatrix",
             (const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const>(&AppDef_ParLeastSquareOfTheGradient::DerivativeFunctionMatrix),
             R"#(returns the derivative function matrix used to approximate the set.)#" )
        .def("ErrorGradient",
             (void (AppDef_ParLeastSquareOfTheGradient::*)( math_Vector & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_ParLeastSquareOfTheGradient::*)( math_Vector & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_ParLeastSquareOfTheGradient::ErrorGradient),
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.)#"  , py::arg("Grad"),  py::arg("F"),  py::arg("MaxE3d"),  py::arg("MaxE2d"))
        .def("Distance",
             (const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() ) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() >(&AppDef_ParLeastSquareOfTheGradient::Distance),
             R"#(returns the distances between the points of the multiline and the approximation curves.)#" )
        .def("Error",
             (void (AppDef_ParLeastSquareOfTheGradient::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_ParLeastSquareOfTheGradient::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_ParLeastSquareOfTheGradient::Error),
             R"#(returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.)#"  , py::arg("F"),  py::arg("MaxE3d"),  py::arg("MaxE2d"))
        .def("FirstLambda",
             (Standard_Real (AppDef_ParLeastSquareOfTheGradient::*)() const) static_cast<Standard_Real (AppDef_ParLeastSquareOfTheGradient::*)() const>(&AppDef_ParLeastSquareOfTheGradient::FirstLambda),
             R"#(returns the value (P2 - P1)/ V1 if the first point was a tangency point.)#" )
        .def("LastLambda",
             (Standard_Real (AppDef_ParLeastSquareOfTheGradient::*)() const) static_cast<Standard_Real (AppDef_ParLeastSquareOfTheGradient::*)() const>(&AppDef_ParLeastSquareOfTheGradient::LastLambda),
             R"#(returns the value (PN - PN-1)/ VN if the last point was a tangency point.)#" )
        .def("Points",
             (const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const>(&AppDef_ParLeastSquareOfTheGradient::Points),
             R"#(returns the matrix of points value.)#" )
        .def("Poles",
             (const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const) static_cast<const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const>(&AppDef_ParLeastSquareOfTheGradient::Poles),
             R"#(returns the matrix of resulting control points value.)#" )
        .def("KIndex",
             (const math_IntegerVector & (AppDef_ParLeastSquareOfTheGradient::*)() const) static_cast<const math_IntegerVector & (AppDef_ParLeastSquareOfTheGradient::*)() const>(&AppDef_ParLeastSquareOfTheGradient::KIndex),
             R"#(Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.)#" )
;


    static_cast<py::class_<AppDef_MyBSplGradientOfBSplineCompute ,std::unique_ptr<AppDef_MyBSplGradientOfBSplineCompute>  >>(m.attr("AppDef_MyBSplGradientOfBSplineCompute"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(1) )
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer,const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &,math_Vector &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Real >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint"),  py::arg("TheConstraints"),  py::arg("Parameters"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("Deg"),  py::arg("Tol3d"),  py::arg("Tol2d"),  py::arg("NbIterations"),  py::arg("lambda1"),  py::arg("lambda2") )
        .def("IsDone",
             (Standard_Boolean (AppDef_MyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Boolean (AppDef_MyBSplGradientOfBSplineCompute::*)() const>(&AppDef_MyBSplGradientOfBSplineCompute::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (AppParCurves_MultiBSpCurve (AppDef_MyBSplGradientOfBSplineCompute::*)() const) static_cast<AppParCurves_MultiBSpCurve (AppDef_MyBSplGradientOfBSplineCompute::*)() const>(&AppDef_MyBSplGradientOfBSplineCompute::Value),
             R"#(returns all the BSpline curves approximating the MultiLine SSP after minimization of the parameter.)#" )
        .def("Error",
             (Standard_Real (AppDef_MyBSplGradientOfBSplineCompute::*)( const Standard_Integer  ) const) static_cast<Standard_Real (AppDef_MyBSplGradientOfBSplineCompute::*)( const Standard_Integer  ) const>(&AppDef_MyBSplGradientOfBSplineCompute::Error),
             R"#(returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.)#"  , py::arg("Index"))
        .def("MaxError3d",
             (Standard_Real (AppDef_MyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_MyBSplGradientOfBSplineCompute::*)() const>(&AppDef_MyBSplGradientOfBSplineCompute::MaxError3d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("MaxError2d",
             (Standard_Real (AppDef_MyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_MyBSplGradientOfBSplineCompute::*)() const>(&AppDef_MyBSplGradientOfBSplineCompute::MaxError2d),
             R"#(returns the maximum difference between the old and the new approximation.)#" )
        .def("AverageError",
             (Standard_Real (AppDef_MyBSplGradientOfBSplineCompute::*)() const) static_cast<Standard_Real (AppDef_MyBSplGradientOfBSplineCompute::*)() const>(&AppDef_MyBSplGradientOfBSplineCompute::AverageError),
             R"#(returns the average error between the old and the new approximation.)#" )
;


    static_cast<py::class_<AppDef_SmoothCriterion ,opencascade::handle<AppDef_SmoothCriterion> ,Py_AppDef_SmoothCriterion , Standard_Transient >>(m.attr("AppDef_SmoothCriterion"))
        .def("SetParameters",
             (void (AppDef_SmoothCriterion::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<void (AppDef_SmoothCriterion::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) >(&AppDef_SmoothCriterion::SetParameters),
             R"#(None)#"  , py::arg("Parameters"))
        .def("SetCurve",
             (void (AppDef_SmoothCriterion::*)( const opencascade::handle<FEmTool_Curve> &  ) ) static_cast<void (AppDef_SmoothCriterion::*)( const opencascade::handle<FEmTool_Curve> &  ) >(&AppDef_SmoothCriterion::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("GetCurve",
             (void (AppDef_SmoothCriterion::*)( opencascade::handle<FEmTool_Curve> &  ) const) static_cast<void (AppDef_SmoothCriterion::*)( opencascade::handle<FEmTool_Curve> &  ) const>(&AppDef_SmoothCriterion::GetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("SetEstimation",
             (void (AppDef_SmoothCriterion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_SmoothCriterion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_SmoothCriterion::SetEstimation),
             R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("E3"))
        .def("EstLength",
             (Standard_Real & (AppDef_SmoothCriterion::*)() ) static_cast<Standard_Real & (AppDef_SmoothCriterion::*)() >(&AppDef_SmoothCriterion::EstLength),
             R"#(None)#" )
        .def("GetEstimation",
             (void (AppDef_SmoothCriterion::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (AppDef_SmoothCriterion::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&AppDef_SmoothCriterion::GetEstimation),
             R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("E3"))
        .def("AssemblyTable",
             (opencascade::handle<FEmTool_HAssemblyTable> (AppDef_SmoothCriterion::*)() const) static_cast<opencascade::handle<FEmTool_HAssemblyTable> (AppDef_SmoothCriterion::*)() const>(&AppDef_SmoothCriterion::AssemblyTable),
             R"#(None)#" )
        .def("DependenceTable",
             (opencascade::handle<TColStd_HArray2OfInteger> (AppDef_SmoothCriterion::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfInteger> (AppDef_SmoothCriterion::*)() const>(&AppDef_SmoothCriterion::DependenceTable),
             R"#(None)#" )
        .def("QualityValues",
             (Standard_Integer (AppDef_SmoothCriterion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Integer (AppDef_SmoothCriterion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_SmoothCriterion::QualityValues),
             R"#(None)#"  , py::arg("J1min"),  py::arg("J2min"),  py::arg("J3min"),  py::arg("J1"),  py::arg("J2"),  py::arg("J3"))
        .def("ErrorValues",
             (void (AppDef_SmoothCriterion::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_SmoothCriterion::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_SmoothCriterion::ErrorValues),
             R"#(None)#"  , py::arg("MaxError"),  py::arg("QuadraticError"),  py::arg("AverageError"))
        .def("Hessian",
             (void (AppDef_SmoothCriterion::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  math_Matrix &  ) ) static_cast<void (AppDef_SmoothCriterion::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  math_Matrix &  ) >(&AppDef_SmoothCriterion::Hessian),
             R"#(None)#"  , py::arg("Element"),  py::arg("Dimension1"),  py::arg("Dimension2"),  py::arg("H"))
        .def("Gradient",
             (void (AppDef_SmoothCriterion::*)( const Standard_Integer ,  const Standard_Integer ,  math_Vector &  ) ) static_cast<void (AppDef_SmoothCriterion::*)( const Standard_Integer ,  const Standard_Integer ,  math_Vector &  ) >(&AppDef_SmoothCriterion::Gradient),
             R"#(None)#"  , py::arg("Element"),  py::arg("Dimension"),  py::arg("G"))
        .def("InputVector",
             (void (AppDef_SmoothCriterion::*)( const math_Vector & ,  const opencascade::handle<FEmTool_HAssemblyTable> &  ) ) static_cast<void (AppDef_SmoothCriterion::*)( const math_Vector & ,  const opencascade::handle<FEmTool_HAssemblyTable> &  ) >(&AppDef_SmoothCriterion::InputVector),
             R"#(Convert the assembly Vector in an Curve;)#"  , py::arg("X"),  py::arg("AssTable"))
        .def("SetWeight",
             (void (AppDef_SmoothCriterion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_SmoothCriterion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_SmoothCriterion::SetWeight),
             R"#(None)#"  , py::arg("QuadraticWeight"),  py::arg("QualityWeight"),  py::arg("percentJ1"),  py::arg("percentJ2"),  py::arg("percentJ3"))
        .def("GetWeight",
             (void (AppDef_SmoothCriterion::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (AppDef_SmoothCriterion::*)( Standard_Real & ,  Standard_Real &  ) const>(&AppDef_SmoothCriterion::GetWeight),
             R"#(None)#"  , py::arg("QuadraticWeight"),  py::arg("QualityWeight"))
        .def("SetWeight",
             (void (AppDef_SmoothCriterion::*)(  const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (AppDef_SmoothCriterion::*)(  const NCollection_Array1<Standard_Real> &  ) >(&AppDef_SmoothCriterion::SetWeight),
             R"#(None)#"  , py::arg("Weight"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppDef_SmoothCriterion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppDef_SmoothCriterion::*)() const>(&AppDef_SmoothCriterion::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppDef_SmoothCriterion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AppDef_SmoothCriterion::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<AppDef_LinearCriteria ,opencascade::handle<AppDef_LinearCriteria>  , AppDef_SmoothCriterion >>(m.attr("AppDef_LinearCriteria"))
        .def(py::init< const AppDef_MultiLine &,const Standard_Integer,const Standard_Integer >()  , py::arg("SSP"),  py::arg("FirstPoint"),  py::arg("LastPoint") )
        .def("SetParameters",
             (void (AppDef_LinearCriteria::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<void (AppDef_LinearCriteria::*)( const opencascade::handle<TColStd_HArray1OfReal> &  ) >(&AppDef_LinearCriteria::SetParameters),
             R"#(None)#"  , py::arg("Parameters"))
        .def("SetCurve",
             (void (AppDef_LinearCriteria::*)( const opencascade::handle<FEmTool_Curve> &  ) ) static_cast<void (AppDef_LinearCriteria::*)( const opencascade::handle<FEmTool_Curve> &  ) >(&AppDef_LinearCriteria::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("GetCurve",
             (void (AppDef_LinearCriteria::*)( opencascade::handle<FEmTool_Curve> &  ) const) static_cast<void (AppDef_LinearCriteria::*)( opencascade::handle<FEmTool_Curve> &  ) const>(&AppDef_LinearCriteria::GetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("SetEstimation",
             (void (AppDef_LinearCriteria::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_LinearCriteria::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_LinearCriteria::SetEstimation),
             R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("E3"))
        .def("EstLength",
             (Standard_Real & (AppDef_LinearCriteria::*)() ) static_cast<Standard_Real & (AppDef_LinearCriteria::*)() >(&AppDef_LinearCriteria::EstLength),
             R"#(None)#" )
        .def("GetEstimation",
             (void (AppDef_LinearCriteria::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (AppDef_LinearCriteria::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&AppDef_LinearCriteria::GetEstimation),
             R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("E3"))
        .def("AssemblyTable",
             (opencascade::handle<FEmTool_HAssemblyTable> (AppDef_LinearCriteria::*)() const) static_cast<opencascade::handle<FEmTool_HAssemblyTable> (AppDef_LinearCriteria::*)() const>(&AppDef_LinearCriteria::AssemblyTable),
             R"#(None)#" )
        .def("DependenceTable",
             (opencascade::handle<TColStd_HArray2OfInteger> (AppDef_LinearCriteria::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfInteger> (AppDef_LinearCriteria::*)() const>(&AppDef_LinearCriteria::DependenceTable),
             R"#(None)#" )
        .def("QualityValues",
             (Standard_Integer (AppDef_LinearCriteria::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Integer (AppDef_LinearCriteria::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_LinearCriteria::QualityValues),
             R"#(None)#"  , py::arg("J1min"),  py::arg("J2min"),  py::arg("J3min"),  py::arg("J1"),  py::arg("J2"),  py::arg("J3"))
        .def("ErrorValues",
             (void (AppDef_LinearCriteria::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (AppDef_LinearCriteria::*)( Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&AppDef_LinearCriteria::ErrorValues),
             R"#(None)#"  , py::arg("MaxError"),  py::arg("QuadraticError"),  py::arg("AverageError"))
        .def("Hessian",
             (void (AppDef_LinearCriteria::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  math_Matrix &  ) ) static_cast<void (AppDef_LinearCriteria::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  math_Matrix &  ) >(&AppDef_LinearCriteria::Hessian),
             R"#(None)#"  , py::arg("Element"),  py::arg("Dimension1"),  py::arg("Dimension2"),  py::arg("H"))
        .def("Gradient",
             (void (AppDef_LinearCriteria::*)( const Standard_Integer ,  const Standard_Integer ,  math_Vector &  ) ) static_cast<void (AppDef_LinearCriteria::*)( const Standard_Integer ,  const Standard_Integer ,  math_Vector &  ) >(&AppDef_LinearCriteria::Gradient),
             R"#(None)#"  , py::arg("Element"),  py::arg("Dimension"),  py::arg("G"))
        .def("InputVector",
             (void (AppDef_LinearCriteria::*)( const math_Vector & ,  const opencascade::handle<FEmTool_HAssemblyTable> &  ) ) static_cast<void (AppDef_LinearCriteria::*)( const math_Vector & ,  const opencascade::handle<FEmTool_HAssemblyTable> &  ) >(&AppDef_LinearCriteria::InputVector),
             R"#(Convert the assembly Vector in an Curve;)#"  , py::arg("X"),  py::arg("AssTable"))
        .def("SetWeight",
             (void (AppDef_LinearCriteria::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AppDef_LinearCriteria::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&AppDef_LinearCriteria::SetWeight),
             R"#(None)#"  , py::arg("QuadraticWeight"),  py::arg("QualityWeight"),  py::arg("percentJ1"),  py::arg("percentJ2"),  py::arg("percentJ3"))
        .def("GetWeight",
             (void (AppDef_LinearCriteria::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (AppDef_LinearCriteria::*)( Standard_Real & ,  Standard_Real &  ) const>(&AppDef_LinearCriteria::GetWeight),
             R"#(None)#"  , py::arg("QuadraticWeight"),  py::arg("QualityWeight"))
        .def("SetWeight",
             (void (AppDef_LinearCriteria::*)(  const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (AppDef_LinearCriteria::*)(  const NCollection_Array1<Standard_Real> &  ) >(&AppDef_LinearCriteria::SetWeight),
             R"#(None)#"  , py::arg("Weight"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AppDef_LinearCriteria::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AppDef_LinearCriteria::*)() const>(&AppDef_LinearCriteria::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AppDef_LinearCriteria::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AppDef_LinearCriteria::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/AppDef_HArray1OfMultiPointConstraint.hxx
// ./opencascade/AppDef_TheResol.hxx
// ./opencascade/AppDef_Compute.hxx
// ./opencascade/AppDef_LinearCriteria.hxx
// ./opencascade/AppDef_ResConstraintOfTheGradient.hxx
// ./opencascade/AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_ParFunctionOfTheGradient.hxx
// ./opencascade/AppDef_TheGradient.hxx
// ./opencascade/AppDef_ParFunctionOfMyGradientOfCompute.hxx
// ./opencascade/AppDef_MyLineTool.hxx
// ./opencascade/AppDef_ParLeastSquareOfTheGradient.hxx
// ./opencascade/AppDef_TheFunction.hxx
// ./opencascade/AppDef_ResConstraintOfMyGradientOfCompute.hxx
// ./opencascade/AppDef_BSplineCompute.hxx
// ./opencascade/AppDef_Array1OfMultiPointConstraint.hxx
// ./opencascade/AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_MyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_Gradient_BFGSOfTheGradient.hxx
// ./opencascade/AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_SmoothCriterion.hxx
// ./opencascade/AppDef_Variational.hxx
// ./opencascade/AppDef_MultiPointConstraint.hxx
// ./opencascade/AppDef_MyGradientOfCompute.hxx
// ./opencascade/AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_Gradient_BFGSOfMyGradientOfCompute.hxx
// ./opencascade/AppDef_TheLeastSquares.hxx
// ./opencascade/AppDef_MyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_MultiLine.hxx
// ./opencascade/AppDef_ParLeastSquareOfMyGradientOfCompute.hxx

// operators

// register typdefs
// ./opencascade/AppDef_HArray1OfMultiPointConstraint.hxx
// ./opencascade/AppDef_TheResol.hxx
// ./opencascade/AppDef_Compute.hxx
// ./opencascade/AppDef_LinearCriteria.hxx
// ./opencascade/AppDef_ResConstraintOfTheGradient.hxx
// ./opencascade/AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_ParFunctionOfTheGradient.hxx
// ./opencascade/AppDef_TheGradient.hxx
// ./opencascade/AppDef_ParFunctionOfMyGradientOfCompute.hxx
// ./opencascade/AppDef_MyLineTool.hxx
// ./opencascade/AppDef_ParLeastSquareOfTheGradient.hxx
// ./opencascade/AppDef_TheFunction.hxx
// ./opencascade/AppDef_ResConstraintOfMyGradientOfCompute.hxx
// ./opencascade/AppDef_BSplineCompute.hxx
// ./opencascade/AppDef_Array1OfMultiPointConstraint.hxx
    register_template_NCollection_Array1<AppDef_MultiPointConstraint>(m,"AppDef_Array1OfMultiPointConstraint");  
// ./opencascade/AppDef_ParFunctionOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_MyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_Gradient_BFGSOfTheGradient.hxx
// ./opencascade/AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_SmoothCriterion.hxx
// ./opencascade/AppDef_Variational.hxx
// ./opencascade/AppDef_MultiPointConstraint.hxx
// ./opencascade/AppDef_MyGradientOfCompute.hxx
// ./opencascade/AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_Gradient_BFGSOfMyGradientOfCompute.hxx
// ./opencascade/AppDef_TheLeastSquares.hxx
// ./opencascade/AppDef_MyBSplGradientOfBSplineCompute.hxx
// ./opencascade/AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute.hxx
// ./opencascade/AppDef_MultiLine.hxx
// ./opencascade/AppDef_ParLeastSquareOfMyGradientOfCompute.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
