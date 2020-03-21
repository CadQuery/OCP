
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Geom2d_TrimmedCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Geom2d_Point.hxx>
#include <Geom2d_Curve.hxx>
#include <Bisector_Curve.hxx>
#include <Bisector_BisecAna.hxx>
#include <Bisector_BisecPC.hxx>
#include <Bisector_BisecCC.hxx>
#include <Bisector_Bisec.hxx>
#include <Bisector_Inter.hxx>
#include <Bisector_PointOnBis.hxx>
#include <Bisector_PolyBis.hxx>
#include <Bisector_FunctionH.hxx>
#include <Bisector_FunctionInter.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom2d_TrimmedCurve.hxx>
#include <Standard_DomainError.hxx>
#include <Standard_RangeError.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Geom2d_Point.hxx>
#include <GccInt_Bisec.hxx>
#include <gp_Trsf2d.hxx>
#include <Bisector_Bisec.hxx>
#include <IntRes2d_Domain.hxx>
#include <Geom2d_Curve.hxx>
#include <Bisector_BisecCC.hxx>
#include <Geom2d_Line.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Bisector_Curve.hxx>

// module includes
#include <Bisector.hxx>
#include <Bisector_Bisec.hxx>
#include <Bisector_BisecAna.hxx>
#include <Bisector_BisecCC.hxx>
#include <Bisector_BisecPC.hxx>
#include <Bisector_Curve.hxx>
#include <Bisector_FunctionH.hxx>
#include <Bisector_FunctionInter.hxx>
#include <Bisector_Inter.hxx>
#include <Bisector_PointOnBis.hxx>
#include <Bisector_PolyBis.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Bisector_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Bisector", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_Bisector_Curve : public Bisector_Curve{
    public:
        using Bisector_Curve::Bisector_Curve;


        // public pure virtual
        Standard_Real Parameter(const gp_Pnt2d & P) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Bisector_Curve,Parameter,P) };
        Standard_Boolean IsExtendAtStart() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Bisector_Curve,IsExtendAtStart,) };
        Standard_Boolean IsExtendAtEnd() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Bisector_Curve,IsExtendAtEnd,) };
        Standard_Integer NbIntervals() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Bisector_Curve,NbIntervals,) };
        Standard_Real IntervalFirst(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Bisector_Curve,IntervalFirst,Index) };
        Standard_Real IntervalLast(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Bisector_Curve,IntervalLast,Index) };

        void Reverse() override { PYBIND11_OVERLOAD_PURE(void,Geom2d_Curve,Reverse,) };
        Standard_Real ReversedParameter(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Curve,ReversedParameter,U) };
        Standard_Real FirstParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Curve,FirstParameter,) };
        Standard_Real LastParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Curve,LastParameter,) };
        Standard_Boolean IsClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom2d_Curve,IsClosed,) };
        Standard_Boolean IsPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom2d_Curve,IsPeriodic,) };
        GeomAbs_Shape Continuity() const  override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,Geom2d_Curve,Continuity,) };
        Standard_Boolean IsCN(const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom2d_Curve,IsCN,N) };
        void D0(const Standard_Real U,gp_Pnt2d & P) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2d_Curve,D0,U,P) };
        void D1(const Standard_Real U,gp_Pnt2d & P,gp_Vec2d & V1) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2d_Curve,D1,U,P,V1) };
        void D2(const Standard_Real U,gp_Pnt2d & P,gp_Vec2d & V1,gp_Vec2d & V2) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2d_Curve,D2,U,P,V1,V2) };
        void D3(const Standard_Real U,gp_Pnt2d & P,gp_Vec2d & V1,gp_Vec2d & V2,gp_Vec2d & V3) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2d_Curve,D3,U,P,V1,V2,V3) };
        gp_Vec2d DN(const Standard_Real U,const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec2d,Geom2d_Curve,DN,U,N) };
        void Transform(const gp_Trsf2d & T) override { PYBIND11_OVERLOAD_PURE(void,Geom2d_Geometry,Transform,T) };
        opencascade::handle<Geom2d_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom2d_Geometry>,Geom2d_Geometry,Copy,) };

        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<Bisector , shared_ptr<Bisector> >(m,"Bisector",R"#(This package provides the bisecting line between two geometric elements.)#");
    py::class_<Bisector_Bisec , shared_ptr<Bisector_Bisec> >(m,"Bisector_Bisec",R"#(Bisec provides the bisecting line between two elements This line is trimed by a point <P> and it's contained in the domain defined by the two vectors <V1>, <V2> and <Sense>.)#");
    py::class_<Bisector_Curve ,opencascade::handle<Bisector_Curve>,Py_Bisector_Curve , Geom2d_Curve>(m,"Bisector_Curve",R"#()#");
    py::class_<Bisector_FunctionH , shared_ptr<Bisector_FunctionH> , math_FunctionWithDerivative>(m,"Bisector_FunctionH",R"#(H(v) = (T1 .P2(v) - P1) * ||T(v)|| - 2 2 (T(v).P2(v) - P1) * ||T1||)#");
    py::class_<Bisector_FunctionInter , shared_ptr<Bisector_FunctionInter> , math_FunctionWithDerivative>(m,"Bisector_FunctionInter",R"#(2 2 F(u) = (PC(u) - PBis1(u)) + (PC(u) - PBis2(u)))#");
    py::class_<Bisector_Inter , shared_ptr<Bisector_Inter> , IntRes2d_Intersection>(m,"Bisector_Inter",R"#(Intersection between two <Bisec> from Bisector.)#");
    py::class_<Bisector_PointOnBis , shared_ptr<Bisector_PointOnBis> >(m,"Bisector_PointOnBis",R"#(None)#");
    py::class_<Bisector_PolyBis , shared_ptr<Bisector_PolyBis> >(m,"Bisector_PolyBis",R"#(Polygon of PointOnBis)#");
    py::class_<Bisector_BisecAna ,opencascade::handle<Bisector_BisecAna> , Bisector_Curve>(m,"Bisector_BisecAna",R"#(This class provides the bisecting line between two geometric elements.The elements are Circles,Lines or Points.This class provides the bisecting line between two geometric elements.The elements are Circles,Lines or Points.This class provides the bisecting line between two geometric elements.The elements are Circles,Lines or Points.)#");
    py::class_<Bisector_BisecCC ,opencascade::handle<Bisector_BisecCC> , Bisector_Curve>(m,"Bisector_BisecCC",R"#(Construct the bisector between two curves. The curves can intersect only in their extremities.Construct the bisector between two curves. The curves can intersect only in their extremities.Construct the bisector between two curves. The curves can intersect only in their extremities.)#");
    py::class_<Bisector_BisecPC ,opencascade::handle<Bisector_BisecPC> , Bisector_Curve>(m,"Bisector_BisecPC",R"#(Provides the bisector between a point and a curve. the curvature on the curve has to be monoton. the point can't be on the curve exept at the extremitys.Provides the bisector between a point and a curve. the curvature on the curve has to be monoton. the point can't be on the curve exept at the extremitys.Provides the bisector between a point and a curve. the curvature on the curve has to be monoton. the point can't be on the curve exept at the extremitys.)#");

};

// user-defined post-inclusion per module

// user-defined post
