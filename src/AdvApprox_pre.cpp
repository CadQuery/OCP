
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_AdvApprox_enums(py::module &main_module) {


py::module m = main_module.def_submodule("AdvApprox", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_AdvApprox_Cutting : public AdvApprox_Cutting{
    public:
        using AdvApprox_Cutting::AdvApprox_Cutting;
        
        
        // public pure virtual
        Standard_Boolean Value(const Standard_Real a,const Standard_Real b,Standard_Real & cuttingvalue) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,AdvApprox_Cutting,Value,a,b,cuttingvalue) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<AdvApprox_ApproxAFunction , shared_ptr<AdvApprox_ApproxAFunction>  >(m,"AdvApprox_ApproxAFunction",R"#(this approximate a given function)#");
    py::class_<AdvApprox_Cutting , shared_ptr<AdvApprox_Cutting> ,Py_AdvApprox_Cutting >(m,"AdvApprox_Cutting",R"#(to choose the way of cutting in approximation)#");
    py::class_<AdvApprox_SimpleApprox , shared_ptr<AdvApprox_SimpleApprox>  >(m,"AdvApprox_SimpleApprox",R"#(Approximate a function on an intervall [First,Last] The result is a simple polynomial whose degree is as low as possible to satisfy the required tolerance and the maximum degree. The maximum error and the averrage error resulting from approximating the function by the polynomial are computed)#");
    py::class_<AdvApprox_DichoCutting , shared_ptr<AdvApprox_DichoCutting>  , AdvApprox_Cutting >(m,"AdvApprox_DichoCutting",R"#(if Cutting is necessary in [a,b], we cut at (a+b) / 2.)#");
    py::class_<AdvApprox_PrefAndRec , shared_ptr<AdvApprox_PrefAndRec>  , AdvApprox_Cutting >(m,"AdvApprox_PrefAndRec",R"#(inherits class Cutting; contains a list of preferential points (pi)i and a list of Recommended points used in cutting management. if Cutting is necessary in [a,b], we cut at the di nearest from (a+b)/2)#");
    py::class_<AdvApprox_PrefCutting , shared_ptr<AdvApprox_PrefCutting>  , AdvApprox_Cutting >(m,"AdvApprox_PrefCutting",R"#(inherits class Cutting; contains a list of preferential points (di)i if Cutting is necessary in [a,b], we cut at the di nearest from (a+b)/2.)#");

};

// user-defined post-inclusion per module

// user-defined post
