
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Framework.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Node.hxx>
#include <AdvApprox_Cutting.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>

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
#include "NCollection.hxx"
// ./opencascade/AdvApp2Var_SequenceOfPatch.hxx
#include "NCollection.hxx"
// ./opencascade/AdvApp2Var_Strip.hxx
#include "NCollection.hxx"
// ./opencascade/AdvApp2Var_SequenceOfStrip.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AdvApp2Var(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AdvApp2Var"));


//Python trampoline classes
    class Py_AdvApp2Var_EvaluatorFunc2Var : public AdvApp2Var_EvaluatorFunc2Var{
    public:
        using AdvApp2Var_EvaluatorFunc2Var::AdvApp2Var_EvaluatorFunc2Var;
        
        // public pure virtual
        void Evaluate(Standard_Integer * theDimension,Standard_Real * theUStartEnd,Standard_Real * theVStartEnd,Standard_Integer * theFavorIso,Standard_Real * theConstParam,Standard_Integer * theNbParams,Standard_Real * theParameters,Standard_Integer * theUOrder,Standard_Integer * theVOrder,Standard_Real * theResult,Standard_Integer * theErrorCode) const  override { PYBIND11_OVERLOAD_PURE(void,AdvApp2Var_EvaluatorFunc2Var,Evaluate,theDimension,theUStartEnd,theVStartEnd,theFavorIso,theConstParam,theNbParams,theParameters,theUOrder,theVOrder,theResult,theErrorCode) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_AdvApp2Var_Criterion : public AdvApp2Var_Criterion{
    public:
        using AdvApp2Var_Criterion::AdvApp2Var_Criterion;
        
        // public pure virtual
        void Value(AdvApp2Var_Patch & P,const AdvApp2Var_Context & C) const  override { PYBIND11_OVERLOAD_PURE(void,AdvApp2Var_Criterion,Value,P,C) };
        Standard_Boolean IsSatisfied(const AdvApp2Var_Patch & P) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,AdvApp2Var_Criterion,IsSatisfied,P) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<AdvApp2Var_Patch ,std::unique_ptr<AdvApp2Var_Patch>  >>(m.attr("AdvApp2Var_Patch"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("U0"),  py::arg("U1"),  py::arg("V0"),  py::arg("V1"),  py::arg("iu"),  py::arg("iv") )
        .def("IsDiscretised",
             (Standard_Boolean (AdvApp2Var_Patch::*)() const) static_cast<Standard_Boolean (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::IsDiscretised),
             R"#(None)#" )
        .def("Discretise",
             (void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & ,  const AdvApp2Var_Framework & ,  const AdvApp2Var_EvaluatorFunc2Var &  ) ) static_cast<void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & ,  const AdvApp2Var_Framework & ,  const AdvApp2Var_EvaluatorFunc2Var &  ) >(&AdvApp2Var_Patch::Discretise),
             R"#(None)#"  , py::arg("Conditions"),  py::arg("Constraints"),  py::arg("func"))
        .def("IsApproximated",
             (Standard_Boolean (AdvApp2Var_Patch::*)() const) static_cast<Standard_Boolean (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::IsApproximated),
             R"#(None)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApp2Var_Patch::*)() const) static_cast<Standard_Boolean (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::HasResult),
             R"#(None)#" )
        .def("MakeApprox",
             (void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & ,  const AdvApp2Var_Framework & ,  const Standard_Integer  ) ) static_cast<void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & ,  const AdvApp2Var_Framework & ,  const Standard_Integer  ) >(&AdvApp2Var_Patch::MakeApprox),
             R"#(None)#"  , py::arg("Conditions"),  py::arg("Constraints"),  py::arg("NumDec"))
        .def("AddConstraints",
             (void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & ,  const AdvApp2Var_Framework &  ) ) static_cast<void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & ,  const AdvApp2Var_Framework &  ) >(&AdvApp2Var_Patch::AddConstraints),
             R"#(None)#"  , py::arg("Conditions"),  py::arg("Constraints"))
        .def("AddErrors",
             (void (AdvApp2Var_Patch::*)( const AdvApp2Var_Framework &  ) ) static_cast<void (AdvApp2Var_Patch::*)( const AdvApp2Var_Framework &  ) >(&AdvApp2Var_Patch::AddErrors),
             R"#(None)#"  , py::arg("Constraints"))
        .def("ChangeDomain",
             (void (AdvApp2Var_Patch::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AdvApp2Var_Patch::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&AdvApp2Var_Patch::ChangeDomain),
             R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("c"),  py::arg("d"))
        .def("ResetApprox",
             (void (AdvApp2Var_Patch::*)() ) static_cast<void (AdvApp2Var_Patch::*)() >(&AdvApp2Var_Patch::ResetApprox),
             R"#(None)#" )
        .def("OverwriteApprox",
             (void (AdvApp2Var_Patch::*)() ) static_cast<void (AdvApp2Var_Patch::*)() >(&AdvApp2Var_Patch::OverwriteApprox),
             R"#(None)#" )
        .def("U0",
             (Standard_Real (AdvApp2Var_Patch::*)() const) static_cast<Standard_Real (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::U0),
             R"#(None)#" )
        .def("U1",
             (Standard_Real (AdvApp2Var_Patch::*)() const) static_cast<Standard_Real (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::U1),
             R"#(None)#" )
        .def("V0",
             (Standard_Real (AdvApp2Var_Patch::*)() const) static_cast<Standard_Real (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::V0),
             R"#(None)#" )
        .def("V1",
             (Standard_Real (AdvApp2Var_Patch::*)() const) static_cast<Standard_Real (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::V1),
             R"#(None)#" )
        .def("UOrder",
             (Standard_Integer (AdvApp2Var_Patch::*)() const) static_cast<Standard_Integer (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::UOrder),
             R"#(None)#" )
        .def("VOrder",
             (Standard_Integer (AdvApp2Var_Patch::*)() const) static_cast<Standard_Integer (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::VOrder),
             R"#(None)#" )
        .def("CutSense",
             (Standard_Integer (AdvApp2Var_Patch::*)() const) static_cast<Standard_Integer (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::CutSense),
             R"#(None)#" )
        .def("CutSense",
             (Standard_Integer (AdvApp2Var_Patch::*)( const AdvApp2Var_Criterion & ,  const Standard_Integer  ) const) static_cast<Standard_Integer (AdvApp2Var_Patch::*)( const AdvApp2Var_Criterion & ,  const Standard_Integer  ) const>(&AdvApp2Var_Patch::CutSense),
             R"#(None)#"  , py::arg("Crit"),  py::arg("NumDec"))
        .def("NbCoeffInU",
             (Standard_Integer (AdvApp2Var_Patch::*)() const) static_cast<Standard_Integer (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::NbCoeffInU),
             R"#(None)#" )
        .def("NbCoeffInV",
             (Standard_Integer (AdvApp2Var_Patch::*)() const) static_cast<Standard_Integer (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::NbCoeffInV),
             R"#(None)#" )
        .def("ChangeNbCoeff",
             (void (AdvApp2Var_Patch::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (AdvApp2Var_Patch::*)( const Standard_Integer ,  const Standard_Integer  ) >(&AdvApp2Var_Patch::ChangeNbCoeff),
             R"#(None)#"  , py::arg("NbCoeffU"),  py::arg("NbCoeffV"))
        .def("Poles",
             (opencascade::handle<TColgp_HArray2OfPnt> (AdvApp2Var_Patch::*)( const Standard_Integer ,  const AdvApp2Var_Context &  ) const) static_cast<opencascade::handle<TColgp_HArray2OfPnt> (AdvApp2Var_Patch::*)( const Standard_Integer ,  const AdvApp2Var_Context &  ) const>(&AdvApp2Var_Patch::Poles),
             R"#(None)#"  , py::arg("SSPIndex"),  py::arg("Conditions"))
        .def("Coefficients",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Patch::*)( const Standard_Integer ,  const AdvApp2Var_Context &  ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Patch::*)( const Standard_Integer ,  const AdvApp2Var_Context &  ) const>(&AdvApp2Var_Patch::Coefficients),
             R"#(None)#"  , py::arg("SSPIndex"),  py::arg("Conditions"))
        .def("MaxErrors",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Patch::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::MaxErrors),
             R"#(None)#" )
        .def("AverageErrors",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Patch::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::AverageErrors),
             R"#(None)#" )
        .def("IsoErrors",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApp2Var_Patch::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::IsoErrors),
             R"#(None)#" )
        .def("CritValue",
             (Standard_Real (AdvApp2Var_Patch::*)() const) static_cast<Standard_Real (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::CritValue),
             R"#(None)#" )
        .def("SetCritValue",
             (void (AdvApp2Var_Patch::*)( const Standard_Real  ) ) static_cast<void (AdvApp2Var_Patch::*)( const Standard_Real  ) >(&AdvApp2Var_Patch::SetCritValue),
             R"#(None)#"  , py::arg("dist"))
