
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
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
#include <Law_BSpline.hxx>

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
#include "NCollection_tmpl.hxx"
// ./opencascade/Law_Laws.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Law(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Law"));


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

// classes

    // default constructor
    register_default_constructor<Law , shared_ptr<Law>>(m,"Law");

    static_cast<py::class_<Law , shared_ptr<Law> >>(m.attr("Law"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MixBnd_s",
                    (opencascade::handle<Law_BSpFunc> (*)( const opencascade::handle<Law_Linear> & ) ) static_cast<opencascade::handle<Law_BSpFunc> (*)( const opencascade::handle<Law_Linear> & ) >(&Law::MixBnd),
                    R"#(This algorithm searches the knot values corresponding to the splitting of a given B-spline law into several arcs with the same continuity. The continuity order is given at the construction time. Builds a 1d bspline that is near from Lin with null derivatives at the extremities.)#"  , py::arg("Lin"))
        .def_static("MixBnd_s",
                    (opencascade::handle<TColStd_HArray1OfReal> (*)( const Standard_Integer ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & , const opencascade::handle<Law_Linear> & ) ) static_cast<opencascade::handle<TColStd_HArray1OfReal> (*)( const Standard_Integer ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & , const opencascade::handle<Law_Linear> & ) >(&Law::MixBnd),
                    R"#(Builds the poles of the 1d bspline that is near from Lin with null derivatives at the extremities.)#"  , py::arg("Degree"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("Lin"))
        .def_static("MixTgt_s",
                    (opencascade::handle<TColStd_HArray1OfReal> (*)( const Standard_Integer ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & , const Standard_Boolean , const Standard_Integer ) ) static_cast<opencascade::handle<TColStd_HArray1OfReal> (*)( const Standard_Integer ,  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & , const Standard_Boolean , const Standard_Integer ) >(&Law::MixTgt),
                    R"#(Builds the poles of the 1d bspline that is null on the rigth side of Knots(Index) (on the left if NulOnTheRight is false) and that is like a t*(1-t)(1-t) curve on the left side of Knots(Index) (on the rigth if NulOnTheRight is false). The result curve is C1 with a derivative equal to 1. at first parameter (-1 at last parameter if NulOnTheRight is false). Warning: Mults(Index) must greater or equal to degree-1.)#"  , py::arg("Degree"),  py::arg("Knots"),  py::arg("Mults"),  py::arg("NulOnTheRight"),  py::arg("Index"))
        .def_static("Reparametrize_s",
                    (opencascade::handle<Law_BSpline> (*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Integer ) ) static_cast<opencascade::handle<Law_BSpline> (*)( const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Integer ) >(&Law::Reparametrize),
                    R"#(Computes a 1 d curve to reparametrize a curve. Its an interpolation of NbPoints points calculated at quasi constant abscissa.)#"  , py::arg("Curve"),  py::arg("First"),  py::arg("Last"),  py::arg("HasDF"),  py::arg("HasDL"),  py::arg("DFirst"),  py::arg("DLast"),  py::arg("Rev"),  py::arg("NbPoints"))
        .def_static("Scale_s",
                    (opencascade::handle<Law_BSpline> (*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<Law_BSpline> (*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real ) >(&Law::Scale),
                    R"#(Computes a 1 d curve to scale a field of tangency. Value is 1. for t = (First+Last)/2 . If HasFirst value for t = First is VFirst (null derivative). If HasLast value for t = Last is VLast (null derivative).)#"  , py::arg("First"),  py::arg("Last"),  py::arg("HasF"),  py::arg("HasL"),  py::arg("VFirst"),  py::arg("VLast"))
        .def_static("ScaleCub_s",
                    (opencascade::handle<Law_BSpline> (*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<Law_BSpline> (*)( const Standard_Real , const Standard_Real , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Real ) >(&Law::ScaleCub),
                    R"#(None)#"  , py::arg("First"),  py::arg("Last"),  py::arg("HasF"),  py::arg("HasL"),  py::arg("VFirst"),  py::arg("VLast"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_BSpline ,opencascade::handle<Law_BSpline> , Standard_Transient>>(m.attr("Law_BSpline"))
    // constructors
        .def(py::init<  const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Poles"),  py::arg("Knots"),  py::arg("Multiplicities"),  py::arg("Degree"),  py::arg("Periodic")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init<  const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Poles"),  py::arg("Weights"),  py::arg("Knots"),  py::arg("Multiplicities"),  py::arg("Degree"),  py::arg("Periodic")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("IncreaseDegree",
             (void (Law_BSpline::*)( const Standard_Integer ) ) static_cast<void (Law_BSpline::*)( const Standard_Integer ) >(&Law_BSpline::IncreaseDegree),
             R"#(Increase the degree to <Degree>. Nothing is done if <Degree> is lower or equal to the current degree.)#"  , py::arg("Degree"))
        .def("IncreaseMultiplicity",
             (void (Law_BSpline::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Law_BSpline::*)( const Standard_Integer , const Standard_Integer ) >(&Law_BSpline::IncreaseMultiplicity),
             R"#(Increases the multiplicity of the knot <Index> to <M>.)#"  , py::arg("Index"),  py::arg("M"))
        .def("IncreaseMultiplicity",
             (void (Law_BSpline::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (Law_BSpline::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&Law_BSpline::IncreaseMultiplicity),
             R"#(Increases the multiplicities of the knots in [I1,I2] to <M>.)#"  , py::arg("I1"),  py::arg("I2"),  py::arg("M"))
        .def("IncrementMultiplicity",
             (void (Law_BSpline::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (Law_BSpline::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&Law_BSpline::IncrementMultiplicity),
             R"#(Increment the multiplicities of the knots in [I1,I2] by <M>.)#"  , py::arg("I1"),  py::arg("I2"),  py::arg("M"))
        .def("InsertKnot",
             (void (Law_BSpline::*)( const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Boolean ) ) static_cast<void (Law_BSpline::*)( const Standard_Real , const Standard_Integer , const Standard_Real , const Standard_Boolean ) >(&Law_BSpline::InsertKnot),
             R"#(Inserts a knot value in the sequence of knots. If <U> is an existing knot the multiplicity is increased by <M>.)#"  , py::arg("U"),  py::arg("M")=static_cast<const Standard_Integer>(1),  py::arg("ParametricTolerance")=static_cast<const Standard_Real>(0.0),  py::arg("Add")=static_cast<const Standard_Boolean>(Standard_True))
        .def("InsertKnots",
             (void (Law_BSpline::*)(  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (Law_BSpline::*)(  const NCollection_Array1<Standard_Real> & ,  const NCollection_Array1<Standard_Integer> & , const Standard_Real , const Standard_Boolean ) >(&Law_BSpline::InsertKnots),
             R"#(Inserts a set of knots values in the sequence of knots.)#"  , py::arg("Knots"),  py::arg("Mults"),  py::arg("ParametricTolerance")=static_cast<const Standard_Real>(0.0),  py::arg("Add")=static_cast<const Standard_Boolean>(Standard_False))
        .def("RemoveKnot",
             (Standard_Boolean (Law_BSpline::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) ) static_cast<Standard_Boolean (Law_BSpline::*)( const Standard_Integer , const Standard_Integer , const Standard_Real ) >(&Law_BSpline::RemoveKnot),
             R"#(Decrement the knots multiplicity to <M>. If M is 0 the knot is removed. The Poles sequence is modified.)#"  , py::arg("Index"),  py::arg("M"),  py::arg("Tolerance"))
        .def("Reverse",
             (void (Law_BSpline::*)() ) static_cast<void (Law_BSpline::*)() >(&Law_BSpline::Reverse),
             R"#(Changes the direction of parametrization of <me>. The Knot sequence is modified, the FirstParameter and the LastParameter are not modified. The StartPoint of the initial curve becomes the EndPoint of the reversed curve and the EndPoint of the initial curve becomes the StartPoint of the reversed curve.)#" )
        .def("ReversedParameter",
             (Standard_Real (Law_BSpline::*)( const Standard_Real ) const) static_cast<Standard_Real (Law_BSpline::*)( const Standard_Real ) const>(&Law_BSpline::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("Segment",
             (void (Law_BSpline::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Law_BSpline::*)( const Standard_Real , const Standard_Real ) >(&Law_BSpline::Segment),
             R"#(Segments the curve between U1 and U2. The control points are modified, the first and the last point are not the same. Warnings : Even if <me> is not closed it can become closed after the segmentation for example if U1 or U2 are out of the bounds of the curve <me> or if the curve makes loop. After the segmentation the length of a curve can be null. raises if U2 < U1.)#"  , py::arg("U1"),  py::arg("U2"))
        .def("SetKnot",
             (void (Law_BSpline::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (Law_BSpline::*)( const Standard_Integer , const Standard_Real ) >(&Law_BSpline::SetKnot),
             R"#(Changes the knot of range Index. The multiplicity of the knot is not modified. Raised if K >= Knots(Index+1) or K <= Knots(Index-1). Raised if Index < 1 || Index > NbKnots)#"  , py::arg("Index"),  py::arg("K"))
        .def("SetKnots",
             (void (Law_BSpline::*)(  const NCollection_Array1<Standard_Real> & ) ) static_cast<void (Law_BSpline::*)(  const NCollection_Array1<Standard_Real> & ) >(&Law_BSpline::SetKnots),
             R"#(Changes all the knots of the curve The multiplicity of the knots are not modified.)#"  , py::arg("K"))
        .def("SetKnot",
             (void (Law_BSpline::*)( const Standard_Integer , const Standard_Real , const Standard_Integer ) ) static_cast<void (Law_BSpline::*)( const Standard_Integer , const Standard_Real , const Standard_Integer ) >(&Law_BSpline::SetKnot),
             R"#(Changes the knot of range Index with its multiplicity. You can increase the multiplicity of a knot but it is not allowed to decrease the multiplicity of an existing knot.)#"  , py::arg("Index"),  py::arg("K"),  py::arg("M"))
        .def("SetPeriodic",
             (void (Law_BSpline::*)() ) static_cast<void (Law_BSpline::*)() >(&Law_BSpline::SetPeriodic),
             R"#(Makes a closed B-spline into a periodic curve. The curve is periodic if the knot sequence is periodic and if the curve is closed (The tolerance criterion is Resolution from gp). The period T is equal to Knot(LastUKnotIndex) - Knot(FirstUKnotIndex). A periodic B-spline can be uniform or not. Raised if the curve is not closed.)#" )
        .def("SetOrigin",
             (void (Law_BSpline::*)( const Standard_Integer ) ) static_cast<void (Law_BSpline::*)( const Standard_Integer ) >(&Law_BSpline::SetOrigin),
             R"#(Set the origin of a periodic curve at Knot(index) KnotVector and poles are modified. Raised if the curve is not periodic Raised if index not in the range [FirstUKnotIndex , LastUKnotIndex])#"  , py::arg("Index"))
        .def("SetNotPeriodic",
             (void (Law_BSpline::*)() ) static_cast<void (Law_BSpline::*)() >(&Law_BSpline::SetNotPeriodic),
             R"#(Makes a non periodic curve. If the curve was non periodic the curve is not modified.)#" )
        .def("SetPole",
             (void (Law_BSpline::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (Law_BSpline::*)( const Standard_Integer , const Standard_Real ) >(&Law_BSpline::SetPole),
             R"#(Substitutes the Pole of range Index with P.)#"  , py::arg("Index"),  py::arg("P"))
        .def("SetPole",
             (void (Law_BSpline::*)( const Standard_Integer , const Standard_Real , const Standard_Real ) ) static_cast<void (Law_BSpline::*)( const Standard_Integer , const Standard_Real , const Standard_Real ) >(&Law_BSpline::SetPole),
             R"#(Substitutes the pole and the weight of range Index. If the curve <me> is not rational it can become rational If the curve was rational it can become non rational)#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight"))
        .def("SetWeight",
             (void (Law_BSpline::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (Law_BSpline::*)( const Standard_Integer , const Standard_Real ) >(&Law_BSpline::SetWeight),
             R"#(Changes the weight for the pole of range Index. If the curve was non rational it can become rational. If the curve was rational it can become non rational.)#"  , py::arg("Index"),  py::arg("Weight"))
        .def("IsCN",
             (Standard_Boolean (Law_BSpline::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Law_BSpline::*)( const Standard_Integer ) const>(&Law_BSpline::IsCN),
             R"#(Returns the continuity of the curve, the curve is at least C0. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsClosed",
             (Standard_Boolean (Law_BSpline::*)() const) static_cast<Standard_Boolean (Law_BSpline::*)() const>(&Law_BSpline::IsClosed),
             R"#(Returns true if the distance between the first point and the last point of the curve is lower or equal to Resolution from package gp. Warnings : The first and the last point can be different from the first pole and the last pole of the curve.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Law_BSpline::*)() const) static_cast<Standard_Boolean (Law_BSpline::*)() const>(&Law_BSpline::IsPeriodic),
             R"#(Returns True if the curve is periodic.)#" )
        .def("IsRational",
             (Standard_Boolean (Law_BSpline::*)() const) static_cast<Standard_Boolean (Law_BSpline::*)() const>(&Law_BSpline::IsRational),
             R"#(Returns True if the weights are not identical. The tolerance criterion is Epsilon of the class Real.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Law_BSpline::*)() const) static_cast<GeomAbs_Shape (Law_BSpline::*)() const>(&Law_BSpline::Continuity),
             R"#(Returns the global continuity of the curve : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, CN : the order of continuity is infinite. For a B-spline curve of degree d if a knot Ui has a multiplicity p the B-spline curve is only Cd-p continuous at Ui. So the global continuity of the curve can't be greater than Cd-p where p is the maximum multiplicity of the interior Knots. In the interior of a knot span the curve is infinitely continuously differentiable.)#" )
        .def("Degree",
             (Standard_Integer (Law_BSpline::*)() const) static_cast<Standard_Integer (Law_BSpline::*)() const>(&Law_BSpline::Degree),
             R"#(Computation of value and derivatives)#" )
        .def("Value",
             (Standard_Real (Law_BSpline::*)( const Standard_Real ) const) static_cast<Standard_Real (Law_BSpline::*)( const Standard_Real ) const>(&Law_BSpline::Value),
             R"#(None)#"  , py::arg("U"))
        .def("DN",
             (Standard_Real (Law_BSpline::*)( const Standard_Real , const Standard_Integer ) const) static_cast<Standard_Real (Law_BSpline::*)( const Standard_Real , const Standard_Integer ) const>(&Law_BSpline::DN),
             R"#(The following functions computes the point of parameter U and the derivatives at this point on the B-spline curve arc defined between the knot FromK1 and the knot ToK2. U can be out of bounds [Knot (FromK1), Knot (ToK2)] but for the computation we only use the definition of the curve between these two knots. This method is useful to compute local derivative, if the order of continuity of the whole curve is not greater enough. Inside the parametric domain Knot (FromK1), Knot (ToK2) the evaluations are the same as if we consider the whole definition of the curve. Of course the evaluations are different outside this parametric domain.)#"  , py::arg("U"),  py::arg("N"))
        .def("LocalValue",
             (Standard_Real (Law_BSpline::*)( const Standard_Real , const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Law_BSpline::*)( const Standard_Real , const Standard_Integer , const Standard_Integer ) const>(&Law_BSpline::LocalValue),
             R"#(None)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"))
        .def("LocalDN",
             (Standard_Real (Law_BSpline::*)( const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Law_BSpline::*)( const Standard_Real , const Standard_Integer , const Standard_Integer , const Standard_Integer ) const>(&Law_BSpline::LocalDN),
             R"#(None)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("N"))
        .def("EndPoint",
             (Standard_Real (Law_BSpline::*)() const) static_cast<Standard_Real (Law_BSpline::*)() const>(&Law_BSpline::EndPoint),
             R"#(Returns the last point of the curve. Warnings : The last point of the curve is different from the last pole of the curve if the multiplicity of the last knot is lower than Degree.)#" )
        .def("FirstUKnotIndex",
             (Standard_Integer (Law_BSpline::*)() const) static_cast<Standard_Integer (Law_BSpline::*)() const>(&Law_BSpline::FirstUKnotIndex),
             R"#(For a B-spline curve the first parameter (which gives the start point of the curve) is a knot value but if the multiplicity of the first knot index is lower than Degree + 1 it is not the first knot of the curve. This method computes the index of the knot corresponding to the first parameter.)#" )
        .def("FirstParameter",
             (Standard_Real (Law_BSpline::*)() const) static_cast<Standard_Real (Law_BSpline::*)() const>(&Law_BSpline::FirstParameter),
             R"#(Computes the parametric value of the start point of the curve. It is a knot value.)#" )
        .def("Knot",
             (Standard_Real (Law_BSpline::*)( const Standard_Integer ) const) static_cast<Standard_Real (Law_BSpline::*)( const Standard_Integer ) const>(&Law_BSpline::Knot),
             R"#(Returns the knot of range Index. When there is a knot with a multiplicity greater than 1 the knot is not repeated. The method Multiplicity can be used to get the multiplicity of the Knot. Raised if Index < 1 or Index > NbKnots)#"  , py::arg("Index"))
        .def("Knots",
             (void (Law_BSpline::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (Law_BSpline::*)( NCollection_Array1<Standard_Real> & ) const>(&Law_BSpline::Knots),
             R"#(returns the knot values of the B-spline curve;)#"  , py::arg("K"))
        .def("KnotSequence",
             (void (Law_BSpline::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (Law_BSpline::*)( NCollection_Array1<Standard_Real> & ) const>(&Law_BSpline::KnotSequence),
             R"#(Returns the knots sequence. In this sequence the knots with a multiplicity greater than 1 are repeated. Example : K = {k1, k1, k1, k2, k3, k3, k4, k4, k4})#"  , py::arg("K"))
        .def("KnotDistribution",
             (GeomAbs_BSplKnotDistribution (Law_BSpline::*)() const) static_cast<GeomAbs_BSplKnotDistribution (Law_BSpline::*)() const>(&Law_BSpline::KnotDistribution),
             R"#(Returns NonUniform or Uniform or QuasiUniform or PiecewiseBezier. If all the knots differ by a positive constant from the preceding knot the BSpline Curve can be : - Uniform if all the knots are of multiplicity 1, - QuasiUniform if all the knots are of multiplicity 1 except for the first and last knot which are of multiplicity Degree + 1, - PiecewiseBezier if the first and last knots have multiplicity Degree + 1 and if interior knots have multiplicity Degree A piecewise Bezier with only two knots is a BezierCurve. else the curve is non uniform. The tolerance criterion is Epsilon from class Real.)#" )
        .def("LastUKnotIndex",
             (Standard_Integer (Law_BSpline::*)() const) static_cast<Standard_Integer (Law_BSpline::*)() const>(&Law_BSpline::LastUKnotIndex),
             R"#(For a BSpline curve the last parameter (which gives the end point of the curve) is a knot value but if the multiplicity of the last knot index is lower than Degree + 1 it is not the last knot of the curve. This method computes the index of the knot corresponding to the last parameter.)#" )
        .def("LastParameter",
             (Standard_Real (Law_BSpline::*)() const) static_cast<Standard_Real (Law_BSpline::*)() const>(&Law_BSpline::LastParameter),
             R"#(Computes the parametric value of the end point of the curve. It is a knot value.)#" )
        .def("Multiplicity",
             (Standard_Integer (Law_BSpline::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Law_BSpline::*)( const Standard_Integer ) const>(&Law_BSpline::Multiplicity),
             R"#(Returns the multiplicity of the knots of range Index. Raised if Index < 1 or Index > NbKnots)#"  , py::arg("Index"))
        .def("Multiplicities",
             (void (Law_BSpline::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (Law_BSpline::*)( NCollection_Array1<Standard_Integer> & ) const>(&Law_BSpline::Multiplicities),
             R"#(Returns the multiplicity of the knots of the curve.)#"  , py::arg("M"))
        .def("NbKnots",
             (Standard_Integer (Law_BSpline::*)() const) static_cast<Standard_Integer (Law_BSpline::*)() const>(&Law_BSpline::NbKnots),
             R"#(Returns the number of knots. This method returns the number of knot without repetition of multiple knots.)#" )
        .def("NbPoles",
             (Standard_Integer (Law_BSpline::*)() const) static_cast<Standard_Integer (Law_BSpline::*)() const>(&Law_BSpline::NbPoles),
             R"#(Returns the number of poles)#" )
        .def("Pole",
             (Standard_Real (Law_BSpline::*)( const Standard_Integer ) const) static_cast<Standard_Real (Law_BSpline::*)( const Standard_Integer ) const>(&Law_BSpline::Pole),
             R"#(Returns the pole of range Index. Raised if Index < 1 or Index > NbPoles.)#"  , py::arg("Index"))
        .def("Poles",
             (void (Law_BSpline::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (Law_BSpline::*)( NCollection_Array1<Standard_Real> & ) const>(&Law_BSpline::Poles),
             R"#(Returns the poles of the B-spline curve;)#"  , py::arg("P"))
        .def("StartPoint",
             (Standard_Real (Law_BSpline::*)() const) static_cast<Standard_Real (Law_BSpline::*)() const>(&Law_BSpline::StartPoint),
             R"#(Returns the start point of the curve. Warnings : This point is different from the first pole of the curve if the multiplicity of the first knot is lower than Degree.)#" )
        .def("Weight",
             (Standard_Real (Law_BSpline::*)( const Standard_Integer ) const) static_cast<Standard_Real (Law_BSpline::*)( const Standard_Integer ) const>(&Law_BSpline::Weight),
             R"#(Returns the weight of the pole of range Index . Raised if Index < 1 or Index > NbPoles.)#"  , py::arg("Index"))
        .def("Weights",
             (void (Law_BSpline::*)( NCollection_Array1<Standard_Real> & ) const) static_cast<void (Law_BSpline::*)( NCollection_Array1<Standard_Real> & ) const>(&Law_BSpline::Weights),
             R"#(Returns the weights of the B-spline curve;)#"  , py::arg("W"))
        .def("Copy",
             (opencascade::handle<Law_BSpline> (Law_BSpline::*)() const) static_cast<opencascade::handle<Law_BSpline> (Law_BSpline::*)() const>(&Law_BSpline::Copy),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_BSpline::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_BSpline::*)() const>(&Law_BSpline::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("PeriodicNormalization",
             []( Law_BSpline &self   ){ Standard_Real  U; self.PeriodicNormalization(U); return std::make_tuple(U); },
             R"#(returns the parameter normalized within the period if the curve is periodic : otherwise does not do anything)#" )
        .def("D0",
             []( Law_BSpline &self , const Standard_Real U ){ Standard_Real  P; self.D0(U,P); return std::make_tuple(P); },
             R"#(None)#"  , py::arg("U"))
        .def("D1",
             []( Law_BSpline &self , const Standard_Real U ){ Standard_Real  P; Standard_Real  V1; self.D1(U,P,V1); return std::make_tuple(P,V1); },
             R"#(None)#"  , py::arg("U"))
        .def("D2",
             []( Law_BSpline &self , const Standard_Real U ){ Standard_Real  P; Standard_Real  V1; Standard_Real  V2; self.D2(U,P,V1,V2); return std::make_tuple(P,V1,V2); },
             R"#(None)#"  , py::arg("U"))
        .def("D3",
             []( Law_BSpline &self , const Standard_Real U ){ Standard_Real  P; Standard_Real  V1; Standard_Real  V2; Standard_Real  V3; self.D3(U,P,V1,V2,V3); return std::make_tuple(P,V1,V2,V3); },
             R"#(None)#"  , py::arg("U"))
        .def("LocalD0",
             []( Law_BSpline &self , const Standard_Real U,const Standard_Integer FromK1,const Standard_Integer ToK2 ){ Standard_Real  P; self.LocalD0(U,FromK1,ToK2,P); return std::make_tuple(P); },
             R"#(None)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"))
        .def("LocalD1",
             []( Law_BSpline &self , const Standard_Real U,const Standard_Integer FromK1,const Standard_Integer ToK2 ){ Standard_Real  P; Standard_Real  V1; self.LocalD1(U,FromK1,ToK2,P,V1); return std::make_tuple(P,V1); },
             R"#(None)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"))
        .def("LocalD2",
             []( Law_BSpline &self , const Standard_Real U,const Standard_Integer FromK1,const Standard_Integer ToK2 ){ Standard_Real  P; Standard_Real  V1; Standard_Real  V2; self.LocalD2(U,FromK1,ToK2,P,V1,V2); return std::make_tuple(P,V1,V2); },
             R"#(None)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"))
        .def("LocalD3",
             []( Law_BSpline &self , const Standard_Real U,const Standard_Integer FromK1,const Standard_Integer ToK2 ){ Standard_Real  P; Standard_Real  V1; Standard_Real  V2; Standard_Real  V3; self.LocalD3(U,FromK1,ToK2,P,V1,V2,V3); return std::make_tuple(P,V1,V2,V3); },
             R"#(None)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"))
        .def("LocateU",
             []( Law_BSpline &self , const Standard_Real U,const Standard_Real ParametricTolerance,const Standard_Boolean WithKnotRepetition ){ Standard_Integer  I1; Standard_Integer  I2; self.LocateU(U,ParametricTolerance,I1,I2,WithKnotRepetition); return std::make_tuple(I1,I2); },
             R"#(Locates the parametric value U in the sequence of knots. If "WithKnotRepetition" is True we consider the knot's representation with repetition of multiple knot value, otherwise we consider the knot's representation with no repetition of multiple knot values. Knots (I1) <= U <= Knots (I2) . if I1 = I2 U is a knot value (the tolerance criterion ParametricTolerance is used). . if I1 < 1 => U < Knots (1) - Abs(ParametricTolerance) . if I2 > NbKnots => U > Knots (NbKnots) + Abs(ParametricTolerance))#"  , py::arg("U"),  py::arg("ParametricTolerance"),  py::arg("WithKnotRepetition")=static_cast<const Standard_Boolean>(Standard_False))
        .def("MovePointAndTangent",
             []( Law_BSpline &self , const Standard_Real U,const Standard_Real NewValue,const Standard_Real Derivative,const Standard_Real Tolerance,const Standard_Integer StartingCondition,const Standard_Integer EndingCondition ){ Standard_Integer  ErrorStatus; self.MovePointAndTangent(U,NewValue,Derivative,Tolerance,StartingCondition,EndingCondition,ErrorStatus); return std::make_tuple(ErrorStatus); },
             R"#(Changes the value of the Law at parameter U to NewValue. and makes its derivative at U be derivative. StartingCondition = -1 means first can move EndingCondition = -1 means last point can move StartingCondition = 0 means the first point cannot move EndingCondition = 0 means the last point cannot move StartingCondition = 1 means the first point and tangent cannot move EndingCondition = 1 means the last point and tangent cannot move and so forth ErrorStatus != 0 means that there are not enought degree of freedom with the constrain to deform the curve accordingly)#"  , py::arg("U"),  py::arg("NewValue"),  py::arg("Derivative"),  py::arg("Tolerance"),  py::arg("StartingCondition"),  py::arg("EndingCondition"))
        .def("Resolution",
             []( Law_BSpline &self , const Standard_Real Tolerance3D ){ Standard_Real  UTolerance; self.Resolution(Tolerance3D,UTolerance); return std::make_tuple(UTolerance); },
             R"#(given Tolerance3D returns UTolerance such that if f(t) is the curve we have | t1 - t0| < Utolerance ===> |f(t1) - f(t0)| < Tolerance3D)#"  , py::arg("Tolerance3D"))
    // static methods
        .def_static("MaxDegree_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Law_BSpline::MaxDegree),
                    R"#(Returns the value of the maximum degree of the normalized B-spline basis functions in this package.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_BSpline::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Law_BSpline::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_BSplineKnotSplitting , shared_ptr<Law_BSplineKnotSplitting> >>(m.attr("Law_BSplineKnotSplitting"))
    // constructors
        .def(py::init< const opencascade::handle<Law_BSpline> &,const Standard_Integer >()  , py::arg("BasisLaw"),  py::arg("ContinuityRange") )
    // custom constructors
    // methods
        .def("NbSplits",
             (Standard_Integer (Law_BSplineKnotSplitting::*)() const) static_cast<Standard_Integer (Law_BSplineKnotSplitting::*)() const>(&Law_BSplineKnotSplitting::NbSplits),
             R"#(Returns the number of knots corresponding to the splitting.)#" )
        .def("Splitting",
             (void (Law_BSplineKnotSplitting::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (Law_BSplineKnotSplitting::*)( NCollection_Array1<Standard_Integer> & ) const>(&Law_BSplineKnotSplitting::Splitting),
             R"#(Returns the indexes of the BSpline curve knots corresponding to the splitting.)#"  , py::arg("SplitValues"))
        .def("SplitValue",
             (Standard_Integer (Law_BSplineKnotSplitting::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Law_BSplineKnotSplitting::*)( const Standard_Integer ) const>(&Law_BSplineKnotSplitting::SplitValue),
             R"#(Returns the index of the knot corresponding to the splitting of range Index.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Function ,opencascade::handle<Law_Function>,Py_Law_Function , Standard_Transient>>(m.attr("Law_Function"))
    // constructors
    // custom constructors
    // methods
        .def("Continuity",
             (GeomAbs_Shape (Law_Function::*)() const) static_cast<GeomAbs_Shape (Law_Function::*)() const>(&Law_Function::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Law_Function::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Law_Function::*)( const GeomAbs_Shape ) const>(&Law_Function::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Law_Function::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Law_Function::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Law_Function::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (Standard_Real (Law_Function::*)( const Standard_Real ) ) static_cast<Standard_Real (Law_Function::*)( const Standard_Real ) >(&Law_Function::Value),
             R"#(Returns the value of the function at the point of parameter X.)#"  , py::arg("X"))
        .def("Trim",
             (opencascade::handle<Law_Function> (Law_Function::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Law_Function> (Law_Function::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Law_Function::Trim),
             R"#(Returns a law equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. It is usfule to determines the derivatives in these values <First> and <Last> if the Law is not Cn.)#"  , py::arg("PFirst"),  py::arg("PLast"),  py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_Function::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_Function::*)() const>(&Law_Function::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("D1",
             []( Law_Function &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; self.D1(X,F,D); return std::make_tuple(F,D); },
             R"#(Returns the value F and the first derivative D of the function at the point of parameter X.)#"  , py::arg("X"))
        .def("D2",
             []( Law_Function &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; Standard_Real  D2; self.D2(X,F,D,D2); return std::make_tuple(F,D,D2); },
             R"#(Returns the value, first and seconde derivatives at parameter X.)#"  , py::arg("X"))
        .def("Bounds",
             []( Law_Function &self   ){ Standard_Real  PFirst; Standard_Real  PLast; self.Bounds(PFirst,PLast); return std::make_tuple(PFirst,PLast); },
             R"#(Returns the parametric bounds of the function.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_Function::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Law_Function::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Interpolate , shared_ptr<Law_Interpolate> >>(m.attr("Law_Interpolate"))
    // constructors
        .def(py::init< const opencascade::handle<TColStd_HArray1OfReal> &,const Standard_Boolean,const Standard_Real >()  , py::arg("Points"),  py::arg("PeriodicFlag"),  py::arg("Tolerance") )
        .def(py::init< const opencascade::handle<TColStd_HArray1OfReal> &,const opencascade::handle<TColStd_HArray1OfReal> &,const Standard_Boolean,const Standard_Real >()  , py::arg("Points"),  py::arg("Parameters"),  py::arg("PeriodicFlag"),  py::arg("Tolerance") )
    // custom constructors
    // methods
        .def("Load",
             (void (Law_Interpolate::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Law_Interpolate::*)( const Standard_Real , const Standard_Real ) >(&Law_Interpolate::Load),
             R"#(loads initial and final tangents if any.)#"  , py::arg("InitialTangent"),  py::arg("FinalTangent"))
        .def("Load",
             (void (Law_Interpolate::*)(  const NCollection_Array1<Standard_Real> & , const opencascade::handle<TColStd_HArray1OfBoolean> & ) ) static_cast<void (Law_Interpolate::*)(  const NCollection_Array1<Standard_Real> & , const opencascade::handle<TColStd_HArray1OfBoolean> & ) >(&Law_Interpolate::Load),
             R"#(loads the tangents. We should have as many tangents as they are points in the array if TangentFlags.Value(i) is Standard_True use the tangent Tangents.Value(i) otherwise the tangent is not constrained.)#"  , py::arg("Tangents"),  py::arg("TangentFlags"))
        .def("Perform",
             (void (Law_Interpolate::*)() ) static_cast<void (Law_Interpolate::*)() >(&Law_Interpolate::Perform),
             R"#(Makes the interpolation)#" )
        .def("Curve",
             (const opencascade::handle<Law_BSpline> & (Law_Interpolate::*)() const) static_cast<const opencascade::handle<Law_BSpline> & (Law_Interpolate::*)() const>(&Law_Interpolate::Curve),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (Law_Interpolate::*)() const) static_cast<Standard_Boolean (Law_Interpolate::*)() const>(&Law_Interpolate::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_BSpFunc ,opencascade::handle<Law_BSpFunc> , Law_Function>>(m.attr("Law_BSpFunc"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Law_BSpline> &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("First"),  py::arg("Last") )
    // custom constructors
    // methods
        .def("Continuity",
             (GeomAbs_Shape (Law_BSpFunc::*)() const) static_cast<GeomAbs_Shape (Law_BSpFunc::*)() const>(&Law_BSpFunc::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Law_BSpFunc::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Law_BSpFunc::*)( const GeomAbs_Shape ) const>(&Law_BSpFunc::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Law_BSpFunc::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Law_BSpFunc::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Law_BSpFunc::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (Standard_Real (Law_BSpFunc::*)( const Standard_Real ) ) static_cast<Standard_Real (Law_BSpFunc::*)( const Standard_Real ) >(&Law_BSpFunc::Value),
             R"#(None)#"  , py::arg("X"))
        .def("Trim",
             (opencascade::handle<Law_Function> (Law_BSpFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Law_Function> (Law_BSpFunc::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Law_BSpFunc::Trim),
             R"#(Returns a law equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. It is usfule to determines the derivatives in these values <First> and <Last> if the Law is not Cn.)#"  , py::arg("PFirst"),  py::arg("PLast"),  py::arg("Tol"))
        .def("Curve",
             (opencascade::handle<Law_BSpline> (Law_BSpFunc::*)() const) static_cast<opencascade::handle<Law_BSpline> (Law_BSpFunc::*)() const>(&Law_BSpFunc::Curve),
             R"#(None)#" )
        .def("SetCurve",
             (void (Law_BSpFunc::*)( const opencascade::handle<Law_BSpline> & ) ) static_cast<void (Law_BSpFunc::*)( const opencascade::handle<Law_BSpline> & ) >(&Law_BSpFunc::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_BSpFunc::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_BSpFunc::*)() const>(&Law_BSpFunc::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("D1",
             []( Law_BSpFunc &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; self.D1(X,F,D); return std::make_tuple(F,D); },
             R"#(None)#"  , py::arg("X"))
        .def("D2",
             []( Law_BSpFunc &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; Standard_Real  D2; self.D2(X,F,D,D2); return std::make_tuple(F,D,D2); },
             R"#(None)#"  , py::arg("X"))
        .def("Bounds",
             []( Law_BSpFunc &self   ){ Standard_Real  PFirst; Standard_Real  PLast; self.Bounds(PFirst,PLast); return std::make_tuple(PFirst,PLast); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_BSpFunc::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Law_BSpFunc::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Composite ,opencascade::handle<Law_Composite> , Law_Function>>(m.attr("Law_Composite"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("First"),  py::arg("Last"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Continuity",
             (GeomAbs_Shape (Law_Composite::*)() const) static_cast<GeomAbs_Shape (Law_Composite::*)() const>(&Law_Composite::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Law_Composite::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Law_Composite::*)( const GeomAbs_Shape ) const>(&Law_Composite::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (Law_Composite::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Law_Composite::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Law_Composite::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (Standard_Real (Law_Composite::*)( const Standard_Real ) ) static_cast<Standard_Real (Law_Composite::*)( const Standard_Real ) >(&Law_Composite::Value),
             R"#(Returns the value at parameter X.)#"  , py::arg("X"))
        .def("Trim",
             (opencascade::handle<Law_Function> (Law_Composite::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Law_Function> (Law_Composite::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Law_Composite::Trim),
             R"#(Returns a law equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. It is usfule to determines the derivatives in these values <First> and <Last> if the Law is not Cn.)#"  , py::arg("PFirst"),  py::arg("PLast"),  py::arg("Tol"))
        .def("ChangeElementaryLaw",
             (opencascade::handle<Law_Function> & (Law_Composite::*)( const Standard_Real ) ) static_cast<opencascade::handle<Law_Function> & (Law_Composite::*)( const Standard_Real ) >(&Law_Composite::ChangeElementaryLaw),
             R"#(Returns the elementary function of the composite used to compute at parameter W.)#"  , py::arg("W"))
        .def("ChangeLaws",
             (Law_Laws & (Law_Composite::*)() ) static_cast<Law_Laws & (Law_Composite::*)() >(&Law_Composite::ChangeLaws),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Law_Composite::*)() const) static_cast<Standard_Boolean (Law_Composite::*)() const>(&Law_Composite::IsPeriodic),
             R"#(None)#" )
        .def("SetPeriodic",
             (void (Law_Composite::*)() ) static_cast<void (Law_Composite::*)() >(&Law_Composite::SetPeriodic),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_Composite::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_Composite::*)() const>(&Law_Composite::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("D1",
             []( Law_Composite &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; self.D1(X,F,D); return std::make_tuple(F,D); },
             R"#(Returns the value and the first derivative at parameter X.)#"  , py::arg("X"))
        .def("D2",
             []( Law_Composite &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; Standard_Real  D2; self.D2(X,F,D,D2); return std::make_tuple(F,D,D2); },
             R"#(Returns the value, first and second derivatives at parameter X.)#"  , py::arg("X"))
        .def("Bounds",
             []( Law_Composite &self   ){ Standard_Real  PFirst; Standard_Real  PLast; self.Bounds(PFirst,PLast); return std::make_tuple(PFirst,PLast); },
             R"#(Returns the parametric bounds of the function.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_Composite::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Law_Composite::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Constant ,opencascade::handle<Law_Constant> , Law_Function>>(m.attr("Law_Constant"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (Law_Constant::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Law_Constant::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&Law_Constant::Set),
             R"#(Set the radius and the range of the constant Law.)#"  , py::arg("Radius"),  py::arg("PFirst"),  py::arg("PLast"))
        .def("Continuity",
             (GeomAbs_Shape (Law_Constant::*)() const) static_cast<GeomAbs_Shape (Law_Constant::*)() const>(&Law_Constant::Continuity),
             R"#(Returns GeomAbs_CN)#" )
        .def("NbIntervals",
             (Standard_Integer (Law_Constant::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Law_Constant::*)( const GeomAbs_Shape ) const>(&Law_Constant::NbIntervals),
             R"#(Returns 1)#"  , py::arg("S"))
        .def("Intervals",
             (void (Law_Constant::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Law_Constant::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Law_Constant::Intervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (Standard_Real (Law_Constant::*)( const Standard_Real ) ) static_cast<Standard_Real (Law_Constant::*)( const Standard_Real ) >(&Law_Constant::Value),
             R"#(Returns the value at parameter X.)#"  , py::arg("X"))
        .def("Trim",
             (opencascade::handle<Law_Function> (Law_Constant::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Law_Function> (Law_Constant::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Law_Constant::Trim),
             R"#(None)#"  , py::arg("PFirst"),  py::arg("PLast"),  py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_Constant::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_Constant::*)() const>(&Law_Constant::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("D1",
             []( Law_Constant &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; self.D1(X,F,D); return std::make_tuple(F,D); },
             R"#(Returns the value and the first derivative at parameter X.)#"  , py::arg("X"))
        .def("D2",
             []( Law_Constant &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; Standard_Real  D2; self.D2(X,F,D,D2); return std::make_tuple(F,D,D2); },
             R"#(Returns the value, first and second derivatives at parameter X.)#"  , py::arg("X"))
        .def("Bounds",
             []( Law_Constant &self   ){ Standard_Real  PFirst; Standard_Real  PLast; self.Bounds(PFirst,PLast); return std::make_tuple(PFirst,PLast); },
             R"#(Returns the parametric bounds of the function.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_Constant::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Law_Constant::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Linear ,opencascade::handle<Law_Linear> , Law_Function>>(m.attr("Law_Linear"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (Law_Linear::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Law_Linear::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&Law_Linear::Set),
             R"#(Defines this linear evolution law by assigning both: - the bounds Pdeb and Pfin of the parameter, and - the values Valdeb and Valfin of the function at these two parametric bounds.)#"  , py::arg("Pdeb"),  py::arg("Valdeb"),  py::arg("Pfin"),  py::arg("Valfin"))
        .def("Continuity",
             (GeomAbs_Shape (Law_Linear::*)() const) static_cast<GeomAbs_Shape (Law_Linear::*)() const>(&Law_Linear::Continuity),
             R"#(Returns GeomAbs_CN)#" )
        .def("NbIntervals",
             (Standard_Integer (Law_Linear::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (Law_Linear::*)( const GeomAbs_Shape ) const>(&Law_Linear::NbIntervals),
             R"#(Returns 1)#"  , py::arg("S"))
        .def("Intervals",
             (void (Law_Linear::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (Law_Linear::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&Law_Linear::Intervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("Value",
             (Standard_Real (Law_Linear::*)( const Standard_Real ) ) static_cast<Standard_Real (Law_Linear::*)( const Standard_Real ) >(&Law_Linear::Value),
             R"#(Returns the value of this function at the point of parameter X.)#"  , py::arg("X"))
        .def("Trim",
             (opencascade::handle<Law_Function> (Law_Linear::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Law_Function> (Law_Linear::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&Law_Linear::Trim),
             R"#(Returns a law equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. It is usfule to determines the derivatives in these values <First> and <Last> if the Law is not Cn.)#"  , py::arg("PFirst"),  py::arg("PLast"),  py::arg("Tol"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_Linear::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_Linear::*)() const>(&Law_Linear::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("D1",
             []( Law_Linear &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; self.D1(X,F,D); return std::make_tuple(F,D); },
             R"#(Returns the value F and the first derivative D of this function at the point of parameter X.)#"  , py::arg("X"))
        .def("D2",
             []( Law_Linear &self , const Standard_Real X ){ Standard_Real  F; Standard_Real  D; Standard_Real  D2; self.D2(X,F,D,D2); return std::make_tuple(F,D,D2); },
             R"#(Returns the value, first and second derivatives at parameter X.)#"  , py::arg("X"))
        .def("Bounds",
             []( Law_Linear &self   ){ Standard_Real  PFirst; Standard_Real  PLast; self.Bounds(PFirst,PLast); return std::make_tuple(PFirst,PLast); },
             R"#(Returns the parametric bounds of the function.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_Linear::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Law_Linear::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_Interpol ,opencascade::handle<Law_Interpol> , Law_BSpFunc>>(m.attr("Law_Interpol"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (Law_Interpol::*)(  const NCollection_Array1<gp_Pnt2d> & , const Standard_Boolean ) ) static_cast<void (Law_Interpol::*)(  const NCollection_Array1<gp_Pnt2d> & , const Standard_Boolean ) >(&Law_Interpol::Set),
             R"#(Defines this evolution law by interpolating the set of 2D points ParAndRad. The Y coordinate of a point of ParAndRad is the value of the function at the parameter point given by its X coordinate. If Periodic is true, this function is assumed to be periodic. Warning - The X coordinates of points in the table ParAndRad must be given in ascendant order. - If Periodic is true, the first and last Y coordinates of points in the table ParAndRad are assumed to be equal. In addition, with the second syntax, Dd and Df are also assumed to be equal. If this is not the case, Set uses the first value(s) as last value(s).)#"  , py::arg("ParAndRad"),  py::arg("Periodic")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetInRelative",
             (void (Law_Interpol::*)(  const NCollection_Array1<gp_Pnt2d> & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (Law_Interpol::*)(  const NCollection_Array1<gp_Pnt2d> & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&Law_Interpol::SetInRelative),
             R"#(None)#"  , py::arg("ParAndRad"),  py::arg("Ud"),  py::arg("Uf"),  py::arg("Periodic")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Set",
             (void (Law_Interpol::*)(  const NCollection_Array1<gp_Pnt2d> & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (Law_Interpol::*)(  const NCollection_Array1<gp_Pnt2d> & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&Law_Interpol::Set),
             R"#(Defines this evolution law by interpolating the set of 2D points ParAndRad. The Y coordinate of a point of ParAndRad is the value of the function at the parameter point given by its X coordinate. If Periodic is true, this function is assumed to be periodic. In the second syntax, Dd and Df define the values of the first derivative of the function at its first and last points. Warning - The X coordinates of points in the table ParAndRad must be given in ascendant order. - If Periodic is true, the first and last Y coordinates of points in the table ParAndRad are assumed to be equal. In addition, with the second syntax, Dd and Df are also assumed to be equal. If this is not the case, Set uses the first value(s) as last value(s).)#"  , py::arg("ParAndRad"),  py::arg("Dd"),  py::arg("Df"),  py::arg("Periodic")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetInRelative",
             (void (Law_Interpol::*)(  const NCollection_Array1<gp_Pnt2d> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (Law_Interpol::*)(  const NCollection_Array1<gp_Pnt2d> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&Law_Interpol::SetInRelative),
             R"#(None)#"  , py::arg("ParAndRad"),  py::arg("Ud"),  py::arg("Uf"),  py::arg("Dd"),  py::arg("Df"),  py::arg("Periodic")=static_cast<const Standard_Boolean>(Standard_False))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_Interpol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_Interpol::*)() const>(&Law_Interpol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_Interpol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Law_Interpol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Law_S ,opencascade::handle<Law_S> , Law_BSpFunc>>(m.attr("Law_S"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (Law_S::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Law_S::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&Law_S::Set),
             R"#(Defines this S evolution law by assigning both: - the bounds Pdeb and Pfin of the parameter, and - the values Valdeb and Valfin of the function at these two parametric bounds. The function is assumed to have the first derivatives equal to 0 at the two parameter points Pdeb and Pfin.)#"  , py::arg("Pdeb"),  py::arg("Valdeb"),  py::arg("Pfin"),  py::arg("Valfin"))
        .def("Set",
             (void (Law_S::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Law_S::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&Law_S::Set),
             R"#(Defines this S evolution law by assigning - the bounds Pdeb and Pfin of the parameter, - the values Valdeb and Valfin of the function at these two parametric bounds, and - the values Ddeb and Dfin of the first derivative of the function at these two parametric bounds.)#"  , py::arg("Pdeb"),  py::arg("Valdeb"),  py::arg("Ddeb"),  py::arg("Pfin"),  py::arg("Valfin"),  py::arg("Dfin"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Law_S::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Law_S::*)() const>(&Law_S::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Law_S::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Law_S::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Law_S.hxx
// ./opencascade/Law_BSpline.hxx
// ./opencascade/Law_Constant.hxx
// ./opencascade/Law_Function.hxx
// ./opencascade/Law_Laws.hxx
// ./opencascade/Law_Composite.hxx
// ./opencascade/Law_Interpol.hxx
// ./opencascade/Law.hxx
// ./opencascade/Law_BSpFunc.hxx
// ./opencascade/Law_Interpolate.hxx
// ./opencascade/Law_ListIteratorOfLaws.hxx
// ./opencascade/Law_Linear.hxx
// ./opencascade/Law_BSplineKnotSplitting.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<Law_Function> >(m,"Law_Laws");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
