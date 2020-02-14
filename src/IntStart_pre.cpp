
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Pnt2d.hxx>

// module includes
#include <IntStart_SITopolTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntStart_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntStart", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_IntStart_SITopolTool : public IntStart_SITopolTool{
    public:
        using IntStart_SITopolTool::IntStart_SITopolTool;
        
        
        // public pure virtual
        TopAbs_State Classify(const gp_Pnt2d & P,const Standard_Real Tol) override { PYBIND11_OVERLOAD_PURE(TopAbs_State,IntStart_SITopolTool,Classify,P,Tol) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<IntStart_SITopolTool ,opencascade::handle<IntStart_SITopolTool> ,Py_IntStart_SITopolTool , Standard_Transient >(m,"IntStart_SITopolTool",R"#(template class for a topological tool. This tool is linked with the surface on which the classification has to be made.template class for a topological tool. This tool is linked with the surface on which the classification has to be made.template class for a topological tool. This tool is linked with the surface on which the classification has to be made.)#");

};

// user-defined post-inclusion per module

// user-defined post
