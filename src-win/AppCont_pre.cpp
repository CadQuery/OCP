
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

// module includes
#include <AppCont_ContMatrices.hxx>
#include <AppCont_Function.hxx>
#include <AppCont_LeastSquare.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppCont_enums(py::module &main_module) {


py::module m = main_module.def_submodule("AppCont", R"#()#");

// user-defined inclusion per module in the body

// enums

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

// pre-register typdefs

// classes forward declarations only
    py::class_<AppCont_Function , shared_ptr<AppCont_Function>,Py_AppCont_Function >(m,"AppCont_Function",R"#(Class describing a continous 3d and/or function f(u). This class must be provided by the user to use the approximation algorithm FittingCurve.)#");
    py::class_<AppCont_LeastSquare , shared_ptr<AppCont_LeastSquare> >(m,"AppCont_LeastSquare",R"#(None)#");
    py::class_<PeriodicityInfo , shared_ptr<PeriodicityInfo> >(m,"PeriodicityInfo",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
