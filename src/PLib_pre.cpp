
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_ConstructionError.hxx>
#include <PLib_JacobiPolynomial.hxx>
#include <math_Matrix.hxx>
#include <PLib_Base.hxx>
#include <PLib_JacobiPolynomial.hxx>
#include <PLib_HermitJacobi.hxx>
#include <PLib_DoubleJacobiPolynomial.hxx>

// module includes
#include <PLib.hxx>
#include <PLib_Base.hxx>
#include <PLib_DoubleJacobiPolynomial.hxx>
#include <PLib_HermitJacobi.hxx>
#include <PLib_JacobiPolynomial.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_PLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("PLib", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_PLib_Base : public PLib_Base{
    public:
        using PLib_Base::PLib_Base;
        
        
        // public pure virtual
        void ToCoefficients(const Standard_Integer Dimension,const Standard_Integer Degree, const NCollection_Array1<Standard_Real> & CoeffinBase,NCollection_Array1<Standard_Real> & Coefficients) const  override { PYBIND11_OVERLOAD_PURE(void,PLib_Base,ToCoefficients,Dimension,Degree,CoeffinBase,Coefficients) };
        void D0(const Standard_Real U,NCollection_Array1<Standard_Real> & BasisValue) override { PYBIND11_OVERLOAD_PURE(void,PLib_Base,D0,U,BasisValue) };
        void D1(const Standard_Real U,NCollection_Array1<Standard_Real> & BasisValue,NCollection_Array1<Standard_Real> & BasisD1) override { PYBIND11_OVERLOAD_PURE(void,PLib_Base,D1,U,BasisValue,BasisD1) };
        void D2(const Standard_Real U,NCollection_Array1<Standard_Real> & BasisValue,NCollection_Array1<Standard_Real> & BasisD1,NCollection_Array1<Standard_Real> & BasisD2) override { PYBIND11_OVERLOAD_PURE(void,PLib_Base,D2,U,BasisValue,BasisD1,BasisD2) };
        void D3(const Standard_Real U,NCollection_Array1<Standard_Real> & BasisValue,NCollection_Array1<Standard_Real> & BasisD1,NCollection_Array1<Standard_Real> & BasisD2,NCollection_Array1<Standard_Real> & BasisD3) override { PYBIND11_OVERLOAD_PURE(void,PLib_Base,D3,U,BasisValue,BasisD1,BasisD2,BasisD3) };
        Standard_Integer WorkDegree() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,PLib_Base,WorkDegree,) };
        void ReduceDegree(const Standard_Integer Dimension,const Standard_Integer MaxDegree,const Standard_Real Tol,Standard_Real & BaseCoeff,Standard_Integer & NewDegree,Standard_Real & MaxError) const  override { PYBIND11_OVERLOAD_PURE(void,PLib_Base,ReduceDegree,Dimension,MaxDegree,Tol,BaseCoeff,NewDegree,MaxError) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<PLib , shared_ptr<PLib>  >(m,"PLib",R"#(PLib means Polynomial functions library. This pk provides basic computation functions for polynomial functions. Note: weight arrays can be passed by pointer for some functions so that NULL pointer is valid. That means no weights passed.)#");
    py::class_<PLib_Base ,opencascade::handle<PLib_Base> ,Py_PLib_Base , Standard_Transient >(m,"PLib_Base",R"#(To work with different polynomial's BasesTo work with different polynomial's BasesTo work with different polynomial's Bases)#");
    py::class_<PLib_DoubleJacobiPolynomial , shared_ptr<PLib_DoubleJacobiPolynomial>  >(m,"PLib_DoubleJacobiPolynomial",R"#(None)#");
    py::class_<PLib_HermitJacobi ,opencascade::handle<PLib_HermitJacobi>  , PLib_Base >(m,"PLib_HermitJacobi",R"#(This class provides method to work with Jacobi Polynomials relativly to an order of constraint q = myWorkDegree-2*(myNivConstr+1) Jk(t) for k=0,q compose the Jacobi Polynomial base relativly to the weigth W(t) iorder is the integer value for the constraints: iorder = 0 <=> ConstraintOrder = GeomAbs_C0 iorder = 1 <=> ConstraintOrder = GeomAbs_C1 iorder = 2 <=> ConstraintOrder = GeomAbs_C2 P(t) = H(t) + W(t) * Q(t) Where W(t) = (1-t**2)**(2*iordre+2) the coefficients JacCoeff represents P(t) JacCoeff are stored as follow:This class provides method to work with Jacobi Polynomials relativly to an order of constraint q = myWorkDegree-2*(myNivConstr+1) Jk(t) for k=0,q compose the Jacobi Polynomial base relativly to the weigth W(t) iorder is the integer value for the constraints: iorder = 0 <=> ConstraintOrder = GeomAbs_C0 iorder = 1 <=> ConstraintOrder = GeomAbs_C1 iorder = 2 <=> ConstraintOrder = GeomAbs_C2 P(t) = H(t) + W(t) * Q(t) Where W(t) = (1-t**2)**(2*iordre+2) the coefficients JacCoeff represents P(t) JacCoeff are stored as follow:This class provides method to work with Jacobi Polynomials relativly to an order of constraint q = myWorkDegree-2*(myNivConstr+1) Jk(t) for k=0,q compose the Jacobi Polynomial base relativly to the weigth W(t) iorder is the integer value for the constraints: iorder = 0 <=> ConstraintOrder = GeomAbs_C0 iorder = 1 <=> ConstraintOrder = GeomAbs_C1 iorder = 2 <=> ConstraintOrder = GeomAbs_C2 P(t) = H(t) + W(t) * Q(t) Where W(t) = (1-t**2)**(2*iordre+2) the coefficients JacCoeff represents P(t) JacCoeff are stored as follow:)#");
    py::class_<PLib_JacobiPolynomial ,opencascade::handle<PLib_JacobiPolynomial>  , PLib_Base >(m,"PLib_JacobiPolynomial",R"#(This class provides method to work with Jacobi Polynomials relativly to an order of constraint q = myWorkDegree-2*(myNivConstr+1) Jk(t) for k=0,q compose the Jacobi Polynomial base relativly to the weigth W(t) iorder is the integer value for the constraints: iorder = 0 <=> ConstraintOrder = GeomAbs_C0 iorder = 1 <=> ConstraintOrder = GeomAbs_C1 iorder = 2 <=> ConstraintOrder = GeomAbs_C2 P(t) = R(t) + W(t) * Q(t) Where W(t) = (1-t**2)**(2*iordre+2) the coefficients JacCoeff represents P(t) JacCoeff are stored as follow:This class provides method to work with Jacobi Polynomials relativly to an order of constraint q = myWorkDegree-2*(myNivConstr+1) Jk(t) for k=0,q compose the Jacobi Polynomial base relativly to the weigth W(t) iorder is the integer value for the constraints: iorder = 0 <=> ConstraintOrder = GeomAbs_C0 iorder = 1 <=> ConstraintOrder = GeomAbs_C1 iorder = 2 <=> ConstraintOrder = GeomAbs_C2 P(t) = R(t) + W(t) * Q(t) Where W(t) = (1-t**2)**(2*iordre+2) the coefficients JacCoeff represents P(t) JacCoeff are stored as follow:This class provides method to work with Jacobi Polynomials relativly to an order of constraint q = myWorkDegree-2*(myNivConstr+1) Jk(t) for k=0,q compose the Jacobi Polynomial base relativly to the weigth W(t) iorder is the integer value for the constraints: iorder = 0 <=> ConstraintOrder = GeomAbs_C0 iorder = 1 <=> ConstraintOrder = GeomAbs_C1 iorder = 2 <=> ConstraintOrder = GeomAbs_C2 P(t) = R(t) + W(t) * Q(t) Where W(t) = (1-t**2)**(2*iordre+2) the coefficients JacCoeff represents P(t) JacCoeff are stored as follow:)#");

};

// user-defined post-inclusion per module

// user-defined post
