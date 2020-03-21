
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Expr_GeneralRelation.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Expr_NumericValue.hxx>
#include <Expr_NamedExpression.hxx>
#include <Expr_NamedConstant.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Expr_UnaryExpression.hxx>
#include <Expr_Absolute.hxx>
#include <Expr_ArcCosine.hxx>
#include <Expr_ArcSine.hxx>
#include <Expr_ArcTangent.hxx>
#include <Expr_ArgCosh.hxx>
#include <Expr_ArgSinh.hxx>
#include <Expr_ArgTanh.hxx>
#include <Expr_Cosh.hxx>
#include <Expr_Cosine.hxx>
#include <Expr_Exponential.hxx>
#include <Expr_LogOf10.hxx>
#include <Expr_LogOfe.hxx>
#include <Expr_Sign.hxx>
#include <Expr_Sine.hxx>
#include <Expr_Sinh.hxx>
#include <Expr_Square.hxx>
#include <Expr_SquareRoot.hxx>
#include <Expr_Tangent.hxx>
#include <Expr_Tanh.hxx>
#include <Expr_UnaryFunction.hxx>
#include <Expr_UnaryMinus.hxx>
#include <Expr_BinaryExpression.hxx>
#include <Expr_BinaryFunction.hxx>
#include <Expr_Difference.hxx>
#include <Expr_Division.hxx>
#include <Expr_Exponentiate.hxx>
#include <Expr_PolyExpression.hxx>
#include <Expr_PolyFunction.hxx>
#include <Expr_Product.hxx>
#include <Expr_Sum.hxx>
#include <Expr_UnknownIterator.hxx>
#include <Expr_GeneralRelation.hxx>
#include <Expr_SingleRelation.hxx>
#include <Expr_Different.hxx>
#include <Expr_Equal.hxx>
#include <Expr_GreaterThan.hxx>
#include <Expr_GreaterThanOrEqual.hxx>
#include <Expr_LessThan.hxx>
#include <Expr_LessThanOrEqual.hxx>
#include <Expr_SystemRelation.hxx>
#include <Expr_RelationIterator.hxx>
#include <Expr_RUIterator.hxx>
#include <Expr_GeneralFunction.hxx>
#include <Expr_NamedFunction.hxx>
#include <Expr_FunctionDerivative.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_GeneralFunction.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Standard_OutOfRange.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_InvalidOperand.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Standard_DimensionMismatch.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_InvalidOperand.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_GeneralExpression.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedFunction.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_GeneralFunction.hxx>
#include <Expr_InvalidFunction.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_GeneralExpression.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_GeneralExpression.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_GeneralExpression.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_GeneralExpression.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_InvalidOperand.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Expr_GeneralFunction.hxx>
#include <Expr_InvalidFunction.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Expr_GeneralRelation.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_GeneralExpression.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_InvalidOperand.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_NotAssigned.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_InvalidAssignment.hxx>
#include <Expr_InvalidOperand.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NumericError.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NamedUnknown.hxx>
#include <TCollection_AsciiString.hxx>

// module includes
#include <Expr.hxx>
#include <Expr_Absolute.hxx>
#include <Expr_ArcCosine.hxx>
#include <Expr_ArcSine.hxx>
#include <Expr_ArcTangent.hxx>
#include <Expr_ArgCosh.hxx>
#include <Expr_ArgSinh.hxx>
#include <Expr_ArgTanh.hxx>
#include <Expr_Array1OfGeneralExpression.hxx>
#include <Expr_Array1OfNamedUnknown.hxx>
#include <Expr_Array1OfSingleRelation.hxx>
#include <Expr_BinaryExpression.hxx>
#include <Expr_BinaryFunction.hxx>
#include <Expr_Cosh.hxx>
#include <Expr_Cosine.hxx>
#include <Expr_Difference.hxx>
#include <Expr_Different.hxx>
#include <Expr_Division.hxx>
#include <Expr_Equal.hxx>
#include <Expr_Exponential.hxx>
#include <Expr_Exponentiate.hxx>
#include <Expr_ExprFailure.hxx>
#include <Expr_FunctionDerivative.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Expr_GeneralFunction.hxx>
#include <Expr_GeneralRelation.hxx>
#include <Expr_GreaterThan.hxx>
#include <Expr_GreaterThanOrEqual.hxx>
#include <Expr_InvalidAssignment.hxx>
#include <Expr_InvalidFunction.hxx>
#include <Expr_InvalidOperand.hxx>
#include <Expr_LessThan.hxx>
#include <Expr_LessThanOrEqual.hxx>
#include <Expr_LogOf10.hxx>
#include <Expr_LogOfe.hxx>
#include <Expr_MapOfNamedUnknown.hxx>
#include <Expr_NamedConstant.hxx>
#include <Expr_NamedExpression.hxx>
#include <Expr_NamedFunction.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Expr_NotAssigned.hxx>
#include <Expr_NotEvaluable.hxx>
#include <Expr_NumericValue.hxx>
#include <Expr_Operators.hxx>
#include <Expr_PolyExpression.hxx>
#include <Expr_PolyFunction.hxx>
#include <Expr_Product.hxx>
#include <Expr_RelationIterator.hxx>
#include <Expr_RUIterator.hxx>
#include <Expr_SequenceOfGeneralExpression.hxx>
#include <Expr_SequenceOfGeneralRelation.hxx>
#include <Expr_Sign.hxx>
#include <Expr_Sine.hxx>
#include <Expr_SingleRelation.hxx>
#include <Expr_Sinh.hxx>
#include <Expr_Square.hxx>
#include <Expr_SquareRoot.hxx>
#include <Expr_Sum.hxx>
#include <Expr_SystemRelation.hxx>
#include <Expr_Tangent.hxx>
#include <Expr_Tanh.hxx>
#include <Expr_UnaryExpression.hxx>
#include <Expr_UnaryFunction.hxx>
#include <Expr_UnaryMinus.hxx>
#include <Expr_UnknownIterator.hxx>

// template related includes
// ./opencascade/Expr_Array1OfNamedUnknown.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Expr_Array1OfGeneralExpression.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Expr_SequenceOfGeneralExpression.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Expr_SequenceOfGeneralRelation.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Expr_MapOfNamedUnknown.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Expr_Array1OfSingleRelation.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Expr(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Expr"));


