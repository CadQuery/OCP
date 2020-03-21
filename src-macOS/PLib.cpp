
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

    // default constructor
    register_default_constructor<PLib , shared_ptr<PLib>>(m,"PLib");

    static_cast<py::class_<PLib , shared_ptr<PLib> >>(m.attr("PLib"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("NoWeights_s",
                    (TColStd_Array1OfReal * (*)() ) static_cast<TColStd_Array1OfReal * (*)() >(&PLib::NoWeights),
                    R"#(Used as argument for a non rational functions)#" )
        .def_static("NoWeights2_s",
                    (TColStd_Array2OfReal * (*)() ) static_cast<TColStd_Array2OfReal * (*)() >(&PLib::NoWeights2),
                    R"#(Used as argument for a non rational functions)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PLib_Base ,opencascade::handle<PLib_Base>,Py_PLib_Base , Standard_Transient>>(m.attr("PLib_Base"))
    // constructors
    // custom constructors
    // methods
        .def("ToCoefficients",
             (void (PLib_Base::*)( const Standard_Integer , const Standard_Integer ,  const NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) const) static_cast<void (PLib_Base::*)( const Standard_Integer , const Standard_Integer ,  const NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) const>(&PLib_Base::ToCoefficients),
             R"#(Convert the polynomial P(t) in the canonical base.)#"  , py::arg("Dimension"),  py::arg("Degree"),  py::arg("CoeffinBase"),  py::arg("Coefficients"))
        .def("D0",
             (void (PLib_Base::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_Base::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) >(&PLib_Base::D0),
             R"#(Compute the values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"))
        .def("D1",
             (void (PLib_Base::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_Base::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&PLib_Base::D1),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"))
        .def("D2",
             (void (PLib_Base::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_Base::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&PLib_Base::D2),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"),  py::arg("BasisD2"))
        .def("D3",
             (void (PLib_Base::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_Base::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&PLib_Base::D3),
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PLib_DoubleJacobiPolynomial , shared_ptr<PLib_DoubleJacobiPolynomial> >>(m.attr("PLib_DoubleJacobiPolynomial"))
    // constructors
    // custom constructors
    // methods
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
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PLib_HermitJacobi ,opencascade::handle<PLib_HermitJacobi> , PLib_Base>>(m.attr("PLib_HermitJacobi"))
    // constructors
    // custom constructors
    // methods
        .def("ToCoefficients",
             (void (PLib_HermitJacobi::*)( const Standard_Integer , const Standard_Integer ,  const NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) const) static_cast<void (PLib_HermitJacobi::*)( const Standard_Integer , const Standard_Integer ,  const NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) const>(&PLib_HermitJacobi::ToCoefficients),
             R"#(Convert the polynomial P(t) = H(t) + W(t) Q(t) in the canonical base.)#"  , py::arg("Dimension"),  py::arg("Degree"),  py::arg("HermJacCoeff"),  py::arg("Coefficients"))
        .def("D0",
             (void (PLib_HermitJacobi::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_HermitJacobi::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) >(&PLib_HermitJacobi::D0),
             R"#(Compute the values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"))
        .def("D1",
             (void (PLib_HermitJacobi::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_HermitJacobi::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&PLib_HermitJacobi::D1),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"))
        .def("D2",
             (void (PLib_HermitJacobi::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_HermitJacobi::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&PLib_HermitJacobi::D2),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"),  py::arg("BasisD2"))
        .def("D3",
             (void (PLib_HermitJacobi::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_HermitJacobi::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&PLib_HermitJacobi::D3),
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PLib_JacobiPolynomial ,opencascade::handle<PLib_JacobiPolynomial> , PLib_Base>>(m.attr("PLib_JacobiPolynomial"))
    // constructors
    // custom constructors
    // methods
        .def("ToCoefficients",
             (void (PLib_JacobiPolynomial::*)( const Standard_Integer , const Standard_Integer ,  const NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) const) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Integer , const Standard_Integer ,  const NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) const>(&PLib_JacobiPolynomial::ToCoefficients),
             R"#(Convert the polynomial P(t) = R(t) + W(t) Q(t) in the canonical base.)#"  , py::arg("Dimension"),  py::arg("Degree"),  py::arg("JacCoeff"),  py::arg("Coefficients"))
        .def("D0",
             (void (PLib_JacobiPolynomial::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Real , NCollection_Array1<Standard_Real> & ) >(&PLib_JacobiPolynomial::D0),
             R"#(Compute the values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"))
        .def("D1",
             (void (PLib_JacobiPolynomial::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&PLib_JacobiPolynomial::D1),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"))
        .def("D2",
             (void (PLib_JacobiPolynomial::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&PLib_JacobiPolynomial::D2),
             R"#(Compute the values and the derivatives values of the basis functions in u)#"  , py::arg("U"),  py::arg("BasisValue"),  py::arg("BasisD1"),  py::arg("BasisD2"))
        .def("D3",
             (void (PLib_JacobiPolynomial::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (PLib_JacobiPolynomial::*)( const Standard_Real , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & , NCollection_Array1<Standard_Real> & ) >(&PLib_JacobiPolynomial::D3),
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/PLib_JacobiPolynomial.hxx
// ./opencascade/PLib_DoubleJacobiPolynomial.hxx
// ./opencascade/PLib.hxx
// ./opencascade/PLib_Base.hxx
// ./opencascade/PLib_HermitJacobi.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