;


    static_cast<py::class_<AdvApp2Var_Network ,std::unique_ptr<AdvApp2Var_Network>  >>(m.attr("AdvApp2Var_Network"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<AdvApp2Var_Patch> &, const NCollection_Sequence<Standard_Real> &, const NCollection_Sequence<Standard_Real> & >()  , py::arg("Net"),  py::arg("TheU"),  py::arg("TheV") )
        .def("FirstNotApprox",
             (Standard_Boolean (AdvApp2Var_Network::*)( Standard_Integer &  ) const) static_cast<Standard_Boolean (AdvApp2Var_Network::*)( Standard_Integer &  ) const>(&AdvApp2Var_Network::FirstNotApprox),
             R"#(search the Index of the first Patch not approximated, if all Patches are approximated Standard_False is returned)#"  , py::arg("Index"))
        .def("ChangePatch",
             (AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer  ) ) static_cast<AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer  ) >(&AdvApp2Var_Network::ChangePatch),
             R"#(None)#"  , py::arg("Index"))
        .def("UpdateInU",
             (void (AdvApp2Var_Network::*)( const Standard_Real  ) ) static_cast<void (AdvApp2Var_Network::*)( const Standard_Real  ) >(&AdvApp2Var_Network::UpdateInU),
             R"#(None)#"  , py::arg("CuttingValue"))
        .def("UpdateInV",
             (void (AdvApp2Var_Network::*)( const Standard_Real  ) ) static_cast<void (AdvApp2Var_Network::*)( const Standard_Real  ) >(&AdvApp2Var_Network::UpdateInV),
             R"#(None)#"  , py::arg("CuttingValue"))
        .def("SameDegree",
             (void (AdvApp2Var_Network::*)( const Standard_Integer ,  const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) ) static_cast<void (AdvApp2Var_Network::*)( const Standard_Integer ,  const Standard_Integer ,  Standard_Integer & ,  Standard_Integer &  ) >(&AdvApp2Var_Network::SameDegree),
             R"#(None)#"  , py::arg("iu"),  py::arg("iv"),  py::arg("ncfu"),  py::arg("ncfv"))
        .def("NbPatch",
             (Standard_Integer (AdvApp2Var_Network::*)() const) static_cast<Standard_Integer (AdvApp2Var_Network::*)() const>(&AdvApp2Var_Network::NbPatch),
             R"#(None)#" )
        .def("NbPatchInU",
             (Standard_Integer (AdvApp2Var_Network::*)() const) static_cast<Standard_Integer (AdvApp2Var_Network::*)() const>(&AdvApp2Var_Network::NbPatchInU),
             R"#(None)#" )
        .def("NbPatchInV",
             (Standard_Integer (AdvApp2Var_Network::*)() const) static_cast<Standard_Integer (AdvApp2Var_Network::*)() const>(&AdvApp2Var_Network::NbPatchInV),
             R"#(None)#" )
        .def("UParameter",
             (Standard_Real (AdvApp2Var_Network::*)( const Standard_Integer  ) const) static_cast<Standard_Real (AdvApp2Var_Network::*)( const Standard_Integer  ) const>(&AdvApp2Var_Network::UParameter),
             R"#(None)#"  , py::arg("Index"))
        .def("VParameter",
             (Standard_Real (AdvApp2Var_Network::*)( const Standard_Integer  ) const) static_cast<Standard_Real (AdvApp2Var_Network::*)( const Standard_Integer  ) const>(&AdvApp2Var_Network::VParameter),
             R"#(None)#"  , py::arg("Index"))
        .def("Patch",
             (const AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_Network::Patch),
             R"#(None)#"  , py::arg("UIndex"),  py::arg("VIndex"))
        .def("ChangePatch",
             (AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer  ) ) static_cast<AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer  ) >(&AdvApp2Var_Network::ChangePatch),
             R"#(None)#"  , py::arg("Index"))
        .def("Patch",
             (const AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_Network::Patch),
             R"#(None)#"  , py::arg("UIndex"),  py::arg("VIndex"))
