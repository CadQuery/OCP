
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <math_Matrix.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d3Tan.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <Geom2dGcc_CurveTool.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Circ2d3Tan.hxx>
#include <Geom2dGcc_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanCen.hxx>
#include <Geom2dGcc_Lin2d2Tan.hxx>
#include <Geom2dGcc_Lin2dTanObl.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Geom2dGcc_Circ2dTanCenGeo.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <Geom2dGcc_Circ2d3TanIter.hxx>
#include <Geom2dGcc_FunctionTanCuCuCu.hxx>
#include <Geom2dGcc_Circ2d2TanOnIter.hxx>
#include <Geom2dGcc_FunctionTanCuCuOnCu.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dGcc_FunctionTanObl.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dGcc_FunctionTanCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuPnt.hxx>
#include <Geom2dGcc_FunctionTanCirCu.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NegativeValue.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2d_Point.hxx>
#include <GccAna_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Standard_NegativeValue.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <gp_Lin2d.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <Geom2dAdaptor_Curve.hxx>
#include <math_Matrix.hxx>

// module includes
#include <Geom2dGcc.hxx>
#include <Geom2dGcc_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Geom2dGcc_Circ2d2TanOnIter.hxx>
#include <Geom2dGcc_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Geom2dGcc_Circ2d3Tan.hxx>
#include <Geom2dGcc_Circ2d3TanIter.hxx>
#include <Geom2dGcc_Circ2dTanCen.hxx>
#include <Geom2dGcc_Circ2dTanCenGeo.hxx>
#include <Geom2dGcc_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <Geom2dGcc_CurveTool.hxx>
#include <Geom2dGcc_FunctionTanCirCu.hxx>
#include <Geom2dGcc_FunctionTanCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuCuOnCu.hxx>
#include <Geom2dGcc_FunctionTanCuPnt.hxx>
#include <Geom2dGcc_FunctionTanObl.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <Geom2dGcc_Lin2d2Tan.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dGcc_Lin2dTanObl.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dGcc_Type1.hxx>
#include <Geom2dGcc_Type2.hxx>
#include <Geom2dGcc_Type3.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dGcc(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dGcc"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<Geom2dGcc , shared_ptr<Geom2dGcc>>(m,"Geom2dGcc");

    static_cast<py::class_<Geom2dGcc , shared_ptr<Geom2dGcc> >>(m.attr("Geom2dGcc"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d2TanOn , shared_ptr<Geom2dGcc_Circ2d2TanOn> >>(m.attr("Geom2dGcc_Circ2d2TanOn"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d2TanOnGeo , shared_ptr<Geom2dGcc_Circ2d2TanOnGeo> >>(m.attr("Geom2dGcc_Circ2d2TanOnGeo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d2TanOnIter , shared_ptr<Geom2dGcc_Circ2d2TanOnIter> >>(m.attr("Geom2dGcc_Circ2d2TanOnIter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d2TanRad , shared_ptr<Geom2dGcc_Circ2d2TanRad> >>(m.attr("Geom2dGcc_Circ2d2TanRad"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d2TanRadGeo , shared_ptr<Geom2dGcc_Circ2d2TanRadGeo> >>(m.attr("Geom2dGcc_Circ2d2TanRadGeo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d3Tan , shared_ptr<Geom2dGcc_Circ2d3Tan> >>(m.attr("Geom2dGcc_Circ2d3Tan"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2d3TanIter , shared_ptr<Geom2dGcc_Circ2d3TanIter> >>(m.attr("Geom2dGcc_Circ2d3TanIter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2dTanCen , shared_ptr<Geom2dGcc_Circ2dTanCen> >>(m.attr("Geom2dGcc_Circ2dTanCen"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2dTanCenGeo , shared_ptr<Geom2dGcc_Circ2dTanCenGeo> >>(m.attr("Geom2dGcc_Circ2dTanCenGeo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2dTanOnRad , shared_ptr<Geom2dGcc_Circ2dTanOnRad> >>(m.attr("Geom2dGcc_Circ2dTanOnRad"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Circ2dTanOnRadGeo , shared_ptr<Geom2dGcc_Circ2dTanOnRadGeo> >>(m.attr("Geom2dGcc_Circ2dTanOnRadGeo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Geom2dGcc_CurveTool , shared_ptr<Geom2dGcc_CurveTool>>(m,"Geom2dGcc_CurveTool");

    static_cast<py::class_<Geom2dGcc_CurveTool , shared_ptr<Geom2dGcc_CurveTool> >>(m.attr("Geom2dGcc_CurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanCirCu , shared_ptr<Geom2dGcc_FunctionTanCirCu> , math_FunctionWithDerivative>>(m.attr("Geom2dGcc_FunctionTanCirCu"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real , Standard_Real & ) >(&Geom2dGcc_FunctionTanCirCu::Value),
             R"#(Computes the value of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real , Standard_Real & ) >(&Geom2dGcc_FunctionTanCirCu::Derivative),
             R"#(Computes the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("Deriv"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCirCu::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Geom2dGcc_FunctionTanCirCu::Values),
             R"#(Computes the value and the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("Deriv"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanCuCu , shared_ptr<Geom2dGcc_FunctionTanCuCu> , math_FunctionSetWithDerivatives>>(m.attr("Geom2dGcc_FunctionTanCuCu"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCu::*)() const>(&Geom2dGcc_FunctionTanCuCu::NbVariables),
             R"#(returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCu::*)() const>(&Geom2dGcc_FunctionTanCuCu::NbEquations),
             R"#(returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & , math_Vector & ) >(&Geom2dGcc_FunctionTanCuCu::Value),
             R"#(Computes the value of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & , math_Matrix & ) >(&Geom2dGcc_FunctionTanCuCu::Derivatives),
             R"#(Computes the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("Deriv"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCu::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&Geom2dGcc_FunctionTanCuCu::Values),
             R"#(Computes the value and the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("Deriv"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanCuCuCu , shared_ptr<Geom2dGcc_FunctionTanCuCuCu> , math_FunctionSetWithDerivatives>>(m.attr("Geom2dGcc_FunctionTanCuCuCu"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCuCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCuCu::*)() const>(&Geom2dGcc_FunctionTanCuCuCu::NbVariables),
             R"#(Returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCuCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCuCu::*)() const>(&Geom2dGcc_FunctionTanCuCuCu::NbEquations),
             R"#(Returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & , math_Vector & ) >(&Geom2dGcc_FunctionTanCuCuCu::Value),
             R"#(Computes the values of the Functions for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & , math_Matrix & ) >(&Geom2dGcc_FunctionTanCuCuCu::Derivatives),
             R"#(Returns the values of the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuCu::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&Geom2dGcc_FunctionTanCuCuCu::Values),
             R"#(Returns the values of the functions and the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanCuCuOnCu , shared_ptr<Geom2dGcc_FunctionTanCuCuOnCu> , math_FunctionSetWithDerivatives>>(m.attr("Geom2dGcc_FunctionTanCuCuOnCu"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCuOnCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCuOnCu::*)() const>(&Geom2dGcc_FunctionTanCuCuOnCu::NbVariables),
             R"#(Returns the number of variables of the function.)#" )
        .def("NbEquations",
             (Standard_Integer (Geom2dGcc_FunctionTanCuCuOnCu::*)() const) static_cast<Standard_Integer (Geom2dGcc_FunctionTanCuCuOnCu::*)() const>(&Geom2dGcc_FunctionTanCuCuOnCu::NbEquations),
             R"#(Returns the number of equations of the function.)#" )
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & , math_Vector & ) >(&Geom2dGcc_FunctionTanCuCuOnCu::Value),
             R"#(Computes the values of the Functions for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & , math_Matrix & ) >(&Geom2dGcc_FunctionTanCuCuOnCu::Derivatives),
             R"#(Returns the values of the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuCuOnCu::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&Geom2dGcc_FunctionTanCuCuOnCu::Values),
             R"#(Returns the values of the functions and the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanCuPnt , shared_ptr<Geom2dGcc_FunctionTanCuPnt> , math_FunctionWithDerivative>>(m.attr("Geom2dGcc_FunctionTanCuPnt"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real , Standard_Real & ) >(&Geom2dGcc_FunctionTanCuPnt::Value),
             R"#(Computes the value of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real , Standard_Real & ) >(&Geom2dGcc_FunctionTanCuPnt::Derivative),
             R"#(Computes the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("Deriv"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanCuPnt::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Geom2dGcc_FunctionTanCuPnt::Values),
             R"#(Computes the value and the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("Deriv"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_FunctionTanObl , shared_ptr<Geom2dGcc_FunctionTanObl> , math_FunctionWithDerivative>>(m.attr("Geom2dGcc_FunctionTanObl"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real , Standard_Real & ) >(&Geom2dGcc_FunctionTanObl::Value),
             R"#(Computes the value of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real , Standard_Real & ) >(&Geom2dGcc_FunctionTanObl::Derivative),
             R"#(Computes the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("Deriv"))
        .def("Values",
             (Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Geom2dGcc_FunctionTanObl::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Geom2dGcc_FunctionTanObl::Values),
             R"#(Computes the value and the derivative of the function F for the variable X. It returns True if the computation is successfully done, False otherwise.)#"  , py::arg("X"),  py::arg("F"),  py::arg("Deriv"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Lin2d2Tan , shared_ptr<Geom2dGcc_Lin2d2Tan> >>(m.attr("Geom2dGcc_Lin2d2Tan"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Lin2d2TanIter , shared_ptr<Geom2dGcc_Lin2d2TanIter> >>(m.attr("Geom2dGcc_Lin2d2TanIter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Lin2dTanObl , shared_ptr<Geom2dGcc_Lin2dTanObl> >>(m.attr("Geom2dGcc_Lin2dTanObl"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_Lin2dTanOblIter , shared_ptr<Geom2dGcc_Lin2dTanOblIter> >>(m.attr("Geom2dGcc_Lin2dTanOblIter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_QCurve , shared_ptr<Geom2dGcc_QCurve> >>(m.attr("Geom2dGcc_QCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dGcc_QualifiedCurve , shared_ptr<Geom2dGcc_QualifiedCurve> >>(m.attr("Geom2dGcc_QualifiedCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Geom2dGcc_Circ2d2TanOnGeo.hxx
// ./opencascade/Geom2dGcc_Circ2dTanOnRad.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanOn.hxx
// ./opencascade/Geom2dGcc_FunctionTanCirCu.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCu.hxx
// ./opencascade/Geom2dGcc_QCurve.hxx
// ./opencascade/Geom2dGcc_Circ2dTanCen.hxx
// ./opencascade/Geom2dGcc_IsParallel.hxx
// ./opencascade/Geom2dGcc_Circ2dTanCenGeo.hxx
// ./opencascade/Geom2dGcc_Circ2d3TanIter.hxx
// ./opencascade/Geom2dGcc_Circ2d3Tan.hxx
// ./opencascade/Geom2dGcc_Lin2dTanObl.hxx
// ./opencascade/Geom2dGcc_Lin2dTanOblIter.hxx
// ./opencascade/Geom2dGcc_Lin2d2Tan.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanRadGeo.hxx
// ./opencascade/Geom2dGcc.hxx
// ./opencascade/Geom2dGcc_Lin2d2TanIter.hxx
// ./opencascade/Geom2dGcc_Type3.hxx
// ./opencascade/Geom2dGcc_Type1.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuPnt.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanRad.hxx
// ./opencascade/Geom2dGcc_FunctionTanObl.hxx
// ./opencascade/Geom2dGcc_CurveTool.hxx
// ./opencascade/Geom2dGcc_Type2.hxx
// ./opencascade/Geom2dGcc_Circ2dTanOnRadGeo.hxx
// ./opencascade/Geom2dGcc_QualifiedCurve.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCuCu.hxx
// ./opencascade/Geom2dGcc_Circ2d2TanOnIter.hxx
// ./opencascade/Geom2dGcc_FunctionTanCuCuOnCu.hxx

// Additional functions

// operators

// register typdefs


// exceptions
register_occ_exception<Geom2dGcc_IsParallel>(m, "Geom2dGcc_IsParallel");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
