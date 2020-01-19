
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_ConstructionError.hxx>
#include <math_Matrix.hxx>
#include <PLib_Base.hxx>
#include <PLib_JacobiPolynomial.hxx>
#include <PLib_HermitJacobi.hxx>
#include <PLib_DoubleJacobiPolynomial.hxx>
#include <PLib_JacobiPolynomial.hxx>

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
void register_PLib(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("PLib"));


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

// classes

    register_default_constructor<PLib , shared_ptr<PLib>>(m,"PLib");

    static_cast<py::class_<PLib , shared_ptr<PLib>  >>(m.attr("PLib"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NoWeights_s",
                    (TColStd_Array1OfReal * (*)() ) static_cast<TColStd_Array1OfReal * (*)() >(&PLib::NoWeights),
                    R"#(Used as argument for a non rational functions)#" )
        .def_static("NoWeights2_s",
                    (TColStd_Array2OfReal * (*)() ) static_cast<TColStd_Array2OfReal * (*)() >(&PLib::NoWeights2),
                    R"#(Used as argument for a non rational functions)#" )
        .def_static("SetPoles_s",
                    (void (*)(  const NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (*)(  const NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib::SetPoles),
                    R"#(Copy in FP the coordinates of the poles.)#"  , py::arg("Poles"),  py::arg("FP"))
        .def_static("SetPoles_s",
                    (void (*)(  const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (*)(  const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib::SetPoles),
                    R"#(Copy in FP the coordinates of the poles.)#"  , py::arg("Poles"),  py::arg("Weights"),  py::arg("FP"))
        .def_static("GetPoles_s",
                    (void (*)(  const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<gp_Pnt> &  ) ) static_cast<void (*)(  const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<gp_Pnt> &  ) >(&PLib::GetPoles),
                    R"#(Get from FP the coordinates of the poles.)#"  , py::arg("FP"),  py::arg("Poles"))
        .def_static("GetPoles_s",
                    (void (*)(  const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (*)(  const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib::GetPoles),
                    R"#(Get from FP the coordinates of the poles.)#"  , py::arg("FP"),  py::arg("Poles"),  py::arg("Weights"))
        .def_static("SetPoles_s",
                    (void (*)(  const NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (*)(  const NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib::SetPoles),
                    R"#(Copy in FP the coordinates of the poles.)#"  , py::arg("Poles"),  py::arg("FP"))
        .def_static("SetPoles_s",
                    (void (*)(  const NCollection_Array1<gp_Pnt2d> & ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (*)(  const NCollection_Array1<gp_Pnt2d> & ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib::SetPoles),
                    R"#(Copy in FP the coordinates of the poles.)#"  , py::arg("Poles"),  py::arg("Weights"),  py::arg("FP"))
        .def_static("GetPoles_s",
                    (void (*)(  const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<gp_Pnt2d> &  ) ) static_cast<void (*)(  const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<gp_Pnt2d> &  ) >(&PLib::GetPoles),
                    R"#(Get from FP the coordinates of the poles.)#"  , py::arg("FP"),  py::arg("Poles"))
        .def_static("GetPoles_s",
                    (void (*)(  const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (*)(  const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib::GetPoles),
                    R"#(Get from FP the coordinates of the poles.)#"  , py::arg("FP"),  py::arg("Poles"),  py::arg("Weights"))
        .def_static("Bin_s",
                    (Standard_Real (*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Real (*)( const Standard_Integer ,  const Standard_Integer  ) >(&PLib::Bin),
                    R"#(Returns the Binomial Cnp. N should be <= BSplCLib::MaxDegree().)#"  , py::arg("N"),  py::arg("P"))
        .def_static("EvalLagrange_s",
                    (Standard_Integer (*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Integer (*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&PLib::EvalLagrange),
                    R"#(Performs the Lagrange Interpolation of given series of points with given parameters with the requested derivative order Results will store things in the following format with d = DerivativeOrder)#"  , py::arg("U"),  py::arg("DerivativeOrder"),  py::arg("Degree"),  py::arg("Dimension"),  py::arg("ValueArray"),  py::arg("ParameterArray"),  py::arg("Results"))
        .def_static("EvalCubicHermite_s",
                    (Standard_Integer (*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Integer (*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&PLib::EvalCubicHermite),
                    R"#(Performs the Cubic Hermite Interpolation of given series of points with given parameters with the requested derivative order. ValueArray stores the value at the first and last parameter. It has the following format : [0], [Dimension-1] : value at first param [Dimension], [Dimension + Dimension-1] : value at last param Derivative array stores the value of the derivatives at the first parameter and at the last parameter in the following format [0], [Dimension-1] : derivative at first param [Dimension], [Dimension + Dimension-1] : derivative at last param)#"  , py::arg("U"),  py::arg("DerivativeOrder"),  py::arg("Dimension"),  py::arg("ValueArray"),  py::arg("DerivativeArray"),  py::arg("ParameterArray"),  py::arg("Results"))
        .def_static("HermiteCoefficients_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  math_Matrix &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  math_Matrix &  ) >(&PLib::HermiteCoefficients),
                    R"#(This build the coefficient of Hermite's polynomes on [FirstParameter, LastParameter])#"  , py::arg("FirstParameter"),  py::arg("LastParameter"),  py::arg("FirstOrder"),  py::arg("LastOrder"),  py::arg("MatrixCoefs"))
        .def_static("CoefficientsPoles_s",
                    (void (*)(  const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> * ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<Standard_Real> *  ) ) static_cast<void (*)(  const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> * ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<Standard_Real> *  ) >(&PLib::CoefficientsPoles),
                    R"#(None)#"  , py::arg("Coefs"),  py::arg("WCoefs"),  py::arg("Poles"),  py::arg("WPoles"))
        .def_static("CoefficientsPoles_s",
                    (void (*)(  const NCollection_Array1<gp_Pnt2d> & ,   const NCollection_Array1<Standard_Real> * ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> *  ) ) static_cast<void (*)(  const NCollection_Array1<gp_Pnt2d> & ,   const NCollection_Array1<Standard_Real> * ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> *  ) >(&PLib::CoefficientsPoles),
                    R"#(None)#"  , py::arg("Coefs"),  py::arg("WCoefs"),  py::arg("Poles"),  py::arg("WPoles"))
        .def_static("CoefficientsPoles_s",
                    (void (*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> * ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> *  ) ) static_cast<void (*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> * ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> *  ) >(&PLib::CoefficientsPoles),
                    R"#(None)#"  , py::arg("Coefs"),  py::arg("WCoefs"),  py::arg("Poles"),  py::arg("WPoles"))
        .def_static("CoefficientsPoles_s",
                    (void (*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> * ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> *  ) ) static_cast<void (*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Real> * ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> *  ) >(&PLib::CoefficientsPoles),
                    R"#(None)#"  , py::arg("dim"),  py::arg("Coefs"),  py::arg("WCoefs"),  py::arg("Poles"),  py::arg("WPoles"))
        .def_static("Trimming_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<Standard_Real> *  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt> & ,  NCollection_Array1<Standard_Real> *  ) >(&PLib::Trimming),
                    R"#(None)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("Coeffs"),  py::arg("WCoeffs"))
        .def_static("Trimming_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> *  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  NCollection_Array1<gp_Pnt2d> & ,  NCollection_Array1<Standard_Real> *  ) >(&PLib::Trimming),
                    R"#(None)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("Coeffs"),  py::arg("WCoeffs"))
        .def_static("Trimming_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> *  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> *  ) >(&PLib::Trimming),
                    R"#(None)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("Coeffs"),  py::arg("WCoeffs"))
        .def_static("Trimming_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> *  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> *  ) >(&PLib::Trimming),
                    R"#(None)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("dim"),  py::arg("Coeffs"),  py::arg("WCoeffs"))
        .def_static("CoefficientsPoles_s",
                    (void (*)(  const NCollection_Array2<gp_Pnt> & ,   const NCollection_Array2<Standard_Real> * ,  NCollection_Array2<gp_Pnt> & ,  NCollection_Array2<Standard_Real> *  ) ) static_cast<void (*)(  const NCollection_Array2<gp_Pnt> & ,   const NCollection_Array2<Standard_Real> * ,  NCollection_Array2<gp_Pnt> & ,  NCollection_Array2<Standard_Real> *  ) >(&PLib::CoefficientsPoles),
                    R"#(None)#"  , py::arg("Coefs"),  py::arg("WCoefs"),  py::arg("Poles"),  py::arg("WPoles"))
        .def_static("UTrimming_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  NCollection_Array2<gp_Pnt> & ,  NCollection_Array2<Standard_Real> *  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  NCollection_Array2<gp_Pnt> & ,  NCollection_Array2<Standard_Real> *  ) >(&PLib::UTrimming),
                    R"#(None)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("Coeffs"),  py::arg("WCoeffs"))
        .def_static("VTrimming_s",
                    (void (*)( const Standard_Real ,  const Standard_Real ,  NCollection_Array2<gp_Pnt> & ,  NCollection_Array2<Standard_Real> *  ) ) static_cast<void (*)( const Standard_Real ,  const Standard_Real ,  NCollection_Array2<gp_Pnt> & ,  NCollection_Array2<Standard_Real> *  ) >(&PLib::VTrimming),
                    R"#(None)#"  , py::arg("V1"),  py::arg("V2"),  py::arg("Coeffs"),  py::arg("WCoeffs"))
        .def_static("HermiteInterpolate_s",
                    (Standard_Boolean (*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array2<Standard_Real> & ,   const NCollection_Array2<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array2<Standard_Real> & ,   const NCollection_Array2<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib::HermiteInterpolate),
                    R"#(Compute the coefficients in the canonical base of the polynomial satisfying the given constraints at the given parameters The array FirstContr(i,j) i=1,Dimension j=0,FirstOrder contains the values of the constraint at parameter FirstParameter idem for LastConstr)#"  , py::arg("Dimension"),  py::arg("FirstParameter"),  py::arg("LastParameter"),  py::arg("FirstOrder"),  py::arg("LastOrder"),  py::arg("FirstConstr"),  py::arg("LastConstr"),  py::arg("Coefficients"))
        .def_static("NivConstr_s",
                    (Standard_Integer (*)( const GeomAbs_Shape  ) ) static_cast<Standard_Integer (*)( const GeomAbs_Shape  ) >(&PLib::NivConstr),
                    R"#(translates from GeomAbs_Shape to Integer)#"  , py::arg("ConstraintOrder"))
        .def_static("ConstraintOrder_s",
                    (GeomAbs_Shape (*)( const Standard_Integer  ) ) static_cast<GeomAbs_Shape (*)( const Standard_Integer  ) >(&PLib::ConstraintOrder),
                    R"#(translates from Integer to GeomAbs_Shape)#"  , py::arg("NivConstr"))
    // static methods using call by reference i.s.o. return
        .def_static("RationalDerivative_s",
                    []( const Standard_Integer Degree,const Standard_Integer N,const Standard_Integer Dimension,const Standard_Boolean All ){ Standard_Real  Ders; Standard_Real  RDers; PLib::RationalDerivative(Degree,N,Dimension,Ders,RDers,All); return std::make_tuple(Ders,RDers); },
                    R"#(Computes the derivatives of a ratio at order <N> in dimension <Dimension>.)#"  , py::arg("Degree"),  py::arg("N"),  py::arg("Dimension"),  py::arg("All")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("RationalDerivatives_s",
                    []( const Standard_Integer DerivativesRequest,const Standard_Integer Dimension ){ Standard_Real  PolesDerivatives; Standard_Real  WeightsDerivatives; Standard_Real  RationalDerivates; PLib::RationalDerivatives(DerivativesRequest,Dimension,PolesDerivatives,WeightsDerivatives,RationalDerivates); return std::make_tuple(PolesDerivatives,WeightsDerivatives,RationalDerivates); },
                    R"#(Computes DerivativesRequest derivatives of a ratio at of a BSpline function of degree <Degree> dimension <Dimension>.)#"  , py::arg("DerivativesRequest"),  py::arg("Dimension"))
        .def_static("EvalPolynomial_s",
                    []( const Standard_Real U,const Standard_Integer DerivativeOrder,const Standard_Integer Degree,const Standard_Integer Dimension ){ Standard_Real  PolynomialCoeff; Standard_Real  Results; PLib::EvalPolynomial(U,DerivativeOrder,Degree,Dimension,PolynomialCoeff,Results); return std::make_tuple(PolynomialCoeff,Results); },
                    R"#(Performs Horner method with synthethic division for derivatives parameter <U>, with <Degree> and <Dimension>. PolynomialCoeff are stored in the following fashion c0(1) c0(2) .... c0(Dimension) c1(1) c1(2) .... c1(Dimension))#"  , py::arg("U"),  py::arg("DerivativeOrder"),  py::arg("Degree"),  py::arg("Dimension"))
        .def_static("NoDerivativeEvalPolynomial_s",
                    []( const Standard_Real U,const Standard_Integer Degree,const Standard_Integer Dimension,const Standard_Integer DegreeDimension ){ Standard_Real  PolynomialCoeff; Standard_Real  Results; PLib::NoDerivativeEvalPolynomial(U,Degree,Dimension,DegreeDimension,PolynomialCoeff,Results); return std::make_tuple(PolynomialCoeff,Results); },
                    R"#(Same as above with DerivativeOrder = 0;)#"  , py::arg("U"),  py::arg("Degree"),  py::arg("Dimension"),  py::arg("DegreeDimension"))
        .def_static("EvalPoly2Var_s",
                    []( const Standard_Real U,const Standard_Real V,const Standard_Integer UDerivativeOrder,const Standard_Integer VDerivativeOrder,const Standard_Integer UDegree,const Standard_Integer VDegree,const Standard_Integer Dimension ){ Standard_Real  PolynomialCoeff; Standard_Real  Results; PLib::EvalPoly2Var(U,V,UDerivativeOrder,VDerivativeOrder,UDegree,VDegree,Dimension,PolynomialCoeff,Results); return std::make_tuple(PolynomialCoeff,Results); },
                    R"#(Applies EvalPolynomial twice to evaluate the derivative of orders UDerivativeOrder in U, VDerivativeOrder in V at parameters U,V)#"  , py::arg("U"),  py::arg("V"),  py::arg("UDerivativeOrder"),  py::arg("VDerivativeOrder"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("Dimension"))
        .def_static("JacobiParameters_s",
                    []( const GeomAbs_Shape ConstraintOrder,const Standard_Integer MaxDegree,const Standard_Integer Code ){ Standard_Integer  NbGaussPoints; Standard_Integer  WorkDegree; PLib::JacobiParameters(ConstraintOrder,MaxDegree,Code,NbGaussPoints,WorkDegree); return std::make_tuple(NbGaussPoints,WorkDegree); },
                    R"#(Compute the number of points used for integral computations (NbGaussPoints) and the degree of Jacobi Polynomial (WorkDegree). ConstraintOrder has to be GeomAbs_C0, GeomAbs_C1 or GeomAbs_C2 Code: Code d' init. des parametres de discretisation. = -5 = -4 = -3 = -2 = -1 = 1 calcul rapide avec precision moyenne. = 2 calcul rapide avec meilleure precision. = 3 calcul un peu plus lent avec bonne precision. = 4 calcul lent avec la meilleure precision possible.)#"  , py::arg("ConstraintOrder"),  py::arg("MaxDegree"),  py::arg("Code"))
        .def_static("EvalLength_s",
                    []( const Standard_Integer Degree,const Standard_Integer Dimension,const Standard_Real U1,const Standard_Real U2 ){ Standard_Real  PolynomialCoeff; Standard_Real  Length; PLib::EvalLength(Degree,Dimension,PolynomialCoeff,U1,U2,Length); return std::make_tuple(PolynomialCoeff,Length); },
                    R"#(None)#"  , py::arg("Degree"),  py::arg("Dimension"),  py::arg("U1"),  py::arg("U2"))
        .def_static("EvalLength_s",
                    []( const Standard_Integer Degree,const Standard_Integer Dimension,const Standard_Real U1,const Standard_Real U2,const Standard_Real Tol ){ Standard_Real  PolynomialCoeff; Standard_Real  Length; Standard_Real  Error; PLib::EvalLength(Degree,Dimension,PolynomialCoeff,U1,U2,Tol,Length,Error); return std::make_tuple(PolynomialCoeff,Length,Error); },
                    R"#(None)#"  , py::arg("Degree"),  py::arg("Dimension"),  py::arg("U1"),  py::arg("U2"),  py::arg("Tol"))
    // operators
    // Additional methods
;


    static_cast<py::class_<PLib_Base ,opencascade::handle<PLib_Base> ,Py_PLib_Base , Standard_Transient >>(m.attr("PLib_Base"))
    // methods
        .def("ToCoefficients",
             (void (PLib_Base::*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) const) static_cast<void (PLib_Base::*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) const>(&PLib_Base::ToCoefficients),
             R"#(Convert the polynomial P(t) in the canonical base.)#"  , py::arg("Dimension"),  py::arg("Degree"),  py::arg("CoeffinBase"),  py::arg("Coefficients"))
        .def("D0",
             (void (PLib_Base::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_Base::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_Base::D0),
             R"#(Compute the values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"))
        .def("D1",
             (void (PLib_Base::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_Base::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_Base::D1),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"))
        .def("D2",
             (void (PLib_Base::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_Base::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_Base::D2),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"),  py::arg("BasisD2"))
        .def("D3",
             (void (PLib_Base::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_Base::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_Base::D3),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"),  py::arg("BasisD2"),  py::arg("BasisD3"))
        .def("WorkDegree",
             (Standard_Integer (PLib_Base::*)() const) static_cast<Standard_Integer (PLib_Base::*)() const>(&PLib_Base::WorkDegree),
             R"#(returns WorkDegree)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PLib_Base::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PLib_Base::*)() const>(&PLib_Base::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("ReduceDegree",
             []( PLib_Base &self , const Standard_Integer Dimension,const Standard_Integer MaxDegree,const Standard_Real Tol ){ Standard_Real  BaseCoeff; Standard_Integer  NewDegree; Standard_Real  MaxError; self.ReduceDegree(Dimension,MaxDegree,Tol,BaseCoeff,NewDegree,MaxError); return std::make_tuple(BaseCoeff,NewDegree,MaxError); },
             R"#(Compute NewDegree <= MaxDegree so that MaxError is lower than Tol. MaxError can be greater than Tol if it is not possible to find a NewDegree <= MaxDegree. In this case NewDegree = MaxDegree)#"  , py::arg("Dimension"),  py::arg("MaxDegree"),  py::arg("Tol"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PLib_Base::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PLib_Base::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<PLib_DoubleJacobiPolynomial , shared_ptr<PLib_DoubleJacobiPolynomial>  >>(m.attr("PLib_DoubleJacobiPolynomial"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<PLib_JacobiPolynomial> &,const opencascade::handle<PLib_JacobiPolynomial> & >()  , py::arg("JacPolU"),  py::arg("JacPolV") )
    // methods
        .def("MaxErrorU",
             (Standard_Real (PLib_DoubleJacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) const) static_cast<Standard_Real (PLib_DoubleJacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) const>(&PLib_DoubleJacobiPolynomial::MaxErrorU),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("DegreeU"),  py::arg("DegreeV"),  py::arg("dJacCoeff"),  py::arg("JacCoeff"))
        .def("MaxErrorV",
             (Standard_Real (PLib_DoubleJacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) const) static_cast<Standard_Real (PLib_DoubleJacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) const>(&PLib_DoubleJacobiPolynomial::MaxErrorV),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("DegreeU"),  py::arg("DegreeV"),  py::arg("dJacCoeff"),  py::arg("JacCoeff"))
        .def("MaxError",
             (Standard_Real (PLib_DoubleJacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Real  ) const) static_cast<Standard_Real (PLib_DoubleJacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  const Standard_Real  ) const>(&PLib_DoubleJacobiPolynomial::MaxError),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("MinDegreeU"),  py::arg("MaxDegreeU"),  py::arg("MinDegreeV"),  py::arg("MaxDegreeV"),  py::arg("dJacCoeff"),  py::arg("JacCoeff"),  py::arg("Error"))
        .def("AverageError",
             (Standard_Real (PLib_DoubleJacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) const) static_cast<Standard_Real (PLib_DoubleJacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) const>(&PLib_DoubleJacobiPolynomial::AverageError),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("DegreeU"),  py::arg("DegreeV"),  py::arg("dJacCoeff"),  py::arg("JacCoeff"))
        .def("WDoubleJacobiToCoefficients",
             (void (PLib_DoubleJacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) const) static_cast<void (PLib_DoubleJacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) const>(&PLib_DoubleJacobiPolynomial::WDoubleJacobiToCoefficients),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("DegreeU"),  py::arg("DegreeV"),  py::arg("JacCoeff"),  py::arg("Coefficients"))
        .def("U",
             (opencascade::handle<PLib_JacobiPolynomial> (PLib_DoubleJacobiPolynomial::*)() const) static_cast<opencascade::handle<PLib_JacobiPolynomial> (PLib_DoubleJacobiPolynomial::*)() const>(&PLib_DoubleJacobiPolynomial::U),
             R"#(returns myJacPolU;)#" )
        .def("V",
             (opencascade::handle<PLib_JacobiPolynomial> (PLib_DoubleJacobiPolynomial::*)() const) static_cast<opencascade::handle<PLib_JacobiPolynomial> (PLib_DoubleJacobiPolynomial::*)() const>(&PLib_DoubleJacobiPolynomial::V),
             R"#(returns myJacPolV;)#" )
        .def("TabMaxU",
             (opencascade::handle<TColStd_HArray1OfReal> (PLib_DoubleJacobiPolynomial::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (PLib_DoubleJacobiPolynomial::*)() const>(&PLib_DoubleJacobiPolynomial::TabMaxU),
             R"#(returns myTabMaxU;)#" )
        .def("TabMaxV",
             (opencascade::handle<TColStd_HArray1OfReal> (PLib_DoubleJacobiPolynomial::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (PLib_DoubleJacobiPolynomial::*)() const>(&PLib_DoubleJacobiPolynomial::TabMaxV),
             R"#(returns myTabMaxV;)#" )
        .def("U",
             (opencascade::handle<PLib_JacobiPolynomial> (PLib_DoubleJacobiPolynomial::*)() const) static_cast<opencascade::handle<PLib_JacobiPolynomial> (PLib_DoubleJacobiPolynomial::*)() const>(&PLib_DoubleJacobiPolynomial::U),
             R"#(returns myJacPolU;)#" )
        .def("V",
             (opencascade::handle<PLib_JacobiPolynomial> (PLib_DoubleJacobiPolynomial::*)() const) static_cast<opencascade::handle<PLib_JacobiPolynomial> (PLib_DoubleJacobiPolynomial::*)() const>(&PLib_DoubleJacobiPolynomial::V),
             R"#(returns myJacPolV;)#" )
        .def("TabMaxU",
             (opencascade::handle<TColStd_HArray1OfReal> (PLib_DoubleJacobiPolynomial::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (PLib_DoubleJacobiPolynomial::*)() const>(&PLib_DoubleJacobiPolynomial::TabMaxU),
             R"#(returns myTabMaxU;)#" )
        .def("TabMaxV",
             (opencascade::handle<TColStd_HArray1OfReal> (PLib_DoubleJacobiPolynomial::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (PLib_DoubleJacobiPolynomial::*)() const>(&PLib_DoubleJacobiPolynomial::TabMaxV),
             R"#(returns myTabMaxV;)#" )
    // methods using call by reference i.s.o. return
        .def("ReduceDegree",
             []( PLib_DoubleJacobiPolynomial &self , const Standard_Integer Dimension,const Standard_Integer MinDegreeU,const Standard_Integer MaxDegreeU,const Standard_Integer MinDegreeV,const Standard_Integer MaxDegreeV,const Standard_Integer dJacCoeff, const NCollection_Array1<Standard_Real> & JacCoeff,const Standard_Real EpmsCut ){ Standard_Real  MaxError; Standard_Integer  NewDegreeU; Standard_Integer  NewDegreeV; self.ReduceDegree(Dimension,MinDegreeU,MaxDegreeU,MinDegreeV,MaxDegreeV,dJacCoeff,JacCoeff,EpmsCut,MaxError,NewDegreeU,NewDegreeV); return std::make_tuple(MaxError,NewDegreeU,NewDegreeV); },
             R"#(None)#"  , py::arg("Dimension"),  py::arg("MinDegreeU"),  py::arg("MaxDegreeU"),  py::arg("MinDegreeV"),  py::arg("MaxDegreeV"),  py::arg("dJacCoeff"),  py::arg("JacCoeff"),  py::arg("EpmsCut"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<PLib_HermitJacobi ,opencascade::handle<PLib_HermitJacobi>  , PLib_Base >>(m.attr("PLib_HermitJacobi"))
        .def(py::init< const Standard_Integer,const GeomAbs_Shape >()  , py::arg("WorkDegree"),  py::arg("ConstraintOrder") )
    // methods
        .def("MaxError",
             (Standard_Real (PLib_HermitJacobi::*)( const Standard_Integer ,  Standard_Real & ,  const Standard_Integer  ) const) static_cast<Standard_Real (PLib_HermitJacobi::*)( const Standard_Integer ,  Standard_Real & ,  const Standard_Integer  ) const>(&PLib_HermitJacobi::MaxError),
             R"#(This method computes the maximum error on the polynomial W(t) Q(t) obtained by missing the coefficients of JacCoeff from NewDegree +1 to Degree)#"  , py::arg("Dimension"),  py::arg("HermJacCoeff"),  py::arg("NewDegree"))
        .def("AverageError",
             (Standard_Real (PLib_HermitJacobi::*)( const Standard_Integer ,  Standard_Real & ,  const Standard_Integer  ) const) static_cast<Standard_Real (PLib_HermitJacobi::*)( const Standard_Integer ,  Standard_Real & ,  const Standard_Integer  ) const>(&PLib_HermitJacobi::AverageError),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("HermJacCoeff"),  py::arg("NewDegree"))
        .def("ToCoefficients",
             (void (PLib_HermitJacobi::*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) const) static_cast<void (PLib_HermitJacobi::*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) const>(&PLib_HermitJacobi::ToCoefficients),
             R"#(Convert the polynomial P(t) = H(t) + W(t) Q(t) in the canonical base.)#"  , py::arg("Dimension"),  py::arg("Degree"),  py::arg("HermJacCoeff"),  py::arg("Coefficients"))
        .def("D0",
             (void (PLib_HermitJacobi::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_HermitJacobi::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_HermitJacobi::D0),
             R"#(Compute the values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"))
        .def("D1",
             (void (PLib_HermitJacobi::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_HermitJacobi::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_HermitJacobi::D1),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"))
        .def("D2",
             (void (PLib_HermitJacobi::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_HermitJacobi::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_HermitJacobi::D2),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"),  py::arg("BasisD2"))
        .def("D3",
             (void (PLib_HermitJacobi::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_HermitJacobi::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_HermitJacobi::D3),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"),  py::arg("BasisD2"),  py::arg("BasisD3"))
        .def("WorkDegree",
             (Standard_Integer (PLib_HermitJacobi::*)() const) static_cast<Standard_Integer (PLib_HermitJacobi::*)() const>(&PLib_HermitJacobi::WorkDegree),
             R"#(returns WorkDegree)#" )
        .def("NivConstr",
             (Standard_Integer (PLib_HermitJacobi::*)() const) static_cast<Standard_Integer (PLib_HermitJacobi::*)() const>(&PLib_HermitJacobi::NivConstr),
             R"#(returns NivConstr)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PLib_HermitJacobi::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PLib_HermitJacobi::*)() const>(&PLib_HermitJacobi::DynamicType),
             R"#(None)#" )
        .def("WorkDegree",
             (Standard_Integer (PLib_HermitJacobi::*)() const) static_cast<Standard_Integer (PLib_HermitJacobi::*)() const>(&PLib_HermitJacobi::WorkDegree),
             R"#(returns WorkDegree)#" )
        .def("NivConstr",
             (Standard_Integer (PLib_HermitJacobi::*)() const) static_cast<Standard_Integer (PLib_HermitJacobi::*)() const>(&PLib_HermitJacobi::NivConstr),
             R"#(returns NivConstr)#" )
    // methods using call by reference i.s.o. return
        .def("ReduceDegree",
             []( PLib_HermitJacobi &self , const Standard_Integer Dimension,const Standard_Integer MaxDegree,const Standard_Real Tol ){ Standard_Real  HermJacCoeff; Standard_Integer  NewDegree; Standard_Real  MaxError; self.ReduceDegree(Dimension,MaxDegree,Tol,HermJacCoeff,NewDegree,MaxError); return std::make_tuple(HermJacCoeff,NewDegree,MaxError); },
             R"#(Compute NewDegree <= MaxDegree so that MaxError is lower than Tol. MaxError can be greater than Tol if it is not possible to find a NewDegree <= MaxDegree. In this case NewDegree = MaxDegree)#"  , py::arg("Dimension"),  py::arg("MaxDegree"),  py::arg("Tol"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PLib_HermitJacobi::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PLib_HermitJacobi::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<PLib_JacobiPolynomial ,opencascade::handle<PLib_JacobiPolynomial>  , PLib_Base >>(m.attr("PLib_JacobiPolynomial"))
        .def(py::init< const Standard_Integer,const GeomAbs_Shape >()  , py::arg("WorkDegree"),  py::arg("ConstraintOrder") )
    // methods
        .def("Points",
             (void (PLib_JacobiPolynomial::*)( const Standard_Integer ,  NCollection_Array1<Standard_Real> &  ) const) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Integer ,  NCollection_Array1<Standard_Real> &  ) const>(&PLib_JacobiPolynomial::Points),
             R"#(returns the Jacobi Points for Gauss integration ie the positive values of the Legendre roots by increasing values NbGaussPoints is the number of points choosen for the integral computation. TabPoints (0,NbGaussPoints/2) TabPoints (0) is loaded only for the odd values of NbGaussPoints The possible values for NbGaussPoints are : 8, 10, 15, 20, 25, 30, 35, 40, 50, 61 NbGaussPoints must be greater than Degree)#"  , py::arg("NbGaussPoints"),  py::arg("TabPoints"))
        .def("Weights",
             (void (PLib_JacobiPolynomial::*)( const Standard_Integer ,  NCollection_Array2<Standard_Real> &  ) const) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Integer ,  NCollection_Array2<Standard_Real> &  ) const>(&PLib_JacobiPolynomial::Weights),
             R"#(returns the Jacobi weigths for Gauss integration only for the positive values of the Legendre roots in the order they are given by the method Points NbGaussPoints is the number of points choosen for the integral computation. TabWeights (0,NbGaussPoints/2,0,Degree) TabWeights (0,.) are only loaded for the odd values of NbGaussPoints The possible values for NbGaussPoints are : 8 , 10 , 15 ,20 ,25 , 30, 35 , 40 , 50 , 61 NbGaussPoints must be greater than Degree)#"  , py::arg("NbGaussPoints"),  py::arg("TabWeights"))
        .def("MaxValue",
             (void (PLib_JacobiPolynomial::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (PLib_JacobiPolynomial::*)( NCollection_Array1<Standard_Real> &  ) const>(&PLib_JacobiPolynomial::MaxValue),
             R"#(this method loads for k=0,q the maximum value of abs ( W(t)*Jk(t) )for t bellonging to [-1,1] This values are loaded is the array TabMax(0,myWorkDegree-2*(myNivConst+1)) MaxValue ( me ; TabMaxPointer : in out Real );)#"  , py::arg("TabMax"))
        .def("MaxError",
             (Standard_Real (PLib_JacobiPolynomial::*)( const Standard_Integer ,  Standard_Real & ,  const Standard_Integer  ) const) static_cast<Standard_Real (PLib_JacobiPolynomial::*)( const Standard_Integer ,  Standard_Real & ,  const Standard_Integer  ) const>(&PLib_JacobiPolynomial::MaxError),
             R"#(This method computes the maximum error on the polynomial W(t) Q(t) obtained by missing the coefficients of JacCoeff from NewDegree +1 to Degree)#"  , py::arg("Dimension"),  py::arg("JacCoeff"),  py::arg("NewDegree"))
        .def("AverageError",
             (Standard_Real (PLib_JacobiPolynomial::*)( const Standard_Integer ,  Standard_Real & ,  const Standard_Integer  ) const) static_cast<Standard_Real (PLib_JacobiPolynomial::*)( const Standard_Integer ,  Standard_Real & ,  const Standard_Integer  ) const>(&PLib_JacobiPolynomial::AverageError),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("JacCoeff"),  py::arg("NewDegree"))
        .def("ToCoefficients",
             (void (PLib_JacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) const) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Integer ,  const Standard_Integer ,   const NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) const>(&PLib_JacobiPolynomial::ToCoefficients),
             R"#(Convert the polynomial P(t) = R(t) + W(t) Q(t) in the canonical base.)#"  , py::arg("Dimension"),  py::arg("Degree"),  py::arg("JacCoeff"),  py::arg("Coefficients"))
        .def("D0",
             (void (PLib_JacobiPolynomial::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_JacobiPolynomial::D0),
             R"#(Compute the values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"))
        .def("D1",
             (void (PLib_JacobiPolynomial::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_JacobiPolynomial::D1),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"))
        .def("D2",
             (void (PLib_JacobiPolynomial::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_JacobiPolynomial::D2),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"),  py::arg("BasisD2"))
        .def("D3",
             (void (PLib_JacobiPolynomial::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) ) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Real ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> & ,  NCollection_Array1<Standard_Real> &  ) >(&PLib_JacobiPolynomial::D3),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"),  py::arg("BasisD2"),  py::arg("BasisD3"))
        .def("WorkDegree",
             (Standard_Integer (PLib_JacobiPolynomial::*)() const) static_cast<Standard_Integer (PLib_JacobiPolynomial::*)() const>(&PLib_JacobiPolynomial::WorkDegree),
             R"#(returns WorkDegree)#" )
        .def("NivConstr",
             (Standard_Integer (PLib_JacobiPolynomial::*)() const) static_cast<Standard_Integer (PLib_JacobiPolynomial::*)() const>(&PLib_JacobiPolynomial::NivConstr),
             R"#(returns NivConstr)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PLib_JacobiPolynomial::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PLib_JacobiPolynomial::*)() const>(&PLib_JacobiPolynomial::DynamicType),
             R"#(None)#" )
        .def("WorkDegree",
             (Standard_Integer (PLib_JacobiPolynomial::*)() const) static_cast<Standard_Integer (PLib_JacobiPolynomial::*)() const>(&PLib_JacobiPolynomial::WorkDegree),
             R"#(returns WorkDegree)#" )
        .def("NivConstr",
             (Standard_Integer (PLib_JacobiPolynomial::*)() const) static_cast<Standard_Integer (PLib_JacobiPolynomial::*)() const>(&PLib_JacobiPolynomial::NivConstr),
             R"#(returns NivConstr)#" )
    // methods using call by reference i.s.o. return
        .def("ReduceDegree",
             []( PLib_JacobiPolynomial &self , const Standard_Integer Dimension,const Standard_Integer MaxDegree,const Standard_Real Tol ){ Standard_Real  JacCoeff; Standard_Integer  NewDegree; Standard_Real  MaxError; self.ReduceDegree(Dimension,MaxDegree,Tol,JacCoeff,NewDegree,MaxError); return std::make_tuple(JacCoeff,NewDegree,MaxError); },
             R"#(Compute NewDegree <= MaxDegree so that MaxError is lower than Tol. MaxError can be greater than Tol if it is not possible to find a NewDegree <= MaxDegree. In this case NewDegree = MaxDegree)#"  , py::arg("Dimension"),  py::arg("MaxDegree"),  py::arg("Tol"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PLib_JacobiPolynomial::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PLib_JacobiPolynomial::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/PLib_JacobiPolynomial.hxx
// ./opencascade/PLib_HermitJacobi.hxx
// ./opencascade/PLib.hxx
// ./opencascade/PLib_DoubleJacobiPolynomial.hxx
// ./opencascade/PLib_Base.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