//Python trampoline classes
    class Py_Expr_GeneralExpression : public Expr_GeneralExpression{
    public:
        using Expr_GeneralExpression::Expr_GeneralExpression;


        // public pure virtual
        Standard_Integer NbSubExpressions() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Expr_GeneralExpression,NbSubExpressions,) };
        const opencascade::handle<Expr_GeneralExpression> & SubExpression(const Standard_Integer I) const  override { PYBIND11_OVERLOAD_PURE(const opencascade::handle<Expr_GeneralExpression> &,Expr_GeneralExpression,SubExpression,I) };
        opencascade::handle<Expr_GeneralExpression> Simplified() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Simplified,) };
        opencascade::handle<Expr_GeneralExpression> ShallowSimplified() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,ShallowSimplified,) };
        opencascade::handle<Expr_GeneralExpression> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Copy,) };
        Standard_Boolean ContainsUnknowns() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,ContainsUnknowns,) };
        Standard_Boolean Contains(const opencascade::handle<Expr_GeneralExpression> & exp) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,Contains,exp) };
        Standard_Boolean IsLinear() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,IsLinear,) };
        Standard_Boolean IsIdentical(const opencascade::handle<Expr_GeneralExpression> & Other) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,IsIdentical,Other) };
        opencascade::handle<Expr_GeneralExpression> Derivative(const opencascade::handle<Expr_NamedUnknown> & X) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Derivative,X) };
        void Replace(const opencascade::handle<Expr_NamedUnknown> & var,const opencascade::handle<Expr_GeneralExpression> & with) override { PYBIND11_OVERLOAD_PURE(void,Expr_GeneralExpression,Replace,var,with) };
        Standard_Real Evaluate( const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & vars, const NCollection_Array1<Standard_Real> & vals) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Expr_GeneralExpression,Evaluate,vars,vals) };
        TCollection_AsciiString String() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,Expr_GeneralExpression,String,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Expr_GeneralFunction : public Expr_GeneralFunction{
    public:
        using Expr_GeneralFunction::Expr_GeneralFunction;


        // public pure virtual
        Standard_Integer NbOfVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Expr_GeneralFunction,NbOfVariables,) };
        opencascade::handle<Expr_NamedUnknown> Variable(const Standard_Integer index) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_NamedUnknown>,Expr_GeneralFunction,Variable,index) };
        opencascade::handle<Expr_GeneralFunction> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralFunction>,Expr_GeneralFunction,Copy,) };
        opencascade::handle<Expr_GeneralFunction> Derivative(const opencascade::handle<Expr_NamedUnknown> & var) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralFunction>,Expr_GeneralFunction,Derivative,var) };
        opencascade::handle<Expr_GeneralFunction> Derivative(const opencascade::handle<Expr_NamedUnknown> & var,const Standard_Integer deg) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralFunction>,Expr_GeneralFunction,Derivative,var,deg) };
        Standard_Real Evaluate( const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & vars, const NCollection_Array1<Standard_Real> & vals) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Expr_GeneralFunction,Evaluate,vars,vals) };
        Standard_Boolean IsIdentical(const opencascade::handle<Expr_GeneralFunction> & func) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralFunction,IsIdentical,func) };
        Standard_Boolean IsLinearOnVariable(const Standard_Integer index) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralFunction,IsLinearOnVariable,index) };
        TCollection_AsciiString GetStringName() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,Expr_GeneralFunction,GetStringName,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Expr_GeneralRelation : public Expr_GeneralRelation{
    public:
        using Expr_GeneralRelation::Expr_GeneralRelation;


        // public pure virtual
        Standard_Boolean IsSatisfied() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralRelation,IsSatisfied,) };
        Standard_Boolean IsLinear() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralRelation,IsLinear,) };
        opencascade::handle<Expr_GeneralRelation> Simplified() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralRelation>,Expr_GeneralRelation,Simplified,) };
        void Simplify() override { PYBIND11_OVERLOAD_PURE(void,Expr_GeneralRelation,Simplify,) };
        opencascade::handle<Expr_GeneralRelation> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralRelation>,Expr_GeneralRelation,Copy,) };
        Standard_Integer NbOfSubRelations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Expr_GeneralRelation,NbOfSubRelations,) };
        Standard_Integer NbOfSingleRelations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Expr_GeneralRelation,NbOfSingleRelations,) };
        opencascade::handle<Expr_GeneralRelation> SubRelation(const Standard_Integer index) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralRelation>,Expr_GeneralRelation,SubRelation,index) };
        Standard_Boolean Contains(const opencascade::handle<Expr_GeneralExpression> & exp) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralRelation,Contains,exp) };
        void Replace(const opencascade::handle<Expr_NamedUnknown> & var,const opencascade::handle<Expr_GeneralExpression> & with) override { PYBIND11_OVERLOAD_PURE(void,Expr_GeneralRelation,Replace,var,with) };
        TCollection_AsciiString String() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,Expr_GeneralRelation,String,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Expr_BinaryExpression : public Expr_BinaryExpression{
    public:
        using Expr_BinaryExpression::Expr_BinaryExpression;


        // public pure virtual

        opencascade::handle<Expr_GeneralExpression> ShallowSimplified() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,ShallowSimplified,) };
        opencascade::handle<Expr_GeneralExpression> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Copy,) };
        Standard_Boolean IsLinear() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,IsLinear,) };
        Standard_Boolean IsIdentical(const opencascade::handle<Expr_GeneralExpression> & Other) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,IsIdentical,Other) };
        opencascade::handle<Expr_GeneralExpression> Derivative(const opencascade::handle<Expr_NamedUnknown> & X) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Derivative,X) };
        Standard_Real Evaluate( const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & vars, const NCollection_Array1<Standard_Real> & vals) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Expr_GeneralExpression,Evaluate,vars,vals) };
        TCollection_AsciiString String() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,Expr_GeneralExpression,String,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_Expr_NamedExpression : public Expr_NamedExpression{
    public:
        using Expr_NamedExpression::Expr_NamedExpression;


        // public pure virtual

        Standard_Integer NbSubExpressions() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Expr_GeneralExpression,NbSubExpressions,) };
        const opencascade::handle<Expr_GeneralExpression> & SubExpression(const Standard_Integer I) const  override { PYBIND11_OVERLOAD_PURE(const opencascade::handle<Expr_GeneralExpression> &,Expr_GeneralExpression,SubExpression,I) };
        opencascade::handle<Expr_GeneralExpression> Simplified() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Simplified,) };
        opencascade::handle<Expr_GeneralExpression> ShallowSimplified() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,ShallowSimplified,) };
        opencascade::handle<Expr_GeneralExpression> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Copy,) };
        Standard_Boolean ContainsUnknowns() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,ContainsUnknowns,) };
        Standard_Boolean Contains(const opencascade::handle<Expr_GeneralExpression> & exp) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,Contains,exp) };
        Standard_Boolean IsLinear() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,IsLinear,) };
        opencascade::handle<Expr_GeneralExpression> Derivative(const opencascade::handle<Expr_NamedUnknown> & X) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Derivative,X) };
        void Replace(const opencascade::handle<Expr_NamedUnknown> & var,const opencascade::handle<Expr_GeneralExpression> & with) override { PYBIND11_OVERLOAD_PURE(void,Expr_GeneralExpression,Replace,var,with) };
        Standard_Real Evaluate( const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & vars, const NCollection_Array1<Standard_Real> & vals) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Expr_GeneralExpression,Evaluate,vars,vals) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_Expr_PolyExpression : public Expr_PolyExpression{
    public:
        using Expr_PolyExpression::Expr_PolyExpression;


        // public pure virtual

        opencascade::handle<Expr_GeneralExpression> ShallowSimplified() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,ShallowSimplified,) };
        opencascade::handle<Expr_GeneralExpression> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Copy,) };
        Standard_Boolean IsLinear() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,IsLinear,) };
        Standard_Boolean IsIdentical(const opencascade::handle<Expr_GeneralExpression> & Other) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,IsIdentical,Other) };
        opencascade::handle<Expr_GeneralExpression> Derivative(const opencascade::handle<Expr_NamedUnknown> & X) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Derivative,X) };
        Standard_Real Evaluate( const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & vars, const NCollection_Array1<Standard_Real> & vals) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Expr_GeneralExpression,Evaluate,vars,vals) };
        TCollection_AsciiString String() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,Expr_GeneralExpression,String,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_Expr_SingleRelation : public Expr_SingleRelation{
    public:
        using Expr_SingleRelation::Expr_SingleRelation;


        // public pure virtual

        Standard_Boolean IsSatisfied() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralRelation,IsSatisfied,) };
        opencascade::handle<Expr_GeneralRelation> Simplified() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralRelation>,Expr_GeneralRelation,Simplified,) };
        void Simplify() override { PYBIND11_OVERLOAD_PURE(void,Expr_GeneralRelation,Simplify,) };
        opencascade::handle<Expr_GeneralRelation> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralRelation>,Expr_GeneralRelation,Copy,) };
        TCollection_AsciiString String() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,Expr_GeneralRelation,String,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_Expr_UnaryExpression : public Expr_UnaryExpression{
    public:
        using Expr_UnaryExpression::Expr_UnaryExpression;


        // public pure virtual

        opencascade::handle<Expr_GeneralExpression> ShallowSimplified() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,ShallowSimplified,) };
        opencascade::handle<Expr_GeneralExpression> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Copy,) };
        Standard_Boolean IsLinear() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,IsLinear,) };
        Standard_Boolean IsIdentical(const opencascade::handle<Expr_GeneralExpression> & Other) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Expr_GeneralExpression,IsIdentical,Other) };
        opencascade::handle<Expr_GeneralExpression> Derivative(const opencascade::handle<Expr_NamedUnknown> & X) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Expr_GeneralExpression>,Expr_GeneralExpression,Derivative,X) };
        Standard_Real Evaluate( const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & vars, const NCollection_Array1<Standard_Real> & vals) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Expr_GeneralExpression,Evaluate,vars,vals) };
        TCollection_AsciiString String() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,Expr_GeneralExpression,String,) };

        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<Expr , shared_ptr<Expr>>(m,"Expr");

    static_cast<py::class_<Expr , shared_ptr<Expr> >>(m.attr("Expr"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("CopyShare_s",
                    (opencascade::handle<Expr_GeneralExpression> (*)( const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<opencascade::handle<Expr_GeneralExpression> (*)( const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr::CopyShare),
                    R"#(None)#"  , py::arg("exp"))
        .def_static("NbOfFreeVariables_s",
                    (Standard_Integer (*)( const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr::NbOfFreeVariables),
                    R"#(None)#"  , py::arg("exp"))
        .def_static("NbOfFreeVariables_s",
                    (Standard_Integer (*)( const opencascade::handle<Expr_GeneralRelation> & ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Expr_GeneralRelation> & ) >(&Expr::NbOfFreeVariables),
                    R"#(None)#"  , py::arg("exp"))
        .def_static("Sign_s",
                    (Standard_Real (*)( const Standard_Real ) ) static_cast<Standard_Real (*)( const Standard_Real ) >(&Expr::Sign),
                    R"#(None)#"  , py::arg("val"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_GeneralExpression ,opencascade::handle<Expr_GeneralExpression>,Py_Expr_GeneralExpression , Standard_Transient>>(m.attr("Expr_GeneralExpression"))
    // constructors
    // custom constructors
    // methods
        .def("NbSubExpressions",
             (Standard_Integer (Expr_GeneralExpression::*)() const) static_cast<Standard_Integer (Expr_GeneralExpression::*)() const>(&Expr_GeneralExpression::NbSubExpressions),
             R"#(Returns the number of sub-expressions contained in <me> ( >= 0))#" )
        .def("SubExpression",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_GeneralExpression::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_GeneralExpression::*)( const Standard_Integer ) const>(&Expr_GeneralExpression::SubExpression),
             R"#(Returns the <I>-th sub-expression of <me> raises OutOfRange if <I> > NbSubExpressions(me))#"  , py::arg("I"))
        .def("Simplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_GeneralExpression::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_GeneralExpression::*)() const>(&Expr_GeneralExpression::Simplified),
             R"#(Returns a GeneralExpression after replacement of NamedUnknowns by an associated expression and after values computation.)#" )
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_GeneralExpression::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_GeneralExpression::*)() const>(&Expr_GeneralExpression::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_GeneralExpression::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_GeneralExpression::*)() const>(&Expr_GeneralExpression::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("ContainsUnknowns",
             (Standard_Boolean (Expr_GeneralExpression::*)() const) static_cast<Standard_Boolean (Expr_GeneralExpression::*)() const>(&Expr_GeneralExpression::ContainsUnknowns),
             R"#(Tests if <me> contains NamedUnknowns.)#" )
        .def("Contains",
             (Standard_Boolean (Expr_GeneralExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_GeneralExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_GeneralExpression::Contains),
             R"#(Tests if <exp> is contained in <me>.)#"  , py::arg("exp"))
        .def("IsLinear",
             (Standard_Boolean (Expr_GeneralExpression::*)() const) static_cast<Standard_Boolean (Expr_GeneralExpression::*)() const>(&Expr_GeneralExpression::IsLinear),
             R"#(Tests if <me> is linear on every NamedUnknown it contains.)#" )
        .def("IsShareable",
             (Standard_Boolean (Expr_GeneralExpression::*)() const) static_cast<Standard_Boolean (Expr_GeneralExpression::*)() const>(&Expr_GeneralExpression::IsShareable),
             R"#(Tests if <me> can be shared by one or more expressions or must be copied. This method returns False as a default value. To be redefined ( especially for NamedUnknown).)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_GeneralExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_GeneralExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_GeneralExpression::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. Warning: This method does not include any simplification before testing. It could also be very slow; to be used carefully.)#"  , py::arg("Other"))
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_GeneralExpression::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_GeneralExpression::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_GeneralExpression::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("NDerivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_GeneralExpression::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_GeneralExpression::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const>(&Expr_GeneralExpression::NDerivative),
             R"#(Returns the <N>-th derivative on <X> unknown of <me>. Raise OutOfRange if N <= 0)#"  , py::arg("X"),  py::arg("N"))
        .def("Replace",
             (void (Expr_GeneralExpression::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_GeneralExpression::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_GeneralExpression::Replace),
             R"#(Replaces all occurences of <var> with copies of <with> in <me>. Copies of <with> are made with the Copy() method. Raises InvalidOperand if <with> contains <me>.)#"  , py::arg("var"),  py::arg("with"))
        .def("Evaluate",
             (Standard_Real (Expr_GeneralExpression::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_GeneralExpression::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_GeneralExpression::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("EvaluateNumeric",
             (Standard_Real (Expr_GeneralExpression::*)() const) static_cast<Standard_Real (Expr_GeneralExpression::*)() const>(&Expr_GeneralExpression::EvaluateNumeric),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#" )
        .def("String",
             (TCollection_AsciiString (Expr_GeneralExpression::*)() const) static_cast<TCollection_AsciiString (Expr_GeneralExpression::*)() const>(&Expr_GeneralExpression::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_GeneralExpression::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_GeneralExpression::*)() const>(&Expr_GeneralExpression::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_GeneralExpression::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_GeneralExpression::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_GeneralFunction ,opencascade::handle<Expr_GeneralFunction>,Py_Expr_GeneralFunction , Standard_Transient>>(m.attr("Expr_GeneralFunction"))
    // constructors
    // custom constructors
    // methods
        .def("NbOfVariables",
             (Standard_Integer (Expr_GeneralFunction::*)() const) static_cast<Standard_Integer (Expr_GeneralFunction::*)() const>(&Expr_GeneralFunction::NbOfVariables),
             R"#(Returns the number of variables of <me>.)#" )
        .def("Variable",
             (opencascade::handle<Expr_NamedUnknown> (Expr_GeneralFunction::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Expr_NamedUnknown> (Expr_GeneralFunction::*)( const Standard_Integer ) const>(&Expr_GeneralFunction::Variable),
             R"#(Returns the variable denoted by <index> in <me>. Raises OutOfRange if index > NbOfVariables.)#"  , py::arg("index"))
        .def("Copy",
             (opencascade::handle<Expr_GeneralFunction> (Expr_GeneralFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_GeneralFunction::*)() const>(&Expr_GeneralFunction::Copy),
             R"#(Returns a copy of <me> with the same form.)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralFunction> (Expr_GeneralFunction::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_GeneralFunction::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_GeneralFunction::Derivative),
             R"#(Returns Derivative of <me> for variable <var>.)#"  , py::arg("var"))
        .def("Derivative",
             (opencascade::handle<Expr_GeneralFunction> (Expr_GeneralFunction::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_GeneralFunction::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const>(&Expr_GeneralFunction::Derivative),
             R"#(Returns Derivative of <me> for variable <var> with degree <deg>.)#"  , py::arg("var"),  py::arg("deg"))
        .def("Evaluate",
             (Standard_Real (Expr_GeneralFunction::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_GeneralFunction::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_GeneralFunction::Evaluate),
             R"#(Computes the value of <me> with the given variables. Raises NotEvaluable if <vars> does not match all variables of <me>.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("IsIdentical",
             (Standard_Boolean (Expr_GeneralFunction::*)( const opencascade::handle<Expr_GeneralFunction> & ) const) static_cast<Standard_Boolean (Expr_GeneralFunction::*)( const opencascade::handle<Expr_GeneralFunction> & ) const>(&Expr_GeneralFunction::IsIdentical),
             R"#(Tests if <me> and <func> are similar functions (same name and same used expression).)#"  , py::arg("func"))
        .def("IsLinearOnVariable",
             (Standard_Boolean (Expr_GeneralFunction::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Expr_GeneralFunction::*)( const Standard_Integer ) const>(&Expr_GeneralFunction::IsLinearOnVariable),
             R"#(Tests if <me> is linear on variable on range <index>)#"  , py::arg("index"))
        .def("GetStringName",
             (TCollection_AsciiString (Expr_GeneralFunction::*)() const) static_cast<TCollection_AsciiString (Expr_GeneralFunction::*)() const>(&Expr_GeneralFunction::GetStringName),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_GeneralFunction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_GeneralFunction::*)() const>(&Expr_GeneralFunction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_GeneralFunction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_GeneralFunction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_GeneralRelation ,opencascade::handle<Expr_GeneralRelation>,Py_Expr_GeneralRelation , Standard_Transient>>(m.attr("Expr_GeneralRelation"))
    // constructors
    // custom constructors
    // methods
        .def("IsSatisfied",
             (Standard_Boolean (Expr_GeneralRelation::*)() const) static_cast<Standard_Boolean (Expr_GeneralRelation::*)() const>(&Expr_GeneralRelation::IsSatisfied),
             R"#(Returns the current status of the relation)#" )
        .def("IsLinear",
             (Standard_Boolean (Expr_GeneralRelation::*)() const) static_cast<Standard_Boolean (Expr_GeneralRelation::*)() const>(&Expr_GeneralRelation::IsLinear),
             R"#(Tests if <me> is linear between its NamedUnknowns.)#" )
        .def("Simplified",
             (opencascade::handle<Expr_GeneralRelation> (Expr_GeneralRelation::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_GeneralRelation::*)() const>(&Expr_GeneralRelation::Simplified),
             R"#(Returns a GeneralRelation after replacement of NamedUnknowns by an associated expression, and after values computation.)#" )
        .def("Simplify",
             (void (Expr_GeneralRelation::*)() ) static_cast<void (Expr_GeneralRelation::*)() >(&Expr_GeneralRelation::Simplify),
             R"#(Replaces NamedUnknowns by associated expressions, and computes values in <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralRelation> (Expr_GeneralRelation::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_GeneralRelation::*)() const>(&Expr_GeneralRelation::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("NbOfSubRelations",
             (Standard_Integer (Expr_GeneralRelation::*)() const) static_cast<Standard_Integer (Expr_GeneralRelation::*)() const>(&Expr_GeneralRelation::NbOfSubRelations),
             R"#(Returns the number of relations contained in <me>.)#" )
        .def("NbOfSingleRelations",
             (Standard_Integer (Expr_GeneralRelation::*)() const) static_cast<Standard_Integer (Expr_GeneralRelation::*)() const>(&Expr_GeneralRelation::NbOfSingleRelations),
             R"#(Returns the number of SingleRelations contained in <me>.)#" )
        .def("SubRelation",
             (opencascade::handle<Expr_GeneralRelation> (Expr_GeneralRelation::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_GeneralRelation::*)( const Standard_Integer ) const>(&Expr_GeneralRelation::SubRelation),
             R"#(Returns the relation denoted by <index> in <me>. An exception is raised if <index> is out of range.)#"  , py::arg("index"))
        .def("Contains",
             (Standard_Boolean (Expr_GeneralRelation::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_GeneralRelation::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_GeneralRelation::Contains),
             R"#(Tests if <exp> contains <var>.)#"  , py::arg("exp"))
        .def("Replace",
             (void (Expr_GeneralRelation::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_GeneralRelation::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_GeneralRelation::Replace),
             R"#(Replaces all occurences of <var> with <with> in <me>.)#"  , py::arg("var"),  py::arg("with"))
        .def("String",
             (TCollection_AsciiString (Expr_GeneralRelation::*)() const) static_cast<TCollection_AsciiString (Expr_GeneralRelation::*)() const>(&Expr_GeneralRelation::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_GeneralRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_GeneralRelation::*)() const>(&Expr_GeneralRelation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_GeneralRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_GeneralRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_RUIterator , shared_ptr<Expr_RUIterator> >>(m.attr("Expr_RUIterator"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralRelation> & >()  , py::arg("rel") )
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (Expr_RUIterator::*)() const) static_cast<Standard_Boolean (Expr_RUIterator::*)() const>(&Expr_RUIterator::More),
             R"#(Returns False if on other unknown remains.)#" )
        .def("Next",
             (void (Expr_RUIterator::*)() ) static_cast<void (Expr_RUIterator::*)() >(&Expr_RUIterator::Next),
             R"#(None)#" )
        .def("Value",
             (opencascade::handle<Expr_NamedUnknown> (Expr_RUIterator::*)() const) static_cast<opencascade::handle<Expr_NamedUnknown> (Expr_RUIterator::*)() const>(&Expr_RUIterator::Value),
             R"#(Returns current NamedUnknown. Raises exception if no more unknowns remain.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_RelationIterator , shared_ptr<Expr_RelationIterator> >>(m.attr("Expr_RelationIterator"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralRelation> & >()  , py::arg("rel") )
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (Expr_RelationIterator::*)() const) static_cast<Standard_Boolean (Expr_RelationIterator::*)() const>(&Expr_RelationIterator::More),
             R"#(Returns False if no other relation remains.)#" )
        .def("Next",
             (void (Expr_RelationIterator::*)() ) static_cast<void (Expr_RelationIterator::*)() >(&Expr_RelationIterator::Next),
             R"#(None)#" )
        .def("Value",
             (opencascade::handle<Expr_SingleRelation> (Expr_RelationIterator::*)() const) static_cast<opencascade::handle<Expr_SingleRelation> (Expr_RelationIterator::*)() const>(&Expr_RelationIterator::Value),
             R"#(Returns current basic relation. Exception is raised if no more relation remains.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_UnknownIterator , shared_ptr<Expr_UnknownIterator> >>(m.attr("Expr_UnknownIterator"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (Expr_UnknownIterator::*)() const) static_cast<Standard_Boolean (Expr_UnknownIterator::*)() const>(&Expr_UnknownIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (Expr_UnknownIterator::*)() ) static_cast<void (Expr_UnknownIterator::*)() >(&Expr_UnknownIterator::Next),
             R"#(None)#" )
        .def("Value",
             (opencascade::handle<Expr_NamedUnknown> (Expr_UnknownIterator::*)() const) static_cast<opencascade::handle<Expr_NamedUnknown> (Expr_UnknownIterator::*)() const>(&Expr_UnknownIterator::Value),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_BinaryExpression ,opencascade::handle<Expr_BinaryExpression>,Py_Expr_BinaryExpression , Expr_GeneralExpression>>(m.attr("Expr_BinaryExpression"))
    // constructors
    // custom constructors
    // methods
        .def("FirstOperand",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_BinaryExpression::*)() const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_BinaryExpression::*)() const>(&Expr_BinaryExpression::FirstOperand),
             R"#(None)#" )
        .def("SecondOperand",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_BinaryExpression::*)() const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_BinaryExpression::*)() const>(&Expr_BinaryExpression::SecondOperand),
             R"#(None)#" )
        .def("SetFirstOperand",
             (void (Expr_BinaryExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_BinaryExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_BinaryExpression::SetFirstOperand),
             R"#(Sets first operand of <me> Raises InvalidOperand if exp = me)#"  , py::arg("exp"))
        .def("SetSecondOperand",
             (void (Expr_BinaryExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_BinaryExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_BinaryExpression::SetSecondOperand),
             R"#(Sets second operand of <me> Raises InvalidOperand if <exp> contains <me>.)#"  , py::arg("exp"))
        .def("NbSubExpressions",
             (Standard_Integer (Expr_BinaryExpression::*)() const) static_cast<Standard_Integer (Expr_BinaryExpression::*)() const>(&Expr_BinaryExpression::NbSubExpressions),
             R"#(returns the number of sub-expressions contained in <me> ( >= 0))#" )
        .def("SubExpression",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_BinaryExpression::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_BinaryExpression::*)( const Standard_Integer ) const>(&Expr_BinaryExpression::SubExpression),
             R"#(returns the <I>-th sub-expression of <me> raises OutOfRange if <I> > NbSubExpressions(me))#"  , py::arg("I"))
        .def("ContainsUnknowns",
             (Standard_Boolean (Expr_BinaryExpression::*)() const) static_cast<Standard_Boolean (Expr_BinaryExpression::*)() const>(&Expr_BinaryExpression::ContainsUnknowns),
             R"#(Does <me> contain NamedUnknown ?)#" )
        .def("Contains",
             (Standard_Boolean (Expr_BinaryExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_BinaryExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_BinaryExpression::Contains),
             R"#(Tests if <me> contains <exp>.)#"  , py::arg("exp"))
        .def("Replace",
             (void (Expr_BinaryExpression::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_BinaryExpression::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_BinaryExpression::Replace),
             R"#(Replaces all occurences of <var> with <with> in <me>. Raises InvalidOperand if <with> contains <me>.)#"  , py::arg("var"),  py::arg("with"))
        .def("Simplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_BinaryExpression::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_BinaryExpression::*)() const>(&Expr_BinaryExpression::Simplified),
             R"#(Returns a GeneralExpression after replacement of NamedUnknowns by an associated expression and after values computation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_BinaryExpression::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_BinaryExpression::*)() const>(&Expr_BinaryExpression::DynamicType),
             R"#(None)#" )
        .def("FirstOperand",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_BinaryExpression::*)() const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_BinaryExpression::*)() const>(&Expr_BinaryExpression::FirstOperand),
             R"#(None)#" )
        .def("SecondOperand",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_BinaryExpression::*)() const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_BinaryExpression::*)() const>(&Expr_BinaryExpression::SecondOperand),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_BinaryExpression::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_BinaryExpression::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_FunctionDerivative ,opencascade::handle<Expr_FunctionDerivative> , Expr_GeneralFunction>>(m.attr("Expr_FunctionDerivative"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralFunction> &,const opencascade::handle<Expr_NamedUnknown> &,const Standard_Integer >()  , py::arg("func"),  py::arg("withX"),  py::arg("deg") )
    // custom constructors
    // methods
        .def("NbOfVariables",
             (Standard_Integer (Expr_FunctionDerivative::*)() const) static_cast<Standard_Integer (Expr_FunctionDerivative::*)() const>(&Expr_FunctionDerivative::NbOfVariables),
             R"#(Returns the number of variables of <me>.)#" )
        .def("Variable",
             (opencascade::handle<Expr_NamedUnknown> (Expr_FunctionDerivative::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Expr_NamedUnknown> (Expr_FunctionDerivative::*)( const Standard_Integer ) const>(&Expr_FunctionDerivative::Variable),
             R"#(Returns the variable denoted by <index> in <me>. Raises OutOfRange if <index> greater than NbOfVariables of <me>.)#"  , py::arg("index"))
        .def("Evaluate",
             (Standard_Real (Expr_FunctionDerivative::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_FunctionDerivative::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_FunctionDerivative::Evaluate),
             R"#(Computes the value of <me> with the given variables. Raises DimensionMismatch if Length(vars) is different from Length(values).)#"  , py::arg("vars"),  py::arg("values"))
        .def("Copy",
             (opencascade::handle<Expr_GeneralFunction> (Expr_FunctionDerivative::*)() const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_FunctionDerivative::*)() const>(&Expr_FunctionDerivative::Copy),
             R"#(Returns a copy of <me> with the same form.)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralFunction> (Expr_FunctionDerivative::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_FunctionDerivative::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_FunctionDerivative::Derivative),
             R"#(Returns Derivative of <me> for variable <var>.)#"  , py::arg("var"))
        .def("Derivative",
             (opencascade::handle<Expr_GeneralFunction> (Expr_FunctionDerivative::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_FunctionDerivative::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const>(&Expr_FunctionDerivative::Derivative),
             R"#(Returns Derivative of <me> for variable <var> with degree <deg>.)#"  , py::arg("var"),  py::arg("deg"))
        .def("IsIdentical",
             (Standard_Boolean (Expr_FunctionDerivative::*)( const opencascade::handle<Expr_GeneralFunction> & ) const) static_cast<Standard_Boolean (Expr_FunctionDerivative::*)( const opencascade::handle<Expr_GeneralFunction> & ) const>(&Expr_FunctionDerivative::IsIdentical),
             R"#(Tests if <me> and <func> are similar functions (same name and same used expression).)#"  , py::arg("func"))
        .def("IsLinearOnVariable",
             (Standard_Boolean (Expr_FunctionDerivative::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Expr_FunctionDerivative::*)( const Standard_Integer ) const>(&Expr_FunctionDerivative::IsLinearOnVariable),
             R"#(Tests if <me> is linear on variable on range <index>)#"  , py::arg("index"))
        .def("Function",
             (opencascade::handle<Expr_GeneralFunction> (Expr_FunctionDerivative::*)() const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_FunctionDerivative::*)() const>(&Expr_FunctionDerivative::Function),
             R"#(Returns the function of which <me> is the derivative.)#" )
        .def("Degree",
             (Standard_Integer (Expr_FunctionDerivative::*)() const) static_cast<Standard_Integer (Expr_FunctionDerivative::*)() const>(&Expr_FunctionDerivative::Degree),
             R"#(Returns the degree of derivation of <me>.)#" )
        .def("DerivVariable",
             (opencascade::handle<Expr_NamedUnknown> (Expr_FunctionDerivative::*)() const) static_cast<opencascade::handle<Expr_NamedUnknown> (Expr_FunctionDerivative::*)() const>(&Expr_FunctionDerivative::DerivVariable),
             R"#(Returns the derivation variable of <me>.)#" )
        .def("GetStringName",
             (TCollection_AsciiString (Expr_FunctionDerivative::*)() const) static_cast<TCollection_AsciiString (Expr_FunctionDerivative::*)() const>(&Expr_FunctionDerivative::GetStringName),
             R"#(None)#" )
        .def("Expression",
             (opencascade::handle<Expr_GeneralExpression> (Expr_FunctionDerivative::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_FunctionDerivative::*)() const>(&Expr_FunctionDerivative::Expression),
             R"#(None)#" )
        .def("UpdateExpression",
             (void (Expr_FunctionDerivative::*)() ) static_cast<void (Expr_FunctionDerivative::*)() >(&Expr_FunctionDerivative::UpdateExpression),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_FunctionDerivative::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_FunctionDerivative::*)() const>(&Expr_FunctionDerivative::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_FunctionDerivative::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_FunctionDerivative::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_NamedExpression ,opencascade::handle<Expr_NamedExpression>,Py_Expr_NamedExpression , Expr_GeneralExpression>>(m.attr("Expr_NamedExpression"))
    // constructors
    // custom constructors
    // methods
        .def("GetName",
             (const TCollection_AsciiString & (Expr_NamedExpression::*)() const) static_cast<const TCollection_AsciiString & (Expr_NamedExpression::*)() const>(&Expr_NamedExpression::GetName),
             R"#(None)#" )
        .def("SetName",
             (void (Expr_NamedExpression::*)( const TCollection_AsciiString & ) ) static_cast<void (Expr_NamedExpression::*)( const TCollection_AsciiString & ) >(&Expr_NamedExpression::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("IsShareable",
             (Standard_Boolean (Expr_NamedExpression::*)() const) static_cast<Standard_Boolean (Expr_NamedExpression::*)() const>(&Expr_NamedExpression::IsShareable),
             R"#(Tests if <me> can be shared by one or more expressions or must be copied. This method redefines to a True value the GeneralExpression method.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_NamedExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_NamedExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_NamedExpression::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("String",
             (TCollection_AsciiString (Expr_NamedExpression::*)() const) static_cast<TCollection_AsciiString (Expr_NamedExpression::*)() const>(&Expr_NamedExpression::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_NamedExpression::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_NamedExpression::*)() const>(&Expr_NamedExpression::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_NamedExpression::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_NamedExpression::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_NamedFunction ,opencascade::handle<Expr_NamedFunction> , Expr_GeneralFunction>>(m.attr("Expr_NamedFunction"))
    // constructors
        .def(py::init< const TCollection_AsciiString &,const opencascade::handle<Expr_GeneralExpression> &, const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & >()  , py::arg("name"),  py::arg("exp"),  py::arg("vars") )
    // custom constructors
    // methods
        .def("SetName",
             (void (Expr_NamedFunction::*)( const TCollection_AsciiString & ) ) static_cast<void (Expr_NamedFunction::*)( const TCollection_AsciiString & ) >(&Expr_NamedFunction::SetName),
             R"#(Sets the name <newname> to <me>.)#"  , py::arg("newname"))
        .def("GetName",
             (TCollection_AsciiString (Expr_NamedFunction::*)() const) static_cast<TCollection_AsciiString (Expr_NamedFunction::*)() const>(&Expr_NamedFunction::GetName),
             R"#(Returns the name assigned to <me>)#" )
        .def("NbOfVariables",
             (Standard_Integer (Expr_NamedFunction::*)() const) static_cast<Standard_Integer (Expr_NamedFunction::*)() const>(&Expr_NamedFunction::NbOfVariables),
             R"#(Returns the number of variables of <me>.)#" )
        .def("Variable",
             (opencascade::handle<Expr_NamedUnknown> (Expr_NamedFunction::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Expr_NamedUnknown> (Expr_NamedFunction::*)( const Standard_Integer ) const>(&Expr_NamedFunction::Variable),
             R"#(Returns the variable denoted by <index> in <me>. Raises OutOfRange if <index> is greater than NbOfVariables of <me>, or less than or equal to zero.)#"  , py::arg("index"))
        .def("Evaluate",
             (Standard_Real (Expr_NamedFunction::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_NamedFunction::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_NamedFunction::Evaluate),
             R"#(Computes the value of <me> with the given variables. Raises DimensionMismatch if Length(vars) is different from Length(values).)#"  , py::arg("vars"),  py::arg("values"))
        .def("Copy",
             (opencascade::handle<Expr_GeneralFunction> (Expr_NamedFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_NamedFunction::*)() const>(&Expr_NamedFunction::Copy),
             R"#(Returns a copy of <me> with the same form.)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralFunction> (Expr_NamedFunction::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_NamedFunction::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_NamedFunction::Derivative),
             R"#(Returns Derivative of <me> for variable <var>.)#"  , py::arg("var"))
        .def("Derivative",
             (opencascade::handle<Expr_GeneralFunction> (Expr_NamedFunction::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_NamedFunction::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const>(&Expr_NamedFunction::Derivative),
             R"#(Returns Derivative of <me> for variable <var> with degree <deg>.)#"  , py::arg("var"),  py::arg("deg"))
        .def("IsIdentical",
             (Standard_Boolean (Expr_NamedFunction::*)( const opencascade::handle<Expr_GeneralFunction> & ) const) static_cast<Standard_Boolean (Expr_NamedFunction::*)( const opencascade::handle<Expr_GeneralFunction> & ) const>(&Expr_NamedFunction::IsIdentical),
             R"#(Tests if <me> and <func> are similar functions (same name and same used expression).)#"  , py::arg("func"))
        .def("IsLinearOnVariable",
             (Standard_Boolean (Expr_NamedFunction::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Expr_NamedFunction::*)( const Standard_Integer ) const>(&Expr_NamedFunction::IsLinearOnVariable),
             R"#(Tests if <me> is linear on variable on range <index>)#"  , py::arg("index"))
        .def("GetStringName",
             (TCollection_AsciiString (Expr_NamedFunction::*)() const) static_cast<TCollection_AsciiString (Expr_NamedFunction::*)() const>(&Expr_NamedFunction::GetStringName),
             R"#(None)#" )
        .def("Expression",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NamedFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NamedFunction::*)() const>(&Expr_NamedFunction::Expression),
             R"#(Returns equivalent expression of <me>.)#" )
        .def("SetExpression",
             (void (Expr_NamedFunction::*)( const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_NamedFunction::*)( const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_NamedFunction::SetExpression),
             R"#(Modifies expression of <me>. Warning: Beware of derivatives. See FunctionDerivative)#"  , py::arg("exp"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_NamedFunction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_NamedFunction::*)() const>(&Expr_NamedFunction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_NamedFunction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_NamedFunction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_NumericValue ,opencascade::handle<Expr_NumericValue> , Expr_GeneralExpression>>(m.attr("Expr_NumericValue"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("val") )
    // custom constructors
    // methods
        .def("GetValue",
             (Standard_Real (Expr_NumericValue::*)() const) static_cast<Standard_Real (Expr_NumericValue::*)() const>(&Expr_NumericValue::GetValue),
             R"#(None)#" )
        .def("SetValue",
             (void (Expr_NumericValue::*)( const Standard_Real ) ) static_cast<void (Expr_NumericValue::*)( const Standard_Real ) >(&Expr_NumericValue::SetValue),
             R"#(None)#"  , py::arg("val"))
        .def("NbSubExpressions",
             (Standard_Integer (Expr_NumericValue::*)() const) static_cast<Standard_Integer (Expr_NumericValue::*)() const>(&Expr_NumericValue::NbSubExpressions),
             R"#(Returns the number of sub-expressions contained in <me> ( >= 0))#" )
        .def("SubExpression",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_NumericValue::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_NumericValue::*)( const Standard_Integer ) const>(&Expr_NumericValue::SubExpression),
             R"#(Returns the <I>-th sub-expression of <me> raises OutOfRange if <I> > NbSubExpressions(me))#"  , py::arg("I"))
        .def("Simplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NumericValue::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NumericValue::*)() const>(&Expr_NumericValue::Simplified),
             R"#(Returns a GeneralExpression after replacement of NamedUnknowns by an associated expression and after values computation.)#" )
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NumericValue::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NumericValue::*)() const>(&Expr_NumericValue::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NumericValue::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NumericValue::*)() const>(&Expr_NumericValue::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("ContainsUnknowns",
             (Standard_Boolean (Expr_NumericValue::*)() const) static_cast<Standard_Boolean (Expr_NumericValue::*)() const>(&Expr_NumericValue::ContainsUnknowns),
             R"#(Tests if <me> contains NamedUnknown.)#" )
        .def("Contains",
             (Standard_Boolean (Expr_NumericValue::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_NumericValue::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_NumericValue::Contains),
             R"#(Tests if <exp> is contained in <me>.)#"  , py::arg("exp"))
        .def("IsIdentical",
             (Standard_Boolean (Expr_NumericValue::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_NumericValue::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_NumericValue::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_NumericValue::*)() const) static_cast<Standard_Boolean (Expr_NumericValue::*)() const>(&Expr_NumericValue::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NumericValue::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NumericValue::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_NumericValue::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("NDerivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NumericValue::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NumericValue::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const>(&Expr_NumericValue::NDerivative),
             R"#(Returns the <N>-th derivative on <X> unknown of <me>. Raises OutOfRange if <N> <= 0)#"  , py::arg("X"),  py::arg("N"))
        .def("Replace",
             (void (Expr_NumericValue::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_NumericValue::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_NumericValue::Replace),
             R"#(Replaces all occurences of <var> with <with> in <me>)#"  , py::arg("var"),  py::arg("with"))
        .def("Evaluate",
             (Standard_Real (Expr_NumericValue::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_NumericValue::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_NumericValue::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_NumericValue::*)() const) static_cast<TCollection_AsciiString (Expr_NumericValue::*)() const>(&Expr_NumericValue::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_NumericValue::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_NumericValue::*)() const>(&Expr_NumericValue::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_NumericValue::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_NumericValue::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_PolyExpression ,opencascade::handle<Expr_PolyExpression>,Py_Expr_PolyExpression , Expr_GeneralExpression>>(m.attr("Expr_PolyExpression"))
    // constructors
    // custom constructors
    // methods
        .def("NbOperands",
             (Standard_Integer (Expr_PolyExpression::*)() const) static_cast<Standard_Integer (Expr_PolyExpression::*)() const>(&Expr_PolyExpression::NbOperands),
             R"#(returns the number of operands contained in <me>)#" )
        .def("Operand",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_PolyExpression::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_PolyExpression::*)( const Standard_Integer ) const>(&Expr_PolyExpression::Operand),
             R"#(Returns the <index>-th operand used in <me>. An exception is raised if index is out of range)#"  , py::arg("index"))
        .def("SetOperand",
             (void (Expr_PolyExpression::*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Integer ) ) static_cast<void (Expr_PolyExpression::*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Integer ) >(&Expr_PolyExpression::SetOperand),
             R"#(Sets the <index>-th operand used in <me>. An exception is raised if <index> is out of range Raises InvalidOperand if <exp> contains <me>.)#"  , py::arg("exp"),  py::arg("index"))
        .def("NbSubExpressions",
             (Standard_Integer (Expr_PolyExpression::*)() const) static_cast<Standard_Integer (Expr_PolyExpression::*)() const>(&Expr_PolyExpression::NbSubExpressions),
             R"#(returns the number of sub-expressions contained in <me> ( >= 2))#" )
        .def("SubExpression",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_PolyExpression::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_PolyExpression::*)( const Standard_Integer ) const>(&Expr_PolyExpression::SubExpression),
             R"#(Returns the sub-expression denoted by <I> in <me> Raises OutOfRange if <I> > NbSubExpressions(me))#"  , py::arg("I"))
        .def("ContainsUnknowns",
             (Standard_Boolean (Expr_PolyExpression::*)() const) static_cast<Standard_Boolean (Expr_PolyExpression::*)() const>(&Expr_PolyExpression::ContainsUnknowns),
             R"#(Does <me> contains NamedUnknown ?)#" )
        .def("Contains",
             (Standard_Boolean (Expr_PolyExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_PolyExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_PolyExpression::Contains),
             R"#(Tests if <exp> is contained in <me>.)#"  , py::arg("exp"))
        .def("Replace",
             (void (Expr_PolyExpression::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_PolyExpression::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_PolyExpression::Replace),
             R"#(Replaces all occurences of <var> with <with> in <me> Raises InvalidOperand if <with> contains <me>.)#"  , py::arg("var"),  py::arg("with"))
        .def("Simplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_PolyExpression::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_PolyExpression::*)() const>(&Expr_PolyExpression::Simplified),
             R"#(Returns a GeneralExpression after replacement of NamedUnknowns by an associated expression and after values computation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_PolyExpression::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_PolyExpression::*)() const>(&Expr_PolyExpression::DynamicType),
             R"#(None)#" )
        .def("Operand",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_PolyExpression::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_PolyExpression::*)( const Standard_Integer ) const>(&Expr_PolyExpression::Operand),
             R"#(Returns the <index>-th operand used in <me>. An exception is raised if index is out of range)#"  , py::arg("index"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_PolyExpression::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_PolyExpression::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_SingleRelation ,opencascade::handle<Expr_SingleRelation>,Py_Expr_SingleRelation , Expr_GeneralRelation>>(m.attr("Expr_SingleRelation"))
    // constructors
    // custom constructors
    // methods
        .def("SetFirstMember",
             (void (Expr_SingleRelation::*)( const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_SingleRelation::*)( const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_SingleRelation::SetFirstMember),
             R"#(Defines the first member of the relation)#"  , py::arg("exp"))
        .def("SetSecondMember",
             (void (Expr_SingleRelation::*)( const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_SingleRelation::*)( const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_SingleRelation::SetSecondMember),
             R"#(Defines the second member of the relation)#"  , py::arg("exp"))
        .def("FirstMember",
             (opencascade::handle<Expr_GeneralExpression> (Expr_SingleRelation::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_SingleRelation::*)() const>(&Expr_SingleRelation::FirstMember),
             R"#(Returns the first member of the relation)#" )
        .def("SecondMember",
             (opencascade::handle<Expr_GeneralExpression> (Expr_SingleRelation::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_SingleRelation::*)() const>(&Expr_SingleRelation::SecondMember),
             R"#(Returns the second member of the relation)#" )
        .def("IsLinear",
             (Standard_Boolean (Expr_SingleRelation::*)() const) static_cast<Standard_Boolean (Expr_SingleRelation::*)() const>(&Expr_SingleRelation::IsLinear),
             R"#(Tests if <me> is linear between its NamedUnknowns.)#" )
        .def("NbOfSubRelations",
             (Standard_Integer (Expr_SingleRelation::*)() const) static_cast<Standard_Integer (Expr_SingleRelation::*)() const>(&Expr_SingleRelation::NbOfSubRelations),
             R"#(Returns the number of relations contained in <me>.)#" )
        .def("NbOfSingleRelations",
             (Standard_Integer (Expr_SingleRelation::*)() const) static_cast<Standard_Integer (Expr_SingleRelation::*)() const>(&Expr_SingleRelation::NbOfSingleRelations),
             R"#(Returns the number of SingleRelations contained in <me> (Always 1).)#" )
        .def("SubRelation",
             (opencascade::handle<Expr_GeneralRelation> (Expr_SingleRelation::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_SingleRelation::*)( const Standard_Integer ) const>(&Expr_SingleRelation::SubRelation),
             R"#(Returns the relation denoted by <index> in <me>. An exception is raised if index is out of range.)#"  , py::arg("index"))
        .def("Contains",
             (Standard_Boolean (Expr_SingleRelation::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_SingleRelation::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_SingleRelation::Contains),
             R"#(Tests if <me> contains <exp>.)#"  , py::arg("exp"))
        .def("Replace",
             (void (Expr_SingleRelation::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_SingleRelation::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_SingleRelation::Replace),
             R"#(Replaces all occurences of <var> with <with> in <me>.)#"  , py::arg("var"),  py::arg("with"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_SingleRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_SingleRelation::*)() const>(&Expr_SingleRelation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_SingleRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_SingleRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_SystemRelation ,opencascade::handle<Expr_SystemRelation> , Expr_GeneralRelation>>(m.attr("Expr_SystemRelation"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralRelation> & >()  , py::arg("relation") )
    // custom constructors
    // methods
        .def("Add",
             (void (Expr_SystemRelation::*)( const opencascade::handle<Expr_GeneralRelation> & ) ) static_cast<void (Expr_SystemRelation::*)( const opencascade::handle<Expr_GeneralRelation> & ) >(&Expr_SystemRelation::Add),
             R"#(Appends <relation> in the list of components of <me>.)#"  , py::arg("relation"))
        .def("Remove",
             (void (Expr_SystemRelation::*)( const opencascade::handle<Expr_GeneralRelation> & ) ) static_cast<void (Expr_SystemRelation::*)( const opencascade::handle<Expr_GeneralRelation> & ) >(&Expr_SystemRelation::Remove),
             R"#(None)#"  , py::arg("relation"))
        .def("IsLinear",
             (Standard_Boolean (Expr_SystemRelation::*)() const) static_cast<Standard_Boolean (Expr_SystemRelation::*)() const>(&Expr_SystemRelation::IsLinear),
             R"#(Tests if <me> is linear between its NamedUnknowns.)#" )
        .def("NbOfSubRelations",
             (Standard_Integer (Expr_SystemRelation::*)() const) static_cast<Standard_Integer (Expr_SystemRelation::*)() const>(&Expr_SystemRelation::NbOfSubRelations),
             R"#(Returns the number of relations contained in <me>.)#" )
        .def("NbOfSingleRelations",
             (Standard_Integer (Expr_SystemRelation::*)() const) static_cast<Standard_Integer (Expr_SystemRelation::*)() const>(&Expr_SystemRelation::NbOfSingleRelations),
             R"#(Returns the number of SingleRelations contained in <me>.)#" )
        .def("SubRelation",
             (opencascade::handle<Expr_GeneralRelation> (Expr_SystemRelation::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_SystemRelation::*)( const Standard_Integer ) const>(&Expr_SystemRelation::SubRelation),
             R"#(Returns the relation denoted by <index> in <me>. An exception is raised if <index> is out of range.)#"  , py::arg("index"))
        .def("IsSatisfied",
             (Standard_Boolean (Expr_SystemRelation::*)() const) static_cast<Standard_Boolean (Expr_SystemRelation::*)() const>(&Expr_SystemRelation::IsSatisfied),
             R"#(None)#" )
        .def("Simplified",
             (opencascade::handle<Expr_GeneralRelation> (Expr_SystemRelation::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_SystemRelation::*)() const>(&Expr_SystemRelation::Simplified),
             R"#(Returns a GeneralRelation after replacement of NamedUnknowns by an associated expression, and after values computation.)#" )
        .def("Simplify",
             (void (Expr_SystemRelation::*)() ) static_cast<void (Expr_SystemRelation::*)() >(&Expr_SystemRelation::Simplify),
             R"#(Replaces NamedUnknowns by associated expressions, and computes values in <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralRelation> (Expr_SystemRelation::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_SystemRelation::*)() const>(&Expr_SystemRelation::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("Contains",
             (Standard_Boolean (Expr_SystemRelation::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_SystemRelation::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_SystemRelation::Contains),
             R"#(Tests if <me> contains <exp>.)#"  , py::arg("exp"))
        .def("Replace",
             (void (Expr_SystemRelation::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_SystemRelation::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_SystemRelation::Replace),
             R"#(Replaces all occurences of <var> with <with> in <me>.)#"  , py::arg("var"),  py::arg("with"))
        .def("String",
             (TCollection_AsciiString (Expr_SystemRelation::*)() const) static_cast<TCollection_AsciiString (Expr_SystemRelation::*)() const>(&Expr_SystemRelation::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_SystemRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_SystemRelation::*)() const>(&Expr_SystemRelation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_SystemRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_SystemRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_UnaryExpression ,opencascade::handle<Expr_UnaryExpression>,Py_Expr_UnaryExpression , Expr_GeneralExpression>>(m.attr("Expr_UnaryExpression"))
    // constructors
    // custom constructors
    // methods
        .def("Operand",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_UnaryExpression::*)() const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_UnaryExpression::*)() const>(&Expr_UnaryExpression::Operand),
             R"#(Returns the operand used)#" )
        .def("SetOperand",
             (void (Expr_UnaryExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_UnaryExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_UnaryExpression::SetOperand),
             R"#(Sets the operand used Raises InvalidOperand if <exp> contains <me>.)#"  , py::arg("exp"))
        .def("NbSubExpressions",
             (Standard_Integer (Expr_UnaryExpression::*)() const) static_cast<Standard_Integer (Expr_UnaryExpression::*)() const>(&Expr_UnaryExpression::NbSubExpressions),
             R"#(Returns the number of sub-expressions contained in <me> ( >= 0))#" )
        .def("SubExpression",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_UnaryExpression::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_UnaryExpression::*)( const Standard_Integer ) const>(&Expr_UnaryExpression::SubExpression),
             R"#(Returns the <I>-th sub-expression of <me>. Raises OutOfRange if <I> > NbSubExpressions(me))#"  , py::arg("I"))
        .def("ContainsUnknowns",
             (Standard_Boolean (Expr_UnaryExpression::*)() const) static_cast<Standard_Boolean (Expr_UnaryExpression::*)() const>(&Expr_UnaryExpression::ContainsUnknowns),
             R"#(Does <me> contains NamedUnknown ?)#" )
        .def("Contains",
             (Standard_Boolean (Expr_UnaryExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_UnaryExpression::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_UnaryExpression::Contains),
             R"#(Tests if <exp> is contained in <me>.)#"  , py::arg("exp"))
        .def("Replace",
             (void (Expr_UnaryExpression::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_UnaryExpression::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_UnaryExpression::Replace),
             R"#(Replaces all occurences of <var> with <with> in <me> Raises InvalidOperand if <with> contains <me>.)#"  , py::arg("var"),  py::arg("with"))
        .def("Simplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_UnaryExpression::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_UnaryExpression::*)() const>(&Expr_UnaryExpression::Simplified),
             R"#(Returns a GeneralExpression after replacement of NamedUnknowns by an associated expression, and after values computation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_UnaryExpression::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_UnaryExpression::*)() const>(&Expr_UnaryExpression::DynamicType),
             R"#(None)#" )
        .def("Operand",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_UnaryExpression::*)() const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_UnaryExpression::*)() const>(&Expr_UnaryExpression::Operand),
             R"#(Returns the operand used)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_UnaryExpression::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_UnaryExpression::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Absolute ,opencascade::handle<Expr_Absolute> , Expr_UnaryExpression>>(m.attr("Expr_Absolute"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Absolute::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Absolute::*)() const>(&Expr_Absolute::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Absolute::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Absolute::*)() const>(&Expr_Absolute::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Absolute::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Absolute::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Absolute::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Absolute::*)() const) static_cast<Standard_Boolean (Expr_Absolute::*)() const>(&Expr_Absolute::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Absolute::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Absolute::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Absolute::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Absolute::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Absolute::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Absolute::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Absolute::*)() const) static_cast<TCollection_AsciiString (Expr_Absolute::*)() const>(&Expr_Absolute::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Absolute::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Absolute::*)() const>(&Expr_Absolute::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Absolute::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Absolute::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_ArcCosine ,opencascade::handle<Expr_ArcCosine> , Expr_UnaryExpression>>(m.attr("Expr_ArcCosine"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArcCosine::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArcCosine::*)() const>(&Expr_ArcCosine::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArcCosine::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArcCosine::*)() const>(&Expr_ArcCosine::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_ArcCosine::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_ArcCosine::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_ArcCosine::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_ArcCosine::*)() const) static_cast<Standard_Boolean (Expr_ArcCosine::*)() const>(&Expr_ArcCosine::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArcCosine::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArcCosine::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_ArcCosine::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_ArcCosine::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_ArcCosine::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_ArcCosine::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_ArcCosine::*)() const) static_cast<TCollection_AsciiString (Expr_ArcCosine::*)() const>(&Expr_ArcCosine::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_ArcCosine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_ArcCosine::*)() const>(&Expr_ArcCosine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_ArcCosine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_ArcCosine::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_ArcSine ,opencascade::handle<Expr_ArcSine> , Expr_UnaryExpression>>(m.attr("Expr_ArcSine"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArcSine::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArcSine::*)() const>(&Expr_ArcSine::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArcSine::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArcSine::*)() const>(&Expr_ArcSine::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_ArcSine::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_ArcSine::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_ArcSine::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_ArcSine::*)() const) static_cast<Standard_Boolean (Expr_ArcSine::*)() const>(&Expr_ArcSine::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArcSine::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArcSine::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_ArcSine::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_ArcSine::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_ArcSine::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_ArcSine::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_ArcSine::*)() const) static_cast<TCollection_AsciiString (Expr_ArcSine::*)() const>(&Expr_ArcSine::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_ArcSine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_ArcSine::*)() const>(&Expr_ArcSine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_ArcSine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_ArcSine::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_ArcTangent ,opencascade::handle<Expr_ArcTangent> , Expr_UnaryExpression>>(m.attr("Expr_ArcTangent"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArcTangent::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArcTangent::*)() const>(&Expr_ArcTangent::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArcTangent::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArcTangent::*)() const>(&Expr_ArcTangent::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_ArcTangent::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_ArcTangent::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_ArcTangent::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_ArcTangent::*)() const) static_cast<Standard_Boolean (Expr_ArcTangent::*)() const>(&Expr_ArcTangent::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArcTangent::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArcTangent::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_ArcTangent::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_ArcTangent::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_ArcTangent::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_ArcTangent::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_ArcTangent::*)() const) static_cast<TCollection_AsciiString (Expr_ArcTangent::*)() const>(&Expr_ArcTangent::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_ArcTangent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_ArcTangent::*)() const>(&Expr_ArcTangent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_ArcTangent::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_ArcTangent::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_ArgCosh ,opencascade::handle<Expr_ArgCosh> , Expr_UnaryExpression>>(m.attr("Expr_ArgCosh"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArgCosh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArgCosh::*)() const>(&Expr_ArgCosh::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArgCosh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArgCosh::*)() const>(&Expr_ArgCosh::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_ArgCosh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_ArgCosh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_ArgCosh::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_ArgCosh::*)() const) static_cast<Standard_Boolean (Expr_ArgCosh::*)() const>(&Expr_ArgCosh::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArgCosh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArgCosh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_ArgCosh::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_ArgCosh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_ArgCosh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_ArgCosh::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_ArgCosh::*)() const) static_cast<TCollection_AsciiString (Expr_ArgCosh::*)() const>(&Expr_ArgCosh::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_ArgCosh::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_ArgCosh::*)() const>(&Expr_ArgCosh::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_ArgCosh::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_ArgCosh::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_ArgSinh ,opencascade::handle<Expr_ArgSinh> , Expr_UnaryExpression>>(m.attr("Expr_ArgSinh"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArgSinh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArgSinh::*)() const>(&Expr_ArgSinh::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArgSinh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArgSinh::*)() const>(&Expr_ArgSinh::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_ArgSinh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_ArgSinh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_ArgSinh::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_ArgSinh::*)() const) static_cast<Standard_Boolean (Expr_ArgSinh::*)() const>(&Expr_ArgSinh::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArgSinh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArgSinh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_ArgSinh::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_ArgSinh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_ArgSinh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_ArgSinh::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_ArgSinh::*)() const) static_cast<TCollection_AsciiString (Expr_ArgSinh::*)() const>(&Expr_ArgSinh::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_ArgSinh::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_ArgSinh::*)() const>(&Expr_ArgSinh::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_ArgSinh::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_ArgSinh::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_ArgTanh ,opencascade::handle<Expr_ArgTanh> , Expr_UnaryExpression>>(m.attr("Expr_ArgTanh"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArgTanh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArgTanh::*)() const>(&Expr_ArgTanh::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArgTanh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArgTanh::*)() const>(&Expr_ArgTanh::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_ArgTanh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_ArgTanh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_ArgTanh::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_ArgTanh::*)() const) static_cast<Standard_Boolean (Expr_ArgTanh::*)() const>(&Expr_ArgTanh::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_ArgTanh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_ArgTanh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_ArgTanh::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_ArgTanh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_ArgTanh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_ArgTanh::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_ArgTanh::*)() const) static_cast<TCollection_AsciiString (Expr_ArgTanh::*)() const>(&Expr_ArgTanh::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_ArgTanh::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_ArgTanh::*)() const>(&Expr_ArgTanh::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_ArgTanh::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_ArgTanh::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_BinaryFunction ,opencascade::handle<Expr_BinaryFunction> , Expr_BinaryExpression>>(m.attr("Expr_BinaryFunction"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralFunction> &,const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("func"),  py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("Function",
             (opencascade::handle<Expr_GeneralFunction> (Expr_BinaryFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_BinaryFunction::*)() const>(&Expr_BinaryFunction::Function),
             R"#(Returns the function defining <me>.)#" )
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_BinaryFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_BinaryFunction::*)() const>(&Expr_BinaryFunction::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_BinaryFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_BinaryFunction::*)() const>(&Expr_BinaryFunction::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_BinaryFunction::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_BinaryFunction::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_BinaryFunction::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_BinaryFunction::*)() const) static_cast<Standard_Boolean (Expr_BinaryFunction::*)() const>(&Expr_BinaryFunction::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_BinaryFunction::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_BinaryFunction::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_BinaryFunction::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_BinaryFunction::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_BinaryFunction::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_BinaryFunction::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_BinaryFunction::*)() const) static_cast<TCollection_AsciiString (Expr_BinaryFunction::*)() const>(&Expr_BinaryFunction::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_BinaryFunction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_BinaryFunction::*)() const>(&Expr_BinaryFunction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_BinaryFunction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_BinaryFunction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Cosh ,opencascade::handle<Expr_Cosh> , Expr_UnaryExpression>>(m.attr("Expr_Cosh"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Cosh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Cosh::*)() const>(&Expr_Cosh::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Cosh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Cosh::*)() const>(&Expr_Cosh::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Cosh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Cosh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Cosh::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Cosh::*)() const) static_cast<Standard_Boolean (Expr_Cosh::*)() const>(&Expr_Cosh::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Cosh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Cosh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Cosh::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Cosh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Cosh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Cosh::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Cosh::*)() const) static_cast<TCollection_AsciiString (Expr_Cosh::*)() const>(&Expr_Cosh::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Cosh::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Cosh::*)() const>(&Expr_Cosh::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Cosh::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Cosh::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Cosine ,opencascade::handle<Expr_Cosine> , Expr_UnaryExpression>>(m.attr("Expr_Cosine"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("Exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Cosine::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Cosine::*)() const>(&Expr_Cosine::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Cosine::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Cosine::*)() const>(&Expr_Cosine::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Cosine::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Cosine::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Cosine::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Cosine::*)() const) static_cast<Standard_Boolean (Expr_Cosine::*)() const>(&Expr_Cosine::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Cosine::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Cosine::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Cosine::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Cosine::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Cosine::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Cosine::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Cosine::*)() const) static_cast<TCollection_AsciiString (Expr_Cosine::*)() const>(&Expr_Cosine::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Cosine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Cosine::*)() const>(&Expr_Cosine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Cosine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Cosine::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Difference ,opencascade::handle<Expr_Difference> , Expr_BinaryExpression>>(m.attr("Expr_Difference"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Difference::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Difference::*)() const>(&Expr_Difference::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Difference::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Difference::*)() const>(&Expr_Difference::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Difference::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Difference::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Difference::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Difference::*)() const) static_cast<Standard_Boolean (Expr_Difference::*)() const>(&Expr_Difference::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Difference::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Difference::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Difference::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("NDerivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Difference::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Difference::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const>(&Expr_Difference::NDerivative),
             R"#(Returns the <N>-th derivative on <X> unknown of <me>. Raises OutOfRange if <N> <= 0)#"  , py::arg("X"),  py::arg("N"))
        .def("Evaluate",
             (Standard_Real (Expr_Difference::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Difference::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Difference::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Difference::*)() const) static_cast<TCollection_AsciiString (Expr_Difference::*)() const>(&Expr_Difference::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Difference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Difference::*)() const>(&Expr_Difference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Difference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Difference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Different ,opencascade::handle<Expr_Different> , Expr_SingleRelation>>(m.attr("Expr_Different"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("IsSatisfied",
             (Standard_Boolean (Expr_Different::*)() const) static_cast<Standard_Boolean (Expr_Different::*)() const>(&Expr_Different::IsSatisfied),
             R"#(None)#" )
        .def("Simplified",
             (opencascade::handle<Expr_GeneralRelation> (Expr_Different::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_Different::*)() const>(&Expr_Different::Simplified),
             R"#(Returns a GeneralRelation after replacement of NamedUnknowns by an associated expression, and after values computation.)#" )
        .def("Simplify",
             (void (Expr_Different::*)() ) static_cast<void (Expr_Different::*)() >(&Expr_Different::Simplify),
             R"#(Replaces NamedUnknowns by associated expressions, and computes values in <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralRelation> (Expr_Different::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_Different::*)() const>(&Expr_Different::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("String",
             (TCollection_AsciiString (Expr_Different::*)() const) static_cast<TCollection_AsciiString (Expr_Different::*)() const>(&Expr_Different::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Different::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Different::*)() const>(&Expr_Different::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Different::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Different::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Division ,opencascade::handle<Expr_Division> , Expr_BinaryExpression>>(m.attr("Expr_Division"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Division::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Division::*)() const>(&Expr_Division::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Division::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Division::*)() const>(&Expr_Division::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Division::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Division::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Division::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Division::*)() const) static_cast<Standard_Boolean (Expr_Division::*)() const>(&Expr_Division::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Division::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Division::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Division::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Division::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Division::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Division::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Division::*)() const) static_cast<TCollection_AsciiString (Expr_Division::*)() const>(&Expr_Division::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Division::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Division::*)() const>(&Expr_Division::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Division::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Division::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Equal ,opencascade::handle<Expr_Equal> , Expr_SingleRelation>>(m.attr("Expr_Equal"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("IsSatisfied",
             (Standard_Boolean (Expr_Equal::*)() const) static_cast<Standard_Boolean (Expr_Equal::*)() const>(&Expr_Equal::IsSatisfied),
             R"#(None)#" )
        .def("Simplified",
             (opencascade::handle<Expr_GeneralRelation> (Expr_Equal::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_Equal::*)() const>(&Expr_Equal::Simplified),
             R"#(returns a GeneralRelation after replacement of NamedUnknowns by an associated expression and after values computation.)#" )
        .def("Simplify",
             (void (Expr_Equal::*)() ) static_cast<void (Expr_Equal::*)() >(&Expr_Equal::Simplify),
             R"#(Replaces NamedUnknowns by an associated expressions and computes values in <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralRelation> (Expr_Equal::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_Equal::*)() const>(&Expr_Equal::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("String",
             (TCollection_AsciiString (Expr_Equal::*)() const) static_cast<TCollection_AsciiString (Expr_Equal::*)() const>(&Expr_Equal::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Equal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Equal::*)() const>(&Expr_Equal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Equal::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Equal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Exponential ,opencascade::handle<Expr_Exponential> , Expr_UnaryExpression>>(m.attr("Expr_Exponential"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Exponential::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Exponential::*)() const>(&Expr_Exponential::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Exponential::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Exponential::*)() const>(&Expr_Exponential::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Exponential::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Exponential::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Exponential::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Exponential::*)() const) static_cast<Standard_Boolean (Expr_Exponential::*)() const>(&Expr_Exponential::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Exponential::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Exponential::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Exponential::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Exponential::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Exponential::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Exponential::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Exponential::*)() const) static_cast<TCollection_AsciiString (Expr_Exponential::*)() const>(&Expr_Exponential::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Exponential::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Exponential::*)() const>(&Expr_Exponential::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Exponential::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Exponential::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Exponentiate ,opencascade::handle<Expr_Exponentiate> , Expr_BinaryExpression>>(m.attr("Expr_Exponentiate"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Exponentiate::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Exponentiate::*)() const>(&Expr_Exponentiate::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Exponentiate::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Exponentiate::*)() const>(&Expr_Exponentiate::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Exponentiate::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Exponentiate::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Exponentiate::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Exponentiate::*)() const) static_cast<Standard_Boolean (Expr_Exponentiate::*)() const>(&Expr_Exponentiate::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Exponentiate::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Exponentiate::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Exponentiate::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Exponentiate::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Exponentiate::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Exponentiate::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Exponentiate::*)() const) static_cast<TCollection_AsciiString (Expr_Exponentiate::*)() const>(&Expr_Exponentiate::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Exponentiate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Exponentiate::*)() const>(&Expr_Exponentiate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Exponentiate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Exponentiate::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_GreaterThan ,opencascade::handle<Expr_GreaterThan> , Expr_SingleRelation>>(m.attr("Expr_GreaterThan"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("IsSatisfied",
             (Standard_Boolean (Expr_GreaterThan::*)() const) static_cast<Standard_Boolean (Expr_GreaterThan::*)() const>(&Expr_GreaterThan::IsSatisfied),
             R"#(None)#" )
        .def("Simplified",
             (opencascade::handle<Expr_GeneralRelation> (Expr_GreaterThan::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_GreaterThan::*)() const>(&Expr_GreaterThan::Simplified),
             R"#(Returns a GeneralRelation after replacement of NamedUnknowns by an associated expression, and after values computation.)#" )
        .def("Simplify",
             (void (Expr_GreaterThan::*)() ) static_cast<void (Expr_GreaterThan::*)() >(&Expr_GreaterThan::Simplify),
             R"#(Replaces NamedUnknowns by associated expressions, and computes values in <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralRelation> (Expr_GreaterThan::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_GreaterThan::*)() const>(&Expr_GreaterThan::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("String",
             (TCollection_AsciiString (Expr_GreaterThan::*)() const) static_cast<TCollection_AsciiString (Expr_GreaterThan::*)() const>(&Expr_GreaterThan::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_GreaterThan::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_GreaterThan::*)() const>(&Expr_GreaterThan::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_GreaterThan::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_GreaterThan::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_GreaterThanOrEqual ,opencascade::handle<Expr_GreaterThanOrEqual> , Expr_SingleRelation>>(m.attr("Expr_GreaterThanOrEqual"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("IsSatisfied",
             (Standard_Boolean (Expr_GreaterThanOrEqual::*)() const) static_cast<Standard_Boolean (Expr_GreaterThanOrEqual::*)() const>(&Expr_GreaterThanOrEqual::IsSatisfied),
             R"#(None)#" )
        .def("Simplified",
             (opencascade::handle<Expr_GeneralRelation> (Expr_GreaterThanOrEqual::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_GreaterThanOrEqual::*)() const>(&Expr_GreaterThanOrEqual::Simplified),
             R"#(Returns a GeneralRelation after replacement of NamedUnknowns by an associated expression, and after values computation.)#" )
        .def("Simplify",
             (void (Expr_GreaterThanOrEqual::*)() ) static_cast<void (Expr_GreaterThanOrEqual::*)() >(&Expr_GreaterThanOrEqual::Simplify),
             R"#(Replaces NamedUnknowns by associated expressions, and computes values in <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralRelation> (Expr_GreaterThanOrEqual::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_GreaterThanOrEqual::*)() const>(&Expr_GreaterThanOrEqual::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("String",
             (TCollection_AsciiString (Expr_GreaterThanOrEqual::*)() const) static_cast<TCollection_AsciiString (Expr_GreaterThanOrEqual::*)() const>(&Expr_GreaterThanOrEqual::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_GreaterThanOrEqual::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_GreaterThanOrEqual::*)() const>(&Expr_GreaterThanOrEqual::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_GreaterThanOrEqual::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_GreaterThanOrEqual::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_LessThan ,opencascade::handle<Expr_LessThan> , Expr_SingleRelation>>(m.attr("Expr_LessThan"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("IsSatisfied",
             (Standard_Boolean (Expr_LessThan::*)() const) static_cast<Standard_Boolean (Expr_LessThan::*)() const>(&Expr_LessThan::IsSatisfied),
             R"#(None)#" )
        .def("Simplified",
             (opencascade::handle<Expr_GeneralRelation> (Expr_LessThan::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_LessThan::*)() const>(&Expr_LessThan::Simplified),
             R"#(Returns a GeneralRelation after replacement of NamedUnknowns by an associated expression, and after values computation.)#" )
        .def("Simplify",
             (void (Expr_LessThan::*)() ) static_cast<void (Expr_LessThan::*)() >(&Expr_LessThan::Simplify),
             R"#(Replaces NamedUnknowns by associated expressions, and computes values in <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralRelation> (Expr_LessThan::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_LessThan::*)() const>(&Expr_LessThan::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("String",
             (TCollection_AsciiString (Expr_LessThan::*)() const) static_cast<TCollection_AsciiString (Expr_LessThan::*)() const>(&Expr_LessThan::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_LessThan::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_LessThan::*)() const>(&Expr_LessThan::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_LessThan::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_LessThan::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_LessThanOrEqual ,opencascade::handle<Expr_LessThanOrEqual> , Expr_SingleRelation>>(m.attr("Expr_LessThanOrEqual"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("IsSatisfied",
             (Standard_Boolean (Expr_LessThanOrEqual::*)() const) static_cast<Standard_Boolean (Expr_LessThanOrEqual::*)() const>(&Expr_LessThanOrEqual::IsSatisfied),
             R"#(None)#" )
        .def("Simplified",
             (opencascade::handle<Expr_GeneralRelation> (Expr_LessThanOrEqual::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_LessThanOrEqual::*)() const>(&Expr_LessThanOrEqual::Simplified),
             R"#(Returns a GeneralRelation after replacement of NamedUnknowns by an associated expression, and after values computation.)#" )
        .def("Simplify",
             (void (Expr_LessThanOrEqual::*)() ) static_cast<void (Expr_LessThanOrEqual::*)() >(&Expr_LessThanOrEqual::Simplify),
             R"#(Replaces NamedUnknowns by associated expressions, and computes values in <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralRelation> (Expr_LessThanOrEqual::*)() const) static_cast<opencascade::handle<Expr_GeneralRelation> (Expr_LessThanOrEqual::*)() const>(&Expr_LessThanOrEqual::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("String",
             (TCollection_AsciiString (Expr_LessThanOrEqual::*)() const) static_cast<TCollection_AsciiString (Expr_LessThanOrEqual::*)() const>(&Expr_LessThanOrEqual::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_LessThanOrEqual::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_LessThanOrEqual::*)() const>(&Expr_LessThanOrEqual::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_LessThanOrEqual::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_LessThanOrEqual::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_LogOf10 ,opencascade::handle<Expr_LogOf10> , Expr_UnaryExpression>>(m.attr("Expr_LogOf10"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_LogOf10::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_LogOf10::*)() const>(&Expr_LogOf10::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_LogOf10::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_LogOf10::*)() const>(&Expr_LogOf10::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_LogOf10::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_LogOf10::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_LogOf10::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_LogOf10::*)() const) static_cast<Standard_Boolean (Expr_LogOf10::*)() const>(&Expr_LogOf10::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_LogOf10::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_LogOf10::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_LogOf10::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_LogOf10::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_LogOf10::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_LogOf10::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_LogOf10::*)() const) static_cast<TCollection_AsciiString (Expr_LogOf10::*)() const>(&Expr_LogOf10::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_LogOf10::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_LogOf10::*)() const>(&Expr_LogOf10::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_LogOf10::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_LogOf10::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_LogOfe ,opencascade::handle<Expr_LogOfe> , Expr_UnaryExpression>>(m.attr("Expr_LogOfe"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_LogOfe::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_LogOfe::*)() const>(&Expr_LogOfe::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_LogOfe::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_LogOfe::*)() const>(&Expr_LogOfe::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_LogOfe::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_LogOfe::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_LogOfe::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_LogOfe::*)() const) static_cast<Standard_Boolean (Expr_LogOfe::*)() const>(&Expr_LogOfe::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_LogOfe::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_LogOfe::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_LogOfe::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_LogOfe::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_LogOfe::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_LogOfe::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_LogOfe::*)() const) static_cast<TCollection_AsciiString (Expr_LogOfe::*)() const>(&Expr_LogOfe::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_LogOfe::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_LogOfe::*)() const>(&Expr_LogOfe::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_LogOfe::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_LogOfe::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_NamedConstant ,opencascade::handle<Expr_NamedConstant> , Expr_NamedExpression>>(m.attr("Expr_NamedConstant"))
    // constructors
        .def(py::init< const TCollection_AsciiString &,const Standard_Real >()  , py::arg("name"),  py::arg("value") )
    // custom constructors
    // methods
        .def("GetValue",
             (Standard_Real (Expr_NamedConstant::*)() const) static_cast<Standard_Real (Expr_NamedConstant::*)() const>(&Expr_NamedConstant::GetValue),
             R"#(None)#" )
        .def("NbSubExpressions",
             (Standard_Integer (Expr_NamedConstant::*)() const) static_cast<Standard_Integer (Expr_NamedConstant::*)() const>(&Expr_NamedConstant::NbSubExpressions),
             R"#(returns the number of sub-expressions contained in <me> (always returns zero))#" )
        .def("SubExpression",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_NamedConstant::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_NamedConstant::*)( const Standard_Integer ) const>(&Expr_NamedConstant::SubExpression),
             R"#(returns the <I>-th sub-expression of <me> raises OutOfRange)#"  , py::arg("I"))
        .def("Simplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NamedConstant::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NamedConstant::*)() const>(&Expr_NamedConstant::Simplified),
             R"#(returns a GeneralExpression after replacement of NamedUnknowns by an associated expression and after values computation.)#" )
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NamedConstant::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NamedConstant::*)() const>(&Expr_NamedConstant::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NamedConstant::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NamedConstant::*)() const>(&Expr_NamedConstant::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("ContainsUnknowns",
             (Standard_Boolean (Expr_NamedConstant::*)() const) static_cast<Standard_Boolean (Expr_NamedConstant::*)() const>(&Expr_NamedConstant::ContainsUnknowns),
             R"#(Tests if <me> contains NamedUnknown. (returns always False))#" )
        .def("Contains",
             (Standard_Boolean (Expr_NamedConstant::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_NamedConstant::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_NamedConstant::Contains),
             R"#(Tests if <exp> is contained in <me>.)#"  , py::arg("exp"))
        .def("IsLinear",
             (Standard_Boolean (Expr_NamedConstant::*)() const) static_cast<Standard_Boolean (Expr_NamedConstant::*)() const>(&Expr_NamedConstant::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NamedConstant::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NamedConstant::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_NamedConstant::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("NDerivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NamedConstant::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NamedConstant::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const>(&Expr_NamedConstant::NDerivative),
             R"#(Returns the <N>-th derivative on <X> unknown of <me>. Raises OutOfRange if <N> <= 0)#"  , py::arg("X"),  py::arg("N"))
        .def("Replace",
             (void (Expr_NamedConstant::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_NamedConstant::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_NamedConstant::Replace),
             R"#(Replaces all occurences of <var> with <with> in <me>)#"  , py::arg("var"),  py::arg("with"))
        .def("Evaluate",
             (Standard_Real (Expr_NamedConstant::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_NamedConstant::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_NamedConstant::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_NamedConstant::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_NamedConstant::*)() const>(&Expr_NamedConstant::DynamicType),
             R"#(None)#" )
        .def("GetValue",
             (Standard_Real (Expr_NamedConstant::*)() const) static_cast<Standard_Real (Expr_NamedConstant::*)() const>(&Expr_NamedConstant::GetValue),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_NamedConstant::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_NamedConstant::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_NamedUnknown ,opencascade::handle<Expr_NamedUnknown> , Expr_NamedExpression>>(m.attr("Expr_NamedUnknown"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("name") )
    // custom constructors
    // methods
        .def("IsAssigned",
             (Standard_Boolean (Expr_NamedUnknown::*)() const) static_cast<Standard_Boolean (Expr_NamedUnknown::*)() const>(&Expr_NamedUnknown::IsAssigned),
             R"#(Tests if an expression is assigned to <me>.)#" )
        .def("AssignedExpression",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_NamedUnknown::*)() const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_NamedUnknown::*)() const>(&Expr_NamedUnknown::AssignedExpression),
             R"#(If exists, returns the assigned expression. An exception is raised if the expression does not exist.)#" )
        .def("Assign",
             (void (Expr_NamedUnknown::*)( const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_NamedUnknown::*)( const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_NamedUnknown::Assign),
             R"#(Assigns <me> to <exp> expression. Raises exception if <exp> refers to <me>.)#"  , py::arg("exp"))
        .def("Deassign",
             (void (Expr_NamedUnknown::*)() ) static_cast<void (Expr_NamedUnknown::*)() >(&Expr_NamedUnknown::Deassign),
             R"#(Supresses the assigned expression)#" )
        .def("NbSubExpressions",
             (Standard_Integer (Expr_NamedUnknown::*)() const) static_cast<Standard_Integer (Expr_NamedUnknown::*)() const>(&Expr_NamedUnknown::NbSubExpressions),
             R"#(Returns the number of sub-expressions contained in <me> ( >= 0))#" )
        .def("SubExpression",
             (const opencascade::handle<Expr_GeneralExpression> & (Expr_NamedUnknown::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Expr_GeneralExpression> & (Expr_NamedUnknown::*)( const Standard_Integer ) const>(&Expr_NamedUnknown::SubExpression),
             R"#(Returns the <I>-th sub-expression of <me> raises OutOfRange if <I> > NbSubExpressions(me))#"  , py::arg("I"))
        .def("Simplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NamedUnknown::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NamedUnknown::*)() const>(&Expr_NamedUnknown::Simplified),
             R"#(Returns a GeneralExpression after replacement of NamedUnknowns by an associated expression and after values computation.)#" )
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NamedUnknown::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NamedUnknown::*)() const>(&Expr_NamedUnknown::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NamedUnknown::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NamedUnknown::*)() const>(&Expr_NamedUnknown::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("ContainsUnknowns",
             (Standard_Boolean (Expr_NamedUnknown::*)() const) static_cast<Standard_Boolean (Expr_NamedUnknown::*)() const>(&Expr_NamedUnknown::ContainsUnknowns),
             R"#(Tests if <me> contains NamedUnknown.)#" )
        .def("Contains",
             (Standard_Boolean (Expr_NamedUnknown::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_NamedUnknown::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_NamedUnknown::Contains),
             R"#(Tests if <exp> is contained in <me>.)#"  , py::arg("exp"))
        .def("IsLinear",
             (Standard_Boolean (Expr_NamedUnknown::*)() const) static_cast<Standard_Boolean (Expr_NamedUnknown::*)() const>(&Expr_NamedUnknown::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_NamedUnknown::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_NamedUnknown::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_NamedUnknown::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Replace",
             (void (Expr_NamedUnknown::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) ) static_cast<void (Expr_NamedUnknown::*)( const opencascade::handle<Expr_NamedUnknown> & , const opencascade::handle<Expr_GeneralExpression> & ) >(&Expr_NamedUnknown::Replace),
             R"#(Replaces all occurences of <var> with <with> in <me> Raises InvalidOperand if <with> contains <me>.)#"  , py::arg("var"),  py::arg("with"))
        .def("Evaluate",
             (Standard_Real (Expr_NamedUnknown::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_NamedUnknown::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_NamedUnknown::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_NamedUnknown::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_NamedUnknown::*)() const>(&Expr_NamedUnknown::DynamicType),
             R"#(None)#" )
        .def("IsAssigned",
             (Standard_Boolean (Expr_NamedUnknown::*)() const) static_cast<Standard_Boolean (Expr_NamedUnknown::*)() const>(&Expr_NamedUnknown::IsAssigned),
             R"#(Tests if an expression is assigned to <me>.)#" )
        .def("Deassign",
             (void (Expr_NamedUnknown::*)() ) static_cast<void (Expr_NamedUnknown::*)() >(&Expr_NamedUnknown::Deassign),
             R"#(Supresses the assigned expression)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_NamedUnknown::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_NamedUnknown::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_PolyFunction ,opencascade::handle<Expr_PolyFunction> , Expr_PolyExpression>>(m.attr("Expr_PolyFunction"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralFunction> &, const NCollection_Array1<opencascade::handle<Expr_GeneralExpression> > & >()  , py::arg("func"),  py::arg("exps") )
    // custom constructors
    // methods
        .def("Function",
             (opencascade::handle<Expr_GeneralFunction> (Expr_PolyFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_PolyFunction::*)() const>(&Expr_PolyFunction::Function),
             R"#(Returns the function defining <me>.)#" )
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_PolyFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_PolyFunction::*)() const>(&Expr_PolyFunction::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_PolyFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_PolyFunction::*)() const>(&Expr_PolyFunction::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_PolyFunction::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_PolyFunction::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_PolyFunction::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_PolyFunction::*)() const) static_cast<Standard_Boolean (Expr_PolyFunction::*)() const>(&Expr_PolyFunction::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_PolyFunction::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_PolyFunction::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_PolyFunction::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_PolyFunction::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_PolyFunction::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_PolyFunction::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_PolyFunction::*)() const) static_cast<TCollection_AsciiString (Expr_PolyFunction::*)() const>(&Expr_PolyFunction::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_PolyFunction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_PolyFunction::*)() const>(&Expr_PolyFunction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_PolyFunction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_PolyFunction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Product ,opencascade::handle<Expr_Product> , Expr_PolyExpression>>(m.attr("Expr_Product"))
    // constructors
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Expr_GeneralExpression> > & >()  , py::arg("exps") )
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Product::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Product::*)() const>(&Expr_Product::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Product::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Product::*)() const>(&Expr_Product::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Product::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Product::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Product::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Product::*)() const) static_cast<Standard_Boolean (Expr_Product::*)() const>(&Expr_Product::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Product::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Product::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Product::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Product::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Product::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Product::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Product::*)() const) static_cast<TCollection_AsciiString (Expr_Product::*)() const>(&Expr_Product::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Product::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Product::*)() const>(&Expr_Product::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Product::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Product::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Sign ,opencascade::handle<Expr_Sign> , Expr_UnaryExpression>>(m.attr("Expr_Sign"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sign::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sign::*)() const>(&Expr_Sign::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sign::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sign::*)() const>(&Expr_Sign::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Sign::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Sign::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Sign::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Sign::*)() const) static_cast<Standard_Boolean (Expr_Sign::*)() const>(&Expr_Sign::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sign::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sign::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Sign::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Sign::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Sign::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Sign::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Sign::*)() const) static_cast<TCollection_AsciiString (Expr_Sign::*)() const>(&Expr_Sign::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Sign::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Sign::*)() const>(&Expr_Sign::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Sign::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Sign::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Sine ,opencascade::handle<Expr_Sine> , Expr_UnaryExpression>>(m.attr("Expr_Sine"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sine::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sine::*)() const>(&Expr_Sine::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sine::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sine::*)() const>(&Expr_Sine::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Sine::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Sine::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Sine::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Sine::*)() const) static_cast<Standard_Boolean (Expr_Sine::*)() const>(&Expr_Sine::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sine::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sine::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Sine::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Sine::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Sine::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Sine::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Sine::*)() const) static_cast<TCollection_AsciiString (Expr_Sine::*)() const>(&Expr_Sine::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Sine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Sine::*)() const>(&Expr_Sine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Sine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Sine::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Sinh ,opencascade::handle<Expr_Sinh> , Expr_UnaryExpression>>(m.attr("Expr_Sinh"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sinh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sinh::*)() const>(&Expr_Sinh::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sinh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sinh::*)() const>(&Expr_Sinh::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Sinh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Sinh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Sinh::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Sinh::*)() const) static_cast<Standard_Boolean (Expr_Sinh::*)() const>(&Expr_Sinh::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sinh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sinh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Sinh::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Sinh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Sinh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Sinh::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Sinh::*)() const) static_cast<TCollection_AsciiString (Expr_Sinh::*)() const>(&Expr_Sinh::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Sinh::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Sinh::*)() const>(&Expr_Sinh::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Sinh::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Sinh::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Square ,opencascade::handle<Expr_Square> , Expr_UnaryExpression>>(m.attr("Expr_Square"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Square::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Square::*)() const>(&Expr_Square::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Square::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Square::*)() const>(&Expr_Square::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Square::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Square::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Square::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Square::*)() const) static_cast<Standard_Boolean (Expr_Square::*)() const>(&Expr_Square::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Square::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Square::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Square::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Square::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Square::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Square::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Square::*)() const) static_cast<TCollection_AsciiString (Expr_Square::*)() const>(&Expr_Square::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Square::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Square::*)() const>(&Expr_Square::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Square::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Square::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_SquareRoot ,opencascade::handle<Expr_SquareRoot> , Expr_UnaryExpression>>(m.attr("Expr_SquareRoot"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_SquareRoot::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_SquareRoot::*)() const>(&Expr_SquareRoot::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_SquareRoot::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_SquareRoot::*)() const>(&Expr_SquareRoot::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_SquareRoot::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_SquareRoot::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_SquareRoot::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_SquareRoot::*)() const) static_cast<Standard_Boolean (Expr_SquareRoot::*)() const>(&Expr_SquareRoot::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_SquareRoot::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_SquareRoot::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_SquareRoot::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_SquareRoot::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_SquareRoot::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_SquareRoot::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_SquareRoot::*)() const) static_cast<TCollection_AsciiString (Expr_SquareRoot::*)() const>(&Expr_SquareRoot::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_SquareRoot::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_SquareRoot::*)() const>(&Expr_SquareRoot::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_SquareRoot::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_SquareRoot::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Sum ,opencascade::handle<Expr_Sum> , Expr_PolyExpression>>(m.attr("Expr_Sum"))
    // constructors
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Expr_GeneralExpression> > & >()  , py::arg("exps") )
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp1"),  py::arg("exp2") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sum::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sum::*)() const>(&Expr_Sum::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sum::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sum::*)() const>(&Expr_Sum::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Sum::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Sum::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Sum::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Sum::*)() const) static_cast<Standard_Boolean (Expr_Sum::*)() const>(&Expr_Sum::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sum::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sum::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Sum::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("NDerivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Sum::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Sum::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const>(&Expr_Sum::NDerivative),
             R"#(Returns the <N>-th derivative on <X> unknown of <me>. Raises OutOfRange if <N> <= 0)#"  , py::arg("X"),  py::arg("N"))
        .def("Evaluate",
             (Standard_Real (Expr_Sum::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Sum::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Sum::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Sum::*)() const) static_cast<TCollection_AsciiString (Expr_Sum::*)() const>(&Expr_Sum::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Sum::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Sum::*)() const>(&Expr_Sum::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Sum::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Sum::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Tangent ,opencascade::handle<Expr_Tangent> , Expr_UnaryExpression>>(m.attr("Expr_Tangent"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Tangent::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Tangent::*)() const>(&Expr_Tangent::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Tangent::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Tangent::*)() const>(&Expr_Tangent::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Tangent::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Tangent::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Tangent::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Tangent::*)() const) static_cast<Standard_Boolean (Expr_Tangent::*)() const>(&Expr_Tangent::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Tangent::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Tangent::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Tangent::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Tangent::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Tangent::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Tangent::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Tangent::*)() const) static_cast<TCollection_AsciiString (Expr_Tangent::*)() const>(&Expr_Tangent::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Tangent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Tangent::*)() const>(&Expr_Tangent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Tangent::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Tangent::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_Tanh ,opencascade::handle<Expr_Tanh> , Expr_UnaryExpression>>(m.attr("Expr_Tanh"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Tanh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Tanh::*)() const>(&Expr_Tanh::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Tanh::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Tanh::*)() const>(&Expr_Tanh::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_Tanh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_Tanh::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_Tanh::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_Tanh::*)() const) static_cast<Standard_Boolean (Expr_Tanh::*)() const>(&Expr_Tanh::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_Tanh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_Tanh::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_Tanh::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_Tanh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_Tanh::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_Tanh::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_Tanh::*)() const) static_cast<TCollection_AsciiString (Expr_Tanh::*)() const>(&Expr_Tanh::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_Tanh::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_Tanh::*)() const>(&Expr_Tanh::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_Tanh::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_Tanh::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_UnaryFunction ,opencascade::handle<Expr_UnaryFunction> , Expr_UnaryExpression>>(m.attr("Expr_UnaryFunction"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralFunction> &,const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("func"),  py::arg("exp") )
    // custom constructors
    // methods
        .def("Function",
             (opencascade::handle<Expr_GeneralFunction> (Expr_UnaryFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralFunction> (Expr_UnaryFunction::*)() const>(&Expr_UnaryFunction::Function),
             R"#(Returns the function defining <me>.)#" )
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_UnaryFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_UnaryFunction::*)() const>(&Expr_UnaryFunction::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_UnaryFunction::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_UnaryFunction::*)() const>(&Expr_UnaryFunction::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_UnaryFunction::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_UnaryFunction::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_UnaryFunction::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_UnaryFunction::*)() const) static_cast<Standard_Boolean (Expr_UnaryFunction::*)() const>(&Expr_UnaryFunction::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_UnaryFunction::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_UnaryFunction::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_UnaryFunction::Derivative),
             R"#(returns the derivative on <X> unknown of <me>.)#"  , py::arg("X"))
        .def("Evaluate",
             (Standard_Real (Expr_UnaryFunction::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_UnaryFunction::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_UnaryFunction::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_UnaryFunction::*)() const) static_cast<TCollection_AsciiString (Expr_UnaryFunction::*)() const>(&Expr_UnaryFunction::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_UnaryFunction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_UnaryFunction::*)() const>(&Expr_UnaryFunction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_UnaryFunction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_UnaryFunction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Expr_UnaryMinus ,opencascade::handle<Expr_UnaryMinus> , Expr_UnaryExpression>>(m.attr("Expr_UnaryMinus"))
    // constructors
        .def(py::init< const opencascade::handle<Expr_GeneralExpression> & >()  , py::arg("exp") )
    // custom constructors
    // methods
        .def("ShallowSimplified",
             (opencascade::handle<Expr_GeneralExpression> (Expr_UnaryMinus::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_UnaryMinus::*)() const>(&Expr_UnaryMinus::ShallowSimplified),
             R"#(Returns a GeneralExpression after a simplification of the arguments of <me>.)#" )
        .def("Copy",
             (opencascade::handle<Expr_GeneralExpression> (Expr_UnaryMinus::*)() const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_UnaryMinus::*)() const>(&Expr_UnaryMinus::Copy),
             R"#(Returns a copy of <me> having the same unknowns and functions.)#" )
        .def("IsIdentical",
             (Standard_Boolean (Expr_UnaryMinus::*)( const opencascade::handle<Expr_GeneralExpression> & ) const) static_cast<Standard_Boolean (Expr_UnaryMinus::*)( const opencascade::handle<Expr_GeneralExpression> & ) const>(&Expr_UnaryMinus::IsIdentical),
             R"#(Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.)#"  , py::arg("Other"))
        .def("IsLinear",
             (Standard_Boolean (Expr_UnaryMinus::*)() const) static_cast<Standard_Boolean (Expr_UnaryMinus::*)() const>(&Expr_UnaryMinus::IsLinear),
             R"#(None)#" )
        .def("Derivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_UnaryMinus::*)( const opencascade::handle<Expr_NamedUnknown> & ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_UnaryMinus::*)( const opencascade::handle<Expr_NamedUnknown> & ) const>(&Expr_UnaryMinus::Derivative),
             R"#(Returns the derivative on <X> unknown of <me>)#"  , py::arg("X"))
        .def("NDerivative",
             (opencascade::handle<Expr_GeneralExpression> (Expr_UnaryMinus::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const) static_cast<opencascade::handle<Expr_GeneralExpression> (Expr_UnaryMinus::*)( const opencascade::handle<Expr_NamedUnknown> & , const Standard_Integer ) const>(&Expr_UnaryMinus::NDerivative),
             R"#(Returns the <N>-th derivative on <X> unknown of <me>. Raises OutOfRange if <N> <= 0)#"  , py::arg("X"),  py::arg("N"))
        .def("Evaluate",
             (Standard_Real (Expr_UnaryMinus::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const) static_cast<Standard_Real (Expr_UnaryMinus::*)(  const NCollection_Array1<opencascade::handle<Expr_NamedUnknown> > & ,  const NCollection_Array1<Standard_Real> & ) const>(&Expr_UnaryMinus::Evaluate),
             R"#(Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.)#"  , py::arg("vars"),  py::arg("vals"))
        .def("String",
             (TCollection_AsciiString (Expr_UnaryMinus::*)() const) static_cast<TCollection_AsciiString (Expr_UnaryMinus::*)() const>(&Expr_UnaryMinus::String),
             R"#(returns a string representing <me> in a readable way.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Expr_UnaryMinus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Expr_UnaryMinus::*)() const>(&Expr_UnaryMinus::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Expr_UnaryMinus::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Expr_UnaryMinus::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Expr_ArcTangent.hxx
// ./opencascade/Expr_ArgCosh.hxx
// ./opencascade/Expr_LogOfe.hxx
// ./opencascade/Expr_GeneralFunction.hxx
// ./opencascade/Expr.hxx
// ./opencascade/Expr_ArgSinh.hxx
// ./opencascade/Expr_Array1OfNamedUnknown.hxx
// ./opencascade/Expr_Difference.hxx
// ./opencascade/Expr_PolyFunction.hxx
// ./opencascade/Expr_Square.hxx
// ./opencascade/Expr_Tangent.hxx
// ./opencascade/Expr_NamedExpression.hxx
// ./opencascade/Expr_SingleRelation.hxx
// ./opencascade/Expr_UnknownIterator.hxx
// ./opencascade/Expr_Absolute.hxx
// ./opencascade/Expr_Array1OfGeneralExpression.hxx
// ./opencascade/Expr_LogOf10.hxx
// ./opencascade/Expr_PolyExpression.hxx
// ./opencascade/Expr_SystemRelation.hxx
// ./opencascade/Expr_BinaryExpression.hxx
// ./opencascade/Expr_RelationIterator.hxx
// ./opencascade/Expr_Equal.hxx
// ./opencascade/Expr_UnaryMinus.hxx
// ./opencascade/Expr_FunctionDerivative.hxx
// ./opencascade/Expr_ArcSine.hxx
// ./opencascade/Expr_Sum.hxx
// ./opencascade/Expr_InvalidOperand.hxx
// ./opencascade/Expr_UnaryFunction.hxx
// ./opencascade/Expr_NotAssigned.hxx
// ./opencascade/Expr_GreaterThanOrEqual.hxx
// ./opencascade/Expr_SequenceOfGeneralExpression.hxx
// ./opencascade/Expr_Tanh.hxx
// ./opencascade/Expr_NamedConstant.hxx
// ./opencascade/Expr_NamedFunction.hxx
// ./opencascade/Expr_Division.hxx
// ./opencascade/Expr_NumericValue.hxx
// ./opencascade/Expr_Cosh.hxx
// ./opencascade/Expr_Different.hxx
// ./opencascade/Expr_SequenceOfGeneralRelation.hxx
// ./opencascade/Expr_Sinh.hxx
// ./opencascade/Expr_Cosine.hxx
// ./opencascade/Expr_GeneralRelation.hxx
// ./opencascade/Expr_LessThanOrEqual.hxx
// ./opencascade/Expr_GreaterThan.hxx
// ./opencascade/Expr_ExprFailure.hxx
// ./opencascade/Expr_InvalidFunction.hxx
// ./opencascade/Expr_UnaryExpression.hxx
// ./opencascade/Expr_BinaryFunction.hxx
// ./opencascade/Expr_RUIterator.hxx
// ./opencascade/Expr_InvalidAssignment.hxx
// ./opencascade/Expr_Exponentiate.hxx
// ./opencascade/Expr_Exponential.hxx
// ./opencascade/Expr_LessThan.hxx
// ./opencascade/Expr_NotEvaluable.hxx
// ./opencascade/Expr_SquareRoot.hxx
// ./opencascade/Expr_GeneralExpression.hxx
// ./opencascade/Expr_MapOfNamedUnknown.hxx
// ./opencascade/Expr_Sine.hxx
// ./opencascade/Expr_Product.hxx
// ./opencascade/Expr_ArgTanh.hxx
// ./opencascade/Expr_Operators.hxx
// ./opencascade/Expr_NamedUnknown.hxx
// ./opencascade/Expr_ArcCosine.hxx
// ./opencascade/Expr_Sign.hxx
// ./opencascade/Expr_Array1OfSingleRelation.hxx

// Additional functions

// operators
    m.def("__add__",
          (opencascade::handle<Expr_Sum> (*)( const opencascade::handle<Expr_GeneralExpression> & , const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_Sum> (*)( const opencascade::handle<Expr_GeneralExpression> & , const opencascade::handle<Expr_GeneralExpression> & )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__add__",
          (opencascade::handle<Expr_Sum> (*)( const Standard_Real , const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_Sum> (*)( const Standard_Real , const opencascade::handle<Expr_GeneralExpression> & )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__add__",
          (opencascade::handle<Expr_Sum> (*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Real ))  static_cast<opencascade::handle<Expr_Sum> (*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Real )>(&operator+),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__sub__",
          (opencascade::handle<Expr_Difference> (*)( const opencascade::handle<Expr_GeneralExpression> & , const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_Difference> (*)( const opencascade::handle<Expr_GeneralExpression> & , const opencascade::handle<Expr_GeneralExpression> & )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__sub__",
          (opencascade::handle<Expr_Difference> (*)( const Standard_Real , const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_Difference> (*)( const Standard_Real , const opencascade::handle<Expr_GeneralExpression> & )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__sub__",
          (opencascade::handle<Expr_Difference> (*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Real ))  static_cast<opencascade::handle<Expr_Difference> (*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Real )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__sub__",
          (opencascade::handle<Expr_UnaryMinus> (*)( const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_UnaryMinus> (*)( const opencascade::handle<Expr_GeneralExpression> & )>(&operator-),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"));
    m.def("__mul__",
          (opencascade::handle<Expr_Product> (*)( const opencascade::handle<Expr_GeneralExpression> & , const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_Product> (*)( const opencascade::handle<Expr_GeneralExpression> & , const opencascade::handle<Expr_GeneralExpression> & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__rmul__",
          (opencascade::handle<Expr_Product> (*)( const opencascade::handle<Expr_GeneralExpression> & , const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_Product> (*)( const opencascade::handle<Expr_GeneralExpression> & , const opencascade::handle<Expr_GeneralExpression> & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__mul__",
          (opencascade::handle<Expr_Product> (*)( const Standard_Real , const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_Product> (*)( const Standard_Real , const opencascade::handle<Expr_GeneralExpression> & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__rmul__",
          (opencascade::handle<Expr_Product> (*)( const Standard_Real , const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_Product> (*)( const Standard_Real , const opencascade::handle<Expr_GeneralExpression> & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__mul__",
          (opencascade::handle<Expr_Product> (*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Real ))  static_cast<opencascade::handle<Expr_Product> (*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Real )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__rmul__",
          (opencascade::handle<Expr_Product> (*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Real ))  static_cast<opencascade::handle<Expr_Product> (*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Real )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__truediv__",
          (opencascade::handle<Expr_Division> (*)( const opencascade::handle<Expr_GeneralExpression> & , const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_Division> (*)( const opencascade::handle<Expr_GeneralExpression> & , const opencascade::handle<Expr_GeneralExpression> & )>(&operator/),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__truediv__",
          (opencascade::handle<Expr_Division> (*)( const Standard_Real , const opencascade::handle<Expr_GeneralExpression> & ))  static_cast<opencascade::handle<Expr_Division> (*)( const Standard_Real , const opencascade::handle<Expr_GeneralExpression> & )>(&operator/),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));
    m.def("__truediv__",
          (opencascade::handle<Expr_Division> (*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Real ))  static_cast<opencascade::handle<Expr_Division> (*)( const opencascade::handle<Expr_GeneralExpression> & , const Standard_Real )>(&operator/),
          py::is_operator(),
          R"#(None)#"  , py::arg("x"),  py::arg("y"));

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<Expr_NamedUnknown> >(m,"Expr_Array1OfNamedUnknown");
    register_template_NCollection_Array1<opencascade::handle<Expr_GeneralExpression> >(m,"Expr_Array1OfGeneralExpression");
    register_template_NCollection_Sequence<opencascade::handle<Expr_GeneralExpression> >(m,"Expr_SequenceOfGeneralExpression");
    register_template_NCollection_Sequence<opencascade::handle<Expr_GeneralRelation> >(m,"Expr_SequenceOfGeneralRelation");
    register_template_NCollection_IndexedMap<opencascade::handle<Expr_NamedUnknown>, TColStd_MapTransientHasher>(m,"Expr_MapOfNamedUnknown");
    register_template_NCollection_Array1<opencascade::handle<Expr_SingleRelation> >(m,"Expr_Array1OfSingleRelation");


// exceptions
register_occ_exception<Expr_ExprFailure>(m, "Expr_ExprFailure");
register_occ_exception<Expr_InvalidAssignment>(m, "Expr_InvalidAssignment");
register_occ_exception<Expr_InvalidFunction>(m, "Expr_InvalidFunction");
register_occ_exception<Expr_InvalidOperand>(m, "Expr_InvalidOperand");
register_occ_exception<Expr_NotAssigned>(m, "Expr_NotAssigned");
register_occ_exception<Expr_NotEvaluable>(m, "Expr_NotEvaluable");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
