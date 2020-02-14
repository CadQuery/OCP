
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Bisector_Bisec.hxx>
#include <IntRes2d_Domain.hxx>
#include <Geom2d_Curve.hxx>
#include <Bisector_BisecCC.hxx>
#include <Geom2d_Line.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Bisector_Curve.hxx>
#include <Geom2d_TrimmedCurve.hxx>
#include <Standard_DomainError.hxx>
#include <Standard_RangeError.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <Geom2d_Point.hxx>
#include <GccInt_Bisec.hxx>
#include <gp_Trsf2d.hxx>
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
void register_Bisector(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Bisector"));


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

// classes

    // default constructor
    register_default_constructor<Bisector , shared_ptr<Bisector>>(m,"Bisector");

    static_cast<py::class_<Bisector , shared_ptr<Bisector>  >>(m.attr("Bisector"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsConvex_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real  ) >(&Bisector::IsConvex),
                    R"#(None)#"  , py::arg("Cu"),  py::arg("Sign"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_Bisec , shared_ptr<Bisector_Bisec>  >>(m.attr("Bisector_Bisec"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (Bisector_Bisec::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const GeomAbs_JoinType ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Bisector_Bisec::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const GeomAbs_JoinType ,  const Standard_Real ,  const Standard_Boolean  ) >(&Bisector_Bisec::Perform),
             R"#(Performs the bisecting line between the curves <Cu1> and <Cu2>. <oncurve> is True if the point <P> is common to <Cu1> and <Cu2>.)#"  , py::arg("Cu1"),  py::arg("Cu2"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("Sense"),  py::arg("ajointype"),  py::arg("Tolerance"),  py::arg("oncurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (Bisector_Bisec::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Point> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Bisector_Bisec::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Point> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Bisector_Bisec::Perform),
             R"#(Performs the bisecting line between the curve <Cu1> and the point <Pnt>. <oncurve> is True if the point <P> is the point <Pnt>.)#"  , py::arg("Cu"),  py::arg("Pnt"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("Sense"),  py::arg("Tolerance"),  py::arg("oncurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (Bisector_Bisec::*)( const opencascade::handle<Geom2d_Point> & ,  const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Bisector_Bisec::*)( const opencascade::handle<Geom2d_Point> & ,  const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Bisector_Bisec::Perform),
             R"#(Performs the bisecting line between the curve <Cu> and the point <Pnt>. <oncurve> is True if the point <P> is the point <Pnt>.)#"  , py::arg("Pnt"),  py::arg("Cu"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("Sense"),  py::arg("Tolerance"),  py::arg("oncurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (Bisector_Bisec::*)( const opencascade::handle<Geom2d_Point> & ,  const opencascade::handle<Geom2d_Point> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Bisector_Bisec::*)( const opencascade::handle<Geom2d_Point> & ,  const opencascade::handle<Geom2d_Point> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Bisector_Bisec::Perform),
             R"#(Performs the bisecting line between the two points <Pnt1> and <Pnt2>.)#"  , py::arg("Pnt1"),  py::arg("Pnt2"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("Sense"),  py::arg("Tolerance")=static_cast<const Standard_Real>(0.0),  py::arg("oncurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Value",
             (const opencascade::handle<Geom2d_TrimmedCurve> & (Bisector_Bisec::*)() const) static_cast<const opencascade::handle<Geom2d_TrimmedCurve> & (Bisector_Bisec::*)() const>(&Bisector_Bisec::Value),
             R"#(Returns the Curve of <me>.)#" )
        .def("ChangeValue",
             (const opencascade::handle<Geom2d_TrimmedCurve> & (Bisector_Bisec::*)() ) static_cast<const opencascade::handle<Geom2d_TrimmedCurve> & (Bisector_Bisec::*)() >(&Bisector_Bisec::ChangeValue),
             R"#(Returns the Curve of <me>.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_Curve ,opencascade::handle<Bisector_Curve> ,Py_Bisector_Curve , Geom2d_Curve >>(m.attr("Bisector_Curve"))
    // constructors
    // custom constructors
    // methods
        .def("Parameter",
             (Standard_Real (Bisector_Curve::*)( const gp_Pnt2d &  ) const) static_cast<Standard_Real (Bisector_Curve::*)( const gp_Pnt2d &  ) const>(&Bisector_Curve::Parameter),
             R"#(None)#"  , py::arg("P"))
        .def("IsExtendAtStart",
             (Standard_Boolean (Bisector_Curve::*)() const) static_cast<Standard_Boolean (Bisector_Curve::*)() const>(&Bisector_Curve::IsExtendAtStart),
             R"#(None)#" )
        .def("IsExtendAtEnd",
             (Standard_Boolean (Bisector_Curve::*)() const) static_cast<Standard_Boolean (Bisector_Curve::*)() const>(&Bisector_Curve::IsExtendAtEnd),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Bisector_Curve::*)() const) static_cast<Standard_Integer (Bisector_Curve::*)() const>(&Bisector_Curve::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <C1>. And returns the number of intervals.)#" )
        .def("IntervalFirst",
             (Standard_Real (Bisector_Curve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Bisector_Curve::*)( const Standard_Integer  ) const>(&Bisector_Curve::IntervalFirst),
             R"#(Returns the first parameter of the current interval.)#"  , py::arg("Index"))
        .def("IntervalLast",
             (Standard_Real (Bisector_Curve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Bisector_Curve::*)( const Standard_Integer  ) const>(&Bisector_Curve::IntervalLast),
             R"#(Returns the last parameter of the current interval.)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bisector_Curve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bisector_Curve::*)() const>(&Bisector_Curve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bisector_Curve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Bisector_Curve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_FunctionH , shared_ptr<Bisector_FunctionH>  , math_FunctionWithDerivative >>(m.attr("Bisector_FunctionH"))
    // constructors
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const gp_Pnt2d &,const gp_Vec2d & >()  , py::arg("C2"),  py::arg("P1"),  py::arg("T1") )
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real ,  Standard_Real &  ) >(&Bisector_FunctionH::Value),
             R"#(Computes the values of the Functions for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real ,  Standard_Real &  ) >(&Bisector_FunctionH::Derivative),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Bisector_FunctionH::Values),
             R"#(Returns the values of the functions and the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_FunctionInter , shared_ptr<Bisector_FunctionInter>  , math_FunctionWithDerivative >>(m.attr("Bisector_FunctionInter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Bisector_Curve> &,const opencascade::handle<Bisector_Curve> & >()  , py::arg("C"),  py::arg("Bis1"),  py::arg("Bis2") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Bisector_FunctionInter::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Bisector_Curve> & ,  const opencascade::handle<Bisector_Curve> &  ) ) static_cast<void (Bisector_FunctionInter::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Bisector_Curve> & ,  const opencascade::handle<Bisector_Curve> &  ) >(&Bisector_FunctionInter::Perform),
             R"#(None)#"  , py::arg("C"),  py::arg("Bis1"),  py::arg("Bis2"))
        .def("Value",
             (Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real ,  Standard_Real &  ) >(&Bisector_FunctionInter::Value),
             R"#(Computes the values of the Functions for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real ,  Standard_Real &  ) >(&Bisector_FunctionInter::Derivative),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real &  ) >(&Bisector_FunctionInter::Values),
             R"#(Returns the values of the functions and the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_Inter , shared_ptr<Bisector_Inter>  , IntRes2d_Intersection >>(m.attr("Bisector_Inter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Bisector_Bisec &,const IntRes2d_Domain &,const Bisector_Bisec &,const IntRes2d_Domain &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("C1"),  py::arg("D1"),  py::arg("C2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"),  py::arg("ComunElement") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Bisector_Inter::*)( const Bisector_Bisec & ,  const IntRes2d_Domain & ,  const Bisector_Bisec & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Bisector_Inter::*)( const Bisector_Bisec & ,  const IntRes2d_Domain & ,  const Bisector_Bisec & ,  const IntRes2d_Domain & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Bisector_Inter::Perform),
             R"#(Intersection between 2 curves. C1 separates the element A and B. C2 separates the elements C et D. If B an C have the same geometry. <ComunElement> Has to be True. It Permits an optimiztion of the computation.)#"  , py::arg("C1"),  py::arg("D1"),  py::arg("C2"),  py::arg("D2"),  py::arg("TolConf"),  py::arg("Tol"),  py::arg("ComunElement"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_PointOnBis , shared_ptr<Bisector_PointOnBis>  >>(m.attr("Bisector_PointOnBis"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const gp_Pnt2d & >()  , py::arg("Param1"),  py::arg("Param2"),  py::arg("ParamBis"),  py::arg("Distance"),  py::arg("Point") )
    // custom constructors
    // methods
        .def("ParamOnC1",
             (void (Bisector_PointOnBis::*)( const Standard_Real  ) ) static_cast<void (Bisector_PointOnBis::*)( const Standard_Real  ) >(&Bisector_PointOnBis::ParamOnC1),
             R"#(None)#"  , py::arg("Param"))
        .def("ParamOnC2",
             (void (Bisector_PointOnBis::*)( const Standard_Real  ) ) static_cast<void (Bisector_PointOnBis::*)( const Standard_Real  ) >(&Bisector_PointOnBis::ParamOnC2),
             R"#(None)#"  , py::arg("Param"))
        .def("ParamOnBis",
             (void (Bisector_PointOnBis::*)( const Standard_Real  ) ) static_cast<void (Bisector_PointOnBis::*)( const Standard_Real  ) >(&Bisector_PointOnBis::ParamOnBis),
             R"#(None)#"  , py::arg("Param"))
        .def("Distance",
             (void (Bisector_PointOnBis::*)( const Standard_Real  ) ) static_cast<void (Bisector_PointOnBis::*)( const Standard_Real  ) >(&Bisector_PointOnBis::Distance),
             R"#(None)#"  , py::arg("Distance"))
        .def("IsInfinite",
             (void (Bisector_PointOnBis::*)( const Standard_Boolean  ) ) static_cast<void (Bisector_PointOnBis::*)( const Standard_Boolean  ) >(&Bisector_PointOnBis::IsInfinite),
             R"#(None)#"  , py::arg("Infinite"))
        .def("Point",
             (void (Bisector_PointOnBis::*)( const gp_Pnt2d &  ) ) static_cast<void (Bisector_PointOnBis::*)( const gp_Pnt2d &  ) >(&Bisector_PointOnBis::Point),
             R"#(None)#"  , py::arg("P"))
        .def("ParamOnC1",
             (Standard_Real (Bisector_PointOnBis::*)() const) static_cast<Standard_Real (Bisector_PointOnBis::*)() const>(&Bisector_PointOnBis::ParamOnC1),
             R"#(None)#" )
        .def("ParamOnC2",
             (Standard_Real (Bisector_PointOnBis::*)() const) static_cast<Standard_Real (Bisector_PointOnBis::*)() const>(&Bisector_PointOnBis::ParamOnC2),
             R"#(None)#" )
        .def("ParamOnBis",
             (Standard_Real (Bisector_PointOnBis::*)() const) static_cast<Standard_Real (Bisector_PointOnBis::*)() const>(&Bisector_PointOnBis::ParamOnBis),
             R"#(None)#" )
        .def("Distance",
             (Standard_Real (Bisector_PointOnBis::*)() const) static_cast<Standard_Real (Bisector_PointOnBis::*)() const>(&Bisector_PointOnBis::Distance),
             R"#(None)#" )
        .def("Point",
             (gp_Pnt2d (Bisector_PointOnBis::*)() const) static_cast<gp_Pnt2d (Bisector_PointOnBis::*)() const>(&Bisector_PointOnBis::Point),
             R"#(None)#" )
        .def("IsInfinite",
             (Standard_Boolean (Bisector_PointOnBis::*)() const) static_cast<Standard_Boolean (Bisector_PointOnBis::*)() const>(&Bisector_PointOnBis::IsInfinite),
             R"#(None)#" )
        .def("Dump",
             (void (Bisector_PointOnBis::*)() const) static_cast<void (Bisector_PointOnBis::*)() const>(&Bisector_PointOnBis::Dump),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_PolyBis , shared_ptr<Bisector_PolyBis>  >>(m.attr("Bisector_PolyBis"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Append",
             (void (Bisector_PolyBis::*)( const Bisector_PointOnBis &  ) ) static_cast<void (Bisector_PolyBis::*)( const Bisector_PointOnBis &  ) >(&Bisector_PolyBis::Append),
             R"#(None)#"  , py::arg("Point"))
        .def("Length",
             (Standard_Integer (Bisector_PolyBis::*)() const) static_cast<Standard_Integer (Bisector_PolyBis::*)() const>(&Bisector_PolyBis::Length),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (Bisector_PolyBis::*)() const) static_cast<Standard_Boolean (Bisector_PolyBis::*)() const>(&Bisector_PolyBis::IsEmpty),
             R"#(None)#" )
        .def("Value",
             (const Bisector_PointOnBis & (Bisector_PolyBis::*)( const Standard_Integer  ) const) static_cast<const Bisector_PointOnBis & (Bisector_PolyBis::*)( const Standard_Integer  ) const>(&Bisector_PolyBis::Value),
             R"#(None)#"  , py::arg("Index"))
        .def("First",
             (const Bisector_PointOnBis & (Bisector_PolyBis::*)() const) static_cast<const Bisector_PointOnBis & (Bisector_PolyBis::*)() const>(&Bisector_PolyBis::First),
             R"#(None)#" )
        .def("Last",
             (const Bisector_PointOnBis & (Bisector_PolyBis::*)() const) static_cast<const Bisector_PointOnBis & (Bisector_PolyBis::*)() const>(&Bisector_PolyBis::Last),
             R"#(None)#" )
        .def("Interval",
             (Standard_Integer (Bisector_PolyBis::*)( const Standard_Real  ) const) static_cast<Standard_Integer (Bisector_PolyBis::*)( const Standard_Real  ) const>(&Bisector_PolyBis::Interval),
             R"#(None)#"  , py::arg("U"))
        .def("Transform",
             (void (Bisector_PolyBis::*)( const gp_Trsf2d &  ) ) static_cast<void (Bisector_PolyBis::*)( const gp_Trsf2d &  ) >(&Bisector_PolyBis::Transform),
             R"#(None)#"  , py::arg("T"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_BisecAna ,opencascade::handle<Bisector_BisecAna>  , Bisector_Curve >>(m.attr("Bisector_BisecAna"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const GeomAbs_JoinType ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const GeomAbs_JoinType ,  const Standard_Real ,  const Standard_Boolean  ) >(&Bisector_BisecAna::Perform),
             R"#(Performs the bisecting line between the curves <Cu1> and <Cu2>. <oncurve> is True if the point <P> is common to <Cu1> and <Cu2>.)#"  , py::arg("Cu1"),  py::arg("Cu2"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("Sense"),  py::arg("jointype"),  py::arg("Tolerance"),  py::arg("oncurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Point> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Point> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Bisector_BisecAna::Perform),
             R"#(Performs the bisecting line between the curve <Cu1> and the point <Pnt>. <oncurve> is True if the point <P> is the point <Pnt>.)#"  , py::arg("Cu"),  py::arg("Pnt"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("Sense"),  py::arg("Tolerance"),  py::arg("oncurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_Point> & ,  const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_Point> & ,  const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Bisector_BisecAna::Perform),
             R"#(Performs the bisecting line between the curve <Cu> and the point <Pnt>. <oncurve> is True if the point <P> is the point <Pnt>.)#"  , py::arg("Pnt"),  py::arg("Cu"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("Sense"),  py::arg("Tolerance"),  py::arg("oncurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_Point> & ,  const opencascade::handle<Geom2d_Point> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_Point> & ,  const opencascade::handle<Geom2d_Point> & ,  const gp_Pnt2d & ,  const gp_Vec2d & ,  const gp_Vec2d & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Bisector_BisecAna::Perform),
             R"#(Performs the bisecting line between the two points <Pnt1> and <Pnt2>.)#"  , py::arg("Pnt1"),  py::arg("Pnt2"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("Sense"),  py::arg("Tolerance")=static_cast<const Standard_Real>(0.0),  py::arg("oncurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Init",
             (void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_TrimmedCurve> &  ) ) static_cast<void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_TrimmedCurve> &  ) >(&Bisector_BisecAna::Init),
             R"#(None)#"  , py::arg("bisector"))
        .def("IsExtendAtStart",
             (Standard_Boolean (Bisector_BisecAna::*)() const) static_cast<Standard_Boolean (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::IsExtendAtStart),
             R"#(None)#" )
        .def("IsExtendAtEnd",
             (Standard_Boolean (Bisector_BisecAna::*)() const) static_cast<Standard_Boolean (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::IsExtendAtEnd),
             R"#(None)#" )
        .def("SetTrim",
             (void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (Bisector_BisecAna::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&Bisector_BisecAna::SetTrim),
             R"#(Trim <me> by a domain defined by the curve <Cu>. This domain is the set of the points which are nearest from <Cu> than the extremitis of <Cu>.)#"  , py::arg("Cu"))
        .def("SetTrim",
             (void (Bisector_BisecAna::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Bisector_BisecAna::*)( const Standard_Real ,  const Standard_Real  ) >(&Bisector_BisecAna::SetTrim),
             R"#(Trim <me> by a domain defined by uf and ul)#"  , py::arg("uf"),  py::arg("ul"))
        .def("Reverse",
             (void (Bisector_BisecAna::*)() ) static_cast<void (Bisector_BisecAna::*)() >(&Bisector_BisecAna::Reverse),
             R"#(None)#" )
        .def("ReversedParameter",
             (Standard_Real (Bisector_BisecAna::*)( const Standard_Real  ) const) static_cast<Standard_Real (Bisector_BisecAna::*)( const Standard_Real  ) const>(&Bisector_BisecAna::ReversedParameter),
             R"#(None)#"  , py::arg("U"))
        .def("IsCN",
             (Standard_Boolean (Bisector_BisecAna::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Bisector_BisecAna::*)( const Standard_Integer  ) const>(&Bisector_BisecAna::IsCN),
             R"#(Returns the order of continuity of the curve. Raised if N < 0.)#"  , py::arg("N"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Bisector_BisecAna::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::Copy),
             R"#(None)#" )
        .def("Transform",
             (void (Bisector_BisecAna::*)( const gp_Trsf2d &  ) ) static_cast<void (Bisector_BisecAna::*)( const gp_Trsf2d &  ) >(&Bisector_BisecAna::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("FirstParameter",
             (Standard_Real (Bisector_BisecAna::*)() const) static_cast<Standard_Real (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Bisector_BisecAna::*)() const) static_cast<Standard_Real (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::LastParameter),
             R"#(None)#" )
        .def("IsClosed",
             (Standard_Boolean (Bisector_BisecAna::*)() const) static_cast<Standard_Boolean (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Bisector_BisecAna::*)() const) static_cast<Standard_Boolean (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::IsPeriodic),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Bisector_BisecAna::*)() const) static_cast<GeomAbs_Shape (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::Continuity),
             R"#(None)#" )
        .def("D0",
             (void (Bisector_BisecAna::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Bisector_BisecAna::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Bisector_BisecAna::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Bisector_BisecAna::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Bisector_BisecAna::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Bisector_BisecAna::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Bisector_BisecAna::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Bisector_BisecAna::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Bisector_BisecAna::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Bisector_BisecAna::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Bisector_BisecAna::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Bisector_BisecAna::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Bisector_BisecAna::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Bisector_BisecAna::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Bisector_BisecAna::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("Geom2dCurve",
             (opencascade::handle<Geom2d_Curve> (Bisector_BisecAna::*)() const) static_cast<opencascade::handle<Geom2d_Curve> (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::Geom2dCurve),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (Bisector_BisecAna::*)( const gp_Pnt2d &  ) const) static_cast<Standard_Real (Bisector_BisecAna::*)( const gp_Pnt2d &  ) const>(&Bisector_BisecAna::Parameter),
             R"#(None)#"  , py::arg("P"))
        .def("ParameterOfStartPoint",
             (Standard_Real (Bisector_BisecAna::*)() const) static_cast<Standard_Real (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::ParameterOfStartPoint),
             R"#(None)#" )
        .def("ParameterOfEndPoint",
             (Standard_Real (Bisector_BisecAna::*)() const) static_cast<Standard_Real (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::ParameterOfEndPoint),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Bisector_BisecAna::*)() const) static_cast<Standard_Integer (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <C1>. And returns the number of intervals.)#" )
        .def("IntervalFirst",
             (Standard_Real (Bisector_BisecAna::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Bisector_BisecAna::*)( const Standard_Integer  ) const>(&Bisector_BisecAna::IntervalFirst),
             R"#(Returns the first parameter of the current interval.)#"  , py::arg("Index"))
        .def("IntervalLast",
             (Standard_Real (Bisector_BisecAna::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Bisector_BisecAna::*)( const Standard_Integer  ) const>(&Bisector_BisecAna::IntervalLast),
             R"#(Returns the last parameter of the current interval.)#"  , py::arg("Index"))
        .def("Dump",
             (void (Bisector_BisecAna::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (Bisector_BisecAna::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Bisector_BisecAna::Dump),
             R"#(None)#"  , py::arg("Deep")=static_cast<const Standard_Integer>(0),  py::arg("Offset")=static_cast<const Standard_Integer>(0))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bisector_BisecAna::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bisector_BisecAna::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Bisector_BisecAna::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_BisecCC ,opencascade::handle<Bisector_BisecCC>  , Bisector_Curve >>(m.attr("Bisector_BisecCC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Real,const gp_Pnt2d &,const Standard_Real >()  , py::arg("Cu1"),  py::arg("Cu2"),  py::arg("Side1"),  py::arg("Side2"),  py::arg("Origin"),  py::arg("DistMax")=static_cast<const Standard_Real>(500) )
    // custom constructors
    // methods
        .def("Perform",
             (void (Bisector_BisecCC::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Bisector_BisecCC::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&Bisector_BisecCC::Perform),
             R"#(Computes the bisector between the curves <Cu1> and <Cu2>.)#"  , py::arg("Cu1"),  py::arg("Cu2"),  py::arg("Side1"),  py::arg("Side2"),  py::arg("Origin"),  py::arg("DistMax")=static_cast<const Standard_Real>(500))
        .def("IsExtendAtStart",
             (Standard_Boolean (Bisector_BisecCC::*)() const) static_cast<Standard_Boolean (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::IsExtendAtStart),
             R"#(None)#" )
        .def("IsExtendAtEnd",
             (Standard_Boolean (Bisector_BisecCC::*)() const) static_cast<Standard_Boolean (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::IsExtendAtEnd),
             R"#(None)#" )
        .def("Reverse",
             (void (Bisector_BisecCC::*)() ) static_cast<void (Bisector_BisecCC::*)() >(&Bisector_BisecCC::Reverse),
             R"#(None)#" )
        .def("ReversedParameter",
             (Standard_Real (Bisector_BisecCC::*)( const Standard_Real  ) const) static_cast<Standard_Real (Bisector_BisecCC::*)( const Standard_Real  ) const>(&Bisector_BisecCC::ReversedParameter),
             R"#(None)#"  , py::arg("U"))
        .def("IsCN",
             (Standard_Boolean (Bisector_BisecCC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Bisector_BisecCC::*)( const Standard_Integer  ) const>(&Bisector_BisecCC::IsCN),
             R"#(Returns the order of continuity of the curve. Raised if N < 0.)#"  , py::arg("N"))
        .def("ChangeGuide",
             (opencascade::handle<Bisector_BisecCC> (Bisector_BisecCC::*)() const) static_cast<opencascade::handle<Bisector_BisecCC> (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::ChangeGuide),
             R"#(The parameter on <me> is linked to the parameter on the first curve. This method creates the same bisector where the curves are inversed.)#" )
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Bisector_BisecCC::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::Copy),
             R"#(None)#" )
        .def("Transform",
             (void (Bisector_BisecCC::*)( const gp_Trsf2d &  ) ) static_cast<void (Bisector_BisecCC::*)( const gp_Trsf2d &  ) >(&Bisector_BisecCC::Transform),
             R"#(Transformation of a geometric object. This tansformation can be a translation, a rotation, a symmetry, a scaling or a complex transformation obtained by combination of the previous elementaries transformations.)#"  , py::arg("T"))
        .def("FirstParameter",
             (Standard_Real (Bisector_BisecCC::*)() const) static_cast<Standard_Real (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (Bisector_BisecCC::*)() const) static_cast<Standard_Real (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (Bisector_BisecCC::*)() const) static_cast<GeomAbs_Shape (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Bisector_BisecCC::*)() const) static_cast<Standard_Integer (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <C1>. And returns the number of intervals.)#" )
        .def("IntervalFirst",
             (Standard_Real (Bisector_BisecCC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Bisector_BisecCC::*)( const Standard_Integer  ) const>(&Bisector_BisecCC::IntervalFirst),
             R"#(Returns the first parameter of the current interval.)#"  , py::arg("Index"))
        .def("IntervalLast",
             (Standard_Real (Bisector_BisecCC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Bisector_BisecCC::*)( const Standard_Integer  ) const>(&Bisector_BisecCC::IntervalLast),
             R"#(Returns the last parameter of the current interval.)#"  , py::arg("Index"))
        .def("IntervalContinuity",
             (GeomAbs_Shape (Bisector_BisecCC::*)() const) static_cast<GeomAbs_Shape (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::IntervalContinuity),
             R"#(None)#" )
        .def("IsClosed",
             (Standard_Boolean (Bisector_BisecCC::*)() const) static_cast<Standard_Boolean (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Bisector_BisecCC::*)() const) static_cast<Standard_Boolean (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::IsPeriodic),
             R"#(None)#" )
        .def("ValueAndDist",
             (gp_Pnt2d (Bisector_BisecCC::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<gp_Pnt2d (Bisector_BisecCC::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&Bisector_BisecCC::ValueAndDist),
             R"#(Returns the point of parameter U. Computes the distance between the current point and the two curves I separate. Computes the parameters on each curve corresponding of the projection of the current point.)#"  , py::arg("U"),  py::arg("U1"),  py::arg("U2"),  py::arg("Distance"))
        .def("ValueByInt",
             (gp_Pnt2d (Bisector_BisecCC::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<gp_Pnt2d (Bisector_BisecCC::*)( const Standard_Real ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) const>(&Bisector_BisecCC::ValueByInt),
             R"#(Returns the point of parameter U. Computes the distance between the current point and the two curves I separate. Computes the parameters on each curve corresponding of the projection of the current point.)#"  , py::arg("U"),  py::arg("U1"),  py::arg("U2"),  py::arg("Distance"))
        .def("D0",
             (void (Bisector_BisecCC::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Bisector_BisecCC::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Bisector_BisecCC::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Bisector_BisecCC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Bisector_BisecCC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Bisector_BisecCC::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Bisector_BisecCC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Bisector_BisecCC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Bisector_BisecCC::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Bisector_BisecCC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Bisector_BisecCC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Bisector_BisecCC::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Bisector_BisecCC::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Bisector_BisecCC::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Bisector_BisecCC::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("IsEmpty",
             (Standard_Boolean (Bisector_BisecCC::*)() const) static_cast<Standard_Boolean (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::IsEmpty),
             R"#(None)#" )
        .def("LinkBisCurve",
             (Standard_Real (Bisector_BisecCC::*)( const Standard_Real  ) const) static_cast<Standard_Real (Bisector_BisecCC::*)( const Standard_Real  ) const>(&Bisector_BisecCC::LinkBisCurve),
             R"#(Returns the parameter on the curve1 of the projection of the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("LinkCurveBis",
             (Standard_Real (Bisector_BisecCC::*)( const Standard_Real  ) const) static_cast<Standard_Real (Bisector_BisecCC::*)( const Standard_Real  ) const>(&Bisector_BisecCC::LinkCurveBis),
             R"#(Returns the reciproque of LinkBisCurve.)#"  , py::arg("U"))
        .def("Parameter",
             (Standard_Real (Bisector_BisecCC::*)( const gp_Pnt2d &  ) const) static_cast<Standard_Real (Bisector_BisecCC::*)( const gp_Pnt2d &  ) const>(&Bisector_BisecCC::Parameter),
             R"#(None)#"  , py::arg("P"))
        .def("Curve",
             (opencascade::handle<Geom2d_Curve> (Bisector_BisecCC::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom2d_Curve> (Bisector_BisecCC::*)( const Standard_Integer  ) const>(&Bisector_BisecCC::Curve),
             R"#(None)#"  , py::arg("IndCurve"))
        .def("Polygon",
             (const Bisector_PolyBis & (Bisector_BisecCC::*)() const) static_cast<const Bisector_PolyBis & (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::Polygon),
             R"#(None)#" )
        .def("Dump",
             (void (Bisector_BisecCC::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (Bisector_BisecCC::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Bisector_BisecCC::Dump),
             R"#(None)#"  , py::arg("Deep")=static_cast<const Standard_Integer>(0),  py::arg("Offset")=static_cast<const Standard_Integer>(0))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bisector_BisecCC::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bisector_BisecCC::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Bisector_BisecCC::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_BisecPC ,opencascade::handle<Bisector_BisecPC>  , Bisector_Curve >>(m.attr("Bisector_BisecPC"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("Cu"),  py::arg("P"),  py::arg("Side"),  py::arg("DistMax")=static_cast<const Standard_Real>(500) )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const gp_Pnt2d &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Cu"),  py::arg("P"),  py::arg("Side"),  py::arg("UMin"),  py::arg("UMax") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Bisector_BisecPC::*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Bisector_BisecPC::*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Real  ) >(&Bisector_BisecPC::Perform),
             R"#(Construct the bisector between the point <P> and the curve <Cu>. <Side> = 1. if the bisector curve is on the Left of <Cu> else <Side> = -1. <DistMax> is used to trim the bisector.The distance between the points of the bisector and <Cu> is smaller than <DistMax>.)#"  , py::arg("Cu"),  py::arg("P"),  py::arg("Side"),  py::arg("DistMax")=static_cast<const Standard_Real>(500))
        .def("IsExtendAtStart",
             (Standard_Boolean (Bisector_BisecPC::*)() const) static_cast<Standard_Boolean (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::IsExtendAtStart),
             R"#(Returns True if the bisector is extended at start.)#" )
        .def("IsExtendAtEnd",
             (Standard_Boolean (Bisector_BisecPC::*)() const) static_cast<Standard_Boolean (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::IsExtendAtEnd),
             R"#(Returns True if the bisector is extended at end.)#" )
        .def("Reverse",
             (void (Bisector_BisecPC::*)() ) static_cast<void (Bisector_BisecPC::*)() >(&Bisector_BisecPC::Reverse),
             R"#(Changes the direction of parametrization of <me>. The orientation of the curve is modified. If the curve is bounded the StartPoint of the initial curve becomes the EndPoint of the reversed curve and the EndPoint of the initial curve becomes the StartPoint of the reversed curve.)#" )
        .def("ReversedParameter",
             (Standard_Real (Bisector_BisecPC::*)( const Standard_Real  ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const Standard_Real  ) const>(&Bisector_BisecPC::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Bisector_BisecPC::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::Copy),
             R"#(None)#" )
        .def("Transform",
             (void (Bisector_BisecPC::*)( const gp_Trsf2d &  ) ) static_cast<void (Bisector_BisecPC::*)( const gp_Trsf2d &  ) >(&Bisector_BisecPC::Transform),
             R"#(Transformation of a geometric object. This tansformation can be a translation, a rotation, a symmetry, a scaling or a complex transformation obtained by combination of the previous elementaries transformations.)#"  , py::arg("T"))
        .def("IsCN",
             (Standard_Boolean (Bisector_BisecPC::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Bisector_BisecPC::*)( const Standard_Integer  ) const>(&Bisector_BisecPC::IsCN),
             R"#(Returns the order of continuity of the curve. Raised if N < 0.)#"  , py::arg("N"))
        .def("FirstParameter",
             (Standard_Real (Bisector_BisecPC::*)() const) static_cast<Standard_Real (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::FirstParameter),
             R"#(Value of the first parameter.)#" )
        .def("LastParameter",
             (Standard_Real (Bisector_BisecPC::*)() const) static_cast<Standard_Real (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::LastParameter),
             R"#(Value of the last parameter.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Bisector_BisecPC::*)() const) static_cast<GeomAbs_Shape (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (Bisector_BisecPC::*)() const) static_cast<Standard_Integer (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <C1>. And returns the number of intervals.)#" )
        .def("IntervalFirst",
             (Standard_Real (Bisector_BisecPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const Standard_Integer  ) const>(&Bisector_BisecPC::IntervalFirst),
             R"#(Returns the first parameter of the current interval.)#"  , py::arg("Index"))
        .def("IntervalLast",
             (Standard_Real (Bisector_BisecPC::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const Standard_Integer  ) const>(&Bisector_BisecPC::IntervalLast),
             R"#(Returns the last parameter of the current interval.)#"  , py::arg("Index"))
        .def("IntervalContinuity",
             (GeomAbs_Shape (Bisector_BisecPC::*)() const) static_cast<GeomAbs_Shape (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::IntervalContinuity),
             R"#(None)#" )
        .def("IsClosed",
             (Standard_Boolean (Bisector_BisecPC::*)() const) static_cast<Standard_Boolean (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Bisector_BisecPC::*)() const) static_cast<Standard_Boolean (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::IsPeriodic),
             R"#(None)#" )
        .def("Distance",
             (Standard_Real (Bisector_BisecPC::*)( const Standard_Real  ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const Standard_Real  ) const>(&Bisector_BisecPC::Distance),
             R"#(Returns the distance between the point of parameter U on <me> and my point or my curve.)#"  , py::arg("U"))
        .def("D0",
             (void (Bisector_BisecPC::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Bisector_BisecPC::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Bisector_BisecPC::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Bisector_BisecPC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Bisector_BisecPC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Bisector_BisecPC::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Bisector_BisecPC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Bisector_BisecPC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Bisector_BisecPC::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Bisector_BisecPC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Bisector_BisecPC::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Bisector_BisecPC::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Bisector_BisecPC::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Bisector_BisecPC::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Bisector_BisecPC::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("Dump",
             (void (Bisector_BisecPC::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (Bisector_BisecPC::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Bisector_BisecPC::Dump),
             R"#(None)#"  , py::arg("Deep")=static_cast<const Standard_Integer>(0),  py::arg("Offset")=static_cast<const Standard_Integer>(0))
        .def("LinkBisCurve",
             (Standard_Real (Bisector_BisecPC::*)( const Standard_Real  ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const Standard_Real  ) const>(&Bisector_BisecPC::LinkBisCurve),
             R"#(Returns the parameter on the curve1 of the projection of the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("LinkCurveBis",
             (Standard_Real (Bisector_BisecPC::*)( const Standard_Real  ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const Standard_Real  ) const>(&Bisector_BisecPC::LinkCurveBis),
             R"#(Returns the reciproque of LinkBisCurve.)#"  , py::arg("U"))
        .def("Parameter",
             (Standard_Real (Bisector_BisecPC::*)( const gp_Pnt2d &  ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const gp_Pnt2d &  ) const>(&Bisector_BisecPC::Parameter),
             R"#(Returns the parameter on <me> corresponding to <P>.)#"  , py::arg("P"))
        .def("IsEmpty",
             (Standard_Boolean (Bisector_BisecPC::*)() const) static_cast<Standard_Boolean (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::IsEmpty),
             R"#(Returns <True> if the bisector is empty.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bisector_BisecPC::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bisector_BisecPC::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Bisector_BisecPC::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Bisector_Inter.hxx
// ./opencascade/Bisector_PolyBis.hxx
// ./opencascade/Bisector_FunctionH.hxx
// ./opencascade/Bisector_FunctionInter.hxx
// ./opencascade/Bisector_BisecAna.hxx
// ./opencascade/Bisector_Bisec.hxx
// ./opencascade/Bisector_BisecPC.hxx
// ./opencascade/Bisector.hxx
// ./opencascade/Bisector_BisecCC.hxx
// ./opencascade/Bisector_PointOnBis.hxx
// ./opencascade/Bisector_Curve.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
