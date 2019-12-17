
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_NullValue.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_NullValue.hxx>
#include <math_MultipleVarFunctionWithHessian.hxx>
#include <math_Matrix.hxx>

// module includes
#include <FairCurve_AnalysisCode.hxx>
#include <FairCurve_Batten.hxx>
#include <FairCurve_BattenLaw.hxx>
#include <FairCurve_DistributionOfEnergy.hxx>
#include <FairCurve_DistributionOfJerk.hxx>
#include <FairCurve_DistributionOfSagging.hxx>
#include <FairCurve_DistributionOfTension.hxx>
#include <FairCurve_Energy.hxx>
#include <FairCurve_EnergyOfBatten.hxx>
#include <FairCurve_EnergyOfMVC.hxx>
#include <FairCurve_MinimalVariation.hxx>
#include <FairCurve_Newton.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_FairCurve_enums(py::module &main_module) {


py::module m = main_module.def_submodule("FairCurve", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<FairCurve_AnalysisCode>(m, "FairCurve_AnalysisCode",R"#(To deal with different results in the computation of curvatures. - FairCurve_OK describes the case where computation is successfully completed - FairCurve_NotConverged describes the case where the algorithm does not converge. In this case, you can not be certain of the result quality and should resume computation if you want to make use of the curve. - FairCurve_InfiniteSliding describes the case where sliding is infinite, and, consequently, computation stops. The solution is to use an imposed sliding value. - FairCurve_NullHeight describes the case where no matter is left at one of the ends of the curve, and as a result, computation stops. The solution is to change (increase or reduce) the slope value by increasing or decreasing it.)#")
        .value("FairCurve_OK",FairCurve_AnalysisCode::FairCurve_OK)
        .value("FairCurve_NotConverged",FairCurve_AnalysisCode::FairCurve_NotConverged)
        .value("FairCurve_InfiniteSliding",FairCurve_AnalysisCode::FairCurve_InfiniteSliding)
        .value("FairCurve_NullHeight",FairCurve_AnalysisCode::FairCurve_NullHeight).export_values();

//Python trampoline classes
    class Py_FairCurve_Energy : public FairCurve_Energy{
    public:
        using FairCurve_Energy::FairCurve_Energy;
        
        // public pure virtual
        
        
        // protected pure virtual
        Standard_Boolean Compute(const Standard_Integer DerivativeOrder,math_Vector & Result) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,FairCurve_Energy,Compute,DerivativeOrder,Result) };
        
        
        // private pure virtual
        
    };
    class Py_FairCurve_DistributionOfEnergy : public FairCurve_DistributionOfEnergy{
    public:
        using FairCurve_DistributionOfEnergy::FairCurve_DistributionOfEnergy;
        
        // public pure virtual
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<FairCurve_Batten ,std::unique_ptr<FairCurve_Batten>  >(m,"FairCurve_Batten",R"#(Constructs curves with a constant or linearly increasing section to be used in the design of wooden or plastic battens. These curves are two-dimensional, and simulate physical splines or battens.)#");
    py::class_<FairCurve_MinimalVariation ,std::unique_ptr<FairCurve_MinimalVariation>  , FairCurve_Batten >(m,"FairCurve_MinimalVariation",R"#(Computes a 2D curve using an algorithm which minimizes tension, sagging, and jerk energy. As in FairCurve_Batten, two reference points are used. Unlike that class, FairCurve_MinimalVariation requires curvature settings at the first and second reference points. These are defined by the rays of curvature desired at each point.)#");
    py::class_<FairCurve_BattenLaw ,std::unique_ptr<FairCurve_BattenLaw>  , math_Function >(m,"FairCurve_BattenLaw",R"#(This class compute the Heigth of an batten)#");
    py::class_<FairCurve_Newton ,std::unique_ptr<FairCurve_Newton>  , math_NewtonMinimum >(m,"FairCurve_Newton",R"#(Algorithme of Optimization used to make "FairCurve")#");
    py::class_<FairCurve_Energy ,std::unique_ptr<FairCurve_Energy> ,Py_FairCurve_Energy , math_MultipleVarFunctionWithHessian >(m,"FairCurve_Energy",R"#(necessary methodes to compute the energy of an FairCurve.)#");
    py::class_<FairCurve_EnergyOfBatten ,std::unique_ptr<FairCurve_EnergyOfBatten>  , FairCurve_Energy >(m,"FairCurve_EnergyOfBatten",R"#(Energy Criterium to minimize in Batten.)#");
    py::class_<FairCurve_EnergyOfMVC ,std::unique_ptr<FairCurve_EnergyOfMVC>  , FairCurve_Energy >(m,"FairCurve_EnergyOfMVC",R"#(Energy Criterium to minimize in MinimalVariationCurve.)#");
    py::class_<FairCurve_DistributionOfEnergy ,std::unique_ptr<FairCurve_DistributionOfEnergy> ,Py_FairCurve_DistributionOfEnergy , math_FunctionSet >(m,"FairCurve_DistributionOfEnergy",R"#(Abstract class to use the Energy of an FairCurve)#");
    py::class_<FairCurve_DistributionOfTension ,std::unique_ptr<FairCurve_DistributionOfTension>  , FairCurve_DistributionOfEnergy >(m,"FairCurve_DistributionOfTension",R"#(Compute the Tension Distribution)#");
    py::class_<FairCurve_DistributionOfSagging ,std::unique_ptr<FairCurve_DistributionOfSagging>  , FairCurve_DistributionOfEnergy >(m,"FairCurve_DistributionOfSagging",R"#(Compute the Sagging Distribution)#");
    py::class_<FairCurve_DistributionOfJerk ,std::unique_ptr<FairCurve_DistributionOfJerk>  , FairCurve_DistributionOfEnergy >(m,"FairCurve_DistributionOfJerk",R"#(Compute the "Jerk" distribution.)#");

// pre-register typdefs
// ./opencascade/FairCurve_Batten.hxx
// ./opencascade/FairCurve_EnergyOfBatten.hxx
// ./opencascade/FairCurve_MinimalVariation.hxx
// ./opencascade/FairCurve_DistributionOfEnergy.hxx
// ./opencascade/FairCurve_EnergyOfMVC.hxx
// ./opencascade/FairCurve_DistributionOfSagging.hxx
// ./opencascade/FairCurve_BattenLaw.hxx
// ./opencascade/FairCurve_AnalysisCode.hxx
// ./opencascade/FairCurve_DistributionOfTension.hxx
// ./opencascade/FairCurve_Newton.hxx
// ./opencascade/FairCurve_DistributionOfJerk.hxx
// ./opencascade/FairCurve_Energy.hxx

};

// user-defined post-inclusion per module

// user-defined post