;


    static_cast<py::class_<AdvApp2Var_Criterion ,std::unique_ptr<AdvApp2Var_Criterion> ,Py_AdvApp2Var_Criterion >>(m.attr("AdvApp2Var_Criterion"))
        .def("Value",
             (void (AdvApp2Var_Criterion::*)( AdvApp2Var_Patch & ,  const AdvApp2Var_Context &  ) const) static_cast<void (AdvApp2Var_Criterion::*)( AdvApp2Var_Patch & ,  const AdvApp2Var_Context &  ) const>(&AdvApp2Var_Criterion::Value),
             R"#(None)#"  , py::arg("P"),  py::arg("C"))
        .def("IsSatisfied",
             (Standard_Boolean (AdvApp2Var_Criterion::*)( const AdvApp2Var_Patch &  ) const) static_cast<Standard_Boolean (AdvApp2Var_Criterion::*)( const AdvApp2Var_Patch &  ) const>(&AdvApp2Var_Criterion::IsSatisfied),
             R"#(None)#"  , py::arg("P"))
        .def("MaxValue",
             (Standard_Real (AdvApp2Var_Criterion::*)() const) static_cast<Standard_Real (AdvApp2Var_Criterion::*)() const>(&AdvApp2Var_Criterion::MaxValue),
             R"#(None)#" )
        .def("Type",
             (AdvApp2Var_CriterionType (AdvApp2Var_Criterion::*)() const) static_cast<AdvApp2Var_CriterionType (AdvApp2Var_Criterion::*)() const>(&AdvApp2Var_Criterion::Type),
             R"#(None)#" )
        .def("Repartition",
             (AdvApp2Var_CriterionRepartition (AdvApp2Var_Criterion::*)() const) static_cast<AdvApp2Var_CriterionRepartition (AdvApp2Var_Criterion::*)() const>(&AdvApp2Var_Criterion::Repartition),
             R"#(None)#" )
