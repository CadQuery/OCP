
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Framework.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Node.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <AdvApprox_Cutting.hxx>
#include <AdvApp2Var_Criterion.hxx>

// module includes
#include <AdvApp2Var_ApproxAFunc2Var.hxx>
#include <AdvApp2Var_ApproxF2var.hxx>
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <AdvApp2Var_CriterionRepartition.hxx>
#include <AdvApp2Var_CriterionType.hxx>
#include <AdvApp2Var_Data.hxx>
#include <AdvApp2Var_Data_f2c.hxx>
#include <AdvApp2Var_EvaluatorFunc2Var.hxx>
#include <AdvApp2Var_Framework.hxx>
#include <AdvApp2Var_Iso.hxx>
#include <AdvApp2Var_MathBase.hxx>
#include <AdvApp2Var_Network.hxx>
#include <AdvApp2Var_Node.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_SequenceOfNode.hxx>
#include <AdvApp2Var_SequenceOfPatch.hxx>
#include <AdvApp2Var_SequenceOfStrip.hxx>
#include <AdvApp2Var_Strip.hxx>
#include <AdvApp2Var_SysBase.hxx>

// template related includes
// ./opencascade/AdvApp2Var_SequenceOfNode.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AdvApp2Var_SequenceOfStrip.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AdvApp2Var_Strip.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AdvApp2Var_SequenceOfPatch.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AdvApp2Var_enums(py::module &main_module) {


