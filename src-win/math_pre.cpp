
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_OutOfRange.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <math_Function.hxx>
#include <math_Matrix.hxx>
#include <Standard_NotImplemented.hxx>
#include <math_FunctionSet.hxx>
#include <math_Matrix.hxx>
#include <math_Function.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_MultipleVarFunction.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <math_FunctionSet.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_Gauss.hxx>
#include <math_GaussLeastSquare.hxx>
#include <math_SVD.hxx>
#include <math_DirectPolynomialRoots.hxx>
#include <math_FunctionRoots.hxx>
#include <math_BissecNewton.hxx>
#include <math_FunctionRoot.hxx>
#include <math_NewtonFunctionRoot.hxx>
#include <math_BracketedRoot.hxx>
#include <math_FunctionSetRoot.hxx>
#include <math_NewtonFunctionSetRoot.hxx>
#include <math_BracketMinimum.hxx>
#include <math_BrentMinimum.hxx>
#include <math_Powell.hxx>
#include <math_FRPR.hxx>
#include <math_BFGS.hxx>
#include <math_NewtonMinimum.hxx>
#include <math_Jacobi.hxx>
#include <math_GaussSingleIntegration.hxx>
#include <math_GaussMultipleIntegration.hxx>
#include <math_GaussSetIntegration.hxx>
#include <math_FunctionSample.hxx>
#include <math_FunctionAllRoots.hxx>
#include <math_Householder.hxx>
#include <math_Crout.hxx>
#include <math_Uzawa.hxx>
#include <math_TrigonometricFunctionRoots.hxx>
#include <math_KronrodSingleIntegration.hxx>
#include <math_EigenValuesSearcher.hxx>
#include <math_ComputeGaussPointsAndWeights.hxx>
#include <math_ComputeKronrodPointsAndWeights.hxx>
#include <math_DoubleTab.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <math_NotSquare.hxx>
#include <math_MultipleVarFunction.hxx>
#include <math_Function.hxx>
#include <math_NotSquare.hxx>
#include <StdFail_NotDone.hxx>
#include <Message_ProgressIndicator.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <Standard_NumericError.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_FunctionSample.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_Function.hxx>
#include <math_PSOParticlesPool.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <math_Function.hxx>
#include <math_Matrix.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <math_Function.hxx>
#include <math_IntegerVector.hxx>
#include <math_Vector.hxx>
#include <math_Matrix.hxx>
#include <Message_ProgressIndicator.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <StdFail_NotDone.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_MultipleVarFunction.hxx>

// module includes
#include <math.hxx>
#include <math_Array1OfValueAndWeight.hxx>
#include <math_BFGS.hxx>
#include <math_BissecNewton.hxx>
#include <math_BracketedRoot.hxx>
#include <math_BracketMinimum.hxx>
#include <math_BrentMinimum.hxx>
#include <math_BullardGenerator.hxx>
#include <math_ComputeGaussPointsAndWeights.hxx>
#include <math_ComputeKronrodPointsAndWeights.hxx>
#include <math_Crout.hxx>
#include <math_DirectPolynomialRoots.hxx>
#include <math_DoubleTab.hxx>
#include <math_EigenValuesSearcher.hxx>
#include <math_FRPR.hxx>
#include <math_Function.hxx>
#include <math_FunctionAllRoots.hxx>
#include <math_FunctionRoot.hxx>
#include <math_FunctionRoots.hxx>
#include <math_FunctionSample.hxx>
#include <math_FunctionSet.hxx>
#include <math_FunctionSetRoot.hxx>
#include <math_FunctionSetWithDerivatives.hxx>
#include <math_FunctionWithDerivative.hxx>
#include <math_Gauss.hxx>
#include <math_GaussLeastSquare.hxx>
#include <math_GaussMultipleIntegration.hxx>
#include <math_GaussSetIntegration.hxx>
#include <math_GaussSingleIntegration.hxx>
#include <math_GlobOptMin.hxx>
#include <math_Householder.hxx>
#include <math_IntegerVector.hxx>
#include <math_Jacobi.hxx>
#include <math_KronrodSingleIntegration.hxx>
#include <math_Matrix.hxx>
#include <math_MultipleVarFunction.hxx>
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <math_NewtonFunctionRoot.hxx>
#include <math_NewtonFunctionSetRoot.hxx>
#include <math_NewtonMinimum.hxx>
#include <math_NotSquare.hxx>
#include <math_Powell.hxx>
#include <math_PSO.hxx>
#include <math_PSOParticlesPool.hxx>
#include <math_Recipes.hxx>
#include <math_SingularMatrix.hxx>
#include <math_Status.hxx>
#include <math_SVD.hxx>
#include <math_TrigonometricEquationFunction.hxx>
#include <math_TrigonometricFunctionRoots.hxx>
#include <math_Uzawa.hxx>
#include <math_ValueAndWeight.hxx>
#include <math_Vector.hxx>