;


    static_cast<py::class_<AdvApp2Var_Framework ,std::unique_ptr<AdvApp2Var_Framework>  >>(m.attr("AdvApp2Var_Framework"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<AdvApp2Var_Node> &, const NCollection_Sequence<AdvApp2Var_Strip> &, const NCollection_Sequence<AdvApp2Var_Strip> & >()  , py::arg("Frame"),  py::arg("UFrontier"),  py::arg("VFrontier") )
        .def("FirstNotApprox",
             (Standard_Boolean (AdvApp2Var_Framework::*)( Standard_Integer & ,  Standard_Integer & ,  AdvApp2Var_Iso &  ) const) static_cast<Standard_Boolean (AdvApp2Var_Framework::*)( Standard_Integer & ,  Standard_Integer & ,  AdvApp2Var_Iso &  ) const>(&AdvApp2Var_Framework::FirstNotApprox),
             R"#(search the Index of the first Iso not approximated, if all Isos are approximated Standard_False is returned.)#"  , py::arg("IndexIso"),  py::arg("IndexStrip"),  py::arg("anIso"))
        .def("FirstNode",
             (Standard_Integer (AdvApp2Var_Framework::*)( const GeomAbs_IsoType ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (AdvApp2Var_Framework::*)( const GeomAbs_IsoType ,  const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_Framework::FirstNode),
             R"#(None)#"  , py::arg("Type"),  py::arg("IndexIso"),  py::arg("IndexStrip"))
        .def("LastNode",
             (Standard_Integer (AdvApp2Var_Framework::*)( const GeomAbs_IsoType ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (AdvApp2Var_Framework::*)( const GeomAbs_IsoType ,  const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_Framework::LastNode),
             R"#(None)#"  , py::arg("Type"),  py::arg("IndexIso"),  py::arg("IndexStrip"))
        .def("ChangeIso",
             (void (AdvApp2Var_Framework::*)( const Standard_Integer ,  const Standard_Integer ,  const AdvApp2Var_Iso &  ) ) static_cast<void (AdvApp2Var_Framework::*)( const Standard_Integer ,  const Standard_Integer ,  const AdvApp2Var_Iso &  ) >(&AdvApp2Var_Framework::ChangeIso),
             R"#(None)#"  , py::arg("IndexIso"),  py::arg("IndexStrip"),  py::arg("anIso"))
        .def("Node",
             (const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer  ) const) static_cast<const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer  ) const>(&AdvApp2Var_Framework::Node),
             R"#(None)#"  , py::arg("IndexNode"))
        .def("Node",
             (const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Real ,  const Standard_Real  ) const>(&AdvApp2Var_Framework::Node),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("IsoU",
             (const AdvApp2Var_Iso & (AdvApp2Var_Framework::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<const AdvApp2Var_Iso & (AdvApp2Var_Framework::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&AdvApp2Var_Framework::IsoU),
             R"#(None)#"  , py::arg("U"),  py::arg("V0"),  py::arg("V1"))
        .def("IsoV",
             (const AdvApp2Var_Iso & (AdvApp2Var_Framework::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<const AdvApp2Var_Iso & (AdvApp2Var_Framework::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&AdvApp2Var_Framework::IsoV),
             R"#(None)#"  , py::arg("U0"),  py::arg("U1"),  py::arg("V"))
        .def("ChangeNode",
             (AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer  ) ) static_cast<AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer  ) >(&AdvApp2Var_Framework::ChangeNode),
             R"#(None)#"  , py::arg("IndexNode"))
        .def("UpdateInU",
             (void (AdvApp2Var_Framework::*)( const Standard_Real  ) ) static_cast<void (AdvApp2Var_Framework::*)( const Standard_Real  ) >(&AdvApp2Var_Framework::UpdateInU),
             R"#(None)#"  , py::arg("CuttingValue"))
        .def("UpdateInV",
             (void (AdvApp2Var_Framework::*)( const Standard_Real  ) ) static_cast<void (AdvApp2Var_Framework::*)( const Standard_Real  ) >(&AdvApp2Var_Framework::UpdateInV),
             R"#(None)#"  , py::arg("CuttingValue"))
        .def("UEquation",
             (const opencascade::handle<TColStd_HArray1OfReal> & (AdvApp2Var_Framework::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (AdvApp2Var_Framework::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_Framework::UEquation),
             R"#(None)#"  , py::arg("IndexIso"),  py::arg("IndexStrip"))
        .def("VEquation",
             (const opencascade::handle<TColStd_HArray1OfReal> & (AdvApp2Var_Framework::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (AdvApp2Var_Framework::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_Framework::VEquation),
             R"#(None)#"  , py::arg("IndexIso"),  py::arg("IndexStrip"))
        .def("Node",
             (const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer  ) const) static_cast<const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer  ) const>(&AdvApp2Var_Framework::Node),
             R"#(None)#"  , py::arg("IndexNode"))
        .def("ChangeNode",
             (AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer  ) ) static_cast<AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer  ) >(&AdvApp2Var_Framework::ChangeNode),
             R"#(None)#"  , py::arg("IndexNode"))
;


    static_cast<py::class_<AdvApp2Var_Node ,std::unique_ptr<AdvApp2Var_Node>  >>(m.attr("AdvApp2Var_Node"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("iu"),  py::arg("iv") )
        .def(py::init< const gp_XY &,const Standard_Integer,const Standard_Integer >()  , py::arg("UV"),  py::arg("iu"),  py::arg("iv") )
        .def("Coord",
             (gp_XY (AdvApp2Var_Node::*)() const) static_cast<gp_XY (AdvApp2Var_Node::*)() const>(&AdvApp2Var_Node::Coord),
             R"#(None)#" )
        .def("SetCoord",
             (void (AdvApp2Var_Node::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AdvApp2Var_Node::*)( const Standard_Real ,  const Standard_Real  ) >(&AdvApp2Var_Node::SetCoord),
             R"#(None)#"  , py::arg("x1"),  py::arg("x2"))
        .def("UOrder",
             (Standard_Integer (AdvApp2Var_Node::*)() const) static_cast<Standard_Integer (AdvApp2Var_Node::*)() const>(&AdvApp2Var_Node::UOrder),
             R"#(None)#" )
        .def("VOrder",
             (Standard_Integer (AdvApp2Var_Node::*)() const) static_cast<Standard_Integer (AdvApp2Var_Node::*)() const>(&AdvApp2Var_Node::VOrder),
             R"#(None)#" )
        .def("SetPoint",
             (void (AdvApp2Var_Node::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<void (AdvApp2Var_Node::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt &  ) >(&AdvApp2Var_Node::SetPoint),
             R"#(None)#"  , py::arg("iu"),  py::arg("iv"),  py::arg("Cte"))
        .def("Point",
             (gp_Pnt (AdvApp2Var_Node::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Pnt (AdvApp2Var_Node::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_Node::Point),
             R"#(None)#"  , py::arg("iu"),  py::arg("iv"))
        .def("SetError",
             (void (AdvApp2Var_Node::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (AdvApp2Var_Node::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&AdvApp2Var_Node::SetError),
             R"#(None)#"  , py::arg("iu"),  py::arg("iv"),  py::arg("error"))
        .def("Error",
             (Standard_Real (AdvApp2Var_Node::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AdvApp2Var_Node::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_Node::Error),
             R"#(None)#"  , py::arg("iu"),  py::arg("iv"))
;


    static_cast<py::class_<AdvApp2Var_Iso ,std::unique_ptr<AdvApp2Var_Iso>  >>(m.attr("AdvApp2Var_Iso"))
        .def(py::init<  >()  )
        .def(py::init< const GeomAbs_IsoType,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("type"),  py::arg("cte"),  py::arg("Ufirst"),  py::arg("Ulast"),  py::arg("Vfirst"),  py::arg("Vlast"),  py::arg("pos"),  py::arg("iu"),  py::arg("iv") )
        .def("IsApproximated",
             (Standard_Boolean (AdvApp2Var_Iso::*)() const) static_cast<Standard_Boolean (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::IsApproximated),
             R"#(None)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApp2Var_Iso::*)() const) static_cast<Standard_Boolean (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::HasResult),
             R"#(None)#" )
        .def("MakeApprox",
             (void (AdvApp2Var_Iso::*)( const AdvApp2Var_Context & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const AdvApp2Var_EvaluatorFunc2Var & ,  AdvApp2Var_Node & ,  AdvApp2Var_Node &  ) ) static_cast<void (AdvApp2Var_Iso::*)( const AdvApp2Var_Context & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const AdvApp2Var_EvaluatorFunc2Var & ,  AdvApp2Var_Node & ,  AdvApp2Var_Node &  ) >(&AdvApp2Var_Iso::MakeApprox),
             R"#(None)#"  , py::arg("Conditions"),  py::arg("a"),  py::arg("b"),  py::arg("c"),  py::arg("d"),  py::arg("func"),  py::arg("NodeBegin"),  py::arg("NodeEnd"))
        .def("ChangeDomain",
             (void (AdvApp2Var_Iso::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AdvApp2Var_Iso::*)( const Standard_Real ,  const Standard_Real  ) >(&AdvApp2Var_Iso::ChangeDomain),
             R"#(None)#"  , py::arg("a"),  py::arg("b"))
        .def("ChangeDomain",
             (void (AdvApp2Var_Iso::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AdvApp2Var_Iso::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&AdvApp2Var_Iso::ChangeDomain),
             R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("c"),  py::arg("d"))
        .def("SetConstante",
             (void (AdvApp2Var_Iso::*)( const Standard_Real  ) ) static_cast<void (AdvApp2Var_Iso::*)( const Standard_Real  ) >(&AdvApp2Var_Iso::SetConstante),
             R"#(None)#"  , py::arg("newcte"))
        .def("SetPosition",
             (void (AdvApp2Var_Iso::*)( const Standard_Integer  ) ) static_cast<void (AdvApp2Var_Iso::*)( const Standard_Integer  ) >(&AdvApp2Var_Iso::SetPosition),
             R"#(None)#"  , py::arg("newpos"))
        .def("ResetApprox",
             (void (AdvApp2Var_Iso::*)() ) static_cast<void (AdvApp2Var_Iso::*)() >(&AdvApp2Var_Iso::ResetApprox),
             R"#(None)#" )
        .def("OverwriteApprox",
             (void (AdvApp2Var_Iso::*)() ) static_cast<void (AdvApp2Var_Iso::*)() >(&AdvApp2Var_Iso::OverwriteApprox),
             R"#(None)#" )
        .def("Type",
             (GeomAbs_IsoType (AdvApp2Var_Iso::*)() const) static_cast<GeomAbs_IsoType (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::Type),
             R"#(None)#" )
        .def("Constante",
             (Standard_Real (AdvApp2Var_Iso::*)() const) static_cast<Standard_Real (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::Constante),
             R"#(None)#" )
        .def("T0",
             (Standard_Real (AdvApp2Var_Iso::*)() const) static_cast<Standard_Real (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::T0),
             R"#(None)#" )
        .def("T1",
             (Standard_Real (AdvApp2Var_Iso::*)() const) static_cast<Standard_Real (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::T1),
             R"#(None)#" )
        .def("U0",
             (Standard_Real (AdvApp2Var_Iso::*)() const) static_cast<Standard_Real (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::U0),
             R"#(None)#" )
        .def("U1",
             (Standard_Real (AdvApp2Var_Iso::*)() const) static_cast<Standard_Real (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::U1),
             R"#(None)#" )
        .def("V0",
             (Standard_Real (AdvApp2Var_Iso::*)() const) static_cast<Standard_Real (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::V0),
             R"#(None)#" )
        .def("V1",
             (Standard_Real (AdvApp2Var_Iso::*)() const) static_cast<Standard_Real (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::V1),
             R"#(None)#" )
        .def("UOrder",
             (Standard_Integer (AdvApp2Var_Iso::*)() const) static_cast<Standard_Integer (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::UOrder),
             R"#(None)#" )
        .def("VOrder",
             (Standard_Integer (AdvApp2Var_Iso::*)() const) static_cast<Standard_Integer (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::VOrder),
             R"#(None)#" )
        .def("Position",
             (Standard_Integer (AdvApp2Var_Iso::*)() const) static_cast<Standard_Integer (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::Position),
             R"#(None)#" )
        .def("NbCoeff",
             (Standard_Integer (AdvApp2Var_Iso::*)() const) static_cast<Standard_Integer (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::NbCoeff),
             R"#(None)#" )
        .def("Polynom",
             (const opencascade::handle<TColStd_HArray1OfReal> & (AdvApp2Var_Iso::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::Polynom),
             R"#(None)#" )
        .def("SomTab",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Iso::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::SomTab),
             R"#(None)#" )
        .def("DifTab",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Iso::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::DifTab),
             R"#(None)#" )
        .def("MaxErrors",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApp2Var_Iso::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::MaxErrors),
             R"#(None)#" )
        .def("MoyErrors",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApp2Var_Iso::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::MoyErrors),
             R"#(None)#" )
;


    static_cast<py::class_<AdvApp2Var_ApproxAFunc2Var ,std::unique_ptr<AdvApp2Var_ApproxAFunc2Var>  >>(m.attr("AdvApp2Var_ApproxAFunc2Var"))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const GeomAbs_IsoType,const GeomAbs_Shape,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const AdvApp2Var_EvaluatorFunc2Var &,AdvApprox_Cutting &,AdvApprox_Cutting & >()  , py::arg("Num1DSS"),  py::arg("Num2DSS"),  py::arg("Num3DSS"),  py::arg("OneDTol"),  py::arg("TwoDTol"),  py::arg("ThreeDTol"),  py::arg("OneDTolFr"),  py::arg("TwoDTolFr"),  py::arg("ThreeDTolFr"),  py::arg("FirstInU"),  py::arg("LastInU"),  py::arg("FirstInV"),  py::arg("LastInV"),  py::arg("FavorIso"),  py::arg("ContInU"),  py::arg("ContInV"),  py::arg("PrecisCode"),  py::arg("MaxDegInU"),  py::arg("MaxDegInV"),  py::arg("MaxPatch"),  py::arg("Func"),  py::arg("UChoice"),  py::arg("VChoice") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const GeomAbs_IsoType,const GeomAbs_Shape,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const AdvApp2Var_EvaluatorFunc2Var &,const AdvApp2Var_Criterion &,AdvApprox_Cutting &,AdvApprox_Cutting & >()  , py::arg("Num1DSS"),  py::arg("Num2DSS"),  py::arg("Num3DSS"),  py::arg("OneDTol"),  py::arg("TwoDTol"),  py::arg("ThreeDTol"),  py::arg("OneDTolFr"),  py::arg("TwoDTolFr"),  py::arg("ThreeDTolFr"),  py::arg("FirstInU"),  py::arg("LastInU"),  py::arg("FirstInV"),  py::arg("LastInV"),  py::arg("FavorIso"),  py::arg("ContInU"),  py::arg("ContInV"),  py::arg("PrecisCode"),  py::arg("MaxDegInU"),  py::arg("MaxDegInV"),  py::arg("MaxPatch"),  py::arg("Func"),  py::arg("Crit"),  py::arg("UChoice"),  py::arg("VChoice") )
        .def("IsDone",
             (Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::IsDone),
             R"#(True if the approximation succeeded within the imposed tolerances and the wished continuities)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::HasResult),
             R"#(True if the approximation did come out with a result that is not NECESSARELY within the required tolerance or a result that is not recognized with the wished continuities)#" )
        .def("Surface",
             (opencascade::handle<Geom_BSplineSurface> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_BSplineSurface> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::Surface),
             R"#(returns the BSplineSurface of range Index)#"  , py::arg("Index"))
        .def("UDegree",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::VDegree),
             R"#(None)#" )
        .def("NumSubSpaces",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::NumSubSpaces),
             R"#(None)#"  , py::arg("Dimension"))
        .def("MaxError",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::MaxError),
             R"#(returns the errors max)#"  , py::arg("Dimension"))
        .def("AverageError",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::AverageError),
             R"#(returns the average errors)#"  , py::arg("Dimension"))
        .def("UFrontError",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::UFrontError),
             R"#(returns the errors max on UFrontiers Warning: Dimension must be equal to 3.)#"  , py::arg("Dimension"))
        .def("VFrontError",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::VFrontError),
             R"#(returns the errors max on VFrontiers Warning: Dimension must be equal to 3.)#"  , py::arg("Dimension"))
        .def("MaxError",
             (Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::MaxError),
             R"#(returns the error max of the BSplineSurface of range Index)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("AverageError",
             (Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::AverageError),
             R"#(returns the average error of the BSplineSurface of range Index)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("UFrontError",
             (Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::UFrontError),
             R"#(returns the error max of the BSplineSurface of range Index on a UFrontier)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("VFrontError",
             (Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::VFrontError),
             R"#(returns the error max of the BSplineSurface of range Index on a VFrontier)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("CritError",
             (Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::CritError),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("Dump",
             (void (AdvApp2Var_ApproxAFunc2Var::*)( std::ostream &  ) const) static_cast<void (AdvApp2Var_ApproxAFunc2Var::*)( std::ostream &  ) const>(&AdvApp2Var_ApproxAFunc2Var::Dump),
             R"#(Prints on the stream o informations on the current state of the object.)#"  , py::arg("o"))
        .def("IsDone",
             (Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::IsDone),
             R"#(True if the approximation succeeded within the imposed tolerances and the wished continuities)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::HasResult),
             R"#(True if the approximation did come out with a result that is not NECESSARELY within the required tolerance or a result that is not recognized with the wished continuities)#" )
        .def("Surface",
             (opencascade::handle<Geom_BSplineSurface> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_BSplineSurface> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::Surface),
             R"#(returns the BSplineSurface of range Index)#"  , py::arg("SSPIndex"))
        .def("UDegree",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::VDegree),
             R"#(None)#" )
        .def("NumSubSpaces",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer  ) const>(&AdvApp2Var_ApproxAFunc2Var::NumSubSpaces),
             R"#(None)#"  , py::arg("Dimension"))
;


    static_cast<py::class_<AdvApp2Var_Context ,std::unique_ptr<AdvApp2Var_Context>  >>(m.attr("AdvApp2Var_Context"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> & >()  , py::arg("ifav"),  py::arg("iu"),  py::arg("iv"),  py::arg("nlimu"),  py::arg("nlimv"),  py::arg("iprecis"),  py::arg("nb1Dss"),  py::arg("nb2Dss"),  py::arg("nb3Dss"),  py::arg("tol1D"),  py::arg("tol2D"),  py::arg("tol3D"),  py::arg("tof1D"),  py::arg("tof2D"),  py::arg("tof3D") )
        .def("TotalDimension",
             (Standard_Integer (AdvApp2Var_Context::*)() const) static_cast<Standard_Integer (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::TotalDimension),
             R"#(None)#" )
        .def("TotalNumberSSP",
             (Standard_Integer (AdvApp2Var_Context::*)() const) static_cast<Standard_Integer (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::TotalNumberSSP),
             R"#(None)#" )
        .def("FavorIso",
             (Standard_Integer (AdvApp2Var_Context::*)() const) static_cast<Standard_Integer (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::FavorIso),
             R"#(None)#" )
        .def("UOrder",
             (Standard_Integer (AdvApp2Var_Context::*)() const) static_cast<Standard_Integer (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::UOrder),
             R"#(None)#" )
        .def("VOrder",
             (Standard_Integer (AdvApp2Var_Context::*)() const) static_cast<Standard_Integer (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::VOrder),
             R"#(None)#" )
        .def("ULimit",
             (Standard_Integer (AdvApp2Var_Context::*)() const) static_cast<Standard_Integer (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::ULimit),
             R"#(None)#" )
        .def("VLimit",
             (Standard_Integer (AdvApp2Var_Context::*)() const) static_cast<Standard_Integer (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::VLimit),
             R"#(None)#" )
        .def("UJacDeg",
             (Standard_Integer (AdvApp2Var_Context::*)() const) static_cast<Standard_Integer (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::UJacDeg),
             R"#(None)#" )
        .def("VJacDeg",
             (Standard_Integer (AdvApp2Var_Context::*)() const) static_cast<Standard_Integer (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::VJacDeg),
             R"#(None)#" )
        .def("UJacMax",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::UJacMax),
             R"#(None)#" )
        .def("VJacMax",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::VJacMax),
             R"#(None)#" )
        .def("URoots",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::URoots),
             R"#(None)#" )
        .def("VRoots",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::VRoots),
             R"#(None)#" )
        .def("UGauss",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::UGauss),
             R"#(None)#" )
        .def("VGauss",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::VGauss),
             R"#(None)#" )
        .def("IToler",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::IToler),
             R"#(None)#" )
        .def("FToler",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApp2Var_Context::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::FToler),
             R"#(None)#" )
        .def("CToler",
             (opencascade::handle<TColStd_HArray2OfReal> (AdvApp2Var_Context::*)() const) static_cast<opencascade::handle<TColStd_HArray2OfReal> (AdvApp2Var_Context::*)() const>(&AdvApp2Var_Context::CToler),
             R"#(None)#" )
