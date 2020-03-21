
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Elips2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Lin2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom2d_UndefinedDerivative.hxx>
#include <Geom2d_UndefinedValue.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Trsf2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom2d_UndefinedDerivative.hxx>
#include <Geom2d_UndefinedValue.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Trsf2d.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom2d_UndefinedDerivative.hxx>
#include <Geom2d_UndefinedValue.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Circ2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom2d_UndefinedDerivative.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Hypr2d.hxx>

// module includes
#include <Geom2d_AxisPlacement.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <Geom2d_Circle.hxx>
#include <Geom2d_Conic.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Direction.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Geom2d_Geometry.hxx>
#include <Geom2d_Hyperbola.hxx>
#include <Geom2d_Line.hxx>
#include <Geom2d_OffsetCurve.hxx>
#include <Geom2d_Parabola.hxx>
#include <Geom2d_Point.hxx>
#include <Geom2d_Transformation.hxx>
#include <Geom2d_TrimmedCurve.hxx>
#include <Geom2d_UndefinedDerivative.hxx>
#include <Geom2d_UndefinedValue.hxx>
#include <Geom2d_Vector.hxx>
#include <Geom2d_VectorWithMagnitude.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2d"));


//Python trampoline classes
    class Py_Geom2d_Geometry : public Geom2d_Geometry{
    public:
        using Geom2d_Geometry::Geom2d_Geometry;


        // public pure virtual
        void Transform(const gp_Trsf2d & T) override { PYBIND11_OVERLOAD_PURE(void,Geom2d_Geometry,Transform,T) };
        opencascade::handle<Geom2d_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom2d_Geometry>,Geom2d_Geometry,Copy,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Geom2d_Curve : public Geom2d_Curve{
    public:
        using Geom2d_Curve::Geom2d_Curve;


        // public pure virtual
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
    class Py_Geom2d_Point : public Geom2d_Point{
    public:
        using Geom2d_Point::Geom2d_Point;


        // public pure virtual
        gp_Pnt2d Pnt2d() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt2d,Geom2d_Point,Pnt2d,) };
        Standard_Real X() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Point,X,) };
        Standard_Real Y() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Point,Y,) };
        void Coord(Standard_Real & X,Standard_Real & Y) const  override { PYBIND11_OVERLOAD_PURE(void,Geom2d_Point,Coord,X,Y) };

        void Transform(const gp_Trsf2d & T) override { PYBIND11_OVERLOAD_PURE(void,Geom2d_Geometry,Transform,T) };
        opencascade::handle<Geom2d_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom2d_Geometry>,Geom2d_Geometry,Copy,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_Geom2d_Vector : public Geom2d_Vector{
    public:
        using Geom2d_Vector::Geom2d_Vector;


        // public pure virtual
        Standard_Real Magnitude() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Vector,Magnitude,) };
        Standard_Real SquareMagnitude() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Vector,SquareMagnitude,) };
        Standard_Real Crossed(const opencascade::handle<Geom2d_Vector> & Other) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Vector,Crossed,Other) };

        void Transform(const gp_Trsf2d & T) override { PYBIND11_OVERLOAD_PURE(void,Geom2d_Geometry,Transform,T) };
        opencascade::handle<Geom2d_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom2d_Geometry>,Geom2d_Geometry,Copy,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_Geom2d_BoundedCurve : public Geom2d_BoundedCurve{
    public:
        using Geom2d_BoundedCurve::Geom2d_BoundedCurve;


        // public pure virtual
        gp_Pnt2d EndPoint() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt2d,Geom2d_BoundedCurve,EndPoint,) };
        gp_Pnt2d StartPoint() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt2d,Geom2d_BoundedCurve,StartPoint,) };

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
    class Py_Geom2d_Conic : public Geom2d_Conic{
    public:
        using Geom2d_Conic::Geom2d_Conic;


        // public pure virtual
        Standard_Real Eccentricity() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Conic,Eccentricity,) };
        Standard_Real ReversedParameter(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Conic,ReversedParameter,U) };

        Standard_Real FirstParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Curve,FirstParameter,) };
        Standard_Real LastParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom2d_Curve,LastParameter,) };
        Standard_Boolean IsClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom2d_Curve,IsClosed,) };
        Standard_Boolean IsPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom2d_Curve,IsPeriodic,) };
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


    static_cast<py::class_<Geom2d_Geometry ,opencascade::handle<Geom2d_Geometry>,Py_Geom2d_Geometry , Standard_Transient>>(m.attr("Geom2d_Geometry"))
    // constructors
    // custom constructors
    // methods
        .def("Transform",
             (void (Geom2d_Geometry::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_Geometry::*)( const gp_Trsf2d & ) >(&Geom2d_Geometry::Transform),
             R"#(Transformation of a geometric object. This tansformation can be a translation, a rotation, a symmetry, a scaling or a complex transformation obtained by combination of the previous elementaries transformations. (see class Transformation of the package Geom2d). The following transformations have the same properties as the previous ones but they don't modified the object itself. A copy of the object is returned.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)() const>(&Geom2d_Geometry::Copy),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Geometry::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Geometry::*)() const>(&Geom2d_Geometry::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Geometry::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Transformation ,opencascade::handle<Geom2d_Transformation> , Standard_Transient>>(m.attr("Geom2d_Transformation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Transformation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Transformation::*)() const>(&Geom2d_Transformation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Transformation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
        .def("__mul__",
             (opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> & ) const) static_cast<opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> & ) const>(&Geom2d_Transformation::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> & ) const) static_cast<opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> & ) const>(&Geom2d_Transformation::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__imul__",
             (void (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> & ) ) static_cast<void (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> & ) >(&Geom2d_Transformation::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_AxisPlacement ,opencascade::handle<Geom2d_AxisPlacement> , Geom2d_Geometry>>(m.attr("Geom2d_AxisPlacement"))
    // constructors
    // custom constructors
    // methods
        .def("Transform",
             (void (Geom2d_AxisPlacement::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_AxisPlacement::*)( const gp_Trsf2d & ) >(&Geom2d_AxisPlacement::Transform),
             R"#(Applies the transformation T to this axis.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_AxisPlacement::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_AxisPlacement::*)() const>(&Geom2d_AxisPlacement::Copy),
             R"#(Creates a new object which is a copy of this axis.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_AxisPlacement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_AxisPlacement::*)() const>(&Geom2d_AxisPlacement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_AxisPlacement::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Curve ,opencascade::handle<Geom2d_Curve>,Py_Geom2d_Curve , Geom2d_Geometry>>(m.attr("Geom2d_Curve"))
    // constructors
    // custom constructors
    // methods
        .def("Reverse",
             (void (Geom2d_Curve::*)() ) static_cast<void (Geom2d_Curve::*)() >(&Geom2d_Curve::Reverse),
             R"#(Changes the direction of parametrization of <me>. The "FirstParameter" and the "LastParameter" are not changed but the orientation of the curve is modified. If the curve is bounded the StartPoint of the initial curve becomes the EndPoint of the reversed curve and the EndPoint of the initial curve becomes the StartPoint of the reversed curve.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Curve::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_Curve::*)( const Standard_Real ) const>(&Geom2d_Curve::ReversedParameter),
             R"#(Computes the parameter on the reversed curve for the point of parameter U on this curve. Note: The point of parameter U on this curve is identical to the point of parameter ReversedParameter(U) on the reversed curve.)#"  , py::arg("U"))
        .def("TransformedParameter",
             (Standard_Real (Geom2d_Curve::*)( const Standard_Real , const gp_Trsf2d & ) const) static_cast<Standard_Real (Geom2d_Curve::*)( const Standard_Real , const gp_Trsf2d & ) const>(&Geom2d_Curve::TransformedParameter),
             R"#(Computes the parameter on the curve transformed by T for the point of parameter U on this curve. Note: this function generally returns U but it can be redefined (for example, on a line).)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom2d_Curve::*)( const gp_Trsf2d & ) const) static_cast<Standard_Real (Geom2d_Curve::*)( const gp_Trsf2d & ) const>(&Geom2d_Curve::ParametricTransformation),
             R"#(Returns the coefficient required to compute the parametric transformation of this curve when transformation T is applied. This coefficient is the ratio between the parameter of a point on this curve and the parameter of the transformed point on the new curve transformed by T. Note: this function generally returns 1. but it can be redefined (for example, on a line).)#"  , py::arg("T"))
        .def("FirstParameter",
             (Standard_Real (Geom2d_Curve::*)() const) static_cast<Standard_Real (Geom2d_Curve::*)() const>(&Geom2d_Curve::FirstParameter),
             R"#(Returns the value of the first parameter. Warnings : It can be RealFirst or RealLast from package Standard if the curve is infinite)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_Curve::*)() const) static_cast<Standard_Real (Geom2d_Curve::*)() const>(&Geom2d_Curve::LastParameter),
             R"#(Value of the last parameter. Warnings : It can be RealFirst or RealLast from package Standard if the curve is infinite)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom2d_Curve::*)() const) static_cast<Standard_Boolean (Geom2d_Curve::*)() const>(&Geom2d_Curve::IsClosed),
             R"#(Returns true if the curve is closed. Examples : Some curves such as circle are always closed, others such as line are never closed (by definition). Some Curves such as OffsetCurve can be closed or not. These curves are considered as closed if the distance between the first point and the last point of the curve is lower or equal to the Resolution from package gp wich is a fixed criterion independant of the application.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_Curve::*)() const) static_cast<Standard_Boolean (Geom2d_Curve::*)() const>(&Geom2d_Curve::IsPeriodic),
             R"#(Returns true if the parameter of the curve is periodic. It is possible only if the curve is closed and if the following relation is satisfied : for each parametric value U the distance between the point P(u) and the point P (u + T) is lower or equal to Resolution from package gp, T is the period and must be a constant. There are three possibilities : . the curve is never periodic by definition (SegmentLine) . the curve is always periodic by definition (Circle) . the curve can be defined as periodic (BSpline). In this case a function SetPeriodic allows you to give the shape of the curve. The general rule for this case is : if a curve can be periodic or not the default periodicity set is non periodic and you have to turn (explicitly) the curve into a periodic curve if you want the curve to be periodic.)#" )
        .def("Period",
             (Standard_Real (Geom2d_Curve::*)() const) static_cast<Standard_Real (Geom2d_Curve::*)() const>(&Geom2d_Curve::Period),
             R"#(Returns thne period of this curve. raises if the curve is not periodic)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_Curve::*)() const) static_cast<GeomAbs_Shape (Geom2d_Curve::*)() const>(&Geom2d_Curve::Continuity),
             R"#(It is the global continuity of the curve : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, G1 : tangency continuity all along the Curve, G2 : curvature continuity all along the Curve, CN : the order of continuity is infinite.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom2d_Curve::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2d_Curve::*)( const Standard_Integer ) const>(&Geom2d_Curve::IsCN),
             R"#(Returns true if the degree of continuity of this curve is at least N. Exceptions Standard_RangeError if N is less than 0.)#"  , py::arg("N"))
        .def("D0",
             (void (Geom2d_Curve::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Geom2d_Curve::*)( const Standard_Real , gp_Pnt2d & ) const>(&Geom2d_Curve::D0),
             R"#(Returns in P the point of parameter U. If the curve is periodic then the returned point is P(U) with U = Ustart + (U - Uend) where Ustart and Uend are the parametric bounds of the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Curve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Curve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Geom2d_Curve::D1),
             R"#(Returns the point P of parameter U and the first derivative V1. Raised if the continuity of the curve is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Curve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Curve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Curve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the curve is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Curve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Curve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Curve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the curve is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Curve::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Geom2d_Curve::*)( const Standard_Real , const Standard_Integer ) const>(&Geom2d_Curve::DN),
             R"#(For the point of parameter U of this curve, computes the vector corresponding to the Nth derivative. Exceptions StdFail_UndefinedDerivative if: - the continuity of the curve is not "CN", or - the derivative vector cannot be computed easily; this is the case with specific types of curve (for example, a rational BSpline curve where N is greater than 3). Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Curve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Curve::*)() const>(&Geom2d_Curve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Curve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Point ,opencascade::handle<Geom2d_Point>,Py_Geom2d_Point , Geom2d_Geometry>>(m.attr("Geom2d_Point"))
    // constructors
    // custom constructors
    // methods
        .def("Pnt2d",
             (gp_Pnt2d (Geom2d_Point::*)() const) static_cast<gp_Pnt2d (Geom2d_Point::*)() const>(&Geom2d_Point::Pnt2d),
             R"#(returns a non persistent copy of <me>)#" )
        .def("X",
             (Standard_Real (Geom2d_Point::*)() const) static_cast<Standard_Real (Geom2d_Point::*)() const>(&Geom2d_Point::X),
             R"#(returns the X coordinate of <me>.)#" )
        .def("Y",
             (Standard_Real (Geom2d_Point::*)() const) static_cast<Standard_Real (Geom2d_Point::*)() const>(&Geom2d_Point::Y),
             R"#(returns the Y coordinate of <me>.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Point::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Point::*)() const>(&Geom2d_Point::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( Geom2d_Point &self   ){ Standard_Real  X; Standard_Real  Y; self.Coord(X,Y); return std::make_tuple(X,Y); },
             R"#(returns the Coordinates of <me>.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Point::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Vector ,opencascade::handle<Geom2d_Vector>,Py_Geom2d_Vector , Geom2d_Geometry>>(m.attr("Geom2d_Vector"))
    // constructors
    // custom constructors
    // methods
        .def("Magnitude",
             (Standard_Real (Geom2d_Vector::*)() const) static_cast<Standard_Real (Geom2d_Vector::*)() const>(&Geom2d_Vector::Magnitude),
             R"#(Returns the Magnitude of <me>.)#" )
        .def("SquareMagnitude",
             (Standard_Real (Geom2d_Vector::*)() const) static_cast<Standard_Real (Geom2d_Vector::*)() const>(&Geom2d_Vector::SquareMagnitude),
             R"#(Returns the square magnitude of <me>.)#" )
        .def("Crossed",
             (Standard_Real (Geom2d_Vector::*)( const opencascade::handle<Geom2d_Vector> & ) const) static_cast<Standard_Real (Geom2d_Vector::*)( const opencascade::handle<Geom2d_Vector> & ) const>(&Geom2d_Vector::Crossed),
             R"#(Cross product of <me> with the vector <Other>.)#"  , py::arg("Other"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Vector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Vector::*)() const>(&Geom2d_Vector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Vector::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_BoundedCurve ,opencascade::handle<Geom2d_BoundedCurve>,Py_Geom2d_BoundedCurve , Geom2d_Curve>>(m.attr("Geom2d_BoundedCurve"))
    // constructors
    // custom constructors
    // methods
        .def("EndPoint",
             (gp_Pnt2d (Geom2d_BoundedCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_BoundedCurve::*)() const>(&Geom2d_BoundedCurve::EndPoint),
             R"#(Returns the end point of the curve. The end point is the value of the curve for the "LastParameter" of the curve.)#" )
        .def("StartPoint",
             (gp_Pnt2d (Geom2d_BoundedCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_BoundedCurve::*)() const>(&Geom2d_BoundedCurve::StartPoint),
             R"#(Returns the start point of the curve. The start point is the value of the curve for the "FirstParameter" of the curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_BoundedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_BoundedCurve::*)() const>(&Geom2d_BoundedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_BoundedCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_CartesianPoint ,opencascade::handle<Geom2d_CartesianPoint> , Geom2d_Point>>(m.attr("Geom2d_CartesianPoint"))
    // constructors
    // custom constructors
    // methods
        .def("Pnt2d",
             (gp_Pnt2d (Geom2d_CartesianPoint::*)() const) static_cast<gp_Pnt2d (Geom2d_CartesianPoint::*)() const>(&Geom2d_CartesianPoint::Pnt2d),
             R"#(Returns a non persistent cartesian point with the same coordinates as <me>. -C++: return const&)#" )
        .def("X",
             (Standard_Real (Geom2d_CartesianPoint::*)() const) static_cast<Standard_Real (Geom2d_CartesianPoint::*)() const>(&Geom2d_CartesianPoint::X),
             R"#(Returns the X coordinate of <me>.)#" )
        .def("Y",
             (Standard_Real (Geom2d_CartesianPoint::*)() const) static_cast<Standard_Real (Geom2d_CartesianPoint::*)() const>(&Geom2d_CartesianPoint::Y),
             R"#(Returns the Y coordinate of <me>.)#" )
        .def("Transform",
             (void (Geom2d_CartesianPoint::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_CartesianPoint::*)( const gp_Trsf2d & ) >(&Geom2d_CartesianPoint::Transform),
             R"#(None)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_CartesianPoint::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_CartesianPoint::*)() const>(&Geom2d_CartesianPoint::Copy),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_CartesianPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_CartesianPoint::*)() const>(&Geom2d_CartesianPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( Geom2d_CartesianPoint &self   ){ Standard_Real  X; Standard_Real  Y; self.Coord(X,Y); return std::make_tuple(X,Y); },
             R"#(Returns the coordinates of <me>.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_CartesianPoint::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Conic ,opencascade::handle<Geom2d_Conic>,Py_Geom2d_Conic , Geom2d_Curve>>(m.attr("Geom2d_Conic"))
    // constructors
    // custom constructors
    // methods
        .def("Eccentricity",
             (Standard_Real (Geom2d_Conic::*)() const) static_cast<Standard_Real (Geom2d_Conic::*)() const>(&Geom2d_Conic::Eccentricity),
             R"#(returns the eccentricity value of the conic e. e = 0 for a circle 0 < e < 1 for an ellipse (e = 0 if MajorRadius = MinorRadius) e > 1 for a hyperbola e = 1 for a parabola)#" )
        .def("Reverse",
             (void (Geom2d_Conic::*)() ) static_cast<void (Geom2d_Conic::*)() >(&Geom2d_Conic::Reverse),
             R"#(Reverses the direction of parameterization of <me>. The local coordinate system of the conic is modified.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Conic::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_Conic::*)( const Standard_Real ) const>(&Geom2d_Conic::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_Conic::*)() const) static_cast<GeomAbs_Shape (Geom2d_Conic::*)() const>(&Geom2d_Conic::Continuity),
             R"#(Returns GeomAbs_CN which is the global continuity of any conic.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom2d_Conic::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2d_Conic::*)( const Standard_Integer ) const>(&Geom2d_Conic::IsCN),
             R"#(Returns True, the order of continuity of a conic is infinite.)#"  , py::arg("N"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Conic::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Conic::*)() const>(&Geom2d_Conic::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Conic::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Direction ,opencascade::handle<Geom2d_Direction> , Geom2d_Vector>>(m.attr("Geom2d_Direction"))
    // constructors
    // custom constructors
    // methods
        .def("Magnitude",
             (Standard_Real (Geom2d_Direction::*)() const) static_cast<Standard_Real (Geom2d_Direction::*)() const>(&Geom2d_Direction::Magnitude),
             R"#(returns 1.0)#" )
        .def("SquareMagnitude",
             (Standard_Real (Geom2d_Direction::*)() const) static_cast<Standard_Real (Geom2d_Direction::*)() const>(&Geom2d_Direction::SquareMagnitude),
             R"#(returns 1.0)#" )
        .def("Crossed",
             (Standard_Real (Geom2d_Direction::*)( const opencascade::handle<Geom2d_Vector> & ) const) static_cast<Standard_Real (Geom2d_Direction::*)( const opencascade::handle<Geom2d_Vector> & ) const>(&Geom2d_Direction::Crossed),
             R"#(Computes the cross product between <me> and <Other>.)#"  , py::arg("Other"))
        .def("Transform",
             (void (Geom2d_Direction::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_Direction::*)( const gp_Trsf2d & ) >(&Geom2d_Direction::Transform),
             R"#(Applies the transformation T to this unit vector, then normalizes it.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Direction::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Direction::*)() const>(&Geom2d_Direction::Copy),
             R"#(Creates a new object which is a copy of this unit vector.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Direction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Direction::*)() const>(&Geom2d_Direction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Direction::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
        .def("__pow__",
             (Standard_Real (Geom2d_Direction::*)( const opencascade::handle<Geom2d_Vector> & ) const) static_cast<Standard_Real (Geom2d_Direction::*)( const opencascade::handle<Geom2d_Vector> & ) const>(&Geom2d_Direction::operator^),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Line ,opencascade::handle<Geom2d_Line> , Geom2d_Curve>>(m.attr("Geom2d_Line"))
    // constructors
    // custom constructors
    // methods
        .def("Reverse",
             (void (Geom2d_Line::*)() ) static_cast<void (Geom2d_Line::*)() >(&Geom2d_Line::Reverse),
             R"#(Changes the orientation of this line. As a result, the unit vector of the positioning axis of this line is reversed.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Line::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_Line::*)( const Standard_Real ) const>(&Geom2d_Line::ReversedParameter),
             R"#(Computes the parameter on the reversed line for the point of parameter U on this line. For a line, the returned value is -U.)#"  , py::arg("U"))
        .def("FirstParameter",
             (Standard_Real (Geom2d_Line::*)() const) static_cast<Standard_Real (Geom2d_Line::*)() const>(&Geom2d_Line::FirstParameter),
             R"#(Returns RealFirst from Standard.)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_Line::*)() const) static_cast<Standard_Real (Geom2d_Line::*)() const>(&Geom2d_Line::LastParameter),
             R"#(Returns RealLast from Standard)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom2d_Line::*)() const) static_cast<Standard_Boolean (Geom2d_Line::*)() const>(&Geom2d_Line::IsClosed),
             R"#(Returns False)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_Line::*)() const) static_cast<Standard_Boolean (Geom2d_Line::*)() const>(&Geom2d_Line::IsPeriodic),
             R"#(Returns False)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_Line::*)() const) static_cast<GeomAbs_Shape (Geom2d_Line::*)() const>(&Geom2d_Line::Continuity),
             R"#(Returns GeomAbs_CN, which is the global continuity of any line.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom2d_Line::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2d_Line::*)( const Standard_Integer ) const>(&Geom2d_Line::IsCN),
             R"#(Returns True.)#"  , py::arg("N"))
        .def("D0",
             (void (Geom2d_Line::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Geom2d_Line::*)( const Standard_Real , gp_Pnt2d & ) const>(&Geom2d_Line::D0),
             R"#(Returns in P the point of parameter U. P (U) = O + U * Dir where O is the "Location" point of the line and Dir the direction of the line.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Line::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Line::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Geom2d_Line::D1),
             R"#(Returns the point P of parameter u and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Line::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Line::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Line::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. V2 is a vector with null magnitude for a line.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Line::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Line::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Line::D3),
             R"#(V2 and V3 are vectors with null magnitude for a line.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Line::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Geom2d_Line::*)( const Standard_Real , const Standard_Integer ) const>(&Geom2d_Line::DN),
             R"#(For the point of parameter U of this line, computes the vector corresponding to the Nth derivative. Note: if N is greater than or equal to 2, the result is a vector with null magnitude. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_Line::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_Line::*)( const gp_Trsf2d & ) >(&Geom2d_Line::Transform),
             R"#(Applies the transformation T to this line.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom2d_Line::*)( const Standard_Real , const gp_Trsf2d & ) const) static_cast<Standard_Real (Geom2d_Line::*)( const Standard_Real , const gp_Trsf2d & ) const>(&Geom2d_Line::TransformedParameter),
             R"#(Computes the parameter on the line transformed by T for the point of parameter U on this line. For a line, the returned value is equal to U multiplied by the scale factor of transformation T.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom2d_Line::*)( const gp_Trsf2d & ) const) static_cast<Standard_Real (Geom2d_Line::*)( const gp_Trsf2d & ) const>(&Geom2d_Line::ParametricTransformation),
             R"#(Returns the coefficient required to compute the parametric transformation of this line when transformation T is applied. This coefficient is the ratio between the parameter of a point on this line and the parameter of the transformed point on the new line transformed by T. For a line, the returned value is the scale factor of the transformation T.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Line::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Line::*)() const>(&Geom2d_Line::Copy),
             R"#(Creates a new object, which is a copy of this line.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Line::*)() const>(&Geom2d_Line::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Line::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_OffsetCurve ,opencascade::handle<Geom2d_OffsetCurve> , Geom2d_Curve>>(m.attr("Geom2d_OffsetCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Reverse",
             (void (Geom2d_OffsetCurve::*)() ) static_cast<void (Geom2d_OffsetCurve::*)() >(&Geom2d_OffsetCurve::Reverse),
             R"#(Changes the direction of parametrization of <me>. As a result: - the basis curve is reversed, - the start point of the initial curve becomes the end point of the reversed curve, - the end point of the initial curve becomes the start point of the reversed curve, and - the first and last parameters are recomputed.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_OffsetCurve::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)( const Standard_Real ) const>(&Geom2d_OffsetCurve::ReversedParameter),
             R"#(Computes the parameter on the reversed curve for the point of parameter U on this offset curve.)#"  , py::arg("U"))
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_OffsetCurve::*)() const) static_cast<GeomAbs_Shape (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::Continuity),
             R"#(Continuity of the Offset curve : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, G1 : tangency continuity all along the Curve, G2 : curvature continuity all along the Curve, CN : the order of continuity is infinite. Warnings : Returns the continuity of the basis curve - 1. The offset curve must have a unique normal direction defined at any point. Value and derivatives)#" )
        .def("D0",
             (void (Geom2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Geom2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & ) const>(&Geom2d_OffsetCurve::D0),
             R"#(Warning! this should not be called if the basis curve is not at least C1. Nevertheless if used on portion where the curve is C1, it is OK)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Geom2d_OffsetCurve::D1),
             R"#(Warning! this should not be called if the continuity of the basis curve is not C2. Nevertheless, it's OK to use it on portion where the curve is C2)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_OffsetCurve::D2),
             R"#(Warning! This should not be called if the continuity of the basis curve is not C3. Nevertheless, it's OK to use it on portion where the curve is C3)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_OffsetCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_OffsetCurve::D3),
             R"#(Warning! This should not be called if the continuity of the basis curve is not C4. Nevertheless, it's OK to use it on portion where the curve is C4)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_OffsetCurve::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Geom2d_OffsetCurve::*)( const Standard_Real , const Standard_Integer ) const>(&Geom2d_OffsetCurve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Warning! this should not be called raises UndefunedDerivative if the continuity of the basis curve is not CN+1. Nevertheless, it's OK to use it on portion where the curve is CN+1 raises RangeError if N < 1. raises NotImplemented if N > 3. The following functions compute the value and derivatives on the offset curve and returns the derivatives on the basis curve too. The computation of the value and derivatives on the basis curve are used to evaluate the offset curve Warnings : The exception UndefinedValue or UndefinedDerivative is raised if it is not possible to compute a unique offset direction.)#"  , py::arg("U"),  py::arg("N"))
        .def("FirstParameter",
             (Standard_Real (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::FirstParameter),
             R"#(Returns the value of the first parameter of this offset curve. The first parameter corresponds to the start point of the curve. Note: the first and last parameters of this offset curve are also the ones of its basis curve.)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::LastParameter),
             R"#(Returns the value of the last parameter of this offset curve. The last parameter corresponds to the end point. Note: the first and last parameters of this offset curve are also the ones of its basis curve.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Boolean (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::IsClosed),
             R"#(Returns True if the distance between the start point and the end point of the curve is lower or equal to Resolution from package gp.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom2d_OffsetCurve::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2d_OffsetCurve::*)( const Standard_Integer ) const>(&Geom2d_OffsetCurve::IsCN),
             R"#(Is the order of continuity of the curve N ? Warnings : This method answer True if the continuity of the basis curve is N + 1. We suppose in this class that a normal direction to the basis curve (used to compute the offset curve) is defined at any point on the basis curve. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Boolean (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::IsPeriodic),
             R"#(Is the parametrization of a curve is periodic ? If the basis curve is a circle or an ellipse the corresponding OffsetCurve is periodic. If the basis curve can't be periodic (for example BezierCurve) the OffsetCurve can't be periodic.)#" )
        .def("Period",
             (Standard_Real (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::Period),
             R"#(Returns the period of this offset curve, i.e. the period of the basis curve of this offset curve. Exceptions Standard_NoSuchObject if the basis curve is not periodic.)#" )
        .def("Transform",
             (void (Geom2d_OffsetCurve::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_OffsetCurve::*)( const gp_Trsf2d & ) >(&Geom2d_OffsetCurve::Transform),
             R"#(Applies the transformation T to this offset curve. Note: the basis curve is also modified.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom2d_OffsetCurve::*)( const Standard_Real , const gp_Trsf2d & ) const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)( const Standard_Real , const gp_Trsf2d & ) const>(&Geom2d_OffsetCurve::TransformedParameter),
             R"#(Returns the parameter on the transformed curve for the transform of the point of parameter U on <me>.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom2d_OffsetCurve::*)( const gp_Trsf2d & ) const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)( const gp_Trsf2d & ) const>(&Geom2d_OffsetCurve::ParametricTransformation),
             R"#(Returns a coefficient to compute the parameter on the transformed curve for the transform of the point on <me>.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_OffsetCurve::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::Copy),
             R"#(Creates a new object, which is a copy of this offset curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_OffsetCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_OffsetCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_VectorWithMagnitude ,opencascade::handle<Geom2d_VectorWithMagnitude> , Geom2d_Vector>>(m.attr("Geom2d_VectorWithMagnitude"))
    // constructors
    // custom constructors
    // methods
        .def("Magnitude",
             (Standard_Real (Geom2d_VectorWithMagnitude::*)() const) static_cast<Standard_Real (Geom2d_VectorWithMagnitude::*)() const>(&Geom2d_VectorWithMagnitude::Magnitude),
             R"#(Returns the magnitude of <me>.)#" )
        .def("SquareMagnitude",
             (Standard_Real (Geom2d_VectorWithMagnitude::*)() const) static_cast<Standard_Real (Geom2d_VectorWithMagnitude::*)() const>(&Geom2d_VectorWithMagnitude::SquareMagnitude),
             R"#(Returns the square magnitude of <me>.)#" )
        .def("Crossed",
             (Standard_Real (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) const) static_cast<Standard_Real (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) const>(&Geom2d_VectorWithMagnitude::Crossed),
             R"#(Computes the cross product between <me> and Other <me> ^ Other. A new vector is returned.)#"  , py::arg("Other"))
        .def("Transform",
             (void (Geom2d_VectorWithMagnitude::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const gp_Trsf2d & ) >(&Geom2d_VectorWithMagnitude::Transform),
             R"#(Applies the transformation T to this vector.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_VectorWithMagnitude::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_VectorWithMagnitude::*)() const>(&Geom2d_VectorWithMagnitude::Copy),
             R"#(Creates a new object which is a copy of this vector.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_VectorWithMagnitude::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_VectorWithMagnitude::*)() const>(&Geom2d_VectorWithMagnitude::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_VectorWithMagnitude::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) >(&Geom2d_VectorWithMagnitude::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__add__",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) const>(&Geom2d_VectorWithMagnitude::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__pow__",
             (Standard_Real (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) const) static_cast<Standard_Real (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) const>(&Geom2d_VectorWithMagnitude::operator^),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__itruediv__",
             (void (Geom2d_VectorWithMagnitude::*)( const Standard_Real ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const Standard_Real ) >(&Geom2d_VectorWithMagnitude::operator/=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__truediv__",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const Standard_Real ) const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const Standard_Real ) const>(&Geom2d_VectorWithMagnitude::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__imul__",
             (void (Geom2d_VectorWithMagnitude::*)( const Standard_Real ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const Standard_Real ) >(&Geom2d_VectorWithMagnitude::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__isub__",
             (void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) >(&Geom2d_VectorWithMagnitude::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__sub__",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> & ) const>(&Geom2d_VectorWithMagnitude::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_BSplineCurve ,opencascade::handle<Geom2d_BSplineCurve> , Geom2d_BoundedCurve>>(m.attr("Geom2d_BSplineCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Reverse",
             (void (Geom2d_BSplineCurve::*)() ) static_cast<void (Geom2d_BSplineCurve::*)() >(&Geom2d_BSplineCurve::Reverse),
             R"#(Reverses the orientation of this BSpline curve. As a result - the knots and poles tables are modified; - the start point of the initial curve becomes the end point of the reversed curve; - the end point of the initial curve becomes the start point of the reversed curve.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_BSplineCurve::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_BSplineCurve::*)( const Standard_Real ) const>(&Geom2d_BSplineCurve::ReversedParameter),
             R"#(Computes the parameter on the reversed curve for the point of parameter U on this BSpline curve. The returned value is: UFirst + ULast - U, where UFirst and ULast are the values of the first and last parameters of this BSpline curve.)#"  , py::arg("U"))
        .def("IsCN",
             (Standard_Boolean (Geom2d_BSplineCurve::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2d_BSplineCurve::*)( const Standard_Integer ) const>(&Geom2d_BSplineCurve::IsCN),
             R"#(Returns true if the degree of continuity of this BSpline curve is at least N. A BSpline curve is at least GeomAbs_C0. Exceptions Standard_RangeError if N is negative.)#"  , py::arg("N"))
        .def("IsClosed",
             (Standard_Boolean (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Boolean (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::IsClosed),
             R"#(Returns true if the distance between the first point and the last point of the curve is lower or equal to Resolution from package gp. Warnings : The first and the last point can be different from the first pole and the last pole of the curve.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Boolean (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::IsPeriodic),
             R"#(Returns True if the curve is periodic.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_BSplineCurve::*)() const) static_cast<GeomAbs_Shape (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::Continuity),
             R"#(Returns the global continuity of the curve : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, CN : the order of continuity is infinite. For a B-spline curve of degree d if a knot Ui has a multiplicity p the B-spline curve is only Cd-p continuous at Ui. So the global continuity of the curve can't be greater than Cd-p where p is the maximum multiplicity of the interior Knots. In the interior of a knot span the curve is infinitely continuously differentiable.)#" )
        .def("D0",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real , gp_Pnt2d & ) const>(&Geom2d_BSplineCurve::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Geom2d_BSplineCurve::D1),
             R"#(Raised if the continuity of the curve is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_BSplineCurve::D2),
             R"#(Raised if the continuity of the curve is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_BSplineCurve::D3),
             R"#(For this BSpline curve, computes - the point P of parameter U, or - the point P and one or more of the following values: - V1, the first derivative vector, - V2, the second derivative vector, - V3, the third derivative vector. Warning On a point where the continuity of the curve is not the one requested, these functions impact the part defined by the parameter with a value greater than U, i.e. the part of the curve to the "right" of the singularity. Raises UndefinedDerivative if the continuity of the curve is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_BSplineCurve::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Geom2d_BSplineCurve::*)( const Standard_Real , const Standard_Integer ) const>(&Geom2d_BSplineCurve::DN),
             R"#(For the point of parameter U of this BSpline curve, computes the vector corresponding to the Nth derivative. Warning On a point where the continuity of the curve is not the one requested, this function impacts the part defined by the parameter with a value greater than U, i.e. the part of the curve to the "right" of the singularity. Raises UndefinedDerivative if the continuity of the curve is not CN. RangeError if N < 1. The following functions computes the point of parameter U and the derivatives at this point on the B-spline curve arc defined between the knot FromK1 and the knot ToK2. U can be out of bounds [Knot (FromK1), Knot (ToK2)] but for the computation we only use the definition of the curve between these two knots. This method is useful to compute local derivative, if the order of continuity of the whole curve is not greater enough. Inside the parametric domain Knot (FromK1), Knot (ToK2) the evaluations are the same as if we consider the whole definition of the curve. Of course the evaluations are different outside this parametric domain.)#"  , py::arg("U"),  py::arg("N"))
        .def("EndPoint",
             (gp_Pnt2d (Geom2d_BSplineCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::EndPoint),
             R"#(Returns the last point of the curve. Warnings : The last point of the curve is different from the last pole of the curve if the multiplicity of the last knot is lower than Degree.)#" )
        .def("FirstParameter",
             (Standard_Real (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Real (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::FirstParameter),
             R"#(Computes the parametric value of the start point of the curve. It is a knot value.)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Real (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::LastParameter),
             R"#(Computes the parametric value of the end point of the curve. It is a knot value.)#" )
        .def("StartPoint",
             (gp_Pnt2d (Geom2d_BSplineCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::StartPoint),
             R"#(Returns the start point of the curve. Warnings : This point is different from the first pole of the curve if the multiplicity of the first knot is lower than Degree.)#" )
        .def("Transform",
             (void (Geom2d_BSplineCurve::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_BSplineCurve::*)( const gp_Trsf2d & ) >(&Geom2d_BSplineCurve::Transform),
             R"#(Applies the transformation T to this BSpline curve.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_BSplineCurve::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::Copy),
             R"#(Creates a new object which is a copy of this BSpline curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_BSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_BSplineCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_BezierCurve ,opencascade::handle<Geom2d_BezierCurve> , Geom2d_BoundedCurve>>(m.attr("Geom2d_BezierCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Reverse",
             (void (Geom2d_BezierCurve::*)() ) static_cast<void (Geom2d_BezierCurve::*)() >(&Geom2d_BezierCurve::Reverse),
             R"#(Reverses the direction of parametrization of <me> Value (NewU) = Value (1 - OldU))#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_BezierCurve::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_BezierCurve::*)( const Standard_Real ) const>(&Geom2d_BezierCurve::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("IsClosed",
             (Standard_Boolean (Geom2d_BezierCurve::*)() const) static_cast<Standard_Boolean (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::IsClosed),
             R"#(Returns True if the distance between the first point and the last point of the curve is lower or equal to the Resolution from package gp.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom2d_BezierCurve::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2d_BezierCurve::*)( const Standard_Integer ) const>(&Geom2d_BezierCurve::IsCN),
             R"#(Continuity of the curve, returns True.)#"  , py::arg("N"))
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_BezierCurve::*)() const) static_cast<Standard_Boolean (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::IsPeriodic),
             R"#(Returns False. A BezierCurve cannot be periodic in this package)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_BezierCurve::*)() const) static_cast<GeomAbs_Shape (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::Continuity),
             R"#(Returns GeomAbs_CN, which is the continuity of any Bezier curve.)#" )
        .def("D0",
             (void (Geom2d_BezierCurve::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Real , gp_Pnt2d & ) const>(&Geom2d_BezierCurve::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_BezierCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Geom2d_BezierCurve::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_BezierCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_BezierCurve::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_BezierCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_BezierCurve::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_BezierCurve::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Geom2d_BezierCurve::*)( const Standard_Real , const Standard_Integer ) const>(&Geom2d_BezierCurve::DN),
             R"#(For this Bezier curve, computes - the point P of parameter U, or - the point P and one or more of the following values: - V1, the first derivative vector, - V2, the second derivative vector, - V3, the third derivative vector. Note: the parameter U can be outside the bounds of the curve. Raises RangeError if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("EndPoint",
             (gp_Pnt2d (Geom2d_BezierCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::EndPoint),
             R"#(Returns the end point or start point of this Bezier curve.)#" )
        .def("FirstParameter",
             (Standard_Real (Geom2d_BezierCurve::*)() const) static_cast<Standard_Real (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::FirstParameter),
             R"#(Returns the value of the first parameter of this Bezier curve. This is 0.0, which gives the start point of this Bezier curve.)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_BezierCurve::*)() const) static_cast<Standard_Real (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::LastParameter),
             R"#(Returns the value of the last parameter of this Bezier curve. This is 1.0, which gives the end point of this Bezier curve.)#" )
        .def("Poles",
             (const TColgp_Array1OfPnt2d & (Geom2d_BezierCurve::*)() const) static_cast<const TColgp_Array1OfPnt2d & (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::Poles),
             R"#(Returns all the poles of the curve.)#" )
        .def("StartPoint",
             (gp_Pnt2d (Geom2d_BezierCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::StartPoint),
             R"#(Returns Value (U=1), it is the first control point of the curve.)#" )
        .def("Weights",
             (const TColStd_Array1OfReal * (Geom2d_BezierCurve::*)() const) static_cast<const TColStd_Array1OfReal * (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::Weights),
             R"#(Returns all the weights of the curve.)#" )
        .def("Transform",
             (void (Geom2d_BezierCurve::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_BezierCurve::*)( const gp_Trsf2d & ) >(&Geom2d_BezierCurve::Transform),
             R"#(Applies the transformation T to this Bezier curve.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_BezierCurve::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::Copy),
             R"#(Creates a new object which is a copy of this Bezier curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_BezierCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_BezierCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Circle ,opencascade::handle<Geom2d_Circle> , Geom2d_Conic>>(m.attr("Geom2d_Circle"))
    // constructors
    // custom constructors
    // methods
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Circle::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_Circle::*)( const Standard_Real ) const>(&Geom2d_Circle::ReversedParameter),
             R"#(Computes the parameter on the reversed circle for the point of parameter U on this circle. For a circle, the returned value is: 2.*Pi - U.)#"  , py::arg("U"))
        .def("Eccentricity",
             (Standard_Real (Geom2d_Circle::*)() const) static_cast<Standard_Real (Geom2d_Circle::*)() const>(&Geom2d_Circle::Eccentricity),
             R"#(Returns 0., which is the eccentricity of any circle.)#" )
        .def("FirstParameter",
             (Standard_Real (Geom2d_Circle::*)() const) static_cast<Standard_Real (Geom2d_Circle::*)() const>(&Geom2d_Circle::FirstParameter),
             R"#(Returns 0.0)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_Circle::*)() const) static_cast<Standard_Real (Geom2d_Circle::*)() const>(&Geom2d_Circle::LastParameter),
             R"#(Returns 2*PI.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom2d_Circle::*)() const) static_cast<Standard_Boolean (Geom2d_Circle::*)() const>(&Geom2d_Circle::IsClosed),
             R"#(returns True.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_Circle::*)() const) static_cast<Standard_Boolean (Geom2d_Circle::*)() const>(&Geom2d_Circle::IsPeriodic),
             R"#(returns True. The period of a circle is 2.*Pi.)#" )
        .def("D0",
             (void (Geom2d_Circle::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Geom2d_Circle::*)( const Standard_Real , gp_Pnt2d & ) const>(&Geom2d_Circle::D0),
             R"#(Returns in P the point of parameter U. P = C + R * Cos (U) * XDir + R * Sin (U) * YDir where C is the center of the circle , XDir the XDirection and YDir the YDirection of the circle's local coordinate system.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Circle::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Circle::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Geom2d_Circle::D1),
             R"#(Returns the point P of parameter U and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Circle::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Circle::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Circle::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Circle::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Circle::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Circle::D3),
             R"#(Returns the point P of parameter u, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Circle::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Geom2d_Circle::*)( const Standard_Real , const Standard_Integer ) const>(&Geom2d_Circle::DN),
             R"#(For the point of parameter U of this circle, computes the vector corresponding to the Nth derivative. Exceptions: Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_Circle::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_Circle::*)( const gp_Trsf2d & ) >(&Geom2d_Circle::Transform),
             R"#(Applies the transformation T to this circle.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Circle::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Circle::*)() const>(&Geom2d_Circle::Copy),
             R"#(Creates a new object which is a copy of this circle.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Circle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Circle::*)() const>(&Geom2d_Circle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Circle::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Ellipse ,opencascade::handle<Geom2d_Ellipse> , Geom2d_Conic>>(m.attr("Geom2d_Ellipse"))
    // constructors
    // custom constructors
    // methods
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Ellipse::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_Ellipse::*)( const Standard_Real ) const>(&Geom2d_Ellipse::ReversedParameter),
             R"#(Computes the parameter on the reversed ellipse for the point of parameter U on this ellipse. For an ellipse, the returned value is: 2.*Pi - U.)#"  , py::arg("U"))
        .def("Eccentricity",
             (Standard_Real (Geom2d_Ellipse::*)() const) static_cast<Standard_Real (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::Eccentricity),
             R"#(Returns the eccentricity of the ellipse between 0.0 and 1.0 If f is the distance between the center of the ellipse and the Focus1 then the eccentricity e = f / MajorRadius. Returns 0 if MajorRadius = 0)#" )
        .def("FirstParameter",
             (Standard_Real (Geom2d_Ellipse::*)() const) static_cast<Standard_Real (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::FirstParameter),
             R"#(Returns the value of the first parameter of this ellipse. This is 0.0, which gives the start point of this ellipse. The start point and end point of an ellipse are coincident.)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_Ellipse::*)() const) static_cast<Standard_Real (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::LastParameter),
             R"#(Returns the value of the last parameter of this ellipse. This is 2.*Pi, which gives the end point of this ellipse. The start point and end point of an ellipse are coincident.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom2d_Ellipse::*)() const) static_cast<Standard_Boolean (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::IsClosed),
             R"#(return True.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_Ellipse::*)() const) static_cast<Standard_Boolean (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::IsPeriodic),
             R"#(return True.)#" )
        .def("D0",
             (void (Geom2d_Ellipse::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Geom2d_Ellipse::*)( const Standard_Real , gp_Pnt2d & ) const>(&Geom2d_Ellipse::D0),
             R"#(Returns in P the point of parameter U. P = C + MajorRadius * Cos (U) * XDir + MinorRadius * Sin (U) * YDir where C is the center of the ellipse , XDir the direction of the "XAxis" and "YDir" the "YAxis" of the ellipse.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Ellipse::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Ellipse::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Geom2d_Ellipse::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Ellipse::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Ellipse::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Ellipse::D2),
             R"#(Returns the point P of parameter U. The vectors V1 and V2 are the first and second derivatives at this point.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Ellipse::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Ellipse::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Ellipse::D3),
             R"#(Returns the point P of parameter U, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Ellipse::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Geom2d_Ellipse::*)( const Standard_Real , const Standard_Integer ) const>(&Geom2d_Ellipse::DN),
             R"#(For the point of parameter U of this ellipse, computes the vector corresponding to the Nth derivative. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_Ellipse::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_Ellipse::*)( const gp_Trsf2d & ) >(&Geom2d_Ellipse::Transform),
             R"#(Applies the transformation T to this ellipse.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Ellipse::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::Copy),
             R"#(Creates a new object which is a copy of this ellipse.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Ellipse::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Ellipse::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Hyperbola ,opencascade::handle<Geom2d_Hyperbola> , Geom2d_Conic>>(m.attr("Geom2d_Hyperbola"))
    // constructors
    // custom constructors
    // methods
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Hyperbola::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_Hyperbola::*)( const Standard_Real ) const>(&Geom2d_Hyperbola::ReversedParameter),
             R"#(Computes the parameter on the reversed hyperbola, for the point of parameter U on this hyperbola. For a hyperbola, the returned value is -U.)#"  , py::arg("U"))
        .def("FirstParameter",
             (Standard_Real (Geom2d_Hyperbola::*)() const) static_cast<Standard_Real (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::FirstParameter),
             R"#(Returns RealFirst from Standard.)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_Hyperbola::*)() const) static_cast<Standard_Real (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::LastParameter),
             R"#(returns RealLast from Standard.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom2d_Hyperbola::*)() const) static_cast<Standard_Boolean (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::IsClosed),
             R"#(Returns False.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_Hyperbola::*)() const) static_cast<Standard_Boolean (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::IsPeriodic),
             R"#(return False for an hyperbola.)#" )
        .def("Eccentricity",
             (Standard_Real (Geom2d_Hyperbola::*)() const) static_cast<Standard_Real (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Eccentricity),
             R"#(Returns the excentricity of the hyperbola (e > 1). If f is the distance between the location of the hyperbola and the Focus1 then the eccentricity e = f / MajorRadius. raised if MajorRadius = 0.0)#" )
        .def("D0",
             (void (Geom2d_Hyperbola::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Geom2d_Hyperbola::*)( const Standard_Real , gp_Pnt2d & ) const>(&Geom2d_Hyperbola::D0),
             R"#(Returns in P the point of parameter U. P = C + MajorRadius * Cosh (U) * XDir + MinorRadius * Sinh (U) * YDir where C is the center of the hyperbola , XDir the XDirection and YDir the YDirection of the hyperbola's local coordinate system.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Hyperbola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Hyperbola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Geom2d_Hyperbola::D1),
             R"#(Returns the point P of parameter U and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Hyperbola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Hyperbola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Hyperbola::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Hyperbola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Hyperbola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Hyperbola::D3),
             R"#(Returns the point P of parameter U, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Hyperbola::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Geom2d_Hyperbola::*)( const Standard_Real , const Standard_Integer ) const>(&Geom2d_Hyperbola::DN),
             R"#(For the point of parameter U of this hyperbola, computes the vector corresponding to the Nth derivative. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_Hyperbola::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_Hyperbola::*)( const gp_Trsf2d & ) >(&Geom2d_Hyperbola::Transform),
             R"#(Applies the transformation T to this hyperbola.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Hyperbola::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Copy),
             R"#(Creates a new object which is a copy of this hyperbola.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Hyperbola::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Hyperbola::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_Parabola ,opencascade::handle<Geom2d_Parabola> , Geom2d_Conic>>(m.attr("Geom2d_Parabola"))
    // constructors
    // custom constructors
    // methods
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Parabola::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_Parabola::*)( const Standard_Real ) const>(&Geom2d_Parabola::ReversedParameter),
             R"#(Computes the parameter on the reversed parabola for the point of parameter U on this parabola. For a parabola, the returned value is -U.)#"  , py::arg("U"))
        .def("FirstParameter",
             (Standard_Real (Geom2d_Parabola::*)() const) static_cast<Standard_Real (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::FirstParameter),
             R"#(Returns RealFirst from Standard.)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_Parabola::*)() const) static_cast<Standard_Real (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::LastParameter),
             R"#(Returns RealLast from Standard.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom2d_Parabola::*)() const) static_cast<Standard_Boolean (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::IsClosed),
             R"#(Returns False)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_Parabola::*)() const) static_cast<Standard_Boolean (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::IsPeriodic),
             R"#(Returns False)#" )
        .def("Eccentricity",
             (Standard_Real (Geom2d_Parabola::*)() const) static_cast<Standard_Real (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::Eccentricity),
             R"#(Returns the eccentricity e = 1.0)#" )
        .def("D0",
             (void (Geom2d_Parabola::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Geom2d_Parabola::*)( const Standard_Real , gp_Pnt2d & ) const>(&Geom2d_Parabola::D0),
             R"#(Returns in P the point of parameter U. If U = 0 the returned point is the origin of the XAxis and the YAxis of the parabola and it is the vertex of the parabola. P = S + F * (U * U * XDir + * U * YDir) where S is the vertex of the parabola, XDir the XDirection and YDir the YDirection of the parabola's local coordinate system.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Parabola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Parabola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Geom2d_Parabola::D1),
             R"#(Returns the point P of parameter U and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Parabola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Parabola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Parabola::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Parabola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_Parabola::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_Parabola::D3),
             R"#(Returns the point P of parameter U, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Parabola::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Geom2d_Parabola::*)( const Standard_Real , const Standard_Integer ) const>(&Geom2d_Parabola::DN),
             R"#(For the point of parameter U of this parabola, computes the vector corresponding to the Nth derivative. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_Parabola::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_Parabola::*)( const gp_Trsf2d & ) >(&Geom2d_Parabola::Transform),
             R"#(Applies the transformation T to this parabola.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom2d_Parabola::*)( const Standard_Real , const gp_Trsf2d & ) const) static_cast<Standard_Real (Geom2d_Parabola::*)( const Standard_Real , const gp_Trsf2d & ) const>(&Geom2d_Parabola::TransformedParameter),
             R"#(Computes the parameter on the transformed parabola, for the point of parameter U on this parabola. For a parabola, the returned value is equal to U multiplied by the scale factor of transformation T.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom2d_Parabola::*)( const gp_Trsf2d & ) const) static_cast<Standard_Real (Geom2d_Parabola::*)( const gp_Trsf2d & ) const>(&Geom2d_Parabola::ParametricTransformation),
             R"#(Returns a coefficient to compute the parameter on the transformed curve for the transform of the point on <me>.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Parabola::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::Copy),
             R"#(Creates a new object, which is a copy of this parabola.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Parabola::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Parabola::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2d_TrimmedCurve ,opencascade::handle<Geom2d_TrimmedCurve> , Geom2d_BoundedCurve>>(m.attr("Geom2d_TrimmedCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Reverse",
             (void (Geom2d_TrimmedCurve::*)() ) static_cast<void (Geom2d_TrimmedCurve::*)() >(&Geom2d_TrimmedCurve::Reverse),
             R"#(Changes the direction of parametrization of <me>. The first and the last parametric values are modified. The "StartPoint" of the initial curve becomes the "EndPoint" of the reversed curve and the "EndPoint" of the initial curve becomes the "StartPoint" of the reversed curve. Example - If the trimmed curve is defined by: - a basis curve whose parameter range is [ 0.,1. ], and - the two trim values U1 (first parameter) and U2 (last parameter), the reversed trimmed curve is defined by: - the reversed basis curve, whose parameter range is still [ 0.,1. ], and - the two trim values 1. - U2 (first parameter) and 1. - U1 (last parameter).)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_TrimmedCurve::*)( const Standard_Real ) const) static_cast<Standard_Real (Geom2d_TrimmedCurve::*)( const Standard_Real ) const>(&Geom2d_TrimmedCurve::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_TrimmedCurve::*)() const) static_cast<GeomAbs_Shape (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::Continuity),
             R"#(Returns the global continuity of the basis curve of this trimmed curve. C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, CN : the order of continuity is infinite.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom2d_TrimmedCurve::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2d_TrimmedCurve::*)( const Standard_Integer ) const>(&Geom2d_TrimmedCurve::IsCN),
             R"#(--- Purpose Returns True if the order of continuity of the trimmed curve is N. A trimmed curve is at least "C0" continuous. Warnings : The continuity of the trimmed curve can be greater than the continuity of the basis curve because you consider only a part of the basis curve. Raised if N < 0.)#"  , py::arg("N"))
        .def("EndPoint",
             (gp_Pnt2d (Geom2d_TrimmedCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::EndPoint),
             R"#(Returns the end point of <me>. This point is the evaluation of the curve for the "LastParameter".)#" )
        .def("FirstParameter",
             (Standard_Real (Geom2d_TrimmedCurve::*)() const) static_cast<Standard_Real (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::FirstParameter),
             R"#(Returns the value of the first parameter of <me>. The first parameter is the parameter of the "StartPoint" of the trimmed curve.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom2d_TrimmedCurve::*)() const) static_cast<Standard_Boolean (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::IsClosed),
             R"#(Returns True if the distance between the StartPoint and the EndPoint is lower or equal to Resolution from package gp.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_TrimmedCurve::*)() const) static_cast<Standard_Boolean (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::IsPeriodic),
             R"#(Always returns FALSE (independently of the type of basis curve).)#" )
        .def("Period",
             (Standard_Real (Geom2d_TrimmedCurve::*)() const) static_cast<Standard_Real (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::Period),
             R"#(Returns the period of the basis curve of this trimmed curve. Exceptions Standard_NoSuchObject if the basis curve is not periodic.)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_TrimmedCurve::*)() const) static_cast<Standard_Real (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::LastParameter),
             R"#(Returns the value of the last parameter of <me>. The last parameter is the parameter of the "EndPoint" of the trimmed curve.)#" )
        .def("StartPoint",
             (gp_Pnt2d (Geom2d_TrimmedCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::StartPoint),
             R"#(Returns the start point of <me>. This point is the evaluation of the curve from the "FirstParameter". value and derivatives Warnings : The returned derivatives have the same orientation as the derivatives of the basis curve.)#" )
        .def("D0",
             (void (Geom2d_TrimmedCurve::*)( const Standard_Real , gp_Pnt2d & ) const) static_cast<void (Geom2d_TrimmedCurve::*)( const Standard_Real , gp_Pnt2d & ) const>(&Geom2d_TrimmedCurve::D0),
             R"#(If the basis curve is an OffsetCurve sometimes it is not possible to do the evaluation of the curve at the parameter U (see class OffsetCurve).)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_TrimmedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_TrimmedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) const>(&Geom2d_TrimmedCurve::D1),
             R"#(Raised if the continuity of the curve is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_TrimmedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_TrimmedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_TrimmedCurve::D2),
             R"#(Raised if the continuity of the curve is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_TrimmedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const) static_cast<void (Geom2d_TrimmedCurve::*)( const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) const>(&Geom2d_TrimmedCurve::D3),
             R"#(Raised if the continuity of the curve is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_TrimmedCurve::*)( const Standard_Real , const Standard_Integer ) const) static_cast<gp_Vec2d (Geom2d_TrimmedCurve::*)( const Standard_Real , const Standard_Integer ) const>(&Geom2d_TrimmedCurve::DN),
             R"#(For the point of parameter U of this trimmed curve, computes the vector corresponding to the Nth derivative. Warning The returned derivative vector has the same orientation as the derivative vector of the basis curve, even if the trimmed curve does not have the same orientation as the basis curve. Exceptions Standard_RangeError if N is less than 1. geometric transformations)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_TrimmedCurve::*)( const gp_Trsf2d & ) ) static_cast<void (Geom2d_TrimmedCurve::*)( const gp_Trsf2d & ) >(&Geom2d_TrimmedCurve::Transform),
             R"#(Applies the transformation T to this trimmed curve. Warning The basis curve is also modified.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom2d_TrimmedCurve::*)( const Standard_Real , const gp_Trsf2d & ) const) static_cast<Standard_Real (Geom2d_TrimmedCurve::*)( const Standard_Real , const gp_Trsf2d & ) const>(&Geom2d_TrimmedCurve::TransformedParameter),
             R"#(Returns the parameter on the transformed curve for the transform of the point of parameter U on <me>.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom2d_TrimmedCurve::*)( const gp_Trsf2d & ) const) static_cast<Standard_Real (Geom2d_TrimmedCurve::*)( const gp_Trsf2d & ) const>(&Geom2d_TrimmedCurve::ParametricTransformation),
             R"#(Returns a coefficient to compute the parameter on the transformed curve for the transform of the point on <me>.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_TrimmedCurve::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::Copy),
             R"#(Creates a new object, which is a copy of this trimmed curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_TrimmedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_TrimmedCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Geom2d_Ellipse.hxx
// ./opencascade/Geom2d_Parabola.hxx
// ./opencascade/Geom2d_Conic.hxx
// ./opencascade/Geom2d_BoundedCurve.hxx
// ./opencascade/Geom2d_Line.hxx
// ./opencascade/Geom2d_TrimmedCurve.hxx
// ./opencascade/Geom2d_OffsetCurve.hxx
// ./opencascade/Geom2d_Curve.hxx
// ./opencascade/Geom2d_Direction.hxx
// ./opencascade/Geom2d_UndefinedValue.hxx
// ./opencascade/Geom2d_VectorWithMagnitude.hxx
// ./opencascade/Geom2d_Circle.hxx
// ./opencascade/Geom2d_BSplineCurve.hxx
// ./opencascade/Geom2d_Point.hxx
// ./opencascade/Geom2d_Geometry.hxx
// ./opencascade/Geom2d_CartesianPoint.hxx
// ./opencascade/Geom2d_Vector.hxx
// ./opencascade/Geom2d_Transformation.hxx
// ./opencascade/Geom2d_BezierCurve.hxx
// ./opencascade/Geom2d_UndefinedDerivative.hxx
// ./opencascade/Geom2d_AxisPlacement.hxx
// ./opencascade/Geom2d_Hyperbola.hxx

// Additional functions

// operators

// register typdefs


// exceptions
register_occ_exception<Geom2d_UndefinedDerivative>(m, "Geom2d_UndefinedDerivative");
register_occ_exception<Geom2d_UndefinedValue>(m, "Geom2d_UndefinedValue");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
