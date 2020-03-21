
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <PLib_JacobiPolynomial.hxx>
#include <Standard_ConstructionError.hxx>
#include <AdvApprox_Cutting.hxx>

// module includes
#include <AdvApprox_ApproxAFunction.hxx>
#include <AdvApprox_Cutting.hxx>
#include <AdvApprox_DichoCutting.hxx>
#include <AdvApprox_EvaluatorFunction.hxx>
#include <AdvApprox_PrefAndRec.hxx>
#include <AdvApprox_PrefCutting.hxx>
#include <AdvApprox_SimpleApprox.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AdvApprox(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AdvApprox"));


//Python trampoline classes
    class Py_AdvApprox_Cutting : public AdvApprox_Cutting{
    public:
        using AdvApprox_Cutting::AdvApprox_Cutting;


        // public pure virtual
        Standard_Boolean Value(const Standard_Real a,const Standard_Real b,Standard_Real & cuttingvalue) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,AdvApprox_Cutting,Value,a,b,cuttingvalue) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<AdvApprox_ApproxAFunction , shared_ptr<AdvApprox_ApproxAFunction> >>(m.attr("AdvApprox_ApproxAFunction"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Boolean (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::IsDone),
             R"#(None)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Boolean (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::HasResult),
             R"#(None)#" )
        .def("Poles1d",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles1d),
             R"#(returns the poles from the algorithms as is)#" )
        .def("Poles2d",
             (opencascade::handle<TColgp_HArray2OfPnt2d> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColgp_HArray2OfPnt2d> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles2d),
             R"#(returns the poles from the algorithms as is)#" )
        .def("Poles",
             (opencascade::handle<TColgp_HArray2OfPnt> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColgp_HArray2OfPnt> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles),
             R"#(-- returns the poles from the algorithms as is)#" )
        .def("Degree",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Degree),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::NbKnots),
             R"#(None)#" )
        .def("NumSubSpaces",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)( const Standard_Integer ) const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)( const Standard_Integer ) const>(&AdvApprox_ApproxAFunction::NumSubSpaces),
             R"#(None)#"  , py::arg("Dimension"))
        .def("Knots",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Knots),
             R"#(None)#" )
        .def("Multiplicities",
             (opencascade::handle<TColStd_HArray1OfInteger> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Multiplicities),
             R"#(None)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Boolean (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::HasResult),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Boolean (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::IsDone),
             R"#(None)#" )
        .def("Poles1d",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles1d),
             R"#(returns the poles from the algorithms as is)#" )
        .def("Poles2d",
             (opencascade::handle<TColgp_HArray2OfPnt2d> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColgp_HArray2OfPnt2d> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles2d),
             R"#(returns the poles from the algorithms as is)#" )
        .def("Poles",
             (opencascade::handle<TColgp_HArray2OfPnt> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColgp_HArray2OfPnt> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Poles),
             R"#(-- returns the poles from the algorithms as is)#" )
        .def("Degree",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Degree),
             R"#(None)#" )
        .def("NbKnots",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)() const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::NbKnots),
             R"#(None)#" )
        .def("Knots",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Knots),
             R"#(None)#" )
        .def("Multiplicities",
             (opencascade::handle<TColStd_HArray1OfInteger> (AdvApprox_ApproxAFunction::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (AdvApprox_ApproxAFunction::*)() const>(&AdvApprox_ApproxAFunction::Multiplicities),
             R"#(None)#" )
        .def("NumSubSpaces",
             (Standard_Integer (AdvApprox_ApproxAFunction::*)( const Standard_Integer ) const) static_cast<Standard_Integer (AdvApprox_ApproxAFunction::*)( const Standard_Integer ) const>(&AdvApprox_ApproxAFunction::NumSubSpaces),
             R"#(None)#"  , py::arg("Dimension"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApprox_Cutting , shared_ptr<AdvApprox_Cutting>,Py_AdvApprox_Cutting >>(m.attr("AdvApprox_Cutting"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (AdvApprox_Cutting::*)( const Standard_Real , const Standard_Real , Standard_Real & ) const) static_cast<Standard_Boolean (AdvApprox_Cutting::*)( const Standard_Real , const Standard_Real , Standard_Real & ) const>(&AdvApprox_Cutting::Value),
             R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("cuttingvalue"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApprox_SimpleApprox , shared_ptr<AdvApprox_SimpleApprox> >>(m.attr("AdvApprox_SimpleApprox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApprox_DichoCutting , shared_ptr<AdvApprox_DichoCutting> , AdvApprox_Cutting>>(m.attr("AdvApprox_DichoCutting"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (AdvApprox_DichoCutting::*)( const Standard_Real , const Standard_Real , Standard_Real & ) const) static_cast<Standard_Boolean (AdvApprox_DichoCutting::*)( const Standard_Real , const Standard_Real , Standard_Real & ) const>(&AdvApprox_DichoCutting::Value),
             R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("cuttingvalue"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApprox_PrefAndRec , shared_ptr<AdvApprox_PrefAndRec> , AdvApprox_Cutting>>(m.attr("AdvApprox_PrefAndRec"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (AdvApprox_PrefAndRec::*)( const Standard_Real , const Standard_Real , Standard_Real & ) const) static_cast<Standard_Boolean (AdvApprox_PrefAndRec::*)( const Standard_Real , const Standard_Real , Standard_Real & ) const>(&AdvApprox_PrefAndRec::Value),
             R"#(cuting value is - the recommended point nerest of (a+b)/2 if pi is in ]a,b[ or else - the preferential point nearest of (a+b) / 2 if pi is in ](r*a+b)/(r+1) , (a+r*b)/(r+1)[ where r = Weight - or (a+b)/2 else.)#"  , py::arg("a"),  py::arg("b"),  py::arg("cuttingvalue"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApprox_PrefCutting , shared_ptr<AdvApprox_PrefCutting> , AdvApprox_Cutting>>(m.attr("AdvApprox_PrefCutting"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (AdvApprox_PrefCutting::*)( const Standard_Real , const Standard_Real , Standard_Real & ) const) static_cast<Standard_Boolean (AdvApprox_PrefCutting::*)( const Standard_Real , const Standard_Real , Standard_Real & ) const>(&AdvApprox_PrefCutting::Value),
             R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("cuttingvalue"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/AdvApprox_SimpleApprox.hxx
// ./opencascade/AdvApprox_PrefCutting.hxx
// ./opencascade/AdvApprox_Cutting.hxx
// ./opencascade/AdvApprox_ApproxAFunction.hxx
// ./opencascade/AdvApprox_PrefAndRec.hxx
// ./opencascade/AdvApprox_DichoCutting.hxx
// ./opencascade/AdvApprox_EvaluatorFunction.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