;

// functions
// ./opencascade/AdvApp2Var_Patch.hxx
// ./opencascade/AdvApp2Var_Framework.hxx
// ./opencascade/AdvApp2Var_SysBase.hxx
// ./opencascade/AdvApp2Var_SequenceOfNode.hxx
// ./opencascade/AdvApp2Var_Data.hxx
// ./opencascade/AdvApp2Var_SequenceOfPatch.hxx
// ./opencascade/AdvApp2Var_ApproxF2var.hxx
// ./opencascade/AdvApp2Var_Node.hxx
// ./opencascade/AdvApp2Var_CriterionRepartition.hxx
// ./opencascade/AdvApp2Var_EvaluatorFunc2Var.hxx
// ./opencascade/AdvApp2Var_CriterionType.hxx
// ./opencascade/AdvApp2Var_Context.hxx
// ./opencascade/AdvApp2Var_Network.hxx
// ./opencascade/AdvApp2Var_Data_f2c.hxx
// ./opencascade/AdvApp2Var_Iso.hxx
// ./opencascade/AdvApp2Var_MathBase.hxx
// ./opencascade/AdvApp2Var_ApproxAFunc2Var.hxx
// ./opencascade/AdvApp2Var_Strip.hxx
// ./opencascade/AdvApp2Var_SequenceOfStrip.hxx
// ./opencascade/AdvApp2Var_Criterion.hxx

