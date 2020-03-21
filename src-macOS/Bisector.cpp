
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


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
#include <Geom2d_Curve.hxx>
#include <Bisector_Bisec.hxx>
#include <IntRes2d_Domain.hxx>
#include <Geom2d_Curve.hxx>
#include <Bisector_BisecCC.hxx>
#include <Geom2d_Line.hxx>
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

    static_cast<py::class_<Bisector , shared_ptr<Bisector> >>(m.attr("Bisector"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_Bisec , shared_ptr<Bisector_Bisec> >>(m.attr("Bisector_Bisec"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_Curve ,opencascade::handle<Bisector_Curve>,Py_Bisector_Curve , Geom2d_Curve>>(m.attr("Bisector_Curve"))
    // constructors
    // custom constructors
    // methods
        .def("Parameter",
             (Standard_Real (Bisector_Curve::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (Bisector_Curve::*)( const gp_Pnt2d & ) const>(&Bisector_Curve::Parameter),
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
             (Standard_Real (Bisector_Curve::*)( const Standard_Integer ) const) static_cast<Standard_Real (Bisector_Curve::*)( const Standard_Integer ) const>(&Bisector_Curve::IntervalFirst),
             R"#(Returns the first parameter of the current interval.)#"  , py::arg("Index"))
        .def("IntervalLast",
             (Standard_Real (Bisector_Curve::*)( const Standard_Integer ) const) static_cast<Standard_Real (Bisector_Curve::*)( const Standard_Integer ) const>(&Bisector_Curve::IntervalLast),
             R"#(Returns the last parameter of the current interval.)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bisector_Curve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bisector_Curve::*)() const>(&Bisector_Curve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bisector_Curve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_FunctionH , shared_ptr<Bisector_FunctionH> , math_FunctionWithDerivative>>(m.attr("Bisector_FunctionH"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real , Standard_Real & ) >(&Bisector_FunctionH::Value),
             R"#(Computes the values of the Functions for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real , Standard_Real & ) >(&Bisector_FunctionH::Derivative),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Bisector_FunctionH::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Bisector_FunctionH::Values),
             R"#(Returns the values of the functions and the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_FunctionInter , shared_ptr<Bisector_FunctionInter> , math_FunctionWithDerivative>>(m.attr("Bisector_FunctionInter"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real , Standard_Real & ) >(&Bisector_FunctionInter::Value),
             R"#(Computes the values of the Functions for the variable <X>.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real , Standard_Real & ) >(&Bisector_FunctionInter::Derivative),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Bisector_FunctionInter::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Bisector_FunctionInter::Values),
             R"#(Returns the values of the functions and the derivatives for the variable <X>.)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_Inter , shared_ptr<Bisector_Inter> , IntRes2d_Intersection>>(m.attr("Bisector_Inter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_PointOnBis , shared_ptr<Bisector_PointOnBis> >>(m.attr("Bisector_PointOnBis"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_PolyBis , shared_ptr<Bisector_PolyBis> >>(m.attr("Bisector_PolyBis"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_BisecAna ,opencascade::handle<Bisector_BisecAna> , Bisector_Curve>>(m.attr("Bisector_BisecAna"))
    // constructors
    // custom constructors
    // methods
        .def("IsExtendAtStart",
             (Standard_Boolean (Bisector_BisecAna::*)() const) static_cast<Standard_Boolean (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::IsExtendAtStart),
             R"#(None)#" )
        .def("IsExtendAtEnd",
             (Standard_Boolean (Bisector_BisecAna::*)() const) static_cast<Standard_Boolean (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::IsExtendAtEnd),
             R"#(None)#" )
        .def("Reverse",
             (void (Bisector_BisecAna::*)() ) static_cast<void (Bisector_BisecAna::*)() >(&Bisector_BisecAna::Reverse),
             R"#(None)#" )
        .def("ReversedParameter",
             (Standard_Real (Bisector_BisecAna::*)( const Standard_Real ) const) static_cast<Standard_Real (Bisector_BisecAna::*)( const Standard_Real ) const>(&Bisector_BisecAna::ReversedParameter),
             R"#(None)#"  , py::arg("U"))
        .def("IsCN",
             (Standard_Boolean (Bisector_BisecAna::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Bisector_BisecAna::*)( const Standard_Integer ) const>(&Bisector_BisecAna::IsCN),
             R"#(Returns the order of continuity of the curve. Raised if N < 0.)#"  , py::arg("N"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Bisector_BisecAna::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::Copy),
             R"#(None)#" )
        .def("Transform",
             (void (Bisector_BisecAna::*)( const gp_Trsf2d & ) ) static_cast<void (Bisector_BisecAna::*)( const gp_Trsf2d & ) >(&Bisector_BisecAna::Transform),
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
             (void (Bisector_BisecAna::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Bisector_BisecAna::*)( const Standard_Real , gp_Pnt2d & ) const>(&Bisector_BisecAna::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Bisector_BisecAna::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Bisector_BisecAna::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Bisector_BisecAna::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Bisector_BisecAna::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Bisector_BisecAna::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Bisector_BisecAna::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Bisector_BisecAna::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Bisector_BisecAna::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Bisector_BisecAna::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Bisector_BisecAna::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Bisector_BisecAna::*)( const Standard_Real , const Standard_Integer ) const>(&Bisector_BisecAna::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("Parameter",
             (Standard_Real (Bisector_BisecAna::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (Bisector_BisecAna::*)( const gp_Pnt2d & ) const>(&Bisector_BisecAna::Parameter),
             R"#(None)#"  , py::arg("P"))
        .def("NbIntervals",
             (Standard_Integer (Bisector_BisecAna::*)() const) static_cast<Standard_Integer (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::NbIntervals),
             R"#(If necessary, breaks the curve in intervals of continuity <C1>. And returns the number of intervals.)#" )
        .def("IntervalFirst",
             (Standard_Real (Bisector_BisecAna::*)( const Standard_Integer ) const) static_cast<Standard_Real (Bisector_BisecAna::*)( const Standard_Integer ) const>(&Bisector_BisecAna::IntervalFirst),
             R"#(Returns the first parameter of the current interval.)#"  , py::arg("Index"))
        .def("IntervalLast",
             (Standard_Real (Bisector_BisecAna::*)( const Standard_Integer ) const) static_cast<Standard_Real (Bisector_BisecAna::*)( const Standard_Integer ) const>(&Bisector_BisecAna::IntervalLast),
             R"#(Returns the last parameter of the current interval.)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bisector_BisecAna::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bisector_BisecAna::*)() const>(&Bisector_BisecAna::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bisector_BisecAna::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_BisecCC ,opencascade::handle<Bisector_BisecCC> , Bisector_Curve>>(m.attr("Bisector_BisecCC"))
    // constructors
    // custom constructors
    // methods
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
             (Standard_Real (Bisector_BisecCC::*)( const Standard_Real ) const) static_cast<Standard_Real (Bisector_BisecCC::*)( const Standard_Real ) const>(&Bisector_BisecCC::ReversedParameter),
             R"#(None)#"  , py::arg("U"))
        .def("IsCN",
             (Standard_Boolean (Bisector_BisecCC::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Bisector_BisecCC::*)( const Standard_Integer ) const>(&Bisector_BisecCC::IsCN),
             R"#(Returns the order of continuity of the curve. Raised if N < 0.)#"  , py::arg("N"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Bisector_BisecCC::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::Copy),
             R"#(None)#" )
        .def("Transform",
             (void (Bisector_BisecCC::*)( const gp_Trsf2d & ) ) static_cast<void (Bisector_BisecCC::*)( const gp_Trsf2d & ) >(&Bisector_BisecCC::Transform),
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
             (Standard_Real (Bisector_BisecCC::*)( const Standard_Integer ) const) static_cast<Standard_Real (Bisector_BisecCC::*)( const Standard_Integer ) const>(&Bisector_BisecCC::IntervalFirst),
             R"#(Returns the first parameter of the current interval.)#"  , py::arg("Index"))
        .def("IntervalLast",
             (Standard_Real (Bisector_BisecCC::*)( const Standard_Integer ) const) static_cast<Standard_Real (Bisector_BisecCC::*)( const Standard_Integer ) const>(&Bisector_BisecCC::IntervalLast),
             R"#(Returns the last parameter of the current interval.)#"  , py::arg("Index"))
        .def("IsClosed",
             (Standard_Boolean (Bisector_BisecCC::*)() const) static_cast<Standard_Boolean (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Bisector_BisecCC::*)() const) static_cast<Standard_Boolean (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::IsPeriodic),
             R"#(None)#" )
        .def("D0",
             (void (Bisector_BisecCC::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Bisector_BisecCC::*)( const Standard_Real , gp_Pnt2d & ) const>(&Bisector_BisecCC::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Bisector_BisecCC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Bisector_BisecCC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Bisector_BisecCC::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Bisector_BisecCC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Bisector_BisecCC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Bisector_BisecCC::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Bisector_BisecCC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Bisector_BisecCC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Bisector_BisecCC::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Bisector_BisecCC::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Bisector_BisecCC::*)( const Standard_Real , const Standard_Integer ) const>(&Bisector_BisecCC::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("Parameter",
             (Standard_Real (Bisector_BisecCC::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (Bisector_BisecCC::*)( const gp_Pnt2d & ) const>(&Bisector_BisecCC::Parameter),
             R"#(None)#"  , py::arg("P"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bisector_BisecCC::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bisector_BisecCC::*)() const>(&Bisector_BisecCC::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bisector_BisecCC::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Bisector_BisecPC ,opencascade::handle<Bisector_BisecPC> , Bisector_Curve>>(m.attr("Bisector_BisecPC"))
    // constructors
    // custom constructors
    // methods
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
             (Standard_Real (Bisector_BisecPC::*)( const Standard_Real ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const Standard_Real ) const>(&Bisector_BisecPC::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Bisector_BisecPC::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::Copy),
             R"#(None)#" )
        .def("Transform",
             (void (Bisector_BisecPC::*)( const gp_Trsf2d & ) ) static_cast<void (Bisector_BisecPC::*)( const gp_Trsf2d & ) >(&Bisector_BisecPC::Transform),
             R"#(Transformation of a geometric object. This tansformation can be a translation, a rotation, a symmetry, a scaling or a complex transformation obtained by combination of the previous elementaries transformations.)#"  , py::arg("T"))
        .def("IsCN",
             (Standard_Boolean (Bisector_BisecPC::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Bisector_BisecPC::*)( const Standard_Integer ) const>(&Bisector_BisecPC::IsCN),
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
             (Standard_Real (Bisector_BisecPC::*)( const Standard_Integer ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const Standard_Integer ) const>(&Bisector_BisecPC::IntervalFirst),
             R"#(Returns the first parameter of the current interval.)#"  , py::arg("Index"))
        .def("IntervalLast",
             (Standard_Real (Bisector_BisecPC::*)( const Standard_Integer ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const Standard_Integer ) const>(&Bisector_BisecPC::IntervalLast),
             R"#(Returns the last parameter of the current interval.)#"  , py::arg("Index"))
        .def("IsClosed",
             (Standard_Boolean (Bisector_BisecPC::*)() const) static_cast<Standard_Boolean (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Bisector_BisecPC::*)() const) static_cast<Standard_Boolean (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::IsPeriodic),
             R"#(None)#" )
        .def("D0",
             (void (Bisector_BisecPC::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Bisector_BisecPC::*)( const Standard_Real , gp_Pnt2d & ) const>(&Bisector_BisecPC::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Bisector_BisecPC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Bisector_BisecPC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Bisector_BisecPC::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (Bisector_BisecPC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Bisector_BisecPC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Bisector_BisecPC::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Bisector_BisecPC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Bisector_BisecPC::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Bisector_BisecPC::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Bisector_BisecPC::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Bisector_BisecPC::*)( const Standard_Real , const Standard_Integer ) const>(&Bisector_BisecPC::DN),
             R"#(None)#"  , py::arg("U"),  py::arg("N"))
        .def("Parameter",
             (Standard_Real (Bisector_BisecPC::*)( const gp_Pnt2d & ) const) static_cast<Standard_Real (Bisector_BisecPC::*)( const gp_Pnt2d & ) const>(&Bisector_BisecPC::Parameter),
             R"#(Returns the parameter on <me> corresponding to <P>.)#"  , py::arg("P"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Bisector_BisecPC::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Bisector_BisecPC::*)() const>(&Bisector_BisecPC::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Bisector_BisecPC::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Bisector_Bisec.hxx
// ./opencascade/Bisector.hxx
// ./opencascade/Bisector_FunctionH.hxx
// ./opencascade/Bisector_BisecPC.hxx
// ./opencascade/Bisector_Inter.hxx
// ./opencascade/Bisector_PolyBis.hxx
// ./opencascade/Bisector_FunctionInter.hxx
// ./opencascade/Bisector_BisecAna.hxx
// ./opencascade/Bisector_PointOnBis.hxx
// ./opencascade/Bisector_Curve.hxx
// ./opencascade/Bisector_BisecCC.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
