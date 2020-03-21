
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
void register_math(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("math"));


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

// classes


    static_cast<py::class_<PSO_Particle , shared_ptr<PSO_Particle> >>(m.attr("PSO_Particle"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<math , shared_ptr<math>>(m,"math");

    static_cast<py::class_<math , shared_ptr<math> >>(m.attr("math"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GaussPointsMax_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&math::GaussPointsMax),
                    R"#(None)#" )
        .def_static("GaussPoints_s",
                    (void (*)( const Standard_Integer , math_Vector & ) ) static_cast<void (*)( const Standard_Integer , math_Vector & ) >(&math::GaussPoints),
                    R"#(None)#"  , py::arg("Index"),  py::arg("Points"))
        .def_static("GaussWeights_s",
                    (void (*)( const Standard_Integer , math_Vector & ) ) static_cast<void (*)( const Standard_Integer , math_Vector & ) >(&math::GaussWeights),
                    R"#(None)#"  , py::arg("Index"),  py::arg("Weights"))
        .def_static("KronrodPointsMax_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&math::KronrodPointsMax),
                    R"#(Returns the maximal number of points for that the values are stored in the table. If the number is greater then KronrodPointsMax, the points will be computed.)#" )
        .def_static("OrderedGaussPointsAndWeights_s",
                    (Standard_Boolean (*)( const Standard_Integer , math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (*)( const Standard_Integer , math_Vector & , math_Vector & ) >(&math::OrderedGaussPointsAndWeights),
                    R"#(Returns a vector of Gauss points and a vector of their weights. The difference with the method GaussPoints is the following: - the points are returned in increasing order. - if Index is greater then GaussPointsMax, the points are computed. Returns Standard_True if Index is positive, Points' and Weights' length is equal to Index, Points and Weights are successfully computed.)#"  , py::arg("Index"),  py::arg("Points"),  py::arg("Weights"))
        .def_static("KronrodPointsAndWeights_s",
                    (Standard_Boolean (*)( const Standard_Integer , math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (*)( const Standard_Integer , math_Vector & , math_Vector & ) >(&math::KronrodPointsAndWeights),
                    R"#(Returns a vector of Kronrod points and a vector of their weights for Gauss-Kronrod computation method. Index should be odd and greater then or equal to 3, as the number of Kronrod points is equal to 2*N + 1, where N is a number of Gauss points. Points and Weights should have the size equal to Index. Each even element of Points represents a Gauss point value of N-th Gauss quadrature. The values from Index equal to 3 to 123 are stored in a table (see the file math_Kronrod.cxx). If Index is greater, then points and weights will be computed. Returns Standard_True if Index is odd, it is equal to the size of Points and Weights and the computation of Points and Weights is performed successfully. Otherwise this method returns Standard_False.)#"  , py::arg("Index"),  py::arg("Points"),  py::arg("Weights"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_BFGS , shared_ptr<math_BFGS> >>(m.attr("math_BFGS"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("NbVariables"),  py::arg("Tolerance")=static_cast<const Standard_Real>(1.0e-8),  py::arg("NbIterations")=static_cast<const Standard_Integer>(200),  py::arg("ZEPS")=static_cast<const Standard_Real>(1.0e-12) )
    // custom constructors
    // methods
        .def("SetBoundary",
             (void (math_BFGS::*)( const math_Vector & , const math_Vector & ) ) static_cast<void (math_BFGS::*)( const math_Vector & , const math_Vector & ) >(&math_BFGS::SetBoundary),
             R"#(Set boundaries for conditional optimization. The expected indices range of vectors is [1, NbVariables].)#"  , py::arg("theLeftBorder"),  py::arg("theRightBorder"))
        .def("Perform",
             (void (math_BFGS::*)( math_MultipleVarFunctionWithGradient & , const math_Vector & ) ) static_cast<void (math_BFGS::*)( math_MultipleVarFunctionWithGradient & , const math_Vector & ) >(&math_BFGS::Perform),
             R"#(Given the starting point StartingPoint, minimization is done on the function F. The solution F = Fi is found when : 2.0 * abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1) + ZEPS). Tolerance, ZEPS and maximum number of iterations are given in the constructor.)#"  , py::arg("F"),  py::arg("StartingPoint"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_BFGS::*)( math_MultipleVarFunctionWithGradient & ) const) static_cast<Standard_Boolean (math_BFGS::*)( math_MultipleVarFunctionWithGradient & ) const>(&math_BFGS::IsSolutionReached),
             R"#(This method is called at the end of each iteration to check if the solution is found. It can be redefined in a sub-class to implement a specific test to stop the iterations.)#"  , py::arg("F"))
        .def("IsDone",
             (Standard_Boolean (math_BFGS::*)() const) static_cast<Standard_Boolean (math_BFGS::*)() const>(&math_BFGS::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Location",
             (const math_Vector & (math_BFGS::*)() const) static_cast<const math_Vector & (math_BFGS::*)() const>(&math_BFGS::Location),
             R"#(returns the location vector of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Location",
             (void (math_BFGS::*)( math_Vector & ) const) static_cast<void (math_BFGS::*)( math_Vector & ) const>(&math_BFGS::Location),
             R"#(outputs the location vector of the minimum in Loc. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Loc is not equal to the range of the StartingPoint.)#"  , py::arg("Loc"))
        .def("Minimum",
             (Standard_Real (math_BFGS::*)() const) static_cast<Standard_Real (math_BFGS::*)() const>(&math_BFGS::Minimum),
             R"#(returns the value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Gradient",
             (const math_Vector & (math_BFGS::*)() const) static_cast<const math_Vector & (math_BFGS::*)() const>(&math_BFGS::Gradient),
             R"#(Returns the gradient vector at the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Gradient",
             (void (math_BFGS::*)( math_Vector & ) const) static_cast<void (math_BFGS::*)( math_Vector & ) const>(&math_BFGS::Gradient),
             R"#(Returns the value of the gradient vector at the minimum in Grad. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Grad is not equal to the range of the StartingPoint.)#"  , py::arg("Grad"))
        .def("NbIterations",
             (Standard_Integer (math_BFGS::*)() const) static_cast<Standard_Integer (math_BFGS::*)() const>(&math_BFGS::NbIterations),
             R"#(Returns the number of iterations really done in the calculation of the minimum. The exception NotDone is raised if the minimum was not found.)#" )
        .def("Dump",
             (void (math_BFGS::*)( std::ostream & ) const) static_cast<void (math_BFGS::*)( std::ostream & ) const>(&math_BFGS::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_BFGS::*)() const) static_cast<Standard_Boolean (math_BFGS::*)() const>(&math_BFGS::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Location",
             (const math_Vector & (math_BFGS::*)() const) static_cast<const math_Vector & (math_BFGS::*)() const>(&math_BFGS::Location),
             R"#(returns the location vector of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Location",
             (void (math_BFGS::*)( math_Vector & ) const) static_cast<void (math_BFGS::*)( math_Vector & ) const>(&math_BFGS::Location),
             R"#(outputs the location vector of the minimum in Loc. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Loc is not equal to the range of the StartingPoint.)#"  , py::arg("Loc"))
        .def("Minimum",
             (Standard_Real (math_BFGS::*)() const) static_cast<Standard_Real (math_BFGS::*)() const>(&math_BFGS::Minimum),
             R"#(returns the value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Gradient",
             (const math_Vector & (math_BFGS::*)() const) static_cast<const math_Vector & (math_BFGS::*)() const>(&math_BFGS::Gradient),
             R"#(Returns the gradient vector at the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Gradient",
             (void (math_BFGS::*)( math_Vector & ) const) static_cast<void (math_BFGS::*)( math_Vector & ) const>(&math_BFGS::Gradient),
             R"#(Returns the value of the gradient vector at the minimum in Grad. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Grad is not equal to the range of the StartingPoint.)#"  , py::arg("Grad"))
        .def("NbIterations",
             (Standard_Integer (math_BFGS::*)() const) static_cast<Standard_Integer (math_BFGS::*)() const>(&math_BFGS::NbIterations),
             R"#(Returns the number of iterations really done in the calculation of the minimum. The exception NotDone is raised if the minimum was not found.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_BissecNewton , shared_ptr<math_BissecNewton> >>(m.attr("math_BissecNewton"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("theXTolerance") )
    // custom constructors
    // methods
        .def("Perform",
             (void (math_BissecNewton::*)( math_FunctionWithDerivative & , const Standard_Real , const Standard_Real , const Standard_Integer ) ) static_cast<void (math_BissecNewton::*)( math_FunctionWithDerivative & , const Standard_Real , const Standard_Real , const Standard_Integer ) >(&math_BissecNewton::Perform),
             R"#(A combination of Newton-Raphson and bissection methods is done to find the root of the function F between the bounds Bound1 and Bound2 on the function F. The tolerance required on the root is given by TolX. The solution is found when: abs(Xi - Xi-1) <= TolX and F(Xi) * F(Xi-1) <= 0 The maximum number of iterations allowed is given by NbIterations.)#"  , py::arg("F"),  py::arg("Bound1"),  py::arg("Bound2"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100))
        .def("IsSolutionReached",
             (Standard_Boolean (math_BissecNewton::*)( math_FunctionWithDerivative & ) ) static_cast<Standard_Boolean (math_BissecNewton::*)( math_FunctionWithDerivative & ) >(&math_BissecNewton::IsSolutionReached),
             R"#(This method is called at the end of each iteration to check if the solution has been found. It can be redefined in a sub-class to implement a specific test to stop the iterations.)#"  , py::arg("theFunction"))
        .def("IsDone",
             (Standard_Boolean (math_BissecNewton::*)() const) static_cast<Standard_Boolean (math_BissecNewton::*)() const>(&math_BissecNewton::IsDone),
             R"#(Tests is the root has been successfully found.)#" )
        .def("Root",
             (Standard_Real (math_BissecNewton::*)() const) static_cast<Standard_Real (math_BissecNewton::*)() const>(&math_BissecNewton::Root),
             R"#(returns the value of the root. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Derivative",
             (Standard_Real (math_BissecNewton::*)() const) static_cast<Standard_Real (math_BissecNewton::*)() const>(&math_BissecNewton::Derivative),
             R"#(returns the value of the derivative at the root. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Value",
             (Standard_Real (math_BissecNewton::*)() const) static_cast<Standard_Real (math_BissecNewton::*)() const>(&math_BissecNewton::Value),
             R"#(returns the value of the function at the root. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Dump",
             (void (math_BissecNewton::*)( std::ostream & ) const) static_cast<void (math_BissecNewton::*)( std::ostream & ) const>(&math_BissecNewton::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redifine the operator <<.)#"  , py::arg("o"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_BissecNewton::*)( math_FunctionWithDerivative & ) ) static_cast<Standard_Boolean (math_BissecNewton::*)( math_FunctionWithDerivative & ) >(&math_BissecNewton::IsSolutionReached),
             R"#(This method is called at the end of each iteration to check if the solution has been found. It can be redefined in a sub-class to implement a specific test to stop the iterations.)#"  , py::arg(""))
        .def("IsDone",
             (Standard_Boolean (math_BissecNewton::*)() const) static_cast<Standard_Boolean (math_BissecNewton::*)() const>(&math_BissecNewton::IsDone),
             R"#(Tests is the root has been successfully found.)#" )
        .def("Root",
             (Standard_Real (math_BissecNewton::*)() const) static_cast<Standard_Real (math_BissecNewton::*)() const>(&math_BissecNewton::Root),
             R"#(returns the value of the root. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Derivative",
             (Standard_Real (math_BissecNewton::*)() const) static_cast<Standard_Real (math_BissecNewton::*)() const>(&math_BissecNewton::Derivative),
             R"#(returns the value of the derivative at the root. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Value",
             (Standard_Real (math_BissecNewton::*)() const) static_cast<Standard_Real (math_BissecNewton::*)() const>(&math_BissecNewton::Value),
             R"#(returns the value of the function at the root. Exception NotDone is raised if the minimum was not found.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_BracketMinimum , shared_ptr<math_BracketMinimum> >>(m.attr("math_BracketMinimum"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B") )
        .def(py::init< math_Function &,const Standard_Real,const Standard_Real >()  , py::arg("F"),  py::arg("A"),  py::arg("B") )
        .def(py::init< math_Function &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("F"),  py::arg("A"),  py::arg("B"),  py::arg("FA") )
        .def(py::init< math_Function &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("F"),  py::arg("A"),  py::arg("B"),  py::arg("FA"),  py::arg("FB") )
    // custom constructors
    // methods
        .def("SetLimits",
             (void (math_BracketMinimum::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (math_BracketMinimum::*)( const Standard_Real , const Standard_Real ) >(&math_BracketMinimum::SetLimits),
             R"#(Set limits of the parameter. By default no limits are applied to the parameter change. If no minimum is found in limits then IsDone() will return false. The user is in charge of providing A and B to be in limits.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("SetFA",
             (void (math_BracketMinimum::*)( const Standard_Real ) ) static_cast<void (math_BracketMinimum::*)( const Standard_Real ) >(&math_BracketMinimum::SetFA),
             R"#(Set function value at A)#"  , py::arg("theValue"))
        .def("SetFB",
             (void (math_BracketMinimum::*)( const Standard_Real ) ) static_cast<void (math_BracketMinimum::*)( const Standard_Real ) >(&math_BracketMinimum::SetFB),
             R"#(Set function value at B)#"  , py::arg("theValue"))
        .def("Perform",
             (void (math_BracketMinimum::*)( math_Function & ) ) static_cast<void (math_BracketMinimum::*)( math_Function & ) >(&math_BracketMinimum::Perform),
             R"#(The method performing the job. It is called automatically by constructors with the function.)#"  , py::arg("F"))
        .def("IsDone",
             (Standard_Boolean (math_BracketMinimum::*)() const) static_cast<Standard_Boolean (math_BracketMinimum::*)() const>(&math_BracketMinimum::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Dump",
             (void (math_BracketMinimum::*)( std::ostream & ) const) static_cast<void (math_BracketMinimum::*)( std::ostream & ) const>(&math_BracketMinimum::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_BracketMinimum::*)() const) static_cast<Standard_Boolean (math_BracketMinimum::*)() const>(&math_BracketMinimum::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("SetLimits",
             (void (math_BracketMinimum::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (math_BracketMinimum::*)( const Standard_Real , const Standard_Real ) >(&math_BracketMinimum::SetLimits),
             R"#(Set limits of the parameter. By default no limits are applied to the parameter change. If no minimum is found in limits then IsDone() will return false. The user is in charge of providing A and B to be in limits.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("SetFA",
             (void (math_BracketMinimum::*)( const Standard_Real ) ) static_cast<void (math_BracketMinimum::*)( const Standard_Real ) >(&math_BracketMinimum::SetFA),
             R"#(Set function value at A)#"  , py::arg("theValue"))
        .def("SetFB",
             (void (math_BracketMinimum::*)( const Standard_Real ) ) static_cast<void (math_BracketMinimum::*)( const Standard_Real ) >(&math_BracketMinimum::SetFB),
             R"#(Set function value at B)#"  , py::arg("theValue"))
    // methods using call by reference i.s.o. return
        .def("Values",
             []( math_BracketMinimum &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; self.Values(A,B,C); return std::make_tuple(A,B,C); },
             R"#(Returns the bracketed triplet of abscissae. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#" )
        .def("FunctionValues",
             []( math_BracketMinimum &self   ){ Standard_Real  FA; Standard_Real  FB; Standard_Real  FC; self.FunctionValues(FA,FB,FC); return std::make_tuple(FA,FB,FC); },
             R"#(returns the bracketed triplet function values. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_BracketedRoot , shared_ptr<math_BracketedRoot> >>(m.attr("math_BracketedRoot"))
    // constructors
        .def(py::init< math_Function &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("F"),  py::arg("Bound1"),  py::arg("Bound2"),  py::arg("Tolerance"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100),  py::arg("ZEPS")=static_cast<const Standard_Real>(1.0e-12) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_BracketedRoot::*)() const) static_cast<Standard_Boolean (math_BracketedRoot::*)() const>(&math_BracketedRoot::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Root",
             (Standard_Real (math_BracketedRoot::*)() const) static_cast<Standard_Real (math_BracketedRoot::*)() const>(&math_BracketedRoot::Root),
             R"#(returns the value of the root. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Value",
             (Standard_Real (math_BracketedRoot::*)() const) static_cast<Standard_Real (math_BracketedRoot::*)() const>(&math_BracketedRoot::Value),
             R"#(returns the value of the function at the root. Exception NotDone is raised if the minimum was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_BracketedRoot::*)() const) static_cast<Standard_Integer (math_BracketedRoot::*)() const>(&math_BracketedRoot::NbIterations),
             R"#(returns the number of iterations really done during the computation of the Root. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Dump",
             (void (math_BracketedRoot::*)( std::ostream & ) const) static_cast<void (math_BracketedRoot::*)( std::ostream & ) const>(&math_BracketedRoot::Dump),
             R"#(Prints on the stream o information on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_BracketedRoot::*)() const) static_cast<Standard_Boolean (math_BracketedRoot::*)() const>(&math_BracketedRoot::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Root",
             (Standard_Real (math_BracketedRoot::*)() const) static_cast<Standard_Real (math_BracketedRoot::*)() const>(&math_BracketedRoot::Root),
             R"#(returns the value of the root. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Value",
             (Standard_Real (math_BracketedRoot::*)() const) static_cast<Standard_Real (math_BracketedRoot::*)() const>(&math_BracketedRoot::Value),
             R"#(returns the value of the function at the root. Exception NotDone is raised if the minimum was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_BracketedRoot::*)() const) static_cast<Standard_Integer (math_BracketedRoot::*)() const>(&math_BracketedRoot::NbIterations),
             R"#(returns the number of iterations really done during the computation of the Root. Exception NotDone is raised if the minimum was not found.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_BrentMinimum , shared_ptr<math_BrentMinimum> >>(m.attr("math_BrentMinimum"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("TolX"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100),  py::arg("ZEPS")=static_cast<const Standard_Real>(1.0e-12) )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("TolX"),  py::arg("Fbx"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100),  py::arg("ZEPS")=static_cast<const Standard_Real>(1.0e-12) )
    // custom constructors
    // methods
        .def("Perform",
             (void (math_BrentMinimum::*)( math_Function & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (math_BrentMinimum::*)( math_Function & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&math_BrentMinimum::Perform),
             R"#(Brent minimization is performed on function F from a given bracketing triplet of abscissas Ax, Bx, Cx (such that Bx is between Ax and Cx, F(Bx) is less than both F(Bx) and F(Cx)) The solution is found when: abs(Xi - Xi-1) <= TolX * abs(Xi) + ZEPS;)#"  , py::arg("F"),  py::arg("Ax"),  py::arg("Bx"),  py::arg("Cx"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_BrentMinimum::*)( math_Function & ) ) static_cast<Standard_Boolean (math_BrentMinimum::*)( math_Function & ) >(&math_BrentMinimum::IsSolutionReached),
             R"#(This method is called at the end of each iteration to check if the solution is found. It can be redefined in a sub-class to implement a specific test to stop the iterations.)#"  , py::arg("theFunction"))
        .def("IsDone",
             (Standard_Boolean (math_BrentMinimum::*)() const) static_cast<Standard_Boolean (math_BrentMinimum::*)() const>(&math_BrentMinimum::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Location",
             (Standard_Real (math_BrentMinimum::*)() const) static_cast<Standard_Real (math_BrentMinimum::*)() const>(&math_BrentMinimum::Location),
             R"#(returns the location value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Minimum",
             (Standard_Real (math_BrentMinimum::*)() const) static_cast<Standard_Real (math_BrentMinimum::*)() const>(&math_BrentMinimum::Minimum),
             R"#(returns the value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_BrentMinimum::*)() const) static_cast<Standard_Integer (math_BrentMinimum::*)() const>(&math_BrentMinimum::NbIterations),
             R"#(returns the number of iterations really done during the computation of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Dump",
             (void (math_BrentMinimum::*)( std::ostream & ) const) static_cast<void (math_BrentMinimum::*)( std::ostream & ) const>(&math_BrentMinimum::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_BrentMinimum::*)( math_Function & ) ) static_cast<Standard_Boolean (math_BrentMinimum::*)( math_Function & ) >(&math_BrentMinimum::IsSolutionReached),
             R"#(This method is called at the end of each iteration to check if the solution is found. It can be redefined in a sub-class to implement a specific test to stop the iterations.)#"  , py::arg(""))
        .def("IsDone",
             (Standard_Boolean (math_BrentMinimum::*)() const) static_cast<Standard_Boolean (math_BrentMinimum::*)() const>(&math_BrentMinimum::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Location",
             (Standard_Real (math_BrentMinimum::*)() const) static_cast<Standard_Real (math_BrentMinimum::*)() const>(&math_BrentMinimum::Location),
             R"#(returns the location value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Minimum",
             (Standard_Real (math_BrentMinimum::*)() const) static_cast<Standard_Real (math_BrentMinimum::*)() const>(&math_BrentMinimum::Minimum),
             R"#(returns the value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_BrentMinimum::*)() const) static_cast<Standard_Integer (math_BrentMinimum::*)() const>(&math_BrentMinimum::NbIterations),
             R"#(returns the number of iterations really done during the computation of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_BullardGenerator , shared_ptr<math_BullardGenerator> >>(m.attr("math_BullardGenerator"))
    // constructors
        .def(py::init< unsigned int >()  , py::arg("theSeed")=static_cast<unsigned int>(1) )
    // custom constructors
    // methods
        .def("SetSeed",
             (void (math_BullardGenerator::*)( unsigned int ) ) static_cast<void (math_BullardGenerator::*)( unsigned int ) >(&math_BullardGenerator::SetSeed),
             R"#(Setup new seed / reset defaults.)#"  , py::arg("theSeed")=static_cast<unsigned int>(1))
        .def("NextInt",
             (unsigned int (math_BullardGenerator::*)() ) static_cast<unsigned int (math_BullardGenerator::*)() >(&math_BullardGenerator::NextInt),
             R"#(Generates new 64-bit integer value.)#" )
        .def("NextReal",
             (Standard_Real (math_BullardGenerator::*)() ) static_cast<Standard_Real (math_BullardGenerator::*)() >(&math_BullardGenerator::NextReal),
             R"#(Generates new floating-point value.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_ComputeGaussPointsAndWeights , shared_ptr<math_ComputeGaussPointsAndWeights> >>(m.attr("math_ComputeGaussPointsAndWeights"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("Number") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_ComputeGaussPointsAndWeights::*)() const) static_cast<Standard_Boolean (math_ComputeGaussPointsAndWeights::*)() const>(&math_ComputeGaussPointsAndWeights::IsDone),
             R"#(None)#" )
        .def("Points",
             (math_Vector (math_ComputeGaussPointsAndWeights::*)() const) static_cast<math_Vector (math_ComputeGaussPointsAndWeights::*)() const>(&math_ComputeGaussPointsAndWeights::Points),
             R"#(None)#" )
        .def("Weights",
             (math_Vector (math_ComputeGaussPointsAndWeights::*)() const) static_cast<math_Vector (math_ComputeGaussPointsAndWeights::*)() const>(&math_ComputeGaussPointsAndWeights::Weights),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_ComputeKronrodPointsAndWeights , shared_ptr<math_ComputeKronrodPointsAndWeights> >>(m.attr("math_ComputeKronrodPointsAndWeights"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("Number") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_ComputeKronrodPointsAndWeights::*)() const) static_cast<Standard_Boolean (math_ComputeKronrodPointsAndWeights::*)() const>(&math_ComputeKronrodPointsAndWeights::IsDone),
             R"#(None)#" )
        .def("Points",
             (math_Vector (math_ComputeKronrodPointsAndWeights::*)() const) static_cast<math_Vector (math_ComputeKronrodPointsAndWeights::*)() const>(&math_ComputeKronrodPointsAndWeights::Points),
             R"#(None)#" )
        .def("Weights",
             (math_Vector (math_ComputeKronrodPointsAndWeights::*)() const) static_cast<math_Vector (math_ComputeKronrodPointsAndWeights::*)() const>(&math_ComputeKronrodPointsAndWeights::Weights),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_Crout , shared_ptr<math_Crout> >>(m.attr("math_Crout"))
    // constructors
        .def(py::init< const math_Matrix &,const Standard_Real >()  , py::arg("A"),  py::arg("MinPivot")=static_cast<const Standard_Real>(1.0e-20) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_Crout::*)() const) static_cast<Standard_Boolean (math_Crout::*)() const>(&math_Crout::IsDone),
             R"#(Returns True if all has been correctly done.)#" )
        .def("Solve",
             (void (math_Crout::*)( const math_Vector & , math_Vector & ) const) static_cast<void (math_Crout::*)( const math_Vector & , math_Vector & ) const>(&math_Crout::Solve),
             R"#(Given an input vector <B>, this routine returns the solution of the set of linear equations A . X = B. Exception NotDone is raised if the decomposition was not done successfully. Exception DimensionError is raised if the range of B is not equal to the rowrange of A.)#"  , py::arg("B"),  py::arg("X"))
        .def("Inverse",
             (const math_Matrix & (math_Crout::*)() const) static_cast<const math_Matrix & (math_Crout::*)() const>(&math_Crout::Inverse),
             R"#(returns the inverse matrix of A. Only the inferior triangle is returned. Exception NotDone is raised if NotDone.)#" )
        .def("Invert",
             (void (math_Crout::*)( math_Matrix & ) const) static_cast<void (math_Crout::*)( math_Matrix & ) const>(&math_Crout::Invert),
             R"#(returns in Inv the inverse matrix of A. Only the inferior triangle is returned. Exception NotDone is raised if NotDone.)#"  , py::arg("Inv"))
        .def("Determinant",
             (Standard_Real (math_Crout::*)() const) static_cast<Standard_Real (math_Crout::*)() const>(&math_Crout::Determinant),
             R"#(Returns the value of the determinant of the previously LU decomposed matrix A. Zero is returned if the matrix A is considered as singular. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#" )
        .def("Dump",
             (void (math_Crout::*)( std::ostream & ) const) static_cast<void (math_Crout::*)( std::ostream & ) const>(&math_Crout::Dump),
             R"#(Prints on the stream o information on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_Crout::*)() const) static_cast<Standard_Boolean (math_Crout::*)() const>(&math_Crout::IsDone),
             R"#(Returns True if all has been correctly done.)#" )
        .def("Determinant",
             (Standard_Real (math_Crout::*)() const) static_cast<Standard_Real (math_Crout::*)() const>(&math_Crout::Determinant),
             R"#(Returns the value of the determinant of the previously LU decomposed matrix A. Zero is returned if the matrix A is considered as singular. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#" )
        .def("Inverse",
             (const math_Matrix & (math_Crout::*)() const) static_cast<const math_Matrix & (math_Crout::*)() const>(&math_Crout::Inverse),
             R"#(returns the inverse matrix of A. Only the inferior triangle is returned. Exception NotDone is raised if NotDone.)#" )
        .def("Invert",
             (void (math_Crout::*)( math_Matrix & ) const) static_cast<void (math_Crout::*)( math_Matrix & ) const>(&math_Crout::Invert),
             R"#(returns in Inv the inverse matrix of A. Only the inferior triangle is returned. Exception NotDone is raised if NotDone.)#"  , py::arg("Inv"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_DirectPolynomialRoots , shared_ptr<math_DirectPolynomialRoots> >>(m.attr("math_DirectPolynomialRoots"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"),  py::arg("E") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C") )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_DirectPolynomialRoots::*)() const) static_cast<Standard_Boolean (math_DirectPolynomialRoots::*)() const>(&math_DirectPolynomialRoots::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("InfiniteRoots",
             (Standard_Boolean (math_DirectPolynomialRoots::*)() const) static_cast<Standard_Boolean (math_DirectPolynomialRoots::*)() const>(&math_DirectPolynomialRoots::InfiniteRoots),
             R"#(Returns true if there is an infinity of roots, otherwise returns false.)#" )
        .def("NbSolutions",
             (Standard_Integer (math_DirectPolynomialRoots::*)() const) static_cast<Standard_Integer (math_DirectPolynomialRoots::*)() const>(&math_DirectPolynomialRoots::NbSolutions),
             R"#(returns the number of solutions. An exception is raised if there are an infinity of roots.)#" )
        .def("Value",
             (Standard_Real (math_DirectPolynomialRoots::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_DirectPolynomialRoots::*)( const Standard_Integer ) const>(&math_DirectPolynomialRoots::Value),
             R"#(returns the value of the Nieme root. An exception is raised if there are an infinity of roots. Exception RangeError is raised if Nieme is < 1 or Nieme > NbSolutions.)#"  , py::arg("Nieme"))
        .def("Dump",
             (void (math_DirectPolynomialRoots::*)( std::ostream & ) const) static_cast<void (math_DirectPolynomialRoots::*)( std::ostream & ) const>(&math_DirectPolynomialRoots::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_DirectPolynomialRoots::*)() const) static_cast<Standard_Boolean (math_DirectPolynomialRoots::*)() const>(&math_DirectPolynomialRoots::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("InfiniteRoots",
             (Standard_Boolean (math_DirectPolynomialRoots::*)() const) static_cast<Standard_Boolean (math_DirectPolynomialRoots::*)() const>(&math_DirectPolynomialRoots::InfiniteRoots),
             R"#(Returns true if there is an infinity of roots, otherwise returns false.)#" )
        .def("NbSolutions",
             (Standard_Integer (math_DirectPolynomialRoots::*)() const) static_cast<Standard_Integer (math_DirectPolynomialRoots::*)() const>(&math_DirectPolynomialRoots::NbSolutions),
             R"#(returns the number of solutions. An exception is raised if there are an infinity of roots.)#" )
        .def("Value",
             (Standard_Real (math_DirectPolynomialRoots::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_DirectPolynomialRoots::*)( const Standard_Integer ) const>(&math_DirectPolynomialRoots::Value),
             R"#(returns the value of the Nieme root. An exception is raised if there are an infinity of roots. Exception RangeError is raised if Nieme is < 1 or Nieme > NbSolutions.)#"  , py::arg("Nieme"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_DoubleTab , shared_ptr<math_DoubleTab> >>(m.attr("math_DoubleTab"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("LowerRow"),  py::arg("UpperRow"),  py::arg("LowerCol"),  py::arg("UpperCol") )
        .def(py::init< const Standard_Address,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("Tab"),  py::arg("LowerRow"),  py::arg("UpperRow"),  py::arg("LowerCol"),  py::arg("UpperCol") )
        .def(py::init< const math_DoubleTab & >()  , py::arg("Other") )
    // custom constructors
    // methods
        .def("Init",
             (void (math_DoubleTab::*)( const Standard_Real ) ) static_cast<void (math_DoubleTab::*)( const Standard_Real ) >(&math_DoubleTab::Init),
             R"#(None)#"  , py::arg("InitValue"))
        .def("Copy",
             (void (math_DoubleTab::*)( math_DoubleTab & ) const) static_cast<void (math_DoubleTab::*)( math_DoubleTab & ) const>(&math_DoubleTab::Copy),
             R"#(None)#"  , py::arg("Other"))
        .def("SetLowerRow",
             (void (math_DoubleTab::*)( const Standard_Integer ) ) static_cast<void (math_DoubleTab::*)( const Standard_Integer ) >(&math_DoubleTab::SetLowerRow),
             R"#(None)#"  , py::arg("LowerRow"))
        .def("SetLowerCol",
             (void (math_DoubleTab::*)( const Standard_Integer ) ) static_cast<void (math_DoubleTab::*)( const Standard_Integer ) >(&math_DoubleTab::SetLowerCol),
             R"#(None)#"  , py::arg("LowerCol"))
        .def("Value",
             (Standard_Real & (math_DoubleTab::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real & (math_DoubleTab::*)( const Standard_Integer , const Standard_Integer ) const>(&math_DoubleTab::Value),
             R"#(None)#"  , py::arg("RowIndex"),  py::arg("ColIndex"))
        .def("Free",
             (void (math_DoubleTab::*)() ) static_cast<void (math_DoubleTab::*)() >(&math_DoubleTab::Free),
             R"#(None)#" )
        .def("Value",
             (Standard_Real & (math_DoubleTab::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real & (math_DoubleTab::*)( const Standard_Integer , const Standard_Integer ) const>(&math_DoubleTab::Value),
             R"#(None)#"  , py::arg("RowIndex"),  py::arg("ColIndex"))
        .def("Copy",
             (void (math_DoubleTab::*)( math_DoubleTab & ) const) static_cast<void (math_DoubleTab::*)( math_DoubleTab & ) const>(&math_DoubleTab::Copy),
             R"#(None)#"  , py::arg("Other"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_EigenValuesSearcher , shared_ptr<math_EigenValuesSearcher> >>(m.attr("math_EigenValuesSearcher"))
    // constructors
        .def(py::init<  const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("Diagonal"),  py::arg("Subdiagonal") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_EigenValuesSearcher::*)() const) static_cast<Standard_Boolean (math_EigenValuesSearcher::*)() const>(&math_EigenValuesSearcher::IsDone),
             R"#(Returns Standard_True if computation is performed successfully.)#" )
        .def("Dimension",
             (Standard_Integer (math_EigenValuesSearcher::*)() const) static_cast<Standard_Integer (math_EigenValuesSearcher::*)() const>(&math_EigenValuesSearcher::Dimension),
             R"#(Returns the dimension of matrix)#" )
        .def("EigenValue",
             (Standard_Real (math_EigenValuesSearcher::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_EigenValuesSearcher::*)( const Standard_Integer ) const>(&math_EigenValuesSearcher::EigenValue),
             R"#(Returns the Index_th eigen value of matrix Index must be in [1, Dimension()])#"  , py::arg("Index"))
        .def("EigenVector",
             (math_Vector (math_EigenValuesSearcher::*)( const Standard_Integer ) const) static_cast<math_Vector (math_EigenValuesSearcher::*)( const Standard_Integer ) const>(&math_EigenValuesSearcher::EigenVector),
             R"#(Returns the Index_th eigen vector of matrix Index must be in [1, Dimension()])#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_FRPR , shared_ptr<math_FRPR> >>(m.attr("math_FRPR"))
    // constructors
        .def(py::init< const math_MultipleVarFunctionWithGradient &,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("theFunction"),  py::arg("theTolerance"),  py::arg("theNbIterations")=static_cast<const Standard_Integer>(200),  py::arg("theZEPS")=static_cast<const Standard_Real>(1.0e-12) )
    // custom constructors
    // methods
        .def("Perform",
             (void (math_FRPR::*)( math_MultipleVarFunctionWithGradient & , const math_Vector & ) ) static_cast<void (math_FRPR::*)( math_MultipleVarFunctionWithGradient & , const math_Vector & ) >(&math_FRPR::Perform),
             R"#(The solution F = Fi is found when 2.0 * abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1) + ZEPS).)#"  , py::arg("theFunction"),  py::arg("theStartingPoint"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_FRPR::*)( math_MultipleVarFunctionWithGradient & ) ) static_cast<Standard_Boolean (math_FRPR::*)( math_MultipleVarFunctionWithGradient & ) >(&math_FRPR::IsSolutionReached),
             R"#(The solution F = Fi is found when: 2.0 * abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1)) + ZEPS. The maximum number of iterations allowed is given by NbIterations.)#"  , py::arg("theFunction"))
        .def("IsDone",
             (Standard_Boolean (math_FRPR::*)() const) static_cast<Standard_Boolean (math_FRPR::*)() const>(&math_FRPR::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Location",
             (const math_Vector & (math_FRPR::*)() const) static_cast<const math_Vector & (math_FRPR::*)() const>(&math_FRPR::Location),
             R"#(returns the location vector of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Location",
             (void (math_FRPR::*)( math_Vector & ) const) static_cast<void (math_FRPR::*)( math_Vector & ) const>(&math_FRPR::Location),
             R"#(outputs the location vector of the minimum in Loc. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Loc is not equal to the range of the StartingPoint.)#"  , py::arg("Loc"))
        .def("Minimum",
             (Standard_Real (math_FRPR::*)() const) static_cast<Standard_Real (math_FRPR::*)() const>(&math_FRPR::Minimum),
             R"#(returns the value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Gradient",
             (const math_Vector & (math_FRPR::*)() const) static_cast<const math_Vector & (math_FRPR::*)() const>(&math_FRPR::Gradient),
             R"#(returns the gradient vector at the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Gradient",
             (void (math_FRPR::*)( math_Vector & ) const) static_cast<void (math_FRPR::*)( math_Vector & ) const>(&math_FRPR::Gradient),
             R"#(outputs the gradient vector at the minimum in Grad. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Grad is not equal to the range of the StartingPoint.)#"  , py::arg("Grad"))
        .def("NbIterations",
             (Standard_Integer (math_FRPR::*)() const) static_cast<Standard_Integer (math_FRPR::*)() const>(&math_FRPR::NbIterations),
             R"#(returns the number of iterations really done during the computation of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Dump",
             (void (math_FRPR::*)( std::ostream & ) const) static_cast<void (math_FRPR::*)( std::ostream & ) const>(&math_FRPR::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_FRPR::*)( math_MultipleVarFunctionWithGradient & ) ) static_cast<Standard_Boolean (math_FRPR::*)( math_MultipleVarFunctionWithGradient & ) >(&math_FRPR::IsSolutionReached),
             R"#(The solution F = Fi is found when: 2.0 * abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1)) + ZEPS. The maximum number of iterations allowed is given by NbIterations.)#"  , py::arg(""))
        .def("IsDone",
             (Standard_Boolean (math_FRPR::*)() const) static_cast<Standard_Boolean (math_FRPR::*)() const>(&math_FRPR::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Location",
             (const math_Vector & (math_FRPR::*)() const) static_cast<const math_Vector & (math_FRPR::*)() const>(&math_FRPR::Location),
             R"#(returns the location vector of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Location",
             (void (math_FRPR::*)( math_Vector & ) const) static_cast<void (math_FRPR::*)( math_Vector & ) const>(&math_FRPR::Location),
             R"#(outputs the location vector of the minimum in Loc. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Loc is not equal to the range of the StartingPoint.)#"  , py::arg("Loc"))
        .def("Gradient",
             (const math_Vector & (math_FRPR::*)() const) static_cast<const math_Vector & (math_FRPR::*)() const>(&math_FRPR::Gradient),
             R"#(returns the gradient vector at the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Gradient",
             (void (math_FRPR::*)( math_Vector & ) const) static_cast<void (math_FRPR::*)( math_Vector & ) const>(&math_FRPR::Gradient),
             R"#(outputs the gradient vector at the minimum in Grad. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Grad is not equal to the range of the StartingPoint.)#"  , py::arg("Grad"))
        .def("Minimum",
             (Standard_Real (math_FRPR::*)() const) static_cast<Standard_Real (math_FRPR::*)() const>(&math_FRPR::Minimum),
             R"#(returns the value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_FRPR::*)() const) static_cast<Standard_Integer (math_FRPR::*)() const>(&math_FRPR::NbIterations),
             R"#(returns the number of iterations really done during the computation of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_Function , shared_ptr<math_Function>,Py_math_Function >>(m.attr("math_Function"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (math_Function::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (math_Function::*)( const Standard_Real , Standard_Real & ) >(&math_Function::Value),
             R"#(Computes the value of the function <F> for a given value of variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("GetStateNumber",
             (Standard_Integer (math_Function::*)() ) static_cast<Standard_Integer (math_Function::*)() >(&math_Function::GetStateNumber),
             R"#(returns the state of the function corresponding to the latest call of any methods associated with the function. This function is called by each of the algorithms described later which defined the function Integer Algorithm::StateNumber(). The algorithm has the responsibility to call this function when it has found a solution (i.e. a root or a minimum) and has to maintain the association between the solution found and this StateNumber. Byu default, this method returns 0 (which means for the algorithm: no state has been saved). It is the responsibility of the programmer to decide if he needs to save the current state of the function and to return an Integer that allows retrieval of the state.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_FunctionAllRoots , shared_ptr<math_FunctionAllRoots> >>(m.attr("math_FunctionAllRoots"))
    // constructors
        .def(py::init< math_FunctionWithDerivative &,const math_FunctionSample &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("F"),  py::arg("S"),  py::arg("EpsX"),  py::arg("EpsF"),  py::arg("EpsNul") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_FunctionAllRoots::*)() const) static_cast<Standard_Boolean (math_FunctionAllRoots::*)() const>(&math_FunctionAllRoots::IsDone),
             R"#(Returns True if the computation has been done successfully.)#" )
        .def("NbIntervals",
             (Standard_Integer (math_FunctionAllRoots::*)() const) static_cast<Standard_Integer (math_FunctionAllRoots::*)() const>(&math_FunctionAllRoots::NbIntervals),
             R"#(Returns the number of intervals on which the function is Null. An exception is raised if IsDone returns False.)#" )
        .def("NbPoints",
             (Standard_Integer (math_FunctionAllRoots::*)() const) static_cast<Standard_Integer (math_FunctionAllRoots::*)() const>(&math_FunctionAllRoots::NbPoints),
             R"#(returns the number of points where the function is Null. An exception is raised if IsDone returns False.)#" )
        .def("GetPoint",
             (Standard_Real (math_FunctionAllRoots::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_FunctionAllRoots::*)( const Standard_Integer ) const>(&math_FunctionAllRoots::GetPoint),
             R"#(Returns the parameter of the point of range Index. An exception is raised if IsDone returns False; An exception is raised if Index<=0 or Index >NbPoints.)#"  , py::arg("Index"))
        .def("GetPointState",
             (Standard_Integer (math_FunctionAllRoots::*)( const Standard_Integer ) const) static_cast<Standard_Integer (math_FunctionAllRoots::*)( const Standard_Integer ) const>(&math_FunctionAllRoots::GetPointState),
             R"#(returns the State Number associated to the point Index. An exception is raised if IsDone returns False; An exception is raised if Index<=0 or Index >Nbintervals.)#"  , py::arg("Index"))
        .def("Dump",
             (void (math_FunctionAllRoots::*)( std::ostream & ) const) static_cast<void (math_FunctionAllRoots::*)( std::ostream & ) const>(&math_FunctionAllRoots::Dump),
             R"#(Prints on the stream o information on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_FunctionAllRoots::*)() const) static_cast<Standard_Boolean (math_FunctionAllRoots::*)() const>(&math_FunctionAllRoots::IsDone),
             R"#(Returns True if the computation has been done successfully.)#" )
        .def("NbIntervals",
             (Standard_Integer (math_FunctionAllRoots::*)() const) static_cast<Standard_Integer (math_FunctionAllRoots::*)() const>(&math_FunctionAllRoots::NbIntervals),
             R"#(Returns the number of intervals on which the function is Null. An exception is raised if IsDone returns False.)#" )
        .def("NbPoints",
             (Standard_Integer (math_FunctionAllRoots::*)() const) static_cast<Standard_Integer (math_FunctionAllRoots::*)() const>(&math_FunctionAllRoots::NbPoints),
             R"#(returns the number of points where the function is Null. An exception is raised if IsDone returns False.)#" )
        .def("GetPoint",
             (Standard_Real (math_FunctionAllRoots::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_FunctionAllRoots::*)( const Standard_Integer ) const>(&math_FunctionAllRoots::GetPoint),
             R"#(Returns the parameter of the point of range Index. An exception is raised if IsDone returns False; An exception is raised if Index<=0 or Index >NbPoints.)#"  , py::arg("Index"))
        .def("GetPointState",
             (Standard_Integer (math_FunctionAllRoots::*)( const Standard_Integer ) const) static_cast<Standard_Integer (math_FunctionAllRoots::*)( const Standard_Integer ) const>(&math_FunctionAllRoots::GetPointState),
             R"#(returns the State Number associated to the point Index. An exception is raised if IsDone returns False; An exception is raised if Index<=0 or Index >Nbintervals.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("GetInterval",
             []( math_FunctionAllRoots &self , const Standard_Integer Index ){ Standard_Real  A; Standard_Real  B; self.GetInterval(Index,A,B); return std::make_tuple(A,B); },
             R"#(Returns the interval of parameter of range Index. An exception is raised if IsDone returns False; An exception is raised if Index<=0 or Index >Nbintervals.)#"  , py::arg("Index"))
        .def("GetIntervalState",
             []( math_FunctionAllRoots &self , const Standard_Integer Index ){ Standard_Integer  IFirst; Standard_Integer  ILast; self.GetIntervalState(Index,IFirst,ILast); return std::make_tuple(IFirst,ILast); },
             R"#(returns the State Number associated to the interval Index. An exception is raised if IsDone returns False; An exception is raised if Index<=0 or Index >Nbintervals.)#"  , py::arg("Index"))
        .def("GetInterval",
             []( math_FunctionAllRoots &self , const Standard_Integer Index ){ Standard_Real  A; Standard_Real  B; self.GetInterval(Index,A,B); return std::make_tuple(A,B); },
             R"#(Returns the interval of parameter of range Index. An exception is raised if IsDone returns False; An exception is raised if Index<=0 or Index >Nbintervals.)#"  , py::arg("Index"))
        .def("GetIntervalState",
             []( math_FunctionAllRoots &self , const Standard_Integer Index ){ Standard_Integer  IFirst; Standard_Integer  ILast; self.GetIntervalState(Index,IFirst,ILast); return std::make_tuple(IFirst,ILast); },
             R"#(returns the State Number associated to the interval Index. An exception is raised if IsDone returns False; An exception is raised if Index<=0 or Index >Nbintervals.)#"  , py::arg("Index"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_FunctionRoot , shared_ptr<math_FunctionRoot> >>(m.attr("math_FunctionRoot"))
    // constructors
        .def(py::init< math_FunctionWithDerivative &,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("Guess"),  py::arg("Tolerance"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100) )
        .def(py::init< math_FunctionWithDerivative &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("Guess"),  py::arg("Tolerance"),  py::arg("A"),  py::arg("B"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_FunctionRoot::*)() const) static_cast<Standard_Boolean (math_FunctionRoot::*)() const>(&math_FunctionRoot::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Root",
             (Standard_Real (math_FunctionRoot::*)() const) static_cast<Standard_Real (math_FunctionRoot::*)() const>(&math_FunctionRoot::Root),
             R"#(returns the value of the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Derivative",
             (Standard_Real (math_FunctionRoot::*)() const) static_cast<Standard_Real (math_FunctionRoot::*)() const>(&math_FunctionRoot::Derivative),
             R"#(returns the value of the derivative at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Value",
             (Standard_Real (math_FunctionRoot::*)() const) static_cast<Standard_Real (math_FunctionRoot::*)() const>(&math_FunctionRoot::Value),
             R"#(returns the value of the function at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_FunctionRoot::*)() const) static_cast<Standard_Integer (math_FunctionRoot::*)() const>(&math_FunctionRoot::NbIterations),
             R"#(returns the number of iterations really done on the computation of the Root. Exception NotDone is raised if the root was not found.)#" )
        .def("Dump",
             (void (math_FunctionRoot::*)( std::ostream & ) const) static_cast<void (math_FunctionRoot::*)( std::ostream & ) const>(&math_FunctionRoot::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_FunctionRoot::*)() const) static_cast<Standard_Boolean (math_FunctionRoot::*)() const>(&math_FunctionRoot::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Root",
             (Standard_Real (math_FunctionRoot::*)() const) static_cast<Standard_Real (math_FunctionRoot::*)() const>(&math_FunctionRoot::Root),
             R"#(returns the value of the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Derivative",
             (Standard_Real (math_FunctionRoot::*)() const) static_cast<Standard_Real (math_FunctionRoot::*)() const>(&math_FunctionRoot::Derivative),
             R"#(returns the value of the derivative at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Value",
             (Standard_Real (math_FunctionRoot::*)() const) static_cast<Standard_Real (math_FunctionRoot::*)() const>(&math_FunctionRoot::Value),
             R"#(returns the value of the function at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_FunctionRoot::*)() const) static_cast<Standard_Integer (math_FunctionRoot::*)() const>(&math_FunctionRoot::NbIterations),
             R"#(returns the number of iterations really done on the computation of the Root. Exception NotDone is raised if the root was not found.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_FunctionRoots , shared_ptr<math_FunctionRoots> >>(m.attr("math_FunctionRoots"))
    // constructors
        .def(py::init< math_FunctionWithDerivative &,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("F"),  py::arg("A"),  py::arg("B"),  py::arg("NbSample"),  py::arg("EpsX")=static_cast<const Standard_Real>(0.0),  py::arg("EpsF")=static_cast<const Standard_Real>(0.0),  py::arg("EpsNull")=static_cast<const Standard_Real>(0.0),  py::arg("K")=static_cast<const Standard_Real>(0.0) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_FunctionRoots::*)() const) static_cast<Standard_Boolean (math_FunctionRoots::*)() const>(&math_FunctionRoots::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("IsAllNull",
             (Standard_Boolean (math_FunctionRoots::*)() const) static_cast<Standard_Boolean (math_FunctionRoots::*)() const>(&math_FunctionRoots::IsAllNull),
             R"#(returns true if the function is considered as null between A and B. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#" )
        .def("NbSolutions",
             (Standard_Integer (math_FunctionRoots::*)() const) static_cast<Standard_Integer (math_FunctionRoots::*)() const>(&math_FunctionRoots::NbSolutions),
             R"#(Returns the number of solutions found. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#" )
        .def("Value",
             (Standard_Real (math_FunctionRoots::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_FunctionRoots::*)( const Standard_Integer ) const>(&math_FunctionRoots::Value),
             R"#(Returns the Nth value of the root of function F. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#"  , py::arg("Nieme"))
        .def("StateNumber",
             (Standard_Integer (math_FunctionRoots::*)( const Standard_Integer ) const) static_cast<Standard_Integer (math_FunctionRoots::*)( const Standard_Integer ) const>(&math_FunctionRoots::StateNumber),
             R"#(returns the StateNumber of the Nieme root. Exception RangeError is raised if Nieme is < 1 or Nieme > NbSolutions.)#"  , py::arg("Nieme"))
        .def("Dump",
             (void (math_FunctionRoots::*)( std::ostream & ) const) static_cast<void (math_FunctionRoots::*)( std::ostream & ) const>(&math_FunctionRoots::Dump),
             R"#(Prints on the stream o information on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_FunctionRoots::*)() const) static_cast<Standard_Boolean (math_FunctionRoots::*)() const>(&math_FunctionRoots::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("IsAllNull",
             (Standard_Boolean (math_FunctionRoots::*)() const) static_cast<Standard_Boolean (math_FunctionRoots::*)() const>(&math_FunctionRoots::IsAllNull),
             R"#(returns true if the function is considered as null between A and B. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#" )
        .def("NbSolutions",
             (Standard_Integer (math_FunctionRoots::*)() const) static_cast<Standard_Integer (math_FunctionRoots::*)() const>(&math_FunctionRoots::NbSolutions),
             R"#(Returns the number of solutions found. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#" )
        .def("Value",
             (Standard_Real (math_FunctionRoots::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_FunctionRoots::*)( const Standard_Integer ) const>(&math_FunctionRoots::Value),
             R"#(Returns the Nth value of the root of function F. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#"  , py::arg("Nieme"))
        .def("StateNumber",
             (Standard_Integer (math_FunctionRoots::*)( const Standard_Integer ) const) static_cast<Standard_Integer (math_FunctionRoots::*)( const Standard_Integer ) const>(&math_FunctionRoots::StateNumber),
             R"#(returns the StateNumber of the Nieme root. Exception RangeError is raised if Nieme is < 1 or Nieme > NbSolutions.)#"  , py::arg("Nieme"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_FunctionSample , shared_ptr<math_FunctionSample> >>(m.attr("math_FunctionSample"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("A"),  py::arg("B"),  py::arg("N") )
    // custom constructors
    // methods
        .def("NbPoints",
             (Standard_Integer (math_FunctionSample::*)() const) static_cast<Standard_Integer (math_FunctionSample::*)() const>(&math_FunctionSample::NbPoints),
             R"#(Returns the number of sample points.)#" )
        .def("GetParameter",
             (Standard_Real (math_FunctionSample::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_FunctionSample::*)( const Standard_Integer ) const>(&math_FunctionSample::GetParameter),
             R"#(Returns the value of parameter of the point of range Index : A + ((Index-1)/(NbPoints-1))*B. An exception is raised if Index<=0 or Index>NbPoints.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( math_FunctionSample &self   ){ Standard_Real  A; Standard_Real  B; self.Bounds(A,B); return std::make_tuple(A,B); },
             R"#(Returns the bounds of parameters.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_FunctionSet , shared_ptr<math_FunctionSet>,Py_math_FunctionSet >>(m.attr("math_FunctionSet"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (math_FunctionSet::*)() const) static_cast<Standard_Integer (math_FunctionSet::*)() const>(&math_FunctionSet::NbVariables),
             R"#(Returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (math_FunctionSet::*)() const) static_cast<Standard_Integer (math_FunctionSet::*)() const>(&math_FunctionSet::NbEquations),
             R"#(Returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (math_FunctionSet::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (math_FunctionSet::*)( const math_Vector & , math_Vector & ) >(&math_FunctionSet::Value),
             R"#(Computes the values <F> of the functions for the variable <X>. returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("GetStateNumber",
             (Standard_Integer (math_FunctionSet::*)() ) static_cast<Standard_Integer (math_FunctionSet::*)() >(&math_FunctionSet::GetStateNumber),
             R"#(Returns the state of the function corresponding to the latestcall of any methods associated with the function. This function is called by each of the algorithms described later which define the function Integer Algorithm::StateNumber(). The algorithm has the responsibility to call this function when it has found a solution (i.e. a root or a minimum) and has to maintain the association between the solution found and this StateNumber. Byu default, this method returns 0 (which means for the algorithm: no state has been saved). It is the responsibility of the programmer to decide if he needs to save the current state of the function and to return an Integer that allows retrieval of the state.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_FunctionSetRoot , shared_ptr<math_FunctionSetRoot> >>(m.attr("math_FunctionSetRoot"))
    // constructors
        .def(py::init< math_FunctionSetWithDerivatives &,const math_Vector &,const Standard_Integer >()  , py::arg("F"),  py::arg("Tolerance"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100) )
        .def(py::init< math_FunctionSetWithDerivatives &,const Standard_Integer >()  , py::arg("F"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100) )
    // custom constructors
    // methods
        .def("SetTolerance",
             (void (math_FunctionSetRoot::*)( const math_Vector & ) ) static_cast<void (math_FunctionSetRoot::*)( const math_Vector & ) >(&math_FunctionSetRoot::SetTolerance),
             R"#(Initializes the tolerance values.)#"  , py::arg("Tolerance"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_FunctionSetRoot::*)( math_FunctionSetWithDerivatives & ) ) static_cast<Standard_Boolean (math_FunctionSetRoot::*)( math_FunctionSetWithDerivatives & ) >(&math_FunctionSetRoot::IsSolutionReached),
             R"#(This routine is called at the end of each iteration to check if the solution was found. It can be redefined in a sub-class to implement a specific test to stop the iterations. In this case, the solution is found when: abs(Xi - Xi-1) <= Tolerance for all unknowns.)#"  , py::arg("F"))
        .def("Perform",
             (void (math_FunctionSetRoot::*)( math_FunctionSetWithDerivatives & , const math_Vector & , const Standard_Boolean ) ) static_cast<void (math_FunctionSetRoot::*)( math_FunctionSetWithDerivatives & , const math_Vector & , const Standard_Boolean ) >(&math_FunctionSetRoot::Perform),
             R"#(Improves the root of function from the initial guess point. The infinum and supremum may be given to constrain the solution. In this case, the solution is found when: abs(Xi - Xi-1)(j) <= Tolerance(j) for all unknowns.)#"  , py::arg("theFunction"),  py::arg("theStartingPoint"),  py::arg("theStopOnDivergent")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (math_FunctionSetRoot::*)( math_FunctionSetWithDerivatives & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Boolean ) ) static_cast<void (math_FunctionSetRoot::*)( math_FunctionSetWithDerivatives & , const math_Vector & , const math_Vector & , const math_Vector & , const Standard_Boolean ) >(&math_FunctionSetRoot::Perform),
             R"#(Improves the root of function from the initial guess point. The infinum and supremum may be given to constrain the solution. In this case, the solution is found when: abs(Xi - Xi-1) <= Tolerance for all unknowns.)#"  , py::arg("theFunction"),  py::arg("theStartingPoint"),  py::arg("theInfBound"),  py::arg("theSupBound"),  py::arg("theStopOnDivergent")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (math_FunctionSetRoot::*)() const) static_cast<Standard_Boolean (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("NbIterations",
             (Standard_Integer (math_FunctionSetRoot::*)() const) static_cast<Standard_Integer (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::NbIterations),
             R"#(Returns the number of iterations really done during the computation of the root. Exception NotDone is raised if the root was not found.)#" )
        .def("StateNumber",
             (Standard_Integer (math_FunctionSetRoot::*)() const) static_cast<Standard_Integer (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::StateNumber),
             R"#(returns the stateNumber (as returned by F.GetStateNumber()) associated to the root found.)#" )
        .def("Root",
             (const math_Vector & (math_FunctionSetRoot::*)() const) static_cast<const math_Vector & (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::Root),
             R"#(Returns the value of the root of function F. Exception NotDone is raised if the root was not found.)#" )
        .def("Root",
             (void (math_FunctionSetRoot::*)( math_Vector & ) const) static_cast<void (math_FunctionSetRoot::*)( math_Vector & ) const>(&math_FunctionSetRoot::Root),
             R"#(Outputs the root vector in Root. Exception NotDone is raised if the root was not found. Exception DimensionError is raised if the range of Root is not equal to the range of the StartingPoint.)#"  , py::arg("Root"))
        .def("Derivative",
             (const math_Matrix & (math_FunctionSetRoot::*)() const) static_cast<const math_Matrix & (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::Derivative),
             R"#(Returns the matrix value of the derivative at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Derivative",
             (void (math_FunctionSetRoot::*)( math_Matrix & ) const) static_cast<void (math_FunctionSetRoot::*)( math_Matrix & ) const>(&math_FunctionSetRoot::Derivative),
             R"#(outputs the matrix value of the derivative at the root in Der. Exception NotDone is raised if the root was not found. Exception DimensionError is raised if the column range of <Der> is not equal to the range of the startingPoint.)#"  , py::arg("Der"))
        .def("FunctionSetErrors",
             (const math_Vector & (math_FunctionSetRoot::*)() const) static_cast<const math_Vector & (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::FunctionSetErrors),
             R"#(returns the vector value of the error done on the functions at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("FunctionSetErrors",
             (void (math_FunctionSetRoot::*)( math_Vector & ) const) static_cast<void (math_FunctionSetRoot::*)( math_Vector & ) const>(&math_FunctionSetRoot::FunctionSetErrors),
             R"#(outputs the vector value of the error done on the functions at the root in Err. Exception NotDone is raised if the root was not found. Exception DimensionError is raised if the range of Err is not equal to the range of the StartingPoint.)#"  , py::arg("Err"))
        .def("Dump",
             (void (math_FunctionSetRoot::*)( std::ostream & ) const) static_cast<void (math_FunctionSetRoot::*)( std::ostream & ) const>(&math_FunctionSetRoot::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsDivergent",
             (Standard_Boolean (math_FunctionSetRoot::*)() const) static_cast<Standard_Boolean (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::IsDivergent),
             R"#(None)#" )
        .def("IsSolutionReached",
             (Standard_Boolean (math_FunctionSetRoot::*)( math_FunctionSetWithDerivatives & ) ) static_cast<Standard_Boolean (math_FunctionSetRoot::*)( math_FunctionSetWithDerivatives & ) >(&math_FunctionSetRoot::IsSolutionReached),
             R"#(This routine is called at the end of each iteration to check if the solution was found. It can be redefined in a sub-class to implement a specific test to stop the iterations. In this case, the solution is found when: abs(Xi - Xi-1) <= Tolerance for all unknowns.)#"  , py::arg(""))
        .def("IsDone",
             (Standard_Boolean (math_FunctionSetRoot::*)() const) static_cast<Standard_Boolean (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Root",
             (const math_Vector & (math_FunctionSetRoot::*)() const) static_cast<const math_Vector & (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::Root),
             R"#(Returns the value of the root of function F. Exception NotDone is raised if the root was not found.)#" )
        .def("FunctionSetErrors",
             (const math_Vector & (math_FunctionSetRoot::*)() const) static_cast<const math_Vector & (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::FunctionSetErrors),
             R"#(returns the vector value of the error done on the functions at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Derivative",
             (const math_Matrix & (math_FunctionSetRoot::*)() const) static_cast<const math_Matrix & (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::Derivative),
             R"#(Returns the matrix value of the derivative at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Derivative",
             (void (math_FunctionSetRoot::*)( math_Matrix & ) const) static_cast<void (math_FunctionSetRoot::*)( math_Matrix & ) const>(&math_FunctionSetRoot::Derivative),
             R"#(outputs the matrix value of the derivative at the root in Der. Exception NotDone is raised if the root was not found. Exception DimensionError is raised if the column range of <Der> is not equal to the range of the startingPoint.)#"  , py::arg("Der"))
        .def("StateNumber",
             (Standard_Integer (math_FunctionSetRoot::*)() const) static_cast<Standard_Integer (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::StateNumber),
             R"#(returns the stateNumber (as returned by F.GetStateNumber()) associated to the root found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_FunctionSetRoot::*)() const) static_cast<Standard_Integer (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::NbIterations),
             R"#(Returns the number of iterations really done during the computation of the root. Exception NotDone is raised if the root was not found.)#" )
        .def("IsDivergent",
             (Standard_Boolean (math_FunctionSetRoot::*)() const) static_cast<Standard_Boolean (math_FunctionSetRoot::*)() const>(&math_FunctionSetRoot::IsDivergent),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_Gauss , shared_ptr<math_Gauss> >>(m.attr("math_Gauss"))
    // constructors
        .def(py::init< const math_Matrix &,const Standard_Real,const opencascade::handle<Message_ProgressIndicator> & >()  , py::arg("A"),  py::arg("MinPivot")=static_cast<const Standard_Real>(1.0e-20),  py::arg("aProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_Gauss::*)() const) static_cast<Standard_Boolean (math_Gauss::*)() const>(&math_Gauss::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false)#" )
        .def("Solve",
             (void (math_Gauss::*)( const math_Vector & , math_Vector & ) const) static_cast<void (math_Gauss::*)( const math_Vector & , math_Vector & ) const>(&math_Gauss::Solve),
             R"#(Given the input Vector B this routine returns the solution X of the set of linear equations A . X = B. Exception NotDone is raised if the decomposition of A was not done successfully. Exception DimensionError is raised if the range of B is not equal to the number of rows of A.)#"  , py::arg("B"),  py::arg("X"))
        .def("Solve",
             (void (math_Gauss::*)( math_Vector & ) const) static_cast<void (math_Gauss::*)( math_Vector & ) const>(&math_Gauss::Solve),
             R"#(Given the input Vector B this routine solves the set of linear equations A . X = B. B is replaced by the vector solution X. Exception NotDone is raised if the decomposition of A was not done successfully. Exception DimensionError is raised if the range of B is not equal to the number of rows of A.)#"  , py::arg("B"))
        .def("Determinant",
             (Standard_Real (math_Gauss::*)() const) static_cast<Standard_Real (math_Gauss::*)() const>(&math_Gauss::Determinant),
             R"#(This routine returns the value of the determinant of the previously LU decomposed matrix A. Exception NotDone may be raised if the decomposition of A was not done successfully, zero is returned if the matrix A was considered as singular.)#" )
        .def("Invert",
             (void (math_Gauss::*)( math_Matrix & ) const) static_cast<void (math_Gauss::*)( math_Matrix & ) const>(&math_Gauss::Invert),
             R"#(This routine outputs Inv the inverse of the previously LU decomposed matrix A. Exception DimensionError is raised if the ranges of B are not equal to the ranges of A.)#"  , py::arg("Inv"))
        .def("Dump",
             (void (math_Gauss::*)( std::ostream & ) const) static_cast<void (math_Gauss::*)( std::ostream & ) const>(&math_Gauss::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_GaussLeastSquare , shared_ptr<math_GaussLeastSquare> >>(m.attr("math_GaussLeastSquare"))
    // constructors
        .def(py::init< const math_Matrix &,const Standard_Real >()  , py::arg("A"),  py::arg("MinPivot")=static_cast<const Standard_Real>(1.0e-20) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_GaussLeastSquare::*)() const) static_cast<Standard_Boolean (math_GaussLeastSquare::*)() const>(&math_GaussLeastSquare::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.e)#" )
        .def("Solve",
             (void (math_GaussLeastSquare::*)( const math_Vector & , math_Vector & ) const) static_cast<void (math_GaussLeastSquare::*)( const math_Vector & , math_Vector & ) const>(&math_GaussLeastSquare::Solve),
             R"#(Given the input Vector <B> this routine solves the set of linear equations A . X = B. Exception NotDone is raised if the decomposition of A was not done successfully. Exception DimensionError is raised if the range of B Inv is not equal to the rowrange of A. Exception DimensionError is raised if the range of X Inv is not equal to the colrange of A.)#"  , py::arg("B"),  py::arg("X"))
        .def("Dump",
             (void (math_GaussLeastSquare::*)( std::ostream & ) const) static_cast<void (math_GaussLeastSquare::*)( std::ostream & ) const>(&math_GaussLeastSquare::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_GaussLeastSquare::*)() const) static_cast<Standard_Boolean (math_GaussLeastSquare::*)() const>(&math_GaussLeastSquare::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.e)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_GaussMultipleIntegration , shared_ptr<math_GaussMultipleIntegration> >>(m.attr("math_GaussMultipleIntegration"))
    // constructors
        .def(py::init< math_MultipleVarFunction &,const math_Vector &,const math_Vector &,const math_IntegerVector & >()  , py::arg("F"),  py::arg("Lower"),  py::arg("Upper"),  py::arg("Order") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_GaussMultipleIntegration::*)() const) static_cast<Standard_Boolean (math_GaussMultipleIntegration::*)() const>(&math_GaussMultipleIntegration::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (Standard_Real (math_GaussMultipleIntegration::*)() const) static_cast<Standard_Real (math_GaussMultipleIntegration::*)() const>(&math_GaussMultipleIntegration::Value),
             R"#(returns the value of the integral.)#" )
        .def("Dump",
             (void (math_GaussMultipleIntegration::*)( std::ostream & ) const) static_cast<void (math_GaussMultipleIntegration::*)( std::ostream & ) const>(&math_GaussMultipleIntegration::Dump),
             R"#(Prints information on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_GaussMultipleIntegration::*)() const) static_cast<Standard_Boolean (math_GaussMultipleIntegration::*)() const>(&math_GaussMultipleIntegration::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (Standard_Real (math_GaussMultipleIntegration::*)() const) static_cast<Standard_Real (math_GaussMultipleIntegration::*)() const>(&math_GaussMultipleIntegration::Value),
             R"#(returns the value of the integral.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_GaussSetIntegration , shared_ptr<math_GaussSetIntegration> >>(m.attr("math_GaussSetIntegration"))
    // constructors
        .def(py::init< math_FunctionSet &,const math_Vector &,const math_Vector &,const math_IntegerVector & >()  , py::arg("F"),  py::arg("Lower"),  py::arg("Upper"),  py::arg("Order") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_GaussSetIntegration::*)() const) static_cast<Standard_Boolean (math_GaussSetIntegration::*)() const>(&math_GaussSetIntegration::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (const math_Vector & (math_GaussSetIntegration::*)() const) static_cast<const math_Vector & (math_GaussSetIntegration::*)() const>(&math_GaussSetIntegration::Value),
             R"#(returns the value of the integral.)#" )
        .def("Dump",
             (void (math_GaussSetIntegration::*)( std::ostream & ) const) static_cast<void (math_GaussSetIntegration::*)( std::ostream & ) const>(&math_GaussSetIntegration::Dump),
             R"#(Prints information on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_GaussSetIntegration::*)() const) static_cast<Standard_Boolean (math_GaussSetIntegration::*)() const>(&math_GaussSetIntegration::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (const math_Vector & (math_GaussSetIntegration::*)() const) static_cast<const math_Vector & (math_GaussSetIntegration::*)() const>(&math_GaussSetIntegration::Value),
             R"#(returns the value of the integral.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_GaussSingleIntegration , shared_ptr<math_GaussSingleIntegration> >>(m.attr("math_GaussSingleIntegration"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< math_Function &,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("Lower"),  py::arg("Upper"),  py::arg("Order") )
        .def(py::init< math_Function &,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("F"),  py::arg("Lower"),  py::arg("Upper"),  py::arg("Order"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_GaussSingleIntegration::*)() const) static_cast<Standard_Boolean (math_GaussSingleIntegration::*)() const>(&math_GaussSingleIntegration::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (Standard_Real (math_GaussSingleIntegration::*)() const) static_cast<Standard_Real (math_GaussSingleIntegration::*)() const>(&math_GaussSingleIntegration::Value),
             R"#(returns the value of the integral.)#" )
        .def("Dump",
             (void (math_GaussSingleIntegration::*)( std::ostream & ) const) static_cast<void (math_GaussSingleIntegration::*)( std::ostream & ) const>(&math_GaussSingleIntegration::Dump),
             R"#(Prints information on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_GaussSingleIntegration::*)() const) static_cast<Standard_Boolean (math_GaussSingleIntegration::*)() const>(&math_GaussSingleIntegration::IsDone),
             R"#(returns True if all has been correctly done.)#" )
        .def("Value",
             (Standard_Real (math_GaussSingleIntegration::*)() const) static_cast<Standard_Real (math_GaussSingleIntegration::*)() const>(&math_GaussSingleIntegration::Value),
             R"#(returns the value of the integral.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_GlobOptMin , shared_ptr<math_GlobOptMin> >>(m.attr("math_GlobOptMin"))
    // constructors
        .def(py::init< math_MultipleVarFunction *,const math_Vector &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("theFunc"),  py::arg("theLowerBorder"),  py::arg("theUpperBorder"),  py::arg("theC")=static_cast<const Standard_Real>(9),  py::arg("theDiscretizationTol")=static_cast<const Standard_Real>(1.0e-2),  py::arg("theSameTol")=static_cast<const Standard_Real>(1.0e-7) )
    // custom constructors
    // methods
        .def("SetGlobalParams",
             (void (math_GlobOptMin::*)( math_MultipleVarFunction * , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (math_GlobOptMin::*)( math_MultipleVarFunction * , const math_Vector & , const math_Vector & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&math_GlobOptMin::SetGlobalParams),
             R"#()#"  , py::arg("theFunc"),  py::arg("theLowerBorder"),  py::arg("theUpperBorder"),  py::arg("theC")=static_cast<const Standard_Real>(9),  py::arg("theDiscretizationTol")=static_cast<const Standard_Real>(1.0e-2),  py::arg("theSameTol")=static_cast<const Standard_Real>(1.0e-7))
        .def("SetLocalParams",
             (void (math_GlobOptMin::*)( const math_Vector & , const math_Vector & ) ) static_cast<void (math_GlobOptMin::*)( const math_Vector & , const math_Vector & ) >(&math_GlobOptMin::SetLocalParams),
             R"#(Method to reduce bounding box. Perform will use this box.)#"  , py::arg("theLocalA"),  py::arg("theLocalB"))
        .def("SetTol",
             (void (math_GlobOptMin::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (math_GlobOptMin::*)( const Standard_Real , const Standard_Real ) >(&math_GlobOptMin::SetTol),
             R"#(Method to set tolerances.)#"  , py::arg("theDiscretizationTol"),  py::arg("theSameTol"))
        .def("Perform",
             (void (math_GlobOptMin::*)( const Standard_Boolean ) ) static_cast<void (math_GlobOptMin::*)( const Standard_Boolean ) >(&math_GlobOptMin::Perform),
             R"#()#"  , py::arg("isFindSingleSolution")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Points",
             (void (math_GlobOptMin::*)( const Standard_Integer , math_Vector & ) ) static_cast<void (math_GlobOptMin::*)( const Standard_Integer , math_Vector & ) >(&math_GlobOptMin::Points),
             R"#(Return solution theIndex, 1 <= theIndex <= NbExtrema.)#"  , py::arg("theIndex"),  py::arg("theSol"))
        .def("SetContinuity",
             (void (math_GlobOptMin::*)( const Standard_Integer ) ) static_cast<void (math_GlobOptMin::*)( const Standard_Integer ) >(&math_GlobOptMin::SetContinuity),
             R"#(Set / Get continuity of local borders splits (0 ~ C0, 1 ~ C1, 2 ~ C2).)#"  , py::arg("theCont"))
        .def("GetContinuity",
             (Standard_Integer (math_GlobOptMin::*)() const) static_cast<Standard_Integer (math_GlobOptMin::*)() const>(&math_GlobOptMin::GetContinuity),
             R"#(None)#" )
        .def("SetFunctionalMinimalValue",
             (void (math_GlobOptMin::*)( const Standard_Real ) ) static_cast<void (math_GlobOptMin::*)( const Standard_Real ) >(&math_GlobOptMin::SetFunctionalMinimalValue),
             R"#(Set / Get functional minimal value.)#"  , py::arg("theMinimalValue"))
        .def("GetFunctionalMinimalValue",
             (Standard_Real (math_GlobOptMin::*)() const) static_cast<Standard_Real (math_GlobOptMin::*)() const>(&math_GlobOptMin::GetFunctionalMinimalValue),
             R"#(None)#" )
        .def("SetLipConstState",
             (void (math_GlobOptMin::*)( const Standard_Boolean ) ) static_cast<void (math_GlobOptMin::*)( const Standard_Boolean ) >(&math_GlobOptMin::SetLipConstState),
             R"#(Set / Get Lipchitz constant modification state. True means that the constant is locked and unlocked otherwise.)#"  , py::arg("theFlag"))
        .def("GetLipConstState",
             (Standard_Boolean (math_GlobOptMin::*)() const) static_cast<Standard_Boolean (math_GlobOptMin::*)() const>(&math_GlobOptMin::GetLipConstState),
             R"#(None)#" )
        .def("isDone",
             (Standard_Boolean (math_GlobOptMin::*)() const) static_cast<Standard_Boolean (math_GlobOptMin::*)() const>(&math_GlobOptMin::isDone),
             R"#(Return computation state of the algorithm.)#" )
        .def("GetF",
             (Standard_Real (math_GlobOptMin::*)() const) static_cast<Standard_Real (math_GlobOptMin::*)() const>(&math_GlobOptMin::GetF),
             R"#(Get best functional value.)#" )
        .def("NbExtrema",
             (Standard_Integer (math_GlobOptMin::*)() const) static_cast<Standard_Integer (math_GlobOptMin::*)() const>(&math_GlobOptMin::NbExtrema),
             R"#(Return count of global extremas.)#" )
    // methods using call by reference i.s.o. return
        .def("GetTol",
             []( math_GlobOptMin &self   ){ Standard_Real  theDiscretizationTol; Standard_Real  theSameTol; self.GetTol(theDiscretizationTol,theSameTol); return std::make_tuple(theDiscretizationTol,theSameTol); },
             R"#(Method to get tolerances.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_Householder , shared_ptr<math_Householder> >>(m.attr("math_Householder"))
    // constructors
        .def(py::init< const math_Matrix &,const math_Matrix &,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("EPS")=static_cast<const Standard_Real>(1.0e-20) )
        .def(py::init< const math_Matrix &,const math_Matrix &,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("lowerArow"),  py::arg("upperArow"),  py::arg("lowerAcol"),  py::arg("upperAcol"),  py::arg("EPS")=static_cast<const Standard_Real>(1.0e-20) )
        .def(py::init< const math_Matrix &,const math_Vector &,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("EPS")=static_cast<const Standard_Real>(1.0e-20) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_Householder::*)() const) static_cast<Standard_Boolean (math_Householder::*)() const>(&math_Householder::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Value",
             (void (math_Householder::*)( math_Vector & , const Standard_Integer ) const) static_cast<void (math_Householder::*)( math_Vector & , const Standard_Integer ) const>(&math_Householder::Value),
             R"#(Given the integer Index, this routine returns the corresponding least square solution sol. Exception NotDone is raised if the resolution has not be done. Exception OutOfRange is raised if Index <=0 or Index is more than the number of columns of B.)#"  , py::arg("sol"),  py::arg("Index")=static_cast<const Standard_Integer>(1))
        .def("AllValues",
             (const math_Matrix & (math_Householder::*)() const) static_cast<const math_Matrix & (math_Householder::*)() const>(&math_Householder::AllValues),
             R"#(Returns the matrix sol of all the solutions of the system A.X = B. Exception NotDone is raised is the resolution has not be done.)#" )
        .def("Dump",
             (void (math_Householder::*)( std::ostream & ) const) static_cast<void (math_Householder::*)( std::ostream & ) const>(&math_Householder::Dump),
             R"#(Prints informations on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_Householder::*)() const) static_cast<Standard_Boolean (math_Householder::*)() const>(&math_Householder::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Value",
             (void (math_Householder::*)( math_Vector & , const Standard_Integer ) const) static_cast<void (math_Householder::*)( math_Vector & , const Standard_Integer ) const>(&math_Householder::Value),
             R"#(Given the integer Index, this routine returns the corresponding least square solution sol. Exception NotDone is raised if the resolution has not be done. Exception OutOfRange is raised if Index <=0 or Index is more than the number of columns of B.)#"  , py::arg("sol"),  py::arg("Index"))
        .def("AllValues",
             (const math_Matrix & (math_Householder::*)() const) static_cast<const math_Matrix & (math_Householder::*)() const>(&math_Householder::AllValues),
             R"#(Returns the matrix sol of all the solutions of the system A.X = B. Exception NotDone is raised is the resolution has not be done.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_IntegerVector , shared_ptr<math_IntegerVector> >>(m.attr("math_IntegerVector"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theFirst"),  py::arg("theLast") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theFirst"),  py::arg("theLast"),  py::arg("theInitialValue") )
        .def(py::init< const Standard_Integer *,const Standard_Integer,const Standard_Integer >()  , py::arg("theTab"),  py::arg("theFirst"),  py::arg("theLast") )
        .def(py::init< const math_IntegerVector & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Init",
             (void (math_IntegerVector::*)( const Standard_Integer ) ) static_cast<void (math_IntegerVector::*)( const Standard_Integer ) >(&math_IntegerVector::Init),
             R"#(Initialize an IntegerVector with all the elements set to theInitialValue.)#"  , py::arg("theInitialValue"))
        .def("Length",
             (Standard_Integer (math_IntegerVector::*)() const) static_cast<Standard_Integer (math_IntegerVector::*)() const>(&math_IntegerVector::Length),
             R"#(returns the length of an IntegerVector)#" )
        .def("Lower",
             (Standard_Integer (math_IntegerVector::*)() const) static_cast<Standard_Integer (math_IntegerVector::*)() const>(&math_IntegerVector::Lower),
             R"#(returns the value of the Lower index of an IntegerVector.)#" )
        .def("Upper",
             (Standard_Integer (math_IntegerVector::*)() const) static_cast<Standard_Integer (math_IntegerVector::*)() const>(&math_IntegerVector::Upper),
             R"#(returns the value of the Upper index of an IntegerVector.)#" )
        .def("Norm",
             (Standard_Real (math_IntegerVector::*)() const) static_cast<Standard_Real (math_IntegerVector::*)() const>(&math_IntegerVector::Norm),
             R"#(returns the value of the norm of an IntegerVector.)#" )
        .def("Norm2",
             (Standard_Real (math_IntegerVector::*)() const) static_cast<Standard_Real (math_IntegerVector::*)() const>(&math_IntegerVector::Norm2),
             R"#(returns the value of the square of the norm of an IntegerVector.)#" )
        .def("Max",
             (Standard_Integer (math_IntegerVector::*)() const) static_cast<Standard_Integer (math_IntegerVector::*)() const>(&math_IntegerVector::Max),
             R"#(returns the value of the Index of the maximum element of an IntegerVector.)#" )
        .def("Min",
             (Standard_Integer (math_IntegerVector::*)() const) static_cast<Standard_Integer (math_IntegerVector::*)() const>(&math_IntegerVector::Min),
             R"#(returns the value of the Index of the minimum element of an IntegerVector.)#" )
        .def("Invert",
             (void (math_IntegerVector::*)() ) static_cast<void (math_IntegerVector::*)() >(&math_IntegerVector::Invert),
             R"#(inverses an IntegerVector.)#" )
        .def("Inverse",
             (math_IntegerVector (math_IntegerVector::*)() const) static_cast<math_IntegerVector (math_IntegerVector::*)() const>(&math_IntegerVector::Inverse),
             R"#(returns the inverse IntegerVector of an IntegerVector.)#" )
        .def("Set",
             (void (math_IntegerVector::*)( const Standard_Integer , const Standard_Integer , const math_IntegerVector & ) ) static_cast<void (math_IntegerVector::*)( const Standard_Integer , const Standard_Integer , const math_IntegerVector & ) >(&math_IntegerVector::Set),
             R"#(sets an IntegerVector from "theI1" to "theI2" to the IntegerVector "theV"; An exception is raised if "theI1" is less than "LowerIndex" or "theI2" is greater than "UpperIndex" or "theI1" is greater than "theI2". An exception is raised if "theI2-theI1+1" is different from the Length of "theV".)#"  , py::arg("theI1"),  py::arg("theI2"),  py::arg("theV"))
        .def("Slice",
             (math_IntegerVector (math_IntegerVector::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<math_IntegerVector (math_IntegerVector::*)( const Standard_Integer , const Standard_Integer ) const>(&math_IntegerVector::Slice),
             R"#(slices the values of the IntegerVector between "theI1" and "theI2": Example: [2, 1, 2, 3, 4, 5] becomes [2, 4, 3, 2, 1, 5] between 2 and 5. An exception is raised if "theI1" is less than "LowerIndex" or "theI2" is greater than "UpperIndex".)#"  , py::arg("theI1"),  py::arg("theI2"))
        .def("Multiply",
             (void (math_IntegerVector::*)( const Standard_Integer ) ) static_cast<void (math_IntegerVector::*)( const Standard_Integer ) >(&math_IntegerVector::Multiply),
             R"#(returns the product of an IntegerVector by an integer value.)#"  , py::arg("theRight"))
        .def("Multiplied",
             (math_IntegerVector (math_IntegerVector::*)( const Standard_Integer ) const) static_cast<math_IntegerVector (math_IntegerVector::*)( const Standard_Integer ) const>(&math_IntegerVector::Multiplied),
             R"#(returns the product of an IntegerVector by an integer value.)#"  , py::arg("theRight"))
        .def("TMultiplied",
             (math_IntegerVector (math_IntegerVector::*)( const Standard_Integer ) const) static_cast<math_IntegerVector (math_IntegerVector::*)( const Standard_Integer ) const>(&math_IntegerVector::TMultiplied),
             R"#(returns the product of a vector and a real value.)#"  , py::arg("theRight"))
        .def("Add",
             (void (math_IntegerVector::*)( const math_IntegerVector & ) ) static_cast<void (math_IntegerVector::*)( const math_IntegerVector & ) >(&math_IntegerVector::Add),
             R"#(adds the IntegerVector "theRight" to an IntegerVector. An exception is raised if the IntegerVectors have not the same length. An exception is raised if the lengths are not equal.)#"  , py::arg("theRight"))
        .def("Added",
             (math_IntegerVector (math_IntegerVector::*)( const math_IntegerVector & ) const) static_cast<math_IntegerVector (math_IntegerVector::*)( const math_IntegerVector & ) const>(&math_IntegerVector::Added),
             R"#(adds the IntegerVector "theRight" to an IntegerVector. An exception is raised if the IntegerVectors have not the same length. An exception is raised if the lengths are not equal.)#"  , py::arg("theRight"))
        .def("Add",
             (void (math_IntegerVector::*)( const math_IntegerVector & , const math_IntegerVector & ) ) static_cast<void (math_IntegerVector::*)( const math_IntegerVector & , const math_IntegerVector & ) >(&math_IntegerVector::Add),
             R"#(sets an IntegerVector to the sum of the IntegerVector "theLeft" and the IntegerVector "theRight". An exception is raised if the lengths are different.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Subtract",
             (void (math_IntegerVector::*)( const math_IntegerVector & , const math_IntegerVector & ) ) static_cast<void (math_IntegerVector::*)( const math_IntegerVector & , const math_IntegerVector & ) >(&math_IntegerVector::Subtract),
             R"#(sets an IntegerVector to the substraction of "theRight" from "theLeft". An exception is raised if the IntegerVectors have not the same length.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Value",
             (const Standard_Integer & (math_IntegerVector::*)( const Standard_Integer ) const) static_cast<const Standard_Integer & (math_IntegerVector::*)( const Standard_Integer ) const>(&math_IntegerVector::Value),
             R"#(accesses the value of index theNum of an IntegerVector.)#"  , py::arg("theNum"))
        .def("Value",
             (Standard_Integer & (math_IntegerVector::*)( const Standard_Integer ) ) static_cast<Standard_Integer & (math_IntegerVector::*)( const Standard_Integer ) >(&math_IntegerVector::Value),
             R"#(accesses (in read or write mode) the value of index theNum of an IntegerVector.)#"  , py::arg("theNum"))
        .def("Initialized",
             (math_IntegerVector & (math_IntegerVector::*)( const math_IntegerVector & ) ) static_cast<math_IntegerVector & (math_IntegerVector::*)( const math_IntegerVector & ) >(&math_IntegerVector::Initialized),
             R"#(Initialises an IntegerVector by copying "theOther". An exception is raised if the Lengths are different.)#"  , py::arg("theOther"))
        .def("Multiplied",
             (Standard_Integer (math_IntegerVector::*)( const math_IntegerVector & ) const) static_cast<Standard_Integer (math_IntegerVector::*)( const math_IntegerVector & ) const>(&math_IntegerVector::Multiplied),
             R"#(returns the inner product of 2 IntegerVectors. An exception is raised if the lengths are not equal.)#"  , py::arg("theRight"))
        .def("Opposite",
             (math_IntegerVector (math_IntegerVector::*)() ) static_cast<math_IntegerVector (math_IntegerVector::*)() >(&math_IntegerVector::Opposite),
             R"#(returns the opposite of an IntegerVector.)#" )
        .def("Subtract",
             (void (math_IntegerVector::*)( const math_IntegerVector & ) ) static_cast<void (math_IntegerVector::*)( const math_IntegerVector & ) >(&math_IntegerVector::Subtract),
             R"#(returns the subtraction of "theRight" from "me". An exception is raised if the IntegerVectors have not the same length.)#"  , py::arg("theRight"))
        .def("Subtracted",
             (math_IntegerVector (math_IntegerVector::*)( const math_IntegerVector & ) const) static_cast<math_IntegerVector (math_IntegerVector::*)( const math_IntegerVector & ) const>(&math_IntegerVector::Subtracted),
             R"#(returns the subtraction of "theRight" from "me". An exception is raised if the IntegerVectors have not the same length.)#"  , py::arg("theRight"))
        .def("Multiply",
             (void (math_IntegerVector::*)( const Standard_Integer , const math_IntegerVector & ) ) static_cast<void (math_IntegerVector::*)( const Standard_Integer , const math_IntegerVector & ) >(&math_IntegerVector::Multiply),
             R"#(returns the multiplication of an integer by an IntegerVector.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Dump",
             (void (math_IntegerVector::*)( std::ostream & ) const) static_cast<void (math_IntegerVector::*)( std::ostream & ) const>(&math_IntegerVector::Dump),
             R"#(Prints on the stream theO information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("theO"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__imul__",
             (void (math_IntegerVector::*)( const Standard_Integer ) ) static_cast<void (math_IntegerVector::*)( const Standard_Integer ) >(&math_IntegerVector::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__mul__",
             (math_IntegerVector (math_IntegerVector::*)( const Standard_Integer ) const) static_cast<math_IntegerVector (math_IntegerVector::*)( const Standard_Integer ) const>(&math_IntegerVector::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__rmul__",
             (math_IntegerVector (math_IntegerVector::*)( const Standard_Integer ) const) static_cast<math_IntegerVector (math_IntegerVector::*)( const Standard_Integer ) const>(&math_IntegerVector::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__iadd__",
             (void (math_IntegerVector::*)( const math_IntegerVector & ) ) static_cast<void (math_IntegerVector::*)( const math_IntegerVector & ) >(&math_IntegerVector::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__add__",
             (math_IntegerVector (math_IntegerVector::*)( const math_IntegerVector & ) const) static_cast<math_IntegerVector (math_IntegerVector::*)( const math_IntegerVector & ) const>(&math_IntegerVector::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__mul__",
             (Standard_Integer (math_IntegerVector::*)( const math_IntegerVector & ) const) static_cast<Standard_Integer (math_IntegerVector::*)( const math_IntegerVector & ) const>(&math_IntegerVector::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__rmul__",
             (Standard_Integer (math_IntegerVector::*)( const math_IntegerVector & ) const) static_cast<Standard_Integer (math_IntegerVector::*)( const math_IntegerVector & ) const>(&math_IntegerVector::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__sub__",
             (math_IntegerVector (math_IntegerVector::*)() ) static_cast<math_IntegerVector (math_IntegerVector::*)() >(&math_IntegerVector::operator-),
             py::is_operator(),
             R"#(None)#" )
        .def("__isub__",
             (void (math_IntegerVector::*)( const math_IntegerVector & ) ) static_cast<void (math_IntegerVector::*)( const math_IntegerVector & ) >(&math_IntegerVector::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__sub__",
             (math_IntegerVector (math_IntegerVector::*)( const math_IntegerVector & ) const) static_cast<math_IntegerVector (math_IntegerVector::*)( const math_IntegerVector & ) const>(&math_IntegerVector::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
    // additional methods and static methods
;


    static_cast<py::class_<math_Jacobi , shared_ptr<math_Jacobi> >>(m.attr("math_Jacobi"))
    // constructors
        .def(py::init< const math_Matrix & >()  , py::arg("A") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_Jacobi::*)() const) static_cast<Standard_Boolean (math_Jacobi::*)() const>(&math_Jacobi::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Values",
             (const math_Vector & (math_Jacobi::*)() const) static_cast<const math_Vector & (math_Jacobi::*)() const>(&math_Jacobi::Values),
             R"#(Returns the eigenvalues vector. Exception NotDone is raised if calculation is not done successfully.)#" )
        .def("Value",
             (Standard_Real (math_Jacobi::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_Jacobi::*)( const Standard_Integer ) const>(&math_Jacobi::Value),
             R"#(returns the eigenvalue number Num. Eigenvalues are in the range (1..n). Exception NotDone is raised if calculation is not done successfully.)#"  , py::arg("Num"))
        .def("Vectors",
             (const math_Matrix & (math_Jacobi::*)() const) static_cast<const math_Matrix & (math_Jacobi::*)() const>(&math_Jacobi::Vectors),
             R"#(returns the eigenvectors matrix. Exception NotDone is raised if calculation is not done successfully.)#" )
        .def("Vector",
             (void (math_Jacobi::*)( const Standard_Integer , math_Vector & ) const) static_cast<void (math_Jacobi::*)( const Standard_Integer , math_Vector & ) const>(&math_Jacobi::Vector),
             R"#(Returns the eigenvector V of number Num. Eigenvectors are in the range (1..n). Exception NotDone is raised if calculation is not done successfully.)#"  , py::arg("Num"),  py::arg("V"))
        .def("Dump",
             (void (math_Jacobi::*)( std::ostream & ) const) static_cast<void (math_Jacobi::*)( std::ostream & ) const>(&math_Jacobi::Dump),
             R"#(Prints information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_Jacobi::*)() const) static_cast<Standard_Boolean (math_Jacobi::*)() const>(&math_Jacobi::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Values",
             (const math_Vector & (math_Jacobi::*)() const) static_cast<const math_Vector & (math_Jacobi::*)() const>(&math_Jacobi::Values),
             R"#(Returns the eigenvalues vector. Exception NotDone is raised if calculation is not done successfully.)#" )
        .def("Value",
             (Standard_Real (math_Jacobi::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_Jacobi::*)( const Standard_Integer ) const>(&math_Jacobi::Value),
             R"#(returns the eigenvalue number Num. Eigenvalues are in the range (1..n). Exception NotDone is raised if calculation is not done successfully.)#"  , py::arg("Num"))
        .def("Vectors",
             (const math_Matrix & (math_Jacobi::*)() const) static_cast<const math_Matrix & (math_Jacobi::*)() const>(&math_Jacobi::Vectors),
             R"#(returns the eigenvectors matrix. Exception NotDone is raised if calculation is not done successfully.)#" )
        .def("Vector",
             (void (math_Jacobi::*)( const Standard_Integer , math_Vector & ) const) static_cast<void (math_Jacobi::*)( const Standard_Integer , math_Vector & ) const>(&math_Jacobi::Vector),
             R"#(Returns the eigenvector V of number Num. Eigenvectors are in the range (1..n). Exception NotDone is raised if calculation is not done successfully.)#"  , py::arg("Num"),  py::arg("V"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_KronrodSingleIntegration , shared_ptr<math_KronrodSingleIntegration> >>(m.attr("math_KronrodSingleIntegration"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< math_Function &,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("theFunction"),  py::arg("theLower"),  py::arg("theUpper"),  py::arg("theNbPnts") )
        .def(py::init< math_Function &,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Integer >()  , py::arg("theFunction"),  py::arg("theLower"),  py::arg("theUpper"),  py::arg("theNbPnts"),  py::arg("theTolerance"),  py::arg("theMaxNbIter") )
    // custom constructors
    // methods
        .def("Perform",
             (void (math_KronrodSingleIntegration::*)( math_Function & , const Standard_Real , const Standard_Real , const Standard_Integer ) ) static_cast<void (math_KronrodSingleIntegration::*)( math_Function & , const Standard_Real , const Standard_Real , const Standard_Integer ) >(&math_KronrodSingleIntegration::Perform),
             R"#(Computation of the integral. Takes the function, the lower and upper bound values, the initial number of Kronrod points, the relative tolerance value and the maximal number of iterations as parameters. theNbPnts should be odd and greater then or equal to 3.)#"  , py::arg("theFunction"),  py::arg("theLower"),  py::arg("theUpper"),  py::arg("theNbPnts"))
        .def("Perform",
             (void (math_KronrodSingleIntegration::*)( math_Function & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Integer ) ) static_cast<void (math_KronrodSingleIntegration::*)( math_Function & , const Standard_Real , const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Integer ) >(&math_KronrodSingleIntegration::Perform),
             R"#(Computation of the integral. Takes the function, the lower and upper bound values, the initial number of Kronrod points, the relative tolerance value and the maximal number of iterations as parameters. theNbPnts should be odd and greater then or equal to 3. Note that theTolerance is relative, i.e. the criterion of solution reaching is: Abs(Kronrod - Gauss)/Abs(Kronrod) < theTolerance. theTolerance should be positive.)#"  , py::arg("theFunction"),  py::arg("theLower"),  py::arg("theUpper"),  py::arg("theNbPnts"),  py::arg("theTolerance"),  py::arg("theMaxNbIter"))
        .def("IsDone",
             (Standard_Boolean (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Boolean (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::IsDone),
             R"#(Returns Standard_True if computation is performed successfully.)#" )
        .def("Value",
             (Standard_Real (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Real (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::Value),
             R"#(Returns the value of the integral.)#" )
        .def("ErrorReached",
             (Standard_Real (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Real (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::ErrorReached),
             R"#(Returns the value of the relative error reached.)#" )
        .def("AbsolutError",
             (Standard_Real (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Real (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::AbsolutError),
             R"#(Returns the value of the relative error reached.)#" )
        .def("OrderReached",
             (Standard_Integer (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Integer (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::OrderReached),
             R"#(Returns the number of Kronrod points for which the result is computed.)#" )
        .def("NbIterReached",
             (Standard_Integer (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Integer (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::NbIterReached),
             R"#(Returns the number of iterations that were made to compute result.)#" )
        .def("IsDone",
             (Standard_Boolean (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Boolean (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::IsDone),
             R"#(Returns Standard_True if computation is performed successfully.)#" )
        .def("Value",
             (Standard_Real (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Real (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::Value),
             R"#(Returns the value of the integral.)#" )
        .def("ErrorReached",
             (Standard_Real (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Real (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::ErrorReached),
             R"#(Returns the value of the relative error reached.)#" )
        .def("AbsolutError",
             (Standard_Real (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Real (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::AbsolutError),
             R"#(Returns the value of the relative error reached.)#" )
        .def("OrderReached",
             (Standard_Integer (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Integer (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::OrderReached),
             R"#(Returns the number of Kronrod points for which the result is computed.)#" )
        .def("NbIterReached",
             (Standard_Integer (math_KronrodSingleIntegration::*)() const) static_cast<Standard_Integer (math_KronrodSingleIntegration::*)() const>(&math_KronrodSingleIntegration::NbIterReached),
             R"#(Returns the number of iterations that were made to compute result.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GKRule_s",
                    (Standard_Boolean (*)( math_Function & , const Standard_Real , const Standard_Real , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( math_Function & , const Standard_Real , const Standard_Real , const math_Vector & , const math_Vector & , const math_Vector & , const math_Vector & , Standard_Real & , Standard_Real & ) >(&math_KronrodSingleIntegration::GKRule),
                    R"#(None)#"  , py::arg("theFunction"),  py::arg("theLower"),  py::arg("theUpper"),  py::arg("theGaussP"),  py::arg("theGaussW"),  py::arg("theKronrodP"),  py::arg("theKronrodW"),  py::arg("theValue"),  py::arg("theError"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_Matrix , shared_ptr<math_Matrix> >>(m.attr("math_Matrix"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("LowerRow"),  py::arg("UpperRow"),  py::arg("LowerCol"),  py::arg("UpperCol") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Real >()  , py::arg("LowerRow"),  py::arg("UpperRow"),  py::arg("LowerCol"),  py::arg("UpperCol"),  py::arg("InitialValue") )
        .def(py::init< const Standard_Address,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("Tab"),  py::arg("LowerRow"),  py::arg("UpperRow"),  py::arg("LowerCol"),  py::arg("UpperCol") )
        .def(py::init< const math_Matrix & >()  , py::arg("Other") )
    // custom constructors
    // methods
        .def("Init",
             (void (math_Matrix::*)( const Standard_Real ) ) static_cast<void (math_Matrix::*)( const Standard_Real ) >(&math_Matrix::Init),
             R"#(Initialize all the elements of a matrix to InitialValue.)#"  , py::arg("InitialValue"))
        .def("RowNumber",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::RowNumber),
             R"#(Returns the number of rows of this matrix. Note that for a matrix A you always have the following relations: - A.RowNumber() = A.UpperRow() - A.LowerRow() + 1 - A.ColNumber() = A.UpperCol() - A.LowerCol() + 1 - the length of a row of A is equal to the number of columns of A, - the length of a column of A is equal to the number of rows of A.returns the row range of a matrix.)#" )
        .def("ColNumber",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::ColNumber),
             R"#(Returns the number of rows of this matrix. Note that for a matrix A you always have the following relations: - A.RowNumber() = A.UpperRow() - A.LowerRow() + 1 - A.ColNumber() = A.UpperCol() - A.LowerCol() + 1 - the length of a row of A is equal to the number of columns of A, - the length of a column of A is equal to the number of rows of A.returns the row range of a matrix.)#" )
        .def("LowerRow",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::LowerRow),
             R"#(Returns the value of the Lower index of the row range of a matrix.)#" )
        .def("UpperRow",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::UpperRow),
             R"#(Returns the Upper index of the row range of a matrix.)#" )
        .def("LowerCol",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::LowerCol),
             R"#(Returns the value of the Lower index of the column range of a matrix.)#" )
        .def("UpperCol",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::UpperCol),
             R"#(Returns the value of the upper index of the column range of a matrix.)#" )
        .def("Determinant",
             (Standard_Real (math_Matrix::*)() const) static_cast<Standard_Real (math_Matrix::*)() const>(&math_Matrix::Determinant),
             R"#(Computes the determinant of a matrix. An exception is raised if the matrix is not a square matrix.)#" )
        .def("Transpose",
             (void (math_Matrix::*)() ) static_cast<void (math_Matrix::*)() >(&math_Matrix::Transpose),
             R"#(Transposes a given matrix. An exception is raised if the matrix is not a square matrix.)#" )
        .def("Invert",
             (void (math_Matrix::*)() ) static_cast<void (math_Matrix::*)() >(&math_Matrix::Invert),
             R"#(Inverts a matrix using Gauss algorithm. Exception NotSquare is raised if the matrix is not square. Exception SingularMatrix is raised if the matrix is singular.)#" )
        .def("Multiply",
             (void (math_Matrix::*)( const Standard_Real ) ) static_cast<void (math_Matrix::*)( const Standard_Real ) >(&math_Matrix::Multiply),
             R"#(Sets this matrix to the product of the matrix Left, and the matrix Right. Example math_Matrix A (1, 3, 1, 3); math_Matrix B (1, 3, 1, 3); // A = ... , B = ... math_Matrix C (1, 3, 1, 3); C.Multiply(A, B); Exceptions Standard_DimensionError if matrices are of incompatible dimensions, i.e. if: - the number of columns of matrix Left, or the number of rows of matrix TLeft is not equal to the number of rows of matrix Right, or - the number of rows of matrix Left, or the number of columns of matrix TLeft is not equal to the number of rows of this matrix, or - the number of columns of matrix Right is not equal to the number of columns of this matrix.)#"  , py::arg("Right"))
        .def("Multiplied",
             (math_Matrix (math_Matrix::*)( const Standard_Real ) const) static_cast<math_Matrix (math_Matrix::*)( const Standard_Real ) const>(&math_Matrix::Multiplied),
             R"#(multiplies all the elements of a matrix by the value <Right>.)#"  , py::arg("Right"))
        .def("TMultiplied",
             (math_Matrix (math_Matrix::*)( const Standard_Real ) const) static_cast<math_Matrix (math_Matrix::*)( const Standard_Real ) const>(&math_Matrix::TMultiplied),
             R"#(Sets this matrix to the product of the transposed matrix TLeft, and the matrix Right. Example math_Matrix A (1, 3, 1, 3); math_Matrix B (1, 3, 1, 3); // A = ... , B = ... math_Matrix C (1, 3, 1, 3); C.Multiply(A, B); Exceptions Standard_DimensionError if matrices are of incompatible dimensions, i.e. if: - the number of columns of matrix Left, or the number of rows of matrix TLeft is not equal to the number of rows of matrix Right, or - the number of rows of matrix Left, or the number of columns of matrix TLeft is not equal to the number of rows of this matrix, or - the number of columns of matrix Right is not equal to the number of columns of this matrix.)#"  , py::arg("Right"))
        .def("Divide",
             (void (math_Matrix::*)( const Standard_Real ) ) static_cast<void (math_Matrix::*)( const Standard_Real ) >(&math_Matrix::Divide),
             R"#(divides all the elements of a matrix by the value <Right>. An exception is raised if <Right> = 0.)#"  , py::arg("Right"))
        .def("Divided",
             (math_Matrix (math_Matrix::*)( const Standard_Real ) const) static_cast<math_Matrix (math_Matrix::*)( const Standard_Real ) const>(&math_Matrix::Divided),
             R"#(divides all the elements of a matrix by the value <Right>. An exception is raised if <Right> = 0.)#"  , py::arg("Right"))
        .def("Add",
             (void (math_Matrix::*)( const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const math_Matrix & ) >(&math_Matrix::Add),
             R"#(adds the matrix <Right> to a matrix. An exception is raised if the dimensions are different. Warning In order to save time when copying matrices, it is preferable to use operator += or the function Add whenever possible.)#"  , py::arg("Right"))
        .def("Added",
             (math_Matrix (math_Matrix::*)( const math_Matrix & ) const) static_cast<math_Matrix (math_Matrix::*)( const math_Matrix & ) const>(&math_Matrix::Added),
             R"#(adds the matrix <Right> to a matrix. An exception is raised if the dimensions are different.)#"  , py::arg("Right"))
        .def("Add",
             (void (math_Matrix::*)( const math_Matrix & , const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const math_Matrix & , const math_Matrix & ) >(&math_Matrix::Add),
             R"#(sets a matrix to the addition of <Left> and <Right>. An exception is raised if the dimensions are different.)#"  , py::arg("Left"),  py::arg("Right"))
        .def("Subtract",
             (void (math_Matrix::*)( const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const math_Matrix & ) >(&math_Matrix::Subtract),
             R"#(Subtracts the matrix <Right> from <me>. An exception is raised if the dimensions are different. Warning In order to avoid time-consuming copying of matrices, it is preferable to use operator -= or the function Subtract whenever possible.)#"  , py::arg("Right"))
        .def("Subtracted",
             (math_Matrix (math_Matrix::*)( const math_Matrix & ) const) static_cast<math_Matrix (math_Matrix::*)( const math_Matrix & ) const>(&math_Matrix::Subtracted),
             R"#(Returns the result of the subtraction of <Right> from <me>. An exception is raised if the dimensions are different.)#"  , py::arg("Right"))
        .def("Set",
             (void (math_Matrix::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const math_Matrix & ) >(&math_Matrix::Set),
             R"#(Sets the values of this matrix, - from index I1 to index I2 on the row dimension, and - from index J1 to index J2 on the column dimension, to those of matrix M. Exceptions Standard_DimensionError if: - I1 is less than the index of the lower row bound of this matrix, or - I2 is greater than the index of the upper row bound of this matrix, or - J1 is less than the index of the lower column bound of this matrix, or - J2 is greater than the index of the upper column bound of this matrix, or - I2 - I1 + 1 is not equal to the number of rows of matrix M, or - J2 - J1 + 1 is not equal to the number of columns of matrix M.)#"  , py::arg("I1"),  py::arg("I2"),  py::arg("J1"),  py::arg("J2"),  py::arg("M"))
        .def("SetRow",
             (void (math_Matrix::*)( const Standard_Integer , const math_Vector & ) ) static_cast<void (math_Matrix::*)( const Standard_Integer , const math_Vector & ) >(&math_Matrix::SetRow),
             R"#(Sets the row of index Row of a matrix to the vector <V>. An exception is raised if the dimensions are different. An exception is raises if <Row> is inferior to the lower row of the matrix or <Row> is superior to the upper row.)#"  , py::arg("Row"),  py::arg("V"))
        .def("SetCol",
             (void (math_Matrix::*)( const Standard_Integer , const math_Vector & ) ) static_cast<void (math_Matrix::*)( const Standard_Integer , const math_Vector & ) >(&math_Matrix::SetCol),
             R"#(Sets the column of index Col of a matrix to the vector <V>. An exception is raised if the dimensions are different. An exception is raises if <Col> is inferior to the lower column of the matrix or <Col> is superior to the upper column.)#"  , py::arg("Col"),  py::arg("V"))
        .def("SetDiag",
             (void (math_Matrix::*)( const Standard_Real ) ) static_cast<void (math_Matrix::*)( const Standard_Real ) >(&math_Matrix::SetDiag),
             R"#(Sets the diagonal of a matrix to the value <Value>. An exception is raised if the matrix is not square.)#"  , py::arg("Value"))
        .def("Row",
             (math_Vector (math_Matrix::*)( const Standard_Integer ) const) static_cast<math_Vector (math_Matrix::*)( const Standard_Integer ) const>(&math_Matrix::Row),
             R"#(Returns the row of index Row of a matrix.)#"  , py::arg("Row"))
        .def("Col",
             (math_Vector (math_Matrix::*)( const Standard_Integer ) const) static_cast<math_Vector (math_Matrix::*)( const Standard_Integer ) const>(&math_Matrix::Col),
             R"#(Returns the column of index <Col> of a matrix.)#"  , py::arg("Col"))
        .def("SwapRow",
             (void (math_Matrix::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (math_Matrix::*)( const Standard_Integer , const Standard_Integer ) >(&math_Matrix::SwapRow),
             R"#(Swaps the rows of index Row1 and Row2. An exception is raised if <Row1> or <Row2> is out of range.)#"  , py::arg("Row1"),  py::arg("Row2"))
        .def("SwapCol",
             (void (math_Matrix::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (math_Matrix::*)( const Standard_Integer , const Standard_Integer ) >(&math_Matrix::SwapCol),
             R"#(Swaps the columns of index <Col1> and <Col2>. An exception is raised if <Col1> or <Col2> is out of range.)#"  , py::arg("Col1"),  py::arg("Col2"))
        .def("Transposed",
             (math_Matrix (math_Matrix::*)() const) static_cast<math_Matrix (math_Matrix::*)() const>(&math_Matrix::Transposed),
             R"#(Teturns the transposed of a matrix. An exception is raised if the matrix is not a square matrix.)#" )
        .def("Inverse",
             (math_Matrix (math_Matrix::*)() const) static_cast<math_Matrix (math_Matrix::*)() const>(&math_Matrix::Inverse),
             R"#(Returns the inverse of a matrix. Exception NotSquare is raised if the matrix is not square. Exception SingularMatrix is raised if the matrix is singular.)#" )
        .def("TMultiply",
             (math_Matrix (math_Matrix::*)( const math_Matrix & ) const) static_cast<math_Matrix (math_Matrix::*)( const math_Matrix & ) const>(&math_Matrix::TMultiply),
             R"#(Returns the product of the transpose of a matrix with the matrix <Right>. An exception is raised if the dimensions are different.)#"  , py::arg("Right"))
        .def("Multiply",
             (void (math_Matrix::*)( const math_Vector & , const math_Vector & ) ) static_cast<void (math_Matrix::*)( const math_Vector & , const math_Vector & ) >(&math_Matrix::Multiply),
             R"#(Computes a matrix as the product of 2 vectors. An exception is raised if the dimensions are different. <me> = <Left> * <Right>.)#"  , py::arg("Left"),  py::arg("Right"))
        .def("Multiply",
             (void (math_Matrix::*)( const math_Matrix & , const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const math_Matrix & , const math_Matrix & ) >(&math_Matrix::Multiply),
             R"#(Computes a matrix as the product of 2 matrixes. An exception is raised if the dimensions are different.)#"  , py::arg("Left"),  py::arg("Right"))
        .def("TMultiply",
             (void (math_Matrix::*)( const math_Matrix & , const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const math_Matrix & , const math_Matrix & ) >(&math_Matrix::TMultiply),
             R"#(Computes a matrix to the product of the transpose of the matrix <TLeft> with the matrix <Right>. An exception is raised if the dimensions are different.)#"  , py::arg("TLeft"),  py::arg("Right"))
        .def("Subtract",
             (void (math_Matrix::*)( const math_Matrix & , const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const math_Matrix & , const math_Matrix & ) >(&math_Matrix::Subtract),
             R"#(Sets a matrix to the Subtraction of the matrix <Right> from the matrix <Left>. An exception is raised if the dimensions are different.)#"  , py::arg("Left"),  py::arg("Right"))
        .def("Value",
             (Standard_Real & (math_Matrix::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real & (math_Matrix::*)( const Standard_Integer , const Standard_Integer ) const>(&math_Matrix::Value),
             R"#(Accesses (in read or write mode) the value of index <Row> and <Col> of a matrix. An exception is raised if <Row> and <Col> are not in the correct range.)#"  , py::arg("Row"),  py::arg("Col"))
        .def("Initialized",
             (math_Matrix & (math_Matrix::*)( const math_Matrix & ) ) static_cast<math_Matrix & (math_Matrix::*)( const math_Matrix & ) >(&math_Matrix::Initialized),
             R"#(Matrixes are copied through assignement. An exception is raised if the dimensions are differents.)#"  , py::arg("Other"))
        .def("Multiply",
             (void (math_Matrix::*)( const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const math_Matrix & ) >(&math_Matrix::Multiply),
             R"#(Returns the product of 2 matrices. An exception is raised if the dimensions are different.)#"  , py::arg("Right"))
        .def("Multiplied",
             (math_Matrix (math_Matrix::*)( const math_Matrix & ) const) static_cast<math_Matrix (math_Matrix::*)( const math_Matrix & ) const>(&math_Matrix::Multiplied),
             R"#(Returns the product of 2 matrices. An exception is raised if the dimensions are different.)#"  , py::arg("Right"))
        .def("Multiplied",
             (math_Vector (math_Matrix::*)( const math_Vector & ) const) static_cast<math_Vector (math_Matrix::*)( const math_Vector & ) const>(&math_Matrix::Multiplied),
             R"#(Returns the product of a matrix by a vector. An exception is raised if the dimensions are different.)#"  , py::arg("Right"))
        .def("Opposite",
             (math_Matrix (math_Matrix::*)() ) static_cast<math_Matrix (math_Matrix::*)() >(&math_Matrix::Opposite),
             R"#(Returns the opposite of a matrix. An exception is raised if the dimensions are different.)#" )
        .def("Dump",
             (void (math_Matrix::*)( std::ostream & ) const) static_cast<void (math_Matrix::*)( std::ostream & ) const>(&math_Matrix::Dump),
             R"#(Prints information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("Value",
             (Standard_Real & (math_Matrix::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real & (math_Matrix::*)( const Standard_Integer , const Standard_Integer ) const>(&math_Matrix::Value),
             R"#(Accesses (in read or write mode) the value of index <Row> and <Col> of a matrix. An exception is raised if <Row> and <Col> are not in the correct range.)#"  , py::arg("Row"),  py::arg("Col"))
        .def("RowNumber",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::RowNumber),
             R"#(Returns the number of rows of this matrix. Note that for a matrix A you always have the following relations: - A.RowNumber() = A.UpperRow() - A.LowerRow() + 1 - A.ColNumber() = A.UpperCol() - A.LowerCol() + 1 - the length of a row of A is equal to the number of columns of A, - the length of a column of A is equal to the number of rows of A.returns the row range of a matrix.)#" )
        .def("ColNumber",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::ColNumber),
             R"#(Returns the number of rows of this matrix. Note that for a matrix A you always have the following relations: - A.RowNumber() = A.UpperRow() - A.LowerRow() + 1 - A.ColNumber() = A.UpperCol() - A.LowerCol() + 1 - the length of a row of A is equal to the number of columns of A, - the length of a column of A is equal to the number of rows of A.returns the row range of a matrix.)#" )
        .def("LowerRow",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::LowerRow),
             R"#(Returns the value of the Lower index of the row range of a matrix.)#" )
        .def("UpperRow",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::UpperRow),
             R"#(Returns the Upper index of the row range of a matrix.)#" )
        .def("LowerCol",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::LowerCol),
             R"#(Returns the value of the Lower index of the column range of a matrix.)#" )
        .def("UpperCol",
             (Standard_Integer (math_Matrix::*)() const) static_cast<Standard_Integer (math_Matrix::*)() const>(&math_Matrix::UpperCol),
             R"#(Returns the value of the upper index of the column range of a matrix.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__imul__",
             (void (math_Matrix::*)( const Standard_Real ) ) static_cast<void (math_Matrix::*)( const Standard_Real ) >(&math_Matrix::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__mul__",
             (math_Matrix (math_Matrix::*)( const Standard_Real ) const) static_cast<math_Matrix (math_Matrix::*)( const Standard_Real ) const>(&math_Matrix::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__rmul__",
             (math_Matrix (math_Matrix::*)( const Standard_Real ) const) static_cast<math_Matrix (math_Matrix::*)( const Standard_Real ) const>(&math_Matrix::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__itruediv__",
             (void (math_Matrix::*)( const Standard_Real ) ) static_cast<void (math_Matrix::*)( const Standard_Real ) >(&math_Matrix::operator/=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__truediv__",
             (math_Matrix (math_Matrix::*)( const Standard_Real ) const) static_cast<math_Matrix (math_Matrix::*)( const Standard_Real ) const>(&math_Matrix::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__iadd__",
             (void (math_Matrix::*)( const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const math_Matrix & ) >(&math_Matrix::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__add__",
             (math_Matrix (math_Matrix::*)( const math_Matrix & ) const) static_cast<math_Matrix (math_Matrix::*)( const math_Matrix & ) const>(&math_Matrix::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__isub__",
             (void (math_Matrix::*)( const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const math_Matrix & ) >(&math_Matrix::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__sub__",
             (math_Matrix (math_Matrix::*)( const math_Matrix & ) const) static_cast<math_Matrix (math_Matrix::*)( const math_Matrix & ) const>(&math_Matrix::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__imul__",
             (void (math_Matrix::*)( const math_Matrix & ) ) static_cast<void (math_Matrix::*)( const math_Matrix & ) >(&math_Matrix::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__mul__",
             (math_Matrix (math_Matrix::*)( const math_Matrix & ) const) static_cast<math_Matrix (math_Matrix::*)( const math_Matrix & ) const>(&math_Matrix::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__rmul__",
             (math_Matrix (math_Matrix::*)( const math_Matrix & ) const) static_cast<math_Matrix (math_Matrix::*)( const math_Matrix & ) const>(&math_Matrix::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__mul__",
             (math_Vector (math_Matrix::*)( const math_Vector & ) const) static_cast<math_Vector (math_Matrix::*)( const math_Vector & ) const>(&math_Matrix::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__rmul__",
             (math_Vector (math_Matrix::*)( const math_Vector & ) const) static_cast<math_Vector (math_Matrix::*)( const math_Vector & ) const>(&math_Matrix::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Right"))
        .def("__sub__",
             (math_Matrix (math_Matrix::*)() ) static_cast<math_Matrix (math_Matrix::*)() >(&math_Matrix::operator-),
             py::is_operator(),
             R"#(None)#" )
    // additional methods and static methods
;


    static_cast<py::class_<math_MultipleVarFunction , shared_ptr<math_MultipleVarFunction>,Py_math_MultipleVarFunction >>(m.attr("math_MultipleVarFunction"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (math_MultipleVarFunction::*)() const) static_cast<Standard_Integer (math_MultipleVarFunction::*)() const>(&math_MultipleVarFunction::NbVariables),
             R"#(Returns the number of variables of the function)#" )
        .def("Value",
             (Standard_Boolean (math_MultipleVarFunction::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (math_MultipleVarFunction::*)( const math_Vector & , Standard_Real & ) >(&math_MultipleVarFunction::Value),
             R"#(Computes the values of the Functions <F> for the variable <X>. returns True if the computation was done successfully, otherwise false.)#"  , py::arg("X"),  py::arg("F"))
        .def("GetStateNumber",
             (Standard_Integer (math_MultipleVarFunction::*)() ) static_cast<Standard_Integer (math_MultipleVarFunction::*)() >(&math_MultipleVarFunction::GetStateNumber),
             R"#(return the state of the function corresponding to the latestt call of any methods associated to the function. This function is called by each of the algorithms described later which define the function Integer Algorithm::StateNumber(). The algorithm has the responsibility to call this function when it has found a solution (i.e. a root or a minimum) and has to maintain the association between the solution found and this StateNumber. Byu default, this method returns 0 (which means for the algorithm: no state has been saved). It is the responsibility of the programmer to decide if he needs to save the current state of the function and to return an Integer that allows retrieval of the state.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_NewtonFunctionRoot , shared_ptr<math_NewtonFunctionRoot> >>(m.attr("math_NewtonFunctionRoot"))
    // constructors
        .def(py::init< math_FunctionWithDerivative &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("Guess"),  py::arg("EpsX"),  py::arg("EpsF"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100) )
        .def(py::init< math_FunctionWithDerivative &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("F"),  py::arg("Guess"),  py::arg("EpsX"),  py::arg("EpsF"),  py::arg("A"),  py::arg("B"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100) )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("A"),  py::arg("B"),  py::arg("EpsX"),  py::arg("EpsF"),  py::arg("NbIterations")=static_cast<const Standard_Integer>(100) )
    // custom constructors
    // methods
        .def("Perform",
             (void (math_NewtonFunctionRoot::*)( math_FunctionWithDerivative & , const Standard_Real ) ) static_cast<void (math_NewtonFunctionRoot::*)( math_FunctionWithDerivative & , const Standard_Real ) >(&math_NewtonFunctionRoot::Perform),
             R"#(is used internally by the constructors.)#"  , py::arg("F"),  py::arg("Guess"))
        .def("IsDone",
             (Standard_Boolean (math_NewtonFunctionRoot::*)() const) static_cast<Standard_Boolean (math_NewtonFunctionRoot::*)() const>(&math_NewtonFunctionRoot::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Root",
             (Standard_Real (math_NewtonFunctionRoot::*)() const) static_cast<Standard_Real (math_NewtonFunctionRoot::*)() const>(&math_NewtonFunctionRoot::Root),
             R"#(Returns the value of the root of function <F>. Exception NotDone is raised if the root was not found.)#" )
        .def("Derivative",
             (Standard_Real (math_NewtonFunctionRoot::*)() const) static_cast<Standard_Real (math_NewtonFunctionRoot::*)() const>(&math_NewtonFunctionRoot::Derivative),
             R"#(returns the value of the derivative at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Value",
             (Standard_Real (math_NewtonFunctionRoot::*)() const) static_cast<Standard_Real (math_NewtonFunctionRoot::*)() const>(&math_NewtonFunctionRoot::Value),
             R"#(returns the value of the function at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_NewtonFunctionRoot::*)() const) static_cast<Standard_Integer (math_NewtonFunctionRoot::*)() const>(&math_NewtonFunctionRoot::NbIterations),
             R"#(Returns the number of iterations really done on the computation of the Root. Exception NotDone is raised if the root was not found.)#" )
        .def("Dump",
             (void (math_NewtonFunctionRoot::*)( std::ostream & ) const) static_cast<void (math_NewtonFunctionRoot::*)( std::ostream & ) const>(&math_NewtonFunctionRoot::Dump),
             R"#(Prints information on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_NewtonFunctionRoot::*)() const) static_cast<Standard_Boolean (math_NewtonFunctionRoot::*)() const>(&math_NewtonFunctionRoot::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Root",
             (Standard_Real (math_NewtonFunctionRoot::*)() const) static_cast<Standard_Real (math_NewtonFunctionRoot::*)() const>(&math_NewtonFunctionRoot::Root),
             R"#(Returns the value of the root of function <F>. Exception NotDone is raised if the root was not found.)#" )
        .def("Derivative",
             (Standard_Real (math_NewtonFunctionRoot::*)() const) static_cast<Standard_Real (math_NewtonFunctionRoot::*)() const>(&math_NewtonFunctionRoot::Derivative),
             R"#(returns the value of the derivative at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Value",
             (Standard_Real (math_NewtonFunctionRoot::*)() const) static_cast<Standard_Real (math_NewtonFunctionRoot::*)() const>(&math_NewtonFunctionRoot::Value),
             R"#(returns the value of the function at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_NewtonFunctionRoot::*)() const) static_cast<Standard_Integer (math_NewtonFunctionRoot::*)() const>(&math_NewtonFunctionRoot::NbIterations),
             R"#(Returns the number of iterations really done on the computation of the Root. Exception NotDone is raised if the root was not found.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_NewtonFunctionSetRoot , shared_ptr<math_NewtonFunctionSetRoot> >>(m.attr("math_NewtonFunctionSetRoot"))
    // constructors
        .def(py::init< math_FunctionSetWithDerivatives &,const math_Vector &,const Standard_Real,const Standard_Integer >()  , py::arg("theFunction"),  py::arg("theXTolerance"),  py::arg("theFTolerance"),  py::arg("tehNbIterations")=static_cast<const Standard_Integer>(100) )
        .def(py::init< math_FunctionSetWithDerivatives &,const Standard_Real,const Standard_Integer >()  , py::arg("theFunction"),  py::arg("theFTolerance"),  py::arg("theNbIterations")=static_cast<const Standard_Integer>(100) )
    // custom constructors
    // methods
        .def("SetTolerance",
             (void (math_NewtonFunctionSetRoot::*)( const math_Vector & ) ) static_cast<void (math_NewtonFunctionSetRoot::*)( const math_Vector & ) >(&math_NewtonFunctionSetRoot::SetTolerance),
             R"#(Initializes the tolerance values for the unknowns.)#"  , py::arg("XTol"))
        .def("Perform",
             (void (math_NewtonFunctionSetRoot::*)( math_FunctionSetWithDerivatives & , const math_Vector & ) ) static_cast<void (math_NewtonFunctionSetRoot::*)( math_FunctionSetWithDerivatives & , const math_Vector & ) >(&math_NewtonFunctionSetRoot::Perform),
             R"#(The Newton method is done to improve the root of the function from the initial guess point. The solution is found when: abs(Xj - Xj-1)(i) <= XTol(i) and abs(Fi) <= FTol for all i;)#"  , py::arg("theFunction"),  py::arg("theStartingPoint"))
        .def("Perform",
             (void (math_NewtonFunctionSetRoot::*)( math_FunctionSetWithDerivatives & , const math_Vector & , const math_Vector & , const math_Vector & ) ) static_cast<void (math_NewtonFunctionSetRoot::*)( math_FunctionSetWithDerivatives & , const math_Vector & , const math_Vector & , const math_Vector & ) >(&math_NewtonFunctionSetRoot::Perform),
             R"#(The Newton method is done to improve the root of the function from the initial guess point. Bounds may be given, to constrain the solution. The solution is found when: abs(Xj - Xj-1)(i) <= XTol(i) and abs(Fi) <= FTol for all i;)#"  , py::arg("theFunction"),  py::arg("theStartingPoint"),  py::arg("theInfBound"),  py::arg("theSupBound"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_NewtonFunctionSetRoot::*)( math_FunctionSetWithDerivatives & ) ) static_cast<Standard_Boolean (math_NewtonFunctionSetRoot::*)( math_FunctionSetWithDerivatives & ) >(&math_NewtonFunctionSetRoot::IsSolutionReached),
             R"#(This method is called at the end of each iteration to check if the solution is found. Vectors DeltaX, Fvalues and Jacobian Matrix are consistent with the possible solution Vector Sol and can be inspected to decide whether the solution is reached or not.)#"  , py::arg("F"))
        .def("IsDone",
             (Standard_Boolean (math_NewtonFunctionSetRoot::*)() const) static_cast<Standard_Boolean (math_NewtonFunctionSetRoot::*)() const>(&math_NewtonFunctionSetRoot::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Root",
             (const math_Vector & (math_NewtonFunctionSetRoot::*)() const) static_cast<const math_Vector & (math_NewtonFunctionSetRoot::*)() const>(&math_NewtonFunctionSetRoot::Root),
             R"#(Returns the value of the root of function F. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#" )
        .def("Root",
             (void (math_NewtonFunctionSetRoot::*)( math_Vector & ) const) static_cast<void (math_NewtonFunctionSetRoot::*)( math_Vector & ) const>(&math_NewtonFunctionSetRoot::Root),
             R"#(outputs the root vector in Root. Exception NotDone is raised if the root was not found. Exception DimensionError is raised if the range of Root is not equal to the range of the StartingPoint.)#"  , py::arg("Root"))
        .def("Derivative",
             (const math_Matrix & (math_NewtonFunctionSetRoot::*)() const) static_cast<const math_Matrix & (math_NewtonFunctionSetRoot::*)() const>(&math_NewtonFunctionSetRoot::Derivative),
             R"#(Returns the matrix value of the derivative at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Derivative",
             (void (math_NewtonFunctionSetRoot::*)( math_Matrix & ) const) static_cast<void (math_NewtonFunctionSetRoot::*)( math_Matrix & ) const>(&math_NewtonFunctionSetRoot::Derivative),
             R"#(Outputs the matrix value of the derivative at the root in Der. Exception NotDone is raised if the root was not found. Exception DimensionError is raised if the range of Der is not equal to the range of the StartingPoint.)#"  , py::arg("Der"))
        .def("FunctionSetErrors",
             (const math_Vector & (math_NewtonFunctionSetRoot::*)() const) static_cast<const math_Vector & (math_NewtonFunctionSetRoot::*)() const>(&math_NewtonFunctionSetRoot::FunctionSetErrors),
             R"#(Returns the vector value of the error done on the functions at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("FunctionSetErrors",
             (void (math_NewtonFunctionSetRoot::*)( math_Vector & ) const) static_cast<void (math_NewtonFunctionSetRoot::*)( math_Vector & ) const>(&math_NewtonFunctionSetRoot::FunctionSetErrors),
             R"#(Outputs the vector value of the error done on the functions at the root in Err. Exception NotDone is raised if the root was not found. Exception DimensionError is raised if the range of Err is not equal to the range of the StartingPoint.)#"  , py::arg("Err"))
        .def("NbIterations",
             (Standard_Integer (math_NewtonFunctionSetRoot::*)() const) static_cast<Standard_Integer (math_NewtonFunctionSetRoot::*)() const>(&math_NewtonFunctionSetRoot::NbIterations),
             R"#(Returns the number of iterations really done during the computation of the Root. Exception NotDone is raised if the root was not found.)#" )
        .def("Dump",
             (void (math_NewtonFunctionSetRoot::*)( std::ostream & ) const) static_cast<void (math_NewtonFunctionSetRoot::*)( std::ostream & ) const>(&math_NewtonFunctionSetRoot::Dump),
             R"#(Prints information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_NewtonFunctionSetRoot::*)( math_FunctionSetWithDerivatives & ) ) static_cast<Standard_Boolean (math_NewtonFunctionSetRoot::*)( math_FunctionSetWithDerivatives & ) >(&math_NewtonFunctionSetRoot::IsSolutionReached),
             R"#(This method is called at the end of each iteration to check if the solution is found. Vectors DeltaX, Fvalues and Jacobian Matrix are consistent with the possible solution Vector Sol and can be inspected to decide whether the solution is reached or not.)#"  , py::arg(""))
        .def("IsDone",
             (Standard_Boolean (math_NewtonFunctionSetRoot::*)() const) static_cast<Standard_Boolean (math_NewtonFunctionSetRoot::*)() const>(&math_NewtonFunctionSetRoot::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Root",
             (const math_Vector & (math_NewtonFunctionSetRoot::*)() const) static_cast<const math_Vector & (math_NewtonFunctionSetRoot::*)() const>(&math_NewtonFunctionSetRoot::Root),
             R"#(Returns the value of the root of function F. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false).)#" )
        .def("Root",
             (void (math_NewtonFunctionSetRoot::*)( math_Vector & ) const) static_cast<void (math_NewtonFunctionSetRoot::*)( math_Vector & ) const>(&math_NewtonFunctionSetRoot::Root),
             R"#(outputs the root vector in Root. Exception NotDone is raised if the root was not found. Exception DimensionError is raised if the range of Root is not equal to the range of the StartingPoint.)#"  , py::arg("Root"))
        .def("Derivative",
             (const math_Matrix & (math_NewtonFunctionSetRoot::*)() const) static_cast<const math_Matrix & (math_NewtonFunctionSetRoot::*)() const>(&math_NewtonFunctionSetRoot::Derivative),
             R"#(Returns the matrix value of the derivative at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("Derivative",
             (void (math_NewtonFunctionSetRoot::*)( math_Matrix & ) const) static_cast<void (math_NewtonFunctionSetRoot::*)( math_Matrix & ) const>(&math_NewtonFunctionSetRoot::Derivative),
             R"#(Outputs the matrix value of the derivative at the root in Der. Exception NotDone is raised if the root was not found. Exception DimensionError is raised if the range of Der is not equal to the range of the StartingPoint.)#"  , py::arg("Der"))
        .def("FunctionSetErrors",
             (const math_Vector & (math_NewtonFunctionSetRoot::*)() const) static_cast<const math_Vector & (math_NewtonFunctionSetRoot::*)() const>(&math_NewtonFunctionSetRoot::FunctionSetErrors),
             R"#(Returns the vector value of the error done on the functions at the root. Exception NotDone is raised if the root was not found.)#" )
        .def("FunctionSetErrors",
             (void (math_NewtonFunctionSetRoot::*)( math_Vector & ) const) static_cast<void (math_NewtonFunctionSetRoot::*)( math_Vector & ) const>(&math_NewtonFunctionSetRoot::FunctionSetErrors),
             R"#(Outputs the vector value of the error done on the functions at the root in Err. Exception NotDone is raised if the root was not found. Exception DimensionError is raised if the range of Err is not equal to the range of the StartingPoint.)#"  , py::arg("Err"))
        .def("NbIterations",
             (Standard_Integer (math_NewtonFunctionSetRoot::*)() const) static_cast<Standard_Integer (math_NewtonFunctionSetRoot::*)() const>(&math_NewtonFunctionSetRoot::NbIterations),
             R"#(Returns the number of iterations really done during the computation of the Root. Exception NotDone is raised if the root was not found.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_NewtonMinimum , shared_ptr<math_NewtonMinimum> >>(m.attr("math_NewtonMinimum"))
    // constructors
        .def(py::init< const math_MultipleVarFunctionWithHessian &,const Standard_Real,const Standard_Integer,const Standard_Real,const Standard_Boolean >()  , py::arg("theFunction"),  py::arg("theTolerance")=static_cast<const Standard_Real>(Precision :: Confusion ( )),  py::arg("theNbIterations")=static_cast<const Standard_Integer>(40),  py::arg("theConvexity")=static_cast<const Standard_Real>(1.0e-6),  py::arg("theWithSingularity")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Perform",
             (void (math_NewtonMinimum::*)( math_MultipleVarFunctionWithHessian & , const math_Vector & ) ) static_cast<void (math_NewtonMinimum::*)( math_MultipleVarFunctionWithHessian & , const math_Vector & ) >(&math_NewtonMinimum::Perform),
             R"#(Search the solution.)#"  , py::arg("theFunction"),  py::arg("theStartingPoint"))
        .def("IsConverged",
             (Standard_Boolean (math_NewtonMinimum::*)() const) static_cast<Standard_Boolean (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::IsConverged),
             R"#(This method is called at the end of each iteration to check the convergence: || Xi+1 - Xi || < Tolerance or || F(Xi+1) - F(Xi)|| < Tolerance * || F(Xi) || It can be redefined in a sub-class to implement a specific test.)#" )
        .def("IsDone",
             (Standard_Boolean (math_NewtonMinimum::*)() const) static_cast<Standard_Boolean (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::IsDone),
             R"#(Tests if an error has occured.)#" )
        .def("Location",
             (const math_Vector & (math_NewtonMinimum::*)() const) static_cast<const math_Vector & (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::Location),
             R"#(returns the location vector of the minimum. Exception NotDone is raised if an error has occured.)#" )
        .def("Location",
             (void (math_NewtonMinimum::*)( math_Vector & ) const) static_cast<void (math_NewtonMinimum::*)( math_Vector & ) const>(&math_NewtonMinimum::Location),
             R"#(outputs the location vector of the minimum in Loc. Exception NotDone is raised if an error has occured. Exception DimensionError is raised if the range of Loc is not equal to the range of the StartingPoint.)#"  , py::arg("Loc"))
        .def("SetBoundary",
             (void (math_NewtonMinimum::*)( const math_Vector & , const math_Vector & ) ) static_cast<void (math_NewtonMinimum::*)( const math_Vector & , const math_Vector & ) >(&math_NewtonMinimum::SetBoundary),
             R"#(Set boundaries.)#"  , py::arg("theLeftBorder"),  py::arg("theRightBorder"))
        .def("Minimum",
             (Standard_Real (math_NewtonMinimum::*)() const) static_cast<Standard_Real (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::Minimum),
             R"#(returns the value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Gradient",
             (const math_Vector & (math_NewtonMinimum::*)() const) static_cast<const math_Vector & (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::Gradient),
             R"#(returns the gradient vector at the minimum. Exception NotDone is raised if an error has occured.the minimum was not found.)#" )
        .def("Gradient",
             (void (math_NewtonMinimum::*)( math_Vector & ) const) static_cast<void (math_NewtonMinimum::*)( math_Vector & ) const>(&math_NewtonMinimum::Gradient),
             R"#(outputs the gradient vector at the minimum in Grad. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Grad is not equal to the range of the StartingPoint.)#"  , py::arg("Grad"))
        .def("NbIterations",
             (Standard_Integer (math_NewtonMinimum::*)() const) static_cast<Standard_Integer (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::NbIterations),
             R"#(returns the number of iterations really done in the calculation of the minimum. The exception NotDone is raised if an error has occured.)#" )
        .def("GetStatus",
             (math_Status (math_NewtonMinimum::*)() const) static_cast<math_Status (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::GetStatus),
             R"#(Returns the Status of computation. The exception NotDone is raised if an error has occured.)#" )
        .def("Dump",
             (void (math_NewtonMinimum::*)( std::ostream & ) const) static_cast<void (math_NewtonMinimum::*)( std::ostream & ) const>(&math_NewtonMinimum::Dump),
             R"#(Prints on the stream o information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsConverged",
             (Standard_Boolean (math_NewtonMinimum::*)() const) static_cast<Standard_Boolean (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::IsConverged),
             R"#(This method is called at the end of each iteration to check the convergence: || Xi+1 - Xi || < Tolerance or || F(Xi+1) - F(Xi)|| < Tolerance * || F(Xi) || It can be redefined in a sub-class to implement a specific test.)#" )
        .def("IsDone",
             (Standard_Boolean (math_NewtonMinimum::*)() const) static_cast<Standard_Boolean (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::IsDone),
             R"#(Tests if an error has occured.)#" )
        .def("Location",
             (const math_Vector & (math_NewtonMinimum::*)() const) static_cast<const math_Vector & (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::Location),
             R"#(returns the location vector of the minimum. Exception NotDone is raised if an error has occured.)#" )
        .def("Location",
             (void (math_NewtonMinimum::*)( math_Vector & ) const) static_cast<void (math_NewtonMinimum::*)( math_Vector & ) const>(&math_NewtonMinimum::Location),
             R"#(outputs the location vector of the minimum in Loc. Exception NotDone is raised if an error has occured. Exception DimensionError is raised if the range of Loc is not equal to the range of the StartingPoint.)#"  , py::arg("Loc"))
        .def("Minimum",
             (Standard_Real (math_NewtonMinimum::*)() const) static_cast<Standard_Real (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::Minimum),
             R"#(returns the value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Gradient",
             (const math_Vector & (math_NewtonMinimum::*)() const) static_cast<const math_Vector & (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::Gradient),
             R"#(returns the gradient vector at the minimum. Exception NotDone is raised if an error has occured.the minimum was not found.)#" )
        .def("Gradient",
             (void (math_NewtonMinimum::*)( math_Vector & ) const) static_cast<void (math_NewtonMinimum::*)( math_Vector & ) const>(&math_NewtonMinimum::Gradient),
             R"#(outputs the gradient vector at the minimum in Grad. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Grad is not equal to the range of the StartingPoint.)#"  , py::arg("Grad"))
        .def("NbIterations",
             (Standard_Integer (math_NewtonMinimum::*)() const) static_cast<Standard_Integer (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::NbIterations),
             R"#(returns the number of iterations really done in the calculation of the minimum. The exception NotDone is raised if an error has occured.)#" )
        .def("GetStatus",
             (math_Status (math_NewtonMinimum::*)() const) static_cast<math_Status (math_NewtonMinimum::*)() const>(&math_NewtonMinimum::GetStatus),
             R"#(Returns the Status of computation. The exception NotDone is raised if an error has occured.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_PSO , shared_ptr<math_PSO> >>(m.attr("math_PSO"))
    // constructors
        .def(py::init< math_MultipleVarFunction *,const math_Vector &,const math_Vector &,const math_Vector &,const Standard_Integer,const Standard_Integer >()  , py::arg("theFunc"),  py::arg("theLowBorder"),  py::arg("theUppBorder"),  py::arg("theSteps"),  py::arg("theNbParticles")=static_cast<const Standard_Integer>(32),  py::arg("theNbIter")=static_cast<const Standard_Integer>(100) )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
        .def("Perform",
             []( math_PSO &self , const math_Vector & theSteps,math_Vector & theOutPnt,const Standard_Integer theNbIter ){ Standard_Real  theValue; self.Perform(theSteps,theValue,theOutPnt,theNbIter); return std::make_tuple(theValue); },
             R"#(Perform computations, particles array is constructed inside of this function.)#"  , py::arg("theSteps"),  py::arg("theOutPnt"),  py::arg("theNbIter")=static_cast<const Standard_Integer>(100))
        .def("Perform",
             []( math_PSO &self , math_PSOParticlesPool & theParticles,Standard_Integer theNbParticles,math_Vector & theOutPnt,const Standard_Integer theNbIter ){ Standard_Real  theValue; self.Perform(theParticles,theNbParticles,theValue,theOutPnt,theNbIter); return std::make_tuple(theValue); },
             R"#(Perform computations with given particles array.)#"  , py::arg("theParticles"),  py::arg("theNbParticles"),  py::arg("theOutPnt"),  py::arg("theNbIter")=static_cast<const Standard_Integer>(100))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_PSOParticlesPool , shared_ptr<math_PSOParticlesPool> >>(m.attr("math_PSOParticlesPool"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theParticlesCount"),  py::arg("theDimensionCount") )
    // custom constructors
    // methods
        .def("GetParticle",
             (PSO_Particle * (math_PSOParticlesPool::*)( const Standard_Integer ) ) static_cast<PSO_Particle * (math_PSOParticlesPool::*)( const Standard_Integer ) >(&math_PSOParticlesPool::GetParticle),
             R"#(None)#"  , py::arg("theIdx"))
        .def("GetBestParticle",
             (PSO_Particle * (math_PSOParticlesPool::*)() ) static_cast<PSO_Particle * (math_PSOParticlesPool::*)() >(&math_PSOParticlesPool::GetBestParticle),
             R"#(None)#" )
        .def("GetWorstParticle",
             (PSO_Particle * (math_PSOParticlesPool::*)() ) static_cast<PSO_Particle * (math_PSOParticlesPool::*)() >(&math_PSOParticlesPool::GetWorstParticle),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_Powell , shared_ptr<math_Powell> >>(m.attr("math_Powell"))
    // constructors
        .def(py::init< const math_MultipleVarFunction &,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("theFunction"),  py::arg("theTolerance"),  py::arg("theNbIterations")=static_cast<const Standard_Integer>(200),  py::arg("theZEPS")=static_cast<const Standard_Real>(1.0e-12) )
    // custom constructors
    // methods
        .def("Perform",
             (void (math_Powell::*)( math_MultipleVarFunction & , const math_Vector & , const math_Matrix & ) ) static_cast<void (math_Powell::*)( math_MultipleVarFunction & , const math_Vector & , const math_Matrix & ) >(&math_Powell::Perform),
             R"#(Computes Powell minimization on the function F given theStartingPoint, and an initial matrix theStartingDirection whose columns contain the initial set of directions. The solution F = Fi is found when: 2.0 * abs(Fi - Fi-1) =< Tolerance * (abs(Fi) + abs(Fi-1) + ZEPS).)#"  , py::arg("theFunction"),  py::arg("theStartingPoint"),  py::arg("theStartingDirections"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_Powell::*)( math_MultipleVarFunction & ) ) static_cast<Standard_Boolean (math_Powell::*)( math_MultipleVarFunction & ) >(&math_Powell::IsSolutionReached),
             R"#(Solution F = Fi is found when: 2.0 * abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1)) + ZEPS. The maximum number of iterations allowed is given by NbIterations.)#"  , py::arg("theFunction"))
        .def("IsDone",
             (Standard_Boolean (math_Powell::*)() const) static_cast<Standard_Boolean (math_Powell::*)() const>(&math_Powell::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Location",
             (const math_Vector & (math_Powell::*)() const) static_cast<const math_Vector & (math_Powell::*)() const>(&math_Powell::Location),
             R"#(returns the location vector of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Location",
             (void (math_Powell::*)( math_Vector & ) const) static_cast<void (math_Powell::*)( math_Vector & ) const>(&math_Powell::Location),
             R"#(outputs the location vector of the minimum in Loc. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Loc is not equal to the range of the StartingPoint.)#"  , py::arg("Loc"))
        .def("Minimum",
             (Standard_Real (math_Powell::*)() const) static_cast<Standard_Real (math_Powell::*)() const>(&math_Powell::Minimum),
             R"#(Returns the value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_Powell::*)() const) static_cast<Standard_Integer (math_Powell::*)() const>(&math_Powell::NbIterations),
             R"#(Returns the number of iterations really done during the computation of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Dump",
             (void (math_Powell::*)( std::ostream & ) const) static_cast<void (math_Powell::*)( std::ostream & ) const>(&math_Powell::Dump),
             R"#(Prints information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsSolutionReached",
             (Standard_Boolean (math_Powell::*)( math_MultipleVarFunction & ) ) static_cast<Standard_Boolean (math_Powell::*)( math_MultipleVarFunction & ) >(&math_Powell::IsSolutionReached),
             R"#(Solution F = Fi is found when: 2.0 * abs(Fi - Fi-1) <= Tolerance * (abs(Fi) + abs(Fi-1)) + ZEPS. The maximum number of iterations allowed is given by NbIterations.)#"  , py::arg(""))
        .def("IsDone",
             (Standard_Boolean (math_Powell::*)() const) static_cast<Standard_Boolean (math_Powell::*)() const>(&math_Powell::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Location",
             (const math_Vector & (math_Powell::*)() const) static_cast<const math_Vector & (math_Powell::*)() const>(&math_Powell::Location),
             R"#(returns the location vector of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("Location",
             (void (math_Powell::*)( math_Vector & ) const) static_cast<void (math_Powell::*)( math_Vector & ) const>(&math_Powell::Location),
             R"#(outputs the location vector of the minimum in Loc. Exception NotDone is raised if the minimum was not found. Exception DimensionError is raised if the range of Loc is not equal to the range of the StartingPoint.)#"  , py::arg("Loc"))
        .def("Minimum",
             (Standard_Real (math_Powell::*)() const) static_cast<Standard_Real (math_Powell::*)() const>(&math_Powell::Minimum),
             R"#(Returns the value of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
        .def("NbIterations",
             (Standard_Integer (math_Powell::*)() const) static_cast<Standard_Integer (math_Powell::*)() const>(&math_Powell::NbIterations),
             R"#(Returns the number of iterations really done during the computation of the minimum. Exception NotDone is raised if the minimum was not found.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_SVD , shared_ptr<math_SVD> >>(m.attr("math_SVD"))
    // constructors
        .def(py::init< const math_Matrix & >()  , py::arg("A") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_SVD::*)() const) static_cast<Standard_Boolean (math_SVD::*)() const>(&math_SVD::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Solve",
             (void (math_SVD::*)( const math_Vector & , math_Vector & , const Standard_Real ) ) static_cast<void (math_SVD::*)( const math_Vector & , math_Vector & , const Standard_Real ) >(&math_SVD::Solve),
             R"#(Given the input Vector B this routine solves the set of linear equations A . X = B. Exception NotDone is raised if the decomposition of A was not done successfully. Exception DimensionError is raised if the range of B is not equal to the rowrange of A. Exception DimensionError is raised if the range of X is not equal to the colrange of A.)#"  , py::arg("B"),  py::arg("X"),  py::arg("Eps")=static_cast<const Standard_Real>(1.0e-6))
        .def("PseudoInverse",
             (void (math_SVD::*)( math_Matrix & , const Standard_Real ) ) static_cast<void (math_SVD::*)( math_Matrix & , const Standard_Real ) >(&math_SVD::PseudoInverse),
             R"#(Computes the inverse Inv of matrix A such as A * Inverse = Identity. Exceptions StdFail_NotDone if the algorithm fails (and IsDone returns false). Standard_DimensionError if the ranges of Inv are compatible with the ranges of A.)#"  , py::arg("Inv"),  py::arg("Eps")=static_cast<const Standard_Real>(1.0e-6))
        .def("Dump",
             (void (math_SVD::*)( std::ostream & ) const) static_cast<void (math_SVD::*)( std::ostream & ) const>(&math_SVD::Dump),
             R"#(Prints information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_SVD::*)() const) static_cast<Standard_Boolean (math_SVD::*)() const>(&math_SVD::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_TrigonometricFunctionRoots , shared_ptr<math_TrigonometricFunctionRoots> >>(m.attr("math_TrigonometricFunctionRoots"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"),  py::arg("E"),  py::arg("InfBound"),  py::arg("SupBound") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("D"),  py::arg("E"),  py::arg("InfBound"),  py::arg("SupBound") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("D"),  py::arg("E"),  py::arg("InfBound"),  py::arg("SupBound") )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_TrigonometricFunctionRoots::*)() const) static_cast<Standard_Boolean (math_TrigonometricFunctionRoots::*)() const>(&math_TrigonometricFunctionRoots::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("InfiniteRoots",
             (Standard_Boolean (math_TrigonometricFunctionRoots::*)() const) static_cast<Standard_Boolean (math_TrigonometricFunctionRoots::*)() const>(&math_TrigonometricFunctionRoots::InfiniteRoots),
             R"#(Returns true if there is an infinity of roots, otherwise returns false.)#" )
        .def("Value",
             (Standard_Real (math_TrigonometricFunctionRoots::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_TrigonometricFunctionRoots::*)( const Standard_Integer ) const>(&math_TrigonometricFunctionRoots::Value),
             R"#(Returns the solution of range Index. An exception is raised if NotDone. An exception is raised if Index>NbSolutions. An exception is raised if there is an infinity of solutions.)#"  , py::arg("Index"))
        .def("NbSolutions",
             (Standard_Integer (math_TrigonometricFunctionRoots::*)() const) static_cast<Standard_Integer (math_TrigonometricFunctionRoots::*)() const>(&math_TrigonometricFunctionRoots::NbSolutions),
             R"#(Returns the number of solutions found. An exception is raised if NotDone. An exception is raised if there is an infinity of solutions.)#" )
        .def("Dump",
             (void (math_TrigonometricFunctionRoots::*)( std::ostream & ) const) static_cast<void (math_TrigonometricFunctionRoots::*)( std::ostream & ) const>(&math_TrigonometricFunctionRoots::Dump),
             R"#(Prints information on the current state of the object.)#"  , py::arg("o"))
        .def("InfiniteRoots",
             (Standard_Boolean (math_TrigonometricFunctionRoots::*)() const) static_cast<Standard_Boolean (math_TrigonometricFunctionRoots::*)() const>(&math_TrigonometricFunctionRoots::InfiniteRoots),
             R"#(Returns true if there is an infinity of roots, otherwise returns false.)#" )
        .def("IsDone",
             (Standard_Boolean (math_TrigonometricFunctionRoots::*)() const) static_cast<Standard_Boolean (math_TrigonometricFunctionRoots::*)() const>(&math_TrigonometricFunctionRoots::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Value",
             (Standard_Real (math_TrigonometricFunctionRoots::*)( const Standard_Integer ) const) static_cast<Standard_Real (math_TrigonometricFunctionRoots::*)( const Standard_Integer ) const>(&math_TrigonometricFunctionRoots::Value),
             R"#(Returns the solution of range Index. An exception is raised if NotDone. An exception is raised if Index>NbSolutions. An exception is raised if there is an infinity of solutions.)#"  , py::arg("Index"))
        .def("NbSolutions",
             (Standard_Integer (math_TrigonometricFunctionRoots::*)() const) static_cast<Standard_Integer (math_TrigonometricFunctionRoots::*)() const>(&math_TrigonometricFunctionRoots::NbSolutions),
             R"#(Returns the number of solutions found. An exception is raised if NotDone. An exception is raised if there is an infinity of solutions.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_Uzawa , shared_ptr<math_Uzawa> >>(m.attr("math_Uzawa"))
    // constructors
        .def(py::init< const math_Matrix &,const math_Vector &,const math_Vector &,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("Cont"),  py::arg("Secont"),  py::arg("StartingPoint"),  py::arg("EpsLix")=static_cast<const Standard_Real>(1.0e-06),  py::arg("EpsLic")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(500) )
        .def(py::init< const math_Matrix &,const math_Vector &,const math_Vector &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Integer >()  , py::arg("Cont"),  py::arg("Secont"),  py::arg("StartingPoint"),  py::arg("Nci"),  py::arg("Nce"),  py::arg("EpsLix")=static_cast<const Standard_Real>(1.0e-06),  py::arg("EpsLic")=static_cast<const Standard_Real>(1.0e-06),  py::arg("NbIterations")=static_cast<const Standard_Integer>(500) )
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (math_Uzawa::*)() const) static_cast<Standard_Boolean (math_Uzawa::*)() const>(&math_Uzawa::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Value",
             (const math_Vector & (math_Uzawa::*)() const) static_cast<const math_Vector & (math_Uzawa::*)() const>(&math_Uzawa::Value),
             R"#(Returns the vector solution of the system above. An exception is raised if NotDone.)#" )
        .def("InitialError",
             (const math_Vector & (math_Uzawa::*)() const) static_cast<const math_Vector & (math_Uzawa::*)() const>(&math_Uzawa::InitialError),
             R"#(Returns the initial error Cont*StartingPoint-Secont. An exception is raised if NotDone.)#" )
        .def("Duale",
             (void (math_Uzawa::*)( math_Vector & ) const) static_cast<void (math_Uzawa::*)( math_Vector & ) const>(&math_Uzawa::Duale),
             R"#(returns the duale variables V of the systeme.)#"  , py::arg("V"))
        .def("Error",
             (const math_Vector & (math_Uzawa::*)() const) static_cast<const math_Vector & (math_Uzawa::*)() const>(&math_Uzawa::Error),
             R"#(Returns the difference between X solution and the StartingPoint. An exception is raised if NotDone.)#" )
        .def("NbIterations",
             (Standard_Integer (math_Uzawa::*)() const) static_cast<Standard_Integer (math_Uzawa::*)() const>(&math_Uzawa::NbIterations),
             R"#(returns the number of iterations really done. An exception is raised if NotDone.)#" )
        .def("InverseCont",
             (const math_Matrix & (math_Uzawa::*)() const) static_cast<const math_Matrix & (math_Uzawa::*)() const>(&math_Uzawa::InverseCont),
             R"#(returns the inverse matrix of (C * Transposed(C)). This result is needed for the computation of the gradient when approximating a curve.)#" )
        .def("Dump",
             (void (math_Uzawa::*)( std::ostream & ) const) static_cast<void (math_Uzawa::*)( std::ostream & ) const>(&math_Uzawa::Dump),
             R"#(Prints information on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (math_Uzawa::*)() const) static_cast<Standard_Boolean (math_Uzawa::*)() const>(&math_Uzawa::IsDone),
             R"#(Returns true if the computations are successful, otherwise returns false.)#" )
        .def("Value",
             (const math_Vector & (math_Uzawa::*)() const) static_cast<const math_Vector & (math_Uzawa::*)() const>(&math_Uzawa::Value),
             R"#(Returns the vector solution of the system above. An exception is raised if NotDone.)#" )
        .def("InitialError",
             (const math_Vector & (math_Uzawa::*)() const) static_cast<const math_Vector & (math_Uzawa::*)() const>(&math_Uzawa::InitialError),
             R"#(Returns the initial error Cont*StartingPoint-Secont. An exception is raised if NotDone.)#" )
        .def("Error",
             (const math_Vector & (math_Uzawa::*)() const) static_cast<const math_Vector & (math_Uzawa::*)() const>(&math_Uzawa::Error),
             R"#(Returns the difference between X solution and the StartingPoint. An exception is raised if NotDone.)#" )
        .def("NbIterations",
             (Standard_Integer (math_Uzawa::*)() const) static_cast<Standard_Integer (math_Uzawa::*)() const>(&math_Uzawa::NbIterations),
             R"#(returns the number of iterations really done. An exception is raised if NotDone.)#" )
        .def("InverseCont",
             (const math_Matrix & (math_Uzawa::*)() const) static_cast<const math_Matrix & (math_Uzawa::*)() const>(&math_Uzawa::InverseCont),
             R"#(returns the inverse matrix of (C * Transposed(C)). This result is needed for the computation of the gradient when approximating a curve.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_ValueAndWeight , shared_ptr<math_ValueAndWeight> >>(m.attr("math_ValueAndWeight"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< Standard_Real,Standard_Real >()  , py::arg("theValue"),  py::arg("theWeight") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Real (math_ValueAndWeight::*)() const) static_cast<Standard_Real (math_ValueAndWeight::*)() const>(&math_ValueAndWeight::Value),
             R"#(None)#" )
        .def("Weight",
             (Standard_Real (math_ValueAndWeight::*)() const) static_cast<Standard_Real (math_ValueAndWeight::*)() const>(&math_ValueAndWeight::Weight),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_Vector , shared_ptr<math_Vector> >>(m.attr("math_Vector"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theInitialValue") )
        .def(py::init< const Standard_Real *,const Standard_Integer,const Standard_Integer >()  , py::arg("theTab"),  py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const gp_XY & >()  , py::arg("Other") )
        .def(py::init< const gp_XYZ & >()  , py::arg("Other") )
        .def(py::init< const math_Vector & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Init",
             (void (math_Vector::*)( const Standard_Real ) ) static_cast<void (math_Vector::*)( const Standard_Real ) >(&math_Vector::Init),
             R"#(Initialize all the elements of a vector with "theInitialValue".)#"  , py::arg("theInitialValue"))
        .def("Length",
             (Standard_Integer (math_Vector::*)() const) static_cast<Standard_Integer (math_Vector::*)() const>(&math_Vector::Length),
             R"#(Returns the length of a vector)#" )
        .def("Lower",
             (Standard_Integer (math_Vector::*)() const) static_cast<Standard_Integer (math_Vector::*)() const>(&math_Vector::Lower),
             R"#(Returns the value of the theLower index of a vector.)#" )
        .def("Upper",
             (Standard_Integer (math_Vector::*)() const) static_cast<Standard_Integer (math_Vector::*)() const>(&math_Vector::Upper),
             R"#(Returns the value of the theUpper index of a vector.)#" )
        .def("Norm",
             (Standard_Real (math_Vector::*)() const) static_cast<Standard_Real (math_Vector::*)() const>(&math_Vector::Norm),
             R"#(Returns the value or the square of the norm of this vector.)#" )
        .def("Norm2",
             (Standard_Real (math_Vector::*)() const) static_cast<Standard_Real (math_Vector::*)() const>(&math_Vector::Norm2),
             R"#(Returns the value of the square of the norm of a vector.)#" )
        .def("Max",
             (Standard_Integer (math_Vector::*)() const) static_cast<Standard_Integer (math_Vector::*)() const>(&math_Vector::Max),
             R"#(Returns the value of the "Index" of the maximum element of a vector.)#" )
        .def("Min",
             (Standard_Integer (math_Vector::*)() const) static_cast<Standard_Integer (math_Vector::*)() const>(&math_Vector::Min),
             R"#(Returns the value of the "Index" of the minimum element of a vector.)#" )
        .def("Normalize",
             (void (math_Vector::*)() ) static_cast<void (math_Vector::*)() >(&math_Vector::Normalize),
             R"#(Normalizes this vector (the norm of the result is equal to 1.0) and assigns the result to this vector Exceptions Standard_NullValue if this vector is null (i.e. if its norm is less than or equal to Standard_Real::RealEpsilon().)#" )
        .def("Normalized",
             (math_Vector (math_Vector::*)() const) static_cast<math_Vector (math_Vector::*)() const>(&math_Vector::Normalized),
             R"#(Normalizes this vector (the norm of the result is equal to 1.0) and creates a new vector Exceptions Standard_NullValue if this vector is null (i.e. if its norm is less than or equal to Standard_Real::RealEpsilon().)#" )
        .def("Invert",
             (void (math_Vector::*)() ) static_cast<void (math_Vector::*)() >(&math_Vector::Invert),
             R"#(Inverts this vector and assigns the result to this vector.)#" )
        .def("Inverse",
             (math_Vector (math_Vector::*)() const) static_cast<math_Vector (math_Vector::*)() const>(&math_Vector::Inverse),
             R"#(Inverts this vector and creates a new vector.)#" )
        .def("Set",
             (void (math_Vector::*)( const Standard_Integer , const Standard_Integer , const math_Vector & ) ) static_cast<void (math_Vector::*)( const Standard_Integer , const Standard_Integer , const math_Vector & ) >(&math_Vector::Set),
             R"#(sets a vector from "theI1" to "theI2" to the vector "theV"; An exception is raised if "theI1" is less than "LowerIndex" or "theI2" is greater than "UpperIndex" or "theI1" is greater than "theI2". An exception is raised if "theI2-theI1+1" is different from the "Length" of "theV".)#"  , py::arg("theI1"),  py::arg("theI2"),  py::arg("theV"))
        .def("Slice",
             (math_Vector (math_Vector::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<math_Vector (math_Vector::*)( const Standard_Integer , const Standard_Integer ) const>(&math_Vector::Slice),
             R"#(Creates a new vector by inverting the values of this vector between indexes "theI1" and "theI2". If the values of this vector were (1., 2., 3., 4.,5., 6.), by slicing it between indexes 2 and 5 the values of the resulting vector are (1., 5., 4., 3., 2., 6.))#"  , py::arg("theI1"),  py::arg("theI2"))
        .def("Multiply",
             (void (math_Vector::*)( const Standard_Real ) ) static_cast<void (math_Vector::*)( const Standard_Real ) >(&math_Vector::Multiply),
             R"#(returns the product of a vector and a real value.)#"  , py::arg("theRight"))
        .def("Multiplied",
             (math_Vector (math_Vector::*)( const Standard_Real ) const) static_cast<math_Vector (math_Vector::*)( const Standard_Real ) const>(&math_Vector::Multiplied),
             R"#(returns the product of a vector and a real value.)#"  , py::arg("theRight"))
        .def("TMultiplied",
             (math_Vector (math_Vector::*)( const Standard_Real ) const) static_cast<math_Vector (math_Vector::*)( const Standard_Real ) const>(&math_Vector::TMultiplied),
             R"#(returns the product of a vector and a real value.)#"  , py::arg("theRight"))
        .def("Divide",
             (void (math_Vector::*)( const Standard_Real ) ) static_cast<void (math_Vector::*)( const Standard_Real ) >(&math_Vector::Divide),
             R"#(divides a vector by the value "theRight". An exception is raised if "theRight" = 0.)#"  , py::arg("theRight"))
        .def("Divided",
             (math_Vector (math_Vector::*)( const Standard_Real ) const) static_cast<math_Vector (math_Vector::*)( const Standard_Real ) const>(&math_Vector::Divided),
             R"#(divides a vector by the value "theRight". An exception is raised if "theRight" = 0.)#"  , py::arg("theRight"))
        .def("Add",
             (void (math_Vector::*)( const math_Vector & ) ) static_cast<void (math_Vector::*)( const math_Vector & ) >(&math_Vector::Add),
             R"#(adds the vector "theRight" to a vector. An exception is raised if the vectors have not the same length. Warning In order to avoid time-consuming copying of vectors, it is preferable to use operator += or the function Add whenever possible.)#"  , py::arg("theRight"))
        .def("Added",
             (math_Vector (math_Vector::*)( const math_Vector & ) const) static_cast<math_Vector (math_Vector::*)( const math_Vector & ) const>(&math_Vector::Added),
             R"#(adds the vector theRight to a vector. An exception is raised if the vectors have not the same length. An exception is raised if the lengths are not equal.)#"  , py::arg("theRight"))
        .def("Multiply",
             (void (math_Vector::*)( const math_Vector & , const math_Matrix & ) ) static_cast<void (math_Vector::*)( const math_Vector & , const math_Matrix & ) >(&math_Vector::Multiply),
             R"#(sets a vector to the product of the vector "theLeft" with the matrix "theRight".)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Multiply",
             (void (math_Vector::*)( const math_Matrix & , const math_Vector & ) ) static_cast<void (math_Vector::*)( const math_Matrix & , const math_Vector & ) >(&math_Vector::Multiply),
             R"#(sets a vector to the product of the matrix "theLeft" with the vector "theRight".)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("TMultiply",
             (void (math_Vector::*)( const math_Matrix & , const math_Vector & ) ) static_cast<void (math_Vector::*)( const math_Matrix & , const math_Vector & ) >(&math_Vector::TMultiply),
             R"#(sets a vector to the product of the transpose of the matrix "theTLeft" by the vector "theRight".)#"  , py::arg("theTLeft"),  py::arg("theRight"))
        .def("TMultiply",
             (void (math_Vector::*)( const math_Vector & , const math_Matrix & ) ) static_cast<void (math_Vector::*)( const math_Vector & , const math_Matrix & ) >(&math_Vector::TMultiply),
             R"#(sets a vector to the product of the vector "theLeft" by the transpose of the matrix "theTRight".)#"  , py::arg("theLeft"),  py::arg("theTRight"))
        .def("Add",
             (void (math_Vector::*)( const math_Vector & , const math_Vector & ) ) static_cast<void (math_Vector::*)( const math_Vector & , const math_Vector & ) >(&math_Vector::Add),
             R"#(sets a vector to the sum of the vector "theLeft" and the vector "theRight". An exception is raised if the lengths are different.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Subtract",
             (void (math_Vector::*)( const math_Vector & , const math_Vector & ) ) static_cast<void (math_Vector::*)( const math_Vector & , const math_Vector & ) >(&math_Vector::Subtract),
             R"#(sets a vector to the Subtraction of the vector theRight from the vector theLeft. An exception is raised if the vectors have not the same length. Warning In order to avoid time-consuming copying of vectors, it is preferable to use operator -= or the function Subtract whenever possible.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Value",
             (const Standard_Real & (math_Vector::*)( const Standard_Integer ) const) static_cast<const Standard_Real & (math_Vector::*)( const Standard_Integer ) const>(&math_Vector::Value),
             R"#(accesses the value of index "theNum" of a vector.)#"  , py::arg("theNum"))
        .def("Value",
             (Standard_Real & (math_Vector::*)( const Standard_Integer ) ) static_cast<Standard_Real & (math_Vector::*)( const Standard_Integer ) >(&math_Vector::Value),
             R"#(accesses (in read or write mode) the value of index "theNum" of a vector.)#"  , py::arg("theNum"))
        .def("Initialized",
             (math_Vector & (math_Vector::*)( const math_Vector & ) ) static_cast<math_Vector & (math_Vector::*)( const math_Vector & ) >(&math_Vector::Initialized),
             R"#(Initialises a vector by copying "theOther". An exception is raised if the Lengths are differents.)#"  , py::arg("theOther"))
        .def("Multiplied",
             (Standard_Real (math_Vector::*)( const math_Vector & ) const) static_cast<Standard_Real (math_Vector::*)( const math_Vector & ) const>(&math_Vector::Multiplied),
             R"#(returns the inner product of 2 vectors. An exception is raised if the lengths are not equal.)#"  , py::arg("theRight"))
        .def("Multiplied",
             (math_Vector (math_Vector::*)( const math_Matrix & ) const) static_cast<math_Vector (math_Vector::*)( const math_Matrix & ) const>(&math_Vector::Multiplied),
             R"#(returns the product of a vector by a matrix.)#"  , py::arg("theRight"))
        .def("Opposite",
             (math_Vector (math_Vector::*)() ) static_cast<math_Vector (math_Vector::*)() >(&math_Vector::Opposite),
             R"#(returns the opposite of a vector.)#" )
        .def("Subtract",
             (void (math_Vector::*)( const math_Vector & ) ) static_cast<void (math_Vector::*)( const math_Vector & ) >(&math_Vector::Subtract),
             R"#(returns the subtraction of "theRight" from "me". An exception is raised if the vectors have not the same length.)#"  , py::arg("theRight"))
        .def("Subtracted",
             (math_Vector (math_Vector::*)( const math_Vector & ) const) static_cast<math_Vector (math_Vector::*)( const math_Vector & ) const>(&math_Vector::Subtracted),
             R"#(returns the subtraction of "theRight" from "me". An exception is raised if the vectors have not the same length.)#"  , py::arg("theRight"))
        .def("Multiply",
             (void (math_Vector::*)( const Standard_Real , const math_Vector & ) ) static_cast<void (math_Vector::*)( const Standard_Real , const math_Vector & ) >(&math_Vector::Multiply),
             R"#(returns the multiplication of a real by a vector. "me" = "theLeft" * "theRight")#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Dump",
             (void (math_Vector::*)( std::ostream & ) const) static_cast<void (math_Vector::*)( std::ostream & ) const>(&math_Vector::Dump),
             R"#(Prints information on the current state of the object. Is used to redefine the operator <<.)#"  , py::arg("theO"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
        .def("__imul__",
             (void (math_Vector::*)( const Standard_Real ) ) static_cast<void (math_Vector::*)( const Standard_Real ) >(&math_Vector::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__mul__",
             (math_Vector (math_Vector::*)( const Standard_Real ) const) static_cast<math_Vector (math_Vector::*)( const Standard_Real ) const>(&math_Vector::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__rmul__",
             (math_Vector (math_Vector::*)( const Standard_Real ) const) static_cast<math_Vector (math_Vector::*)( const Standard_Real ) const>(&math_Vector::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__itruediv__",
             (void (math_Vector::*)( const Standard_Real ) ) static_cast<void (math_Vector::*)( const Standard_Real ) >(&math_Vector::operator/=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__truediv__",
             (math_Vector (math_Vector::*)( const Standard_Real ) const) static_cast<math_Vector (math_Vector::*)( const Standard_Real ) const>(&math_Vector::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__iadd__",
             (void (math_Vector::*)( const math_Vector & ) ) static_cast<void (math_Vector::*)( const math_Vector & ) >(&math_Vector::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__add__",
             (math_Vector (math_Vector::*)( const math_Vector & ) const) static_cast<math_Vector (math_Vector::*)( const math_Vector & ) const>(&math_Vector::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__mul__",
             (Standard_Real (math_Vector::*)( const math_Vector & ) const) static_cast<Standard_Real (math_Vector::*)( const math_Vector & ) const>(&math_Vector::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__rmul__",
             (Standard_Real (math_Vector::*)( const math_Vector & ) const) static_cast<Standard_Real (math_Vector::*)( const math_Vector & ) const>(&math_Vector::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__mul__",
             (math_Vector (math_Vector::*)( const math_Matrix & ) const) static_cast<math_Vector (math_Vector::*)( const math_Matrix & ) const>(&math_Vector::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__rmul__",
             (math_Vector (math_Vector::*)( const math_Matrix & ) const) static_cast<math_Vector (math_Vector::*)( const math_Matrix & ) const>(&math_Vector::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__sub__",
             (math_Vector (math_Vector::*)() ) static_cast<math_Vector (math_Vector::*)() >(&math_Vector::operator-),
             py::is_operator(),
             R"#(None)#" )
        .def("__isub__",
             (void (math_Vector::*)( const math_Vector & ) ) static_cast<void (math_Vector::*)( const math_Vector & ) >(&math_Vector::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
        .def("__sub__",
             (math_Vector (math_Vector::*)( const math_Vector & ) const) static_cast<math_Vector (math_Vector::*)( const math_Vector & ) const>(&math_Vector::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("theRight"))
    // additional methods and static methods
;


    static_cast<py::class_<math_FunctionSetWithDerivatives , shared_ptr<math_FunctionSetWithDerivatives>,Py_math_FunctionSetWithDerivatives , math_FunctionSet>>(m.attr("math_FunctionSetWithDerivatives"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (math_FunctionSetWithDerivatives::*)() const) static_cast<Standard_Integer (math_FunctionSetWithDerivatives::*)() const>(&math_FunctionSetWithDerivatives::NbVariables),
             R"#(Returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (math_FunctionSetWithDerivatives::*)() const) static_cast<Standard_Integer (math_FunctionSetWithDerivatives::*)() const>(&math_FunctionSetWithDerivatives::NbEquations),
             R"#(Returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (math_FunctionSetWithDerivatives::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (math_FunctionSetWithDerivatives::*)( const math_Vector & , math_Vector & ) >(&math_FunctionSetWithDerivatives::Value),
             R"#(Computes the values <F> of the Functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (math_FunctionSetWithDerivatives::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (math_FunctionSetWithDerivatives::*)( const math_Vector & , math_Matrix & ) >(&math_FunctionSetWithDerivatives::Derivatives),
             R"#(Returns the values <D> of the derivatives for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (math_FunctionSetWithDerivatives::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (math_FunctionSetWithDerivatives::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&math_FunctionSetWithDerivatives::Values),
             R"#(returns the values <F> of the functions and the derivatives <D> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_FunctionWithDerivative , shared_ptr<math_FunctionWithDerivative>,Py_math_FunctionWithDerivative , math_Function>>(m.attr("math_FunctionWithDerivative"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (math_FunctionWithDerivative::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (math_FunctionWithDerivative::*)( const Standard_Real , Standard_Real & ) >(&math_FunctionWithDerivative::Value),
             R"#(Computes the value <F>of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (math_FunctionWithDerivative::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (math_FunctionWithDerivative::*)( const Standard_Real , Standard_Real & ) >(&math_FunctionWithDerivative::Derivative),
             R"#(Computes the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (math_FunctionWithDerivative::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (math_FunctionWithDerivative::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&math_FunctionWithDerivative::Values),
             R"#(Computes the value <F> and the derivative <D> of the function for the variable <X>. Returns True if the calculation were successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_MultipleVarFunctionWithGradient , shared_ptr<math_MultipleVarFunctionWithGradient>,Py_math_MultipleVarFunctionWithGradient , math_MultipleVarFunction>>(m.attr("math_MultipleVarFunctionWithGradient"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (math_MultipleVarFunctionWithGradient::*)() const) static_cast<Standard_Integer (math_MultipleVarFunctionWithGradient::*)() const>(&math_MultipleVarFunctionWithGradient::NbVariables),
             R"#(Returns the number of variables of the function.)#" )
        .def("Value",
             (Standard_Boolean (math_MultipleVarFunctionWithGradient::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (math_MultipleVarFunctionWithGradient::*)( const math_Vector & , Standard_Real & ) >(&math_MultipleVarFunctionWithGradient::Value),
             R"#(Computes the values of the Functions <F> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (math_MultipleVarFunctionWithGradient::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (math_MultipleVarFunctionWithGradient::*)( const math_Vector & , math_Vector & ) >(&math_MultipleVarFunctionWithGradient::Gradient),
             R"#(Computes the gradient <G> of the functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (math_MultipleVarFunctionWithGradient::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (math_MultipleVarFunctionWithGradient::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&math_MultipleVarFunctionWithGradient::Values),
             R"#(computes the value <F> and the gradient <G> of the functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_MultipleVarFunctionWithHessian , shared_ptr<math_MultipleVarFunctionWithHessian>,Py_math_MultipleVarFunctionWithHessian , math_MultipleVarFunctionWithGradient>>(m.attr("math_MultipleVarFunctionWithHessian"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (math_MultipleVarFunctionWithHessian::*)() const) static_cast<Standard_Integer (math_MultipleVarFunctionWithHessian::*)() const>(&math_MultipleVarFunctionWithHessian::NbVariables),
             R"#(returns the number of variables of the function.)#" )
        .def("Value",
             (Standard_Boolean (math_MultipleVarFunctionWithHessian::*)( const math_Vector & , Standard_Real & ) ) static_cast<Standard_Boolean (math_MultipleVarFunctionWithHessian::*)( const math_Vector & , Standard_Real & ) >(&math_MultipleVarFunctionWithHessian::Value),
             R"#(computes the values of the Functions <F> for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Gradient",
             (Standard_Boolean (math_MultipleVarFunctionWithHessian::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (math_MultipleVarFunctionWithHessian::*)( const math_Vector & , math_Vector & ) >(&math_MultipleVarFunctionWithHessian::Gradient),
             R"#(computes the gradient <G> of the functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (math_MultipleVarFunctionWithHessian::*)( const math_Vector & , Standard_Real & , math_Vector & ) ) static_cast<Standard_Boolean (math_MultipleVarFunctionWithHessian::*)( const math_Vector & , Standard_Real & , math_Vector & ) >(&math_MultipleVarFunctionWithHessian::Values),
             R"#(computes the value <F> and the gradient <G> of the functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"))
        .def("Values",
             (Standard_Boolean (math_MultipleVarFunctionWithHessian::*)( const math_Vector & , Standard_Real & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (math_MultipleVarFunctionWithHessian::*)( const math_Vector & , Standard_Real & , math_Vector & , math_Matrix & ) >(&math_MultipleVarFunctionWithHessian::Values),
             R"#(computes the value <F>, the gradient <G> and the hessian <H> of the functions for the variable <X>. Returns True if the computation was done successfully, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("G"),  py::arg("H"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<math_TrigonometricEquationFunction , shared_ptr<math_TrigonometricEquationFunction> , math_FunctionWithDerivative>>(m.attr("math_TrigonometricEquationFunction"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D"),  py::arg("E") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (math_TrigonometricEquationFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (math_TrigonometricEquationFunction::*)( const Standard_Real , Standard_Real & ) >(&math_TrigonometricEquationFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (math_TrigonometricEquationFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (math_TrigonometricEquationFunction::*)( const Standard_Real , Standard_Real & ) >(&math_TrigonometricEquationFunction::Derivative),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (math_TrigonometricEquationFunction::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (math_TrigonometricEquationFunction::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&math_TrigonometricEquationFunction::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\math_FunctionSample.hxx
// ./opencascade\math_FunctionRoots.hxx
// ./opencascade\math_DirectPolynomialRoots.hxx
// ./opencascade\math_NewtonFunctionSetRoot.hxx
// ./opencascade\math_FRPR.hxx
// ./opencascade\math_BrentMinimum.hxx
// ./opencascade\math_Vector.hxx
// ./opencascade\math_GaussSetIntegration.hxx
// ./opencascade\math_FunctionSet.hxx
// ./opencascade\math.hxx
// ./opencascade\math_BFGS.hxx
// ./opencascade\math_Crout.hxx
// ./opencascade\math_GaussMultipleIntegration.hxx
// ./opencascade\math_GaussSingleIntegration.hxx
// ./opencascade\math_Array1OfValueAndWeight.hxx
// ./opencascade\math_Gauss.hxx
// ./opencascade\math_NewtonMinimum.hxx
// ./opencascade\math_Status.hxx
// ./opencascade\math_FunctionAllRoots.hxx
// ./opencascade\math_FunctionRoot.hxx
// ./opencascade\math_KronrodSingleIntegration.hxx
// ./opencascade\math_FunctionWithDerivative.hxx
// ./opencascade\math_PSO.hxx
// ./opencascade\math_GaussLeastSquare.hxx
// ./opencascade\math_MultipleVarFunctionWithGradient.hxx
// ./opencascade\math_NotSquare.hxx
// ./opencascade\math_IntegerVector.hxx
// ./opencascade\math_SVD.hxx
// ./opencascade\math_BracketedRoot.hxx
// ./opencascade\math_ComputeKronrodPointsAndWeights.hxx
// ./opencascade\math_Householder.hxx
// ./opencascade\math_Jacobi.hxx
// ./opencascade\math_ComputeGaussPointsAndWeights.hxx
// ./opencascade\math_SingularMatrix.hxx
// ./opencascade\math_MultipleVarFunction.hxx
// ./opencascade\math_TrigonometricEquationFunction.hxx
// ./opencascade\math_Uzawa.hxx
// ./opencascade\math_BullardGenerator.hxx
// ./opencascade\math_FunctionSetWithDerivatives.hxx
// ./opencascade\math_DoubleTab.hxx
// ./opencascade\math_PSOParticlesPool.hxx
// ./opencascade\math_GlobOptMin.hxx
// ./opencascade\math_BissecNewton.hxx
// ./opencascade\math_MultipleVarFunctionWithHessian.hxx
// ./opencascade\math_ValueAndWeight.hxx
// ./opencascade\math_BracketMinimum.hxx
// ./opencascade\math_Recipes.hxx
    m.def("LU_Decompose",
          (Standard_Integer (*)( math_Matrix & , math_IntegerVector & , Standard_Real & , Standard_Real , const opencascade::handle<Message_ProgressIndicator> & ))  static_cast<Standard_Integer (*)( math_Matrix & , math_IntegerVector & , Standard_Real & , Standard_Real , const opencascade::handle<Message_ProgressIndicator> & )>(&LU_Decompose),
          R"#(None)#"  , py::arg("a"),  py::arg("indx"),  py::arg("d"),  py::arg("TINY")=static_cast<Standard_Real>(1.0e-20),  py::arg("aProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )));
    m.def("LU_Decompose",
          (Standard_Integer (*)( math_Matrix & , math_IntegerVector & , Standard_Real & , math_Vector & , Standard_Real , const opencascade::handle<Message_ProgressIndicator> & ))  static_cast<Standard_Integer (*)( math_Matrix & , math_IntegerVector & , Standard_Real & , math_Vector & , Standard_Real , const opencascade::handle<Message_ProgressIndicator> & )>(&LU_Decompose),
          R"#(None)#"  , py::arg("a"),  py::arg("indx"),  py::arg("d"),  py::arg("vv"),  py::arg("TINY")=static_cast<Standard_Real>(1.0e-30),  py::arg("aProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )));
    m.def("LU_Solve",
          (void (*)( const math_Matrix & , const math_IntegerVector & , math_Vector & ))  static_cast<void (*)( const math_Matrix & , const math_IntegerVector & , math_Vector & )>(&LU_Solve),
          R"#(None)#"  , py::arg("a"),  py::arg("indx"),  py::arg("b"));
    m.def("LU_Invert",
          (Standard_Integer (*)( math_Matrix & ))  static_cast<Standard_Integer (*)( math_Matrix & )>(&LU_Invert),
          R"#(None)#"  , py::arg("a"));
    m.def("SVD_Decompose",
          (Standard_Integer (*)( math_Matrix & , math_Vector & , math_Matrix & ))  static_cast<Standard_Integer (*)( math_Matrix & , math_Vector & , math_Matrix & )>(&SVD_Decompose),
          R"#(None)#"  , py::arg("a"),  py::arg("w"),  py::arg("v"));
    m.def("SVD_Decompose",
          (Standard_Integer (*)( math_Matrix & , math_Vector & , math_Matrix & , math_Vector & ))  static_cast<Standard_Integer (*)( math_Matrix & , math_Vector & , math_Matrix & , math_Vector & )>(&SVD_Decompose),
          R"#(None)#"  , py::arg("a"),  py::arg("w"),  py::arg("v"),  py::arg("rv1"));
    m.def("SVD_Solve",
          (void (*)( const math_Matrix & , const math_Vector & , const math_Matrix & , const math_Vector & , math_Vector & ))  static_cast<void (*)( const math_Matrix & , const math_Vector & , const math_Matrix & , const math_Vector & , math_Vector & )>(&SVD_Solve),
          R"#(None)#"  , py::arg("u"),  py::arg("w"),  py::arg("v"),  py::arg("b"),  py::arg("x"));
    m.def("DACTCL_Decompose",
          (Standard_Integer (*)( math_Vector & , const math_IntegerVector & , const Standard_Real ))  static_cast<Standard_Integer (*)( math_Vector & , const math_IntegerVector & , const Standard_Real )>(&DACTCL_Decompose),
          R"#(None)#"  , py::arg("a"),  py::arg("indx"),  py::arg("MinPivot")=static_cast<const Standard_Real>(1.e-20));
    m.def("DACTCL_Solve",
          (Standard_Integer (*)( const math_Vector & , math_Vector & , const math_IntegerVector & , const Standard_Real ))  static_cast<Standard_Integer (*)( const math_Vector & , math_Vector & , const math_IntegerVector & , const Standard_Real )>(&DACTCL_Solve),
          R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("indx"),  py::arg("MinPivot")=static_cast<const Standard_Real>(1.e-20));
    m.def("Jacobi",
          (Standard_Integer (*)( math_Matrix & , math_Vector & , math_Matrix & , Standard_Integer & ))  static_cast<Standard_Integer (*)( math_Matrix & , math_Vector & , math_Matrix & , Standard_Integer & )>(&Jacobi),
          R"#(None)#"  , py::arg("a"),  py::arg("d"),  py::arg("v"),  py::arg("nrot"));
// ./opencascade\math_TrigonometricFunctionRoots.hxx
// ./opencascade\math_NewtonFunctionRoot.hxx
// ./opencascade\math_Matrix.hxx
// ./opencascade\math_EigenValuesSearcher.hxx
// ./opencascade\math_Function.hxx
// ./opencascade\math_FunctionSetRoot.hxx
// ./opencascade\math_Powell.hxx

// Additional functions

// operators
    m.def("__mul__",
          (math_Matrix (*)( const Standard_Real , const math_Matrix & ))  static_cast<math_Matrix (*)( const Standard_Real , const math_Matrix & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Left"),  py::arg("Right"));
    m.def("__rmul__",
          (math_Matrix (*)( const Standard_Real , const math_Matrix & ))  static_cast<math_Matrix (*)( const Standard_Real , const math_Matrix & )>(&operator*),
          py::is_operator(),
          R"#(None)#"  , py::arg("Left"),  py::arg("Right"));

// register typdefs
    register_template_NCollection_Array1<math_ValueAndWeight>(m,"math_Array1OfValueAndWeight");


// exceptions
register_occ_exception<math_NotSquare>(m, "math_NotSquare");
register_occ_exception<math_SingularMatrix>(m, "math_SingularMatrix");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
