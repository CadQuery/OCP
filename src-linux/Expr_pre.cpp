
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_Expr_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Expr", R"#()#");

// user-defined inclusion per module in the body

// enums

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

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<Expr_NamedUnknown> >(m,"Expr_Array1OfNamedUnknown");
    preregister_template_NCollection_Array1<opencascade::handle<Expr_GeneralExpression> >(m,"Expr_Array1OfGeneralExpression");
    preregister_template_NCollection_Sequence<opencascade::handle<Expr_GeneralExpression> >(m,"Expr_SequenceOfGeneralExpression");
    preregister_template_NCollection_Sequence<opencascade::handle<Expr_GeneralRelation> >(m,"Expr_SequenceOfGeneralRelation");
    preregister_template_NCollection_IndexedMap<opencascade::handle<Expr_NamedUnknown>, TColStd_MapTransientHasher>(m,"Expr_MapOfNamedUnknown");
    preregister_template_NCollection_Array1<opencascade::handle<Expr_SingleRelation> >(m,"Expr_Array1OfSingleRelation");

// classes forward declarations only
    py::class_<Expr , shared_ptr<Expr> >(m,"Expr",R"#(This package describes the data structure of any expression, relation or function used in mathematics. It also describes the assignment of variables. Standard mathematical functions are implemented such as trigonometrics, hyperbolics, and log functions.)#");
    py::class_<Expr_GeneralExpression ,opencascade::handle<Expr_GeneralExpression>,Py_Expr_GeneralExpression , Standard_Transient>(m,"Expr_GeneralExpression",R"#(Defines the general purposes of any expression.Defines the general purposes of any expression.Defines the general purposes of any expression.)#");
    py::class_<Expr_GeneralFunction ,opencascade::handle<Expr_GeneralFunction>,Py_Expr_GeneralFunction , Standard_Transient>(m,"Expr_GeneralFunction",R"#(Defines the general purposes of any function.Defines the general purposes of any function.Defines the general purposes of any function.)#");
    py::class_<Expr_GeneralRelation ,opencascade::handle<Expr_GeneralRelation>,Py_Expr_GeneralRelation , Standard_Transient>(m,"Expr_GeneralRelation",R"#(Defines the general purposes of any relation between expressions.Defines the general purposes of any relation between expressions.Defines the general purposes of any relation between expressions.)#");
    py::class_<Expr_RUIterator , shared_ptr<Expr_RUIterator> >(m,"Expr_RUIterator",R"#(Iterates on NamedUnknowns in a GeneralRelation.)#");
    py::class_<Expr_RelationIterator , shared_ptr<Expr_RelationIterator> >(m,"Expr_RelationIterator",R"#(Iterates on every basic relation contained in a GeneralRelation.)#");
    py::class_<Expr_UnknownIterator , shared_ptr<Expr_UnknownIterator> >(m,"Expr_UnknownIterator",R"#(Describes an iterator on NamedUnknowns contained in any GeneralExpression.)#");
    py::class_<Expr_BinaryExpression ,opencascade::handle<Expr_BinaryExpression>,Py_Expr_BinaryExpression , Expr_GeneralExpression>(m,"Expr_BinaryExpression",R"#(Defines all binary expressions. The order of the two operands is significant.Defines all binary expressions. The order of the two operands is significant.Defines all binary expressions. The order of the two operands is significant.)#");
    py::class_<Expr_FunctionDerivative ,opencascade::handle<Expr_FunctionDerivative> , Expr_GeneralFunction>(m,"Expr_FunctionDerivative",R"#()#");
    py::class_<Expr_NamedExpression ,opencascade::handle<Expr_NamedExpression>,Py_Expr_NamedExpression , Expr_GeneralExpression>(m,"Expr_NamedExpression",R"#(Describe an expression used by its name (as constants or variables). A single reference is made to a NamedExpression in every Expression (i.e. a NamedExpression is shared).Describe an expression used by its name (as constants or variables). A single reference is made to a NamedExpression in every Expression (i.e. a NamedExpression is shared).Describe an expression used by its name (as constants or variables). A single reference is made to a NamedExpression in every Expression (i.e. a NamedExpression is shared).)#");
    py::class_<Expr_NamedFunction ,opencascade::handle<Expr_NamedFunction> , Expr_GeneralFunction>(m,"Expr_NamedFunction",R"#()#");
    py::class_<Expr_NumericValue ,opencascade::handle<Expr_NumericValue> , Expr_GeneralExpression>(m,"Expr_NumericValue",R"#(This class describes any reel value defined in an expression.This class describes any reel value defined in an expression.This class describes any reel value defined in an expression.)#");
    py::class_<Expr_PolyExpression ,opencascade::handle<Expr_PolyExpression>,Py_Expr_PolyExpression , Expr_GeneralExpression>(m,"Expr_PolyExpression",R"#()#");
    py::class_<Expr_SingleRelation ,opencascade::handle<Expr_SingleRelation>,Py_Expr_SingleRelation , Expr_GeneralRelation>(m,"Expr_SingleRelation",R"#()#");
    py::class_<Expr_SystemRelation ,opencascade::handle<Expr_SystemRelation> , Expr_GeneralRelation>(m,"Expr_SystemRelation",R"#()#");
    py::class_<Expr_UnaryExpression ,opencascade::handle<Expr_UnaryExpression>,Py_Expr_UnaryExpression , Expr_GeneralExpression>(m,"Expr_UnaryExpression",R"#()#");
    py::class_<Expr_Absolute ,opencascade::handle<Expr_Absolute> , Expr_UnaryExpression>(m,"Expr_Absolute",R"#()#");
    py::class_<Expr_ArcCosine ,opencascade::handle<Expr_ArcCosine> , Expr_UnaryExpression>(m,"Expr_ArcCosine",R"#()#");
    py::class_<Expr_ArcSine ,opencascade::handle<Expr_ArcSine> , Expr_UnaryExpression>(m,"Expr_ArcSine",R"#()#");
    py::class_<Expr_ArcTangent ,opencascade::handle<Expr_ArcTangent> , Expr_UnaryExpression>(m,"Expr_ArcTangent",R"#()#");
    py::class_<Expr_ArgCosh ,opencascade::handle<Expr_ArgCosh> , Expr_UnaryExpression>(m,"Expr_ArgCosh",R"#()#");
    py::class_<Expr_ArgSinh ,opencascade::handle<Expr_ArgSinh> , Expr_UnaryExpression>(m,"Expr_ArgSinh",R"#()#");
    py::class_<Expr_ArgTanh ,opencascade::handle<Expr_ArgTanh> , Expr_UnaryExpression>(m,"Expr_ArgTanh",R"#()#");
    py::class_<Expr_BinaryFunction ,opencascade::handle<Expr_BinaryFunction> , Expr_BinaryExpression>(m,"Expr_BinaryFunction",R"#(Defines the use of a binary function in an expression with given arguments.Defines the use of a binary function in an expression with given arguments.Defines the use of a binary function in an expression with given arguments.)#");
    py::class_<Expr_Cosh ,opencascade::handle<Expr_Cosh> , Expr_UnaryExpression>(m,"Expr_Cosh",R"#()#");
    py::class_<Expr_Cosine ,opencascade::handle<Expr_Cosine> , Expr_UnaryExpression>(m,"Expr_Cosine",R"#()#");
    py::class_<Expr_Difference ,opencascade::handle<Expr_Difference> , Expr_BinaryExpression>(m,"Expr_Difference",R"#()#");
    py::class_<Expr_Different ,opencascade::handle<Expr_Different> , Expr_SingleRelation>(m,"Expr_Different",R"#()#");
    py::class_<Expr_Division ,opencascade::handle<Expr_Division> , Expr_BinaryExpression>(m,"Expr_Division",R"#()#");
    py::class_<Expr_Equal ,opencascade::handle<Expr_Equal> , Expr_SingleRelation>(m,"Expr_Equal",R"#()#");
    py::class_<Expr_Exponential ,opencascade::handle<Expr_Exponential> , Expr_UnaryExpression>(m,"Expr_Exponential",R"#()#");
    py::class_<Expr_Exponentiate ,opencascade::handle<Expr_Exponentiate> , Expr_BinaryExpression>(m,"Expr_Exponentiate",R"#()#");
    py::class_<Expr_GreaterThan ,opencascade::handle<Expr_GreaterThan> , Expr_SingleRelation>(m,"Expr_GreaterThan",R"#()#");
    py::class_<Expr_GreaterThanOrEqual ,opencascade::handle<Expr_GreaterThanOrEqual> , Expr_SingleRelation>(m,"Expr_GreaterThanOrEqual",R"#()#");
    py::class_<Expr_LessThan ,opencascade::handle<Expr_LessThan> , Expr_SingleRelation>(m,"Expr_LessThan",R"#()#");
    py::class_<Expr_LessThanOrEqual ,opencascade::handle<Expr_LessThanOrEqual> , Expr_SingleRelation>(m,"Expr_LessThanOrEqual",R"#()#");
    py::class_<Expr_LogOf10 ,opencascade::handle<Expr_LogOf10> , Expr_UnaryExpression>(m,"Expr_LogOf10",R"#()#");
    py::class_<Expr_LogOfe ,opencascade::handle<Expr_LogOfe> , Expr_UnaryExpression>(m,"Expr_LogOfe",R"#()#");
    py::class_<Expr_NamedConstant ,opencascade::handle<Expr_NamedConstant> , Expr_NamedExpression>(m,"Expr_NamedConstant",R"#(Describes any numeric constant known by a special name (as PI, e,...).Describes any numeric constant known by a special name (as PI, e,...).Describes any numeric constant known by a special name (as PI, e,...).)#");
    py::class_<Expr_NamedUnknown ,opencascade::handle<Expr_NamedUnknown> , Expr_NamedExpression>(m,"Expr_NamedUnknown",R"#(This class describes any variable of an expression. Assignment is treated directly in this class.This class describes any variable of an expression. Assignment is treated directly in this class.This class describes any variable of an expression. Assignment is treated directly in this class.)#");
    py::class_<Expr_PolyFunction ,opencascade::handle<Expr_PolyFunction> , Expr_PolyExpression>(m,"Expr_PolyFunction",R"#(Defines the use of an n-ary function in an expression with given arguments.Defines the use of an n-ary function in an expression with given arguments.Defines the use of an n-ary function in an expression with given arguments.)#");
    py::class_<Expr_Product ,opencascade::handle<Expr_Product> , Expr_PolyExpression>(m,"Expr_Product",R"#()#");
    py::class_<Expr_Sign ,opencascade::handle<Expr_Sign> , Expr_UnaryExpression>(m,"Expr_Sign",R"#()#");
    py::class_<Expr_Sine ,opencascade::handle<Expr_Sine> , Expr_UnaryExpression>(m,"Expr_Sine",R"#()#");
    py::class_<Expr_Sinh ,opencascade::handle<Expr_Sinh> , Expr_UnaryExpression>(m,"Expr_Sinh",R"#()#");
    py::class_<Expr_Square ,opencascade::handle<Expr_Square> , Expr_UnaryExpression>(m,"Expr_Square",R"#()#");
    py::class_<Expr_SquareRoot ,opencascade::handle<Expr_SquareRoot> , Expr_UnaryExpression>(m,"Expr_SquareRoot",R"#()#");
    py::class_<Expr_Sum ,opencascade::handle<Expr_Sum> , Expr_PolyExpression>(m,"Expr_Sum",R"#()#");
    py::class_<Expr_Tangent ,opencascade::handle<Expr_Tangent> , Expr_UnaryExpression>(m,"Expr_Tangent",R"#()#");
    py::class_<Expr_Tanh ,opencascade::handle<Expr_Tanh> , Expr_UnaryExpression>(m,"Expr_Tanh",R"#()#");
    py::class_<Expr_UnaryFunction ,opencascade::handle<Expr_UnaryFunction> , Expr_UnaryExpression>(m,"Expr_UnaryFunction",R"#(Defines the use of an unary function in an expression with a given argument.Defines the use of an unary function in an expression with a given argument.Defines the use of an unary function in an expression with a given argument.)#");
    py::class_<Expr_UnaryMinus ,opencascade::handle<Expr_UnaryMinus> , Expr_UnaryExpression>(m,"Expr_UnaryMinus",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
