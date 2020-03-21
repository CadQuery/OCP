
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
void register_AppDef_enums(py::module &main_module) {


py::module m = main_module.def_submodule("AppDef", R"#()#");

// user-defined inclusion per module in the body

// enums

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

// pre-register typdefs
    preregister_template_NCollection_Array1<AppDef_MultiPointConstraint>(m,"AppDef_Array1OfMultiPointConstraint");

// classes forward declarations only
    py::class_<AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute , shared_ptr<AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute> , math_BFGS>(m,"AppDef_BSpGradient_BFGSOfMyBSplGradientOfBSplineCompute",R"#(None)#");
    py::class_<AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute , shared_ptr<AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute> , math_MultipleVarFunctionWithGradient>(m,"AppDef_BSpParFunctionOfMyBSplGradientOfBSplineCompute",R"#(None)#");
    py::class_<AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute , shared_ptr<AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute> >(m,"AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute",R"#(None)#");
    py::class_<AppDef_BSplineCompute , shared_ptr<AppDef_BSplineCompute> >(m,"AppDef_BSplineCompute",R"#(None)#");
    py::class_<AppDef_Compute , shared_ptr<AppDef_Compute> >(m,"AppDef_Compute",R"#(None)#");
    py::class_<AppDef_Gradient_BFGSOfMyGradientOfCompute , shared_ptr<AppDef_Gradient_BFGSOfMyGradientOfCompute> , math_BFGS>(m,"AppDef_Gradient_BFGSOfMyGradientOfCompute",R"#(None)#");
    py::class_<AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute , shared_ptr<AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute> , math_BFGS>(m,"AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute",R"#(None)#");
    py::class_<AppDef_Gradient_BFGSOfTheGradient , shared_ptr<AppDef_Gradient_BFGSOfTheGradient> , math_BFGS>(m,"AppDef_Gradient_BFGSOfTheGradient",R"#(None)#");
    py::class_<AppDef_HArray1OfMultiPointConstraint ,opencascade::handle<AppDef_HArray1OfMultiPointConstraint> , AppDef_Array1OfMultiPointConstraint, Standard_Transient>(m,"AppDef_HArray1OfMultiPointConstraint",R"#()#");
    py::class_<AppDef_MultiLine , shared_ptr<AppDef_MultiLine> >(m,"AppDef_MultiLine",R"#(This class describes the organized set of points used in the approximations. A MultiLine is composed of n MultiPointConstraints. The approximation of the MultiLine will be done in the order of the given n MultiPointConstraints.)#");
    py::class_<AppDef_MultiPointConstraint , shared_ptr<AppDef_MultiPointConstraint> , AppParCurves_MultiPoint>(m,"AppDef_MultiPointConstraint",R"#(Describes a MultiPointConstraint used in a Multiline. MultiPointConstraints are composed of several two or three-dimensional points. The purpose is to define the corresponding points that share a common constraint in order to compute the approximation of several lines in parallel. Notes: - The order of points of a MultiPointConstraints is very important. Users must give 3D points first, and then 2D points. - The constraints for the points included in a MultiPointConstraint are always identical for all points, including the parameter. - If a MultiPointConstraint is a "tangency" point, the point is also a "passing" point.)#");
    py::class_<AppDef_MyBSplGradientOfBSplineCompute , shared_ptr<AppDef_MyBSplGradientOfBSplineCompute> >(m,"AppDef_MyBSplGradientOfBSplineCompute",R"#(None)#");
    py::class_<AppDef_MyGradientOfCompute , shared_ptr<AppDef_MyGradientOfCompute> >(m,"AppDef_MyGradientOfCompute",R"#(None)#");
    py::class_<AppDef_MyGradientbisOfBSplineCompute , shared_ptr<AppDef_MyGradientbisOfBSplineCompute> >(m,"AppDef_MyGradientbisOfBSplineCompute",R"#(None)#");
    py::class_<AppDef_MyLineTool , shared_ptr<AppDef_MyLineTool> >(m,"AppDef_MyLineTool",R"#(example of MultiLine tool corresponding to the tools of the packages AppParCurves and Approx. For Approx, the tool will not addd points if the algorithms want some.)#");
    py::class_<AppDef_ParFunctionOfMyGradientOfCompute , shared_ptr<AppDef_ParFunctionOfMyGradientOfCompute> , math_MultipleVarFunctionWithGradient>(m,"AppDef_ParFunctionOfMyGradientOfCompute",R"#(None)#");
    py::class_<AppDef_ParFunctionOfMyGradientbisOfBSplineCompute , shared_ptr<AppDef_ParFunctionOfMyGradientbisOfBSplineCompute> , math_MultipleVarFunctionWithGradient>(m,"AppDef_ParFunctionOfMyGradientbisOfBSplineCompute",R"#(None)#");
    py::class_<AppDef_ParFunctionOfTheGradient , shared_ptr<AppDef_ParFunctionOfTheGradient> , math_MultipleVarFunctionWithGradient>(m,"AppDef_ParFunctionOfTheGradient",R"#(None)#");
    py::class_<AppDef_ParLeastSquareOfMyGradientOfCompute , shared_ptr<AppDef_ParLeastSquareOfMyGradientOfCompute> >(m,"AppDef_ParLeastSquareOfMyGradientOfCompute",R"#(None)#");
    py::class_<AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute , shared_ptr<AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute> >(m,"AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute",R"#(None)#");
    py::class_<AppDef_ParLeastSquareOfTheGradient , shared_ptr<AppDef_ParLeastSquareOfTheGradient> >(m,"AppDef_ParLeastSquareOfTheGradient",R"#(None)#");
    py::class_<AppDef_ResConstraintOfMyGradientOfCompute , shared_ptr<AppDef_ResConstraintOfMyGradientOfCompute> >(m,"AppDef_ResConstraintOfMyGradientOfCompute",R"#(None)#");
    py::class_<AppDef_ResConstraintOfMyGradientbisOfBSplineCompute , shared_ptr<AppDef_ResConstraintOfMyGradientbisOfBSplineCompute> >(m,"AppDef_ResConstraintOfMyGradientbisOfBSplineCompute",R"#(None)#");
    py::class_<AppDef_ResConstraintOfTheGradient , shared_ptr<AppDef_ResConstraintOfTheGradient> >(m,"AppDef_ResConstraintOfTheGradient",R"#(None)#");
    py::class_<AppDef_SmoothCriterion ,opencascade::handle<AppDef_SmoothCriterion>,Py_AppDef_SmoothCriterion , Standard_Transient>(m,"AppDef_SmoothCriterion",R"#(defined criterion to smooth points in curvedefined criterion to smooth points in curvedefined criterion to smooth points in curve)#");
    py::class_<AppDef_TheFunction , shared_ptr<AppDef_TheFunction> , math_MultipleVarFunctionWithGradient>(m,"AppDef_TheFunction",R"#(None)#");
    py::class_<AppDef_TheGradient , shared_ptr<AppDef_TheGradient> >(m,"AppDef_TheGradient",R"#(None)#");
    py::class_<AppDef_TheLeastSquares , shared_ptr<AppDef_TheLeastSquares> >(m,"AppDef_TheLeastSquares",R"#(None)#");
    py::class_<AppDef_TheResol , shared_ptr<AppDef_TheResol> >(m,"AppDef_TheResol",R"#(None)#");
    py::class_<AppDef_Variational , shared_ptr<AppDef_Variational> >(m,"AppDef_Variational",R"#(This class is used to smooth N points with constraints by minimization of quadratic criterium but also variational criterium in order to obtain " fair Curve " Computes the approximation of a Multiline by Variational optimization.)#");
    py::class_<AppDef_LinearCriteria ,opencascade::handle<AppDef_LinearCriteria> , AppDef_SmoothCriterion>(m,"AppDef_LinearCriteria",R"#(defined an Linear Criteria to used in variational Smoothing of points.defined an Linear Criteria to used in variational Smoothing of points.defined an Linear Criteria to used in variational Smoothing of points.)#");

};

// user-defined post-inclusion per module

// user-defined post
