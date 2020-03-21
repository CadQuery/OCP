
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <AppCont_ContMatrices.hxx>
#include <AppCont_Function.hxx>
#include <AppCont_LeastSquare.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppCont(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AppCont"));


//Python trampoline classes
    class Py_AppCont_Function : public AppCont_Function{
    public:
        using AppCont_Function::AppCont_Function;


        // public pure virtual
        Standard_Real FirstParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,AppCont_Function,FirstParameter,) };
        Standard_Real LastParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,AppCont_Function,LastParameter,) };
        Standard_Boolean Value(const Standard_Real theU,NCollection_Array1<gp_Pnt2d> & thePnt2d,NCollection_Array1<gp_Pnt> & thePnt) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,AppCont_Function,Value,theU,thePnt2d,thePnt) };
        Standard_Boolean D1(const Standard_Real theU,NCollection_Array1<gp_Vec2d> & theVec2d,NCollection_Array1<gp_Vec> & theVec) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,AppCont_Function,D1,theU,theVec2d,theVec) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<AppCont_Function , shared_ptr<AppCont_Function>,Py_AppCont_Function >>(m.attr("AppCont_Function"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("GetNbOf3dPoints",
             (Standard_Integer (AppCont_Function::*)() const) static_cast<Standard_Integer (AppCont_Function::*)() const>(&AppCont_Function::GetNbOf3dPoints),
             R"#(Get number of 3d points returned by "Value" and "D1" functions.)#" )
        .def("GetNbOf2dPoints",
             (Standard_Integer (AppCont_Function::*)() const) static_cast<Standard_Integer (AppCont_Function::*)() const>(&AppCont_Function::GetNbOf2dPoints),
             R"#(Get number of 2d points returned by "Value" and "D1" functions.)#" )
        .def("FirstParameter",
             (Standard_Real (AppCont_Function::*)() const) static_cast<Standard_Real (AppCont_Function::*)() const>(&AppCont_Function::FirstParameter),
             R"#(Returns the first parameter of the function.)#" )
        .def("LastParameter",
             (Standard_Real (AppCont_Function::*)() const) static_cast<Standard_Real (AppCont_Function::*)() const>(&AppCont_Function::LastParameter),
             R"#(Returns the last parameter of the function.)#" )
        .def("Value",
             (Standard_Boolean (AppCont_Function::*)( const Standard_Real , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Pnt> & ) const) static_cast<Standard_Boolean (AppCont_Function::*)( const Standard_Real , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Pnt> & ) const>(&AppCont_Function::Value),
             R"#(Returns the point at parameter <theU>.)#"  , py::arg("theU"),  py::arg("thePnt2d"),  py::arg("thePnt"))
        .def("D1",
             (Standard_Boolean (AppCont_Function::*)( const Standard_Real , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec> & ) const) static_cast<Standard_Boolean (AppCont_Function::*)( const Standard_Real , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec> & ) const>(&AppCont_Function::D1),
             R"#(Returns the derivative at parameter <theU>.)#"  , py::arg("theU"),  py::arg("theVec2d"),  py::arg("theVec"))
    // methods using call by reference i.s.o. return
        .def("GetNumberOfPoints",
             []( AppCont_Function &self   ){ Standard_Integer  theNbPnt; Standard_Integer  theNbPnt2d; self.GetNumberOfPoints(theNbPnt,theNbPnt2d); return std::make_tuple(theNbPnt,theNbPnt2d); },
             R"#(Get number of 3d and 2d points returned by "Value" and "D1" functions.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AppCont_LeastSquare , shared_ptr<AppCont_LeastSquare> >>(m.attr("AppCont_LeastSquare"))
    // constructors
        .def(py::init< const AppCont_Function &,const Standard_Real,const Standard_Real,const AppParCurves_Constraint,const AppParCurves_Constraint,const Standard_Integer,const Standard_Integer >()  , py::arg("SSP"),  py::arg("U0"),  py::arg("U1"),  py::arg("FirstCons"),  py::arg("LastCons"),  py::arg("Deg"),  py::arg("NbPoints") )
    // custom constructors
    // methods
        .def("Value",
             (const AppParCurves_MultiCurve & (AppCont_LeastSquare::*)() ) static_cast<const AppParCurves_MultiCurve & (AppCont_LeastSquare::*)() >(&AppCont_LeastSquare::Value),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (AppCont_LeastSquare::*)() const) static_cast<Standard_Boolean (AppCont_LeastSquare::*)() const>(&AppCont_LeastSquare::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Error",
             []( AppCont_LeastSquare &self   ){ Standard_Real  F; Standard_Real  MaxE3d; Standard_Real  MaxE2d; self.Error(F,MaxE3d,MaxE2d); return std::make_tuple(F,MaxE3d,MaxE2d); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<PeriodicityInfo , shared_ptr<PeriodicityInfo>>(m,"PeriodicityInfo");

    static_cast<py::class_<PeriodicityInfo , shared_ptr<PeriodicityInfo> >>(m.attr("PeriodicityInfo"))
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
// ./opencascade/AppCont_ContMatrices.hxx
// ./opencascade/AppCont_LeastSquare.hxx
// ./opencascade/AppCont_Function.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
