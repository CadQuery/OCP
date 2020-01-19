
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Law_BSpline.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Law_BSpFunc.hxx>
#include <Law_Linear.hxx>
#include <Law_BSpline.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Law_BSpline.hxx>
#include <Law_Interpolate.hxx>
#include <Law_Function.hxx>
#include <Law_Constant.hxx>
#include <Law_Linear.hxx>
#include <Law_BSpFunc.hxx>
#include <Law_S.hxx>
#include <Law_Interpol.hxx>
#include <Law_Composite.hxx>
#include <Law_BSplineKnotSplitting.hxx>
#include <Law_BSpline.hxx>
#include <Law_BSpline.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_ConstructionError.hxx>

// module includes
#include <Law.hxx>
#include <Law_BSpFunc.hxx>
#include <Law_BSpline.hxx>
#include <Law_BSplineKnotSplitting.hxx>
#include <Law_Composite.hxx>
#include <Law_Constant.hxx>
#include <Law_Function.hxx>
#include <Law_Interpol.hxx>
#include <Law_Interpolate.hxx>
#include <Law_Laws.hxx>
#include <Law_Linear.hxx>
#include <Law_ListIteratorOfLaws.hxx>
#include <Law_S.hxx>

// template related includes
// ./opencascade/Law_Laws.hxx
#include "NCollection.hxx"
// ./opencascade/Law_Laws.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Law_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Law", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_Law_Function : public Law_Function{
    public:
        using Law_Function::Law_Function;
        
        // public pure virtual
        GeomAbs_Shape Continuity() const  override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,Law_Function,Continuity,) };
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Law_Function,NbIntervals,S) };
        void Intervals(NCollection_Array1<Standard_Real> & T,const GeomAbs_Shape S) const  override { PYBIND11_OVERLOAD_PURE(void,Law_Function,Intervals,T,S) };
        Standard_Real Value(const Standard_Real X) override { PYBIND11_OVERLOAD_PURE(Standard_Real,Law_Function,Value,X) };
        opencascade::handle<Law_Function> Trim(const Standard_Real PFirst,const Standard_Real PLast,const Standard_Real Tol) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Law_Function>,Law_Function,Trim,PFirst,PLast,Tol) };
        void D1(const Standard_Real X,Standard_Real & F,Standard_Real & D) override { PYBIND11_OVERLOAD_PURE(void,Law_Function,D1,X,F,D) };
        void D2(const Standard_Real X,Standard_Real & F,Standard_Real & D,Standard_Real & D2) override { PYBIND11_OVERLOAD_PURE(void,Law_Function,D2,X,F,D,D2) };
        void Bounds(Standard_Real & PFirst,Standard_Real & PLast) override { PYBIND11_OVERLOAD_PURE(void,Law_Function,Bounds,PFirst,PLast) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_NCollection_List<opencascade::handle<Law_Function> >(m,"Law_Laws");  

// classes forward declarations only
    py::class_<Law , shared_ptr<Law>  >(m,"Law",R"#(Multiple services concerning 1d functions.)#");
    py::class_<Law_BSpline ,opencascade::handle<Law_BSpline>  , Standard_Transient >(m,"Law_BSpline",R"#(Definition of the 1D B_spline curve.Definition of the 1D B_spline curve.Definition of the 1D B_spline curve.)#");
    py::class_<Law_BSplineKnotSplitting , shared_ptr<Law_BSplineKnotSplitting>  >(m,"Law_BSplineKnotSplitting",R"#(For a B-spline curve the discontinuities are localised at the knot values and between two knots values the B-spline is infinitely continuously differentiable. At a knot of range index the continuity is equal to : Degree - Mult (Index) where Degree is the degree of the basis B-spline functions and Mult the multiplicity of the knot of range Index. If for your computation you need to have B-spline curves with a minima of continuity it can be interesting to know between which knot values, a B-spline curve arc, has a continuity of given order. This algorithm computes the indexes of the knots where you should split the curve, to obtain arcs with a constant continuity given at the construction time. The splitting values are in the range [FirstUKnotValue, LastUKnotValue] (See class B-spline curve from package Geom). If you just want to compute the local derivatives on the curve you don't need to create the B-spline curve arcs, you can use the functions LocalD1, LocalD2, LocalD3, LocalDN of the class BSplineCurve.)#");
    py::class_<Law_Function ,opencascade::handle<Law_Function> ,Py_Law_Function , Standard_Transient >(m,"Law_Function",R"#(Root class for evolution laws.Root class for evolution laws.Root class for evolution laws.)#");
    py::class_<Law_Interpolate , shared_ptr<Law_Interpolate>  >(m,"Law_Interpolate",R"#(This class is used to interpolate a BsplineCurve passing through an array of points, with a C2 Continuity if tangency is not requested at the point. If tangency is requested at the point the continuity will be C1. If Perodicity is requested the curve will be closed and the junction will be the first point given. The curve will than be only C1)#");
    py::class_<Law_BSpFunc ,opencascade::handle<Law_BSpFunc>  , Law_Function >(m,"Law_BSpFunc",R"#(Law Function based on a BSpline curve 1d. Package methods and classes are implemented in package Law to construct the basis curve with several constraints.Law Function based on a BSpline curve 1d. Package methods and classes are implemented in package Law to construct the basis curve with several constraints.Law Function based on a BSpline curve 1d. Package methods and classes are implemented in package Law to construct the basis curve with several constraints.)#");
    py::class_<Law_Composite ,opencascade::handle<Law_Composite>  , Law_Function >(m,"Law_Composite",R"#(Loi composite constituee d une liste de lois de ranges consecutifs. Cette implementation un peu lourde permet de reunir en une seule loi des portions de loi construites de facon independantes (par exemple en interactif) et de lancer le walking d un coup a l echelle d une ElSpine. CET OBJET REPOND DONC A UN PROBLEME D IMPLEMENTATION SPECIFIQUE AUX CONGES!!!Loi composite constituee d une liste de lois de ranges consecutifs. Cette implementation un peu lourde permet de reunir en une seule loi des portions de loi construites de facon independantes (par exemple en interactif) et de lancer le walking d un coup a l echelle d une ElSpine. CET OBJET REPOND DONC A UN PROBLEME D IMPLEMENTATION SPECIFIQUE AUX CONGES!!!Loi composite constituee d une liste de lois de ranges consecutifs. Cette implementation un peu lourde permet de reunir en une seule loi des portions de loi construites de facon independantes (par exemple en interactif) et de lancer le walking d un coup a l echelle d une ElSpine. CET OBJET REPOND DONC A UN PROBLEME D IMPLEMENTATION SPECIFIQUE AUX CONGES!!!)#");
    py::class_<Law_Constant ,opencascade::handle<Law_Constant>  , Law_Function >(m,"Law_Constant",R"#(Loi constanteLoi constanteLoi constante)#");
    py::class_<Law_Linear ,opencascade::handle<Law_Linear>  , Law_Function >(m,"Law_Linear",R"#(Describes an linear evolution law.Describes an linear evolution law.Describes an linear evolution law.)#");
    py::class_<Law_Interpol ,opencascade::handle<Law_Interpol>  , Law_BSpFunc >(m,"Law_Interpol",R"#(Provides an evolution law that interpolates a set of parameter and value pairs (wi, radi)Provides an evolution law that interpolates a set of parameter and value pairs (wi, radi)Provides an evolution law that interpolates a set of parameter and value pairs (wi, radi))#");
    py::class_<Law_S ,opencascade::handle<Law_S>  , Law_BSpFunc >(m,"Law_S",R"#(Describes an "S" evolution law.Describes an "S" evolution law.Describes an "S" evolution law.)#");

};

// user-defined post-inclusion per module

// user-defined post