// template related includes
// ./opencascade\math_Array1OfValueAndWeight.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_math_enums(py::module &main_module) {


py::module m = main_module.def_submodule("math", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<math_Status>(m, "math_Status",R"#(None)#")
        .value("math_OK",math_Status::math_OK)
        .value("math_TooManyIterations",math_Status::math_TooManyIterations)
        .value("math_FunctionError",math_Status::math_FunctionError)
        .value("math_DirectionSearchError",math_Status::math_DirectionSearchError)
        .value("math_NotBracketed",math_Status::math_NotBracketed).export_values();

//Python trampoline classes
    class Py_math_Function : public math_Function{
    public:
        using math_Function::math_Function;


        // public pure virtual
        Standard_Boolean Value(const Standard_Real X,Standard_Real & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_Function,Value,X,F) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_math_FunctionSet : public math_FunctionSet{
    public:
        using math_FunctionSet::math_FunctionSet;


        // public pure virtual
        Standard_Integer NbVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,math_FunctionSet,NbVariables,) };
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,math_FunctionSet,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_FunctionSet,Value,X,F) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_math_MultipleVarFunction : public math_MultipleVarFunction{
    public:
        using math_MultipleVarFunction::math_MultipleVarFunction;


        // public pure virtual
        Standard_Integer NbVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,math_MultipleVarFunction,NbVariables,) };
        Standard_Boolean Value(const math_Vector & X,Standard_Real & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_MultipleVarFunction,Value,X,F) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_math_FunctionSetWithDerivatives : public math_FunctionSetWithDerivatives{
    public:
        using math_FunctionSetWithDerivatives::math_FunctionSetWithDerivatives;


        // public pure virtual
        Standard_Integer NbVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,math_FunctionSetWithDerivatives,NbVariables,) };
        Standard_Integer NbEquations() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,math_FunctionSetWithDerivatives,NbEquations,) };
        Standard_Boolean Value(const math_Vector & X,math_Vector & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_FunctionSetWithDerivatives,Value,X,F) };
        Standard_Boolean Derivatives(const math_Vector & X,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_FunctionSetWithDerivatives,Derivatives,X,D) };
        Standard_Boolean Values(const math_Vector & X,math_Vector & F,math_Matrix & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_FunctionSetWithDerivatives,Values,X,F,D) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_math_FunctionWithDerivative : public math_FunctionWithDerivative{
    public:
        using math_FunctionWithDerivative::math_FunctionWithDerivative;


        // public pure virtual
        Standard_Boolean Value(const Standard_Real X,Standard_Real & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_FunctionWithDerivative,Value,X,F) };
        Standard_Boolean Derivative(const Standard_Real X,Standard_Real & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_FunctionWithDerivative,Derivative,X,D) };
        Standard_Boolean Values(const Standard_Real X,Standard_Real & F,Standard_Real & D) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_FunctionWithDerivative,Values,X,F,D) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_math_MultipleVarFunctionWithGradient : public math_MultipleVarFunctionWithGradient{
    public:
        using math_MultipleVarFunctionWithGradient::math_MultipleVarFunctionWithGradient;


        // public pure virtual
        Standard_Integer NbVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,math_MultipleVarFunctionWithGradient,NbVariables,) };
        Standard_Boolean Value(const math_Vector & X,Standard_Real & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_MultipleVarFunctionWithGradient,Value,X,F) };
        Standard_Boolean Gradient(const math_Vector & X,math_Vector & G) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_MultipleVarFunctionWithGradient,Gradient,X,G) };
        Standard_Boolean Values(const math_Vector & X,Standard_Real & F,math_Vector & G) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_MultipleVarFunctionWithGradient,Values,X,F,G) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_math_MultipleVarFunctionWithHessian : public math_MultipleVarFunctionWithHessian{
    public:
        using math_MultipleVarFunctionWithHessian::math_MultipleVarFunctionWithHessian;


        // public pure virtual
        Standard_Integer NbVariables() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,math_MultipleVarFunctionWithHessian,NbVariables,) };
        Standard_Boolean Value(const math_Vector & X,Standard_Real & F) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_MultipleVarFunctionWithHessian,Value,X,F) };
        Standard_Boolean Gradient(const math_Vector & X,math_Vector & G) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_MultipleVarFunctionWithHessian,Gradient,X,G) };
        Standard_Boolean Values(const math_Vector & X,Standard_Real & F,math_Vector & G) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_MultipleVarFunctionWithHessian,Values,X,F,G) };
        Standard_Boolean Values(const math_Vector & X,Standard_Real & F,math_Vector & G,math_Matrix & H) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,math_MultipleVarFunctionWithHessian,Values,X,F,G,H) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_Array1<math_ValueAndWeight>(m,"math_Array1OfValueAndWeight");

