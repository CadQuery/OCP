
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Node.hxx>
#include <AdvApprox_Cutting.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Context.hxx>
#include <AdvApp2Var_Framework.hxx>
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
// ./opencascade\AdvApp2Var_SequenceOfNode.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\AdvApp2Var_SequenceOfStrip.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\AdvApp2Var_SequenceOfPatch.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\AdvApp2Var_Strip.hxx
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
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const GeomAbs_IsoType,const GeomAbs_Shape,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const AdvApp2Var_EvaluatorFunc2Var &,AdvApprox_Cutting &,AdvApprox_Cutting & >()  , py::arg("Num1DSS"),  py::arg("Num2DSS"),  py::arg("Num3DSS"),  py::arg("OneDTol"),  py::arg("TwoDTol"),  py::arg("ThreeDTol"),  py::arg("OneDTolFr"),  py::arg("TwoDTolFr"),  py::arg("ThreeDTolFr"),  py::arg("FirstInU"),  py::arg("LastInU"),  py::arg("FirstInV"),  py::arg("LastInV"),  py::arg("FavorIso"),  py::arg("ContInU"),  py::arg("ContInV"),  py::arg("PrecisCode"),  py::arg("MaxDegInU"),  py::arg("MaxDegInV"),  py::arg("MaxPatch"),  py::arg("Func"),  py::arg("UChoice"),  py::arg("VChoice") )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const GeomAbs_IsoType,const GeomAbs_Shape,const GeomAbs_Shape,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const AdvApp2Var_EvaluatorFunc2Var &,const AdvApp2Var_Criterion &,AdvApprox_Cutting &,AdvApprox_Cutting & >()  , py::arg("Num1DSS"),  py::arg("Num2DSS"),  py::arg("Num3DSS"),  py::arg("OneDTol"),  py::arg("TwoDTol"),  py::arg("ThreeDTol"),  py::arg("OneDTolFr"),  py::arg("TwoDTolFr"),  py::arg("ThreeDTolFr"),  py::arg("FirstInU"),  py::arg("LastInU"),  py::arg("FirstInV"),  py::arg("LastInV"),  py::arg("FavorIso"),  py::arg("ContInU"),  py::arg("ContInV"),  py::arg("PrecisCode"),  py::arg("MaxDegInU"),  py::arg("MaxDegInV"),  py::arg("MaxPatch"),  py::arg("Func"),  py::arg("Crit"),  py::arg("UChoice"),  py::arg("VChoice") )
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
        .def("MaxError",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::MaxError),
             R"#(returns the errors max)#"  , py::arg("Dimension"))
        .def("AverageError",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::AverageError),
             R"#(returns the average errors)#"  , py::arg("Dimension"))
        .def("UFrontError",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::UFrontError),
             R"#(returns the errors max on UFrontiers Warning: Dimension must be equal to 3.)#"  , py::arg("Dimension"))
        .def("VFrontError",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::VFrontError),
             R"#(returns the errors max on VFrontiers Warning: Dimension must be equal to 3.)#"  , py::arg("Dimension"))
        .def("MaxError",
             (Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::MaxError),
             R"#(returns the error max of the BSplineSurface of range Index)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("AverageError",
             (Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::AverageError),
             R"#(returns the average error of the BSplineSurface of range Index)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("UFrontError",
             (Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::UFrontError),
             R"#(returns the error max of the BSplineSurface of range Index on a UFrontier)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("VFrontError",
             (Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::VFrontError),
             R"#(returns the error max of the BSplineSurface of range Index on a VFrontier)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("CritError",
             (Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (AdvApp2Var_ApproxAFunc2Var::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_ApproxAFunc2Var::CritError),
             R"#(None)#"  , py::arg("Dimension"),  py::arg("Index"))
        .def("Dump",
             (void (AdvApp2Var_ApproxAFunc2Var::*)( std::ostream & ) const) static_cast<void (AdvApp2Var_ApproxAFunc2Var::*)( std::ostream & ) const>(&AdvApp2Var_ApproxAFunc2Var::Dump),
             R"#(Prints on the stream o informations on the current state of the object.)#"  , py::arg("o"))
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
        .def_static("mma2fnc__s",
                    (int (*)( integer * , integer * , integer * , doublereal * , const AdvApp2Var_EvaluatorFunc2Var & , doublereal * , integer * , integer * , doublereal * , integer * , integer * , integer * , integer * , integer * , doublereal * , integer * , doublereal * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , doublereal * , const AdvApp2Var_EvaluatorFunc2Var & , doublereal * , integer * , integer * , doublereal * , integer * , integer * , integer * , integer * , integer * , doublereal * , integer * , doublereal * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_ApproxF2var::mma2fnc_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("nbsesp"),  py::arg("ndimse"),  py::arg("uvfonc"),  py::arg("foncnp"),  py::arg("tconst"),  py::arg("isofav"),  py::arg("nbroot"),  py::arg("rootlg"),  py::arg("iordre"),  py::arg("ideriv"),  py::arg("ndgjac"),  py::arg("nbcrmx"),  py::arg("ncflim"),  py::arg("epsapr"),  py::arg("ncoeff"),  py::arg("courbe"),  py::arg("nbcrbe"),  py::arg("somtab"),  py::arg("diftab"),  py::arg("contr1"),  py::arg("contr2"),  py::arg("tabdec"),  py::arg("errmax"),  py::arg("errmoy"),  py::arg("iercod"))
        .def_static("mma2roo__s",
                    (int (*)( integer * , integer * , doublereal * , doublereal * ) ) static_cast<int (*)( integer * , integer * , doublereal * , doublereal * ) >(&AdvApp2Var_ApproxF2var::mma2roo_),
                    R"#(None)#"  , py::arg("nbpntu"),  py::arg("nbpntv"),  py::arg("urootl"),  py::arg("vrootl"))
        .def_static("mma2jmx__s",
                    (int (*)( integer * , integer * , doublereal * ) ) static_cast<int (*)( integer * , integer * , doublereal * ) >(&AdvApp2Var_ApproxF2var::mma2jmx_),
                    R"#(None)#"  , py::arg("ndgjac"),  py::arg("iordre"),  py::arg("xjacmx"))
        .def_static("mmapptt__s",
                    (int (*)( const integer * , const integer * , const integer * , doublereal * , integer * ) ) static_cast<int (*)( const integer * , const integer * , const integer * , doublereal * , integer * ) >(&AdvApp2Var_ApproxF2var::mmapptt_),
                    R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mma2cdi__s",
                    (int (*)( integer * , integer * , doublereal * , integer * , doublereal * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , doublereal * , integer * , doublereal * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_ApproxF2var::mma2cdi_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("nbpntu"),  py::arg("urootl"),  py::arg("nbpntv"),  py::arg("vrootl"),  py::arg("iordru"),  py::arg("iordrv"),  py::arg("contr1"),  py::arg("contr2"),  py::arg("contr3"),  py::arg("contr4"),  py::arg("sotbu1"),  py::arg("sotbu2"),  py::arg("ditbu1"),  py::arg("ditbu2"),  py::arg("sotbv1"),  py::arg("sotbv2"),  py::arg("ditbv1"),  py::arg("ditbv2"),  py::arg("sosotb"),  py::arg("soditb"),  py::arg("disotb"),  py::arg("diditb"),  py::arg("iercod"))
        .def_static("mma2ds1__s",
                    (int (*)( integer * , doublereal * , doublereal * , const AdvApp2Var_EvaluatorFunc2Var & , integer * , integer * , doublereal * , doublereal * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , doublereal * , doublereal * , const AdvApp2Var_EvaluatorFunc2Var & , integer * , integer * , doublereal * , doublereal * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_ApproxF2var::mma2ds1_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("uintfn"),  py::arg("vintfn"),  py::arg("foncnp"),  py::arg("nbpntu"),  py::arg("nbpntv"),  py::arg("urootb"),  py::arg("vrootb"),  py::arg("isofav"),  py::arg("sosotb"),  py::arg("disotb"),  py::arg("soditb"),  py::arg("diditb"),  py::arg("fpntab"),  py::arg("ttable"),  py::arg("iercod"))
        .def_static("mma2ce1__s",
                    (int (*)( integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * , integer * , integer * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * , integer * , integer * , integer * ) >(&AdvApp2Var_ApproxF2var::mma2ce1_),
                    R"#(None)#"  , py::arg("numdec"),  py::arg("ndimen"),  py::arg("nbsesp"),  py::arg("ndimse"),  py::arg("ndminu"),  py::arg("ndminv"),  py::arg("ndguli"),  py::arg("ndgvli"),  py::arg("ndjacu"),  py::arg("ndjacv"),  py::arg("iordru"),  py::arg("iordrv"),  py::arg("nbpntu"),  py::arg("nbpntv"),  py::arg("epsapr"),  py::arg("sosotb"),  py::arg("disotb"),  py::arg("soditb"),  py::arg("diditb"),  py::arg("patjac"),  py::arg("errmax"),  py::arg("errmoy"),  py::arg("ndegpu"),  py::arg("ndegpv"),  py::arg("itydec"),  py::arg("iercod"))
        .def_static("mma2can__s",
                    (int (*)( const integer * , const integer * , const integer * , const integer * , const integer * , const integer * , const integer * , const doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( const integer * , const integer * , const integer * , const integer * , const integer * , const integer * , const integer * , const doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_ApproxF2var::mma2can_),
                    R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mma1her__s",
                    (int (*)( const integer * , doublereal * , integer * ) ) static_cast<int (*)( const integer * , doublereal * , integer * ) >(&AdvApp2Var_ApproxF2var::mma1her_),
                    R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mma2ac2__s",
                    (int (*)( const integer * , const integer * , const integer * , const integer * , const integer * , const integer * , const doublereal * , const integer * , const doublereal * , const doublereal * , doublereal * ) ) static_cast<int (*)( const integer * , const integer * , const integer * , const integer * , const integer * , const integer * , const doublereal * , const integer * , const doublereal * , const doublereal * , doublereal * ) >(&AdvApp2Var_ApproxF2var::mma2ac2_),
                    R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mma2ac3__s",
                    (int (*)( const integer * , const integer * , const integer * , const integer * , const integer * , const integer * , const doublereal * , const integer * , const doublereal * , const doublereal * , doublereal * ) ) static_cast<int (*)( const integer * , const integer * , const integer * , const integer * , const integer * , const integer * , const doublereal * , const integer * , const doublereal * , const doublereal * , doublereal * ) >(&AdvApp2Var_ApproxF2var::mma2ac3_),
                    R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mma2ac1__s",
                    (int (*)( const integer * , const integer * , const integer * , const integer * , const integer * , const doublereal * , const doublereal * , const doublereal * , const doublereal * , const doublereal * , const doublereal * , doublereal * ) ) static_cast<int (*)( const integer * , const integer * , const integer * , const integer * , const integer * , const doublereal * , const doublereal * , const doublereal * , const doublereal * , const doublereal * , const doublereal * , doublereal * ) >(&AdvApp2Var_ApproxF2var::mma2ac1_),
                    R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mma2fx6__s",
                    (int (*)( integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , integer * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , integer * , integer * ) >(&AdvApp2Var_ApproxF2var::mma2fx6_),
                    R"#(None)#"  , py::arg("ncfmxu"),  py::arg("ncfmxv"),  py::arg("ndimen"),  py::arg("nbsesp"),  py::arg("ndimse"),  py::arg("nbupat"),  py::arg("nbvpat"),  py::arg("iordru"),  py::arg("iordrv"),  py::arg("epsapr"),  py::arg("epsfro"),  py::arg("patcan"),  py::arg("errmax"),  py::arg("ncoefu"),  py::arg("ncoefv"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Context , shared_ptr<AdvApp2Var_Context> >>(m.attr("AdvApp2Var_Context"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> &,const opencascade::handle<TColStd_HArray2OfReal> & >()  , py::arg("ifav"),  py::arg("iu"),  py::arg("iv"),  py::arg("nlimu"),  py::arg("nlimv"),  py::arg("iprecis"),  py::arg("nb1Dss"),  py::arg("nb2Dss"),  py::arg("nb3Dss"),  py::arg("tol1D"),  py::arg("tol2D"),  py::arg("tol3D"),  py::arg("tof1D"),  py::arg("tof2D"),  py::arg("tof3D") )
    // custom constructors
    // methods
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
        .def("MaxValue",
             (Standard_Real (AdvApp2Var_Criterion::*)() const) static_cast<Standard_Real (AdvApp2Var_Criterion::*)() const>(&AdvApp2Var_Criterion::MaxValue),
             R"#(None)#" )
        .def("Type",
             (AdvApp2Var_CriterionType (AdvApp2Var_Criterion::*)() const) static_cast<AdvApp2Var_CriterionType (AdvApp2Var_Criterion::*)() const>(&AdvApp2Var_Criterion::Type),
             R"#(None)#" )
        .def("Repartition",
             (AdvApp2Var_CriterionRepartition (AdvApp2Var_Criterion::*)() const) static_cast<AdvApp2Var_CriterionRepartition (AdvApp2Var_Criterion::*)() const>(&AdvApp2Var_Criterion::Repartition),
             R"#(None)#" )
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
        .def_static("Getmdnombr_s",
                    (mdnombr_1_ & (*)() ) static_cast<mdnombr_1_ & (*)() >(&AdvApp2Var_Data::Getmdnombr),
                    R"#(None)#" )
        .def_static("Getminombr_s",
                    (minombr_1_ & (*)() ) static_cast<minombr_1_ & (*)() >(&AdvApp2Var_Data::Getminombr),
                    R"#(None)#" )
        .def_static("Getmaovpar_s",
                    (maovpar_1_ & (*)() ) static_cast<maovpar_1_ & (*)() >(&AdvApp2Var_Data::Getmaovpar),
                    R"#(None)#" )
        .def_static("Getmaovpch_s",
                    (maovpch_1_ & (*)() ) static_cast<maovpch_1_ & (*)() >(&AdvApp2Var_Data::Getmaovpch),
                    R"#(None)#" )
        .def_static("Getmlgdrtl_s",
                    (mlgdrtl_1_ & (*)() ) static_cast<mlgdrtl_1_ & (*)() >(&AdvApp2Var_Data::Getmlgdrtl),
                    R"#(None)#" )
        .def_static("Getmmjcobi_s",
                    (mmjcobi_1_ & (*)() ) static_cast<mmjcobi_1_ & (*)() >(&AdvApp2Var_Data::Getmmjcobi),
                    R"#(None)#" )
        .def_static("Getmmcmcnp_s",
                    (mmcmcnp_1_ & (*)() ) static_cast<mmcmcnp_1_ & (*)() >(&AdvApp2Var_Data::Getmmcmcnp),
                    R"#(None)#" )
        .def_static("Getmmapgss_s",
                    (mmapgss_1_ & (*)() ) static_cast<mmapgss_1_ & (*)() >(&AdvApp2Var_Data::Getmmapgss),
                    R"#(None)#" )
        .def_static("Getmmapgs0_s",
                    (mmapgs0_1_ & (*)() ) static_cast<mmapgs0_1_ & (*)() >(&AdvApp2Var_Data::Getmmapgs0),
                    R"#(None)#" )
        .def_static("Getmmapgs1_s",
                    (mmapgs1_1_ & (*)() ) static_cast<mmapgs1_1_ & (*)() >(&AdvApp2Var_Data::Getmmapgs1),
                    R"#(None)#" )
        .def_static("Getmmapgs2_s",
                    (mmapgs2_1_ & (*)() ) static_cast<mmapgs2_1_ & (*)() >(&AdvApp2Var_Data::Getmmapgs2),
                    R"#(None)#" )
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
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<AdvApp2Var_Node> &, const NCollection_Sequence<AdvApp2Var_Strip> &, const NCollection_Sequence<AdvApp2Var_Strip> & >()  , py::arg("Frame"),  py::arg("UFrontier"),  py::arg("VFrontier") )
    // custom constructors
    // methods
        .def("FirstNotApprox",
             (Standard_Boolean (AdvApp2Var_Framework::*)( Standard_Integer & , Standard_Integer & , AdvApp2Var_Iso & ) const) static_cast<Standard_Boolean (AdvApp2Var_Framework::*)( Standard_Integer & , Standard_Integer & , AdvApp2Var_Iso & ) const>(&AdvApp2Var_Framework::FirstNotApprox),
             R"#(search the Index of the first Iso not approximated, if all Isos are approximated Standard_False is returned.)#"  , py::arg("IndexIso"),  py::arg("IndexStrip"),  py::arg("anIso"))
        .def("FirstNode",
             (Standard_Integer (AdvApp2Var_Framework::*)( const GeomAbs_IsoType , const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (AdvApp2Var_Framework::*)( const GeomAbs_IsoType , const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_Framework::FirstNode),
             R"#(None)#"  , py::arg("Type"),  py::arg("IndexIso"),  py::arg("IndexStrip"))
        .def("LastNode",
             (Standard_Integer (AdvApp2Var_Framework::*)( const GeomAbs_IsoType , const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (AdvApp2Var_Framework::*)( const GeomAbs_IsoType , const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_Framework::LastNode),
             R"#(None)#"  , py::arg("Type"),  py::arg("IndexIso"),  py::arg("IndexStrip"))
        .def("ChangeIso",
             (void (AdvApp2Var_Framework::*)( const Standard_Integer , const Standard_Integer , const AdvApp2Var_Iso & ) ) static_cast<void (AdvApp2Var_Framework::*)( const Standard_Integer , const Standard_Integer , const AdvApp2Var_Iso & ) >(&AdvApp2Var_Framework::ChangeIso),
             R"#(None)#"  , py::arg("IndexIso"),  py::arg("IndexStrip"),  py::arg("anIso"))
        .def("Node",
             (const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) const) static_cast<const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) const>(&AdvApp2Var_Framework::Node),
             R"#(None)#"  , py::arg("IndexNode"))
        .def("Node",
             (const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Real , const Standard_Real ) const) static_cast<const AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Real , const Standard_Real ) const>(&AdvApp2Var_Framework::Node),
             R"#(None)#"  , py::arg("U"),  py::arg("V"))
        .def("IsoU",
             (const AdvApp2Var_Iso & (AdvApp2Var_Framework::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<const AdvApp2Var_Iso & (AdvApp2Var_Framework::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&AdvApp2Var_Framework::IsoU),
             R"#(None)#"  , py::arg("U"),  py::arg("V0"),  py::arg("V1"))
        .def("IsoV",
             (const AdvApp2Var_Iso & (AdvApp2Var_Framework::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<const AdvApp2Var_Iso & (AdvApp2Var_Framework::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&AdvApp2Var_Framework::IsoV),
             R"#(None)#"  , py::arg("U0"),  py::arg("U1"),  py::arg("V"))
        .def("ChangeNode",
             (AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) ) static_cast<AdvApp2Var_Node & (AdvApp2Var_Framework::*)( const Standard_Integer ) >(&AdvApp2Var_Framework::ChangeNode),
             R"#(None)#"  , py::arg("IndexNode"))
        .def("UpdateInU",
             (void (AdvApp2Var_Framework::*)( const Standard_Real ) ) static_cast<void (AdvApp2Var_Framework::*)( const Standard_Real ) >(&AdvApp2Var_Framework::UpdateInU),
             R"#(None)#"  , py::arg("CuttingValue"))
        .def("UpdateInV",
             (void (AdvApp2Var_Framework::*)( const Standard_Real ) ) static_cast<void (AdvApp2Var_Framework::*)( const Standard_Real ) >(&AdvApp2Var_Framework::UpdateInV),
             R"#(None)#"  , py::arg("CuttingValue"))
        .def("UEquation",
             (const opencascade::handle<TColStd_HArray1OfReal> & (AdvApp2Var_Framework::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (AdvApp2Var_Framework::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_Framework::UEquation),
             R"#(None)#"  , py::arg("IndexIso"),  py::arg("IndexStrip"))
        .def("VEquation",
             (const opencascade::handle<TColStd_HArray1OfReal> & (AdvApp2Var_Framework::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (AdvApp2Var_Framework::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_Framework::VEquation),
             R"#(None)#"  , py::arg("IndexIso"),  py::arg("IndexStrip"))
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
        .def(py::init<  >()  )
        .def(py::init< const GeomAbs_IsoType,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("type"),  py::arg("cte"),  py::arg("Ufirst"),  py::arg("Ulast"),  py::arg("Vfirst"),  py::arg("Vlast"),  py::arg("pos"),  py::arg("iu"),  py::arg("iv") )
    // custom constructors
    // methods
        .def("IsApproximated",
             (Standard_Boolean (AdvApp2Var_Iso::*)() const) static_cast<Standard_Boolean (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::IsApproximated),
             R"#(None)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApp2Var_Iso::*)() const) static_cast<Standard_Boolean (AdvApp2Var_Iso::*)() const>(&AdvApp2Var_Iso::HasResult),
             R"#(None)#" )
        .def("MakeApprox",
             (void (AdvApp2Var_Iso::*)( const AdvApp2Var_Context & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const AdvApp2Var_EvaluatorFunc2Var & , AdvApp2Var_Node & , AdvApp2Var_Node & ) ) static_cast<void (AdvApp2Var_Iso::*)( const AdvApp2Var_Context & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const AdvApp2Var_EvaluatorFunc2Var & , AdvApp2Var_Node & , AdvApp2Var_Node & ) >(&AdvApp2Var_Iso::MakeApprox),
             R"#(None)#"  , py::arg("Conditions"),  py::arg("a"),  py::arg("b"),  py::arg("c"),  py::arg("d"),  py::arg("func"),  py::arg("NodeBegin"),  py::arg("NodeEnd"))
        .def("ChangeDomain",
             (void (AdvApp2Var_Iso::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (AdvApp2Var_Iso::*)( const Standard_Real , const Standard_Real ) >(&AdvApp2Var_Iso::ChangeDomain),
             R"#(None)#"  , py::arg("a"),  py::arg("b"))
        .def("ChangeDomain",
             (void (AdvApp2Var_Iso::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (AdvApp2Var_Iso::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&AdvApp2Var_Iso::ChangeDomain),
             R"#(None)#"  , py::arg("a"),  py::arg("b"),  py::arg("c"),  py::arg("d"))
        .def("SetConstante",
             (void (AdvApp2Var_Iso::*)( const Standard_Real ) ) static_cast<void (AdvApp2Var_Iso::*)( const Standard_Real ) >(&AdvApp2Var_Iso::SetConstante),
             R"#(None)#"  , py::arg("newcte"))
        .def("SetPosition",
             (void (AdvApp2Var_Iso::*)( const Standard_Integer ) ) static_cast<void (AdvApp2Var_Iso::*)( const Standard_Integer ) >(&AdvApp2Var_Iso::SetPosition),
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
        .def_static("mmapcmp__s",
                    (int (*)( integer * , integer * , integer * , double * , double * ) ) static_cast<int (*)( integer * , integer * , integer * , double * , double * ) >(&AdvApp2Var_MathBase::mmapcmp_),
                    R"#()#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mmdrc11__s",
                    (int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * ) ) static_cast<int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::mmdrc11_),
                    R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mmfmca9__s",
                    (int (*)( integer * , integer * , integer * , integer * , integer * , integer * , doublereal * , doublereal * ) ) static_cast<int (*)( integer * , integer * , integer * , integer * , integer * , integer * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::mmfmca9_),
                    R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mmfmcb5__s",
                    (int (*)( integer * , integer * , integer * , doublereal * , integer * , integer * , integer * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , doublereal * , integer * , integer * , integer * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmfmcb5_),
                    R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mmwprcs__s",
                    (void (*)( doublereal * , doublereal * , doublereal * , doublereal * , integer * , integer * ) ) static_cast<void (*)( doublereal * , doublereal * , doublereal * , doublereal * , integer * , integer * ) >(&AdvApp2Var_MathBase::mmwprcs_),
                    R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""))
        .def_static("mmcglc1__s",
                    (int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmcglc1_),
                    R"#()#"  , py::arg("ndimax"),  py::arg("ndimen"),  py::arg("ncoeff"),  py::arg("courbe"),  py::arg("tdebut"),  py::arg("tfinal"),  py::arg("epsiln"),  py::arg("xlongc"),  py::arg("erreur"),  py::arg("iercod"))
        .def_static("mmbulld__s",
                    (int (*)( integer * , integer * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmbulld_),
                    R"#(None)#"  , py::arg("nbcoln"),  py::arg("nblign"),  py::arg("dtabtr"),  py::arg("numcle"))
        .def_static("mmcdriv__s",
                    (int (*)( integer * , integer * , doublereal * , integer * , integer * , doublereal * ) ) static_cast<int (*)( integer * , integer * , doublereal * , integer * , integer * , doublereal * ) >(&AdvApp2Var_MathBase::mmcdriv_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("ncoeff"),  py::arg("courbe"),  py::arg("ideriv"),  py::arg("ncofdv"),  py::arg("crvdrv"))
        .def_static("mmcvctx__s",
                    (int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmcvctx_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("ncofmx"),  py::arg("nderiv"),  py::arg("ctrtes"),  py::arg("crvres"),  py::arg("tabaux"),  py::arg("xmatri"),  py::arg("iercod"))
        .def_static("mdsptpt__s",
                    (int (*)( integer * , doublereal * , doublereal * , doublereal * ) ) static_cast<int (*)( integer * , doublereal * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::mdsptpt_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("point1"),  py::arg("point2"),  py::arg("distan"))
        .def_static("mmaperx__s",
                    (int (*)( integer * , integer * , integer * , integer * , doublereal * , integer * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , integer * , doublereal * , integer * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmaperx_),
                    R"#(None)#"  , py::arg("ncofmx"),  py::arg("ndimen"),  py::arg("ncoeff"),  py::arg("iordre"),  py::arg("crvjac"),  py::arg("ncfnew"),  py::arg("ycvmax"),  py::arg("errmax"),  py::arg("iercod"))
        .def_static("mmdrvck__s",
                    (int (*)( integer * , integer * , doublereal * , integer * , doublereal * , doublereal * ) ) static_cast<int (*)( integer * , integer * , doublereal * , integer * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::mmdrvck_),
                    R"#(None)#"  , py::arg("ncoeff"),  py::arg("ndimen"),  py::arg("courbe"),  py::arg("ideriv"),  py::arg("tparam"),  py::arg("pntcrb"))
        .def_static("mmeps1__s",
                    (int (*)( doublereal * ) ) static_cast<int (*)( doublereal * ) >(&AdvApp2Var_MathBase::mmeps1_),
                    R"#(None)#"  , py::arg("epsilo"))
        .def_static("mmfmca8__s",
                    (int (*)( const integer * , const integer * , const integer * , const integer * , const integer * , const integer * , doublereal * , doublereal * ) ) static_cast<int (*)( const integer * , const integer * , const integer * , const integer * , const integer * , const integer * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::mmfmca8_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("ncoefu"),  py::arg("ncoefv"),  py::arg("ndimax"),  py::arg("ncfumx"),  py::arg("ncfvmx"),  py::arg("tabini"),  py::arg("tabres"))
        .def_static("mmfmcar__s",
                    (int (*)( integer * , integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmfmcar_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("ncofmx"),  py::arg("ncoefu"),  py::arg("ncoefv"),  py::arg("patold"),  py::arg("upara1"),  py::arg("upara2"),  py::arg("vpara1"),  py::arg("vpara2"),  py::arg("patnew"),  py::arg("iercod"))
        .def_static("mmfmtb1__s",
                    (int (*)( integer * , doublereal * , integer * , integer * , integer * , doublereal * , integer * , integer * , integer * ) ) static_cast<int (*)( integer * , doublereal * , integer * , integer * , integer * , doublereal * , integer * , integer * , integer * ) >(&AdvApp2Var_MathBase::mmfmtb1_),
                    R"#(None)#"  , py::arg("maxsz1"),  py::arg("table1"),  py::arg("isize1"),  py::arg("jsize1"),  py::arg("maxsz2"),  py::arg("table2"),  py::arg("isize2"),  py::arg("jsize2"),  py::arg("iercod"))
        .def_static("mmgaus1__s",
                    (int (*)( integer * , int (*)(integer *, doublereal *, doublereal *, integer *) , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * , integer * ) ) static_cast<int (*)( integer * , int (*)(integer *, doublereal *, doublereal *, integer *) , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * , integer * ) >(&AdvApp2Var_MathBase::mmgaus1_),
                    R"#(None)#"  , py::arg("ndimf"),  py::arg("bfunx"),  py::arg("k"),  py::arg("xd"),  py::arg("xf"),  py::arg("saux1"),  py::arg("saux2"),  py::arg("somme"),  py::arg("niter"),  py::arg("iercod"))
        .def_static("mmhjcan__s",
                    (int (*)( integer * , integer * , integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmhjcan_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("ncourb"),  py::arg("ncftab"),  py::arg("orcont"),  py::arg("ncflim"),  py::arg("tcbold"),  py::arg("tdecop"),  py::arg("tcbnew"),  py::arg("iercod"))
        .def_static("mminltt__s",
                    (int (*)( integer * , integer * , doublereal * , integer * , integer * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , doublereal * , integer * , integer * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mminltt_),
                    R"#(None)#"  , py::arg("ncolmx"),  py::arg("nlgnmx"),  py::arg("tabtri"),  py::arg("nbrcol"),  py::arg("nbrlgn"),  py::arg("ajoute"),  py::arg("epseg"),  py::arg("iercod"))
        .def_static("mmjaccv__s",
                    (int (*)( const integer * , const integer * , const integer * , const doublereal * , doublereal * , doublereal * ) ) static_cast<int (*)( const integer * , const integer * , const integer * , const doublereal * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::mmjaccv_),
                    R"#(None)#"  , py::arg("ncoef"),  py::arg("ndim"),  py::arg("ider"),  py::arg("crvlgd"),  py::arg("polaux"),  py::arg("crvcan"))
        .def_static("mmpobas__s",
                    (int (*)( doublereal * , integer * , integer * , integer * , doublereal * , integer * ) ) static_cast<int (*)( doublereal * , integer * , integer * , integer * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmpobas_),
                    R"#(None)#"  , py::arg("tparam"),  py::arg("iordre"),  py::arg("ncoeff"),  py::arg("nderiv"),  py::arg("valbas"),  py::arg("iercod"))
        .def_static("mmmpocur__s",
                    (int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * ) ) static_cast<int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::mmmpocur_),
                    R"#(None)#"  , py::arg("ncofmx"),  py::arg("ndim"),  py::arg("ndeg"),  py::arg("courbe"),  py::arg("tparam"),  py::arg("tabval"))
        .def_static("mmposui__s",
                    (int (*)( integer * , integer * , integer * , integer * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , integer * , integer * ) >(&AdvApp2Var_MathBase::mmposui_),
                    R"#(None)#"  , py::arg("dimmat"),  py::arg("nistoc"),  py::arg("aposit"),  py::arg("posuiv"),  py::arg("iercod"))
        .def_static("mmresol__s",
                    (int (*)( integer * , integer * , integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , integer * , integer * , integer * , integer * , integer * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , integer * , integer * , integer * , integer * , integer * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmresol_),
                    R"#(None)#"  , py::arg("hdimen"),  py::arg("gdimen"),  py::arg("hnstoc"),  py::arg("gnstoc"),  py::arg("mnstoc"),  py::arg("matsyh"),  py::arg("matsyg"),  py::arg("vecsyh"),  py::arg("vecsyg"),  py::arg("hposit"),  py::arg("hposui"),  py::arg("gposit"),  py::arg("mmposui"),  py::arg("mposit"),  py::arg("vecsol"),  py::arg("iercod"))
        .def_static("mmrtptt__s",
                    (int (*)( integer * , doublereal * ) ) static_cast<int (*)( integer * , doublereal * ) >(&AdvApp2Var_MathBase::mmrtptt_),
                    R"#(None)#"  , py::arg("ndglgd"),  py::arg("rtlegd"))
        .def_static("mmsrre2__s",
                    (int (*)( doublereal * , integer * , doublereal * , doublereal * , integer * , integer * , integer * ) ) static_cast<int (*)( doublereal * , integer * , doublereal * , doublereal * , integer * , integer * , integer * ) >(&AdvApp2Var_MathBase::mmsrre2_),
                    R"#(None)#"  , py::arg("tparam"),  py::arg("nbrval"),  py::arg("tablev"),  py::arg("epsil"),  py::arg("numint"),  py::arg("itypen"),  py::arg("iercod"))
        .def_static("mmtrpjj__s",
                    (int (*)( integer * , integer * , integer * , doublereal * , integer * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , doublereal * , integer * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmtrpjj_),
                    R"#(None)#"  , py::arg("ncofmx"),  py::arg("ndimen"),  py::arg("ncoeff"),  py::arg("epsi3d"),  py::arg("iordre"),  py::arg("crvlgd"),  py::arg("ycvmax"),  py::arg("errmax"),  py::arg("ncfnew"))
        .def_static("mmunivt__s",
                    (int (*)( integer * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmunivt_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("vector"),  py::arg("vecnrm"),  py::arg("epsiln"),  py::arg("iercod"))
        .def_static("mmvncol__s",
                    (int (*)( integer * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmvncol_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("vecin"),  py::arg("vecout"),  py::arg("iercod"))
        .def_static("msc__s",
                    (doublereal (*)( integer * , doublereal * , doublereal * ) ) static_cast<doublereal (*)( integer * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::msc_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("vecte1"),  py::arg("vecte2"))
        .def_static("mvsheld__s",
                    (int (*)( integer * , integer * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mvsheld_),
                    R"#(None)#"  , py::arg("n"),  py::arg("is"),  py::arg("dtab"),  py::arg("icle"))
        .def_static("mmarcin__s",
                    (int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmarcin_),
                    R"#(None)#"  , py::arg("ndimax"),  py::arg("ndim"),  py::arg("ncoeff"),  py::arg("crvold"),  py::arg("u0"),  py::arg("u1"),  py::arg("crvnew"),  py::arg("iercod"))
        .def_static("mmcvinv__s",
                    (int (*)( integer * , integer * , integer * , doublereal * , doublereal * ) ) static_cast<int (*)( integer * , integer * , integer * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::mmcvinv_),
                    R"#(None)#"  , py::arg("ndimax"),  py::arg("ncoef"),  py::arg("ndim"),  py::arg("curveo"),  py::arg("curve"))
        .def_static("mmjacan__s",
                    (int (*)( const integer * , integer * , doublereal * , doublereal * ) ) static_cast<int (*)( const integer * , integer * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::mmjacan_),
                    R"#(None)#"  , py::arg("ideriv"),  py::arg("ndeg"),  py::arg("poljac"),  py::arg("polcan"))
        .def_static("mmpocrb__s",
                    (int (*)( integer * , integer * , doublereal * , integer * , doublereal * , doublereal * ) ) static_cast<int (*)( integer * , integer * , doublereal * , integer * , doublereal * , doublereal * ) >(&AdvApp2Var_MathBase::mmpocrb_),
                    R"#(None)#"  , py::arg("ndimax"),  py::arg("ncoeff"),  py::arg("courbe"),  py::arg("ndim"),  py::arg("tparam"),  py::arg("pntcrb"))
        .def_static("mmmrslwd__s",
                    (int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * , doublereal * , doublereal * , doublereal * , doublereal * , doublereal * , integer * ) >(&AdvApp2Var_MathBase::mmmrslwd_),
                    R"#(None)#"  , py::arg("normax"),  py::arg("nordre"),  py::arg("ndim"),  py::arg("amat"),  py::arg("bmat"),  py::arg("epspiv"),  py::arg("aaux"),  py::arg("xmat"),  py::arg("iercod"))
        .def_static("mmveps3__s",
                    (int (*)( doublereal * ) ) static_cast<int (*)( doublereal * ) >(&AdvApp2Var_MathBase::mmveps3_),
                    R"#(None)#"  , py::arg("eps03"))
        .def_static("pow__di_s",
                    (doublereal (*)( doublereal * , integer * ) ) static_cast<doublereal (*)( doublereal * , integer * ) >(&AdvApp2Var_MathBase::pow__di),
                    R"#(None)#"  , py::arg("x"),  py::arg("n"))
        .def_static("mzsnorm__s",
                    (doublereal (*)( integer * , doublereal * ) ) static_cast<doublereal (*)( integer * , doublereal * ) >(&AdvApp2Var_MathBase::mzsnorm_),
                    R"#(None)#"  , py::arg("ndimen"),  py::arg("vecteu"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Network , shared_ptr<AdvApp2Var_Network> >>(m.attr("AdvApp2Var_Network"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<AdvApp2Var_Patch> &, const NCollection_Sequence<Standard_Real> &, const NCollection_Sequence<Standard_Real> & >()  , py::arg("Net"),  py::arg("TheU"),  py::arg("TheV") )
    // custom constructors
    // methods
        .def("FirstNotApprox",
             (Standard_Boolean (AdvApp2Var_Network::*)( Standard_Integer & ) const) static_cast<Standard_Boolean (AdvApp2Var_Network::*)( Standard_Integer & ) const>(&AdvApp2Var_Network::FirstNotApprox),
             R"#(search the Index of the first Patch not approximated, if all Patches are approximated Standard_False is returned)#"  , py::arg("Index"))
        .def("ChangePatch",
             (AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer ) ) static_cast<AdvApp2Var_Patch & (AdvApp2Var_Network::*)( const Standard_Integer ) >(&AdvApp2Var_Network::ChangePatch),
             R"#(None)#"  , py::arg("Index"))
        .def("UpdateInU",
             (void (AdvApp2Var_Network::*)( const Standard_Real ) ) static_cast<void (AdvApp2Var_Network::*)( const Standard_Real ) >(&AdvApp2Var_Network::UpdateInU),
             R"#(None)#"  , py::arg("CuttingValue"))
        .def("UpdateInV",
             (void (AdvApp2Var_Network::*)( const Standard_Real ) ) static_cast<void (AdvApp2Var_Network::*)( const Standard_Real ) >(&AdvApp2Var_Network::UpdateInV),
             R"#(None)#"  , py::arg("CuttingValue"))
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
             (Standard_Real (AdvApp2Var_Network::*)( const Standard_Integer ) const) static_cast<Standard_Real (AdvApp2Var_Network::*)( const Standard_Integer ) const>(&AdvApp2Var_Network::UParameter),
             R"#(None)#"  , py::arg("Index"))
        .def("VParameter",
             (Standard_Real (AdvApp2Var_Network::*)( const Standard_Integer ) const) static_cast<Standard_Real (AdvApp2Var_Network::*)( const Standard_Integer ) const>(&AdvApp2Var_Network::VParameter),
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
        .def("SameDegree",
             []( AdvApp2Var_Network &self , const Standard_Integer iu,const Standard_Integer iv ){ Standard_Integer  ncfu; Standard_Integer  ncfv; self.SameDegree(iu,iv,ncfu,ncfv); return std::make_tuple(ncfu,ncfv); },
             R"#(None)#"  , py::arg("iu"),  py::arg("iv"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Node , shared_ptr<AdvApp2Var_Node> >>(m.attr("AdvApp2Var_Node"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("iu"),  py::arg("iv") )
        .def(py::init< const gp_XY &,const Standard_Integer,const Standard_Integer >()  , py::arg("UV"),  py::arg("iu"),  py::arg("iv") )
    // custom constructors
    // methods
        .def("Coord",
             (gp_XY (AdvApp2Var_Node::*)() const) static_cast<gp_XY (AdvApp2Var_Node::*)() const>(&AdvApp2Var_Node::Coord),
             R"#(None)#" )
        .def("SetCoord",
             (void (AdvApp2Var_Node::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (AdvApp2Var_Node::*)( const Standard_Real , const Standard_Real ) >(&AdvApp2Var_Node::SetCoord),
             R"#(None)#"  , py::arg("x1"),  py::arg("x2"))
        .def("UOrder",
             (Standard_Integer (AdvApp2Var_Node::*)() const) static_cast<Standard_Integer (AdvApp2Var_Node::*)() const>(&AdvApp2Var_Node::UOrder),
             R"#(None)#" )
        .def("VOrder",
             (Standard_Integer (AdvApp2Var_Node::*)() const) static_cast<Standard_Integer (AdvApp2Var_Node::*)() const>(&AdvApp2Var_Node::VOrder),
             R"#(None)#" )
        .def("SetPoint",
             (void (AdvApp2Var_Node::*)( const Standard_Integer , const Standard_Integer , const gp_Pnt & ) ) static_cast<void (AdvApp2Var_Node::*)( const Standard_Integer , const Standard_Integer , const gp_Pnt & ) >(&AdvApp2Var_Node::SetPoint),
             R"#(None)#"  , py::arg("iu"),  py::arg("iv"),  py::arg("Cte"))
        .def("Point",
             (gp_Pnt (AdvApp2Var_Node::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<gp_Pnt (AdvApp2Var_Node::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_Node::Point),
             R"#(None)#"  , py::arg("iu"),  py::arg("iv"))
        .def("SetError",
             (void (AdvApp2Var_Node::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<void (AdvApp2Var_Node::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&AdvApp2Var_Node::SetError),
             R"#(None)#"  , py::arg("iu"),  py::arg("iv"),  py::arg("error"))
        .def("Error",
             (Standard_Real (AdvApp2Var_Node::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (AdvApp2Var_Node::*)( const Standard_Integer , const Standard_Integer ) const>(&AdvApp2Var_Node::Error),
             R"#(None)#"  , py::arg("iu"),  py::arg("iv"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_Patch , shared_ptr<AdvApp2Var_Patch> >>(m.attr("AdvApp2Var_Patch"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("U0"),  py::arg("U1"),  py::arg("V0"),  py::arg("V1"),  py::arg("iu"),  py::arg("iv") )
    // custom constructors
    // methods
        .def("IsDiscretised",
             (Standard_Boolean (AdvApp2Var_Patch::*)() const) static_cast<Standard_Boolean (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::IsDiscretised),
             R"#(None)#" )
        .def("Discretise",
             (void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & , const AdvApp2Var_Framework & , const AdvApp2Var_EvaluatorFunc2Var & ) ) static_cast<void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & , const AdvApp2Var_Framework & , const AdvApp2Var_EvaluatorFunc2Var & ) >(&AdvApp2Var_Patch::Discretise),
             R"#(None)#"  , py::arg("Conditions"),  py::arg("Constraints"),  py::arg("func"))
        .def("IsApproximated",
             (Standard_Boolean (AdvApp2Var_Patch::*)() const) static_cast<Standard_Boolean (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::IsApproximated),
             R"#(None)#" )
        .def("HasResult",
             (Standard_Boolean (AdvApp2Var_Patch::*)() const) static_cast<Standard_Boolean (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::HasResult),
             R"#(None)#" )
        .def("MakeApprox",
             (void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & , const AdvApp2Var_Framework & , const Standard_Integer ) ) static_cast<void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & , const AdvApp2Var_Framework & , const Standard_Integer ) >(&AdvApp2Var_Patch::MakeApprox),
             R"#(None)#"  , py::arg("Conditions"),  py::arg("Constraints"),  py::arg("NumDec"))
        .def("AddConstraints",
             (void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & , const AdvApp2Var_Framework & ) ) static_cast<void (AdvApp2Var_Patch::*)( const AdvApp2Var_Context & , const AdvApp2Var_Framework & ) >(&AdvApp2Var_Patch::AddConstraints),
             R"#(None)#"  , py::arg("Conditions"),  py::arg("Constraints"))
        .def("AddErrors",
             (void (AdvApp2Var_Patch::*)( const AdvApp2Var_Framework & ) ) static_cast<void (AdvApp2Var_Patch::*)( const AdvApp2Var_Framework & ) >(&AdvApp2Var_Patch::AddErrors),
             R"#(None)#"  , py::arg("Constraints"))
        .def("ChangeDomain",
             (void (AdvApp2Var_Patch::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (AdvApp2Var_Patch::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&AdvApp2Var_Patch::ChangeDomain),
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
             (Standard_Integer (AdvApp2Var_Patch::*)( const AdvApp2Var_Criterion & , const Standard_Integer ) const) static_cast<Standard_Integer (AdvApp2Var_Patch::*)( const AdvApp2Var_Criterion & , const Standard_Integer ) const>(&AdvApp2Var_Patch::CutSense),
             R"#(None)#"  , py::arg("Crit"),  py::arg("NumDec"))
        .def("NbCoeffInU",
             (Standard_Integer (AdvApp2Var_Patch::*)() const) static_cast<Standard_Integer (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::NbCoeffInU),
             R"#(None)#" )
        .def("NbCoeffInV",
             (Standard_Integer (AdvApp2Var_Patch::*)() const) static_cast<Standard_Integer (AdvApp2Var_Patch::*)() const>(&AdvApp2Var_Patch::NbCoeffInV),
             R"#(None)#" )
        .def("ChangeNbCoeff",
             (void (AdvApp2Var_Patch::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (AdvApp2Var_Patch::*)( const Standard_Integer , const Standard_Integer ) >(&AdvApp2Var_Patch::ChangeNbCoeff),
             R"#(None)#"  , py::arg("NbCoeffU"),  py::arg("NbCoeffV"))
        .def("Poles",
             (opencascade::handle<TColgp_HArray2OfPnt> (AdvApp2Var_Patch::*)( const Standard_Integer , const AdvApp2Var_Context & ) const) static_cast<opencascade::handle<TColgp_HArray2OfPnt> (AdvApp2Var_Patch::*)( const Standard_Integer , const AdvApp2Var_Context & ) const>(&AdvApp2Var_Patch::Poles),
             R"#(None)#"  , py::arg("SSPIndex"),  py::arg("Conditions"))
        .def("Coefficients",
             (opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Patch::*)( const Standard_Integer , const AdvApp2Var_Context & ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (AdvApp2Var_Patch::*)( const Standard_Integer , const AdvApp2Var_Context & ) const>(&AdvApp2Var_Patch::Coefficients),
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
             (void (AdvApp2Var_Patch::*)( const Standard_Real ) ) static_cast<void (AdvApp2Var_Patch::*)( const Standard_Real ) >(&AdvApp2Var_Patch::SetCritValue),
             R"#(None)#"  , py::arg("dist"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AdvApp2Var_SysBase , shared_ptr<AdvApp2Var_SysBase> >>(m.attr("AdvApp2Var_SysBase"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("mainial_",
             (int (AdvApp2Var_SysBase::*)() ) static_cast<int (AdvApp2Var_SysBase::*)() >(&AdvApp2Var_SysBase::mainial_),
             R"#(None)#" )
        .def("mcrdelt_",
             (int (AdvApp2Var_SysBase::*)( integer * , integer * , void * , intptr_t * , integer * ) ) static_cast<int (AdvApp2Var_SysBase::*)( integer * , integer * , void * , intptr_t * , integer * ) >(&AdvApp2Var_SysBase::mcrdelt_),
             R"#(None)#"  , py::arg("iunit"),  py::arg("isize"),  py::arg("t"),  py::arg("iofset"),  py::arg("iercod"))
        .def("mcrrqst_",
             (int (AdvApp2Var_SysBase::*)( integer * , integer * , void * , intptr_t * , integer * ) ) static_cast<int (AdvApp2Var_SysBase::*)( integer * , integer * , void * , intptr_t * , integer * ) >(&AdvApp2Var_SysBase::mcrrqst_),
             R"#(None)#"  , py::arg("iunit"),  py::arg("isize"),  py::arg("t"),  py::arg("iofset"),  py::arg("iercod"))
        .def("macrai4_",
             (int (AdvApp2Var_SysBase::*)( integer * , integer * , integer * , intptr_t * , integer * ) ) static_cast<int (AdvApp2Var_SysBase::*)( integer * , integer * , integer * , intptr_t * , integer * ) >(&AdvApp2Var_SysBase::macrai4_),
             R"#(None)#"  , py::arg("nbelem"),  py::arg("maxelm"),  py::arg("itablo"),  py::arg("iofset"),  py::arg("iercod"))
        .def("macrar8_",
             (int (AdvApp2Var_SysBase::*)( integer * , integer * , doublereal * , intptr_t * , integer * ) ) static_cast<int (AdvApp2Var_SysBase::*)( integer * , integer * , doublereal * , intptr_t * , integer * ) >(&AdvApp2Var_SysBase::macrar8_),
             R"#(None)#"  , py::arg("nbelem"),  py::arg("maxelm"),  py::arg("xtablo"),  py::arg("iofset"),  py::arg("iercod"))
        .def("macrdi4_",
             (int (AdvApp2Var_SysBase::*)( integer * , integer * , integer * , intptr_t * , integer * ) ) static_cast<int (AdvApp2Var_SysBase::*)( integer * , integer * , integer * , intptr_t * , integer * ) >(&AdvApp2Var_SysBase::macrdi4_),
             R"#(None)#"  , py::arg("nbelem"),  py::arg("maxelm"),  py::arg("itablo"),  py::arg("iofset"),  py::arg("iercod"))
        .def("macrdr8_",
             (int (AdvApp2Var_SysBase::*)( integer * , integer * , doublereal * , intptr_t * , integer * ) ) static_cast<int (AdvApp2Var_SysBase::*)( integer * , integer * , doublereal * , intptr_t * , integer * ) >(&AdvApp2Var_SysBase::macrdr8_),
             R"#(None)#"  , py::arg("nbelem"),  py::arg("maxelm"),  py::arg("xtablo"),  py::arg("iofset"),  py::arg("iercod"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("macinit__s",
                    (int (*)( int * , int * ) ) static_cast<int (*)( int * , int * ) >(&AdvApp2Var_SysBase::macinit_),
                    R"#(None)#"  , py::arg(""),  py::arg(""))
        .def_static("mcrfill__s",
                    (int (*)( integer * , void * , void * ) ) static_cast<int (*)( integer * , void * , void * ) >(&AdvApp2Var_SysBase::mcrfill_),
                    R"#(None)#"  , py::arg("size"),  py::arg("tin"),  py::arg("tout"))
        .def_static("mnfndeb__s",
                    (integer (*)() ) static_cast<integer (*)() >(&AdvApp2Var_SysBase::mnfndeb_),
                    R"#(None)#" )
        .def_static("do__fio_s",
                    (int (*)() ) static_cast<int (*)() >(&AdvApp2Var_SysBase::do__fio),
                    R"#(None)#" )
        .def_static("do__lio_s",
                    (int (*)() ) static_cast<int (*)() >(&AdvApp2Var_SysBase::do__lio),
                    R"#(None)#" )
        .def_static("maermsg__s",
                    (int (*)( const char * , integer * , ftnlen ) ) static_cast<int (*)( const char * , integer * , ftnlen ) >(&AdvApp2Var_SysBase::maermsg_),
                    R"#(None)#"  , py::arg("cnompg"),  py::arg("icoder"),  py::arg("cnompg_len"))
        .def_static("maitbr8__s",
                    (int (*)( integer * , doublereal * , doublereal * ) ) static_cast<int (*)( integer * , doublereal * , doublereal * ) >(&AdvApp2Var_SysBase::maitbr8_),
                    R"#(None)#"  , py::arg("itaill"),  py::arg("xtab"),  py::arg("xval"))
        .def_static("maovsr8__s",
                    (int (*)( integer * ) ) static_cast<int (*)( integer * ) >(&AdvApp2Var_SysBase::maovsr8_),
                    R"#(None)#"  , py::arg("ivalcs"))
        .def_static("mgenmsg__s",
                    (int (*)( const char * , ftnlen ) ) static_cast<int (*)( const char * , ftnlen ) >(&AdvApp2Var_SysBase::mgenmsg_),
                    R"#(None)#"  , py::arg("nomprg"),  py::arg("nomprg_len"))
        .def_static("mgsomsg__s",
                    (int (*)( const char * , ftnlen ) ) static_cast<int (*)( const char * , ftnlen ) >(&AdvApp2Var_SysBase::mgsomsg_),
                    R"#(None)#"  , py::arg("nomprg"),  py::arg("nomprg_len"))
        .def_static("miraz__s",
                    (void (*)( integer * , void * ) ) static_cast<void (*)( integer * , void * ) >(&AdvApp2Var_SysBase::miraz_),
                    R"#(None)#"  , py::arg("taille"),  py::arg("adt"))
        .def_static("msifill__s",
                    (int (*)( integer * , integer * , integer * ) ) static_cast<int (*)( integer * , integer * , integer * ) >(&AdvApp2Var_SysBase::msifill_),
                    R"#(None)#"  , py::arg("nbintg"),  py::arg("ivecin"),  py::arg("ivecou"))
        .def_static("msrfill__s",
                    (int (*)( integer * , doublereal * , doublereal * ) ) static_cast<int (*)( integer * , doublereal * , doublereal * ) >(&AdvApp2Var_SysBase::msrfill_),
                    R"#(None)#"  , py::arg("nbreel"),  py::arg("vecent"),  py::arg("vecsor"))
        .def_static("mswrdbg__s",
                    (int (*)( const char * , ftnlen ) ) static_cast<int (*)( const char * , ftnlen ) >(&AdvApp2Var_SysBase::mswrdbg_),
                    R"#(None)#"  , py::arg("ctexte"),  py::arg("ctexte_len"))
        .def_static("mvriraz__s",
                    (void (*)( integer * , void * ) ) static_cast<void (*)( integer * , void * ) >(&AdvApp2Var_SysBase::mvriraz_),
                    R"#(None)#"  , py::arg("taille"),  py::arg("adt"))
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
// ./opencascade\AdvApp2Var_Context.hxx
// ./opencascade\AdvApp2Var_Network.hxx
// ./opencascade\AdvApp2Var_Node.hxx
// ./opencascade\AdvApp2Var_Iso.hxx
// ./opencascade\AdvApp2Var_MathBase.hxx
// ./opencascade\AdvApp2Var_ApproxAFunc2Var.hxx
// ./opencascade\AdvApp2Var_SequenceOfNode.hxx
// ./opencascade\AdvApp2Var_Framework.hxx
// ./opencascade\AdvApp2Var_Data.hxx
// ./opencascade\AdvApp2Var_CriterionType.hxx
// ./opencascade\AdvApp2Var_SequenceOfStrip.hxx
// ./opencascade\AdvApp2Var_SysBase.hxx
// ./opencascade\AdvApp2Var_SequenceOfPatch.hxx
// ./opencascade\AdvApp2Var_Strip.hxx
// ./opencascade\AdvApp2Var_Criterion.hxx
// ./opencascade\AdvApp2Var_Patch.hxx
// ./opencascade\AdvApp2Var_Data_f2c.hxx
// ./opencascade\AdvApp2Var_ApproxF2var.hxx
// ./opencascade\AdvApp2Var_CriterionRepartition.hxx
// ./opencascade\AdvApp2Var_EvaluatorFunc2Var.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<AdvApp2Var_Node>(m,"AdvApp2Var_SequenceOfNode");
    register_template_NCollection_Sequence<AdvApp2Var_Strip>(m,"AdvApp2Var_SequenceOfStrip");
    register_template_NCollection_Sequence<AdvApp2Var_Patch>(m,"AdvApp2Var_SequenceOfPatch");
    register_template_NCollection_Sequence<AdvApp2Var_Iso>(m,"AdvApp2Var_Strip");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