// operators

// register typdefs
// ./opencascade/AdvApp2Var_Patch.hxx
// ./opencascade/AdvApp2Var_Framework.hxx
// ./opencascade/AdvApp2Var_SysBase.hxx
// ./opencascade/AdvApp2Var_SequenceOfNode.hxx
    register_template_NCollection_Sequence<AdvApp2Var_Node>(m,"AdvApp2Var_SequenceOfNode");  
// ./opencascade/AdvApp2Var_Data.hxx
// ./opencascade/AdvApp2Var_SequenceOfPatch.hxx
    register_template_NCollection_Sequence<AdvApp2Var_Patch>(m,"AdvApp2Var_SequenceOfPatch");  
// ./opencascade/AdvApp2Var_ApproxF2var.hxx
// ./opencascade/AdvApp2Var_Node.hxx
// ./opencascade/AdvApp2Var_CriterionRepartition.hxx
// ./opencascade/AdvApp2Var_EvaluatorFunc2Var.hxx
// ./opencascade/AdvApp2Var_CriterionType.hxx
// ./opencascade/AdvApp2Var_Context.hxx
// ./opencascade/AdvApp2Var_Network.hxx
// ./opencascade/AdvApp2Var_Data_f2c.hxx
// ./opencascade/AdvApp2Var_Iso.hxx
// ./opencascade/AdvApp2Var_MathBase.hxx
// ./opencascade/AdvApp2Var_ApproxAFunc2Var.hxx
// ./opencascade/AdvApp2Var_Strip.hxx
    register_template_NCollection_Sequence<AdvApp2Var_Iso>(m,"AdvApp2Var_Strip");  
// ./opencascade/AdvApp2Var_SequenceOfStrip.hxx
    register_template_NCollection_Sequence<AdvApp2Var_Strip>(m,"AdvApp2Var_SequenceOfStrip");  
// ./opencascade/AdvApp2Var_Criterion.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