py::module m = main_module.def_submodule("AdvApp2Var", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<AdvApp2Var_CriterionRepartition>(m, "AdvApp2Var_CriterionRepartition",R"#(way of cutting process//! all new cutting points at each step of cutting process : (a+i(b-a)/N)i at step N, (a+i(b-a)/(N+1))i at step N+1,... where (a,b) is the global interval//! add one new cutting point at each step of cutting process)#")
        .value("AdvApp2Var_Regular",AdvApp2Var_CriterionRepartition::AdvApp2Var_Regular)
        .value("AdvApp2Var_Incremental",AdvApp2Var_CriterionRepartition::AdvApp2Var_Incremental).export_values();
    py::enum_<AdvApp2Var_CriterionType>(m, "AdvApp2Var_CriterionType",R"#(influency of the criterion on cutting process//! cutting when criterion is not satisfied desactivation of the compute of the error max//! cutting when error max is not good or if error max is good and criterion is not satisfied)#")
        .value("AdvApp2Var_Absolute",AdvApp2Var_CriterionType::AdvApp2Var_Absolute)
        .value("AdvApp2Var_Relative",AdvApp2Var_CriterionType::AdvApp2Var_Relative).export_values();

//Python trampoline classes
    class Py_AdvApp2Var_Criterion : public AdvApp2Var_Criterion{
    public:
        using AdvApp2Var_Criterion::AdvApp2Var_Criterion;


        // public pure virtual
        void Value(AdvApp2Var_Patch & P,const AdvApp2Var_Context & C) const  override { PYBIND11_OVERLOAD_PURE(void,AdvApp2Var_Criterion,Value,P,C) };
        Standard_Boolean IsSatisfied(const AdvApp2Var_Patch & P) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,AdvApp2Var_Criterion,IsSatisfied,P) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_AdvApp2Var_EvaluatorFunc2Var : public AdvApp2Var_EvaluatorFunc2Var{
    public:
        using AdvApp2Var_EvaluatorFunc2Var::AdvApp2Var_EvaluatorFunc2Var;


        // public pure virtual
        void Evaluate(Standard_Integer * theDimension,Standard_Real * theUStartEnd,Standard_Real * theVStartEnd,Standard_Integer * theFavorIso,Standard_Real * theConstParam,Standard_Integer * theNbParams,Standard_Real * theParameters,Standard_Integer * theUOrder,Standard_Integer * theVOrder,Standard_Real * theResult,Standard_Integer * theErrorCode) const  override { PYBIND11_OVERLOAD_PURE(void,AdvApp2Var_EvaluatorFunc2Var,Evaluate,theDimension,theUStartEnd,theVStartEnd,theFavorIso,theConstParam,theNbParams,theParameters,theUOrder,theVOrder,theResult,theErrorCode) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_Sequence<AdvApp2Var_Node>(m,"AdvApp2Var_SequenceOfNode");
    preregister_template_NCollection_Sequence<AdvApp2Var_Strip>(m,"AdvApp2Var_SequenceOfStrip");
    preregister_template_NCollection_Sequence<AdvApp2Var_Iso>(m,"AdvApp2Var_Strip");
    preregister_template_NCollection_Sequence<AdvApp2Var_Patch>(m,"AdvApp2Var_SequenceOfPatch");

// classes forward declarations only
    py::class_<AdvApp2Var_ApproxAFunc2Var , shared_ptr<AdvApp2Var_ApproxAFunc2Var> >(m,"AdvApp2Var_ApproxAFunc2Var",R"#(Perform the approximation of <Func> F(U,V) Arguments are : Num1DSS, Num2DSS, Num3DSS :The numbers of 1,2,3 dimensional subspaces OneDTol, TwoDTol, ThreeDTol: The tolerance of approximation in each subspaces OneDTolFr, TwoDTolFr, ThreeDTolFr: The tolerance of approximation on the boundarys in each subspaces [FirstInU, LastInU]: The Bounds in U of the Approximation [FirstInV, LastInV]: The Bounds in V of the Approximation FavorIso : Give preference to extract u-iso or v-iso on F(U,V) This can be usefull to optimize the <Func> methode ContInU, ContInV : Continuity waiting in u and v PrecisCode : Precision on approximation's error mesurement 1 : Fast computation and average precision 2 : Average computation and good precision 3 : Slow computation and very good precision MaxDegInU : Maximum u-degree waiting in U MaxDegInV : Maximum u-degree waiting in V Warning: MaxDegInU (resp. MaxDegInV) must be >= 2*iu (resp. iv) + 1, where iu (resp. iv) = 0 if ContInU (resp. ContInV) = GeomAbs_C0, = 1 if = GeomAbs_C1, = 2 if = GeomAbs_C2. MaxPatch : Maximun number of Patch waiting number of Patch is number of u span * number of v span Func : The external method to evaluate F(U,V) Crit : To (re)defined condition of convergence UChoice, VChoice : To define the way in U (or V) Knot insertion Warning: for the moment, the result is a 3D Surface so Num1DSS and Num2DSS must be equals to 0 and Num3DSS must be equal to 1. Warning: the Function of type EvaluatorFunc2Var from Approx must be a subclass of AdvApp2Var_EvaluatorFunc2Var)#");
    py::class_<AdvApp2Var_ApproxF2var , shared_ptr<AdvApp2Var_ApproxF2var> >(m,"AdvApp2Var_ApproxF2var",R"#(None)#");
    py::class_<AdvApp2Var_Context , shared_ptr<AdvApp2Var_Context> >(m,"AdvApp2Var_Context",R"#(contains all the parameters for approximation ( tolerancy, computing option, ...))#");
    py::class_<AdvApp2Var_Criterion , shared_ptr<AdvApp2Var_Criterion>,Py_AdvApp2Var_Criterion >(m,"AdvApp2Var_Criterion",R"#(this class contains a given criterion to be satisfied)#");
    py::class_<AdvApp2Var_Data , shared_ptr<AdvApp2Var_Data> >(m,"AdvApp2Var_Data",R"#(/)#");
    py::class_<AdvApp2Var_EvaluatorFunc2Var , shared_ptr<AdvApp2Var_EvaluatorFunc2Var>,Py_AdvApp2Var_EvaluatorFunc2Var >(m,"AdvApp2Var_EvaluatorFunc2Var",R"#(None)#");
    py::class_<AdvApp2Var_Framework , shared_ptr<AdvApp2Var_Framework> >(m,"AdvApp2Var_Framework",R"#(None)#");
    py::class_<AdvApp2Var_Iso , shared_ptr<AdvApp2Var_Iso> >(m,"AdvApp2Var_Iso",R"#(used to store constraints on a line U = Ui or V = Vj)#");
    py::class_<AdvApp2Var_MathBase , shared_ptr<AdvApp2Var_MathBase> >(m,"AdvApp2Var_MathBase",R"#(None)#");
    py::class_<AdvApp2Var_Network , shared_ptr<AdvApp2Var_Network> >(m,"AdvApp2Var_Network",R"#(None)#");
    py::class_<AdvApp2Var_Node , shared_ptr<AdvApp2Var_Node> >(m,"AdvApp2Var_Node",R"#(used to store constraints on a (Ui,Vj) point)#");
    py::class_<AdvApp2Var_Patch , shared_ptr<AdvApp2Var_Patch> >(m,"AdvApp2Var_Patch",R"#(used to store results on a domain [Ui,Ui+1]x[Vj,Vj+1])#");
    py::class_<AdvApp2Var_SysBase , shared_ptr<AdvApp2Var_SysBase> >(m,"AdvApp2Var_SysBase",R"#(None)#");
    py::class_<Namelist , shared_ptr<Namelist> >(m,"Namelist",R"#(None)#");
    py::class_<Vardesc , shared_ptr<Vardesc> >(m,"Vardesc",R"#(None)#");
    py::class_<complex , shared_ptr<complex> >(m,"complex",R"#()#");
    py::class_<maovpar_1_ , shared_ptr<maovpar_1_> >(m,"maovpar_1_",R"#(None)#");
    py::class_<maovpch_1_ , shared_ptr<maovpch_1_> >(m,"maovpch_1_",R"#(None)#");
    py::class_<mdnombr_1_ , shared_ptr<mdnombr_1_> >(m,"mdnombr_1_",R"#(None)#");
    py::class_<minombr_1_ , shared_ptr<minombr_1_> >(m,"minombr_1_",R"#(None)#");
    py::class_<mlgdrtl_1_ , shared_ptr<mlgdrtl_1_> >(m,"mlgdrtl_1_",R"#(None)#");
    py::class_<mmapgs0_1_ , shared_ptr<mmapgs0_1_> >(m,"mmapgs0_1_",R"#(None)#");
    py::class_<mmapgs1_1_ , shared_ptr<mmapgs1_1_> >(m,"mmapgs1_1_",R"#(None)#");
    py::class_<mmapgs2_1_ , shared_ptr<mmapgs2_1_> >(m,"mmapgs2_1_",R"#(None)#");
    py::class_<mmapgss_1_ , shared_ptr<mmapgss_1_> >(m,"mmapgss_1_",R"#(None)#");
    py::class_<mmcmcnp_1_ , shared_ptr<mmcmcnp_1_> >(m,"mmcmcnp_1_",R"#(None)#");
    py::class_<mmjcobi_1_ , shared_ptr<mmjcobi_1_> >(m,"mmjcobi_1_",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