// classes forward declarations only
    py::class_<PSO_Particle , shared_ptr<PSO_Particle> >(m,"PSO_Particle",R"#(Describes particle pool for using in PSO algorithm. Indexes: 0 <= aDimidx <= myDimensionCount - 1)#");
    py::class_<math , shared_ptr<math> >(m,"math",R"#(None)#");
    py::class_<math_BFGS , shared_ptr<math_BFGS> >(m,"math_BFGS",R"#(This class implements the Broyden-Fletcher-Goldfarb-Shanno variant of Davidson-Fletcher-Powell minimization algorithm of a function of multiple variables.Knowledge of the function's gradient is required.)#");
    py::class_<math_BissecNewton , shared_ptr<math_BissecNewton> >(m,"math_BissecNewton",R"#(This class implements a combination of Newton-Raphson and bissection methods to find the root of the function between two bounds. Knowledge of the derivative is required.)#");
    py::class_<math_BracketMinimum , shared_ptr<math_BracketMinimum> >(m,"math_BracketMinimum",R"#(Given two distinct initial points, BracketMinimum implements the computation of three points (a, b, c) which bracket the minimum of the function and verify A less than B, B less than C and F(B) less than F(A), F(B) less than F(C).)#");
    py::class_<math_BracketedRoot , shared_ptr<math_BracketedRoot> >(m,"math_BracketedRoot",R"#(This class implements the Brent method to find the root of a function located within two bounds. No knowledge of the derivative is required.)#");
    py::class_<math_BrentMinimum , shared_ptr<math_BrentMinimum> >(m,"math_BrentMinimum",R"#(This class implements the Brent's method to find the minimum of a function of a single variable. No knowledge of the derivative is required.)#");
    py::class_<math_BullardGenerator , shared_ptr<math_BullardGenerator> >(m,"math_BullardGenerator",R"#(Fast random number generator (the algorithm proposed by Ian C. Bullard).)#");
    py::class_<math_ComputeGaussPointsAndWeights , shared_ptr<math_ComputeGaussPointsAndWeights> >(m,"math_ComputeGaussPointsAndWeights",R"#(None)#");
    py::class_<math_ComputeKronrodPointsAndWeights , shared_ptr<math_ComputeKronrodPointsAndWeights> >(m,"math_ComputeKronrodPointsAndWeights",R"#(None)#");
    py::class_<math_Crout , shared_ptr<math_Crout> >(m,"math_Crout",R"#(This class implements the Crout algorithm used to solve a system A*X = B where A is a symmetric matrix. It can be used to invert a symmetric matrix. This algorithm is similar to Gauss but is faster than Gauss. Only the inferior triangle of A and the diagonal can be given.)#");
    py::class_<math_DirectPolynomialRoots , shared_ptr<math_DirectPolynomialRoots> >(m,"math_DirectPolynomialRoots",R"#(This class implements the calculation of all the real roots of a real polynomial of degree <= 4 using a direct method. Once found, the roots are polished using the Newton method.)#");
    py::class_<math_DoubleTab , shared_ptr<math_DoubleTab> >(m,"math_DoubleTab",R"#(None)#");
    py::class_<math_EigenValuesSearcher , shared_ptr<math_EigenValuesSearcher> >(m,"math_EigenValuesSearcher",R"#(This class finds eigen values and vectors of real symmetric tridiagonal matrix)#");
    py::class_<math_FRPR , shared_ptr<math_FRPR> >(m,"math_FRPR",R"#(this class implements the Fletcher-Reeves-Polak_Ribiere minimization algorithm of a function of multiple variables. Knowledge of the function's gradient is required.)#");
    py::class_<math_Function , shared_ptr<math_Function>,Py_math_Function >(m,"math_Function",R"#(This abstract class describes the virtual functions associated with a Function of a single variable.)#");
    py::class_<math_FunctionAllRoots , shared_ptr<math_FunctionAllRoots> >(m,"math_FunctionAllRoots",R"#(This algorithm uses a sample of the function to find all intervals on which the function is null, and afterwards uses the FunctionRoots algorithm to find the points where the function is null outside the "null intervals". Knowledge of the derivative is required.)#");
    py::class_<math_FunctionRoot , shared_ptr<math_FunctionRoot> >(m,"math_FunctionRoot",R"#(This class implements the computation of a root of a function of a single variable which is near an initial guess using a minimization algorithm.Knowledge of the derivative is required. The algorithm used is the same as in)#");
    py::class_<math_FunctionRoots , shared_ptr<math_FunctionRoots> >(m,"math_FunctionRoots",R"#(This class implements an algorithm which finds all the real roots of a function with derivative within a given range. Knowledge of the derivative is required.)#");
    py::class_<math_FunctionSample , shared_ptr<math_FunctionSample> >(m,"math_FunctionSample",R"#(This class gives a default sample (constant difference of parameter) for a function defined between two bound A,B.)#");
    py::class_<math_FunctionSet , shared_ptr<math_FunctionSet>,Py_math_FunctionSet >(m,"math_FunctionSet",R"#(This abstract class describes the virtual functions associated to a set on N Functions of M independant variables.)#");
    py::class_<math_FunctionSetRoot , shared_ptr<math_FunctionSetRoot> >(m,"math_FunctionSetRoot",R"#(The math_FunctionSetRoot class calculates the root of a set of N functions of M variables (N<M, N=M or N>M). Knowing an initial guess of the solution and using a minimization algorithm, a search is made in the Newton direction and then in the Gradient direction if there is no success in the Newton direction. This algorithm can also be used for functions minimization. Knowledge of all the partial derivatives (the Jacobian) is required.)#");
    py::class_<math_Gauss , shared_ptr<math_Gauss> >(m,"math_Gauss",R"#(This class implements the Gauss LU decomposition (Crout algorithm) with partial pivoting (rows interchange) of a square matrix and the different possible derived calculation : - solution of a set of linear equations. - inverse of a matrix. - determinant of a matrix.)#");
    py::class_<math_GaussLeastSquare , shared_ptr<math_GaussLeastSquare> >(m,"math_GaussLeastSquare",R"#(This class implements the least square solution of a set of n linear equations of m unknowns (n >= m) using the gauss LU decomposition algorithm. This algorithm is more likely subject to numerical instability than math_SVD.)#");
    py::class_<math_GaussMultipleIntegration , shared_ptr<math_GaussMultipleIntegration> >(m,"math_GaussMultipleIntegration",R"#(This class implements the integration of a function of multiple variables between the parameter bounds Lower[a..b] and Upper[a..b]. Warning: Each element of Order must be inferior or equal to 61.)#");
    py::class_<math_GaussSetIntegration , shared_ptr<math_GaussSetIntegration> >(m,"math_GaussSetIntegration",R"#(-- This class implements the integration of a set of N functions of M variables variables between the parameter bounds Lower[a..b] and Upper[a..b]. Warning: - The case M>1 is not implemented.)#");
    py::class_<math_GaussSingleIntegration , shared_ptr<math_GaussSingleIntegration> >(m,"math_GaussSingleIntegration",R"#(This class implements the integration of a function of a single variable between the parameter bounds Lower and Upper. Warning: Order must be inferior or equal to 61.)#");
    py::class_<math_GlobOptMin , shared_ptr<math_GlobOptMin> >(m,"math_GlobOptMin",R"#(This class represents Evtushenko's algorithm of global optimization based on non-uniform mesh. Article: Yu. Evtushenko. Numerical methods for finding global extreme (case of a non-uniform mesh). U.S.S.R. Comput. Maths. Math. Phys., Vol. 11, N 6, pp. 38-54.)#");
    py::class_<math_Householder , shared_ptr<math_Householder> >(m,"math_Householder",R"#(This class implements the least square solution of a set of linear equations of m unknowns (n >= m) using the Householder method. It solves A.X = B. This algorithm has more numerical stability than GaussLeastSquare but is longer. It must be used if the matrix is singular or nearly singular. It is about 16% longer than GaussLeastSquare if there is only one member B to solve. It is about 30% longer if there are twenty B members to solve.)#");
    py::class_<math_IntegerVector , shared_ptr<math_IntegerVector> >(m,"math_IntegerVector",R"#(This class implements the real IntegerVector abstract data type. IntegerVectors can have an arbitrary range which must be define at the declaration and cannot be changed after this declaration. Example:)#");
    py::class_<math_Jacobi , shared_ptr<math_Jacobi> >(m,"math_Jacobi",R"#(This class implements the Jacobi method to find the eigenvalues and the eigenvectors of a real symmetric square matrix. A sort of eigenvalues is done.)#");
    py::class_<math_KronrodSingleIntegration , shared_ptr<math_KronrodSingleIntegration> >(m,"math_KronrodSingleIntegration",R"#(This class implements the Gauss-Kronrod method of integral computation.)#");
    py::class_<math_Matrix , shared_ptr<math_Matrix> >(m,"math_Matrix",R"#(This class implements the real matrix abstract data type. Matrixes can have an arbitrary range which must be defined at the declaration and cannot be changed after this declaration math_Matrix(-3,5,2,4); //a vector with range [-3..5, 2..4] Matrix values may be initialized and retrieved using indexes which must lie within the range of definition of the matrix. Matrix objects follow "value semantics", that is, they cannot be shared and are copied through assignment Matrices are copied through assignement: math_Matrix M2(1, 9, 1, 3); ... M2 = M1; M1(1) = 2.0;//the matrix M2 will not be modified.)#");
    py::class_<math_MultipleVarFunction , shared_ptr<math_MultipleVarFunction>,Py_math_MultipleVarFunction >(m,"math_MultipleVarFunction",R"#(Describes the virtual functions associated with a multiple variable function.)#");
    py::class_<math_NewtonFunctionRoot , shared_ptr<math_NewtonFunctionRoot> >(m,"math_NewtonFunctionRoot",R"#(This class implements the calculation of a root of a function of a single variable starting from an initial near guess using the Newton algorithm. Knowledge of the derivative is required.)#");
    py::class_<math_NewtonFunctionSetRoot , shared_ptr<math_NewtonFunctionSetRoot> >(m,"math_NewtonFunctionSetRoot",R"#(This class computes the root of a set of N functions of N variables, knowing an initial guess at the solution and using the Newton Raphson algorithm. Knowledge of all the partial derivatives (Jacobian) is required.)#");
    py::class_<math_NewtonMinimum , shared_ptr<math_NewtonMinimum> >(m,"math_NewtonMinimum",R"#(None)#");
    py::class_<math_PSO , shared_ptr<math_PSO> >(m,"math_PSO",R"#(In this class implemented variation of Particle Swarm Optimization (PSO) method. A. Ismael F. Vaz, L. N. Vicente "A particle swarm pattern search method for bound constrained global optimization")#");
    py::class_<math_PSOParticlesPool , shared_ptr<math_PSOParticlesPool> >(m,"math_PSOParticlesPool",R"#(None)#");
    py::class_<math_Powell , shared_ptr<math_Powell> >(m,"math_Powell",R"#(This class implements the Powell method to find the minimum of function of multiple variables (the gradient does not have to be known).)#");
    py::class_<math_SVD , shared_ptr<math_SVD> >(m,"math_SVD",R"#(SVD implements the solution of a set of N linear equations of M unknowns without condition on N or M. The Singular Value Decomposition algorithm is used. For singular or nearly singular matrices SVD is a better choice than Gauss or GaussLeastSquare.)#");
    py::class_<math_TrigonometricFunctionRoots , shared_ptr<math_TrigonometricFunctionRoots> >(m,"math_TrigonometricFunctionRoots",R"#(This class implements the solutions of the equation a*Cos(x)*Cos(x) + 2*b*Cos(x)*Sin(x) + c*Cos(x) + d*Sin(x) + e The degree of this equation can be 4, 3 or 2.)#");
    py::class_<math_Uzawa , shared_ptr<math_Uzawa> >(m,"math_Uzawa",R"#(This class implements a system resolution C*X = B with an approach solution X0. There are no conditions on the number of equations. The algorithm used is the Uzawa algorithm. It is possible to have equal or inequal (<) equations to solve. The resolution is done with a minimization of Norm(X-X0). If there are only equal equations, the resolution is directly done and is similar to Gauss resolution with an optimisation because the matrix is a symmetric matrix. (The resolution is done with Crout algorithm))#");
    py::class_<math_ValueAndWeight , shared_ptr<math_ValueAndWeight> >(m,"math_ValueAndWeight",R"#(Simple container storing two reals: value and weight)#");
    py::class_<math_Vector , shared_ptr<math_Vector> >(m,"math_Vector",R"#(This class implements the real vector abstract data type. Vectors can have an arbitrary range which must be defined at the declaration and cannot be changed after this declaration.)#");
    py::class_<math_FunctionSetWithDerivatives , shared_ptr<math_FunctionSetWithDerivatives>,Py_math_FunctionSetWithDerivatives , math_FunctionSet>(m,"math_FunctionSetWithDerivatives",R"#(This abstract class describes the virtual functions associated with a set of N Functions each of M independant variables.)#");
    py::class_<math_FunctionWithDerivative , shared_ptr<math_FunctionWithDerivative>,Py_math_FunctionWithDerivative , math_Function>(m,"math_FunctionWithDerivative",R"#(This abstract class describes the virtual functions associated with a function of a single variable for which the first derivative is available.)#");
    py::class_<math_MultipleVarFunctionWithGradient , shared_ptr<math_MultipleVarFunctionWithGradient>,Py_math_MultipleVarFunctionWithGradient , math_MultipleVarFunction>(m,"math_MultipleVarFunctionWithGradient",R"#(The abstract class MultipleVarFunctionWithGradient describes the virtual functions associated with a multiple variable function.)#");
    py::class_<math_MultipleVarFunctionWithHessian , shared_ptr<math_MultipleVarFunctionWithHessian>,Py_math_MultipleVarFunctionWithHessian , math_MultipleVarFunctionWithGradient>(m,"math_MultipleVarFunctionWithHessian",R"#(None)#");
    py::class_<math_TrigonometricEquationFunction , shared_ptr<math_TrigonometricEquationFunction> , math_FunctionWithDerivative>(m,"math_TrigonometricEquationFunction",R"#(This is function, which corresponds trigonometric equation a*Cos(x)*Cos(x) + 2*b*Cos(x)*Sin(x) + c*Cos(x) + d*Sin(x) + e = 0 See class math_TrigonometricFunctionRoots)#");

};

// user-defined post-inclusion per module

// user-defined post
