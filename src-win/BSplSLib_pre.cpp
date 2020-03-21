
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
#include <BSplSLib.hxx>
#include <BSplSLib_Cache.hxx>
#include <BSplSLib_EvaluatorFunction.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BSplSLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BSplSLib", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_BSplSLib_EvaluatorFunction : public BSplSLib_EvaluatorFunction{
    public:
        using BSplSLib_EvaluatorFunction::BSplSLib_EvaluatorFunction;


        // public pure virtual
        void Evaluate(const Standard_Integer theDerivativeRequest,const Standard_Real theUParameter,const Standard_Real theVParameter,Standard_Real & theResult,Standard_Integer & theErrorCode) const  override { PYBIND11_OVERLOAD_PURE(void,BSplSLib_EvaluatorFunction,Evaluate,theDerivativeRequest,theUParameter,theVParameter,theResult,theErrorCode) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<BSplSLib , shared_ptr<BSplSLib> >(m,"BSplSLib",R"#(BSplSLib B-spline surface Library This package provides an implementation of geometric functions for rational and non rational, periodic and non periodic B-spline surface computation.)#");
    py::class_<BSplSLib_Cache ,opencascade::handle<BSplSLib_Cache> , Standard_Transient>(m,"BSplSLib_Cache",R"#(A cache class for Bezier and B-spline surfaces.A cache class for Bezier and B-spline surfaces.)#");
    py::class_<BSplSLib_EvaluatorFunction , shared_ptr<BSplSLib_EvaluatorFunction>,Py_BSplSLib_EvaluatorFunction >(m,"BSplSLib_EvaluatorFunction",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
