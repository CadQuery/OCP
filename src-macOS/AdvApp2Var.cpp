
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <AdvApprox_Cutting.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Framework.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Node.hxx>

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
// ./opencascade/AdvApp2Var_SequenceOfStrip.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AdvApp2Var_Strip.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AdvApp2Var_SequenceOfPatch.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AdvApp2Var_SequenceOfNode.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AdvApp2Var(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AdvApp2Var"));


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

// classes


    static_cast<py::class_<AdvApp2Var_ApproxAFunc2Var , shared_ptr<AdvApp2Var_ApproxAFunc2Var> >>(m.attr("AdvApp2Var_ApproxAFunc2Var"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::IsDone),
             R"#(True if the approximation succeeded within the imposed tolerances and the wished continuities)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::HasResult),
             R"#(True if the approximation did come out with a result that is not NECESSARELY within the required tolerance or a result that is not recognized with the wished continuities)#" )
        .def("Surface",
             (opencascade::handle<Geom_BSplineSurface> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom_BSplineSurface> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::Surface),
             R"#(returns the BSplineSurface of range Index)#"  , py::arg("Index"))
        .def("UDegree",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::VDegree),
             R"#(None)#" )
        .def("NumSubSpaces",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::NumSubSpaces),
             R"#(None)#"  , py::arg("Dimension"))
        .def("IsDone",
             (Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::IsDone),
             R"#(True if the approximation succeeded within the imposed tolerances and the wished continuities)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Boolean (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::HasResult),
             R"#(True if the approximation did come out with a result that is not NECESSARELY within the required tolerance or a result that is not recognized with the wished continuities)#" )
        .def("Surface",
             (opencascade::handle<Geom_BSplineSurface> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom_BSplineSurface> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::Surface),
             R"#(returns the BSplineSurface of range Index)#"  , py::arg("SSPIndex"))
        .def("UDegree",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::UDegree),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)() const>(&AdvApp2Var_ApproxAFunc2Var::VDegree),
             R"#(None)#" )
        .def("NumSubSpaces",
             (Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const) static_cast<Standard_Integer (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::NumSubSpaces),
             R"#(None)#"  , py::arg("Dimension"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<AdvApp2Var_ApproxF2var , shared_ptr<AdvApp2Var_ApproxF2var>>(m,"AdvApp2Var_ApproxF2var");

    static_cast<py::class_<AdvApp2Var_ApproxF2var , shared_ptr<AdvApp2Var_ApproxF2var> >>(m.attr("AdvApp2Var_ApproxF2var"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Context , shared_ptr<AdvApp2Var_Context> >>(m.attr("AdvApp2Var_Context"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Criterion , shared_ptr<AdvApp2Var_Criterion>,Py_AdvApp2Var_Criterion >>(m.attr("AdvApp2Var_Criterion"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (void (AdvApp2Var_Criterion::*)( AdvApp2Var_Patch & , const AdvApp2Var_Context & ) const) static_cast<void (AdvApp2Var_Criterion::*)( AdvApp2Var_Patch & , const AdvApp2Var_Context & ) const>(&AdvApp2Var_Criterion::Value),
             R"#(None)#"  , py::arg("P"),  py::arg("C"))
        .def("IsSatisfied",
             (Standard_Boolean (AdvApp2Var_Criterion::*)( const AdvApp2Var_Patch & ) const) static_cast<Standard_Boolean (AdvApp2Var_Criterion::*)( const AdvApp2Var_Patch & ) const>(&AdvApp2Var_Criterion::IsSatisfied),
             R"#(None)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<AdvApp2Var_Data , shared_ptr<AdvApp2Var_Data>>(m,"AdvApp2Var_Data");

    static_cast<py::class_<AdvApp2Var_Data , shared_ptr<AdvApp2Var_Data> >>(m.attr("AdvApp2Var_Data"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_EvaluatorFunc2Var , shared_ptr<AdvApp2Var_EvaluatorFunc2Var>,Py_AdvApp2Var_EvaluatorFunc2Var >>(m.attr("AdvApp2Var_EvaluatorFunc2Var"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Evaluate",
             (void (AdvApp2Var_EvaluatorFunc2Var::*)( Standard_Integer * , Standard_Real * , Standard_Real * , Standard_Integer * , Standard_Real * , Standard_Integer * , Standard_Real * , Standard_Integer * , Standard_Integer * , Standard_Real * , Standard_Integer * ) const) static_cast<void (AdvApp2Var_EvaluatorFunc2Var::*)( Standard_Integer * , Standard_Real * , Standard_Real * , Standard_Integer * , Standard_Real * , Standard_Integer * , Standard_Real * , Standard_Integer * , Standard_Integer * , Standard_Real * , Standard_Integer * ) const>(&AdvApp2Var_EvaluatorFunc2Var::Evaluate),
             R"#(Function evaluation method to be defined by descendant)#"  , py::arg("theDimension"),  py::arg("theUStartEnd"),  py::arg("theVStartEnd"),  py::arg("theFavorIso"),  py::arg("theConstParam"),  py::arg("theNbParams"),  py::arg("theParameters"),  py::arg("theUOrder"),  py::arg("theVOrder"),  py::arg("theResult"),  py::arg("theErrorCode"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Framework , shared_ptr<AdvApp2Var_Framework> >>(m.attr("AdvApp2Var_Framework"))
    // constructors
    // custom constructors
    // methods
        .def("Node",
             (const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) const) static_cast<const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) const>(&AdvApp2Var_Framework::Node),
             R"#(None)#"  , py::arg("IndexNode"))
        .def("ChangeNode",
             (AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) ) static_cast<AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) >(&AdvApp2Var_Framework::ChangeNode),
             R"#(None)#"  , py::arg("IndexNode"))
        .def("Node",
             (const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) const) static_cast<const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) const>(&AdvApp2Var_Framework::Node),
             R"#(None)#"  , py::arg("IndexNode"))
        .def("ChangeNode",
             (AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) ) static_cast<AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) >(&AdvApp2Var_Framework::ChangeNode),
             R"#(None)#"  , py::arg("IndexNode"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Iso , shared_ptr<AdvApp2Var_Iso> >>(m.attr("AdvApp2Var_Iso"))
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
    register_default_constructor<AdvApp2Var_MathBase , shared_ptr<AdvApp2Var_MathBase>>(m,"AdvApp2Var_MathBase");

    static_cast<py::class_<AdvApp2Var_MathBase , shared_ptr<AdvApp2Var_MathBase> >>(m.attr("AdvApp2Var_MathBase"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Network , shared_ptr<AdvApp2Var_Network> >>(m.attr("AdvApp2Var_Network"))
    // constructors
    // custom constructors
    // methods
        .def("ChangePatch",
             (AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer ) ) static_cast<AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer ) >(&AdvApp2Var_Network::ChangePatch),
             R"#(None)#"  , py::arg("Index"))
        .def("Patch",
             (const AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_Network::Patch),
             R"#(None)#"  , py::arg("UIndex"),  py::arg("VIndex"))
        .def("ChangePatch",
             (AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer ) ) static_cast<AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer ) >(&AdvApp2Var_Network::ChangePatch),
             R"#(None)#"  , py::arg("Index"))
        .def("Patch",
             (const AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_Network::Patch),
             R"#(None)#"  , py::arg("UIndex"),  py::arg("VIndex"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Node , shared_ptr<AdvApp2Var_Node> >>(m.attr("AdvApp2Var_Node"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Patch , shared_ptr<AdvApp2Var_Patch> >>(m.attr("AdvApp2Var_Patch"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_SysBase , shared_ptr<AdvApp2Var_SysBase> >>(m.attr("AdvApp2Var_SysBase"))
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
    register_default_constructor<Namelist , shared_ptr<Namelist>>(m,"Namelist");

    static_cast<py::class_<Namelist , shared_ptr<Namelist> >>(m.attr("Namelist"))
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
    register_default_constructor<Vardesc , shared_ptr<Vardesc>>(m,"Vardesc");

    static_cast<py::class_<Vardesc , shared_ptr<Vardesc> >>(m.attr("Vardesc"))
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
    register_default_constructor<complex , shared_ptr<complex>>(m,"complex");

    static_cast<py::class_<complex , shared_ptr<complex> >>(m.attr("complex"))
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
    register_default_constructor<maovpar_1_ , shared_ptr<maovpar_1_>>(m,"maovpar_1_");

    static_cast<py::class_<maovpar_1_ , shared_ptr<maovpar_1_> >>(m.attr("maovpar_1_"))
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
    register_default_constructor<maovpch_1_ , shared_ptr<maovpch_1_>>(m,"maovpch_1_");

    static_cast<py::class_<maovpch_1_ , shared_ptr<maovpch_1_> >>(m.attr("maovpch_1_"))
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
    register_default_constructor<mdnombr_1_ , shared_ptr<mdnombr_1_>>(m,"mdnombr_1_");

    static_cast<py::class_<mdnombr_1_ , shared_ptr<mdnombr_1_> >>(m.attr("mdnombr_1_"))
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
    register_default_constructor<minombr_1_ , shared_ptr<minombr_1_>>(m,"minombr_1_");

    static_cast<py::class_<minombr_1_ , shared_ptr<minombr_1_> >>(m.attr("minombr_1_"))
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
    register_default_constructor<mlgdrtl_1_ , shared_ptr<mlgdrtl_1_>>(m,"mlgdrtl_1_");

    static_cast<py::class_<mlgdrtl_1_ , shared_ptr<mlgdrtl_1_> >>(m.attr("mlgdrtl_1_"))
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
    register_default_constructor<mmapgs0_1_ , shared_ptr<mmapgs0_1_>>(m,"mmapgs0_1_");

    static_cast<py::class_<mmapgs0_1_ , shared_ptr<mmapgs0_1_> >>(m.attr("mmapgs0_1_"))
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
    register_default_constructor<mmapgs1_1_ , shared_ptr<mmapgs1_1_>>(m,"mmapgs1_1_");

    static_cast<py::class_<mmapgs1_1_ , shared_ptr<mmapgs1_1_> >>(m.attr("mmapgs1_1_"))
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
    register_default_constructor<mmapgs2_1_ , shared_ptr<mmapgs2_1_>>(m,"mmapgs2_1_");

    static_cast<py::class_<mmapgs2_1_ , shared_ptr<mmapgs2_1_> >>(m.attr("mmapgs2_1_"))
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
    register_default_constructor<mmapgss_1_ , shared_ptr<mmapgss_1_>>(m,"mmapgss_1_");

    static_cast<py::class_<mmapgss_1_ , shared_ptr<mmapgss_1_> >>(m.attr("mmapgss_1_"))
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
    register_default_constructor<mmcmcnp_1_ , shared_ptr<mmcmcnp_1_>>(m,"mmcmcnp_1_");

    static_cast<py::class_<mmcmcnp_1_ , shared_ptr<mmcmcnp_1_> >>(m.attr("mmcmcnp_1_"))
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
    register_default_constructor<mmjcobi_1_ , shared_ptr<mmjcobi_1_>>(m,"mmjcobi_1_");

    static_cast<py::class_<mmjcobi_1_ , shared_ptr<mmjcobi_1_> >>(m.attr("mmjcobi_1_"))
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
// ./opencascade/AdvApp2Var_ApproxAFunc2Var.hxx
// ./opencascade/AdvApp2Var_Data_f2c.hxx
// ./opencascade/AdvApp2Var_SequenceOfStrip.hxx
// ./opencascade/AdvApp2Var_MathBase.hxx
// ./opencascade/AdvApp2Var_Criterion.hxx
// ./opencascade/AdvApp2Var_Patch.hxx
// ./opencascade/AdvApp2Var_Strip.hxx
// ./opencascade/AdvApp2Var_Iso.hxx
// ./opencascade/AdvApp2Var_Framework.hxx
// ./opencascade/AdvApp2Var_CriterionRepartition.hxx
// ./opencascade/AdvApp2Var_Network.hxx
// ./opencascade/AdvApp2Var_SequenceOfPatch.hxx
// ./opencascade/AdvApp2Var_CriterionType.hxx
// ./opencascade/AdvApp2Var_ApproxF2var.hxx
// ./opencascade/AdvApp2Var_Node.hxx
// ./opencascade/AdvApp2Var_SequenceOfNode.hxx
// ./opencascade/AdvApp2Var_EvaluatorFunc2Var.hxx
// ./opencascade/AdvApp2Var_Context.hxx
// ./opencascade/AdvApp2Var_Data.hxx
// ./opencascade/AdvApp2Var_SysBase.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<AdvApp2Var_Strip>(m,"AdvApp2Var_SequenceOfStrip");
    register_template_NCollection_Sequence<AdvApp2Var_Iso>(m,"AdvApp2Var_Strip");
    register_template_NCollection_Sequence<AdvApp2Var_Patch>(m,"AdvApp2Var_SequenceOfPatch");
    register_template_NCollection_Sequence<AdvApp2Var_Node>(m,"AdvApp2Var_SequenceOfNode");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
