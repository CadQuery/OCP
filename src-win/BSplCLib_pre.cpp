
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
#include <math_Matrix.hxx>

// module includes
#include <BSplCLib.hxx>
#include <BSplCLib_Cache.hxx>
#include <BSplCLib_CacheParams.hxx>
#include <BSplCLib_EvaluatorFunction.hxx>
#include <BSplCLib_KnotDistribution.hxx>
#include <BSplCLib_MultDistribution.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BSplCLib_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BSplCLib", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BSplCLib_MultDistribution>(m, "BSplCLib_MultDistribution",R"#(This enumeration describes the form of the sequence of mutiplicities. MultDistribution is :)#")
        .value("BSplCLib_NonConstant",BSplCLib_MultDistribution::BSplCLib_NonConstant)
        .value("BSplCLib_Constant",BSplCLib_MultDistribution::BSplCLib_Constant)
        .value("BSplCLib_QuasiConstant",BSplCLib_MultDistribution::BSplCLib_QuasiConstant).export_values();
    py::enum_<BSplCLib_KnotDistribution>(m, "BSplCLib_KnotDistribution",R"#(This enumeration describes the repartition of the knots sequence. If all the knots differ by the same positive constant from the preceding knot the "KnotDistribution" is <Uniform> else it is <NonUniform>)#")
        .value("BSplCLib_NonUniform",BSplCLib_KnotDistribution::BSplCLib_NonUniform)
        .value("BSplCLib_Uniform",BSplCLib_KnotDistribution::BSplCLib_Uniform).export_values();

//Python trampoline classes
    class Py_BSplCLib_EvaluatorFunction : public BSplCLib_EvaluatorFunction{
    public:
        using BSplCLib_EvaluatorFunction::BSplCLib_EvaluatorFunction;


        // public pure virtual
        void Evaluate(const Standard_Integer theDerivativeRequest,const Standard_Real * theStartEnd,const Standard_Real theParameter,Standard_Real & theResult,Standard_Integer & theErrorCode) const  override { PYBIND11_OVERLOAD_PURE(void,BSplCLib_EvaluatorFunction,Evaluate,theDerivativeRequest,theStartEnd,theParameter,theResult,theErrorCode) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<BSplCLib , shared_ptr<BSplCLib> >(m,"BSplCLib",R"#(BSplCLib B-spline curve Library.)#");
    py::class_<BSplCLib_Cache ,opencascade::handle<BSplCLib_Cache> , Standard_Transient>(m,"BSplCLib_Cache",R"#(A cache class for Bezier and B-spline curves.A cache class for Bezier and B-spline curves.)#");
    py::class_<BSplCLib_CacheParams , shared_ptr<BSplCLib_CacheParams> >(m,"BSplCLib_CacheParams",R"#(Simple structure containing parameters describing parameterization of a B-spline curve or a surface in one direction (U or V), and data of the current span for its caching)#");
    py::class_<BSplCLib_EvaluatorFunction , shared_ptr<BSplCLib_EvaluatorFunction>,Py_BSplCLib_EvaluatorFunction >(m,"BSplCLib_EvaluatorFunction",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
